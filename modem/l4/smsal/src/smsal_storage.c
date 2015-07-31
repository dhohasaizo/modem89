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
 * smsal_storage.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to storage access.
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

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_sap.h"
#include "svc_sap.h"
#include "sim_ps_msgid.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "sysservice_msgid.h"

/* Timer Management  */

/* Task Management */
#include "task_config.h"


/* SMSAL <--> L4C */
#include "mcd_l4_common.h"

#include "l4c2smsal_struct.h"

#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"
#include "smsal_l4c_funcs.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_main.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_init.h"
#include "smsal_reset.h"
#include "smsal_storage.h"
#include "smsal_other_funcs.h"
#include "smsal_sms.h"
#include "smsal_msg_proc.h"
#include "smsal_transport_proc.h"
#include "smsal_parameter.h"
#include "smsal_l4c_msgs.h"
#include "smsal_utils.h"

/* SIM */
#include "ps2sim_struct.h"
#include "sim_common_enums.h"

/* NVRAM */
#include "nvram_enums.h"
#include "nvram_struct.h"
#include "nvram_data_items.h"           /* for file IDs */
#include "nvram_interface.h"            /* for nvram_get_info() */

/* SAT */
#if defined (__SAT__)
#include "ps2sat_struct.h"
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#ifdef __CB__
#include "smsal_cb.h"
#endif

#include "nvram_editor_data_item.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "custom_nvram_config.h"
#include "custom_sms_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"

#ifdef __GEMINI_3G_SWITCH__ 
#include "ps_public_utility.h"
#endif

#if defined (__SMSAL_UT__)
#include "tst_sap.h"
#endif
#include "tst_msgid.h"

#if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
kal_uint8 smsal_ut_nvram_get_info(smsal_file_enum LID, kal_uint16 *total, kal_uint16 *size)
{
#ifdef __GEMINI__
    *total = SMSAL_MAX_SIM_NUM;
#else
    *total = 1;
#endif

    switch(LID)
    {
    case NVRAM_EF_SMSAL_SMSP_LID:
        *size = NVRAM_EF_SMSAL_SMSP_SIZE;
        break;

    case NVRAM_EF_SMSAL_COMMON_PARAM_LID:
        *size = NVRAM_EF_SMSAL_COMMON_PARAM_SIZE;
        break;

    case NVRAM_EF_CB_DEFAULT_CH_LID:
        *size = NVRAM_EF_CB_DEFAULT_CH_SIZE;
        break;

    case NVRAM_EF_CB_CH_INFO_LID:
        *size = NVRAM_EF_CB_CH_INFO_SIZE;
        break;

    case NVRAM_EF_SMSAL_MWIS_LID:
        *size = NVRAM_EF_SMSAL_MWIS_SIZE;
        break;

    case NVRAM_EF_SMSAL_MAILBOX_ADDR_LID:
#ifdef __GEMINI__
        *total = (2*SMSAL_MAX_SIM_NUM);
#else
        *total = 2;
#endif
        *size = SMSAL_SMS_ME_LEN;
        break;
        
    case NVRAM_EF_SMSAL_SMS_LID:
#ifdef __GEMINI__
        *total = (10*SMSAL_MAX_SIM_NUM);
#else
        *total = 10;
#endif
        *size = SMSAL_SMS_ME_LEN;
        break;
    }
    return NVRAM_ERRNO_SUCCESS;
}
#endif

void smsal_check_send_abort_cnf(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_send_abort_cnf_struct *abort_cnf;
    kal_uint8 need_send_abort_cnf = KAL_TRUE;
    kal_uint8 i;

    for(i=0 ; i<SMSAL_MAX_PENDING_ACT ; i++)
    {
        if ( smsal_cntx_ptr->pending_act[i].in_use == KAL_TRUE &&
             ((&(smsal_cntx_ptr->pending_act[i]))->action_status & 0x03) == 0x03 )
        {
            need_send_abort_cnf = KAL_FALSE;
        }
    }

    if ((need_send_abort_cnf == KAL_TRUE) &&
        (IS_FLAG_SET(ABORT_PENDING_FLAG) == KAL_TRUE))
    {  
        abort_cnf = (l4csmsal_send_abort_cnf_struct *) construct_local_para
                    (sizeof(l4csmsal_send_abort_cnf_struct), TD_CTRL);

        abort_cnf->src_id = smsal_ptr_g->send_abort.src_id;//LMMI_SRC;
        abort_cnf->seq_num = smsal_ptr_g->send_abort.seq_num;
        abort_cnf->result = L4C_OK;
        abort_cnf->error_cause = 0;

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_ABORT_CNF, 
                              (local_para_struct *) abort_cnf,
                              NULL);

        CLR_FLAGS(ABORT_PENDING_FLAG);
    }

    smsal_free_pending_act(id);
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_pending_act_hdlr();
#endif
        
    return;
}

/*****************************************************************************
 * 
 * Common Functions for both SIM/NVRAM
 *
 ****************************************************************************/
void smsal_common_storage_cnf(kal_uint8  id,
                              kal_uint8  sub_act_code,
                              ilm_struct *ilm_ptr,
                              kal_bool   is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
    if( ((&(smsal_cntx_ptr->pending_act[id]))->action_status & 0x01) == 0x01 )
    {
        smsal_check_send_abort_cnf(id);

        return;
    }

    switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
    {
        case SMSAL_RESET_FILE:
            smsal_reset_files_cnf(KAL_TRUE, id);
            break;

        case SMSAL_INIT_PROC:
        case SMSAL_SIM_REFRESH:
        case SMSAL_FILES_REFRESH:
            smsal_read_files_cnf(KAL_TRUE, id, ilm_ptr->peer_buff_ptr, ilm_ptr->local_para_ptr);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_READ:
            smsal_read_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
        case SMSAL_WRITE_RAW_DATA:
            smsal_write_raw_data_single_cnf(id, ilm_ptr->local_para_ptr);
            break;
            
        case SMSAL_READ_RAW_DATA:
            smsal_read_raw_data_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;
#endif

        case SMSAL_WRITE:
            smsal_write_confirm(id, sub_act_code, ilm_ptr->local_para_ptr);
            break;

        case SMSAL_DELETE:
            smsal_delete_cnf(id, sub_act_code, ilm_ptr->local_para_ptr);
            break;

        case SMSAL_SEND_FROM_STORAGE:
            smsal_send_from_storage_cnf(id, sub_act_code, ilm_ptr, is_from_sim);

            break;
#endif //__SMS_STORAGE_BY_MMI__

        case SMSAL_SEND_MO_SMS:
            smsal_send_mo_sms_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;

        case SMSAL_SEND_MEM_AVIL:
            smsal_mem_avl_get_msg_ref_cnf(id);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_DELIVER:
            smsal_deliver_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;
#endif

        case SMSAL_SAVE_PARAM:
            smsal_save_parameter_cnf(id, sub_act_code);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_COPY:
            smsal_copy_action_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;

        /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        case SMSAL_SET_STATUS:
            smsal_set_status_action_cnf(id, sub_act_code, ilm_ptr, is_from_sim);
            break;
#endif

    #if defined (__SAT__)

        case SMSAL_SAT_SEND:
            smsal_sat_send_mo_sms_cnf(id, sub_act_code);
            break;

        case SMSAL_SAT_MO_SMS_CTRL:
            smsal_sat_mo_sms_ctrl_cnf(id, sub_act_code, ilm_ptr->local_para_ptr);
            break;

        case SMSAL_SIM_DOWNLOAD:
            smsal_sim_data_download_cnf(id, ilm_ptr->local_para_ptr);
            break;
    #endif

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_STATUS_REPORT:
            smsal_update_msgbox_for_report_cnf(id, ilm_ptr, is_from_sim);
            break;
#endif

    #ifdef __CB__                           /* added by Kevin */
        case SMSAL_CB_WRITE:
            smsal_cb_write_cnf(id, sub_act_code);
            break;
    #endif

        default:
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

#ifndef __SMS_STORAGE_BY_MMI__
    smsal_pending_act_hdlr();
#endif
}                                       /* end of smsal_common_storage_cnf */


void smsal_common_storage_rej(kal_uint8  id,
                              kal_uint8  sub_act_code,
                              ilm_struct *ilm_ptr,
                              kal_bool   is_from_sim,
                              kal_uint16 cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
  
    // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
    if( ((&(smsal_cntx_ptr->pending_act[id]))->action_status & 0x01) == 0x01 )
    {
        smsal_check_send_abort_cnf(id);

        return;
    }

    if (is_from_sim == KAL_FALSE)
    {
        cause = SMS_ME_STORAGE_FAILURE;
    }

    /* Read sim error */
    switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
    {
        case SMSAL_RESET_FILE:
            smsal_reset_files_cnf(KAL_FALSE, id);
            break;

        case SMSAL_INIT_PROC:
        case SMSAL_SIM_REFRESH:
        case SMSAL_FILES_REFRESH:
            smsal_read_files_cnf(KAL_FALSE,
                                 id,
                                 ilm_ptr->peer_buff_ptr,
                                 ilm_ptr->local_para_ptr);
            break;


#ifndef __SMS_STORAGE_BY_MMI__

        case SMSAL_READ:
            smsal_read_rej(id, cause);
            break;

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
        case SMSAL_WRITE_RAW_DATA:
            smsal_write_raw_data_rej(id, cause);
            break;

        case SMSAL_READ_RAW_DATA:
            smsal_read_raw_data_rej(id, cause);
            break;
#endif

        case SMSAL_WRITE:
            smsal_write_rej(id, cause);
            break;

        case SMSAL_DELETE:
            smsal_delete_rej(id, sub_act_code, cause);
            break;

        case SMSAL_SEND_FROM_STORAGE:
            smsal_send_from_storage_rej(id, sub_act_code, cause);
            break;
#endif //__SMS_STORAGE_BY_MMI__

        case SMSAL_SEND_MO_SMS:
            smsal_send_mo_sms_rej(id, sub_act_code, cause);
            break;

    #if defined (__SAT__)
        case SMSAL_SAT_SEND:
            smsal_sat_send_mo_sms_rej(id, sub_act_code, cause);
            break;
        case SMSAL_SAT_MO_SMS_CTRL:
            smsal_sat_mo_sms_ctrl_rej(id, sub_act_code, cause);
            break;            
    #endif

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_DELIVER:
            smsal_deliver_rej(id, sub_act_code);
            break;
#endif

        case SMSAL_SAVE_PARAM:
            smsal_save_parameter_rej(id, sub_act_code, cause);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case SMSAL_COPY:
            smsal_copy_action_rej(id, sub_act_code, cause);
            break;

        /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        case SMSAL_SET_STATUS:
            smsal_set_status_action_rej(id, sub_act_code, cause);
            break;
#endif //__SMS_STORAGE_BY_MMI__

    #ifdef __CB__                           /* added by Kevin */
        case SMSAL_CB_WRITE:
            smsal_cb_write_rej(id, sub_act_code, cause);
            break;
    #endif

        default:
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */
}                                       /* end of smsal_common_storage_rej */

void smsal_init_file_info(smsal_read_file_aux_info_struct *file_ptr)
{
    kal_uint8 i;

    file_ptr->current_read_idx = 0;
    file_ptr->occur_error = KAL_FALSE;
    file_ptr->record_no = 1;
    for (i = 0; i < SMSAL_MAX_FILE; i++)
    {
        file_ptr->file[i].is_used = KAL_FALSE;
        file_ptr->file[i].succ_fn_ptr = NULL;
        file_ptr->file[i].fail_fn_ptr = NULL;
    }
}


/*****************************************************************************
* FUNCTION
*  smsal_read_smss_cnf
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
kal_uint8 smsal_read_smss_cnf(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            
            if (file_info_cnf->length == SMSAL_SMS_STATUS_LEN)
            {
                /* set the flag of SMSS file. */
                SET_FLAGS(SMSAL_SIM_SMSS_FLAG);

                aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;
            }
            else
            {
                /* clear the flag of SMSS file. */
                CLR_FLAGS(SMSAL_SIM_SMSS_FLAG);
                kal_brief_trace(TRACE_WARNING, EF_SMSS_NOT_SUPPORT);
                read_next = SMSAL_READ_NEXT_FILE;
            }
            break;

        case READ_FROM_SIM:
            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            smsal_cntx_ptr->msg_ref = read_cnf->data[0];     /* save message reference */

            /* 
             * Save the memory capacity exceeded notifiation flag
             */
            if ((read_cnf->data[1] & 0x01) == 0x01)
            {
                CLR_FLAGS(MEM_EXD_FLAG);
            }
            else
            {
                SET_FLAGS(MEM_EXD_FLAG);
            }

            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;

        default:
            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;
    }

    return read_next;
}
/* end of smsal_read_smss_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_smss_rej
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
kal_uint8 smsal_read_smss_rej(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:
        case READ_FROM_SIM:
            /* clear the flag of SMSS file. */
            CLR_FLAGS(SMSAL_SIM_SMSS_FLAG);
            kal_brief_trace(TRACE_WARNING, EF_SMSS_NOT_SUPPORT);

            break;
        default:
            break;
    }

    return SMSAL_READ_NEXT_FILE;
}                                       /* end of smsal_read_smss_rej */


