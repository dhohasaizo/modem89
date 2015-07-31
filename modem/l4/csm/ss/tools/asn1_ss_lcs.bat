@echo off
@REM  #####################################################
@REM  ## Compiler Optiona Setting                        ##
@REM  #####################################################
REM ***************************************************************************
REM 
REM  COMPONENT:    SS (used by AGPS)
REM  MODULE:       ASN1
REM  DESCRIPTION:  Invokes MTKASN.1 compiler with appropriate directives
REM  Author:       kc_lin@mediatek.com
REM ***************************************************************************

@REM Support Customer Release
set ASN_TARGET_PATH=..\..\..\..\..\%1
if not exist %ASN_TARGET_PATH% echo PATH:"%ASN_TARGET_PATH%" is not existed!
if not exist %ASN_TARGET_PATH% echo Fail to move ASN files to %ASN_TARGET_PATH%
if exist %ASN_TARGET_PATH% echo Start to move ASN files to %ASN_TARGET_PATH%

@set ASN1CC=..\..\tools\mtkasn.exe
set ASN1CC=mtkasn.exe
set ASN1CCLOG=asn1_ss_lcs.log
set CODING_RULE=BER
set PREFIX=SS2_
set SUPPORT_QUERY_SEQUENCE_MANDATORY_BITMAP=0
set SINGLE_ROOT_MODULE=0
set OUTPUT_NAME=ss_asn
set REENTRANT_CALLBACKS=1
set ENCODE_BUFFER_SIZE=1024
set PREFIX_ALL_CHOICE_SELECTORS=1
set PREFIX_ALL_SEQUENCE_SELECTORS=1
set PREFIX_ALL_ENUMERATED_SELECTORS=1
set PREFIX_ALL_VALUES=0
set DECODER_RETURNS_CONSUMED_INPUT=1
set DECODER_LENGTH_IN_BITS=1
set PRINT_RECURSIVELIST=0
set REF_ALL_INDIRECT=0
set DEBUG_MEM_ALLOC=0
set SUPPORT_CHECK_BOUNDARY=1
set UPPER_ALL_CONSTANT_DEFINE=1
set HEAD_FILE_INCLUDE=""applib2_asn_memory.h";"applib2_asn_common.h";"applib2_asn_ber_common.h";"applib2_mtkasn_global.h";"kal_general_types.h";"string.h";"setjmp.h""
set HEAD_FILE_INCLUDE_FOR_H=""applib2_mtkasn_global.h";"kal_general_types.h";"applib2_asn_common.h""
set SUPPORT_FILE_USE_MACRO=1
set SUPPORT_FILE_USE_MACRO_NAME=__AGPS_CONTROL_PLANE__

@
set SUPPORT_VERSION=2
set SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES=1
set SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES_PREFIX=applib2_

if "%2"==""  (
   set GENERATE_COMMON_FUNCTIONS=0
   set GENERATE_PRINT_FUNCTIONS=0
)

if "%2"=="C" (
   set GENERATE_COMMON_FUNCTIONS=1
   set GENERATE_PRINT_FUNCTIONS=0
)

if "%2"=="P" (
   set GEN_PRINTF_FILE=1
)
@REM  #####################################################
@REM  ## invoke the compiler                             ##
@REM  #####################################################


@REM Remove prior code generation #########################
if exist %ASN_TARGET_PATH%\ss_asn.h DEL /F /Q %ASN_TARGET_PATH%\ss_asn.h
if exist %ASN_TARGET_PATH%\ss_asn.c DEL /F /Q %ASN_TARGET_PATH%\ss_asn.c
if exist %ASN_TARGET_PATH%\ss_asn_decode.c DEL /F /Q %ASN_TARGET_PATH%\ss_asn_decode.c
if exist %ASN_TARGET_PATH%\ss_asn_encode.c DEL /F /Q %ASN_TARGET_PATH%\ss_asn_encode.c

@REM common include file used by ASN ######################
REM DEL /F /Q %ASN_TARGET_PATH%\applib2_mtkasn_global.h
REM DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_memory.h
REM DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_memory.c
REM DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_common.h
REM DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_common.c

