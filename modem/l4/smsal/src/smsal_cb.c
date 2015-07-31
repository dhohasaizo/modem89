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
 * smsal_cb.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions handling for cb inside SMSAL.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
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

#ifndef __SMSAL_XXX_C
#define __SMSAL_XXX_C
#endif

#define SMSAL_CB_C

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_sap.h"
#include "l4_msgid.h"
#include "ratcm_msgid.h"
#include "sim_ps_msgid.h"
//#include "mmi_msgid.h"

#include "bitop_funcs.h"                /* for bit operations */

#include "task_config.h"                /* Task creation */

/* Timer Management  */
#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"

/* SMSAL <--> L4C */
#include "l4c_common_enum.h"            /* For src id */
#include "l4c2smsal_struct.h"

#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"

/* NVRAM */
#include "nvram_editor_data_item.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"
#include "smsal_other_funcs.h"
#include "smsal_l4c_msgs.h"
#include "smsal_parameter.h"
#include "smsal_storage.h"

/* SIM */
#include "ps2sim_struct.h"
#include "ps2sat_struct.h"
#include "sim_common_enums.h"

/* NVRAM */
#include "nvram_data_items.h"           /* for file IDs */

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "kal_public_defs.h"

#include "l4_ps_api.h"


#if !defined(__MTK_TARGET__)
#include <stdio.h>
#define CBDBG_(x) x
#else
#define CBDBG_(x)
#endif
#if 0
#ifndef __MTK_TARGET__
#ifdef __SMSAL_UT__
/* under construction !*/
/* under construction !*/
#endif
#endif
#endif
// #define CB_DEBUG_INFO

#ifdef CB_DEBUG_INFO
#include "stdarg.h"
kal_char cb_str_buff[128];

#define SMSAL_DBG smsal_dbg_print
void smsal_dbg_print(char *fmt, ...);
#else
#define SMSAL_DBG(x)
#endif

#if defined (__SMSAL_UT__)
#include "smsal_main.h"
#endif

#ifdef CB_DEBUG_INFO

void smsal_dbg_print(char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    vsprintf(cb_str_buff, fmt, args);

#if !defined(__MTK_TARGET__)
    printf("%s\n", cb_str_buff);
#else
    tst_sys_trace(cb_str_buff);
#endif
    va_end(args);

}
#endif

const kal_uint8 smsal_cb_lang_ISO639_to_CBDCS[SMSAL_DEFAULT_DCS_ENTRY*3] =
{
                                         'd', 'e', 0x00,
                                         'e', 'n', 0x01,
                                         'i', 't', 0x02,
                                         'f', 'r', 0x03,
                                         'e', 's', 0x04,
                              
                                         'n', 'l', 0x05,
                                         's', 'v', 0x06,
                                         'd', 'a', 0x07,
                                         'p', 't', 0x08,
                                         'f', 'i', 0x09,

                                         'n', 'o', 0x0a,
                                         'e', 'l', 0x0b,
                                         't', 'r', 0x0c,
                                         'h', 'u', 0x0d,
                                         'p', 'l', 0x0e,

                                         'c', 's', 0x20,
                                         'h', 'e', 0x21,
                                         'a', 'r', 0x22,
                                         'r', 'u', 0x23,
                                         'i', 's', 0x24,
                                        
                                         '?', '?', 0x0f
                                        };   // unspecified (other language)

kal_uint16 smsal_cb_conver_CBDCS_to_ISO639(kal_uint16 CBDCS)
{
    kal_uint8 i;
    SMSAL_ASSERT('a'==97);  // make sure that GSM default 7-bit == anscii

    for( i=0 ; i<SMSAL_DEFAULT_DCS_ENTRY ; i++)
    {
        if( smsal_cb_lang_ISO639_to_CBDCS[i*3+2] == (CBDCS & 0x00ff ))
        {
            return (kal_uint16)((kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3] << 8) +
                    (kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3+1]));
        }
    }
    
    return SMSAL_CB_UNUSED_ISO639;
}

kal_uint16 smsal_cb_conver_ISO639_to_CBDCS(kal_uint16 ISO639)
{
    kal_uint8 i;
    SMSAL_ASSERT('a'==97);  // make sure that GSM default 7-bit == anscii
    SMSAL_ASSERT('A'==65);

    for( i=0 ; i<SMSAL_DEFAULT_DCS_ENTRY ; i++)
    {
        if( smsal_cb_lang_ISO639_to_CBDCS[i*3]   == (ISO639 >> 8) &&
            smsal_cb_lang_ISO639_to_CBDCS[i*3+1] == (ISO639 & 0x00ff) )
        {
            return (kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3+2]);
        }

        if( smsal_cb_lang_ISO639_to_CBDCS[i*3]-('a'-'A')   == (ISO639 >> 8) &&
            smsal_cb_lang_ISO639_to_CBDCS[i*3+1]-('a'-'A') == (ISO639 & 0x00ff) )
        {
            return (kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3+2]);
        }

    }
    return SMSAL_CB_UNUSED_DCS;
}


kal_bool smsal_cb_is_in_default_lang_list(kal_uint16 temp_dcs, kal_bool isISO639, kal_uint16 *index)
{
    kal_uint16 k;
    if(isISO639 == KAL_TRUE)
    {
        for(k=0 ; k<(SMSAL_DEFAULT_DCS_ENTRY) ; k++)
        {
            // upper and lower case are the same
            if ( (kal_uint16)smsal_cb_lang_ISO639_to_CBDCS[k*3] == (temp_dcs >> 8) &&
                 (kal_uint16)smsal_cb_lang_ISO639_to_CBDCS[k*3+1] == (temp_dcs & 0x00ff) )
            {
                break;
            }
            if ( (kal_uint16)smsal_cb_lang_ISO639_to_CBDCS[k*3]-('a'-'A') == (temp_dcs >> 8) &&
                 (kal_uint16)smsal_cb_lang_ISO639_to_CBDCS[k*3+1]-('a'-'A') == (temp_dcs & 0x00ff) )
            {
                break;
            }
        }
    }
    else
    {
        for(k=0 ; k<(SMSAL_DEFAULT_DCS_ENTRY) ; k++)
        {
            if ( smsal_cb_lang_ISO639_to_CBDCS[k*3+2] == (temp_dcs) )
            {
                break;
            }
        }
    }

    *index = k;

    return ( (k==(SMSAL_DEFAULT_DCS_ENTRY)) ? KAL_FALSE : KAL_TRUE );
}


/*****************************************************************************
* FUNCTION
*  smsal_decode_cbsdcs
* DESCRIPTION
*   This function decodes the data coding scheme.
*
* PARAMETERS
*  a  IN       dcs
*  b  IN/OUT   alphabet_type
*  c  IN/OUT   msg_class
*  d  IN/OUT   compress
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_decode_cbsdcs(kal_uint8            dcs,
                         kal_uint8            *lang_type,
                         smsal_dcs_enum       *alphabet_type,
                         smsal_msg_class_enum *msg_class,
                         kal_bool             *is_compress,
                         kal_bool             *is_reserved )
{
    kal_uint8 coding_group = (dcs >> 4);
    kal_uint8 coding_bits = (dcs & 0x0f);

    *is_compress = KAL_FALSE;
    *is_reserved = KAL_FALSE;
    *msg_class = SMSAL_CLASS_UNSPECIFIED;
    *alphabet_type = SMSAL_DEFAULT_DCS;

    switch (coding_group)
    {
        case 0x00:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            *lang_type = coding_bits;
            break;
        case 0x01:
            if (coding_bits == 0)
                *alphabet_type = SMSAL_DEFAULT_DCS;
            else if (coding_bits == 1)
                *alphabet_type = SMSAL_UCS2_DCS;
            else
                *alphabet_type = SMSAL_RESERVED_DCS;
            break;
        case 0x02:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            if (coding_bits <= 0x04)
                *lang_type = coding_bits;
            else
                *alphabet_type = SMSAL_RESERVED_DCS;
            break;
        case 0x03:
            *alphabet_type = SMSAL_DEFAULT_DCS;
            break;
        case 0x04:                     /* General Data Coding Scheme */
        case 0x05:
        case 0x06:
        case 0x07:
            if ((coding_group & 0x02) != 0)
                *is_compress = KAL_TRUE;

            if ((coding_group & 0x01) == 0x01)
                *msg_class = (smsal_msg_class_enum) (dcs & 0x03);

            *alphabet_type = (smsal_dcs_enum) (dcs & SMSAL_RESERVED_DCS);
            break;

        case 0x08:                     /* 0x08 - 0x0d: Reserved */
            *alphabet_type = SMSAL_RESERVED_DCS;
            break;

        case 0x09:                     /* UDH structure, do it in the future */
            *is_reserved = KAL_TRUE;
            break;

        case 0x0a:
        case 0x0b:
        case 0x0c:
        case 0x0d:
            *alphabet_type = SMSAL_RESERVED_DCS;
            break;
        case 0x0e:                     /* defined by WAP forum */
            break;
        case 0x0f:                     /* Data Coding/Message Class */
            *is_reserved = ((dcs & SMSAL_UCS2_DCS) == SMSAL_UCS2_DCS) ? KAL_TRUE : KAL_FALSE;
            *msg_class = (smsal_msg_class_enum) (dcs & 0x03);
            if (*msg_class == 0)
                *msg_class = SMSAL_CLASS_UNSPECIFIED;   /* no msg class */

            *alphabet_type = (smsal_dcs_enum) (dcs & SMSAL_8BIT_DCS);
            break;
        default:
            break;
    }

    /* 
     * if the reserved bit been set or the alphabet_type uses the reserved one,
     * then according GSM 23.038 clause 5:
     * "Any reserved codings shall be assumed to be the GSM default alphabet."
     * we change it as SMSAL_DEFAULT_DCS
     */

#ifndef __USSD_AUTO_REJECT__
    /* if support auto reject, L4 will check the unsupported USSD dcs */
    /* keep the original dcs info for L4 */
    if (*alphabet_type == SMSAL_RESERVED_DCS)
    {
        /* target trace */
        kal_brief_trace(TRACE_INFO, INFO_CB_RESERVED_PAGE_INFO);
        CBDBG_(printf("recv a a reserved_dcs cb page\n");)

        *alphabet_type = SMSAL_DEFAULT_DCS;
    }
#endif
    return;
}                                       /* end of smsal_decode_cbsdcs */


#ifdef __CB__
#include "smsal_cb.h"
#include "smsal_ratcm_struct.h"

/*****************************************************************************
* FUNCTION
*  smsal_cb_init
* DESCRIPTION
*   This function initializes CB structs in SMSAL.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cb_init_context(void)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i = 0;

    smsal_cb_data_ptr->cbch_req = KAL_FALSE;
    smsal_cb_data_ptr->hz_act = KAL_FALSE;
    smsal_cb_data_ptr->all_lang_on = KAL_TRUE;

    for (i = 0; i < SMSAL_DEFAULT_CBMI_ENTRY; i++)
        smsal_cb_data_ptr->cbmi_default[i] = SMSAL_CB_UNUSED_CBMI;

    for (i = 0 ; i < CB_MAX_MSG_CBMI_NUM ; i++)
    {
        smsal_cb_data_ptr->cbmi[i] = SMSAL_CB_UNUSED_CBMI;
        smsal_cb_data_ptr->cbmi_mask[i] = KAL_TRUE;
    }

    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        smsal_cb_data_ptr->cbmid[i] = SMSAL_CB_UNUSED_CBMI;
        smsal_cb_data_ptr->cbmir[i * 2] = SMSAL_CB_UNUSED_CBMI;
        smsal_cb_data_ptr->cbmir[i * 2 + 1] = SMSAL_CB_UNUSED_CBMI;
        if( i<SMSAL_DEFAULT_DCS_ENTRY )
        {
            smsal_cb_data_ptr->dcs[i] = (kal_uint16)((kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3] << 8) + (kal_uint16)(smsal_cb_lang_ISO639_to_CBDCS[i*3+1]));
        }
        else
        {
            smsal_cb_data_ptr->dcs[i] = SMSAL_CB_UNUSED_DCS;
        }

        smsal_cb_data_ptr->cbmir_mask[i] = KAL_TRUE;
        smsal_cb_data_ptr->dcs_mask[i] = KAL_FALSE;
    }

    smsal_cb_data_ptr->is_elp_used = KAL_FALSE;
    smsal_cb_data_ptr->is_li_used = KAL_FALSE;

    smsal_cb_data_ptr->dcs_num = SMSAL_DEFAULT_DCS_ENTRY;   /* CBS DCS 20 language + unspecified (other language) */
    smsal_cb_data_ptr->dcs_num_sim = 0;
    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    smsal_cb_data_ptr->cbmi_num = 0;
    smsal_cb_data_ptr->cbmir_num = SMSAL_CB_MAX_ENTRY;
    smsal_cb_data_ptr->is_cbmir_in_nvram = KAL_FALSE;
    #else
    smsal_cb_data_ptr->cbmi_num = SMSAL_CBMI_ME_ENTRY;
    smsal_cb_data_ptr->cbmir_num = SMSAL_CB_MAX_ENTRY;
    smsal_cb_data_ptr->is_cbmir_in_nvram = KAL_TRUE;
    #endif
    
    
    smsal_cb_data_ptr->cbmid_num = 0;

    for (i = 0; i < SMSAL_CB_MAX_SESSION; i++)
        smsal_cb_ctrl_blk_reset(i);

#ifdef __SAT__
#ifdef __REL6__
    smsal_cb_data_ptr->local_para_ptr = NULL;
    smsal_cb_data_ptr->peer_buff_ptr = NULL;
#endif
#endif

    smsal_cb_data_ptr->set_type = L4C_NORMAL_CB_UPDATE;
}                                       /* end of smsal_cb_init_context */


/*****************************************************************************
* FUNCTION
*  smsal_cb_entry_func
* DESCRIPTION
*   This function is the entry function for messages come form NVRAM.
*
* PARAMETERS
*  a  IN       ilm_ptr
* RETURNS
*  the description of return value, if any.
* GLOBALS AFFECTED
*   external_global
*****************************************************************************/
void smsal_cb_entry_func(ilm_struct *ilm_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_L4CSMSAL_CB_UPDATE_REQ:
            smsal_cb_update_req_handler(ilm_ptr->local_para_ptr);
            break;
    #ifdef __HOMEZONE_SUPPORT__
        case MSG_ID_L4CSMSAL_HZ_CB_ACT_REQ:
            smsal_cb_hz_act_handler(ilm_ptr->local_para_ptr);
            break;
    #endif

        case MSG_ID_SMSAL_RATCM_CB_DATA_IND:
            smsal_ratcm_cb_data_ind_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_SMSAL_RATCM_CB_RECONFIG_IND:
            /* after IRAT, ratcm doesn't keep the cbch_req info. */
            smsal_cb_send_cbch_req(smsal_cb_data_ptr->cbch_req);
            smsal_cb_update_rmc_cb();
            break;

        case MSG_ID_SMSAL_RATCM_CB_GS_CHANGE_IND:
            smsal_cb_gs_change_ind_handler(ilm_ptr->local_para_ptr);
            break;

        /* this message is replaced by set_parameter_req */
        //case MSG_ID_L4CSMSAL_CBCH_REQ:   
        //    smsal_cbch_req_handler(ilm_ptr->local_para_ptr);
        //    break;

        default:
            /* LOG ERROR */
            return;
    }                                   /* switch (msg_id) */

    return;
}                                       /* end of smsal_cb_entry_func */

void smsal_cb_send_cbch_req(kal_uint8 cbch_req)
{
    smsal_ratcm_cbch_req_struct *cbch_req1_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_CBCH_REQ_HANDLER);

    cbch_req1_ptr = (smsal_ratcm_cbch_req_struct *) construct_local_para
                        (sizeof(smsal_ratcm_cbch_req_struct), TD_CTRL );

    cbch_req1_ptr->is_cbs_required = cbch_req;

    kal_brief_trace(TRACE_INFO, INFO_SEND_SMSAL_AS_CBCH_REQ);

    smsal_send_msg_to_ratcm(MSG_ID_SMSAL_RATCM_CBCH_REQ,
                            (local_para_struct*) cbch_req1_ptr,
                            NULL);

    return;
}

/*****************************************************************************
* FUNCTION
*  smsal_cbch_req_handler
* DESCRIPTION
*   This function handles the SET PARAMETER request from L4C.
*   The SET implicitly save the parameters. 
*
* PARAMETERS
*  a  IN       local_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cbch_req_handler(kal_uint8 src, kal_uint8 cbch_req)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_cb_data_ptr->cbch_req = cbch_req;

    if (smsal_cb_data_ptr->hz_act == KAL_FALSE)
        smsal_cb_send_cbch_req(smsal_cb_data_ptr->cbch_req);

    smsal_cb_update_rmc_cb();
    return;
}                                       /* end of smsal_cbch_req_handler */


#ifdef __HOMEZONE_SUPPORT__
void smsal_cb_hz_act_handler(local_para_struct *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    l4csmsal_hz_cb_act_req_struct *hz_act_req;

    hz_act_req = (l4csmsal_hz_cb_act_req_struct *) local_para_ptr;

    if (hz_act_req->action == smsal_cb_data_ptr->hz_act)
        return;

    smsal_cb_data_ptr->hz_act = hz_act_req->action;

    if (smsal_cb_data_ptr->cbch_req == KAL_FALSE)
        smsal_cb_send_cbch_req(smsal_cb_data_ptr->hz_act);

    smsal_cb_update_rmc_cb();

    return;
}
#endif