/*****************************************************************************
* FUNCTION
*  smsal_read_smsp_cnf
* DESCRIPTION
*   This function handles read conform for EMsmsp.
*
* PARAMETERS
*  a  IN       in, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_read_smsp_cnf(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
        case GET_REC_SIZE:

            // file_info_cnf->length no used

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            if (file_info_cnf->num_of_rec> SMSAL_MAX_PROFILE_NUM)
            {
                smsal_para_ptr->profile.max_profile_num = SMSAL_MAX_PROFILE_NUM;
            }
            else
            {
                smsal_para_ptr->profile.max_profile_num = (kal_uint8) file_info_cnf->num_of_rec;
            }

            /*
             * Read EFsmsp record size, 
             * to determine the size of 'alpha-identifier (Y bytes)' :
             *
             *       Y = record_size - 28
             *
             */
            if (file_info_cnf->num_of_rec > 0)
            {
                //aux_info->file[aux_info->current_read_idx].read_type = GET_REC_SIZE;
            }
            else
            {
                CLR_FLAGS(SMSAL_PARAM_FLAG);
                /* SIM SMSP is invalid */
                CLR_FLAGS(SMSAL_SIM_SMSP_FLAG);
                read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                break;
            }

            file_info_cnf->file_size = file_info_cnf->file_size / file_info_cnf->num_of_rec;

            /* MAUI_00726149 [SMSAL][Revise] add error handling for smsp if alpha_size is less than 28 */
            if (file_info_cnf->file_size >= SMSAL_SMSP_LEN)
            {
                smsal_para_ptr->profile.alpha_size =(kal_uint8)file_info_cnf->file_size - SMSAL_SMSP_LEN;
            }
            else
            {
                CLR_FLAGS(SMSAL_PARAM_FLAG);
                /* SIM SMSP is invalid */
                CLR_FLAGS(SMSAL_SIM_SMSP_FLAG);
                smsal_para_ptr->profile.max_profile_num = 0;
                kal_brief_trace(TRACE_WARNING, EF_SMSP_NOT_SUPPORT);
                read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                break;
            }

            /* if(smsal_para_ptr->profile.alpha_size > SMSAL_PROFILE_NAME_LEN) */
            /*    smsal_para_ptr->profile.alpha_size = SMSAL_PROFILE_NAME_LEN; */

            /*
             * Read 1st profile
             */
            aux_info->record_no = 1;
            aux_info->file[aux_info->current_read_idx].read_type = GET_REC;

            break;

        case GET_REC:
            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            /* decode the msg and update message box */
            smsal_decode_smsp((kal_uint8) (aux_info->record_no - 1),
                              read_cnf->data,
                              read_cnf->length);

            /* read next record */
            aux_info->record_no++;

            /* for early init */
            SET_FLAGS(SMSAL_PARAM_FLAG);

            if (aux_info->record_no > smsal_para_ptr->profile.max_profile_num)
                read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
            break;
    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_read_smsp_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_smsp_rej
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
kal_uint8 smsal_read_smsp_rej(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
        case GET_REC_SIZE:
        case GET_REC:
            CLR_FLAGS(SMSAL_PARAM_FLAG);
            /* SIM SMSP is invalid */
            CLR_FLAGS(SMSAL_SIM_SMSP_FLAG);
            smsal_para_ptr->profile.max_profile_num = 0;
            kal_brief_trace(TRACE_WARNING, EF_SMSP_NOT_SUPPORT);
            break;
    }                                   /* switch */

    return SMSAL_READ_NEXT_FILE;        /* read next file */
}                                       /* end of smsal_read_smsp_rej */

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_read_sim_sms_cnf
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
kal_uint8 smsal_read_sim_sms_cnf(kal_uint8                        id,
                                 smsal_read_file_aux_info_struct  *aux_info,
                                 peer_buff_struct                 *peer_buff_ptr,
                                 local_para_struct                *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    kal_uint16 entry_id;
    kal_bool ret_val;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            /*
             * Check whether total numbers exceeds 
             * * the maximum supported numbers 
             */
            if ((file_info_cnf->length + smsal_cntx_ptr->storage_num_info.me_msg_num) > SMSAL_MAX_MSG_NUM)
            {
                file_info_cnf->length =
                SMSAL_MAX_MSG_NUM - smsal_cntx_ptr->storage_num_info.me_msg_num;
            }

            aux_info->number = (kal_uint8) file_info_cnf->length;

            /*
             * Read the first short messages
             */
            if (file_info_cnf->length > 0)
            {
                aux_info->record_no = 1;
                aux_info->file[aux_info->current_read_idx].read_type = GET_REC;
            }
            else
            {
                CLR_FLAGS(SIM_MSG_FLAG);
                read_next = SMSAL_READ_NEXT_FILE;       /* read next file */

                if (smsal_cntx_ptr->sms_prefer_order != SMSAL_SM_FIRST)
                {
                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
                    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                    SET_FLAGS(SMSAL_FINISH_SIM_LOAD_FLAG);
                }

            }
            break;

        case GET_REC:
            read_cnf = (sim_read_cnf_struct *) local_para_ptr;

            /*
             * Decode the msg read from SIM and update message box 
             * * first, get an unused msg box entry 
             */
            ret_val = smsal_get_unused_mb_entry(&entry_id);
            if (ret_val == KAL_TRUE)
            {
                ret_val = smsal_decode_msg_into_msgbox(entry_id,
                                                       aux_info,
                                                       SMSAL_SM,
                                                       &read_cnf->data[0],
                                                       read_cnf->length
                                                       );
            }

            if (ret_val == KAL_FALSE)
                aux_info->occur_error = KAL_TRUE;

            aux_info->record_no++;
            smsal_cntx_ptr->storage_num_info.sim_msg_num++;

        #ifndef EMPTY_MMI
            if (aux_info->msg_box_seq_num == 0)
                read_next = SMSAL_PAUSE_READ;
        #endif

            if (aux_info->record_no > aux_info->number)
            {
                /* aux_info->record_no = 1; */
            #ifndef EMPTY_MMI
            #ifdef __SMS_ME_STORAGE__
                if (aux_info->msg_box_seq_num > 0)
            #endif
            #endif
                    read_next = SMSAL_READ_NEXT_FILE;   /* all SMS records in SIM card were read */

            #ifndef __SMS_ME_STORAGE__
                smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
                /* (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                   otherwise, smsal_startup_read_next_handler can't find pending action */
                SET_FLAGS(SMSAL_FINISH_SIM_LOAD_FLAG);
            #else
                if (smsal_cntx_ptr->sms_prefer_order != SMSAL_SM_FIRST)
                {
                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
                    /* (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                       otherwise, smsal_startup_read_next_handler can't find pending action */
                    SET_FLAGS(SMSAL_FINISH_SIM_LOAD_FLAG);
                }
            #endif
            }

            if (IS_FLAG_SET(MTSMS_WAIT_FLAG) == KAL_TRUE)
                smsal_init_pending_act_hdlr();

            break;

    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_read_sim_sms_cnf */

/*****************************************************************************
* FUNCTION
*  smsal_read_sim_sms_rej
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
kal_uint8 smsal_read_sim_sms_rej(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
        case GET_REC_SIZE:
        case GET_REC:

            // no insert sim and read-order is NVRAM first
            // the finish_ind would not send to MMI
            CLR_FLAGS(SIM_MSG_FLAG);
            if (smsal_cntx_ptr->sms_prefer_order != SMSAL_SM_FIRST)
            {
               smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
               (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
               SET_FLAGS(SMSAL_FINISH_SIM_LOAD_FLAG);
            }
            break;
    }                                   /* switch */

    return SMSAL_READ_NEXT_FILE;        /* read next file */
}       
#endif //__SMS_STORAGE_BY_MMI__



#if defined (__CPHS__) || defined (__REL4__)
/*****************************************************************************
* FUNCTION
*  smsal_read_ext_cnf
* DESCRIPTION
*   This function handles the read confirm for Message Wait Flag.
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
kal_uint8 smsal_read_ext_cnf(kal_uint8                        id,
                             smsal_read_file_aux_info_struct  *aux_info,
                             peer_buff_struct                 *peer_buff_ptr,
                             local_para_struct                *local_para_ptr)
{
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    kal_uint8 ext_rec_num = 0;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            ext_rec_num = (kal_uint8) file_info_cnf->length;

            if (ext_rec_num > 0)
            {
                kal_mem_set(smsal_para_ptr_g->mailbox.rec_bitmap, 0x0, SMSAL_MAX_EXT_NUM/8);

                SET_FLAGS(SMSAL_EXT_FLAG);
                
                if (ext_rec_num < SMSAL_MAX_EXT_NUM)
                {
                    smsal_para_ptr_g->mailbox.ext_rec_num = ext_rec_num;
                }
                else
                {
                    smsal_para_ptr_g->mailbox.ext_rec_num = SMSAL_MAX_EXT_NUM;
                }
            }
            else
            {
                CLR_FLAGS(SMSAL_EXT_FLAG);
                smsal_para_ptr_g->mailbox.ext_rec_num = 0;
            }

        default:
            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;
    }

    return read_next;

}                                       /* end of smsal_read_ext_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_ext_rej
* DESCRIPTION
*   This function handles the read confirm for Message Wait Flag.
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
kal_uint8 smsal_read_ext_rej(kal_uint8                        id,
                             smsal_read_file_aux_info_struct  *aux_info,
                             peer_buff_struct                 *peer_buff_ptr,
                             local_para_struct                *local_para_ptr)
{

    CLR_FLAGS(SMSAL_EXT_FLAG);
    smsal_para_ptr_g->mailbox.ext_rec_num = 0;
    return SMSAL_READ_NEXT_FILE;

}                                       /* end of smsal_read_ext_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_mwf_cnf
* DESCRIPTION
*   This function handles the read confirm for Message Wait Flag.
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
kal_uint8 smsal_read_mwf_cnf(kal_uint8                        id,
                             smsal_read_file_aux_info_struct  *aux_info,
                             peer_buff_struct                 *peer_buff_ptr,
                             local_para_struct                *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_FILE_INFO_FROM_SIM:

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            /* smsal_decode_mwf will decode only when length is correct */
            SMSAL_ASSERT(file_info_cnf->length >= SMSAL_MWF_LEN);

            smsal_para_ptr->mailbox.mwf_file_size = (kal_uint8) file_info_cnf->length;

            aux_info->file[aux_info->current_read_idx].read_type = READ_FROM_SIM;

            break;

        case READ_FROM_SIM:

            smsal_decode_mwf(((sim_read_cnf_struct *) local_para_ptr)->data);

            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */

            /* indicate that SIM card support this file */
            SET_FLAGS(CPHS_MWF_FLAG);

            break;

        default:
            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;
    }

    return read_next;

}                                       /* end of smsal_read_mwf_cnf */


#ifdef __REL4__
/*****************************************************************************
* FUNCTION
*  smsal_read_r4_mbi_cnf
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
kal_uint8 smsal_read_r4_mbi_cnf(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            if (file_info_cnf->num_of_rec > SMSAL_MAX_MSP_NUM)
                smsal_para_ptr_g->mailbox.mbi_rec_num = SMSAL_MAX_MSP_NUM;
            else
                smsal_para_ptr_g->mailbox.mbi_rec_num = (kal_uint8) file_info_cnf->num_of_rec;

            if (smsal_para_ptr_g->mailbox.mbi_rec_num != 0)
            {
                smsal_para_ptr_g->mailbox.mbi_rec_length =
                    ((kal_uint8) file_info_cnf->file_size)/((kal_uint8) file_info_cnf->num_of_rec);

            }

            if ((smsal_para_ptr_g->mailbox.mbi_rec_num == 0) ||
                (smsal_para_ptr_g->mailbox.mbi_rec_length < 4))
            {
                smsal_para_ptr_g->mailbox.mbi_rec_num = 0;
                /* clear the flag of MBI file. */
                CLR_FLAGS(REL4_MBI_FLAG);
                return SMSAL_READ_NEXT_FILE;
            }

            aux_info->file[aux_info->current_read_idx].read_type = GET_REC;

            break;

        case GET_REC:

            read_cnf = (sim_read_cnf_struct *) local_para_ptr;
            /* X >= 4 */
            if (read_cnf->length >= 4)
                smsal_decode_mbi((kal_uint8) (aux_info->record_no - 1), ((sim_read_cnf_struct *) local_para_ptr)->data, read_cnf->length);
            else
            {
                smsal_para_ptr_g->mailbox.mbi_rec_num = 0;
                /* clear the flag of MBI file. */
                CLR_FLAGS(REL4_MBI_FLAG);
                return SMSAL_READ_NEXT_FILE;
            }

            /* indicate that SIM card support this file */
            SET_FLAGS(REL4_MBI_FLAG);

            aux_info->record_no++;

            if (aux_info->record_no > smsal_para_ptr->mailbox.mbi_rec_num)
                read_next = SMSAL_READ_NEXT_FILE;   /* read next file */

            break;

        default:
            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;
    }

    return read_next;
}                                       /* end of smsal_read_r4_mbi_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_r4_mbi_rej
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
kal_uint8 smsal_read_r4_mbi_rej(kal_uint8                       id,
                                smsal_read_file_aux_info_struct *aux_info,
                                peer_buff_struct                *peer_buff_ptr,
                                local_para_struct               *local_para_ptr)
{
    smsal_para_ptr_g->mailbox.mbi_rec_num = 0;
    /* clear the flag of MBI file. */
    CLR_FLAGS(REL4_MBI_FLAG);
    return SMSAL_READ_NEXT_FILE;

}

/*****************************************************************************
* FUNCTION
*  smsal_read_r4_mwis_cnf
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
kal_uint8 smsal_read_r4_mwis_cnf(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:

            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            /* smsal_decode_mwf will decode only when length is correct */
            //SMSAL_ASSERT(file_info_cnf->length >= SMSAL_R4_MWIS_LEN);

            if (file_info_cnf->length > SMSAL_MAX_MSP_NUM)
                smsal_para_ptr_g->mailbox.mwis_rec_num = SMSAL_MAX_MSP_NUM;
            else
                smsal_para_ptr_g->mailbox.mwis_rec_num = (kal_uint8) file_info_cnf->length;

            if (smsal_para_ptr_g->mailbox.mwis_rec_num != 0)
            {
                smsal_para_ptr_g->mailbox.mwis_rec_length =
                    ((kal_uint8) file_info_cnf->file_size)/((kal_uint8) file_info_cnf->num_of_rec);
            }

            if ((smsal_para_ptr_g->mailbox.mwis_rec_num == 0) ||
                (smsal_para_ptr_g->mailbox.mwis_rec_length < 5))
            {
                /* clear the flag of MWIS file. */
                CLR_FLAGS(REL4_MWIS_FLAG);
                return SMSAL_READ_NEXT_FILE;
            }

            aux_info->file[aux_info->current_read_idx].read_type = GET_REC;

            break;

        case GET_REC:

            read_cnf = (sim_read_cnf_struct *) local_para_ptr;
            
            /* X >= 5 */
            if (read_cnf->length >= 5)
                smsal_decode_r4mwis((kal_uint8) (aux_info->record_no - 1), ((sim_read_cnf_struct *) local_para_ptr)->data, read_cnf->length);

            /* indicate that SIM card support this file */
            SET_FLAGS(REL4_MWIS_FLAG);

            aux_info->record_no++;

            if (aux_info->record_no > smsal_para_ptr_g->mailbox.mwis_rec_num)
                read_next = SMSAL_READ_NEXT_FILE;   /* read next file */

            break;

        default:
            read_next = SMSAL_READ_NEXT_FILE;   /* read next file */
            break;
    }

    return read_next;
}                                       /* end of smsal_read_r4_mwis_cnf */
#endif

