use strict;
use LinkerOutputParser;

&Usage() if ($#ARGV != 1); 

my ($file1, $file2) = @ARGV;
$file1 =~ s/\\/\\\\/;
$file2 =~ s/\\/\\\\/;

my ($libs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href, $libs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href, $RWZI_1_href, $RWZI_2_href);

if(($file1 =~ /\.lis$/) && ($file2 =~ /\.lis$/))
{
	($libs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href) = &GetAllLibs($file1);
	($libs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href) = &GetAllLibs($file2);
}
elsif(($file1 =~ /\.map$/) && ($file2 =~ /\.map$/))
{
    ($libs1_aref, $RO_1_href, $RWZI_1_href) = &GetAllLibs($file1);
	($libs2_aref, $RO_2_href, $RWZI_2_href) = &GetAllLibs($file2);
}
else
{
	&Usage();
}

my @libs1 = @$libs1_aref;
my @libs2 = @$libs2_aref;

my %libs1 = map{$_ => 1} @libs1;
my %libs2 = map{$_ => 1} @libs2;

my @inter = grep {$libs1{$_}} @libs2;

my %merge = map {$_ => 1} @libs1,@libs2; 
my @merge = sort keys (%merge);

my @libs1_only = grep {!$libs2{$_}} @merge;
my @libs2_only = grep {!$libs1{$_}} @merge;

print "Compare result as below:\n";

if($file1 =~ /\.lis$/)
{
	print "**************************************************************************************************************************************\n";
	print "                                               Codebase1                           Codebase2                              Diff\n";
	print "LibraryName                               ROSize;RWSize;ZISize                ROSize;RWSize;ZISize                ROSize;RWSize;ZISize\n";
	print "**************************************************************************************************************************************\n";
	
	my $total_RO_1 = 0;
	my $total_RW_1 = 0;
	my $total_ZI_1 = 0;
	my $total_RO_2 = 0;
	my $total_RW_2 = 0;
	my $total_ZI_2 = 0;
	my $total_RO_diff = 0;
	my $total_RW_diff = 0;
	my $total_ZI_diff = 0;
	my $total_codebase1;
	my $total_codebase2;
	my $total_diff;
		
	foreach my $lib(@merge)
	{
		$$RO_2_href{$lib} = 0 if(!defined $$RO_2_href{$lib});
		$$RO_1_href{$lib} = 0 if(!defined $$RO_1_href{$lib});
		$$RW_2_href{$lib} = 0 if(!defined $$RW_2_href{$lib});
		$$RW_1_href{$lib} = 0 if(!defined $$RW_1_href{$lib});
		$$ZI_2_href{$lib} = 0 if(!defined $$ZI_2_href{$lib});
		$$ZI_1_href{$lib} = 0 if(!defined $$ZI_1_href{$lib});
		
		my $RO_diff = $$RO_2_href{$lib} - $$RO_1_href{$lib};
		my $RW_diff = $$RW_2_href{$lib} - $$RW_1_href{$lib};
		my $ZI_diff = $$ZI_2_href{$lib} - $$ZI_1_href{$lib};

		my $codebase1 = $$RO_1_href{$lib}.";".$$RW_1_href{$lib}.";".$$ZI_1_href{$lib};
		my $codebase2 = $$RO_2_href{$lib}.";".$$RW_2_href{$lib}.";".$$ZI_2_href{$lib};
		my $diff = $RO_diff.";".$RW_diff.";".$ZI_diff;
		
		$total_RO_1 += $$RO_1_href{$lib};
		$total_RW_1 += $$RW_1_href{$lib};
		$total_ZI_1 += $$ZI_1_href{$lib};
		
		$total_RO_2 += $$RO_2_href{$lib};
		$total_RW_2 += $$RW_2_href{$lib};
		$total_ZI_2 += $$ZI_2_href{$lib};
		
		$total_RO_diff += $RO_diff;
		$total_RW_diff += $RW_diff;
		$total_ZI_diff += $ZI_diff;

		$~ = "LIS_COMPARE";
	    format LIS_COMPARE = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$lib,$codebase1,$codebase2,$diff
.
		
write;
	}
	
		$total_codebase1 = $total_RO_1.";".$total_RW_1.";".$total_ZI_1;
		$total_codebase2 = $total_RO_2.";".$total_RW_2.";".$total_ZI_2;
	    $total_diff = $total_RO_diff.";".$total_RW_diff.";".$total_ZI_diff;
			
		$~ = "LIS_TOTAL";
		format LIS_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
"Total",$total_codebase1,$total_codebase2,$total_diff
.
		
write;
}
elsif($file1 =~ /\.map$/)
{
	print "***********************************************************************************************************************************\n";
	print "                                               Codebase1                           Codebase2                             Diff\n";
	print "LibraryName                                 ROSize;RWZISize                     ROSize;RWZISize                     ROSize;RWZISize\n";
	print "***********************************************************************************************************************************\n";
	
	my $total_RO_1 = 0;
	my $total_RWZI_1 = 0;
	my $total_RO_2 = 0;
	my $total_RWZI_2 = 0;
	my $total_RO_diff = 0;
	my $total_RWZI_diff = 0;
	my $total_codebase1;
	my $total_codebase2;
	my $total_diff;
	
	foreach my $lib(@merge)
	{
		$$RO_2_href{$lib} = 0 if(!defined $$RO_2_href{$lib});
		$$RO_1_href{$lib} = 0 if(!defined $$RO_1_href{$lib});
		$$RWZI_2_href{$lib} = 0 if(!defined $$RWZI_2_href{$lib});
		$$RWZI_1_href{$lib} = 0 if(!defined $$RWZI_1_href{$lib});
		
		my $RO_diff = $$RO_2_href{$lib} - $$RO_1_href{$lib};
		my $RWZI_diff = $$RWZI_2_href{$lib} - $$RWZI_1_href{$lib};

		my $codebase1 = $$RO_1_href{$lib}.";".$$RWZI_1_href{$lib};
		my $codebase2 = $$RO_2_href{$lib}.";".$$RWZI_2_href{$lib};
		my $diff = $RO_diff.";".$RWZI_diff;
		
		$total_RO_1 += $$RO_1_href{$lib};
		$total_RWZI_1 += $$RWZI_1_href{$lib};
		
		$total_RO_2 += $$RO_2_href{$lib};
		$total_RWZI_2 += $$RWZI_2_href{$lib};
		
		$total_RO_diff += $RO_diff;
		$total_RWZI_diff += $RWZI_diff;
			
		$~ = "MAP_COMPARE";
		format MAP_COMPARE = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$lib,$codebase1,$codebase2,$diff
.
		
write;
	}	
		$total_codebase1 = $total_RO_1.";".$total_RWZI_1;
		$total_codebase2 = $total_RO_2.";".$total_RWZI_2;
	    $total_diff = $total_RO_diff.";".$total_RWZI_diff;
			
		$~ = "MAP_TOTAL";
		format MAP_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
"Total",$total_codebase1,$total_codebase2,$total_diff
.
		
write;
}

print "**************************************************************************************************************************************\n";


sub GetAllLibs
{
	my ($file) = @_;
	my $symfile = $file;
	my $exeregion_aref;
	
	if($file =~ /\.map$/)
	{
		$symfile =~ s/map/sym/;
		&LinkerOutputParser::FileParse($symfile);
		$exeregion_aref = &LinkerOutputParser::ListAllExeRegion;
	}
	
	&LinkerOutputParser::FileParse($file);
	if($file =~ /\.lis$/)
	{
		$exeregion_aref = &LinkerOutputParser::ListAllExeRegion;
	}

	my @libs = ();
	my @uni_libs = ();
	my %RO_Size;
	my %RW_Size;
	my %ZI_Size;
	my %RWZI_Size;
	my %count;
	
	if (defined $exeregion_aref)
	{
		foreach my $temp(@$exeregion_aref)
		{
			my $lib_aref = &LinkerOutputParser::GetLibByExeRegion($temp);
			if (defined $lib_aref)
			{
				foreach (@$lib_aref)
				{
					push(@libs, $_);
				}
			}
		}
	}
	
	@uni_libs = grep { ++$count{ $_ } < 2; } @libs; 
	
	foreach my $lib(@uni_libs)
	{
		my ($RO_Size, $RW_Size, $ZI_Size, $RWZI_Size);
		
		if($file1 =~ /\.lis$/)
		{
			$RO_Size = &LinkerOutputParser::ListLibSummaryInfo($lib, "RO Data") + &LinkerOutputParser::ListLibSummaryInfo($lib, "Code");
			$RW_Size = &LinkerOutputParser::ListLibSummaryInfo($lib, "RW Data");
			$ZI_Size = &LinkerOutputParser::ListLibSummaryInfo($lib, "ZI Data");
			$RO_Size{$lib} = $RO_Size;
			$RW_Size{$lib} = $RW_Size;
		    $ZI_Size{$lib} = $ZI_Size;
		}
		elsif($file1 =~ /\.map$/)
		{
			$RO_Size = &LinkerOutputParser::ListLibSummaryInfo($lib, "RO Data");
			$RWZI_Size = &LinkerOutputParser::ListLibSummaryInfo($lib, "RWZI Data");
			$RO_Size{$lib} = $RO_Size;
			$RWZI_Size{$lib} = $RWZI_Size;
		}
	}
	
	if($file1 =~ /\.lis$/)
	{
		return (\@uni_libs, \%RO_Size, \%RW_Size, \%ZI_Size);
	}
	elsif($file1 =~ /\.map$/)
	{
		return (\@uni_libs, \%RO_Size, \%RWZI_Size);
	}
}


sub Usage
{
  print <<"__EOFUSAGE";

usage: perl CompareLibrarySize.pl lis/map_file_path1 lis/map_file/path2

lis/map_file_path1: lis/map file path for codebase1 you want to compare
lis/map_file_path2: lis/map file path for codebase2 you want to compare

lis/map_file_path1, lis/map_file_path2 should be the same file type (both .lis file or both .map file, comparison between .lis and .map is not supported)

e.g. perl CompareLibrarySize.pl "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map" "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map"

Note: 
For GCC linker output, there should be corresponding .sym file in the same folder of .map file.

__EOFUSAGE
  exit 1;
}
