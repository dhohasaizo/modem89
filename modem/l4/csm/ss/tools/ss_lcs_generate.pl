#!/usr/local/bin/perl
# 
# Copyright Statement:
# --------------------
# This software is protected by Copyright and the information contained
# herein is confidential. The software may not be copied and the information
# contained herein may not be used or disclosed except with the written
# permission of MediaTek Inc. (C) 2012
# 
# BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
# NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
# SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
# 
# BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
# LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
# 
# THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
# WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
# LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
# RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
# THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
# 
require v5.8.6;
use Cwd;
#use Win32::OLE qw(in);
#use Win32API::Registry qw(:ALL);
# for mbis start stamp
$build_time_sec = time;
($sec, $min, $hour, $mday, $mon, $year) = localtime($build_time_sec);
$build_time_string = sprintf("%4.4d.%2.2d.%2.2d.%2.2d.%2.2d.%2.2d", $year+1900, $mon+1, $mday, $hour, $min, $sec);
@arguments = ();

$ASN1CC_PATH = getcwd();
$ASN_TARGET_PATH = "../../../../../";
$ASN_FILES = "../asn1/asn1_src/MAP_BS_Code.asn ../asn1/asn1_src/MAP_CommonDataTypes.asn ../asn1/asn1_src/MAP_Errors.asn ../asn1/asn1_src/MAP_ER_DataTypes.asn ../asn1/asn1_src/MAP_ExtensionDataTypes.asn ../asn1/asn1_src/MAP_LCS_DataTypes.asn ../asn1/asn1_src/MAP_MS_DataTypes.asn ../asn1/asn1_src/MAP_OM_DataTypes.asn ../asn1/asn1_src/MAP_SM_DataTypes.asn ../asn1/asn1_src/MAP_SS_Code.asn ../asn1/asn1_src/MAP_SS_DataTypes.asn ../asn1/asn1_src/MAP_TS_Code.asn ../asn1/asn1_src/Remote_Operations_Generic_ROS_PDUs.asn ../asn1/asn1_src/Remote_Operations_Information_Objects.asn ../asn1/asn1_src/Remote_Operations_Useful_Definitions.asn ../asn1/asn1_src/SS_DataTypes.asn ../asn1/asn1_src/SS_Errors.asn ../asn1/asn1_src/SS_Operations.asn";
$ASN1CC_PATH = "$ASN1CC_PATH/";
$ASN1CC_ROOT_PATH = "../../../../";
$ASN1CC_ASN_FILES = "$ASN1CC_PATH../asn1/asn1_src/MAP_BS_Code.asn $ASN1CC_PATH../asn1/asn1_src/MAP_CommonDataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_Errors.asn $ASN1CC_PATH../asn1/asn1_src/MAP_ER_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_ExtensionDataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_LCS_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_MS_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_OM_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_SM_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_SS_Code.asn $ASN1CC_PATH../asn1/asn1_src/MAP_SS_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/MAP_TS_Code.asn $ASN1CC_PATH../asn1/asn1_src/Remote_Operations_Generic_ROS_PDUs.asn $ASN1CC_PATH../asn1/asn1_src/Remote_Operations_Information_Objects.asn $ASN1CC_PATH../asn1/asn1_src/Remote_Operations_Useful_Definitions.asn $ASN1CC_PATH../asn1/asn1_src/SS_DataTypes.asn $ASN1CC_PATH../asn1/asn1_src/SS_Errors.asn $ASN1CC_PATH../asn1/asn1_src/SS_Operations.asn";
$headerDir = "../../../include/";
$headerDir1 = "../asn1/gen/include";
$srcDir = "../asn1/gen/src";
$dstDir = "$ASN_TARGET_PATH$ARGV[0]";

if ($ENV{"OS"} eq "Windows_NT") {
  $delCmd = "del /Q";
  $mkdirCmd = "mkdir";
  $mvCmd = "MOVE";
  $dirDelim = "\\";
  $headerDir =~ s/\//\\/g;
  $headerDir1 =~ s/\//\\/g;
  $srcDir =~ s/\//\\/g;
  $ASN_TARGET_PATH =~ s/\//\\/g;
  $ASN_FILES =~ s/\//\\/g; 
  $ASN1CC = "mtkasn.exe";
  $ASN1CC_PATH =~ s/\//\\/g;
  $ASN1CC_ROOT_PATH =~ s/\//\\/g;
  $ASN1CC_ASN_FILES =~ s/\//\\/g;
} else {
  $delCmd = "rm";
  $mkdirCmd = "mkdir";
  $mvCmd = "mv";
  $dirDelim = "/";
  $ASN1CC = "./mtkasn";
  $ASN1CC_ASN_FILES =~ s/\(/\\(/g;
  $ASN1CC_ASN_FILES =~ s/\)/\\)/g;
  $ASN1CC_PATH =~ s/\(/\\(/g;
  $ASN1CC_PATH =~ s/\)/\\)/g;
}

if ($#ARGV < 0) {
  $ENV{GENERATE_COMMON_FUNCTIONS}="0";
  $ENV{GENERATE_PRINT_FUNCTIONS}="0";
  $ASN_TARGET_PATH = "";
} elsif ($#ARGV == 0) {
  $ENV{GENERATE_COMMON_FUNCTIONS}="0";
  $ENV{GENERATE_PRINT_FUNCTIONS}="0";
} elsif ($#ARGV == 1) {
  if ($ARGV[1] eq "C") {
    $ENV{GENERATE_COMMON_FUNCTIONS}="1";
    $ENV{GENERATE_PRINT_FUNCTIONS}="0";
  } elsif ($ARGV[1] eq "P") {
    $ENV{GEN_PRINTF_FILE}="1";
  } else {
    &Usage;
  }
} else {
  &Usage;
}