/*****************************************************************************
* FUNCTION
*  smsal_read_mailbox_num_cnf
* DESCRIPTION
*   This function handles read conform for FILE_MAILBOX_NUM_IDX.
*
* PARAMETERS
*  a  IN       in, indicate the id of pending action struct
*  b  IN       aux_info
*  c  IN       peer_buff_ptr
*  d  IN       local_para_ptr, contain content of EFsmss
* RETURNS
*  KAL_UINT8: 0 -- continue read this file
*             1 -- read next file, so on.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_read_mailbox_num_cnf(kal_uint8                       id,
                                     smsal_read_file_aux_info_struct *aux_info,
                                     peer_buff_struct                *peer_buff_ptr,
                                     local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 read_next = SMSAL_READ_CURRENT_FILE;
    sim_file_info_cnf_struct *file_info_cnf;
    sim_read_cnf_struct *read_cnf;
    smsal_mailbox_addr_struct *mb_addr = NULL;
    kal_uint8 line_no = 0;
    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
        case GET_REC_SIZE:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;

            /*
             * Read EFsmsp record size, 
             * to determine the size of 'alpha-identifier (Y bytes)' :
             *
             *       Y = record_size - 14
             *
             */
            if (file_info_cnf->num_of_rec > 0)
            {
                if (file_info_cnf->num_of_rec > SMSAL_MAX_MAILBOX_NUM)
                {
                    smsal_para_ptr_g->mailbox.rec_num = SMSAL_MAX_MAILBOX_NUM;
                }
                else
                {
                    smsal_para_ptr_g->mailbox.rec_num = (kal_uint8) file_info_cnf->num_of_rec;
                }

                //aux_info->file[aux_info->current_read_idx].read_type = GET_REC_SIZE;
            }
            else
            {
                read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                #ifdef __REL4__
                    if (file_info_cnf->file_idx == FILE_MBDN_IDX)
                        CLR_FLAGS(REL4_MBDN_FLAG);
                #endif
                #ifdef __CPHS__
                    if (file_info_cnf->file_idx == FILE_MAILBOX_NUM_IDX)
                        CLR_FLAGS(CPHS_MBOX_FLAG);
                #endif
                break;
            }

            file_info_cnf->file_size = file_info_cnf->file_size / file_info_cnf->num_of_rec;

            smsal_para_ptr->mailbox.alpha_size =
            (kal_uint8) file_info_cnf->file_size - SMSAL_MAILBOX_NUM_LEN;

            /*
             * Read 1st profile
             */
            aux_info->record_no = 1;
            aux_info->file[aux_info->current_read_idx].read_type = GET_REC;

            break;

        case GET_REC:
            {
                read_cnf = (sim_read_cnf_struct *) local_para_ptr;

                /* decode the msg and update message box */
                line_no = (kal_uint8) (aux_info->record_no - 1);
                smsal_decode_mailbox_addr(line_no, read_cnf->data, KAL_TRUE);
                mb_addr = &smsal_para_ptr->mailbox.addr[line_no];
                if (mb_addr->extension_id != 0xff)
                {
                    if ((mb_addr->extension_id <= smsal_para_ptr_g->mailbox.ext_rec_num) &&
                        (mb_addr->extension_id != 0))
                    {
                        /*
                         * Read the specified ext rec num
                         */
                        aux_info->ext_record_no = mb_addr->extension_id;
                        aux_info->file[aux_info->current_read_idx].read_type = GET_EXT_REC;

                        break;
                    }
                    else
                    {
                        mb_addr->extension_id = 0xff;
                    }
                }
                    
                /* read next record */
                aux_info->record_no++;

                if (aux_info->record_no > smsal_para_ptr_g->mailbox.rec_num)
                {
                    #ifdef __REL4__
                        if (read_cnf->file_idx == FILE_MBDN_IDX)
                            SET_FLAGS(REL4_MBDN_FLAG);
                    #endif
                    #ifdef __CPHS__
                        if (read_cnf->file_idx == FILE_MAILBOX_NUM_IDX)
                            SET_FLAGS(CPHS_MBOX_FLAG);

                    if (IS_FLAG_SET(PHB_WAIT_EXT1_FLAG) == KAL_TRUE)
                    {
                        smsal_get_ext1_num_cnf();
                    }

                    #endif

                    read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                }
            }
            break;

        case GET_EXT_REC:
            {
                line_no = (kal_uint8) (aux_info->record_no - 1);
                mb_addr = &smsal_para_ptr->mailbox.addr[line_no];

                read_cnf = (sim_read_cnf_struct *) local_para_ptr;
                
                if (read_cnf->data[0] == 0x02)
                {
                    kal_uint8 addr_len = read_cnf->data[1];

                    if (addr_len > (kal_uint8)(SMSAL_ADDR_LEN-1))
                        addr_len = (kal_uint8)(SMSAL_ADDR_LEN-1);

                    mb_addr->addr.addr_length+= addr_len;
                        
                    //if ((*(read_cnf->data + 1)) <= 10)
                    kal_mem_cpy(mb_addr->addr.addr_bcd + (kal_uint8)SMSAL_ADDR_LEN, (read_cnf->data + 2), (kal_uint8)(SMSAL_ADDR_LEN-1));

                    #if defined (__REL4__)
                    if (read_cnf->file_idx == FILE_EXT6_IDX)
                    {
                        /* use SMSAL ext table to set occupied record in ext6, start from 0 */
                        smsal_bitmap_set_index((kal_uint16)(aux_info->ext_record_no-1), smsal_para_ptr_g->mailbox.rec_bitmap);
                    }
                    else
                    #endif
                    {
                        /* use SMSAL ext table to set occupied record in ext1, start from 0 */
                        /* keep in SMSAL ext table for PHB query */
                        smsal_bitmap_set_index((kal_uint16)(aux_info->ext_record_no-1),
                                               (kal_uint8*)(smsal_para_ptr_g->mailbox.rec_bitmap));

                        #if 0 //waitphb
/* under construction !*/
/* under construction !*/
                        #endif
                    }
                }

                aux_info->file[aux_info->current_read_idx].read_type = GET_REC;
                    
                /* read next record */
                aux_info->record_no++;

                #ifdef __REL4__
                if ((aux_info->record_no > smsal_para_ptr_g->mailbox.rec_num) &&
                    (read_cnf->file_idx == FILE_EXT6_IDX))
                {
                    SET_FLAGS(REL4_MBDN_FLAG);
                    read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                }
                #endif

                #ifdef __CPHS__
                if ((aux_info->record_no > smsal_para_ptr_g->mailbox.rec_num) &&
                    (read_cnf->file_idx == FILE_EXT1_IDX))
                {
                    SET_FLAGS(CPHS_MBOX_FLAG);

                    if (IS_FLAG_SET(PHB_WAIT_EXT1_FLAG) == KAL_TRUE)
                    {
                        smsal_get_ext1_num_cnf();
                    }
                    read_next = SMSAL_READ_NEXT_FILE;       /* read next file */
                }
                #endif

            }
            break;
    }                                   /* switch */

    return read_next;
}                                       /* end of smsal_read_mailbox_num_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_mailbox_num_rej
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
kal_uint8 smsal_read_mailbox_num_rej(kal_uint8                       id,
                                     smsal_read_file_aux_info_struct *aux_info,
                                     peer_buff_struct                *peer_buff_ptr,
                                     local_para_struct               *local_para_ptr)
{
    sim_file_info_cnf_struct *file_info_cnf;

    switch (aux_info->file[aux_info->current_read_idx].read_type)
    {
        case GET_REC_NUM:
        case GET_REC_SIZE:
            file_info_cnf = (sim_file_info_cnf_struct *) local_para_ptr;
            #ifdef __REL4__
                if (file_info_cnf->file_idx == FILE_MBDN_IDX)
                {
                    CLR_FLAGS(REL4_MBDN_FLAG);
                    smsal_para_ptr_g->mailbox.rec_num = 0;
                }
            #endif
            #ifdef __CPHS__
                if (file_info_cnf->file_idx == FILE_MAILBOX_NUM_IDX)
                {
                    CLR_FLAGS(CPHS_MBOX_FLAG);
                    smsal_para_ptr_g->mailbox.rec_num = 0;
                }
            #endif

            break;

        case GET_REC:
        case GET_EXT_REC:

            break;
    }                                   /* switch */

    return SMSAL_READ_NEXT_FILE;        /* read next file */
}                                       /* end of smsal_read_mailbox_num_rej */
#endif /* __CPHS__ */


/*****************************************************************************
* FUNCTION
*  smsal_read_common_param_sms_cnf
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
kal_uint8 smsal_read_common_param_cnf(kal_uint8                       id,
                                      smsal_read_file_aux_info_struct *aux_info,
                                      peer_buff_struct                *peer_buff_ptr,
                                      local_para_struct               *local_para_ptr)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    SMSAL_ASSERT(pdu_len == NVRAM_EF_SMSAL_COMMON_PARAM_SIZE);

    if (pdu_len == NVRAM_EF_SMSAL_COMMON_PARAM_SIZE)
    {
        SMSAL_ASSERT(pdu_len == sizeof(smsal_nvm_common_param_struct));
        smsal_set_common_param((smsal_nvm_common_param_struct *) pdu_ptr,
                               SMSAL_COM_PARA_RESTORE_PROFILE);
    }

    /*
     * EFsmss, EFsmsp, EFcommon_param_lid already read successfully
     * * thus, SMSAL can send MO short message now 
     */
    smsal_para_ptr->rmi.service_info.mo = KAL_TRUE;

#ifdef __CB__
    if (smsal_cb_data_ptr->cbch_req == KAL_TRUE)
        smsal_cbch_req_handler(SMSAL_TO_LMI, smsal_cb_data_ptr->cbch_req);
#endif

    return SMSAL_READ_NEXT_FILE;        /* read next file */

}                                       /* end of smsal_read_common_param_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_mwis_cnf
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
kal_uint8 smsal_read_mwis_cnf(kal_uint8                       id,
                              smsal_read_file_aux_info_struct *aux_info,
                              peer_buff_struct                *peer_buff_ptr,
                              local_para_struct               *local_para_ptr)
{
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    SMSAL_ASSERT(pdu_len == NVRAM_EF_SMSAL_MWIS_SIZE);

    if (pdu_len == NVRAM_EF_SMSAL_MWIS_SIZE)
    {
        switch( aux_info->record_no )
        {
            case 1:

#ifdef __REL4__
            case 2:
#ifdef __SMS_MSP_UP_TO_4__
            case 3:
            case 4:
#endif
#endif //__REL4__

    #ifdef __REL4__
                /* 1.if already read line1 setting in R4 mwis, 2.cphs won't enter this function */
                if( (IS_FLAG_SET(REL4_MWIS_FLAG) == KAL_TRUE) &&
                    aux_info->record_no <= smsal_para_ptr_g->mailbox.mwis_rec_num )
                {
                    /* not call smsal_decode_mwis, because decode mwis file already  */
                }
                else
                {
                    smsal_decode_nvram_mwis_rec((kal_uint8) (aux_info->record_no - 1), SMSAL_LINE_1, pdu_ptr);
                }
    #else
                    smsal_decode_nvram_mwis_rec((kal_uint8) (aux_info->record_no - 1), SMSAL_LINE_1, pdu_ptr);
    #endif
               break;

#ifdef __REL4__
#ifdef __SMS_MSP_UP_TO_4__
            case 5:
#else
            case 3:
#endif
#else
            case 2:
#endif //__REL4__
               smsal_decode_nvram_mwis_rec(0, SMSAL_LINE_2, pdu_ptr);
               break;

            default:
                break;
        }                
    }

    aux_info->record_no++;

#ifdef __REL4__
#ifdef __SMS_MSP_UP_TO_4__
    if (aux_info->record_no > 5)
#else
    if (aux_info->record_no > 3)
#endif
#else //__REL4__
    if (aux_info->record_no > 2)
#endif //__REL4__
    {
        return SMSAL_READ_NEXT_FILE;    /* read next file */
    }
    else
    {
        return SMSAL_READ_CURRENT_FILE;
    }

}                                       /* end of smsal_read_mwis_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_mailbox_addr_cnf
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
kal_uint8 smsal_read_mailbox_addr_cnf(kal_uint8                       id,
                                      smsal_read_file_aux_info_struct *aux_info,
                                      peer_buff_struct                *peer_buff_ptr,
                                      local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    smsal_para_ptr->mailbox.alpha_size = SMSAL_MAILBOX_NAME_LEN;

    SMSAL_ASSERT(pdu_len == NVRAM_EF_SMSAL_MAILBOX_ADDR_SIZE);

    if (pdu_len == NVRAM_EF_SMSAL_MAILBOX_ADDR_SIZE)
        smsal_decode_mailbox_addr((kal_uint8) (aux_info->record_no - 1), pdu_ptr, KAL_FALSE);

    aux_info->record_no++;

    #ifdef __GEMINI__
    if (aux_info->record_no > (NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL/SMSAL_MAX_SIM_NUM))
    #else
    if (aux_info->record_no > NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL)
    #endif
    {
        SET_FLAGS(NVM_MBOX_FLAG);

        if (IS_FLAG_SET(PHB_WAIT_EXT1_FLAG) == KAL_TRUE)
        {
            smsal_get_ext1_num_cnf();
        }
        return SMSAL_READ_NEXT_FILE;    /* read next file */
    }
    else
        return SMSAL_READ_CURRENT_FILE;

}                                       /* end of smsal_read_mailbox_addr_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_read_smsp_nvram_cnf
* DESCRIPTION
*   This function is to handle no smsp in SIM.
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
kal_uint8 smsal_read_nvram_smsp_cnf(kal_uint8                       id,
                                    smsal_read_file_aux_info_struct *aux_info,
                                    peer_buff_struct                *peer_buff_ptr,
                                    local_para_struct               *local_para_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 *pdu_ptr;
    kal_uint8 i;
    kal_uint16 pdu_len;

    pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    smsal_para_ptr->profile.alpha_size = 12;

    SMSAL_ASSERT(pdu_len == (aux_info->nvram_rec_amount * NVRAM_EF_SMSAL_SMSP_SIZE));

    for (i = 0; i < aux_info->nvram_rec_amount; i++)
    {
        /* decode the msg and update the profile */
        smsal_decode_smsp((kal_uint8) (aux_info->record_no - 1),
                          pdu_ptr,
                          NVRAM_EF_SMSAL_SMSP_SIZE);
        pdu_ptr += NVRAM_EF_SMSAL_SMSP_SIZE;
        aux_info->record_no++;
        aux_info->nvram_rec_decoded++;
    }

    /* read next record */
    aux_info->record_no++;

    /* for early init */
    SET_FLAGS(SMSAL_PARAM_FLAG);

    if (aux_info->record_no > smsal_para_ptr->profile.max_profile_num)
        return SMSAL_READ_NEXT_FILE;    /* read next file */
    else
        return SMSAL_READ_CURRENT_FILE;

}                                       /* end of smsal_read_mailbox_addr_cnf */

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_read_nvram_sms_cnf
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
kal_uint8 smsal_read_nvram_sms_cnf(kal_uint8                       id,
                                   smsal_read_file_aux_info_struct *aux_info,
                                   peer_buff_struct                *peer_buff_ptr,
                                   local_para_struct               *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    kal_uint16 entry_id, i;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_length;
    kal_bool ret_val;

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_length);

    ASSERT(pdu_length == (aux_info->nvram_rec_amount * SMSAL_SMS_ME_LEN));
    aux_info->nvram_rec_decoded = 0;

    /*
     * Decode the msg read from ME and update message box 
     * * first, get an unused msg box entry 
     */
    for (i = 0; i < aux_info->nvram_rec_amount; i++)
    {
        ret_val = smsal_get_unused_mb_entry(&entry_id);
        if (ret_val == KAL_TRUE)
        {
            ret_val = smsal_decode_msg_into_msgbox(entry_id,
                                                   aux_info,
                                                   SMSAL_ME,
                                                   pdu_ptr,
                                                   SMSAL_SMS_ME_LEN
                                                   );
        }

        if (ret_val == KAL_FALSE)
            aux_info->occur_error = KAL_TRUE;

        pdu_ptr += SMSAL_SMS_ME_LEN;
        aux_info->record_no++;
        aux_info->nvram_rec_decoded++;
        smsal_cntx_ptr->storage_num_info.me_msg_num++;

    #ifndef EMPTY_MMI
        if (aux_info->msg_box_seq_num == 0)
        {
            if (aux_info->nvram_rec_decoded < aux_info->nvram_rec_amount)
            {
                /* keep peer buffer. */
                (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
                if (peer_buff_ptr != NULL)
                    hold_peer_buff(peer_buff_ptr);
            }

            break;
        }
    #endif
    }

    if (IS_FLAG_SET(MTSMS_WAIT_FLAG) == KAL_TRUE)
        smsal_init_pending_act_hdlr();

    if (aux_info->record_no > aux_info->number)
    {
        /* all SMS records in NVRAM were read */

        if ((smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST) ||
            ((smsal_cntx_ptr->sms_prefer_order == SMSAL_ME_FIRST) && 
             (smsal_check_sim_service_table(FILE_SMS_IDX) == KAL_FALSE)))
        {
            smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
            (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
            SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);
        }
        return SMSAL_READ_NEXT_FILE;    /* read next file */
    }
    else
    {

        /* If all records are processed, update record amount for next reading. */
        if (aux_info->nvram_rec_decoded >= aux_info->nvram_rec_amount)
        {
            if ((aux_info->number - aux_info->record_no + 1) < SMSAL_MULTI_REC_READ_NUM)
                aux_info->nvram_rec_amount = (aux_info->number - aux_info->record_no + 1);
            else
                aux_info->nvram_rec_amount = SMSAL_MULTI_REC_READ_NUM;
        }

        /* pause to read SMS in storage until receiving STARTUP_READ_NEXT_REQ. */
    #ifndef EMPTY_MMI
        if (aux_info->msg_box_seq_num == 0)
            return SMSAL_PAUSE_READ;
        else
    #endif
            return SMSAL_READ_CURRENT_FILE;     /* continue to read sms file */
    }
}                                       /* end of smsal_read_nvram_sms_cnf */


