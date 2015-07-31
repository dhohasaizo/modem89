use strict;
use LinkerOutputParser;

&Usage() if (($#ARGV != 2) && ($#ARGV != 3)); 

my ($option, $region, $file1, $file2) = @ARGV;

$file1 =~ s/\\/\\\\/;
$file2 =~ s/\\/\\\\/;

if(($option eq "-Q") || ($option eq "-q"))
{
	&TCMQuery($region, $file1);
}
elsif(($option eq "-C") || ($option eq "-c"))
{
	&TCMCompare($region, $file1, $file2);
}
else
{
	&Usage();
}

sub TCMQuery
{
	my ($ExeRegion, $file) = @_;
	if($file =~ /\.lis$/)
	{
		my ($objs_aref, $RO_href, $RW_href, $ZI_href) = &GetAllOBJ($ExeRegion, $file);
		print "Object_Name                                   RO_Size             RW_Size            ZI_Size\n";
		print "***********************************************************************************************\n";

		my $total_RO;
		my $total_RW;
		my $total_ZI;
		
		foreach my $temp(sort @$objs_aref)
		{
			$~ = "LIS_QUERY";
			format LIS_QUERY = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
$temp,$$RO_href{$temp},$$RW_href{$temp},$$ZI_href{$temp}
.
		
write;
			$total_RO += $$RO_href{$temp};
			$total_RW += $$RW_href{$temp};
			$total_ZI += $$ZI_href{$temp};			
		}
		$~ = "LIS_QUERY_TOTAL";
		format LIS_QUERY_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
"Total",$total_RO,$total_RW,$total_ZI
.
		
write;
	}
	elsif($file =~ /\.map$/)
	{
		my ($objs_aref, $RO_href, $RWZI_href) = &GetAllOBJ($ExeRegion, $file);
		print "Object_Name                                   RO_Size            RWZI_Size\n";
		print "***********************************************************************************************\n";

		my $total_RO;
		my $total_RWZI;
		
		foreach my $temp(sort @$objs_aref)
		{
			$~ = "MAP_QUERY";
			format MAP_QUERY = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
$temp,$$RO_href{$temp},$$RWZI_href{$temp}
.
		
write;
			$total_RO += $$RO_href{$temp};
			$total_RWZI += $$RWZI_href{$temp};
		}
		$~ = "MAP_QUERY_TOTAL";
		format MAP_QUERY_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
"Total",$total_RO,$total_RWZI
.
		
write;
	}
	print "***********************************************************************************************\n";
}

sub TCMCompare
{
	my ($ExeRegion, $file1, $file2) = @_;
	my ($objs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href, $objs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href, $RWZI_1_href, $RWZI_2_href);
	
	if(($file1 =~ /\.lis$/) && ($file2 =~ /\.lis$/))
	{
		($objs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href) = &GetAllOBJ($ExeRegion, $file1);
		($objs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href) = &GetAllOBJ($ExeRegion, $file2);
	}
	elsif(($file1 =~ /\.map$/) && ($file2 =~ /\.map$/))
	{
		($objs1_aref, $RO_1_href, $RWZI_1_href) = &GetAllOBJ($ExeRegion, $file1);
		($objs2_aref, $RO_2_href, $RWZI_2_href) = &GetAllOBJ($ExeRegion, $file2);
	}
	
	my @objs1 = @$objs1_aref;
	my @objs2 = @$objs2_aref;

	my %objs1 = map{$_ => 1} @objs1;
	my %objs2 = map{$_ => 1} @objs2;
	my @arr = map{$_ => 1} @objs1; 

	my @inter = grep {$objs1{$_}} @objs2;

	my %merge = map {$_ => 1} @objs1,@objs2; 
	my @merge = sort keys (%merge);

	my @objs1_only = grep {!$objs2{$_}} @merge;
	my @objs2_only = grep {!$objs1{$_}} @merge;

	print "Compare result as below:\n";

	if($file1 =~ /\.lis$/)
	{
		print "**************************************************************************************************************************************\n";
		print "                                               Codebase1                           Codebase2                              Diff\n";
		print "ObjectName                                ROSize;RWSize;ZISize                ROSize;RWSize;ZISize                ROSize;RWSize;ZISize\n";
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
		
		foreach my $obj(@merge)
		{
			$$RO_2_href{$obj} = 0 if(!defined $$RO_2_href{$obj});
			$$RO_1_href{$obj} = 0 if(!defined $$RO_1_href{$obj});
			$$RW_2_href{$obj} = 0 if(!defined $$RW_2_href{$obj});
			$$RW_1_href{$obj} = 0 if(!defined $$RW_1_href{$obj});
			$$ZI_2_href{$obj} = 0 if(!defined $$ZI_2_href{$obj});
			$$ZI_1_href{$obj} = 0 if(!defined $$ZI_1_href{$obj});
			
			my $RO_diff = $$RO_2_href{$obj} - $$RO_1_href{$obj};
			my $RW_diff = $$RW_2_href{$obj} - $$RW_1_href{$obj};
			my $ZI_diff = $$ZI_2_href{$obj} - $$ZI_1_href{$obj};

			my $codebase1 = $$RO_1_href{$obj}.";".$$RW_1_href{$obj}.";".$$ZI_1_href{$obj};
			my $codebase2 = $$RO_2_href{$obj}.";".$$RW_2_href{$obj}.";".$$ZI_2_href{$obj};
			my $diff = $RO_diff.";".$RW_diff.";".$ZI_diff;
			
			$total_RO_1 += $$RO_1_href{$obj};
			$total_RW_1 += $$RW_1_href{$obj};
			$total_ZI_1 += $$ZI_1_href{$obj};
			
			$total_RO_2 += $$RO_2_href{$obj};
			$total_RW_2 += $$RW_2_href{$obj};
			$total_ZI_2 += $$ZI_2_href{$obj};
			
			$total_RO_diff += $RO_diff;
			$total_RW_diff += $RW_diff;
			$total_ZI_diff += $ZI_diff;
			
			$~ = "LIS_COMPARE";
			format LIS_COMPARE = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$obj,$codebase1,$codebase2,$diff
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
		print "ObjectName                                  ROSize;RWZISize                     ROSize;RWZISize                     ROSize;RWZISize\n";
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
		
		foreach my $obj(@merge)
		{
			$$RO_2_href{$obj} = 0 if(!defined $$RO_2_href{$obj});
			$$RO_1_href{$obj} = 0 if(!defined $$RO_1_href{$obj});
			$$RWZI_2_href{$obj} = 0 if(!defined $$RWZI_2_href{$obj});
			$$RWZI_1_href{$obj} = 0 if(!defined $$RWZI_1_href{$obj});
			
			my $RO_diff = $$RO_2_href{$obj} - $$RO_1_href{$obj};
			my $RWZI_diff = $$RWZI_2_href{$obj} - $$RWZI_1_href{$obj};

			my $codebase1 = $$RO_1_href{$obj}.";".$$RWZI_1_href{$obj};
			my $codebase2 = $$RO_2_href{$obj}.";".$$RWZI_2_href{$obj};
			my $diff = $RO_diff.";".$RWZI_diff;
			
			$total_RO_1 += $$RO_1_href{$obj};
			$total_RWZI_1 += $$RWZI_1_href{$obj};
			
			$total_RO_2 += $$RO_2_href{$obj};
			$total_RWZI_2 += $$RWZI_2_href{$obj};
			
			$total_RO_diff += $RO_diff;
			$total_RWZI_diff += $RWZI_diff;
			
			$~ = "MAP_COMPARE";
			format MAP_COMPARE = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$obj,$codebase1,$codebase2,$diff
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
}

sub GetAllOBJ
{
	my ($ExeRegion, $file) = @_;
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

	my @objs;
	my @uni_objs;
	my %count; 
	my %RO_Size;
	my %RW_Size;
	my %ZI_Size;
	my %RWZI_Size;
	my $addr;
	my $veneer_aref; 
	if (defined $exeregion_aref)
	{
		foreach my $temp(@$exeregion_aref)
		{
			next if ($temp !~ /^$ExeRegion/i);
			my $obj_aref = &LinkerOutputParser::GetObjByExeRegion($temp);
			if (defined $obj_aref)
			{				
				foreach (@$obj_aref)
				{
					push(@objs, $_);
				}
			}
		}
	}

	$veneer_aref = &LinkerOutputParser::GetVeneerInfo;
	if(defined $veneer_aref)
	{
		foreach my $temp(@$veneer_aref)
		{
			if($temp->[2])
			{
				next if ($temp->[0] !~ /^$ExeRegion/i);				
				push(@objs,$temp->[0].".stub");
			}
		}
	}

	my $pad_aref = &LinkerOutputParser::ListPadInfo;
	if (defined $pad_aref)               
	{
		my $obj_pad_name ="*fill*"; 
		push(@objs,$obj_pad_name);
		#print "$obj_pad_name";
		#system("pause");
	
	}
	#Ying 1224
	@uni_objs = grep { ++$count{ $_ } < 2; } @objs; 
	
	foreach my $obj(@uni_objs)
	{
		my ($RO_Size, $RW_Size, $ZI_Size, $RWZI_Size);
		if (defined $exeregion_aref)
		{
			foreach my $temp(@$exeregion_aref)
			{
				next if ($temp !~ /^$ExeRegion/i);
				
				if($file =~ /\.lis$/)
				{
					$RO_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RO Data") + &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "Code");
					$RW_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RW Data");
					$ZI_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "ZI Data");

					if (exists($RO_Size{$obj}))
					{
						$RO_Size{$obj} += $RO_Size;
					}
					else
					{
						$RO_Size{$obj} = $RO_Size;
					}
					
					if (exists($RW_Size{$obj}))
					{
						$RW_Size{$obj} += $RW_Size;
					}
					else
					{
						$RW_Size{$obj} = $RW_Size;
					}
					
					if (exists($ZI_Size{$obj}))
					{
						$ZI_Size{$obj} += $ZI_Size;
					}
					else
					{
						$ZI_Size{$obj} = $ZI_Size;
					}
				}
				elsif($file =~ /\.map$/)
				{
					if ($obj =~ /\.o/)
					{
					$RO_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RO Data");
					$RWZI_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RWZI Data");
					
					if (exists($RO_Size{$obj}))
					{
						$RO_Size{$obj} += $RO_Size;
					}
					else
					{
						$RO_Size{$obj} = $RO_Size;
					}
					
					if (exists($RWZI_Size{$obj}))
					{
						$RWZI_Size{$obj} += $RWZI_Size;
					}
					else
					{
						$RWZI_Size{$obj} = $RWZI_Size;
					}
				}
					elsif($obj =~ /\*fill\*/) #(/\*fill\*\s+(0x\w+)\s+(0x\w+)/)
					{
							$RO_Size{$obj} = hex(&LinkerOutputParser::PadFillExeregSize($ExeRegion,"RO Data"));
							$RWZI_Size{$obj} = hex(&LinkerOutputParser::PadFillExeregSize($ExeRegion,"RWZI Data"));
					}
					else
					{
						if(defined $veneer_aref)
						{
							foreach my $temp(@$veneer_aref)
							{
								my $obj_name = $temp->[0];
								$obj_name = $obj_name.".stub";
								
								next if ($temp->[0] !~ /^$ExeRegion/i);
								
								if(($temp->[2])&&($obj eq $obj_name))
								{
									$RO_Size = $temp->[2];
									next if ($addr eq $temp->[1]);
									
									if (exists($RO_Size{$obj}))
									{
										$RO_Size{$obj} += $RO_Size;
									}
									else
									{
										$RO_Size{$obj} = $RO_Size;
									}
					
									if (exists($RWZI_Size{$obj}))
									{
										$RWZI_Size{$obj} += $RWZI_Size;
									}
									else
									{
										$RWZI_Size{$obj} = $RWZI_Size;
									}
									$addr = $temp->[1];
								}
							}
						}
					}
				}
			}
		}
		
	}
	
	if($file =~ /\.lis$/)
	{
		return (\@uni_objs, \%RO_Size, \%RW_Size, \%ZI_Size);
	}
	elsif($file =~ /\.map$/)
	{
		return (\@uni_objs, \%RO_Size, \%RWZI_Size);
	}
	
}

sub Usage
{
  print <<"__EOFUSAGE";

usage: perl TCMQuery.pl -Q INTSRAM lis/map_file_path
       perl TCMQuery.pl -q INTSRAM lis/map_file_path
       perl TCMQuery.pl -C INTSRAM lis/map_file_path1 lis/map_file_path2
	   perl TCMQuery.pl -c INTSRAM lis/map_file_path1 lis/map_file_path2

lis/map_file_path1: lis/map file path for codebase1 you want to compare
lis/map_file_path2: lis/map file path for codebase2 you want to compare

e.g. 
perl TCMQuery.pl -Q INTSRAM "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map"
perl TCMQuery.pl -C INTSRAM "E:\\mtk80506\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map" "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map"

__EOFUSAGE
  exit 1;
}