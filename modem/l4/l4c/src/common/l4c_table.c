/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * L4C_TABLE.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_TABLE_C

//#include "kal_release.h"        /* Basic data type */
//#include "kal_non_specific_general_types.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
#include "l4c_table.h"

#include "kal_general_types.h"

kal_uint16 const L4C_CMD_CONFLICT_TABLE[L4C_TOTAL_CONFLICT] = 
{
    ACTION_HASH(ATD_EXE, ATD_EXE),
#ifdef __SAT__
    ACTION_HASH(ATD_EXE, SAT_ATD_EXE),
#endif 
    ACTION_HASH(ATH_EXE, ATH_EXE),
    ACTION_HASH(CMGD_EXE, CMGD_EXE),
    ACTION_HASH(CMGS_EXE, CMGS_EXE),
#ifdef __SAT__
    ACTION_HASH(SAT_ATD_EXE, ATD_EXE)
#endif 
        /* ACTION_HASH(),
           ACTION_HASH(),
           ACTION_HASH(),
           ACTION_HASH(),
           ACTION_HASH(),
           ACTION_HASH() */
};

const kal_char *const RMMI_ERROR_MSG_TABLE[RMMI_MAX_ERROR_NUM] = 
{
    "phone failure",    //0
    //"no connection to phone", => 1
    "error cause: not specified",       //temporary, this entry should be "no connection to phone"!
    "phone-adaptor link reserved",      // 2
    "operation not allowed",    // 3
    "operation not supported",  // 4
    "PH-SIM PIN required",      // 5
    "PH-FSIM PIN required",     // 6
    "PH-FSIM PUK required",     //7
    "", //8
    "", //9
    "SIM not inserted", //10
    "SIM PIN required",
    "SIM PUK required",
    "SIM failure",
    "SIM busy",
    "SIM wrong",
    "incorrect password",
    "SIM PIN2 required",
    "SIM PUK2 required",
    "",
    "memory full",      //20
    "invalid index",
    "not found",
    "memory failure",
    "text string too long",
    "invalid characters in text string",
    "dial string too long",
    "invalid characters in dial string",
    "",
    "",
    "no network service",       //30
    "network timeout",
    "network not allowed - emergency calls only",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "network personalisation PIN required",     //40
    "network personalisation PUK required",
    "network subset personalisation PIN required",
    "network subset personalisation PUK required",
    "service provider personalisation PIN required",
    "service provider personalisation PUK required",
    "corporate personalisation PIN required",
    "corporate personalisation PUK required",   //47
    "", "", "", //50
    "", "", "", "", "", "", "", "", "", "",     //60
    "", "", "", "", "", "", "", "", "", "",     //70
    "", "", "", "", "", "", "", "", "", "",     // 80
    "", "", "", "", "", "", "", "", "", "",     //90
    "", "", "", "", "", //95
    "", "", "", "", "unknown",  //100
    "", "",
    "Illegal MS (#3)",  //103
    "", "",
    "Illegal ME (#6)",  //106
    "GPRS services not allowed (#7)",   //107
    "", "", "",
    "PLMN not allowed (#11)",   //111
    "Location area not allowed (#12)",  //112
    "Roaming not allowed in this location area (#13)",  //113
    "", "",     //115
    "", "", "", "", "", "", "", "", "", "",     //125
    "", "", "", "", "", "",     //131
    "service option not supported (#32)",       //132
    "requested service option not subscribed (#33)",    //133
    "service option temporarily out of order (#34)",    //134
    "", //135
    "", "", "", "", "", "", "", "", "", "",     //145
    "", "",
    "unspecified GPRS error",   //148
    "PDP authentication failure",       //149
    "invalid mobile class"      //150
};