#ifndef EMPTY_MMI
void smsal_continue_read_nvram_sms(kal_uint8 id, smsal_read_file_aux_info_struct *aux_info)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
	  
    kal_uint16 entry_id, i;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_length;
    kal_bool ret_val;

    pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_length);
    ASSERT(pdu_length == (aux_info->nvram_rec_amount * SMSAL_SMS_ME_LEN));

    pdu_ptr += (aux_info->nvram_rec_decoded * SMSAL_SMS_ME_LEN);
    /*
     * Decode the msg read from SIM and update message box 
     * * first, get an unused msg box entry 
     */
    for (i = aux_info->nvram_rec_decoded; i < aux_info->nvram_rec_amount; i++)
    {
        ret_val = smsal_get_unused_mb_entry(&entry_id);
        if (ret_val == KAL_TRUE)
        {
            ret_val = smsal_decode_msg_into_msgbox(entry_id,
                                                   aux_info,
                                                   SMSAL_ME,
                                                   pdu_ptr,
                                                   SMSAL_SMS_ME_LEN);
        }

        if (ret_val == KAL_FALSE)
            aux_info->occur_error = KAL_TRUE;

        pdu_ptr += SMSAL_SMS_ME_LEN;
        aux_info->record_no++;
        aux_info->nvram_rec_decoded++;
        smsal_cntx_ptr->storage_num_info.me_msg_num++;

        if (aux_info->msg_box_seq_num == 0)
        {
            if (aux_info->nvram_rec_decoded < aux_info->nvram_rec_amount)
                return;

            /* break; |+break to free peer buffer +| */
        }
    }

    free_peer_buff((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr);
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = NULL;

    if (IS_FLAG_SET(MTSMS_WAIT_FLAG) == KAL_TRUE)
        smsal_init_pending_act_hdlr();

    /* If all records are processed, update record amount for next reading. */
    if (aux_info->nvram_rec_decoded >= aux_info->nvram_rec_amount)
    {
        if ((aux_info->number - aux_info->record_no + 1) < SMSAL_MULTI_REC_READ_NUM)
            aux_info->nvram_rec_amount = (aux_info->number - aux_info->record_no + 1);
        else
            aux_info->nvram_rec_amount = SMSAL_MULTI_REC_READ_NUM;
    }

    /* pause to read SMS in storage until receiving STARTUP_READ_NEXT_REQ. */
    if (aux_info->msg_box_seq_num == 0)
        return;

    if (aux_info->record_no > aux_info->number)
    {
        /* all SMS records in NVRAM were read */
        if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)
        {
            smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
            (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
            SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);
        }

        aux_info->record_no = 1;        /* reset for reading next file */
        aux_info->current_read_idx += 1;
        aux_info->file_type_bitmap >>= 1;

    }

    smsal_read_files(id, aux_info);

    return;
}
#endif
#endif //__SMS_STORAGE_BY_MMI__

void smsal_assign_file_list(smsal_read_file_aux_info_struct *file_ptr, smsal_file_enum file_id)
{
    file_list_struct *file;
    kal_uint16 file_type;

    if (file_ptr->current_read_idx >= SMSAL_MAX_FILE)
        return;

    file = &file_ptr->file[file_ptr->current_read_idx];
    file_type = (kal_uint16) (file_ptr->file_type_bitmap >> file_ptr->current_read_idx);

    if ((file_type & 0x0001) == 0)      /* SIM files */
    {
        switch (file_id)
        {
                /*
                 * Read EFsmss
                 */
            case FILE_SMSS_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_SMSS_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_read_smss_cnf;
                file->fail_fn_ptr = smsal_read_smss_rej;
                break;

                /*
                 * Read EFsmsp
                 */
            case FILE_SMSP_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_SMSP_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_smsp_cnf;
                file->fail_fn_ptr = smsal_read_smsp_rej;
                break;

#ifndef __SMS_STORAGE_BY_MMI__
                /*
                 * Read EFsms
                 */
            case FILE_SMS_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_SMS_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_sim_sms_cnf;
                file->fail_fn_ptr = smsal_read_sim_sms_rej;
                break;
#endif

        #ifdef __CB__
                /*
                 * Read EFli or EFelp
                 */
            case FILE_U_LI_IDX:
            case FILE_ELP_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = file_id;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_access_sim_li_or_elp_cnf;
                file->fail_fn_ptr = NULL;
                break;

                /*
                 * Read EFlp
                 */
            case FILE_LP_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_LP_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_access_sim_lp_cnf;
                file->fail_fn_ptr = NULL;
                break;

            #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
                /*
                 * Read EFcbmi
                 */
            case FILE_CBMI_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_CBMI_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_access_sim_cbmi_cnf;
                file->fail_fn_ptr = smsal_access_sim_cbmi_rej;
                break;

                /*
                 * Read EFcbmir
                 */
            case FILE_CBMIR_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_CBMIR_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_access_sim_cbmir_cnf;
                file->fail_fn_ptr = smsal_access_sim_cbmir_rej;
                break;
            #endif //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__

                /*
                 * Read EFcbmid
                 */
            case FILE_CBMID_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_CBMID_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_access_sim_cbmid_cnf;
                file->fail_fn_ptr = NULL;
                break;
        #endif /* __CB__ */

        #ifdef __REL4__
                /*
                 * Read Message Wait Flags
                 */
            case FILE_EXT6_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_EXT6_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_ext_cnf;
                file->fail_fn_ptr = smsal_read_ext_rej;
                break;

            case FILE_MBDN_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_MBDN_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_mailbox_num_cnf;
                file->fail_fn_ptr = smsal_read_mailbox_num_rej;
                break;

            case FILE_MBI_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_MBI_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_r4_mbi_cnf;
                file->fail_fn_ptr = smsal_read_r4_mbi_rej;
                break;

            case FILE_MWIS_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_MWIS_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_r4_mwis_cnf;
                file->fail_fn_ptr = NULL;
                break;

    
        #endif /* __REL4__ */


        #ifdef __CPHS__
                /*
                 * Read Message Wait Flags
                 */
            case FILE_VM_WAIT_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_VM_WAIT_IDX;
                file->read_type = GET_FILE_INFO_FROM_SIM;
                file->succ_fn_ptr = smsal_read_mwf_cnf;
                file->fail_fn_ptr = NULL;
                break;

            case FILE_EXT1_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_EXT1_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_ext_cnf;
                file->fail_fn_ptr = smsal_read_ext_rej;
                break;

            case FILE_MAILBOX_NUM_IDX:
                file->is_used = KAL_TRUE;
                file->file_id = FILE_MAILBOX_NUM_IDX;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_mailbox_num_cnf;
                file->fail_fn_ptr = smsal_read_mailbox_num_rej;
                break;
        #endif /* __CPHS__ */
            default:
                break;
        }                               /* switch */
    }
    else                                /* NVRAM files */
    {
        switch (file_id)
        {
                /*
                 * Read Common Param in NVRAM 
                 */
            case NVRAM_EF_SMSAL_COMMON_PARAM_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_SMSAL_COMMON_PARAM_LID;
                file->succ_fn_ptr = smsal_read_common_param_cnf;
                file->fail_fn_ptr = NULL;
                break;

                /*
                 * Read MWIS in NVRAM 
                 */
            case NVRAM_EF_SMSAL_MWIS_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_SMSAL_MWIS_LID;
                file->succ_fn_ptr = smsal_read_mwis_cnf;
                file->fail_fn_ptr = NULL;
                break;

                /*
                 * Read Mailbox Address in NVRAM 
                 */
            case NVRAM_EF_SMSAL_MAILBOX_ADDR_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_SMSAL_MAILBOX_ADDR_LID;
                file->succ_fn_ptr = smsal_read_mailbox_addr_cnf;
                file->fail_fn_ptr = NULL;
                break;

                /*
                 * Read SMSP in NVRAM 
                 */
            case NVRAM_EF_SMSAL_SMSP_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_SMSAL_SMSP_LID;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_nvram_smsp_cnf;
                file->fail_fn_ptr = NULL;
                break;

        #ifdef __SMS_ME_STORAGE__
                /*
                 * Read SMS in NVRAM
                 */
            case NVRAM_EF_SMSAL_SMS_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_SMSAL_SMS_LID;
                file->read_type = GET_REC_NUM;
                file->succ_fn_ptr = smsal_read_nvram_sms_cnf;
                file->fail_fn_ptr = NULL;
                break;
        #endif

        #ifdef __CB__
            case NVRAM_EF_CB_DEFAULT_CH_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_CB_DEFAULT_CH_LID;
                file->succ_fn_ptr = smsal_access_cb_default_ch_cnf;
                file->fail_fn_ptr = NULL;
                break;

            case NVRAM_EF_CB_CH_INFO_LID:
                file->is_used = KAL_TRUE;
                file->file_id = NVRAM_EF_CB_CH_INFO_LID;
                file->succ_fn_ptr = smsal_access_cb_ch_info_cnf;
                file->fail_fn_ptr = NULL;
                break;
        #endif

            default:
                break;
        }                               /* switch */
    }                                   /* if (file_type) */

    if (file->is_used == KAL_TRUE)
    {
        file_ptr->current_read_idx++;
    }

}                                       /* end of smsal_assign_file_list */


/*****************************************************************************
* FUNCTION
*  smsal_read_files
* DESCRIPTION
*   This function read batch files. Called during SMSAL initialization or
*   receiving SAT_FILE_CHANGE_IND.
*
* PARAMETERS
*  a  IN       id
*  b  IN       file_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#if defined (__SMSAL_UT__)
/* inject this tst to itself */
void sms_tst_hardcode()
{
    tst_module_string_inject_struct *local_ptr;

    local_ptr = (tst_module_string_inject_struct *) construct_local_para
        (sizeof(tst_module_string_inject_struct), TD_CTRL);

    local_ptr->index = 5;

    smsal_send_msg_to_sms(MSG_ID_TST_INJECT_STRING, (local_para_struct *) local_ptr, NULL);
}
#endif

kal_bool smsal_check_sim_service_table(smsal_file_enum file_id)
{
#if defined (__SMSAL_UT__)
    /* For UT purpose, always return service table support */
    return KAL_TRUE;

#else
    kal_uint16 service_table_bitmap = sms_check_sim_service_table();
    sim_service_enum service;

    switch(file_id)
    {
        case FILE_SMSS_IDX:
        {
            if ((service_table_bitmap & 0x0001) != 0x0001)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_SMS;
            }
            break;
        }
        case FILE_SMSP_IDX:
        {
            if ((service_table_bitmap & 0x0002) != 0x0002)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_SMSP;
            }    
            break;
        }
    #ifdef __CB__
        case FILE_CBMI_IDX:
        {
            if ((service_table_bitmap & 0x0004) != 0x0004)
            {
                return KAL_TRUE;
            }            
            else
            {
                service = SERVICE_CBMI;
            }
            break;
        }
        case FILE_CBMID_IDX:
        {
            if ((service_table_bitmap & 0x0008) != 0x0008)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_DATA_DOWNLOAD_SMS_CB;
            }
            break;
        }
        case FILE_CBMIR_IDX:
        {
            if ((service_table_bitmap & 0x0010) != 0x0010)
            {
                return KAL_TRUE;
            }            
            else
            {
                service = SERVICE_CBMIR;
            }
            break;
        }
    #endif
    #ifdef __REL4__
        case FILE_EXT6_IDX:
        {
            if ((service_table_bitmap & 0x0020) != 0x0020)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_MAILBOX_DIAL_NUM;
            }
            break;
        }
        case FILE_MBDN_IDX:
        {
            if ((service_table_bitmap & 0x0040) != 0x0040)
            {
                return KAL_TRUE;
            }            
            else
            {
                service = SERVICE_MAILBOX_DIAL_NUM;
            }
            break;
        }
        case FILE_MBI_IDX:
        {
            if ((service_table_bitmap & 0x0080) != 0x0080)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_MAILBOX_DIAL_NUM;
            }
            break;
        }
        case FILE_MWIS_IDX:
        {
            if ((service_table_bitmap & 0x0100) != 0x0100)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_MSG_WAIT_IND;
            }
            break;
        }
    #endif
    #ifdef __CPHS__
        case FILE_EXT1_IDX:
        {
            if ((service_table_bitmap & 0x0200) != 0x0200)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_EXT1;
            }
            break;
        }
        case FILE_MAILBOX_NUM_IDX:
        {
            if ((service_table_bitmap & 0x0400) != 0x0400)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_MAILBOX_NUM;
            }
            break;
        }
    #endif
    #ifdef __SMS_STORAGE_BY_MMI__
        case FILE_SMS_IDX:
        {
            if ((service_table_bitmap & 0x0800) == 0x0800)
            {
                return KAL_TRUE;
            }
            else
            {
                service = SERVICE_SMS;
            }
            break;
        }
    #endif
        default:
        {
            return KAL_TRUE;
        }
    }


#ifdef __GEMINI__
    if (sim_service_table_query(service, SMSAL_SIM_ID) != SERVICE_SUPPORT)
#else
    if (sim_service_table_query(service) != SERVICE_SUPPORT)
#endif

    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
#endif //  __SMSAL_UT__   
}

void smsal_skip_file(smsal_read_file_aux_info_struct *file_ptr, kal_uint8 index)
{
    file_ptr->file[index].is_used = KAL_FALSE;
    file_ptr->current_read_idx++;
    file_ptr->file_type_bitmap >>= 1;
}

