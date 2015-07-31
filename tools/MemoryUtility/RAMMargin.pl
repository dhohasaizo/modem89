#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   RAMmargin.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This perl is used to get RAM margin
#*       
#*
#* Author:
#* -------
#*   Carina Liao (mtk04017)
#*
#****************************************************************************/

BEGIN { push @INC, '../' }  # add additional library path
use systemInfo;
use LinkerOutputParser;
use FileInfoParser;
use strict;

#****************************************************************************
# Constants
#****************************************************************************
my $RAMMARGIN_VERNO     = " m0.02";
             # m0.02 , 2012/08/03,  Push additional library path
             # m0.01 , 2012/07/21,  Initial revision

#****************************************************************************
# Global variable
#****************************************************************************
my $DebugPrint = 0;

#****************************************************************************
# Subroutine:  TCMmargin_verno - to query this package's version number
# Parameters:  x
# Returns:     version number string
#****************************************************************************
sub RAMmargin_verno
{
    return $RAMMARGIN_VERNO;
}

#****************************************************************************
# 1 >>>  Get in put parameters
#****************************************************************************
&Usage() if($#ARGV != 2);
my ($makeFile, $memorymapfile, $linkeroutputfile) = @ARGV;

#****************************************************************************
# 2 >>>  Parse make file
#****************************************************************************
my %MAKEFILE_OPTIONS;
&FileInfo::Parse_MAKEFILE($makeFile, \%MAKEFILE_OPTIONS);

#****************************************************************************
# 3 >>>  Calculate RAM margine
#****************************************************************************
&CalcRAMmargin();

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
exit 0;

#****************************************************************************
# subroutine:  CalcRAMmargine - calculate RAM margine
# Input:       x
# Output:      x
#****************************************************************************
sub CalcRAMmargin
{

    my($LastRegionBeforeDUMMYEND, $DUMMY_END) =  &sysInfo::GetRAMBoundaryregion($memorymapfile,\%MAKEFILE_OPTIONS);
    my($DUMMY_END_base, $PreRegion_base, $PreRegion_size) = ('0x0','0x0',0);
    # Parse link output file
    &LinkerOutputParser::FileParse($linkeroutputfile);
    print "regions = $LastRegionBeforeDUMMYEND, $DUMMY_END\n" if($DebugPrint == 1);
    # Get the region's info (base, size)

    if($linkeroutputfile =~ /lis$/)
    {
        $DUMMY_END_base = hex(&LinkerOutputParser::GetExeRegionInfo($DUMMY_END, ExecutionRegion::Base));
        $PreRegion_base = hex(&LinkerOutputParser::GetExeRegionInfo($LastRegionBeforeDUMMYEND, ExecutionRegion::Base));
        $PreRegion_size = hex(&LinkerOutputParser::GetExeRegionInfo($LastRegionBeforeDUMMYEND, ExecutionRegion::Size));
    }
    elsif($linkeroutputfile =~ /sym$/)
    {
        $DUMMY_END_base = hex(&LinkerOutputParser::Get_CACHED_DUMMY_END_Base);
        $PreRegion_base = hex(&LinkerOutputParser::GetExeRegionInfo($LastRegionBeforeDUMMYEND, Region::VMA));
        $PreRegion_size = &LinkerOutputParser::GetExeRegionInfo($LastRegionBeforeDUMMYEND, Region::Size);
    }
    else
    {
        &Usage();
    }
    print "Dbase = $DUMMY_END_base, Pre_base = $PreRegion_base, Pre_size = $PreRegion_size\n"  if($DebugPrint == 1);
    # Get RAM margin
    my $RAMmargin = $DUMMY_END_base - ($PreRegion_base + $PreRegion_size);

    print "RAMmargine = $RAMmargin (Bytes)\n";

}

#****************************************************************************
# subroutine:  Usage - usage template
# Input:       x
# Output:      x
#****************************************************************************
sub Usage
{
  print <<"__EOFUSAGE";

usage: perl RAMMargin.pl makefile_path scatter_file_path/lds_file_path lis_file_path/sym_file_path 

NOTE: scatter file should input with lis file
      lds file should input with sym file

e.g. 
perl RAMMargin.pl "/[path]/MT6280_R7R8_HSPA(FULL_VERSION_RVCT).mak" "/[path]/scatMT6280_R7R8.txt" "/[path]/MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.lis"

__EOFUSAGE

  exit 1;
}

