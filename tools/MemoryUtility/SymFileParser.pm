use strict;
BEGIN{push(@INC,'../')};
use CommonUtility; 

package Region;
use constant Size        => 1;
use constant VMA         => 2;
use constant LMA         => 3;
use constant Offsets     => 4;
use constant Align       => 5;
use constant Attr        => 6;

package SymFileParser;

my $g_SYMPath;
my %symbol;
my $CACHED_DUMMY_END_size;
my $CACHED_DUMMY_END_base;

# Execution Region
my %g_ExeRegion;
my %g_ExeRegionLookUpTable; # RegionName -> Index
my %Attr;

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

#****************************************************************************
# subroutine:  SYM_die
# sample code: (message, __FILE__, __LINE__)
# input:       $error_msg, $file, $line_no
#****************************************************************************
sub SYM_die
{
    my ($error_msg, $file, $line_no) = (@_);
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'SYM');    
}
#****************************************************************************
# subroutine:  ParseSYM
# input:  SYM Path string     
# output: x     
#****************************************************************************
sub ParseSYM
{
    ($g_SYMPath) = (@_);

	%symbol = undef;
	%g_ExeRegion = undef;
	%g_ExeRegionLookUpTable = undef;
	%Attr = undef;
	$CACHED_DUMMY_END_size = 0;
	$CACHED_DUMMY_END_size = 0;

    if(defined $g_SYMPath and -e $g_SYMPath)
    {
        open (FILE_HANDLE, "<$g_SYMPath") or &SYM_die("$g_SYMPath: file error!", __FILE__, __LINE__);
        my $strPreExeRegionName = undef;
        my $bBegin = 0; # 0= Program Header: begin, 1= Sections begin, 2=SYMBOL TABLE: begin
        while (<FILE_HANDLE>) 
        {
            my $strLine = $_;
            $bBegin = 1 if($strLine =~/^Sections:$/);
            $bBegin = 2 if($strLine =~/^SYMBOL TABLE:$/);
            if ($bBegin == 1 and 
                $strLine =~ /\s*(\d+)\s+(\S+)\s+(\w+)\s+(\w+)\s+(\w+)\s+(\w+)\s+(\S+)/) 
            {   #  0 BL_GFH_SECTION 00000170  7000a000  7000a000  00002000  2**2
				$g_ExeRegion{$1}= [$2, $3, $4, $5, $6, $7];
                $g_ExeRegionLookUpTable{$2} = $1;
                $strPreExeRegionName = $2;
            }           
            &ParseInputSection($strPreExeRegionName, $strLine) if(defined $strPreExeRegionName);

            if ($bBegin ==2 and $strLine =~ /CACHED_DUMMY_END/)
            {#f3fc0000 g       *ABS*    00000000 Image$$CACHED_DUMMY_END$$Base
				if(/^(\w+)\s+(\w+)\s+(.*)\s+(\w+)/)
				{
					$CACHED_DUMMY_END_size = hex($4);
					$CACHED_DUMMY_END_base = "0x".$1;
				}			
			}
            elsif ($bBegin ==2 and 
                   $strLine =~ /^(\w+)\s+(\w+)\s+(\w+)\s+(\S+)\s+(\w+)\s+(\w+)$/)
            {#7000a000 l    d  BL_GFH_SECTION   00000000 BL_GFH_SECTION
				next if ($2 ne "g");
				next if (($3 ne "F") && ($3 ne "O"));
				my $symbol_name = $6;
				my $base_address = $1;
				my $execution_region = $4;
				my $size = $5;
				$symbol{$symbol_name} = [$1, $2, $3, $4, $5];
			}
			
        }
        close FILE_HANDLE;
    }
    else
    {
        &SYM_die("SYM Path($g_SYMPath) doesn't exist", __FILE__, __LINE__);   
    }    
}

#****************************************************************************
# subroutine:  Get_CACHED_DUMMY_END_Size
# input:       N/A
# output:      size of CACHED_DUMMY_END region
#****************************************************************************
sub Get_CACHED_DUMMY_END_Size
{
	return $CACHED_DUMMY_END_size;
}

#****************************************************************************
# subroutine:  Get_CACHED_DUMMY_END_Base
# input:       N/A
# output:      base address of CACHED_DUMMY_END region
#****************************************************************************
sub Get_CACHED_DUMMY_END_Base
{
	return $CACHED_DUMMY_END_base;
}