void smsal_encode_cb_ch_info(smsal_set_cb_aux_info_struct *aux_info,
                             kal_uint8 *pdu_ptr)
{
    kal_uint8 i;
    kal_uint8 bits = 0;
    kal_uint8 *data_ptr;
    nvram_ef_cb_ch_info_struct *ch_info;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));

    ch_info = (nvram_ef_cb_ch_info_struct *) pdu_ptr;

    if(smsal_cb_data_ptr->is_cbmir_in_nvram == KAL_TRUE)
    {
        /* CBMIR mask */
        data_ptr = (kal_uint8 *) ch_info->cbmir_mask;
        kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY+7)/8);
        
        /* CBMIR mask (NVRAM) */
        data_ptr = (kal_uint8 *) ch_info->cbmir_me_mask;
        kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY+7)/8);
        bits = 0;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            put_bits_1_8(data_ptr, bits % 8, 1, aux_info->cbmir_mask[i]);
            data_ptr += (bits % 8 + 1) / 8;
            bits += 1;
        }
        
        /* CBMIR (NVRAM) */
        data_ptr = (kal_uint8 *) ch_info->cbmir;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY*2; i++)
        {
            /* one U16 to two U8s */
            data_ptr[2 * i] = (kal_uint8) (aux_info->cbmir[i] >> 8);
            data_ptr[2 * i + 1] = (kal_uint8) (aux_info->cbmir[i] & 0x00ff);
        }
    }
    else
    {
        /* CBMIR mask */
        data_ptr = (kal_uint8 *) ch_info->cbmir_mask;
        kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY+7)/8);
        bits = 0;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            put_bits_1_8(data_ptr, bits % 8, 1, aux_info->cbmir_mask[i]);
            data_ptr += (bits % 8 + 1) / 8;
            bits += 1;
        }

        /* CBMIR mask (NVRAM) */
        data_ptr = (kal_uint8 *) ch_info->cbmir_me_mask;
        kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY+7)/8);
        
        /* CBMIR (NVRAM) */
        data_ptr = (kal_uint8 *) ch_info->cbmir;
        kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY*4));
        
    }

    /* DCS mask */
    data_ptr = (kal_uint8 *) ch_info->dcs_mask;
    kal_mem_set(data_ptr, 0xff, (SMSAL_CB_MAX_ENTRY+7)/8);
    bits = 0;
    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        put_bits_1_8(data_ptr, bits % 8, 1, aux_info->dcs_mask[i]);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }
    
    /* DCS */
    data_ptr = (kal_uint8 *) ch_info->dcs;
    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        /* one U16 to two U8s */
        data_ptr[2 * i] = (kal_uint8) (aux_info->dcs[i] >> 8);
        data_ptr[2 * i + 1] = (kal_uint8) (aux_info->dcs[i] & 0x00ff);
    }

    /* CBMI mask (NVRAM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi_me_mask;
    kal_mem_set(data_ptr, 0xff, (SMSAL_CBMI_ME_ENTRY+7)/8);
    bits = 0;
    for (i = 0; i < SMSAL_CBMI_ME_ENTRY; i++)
    {
        put_bits_1_8(data_ptr, bits % 8, 1, aux_info->cbmi_mask[i]);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }

    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    /* CBMI mask (SIM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi_sim_mask;
    kal_mem_set(data_ptr, 0xff, (SMSAL_CBMI_SIM_ENTRY+7)/8);
    bits = 0;
    for (i = SMSAL_CBMI_ME_ENTRY; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
    {
        put_bits_1_8(data_ptr, bits % 8, 1, aux_info->cbmi_mask[i]);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }
    #endif

    /* CBMI (NVRAM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi;
    for (i = 0; i < SMSAL_CBMI_ME_ENTRY; i++)
    {
        /* one U16 to two U8s */
        data_ptr[2 * i] = (kal_uint8) (aux_info->cbmi[i] >> 8);
        data_ptr[2 * i + 1] = (kal_uint8) (aux_info->cbmi[i] & 0x00ff);
    }

    return;

}                                       /* end of smsal_encode_cb_ch_info */

void smsal_decode_cb_ch_info(kal_uint8 *frame)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i;
    kal_uint8 bits = 0;
    kal_uint8 *data_ptr;
    nvram_ef_cb_ch_info_struct *ch_info;

    ch_info = (nvram_ef_cb_ch_info_struct *) frame;

    
    if(smsal_cb_data_ptr->is_cbmir_in_nvram == KAL_TRUE)
    {
         /* CBMIR ME mask */
        data_ptr = (kal_uint8 *) & ch_info->cbmir_me_mask;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            smsal_cb_data_ptr->cbmir_mask[i] = (kal_uint8) get_bits_1_8(data_ptr, bits % 8, 1);
            data_ptr += (bits % 8 + 1) / 8;
            bits += 1;
        }

        /* CBMIR (NVRAM) */
        data_ptr = (kal_uint8 *) ch_info->cbmir;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY*2; i++)
        {
            smsal_cb_data_ptr->cbmir[i] = (data_ptr[2 * i] << 8) + data_ptr[2 * i + 1];
        }       
    }
    else
    {
        /* CBMIR mask */
        data_ptr = (kal_uint8 *) & ch_info->cbmir_mask;
        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            smsal_cb_data_ptr->cbmir_mask[i] = (kal_uint8) get_bits_1_8(data_ptr, bits % 8, 1);
            data_ptr += (bits % 8 + 1) / 8;
            bits += 1;
        }
    }


    /* DCS mask */
    data_ptr = (kal_uint8 *) & ch_info->dcs_mask;
    bits = 0;
    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        smsal_cb_data_ptr->dcs_mask[i] = (kal_uint8) get_bits_1_8(data_ptr, bits % 8, 1);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }

    // for all default language
    if( smsal_cb_data_ptr->all_lang_on == KAL_TRUE )
    {
        for (i = 0 ; i < SMSAL_DEFAULT_DCS_ENTRY ; i++)
        {
            smsal_cb_data_ptr->dcs_mask[i] = KAL_TRUE;
        }
    }

    /* DCS (NVRAM) */
    data_ptr = (kal_uint8 *) ch_info->dcs;
    for (i = SMSAL_DEFAULT_DCS_ENTRY ; i < SMSAL_CB_MAX_ENTRY ; i++)
    {
        smsal_cb_data_ptr->dcs[i] = (data_ptr[2 * i] << 8) + data_ptr[2 * i + 1];
        if ( (smsal_cb_data_ptr->dcs[i] != SMSAL_CB_UNUSED_ISO639) && (smsal_cb_data_ptr->dcs[i] != SMSAL_CB_UNUSED_DCS) )
        {
            smsal_cb_data_ptr->dcs_num++;
        }
    }

    /* CBMI mask (NVRAM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi_me_mask;
    bits = 0;
    for (i = 0; i < SMSAL_CBMI_ME_ENTRY; i++)
    {
        smsal_cb_data_ptr->cbmi_mask[i] = (kal_uint8) get_bits_1_8(data_ptr, bits % 8, 1);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }

    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    /* CBMI mask (SIM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi_sim_mask;
    bits = 0;
    for (i = SMSAL_CBMI_ME_ENTRY; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
    {
        smsal_cb_data_ptr->cbmi_mask[i] = (kal_uint8) get_bits_1_8(data_ptr, bits % 8, 1);
        data_ptr += (bits % 8 + 1) / 8;
        bits += 1;
    }
    #endif

    /* CBMI (NVRAM) */
    data_ptr = (kal_uint8 *) ch_info->cbmi;
    for (i = 0; i < SMSAL_CBMI_ME_ENTRY; i++)
    {
        smsal_cb_data_ptr->cbmi[i] = (data_ptr[2 * i] << 8) + data_ptr[2 * i + 1];
    }

}                                       /* end of smsal_decode_cb_ch_info */

void smsal_cb_init_aux_info(smsal_set_cb_aux_info_struct *aux_info)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i;

    aux_info->para_ind = 0;
    aux_info->ori_para_ind = 0;
    aux_info->cbmi_num = smsal_cb_data_ptr->cbmi_num;
    aux_info->cbmir_num = smsal_cb_data_ptr->cbmir_num;
    aux_info->dcs_num = smsal_cb_data_ptr->dcs_num;
    aux_info->is_all_lang_on = smsal_cb_data_ptr->all_lang_on;

    /* init aux_info structure. */
    for (i = 0; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
    {
        /* CBMI */
        aux_info->cbmi[i] = smsal_cb_data_ptr->cbmi[i];
        aux_info->cbmi_mask[i] = smsal_cb_data_ptr->cbmi_mask[i];
    }

    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        /* CBMIR */
        aux_info->cbmir[2 * i] = smsal_cb_data_ptr->cbmir[2 * i];
        aux_info->cbmir[2 * i + 1] = smsal_cb_data_ptr->cbmir[2 * i + 1];
        aux_info->cbmir_mask[i] = smsal_cb_data_ptr->cbmir_mask[i];

        /* DCS */
        aux_info->dcs[i] = smsal_cb_data_ptr->dcs[i];
        aux_info->dcs_mask[i] = smsal_cb_data_ptr->dcs_mask[i];
    }

    return;
}

void smsal_cb_update_cntx(smsal_set_cb_aux_info_struct *aux_info)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i;
    kal_uint16 counter = 0;

    if ((aux_info->ori_para_ind & SMSAL_CB_ALL_LANG) == SMSAL_CB_ALL_LANG)
    {
        smsal_cb_data_ptr->all_lang_on = aux_info->is_all_lang_on;
    }

    for (i = 0; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
    {
        /* CBMI */
        if ((aux_info->ori_para_ind & SMSAL_CB_MI) == SMSAL_CB_MI)
        {
            smsal_cb_data_ptr->cbmi[i] = aux_info->cbmi[i];
        }

        if ((aux_info->ori_para_ind & SMSAL_CB_MI_MASK) == SMSAL_CB_MI_MASK)
        {
            smsal_cb_data_ptr->cbmi_mask[i] = aux_info->cbmi_mask[i];
        }
    }

    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        /* CBMIR */
        if ((aux_info->ori_para_ind & SMSAL_CB_MIR) == SMSAL_CB_MIR)
        {
            smsal_cb_data_ptr->cbmir[2 * i] = aux_info->cbmir[2 * i];
            smsal_cb_data_ptr->cbmir[2 * i + 1] = aux_info->cbmir[2 * i + 1];
        }

        /* DCS */
        if ((aux_info->ori_para_ind & SMSAL_CB_DCS) == SMSAL_CB_DCS)
        {
            smsal_cb_data_ptr->dcs[i] = aux_info->dcs[i];
        }

        /* only update MASK  */
        if ((aux_info->ori_para_ind & SMSAL_CB_MIR_MASK) == SMSAL_CB_MIR_MASK)
        {
            smsal_cb_data_ptr->cbmir_mask[i] = aux_info->cbmir_mask[i];
        }

        if ((aux_info->ori_para_ind & SMSAL_CB_DCS_MASK) == SMSAL_CB_DCS_MASK)
        {
            smsal_cb_data_ptr->dcs_mask[i] = aux_info->dcs_mask[i];
            if( (i>= SMSAL_DEFAULT_DCS_ENTRY && aux_info->dcs_mask[i]) &&
                (aux_info->dcs[i] != SMSAL_CB_UNUSED_DCS && aux_info->dcs[i] != SMSAL_CB_UNUSED_ISO639) )
            {
                counter++;
            }
        }
    }                                   /* for */

    smsal_cb_data_ptr->dcs_num = (kal_uint8) (SMSAL_DEFAULT_DCS_ENTRY + counter);
    
}                                       /* end of smsal_cb_update_cntx */

void smsal_cb_update_rmc_cb(void)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i, j;
#ifdef __HOMEZONE_SUPPORT__
    kal_bool is_hz_id_exist = KAL_FALSE;
#endif
    smsal_ratcm_cb_update_req_struct *update_req1_ptr;
    kal_uint16 index;

    kal_brief_trace(TRACE_INFO, INFO_SEND_SMSAL_AS_CB_UPDATE_REQ);

    update_req1_ptr = (smsal_ratcm_cb_update_req_struct *) construct_local_para
        (sizeof(smsal_ratcm_cb_update_req_struct), TD_CTRL );

    kal_mem_set(update_req1_ptr->cbmi, 0xff, CB_MAX_MSG_CBMI_NUM *2);
    j = 0;

    if (smsal_cb_data_ptr->cbch_req == KAL_TRUE)
    {

        /* CBMI of SIM and ME */
        for (i = 0; i < smsal_cb_data_ptr->cbmi_num; i++)
        {
            if (j == CB_MAX_MSG_CBMI_NUM )
                break;

            if (smsal_cb_data_ptr->cbmi_mask[i] == KAL_TRUE &&
                smsal_cb_data_ptr->cbmi[i] != SMSAL_CB_UNUSED_CBMI)
            {
            #ifdef __HOMEZONE_SUPPORT__
                if (smsal_cb_data_ptr->cbmi[i] == SMSAL_CB_HOMEZONE_MI)
                    is_hz_id_exist = KAL_TRUE;
            #endif

                update_req1_ptr->cbmi[j] = smsal_cb_data_ptr->cbmi[i];
                j++;
            }
        }

        /* CBMI of default setting */
        for (i = 0; i < SMSAL_DEFAULT_CBMI_ENTRY; i++)
        {
            if (j == CB_MAX_MSG_CBMI_NUM )
                break;

            if (smsal_cb_data_ptr->cbmi_default[i] != SMSAL_CB_UNUSED_CBMI)
            {
            #ifdef __HOMEZONE_SUPPORT__
                if (smsal_cb_data_ptr->cbmi_default[i] == SMSAL_CB_HOMEZONE_MI)
                    is_hz_id_exist = KAL_TRUE;
            #endif

                update_req1_ptr->cbmi[j] = smsal_cb_data_ptr->cbmi_default[i];
                j++;
            }
        }

        if (KAL_TRUE == is_test_sim(SMSAL_SIM_ID))
        {
            update_req1_ptr->cbmi[CB_MAX_MSG_CBMI_NUM -2] = 0x0;
            update_req1_ptr->cbmi[CB_MAX_MSG_CBMI_NUM -1] = 0xc0c;
        }

        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            /* always pass to CB(RMC) */
            update_req1_ptr->cbmid[i] = smsal_cb_data_ptr->cbmid[i]; /* by Kevin */

            if((KAL_TRUE == is_test_sim(SMSAL_SIM_ID)) &&
                i==(SMSAL_CB_MAX_ENTRY-1))
                update_req1_ptr->cbmid[i] = 0x1001;

            if (smsal_cb_data_ptr->cbmir_mask[i] == KAL_TRUE)
            {
                update_req1_ptr->cbmir[2*i] = smsal_cb_data_ptr->cbmir[2*i];
                update_req1_ptr->cbmir[2*i+1] = smsal_cb_data_ptr->cbmir[2*i+1];
            }
            else
            {
                update_req1_ptr->cbmir[2*i] = SMSAL_CB_UNUSED_CBMI; /*0xffff, by Kevin */
                update_req1_ptr->cbmir[2*i+1] = SMSAL_CB_UNUSED_CBMI; /*0xffff, by Kevin */
            }

            /* DCS ... lower layer doesn't know ISO639, only CB-DCS value */
            if (smsal_cb_data_ptr->dcs_mask[i] == KAL_TRUE)
            {
                update_req1_ptr->dcs[i] = smsal_cb_data_ptr->dcs[i];
                if ( update_req1_ptr->dcs[i] == SMSAL_CB_UNUSED_ISO639 )
                {
                    update_req1_ptr->dcs[i] = SMSAL_CB_UNUSED_DCS;
                }
                else if ( smsal_cb_data_ptr->dcs[i] & 0xff00 )
                {
                    if ( smsal_cb_is_in_default_lang_list( smsal_cb_data_ptr->dcs[i], KAL_TRUE, &index) == KAL_TRUE )
                    {
                        update_req1_ptr->dcs[i] = smsal_cb_lang_ISO639_to_CBDCS[index*3+2];
                    }
                    else
                    {
                        // if not in the default language list
                        // => no DCS mapping data, so ignore the language
                        update_req1_ptr->dcs[i] = SMSAL_CB_UNUSED_DCS;
                    }
                }
            }
            else
            {
                update_req1_ptr->dcs[i] = SMSAL_CB_UNUSED_DCS; /*0x80, by Kevin */
            }

            if (KAL_TRUE == is_test_sim(SMSAL_SIM_ID))
            {
                if(i==(SMSAL_CB_MAX_ENTRY-2))
                    update_req1_ptr->dcs[i] = 1;
                else if(i==(SMSAL_CB_MAX_ENTRY-1))
                    update_req1_ptr->dcs[i]= 0xF4;
            }
        }                               /* for */

        /*For DoCoMo IOT, add CBMI 0xA000~0xA7FF and 0x1100~0x1104*/ 
        if (( query_ps_conf_test_mode() == PS_CONF_TEST_IOT ) &&
            ( query_ps_conf_test_profile_setting() & IOT_TEST_DCM_CB))
        {
            for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
            {
                if(update_req1_ptr->cbmir[2*i] == SMSAL_CB_UNUSED_CBMI)
                {
                    update_req1_ptr->cbmir[2*i] = 0xa000;
                    update_req1_ptr->cbmir[2*i+1] = 0xa7ff;
                    break;
                }
            }

            for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
            {
                if(update_req1_ptr->cbmir[2*i] == SMSAL_CB_UNUSED_CBMI)
                {
                    update_req1_ptr->cbmir[2*i] = 0x1100;
                    update_req1_ptr->cbmir[2*i+1] = 0x1104;
                    break;
                }
            }
        }
    }

#ifdef __HOMEZONE_SUPPORT__
    if (smsal_cb_data_ptr->hz_act == KAL_TRUE  && is_hz_id_exist == KAL_FALSE) 
    {
        update_req1_ptr->cbmi[j] = SMSAL_CB_HOMEZONE_MI ;
        j++;
    }
#endif

    update_req1_ptr->is_all_language_on = smsal_cb_data_ptr->all_lang_on;

#if defined(__GEMINI__) && defined(__ETWS_SUPPORT__)
    update_req1_ptr->set_type = smsal_cb_data_ptr->set_type;
#else
    update_req1_ptr->set_type = L4C_NORMAL_CB_UPDATE;
#endif

    //kal_prompt_trace(smsal_cur_mod, "!!! set_type to RATCM = %d", update_req1_ptr->set_type);

    smsal_send_msg_to_ratcm(MSG_ID_SMSAL_RATCM_CB_UPDATE_REQ,
                          (local_para_struct*) update_req1_ptr,
                          NULL);

}                                       /* end of smsal_cb_update_rmc_cb */

