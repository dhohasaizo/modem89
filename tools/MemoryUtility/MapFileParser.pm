use strict;
BEGIN{push(@INC,'../')};
use CommonUtility; 

package MapFileParser;

my $g_MAPPath;
my $enter_reference_table = 0;

my %parent_of_symbol;
my %parent_obj_of_symbol;
my %parent_lib_of_symbol;
my %contained_obj;
my %related_lib;
my %obj_size;
my %lib_size;
my %region_obj_size;
my %region_lib_size;
my %region_contained_obj;
my %region_obj;
my %region_contained_lib;
my @veneers;
my %obj_pad;
my %obj_lib_lookup;
my $obj_pad_count = 0;
my @pad;
my %obj_debuginfo;
my %lib_debuginfo;
my %OBJ_RO_Size;
my %LIB_RO_Size;
my %OBJ_RWZI_Size;
my %LIB_RWZI_Size;
my %region_OBJ_RO_Size;
my %region_OBJ_RWZI_Size;
my @sections;

my %obj_pad_exeregion;

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

#****************************************************************************
# subroutine:  MAP_die
# sample code: (message, __FILE__, __LINE__)
# input:       $error_msg, $file, $line_no
#****************************************************************************
sub MAP_die
{
    my ($error_msg, $file, $line_no) = (@_);
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'MAP');    
}
#****************************************************************************
# subroutine:  ParseMAP
# input:  MAP Path string     
# output: x     
#****************************************************************************
sub ParseMAP
{
    ($g_MAPPath) = (@_);
	%parent_of_symbol = undef;
	%parent_obj_of_symbol = undef;
	%parent_lib_of_symbol = undef;
	%contained_obj = undef;
	%related_lib = undef;
	%obj_size = undef;
	%lib_size = undef;
	%region_obj_size = undef;
	%region_lib_size = undef;
	%region_contained_obj = undef;
	%region_obj = undef;
	%region_contained_lib = undef;
	@veneers = undef;
	%obj_pad = undef;
	%obj_pad_exeregion = undef;
	%obj_lib_lookup = undef;
	$obj_pad_count = 0;
	@pad = undef;
	%obj_debuginfo = undef;
	%lib_debuginfo = undef;
	%OBJ_RO_Size = undef;
	%LIB_RO_Size = undef;
	%OBJ_RWZI_Size = undef;
	%LIB_RWZI_Size = undef;
	%region_OBJ_RO_Size = undef;
	%region_OBJ_RWZI_Size = undef;
	@sections = undef;
	
	pop @veneers;
	pop @pad;

    if(defined $g_MAPPath and -e $g_MAPPath)
    {
        open (FILE_HANDLE, "<$g_MAPPath") or &MAP_die("$g_MAPPath: file error!", __FILE__, __LINE__);
        my $strPreSymbolName = undef;
		my $strPreExeRegion = undef;
		my $strPreSection = undef;
		my $flag_end_group = 1;
        while (<FILE_HANDLE>) 
        {
            my $strLine = $_;
			if (/END GROUP/)
			{
				$flag_end_group = 0;
				next;
			}
			elsif ($flag_end_group)
			{
				next;
			}
			elsif (/^(\S+)/)
			{
				$strPreExeRegion = $1;
			}
			if ((/(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
			{
				my $lib = $3;
				my $obj = $4;
				my $size = $2;
						
				$obj_pad{++$obj_pad_count} = $1;
				$obj_lib_lookup{$1} = [$4,$3];
				&ParseObjLib($strPreExeRegion, $strLine);
				if($strPreExeRegion =~ /^\.debug/)
				{
					if(exists $obj_debuginfo{$obj})
					{
						$obj_debuginfo{$obj} += hex($size);
					}
					else
					{
						$obj_debuginfo{$obj} = hex($size);
					}
					
					if(exists $lib_debuginfo{$lib})
					{
						$lib_debuginfo{$lib} += hex($size);
					}
					else
					{
						$lib_debuginfo{$lib} = hex($size);
					}
				}
				if((/\s+(\S+)\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+(\S+)\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
				{
					push(@sections, $1);
					if((/\s+_nvram_ltable\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+_nvram_ltable\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+_fs_filetable\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+_fs_filetable\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+PRIMARY_ZI\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+PRIMARY_ZI\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+PRIMARY_RW\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+PRIMARY_RW\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+NONCACHEDZI\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+NONCACHEDZI\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+NONCACHEDRW\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+NONCACHEDRW\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTSRAM_ZI\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTSRAM_ZI\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTSRAM_RW\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTSRAM_RW\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTERNZI_TP\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTERNZI_TP\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTERNZI\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTERNZI\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTERNRW\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTERNRW\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+EXTRAM_TXDATA\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+EXTRAM_TXDATA\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+EXTRAM_RXDATA\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+EXTRAM_RXDATA\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+EMIINITZI\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+EMIINITZI\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+\.data.*\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+\.data.*\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+\.bss.*\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+\.bss.*\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
					{
						my $key = $strPreExeRegion."-".$4;
						
						if(exists $OBJ_RWZI_Size{$4})
						{
							$OBJ_RWZI_Size{$4} += hex($2);
						}
						else
						{
							$OBJ_RWZI_Size{$4} = hex($2);
						}
						
						if(exists $LIB_RWZI_Size{$3})
						{
							$LIB_RWZI_Size{$3} += hex($2);
						}
						else
						{
							$LIB_RWZI_Size{$3} = hex($2);
						} 
						
						if(exists $region_OBJ_RWZI_Size{$key})
						{
							$region_OBJ_RWZI_Size{$key} += hex($2);
						}
						else
						{
							$region_OBJ_RWZI_Size{$key} = hex($2);
						}
					}
					elsif((/\s+i\.strcmp\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+i\.strcmp\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+RegionInit\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+RegionInit\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+RO-CODE\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+RO-CODE\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+MAUI_GFH\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+MAUI_GFH\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTERNCONST\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTERNCONST\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INTERNCODE\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INTERNCODE\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+INIT_RODATA\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+INIT_RODATA\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+COMMON\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+COMMON\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+C\$\$data\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+C\$\$data\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+C\$\$code\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+C\$\$code\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+\.text.*\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+\.text.*\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/) || (/\s+\.rodata\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/\s+\.rodata\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
					{
						my $key = $strPreExeRegion."-".$4;
						
						if(exists $OBJ_RO_Size{$4})
						{
							$OBJ_RO_Size{$4} += hex($2);
						}
						else
						{
							$OBJ_RO_Size{$4} = hex($2);
						}
						
						if(exists $LIB_RO_Size{$3})
						{
							$LIB_RO_Size{$3} += hex($2);
						}
						else
						{
							$LIB_RO_Size{$3} = hex($2);
						} 
						
						if(exists $region_OBJ_RO_Size{$key})
						{
							$region_OBJ_RO_Size{$key} += hex($2);
						}
						else
						{
							$region_OBJ_RO_Size{$key} = hex($2);
						}
					}		
				}
				elsif((/^\s+(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/^\s+(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
				{
					my $size = $2;
					my $lib = $3;
					my $obj = $4;
					
					if(defined $strPreSection)
					{
						push(@sections, $strPreSection);
					
						if(($strPreSection =~ /RW/) || ($strPreSection =~ /ZI/) || ($strPreSection eq "STACK_POOL_EXTSRAM") || ($strPreSection eq "STACK_POOL_INTSRAM") || ($strPreSection eq "_nvram_callback_tbl") || ($strPreSection =~ /\.bss/) || ($strPreSection =~ /\.data/))
						{
							my $key = $strPreExeRegion."-".$obj;
							
							if(exists $OBJ_RWZI_Size{$obj})
							{
								$OBJ_RWZI_Size{$obj} += hex($size);
							}
							else
							{
								$OBJ_RWZI_Size{$obj} = hex($size);
							}
							
							if(exists $LIB_RWZI_Size{$lib})
							{
								$LIB_RWZI_Size{$lib} += hex($size);
							}
							else
							{
								$LIB_RWZI_Size{$lib} = hex($size);
							} 
							
							if(exists $region_OBJ_RWZI_Size{$key})
							{
								$region_OBJ_RWZI_Size{$key} += hex($size);
							}
							else
							{
								$region_OBJ_RWZI_Size{$key} = hex($size);
							}
							$strPreSection = undef;	
						}
						elsif(($strPreSection =~ /ROCODE/) || ($strPreSection =~ /RODATA/) || ($strPreSection =~ /\.rodata/) || ($strPreSection =~ /\.text/) || ($strPreSection eq "MAUI_SIGNATURE_SECTION"))
						{
							my $key = $strPreExeRegion."-".$obj;
							
							if(exists $OBJ_RO_Size{$obj})
							{
								$OBJ_RO_Size{$obj} += hex($size);
							}
							else
							{
								$OBJ_RO_Size{$obj} = hex($size);
							}
							
							if(exists $LIB_RO_Size{$lib})
							{
								$LIB_RO_Size{$lib} += hex($size);
							}
							else
							{
								$LIB_RO_Size{$lib} = hex($size);
							} 
							
							if(exists $region_OBJ_RO_Size{$key})
							{
								$region_OBJ_RO_Size{$key} += hex($size);
							}
							else
							{
								$region_OBJ_RO_Size{$key} = hex($size);
							}
							
							$strPreSection = undef;		
						}
					}
				}
			}
			elsif (/(0x\w+)\s+(0x\w+)\s+linker stubs/)
			{
				&ParseObjLib($strPreExeRegion, $strLine);
			}
			elsif(/\*fill\*\s+(0x\w+)\s+(0x\w+)/)
			{
				$obj_pad{++$obj_pad_count} = $1;
				push(@pad, $obj_pad_count);
				if(exists $obj_pad_exeregion{$strPreExeRegion})
				{						
					$obj_pad_exeregion{$strPreExeRegion} += hex($2);						
				}
				else
				{
					$obj_pad_exeregion{$strPreExeRegion} = hex($2);					
				}
			}
			elsif (/Symbol\s+File/)   #Symbol                                            File
            { 
				$enter_reference_table = 1;
            }     
			elsif (/(\S+)\s+.*\\(.*)\((.*)\)/)
			{
                $strPreSymbolName = $1;
				my @obj_lib = [$2,$3];
				push(@{$parent_of_symbol{$1}}, @obj_lib);
				push(@{$parent_obj_of_symbol{$1}}, $3);
				push(@{$parent_lib_of_symbol{$1}}, $2);
			}
			elsif (/\s+.*\\(.*)\((.*)\)/)
			{
				my @obj_lib = [$1,$2];
				push(@{$parent_of_symbol{$strPreSymbolName}}, @obj_lib);
				push(@{$parent_obj_of_symbol{$strPreSymbolName}}, $2);
				push(@{$parent_lib_of_symbol{$strPreSymbolName}}, $1);
			}
			elsif(/^\s+(\S+)$/)
			{
				$strPreSection = $1;
			}
			
			&ParseInputSection($strPreExeRegion, $strLine) if(defined $strPreExeRegion);
        }
        close FILE_HANDLE;
    }
    else
    {
        &MAP_die("MAP Path($g_MAPPath) doesn't exist", __FILE__, __LINE__);   
    }    
}


sub ListAllSections
{
	my %count;
	my @uni_sections = grep { ++$count{ $_ } < 2; } @sections; 
	return \@uni_sections;
}
#****************************************************************************
# subroutine:  ListAllLoadRegion (not support this function)
# input:       N/A
# output:      N/A
#****************************************************************************
sub ListAllLoadRegion
{
	return undef;
}

#****************************************************************************
# subroutine:  ListPadInfo
# input:       N/A
# output:      array reference
#              for map file, array content:[array1,array2,...]
#                            array1:[strPadBaseAddress,[strPreObjName,strPreLibName],strPreObjAddress,[strPostObjName,strPostLibName],strPostObjAddress]
#****************************************************************************
sub ListPadInfo
{
	my @padstring;
	foreach my $temp(@pad)
	{
		my $pad_address = $obj_pad{$temp};
		my $previous = $obj_pad{$temp - 1};
		my $post = $obj_pad{$temp + 1};
		my @pre_obj = $obj_lib_lookup{$previous};
		my @post_obj = $obj_lib_lookup{$post};
		# next if(!$pad_address);
		my @padinfo = [$pad_address,@pre_obj,$previous,@post_obj,$post];
		push (@padstring, @padinfo);
	}
	return \@padstring;
}

#****************************************************************************
# subroutine:  PadFillExeregSize -- search *fill* padding info for RO and RWZI in INTSRAM region
# input:       execution region name, memory type
# output:      memory size
#****************************************************************************
sub PadFillExeregSize
{
	my ($exeregion, $type)= @_;
	my $RO_Size_temp;
	my $RWZI_Size_temp;
	my $ROexename;
	my $RWexename;
	my $RWZIexename;
	
	if ($exeregion !~ /INTSRAM/i)
	{
		die "*fill* padding info is not statistic in $exeregion !";
	}
	else
	{
		$ROexename = $exeregion."_CODE";
		$RO_Size_temp = $obj_pad_exeregion{$ROexename};
		$RWexename = $exeregion."_DATA";
		$RWZIexename = $exeregion."_DATA_ZI";
		$RWZI_Size_temp = $obj_pad_exeregion{$RWexename}+$obj_pad_exeregion{$RWZIexename};
	}
	
	if($type eq "RO Data")
	{						
		return $RO_Size_temp;	
	}
	elsif ($type eq "RWZI Data")
	{
		return $RWZI_Size_temp;
	}
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
	my $file = $strPath."\\MapParser_Temp.dat";
	my %tempfile;
	$tempfile{"parent_reference"} = \%parent_of_symbol;
	$tempfile{"parent_obj_reference"} = \%parent_obj_of_symbol;
	$tempfile{"parent_lib_reference"} = \%parent_lib_of_symbol;
	$tempfile{"veneer"} = \@veneers;
	$tempfile{"obj_in_exeregion"} = \%region_contained_obj;
	$tempfile{"lib_in_exeregion"} = \%region_contained_lib;
	$tempfile{"obj_by_lib"} = \%contained_obj;
	$tempfile{"lib_by_obj"} = \%related_lib;
	
	lock_nstore \%tempfile, $file;
}

#****************************************************************************
# subroutine:  ParseObjLib
# input:       Execution Region Name, $strLine
# output:      N/A 
#****************************************************************************
sub ParseObjLib
{
	my ($strPreExeRegion, $strLine) = @_;
	if (($strPreExeRegion ne '.ARM.attributes') && ($strPreExeRegion ne '.comment') && ($strPreExeRegion !~ /^\.debug/) && ($strPreExeRegion !~ /^\.stab/))
	{
		if ((/(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || (/(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
		{
			my $obj_size = $2;
			my $lib = $3;
			my $obj = $4;
			my $key = $obj."-".$lib;
			my $contained_obj_list;
			my $related_lib_list;
			
			foreach (@{$contained_obj{$lib}})
			{
				$contained_obj_list .= $_;
			}
			if ($contained_obj_list !~ /$obj/)
			{
				push (@{$contained_obj{$lib}}, $obj);
			}
			
			foreach (@{$related_lib{$obj}})
			{
				$related_lib_list .= $_;
			}
			if ($related_lib_list !~ /$lib/)
			{
				push (@{$related_lib{$obj}}, $lib);
			}
			
			if(exists $obj_size{$key})
			{
				$obj_size{$key} += hex($obj_size);
			}
			else
			{
				$obj_size{$key} = hex($obj_size);
			}
		}
		elsif(/(0x\w+)\s+(0x\w+)\s+linker stubs/)
		## C$$code.stub   0x7000a258        0x8 linker stubs
		{
			push (@veneers, [$strPreExeRegion, $1, hex($2)]);
		}
	}
}

#****************************************************************************
# subroutine:  ParseInputSection
# input:       Execution Region Name, $strLine
# output:      N/A
#****************************************************************************
sub ParseInputSection
{
    my ($strExeRegionName, $strLine) = @_;
    return if(!defined $strExeRegionName);    ### setting for $strExeRegionName = undef
	
    chomp($strLine);
    if(($strLine =~ /(0x\w+)\s+(0x\w+)\s+.*\\(.*)\((.*)\)/) || ($strLine =~ /(0x\w+)\s+(0x\w+)\s+.*\/(.*)\((.*)\)/))
    {   
        my $size = $2;
		my $lib = $3;
		my $obj = $4;
		my $region_contained_obj_list;
		foreach (@{$region_contained_obj{$strExeRegionName}})
		{
			$region_contained_obj_list .= $_;
		}
		if ($region_contained_obj_list !~ /$obj/)
		{
			push (@{$region_contained_obj{$strExeRegionName}}, $obj);
		}
		
		my $region_contained_lib_list;
		foreach (@{$region_contained_lib{$strExeRegionName}})
		{
			$region_contained_lib_list .= $_;
		}
		if ($region_contained_lib_list !~ /$lib/)
		{
			push (@{$region_contained_lib{$strExeRegionName}}, $lib);
		}
		
		my $obj_key = $strExeRegionName."-".$obj."-".$lib;
		my $lib_key = $strExeRegionName."-".$lib;
		if(exists $region_obj_size{$obj_key})
		{
			$region_obj_size{$obj_key} += hex($size);
		}
		else
		{
			$region_obj_size{$obj_key} = hex($size);
		}
		if(exists $region_lib_size{$lib_key})
		{
			$region_lib_size{$lib_key} += hex($size);
		}
		else
		{
			$region_lib_size{$lib_key} = hex($size);
		}
    }
}

#****************************************************************************
# subroutine:  GetParentOfSymbol
# input:       Execution Region Name, flag (all/lib/obj)
# output:      (Object Name, Library Name) which refers to given symbol (flag = all)
#              Object Name which refers to given symbol (flag = obj)
#              Library Name which refers to given symbol (flag = lib)
#****************************************************************************
sub GetParentOfSymbol
{	
	# Name          Size      VMA       LMA       File off  Algn
	my ($strSymName, $flag) = @_;
	
	my $parent_array;
	if($flag eq "all")
	{
		$parent_array = $parent_of_symbol{$strSymName};
	}
	elsif($flag eq "lib")
	{
		$parent_array = $parent_lib_of_symbol{$strSymName};
	}
	elsif($flag eq "obj")
	{
		$parent_array = $parent_obj_of_symbol{$strSymName};
	}
	return $parent_array;
}

#****************************************************************************
# subroutine:  GetChildOfSymbol
# input:       symbol name
# output:      undef(not support this function)
#****************************************************************************
sub GetChildOfSymbol
{
	my ($strSymbolName) = @_;
	return undef;
}

#****************************************************************************
# subroutine:  ListObjByLib
# input:       Library Name
# output:      Objects array reference
#****************************************************************************
sub ListObjByLib
{
	my ($lib_name) = @_;
	my $obj_array = $contained_obj{$lib_name};
	return $obj_array;
}

#****************************************************************************
# subroutine:  ListLibByObj
# input:       Object Name
# output:      Library array reference
#****************************************************************************
sub ListLibByObj
{
	my ($obj_name) = @_;
	my $lib_array = $related_lib{$obj_name};
	return $lib_array;
}

#****************************************************************************
# subroutine:  GetTotalSizeByObj
# input:       Object Name, Library Name
# output:      Total size of given object
#              (excluding size in .comment, .ARM.attribut, 
#               execution region which begins with .debug or .stab)
#****************************************************************************
sub GetTotalSizeByObj
{
	my ($obj_name, $lib_name) = @_;
	my $key = $obj_name."-".$lib_name;
	my $obj_size = $obj_size{$key};
	return $obj_size;
}

#****************************************************************************
# subroutine:  GetTotalSizeByLib
# input:       Library Name
# output:      Total size of given library 
#              (excluding size in .comment, .ARM.attribut, 
#               execution region which begins with .debug or .stab)
#****************************************************************************
sub GetTotalSizeByLib
{
	my ($lib_name) = @_;
	my $obj_array = $contained_obj{$lib_name};
	foreach my $temp (@$obj_array)
	{
		my $obj_size = $obj_size{$temp};
		if(exists $lib_size{$lib_name})
		{
			$lib_size{$lib_name} += $obj_size;
		}
		else
		{
			$lib_size{$lib_name} = $obj_size;
		}
	}
	return $lib_size{$lib_name};
}

#****************************************************************************
# subroutine:  GetObjByExeRegion
# input:       Execution Region Name
# output:      objects which given execution region contains
#****************************************************************************
sub GetObjByExeRegion
{
	my ($strExeRegionName) = @_;
	my $obj_array = $region_contained_obj{$strExeRegionName};
	return $obj_array;
}

#****************************************************************************
# subroutine:  GetLibByExeRegion
# input:       Execution Region Name
# output:      libraries which given execution region contains
#****************************************************************************
sub GetLibByExeRegion
{
	my ($strExeRegionName) = @_;
	my $lib_array = $region_contained_lib{$strExeRegionName};
	return $lib_array;
}

#****************************************************************************
# subroutine:  GetObjSizeByExeRegion
# input:       ExeRegion Name, Object Name, Library Name
# output:      size of object in given execution region
#****************************************************************************
sub GetObjSizeByExeRegion
{
	my ($strExeRegion, $strObj, $strLib) = @_;
    my $string = $strExeRegion."-".$strObj."-".$strLib;
	my $obj_size = $region_obj_size{$string};
	return $obj_size;
}

#****************************************************************************
# subroutine:  GetLibSizeByExeRegion
# input:       ExeRegion Name, Library Name
# output:      size of library in given execution region 
#****************************************************************************
sub GetLibSizeByExeRegion
{
	my ($strExeRegion, $strLib) = @_;
	my $string = $strExeRegion."-".$strLib;
	my $lib_size = $region_lib_size{$string};
	return $lib_size;
}

#****************************************************************************
# subroutine:  GetObjSizeByCatExeRegion
# input:       $strRegionName: Execution Name (Case sensitive)
#              $strCategory: RO Data/RWZI Data (Case sensitive)
# output:      ObjCateSize Hash Reference
#****************************************************************************
sub GetObjSizeByCatExeRegion
{
	 my ($strExeRegionName, $strCategory) = @_;
	 my %nObjROSize; 
	 my %nObjRWZISize;
	 
	 my $included_obj_aref = &GetObjByExeRegion($strExeRegionName);
	 
	 foreach my $temp(@$included_obj_aref)
	 {
		my $key = $strExeRegionName."-".$temp;
		if(exists $region_OBJ_RO_Size{$key})
		{
			$nObjROSize{$temp} = $region_OBJ_RO_Size{$key};
		}
		else
		{
			$nObjROSize{$temp} = 0;
		}
		
		if(exists $region_OBJ_RWZI_Size{$key})
		{
			$nObjRWZISize{$temp} = $region_OBJ_RWZI_Size{$key};
		}
		else
		{
			$nObjRWZISize{$temp} = 0;
		}
	 }
	 
	 if($strCategory eq "RO Data")
	 {
		return \%nObjROSize;
	 }
	 elsif($strCategory eq "RWZI Data")
	 {
		return \%nObjRWZISize;
	 }
}

#****************************************************************************
# subroutine:  GetVeneerInfo
# input:       N/A
# output:      [Execution Region, Base Address, Size] list for veneer
#****************************************************************************
sub GetVeneerInfo
{
	return \@veneers;
}

#****************************************************************************
# subroutine:  ListObjLibBySymbol
# input:       $SymName: Symbol Name (Case sensitive)
# output:      undef(not support this function)
#****************************************************************************
sub ListObjLibBySymbol
{
	my ($SymName) = @_;
	return undef;
}

#****************************************************************************
# subroutine:  GetLoadRegionInfo - Get Load Region information
# input:       N/A
# output:      undef(not support this function)
#****************************************************************************
sub GetLoadRegionInfo
{
    return undef;
}

#****************************************************************************
# subroutine:  GetTotalROSize - Get total RO size
# input:       $bNeedString: 1=Return string, 0/default/no input=Return int
# output:      undef(not support this function)
#****************************************************************************
sub GetTotalROSize
{
    my ($bNeedString) = @_;
    return undef;
}

#****************************************************************************
# subroutine:  GetTotalRWZISize - Get total RWZI size
# input:       $bNeedString: 1=Return string, 0/default/no input=Return int
# output:      undef(not support this function)
#****************************************************************************
sub GetTotalRWZISize
{
    my ($bNeedString) = @_;
    return undef;
}

#****************************************************************************
# subroutine:  GetTotalROMSize - Get total ROM size
# input:       $bNeedString: 1=Return string, 0/default/no input=Return int
# output:      undef(not support this function)
#****************************************************************************
sub GetTotalROMSize
{
    my ($bNeedString) = @_;
    return undef;
}

#****************************************************************************
# subroutine:  GetObjDebugInfoSize
# input:       $strObjName: Obj Name (Case sensitive)
# output:      debug info size for given obj
#****************************************************************************
sub GetObjDebugInfoSize
{
	my ($strObjName) = @_;
    my $DebugInfoSize = $obj_debuginfo{$strObjName};
	return $DebugInfoSize;
}

#****************************************************************************
# subroutine:  ListObjSummaryInfo
# input:       obj name, flag represents which column to show
#                        flag = "Code"
#                             = "inc.data"
#                             = "RO Data"
#                             = "RW Data"
#                             = "ZI Data"
#                             = "Debug"
# output:      Code/inc.data/RO Data/RW Data/ZI Data/Debug size for given obj
#****************************************************************************
sub ListObjSummaryInfo
{
	my ($strObjName, $flag) = @_;
	if ($flag eq "Code")
	{
		return undef;
	}
	elsif ($flag eq "inc.data")
	{
		return undef;
	}
	elsif ($flag eq "RO Data")
	{
		return $OBJ_RO_Size{$strObjName};
	}
	elsif ($flag eq "RW Data")
	{
		return undef;
	}
	elsif ($flag eq "ZI Data")
	{
		return undef;
	}
	elsif ($flag eq "RWZI Data")
	{
		return $OBJ_RWZI_Size{$strObjName};
	}
	elsif ($flag eq "Debug")
	{
		return $obj_debuginfo{$strObjName};
	}
}

#****************************************************************************
# subroutine:  ListLibSummaryInfo
# input:       lib name, flag represents which column to show
#                        flag = "Code"
#                             = "inc.data"
#                             = "RO Data"
#                             = "RW Data"
#                             = "ZI Data"
#                             = "Debug"
# output:      Code/inc.data/RO Data/RW Data/ZI Data/Debug size for given lib
#****************************************************************************
sub ListLibSummaryInfo
{
	my ($strLibName, $flag) = @_;
	if ($flag eq "Code")
	{
		return undef;
	}
	elsif ($flag eq "inc.data")
	{
		return undef;
	}
	elsif ($flag eq "RO Data")
	{
		return $LIB_RO_Size{$strLibName};
	}
	elsif ($flag eq "RW Data")
	{
		return undef;
	}
	elsif ($flag eq "ZI Data")
	{
		return undef;
	}
	elsif ($flag eq "RWZI Data")
	{
		return $LIB_RWZI_Size{$strLibName};
	}
	elsif ($flag eq "Debug")
	{
		return $lib_debuginfo{$strLibName};
	}
}