if ($#ARGV >= 0) {
  if (-d "$dstDir") {
    $headerDir  = $dstDir;
    $headerDir1 = $dstDir;
    $srcDir     = $dstDir;
    $isTargetPathExisted = 1;
  }
  else {
    &Usage;
  }
}
else {
  $isTargetPathExisted = 0;
}

################  SET environment variable  ######################
$ENV{CODING_RULE}="BER";
$ENV{PREFIX}="SS2_";
$ENV{SUPPORT_QUERY_SEQUENCE_MANDATORY_BITMAP}="0";
$ENV{SINGLE_ROOT_MODULE}="0";
$ENV{OUTPUT_NAME}="ss_asn";
$ENV{REENTRANT_CALLBACKS}="1";
$ENV{ENCODE_BUFFER_SIZE}="1024";
$ENV{PREFIX_ALL_CHOICE_SELECTORS}="1";
$ENV{PREFIX_ALL_SEQUENCE_SELECTORS}="1";
$ENV{PREFIX_ALL_ENUMERATED_SELECTORS}="1";
$ENV{PREFIX_ALL_VALUES}="0";
$ENV{DECODER_RETURNS_CONSUMED_INPUT}="1";
$ENV{DECODER_LENGTH_IN_BITS}="1";
$ENV{PRINT_RECURSIVELIST}="0";
$ENV{REF_ALL_INDIRECT}="0";
$ENV{DEBUG_MEM_ALLOC}="0";
$ENV{SUPPORT_CHECK_BOUNDARY}="1";
$ENV{UPPER_ALL_CONSTANT_DEFINE}="1";
$ENV{HEAD_FILE_INCLUDE}="\"\"applib2_asn_memory.h\"\;\"applib2_asn_common.h\"\;\"applib2_asn_ber_common.h\"\;\"applib2_mtkasn_global.h\"\;\"kal_general_types.h\"\;\"string.h\"\;\"setjmp.h\"\"";
$ENV{HEAD_FILE_INCLUDE_FOR_H}="\"\"applib2_mtkasn_global.h\"\;\"kal_general_types.h\"\;\"applib2_asn_common.h\"\"";
$ENV{SUPPORT_FILE_USE_MACRO}="1";
$ENV{SUPPORT_FILE_USE_MACRO_NAME}="__AGPS_CONTROL_PLANE__";
$ENV{SUPPORT_VERSION}="2";
$ENV{SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES}="1";
$ENV{SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES_PREFIX}="applib2_";

##################################################################

if($isTargetPathExisted == 1){
  $asnGenCmd = "$ASN1CC_PATH$ASN1CC $ASN1CC_ASN_FILES";
  $targetDir = "$ASN1CC_PATH$srcDir";
  if ($ENV{"OS"} ne "Windows_NT"){ $targetDir =~ s/\\//g; }
  $status = chdir($targetDir);
  ($status==0) && die "Error: Cannot change to DIR path $targetDir\n";
  
  $status = system("$asnGenCmd");
  ($status!=0) && die "Error: ASN tool error status = $status, cmd=$asnGenCmd\n";
}
# Backward compatible for 11B and previous version without "Generated File Path"
else{
$header  = "ss_asn.h";
@headers = qw(applib2_mtkasn_global.h applib2_asn_memory.h applib2_asn_common.h applib2_asn_ber_common.h);
@sources = qw(ss_asn.c ss_asn_decode.c ss_asn_encode.c applib2_asn_memory.c applib2_asn_common.c applib2_asn_ber_common.c);
if ($ARGV[1] eq "P") {
  push(@headers,"ss_asn_printf.c");
}
(!-d "$headerDir")&& system("$mkdirCmd $headerDir");
(!-d "$headerDir1")&& system("$mkdirCmd $headerDir1");
(!-d "$srcDir")&& system("$mkdirCmd $srcDir");

(-d "$headerDir$dirDelim$header") && system("$delCmd $headerDir$dirDelim$header");
foreach $arg (@headers) {
  (-d "$headerDir1$dirDelim$arg") && system("$delCmd $headerDir1$dirDelim$arg");
}

foreach $arg (@sources) {
  (-d "$srcDir$dirDelim$arg") && system("$delCmd $srcDir$dirDelim$arg");
}
$asnGenCmd = "$ASN1CC $ASN_FILES";

$status = system("$asnGenCmd");
($status!=0) && die "Error: ASN tool error status = $status\n";

  $status = system("$mvCmd $header $headerDir$dirDelim");
  ($status!=0) && die "Error: $mvCmd $header $headerDir$dirDelim";
foreach $arg (@headers) {
  $status = system("$mvCmd $arg $headerDir1$dirDelim");
  ($status!=0) && die "Error: $mvCmd $arg $headerDir1$dirDelim";
}

foreach $arg (@sources) {
  $status = system("$mvCmd $arg $srcDir$dirDelim");
  ($status!=0) && die "Error: $mvCmd $arg $srcDir$dirDelim";
}
}
exit 0;


sub Usage {

  warn << "__END_OF_USAGE";

Usage:
  ss_lcs_generate.pl ["output" ["mode"]]

Description:
  output     = .\\             (Default tool path: related to path mcu\\)
             = .\\test         (Output files to path: mcu\\test)

  mode       = C               (Generate COMMON function)
             = P               (Generate PRINT function)

Example:
  ss_lcs_generate.pl
  ss_lcs_generate.pl .\\modem\\l4\\csm\\ss\\tools\\test
  ss_lcs_generate.pl .\\modem\\l4\\csm\\ss\\tools\\test C
  ss_lcs_generate.pl .\\modem\\l4\\csm\\ss\\tools\\test P
__END_OF_USAGE

  exit 1;
}