void smsal_cb_update_cnf(kal_uint8 src_id,
                         kal_uint8 result, 
                         kal_uint16 cause)
{
    l4csmsal_cb_update_cnf_struct *cb_cnf;

    cb_cnf = (l4csmsal_cb_update_cnf_struct *) construct_local_para
                           (sizeof(l4csmsal_cb_update_cnf_struct), TD_CTRL );

    cb_cnf->src_id = src_id;
    cb_cnf->result = result;            /* Result Code */
    cb_cnf->error_cause = cause;        /* Error Cause */

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_UPDATE_CNF,                          
                         (local_para_struct*)cb_cnf,
                         NULL);
}                                       /* end of smsal_cb_update_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_cb_update_files_to_storage
* DESCRIPTION
*   This function writes files including EFcbmi, EFcbmir, EFlp (or EFelp)
*   and EFcb_mask to SIM/NVRAM. 
*
*   Added by Kevin.
*
* PARAMETERS
*  a  IN       para_ind, indicate which EF shall be written
*  b  IN       mask_change, indicate whether EFcb_mask need to write
*
* RETURNS
*  FALSE: error occurred
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cb_update_files_to_storage(kal_uint8 id)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8                    i;
    kal_uint8                    *data;
    smsal_pending_act_struct     *pend;
    smsal_set_cb_aux_info_struct *aux_info;
    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    kal_uint8                    j;
    #endif
    kal_bool                     update_error = KAL_FALSE;
    kal_uint16                   counter, dcs = 0, max_sim_record;

    SMSAL_ASSERT(id < SMSAL_MAX_PENDING_ACT);

    pend = (&(smsal_cntx_ptr->pending_act[id]));

    aux_info = (smsal_set_cb_aux_info_struct *) pend->aux_info;

    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    if ((aux_info->para_ind & SMSAL_ACT_CB_MI_SIM) == SMSAL_ACT_CB_MI_SIM)
    {
        /* write to EFcbmi in SIM */
        kal_brief_trace(TRACE_INFO, INFO_UPDATE_CB_MID);

        if (aux_info->cbmi_num > SMSAL_CBMI_ME_ENTRY)
        {
            data = get_ctrl_buffer((aux_info->cbmi_num - SMSAL_CBMI_ME_ENTRY) * 2);

            /* one U16 to two U8s */
            for (i = SMSAL_CBMI_ME_ENTRY, j = 0; i < aux_info->cbmi_num; i++, j++)
            {
                data[2 * j] = (kal_uint8) (aux_info->cbmi[i] >> 8);
                data[2 * j + 1] = (kal_uint8) (aux_info->cbmi[i] & 0x00ff);
            }

            pend->sub_act_code = SMSAL_ACT_CB_MI_SIM;
            smsal_write_to_sim(id, FILE_CBMI_IDX, data,
                               (kal_uint16) ((aux_info->cbmi_num - SMSAL_CBMI_ME_ENTRY) * 2), 0);

            free_ctrl_buffer(data);

            return;                     /* wait for cnf */
        }
        else
        {
            aux_info->para_ind &= (~SMSAL_ACT_CB_MI_SIM);
            update_error = KAL_TRUE;
        }
    }                                   /* CBMI */

    if ((aux_info->para_ind & SMSAL_ACT_CB_MIR) == SMSAL_ACT_CB_MIR)
    {
        /* write to EFcbmir in SIM */
        kal_brief_trace(TRACE_INFO, INFO_UPDATE_CB_MIR);

        if (aux_info->cbmir_num > 0)
        {
            data = get_ctrl_buffer(aux_info->cbmir_num * 4);

            /* U16 to U8 */
            for (i = 0; (i < aux_info->cbmir_num) && (i < SMSAL_CB_MAX_ENTRY); i++)
            {
                data[4 * i] = (kal_uint8) (aux_info->cbmir[2 * i] >> 8);
                data[4 * i + 1] = (kal_uint8) (aux_info->cbmir[2 * i] & 0x00ff);
                data[4 * i + 2] = (kal_uint8) (aux_info->cbmir[2 * i + 1] >> 8);
                data[4 * i + 3] = (kal_uint8) (aux_info->cbmir[2 * i + 1] & 0x00ff);
            }

            pend->sub_act_code = SMSAL_ACT_CB_MIR;
            smsal_write_to_sim(id, FILE_CBMIR_IDX, data,
                              (kal_uint16)(aux_info->cbmir_num*4), 0);      

            free_ctrl_buffer(data);

            return;                         /* wait for cnf */  
        }
        else
        {
            aux_info->para_ind &= (~SMSAL_ACT_CB_MIR);
            update_error = KAL_TRUE;
        }
    }                                   /* CBMIR */
    #endif

    /* save DCS in (U)SIM, (in nvram by SMSAL_ACT_CB_CH_INFO) */
    if ((aux_info->para_ind & SMSAL_ACT_CB_DCS) == SMSAL_ACT_CB_DCS)
    {
        /* write to EFlp or EFelp in SIM */
        kal_brief_trace(TRACE_INFO, INFO_UPDATE_CB_DCS);

        max_sim_record = smsal_cb_data_ptr->dcs_num_sim;
        
        if (aux_info->dcs_num > 0 && max_sim_record > 0)
        {
            pend->sub_act_code = SMSAL_ACT_CB_DCS;            

            data = get_ctrl_buffer(max_sim_record * 2);

            // initial value
            if( smsal_cb_data_ptr->is_li_used == KAL_FALSE && smsal_cb_data_ptr->is_elp_used == KAL_FALSE )
            {
                kal_mem_set(data, (kal_uint8)(SMSAL_CB_UNUSED_DCS), max_sim_record * 2);
            }
            else
            {
                kal_mem_set(data, (kal_uint8)(SMSAL_CB_UNUSED_ISO639&0x00ff), max_sim_record * 2);
            }
            
            // search user mark for save in SIM
            counter = 0;
            for (i = 0 ; i < aux_info->dcs_num && counter < max_sim_record ; i++)
            {
                if( aux_info->dcs_mask[i] != KAL_FALSE )
                {
                    if( smsal_cb_data_ptr->is_li_used == KAL_FALSE && smsal_cb_data_ptr->is_elp_used == KAL_FALSE )
                    {
                        // check iso639 or CBDCS format
                        if( aux_info->dcs[i] & 0xff00 )
                        {
                            data[counter] = (kal_uint8) smsal_cb_conver_ISO639_to_CBDCS(aux_info->dcs[i]);
                        }
                        else
                        {
                            data[counter] = (kal_uint8) aux_info->dcs[i];
                        }

                        // ignore unused dcs, and language unspecified
                        if( data[counter] == SMSAL_CB_UNUSED_DCS || data[counter] == 0x0f )
                        {
                            continue;
                        }
                    }
                    else
                    {
                        // check iso639 or CBDCS format
                        if( aux_info->dcs[i] & 0xff00 )
                        {
                            data[counter*2]   = (kal_uint8)(aux_info->dcs[i] >> 8);
                            data[counter*2+1] = (kal_uint8)(aux_info->dcs[i] & 0x00ff);
                        }
                        else
                        {
                            dcs = smsal_cb_conver_CBDCS_to_ISO639( aux_info->dcs[i] );
                            data[counter*2]   = (kal_uint8)(dcs >> 8);
                            data[counter*2+1] = (kal_uint8)(dcs & 0x00ff);
                        }

                        // ignore unused dcs, and language unspecified
                        if( dcs == SMSAL_CB_UNUSED_ISO639 || (data[counter*2] == '?' || data[counter*2+1] == '?') )
                        {
                            continue;
                        }

                    }
                    counter++;
                }
            }

            if (smsal_cb_data_ptr->is_li_used == KAL_TRUE)
            {
                smsal_write_to_sim(id, FILE_U_LI_IDX, data, (kal_uint16)(max_sim_record*2), (kal_uint16)0);
            }
            else if (smsal_cb_data_ptr->is_elp_used == KAL_TRUE)
            {
                smsal_write_to_sim(id, FILE_ELP_IDX, data, (kal_uint16)(max_sim_record*2), (kal_uint16)0);
            }
            else
            {
                smsal_write_to_sim(id, FILE_LP_IDX, data, max_sim_record, 0);
            }
            
            free_ctrl_buffer(data);

            return;                         /* wait for cnf */
        }
        else
        {
            aux_info->para_ind &= (~SMSAL_ACT_CB_DCS);
            update_error = KAL_TRUE;
        }
    }                                   /* DCS */

    if ((aux_info->para_ind & SMSAL_ACT_CB_ALL_LANG) == SMSAL_ACT_CB_ALL_LANG)
    {

        smsal_nvm_common_param_struct *common;

        kal_brief_trace(TRACE_INFO, INFO_UPDATE_CB_ALL_LANG);

        pend->sub_act_code = SMSAL_ACT_CB_ALL_LANG;

        common =  (smsal_nvm_common_param_struct*) 
                  get_ctrl_buffer(sizeof(smsal_nvm_common_param_struct));

        common->fo = smsal_para_ptr->common.fo;
        common->bearer_service = smsal_para_ptr->common.bearer_service;
        common->status_report = smsal_para_ptr->common.status_report;
        common->reply_path = smsal_para_ptr->common.reply_path;
        common->vp_format = smsal_para_ptr->common.vp_format;
        common->sms_fdn_off = smsal_para_ptr->common.sms_fdn_off;

        #ifdef __REL4__
            common->selected_msp = smsal_para_ptr->common.selected_msp;
        #else
            common->selected_msp = 0;
        #endif
            
        common->prefer_mem1 = smsal_para_ptr->rmi.prefer_mem1;
        common->prefer_mem2 = smsal_para_ptr->rmi.prefer_mem2;
        common->prefer_mem3 = smsal_para_ptr->rmi.prefer_mem3;
        common->cbch_req = smsal_cb_data_ptr->cbch_req;
        common->rmi_act_pfile_id = smsal_para_ptr->rmi.act_pfile_id;

        common->all_lang_on = aux_info->is_all_lang_on;

        smsal_write_nvm_params(NVRAM_EF_SMSAL_COMMON_PARAM_LID, 
                               1, 0, /* dummy */
                               common, id);

        free_ctrl_buffer(common);

        return;                         /* wait for cnf */
    }                                   /* ALL language */

    if ((aux_info->para_ind & SMSAL_ACT_CB_CH_INFO) == SMSAL_ACT_CB_CH_INFO)
    {
        peer_buff_struct *peer_ptr;
        kal_uint16 pdu_len;
        kal_uint8 *pdu_ptr;

        pend->sub_act_code = SMSAL_ACT_CB_CH_INFO;

        kal_brief_trace(TRACE_INFO, INFO_UPDATE_CB_MASK);

        peer_ptr = (peer_buff_struct*)construct_peer_buff(NVRAM_EF_CB_CH_INFO_SIZE, 
                                                         0, 0, TD_CTRL);    
        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

        smsal_encode_cb_ch_info(aux_info, pdu_ptr);

        smsal_write_to_nvram(id, NVRAM_EF_CB_CH_INFO_LID, 1, peer_ptr);
        return;                         /* wait for cnf */

    }

    if (update_error == KAL_TRUE)
    {
        smsal_free_pending_act(id);
        smsal_cb_update_cnf(((l4csmsal_cb_update_req_struct *) pend->local_para_ptr)->src_id,
                            L4C_ERROR,
                            SMSAL_UNSPECIFIED_ERROR_CAUSE);
        return;
    }
    else
    {
        /*
         * all files which needed to be updated were written in storage,
         * * 1. update contex,
         * * 2. send update cnf to L4C and
         * * 3. send update requeset to RMC 
         */
        smsal_cb_update_cntx(aux_info);

        smsal_cb_update_cnf(((l4csmsal_cb_update_req_struct *) pend->local_para_ptr)->src_id,
                           L4C_OK,
                           0 /* ignore error cause */);

        smsal_cb_update_rmc_cb();

        smsal_free_pending_act(id);
    }
}                                       /* end of smsal_cb_update_to_storage */


/*****************************************************************************
* FUNCTION
*  smsal_cb_update_req_handler
* DESCRIPTION
*   This function update cb context in RMC
*
* PARAMETERS
*  a  IN       msg_id
*  b  IN       local_para_ptr
*  c  IN       peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cb_update_req_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    l4csmsal_cb_update_req_struct *update_req0_ptr;
    smsal_set_cb_aux_info_struct *aux_info;
    kal_uint8 id;
    smsal_pending_act_struct *pend;
    kal_uint16 i, j, index, counter;
    kal_uint16 temp_dcs;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_CB_UPDATE_REQ_HANDLE);

    update_req0_ptr = (l4csmsal_cb_update_req_struct *) local_para_ptr;

    if((update_req0_ptr->para_ind == 0) ||
      (smsal_get_pending_act_id(&id) == KAL_FALSE))
    {
        smsal_cb_update_cnf(update_req0_ptr->src_id,
                           L4C_ERROR,
                           SMSAL_UNSPECIFIED_ERROR_CAUSE);
        return;
    }

    pend = (&(smsal_cntx_ptr->pending_act[id]));
    pend->act_code = SMSAL_CB_WRITE;
    pend->local_para_ptr = local_para_ptr;
    hold_local_para(local_para_ptr);

    aux_info = (smsal_set_cb_aux_info_struct*) get_ctrl_buffer
               (sizeof(smsal_set_cb_aux_info_struct));

    pend->aux_info = (void *)aux_info;

    smsal_cb_init_aux_info(aux_info);

   /*=========================================================
    * make following modifications by Kevin, 03/20/2003
    * 1. update according to para_ind
    * 2. write to corresponding EFs
    *=========================================================*/

    /* Force to update mask  */

    if ((update_req0_ptr->para_ind & SMSAL_CB_MI) == SMSAL_CB_MI)
    {
        #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
        aux_info->para_ind |= SMSAL_ACT_CB_MI_SIM;
        #endif
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;
        kal_mem_cpy(aux_info->cbmi, update_req0_ptr->mi, smsal_cb_data_ptr->cbmi_num * 2);
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_MIR) == SMSAL_CB_MIR)
    {
        #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
        if(smsal_cb_data_ptr->is_cbmir_in_nvram == KAL_FALSE)
        {
            aux_info->para_ind |= SMSAL_ACT_CB_MIR;
        }
        #endif
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;
        kal_mem_cpy(aux_info->cbmir, update_req0_ptr->mir, smsal_cb_data_ptr->cbmir_num * 4);
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_DCS) == SMSAL_CB_DCS)
    {
        aux_info->para_ind |= SMSAL_ACT_CB_DCS;
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;

        /*
         * make sure that there are more than 20+1 default language
         * for AT-command
         * by YZ
         */
        if( update_req0_ptr->src_id != LMMI_SRC)
        {
            
            // check AT-command cscb=1,"??","??" to cancel all_language_on
            if( update_req0_ptr->dcs_mask[0]==KAL_FALSE &&
                (update_req0_ptr->dcs[0] != SMSAL_CB_UNUSED_DCS &&
                update_req0_ptr->dcs[0] != SMSAL_CB_UNUSED_ISO639))
            {
                update_req0_ptr->para_ind |= SMSAL_CB_ALL_LANG;
                update_req0_ptr->is_all_language_on = KAL_FALSE;
            }

            counter = smsal_cb_data_ptr->dcs_num;
            
            for( i=0 ; i<SMSAL_CB_MAX_ENTRY && counter<SMSAL_CB_MAX_ENTRY ; i++ )
            {
                temp_dcs = update_req0_ptr->dcs[i];

                // is ISO639 ??
                // AT-Command always CBDCS type
                if ( smsal_cb_is_in_default_lang_list(temp_dcs, KAL_FALSE, &index) == KAL_FALSE )
                {
                    // search for duplicated DCS which is not in default language list
                    // for RMMI (AT-command +CSCB)
                    for( j=SMSAL_DEFAULT_DCS_ENTRY ; j<SMSAL_CB_MAX_ENTRY ; j++)
                    {
                        if( temp_dcs == aux_info->dcs[j] )
                        {
                            break;
                        }
                    }

                    // not find => add ...
                    if( j>=SMSAL_CB_MAX_ENTRY )
                    {
                        if( update_req0_ptr->dcs_mask[i]==KAL_TRUE )
                        {
                            aux_info->dcs[counter] = temp_dcs;
                            aux_info->dcs_mask[counter] = KAL_TRUE;
                            counter++;
                        }
                    }
                    else
                    {
                        aux_info->dcs_mask[j] = update_req0_ptr->dcs_mask[i];
                    }
                }
                else
                {
                    aux_info->dcs_mask[index] = update_req0_ptr->dcs_mask[i];
                }
                
            }

            // not allow ... the null entry (not used)
            for( i=SMSAL_DEFAULT_DCS_ENTRY ; i<SMSAL_CB_MAX_ENTRY ; i++ )
            {
                if( aux_info->dcs_mask[i] != KAL_TRUE )
                {
                    // move ...
                    for( j=i+1 ; j<SMSAL_CB_MAX_ENTRY ; j++ )
                    {
                        aux_info->dcs[j-1] = aux_info->dcs[j];
                        aux_info->dcs_mask[j-1] = aux_info->dcs_mask[j];
                    }
                    aux_info->dcs[SMSAL_CB_MAX_ENTRY-1]= SMSAL_CB_UNUSED_ISO639;
                    aux_info->dcs_mask[SMSAL_CB_MAX_ENTRY-1] = KAL_FALSE;
                }
            }

            // count dcs_num
            aux_info->dcs_num = SMSAL_DEFAULT_DCS_ENTRY;
            for( i=SMSAL_DEFAULT_DCS_ENTRY ; i<SMSAL_CB_MAX_ENTRY ; i++ )
            {
                if( aux_info->dcs_mask[i] == KAL_TRUE )
                {
                    aux_info->dcs_num++;
                }
            }
        }
        
        /* MAUI_00554815 [SMSAL][CB] Fix dcs_num for EFlp file */
        //kal_mem_cpy(aux_info->dcs, update_req0_ptr->dcs, smsal_cb_data_ptr->dcs_num * 2);
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_MI_MASK) == SMSAL_CB_MI_MASK)
    {
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;
        //kal_mem_cpy(aux_info->cbmi_mask, update_req0_ptr->mi_mask, smsal_cb_data_ptr->cbmi_num);
        for(i=0 ; i<SMSAL_MMI_CBMI_MAX_ENTRY ; i++)
        {
            aux_info->cbmi_mask[i] = update_req0_ptr->mi_mask[i];
        }
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_MIR_MASK) == SMSAL_CB_MIR_MASK)
    {
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;
        //kal_mem_cpy(aux_info->cbmir_mask, update_req0_ptr->mir_mask, smsal_cb_data_ptr->cbmir_num);
        for(i=0 ; i<SMSAL_CB_MAX_ENTRY ; i++)
        {
            aux_info->cbmir_mask[i] = update_req0_ptr->mir_mask[i];
        }
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_DCS_MASK) == SMSAL_CB_DCS_MASK)
    {
        aux_info->para_ind |= SMSAL_ACT_CB_CH_INFO;
        /*
         * make sure that there are more than 20+1 default language
         * by YZ
         */

        if( update_req0_ptr->src_id == LMMI_SRC)
        {
            //kal_mem_cpy(aux_info->dcs_mask, update_req0_ptr->dcs_mask, smsal_cb_data_ptr->dcs_num);
            for(i=0 ; i<SMSAL_CB_MAX_ENTRY ; i++)
            {
                aux_info->dcs_mask[i] = update_req0_ptr->dcs_mask[i];
            }
        }
    }

    if ((update_req0_ptr->para_ind & SMSAL_CB_ALL_LANG) == SMSAL_CB_ALL_LANG)
    {
        aux_info->para_ind |= SMSAL_ACT_CB_ALL_LANG;
        aux_info->is_all_lang_on = update_req0_ptr->is_all_language_on;
    }

    aux_info->ori_para_ind = update_req0_ptr->para_ind;

    smsal_cb_data_ptr->set_type = update_req0_ptr->set_type;

    smsal_cb_update_files_to_storage(id);       /* SIM access id */
}                                       /* end of smsal_cb_update_req_handler */

/*****************************************************************************
* FUNCTION
*  smsal_send_msg_to_ratcm
* DESCRIPTION
*   This function sends message to RATCM
*
* PARAMETERS
*  a  IN       msg_id
*  b  IN       local_para_ptr
*  c  IN       peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_send_msg_to_ratcm(msg_type msg_id,
                             local_para_struct *local_para_ptr,
                             peer_buff_struct *peer_buff_ptr
                             )
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {
        msg_send6(smsal_cur_mod, 
                  (module_type)(MOD_RATCM + (smsal_cur_mod - MOD_SMSAL)), 
                  SMSAL_RATCM_SAP, 
                  msg_id, 
                  local_para_ptr, 
                  peer_buff_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_RATCM, 
                  SMSAL_RATCM_SAP, 
                  msg_id, 
                  local_para_ptr, 
                  peer_buff_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif

    return;
}                                       /* end of smsal_send_msg_to_ratcm */