const kal_uint8 MAP_PC_GSM7BIT_TABLE[128]   /* IBM PC */
    = { /* 80-89 */ 0x09, 0x7e, 0x05, 0x61, 0x7b, 0x7f, 0x0f, 0x09, 0x65, 0x65,
    /* 8A-93 */ 0x04, 0x69, 0x69, 0x07, 0x5b, 0x0e, 0x1f, 0x1d, 0x1c, 0x6f,
    /* 94-9D */ 0x7c, 0x08, 0x75, 0x06, 0x79, 0x5c, 0x5e, 0x9b, 0x01, 0x9d,
    /* 9E-A7 */ 0, 0, 0x61, 0x69, 0x6f, 0x75, 0x7d, 0x5d, 0, 0,
    /* A8-B1 */ 0x60, 0, 0, 0, 0, 0x40, 0, 0, 0, 0,
    /* B2-BB */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* BC-C5 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* C6-CF */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* D0-D9 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* DA-E3 */ 0, 0, 0, 0, 0, 0, 0, 0x1e, 0x13, 0,
    /* E4-ED */ 0x18, 0, 0, 0, 0x12, 0x19, 0x15, 0, 0, 0,
    /* EE-F7 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* F8-FF */ 0, 0, 0, 0, 0, 0, 0, 0
};

const kal_uint8 MAP_ISO_GSM7BIT_TABLE[128]  /* Windows */
    = { /* 80-89 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* 8A-93 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* 94-9D */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* 9E-A7 */ 0, 0, 0, 0x40, 0, 0x01, 0x24, 0x03, 0, 0x5f,
    /* A8-B1 */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* B2-BB */ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* BC-C5 */ 0, 0, 0, 0x60, 0x41, 0x41, 0x41, 0x41, 0x5b, 0x0e,
    /* C6-CF */ 0x1c, 0x09, 0x45, 0x1f, 0x45, 0x45, 0x49, 0x49, 0x49, 0x49,
    /* D0-D9 */ 0, 0x5d, 0x4f, 0x4f, 0x4f, 0x4f, 0x5c, 0, 0x0b, 0x55,
    /* DA-E3 */ 0x55, 0x55, 0x5e, 0x59, 0, 0x1e, 0x7f, 0x61, 0x61, 0x61,
    /* E4-ED */ 0x7b, 0x0f, 0x1d, 0x09, 0x04, 0x05, 0x65, 0x65, 0x07, 0x69,
    /* EE-F7 */ 0x69, 0x69, 0, 0x7d, 0x08, 0x6f, 0x6f, 0x6f, 0x7c, 0,
    /* F8-FF */ 0x0c, 0x06, 0x75, 0x75, 0x7e, 0x79, 0, 0x79
};


const kal_uint8 AsciiToGSM7BitArray[] =
{     0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 00-09
      0x0a, 0x20, 0x20, 0x0d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 0A-13
      0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 14-1D
      0x20, 0x20, 0x20, 0x21, 0x22, 0x23, 0x02, 0x25, 0x26, 0x27, // 1E-27
      0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, // 28-31
      0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, // 32-3B
      0x3c, 0x3d, 0x3e, 0x3f, 0x00, 0x41, 0x42, 0x43, 0x44, 0x45, // 3C-45
      0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, // 46-4F
      0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, // 50-59
      0x5a, 0x20, 0x20, 0x20, 0x20, 0x11, 0x20, 0x61, 0x62, 0x63, // 5A-63
      0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, // 64-6D
      0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, // 6E-77
      0x78, 0x79, 0x7a, 0x20, 0x20, 0x20, 0x20, 0x20              // 78-7F
};

const kal_uint8 GSM7BitToAsciiArray[128] = 
{
    64, 163, 36, 165, 232, 233, 249, 236, 242, 199,
    10, 216, 248, 13, 197, 229, 16, 95, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 198, 230,
    223, 200, 32, 33, 34, 35, 164, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 161, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 196, 214, 209, 220, 167, 191, 97, 98, 99,
    100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
    110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 228, 246, 241, 252, 224
};