void smsal_read_files(kal_uint8 id, smsal_read_file_aux_info_struct *file_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#endif
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 i;
    kal_uint16 para = 0;
    kal_uint8 info_type = SIM_FILE_SIZE;
    kal_uint16 len = 0;
    kal_uint8 result;
    kal_uint16 nvram_rec_amount = 1;
    smsal_read_file_type_enum read_type = READ_FROM_SIM;

    for (i = file_ptr->current_read_idx; i < SMSAL_MAX_FILE; i++)
    {
        if (file_ptr->file[i].is_used == KAL_TRUE)
        {
            if ((file_ptr->file_type_bitmap & 0x00000001) == 0)
            {
            #if defined(__CANCEL_LOCK_POWERON__)
                if( IS_FLAG_SET(SMSAL_ME_ONLY_INIT) == KAL_TRUE )
                {
                    // ignore SIM file because of sim lock
                    smsal_skip_file(file_ptr, i);
                    continue;   /* skip this file from SIM */
                }
            #endif
                /* 
                 * Files in SIM
                 */
                switch (file_ptr->file[i].file_id)
                {
               /*=========================================
                * transparent file with known file size
                *=========================================*/
                    case FILE_SMSS_IDX:
                        if (smsal_check_sim_service_table(FILE_SMSS_IDX) == KAL_FALSE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                        switch (file_ptr->file[i].read_type)
                        {
                                /* To check if SMSS is present in SIM. */
                            case GET_FILE_INFO_FROM_SIM:
                                /* Get file size */
                                read_type = GET_FILE_INFO_FROM_SIM;
                                info_type = SIM_FILE_SIZE;
                                break;

                            case READ_FROM_SIM:
                                /* get file content */
                                len = SMSAL_SMS_STATUS_LEN;
                                para = 0;
                                read_type = READ_FROM_SIM;

                        }
                        break;

                #ifdef __CPHS__
                    case FILE_EXT1_IDX:/* no break! Be sure to put cphs before rel4 to check */
                    #ifndef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                    #if defined(__REL4__)
                        /* *
                         * * check if SIM has handled the FILE_EXT6_IDX,
                         * * Only manage the 3GPP SIM mailbox number files and shall ignore
                         * * the CPHS mailbox ext1 file.
                         */
                        if((file_ptr->file[i].file_id == FILE_EXT1_IDX) &&
                           (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE))
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                        // no break
                    #endif

                        if (smsal_check_sim_service_table(FILE_MAILBOX_NUM_IDX) == KAL_FALSE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                    #else
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip this file */                        }
                    #endif
                    case FILE_MAILBOX_NUM_IDX: /* no break! Be sure to put cphs before rel4 to check */
                    #ifndef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                    #if defined(__REL4__)
                        /* *
                         * * check if SIM has handled the FILE_MBDN_IDX,
                         * * Only manage the 3GPP SIM mailbox number files and shall ignore
                         * * the CPHS mailbox number file.
                         */
                        if((file_ptr->file[i].file_id == FILE_MAILBOX_NUM_IDX) &&
                           (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE))
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                        // no break
                    #endif
                    #else
                    {
                        smsal_skip_file(file_ptr, i);
                        continue;   /* skip this file */
                    }
                    #endif
                #endif  //  __CPHS__

               /*==========================
                * linear fix with alpha id 
                *==========================*/
                    case FILE_SMSP_IDX:
                #ifdef __REL4__
                    case FILE_EXT6_IDX:
                    case FILE_MBDN_IDX:
                    case FILE_MBI_IDX:
                    case FILE_MWIS_IDX:
                #endif
                        if (smsal_check_sim_service_table(file_ptr->file[i].file_id) == KAL_FALSE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }

                #ifdef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                        if ((file_ptr->file[i].file_id == FILE_EXT6_IDX) ||
                            (file_ptr->file[i].file_id == FILE_MBDN_IDX))
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip this file */
                        }
                #endif

                        switch (file_ptr->file[i].read_type)
                        {
                                /* Get record number */
                            case GET_REC_NUM:
                                info_type = SIM_REC_NUM;
                                read_type = GET_FILE_INFO_FROM_SIM;
                                break;

                                /* Get record size */
                            case GET_REC_SIZE:
                                info_type = SIM_REC_SIZE;
                                read_type = GET_FILE_INFO_FROM_SIM;
                                break;

                    #ifndef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                        #if defined (__CPHS__) || defined (__REL4__)
                            case GET_EXT_REC:
                            {
                                para = file_ptr->ext_record_no;
                                len = SMSAL_EXT_LEN;

                                #if defined (__REL4__)
                                if (file_ptr->file[i].file_id == FILE_MBDN_IDX)
                                    smsal_read_from_sim(id, FILE_EXT6_IDX, len, para);
                                else
                                #endif
                                    smsal_read_from_sim(id, FILE_EXT1_IDX, len, para);
                                
                                return;
                            }
                            break;
                        #endif
                    #endif

                                /* Get record */
                            case GET_REC:
                                read_type = READ_FROM_SIM;
                        #if defined (__CPHS__) || defined (__REL4__)
                                if (file_ptr->file[i].file_id == FILE_SMSP_IDX)
                                {
                                    len = smsal_para_ptr->profile.alpha_size + SMSAL_SMSP_LEN;
                                }
                                #if defined (__REL4__)
                                #ifndef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                                else if (file_ptr->file[i].file_id == FILE_MBDN_IDX)
                                {
                                    len =
                                    smsal_para_ptr->mailbox.alpha_size + SMSAL_MAILBOX_NUM_LEN;
                                }
                                #endif
                                else if (file_ptr->file[i].file_id == FILE_MBI_IDX)
                                {
                                    len = smsal_para_ptr_g->mailbox.mbi_rec_length;
                                }
                                else if (file_ptr->file[i].file_id == FILE_MWIS_IDX)
                                {
                                    len = smsal_para_ptr_g->mailbox.mwis_rec_length;
                                }
                                #endif
                                #ifndef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
                                #if defined (__CPHS__)
                                else if (file_ptr->file[i].file_id == FILE_MAILBOX_NUM_IDX)
                                {
                                    len =
                                    smsal_para_ptr->mailbox.alpha_size + SMSAL_MAILBOX_NUM_LEN;
                                }
                                #endif
                                #endif
                        #else
                                len = smsal_para_ptr->profile.alpha_size + SMSAL_SMSP_LEN;
                        #endif
                                para = file_ptr->record_no;
                                break;
                        }
                        break;

                    case FILE_SMS_IDX:
                    #ifdef __SMS_STORAGE_BY_MMI__
                        smsal_skip_file(file_ptr, i);
                        continue;   /* skip the this file from SIM */
                    #else
                        if (smsal_check_sim_service_table(FILE_SMS_IDX) == KAL_FALSE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                        
                        switch (file_ptr->file[i].read_type)
                        {
                                /* Get SMS record number */
                            case GET_REC_NUM:
                                info_type = SIM_REC_NUM;
                                read_type = GET_FILE_INFO_FROM_SIM;

                                /* notify MMI to start message reading procedure. */
                                if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)      /* start from SIM */
                                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_BEGIN_IND,
                                                          NULL,
                                                          NULL);
                                else
                                    SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);

                                (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_SMS_FILE;

                                break;

                                /* Get SMS */
                            case GET_REC:
                                read_type = READ_FROM_SIM;
                                len = SMSAL_SMS_LEN;
                                para = file_ptr->record_no;

                                break;
                        }
                    #endif //__SMS_STORAGE_BY_MMI__
                        break;

               /*=========================================
                * transparent file with unknown file size
                *=========================================*/
            #if defined(__CPHS__) || defined (__CB__)
                #ifdef __CPHS__
                    case FILE_VM_WAIT_IDX:
                        #if defined(__REL4__)
                        /* *
                         * * check if SIM has handled the FILE_MBDN_IDX,
                         * * Only manage the 3GPP message waiting indication status file and
                         * * shall ignore the CPHS message waiting indication status file.
                         */
                         
                        if (IS_FLAG_SET(REL4_MWIS_FLAG) == KAL_TRUE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }
                        // no break
                        #endif
                #endif

                #ifdef __CB__
                    case FILE_U_LI_IDX:
                    case FILE_ELP_IDX:
                    case FILE_LP_IDX:
                    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
                    case FILE_CBMI_IDX:
                    case FILE_CBMIR_IDX:
                    #endif  //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__
                    case FILE_CBMID_IDX:

                        if (smsal_check_sim_service_table(file_ptr->file[i].file_id) == KAL_FALSE)
                        {
                            if(file_ptr->file[i].file_id == FILE_CBMIR_IDX)
                            {
                                smsal_cb_data_ptr->is_cbmir_in_nvram = KAL_TRUE;
                            }
                            
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from SIM */
                        }          
                #endif
                        switch (file_ptr->file[i].read_type)
                        {
                            case GET_FILE_INFO_FROM_SIM:
                                /* Get file size */
                                read_type = GET_FILE_INFO_FROM_SIM;
                                info_type = SIM_FILE_SIZE;
                                break;

                            case READ_FROM_SIM:
                                /* get file content */
                                read_type = READ_FROM_SIM;
                                para = 0;       /* transparent file */

                                switch (file_ptr->file[i].file_id)
                                {
                                #ifdef __CPHS__
                                    case FILE_VM_WAIT_IDX:
                                        len = smsal_para_ptr->mailbox.mwf_file_size;
                                        break;
                                #endif

                                #ifdef __CB__
                                    case FILE_U_LI_IDX:
                                    case FILE_ELP_IDX:
                                        /* each language in ELP uses two bytes */
                                        len = smsal_cb_data_ptr->dcs_num_sim * 2;
                                        break;
                                    case FILE_LP_IDX:
                                        len = smsal_cb_data_ptr->dcs_num_sim;
                                        break;
                                    #ifndef __CB_CHANNEL_ONLY_STORED_IN_NVRAM__
                                    case FILE_CBMI_IDX:
                                        /* each CBMI uses two bytes */
                                        len = (smsal_cb_data_ptr->cbmi_num - SMSAL_CBMI_ME_ENTRY) * 2;
                                        break;
                                    case FILE_CBMIR_IDX:
                                        /* each CBMIR uses 4 bytes */
                                        len = smsal_cb_data_ptr->cbmir_num * 4;
                                        break;
                                    #endif  //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__
                                    case FILE_CBMID_IDX:
                                        /* each CBMID uses two bytes */
                                        len = smsal_cb_data_ptr->cbmid_num * 2;
                                        break;
                                #endif /* __CB__ */
                                }
                        }
                        break;
            #endif /* defined(__CPHS__) || defined (__CB__) */

                }                       /* switch */
            }
            else
            {
                /* 
                 * Files in NVRAM
                 */
                switch (file_ptr->file[i].file_id)
                {
                    case NVRAM_EF_SMSAL_COMMON_PARAM_LID:      /* the same for THREE */
                #ifdef __CB__
                    case NVRAM_EF_CB_CH_INFO_LID:
                    case NVRAM_EF_CB_DEFAULT_CH_LID:
                #endif

                        read_type = READ_FROM_NVRAM;
                        para = 1;
                        break;

                    case NVRAM_EF_SMSAL_MWIS_LID:

                #ifdef __CPHS__
                        /*
                         * in our design, if SIM has this EF (Msg Wait Flag),
                         * * then, we ignore the file MWIS in NVRAM 
                         */
                        /* if no sim cphs file, R4 also need to read NVM to load line2 setting */
                        if (IS_FLAG_SET(CPHS_MWF_FLAG) == KAL_TRUE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from NVRAM */
                        }
                #endif
                        read_type = READ_FROM_NVRAM;
                        para = file_ptr->record_no;
                        break;

                    case NVRAM_EF_SMSAL_MAILBOX_ADDR_LID:

                    #ifdef __CPHS__
                        /*
                         * in our design, if SIM has this EF (Mailbox Number),
                         * * then, we ignore the file MAILBOX_ADDR in NVRAM 
                         */
                        /* Remove: if no sim cphs file, R4 also need to read NVM to load line2 setting */
                        /* no menu to display line2 in current design */
                        #ifdef __REL4__
                        if ((IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE) ||
                            (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE))
                        #else
                        if (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE)
                        #endif
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from NVRAM */
                        }
                    #endif
                        read_type = READ_FROM_NVRAM;
                        para = file_ptr->record_no;
                        break;

                    #ifdef __SMS_ME_STORAGE__
                    case NVRAM_EF_SMSAL_SMS_LID:
                    {
                        kal_uint16 rec_num = 0;
                        kal_uint16 size = 0;

                        if (file_ptr->file[i].read_type == GET_REC_NUM)
                        {
                            /* notify MMI to start message reading procedure. */
                            if (smsal_cntx_ptr->sms_prefer_order != SMSAL_SM_FIRST)  /* start from ME */
                                smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_BEGIN_IND,
                                                      NULL,
                                                      NULL);
                            else
                                SET_FLAGS(SMSAL_FINISH_SIM_LOAD_FLAG);

                            (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_SMS_FILE;

                            /* Get the record numbers of EFsmsal_sms */
                            #if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
                                result = smsal_ut_nvram_get_info(NVRAM_EF_SMSAL_SMS_LID, &rec_num, &size);
                            #else
                                result = nvram_get_info(NVRAM_EF_SMSAL_SMS_LID, &rec_num, &size);
                            #endif

                            #ifdef __GEMINI__
                            if ((rec_num > 0) && ((rec_num%SMSAL_MAX_SIM_NUM) != 0))
                                SMSAL_ASSERT(0);
                            rec_num = rec_num/SMSAL_MAX_SIM_NUM;
                            #endif

                            kal_brief_trace(TRACE_INFO, GET_NVRAM_INFO, result, rec_num, size);

                            if (result != NVRAM_ERRNO_SUCCESS || size != SMSAL_SMS_ME_LEN)
                            {
                                kal_brief_trace(TRACE_WARNING, GET_NVRAM_INFO, result, rec_num, size);

                                smsal_skip_file(file_ptr, i);

                                if (smsal_cntx_ptr->sms_prefer_order == (kal_uint8)SMSAL_SM_FIRST)
                                {
                                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND,
                                                          NULL,
                                                          NULL);
                                    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                                    SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);
                                }
                                continue;       /* skip the this file from NVRAM */
                            }

                            /* file_ptr->record_no = 1; */
                            file_ptr->number = rec_num;

                            /* 2005.6.10  */
                            /* If test SIM is present, force ME entry number to 10 for FTA test case. */
                            if((KAL_TRUE == is_test_sim(SMSAL_SIM_ID)) &&
                                (rec_num > (kal_uint16)10))
                            {
                                file_ptr->number = 10;
                            }

                            /*
                             * Check whether total numbers exceeds 
                             * * the maximum supported numbers 
                             */
                            if ((file_ptr->number + smsal_cntx_ptr->storage_num_info.sim_msg_num) > SMSAL_MAX_MSG_NUM)
                            {
                                file_ptr->number =
                                SMSAL_MAX_MSG_NUM - smsal_cntx_ptr->storage_num_info.sim_msg_num;
                            }

                            if (file_ptr->number > 0)
                            {
                                file_ptr->file[i].read_type = READ_FROM_NVRAM;

                                if (file_ptr->number < SMSAL_MULTI_REC_READ_NUM)
                                    file_ptr->nvram_rec_amount = file_ptr->number;
                                else
                                    file_ptr->nvram_rec_amount = SMSAL_MULTI_REC_READ_NUM;
                            }
                            else
                            {
                                smsal_skip_file(file_ptr, i);

                                if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)
                                {
                                    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND,
                                                          NULL,
                                                          NULL);
                                    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                                    SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);
                                }

                                continue;       /* skip the this file from NVRAM */
                            }
                        }               /* if read_type == GET_REC_NUM */

                        read_type = READ_FROM_NVRAM;
                        para = file_ptr->record_no;
                        nvram_rec_amount = file_ptr->nvram_rec_amount;

                        break;
                    }
                    #endif /* __SMS_ME_STORAGE__ */

                    case NVRAM_EF_SMSAL_SMSP_LID:
                    {
                        kal_uint16 rec_num = 0;
                        kal_uint16 size = 0;

                        /*
                         * in our design, if SIM has this EF (SMSP),
                         * * then, we ignore the file NVRAM_EF_SMSAL_SMSP_LID in NVRAM 
                         */
                        if (IS_FLAG_SET(SMSAL_SIM_SMSP_FLAG) == KAL_TRUE)
                        {
                            smsal_skip_file(file_ptr, i);
                            continue;   /* skip the this file from NVRAM */
                        }

                        if (file_ptr->file[i].read_type == GET_REC_NUM)
                        {
                            #if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
                                result = smsal_ut_nvram_get_info(NVRAM_EF_SMSAL_SMSP_LID, &rec_num, &size);
                            #else
                                result = nvram_get_info(NVRAM_EF_SMSAL_SMSP_LID, &rec_num, &size);
                            #endif

                            #ifdef __GEMINI__
                            if ((rec_num > 0) && ((rec_num%SMSAL_MAX_SIM_NUM) != 0))
                                SMSAL_ASSERT(0);
                            rec_num = rec_num/SMSAL_MAX_SIM_NUM;
                            #endif

                            file_ptr->number = rec_num;

                            /* SMSAL_SMSP_LEN is used by SIM */
                            if ((result != NVRAM_ERRNO_SUCCESS) ||
                                (size != NVRAM_EF_SMSAL_SMSP_SIZE))
                            {
                                kal_brief_trace(TRACE_WARNING, GET_NVRAM_INFO, result, rec_num, size);

                                smsal_skip_file(file_ptr, i);

                                continue;       /* skip the this file from NVRAM */
                            }

                            /*
                             * Check whether total numbers exceeds 
                             * * the maximum supported numbers
                             * * SMSAL_MAX_PROFILE_NUM is also used by SIM
                             */
                            if (rec_num > SMSAL_MAX_PROFILE_NUM)
                            {
                                smsal_para_ptr->profile.max_profile_num = SMSAL_MAX_PROFILE_NUM;
                                file_ptr->nvram_rec_amount = SMSAL_MAX_PROFILE_NUM;
                            }
                            else
                            {
                                smsal_para_ptr->profile.max_profile_num = (kal_uint8) rec_num;
                                file_ptr->nvram_rec_amount = file_ptr->number;
                            }

                            file_ptr->file[i].read_type = READ_FROM_NVRAM;

                        }               /* if read_type == GET_REC_NUM */

                        read_type = READ_FROM_NVRAM;
                        para = file_ptr->record_no;
                        nvram_rec_amount = file_ptr->nvram_rec_amount;

                        break;
                    }

                    default:
                        break;
                }                       /* switch (file_id) */
            }                           /* file type */

            switch (read_type)
            {
                case READ_FROM_SIM:
                    smsal_read_from_sim(id, file_ptr->file[i].file_id, len, para);
                    break;

                case GET_FILE_INFO_FROM_SIM:
                    smsal_read_fileinfo_from_sim(id, file_ptr->file[i].file_id, info_type);
                    break;

                case READ_FROM_NVRAM:
                    smsal_read_from_nvram(id,
                                          file_ptr->file[i].file_id,
                                          para,
                                          nvram_rec_amount);
                    break;

                default:
                    break;
            }

            break;
        }
    }                                   /* for */

    if (i >= SMSAL_MAX_FILE)
    {
        /* 
         * all files read 
         */
        if (file_ptr->finish_fn_ptr != NULL)
        {
            if (file_ptr->occur_error == KAL_TRUE)
                (*(file_ptr->finish_fn_ptr)) (id, KAL_FALSE);
            else
                (*(file_ptr->finish_fn_ptr)) (id, KAL_TRUE);
        }
    }

}                                       /* end of smsal_read_files */

