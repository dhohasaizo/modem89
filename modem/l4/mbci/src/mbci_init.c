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

/*******************************************************************************
 * Filename:
 * ---------
 *   mbci_init.c
 *
 * Project:
 * --------
 *   MT6280
 *
 * Description:
 * ------------
 *   This file is intends for MBCI implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define MBCI_INIT_C

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "stack_config.h"
#include "mbci_context.h"

mbci_context_struct mbci_cntxt_g[MBCI_MAX_SIM_NUM];
module_type mbci_current_mod_id;       
mbci_context_struct *mbci_ptr_g;

const kal_uint8 mbim_uuid_tbl[MBIM_UUID_MAX][16] = {
        {0xa2,0x89,0xcc,0x33,0xbc,0xbb,0x8b,0x4f,0xb6,0xb0,0x13,0x3e,0xc2,0xaa,0xe6,0xdf},
        {0x53,0x3f,0xbe,0xeb,0x14,0xfe,0x44,0x67,0x9f,0x90,0x33,0xa2,0x23,0xe5,0x6c,0x3f},
        {0xe5,0x50,0xa0,0xc8,0x5e,0x82,0x47,0x9e,0x82,0xf7,0x10,0xab,0xf4,0xc3,0x35,0x1f},
        {0x4b,0xf3,0x84,0x76,0x1e,0x6a,0x41,0xdb,0xb1,0xd8,0xbe,0xd2,0x89,0xc2,0x5b,0xdb},
        {0xd8,0xf2,0x01,0x31,0xfc,0xb5,0x4e,0x17,0x86,0x02,0xd6,0xed,0x38,0x16,0x16,0x4c},
        {0x1d,0x2b,0x5f,0xf7,0x0a,0xa1,0x48,0xb2,0xaa,0x52,0x50,0xf1,0x57,0x67,0x17,0x4e},
        {0xc0,0x8a,0x26,0xdd,0x77,0x18,0x43,0x82,0x84,0x82,0x6e,0x0d,0x58,0x3c,0x4d,0x0e},
        {0x88,0x3b,0x7c,0x26,0x98,0x5f,0x43,0xfa,0x98,0x04,0x27,0xd7,0xfb,0x80,0x95,0x9c},  // MBIM_UUID_MS_HOSTSHUTDOWN
        {0x86,0x38,0x53,0xa0,0xfc,0xa4,0x11,0xe1,0xa2,0x1f,0x08,0x00,0x20,0x0c,0x9a,0x66}}; // MBIM_UUID_MTK_VENDOR_CMD 

const kal_uint8 mbim_context_type_tbl[MBIM_CONTEXT_TYPE_MAX][16] = {
        {0xb4,0x3f,0x75,0x8c,0xa5,0x60,0x4b,0x46,0xb3,0x5e,0xc5,0x86,0x96,0x41,0xfb,0x54},
        {0x7e,0x5e,0x2a,0x7e,0x4e,0x6f,0x72,0x72,0x73,0x6b,0x65,0x6e,0x7e,0x5e,0x2a,0x7e},
        {0x9b,0x9f,0x7b,0xbe,0x89,0x52,0x44,0xb7,0x83,0xac,0xca,0x41,0x31,0x8d,0xf7,0xa0},
        {0x88,0x91,0x82,0x94,0x0e,0xf4,0x43,0x96,0x8c,0xca,0xa8,0x58,0x8f,0xbc,0x02,0xb2},
        {0x05,0xa2,0xa7,0x16,0x7c,0x34,0x4b,0x4d,0x9a,0x91,0xc5,0xef,0x0c,0x7a,0xaa,0xcc},
        {0xb3,0x27,0x24,0x96,0xac,0x6c,0x42,0x2b,0xa8,0xc0,0xac,0xf6,0x87,0xa2,0x72,0x17},        
        {0x21,0x61,0x0d,0x01,0x30,0x74,0x4b,0xce,0x94,0x25,0xb5,0x3a,0x07,0xd6,0x97,0xd6},
        {0x46,0x72,0x66,0x64,0x72,0x69,0x6b,0xc6,0x96,0x24,0xd1,0xd3,0x53,0x89,0xac,0xa9},
        {0xa5,0x7a,0x9a,0xfc,0xb0,0x9f,0x45,0xd7,0xbb,0x40,0x03,0x3c,0x39,0xf6,0x0d,0xb9}};

/*****************************************************************************
 * FUNCTION
 *  mbci_init_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool mbci_init_context()
{
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    mbci_ptr->state = MBCI_STATE_CLOSE;

    mbci_ptr->loopback_mode = KAL_FALSE;

    mbci_ptr->SignalStrengthDisable = KAL_TRUE;
    mbci_ptr->SignalStrengthInterval = 30;
    mbci_ptr->RssiThreshold = 0;
    mbci_ptr->ErrorRateThreshold = 0;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool mbci_init()
{
    kal_bool ret_val = KAL_FALSE;
    kal_int32 i = 1;

    for (i = MBCI_MAX_SIM_NUM-1; i >= 0; i--)
    {
        mbci_ptr_g = &mbci_cntxt_g[i];
        kal_mem_set((kal_uint8*) MBCI_PTR, (kal_uint32) 0, (kal_uint32) sizeof(mbci_context_struct));
        mbci_current_mod_id = L4_MODULE(MOD_MBCI, i);

        ret_val = mbci_init_context();
    }

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_reset
 * DESCRIPTION
 *  
 * PARAMETERS
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool mbci_reset(void)
{

    return KAL_TRUE;
}