#****************************************************************************
# subroutine:  StoreIntoTempFile
# input:       N/A
# output:      temp files which contain perl data structure
#****************************************************************************
use Storable qw/lock_nstore/;
sub StoreIntoTempFile
{
	my ($strPath) = @_;
	my $file = $strPath."\\SymParser_Temp.dat";
	my %tempfile;

	$tempfile{"execution_region"} = \%g_ExeRegion;
	$tempfile{"symbol_info"} = \%symbol;

	lock_nstore \%tempfile, $file;
}

#****************************************************************************
# subroutine:  ParseInputSection used by ParseSYM
#              to parse Execution Region Attribute
# input:  1. Execution Name, 2. $strLine
# output: x     
#****************************************************************************
sub ParseInputSection
{
    my ($strExeRegionName, $strLine) = @_;
    return if(!defined $strExeRegionName);    ### setting for $strExeRegionName = undef

    my $attr = undef;
    chomp($strLine);
    if($strLine =~ /\s+(.*)/)
    {
    #	 CONTENTS, ALLOC, LOAD, READONLY, DATA
        $Attr{$strExeRegionName} = $1;
    }
}

#****************************************************************************
# subroutine:  ListAllExeRegion
# input:       N/A
# output:      Execution Region List 
#****************************************************************************
sub ListAllExeRegion
{
	my @k = keys %g_ExeRegion;
	my @ExeRegion;
    for (my $i = 0; $i < $#k; $i++)
	{
		push(@ExeRegion,$g_ExeRegion{$i}->[0]);
	}
	return \@ExeRegion;
}

#****************************************************************************
# subroutine:  GetExeRegionInfo
# input:       Execution Region Name, $nOption
#              $nOption = Region::VMA or Region::LMA or Region::Size 
#                         or Region::Offsets or Region::Align or Region::Attr
# output:      string of corresponding Execution Region Infomation 
#****************************************************************************
sub GetExeRegionInfo
{	
	# Name          Size      VMA       LMA       File off  Algn
	my ($strExeRegionName, $nOption) = @_;
	my $index = $g_ExeRegionLookUpTable{$strExeRegionName};
	my @ExeRegionInfo;
	my $strInfo;
	my @k = keys %g_ExeRegion;
	my $key_count = $#k + 1;
	for (my $i = 0; $i <= $#k; $i++)
	{
		my $string = $g_ExeRegion{$i}->[0];
		next if ($string ne $strExeRegionName);
	}
	
	if ($nOption == Region::Size)
	{
		$strInfo = hex($g_ExeRegion{$index}->[Region::Size]);
	}
	elsif ($nOption == Region::VMA)
	{
		$strInfo = "0x".$g_ExeRegion{$index}->[Region::VMA];
	}
	elsif ($nOption == Region::LMA)
	{
		$strInfo = "0x".$g_ExeRegion{$index}->[Region::LMA];
	}
    elsif ($nOption == Region::Offsets)
	{
        $strInfo = "0x".$g_ExeRegion{$index}->[Region::Offsets];
	}
	elsif ($nOption == Region::Align)
	{
		$strInfo = $g_ExeRegion{$index}->[Region::Align];
	}
	elsif ($nOption == Region::Attr)
	{
		$strInfo = $Attr{$strExeRegionName};
	}
	
	return $strInfo;
}

#****************************************************************************
# subroutine:  FootprintAnalyzeBySymbol
# input:       $strSymName: Symbol Name (Case sensitive)
# output:      symbol info array reference
#****************************************************************************
sub FootprintAnalyzeBySymbol
{
	my ($strSymName) = @_;
	my @total_sym_info;
	foreach my $key (keys %symbol)
	{
		next if ($strSymName ne $key);
		my $sym_info = $symbol{$strSymName};
		my $exe_region = $sym_info->[3];
		my $F_0_attr = $sym_info->[2];
		my $attr = $Attr{$exe_region};
		my $sym_attr;
		if ($attr =~ /CODE/)
		{
			$sym_attr = "RO-CODE";
		}
		elsif ($attr =~ /DATA/)
		{
			if ($F_0_attr eq "F")
			{
				$sym_attr = "RW-DATA";
			}
			elsif ($F_0_attr eq "O")
			{
				$sym_attr = "RO-DATA";
			}
		}
		else
		{
			$sym_attr = "ZI";
		}
		
		push(@total_sym_info, $exe_region);
		push(@total_sym_info, $sym_attr);
		push(@total_sym_info, "0x".$sym_info->[0]);
		push(@total_sym_info, hex($sym_info->[4]));
	}
	return \@total_sym_info;
}