void smsal_read_files_cnf(kal_bool          is_successful,
                          kal_uint8         id,
                          peer_buff_struct  *peer_buff_ptr,
                          local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 ret = 1;
    smsal_read_file_aux_info_struct *aux_info;

    aux_info = (smsal_read_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if (is_successful == KAL_TRUE)
    {
        if (aux_info->file[aux_info->current_read_idx].succ_fn_ptr != NULL)
        {
            ret = (*(aux_info->file[aux_info->current_read_idx].succ_fn_ptr))
                (id, aux_info, peer_buff_ptr, local_para_ptr);
        }
    }
    else
    {
        if (aux_info->file[aux_info->current_read_idx].fail_fn_ptr != NULL)
        {
            ret = (*(aux_info->file[aux_info->current_read_idx].fail_fn_ptr))
                (id, aux_info, peer_buff_ptr, local_para_ptr);
        }
    }

    if (ret == SMSAL_PAUSE_READ)
    {
        /* pause to read SMS in storage until receiving STARTUP_READ_NEXT_REQ. */
        return;
    }
    else if (ret == SMSAL_READ_NEXT_FILE)
    {
        aux_info->record_no = 1;        /* reset for reading next file */

        aux_info->current_read_idx += 1;
        aux_info->file_type_bitmap >>= 1;
    }

    smsal_read_files(id, aux_info);

}                                       /* end of smsal_read_files_cnf */


#ifdef __SAT__
void smsal_sat_file_change_check_pending_act(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 src_id = 0;
    msg_type msg_id = MSG_ID_INVALID_TYPE;

    if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE)
    {
        switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
        {
#ifndef __SMS_STORAGE_BY_MMI__
            case SMSAL_WRITE:
            {
                smsal_write_aux_info_struct *aux_info;

                aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
                /* Mark the state of MB entry to original values */
                (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

            #ifdef __SMS_ME_STORAGE__
                DECR_USED_MSG_NUM(aux_info->storage_type);
            #else
                DECR_USED_MSG_NUM(SMSAL_SM);
            #endif
                smsal_write_cnf(L4C_ERROR,
                                ((l4csmsal_write_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id,
                                SMS_SIM_REFRESHING, SMSAL_INVALID_INDEX, 0);
            }
                break;

            case SMSAL_READ:
                smsal_read_error(((l4csmsal_read_req_struct *)
                                  (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id,
                                 SMS_SIM_REFRESHING);
                break;

            case SMSAL_DELETE:
            {
                l4csmsal_delete_req_struct *del_req;
                l4csmsal_delete_cnf_struct *del_cnf;
                kal_uint16 index;

                del_req = (l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
                del_cnf = (l4csmsal_delete_cnf_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

                switch ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code)
                {
                    case SMSAL_DELETE_INDEX:
                        (&(smsal_cntx_ptr->message_box[del_req->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
                        break;

                    case SMSAL_DELETE_FLAG:
                        for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
                        {
                            if (((&(smsal_cntx_ptr->message_box[index]))->state & SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
                                == SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
                            {
                                (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_DEL_FLAG_PENDING);
                                if ((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_FREE)
                                    smsal_reset_msg_box_entry(index, SMSAL_MB_FREE);
                            }
                        }
                        break;
                    default:
                        break;
                }

                smsal_del_cnf(L4C_ERROR, del_req, del_cnf, SMS_SIM_REFRESHING);
                (&(smsal_cntx_ptr->pending_act[id]))->aux_info = NULL;
            }
                break;
#endif //__SMS_STORAGE_BY_MMI__

            case SMSAL_SAVE_PARAM:

                switch ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code)
                {
                    case SMSAL_SAVE_COMMON_PARAM:
                    case SMSAL_SAVE_MAILBOX_ADDR:
                    #ifdef __REL4__
                    case SMSAL_SAVE_MBI_PARAM:
                    #endif

                        msg_id = MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF;
                        src_id = ((l4csmsal_set_common_para_req_struct *)
                                 (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id;

                        break;
                    case SMSAL_SAVE_PROFILE_PARAM:

                        msg_id = MSG_ID_L4CSMSAL_SET_PROFILE_PARA_CNF;
                        src_id = ((l4csmsal_set_profile_para_req_struct *)
                                  (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id;
                        break;
                    default:
                        break;
                }

                smsal_set_param_cnf(L4C_ERROR, src_id, msg_id, SMS_SIM_REFRESHING);
                break;

#ifndef __SMS_STORAGE_BY_MMI__
            case SMSAL_COPY:

                smsal_send_copy_cnf(L4C_ERROR, SMS_SIM_REFRESHING,
                                    (l4csmsal_copy_msg_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr,
                                    SMSAL_INVALID_INDEX);
                break;
#endif //__SMS_STORAGE_BY_MMI__

                /* clear action only */
            case SMSAL_DELIVER:
            case SMSAL_STATUS_REPORT:
            case SMSAL_SEND_MEM_AVIL:
                break;

            default:
                /* No change, keep going */
                return;
        }                               /* switch */

        smsal_free_pending_act(id);
    }                                   /* if (in_use) */

}

void smsal_send_file_change_resp_to_sim(kal_uint8 id, kal_bool result)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sat_file_change_res_struct *res_ptr;
    sat_file_change_ind_struct *ind_ptr;

    ind_ptr = (sat_file_change_ind_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    res_ptr = (sat_file_change_res_struct *)
               construct_local_para(sizeof(sat_file_change_res_struct), TD_CTRL);

    res_ptr->src_id = ind_ptr->src_id;
    res_ptr->is_successful = result;

    smsal_send_msg_to_sim(MSG_ID_SAT_FILE_CHANGE_RES, (local_para_struct *) res_ptr, NULL);
    return;
}

void smsal_sat_file_change_res(kal_uint8 id, kal_bool result)
{
	smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
	smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
        smsal_read_file_aux_info_struct *aux_info;

	kal_bool is_sim_card_change;
	kal_uint16 in_sim_no, in_me_no, out_sim_no, out_me_no;
	kal_uint16 unread_msg_num = 0; 
	kal_uint16 total_sim_num, total_me_num;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_FILE_CHANGE_RES, result);

    /* for msg box information */
    smsal_get_msgbox_num(NULL, &is_sim_card_change, 
                            &in_sim_no, &in_me_no, &out_sim_no, &out_me_no,
                            &unread_msg_num, &total_sim_num, &total_me_num);
    /* target trace */
    kal_brief_trace(TRACE_INFO, INFO_MSGBOX_NUM_INFO,\
              is_sim_card_change,\
              in_sim_no,\
              in_me_no,\
              out_sim_no,\
              out_me_no,\
              unread_msg_num,\
              total_sim_num,\
              total_me_num);

    aux_info = (smsal_read_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    SET_FLAGS(SMSAL_RDY_FLAG);
    
    smsal_init_vm_ind();

    /* check memory full ind */
    if (smsal_check_mem_full_status() == KAL_FALSE)
    {
        if ((IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
            (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE))
        {
            /* Send Memory Available Notification */
            smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
            smsal_send_mem_avl_notif_req();
        }
    }

#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
    if (smsal_para_ptr->common.bearer_service != SMS_PREFER_GSM)
    {
        smsal_prefer_sms_bearer_change();
    }
#endif

#ifndef __SMS_STORAGE_BY_MMI__    
    /*
     * Handle the pending actions during SMSAL initialization,
     * * eg, write request 
     */
    smsal_init_pending_act_hdlr();
#endif

    if (aux_info->send_init_cnf == KAL_TRUE)
    {
        smsal_init_cnf(L4C_OK);         /* Send INIT_CNF to L4C */
    }
    else
    {
        /* notify MMI to sync. context in SMSAL. */
        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SYNC_MSG_IND, NULL, NULL);
    }

#ifdef __CB__
    /*CBMID, CBMI, CBMIR may be changed*/
    smsal_cb_update_rmc_cb();
#endif

    smsal_send_file_change_resp_to_sim(id, result);

    CLR_FLAGS(SIM_REFRESH_FLAG);

    smsal_free_pending_act(id);

}                                       /* end of smsal_sat_file_change_res */

void smsal_sat_file_change_hdlr(ilm_struct *ilm_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool is_ok = KAL_TRUE, send_init_cnf = KAL_FALSE;
    kal_uint8 i;
    kal_uint8 id = SMSAL_MAX_PENDING_ACT;
    sat_file_change_ind_struct *ind_ptr;
    sat_file_change_res_struct *res_ptr;
    smsal_read_file_aux_info_struct *file_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SAT_FILE_CHANGE_HDLR);

    ind_ptr = (sat_file_change_ind_struct *) ilm_ptr->local_para_ptr;

    if (IS_FLAG_SET(SMSAL_NORMAL_INIT) == KAL_FALSE)
    {
        kal_brief_trace(TRACE_WARNING, SMSAL_REJECT_MSG_BEFORE_INIT);
        res_ptr = (sat_file_change_res_struct *)
                   construct_local_para(sizeof(sat_file_change_res_struct), TD_CTRL);

        res_ptr->src_id = ind_ptr->src_id;
        res_ptr->is_successful = KAL_FALSE;

        smsal_send_msg_to_sim(MSG_ID_SAT_FILE_CHANGE_RES, (local_para_struct *) res_ptr, NULL);
        return;
    }

    if ((is_ok = smsal_get_pending_act_id(&id)) == KAL_TRUE)
    {
        /* If previous SIM refresh still doesen't finish, find out the pending action. */
        /* After starting new refresh, clear old pending.                              */
        for (i = 0; i < SMSAL_MAX_PENDING_ACT; i++)
        {
            if ((&(smsal_cntx_ptr->pending_act[i]))->in_use == KAL_TRUE && i != id)
            {
                if ((&(smsal_cntx_ptr->pending_act[i]))->act_code == SMSAL_SIM_REFRESH)
                {
                    smsal_read_file_aux_info_struct *aux_info;
                    aux_info = (smsal_read_file_aux_info_struct *)
                                (&(smsal_cntx_ptr->pending_act[i]))->aux_info;
                    if ((aux_info != NULL) &&
                        (aux_info->send_init_cnf == KAL_TRUE))
                    {
                        /* the first init is interrupted by refresh */
                        ind_ptr->is_full_changed = KAL_TRUE;
                        send_init_cnf = KAL_TRUE;
                    }
                    
                    smsal_free_pending_act(i);
                    CLR_FLAGS(SIM_REFRESH_FLAG);
                }
                else if ((&(smsal_cntx_ptr->pending_act[i]))->act_code == SMSAL_INIT_PROC)
                {
                    /* Because SIM refresh interrupts SMSAL initilization, SMSAL shall re-read */
                    /* all files to finish initilization.                                      */
                    ind_ptr->is_full_changed = KAL_TRUE;
                    send_init_cnf = KAL_TRUE;
                    smsal_free_pending_act(i);
                    CLR_FLAGS(SIM_REFRESH_FLAG);
                }
                else
                    smsal_sat_file_change_check_pending_act(i);
            }
        }

        if (ind_ptr->is_full_changed == KAL_TRUE)
        {
            /*
             * For simplicity, SMSAL reads all files related to SMSAL module
             * * (include files in NVRAM), just like the process 
             * * during initialization 
             */

            if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_TRUE)
            {
                /*
                 * SMSAL module was already ready, so we shall reset first,
                 * * then read SIM/NVRAM again. This happen when user changes
                 * * the SIM card or after unblock PIN code. 
                 */
                #ifdef __GEMINI__
                    smsal_reset_by_cur_mod(SMSAL_SIM_ID);
                #else
                #ifdef __SMSAL_UT__
                    smsal_reset_for_ut_reset_only();
                #else
                    smsal_reset();
                #endif
                #endif
                CLR_FLAGS(SMSAL_RDY_FLAG);
            }

            is_ok = smsal_start_handler(smsal_sat_file_change_res, id, SMSAL_SIM_REFRESH,
                                        send_init_cnf, ilm_ptr->local_para_ptr);
        }
        else
        {
            kal_bool is_sms_storage_file = KAL_FALSE;

            CLR_FLAGS(SMSAL_RDY_FLAG);

            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SIM_REFRESH;
            (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = ilm_ptr->local_para_ptr;
            hold_local_para(ilm_ptr->local_para_ptr);

            file_ptr = (smsal_read_file_aux_info_struct *)
                        get_ctrl_buffer(sizeof(smsal_read_file_aux_info_struct));

            (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)file_ptr;

            smsal_init_file_info(file_ptr);

            file_ptr->finish_fn_ptr = smsal_sat_file_change_res;
            file_ptr->file_type_bitmap = 0;     /* all files belongs to SIM */
            file_ptr->current_read_idx = 0;
            file_ptr->msg_box_seq_num = SMSLA_MAX_START_UP_MSG_NUM;
            file_ptr->send_init_cnf = send_init_cnf;

            // [MAUI_01311798] reread EFcbmid file when SIM file change
            if( ind_ptr->refresh_type == TYPE_SIM_INIT_AND_FILE_CHANGE ||
                ind_ptr->refresh_type == TYPE_SIM_INIT )
            {
                smsal_assign_file_list(file_ptr, FILE_CBMID_IDX);
            }

            for (i = 0; i < ind_ptr->num_of_file; i++)
            {
                if (ind_ptr->file_list[i] == FILE_SMS_IDX)
                {
                    is_sms_storage_file = KAL_TRUE;

                    if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)
                    {
                        smsal_assign_file_list(file_ptr, ind_ptr->file_list[i]);
                    }
                    else
                    {
                        /* if prefer nvram */
                        file_ptr->file_type_bitmap |= (1 << file_ptr->current_read_idx);
                        smsal_assign_file_list(file_ptr, NVRAM_EF_SMSAL_SMS_LID);
                    }
                }
                else
                {
                    smsal_assign_file_list(file_ptr, ind_ptr->file_list[i]);
                }
            }

            /* read FILE_SMS_IDX in SIM again.                 */
            /* it needs to update NVRAM_EF_SMSAL_SMS_LID, too. */
            if (is_sms_storage_file == KAL_TRUE)
            {
                if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)
                {
                    file_ptr->file_type_bitmap |= (1 << file_ptr->current_read_idx);
                    smsal_assign_file_list(file_ptr, NVRAM_EF_SMSAL_SMS_LID);
                }
                else
                {
                    smsal_assign_file_list(file_ptr, FILE_SMS_IDX);
                }
                
                /* init message box information. */
                smsal_storage_num_init();
#ifndef __SMS_STORAGE_BY_MMI__
                smsal_init_msg_box();
#endif
            }

            file_ptr->current_read_idx = 0;     /* read 1st file */

            smsal_read_files(id, file_ptr);

        }                               /* if (is_full_changed) */
    }

    if (is_ok == KAL_FALSE)
    {
        res_ptr = (sat_file_change_res_struct *)
                   construct_local_para(sizeof(sat_file_change_res_struct), TD_CTRL);

        res_ptr->src_id = ind_ptr->src_id;
        res_ptr->is_successful = KAL_FALSE;

        smsal_send_msg_to_sim(MSG_ID_SAT_FILE_CHANGE_RES, (local_para_struct *) res_ptr, NULL);

        if (id != SMSAL_MAX_PENDING_ACT)
            smsal_free_pending_act(id);
    }
    else
    {
        SET_FLAGS(SIM_REFRESH_FLAG);
    }

}                                       /* end of smsal_sat_file_change_hdlr */
#endif /* __SAT__ */


#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_reset_short_msg
* DESCRIPTION
*   This function resets a record in EFsms.
*
* PARAMETERS
*  a  IN       sms_id, sms access id
*  b  IN       storage_type
*  c  IN       record_no
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_reset_short_msg(kal_uint8          sms_id,
                           smsal_storage_enum storage_type,
                           kal_uint16         record_no)
{
    kal_uint8 data[SMSAL_SMS_LEN];
    kal_uint16 pdu_len;
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_RESET_SHORT_MSG, storage_type, record_no);

    kal_mem_set(data, 0xff, SMSAL_SMS_LEN);     /* fill 0xff */

    data[0] = SMSAL_UNUSED_MSG;         /* mark to 'unused' */

#if defined (__SMS_ME_STORAGE__)
    if (storage_type == SMSAL_SM)
    {
        smsal_write_to_sim(sms_id, FILE_SMS_IDX, data, SMSAL_SMS_LEN, record_no);
    }
    else
    {
        peer_ptr = (peer_buff_struct *) construct_peer_buff(SMSAL_SMS_ME_LEN, 0, 0, TD_CTRL);

        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

        kal_mem_cpy(pdu_ptr, data, SMSAL_SMS_LEN);

        /* reset the padding SCT */
        kal_mem_set(pdu_ptr + SMSAL_SMS_LEN, 0xff, 8);

        smsal_write_to_nvram(sms_id, NVRAM_EF_SMSAL_SMS_LID, record_no, peer_ptr);
    }
#else
    smsal_write_to_sim(sms_id, FILE_SMS_IDX, data, SMSAL_SMS_LEN, record_no);
#endif

}                                       /* end of smsal_reset_sim_msg */


/*****************************************************************************
* FUNCTION
*  smsal_read_short_msg
* DESCRIPTION
*   This function is a wrapped frunction to read a record in EFsms
*   from SIM or NVRAM.
*
* PARAMETERS
*  a  IN       sms_id, sms access id
*  b  IN       record_no
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_read_short_msg(kal_uint8            sim_access_id,
                          smsal_storage_enum   storage_type,
                          kal_uint16           record_no)
{
    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_SHORT_MSG, storage_type, record_no);

#if defined (__SMS_ME_STORAGE__)
    if (storage_type == SMSAL_SM)
    {
        smsal_read_from_sim(sim_access_id, FILE_SMS_IDX, SMSAL_SMS_LEN, record_no);
    }
    else
    {
        smsal_read_from_nvram(sim_access_id, NVRAM_EF_SMSAL_SMS_LID, record_no, 1);
    }
#else
    smsal_read_from_sim(sim_access_id, FILE_SMS_IDX, SMSAL_SMS_LEN, record_no);
#endif

}                                       /* end of smsal_read_short_msg */


/*****************************************************************************
* FUNCTION
*  smsal_write_short_msg
* DESCRIPTION
*   This function is a wrapped frunction to write a record in EFsms
*   from SIM or NVRAM.
*
* PARAMETERS
*  a  IN       sms access id
*  b  IN       storage_type
*  c  IN       record_no
*  d  IN       data
*  e  IN       length
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_write_short_msg(kal_uint8           sms_access_id,
                           smsal_storage_enum  storage_type,
                           kal_uint16          record_no,
                           kal_uint8           *data,
                           kal_uint8           *scts_ptr,
                           kal_uint8           length
                           )
{
#if defined (__SMS_ME_STORAGE__)
    peer_buff_struct *peer_ptr;
    kal_uint16 pdu_len;
#endif

    kal_uint8 *pdu_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_WRITE_SHORT_MSG, storage_type, record_no);

#if defined (__SMS_ME_STORAGE__)

    /* 
     * The length shall equals to record size, ie, 176 
     */
    if (storage_type == SMSAL_SM)
    {
        smsal_write_to_sim(sms_access_id, 
                           FILE_SMS_IDX,
                           data,
                           (kal_uint16)SMSAL_SMS_LEN,
                           record_no);

    }
    else
    {

        peer_ptr = (peer_buff_struct *) construct_peer_buff(SMSAL_SMS_ME_LEN, 0, 0, TD_CTRL);

        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

        kal_mem_cpy(pdu_ptr, data, length);

        kal_mem_set(pdu_ptr + SMSAL_SMS_LEN, 0xff, 8);

        if (scts_ptr != NULL)
            kal_mem_cpy(pdu_ptr + SMSAL_SMS_LEN, scts_ptr, 7);

        smsal_write_to_nvram(sms_access_id, NVRAM_EF_SMSAL_SMS_LID, record_no, peer_ptr);

    }
#else
    smsal_write_to_sim(sms_access_id,
                       FILE_SMS_IDX,
                       data,
                       (kal_uint16) SMSAL_SMS_LEN,
                       record_no);
#endif

}                                       /* end of smsal_write_short_msg */
#endif //__SMS_STORAGE_BY_MMI__


/*****************************************************************************
 * 
 * Following functions are related to SIM
 *
 ****************************************************************************/

/*****************************************************************************
* FUNCTION
*  smsal_sim_entry_func
* DESCRIPTION
*   This function is the entry function for messages come form SIM.
*
* PARAMETERS
*  a  IN       ilm_ptr
* RETURNS
*  the description of return value, if any.
* GLOBALS AFFECTED
*   external_global
*****************************************************************************/
void smsal_sim_entry_func(ilm_struct *ilm_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id = SMSAL_MAX_PENDING_ACT;
    kal_uint16 result = SIM_CMD_SUCCESS;    
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint16 file_idx = UICC_TOTAL_FILES;
#ifdef __SAT__
#ifdef __CB__
#ifdef __REL6__
    sat_cb_dl_cnf_struct *cbd_ptr;
#endif
#endif
#endif

    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_SIM_READ_CNF:
        {
            sim_read_cnf_struct *read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;

            id = read_cnf->access_id;
            result = read_cnf->result;
            file_idx = read_cnf->file_idx;

            /* check result length */
            if (read_cnf->file_idx == FILE_SMS_IDX)
            {
                SMSAL_ASSERT(read_cnf->length == SMSAL_SMS_LEN);
            }
            break;
        }

        case MSG_ID_SIM_WRITE_CNF:
        {
            sim_write_cnf_struct *write_cnf = (sim_write_cnf_struct *) ilm_ptr->local_para_ptr;

            id = write_cnf->access_id;
            result = write_cnf->result;

            break;
        }

        case MSG_ID_SIM_FILE_INFO_CNF:
        {
            id = ((sim_file_info_cnf_struct *) ilm_ptr->local_para_ptr)->access_id;
            result = ((sim_file_info_cnf_struct *) ilm_ptr->local_para_ptr)->result;
            file_idx = ((sim_file_info_cnf_struct *) ilm_ptr->local_para_ptr)->file_idx;

            break;
        }

#if defined (__SAT__)

        case MSG_ID_SAT_SEND_SMS_CTRL_BY_SIM_CNF:      /* MO SMS Control */
            id = ((sat_send_sms_ctrl_by_sim_cnf_struct *) ilm_ptr->local_para_ptr)->access_id;
            result = SIM_CMD_SUCCESS;
            break;

        case MSG_ID_SAT_SMS_DL_CNF:    /* SIM Data download */
            id = ((sat_sms_dl_cnf_struct *) ilm_ptr->local_para_ptr)->access_id;
            result = SIM_CMD_SUCCESS;
            break;

    #ifdef __CB__
        #ifdef __REL6__
        case MSG_ID_SAT_CB_DL_CNF:
            cbd_ptr = (sat_cb_dl_cnf_struct *)ilm_ptr->local_para_ptr;
            if( cbd_ptr->is_successful != KAL_TRUE )
            {
                smsal_ratcm_cb_data_download_clean();
            }
            else
            {
                smsal_ratcm_cb_data_download(cbd_ptr->rat, cbd_ptr->current_page, cbd_ptr->total_page);
            }
            break;
        #endif // __REL6__
    #endif // __CB__

        case MSG_ID_SAT_FILE_CHANGE_IND:       /* Files Change */
            smsal_sat_file_change_hdlr(ilm_ptr);
            break;
#endif

        default:
            /* LOG ERROR */
            kal_brief_trace(TRACE_WARNING, SMSAL_WRONG_MSG_IN_SIM_ENTRY_FUNC, ilm_ptr->msg_id);

            return;
    }                                   /* switch (msg_id) */

    if (smsal_find_pending_act(id) == KAL_TRUE)
    {
        /* Power on procedure may be interrupted because of SIM hot swap feature,
           previous older CNF may come after new power on procedure, this will make state out of order,
           in order to prohibit this, we need to check file_idx, if not match, we ignore this CNF */
        switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
        {
            case SMSAL_INIT_PROC:
            case SMSAL_SIM_REFRESH:
            case SMSAL_FILES_REFRESH:
            {
                if (((ilm_ptr->msg_id) == MSG_ID_SIM_FILE_INFO_CNF) ||
                    (((ilm_ptr->msg_id) == MSG_ID_SIM_READ_CNF) && 
                     (file_idx != FILE_EXT6_IDX) &&
                     (file_idx != FILE_EXT1_IDX))) //EXT file which aux_info file_id is MAILBOX NUM LID 
                {
                    aux_info = (smsal_read_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

                    if (aux_info->file[aux_info->current_read_idx].file_id != file_idx)
                    {
                        kal_brief_trace(TRACE_WARNING, SMSAL_WRONG_MSG_IN_SIM_ENTRY_FUNC, ilm_ptr->msg_id);
                    
                        return;
                    }
                }
            }
        }
        
        if (result == SIM_CMD_SUCCESS)
        {
            smsal_common_storage_cnf(id,
                                     (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code,
                                     ilm_ptr,
                                     KAL_TRUE);     /* from SIM */
        }
        else
        {
            smsal_common_storage_rej(id,
                                     (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code,
                                     ilm_ptr,
                                     KAL_TRUE,    /* from SIM */
                                     result);     /* pass cause to MMI */
        }
    }                                   /* if (smsal_find_pending_act) */

}                                       /* end of smsal_sim_entry_func */


/*****************************************************************************
* FUNCTION
*  smsal_clrexdflag
* DESCRIPTION
*   This function unsets the memory exceeded flag in SIM.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_clrexdflag(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 data = SMSAL_MEM_AVAILABLE;

    CLR_FLAGS(MEM_EXD_FLAG);

    smsal_cntx_ptr->smma.pending_smma = KAL_FALSE;

    smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,   /* ignore the sim cnf */
                       FILE_SMSS_IDX,
                       &data,
                       1, /* one byte */
                       SMSAL_SMSS_MEM_EXD_FLAG);  /* offset */
}


/*****************************************************************************
* FUNCTION
*  smsal_set_common_change_to_nvram
* DESCRIPTION
*   This function updates the common change in NVRAM.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_set_common_change_to_nvram(kal_uint8 access_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_nvm_common_param_struct *common;

    common = (smsal_nvm_common_param_struct *)
              get_ctrl_buffer(sizeof(smsal_nvm_common_param_struct));

    /* fill pending struct for COMMON PARAM */
    common->fo = smsal_para_ptr->common.fo;
    common->bearer_service = smsal_para_ptr->common.bearer_service;
    common->status_report = smsal_para_ptr->common.status_report;
    common->reply_path = smsal_para_ptr->common.reply_path;
    common->vp_format = smsal_para_ptr->common.vp_format;
    common->last_used_tp_mr = smsal_cntx_ptr->msg_ref;       /* save message reference */

    /* If MEM_EXD_FLAG set, memory capacity exceed */
    if (IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE)
    {
        common->mem_capacity_available = SMSAL_MEM_EXCEED;
    }
    else
    {
        common->mem_capacity_available = SMSAL_MEM_AVAILABLE;
    }

    common->sms_fdn_off = smsal_para_ptr->common.sms_fdn_off;

    #ifdef __REL4__
        common->selected_msp = smsal_para_ptr->common.selected_msp;
    #else
        common->selected_msp = 0;
    #endif

    common->prefer_mem1 = smsal_para_ptr->rmi.prefer_mem1;
    common->prefer_mem2 = smsal_para_ptr->rmi.prefer_mem2;
    common->prefer_mem3 = smsal_para_ptr->rmi.prefer_mem3;
    common->all_lang_on = smsal_cb_data_ptr->all_lang_on;
    common->cbch_req = smsal_cb_data_ptr->cbch_req;
    common->rmi_act_pfile_id = smsal_para_ptr->rmi.act_pfile_id;

    smsal_write_nvm_params(NVRAM_EF_SMSAL_COMMON_PARAM_LID, 1, 0, /* dummy */
                           (void *)common, access_id);

    free_ctrl_buffer(common);

}


void smsal_send_msg_to_sim(msg_type          msg_id,
                           local_para_struct *local_para_ptr,
                           peer_buff_struct  *peer_buff_ptr)
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {
        msg_send6(smsal_cur_mod, 
                  (module_type)(MOD_SIM + (smsal_cur_mod - MOD_SMSAL)), 
                  PS_SIM_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_SIM, 
                  PS_SIM_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif
}                                       /* end of smsal_send_msg_to_sim */


void smsal_read_from_sim(kal_uint8       access_id,
                         smsal_file_enum file_id,
                         kal_uint16      length,
                         kal_uint16      para)
{
    sim_read_req_struct *read_req;

    read_req = (sim_read_req_struct *)
               construct_local_para(sizeof(sim_read_req_struct), TD_CTRL);

    read_req->file_idx = file_id;
    read_req->para = para;
    read_req->length = length;
    read_req->access_id = access_id;

    smsal_send_msg_to_sim(MSG_ID_SIM_READ_REQ, (local_para_struct *) read_req, NULL);

}                                       /* end of smsal_read_from_sim */


void smsal_write_to_sim(kal_uint8        access_id,
                        smsal_file_enum  file_id,
                        kal_uint8        *data,
                        kal_uint16       length,
                        kal_uint16       para)
{
    sim_write_req_struct *write_req;

    write_req = (sim_write_req_struct *)
                 construct_local_para(sizeof(sim_write_req_struct), TD_CTRL);

    kal_mem_cpy(&write_req->data[5],    /* first five bits are used by SIM */
                data, length);

    write_req->file_idx = file_id;
    write_req->length = length;
    write_req->access_id = access_id;
    write_req->para = para;

    smsal_send_msg_to_sim(MSG_ID_SIM_WRITE_REQ, (local_para_struct *) write_req, NULL);

}                                       /* end of smsal_write_to_sim */


void smsal_read_fileinfo_from_sim(kal_uint8 access_id, smsal_file_enum file_id, kal_uint8 info_type)
{
    sim_file_info_req_struct *file_info_req;

    file_info_req = (sim_file_info_req_struct *)
                     construct_local_para(sizeof(sim_file_info_req_struct), TD_CTRL);

    file_info_req->file_idx = file_id;
    file_info_req->info_type = info_type;
    file_info_req->access_id = access_id;

    smsal_send_msg_to_sim(MSG_ID_SIM_FILE_INFO_REQ, (local_para_struct *) file_info_req, NULL);

}                                       /* end of smsal_read_fileinfo_from_sim */


/*****************************************************************************
 * 
 * Following functions are related to NVRAM
 *
 ****************************************************************************/

/*****************************************************************************
* FUNCTION
*  smsal_nvram_entry_func
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
void smsal_nvram_entry_func(ilm_struct * ilm_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint8 result;
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint16 file_idx = NVRAM_EF_LAST_LID_CORE;

    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_NVRAM_READ_CNF:
        {
            nvram_read_cnf_struct *read_cnf = (nvram_read_cnf_struct *) ilm_ptr->local_para_ptr;

            id = read_cnf->access_id;
            result = read_cnf->result;
            file_idx = read_cnf->file_idx;

            break;
        }

        case MSG_ID_NVRAM_WRITE_CNF:
        {
            nvram_write_cnf_struct *write_cnf = (nvram_write_cnf_struct *)
                                                 ilm_ptr->local_para_ptr;

            id = write_cnf->access_id;
            result = write_cnf->result;
            file_idx = write_cnf->file_idx;

            break;
        }

        case MSG_ID_NVRAM_RESET_CNF:
        {
            nvram_reset_cnf_struct *reset_cnf = (nvram_reset_cnf_struct *)
                                                 ilm_ptr->local_para_ptr;

            id = reset_cnf->access_id;
            result = reset_cnf->result;

            break;
        }

        default:
            /* LOG ERROR */
            kal_brief_trace(TRACE_WARNING, SMSAL_WRONG_MSG_IN_NVM_ENTRY_FUNC, ilm_ptr->msg_id);

            return;
    }                                   /* switch (msg_id) */

    if (smsal_find_pending_act(id) == KAL_TRUE)
    {
         /* Power on procedure may be interrupted because of SIM hot swap feature,
            previous older CNF may come after new power on procedure, this will make state out of order,
            in order to prohibit this, we need to check file_idx, if not match, we ignore this CNF */
         switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
         {
             case SMSAL_INIT_PROC:
             case SMSAL_SIM_REFRESH:
             case SMSAL_FILES_REFRESH:
             {
                 if (((ilm_ptr->msg_id) == MSG_ID_NVRAM_READ_CNF) ||
                     ((ilm_ptr->msg_id) == MSG_ID_NVRAM_WRITE_CNF))
                 {
                     aux_info = (smsal_read_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
        
                     if (aux_info->file[aux_info->current_read_idx].file_id != file_idx)
                     {
                         kal_brief_trace(TRACE_WARNING, SMSAL_WRONG_MSG_IN_NVM_ENTRY_FUNC, ilm_ptr->msg_id);
                     
                         return;
                     }
                 }
             }
         }

    
        /*
         * when the data is initialized by NVRAM, result code will be 
         * * set to NVRAM_IO_ERRNO_INIT 
         */
        if (result == NVRAM_IO_ERRNO_OK || result == NVRAM_IO_ERRNO_INIT)
        {
            smsal_common_storage_cnf(id,
                                     (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code,
                                     ilm_ptr,
                                     KAL_FALSE);    /* from nvram */
        }
        else
        {
            smsal_common_storage_rej(id,
                                     (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code,
                                     ilm_ptr,
                                     KAL_FALSE,   /* from nvram */
                                     result);
        }
    }

}                                       /* end of smsal_nvram_entry_func */

void smsal_send_msg_to_nvram(msg_type          msg_id,
                             local_para_struct *local_para_ptr,
                             peer_buff_struct  *peer_buff_ptr)
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {
        msg_send6(smsal_cur_mod, 
                  MOD_NVRAM, 
                  PS_NVRAM_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_NVRAM, 
                  PS_NVRAM_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif
}                                       /* end of smsal_send_msg_to_nvram */


/*****************************************************************************
* FUNCTION
*  smsal_read_from_nvram
* DESCRIPTION
*   This function reads an EF from NVRAM.
*
* PARAMETERS
*  a  IN       access_id, to embedded into read request   
*  b  IN       file_id
*  c  IN       para, indicate which record          
* RETURNS
*  KAL_TRUE: ok
*  KAL_FALSE: failure
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_read_from_nvram(kal_uint8        access_id,
                           smsal_file_enum  file_id,
                           kal_uint16       para,
                           kal_uint16       rec_amount)
{
    nvram_read_req_struct *read_req;
#ifdef __GEMINI__
    kal_uint16 rec_num;
    kal_uint16 size;
#endif

    read_req = (nvram_read_req_struct *)
                construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);

    read_req->file_idx = file_id;

#ifdef __GEMINI__
{
    #if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
        smsal_ut_nvram_get_info(file_id, &rec_num, &size);
    #else
        nvram_get_info(file_id, &rec_num, &size);
    #endif

    #ifdef __GEMINI_3G_SWITCH__
        read_req->para = (kal_uint16)((rec_num/SMSAL_MAX_SIM_NUM) *
                                      (l4c_gemini_get_actual_sim_id(smsal_cur_mod - MOD_SMSAL))) + 
                         para;
    #else
        read_req->para = (kal_uint16)((rec_num/SMSAL_MAX_SIM_NUM)*(smsal_cur_mod - MOD_SMSAL)) + para;
    #endif
}
#else
{
    read_req->para = para;
}
#endif

    read_req->access_id = access_id;
    read_req->rec_amount = rec_amount;

    smsal_send_msg_to_nvram(MSG_ID_NVRAM_READ_REQ, (local_para_struct *) read_req, NULL);

}                                       /* end of smsal_read_from_nvram */


/*****************************************************************************
* FUNCTION
*  smsal_write_to_nvram
* DESCRIPTION
*   This function writes an EF to NVRAM.
*
* PARAMETERS
*  a  IN       access_id, to embedded into write request 
*  b  IN       file_id
*  c  IN       para, indicate which record
*  d  IN       peer_buff_ptr, contain data             
* RETURNS
*  KAL_TRUE: ok
*  KAL_FALSE: failure
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_write_to_nvram(kal_uint8         access_id,
                          smsal_file_enum   file_id,
                          kal_uint16        para,
                          peer_buff_struct  *peer_buff_ptr)
{
    nvram_write_req_struct *write_req;
#ifdef __GEMINI__
    kal_uint16 rec_num;
    kal_uint16 size;
#endif

    write_req = (nvram_write_req_struct *)
                 construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);

    write_req->file_idx = file_id;

#ifdef __GEMINI__   
{
    #if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
        smsal_ut_nvram_get_info(file_id, &rec_num, &size);
    #else
        nvram_get_info(file_id, &rec_num, &size);
    #endif

    #ifdef __GEMINI_3G_SWITCH__
        write_req->para = (kal_uint16)((rec_num/SMSAL_MAX_SIM_NUM) *
                                       (l4c_gemini_get_actual_sim_id(smsal_cur_mod - MOD_SMSAL))) + 
                          para;
    #else
        write_req->para = (kal_uint16)((rec_num/SMSAL_MAX_SIM_NUM)*(smsal_cur_mod - MOD_SMSAL)) + para;
    #endif
}
#else
{
    write_req->para = para;
}
#endif

    write_req->access_id = access_id;

    smsal_send_msg_to_nvram(MSG_ID_NVRAM_WRITE_REQ, (local_para_struct *) write_req, peer_buff_ptr);

}                                       /* end of smsal_write_to_nvram */


/*****************************************************************************
* FUNCTION
*  smsal_reset_to_nvram
* DESCRIPTION
*   This function reset an EF to NVRAM.
*
* PARAMETERS
*  a  IN       access_id, to embedded into reset request 
*  b  IN       file_id            
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_reset_to_nvram(kal_uint8 access_id, smsal_file_enum file_id)
{
    nvram_reset_req_struct *reset_req;
    kal_uint16 rec_num;
    kal_uint16 size;

    reset_req = (nvram_reset_req_struct *)
                construct_local_para(sizeof(nvram_reset_req_struct), TD_CTRL);

    reset_req->LID = file_id;
    reset_req->reset_category = NVRAM_RESET_CERTAIN;
    /* [MAUI_02617360] assign app_id by NVRAM owner's request */
    reset_req->app_id= NVRAM_APP_RESERVED;
    
#if !defined(__MTK_TARGET__) && defined(__SMSAL_UT__)
    smsal_ut_nvram_get_info(file_id, &rec_num, &size);
#else
    nvram_get_info(file_id, &rec_num, &size);
#endif

#ifdef __GEMINI__
{
    #ifdef __GEMINI_3G_SWITCH__
        reset_req->rec_index = (kal_uint16)((rec_num/SMSAL_MAX_SIM_NUM) *
                                            (l4c_gemini_get_actual_sim_id(smsal_cur_mod - MOD_SMSAL))) + 
                               1;
        reset_req->rec_amount = rec_num/SMSAL_MAX_SIM_NUM;
    #else
        reset_req->rec_index = (kal_uint16)(((rec_num/SMSAL_MAX_SIM_NUM)*(smsal_cur_mod-MOD_SMSAL))+1);
        reset_req->rec_amount = rec_num/SMSAL_MAX_SIM_NUM;
    #endif
}
#else
{
    reset_req->rec_index = 1 ;
    reset_req->rec_amount = rec_num;
}
#endif

    reset_req->access_id = access_id;

    smsal_send_msg_to_nvram(MSG_ID_NVRAM_RESET_REQ, (local_para_struct *) reset_req, NULL);

}                                       /* end of smsal_reset_to_nvram */

void smsal_reset_files(kal_uint8 id, smsal_reset_file_aux_info_struct * aux_info)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if ((aux_info->bitmap & RESET_MWIS_LID) == RESET_MWIS_LID)
    {
        smsal_reset_to_nvram(id, NVRAM_EF_SMSAL_MWIS_LID);
    }
    else if ((aux_info->bitmap & RESET_MAILBOX_ADDR_LID) == RESET_MAILBOX_ADDR_LID)
    {
        smsal_reset_to_nvram(id, NVRAM_EF_SMSAL_MAILBOX_ADDR_LID);
    }
    else if ((aux_info->bitmap & RESET_SMSAL_SMSP_LID) == RESET_SMSAL_SMSP_LID)
    {
        smsal_reset_to_nvram(id, NVRAM_EF_SMSAL_SMSP_LID);
    }
    else
    {
        /*
         * all files are reset, sart to read files 
         */
        if (smsal_start_handler(smsal_startup_finish, SMSAL_MAX_PENDING_ACT, SMSAL_INIT_PROC,
                                KAL_TRUE, (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr) == KAL_FALSE)
        {
            smsal_init_cnf(KAL_FALSE);
        }
        smsal_free_pending_act(id);
    }

}                                       /* end of smsal_reset_files */

kal_bool smsal_reset_files_in_nvram(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    smsal_reset_file_aux_info_struct *aux_info;

    /*
     * Get a free Pending Act Struct to access SIM/NVM,
     * * this struct shall be free while we finish access all necessary data 
     */
    if (smsal_get_pending_act_id(&id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_RESET_FILE;

    aux_info = (smsal_reset_file_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_reset_file_aux_info_struct));

    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    hold_local_para(local_para_ptr);

    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

#ifdef __MAILBOX_ADDR_ONLY_STORED_IN_NVRAM__
    aux_info->bitmap = RESET_SMSAL_SMSP_LID;
#else
    aux_info->bitmap = RESET_MWIS_LID | RESET_MAILBOX_ADDR_LID | RESET_SMSAL_SMSP_LID;
#endif

    smsal_reset_files(id, aux_info);

    return KAL_TRUE;

}                                       /* end of smsal_reset_files_in_nvram */

void smsal_reset_files_cnf(kal_bool result, kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_reset_file_aux_info_struct *aux_info;

    ASSERT((&(smsal_cntx_ptr->pending_act[id])) != NULL);

    aux_info = (smsal_reset_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if ((aux_info->bitmap & RESET_MWIS_LID) == RESET_MWIS_LID)
    {
        aux_info->bitmap &= ~RESET_MWIS_LID;
    }
    else if ((aux_info->bitmap & RESET_MAILBOX_ADDR_LID) == RESET_MAILBOX_ADDR_LID)
    {
        aux_info->bitmap &= ~RESET_MAILBOX_ADDR_LID;
    }
    else if ((aux_info->bitmap & RESET_SMSAL_SMSP_LID) == RESET_SMSAL_SMSP_LID)
    {
        aux_info->bitmap &= ~RESET_SMSAL_SMSP_LID;
    }

    smsal_reset_files(id, aux_info);

}                                       /* end of smsal_reset_files_cnf */