if exist %ASN_TARGET_PATH%\applib2_asn_ber_common.h DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_ber_common.h
if exist %ASN_TARGET_PATH%\applib2_asn_ber_common.h DEL /F /Q %ASN_TARGET_PATH%\applib2_asn_ber_common.c

%ASN1CC% ..\asn1\asn1_src\MAP_BS_Code.asn ..\asn1\asn1_src\MAP_CommonDataTypes.asn ..\asn1\asn1_src\MAP_Errors.asn ..\asn1\asn1_src\MAP_ER_DataTypes.asn ..\asn1\asn1_src\MAP_ExtensionDataTypes.asn ..\asn1\asn1_src\MAP_LCS_DataTypes.asn ..\asn1\asn1_src\MAP_MS_DataTypes.asn ..\asn1\asn1_src\MAP_OM_DataTypes.asn ..\asn1\asn1_src\MAP_SM_DataTypes.asn ..\asn1\asn1_src\MAP_SS_Code.asn ..\asn1\asn1_src\MAP_SS_DataTypes.asn ..\asn1\asn1_src\MAP_TS_Code.asn ..\asn1\asn1_src\Remote_Operations_Generic_ROS_PDUs.asn ..\asn1\asn1_src\Remote_Operations_Information_Objects.asn ..\asn1\asn1_src\Remote_Operations_Useful_Definitions.asn ..\asn1\asn1_src\SS_DataTypes.asn ..\asn1\asn1_src\SS_Errors.asn ..\asn1\asn1_src\SS_Operations.asn  > %ASN1CCLOG%

MOVE /Y  ss_asn.h %ASN_TARGET_PATH%\
MOVE /Y  ss_asn.c %ASN_TARGET_PATH%\
MOVE /Y  ss_asn_decode.c %ASN_TARGET_PATH%\
MOVE /Y  ss_asn_encode.c %ASN_TARGET_PATH%\

@REM common include file used by ASN ######################
MOVE /Y  applib2_mtkasn_global.h %ASN_TARGET_PATH%\
MOVE /Y  applib2_asn_memory.h %ASN_TARGET_PATH%\
MOVE /Y  applib2_asn_memory.c %ASN_TARGET_PATH%\
REM # before tag problem solved dont move it#
MOVE /Y  applib2_asn_common.h %ASN_TARGET_PATH%\
MOVE /Y  applib2_asn_common.c %ASN_TARGET_PATH%\
MOVE /Y  applib2_asn_ber_common.h %ASN_TARGET_PATH%\
MOVE /Y  applib2_asn_ber_common.c %ASN_TARGET_PATH%\

@REM  #####################################################
@REM  ## applib has defined this files                   ##
@REM  #####################################################
REM DEL /F /Q .\applib2_mtkasn_global.h
REM DEL /F /Q .\applib2_asn_memory.h
REM DEL /F /Q .\applib2_asn_memory.c
REM DEL /F /Q .\applib2_asn_common.h
REM DEL /F /Q .\applib2_asn_common.c

set ASN1CC=
set ASN1CCLOG=
set CODING_RULE=
set PREFIX=
set SUPPORT_QUERY_SEQUENCE_MANDATORY_BITMAP=
set SINGLE_ROOT_MODULE=
set OUTPUT_NAME=
set REENTRANT_CALLBACKS=
set ENCODE_BUFFER_SIZE=
set PREFIX_ALL_CHOICE_SELECTORS=
set PREFIX_ALL_SEQUENCE_SELECTORS=
set PREFIX_ALL_ENUMERATED_SELECTORS=
set PREFIX_ALL_VALUES=
set DECODER_RETURNS_CONSUMED_INPUT=
set DECODER_LENGTH_IN_BITS=
set DEBUG_MEM_ALLOC=
set PRINT_RECURSIVELIST=
set REF_ALL_INDIRECT=
set SUPPORT_CHECK_BOUNDARY=
set UPPER_ALL_CONSTANT_DEFINE=
set HEAD_FILE_INCLUDE=
set SUPPORT_VERSION=
set SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES=
set SUPPORT_GENERATE_ALTERNATIVE_COMMONFILES_PREFIX=