/*****************************************************************************
* FUNCTION
*  smsal_decode_cb_page
* DESCRIPTION
*   This function decode 8-bit encoded CB page to 7-bit ASCII messages
*
* PARAMETERS
*  a  IN       local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_decode_cb_page(kal_uint8 *page_buf,
                          kal_uint8 *page_data,
                          kal_uint8 *page_length,
                          kal_uint8 start_pos,
                          kal_uint8 msg_info_length)
{
    kal_uint8 previous_char, current_char;
    kal_uint8 i;

    previous_char = 0;
    *page_length = 0;
    
    for (i=start_pos; i<msg_info_length; i++)
    {
        current_char = page_data[i];

        switch((i-start_pos)%7)
        {
            case 0:
                page_buf[(*page_length)++] = current_char & 0x7f;
                break;

            case 1:
                page_buf[(*page_length)++] = (previous_char >> 7) | ((current_char & 0x3f) << 1);
                break;

            case 2:
                page_buf[(*page_length)++] = (previous_char >> 6) | ((current_char & 0x1f) << 2);
                break;

            case 3:
                page_buf[(*page_length)++] = (previous_char >> 5) | ((current_char & 0x0f) << 3);
                break;

            case 4:
                page_buf[(*page_length)++] = (previous_char >> 4) | ((current_char & 0x07) << 4);
                break;

            case 5:
                page_buf[(*page_length)++] = (previous_char >> 3) | ((current_char & 0x03) << 5);
                break;

            case 6:
                page_buf[(*page_length)++] = (previous_char >> 2) | ((current_char & 0x01) << 6);
                page_buf[(*page_length)++] = current_char >> 1;
                break;
        }

        previous_char = current_char;
    }

    return;
}                                       /* end of smsal_decode_cb_page */


void smsal_cb_free_ctrl_blk(kal_uint8 blk_id)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind != NULL)
        free_ctrl_buffer(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind);

    smsal_cb_ctrl_blk_reset(blk_id);
    return;
}

void smsal_cb_ctrl_blk_reset(kal_uint8 i)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_cb_data_ptr->ctrl_blk_pool[i].total_pages = SMSAL_CB_UNUSED_PAGE;
    smsal_cb_data_ptr->ctrl_blk_pool[i].recv_pages = 0;
    smsal_cb_data_ptr->ctrl_blk_pool[i].dcs = SMSAL_CB_UNUSED_DCS;
    smsal_cb_data_ptr->ctrl_blk_pool[i].cbmi = SMSAL_CB_UNUSED_CBMI;
    smsal_cb_data_ptr->ctrl_blk_pool[i].sn = 0;
    smsal_cb_data_ptr->ctrl_blk_pool[i].last_time = 0;
    smsal_cb_data_ptr->ctrl_blk_pool[i].alphabet = SMSAL_RESERVED_DCS;

    smsal_cb_data_ptr->ctrl_blk_pool[i].pages_map = 0;
    smsal_cb_data_ptr->ctrl_blk_pool[i].msg_ind = NULL;

    smsal_stop_timer(SMSAL_CB_TIMER, i);
}

kal_bool smsal_cb_is_all_received(kal_uint8 blk_id)
{

    kal_uint8 i;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].recv_pages) != (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages))
        return KAL_FALSE;

    for (i = 0; i < smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages; i++)
    {
        if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map & (1 << i)) != (1 << i))
            return KAL_FALSE;
    }

    return KAL_TRUE;
}


void smsal_cb_gs_changed(kal_uint8 old_gs,
                         kal_uint8 new_gs,
                         kal_bool  *is_reset)
{
    if (is_reset == NULL)
        return;

    *is_reset = KAL_TRUE;

    /*
                 old_CELL(0)  old_LA(1)  old_PLMN(2)
    new_CELL(0)  clear
    new_LA  (1)  clear        clear
    new_PLMN(2)  clear        clear      clear

     */
    if ((new_gs >= NUM_OF_GS_CHANGED) ||
        (old_gs > new_gs))
        *is_reset = KAL_FALSE;
    return;
}

void smsal_cb_gscode2geoscope(kal_uint16 gs_code, kal_uint8 *geo_scope)
{
    if (geo_scope == NULL)
        return;
    
    *geo_scope = (kal_uint8)CELL_CHANGED;

    switch (gs_code)
    {
    case 0:
    case 3:
        *geo_scope = (kal_uint8)CELL_CHANGED;
        break;
    case 1:
        *geo_scope = (kal_uint8)PLMN_CHANGED;
        break;
    case 2:
        *geo_scope = (kal_uint8)LA_CHANGED;
        break;
    }
    return;
}

kal_bool smsal_cb_find_blk(smsal_ratcm_cb_data_ind_struct *page_ind, kal_uint8 *id)
{
    kal_uint8 i;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    for (i = 0; i < SMSAL_CB_MAX_SESSION; i++)
    {
        if(smsal_cb_data_ptr->ctrl_blk_pool[i].total_pages != SMSAL_CB_UNUSED_PAGE && 
           smsal_cb_data_ptr->ctrl_blk_pool[i].cbmi == page_ind->msgid &&
           (smsal_cb_data_ptr->ctrl_blk_pool[i].sn & 0x3ff0) == ((page_ind->serial_num) & 0x3ff0)) /*the same Message Code */
        {
            /* the same GS and update no. */
            if ((smsal_cb_data_ptr->ctrl_blk_pool[i].sn & 0xc00f)==((page_ind->serial_num) & 0xc00f))
            {
                *id = i;
                return KAL_TRUE;
            }
            else
            {
                smsal_cb_free_ctrl_blk(i);

            #ifdef CB_DEBUG_INFO
                SMSAL_DBG(cb_str_buff, "CB:flush old session.(blk_id=%d, blk->sn=%d, new sn=%d)",
                          i, smsal_cb_data_ptr->ctrl_blk_pool[i].sn, page_ind->serial_num);
            #endif
                break;
            }
        }
    }

    return KAL_FALSE;
}

kal_bool smsal_cb_find_free_blk(kal_uint8 *id, kal_uint8 pages, kal_uint8 msg_len)
{
    kal_uint8 i;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    for (i = 0; i < SMSAL_CB_MAX_SESSION; i++)
    {
        if (smsal_cb_data_ptr->ctrl_blk_pool[i].total_pages == SMSAL_CB_UNUSED_PAGE)
        {
            *id = i;
            SMSAL_ASSERT(smsal_cb_data_ptr->ctrl_blk_pool[i].msg_ind == NULL);

            smsal_cb_data_ptr->ctrl_blk_pool[i].msg_ind =
            (l4csmsal_cb_msg_text_ind_struct *)
             construct_local_para((kal_uint16) (sizeof(l4csmsal_cb_msg_text_ind_struct) +
             (pages * msg_len) + 5 /* safety */ ), TD_CTRL);

            return KAL_TRUE;
        }
    }

    CBDBG_(printf("can't find free cb control block\n");)

    return KAL_FALSE;
}

kal_bool smsal_cb_find_oldest_ctrl_blk(kal_uint8 *id)
{
    kal_uint8 i;

    kal_uint8 oldest_blk = SMSAL_CB_MAX_SESSION;
    kal_uint32 tick;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    tick = kal_get_systicks();

    for (i = 0; i < SMSAL_CB_MAX_SESSION; i++)
    {
        if((smsal_cb_data_ptr->ctrl_blk_pool[i].total_pages != SMSAL_CB_UNUSED_PAGE) &&
          (smsal_cb_data_ptr->ctrl_blk_pool[i].last_time < tick))
        {
            tick = smsal_cb_data_ptr->ctrl_blk_pool[i].last_time;
            oldest_blk = i;
        }
    }

    if (oldest_blk < SMSAL_CB_MAX_SESSION)
    {
        *id = oldest_blk;
        return KAL_TRUE;
    }

    return KAL_FALSE;

}                                       /* end of smsal_cb_find_oldest_ctrl_blk */


void smsal_cb_copy_pages(kal_uint8  blk_id,
                         kal_uint8  *msg_data,
                         kal_uint16 *offset)
{
    kal_bool is_lang_info_ok = KAL_FALSE;
    kal_uint8 i, j;
    kal_uint8 lang_length = 0;
    kal_uint8 msg_offset = SMSAL_CB_PER_7BIT_LEN;
    kal_uint16 dst_offset = 0, src_offset = 0;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    /* ignor the first 2 bytes of each segment. */
    if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet != SMSAL_DEFAULT_DCS)
    {
        if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x11)
        {
            dst_offset += 2;
            msg_offset = 91;
            lang_length = 2;
        }
        src_offset += 2;
    }
    /* ignor the first 3 bytes of each segment. */
    else
    {
        if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x10)
        {
            dst_offset += 3;
            msg_offset = 90;
            lang_length = 3;
        }
        src_offset += 3;
    }

    for (i = 1; i <= smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages; i++)
    {

        if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map & (1 << (i - 1))) == (1 << (i - 1)))
        {

            /* ignor the first 2 bytes of each segment. */
            if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x11) &&
                (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet == SMSAL_UCS2_DCS))
            {
                if (is_lang_info_ok == KAL_FALSE)
                {
                    msg_data[0] = *(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset);
                    msg_data[1] = *(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset + 1);
                    is_lang_info_ok = KAL_TRUE;
                }

                src_offset += 2;
            }
            /* ignor the first 3 bytes of each segment. */
            else if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x10) &&
                     (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet == SMSAL_DEFAULT_DCS))
            {
                if (is_lang_info_ok == KAL_FALSE)
                {
                    msg_data[0] = *(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset);
                    msg_data[1] = *(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset + 1);
                    msg_data[2] = *(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset + 2);
                    is_lang_info_ok = KAL_TRUE;
                }

                src_offset += 3;
            }

            if (src_offset > dst_offset)
            {
                kal_mem_cpy((msg_data + dst_offset),
                            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data + src_offset,
                            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page_offset[i-1] - lang_length);

            }

            dst_offset += smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page_offset[i-1] - lang_length;
            src_offset += msg_offset;
        }
        else                            /* page is missed */
        {
            if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet == SMSAL_UCS2_DCS)
            {
                kal_uint8 delimit[SMSAL_CB_MISS_SEG_DELIMIT_LEN + 2];

                kal_mem_cpy(delimit, SMSAL_CB_MISS_SEG_DELIMIT, strlen(SMSAL_CB_MISS_SEG_DELIMIT));

                for (j = 0; j < (strlen(SMSAL_CB_MISS_SEG_DELIMIT)); j++)
                {
                    *(msg_data + dst_offset) = 0;
                    *(msg_data + dst_offset + 1) = delimit[j];

                    dst_offset += 2;
                }
            }
            else
            {
                kal_mem_cpy((msg_data + dst_offset),
                            SMSAL_CB_MISS_SEG_DELIMIT,
                            strlen(SMSAL_CB_MISS_SEG_DELIMIT));

                dst_offset += (kal_uint16)strlen(SMSAL_CB_MISS_SEG_DELIMIT);
            }

            src_offset += msg_offset;
        }

    }                                   /* for(i) */

    /* all segment are missed in UCS2 */
    if (is_lang_info_ok == KAL_FALSE &&
        ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x10) ||(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs == 0x11)))
        dst_offset = 0;

    if (offset != NULL)
        *offset = dst_offset;

    /* remove padding */
    if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet == SMSAL_UCS2_DCS)
    {
        for (j = (kal_uint8)dst_offset; (j-2)>0; j=j-2)
        {
            if ((*(msg_data + j - 2) == 0x00) && (*(msg_data + j - 1) == 0x0d))
                *offset -= 2;
            else
                break;
        }
    }
    else
    {
        for (j = (kal_uint8)dst_offset; (j-1)>0; j=j-1)
        {
            if (*(msg_data + j - 1) == 0x0d)
                *offset -= 1;
            else
                break;
        }
    }
}                                       /* end of smsal_cb_copy_pages */


kal_bool smsal_cb_page_exist(kal_uint8 blk_id, kal_uint8 page)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    ASSERT(blk_id < SMSAL_CB_MAX_SESSION);
    ASSERT(page <= 15);

    if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map & (1 << (page - 1))) == (1 << (page - 1)))
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;

}                                       /* end of smsal_cb_page_exist */


#ifdef __HOMEZONE_SUPPORT__
kal_uint8 smsal_cb_hz_mi_dispatch(void)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i;
    kal_uint8 mi_dispatch = 0;

    if (smsal_cb_data_ptr->cbch_req == KAL_TRUE)
    {
        /* CBMI of SIM and ME */
        for (i = 0; i < smsal_cb_data_ptr->cbmi_num; i++)
        {
            if (smsal_cb_data_ptr->cbmi_mask[i] == KAL_TRUE &&
                smsal_cb_data_ptr->cbmi[i] == SMSAL_CB_HOMEZONE_MI)
            {
                mi_dispatch |= 0x01;
                break;
            }
        }

        /* CBMI of default setting */
        for (i = 0; i < SMSAL_DEFAULT_CBMI_ENTRY; i++)
        {
            if (smsal_cb_data_ptr->cbmi_default[i] == SMSAL_CB_HOMEZONE_MI)
            {
                mi_dispatch |= 0x01;
                break;
            }
        }

        for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
        {
            if ((smsal_cb_data_ptr->cbmir_mask[i] == KAL_TRUE) &&
                ((SMSAL_CB_HOMEZONE_MI >= smsal_cb_data_ptr->cbmir[2 * i]) &&
                 (SMSAL_CB_HOMEZONE_MI <= smsal_cb_data_ptr->cbmir[2 * i])))
            {
                mi_dispatch |= 0x01;
                break;
            }
        }                               /* for */
    }

    if (smsal_cb_data_ptr->hz_act == KAL_TRUE)
        mi_dispatch |= 0x02;

    return mi_dispatch;

}
#endif


#if defined (__SMSAL_UT__)
extern kal_uint8 cb_data[];
void smsal_cb_ut_debug(kal_uint8  blk_id, 
                       l4csmsal_cb_msg_text_ind_struct *lmi_msg_ind,
                       kal_uint16 total_length)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 cb_7bit_buf_ptr[128];
    kal_uint8 cb_7bit_buf_length;

    kal_uint8 i;
    static kal_uint8 show_count = 0;

    SMSALDBG_(printf("\n %d page\n",show_count++);)

    if (kal_mem_cmp(lmi_msg_ind->msg_data, cb_data+6, SMSAL_CB_PER_UCS2_CONT_LEN) == 0)
    {
        SMSALDBG_(printf("\n==> 8 bit data\n");)
        if ((lmi_msg_ind->pages > 1)&&( (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map & (1 << 1) ) == (1 << 1) ))
        {
            if (kal_mem_cmp(lmi_msg_ind->msg_data+82, cb_data+6, SMSAL_CB_PER_UCS2_CONT_LEN) != 0)
                SMSAL_ASSERT(0);
            SMSALDBG_(printf("\n==> more page OK!!\n");)
        }
    }
    else
    {
        smsal_decode_cb_page(cb_7bit_buf_ptr,
                                    cb_data,
                                    &cb_7bit_buf_length,
                                    6,
                                    CB_MAX_DATA_NUM_PER_PAGE);
        if ( cb_7bit_buf_length != SMSAL_CB_PER_7BIT_LEN )
            SMSALDBG_(printf("\n==> cb_7bit_buf_length %d\n", cb_7bit_buf_length);)
        //ASSERT ( cb_7bit_buf_length == 93 );

        if (kal_mem_cmp(lmi_msg_ind->msg_data, cb_7bit_buf_ptr, 93) == 0)
        {
            SMSALDBG_(printf("\n==> GSM 7 bit data OK!!\n");)
            if ((lmi_msg_ind->pages > 1)&&( (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map & (1 << 1) ) == (1 << 1) ))
            {
                if (kal_mem_cmp(lmi_msg_ind->msg_data+SMSAL_CB_PER_7BIT_LEN, cb_7bit_buf_ptr, SMSAL_CB_PER_7BIT_LEN) != 0)
                    SMSAL_ASSERT(0);
                SMSALDBG_(printf("\n==> more page OK!!\n");)
            }
        }
        else
        {
            SMSALDBG_(printf("\n==> GSM 7 bit data FAIL XXXXXXXXXXXXXXXX!!\n");)
            SMSAL_ASSERT(0);
        }
    }
    
    SMSALDBG_(printf("dest = %d\n",lmi_msg_ind->dest);)
    SMSALDBG_(printf("sn = %d\n",lmi_msg_ind->sn);)
    SMSALDBG_(printf("mi = %d\n",lmi_msg_ind->mi);)
    SMSALDBG_(printf("dcs (hex)= %x\n",lmi_msg_ind->dcs);)
    SMSALDBG_(printf("page = %d\n",lmi_msg_ind->page);)
    SMSALDBG_(printf("pages = %d\n",lmi_msg_ind->pages);)
    SMSALDBG_(printf("rmi_use_hex = %d\n",lmi_msg_ind->rmi_use_hex);)
    SMSALDBG_(printf("msg_length; = %d\n",lmi_msg_ind->msg_length);)

    SMSALDBG_(printf("\n");)
    for (i = 0; i < total_length; i++)
    {
        if (i == 20) 
            break;
        SMSALDBG_(printf("%x ",*(lmi_msg_ind->msg_data+i));)
        //if ((i%20 == 0)&& (i!=0))
        //    SMSALDBG_(printf("\n");)
    }
    SMSALDBG_(printf("\n");)
}

void smsal_cb_ut_rmi_pud_debug(l4csmsal_cb_msg_pdu_ind_struct *cbm_ptr,
                                            kal_uint16 total_length)
{
    kal_uint8 i;
    static kal_uint8 show_count = 0;

    SMSALDBG_(printf("\nsmsal_cb_ut_rmi_pud_debug %d page\n",show_count++);)

    if (kal_mem_cmp(cbm_ptr->msg_data+6, cb_data+6, total_length-6) != 0)
    {
        SMSAL_ASSERT(0);
    }
    else
    {
        SMSALDBG_(printf("pdu mode OK!\n");)
    }
    
    SMSALDBG_(printf("\n");)
    for (i = 0; i < total_length; i++)
    {
        if (i == 20) 
            break;
        SMSALDBG_(printf("%x ",*(cbm_ptr->msg_data+i));)
        //if ((i%20 == 0)&& (i!=0))
        //    SMSALDBG_(printf("\n");)
    }
    SMSALDBG_(printf("\n");)
}

void smsal_cb_ut_rmi_text_debug(l4csmsal_cb_msg_text_ind_struct *cbm_ptr,
                                                            kal_uint16 total_length)
{
    kal_uint8 cb_7bit_buf_ptr[128];
    kal_uint8 cb_7bit_buf_length;

    kal_uint8 i;
    static kal_uint8 show_count = 0;

    SMSALDBG_(printf("\nsmsal_cb_ut_rmi_text_debug %d page\n",show_count++);)

    if (cbm_ptr->rmi_use_hex == KAL_TRUE)
    {
        if (kal_mem_cmp(cbm_ptr->msg_data, cb_data+6, SMSAL_CB_PER_UCS2_CONT_LEN) != 0)
        {
                SMSAL_ASSERT(0);
        }
        else
        {
            SMSALDBG_(printf("8 bit text mode OK!\n");)
        }

    }
    else
    {
        smsal_decode_cb_page(cb_7bit_buf_ptr,
                                    cb_data,
                                    &cb_7bit_buf_length,
                                    6,
                                    CB_MAX_DATA_NUM_PER_PAGE);
        ASSERT ( cb_7bit_buf_length == SMSAL_CB_PER_7BIT_LEN );

        if (kal_mem_cmp(cbm_ptr->msg_data, cb_7bit_buf_ptr, SMSAL_CB_PER_7BIT_LEN) != 0)
        {
                SMSAL_ASSERT(0);
        }
        else
        {
            SMSALDBG_(printf("7bit text mode OK!\n");)
        }
    }
    
    SMSALDBG_(printf("dest = %d\n",cbm_ptr->dest);)
    SMSALDBG_(printf("sn = %d\n",cbm_ptr->sn);)
    SMSALDBG_(printf("mi = %d\n",cbm_ptr->mi);)
    SMSALDBG_(printf("dcs (hex)= %x\n",cbm_ptr->dcs);)
    SMSALDBG_(printf("page = %d\n",cbm_ptr->page);)
    SMSALDBG_(printf("pages = %d\n",cbm_ptr->pages);)
    SMSALDBG_(printf("rmi_use_hex = %d\n",cbm_ptr->rmi_use_hex);)
    SMSALDBG_(printf("msg_length; = %d\n",cbm_ptr->msg_length);)

    SMSALDBG_(printf("\n");)
    for (i = 0; i < total_length; i++)
    {
        if (i == 20) 
            break;
        SMSALDBG_(printf("%x ",*(cbm_ptr->msg_data+i));)
        //if ((i%20 == 0)&& (i!=0))
        //    SMSALDBG_(printf("\n");)
    }
    SMSALDBG_(printf("\n");)
}

void smsal_cb_ut_hz_debug(l4csmsal_hz_cb_msg_ind_struct   *hz_msg_ind,
                                                            kal_uint16 total_length)
{
    kal_uint8 cb_7bit_buf_ptr[128];
    kal_uint8 cb_7bit_buf_length;

    kal_uint8 i;
    static kal_uint8 show_count = 0;

    SMSALDBG_(printf("\nHome Zone\n");)
    SMSALDBG_(printf("\nsmsal_cb_ut_hz_debug %d page\n",show_count++);)

    if (hz_msg_ind->rmi_use_hex == KAL_TRUE)
    {
        if (kal_mem_cmp(hz_msg_ind->msg_data, cb_data+6, SMSAL_CB_PER_UCS2_CONT_LEN) != 0)
        {
                SMSAL_ASSERT(0);
        }
        else
        {
            SMSALDBG_(printf("8 bit text mode OK!\n");)
        }

    }
    else
    {
        smsal_decode_cb_page(cb_7bit_buf_ptr,
                                    cb_data,
                                    &cb_7bit_buf_length,
                                    6,
                                    CB_MAX_DATA_NUM_PER_PAGE);
        ASSERT ( cb_7bit_buf_length == SMSAL_CB_PER_7BIT_LEN );

        if (kal_mem_cmp(hz_msg_ind->msg_data, cb_7bit_buf_ptr, SMSAL_CB_PER_7BIT_LEN) != 0)
        {
                SMSAL_ASSERT(0);
        }
        else
        {
            SMSALDBG_(printf("7bit text mode OK!\n");)
        }
    }
    
    SMSALDBG_(printf("sn = %d\n",hz_msg_ind->sn);)
    SMSALDBG_(printf("mi = %d\n",hz_msg_ind->mi);)
    SMSALDBG_(printf("dcs (hex)= %x\n",hz_msg_ind->dcs);)
    SMSALDBG_(printf("page = %d\n",hz_msg_ind->page);)
    SMSALDBG_(printf("pages = %d\n",hz_msg_ind->pages);)
    SMSALDBG_(printf("rmi_use_hex = %d\n",hz_msg_ind->rmi_use_hex);)
    SMSALDBG_(printf("msg_length; = %d\n",hz_msg_ind->msg_length);)

    SMSALDBG_(printf("\n");)
    for (i = 0; i < total_length; i++)
    {
        if (i == 20) 
            break;
        SMSALDBG_(printf("%x ",*(hz_msg_ind->msg_data+i));)
        //if ((i%20 == 0)&& (i!=0))
        //    SMSALDBG_(printf("\n");)
    }
    SMSALDBG_(printf("\n");)
}
#endif //(__SMSAL_UT__)

/*****************************************************************************
* FUNCTION
*  smsal_cb_flush
* DESCRIPTION
*   This function sends the CB MSG IND to L4C and release corresponding
*   resources if needed.
*
* PARAMETERS
*  a  IN       blk_id
*  b  IN       cbmi
*  c  IN       dcs
*  d  IN       msg_data
*  e  IN       msg_length
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cb_flush(kal_uint8                   blk_id,
                    smsal_ratcm_cb_data_ind_struct *page_ind,
                    kal_uint8                   *msg_data,
                    kal_uint16                  msg_length,
                    kal_bool                    is_timeout)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint16 total_length = 0;
#ifdef __HOMEZONE_SUPPORT__
    kal_uint16 mi;
#endif
    kal_uint8 mi_dispatch = 0x01;       /* default : LMI only */

    l4csmsal_cb_msg_text_ind_struct *cbm_ptr, *lmi_msg_ind = NULL;

#ifdef __HOMEZONE_SUPPORT__
    l4csmsal_hz_cb_msg_ind_struct *hz_msg_ind = NULL;
#endif

#ifdef CB_DEBUG_INFO
    kal_sprintf(cb_str_buff, "CB:flush (blk_id=%d) ", blk_id);
    tst_sys_trace(cb_str_buff);
#endif

    if (blk_id != SMSAL_CB_UNUSED_BLK)
    {
        ASSERT(blk_id < SMSAL_CB_MAX_SESSION);
        if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages == SMSAL_CB_UNUSED_PAGE)
        {
        #ifdef CB_DEBUG_INFO
            kal_sprintf(cb_str_buff, "CB:flush wrong ID (blk_id=%d) ", blk_id);
            tst_sys_trace(cb_str_buff);
        #endif
            return;
        }

        if (is_timeout == KAL_FALSE)
            smsal_stop_timer(SMSAL_CB_TIMER, blk_id);

        SMSAL_ASSERT(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind != NULL);
        cbm_ptr = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind;

        cbm_ptr->dest = SMSAL_TO_LMI;
        cbm_ptr->mi = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].cbmi;
        cbm_ptr->sn = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].sn;
        cbm_ptr->dcs = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs;
        cbm_ptr->pages = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages;

        /* copy from slot pool: fill msg_data, msg_length */
        smsal_cb_copy_pages(blk_id, cbm_ptr->msg_data, &total_length);

        cbm_ptr->msg_length = total_length;

        /* msg_ind will be sent as local parameter. set to NULL */
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind = NULL;

#ifdef __HOMEZONE_SUPPORT__
        mi = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].cbmi;
#endif
    }
    else
    {
#ifdef __HOMEZONE_SUPPORT__
        mi = page_ind->msgid;
#endif

        if (msg_data != NULL)
        {
            total_length += msg_length;
            SMSAL_ASSERT(total_length == msg_length);
        }

        cbm_ptr = (l4csmsal_cb_msg_text_ind_struct *) construct_local_para
            ((kal_uint16) (sizeof(l4csmsal_cb_msg_text_ind_struct) + total_length + 5 /* safety */ ), TD_CTRL);

        cbm_ptr->dest       = SMSAL_TO_LMI;
        cbm_ptr->sn         = page_ind->serial_num;
        cbm_ptr->mi         = page_ind->msgid;
        cbm_ptr->dcs        = page_ind->dcs;
        cbm_ptr->page       = page_ind->page_no;
        cbm_ptr->pages      = page_ind->total_pages;

        if(msg_data != NULL)
        {
            kal_mem_cpy(cbm_ptr->msg_data, msg_data, total_length);
            cbm_ptr->msg_length = total_length;
        }

    }

#ifdef __HOMEZONE_SUPPORT__
    if (mi == SMSAL_CB_HOMEZONE_MI)
        mi_dispatch = smsal_cb_hz_mi_dispatch();

    if ((mi_dispatch & 0x03) == 0x03)   /* send to both LMI and HZ */
    {
        lmi_msg_ind = cbm_ptr;

        hz_msg_ind = (l4csmsal_hz_cb_msg_ind_struct *) construct_local_para
            ((kal_uint16) (sizeof(l4csmsal_hz_cb_msg_ind_struct) + cbm_ptr->msg_length + 5 /* safety */ ), TD_CTRL);

        if( (cbm_ptr->rmi_use_hex == SMSAL_8BIT_DCS) || (cbm_ptr->rmi_use_hex == SMSAL_UCS2_DCS))
            hz_msg_ind->rmi_use_hex= KAL_TRUE;
        else
            hz_msg_ind->rmi_use_hex= KAL_FALSE;
                    
        hz_msg_ind->sn         = cbm_ptr->sn;
        hz_msg_ind->mi         = cbm_ptr->mi;
        hz_msg_ind->dcs        = cbm_ptr->dcs;
        hz_msg_ind->page       = cbm_ptr->page;
        hz_msg_ind->pages      = cbm_ptr->pages;
        hz_msg_ind->msg_length = cbm_ptr->msg_length;

        kal_mem_cpy(hz_msg_ind->msg_data, cbm_ptr->msg_data, cbm_ptr->msg_length);
    }
    else if ((mi_dispatch & 0x02) == 0x02)      /* send to HZ */
    {
        hz_msg_ind = (l4csmsal_hz_cb_msg_ind_struct *) cbm_ptr;
    }
    else
#endif
    if ((mi_dispatch & 0x01) == 0x01)   /* send to LMI */
    {
        lmi_msg_ind = cbm_ptr;
    }

#if defined (__SMSAL_UT__)
    smsal_cb_ut_debug(blk_id,lmi_msg_ind,total_length);
#endif

    if ((mi_dispatch & 0x01) == 0x01)   /* send to LMI */
        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_MSG_TEXT_IND,
        (local_para_struct *) lmi_msg_ind, NULL);

#ifdef __HOMEZONE_SUPPORT__
    #if defined (__SMSAL_UT__)
    if ((mi_dispatch & 0x02) == 0x02)  /* send to HZ */
        smsal_cb_ut_hz_debug(hz_msg_ind, hz_msg_ind->msg_length);
    #endif
    
    if ((mi_dispatch & 0x02) == 0x02)  /* send to HZ */
        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_HZ_CB_MSG_IND,
                             (local_para_struct *) hz_msg_ind, NULL);
#endif

    /* free cb control block */
    if (blk_id != SMSAL_CB_UNUSED_BLK)
        smsal_cb_free_ctrl_blk(blk_id);

}                                       /* end of smsal_cb_flush */

void smsal_cb_timeout(void *msg_ptr)
{
    smsal_timer_info_struct *timer_ptr;

    /* add trace here */
    CBDBG_(printf("smsal_cb_timeout:\n");)

    ASSERT( msg_ptr != NULL );

    timer_ptr = (smsal_timer_info_struct *) msg_ptr;

    timer_ptr->event_id = NULL;

    if (timer_ptr->is_used == KAL_FALSE)
        return;

    timer_ptr->is_used = KAL_FALSE;     /* mark as free */

    CBDBG_(printf("smsal_cb_timeout: blk=%d\n", timer_ptr->invoke_id);)

    SMSAL_ASSERT(timer_ptr->timer_id == SMSAL_CB_TIMER);

    if (timer_ptr->timer_id == SMSAL_CB_TIMER)
    {
        ASSERT(timer_ptr->invoke_id < SMSAL_CB_UNUSED_PAGE);

        smsal_cb_flush(timer_ptr->invoke_id,    /* control block id */
                       NULL,
                       NULL,
                       0,
                       KAL_TRUE /* timer expiry */
                       );

    }

}                                       /* end of smsal_cb_timeout */

void smsal_cb_flush_oldest()
{
    kal_uint8 blk_id;

    /* add trace here */
    kal_brief_trace(TRACE_WARNING, FUNC_SMSAL_CB_FLUSH_OLDEST);
    SMSALDBG_(printf("smsal_cb_flush_oldest\n");)
           
    if (smsal_cb_find_oldest_ctrl_blk(&blk_id) == KAL_TRUE)
    {
        smsal_cb_flush(blk_id, NULL, NULL, 0, KAL_FALSE);
    }

}                                       /* end of smsal_cb_flush_oldest */

void smsal_cb_receive_new_page(kal_uint8                   blk_id,
                               smsal_ratcm_cb_data_ind_struct *page_ind,
                               kal_uint8                   alphabet,
                               kal_uint8                   *msg_data,
                               kal_uint8                   msg_length)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint32 tick;
    kal_uint8 *data_ptr;

    ASSERT(blk_id < SMSAL_CB_MAX_SESSION);
    ASSERT(msg_data != NULL);

    if (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages == SMSAL_CB_UNUSED_PAGE)
    {
        /* 1st time to use this block, initialize it */
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages = page_ind->total_pages;
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].recv_pages  = 0;
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].cbmi        = page_ind->msgid;
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs         = page_ind->dcs;
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].sn          = page_ind->serial_num;
        smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet    = alphabet;


    #ifdef CB_DEBUG_INFO
        kal_sprintf(cb_str_buff, "CB:new CB session.(blk_id=%d,total_page=%d, mi=%d,sn=%d,dcs=%d",
                    blk_id, smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages,
                    page_ind->msgid, page_ind->serial_num,page_ind->dcs);
        tst_sys_trace(cb_str_buff);
    #endif

    }
    else
    {

        smsal_stop_timer(SMSAL_CB_TIMER, blk_id);
    }

    smsal_start_timer(SMSAL_CB_TIMER, blk_id, SMSAL_CB_TIMEOUT_TICK);

    /* check whether this page was received already */
    if(smsal_cb_page_exist(blk_id, page_ind->page_no) == KAL_TRUE)
    {
        /* add trace here */
        CBDBG_(printf("page_exist: blk_id=%d page=%d\n", blk_id, page_ind->page_no);)
        return;
    }

    /* update block data */
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].recv_pages++; /* increment the received pages no */

    tick = kal_get_systicks();
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].last_time = tick;     /* touch it */

    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page = page_ind->page_no;
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map |= (1 << (page_ind->page_no - 1));
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page_offset[page_ind->page_no - 1] = msg_length;
    
    data_ptr = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data;

    /* fill page slot */
    if (alphabet != SMSAL_DEFAULT_DCS)
        kal_mem_cpy(data_ptr + ((page_ind->page_no - 1) * SMSAL_CB_PER_7BIT_LEN) + 2, msg_data, msg_length);
    else
        kal_mem_cpy(data_ptr + ((page_ind->page_no - 1) * SMSAL_CB_PER_7BIT_LEN) + 3, msg_data, msg_length);
}                                       /* end of smsal_cb_receive_new_page */


void smsal_cb_receive_umts_page(kal_uint8  blk_id,
                                kal_uint8  cur_page,
                                kal_uint8  alphabet,
                                kal_uint8  *msg_data,
                                kal_uint8  msg_length)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8  *data_ptr;

    ASSERT(blk_id < SMSAL_CB_MAX_SESSION);
    ASSERT ( msg_data != NULL );


    /* update block data */
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].recv_pages ++; /* increment the received pages no */

    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].pages_map |= (1 << (cur_page - 1));
    smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page_offset[cur_page - 1] = msg_length;
    
    data_ptr = smsal_cb_data_ptr->ctrl_blk_pool[blk_id].msg_ind->msg_data;

    /* fill page slot */
    if (alphabet != SMSAL_DEFAULT_DCS)
        kal_mem_cpy(data_ptr + ((cur_page - 1) * SMSAL_CB_PER_7BIT_LEN) + 2, msg_data, msg_length);
    else
        kal_mem_cpy(data_ptr + ((cur_page - 1) * SMSAL_CB_PER_7BIT_LEN) + 3, msg_data, msg_length);

} /* end of smsal_cb_receive_umts_page */

smsal_cb_in_seq_enum smsal_cb_in_seq_check(kal_uint8  blk_id,
                                           kal_uint16 sn,
                                           kal_uint8  dcs,
                                           kal_uint8  total_pages,
                                           kal_uint8  page)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    ASSERT(blk_id < SMSAL_CB_MAX_SESSION);
    ASSERT(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages != SMSAL_CB_UNUSED_PAGE);

    /* if( smsal_cb_data_ptr->ctrl_blk_pool[blk_id].sn != sn ) */
    /*    return SMSAL_CB_OUT_SEQ_KEEP;    */

    /*
     * if sequence no is the same, but DCS and TOTAL_PAGES are different
     * * from previous one, it's wrong, we send current saved CB message
     * * and discard this new page !!
     */
    if ((smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs != dcs) ||
        (smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages != total_pages) ||
        (smsal_cb_page_exist(blk_id, page) == KAL_TRUE))
    {
        return SMSAL_CB_OUT_SEQ_DROP;
    }

    return SMSAL_CB_IN_SEQ;

}                                       /* end of smsal_cb_in_seq_check */


#ifdef __SAT__
#ifdef __REL6__
void smsal_ratcm_cb_data_download_clean(void)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    if( smsal_cb_data_ptr->local_para_ptr )
    {
        free_local_para( smsal_cb_data_ptr->local_para_ptr );
        smsal_cb_data_ptr->local_para_ptr = NULL;
    }

    if( smsal_cb_data_ptr->peer_buff_ptr )
    {
        free_peer_buff( smsal_cb_data_ptr->peer_buff_ptr );
        smsal_cb_data_ptr->peer_buff_ptr = NULL;
    }
}

// for UMTS CB Data Download
void smsal_ratcm_cb_data_download(kal_uint8 rat, kal_uint8 current_page, kal_uint8 total_page)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));

    smsal_ratcm_cb_data_ind_struct *page_ind_ptr = NULL;
    sat_cb_dl_req_struct *cbd_ptr;
    kal_uint8            *pdu_ptr;
    kal_uint8            pdu_total_pages;
    kal_uint16           umts_msg_length;
    kal_uint16           pdu_len;

    page_ind_ptr = (smsal_ratcm_cb_data_ind_struct *) smsal_cb_data_ptr->local_para_ptr;

    if( smsal_cb_data_ptr->local_para_ptr == NULL || smsal_cb_data_ptr->peer_buff_ptr == NULL )
    {
        smsal_ratcm_cb_data_download_clean();
        return;
    }

    // umts_msg_length = 6+ 1 + (page_ind_ptr->total_pages * 83);
    pdu_ptr = get_peer_buff_pdu(smsal_cb_data_ptr->peer_buff_ptr, &pdu_len);
    pdu_total_pages = *pdu_ptr;
    umts_msg_length = pdu_total_pages * 83 + 1;

    /* check length */
    if (pdu_len != umts_msg_length || umts_msg_length > 1246) /* 1+ 83*15 */
    {
        kal_brief_trace(TRACE_WARNING, ERROR_RECV_WRONG_CB_PAGE, rat, pdu_len);
        SMSALDBG_(printf("recv an error cb page len = %d\n", pdu_len);)
        smsal_ratcm_cb_data_download_clean();    
        return;
    }    

    current_page++;

    if( rat == RAT_UMTS )
    {
        if( (current_page > total_page) || (total_page != pdu_total_pages ) )
        {
            smsal_ratcm_cb_data_download_clean();
            return;
        }

        SMSALDBG_(printf("Support SERVICE_DATA_DOWNLOAD_SMS_CB\n");)
        cbd_ptr = (sat_cb_dl_req_struct *) construct_local_para(sizeof(sat_cb_dl_req_struct), TD_CTRL);

        cbd_ptr->size_of_cb_page_data = CB_MAX_DATA_NUM_PER_PAGE;
        kal_mem_cpy(cbd_ptr->cb_page_data + 6,
                    pdu_ptr + 1 + (83 * (current_page-1)), 82);
                    //CB_MAX_DATA_NUM_PER_PAGE);

        cbd_ptr->cb_page_data[0] = (page_ind_ptr->serial_num >> 8);
        cbd_ptr->cb_page_data[1] = (page_ind_ptr->serial_num & 0x00ff);
        cbd_ptr->cb_page_data[2] = (page_ind_ptr->msgid >> 8);
        cbd_ptr->cb_page_data[3] = (page_ind_ptr->msgid & 0x00ff);
        cbd_ptr->cb_page_data[4] = (page_ind_ptr->dcs);
        cbd_ptr->cb_page_data[5] = ( (pdu_total_pages & 0x0f) | ((current_page & 0x0f) << 4) );

        cbd_ptr->rat = RAT_UMTS;
        cbd_ptr->current_page = current_page;
        cbd_ptr->total_page = total_page;

        kal_brief_trace(TRACE_INFO, INFO_SEND_SAT_CB_DL_REQ);
        smsal_send_msg_to_sim(MSG_ID_SAT_CB_DL_REQ, (local_para_struct *) cbd_ptr, NULL);
    }
    else
    {
        smsal_ratcm_cb_data_download_clean();
    }
}
#endif //__REL6__
#endif //__SAT__

/*****************************************************************************
* FUNCTION
*  smsal_cb_fill_page_header for 3G only
* DESCRIPTION
*   This function transfer 3G CB message header to 2G format
*
* PARAMETERS
*  a  IN       local_para_ptr
      IN       cur_page
      IN       total_page
      IN       msg_data
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/

void smsal_cb_fill_page_header(local_para_struct *local_para_ptr, kal_uint8 cur_page, kal_uint8 total_page, kal_uint8 *msg_data)
{
    smsal_ratcm_cb_data_ind_struct *page_ind_ptr = NULL;
    kal_uint16 sn, mid;

    page_ind_ptr = (smsal_ratcm_cb_data_ind_struct *) local_para_ptr; 
    sn  = page_ind_ptr->serial_num;
    mid = page_ind_ptr->msgid;
    
    *msg_data = (kal_uint8)((sn & 0xff00) >> 8);
    *(msg_data + 1) = (kal_uint8)(sn & 0x00ff) ;
    *(msg_data + 2) = (kal_uint8)((mid & 0xff00) >> 8);
    *(msg_data + 3) = (kal_uint8)(mid & 0x00ff) ;
    *(msg_data + 4) = page_ind_ptr->dcs;
    *(msg_data + 5) = (cur_page<<4)|total_page;
}


/*****************************************************************************
* FUNCTION
*  smsal_ratcm_cb_data_ind_handler
* DESCRIPTION
*   This function handles CB page re-assembling
*
* PARAMETERS
*  a  IN       local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_ratcm_cb_data_ind_handler(local_para_struct *local_para_ptr,
                                     peer_buff_struct  *peer_buff_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_ratcm_cb_data_ind_struct *page_ind_ptr = NULL;

    kal_uint8               lang_type;
    smsal_dcs_enum          alphabet_type;
    smsal_msg_class_enum    mclass;
    kal_bool                is_compress;
    kal_bool                is_reserved;

    kal_uint8               *msg_data;
    kal_uint8               msg_length;

    kal_uint8               current_dest;
    kal_uint8               current_msg_format;

    kal_uint8               blk_id;

    kal_uint8               page_length;
    kal_uint16              pdu_len;
    kal_uint8               *pdu_ptr;
    kal_uint16              umts_msg_length;

    kal_uint8               page_buf_ptr[SMSAL_CB_ONE_PAGE_SIZE];

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_RATCM_CB_DATA_IND_HANDLER);

    msg_length = 0;

    page_ind_ptr = (smsal_ratcm_cb_data_ind_struct *) local_para_ptr;  
   
    /* target trace */
    kal_brief_trace(TRACE_INFO, INFO_CB_PAGE_INFO, \
              page_ind_ptr->rat,\
              page_ind_ptr->serial_num,\
              page_ind_ptr->msgid,\
              page_ind_ptr->dcs,\
              page_ind_ptr->page_no,\
              page_ind_ptr->total_pages);

    /* 03.41 9.4.1.2.4 */
    if(page_ind_ptr->page_no > 15 || page_ind_ptr->total_pages > 15 ||
        page_ind_ptr->page_no == 0 || page_ind_ptr->total_pages == 0 ||
        page_ind_ptr->page_no > page_ind_ptr->total_pages)
    {
        /* add trace here */
        page_ind_ptr->page_no  = 1;
        page_ind_ptr->total_pages = 1;
    }

    /* decode CB DCS */
    smsal_decode_cbsdcs(page_ind_ptr->dcs,
                        &lang_type,
                        &alphabet_type, 
                        &mclass, 
                        &is_compress, 
                        &is_reserved);

#ifdef __USSD_AUTO_REJECT__
    /* if support auto reject feature, L4 will check ussd part. But CB need fix itself */
    if (alphabet_type == SMSAL_RESERVED_DCS)
    {
        alphabet_type = SMSAL_DEFAULT_DCS;
    }
#endif

    /*
     * if this cb message is been compressed or is a not yet supported function,
     * we discard this cb message
     */
    if (is_reserved == KAL_TRUE || is_compress == KAL_TRUE)
    {
        kal_brief_trace(TRACE_WARNING, ERROR_RECV_UNSUPPORTED_CB_PAGE);
        CBDBG_(printf("recv an unsupported cb page\n");)

        return;
    }

    if ((smsal_para_ptr->rmi.nmi_para.bm == 2) ||
       ((smsal_para_ptr->rmi.nmi_para.bm == 3) &&
       (mclass == SMSAL_CLASS3)))
    {
        current_dest = SMSAL_TO_RMI;
        current_msg_format = smsal_para_ptr->rmi.message_format;
    }
    else
    {
        current_dest = SMSAL_TO_LMI;
        /* always use text mode for MMI */
        current_msg_format = SMSAL_TEXT_MODE;
    }

#ifdef __GSM_RAT__
    if (page_ind_ptr->rat == RAT_GSM)
    {
        /* SAT CB DATA Download  */
        if (page_ind_ptr->is_mids == KAL_FALSE)
        {
            SMSALDBG_(printf("recv RAT_GSM SAT CB DATA Download\n");)
            
        #ifdef __SAT__
            #ifdef __GEMINI__
            if (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_CB, SMSAL_SIM_ID) == SERVICE_SUPPORT)
            #else
            if (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_CB) == SERVICE_SUPPORT)
            #endif
            {
                sat_cb_dl_req_struct        *cbd_ptr;

                SMSALDBG_(printf("Support SERVICE_DATA_DOWNLOAD_SMS_CB\n");)

                cbd_ptr = (sat_cb_dl_req_struct *) construct_local_para
                                  (sizeof(sat_cb_dl_req_struct), TD_CTRL );

                cbd_ptr->size_of_cb_page_data = CB_MAX_DATA_NUM_PER_PAGE;
                cbd_ptr->rat = RAT_GSM;

                kal_mem_cpy (cbd_ptr->cb_page_data,
                            page_ind_ptr->page_data,CB_MAX_DATA_NUM_PER_PAGE);

                kal_brief_trace(TRACE_INFO, INFO_SEND_SAT_CB_DL_REQ);

                smsal_send_msg_to_sim(MSG_ID_SAT_CB_DL_REQ,
                                      (local_para_struct *) cbd_ptr,
                                      NULL);            
            }
        #endif /* __SAT__ */

            return;                    
        }

        if (alphabet_type == SMSAL_DEFAULT_DCS)
        {  
            page_length   = 0;

            /* add trace here */
            CBDBG_(printf("recv gsm 7-bit CB\n");)

            kal_mem_set (page_buf_ptr, 0, SMSAL_CB_PER_7BIT_LEN);

            smsal_decode_cb_page(page_buf_ptr,
                                                page_ind_ptr->page_data,
                                                &page_length,
                                                6,
                                                (kal_uint8)(22 * page_ind_ptr->valid_blk_num));

            ASSERT(page_length <= SMSAL_CB_PER_7BIT_LEN);

            msg_data   = page_buf_ptr;
            msg_length = page_length;

        }
        else
        {
            CBDBG_(printf("recv non gsm 7-bit CB: 8-bit or ucs2 \n");)

            msg_data = (page_ind_ptr->page_data+6);
            msg_length = (22 * page_ind_ptr->valid_blk_num) - 6;
        }

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
        if (current_dest == SMSAL_TO_RMI)      
#endif  
        {
            kal_uint8  mi_dispatch ;

            mi_dispatch = 0x01; /* default : LMI/RMI only */

        #ifdef __HOMEZONE_SUPPORT__
            if (page_ind_ptr->msgid == SMSAL_CB_HOMEZONE_MI)
                mi_dispatch = smsal_cb_hz_mi_dispatch();

            if ((mi_dispatch & 0x02) == 0x02)       /* send to HZ */
            {
                l4csmsal_hz_cb_msg_ind_struct   *hz_msg_ind ;
                hz_msg_ind  = (l4csmsal_hz_cb_msg_ind_struct *) construct_local_para
                    ( (kal_uint16)(sizeof(l4csmsal_hz_cb_msg_ind_struct )+ msg_length +5/*safety*/), TD_CTRL );

                if( (alphabet_type == SMSAL_8BIT_DCS) || (alphabet_type == SMSAL_UCS2_DCS))
                    hz_msg_ind->rmi_use_hex= KAL_TRUE;
                else
                    hz_msg_ind->rmi_use_hex= KAL_FALSE;
                    
                hz_msg_ind->sn         = page_ind_ptr->serial_num;
                hz_msg_ind->mi         = page_ind_ptr->msgid;
                hz_msg_ind->dcs        = page_ind_ptr->dcs;
                hz_msg_ind->page       = page_ind_ptr->page_no;
                hz_msg_ind->pages      = page_ind_ptr->total_pages;
                hz_msg_ind->msg_length = msg_length ;

                kal_mem_cpy(hz_msg_ind->msg_data, msg_data ,msg_length);

                #if defined (__SMSAL_UT__)
                    smsal_cb_ut_hz_debug(hz_msg_ind, hz_msg_ind->msg_length);
                #endif

                smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_HZ_CB_MSG_IND,
                                            (local_para_struct *) hz_msg_ind, NULL);
            }
        #endif

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

            if((mi_dispatch & 0x01) == 0x01)  /* default : LMI/RMI only */
            {
                if(current_msg_format == SMSAL_PDU_MODE ) 
                {
                    /* MAUI_00733028 [SMSAL][CB][Revise] modify cb pdu msg length by valid_blk_num */
                    l4csmsal_cb_msg_pdu_ind_struct *cbm_ptr;
                    kal_uint8 pdu_msg_length = 22 * page_ind_ptr->valid_blk_num;

                    if (pdu_msg_length > CB_MAX_DATA_NUM_PER_PAGE)
                        pdu_msg_length = CB_MAX_DATA_NUM_PER_PAGE;

                    cbm_ptr = (l4csmsal_cb_msg_pdu_ind_struct *) construct_local_para
                    ((kal_uint16) (sizeof(l4csmsal_cb_msg_pdu_ind_struct) + pdu_msg_length), TD_CTRL);

                    kal_mem_cpy(cbm_ptr->msg_data, page_ind_ptr->page_data, pdu_msg_length);

                    cbm_ptr->msg_length = pdu_msg_length;
                    cbm_ptr->dest = current_dest;

                    kal_brief_trace(TRACE_INFO, INFO_SEND_L4CSMSAL_CB_MSG_IND);
                    CBDBG_(printf("send cb msg ind to l4c\n");)
                    
                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_MSG_PDU_IND,
                                                        (local_para_struct *) cbm_ptr,
                                                        NULL);
                }
                else
                {
                    l4csmsal_cb_msg_text_ind_struct *cbm_ptr;

                    cbm_ptr = (l4csmsal_cb_msg_text_ind_struct *) construct_local_para
                            ( (kal_uint16)(sizeof(l4csmsal_cb_msg_text_ind_struct)+ msg_length+5 /*safety*/), TD_CTRL );

                    kal_mem_cpy(cbm_ptr->msg_data, msg_data, msg_length);

                    cbm_ptr->dest       = SMSAL_TO_RMI;
                    cbm_ptr->sn         = page_ind_ptr->serial_num;
                    cbm_ptr->mi         = page_ind_ptr->msgid;
                    cbm_ptr->dcs        = page_ind_ptr->dcs;
                    cbm_ptr->page       = page_ind_ptr->page_no;
                    cbm_ptr->pages      = page_ind_ptr->total_pages;
                    cbm_ptr->msg_length = msg_length;

                    if( (alphabet_type == SMSAL_8BIT_DCS) || (alphabet_type == SMSAL_UCS2_DCS))
                        cbm_ptr->rmi_use_hex= KAL_TRUE;
                    else
                        cbm_ptr->rmi_use_hex= KAL_FALSE;


                    kal_brief_trace(TRACE_INFO, INFO_SEND_L4CSMSAL_CB_MSG_IND);
                    SMSALDBG_(printf("send cb msg ind to l4c\n");)

                    #if defined (__SMSAL_UT__)
                        smsal_cb_ut_rmi_text_debug(cbm_ptr,cbm_ptr->msg_length);
                    #endif
                    
                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_MSG_TEXT_IND,
                                                        (local_para_struct *) cbm_ptr,
                                                        NULL);
                }
            }

            return;
        }/*endif current_dest == SMSAL_TO_RMI*/


        /*
         * in case of single page, it's no need to queue this CB,
         * * send to MMI directly
         */
        if (page_ind_ptr->page_no == 1 && page_ind_ptr->total_pages == 1)
        {
            /* add trace here */
            CBDBG_(printf("recv single-page CB\n");)

            smsal_cb_flush(SMSAL_CB_UNUSED_BLK,/* not from block */
                           page_ind_ptr,
                           msg_data,
                           msg_length,
                           KAL_FALSE);

        #ifdef CB_DEBUG_INFO
            kal_sprintf(cb_str_buff, "CB:recv single-page");
            tst_sys_trace(cb_str_buff);
        #endif
        }
        /*  more than one page */
        else
        {
            kal_bool  found;

            /* check wether the CB already occupied one control block or not  */
            if (smsal_cb_find_blk(page_ind_ptr, &blk_id) == KAL_TRUE)
            {
                smsal_cb_in_seq_enum inseq_ret;

                /* add trace here */
                CBDBG_(printf("cb control block exist\n");)
            #ifdef CB_DEBUG_INFO
                kal_sprintf(cb_str_buff, "CB:control block exist (blk_id = %d)",blk_id);
                tst_sys_trace(cb_str_buff);
            #endif

                inseq_ret = smsal_cb_in_seq_check(blk_id,
                page_ind_ptr->serial_num,
                page_ind_ptr->dcs,
                page_ind_ptr->total_pages,
                page_ind_ptr->page_no);

                if (inseq_ret == SMSAL_CB_IN_SEQ)
                {          
                    CBDBG_(printf("cb in sequence\n");)
                #ifdef CB_DEBUG_INFO
                    kal_sprintf(cb_str_buff, "CB:in sequence");
                    tst_sys_trace(cb_str_buff);
                #endif


                /*
                 * message is still incomplete !!
                 * * find a free page slot and update the slot 
                 */

                    smsal_cb_receive_new_page(blk_id,
                                              page_ind_ptr,
                                              (kal_uint8)alphabet_type,
                                              msg_data,
                                              msg_length);

                    if (smsal_cb_is_all_received(blk_id) == KAL_TRUE)
                    {
                        #ifdef CB_DEBUG_INFO
                            kal_sprintf(cb_str_buff, "CB:all seg received. Flush all.");
                            tst_sys_trace(cb_str_buff);
                        #endif

                        /* all pages received, flush it !! */
                        smsal_cb_flush(blk_id, NULL, NULL, 0, KAL_FALSE);
                    }
                }
                else
                {
                    /* diff dcs, total pags.  drop the CB.  */
                #ifdef CB_DEBUG_INFO
                    kal_sprintf(cb_str_buff, "CB: out of seq. Drop.(blk dcs=%d,blk total_page=%d) ",
                                smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs,smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages);
                    tst_sys_trace(cb_str_buff);
                #endif
                    return;
                }

            }
            else
            {
                /* new CB MSG (not in control block) */

                /* add trace here */
                SMSALDBG_(printf("cb control block not exist\n");)

                if(smsal_cb_find_free_blk(&blk_id,  page_ind_ptr->total_pages, SMSAL_CB_PER_7BIT_LEN) == KAL_FALSE )
                {
                    smsal_cb_flush_oldest();

                    /* already flushed, page slot and control block MUST be available */
                    found = smsal_cb_find_free_blk(&blk_id, page_ind_ptr->total_pages, SMSAL_CB_PER_7BIT_LEN);
                    ASSERT(found == KAL_TRUE);
                }

                smsal_cb_receive_new_page(blk_id, 
                                          page_ind_ptr,
                                          (kal_uint8)alphabet_type,
                                          msg_data,
                                          msg_length);
            } /* if (CBMI in control block) */
        } /* if (single page) */

        return;
    }
#endif

#ifdef __UMTS_RAT__
    if (page_ind_ptr->rat == RAT_UMTS)
    {
        kal_bool  found;
        kal_uint8 cur_page;
        kal_uint8 total_pages; /* page_ind_ptr->total_pages is not used in umts */
        kal_uint8 msg_info_length = SMSAL_CB_PER_UCS2_CONT_LEN;

        kal_uint8  mi_dispatch ;

    #ifdef __HOMEZONE_SUPPORT__
        l4csmsal_hz_cb_msg_ind_struct   *hz_msg_ind ;
    #endif
        l4csmsal_cb_msg_pdu_ind_struct *cbm_pdu_ptr;
        l4csmsal_cb_msg_text_ind_struct *cbm_text_ptr;                    

        ASSERT (peer_buff_ptr != NULL);

        
        //umts_msg_length = 6+ 1 + (page_ind_ptr->total_pages * 83);
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        total_pages = *pdu_ptr;
        umts_msg_length = total_pages *83 + 1;

        /* check length */
        if (pdu_len != umts_msg_length ||
            umts_msg_length > 1246) /* 1+ 83*15 */
        {
            kal_brief_trace(TRACE_WARNING, ERROR_RECV_WRONG_CB_PAGE,\
                        page_ind_ptr->rat, pdu_len);
            SMSALDBG_(printf("recv an error cb page len = %d\n", pdu_len);)

            return;
        }      

        
#ifdef __REL6__
        
        /* SAT CB DATA Download  */
        if (page_ind_ptr->is_mids == KAL_FALSE)
        {
            SMSALDBG_(printf("recv SAT CB DATA Download in RAT_UMTS\n");)

    #ifdef __SAT__
    #ifdef __GEMINI__
            if (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_CB, SMSAL_SIM_ID) == SERVICE_SUPPORT)
    #else
            if (sim_service_table_query(SERVICE_DATA_DOWNLOAD_SMS_CB) == SERVICE_SUPPORT)
    #endif
            {
                // make sure that there is a pending umts CB data download
                if((smsal_cb_data_ptr->local_para_ptr == NULL) && (smsal_cb_data_ptr->peer_buff_ptr== NULL))
                {
                    smsal_cb_data_ptr->local_para_ptr = local_para_ptr;
                    smsal_cb_data_ptr->peer_buff_ptr = peer_buff_ptr;
                    hold_local_para(local_para_ptr);
                    hold_peer_buff(peer_buff_ptr);
                    smsal_ratcm_cb_data_download(RAT_UMTS, 0, total_pages);
                }
                else
                {
                    smsal_ratcm_cb_data_download_clean();
                }
            }
    #endif /* __SAT__ */

            return;
        }

#else //__REL6__

    #ifdef __SAT__        
        /* SAT CB DATA Download  */
        if (page_ind_ptr->is_mids == KAL_FALSE)
        {
            /*This functionality is only available when the ME is connected to a GSM access network.*/
            kal_brief_trace(TRACE_WARNING, ERROR_RECV_WRONG_CB_PAGE,\
                        page_ind_ptr->rat, pdu_len);
            SMSALDBG_(printf("recv SAT CB DATA Download in RAT_UMTS\n");)
            return;
        }
    #endif /* __SAT__ */

#endif // __REL6__

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
        if (current_dest == SMSAL_TO_RMI)
#endif 
        {
            for (cur_page = 1; cur_page <= total_pages; cur_page++)
            {
                msg_info_length = *(pdu_ptr+1+(cur_page *83)-1);
                if (msg_info_length > SMSAL_CB_PER_UCS2_CONT_LEN)
                    msg_info_length = SMSAL_CB_PER_UCS2_CONT_LEN;
            	
                if (alphabet_type == SMSAL_DEFAULT_DCS)
                {  
                    page_length   = 0;

                    kal_mem_set (page_buf_ptr, 0, SMSAL_CB_PER_7BIT_LEN);

                    smsal_decode_cb_page(page_buf_ptr,
                                                        pdu_ptr+1+(cur_page-1) *83,
                                                        &page_length,
                                                        0,
                                                        msg_info_length);

                    ASSERT ( page_length <= SMSAL_CB_PER_7BIT_LEN );

                    msg_data   = page_buf_ptr;
                    msg_length = page_length;
                }
                else
                {
                    SMSALDBG_(printf("recv non gsm 7-bit CB: 8-bit or ucs2 \n");)

                    msg_data = pdu_ptr+1+(cur_page-1) *83;
                    msg_length = msg_info_length;                    
                }

                mi_dispatch = 0x01; /* default : LMI/RMI only */

            #ifdef __HOMEZONE_SUPPORT__
                SMSALDBG_(printf("__HOMEZONE_SUPPORT__\n");)
                if (page_ind_ptr->msgid == SMSAL_CB_HOMEZONE_MI)
                    mi_dispatch = smsal_cb_hz_mi_dispatch ();

                if((mi_dispatch & 0x02) == 0x02)  /* send to HZ */
                {
                    hz_msg_ind  = (l4csmsal_hz_cb_msg_ind_struct *) construct_local_para
                        ( (kal_uint16)(sizeof(l4csmsal_hz_cb_msg_ind_struct )
                            + msg_length +5/*safety*/), TD_CTRL );

                    if( (alphabet_type == SMSAL_8BIT_DCS) || (alphabet_type == SMSAL_UCS2_DCS))
                        hz_msg_ind->rmi_use_hex= KAL_TRUE;
                    else
                        hz_msg_ind->rmi_use_hex= KAL_FALSE;
                
                    hz_msg_ind->sn         = page_ind_ptr->serial_num;
                    hz_msg_ind->mi         = page_ind_ptr->msgid;
                    hz_msg_ind->dcs        = page_ind_ptr->dcs;
                    hz_msg_ind->page       = cur_page;
                    hz_msg_ind->pages      = total_pages;
                    hz_msg_ind->msg_length = msg_length ;

                    kal_mem_cpy(hz_msg_ind->msg_data, msg_data ,msg_length);

                    #if defined (__SMSAL_UT__)
                        smsal_cb_ut_hz_debug(hz_msg_ind, hz_msg_ind->msg_length);
                    #endif

                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_HZ_CB_MSG_IND,
                                                (local_para_struct *) hz_msg_ind, NULL);
                }
            #endif

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

                if((mi_dispatch & 0x01) == 0x01)  /* default : LMI/RMI only */
                {
                    if(current_msg_format == SMSAL_PDU_MODE ) 
                    {
                        cbm_pdu_ptr = (l4csmsal_cb_msg_pdu_ind_struct *) construct_local_para
                                ((kal_uint16)(sizeof(l4csmsal_cb_msg_pdu_ind_struct)
                                    + CB_MAX_DATA_NUM_PER_PAGE ), TD_CTRL );

                        //kal_mem_cpy(cbm_pdu_ptr->msg_data, pdu_ptr, 6);
                        smsal_cb_fill_page_header(local_para_ptr, cur_page, total_pages, cbm_pdu_ptr->msg_data);

                        kal_mem_cpy(&(cbm_pdu_ptr->msg_data[0])+6, (pdu_ptr+1+(cur_page-1) *83), msg_info_length);
                        
                        cbm_pdu_ptr->msg_length = msg_info_length + 6; //MAUI_03118140 Add the PDU header length 
                        cbm_pdu_ptr->dest = current_dest;

                        kal_brief_trace(TRACE_INFO, INFO_SEND_L4CSMSAL_CB_MSG_IND);
                        SMSALDBG_(printf("send cb cbm_pdu msg ind to l4c\n");)

                        #if defined (__SMSAL_UT__)
                            smsal_cb_ut_rmi_pud_debug(cbm_pdu_ptr,cbm_pdu_ptr->msg_length);
                        #endif
                    
                        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_MSG_PDU_IND,
                                                            (local_para_struct *) cbm_pdu_ptr,
                                                            NULL);
                    }
                    else
                    {
                        cbm_text_ptr = (l4csmsal_cb_msg_text_ind_struct *) construct_local_para
                                ( (kal_uint16)(sizeof(l4csmsal_cb_msg_text_ind_struct)+ msg_length+5 /*safety*/), TD_CTRL );

                        kal_mem_cpy(cbm_text_ptr->msg_data, msg_data, msg_length);

                        cbm_text_ptr->dest       = SMSAL_TO_RMI;
                        cbm_text_ptr->sn         = page_ind_ptr->serial_num;
                        cbm_text_ptr->mi         = page_ind_ptr->msgid;
                        cbm_text_ptr->dcs        = page_ind_ptr->dcs;
                        cbm_text_ptr->page       = cur_page;
                        cbm_text_ptr->pages      = total_pages;
                        cbm_text_ptr->msg_length = msg_length;

                        if( (alphabet_type == SMSAL_8BIT_DCS) || (alphabet_type == SMSAL_UCS2_DCS))
                            cbm_text_ptr->rmi_use_hex= KAL_TRUE;
                        else
                            cbm_text_ptr->rmi_use_hex= KAL_FALSE;


                        kal_brief_trace(TRACE_INFO, INFO_SEND_L4CSMSAL_CB_MSG_IND);
                        SMSALDBG_(printf("send cb msg ind to l4c\n");)

                        #if defined (__SMSAL_UT__)
                            smsal_cb_ut_rmi_text_debug(cbm_text_ptr,cbm_text_ptr->msg_length);
                        #endif

                        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_MSG_TEXT_IND,
                                                            (local_para_struct *) cbm_text_ptr,
                                                            NULL);
                    }
                }                
            }

            return;
        } /*endif current_dest == SMSAL_TO_RMI*/

        if (alphabet_type == SMSAL_DEFAULT_DCS)
        {  
            msg_length = SMSAL_CB_PER_7BIT_LEN;
        }
        else
        {
            msg_length = SMSAL_CB_PER_UCS2_CONT_LEN;
        }
            
        if(smsal_cb_find_free_blk(&blk_id,  total_pages, SMSAL_CB_PER_7BIT_LEN) == KAL_FALSE )
        {
            smsal_cb_flush_oldest();

            /* already flushed, page slot and control block MUST be available */
            found = smsal_cb_find_free_blk(&blk_id, total_pages, SMSAL_CB_PER_7BIT_LEN);
            ASSERT(found == KAL_TRUE);
        }

        if(smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages == SMSAL_CB_UNUSED_PAGE)
        {
            kal_uint32 tick;
            
            /* 1st time to use this block, initialize it */
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages = total_pages;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].recv_pages  = 0;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].cbmi        = page_ind_ptr->msgid;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].dcs         = page_ind_ptr->dcs;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].sn          = page_ind_ptr->serial_num;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].alphabet    = alphabet_type;
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].page = SMSAL_CB_UNUSED_PAGE;

            tick = kal_get_systicks();
            smsal_cb_data_ptr->ctrl_blk_pool[blk_id].last_time = tick; /* touch it */

            #ifdef CB_DEBUG_INFO
                kal_sprintf(cb_str_buff, "CB:new CB session.(blk_id=%d,total_page=%d, mi=%d,sn=%d,dcs=%d",
                                blk_id, smsal_cb_data_ptr->ctrl_blk_pool[blk_id].total_pages,
                                page_ind_ptr->msgid, page_ind_ptr->serial_num,page_ind_ptr->dcs);
                tst_sys_trace(cb_str_buff);
            #endif
        }



        for (cur_page = 1; (cur_page <= total_pages) && (cur_page <= 15); cur_page++)
        {

            msg_info_length = *(pdu_ptr+1+(cur_page *83)-1);
            if (msg_info_length > SMSAL_CB_PER_UCS2_CONT_LEN)
                msg_info_length = SMSAL_CB_PER_UCS2_CONT_LEN;

            if (alphabet_type == SMSAL_DEFAULT_DCS)
            {  
                page_length   = 0;

                kal_mem_set (page_buf_ptr, 0, SMSAL_CB_PER_7BIT_LEN);

                smsal_decode_cb_page(page_buf_ptr,
                                                    pdu_ptr+1+(cur_page-1) *83,
                                                    &page_length,
                                                    0,
                                                    msg_info_length);


                ASSERT ( page_length <= SMSAL_CB_PER_7BIT_LEN );

                msg_data   = page_buf_ptr;
                msg_length = page_length;
            }
            else
            {
                SMSALDBG_(printf("recv non gsm 7-bit CB: 8-bit or ucs2 \n");)

                msg_data = pdu_ptr+1+(cur_page-1) *83;
                //msg_length = 82;
                msg_length = msg_info_length;
            }

            /* message is still incomplete !!
            * find a free page slot and update the slot */
            smsal_cb_receive_umts_page(blk_id,
                                                    cur_page,
                                                    (kal_uint8)alphabet_type,
                                                    msg_data,
                                                    msg_length);
        }

        smsal_cb_flush(blk_id, NULL, NULL, 0, KAL_TRUE);

        return;
    }
#endif

    SMSAL_ASSERT(KAL_FALSE);

}                                       /* end of smsal_ratcm_cb_data_ind_handler */

/*****************************************************************************
* FUNCTION
*  smsal_cb_gs_change_ind_handler
* DESCRIPTION
*   This function handles CB GS change
*
* PARAMETERS
*  a  IN       local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_cb_gs_change_ind_handler(local_para_struct *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_ratcm_cb_gs_change_ind_struct *msg_ptr;
    l4csmsal_cb_gs_change_ind_struct *cbgs_ptr;
    kal_uint8 i;
    kal_bool is_reset = KAL_FALSE;
    kal_uint8 old_gs = 0;
	
    msg_ptr = (smsal_ratcm_cb_gs_change_ind_struct *)local_para_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_CB_GS_CHANGE_IND_HANDLER);

    cbgs_ptr = (l4csmsal_cb_gs_change_ind_struct *) construct_local_para
                        (sizeof(l4csmsal_cb_gs_change_ind_struct), TD_CTRL);

    cbgs_ptr->geography_type = msg_ptr->geography_type;

    for (i = 0; i < SMSAL_CB_MAX_SESSION; i++)
    {
        if (smsal_cb_data_ptr->ctrl_blk_pool[i].total_pages != SMSAL_CB_UNUSED_PAGE)
        {
            smsal_cb_gscode2geoscope((kal_uint16)((smsal_cb_data_ptr->ctrl_blk_pool[i].sn & 0xc000)>>14), (kal_uint8 *)&old_gs);
            smsal_cb_gs_changed(old_gs, (kal_uint8)msg_ptr->geography_type, &is_reset);

            if (KAL_TRUE == is_reset)
            {
                smsal_cb_free_ctrl_blk(i);
                kal_brief_trace(TRACE_WARNING, SMSALCB_RESET_OLD_BLK, i, smsal_cb_data_ptr->ctrl_blk_pool[i].sn, 0, msg_ptr->geography_type);
            }
        }
    }

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_CB_GS_CHANGE_IND,
                                        (local_para_struct *) cbgs_ptr,
                                        NULL);
	
}

void smsal_cb_write_cnf(kal_uint8 id, kal_uint8 sub_act_code)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_pending_act_struct *pend;
    smsal_set_cb_aux_info_struct *aux_info;

    ASSERT(id < SMSAL_MAX_PENDING_ACT);

    pend = (&(smsal_cntx_ptr->pending_act[id]));
    aux_info = (smsal_set_cb_aux_info_struct *) pend->aux_info;

    switch (sub_act_code)
    {
        #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
        case SMSAL_ACT_CB_MI_SIM:
            aux_info->para_ind &= (~SMSAL_ACT_CB_MI_SIM);
            break;

        case SMSAL_ACT_CB_MIR:
            aux_info->para_ind &= (~SMSAL_ACT_CB_MIR);
            break;
        #endif    

        case SMSAL_ACT_CB_DCS:
            aux_info->para_ind &= (~SMSAL_ACT_CB_DCS);
            break;

        case SMSAL_ACT_CB_CH_INFO:
            aux_info->para_ind &= (~SMSAL_ACT_CB_CH_INFO);
            break;

        case SMSAL_ACT_CB_ALL_LANG:
            aux_info->para_ind &= (~SMSAL_ACT_CB_ALL_LANG);
            break;

        default:
            aux_info->para_ind = 0;

            break;
    }                                   /* switch */

    smsal_cb_update_files_to_storage(id);       /* write other files */

}                                       /* end of smsal_cb_write_cnf */


void smsal_cb_write_rej(kal_uint8  id, 
                        kal_uint8  sub_act_code, 
                        kal_uint16 cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_cb_update_req_struct *cb_req;
    smsal_pending_act_struct *pend;
    smsal_set_cb_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_WARNING, ERROR_WHEN_WRITE_CB_PARA, sub_act_code, cause);
    CBDBG_(printf("cb_write_rej: sub_act_code=%d cause=%d\n", sub_act_code, cause);)

    pend = (&(smsal_cntx_ptr->pending_act[id]));
    aux_info = (smsal_set_cb_aux_info_struct *) pend->aux_info;

#ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    if(sub_act_code == SMSAL_ACT_CB_MIR)
    {
        /*Some SIMs need ADM to update EF_CBMIR.
                 If we fail to write EF_CBMIR, we still continue to configure CB */
                 
        aux_info->para_ind &= (~SMSAL_ACT_CB_MIR);
        smsal_cntx_ptr->cb_data.is_cbmir_in_nvram = KAL_TRUE;
        smsal_cb_update_files_to_storage(id);
    }
    else
#endif        
    {
        cb_req = (l4csmsal_cb_update_req_struct*) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
   
        smsal_cb_update_cnf(cb_req->src_id,
                            L4C_ERROR,
                            cause);

        smsal_free_pending_act(id);
    }

    return;
}                                       /* end of smsal_cb_write_rej */


/****************************************************
 * read from NVRAM
 ****************************************************/
void smsal_cb_reset_ch_info(void)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    peer_buff_struct *peer_ptr;
    kal_uint16 pdu_len;
    kal_uint8 *pdu_ptr, i;
    smsal_set_cb_aux_info_struct *aux_info;

    aux_info = (smsal_set_cb_aux_info_struct*) get_ctrl_buffer
               (sizeof(smsal_set_cb_aux_info_struct));

    /* get original CB context */
    smsal_cb_init_aux_info(aux_info);

    /* reset cbmi mask of SIM */
    for (i = SMSAL_CBMI_ME_ENTRY; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
        aux_info->cbmi_mask[i] = KAL_TRUE;

    /* reset cbmir and dcs mask */
    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        /* CBMIR mask*/
        aux_info->cbmir_mask[i] = KAL_TRUE;
        /* DCS mask*/
        aux_info->dcs_mask[i] = KAL_FALSE;
    }

    // for all default language
    if( smsal_cb_data_ptr->all_lang_on == KAL_TRUE )
    {
        for (i = 0 ; i < SMSAL_DEFAULT_DCS_ENTRY ; i++)
        {
            aux_info->dcs_mask[i] = KAL_TRUE;
        }
    }

    peer_ptr = (peer_buff_struct*)construct_peer_buff(NVRAM_EF_CB_CH_INFO_SIZE, 
                                                      0, 0, TD_CTRL);    


    pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

    smsal_encode_cb_ch_info(aux_info, pdu_ptr);

    smsal_write_to_nvram(SMSAL_MAX_PENDING_ACT, NVRAM_EF_CB_CH_INFO_LID, 1, peer_ptr);

    /* to update all mask information. */
    aux_info->ori_para_ind = (SMSAL_CB_MI_MASK | SMSAL_CB_MIR_MASK | SMSAL_CB_DCS_MASK);
    smsal_cb_update_cntx(aux_info);

    free_ctrl_buffer(aux_info);

    return;
}

kal_uint8 smsal_access_cb_default_ch_cnf(kal_uint8                       id,
                                         smsal_read_file_aux_info_struct *aux_info,
                                         peer_buff_struct                *peer_buff_ptr,
                                         local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i;
    kal_uint16 pdu_len;
    kal_uint8 *pdu_ptr;

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    SMSAL_ASSERT(pdu_len == NVRAM_EF_CB_DEFAULT_CH_SIZE);

    for (i = 0; i < SMSAL_DEFAULT_CBMI_ENTRY; i++)
    {
        smsal_cb_data_ptr->cbmi_default[i] = (pdu_ptr[2 * i] << 8) + pdu_ptr[2 * i + 1];
    }

    return SMSAL_READ_NEXT_FILE;        /* read next file */
}

kal_uint8 smsal_access_cb_ch_info_cnf(kal_uint8 id,
                                      smsal_read_file_aux_info_struct * aux_info,
                                      peer_buff_struct *peer_buff_ptr,
                                      local_para_struct *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    if (peer_buff_ptr != NULL)
    {
        /* SIM not support CB channel file, we only use ME to store CB channel */
        if (smsal_check_sim_service_table(FILE_CBMI_IDX) == KAL_FALSE)
        {
            smsal_cb_data_ptr->cbmi_num= SMSAL_CBMI_ME_ENTRY;

            if (smsal_cb_data_ptr->cbmi_num > SMSAL_MMI_CBMI_MAX_ENTRY)
                smsal_cb_data_ptr->cbmi_num = SMSAL_MMI_CBMI_MAX_ENTRY;
        }
    
        /*SIM has no EF_CBMIR, we use CBMIR in NVRAM*/
        if(smsal_cb_data_ptr->is_cbmir_in_nvram == KAL_TRUE)
        {
            smsal_cb_data_ptr->cbmir_num = SMSAL_CB_MAX_ENTRY;
        }
    
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        smsal_decode_cb_ch_info(pdu_ptr);

#ifndef __SMS_SIM_DCS_DEFAULT_OFF__
        if ((IS_FLAG_SET(SIM_CHANGE_FLAG) == KAL_TRUE) &&
           (KAL_FALSE == is_test_sim(SMSAL_SIM_ID)))
        {
            /* reset SIM related informaiton.                  */
            /* cbmi_mask of SIM and cbmir_mask, dcs mask only. */
            smsal_cb_reset_ch_info();
        }
#endif

        smsal_cb_update_rmc_cb();

        SET_FLAGS(CB_RDY_FLAG);
    }
    else
        SMSAL_ASSERT(KAL_FALSE);

    return SMSAL_READ_NEXT_FILE;        /* read next file */

}                                       /* end of smsal_access_cb_ch_info_cnf */


/****************************************************
 * read from SIM
 ****************************************************/

#ifdef __GEMINI__
extern kal_bool is_usim_type(sim_interface_enum which_sim);
#else
extern kal_bool is_usim_type(void);
#endif
/*****************************************************************************
* FUNCTION
*  smsal_access_sim_li_or_elp_cnf
* DESCRIPTION
*   This function is just for template.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_access_sim_li_or_elp_cnf(kal_uint8                       id,
                                   smsal_read_file_aux_info_struct *aux_info,
                                   peer_buff_struct                *peer_buff_ptr,
                                   local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    kal_uint8 i, j;
    kal_uint8 dcs_num, need_ignore = KAL_FALSE;
    kal_uint16 temp_dcs, index;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->length > 0)
            {
                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;

                /* no. of bytes used to specify a language is 2 bytes */
                smsal_cb_data_ptr->dcs_num_sim = (kal_uint8) (file_info_cnf->length / 2);

                /* move to next step "READ_FROM_SIM"
                smsal_cb_data_ptr->dcs_num += smsal_cb_data_ptr->dcs_num_sim;
                if (smsal_cb_data_ptr->dcs_num > SMSAL_CB_MAX_ENTRY)
                    smsal_cb_data_ptr->dcs_num = SMSAL_CB_MAX_ENTRY;
                */
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:
        {
            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

                /* no. of bytes used to specify a language is 2 bytes */
                if ((smsal_cb_data_ptr->dcs_num_sim * 2) == read_cnf->length)
                {
                    if ( (SMSAL_DEFAULT_DCS_ENTRY + smsal_cb_data_ptr->dcs_num_sim) > SMSAL_CB_MAX_ENTRY )
                    {
                        dcs_num = SMSAL_CB_MAX_ENTRY - SMSAL_DEFAULT_DCS_ENTRY;
                    }
                    else
                    {
                        dcs_num = smsal_cb_data_ptr->dcs_num_sim;
                    }

                    // get DCS
                    for (i=0, j=0 ; i < dcs_num ; i++ )
                    {
                        temp_dcs = (read_cnf->data[2 * i] << 8) + read_cnf->data[2 * i + 1];

                        // search for the duplicated one comparing with default list
                        // no find => add, find => skip
                        if( temp_dcs!=SMSAL_CB_UNUSED_ISO639 )
                        {
                            if( smsal_cb_is_in_default_lang_list(temp_dcs, KAL_TRUE, &index) == KAL_FALSE )
                            {
                                /* 2008.08.20
                                   for ISO639 only support CBDCS 20 language + unspecified
                                   because of [ISO639 <-> CBDCS] mapping */                              

                                //smsal_cb_data_ptr->dcs[SMSAL_DEFAULT_DCS_ENTRY+j] = temp_dcs;
                                //smsal_cb_data_ptr->dcs_mask[SMSAL_DEFAULT_DCS_ENTRY+j] = KAL_TRUE;
                                //j++;
                            }
                            else
                            {
                            #ifndef __SMS_SIM_DCS_DEFAULT_OFF__
                                // SIM setting with high priority
                                smsal_cb_data_ptr->dcs_mask[index] = KAL_TRUE;
                            #endif
                            }
                        }
                    }

                    smsal_cb_data_ptr->dcs_num += j;

                    if( aux_info->file[aux_info->current_read_idx].file_id == FILE_U_LI_IDX )
                    {
                        smsal_cb_data_ptr->is_li_used = KAL_TRUE;
                    }
                    else if( aux_info->file[aux_info->current_read_idx].file_id == FILE_ELP_IDX )
                    {
                        smsal_cb_data_ptr->is_elp_used = KAL_TRUE;
                    }
                    else
                    {
                        SMSAL_ASSERT(0);
                    }

#ifdef __USIM_SUPPORT__

#if defined(__SMSAL_UT__)
                    if ( smsal_ut_is_usim_type() )
#else // __SMSAL_UT__

#ifdef __GEMINI__
                    if ( is_usim_type(smsal_cur_mod - MOD_SMSAL))
#else
                    if ( is_usim_type() )                        
#endif

#endif // __SMSAL_UT__
                    {
                        if( aux_info->file[aux_info->current_read_idx].file_id == FILE_U_LI_IDX )
                        {
                            need_ignore = KAL_TRUE;
                        }
                    }
                    else
#endif // __USIM_SUPPORT__
                    {
                        if( aux_info->file[aux_info->current_read_idx].file_id == FILE_ELP_IDX )
                        {
                            need_ignore = KAL_TRUE;
                        }
                    }

                    if( need_ignore == KAL_TRUE )
                    {
                        /* skip to read (SIM)EFlp or (USIM)EFelp */
                        aux_info->current_read_idx += 1;
                        aux_info->file_type_bitmap >>= 1;
                    }

                    read_next = SMSAL_READ_NEXT_FILE;
                }
                else
                {
                    //smsal_cb_data_ptr->dcs_num -= smsal_cb_data_ptr->dcs_num_sim;
                    smsal_cb_data_ptr->dcs_num_sim = 0;
                    read_next = SMSAL_READ_NEXT_FILE;
                }
                break;
        }

    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_access_sim_li_or_elp_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_access_sim_lp_cnf
* DESCRIPTION
*   This function is just for template.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_access_sim_lp_cnf(kal_uint8                       id,
                                  smsal_read_file_aux_info_struct *aux_info,
                                  peer_buff_struct                *peer_buff_ptr,
                                  local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    kal_uint8 i, j;
    kal_uint16 dcs_num, index;
    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;
    kal_uint8 temp_dcs;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->length > 0)
            {
                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;
                smsal_cb_data_ptr->dcs_num_sim = (kal_uint8) file_info_cnf->length;
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:
        {
                read_cnf = (sim_read_cnf_struct *) local_para_ptr;

                if ( (SMSAL_DEFAULT_DCS_ENTRY + smsal_cb_data_ptr->dcs_num_sim) > SMSAL_CB_MAX_ENTRY )
                {
                    dcs_num = SMSAL_CB_MAX_ENTRY - SMSAL_DEFAULT_DCS_ENTRY;
                }
                else
                {
                    dcs_num = smsal_cb_data_ptr->dcs_num_sim;
                }


                //for(n = 0 ; n < smsal_cb_data_ptr->dcs_num ; n++)
                //   if(smsal_cb_data_ptr->dcs[n] == SMSAL_CB_UNUSED_DCS) break;

                if (KAL_TRUE == is_test_sim(SMSAL_SIM_ID))
                {
                    for (i = 0; i < dcs_num; i++)
                        smsal_cb_data_ptr->dcs[SMSAL_DEFAULT_DCS_ENTRY+i] = read_cnf->data[i];

                    smsal_cb_data_ptr->dcs_num += (kal_uint8)dcs_num;
                }
                else
                {
                    for ( i=0, j=0; i < dcs_num ; i++)
                    {
                        /*
                         * check the dcs is valid or not, if NOT
                         * * fill the SMSAL_CB_UNUSED_DCS instead the invalid dcs value
                         */
                        temp_dcs = read_cnf->data[i];

                        smsal_decode_cbsdcs(temp_dcs,
                                            &lang_type,
                                            &alphabet_type,
                                            &mclass,
                                            &is_compress,
                                            &is_reserved);

                        if (is_compress == KAL_TRUE || is_reserved == KAL_TRUE || alphabet_type == SMSAL_RESERVED_DCS)
                        {
                            // smsal_cb_data_ptr->dcs[SMSAL_DEFAULT_DCS_ENTRY+j] = SMSAL_CB_UNUSED_DCS;
                        }
                        else
                        {
                            // search for the duplicated one comparing with default list
                            // no find => add, find => skip
                            if( (temp_dcs!=0xff && temp_dcs!=SMSAL_CB_UNUSED_DCS) )
                            {
                                if( smsal_cb_is_in_default_lang_list(temp_dcs, KAL_FALSE, &index) == KAL_FALSE )                                    
                                {
                                    /* 2008.08.20
                                       for ISO639 only support CBDCS 20 language + unspecified
                                       because of [ISO639 <-> CBDCS] mapping */ 

                                    //smsal_cb_data_ptr->dcs[SMSAL_DEFAULT_DCS_ENTRY+j] = read_cnf->data[i];
                                    //smsal_cb_data_ptr->dcs_mask[SMSAL_DEFAULT_DCS_ENTRY+j] = KAL_TRUE;
                                    //j++;
                                }
                                else
                                {
                                #ifndef __SMS_SIM_DCS_DEFAULT_OFF__
                                    // SIM setting with high priority
                                    smsal_cb_data_ptr->dcs_mask[index] = KAL_TRUE;
                                #endif
                                }
                            }
                        }
                    }                       /* for */
                    smsal_cb_data_ptr->dcs_num += j;
                }
                read_next = SMSAL_READ_NEXT_FILE;

                break;
        }
    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_access_sim_lp_cnf */

void smsal_cb_fill_cbmi_from_sim(kal_uint8   cbmi_num,   /* IN */
                                 kal_uint16  *cbmi,      /* IN/OUT */
                                 kal_uint8   *data)      /* IN */
{
    kal_uint8 i, j;

    /* each CBMI uses two bytes !! */
    for (i = SMSAL_CBMI_ME_ENTRY, j = 0; i < cbmi_num; i++, j++)
        cbmi[i] = (data[2 * j] << 8) + data[2 * j + 1];
}

void smsal_cb_fill_cbmid_from_sim(kal_uint8   cbmid_num, /* IN */
                                  kal_uint16  *cbmid,    /* IN/OUT */
                                  kal_uint8   *data)     /* IN */
{
    kal_uint8 i;

    /* each CBMID uses two bytes !! */
    for (i = 0; i < cbmid_num; i++)
        cbmid[i] = (data[2 * i] << 8) + data[2 * i + 1];
}

/*****************************************************************************
* FUNCTION
*  smsal_access_sim_cbmi_cnf
* DESCRIPTION
*   This function is just for template.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
kal_uint8 smsal_access_sim_cbmi_cnf(kal_uint8                       id,
                                    smsal_read_file_aux_info_struct *aux_info,
                                    peer_buff_struct                *peer_buff_ptr,
                                    local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->length > 0)
            {
                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;

                /* each CBMI uses two bytes */
                smsal_cb_data_ptr->cbmi_num = (kal_uint8) (file_info_cnf->length / 2);

                /* add ME entry number. */
                smsal_cb_data_ptr->cbmi_num += SMSAL_CBMI_ME_ENTRY;

                /* max cbmi_num for SIM is 20 */
                if (smsal_cb_data_ptr->cbmi_num > SMSAL_MMI_CBMI_MAX_ENTRY)
                    smsal_cb_data_ptr->cbmi_num = SMSAL_MMI_CBMI_MAX_ENTRY;
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:

            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            smsal_cb_fill_cbmi_from_sim(smsal_cb_data_ptr->cbmi_num, 
                                        smsal_cb_data_ptr->cbmi,
                                        read_cnf->data);                                              

            read_next = SMSAL_READ_NEXT_FILE;

            break;

    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_access_sim_cbmi_cnf */
#endif


/*****************************************************************************
* FUNCTION
*  smsal_access_sim_cbmi_rej
* DESCRIPTION
*   This function handles if cbmi file doesn't exist in SIM.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
kal_uint8 smsal_access_sim_cbmi_rej(kal_uint8                       id,
                                    smsal_read_file_aux_info_struct *aux_info,
                                    peer_buff_struct                *peer_buff_ptr,
                                    local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
        case READ_FROM_SIM:
        {
            /* add ME entry number. */
            /* original value may not be 0 owing to sim refresh */
            smsal_cb_data_ptr->cbmi_num = SMSAL_CBMI_ME_ENTRY;

            /* max cbmi_num for SIM is 20 */
            if (smsal_cb_data_ptr->cbmi_num > SMSAL_MMI_CBMI_MAX_ENTRY)
                smsal_cb_data_ptr->cbmi_num = SMSAL_MMI_CBMI_MAX_ENTRY;
        }
            break;
        default:
            break;

    }                                   /* switch */

    return SMSAL_READ_NEXT_FILE;

}                                       /* end of smsal_access_sim_cbmi_rej */
#endif

/*****************************************************************************
* FUNCTION
*  smsal_access_sim_cbmir_rej
* DESCRIPTION
*   This function handles if cbmir file doesn't exist in SIM.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
kal_uint8 smsal_access_sim_cbmir_rej(kal_uint8                       id,
                                    smsal_read_file_aux_info_struct *aux_info,
                                    peer_buff_struct                *peer_buff_ptr,
                                    local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
        case READ_FROM_SIM:
        {
            /*Fail to read CBMIR from SIM. Use CBMIR in NVRAM*/
            smsal_cb_data_ptr->cbmir_num = SMSAL_CB_MAX_ENTRY;
            smsal_cb_data_ptr->is_cbmir_in_nvram = KAL_TRUE;
        }
            break;
        default:
            break;

    }                                   /* switch */

    return SMSAL_READ_NEXT_FILE;

}                                       /* end of smsal_access_sim_cbmi_rej */
#endif


/*****************************************************************************
* FUNCTION
*  smsal_access_sim_cbmir_cnf
* DESCRIPTION
*   This function is just for template.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
kal_uint8 smsal_access_sim_cbmir_cnf(kal_uint8                       id,
                                     smsal_read_file_aux_info_struct *aux_info,
                                     peer_buff_struct                *peer_buff_ptr,
                                     local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->length > 0)
            {
                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;

                /* each CBMIR uses 4 bytes */
                smsal_cb_data_ptr->cbmir_num = (kal_uint8) (file_info_cnf->length / 4);
                if (smsal_cb_data_ptr->cbmir_num > SMSAL_CB_MAX_ENTRY)
                    smsal_cb_data_ptr->cbmir_num = SMSAL_CB_MAX_ENTRY;
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:
        {
            kal_uint8 i;
            kal_uint16 cbmir1, cbmir2;

            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            /* each CBMIR uses 4 bytes !! */
            for (i = 0; (i < smsal_cb_data_ptr->cbmir_num) && (i < SMSAL_CB_MAX_ENTRY); i++)
            {
                cbmir1 = (read_cnf->data[4 * i] << 8) + /* 256 */
                    read_cnf->data[4 * i + 1];

                cbmir2 = (read_cnf->data[4 * i + 2] << 8) +     /* 256 */
                    read_cnf->data[4 * i + 3];

                /* MAUI_00573098 [SMSAL][Revise] Check cbmir range */
                if ((cbmir1 <= cbmir2) &&
                    (cbmir1 != SMSAL_CB_UNUSED_CBMI) &&
                    (cbmir2 != SMSAL_CB_UNUSED_CBMI))
                {
                    smsal_cb_data_ptr->cbmir[2 * i] = cbmir1;
                    smsal_cb_data_ptr->cbmir[2 * i + 1] = cbmir2;
                }
                else
                {
                    smsal_cb_data_ptr->cbmir[2 * i] = SMSAL_CB_UNUSED_CBMI;
                    smsal_cb_data_ptr->cbmir[2 * i + 1] = SMSAL_CB_UNUSED_CBMI;
                }
            }

            read_next = SMSAL_READ_NEXT_FILE;

            break;
        }
    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_access_sim_cbmir_cnf */
#endif

/*****************************************************************************
* FUNCTION
*  smsal_access_sim_cbmid_cnf
* DESCRIPTION
*   This function is just for template.
*
* PARAMETERS
*  a  IN       id, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_access_sim_cbmid_cnf(kal_uint8                       id,
                                     smsal_read_file_aux_info_struct *aux_info,
                                     peer_buff_struct                *peer_buff_ptr,
                                     local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->length > 0)
            {
                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;

                /* each CBMID uses two bytes */
                smsal_cb_data_ptr->cbmid_num = (kal_uint8) file_info_cnf->length / 2;

                if (smsal_cb_data_ptr->cbmid_num > SMSAL_CB_MAX_ENTRY)
                    smsal_cb_data_ptr->cbmid_num = SMSAL_CB_MAX_ENTRY;
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:

            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            smsal_cb_fill_cbmid_from_sim(smsal_cb_data_ptr->cbmid_num, 
                                         smsal_cb_data_ptr->cbmid,
                                         read_cnf->data);  

            read_next = SMSAL_READ_NEXT_FILE;
            break;

    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_access_sim_cbmid_cnf */
#endif /* __CB__ */

