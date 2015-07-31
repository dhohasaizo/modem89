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
 * smsal_l4c_msgs.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions handling for messages from L4C.
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

/* KAL - RTOS Abstraction Layer */

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"


/* Task Management */
#include "task_config.h"

/* SMSAL <--> L4C */
#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "sim_common_enums.h"	// New API to replace is_sim_replaced
#include "smu_common_enums.h"	// New API to replace is_sim_replaced
#include "l4c2smsal_struct.h"
#include "smsal_l4c_defs.h"

#include "smsal_l4c_enum.h"

/* SMS Peer Messsages */
#include "smsal_peer_struct.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#include "smslib_def.h"
#include "smslib_enum.h"
#include "smslib_decode.h"
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_checks.h"
#include "smsal_l4c_msgs.h"
#include "smsal_storage.h"
#include "smsal_msg_proc.h"
#include "smsal_transport_proc.h"
#include "smsal_other_funcs.h"
#include "smsal_sms.h"
#include "smsal_parameter.h"
#include "smsal_storage.h"
#include "smsal_init.h"
#include "smsal_utils.h"
#include "smsal_reset.h"
#include "smsal_main.h"


/* SIM */
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"

/* NVRAM */
#include "nvram_data_items.h"           /* for file IDs */

#if defined (__SAT__)
#include "sat_def.h"
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"

#include "drv_msgid.h"
#include "md_sap.h"
#include "l4_msgid.h"
#include "sms_msgid.h"

#undef __DEBUG_WRITE_DATA_TO_NVM__ // Must undefine it !!!!
//#define __DEBUG_WRITE_DATA_TO_NVM__ // Must turn off !!!!

#ifndef __GEMINI__
#ifndef __SMSAL_UT__
    kal_bool smsal_reset(void);
#endif
#endif

#if defined (__DEBUG_WRITE_DATA_TO_NVM__)
//debug data in NVM
kal_uint8 const fakenvm[] =
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
};
#endif
/*****************************************************************************
* FUNCTION
*  smsal_l4c_entry_func
* DESCRIPTION
*   This function is the entry function for L4C module.
*
* PARAMETERS
*  a  IN       ilm_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_l4c_entry_func(ilm_struct *ilm_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_L4CSMSAL_INIT_REQ:
            smsal_init_req_handler(ilm_ptr->local_para_ptr);
            break;

#if defined(__CANCEL_LOCK_POWERON__)
        case MSG_ID_L4CSMSAL_INIT_ME_SMS_REQ:
            smsal_init_me_only_req_handler(ilm_ptr->local_para_ptr);
            break;
#endif

        case MSG_ID_L4CSMSAL_DE_INIT_REQ:
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_DELETE_REQ:
            smsal_delete_handler(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CSMSAL_READ_REQ:
            smsal_read_handler(ilm_ptr->local_para_ptr);
            break;

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
        case MSG_ID_L4CSMSAL_READ_RAW_DATA_REQ:
            smsal_read_raw_data_handler(ilm_ptr->local_para_ptr);            
            break;

        case MSG_ID_L4CSMSAL_WRITE_RAW_DATA_REQ:
            smsal_write_raw_data_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;
#endif

        case MSG_ID_L4CSMSAL_WRITE_REQ:
        {
            smsal_write_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        }
            break;
#endif

        case MSG_ID_L4CSMSAL_SEND_REQ:
        {
            smsal_send_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);

            /* avoid to free peer buffer twice, this is not a memory leak */
            ilm_ptr->peer_buff_ptr = NULL;
        }
            break;

        case MSG_ID_L4CSMSAL_SEND_SMMA_REQ:
            if ((smsal_cntx_ptr->smma.pending_smma == KAL_FALSE) &&
                (IS_FLAG_SET(NORMAL_SERVICE_FLAG) == KAL_TRUE))
            {
                /* Send Memory Available Notification */
                smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
                smsal_send_mem_avl_notif_req();
            }
            break;

#ifdef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_SEND_DELIVER_REPORT_REQ:
            smsal_send_deliver_report_handler(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CSMSAL_SYNC_MSG_STORAGE_REQ:
            smsal_sync_msg_storage_handler(ilm_ptr->local_para_ptr);
            break;
#endif


        case MSG_ID_L4CSMSAL_SEND_ABORT:
            smsal_send_abort_handler(ilm_ptr->local_para_ptr);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ:
            smsal_send_from_storage_handler(ilm_ptr->local_para_ptr);
            break;
#endif

        case MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ:
            smsal_set_common_para_handler(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ:
            smsal_set_profile_para_handler(ilm_ptr->local_para_ptr);
            break;

    #ifdef __SMS_DEPERSONALIZATION__
        case MSG_ID_L4CSMSAL_SMS_DEPERSONALIZATION_RSP:
            smsal_de_personalization_rsp(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;
    #endif

    #if defined (__SAT__)
        case MSG_ID_L4CSMSAL_SAT_SEND_REQ:
            smsal_sat_send_handler(ilm_ptr->local_para_ptr);
            break;
    #endif

#ifndef __SMS_STORAGE_BY_MMI__    
    #ifndef EMPTY_MMI
        case MSG_ID_L4CSMSAL_STARTUP_READ_NEXT_REQ:
            smsal_startup_read_next_handler();
            break;
    #endif
#endif
        case MSG_ID_L4CSMSAL_FDN_CHECK_RSP:
            smsal_fdn_check_rsp_handler(ilm_ptr->local_para_ptr);
            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_COPY_MSG_REQ:
            smsal_copy_msg_req_handler(ilm_ptr->local_para_ptr);
            break;

        /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        case MSG_ID_L4CSMSAL_SET_STATUS_REQ:
            smsal_set_status_req_handler(ilm_ptr->local_para_ptr);
            break;
#endif

        case MSG_ID_L4CSMSAL_GET_MAILBOX_NUM_REQ:
            smsal_get_mailbox_num_req_handler(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CSMSAL_SET_MSG_WAITING_REQ:
            smsal_set_msg_waiting_req_handler(ilm_ptr->local_para_ptr);
            break;

        default:
            /* LOG ERROR */
            break;
    }                                   /* switch (msg_id) */

}                                       /* end of smsal_l4c_entry_func */


/*****************************************************************************
* FUNCTION
*  smsal_send_msg_to_l4c
* DESCRIPTION
*   This function sends message to L4C
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
void smsal_send_msg_to_l4c(msg_type          msg_id,
                           local_para_struct *local_para_ptr,
                           peer_buff_struct  *peer_buff_ptr
                          )
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {
        msg_send6(smsal_cur_mod, 
                  (module_type)(MOD_L4C + (smsal_cur_mod - MOD_SMSAL)), 
                  SMSAL_L4C_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_L4C, 
                  SMSAL_L4C_SAP, 
                  msg_id, 
                  local_para_ptr,
                  peer_buff_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif

}                                       /* end of smsal_send_msg_to_l4c */

#ifdef __GEMINI__
extern kal_bool is_usim_type(sim_interface_enum which_sim);
#else
extern kal_bool is_usim_type(void);
#endif

/*****************************************************************************
* FUNCTION
*  smsal_start_handler
* DESCRIPTION
*   This function is the entry function to handle the START request
*   which sent from L4C.
*
* PARAMETERS
*  a  IN       fn_ptr
*  b  IN       local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_start_handler(READ_FILE_FINISH_FUNC fn_ptr,
                             kal_uint8             id,
                             kal_uint8             act_code,
                             kal_bool              send_init_cnf,
                             local_para_struct     *local_para_ptr
                            )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint8 i;
    kal_uint32 file_type_bitmap;
#if defined (__SMSAL_UT__)
    kal_uint8 usim_flag = 0;
#endif

    kal_uint8 file_list_cnt = 8 +  // basic 8 file
#if defined(__CB__)
#if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
    5 +
#else
    7 +
#endif
#endif
#if defined(__CPHS__)
    3 +
#endif
#if defined(__REL4__)
    4 +
#endif
    0;


    /*
     * the reading sequence is important !! 
     * *
     * * 1. [CPHS] read (vm, mailbox_num) before (mwis(ME), mailbox_addr(ME))
     * *    - if vm exists          then skip to read mwis(ME)
     * *    - if mailbox_num exists then skip to read mailbox_addr(ME)  
     * * 2. [Setting] read smss, smsp, common_param(ME) (common_param shall be read last)
     * * 3. [CB] read cbmi, cbmid, cbmir, elp, lp, cbmask (cbmask shall be read last)
     * *    - if elp exists then skip to read lp
     * * 4. [CB] read common_param(ME) before lp, because all_lang_on is stored in common_param
     * * 5. default setting: sms_sim 
     */

    smsal_file_enum init_file_list[] =
    {
        FILE_SMSS_IDX,
        FILE_SMSP_IDX,
        NVRAM_EF_SMSAL_SMSP_LID,


        // make sure the symbol "," 
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
    #if defined(__CB__)
/* under construction !*/
    #else
/* under construction !*/
    #endif
#else
        NVRAM_EF_SMSAL_COMMON_PARAM_LID,
#endif



#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
     #if defined(__CB__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
     #endif
#else
     #if defined(__CB__)
     #if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
        FILE_CBMID_IDX,                 /* cbmid */
     
        NVRAM_EF_CB_DEFAULT_CH_LID,
        NVRAM_EF_CB_CH_INFO_LID,        /* cbmi, dcs, masks */

        FILE_ELP_IDX,                   /* cb order is important */
        FILE_LP_IDX,                    /* cb order is important */
     #else
        FILE_CBMI_IDX,                  /* cbmi */
        FILE_CBMID_IDX,                 /* cbmid */
        FILE_CBMIR_IDX,                 /* cbmir */

        NVRAM_EF_CB_DEFAULT_CH_LID,
        NVRAM_EF_CB_CH_INFO_LID,        /* cbmi, dcs, masks */

        FILE_ELP_IDX,                   /* cb order is important */
        FILE_LP_IDX,                    /* cb order is important */
    #endif
    #endif

    #if defined(__REL4__)
        FILE_EXT6_IDX,
        FILE_MBDN_IDX,
        FILE_MBI_IDX,
        FILE_MWIS_IDX,
    #endif

    #if defined(__CPHS__)
        FILE_VM_WAIT_IDX,
        FILE_EXT1_IDX,
        FILE_MAILBOX_NUM_IDX,
    #endif
        NVRAM_EF_SMSAL_MWIS_LID,
        NVRAM_EF_SMSAL_MAILBOX_ADDR_LID,

#if !defined(__SMS_STORAGE_BY_MMI__)
        FILE_SMS_IDX,                   /* sms file must be at last order */
        NVRAM_EF_SMSAL_SMS_LID          /* sms file must be at last order */
#endif

#endif //__SMS_STORAGE_BY_MMI__ WISDOM_MMI
    };


#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#if defined(__CB__)
#if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
/* under construction !*/
#else
/* under construction !*/
#endif
#else
/* under construction !*/
#endif
/* under construction !*/
#if defined(__CB__)
#if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#else       //__SMS_STORAGE_BY_MMI__ WISDOM_MMI

/**** begin ********************** assign file type bitmap *****************************/
#if defined(__CB__)
#if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
#if defined(__CPHS__)
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
     * * r4mbi             r4mbdn             ext6              lp                  (0 0 0 0, 0x0)
     * * mailbox_num       ext1               vm                r4mwis              (0 0 0 0, 0x0)
     * * sms_nvm(ME)       sms_sim            mailbox_addr(ME)  mwis(ME)            (1 0 1 1, 0xb)
     */
    file_type_bitmap = 0x000b006c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
     * * mailbox_num       ext1               vm                lp                  (0 0 0 0, 0x0)
     * * sms_nvm(ME)       sms_sim            mailbox_addr(ME)  mwis(ME)            (1 0 1 1, 0xb)
     */
    file_type_bitmap = 0x0000b06c;
#endif
#else //__CPHS__
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
     * * r4mbi             r4mbdn             ext6              lp                  (0 0 0 0, 0x0)
     * * sms_sim           mailbox_addr(ME)   mwis(ME)          r4mwis              (0 1 1 0, 0x6)
     * * x                 x                  x                 sms_nvm(ME)         (0 0 0 1, 0x1)
     */
    file_type_bitmap = 0x0001606c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
     * * sms_sim           mailbox_addr(ME)   mwis(ME)          lp                  (0 1 1 0, 0x6)
     * * x                 x                  x                 sms_nvm(ME)         (0 0 0 1, 0x1)
     */
    file_type_bitmap = 0x0000166c;
#endif
#endif //__CPHS__

#else  //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__
#if defined(__CPHS__)
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
     * * ext6              lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
     * * vm                r4mwis             r4mbi             r4mbdn              (0 0 0 0, 0x0)
     * * mailbox_addr(ME)  mwis(ME)           mailbox_num       ext1                (1 1 0 0, 0xc)
     * * x                 x                  sms_nvm(ME)       sms_sim             (0 0 1 0, 0x2)
     */
    file_type_bitmap = 0x002c018c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
     * * vm                lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
     * * mailbox_addr(ME)  mwis(ME)           mailbox_num       ext1                (1 1 0 0, 0xc)
     * * x                 x                  sms_nvm(ME)       sms_sim             (0 0 1 0, 0x2)
     */
    file_type_bitmap = 0x0002c18c;
#endif
#else //__CPHS__
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
     * * ext6              lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
     * * mwis(ME)          r4mwis             r4mbi             r4mbdn              (1 0 0 0, 0x8)
     * * x                 sms_nvm(ME)        sms_sim           mailbox_addr(ME)    (0 1 0 1, 0x5)
     */
    file_type_bitmap = 0x0005818c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
     * * mwis(ME)          lp                 elp               cb_ch_info(ME)      (1 0 0 1, 0x9)
     * * x                 sms_nvm(ME)        sms_sim           mailbox_addr(ME)    (0 1 0 1, 0x5)
     */
    file_type_bitmap = 0x0000598c;
#endif
#endif //__CPHS__
#endif //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__

#else // __CB__

#if defined(__CPHS__)
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * r4mwis            r4mbi              r4mbdn            ext6                (0 0 0 0, 0x0)
     * * mwis(ME)          mailbox_num        ext1              vm                  (1 0 0 0, 0x8)
     * * x                 sms_nvm(ME)        sms_sim           mailbox_addr(ME)    (0 1 0 1, 0x5)
     */
    file_type_bitmap = 0x0000580c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * mwis(ME)          mailbox_num        ext1              vm                  (1 0 0 0, 0x8)
     * * x                 sms_nvm(ME)        sms_sim           mailbox_addr(ME)    (0 1 0 1, 0x5)
     */
    file_type_bitmap = 0x0000058c;
#endif
#else //__CPHS__
#if defined(__REL4__)
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * r4mwis            r4mbi              r4mbdn            ext6                (0 0 0 0, 0x0)
     * * sms_nvm(ME)       sms_sim            mailbox_addr(ME)  mwis(ME)            (1 0 1 1, 0xb)
     */
    file_type_bitmap = 0x00000b0c;
#else
    /*
     * 0: sim 1: nvram
     * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
     * * sms_nvm(ME)       sms_sim            mailbox_addr(ME)  mwis(ME)            (1 0 1 1, 0xb)
     */
    file_type_bitmap = 0x000000bc;
#endif
#endif //__CPHS__

#endif //__CB__
/**** end ********************** assign file type bitmap *****************************/


#if !defined(__SMS_STORAGE_BY_MMI__)
    if (smsal_cntx_ptr->sms_prefer_order != SMSAL_SM_FIRST)
    {
        init_file_list[file_list_cnt - 2] = NVRAM_EF_SMSAL_SMS_LID;
        init_file_list[file_list_cnt - 1] = FILE_SMS_IDX;

        /**** begin *********** assign file type bitmap switch(sms_nvm(ME), sms_sim) **************/
#if defined(__CB__)
#if defined(__CB_CHANNEL_ONLY_STORED_IN_NVRAM__)
#if defined(__CPHS__)
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
         * * r4mbi             r4mbdn             ext6              lp                  (0 0 0 0, 0x0)
         * * mailbox_num       ext1               vm                r4mwis              (0 0 0 0, 0x0)
         * * sms_sim           sms_nvm(ME)        mailbox_addr(ME)  mwis(ME)            (0 1 1 1, 0x7)
         */
        file_type_bitmap = 0x0007006c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
         * * mailbox_num       ext1               vm                lp                  (0 0 0 0, 0x0)
         * * sms_sim           sms_nvm(ME)        mailbox_addr(ME)  mwis(ME)            (0 1 1 1, 0x7)
         */
        file_type_bitmap = 0x0000706c;
#endif
#else //__CPHS__
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
         * * r4mbi             r4mbdn             ext6              lp                  (0 0 0 0, 0x0)
         * * sms_nvm(ME)       mailbox_addr(ME)   mwis(ME)          r4mwis              (1 1 1 0, 0xe)
         * * x                 x                  x                 sms_sim             (0 0 0 0, 0x0)
         */
        file_type_bitmap = 0x0000e06c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * elp               cb_ch_info(ME)     cb_default_ch(ME) cbmid               (0 1 1 0, 0x6)
         * * sms_nvm(ME)       mailbox_addr(ME)   mwis(ME)          lp                  (1 1 1 0, 0xe)
         * * x                 x                  x                 sms_sim             (0 0 0 0, 0x0)
         */
        file_type_bitmap = 0x00000e6c;
#endif
#endif //__CPHS__
#else  //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__
#if defined(__CPHS__)
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
         * * ext6              lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
         * * vm                r4mwis             r4mbi             r4mbdn              (0 0 0 0, 0x0)
         * * mailbox_addr(ME)  mwis(ME)           mailbox_num       ext1                (1 1 0 0, 0xc)
         * * x                 x                  sms_sim           sms_nvm(ME)         (0 0 0 1, 0x1)
         */
        file_type_bitmap = 0x001c018c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
         * * vm                lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
         * * mailbox_addr(ME)  mwis(ME)           mailbox_num       ext1                (1 1 0 0, 0xc)
         * * x                 x                  sms_sim           sms_nvm(ME)         (0 0 0 1, 0x1)
         */
        file_type_bitmap = 0x0001c18c;
#endif
#else //__CPHS__
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
         * * ext6              lp                 elp               cb_ch_info(ME)      (0 0 0 1, 0x1)
         * * mwis(ME)          r4mwis             r4mbi             r4mbdn              (1 0 0 0, 0x8)
         * * x                 sms_sim            sms_nvm(ME)       mailbox_addr(ME)    (0 0 1 1, 0x3)
         */
        file_type_bitmap = 0x0003818c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * cb_default_ch(ME) cbmir              cbmid             cbmi                (1 0 0 0, 0x8)
         * * mwis(ME)          lp                 elp               cb_ch_info(ME)      (1 0 0 1, 0x9)
         * * x                 sms_sim            sms_nvm(ME)       mailbox_addr(ME)    (0 0 1 1, 0x3)
         */
        file_type_bitmap = 0x0000398c;
#endif
#endif //__CPHS__
#endif //__CB_CHANNEL_ONLY_STORED_IN_NVRAM__
    
#else // __CB__
    
#if defined(__CPHS__)
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * r4mwis            r4mbi              r4mbdn            ext6                (0 0 0 0, 0x0)
         * * mwis(ME)          mailbox_num        ext1              vm                  (1 0 0 0, 0x8)
         * * x                 sms_sim            sms_nvm(ME)       mailbox_addr(ME)    (0 0 1 1, 0x3)
         */
        file_type_bitmap = 0x0000380c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * mwis(ME)          mailbox_num        ext1              vm                  (1 0 0 0, 0x8)
         * * x                 sms_sim            sms_nvm(ME)       mailbox_addr(ME)    (0 0 1 1, 0x3)
         */
        file_type_bitmap = 0x0000038c;
#endif
#else //__CPHS__
#if defined(__REL4__)
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * r4mwis            r4mbi              r4mbdn            ext6                (0 0 0 0, 0x0)
         * * sms_sim           sms_nvm(ME)        mailbox_addr(ME)  mwis(ME)            (0 1 1 1, 0x7)
         */
        file_type_bitmap = 0x0000070c;
#else
        /*
         * 0: sim 1: nvram
         * * common_param(ME)  smsp_nvm(ME)       smsp              smss                (1 1 0 0, 0xc)
         * * sms_sim           sms_nvm(ME)        mailbox_addr(ME)  mwis(ME)            (0 1 1 1, 0x7)
         */
        file_type_bitmap = 0x0000007c;
#endif
#endif //__CPHS__
    
#endif //__CB__
        /**** end *********** assign file type bitmap switch(sms_nvm(ME), sms_sim) **************/

    }
#endif //__SMS_STORAGE_BY_MMI__

#endif  //__SMS_STORAGE_BY_MMI__ WISDOM_MMI


#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__)
    // for PlutoMMI SMS revise phase 1
    // Remove FILE_SMS_IDX, NVRAM_EF_SMSAL_SMS_LID
    file_list_cnt -= 2;
#endif


    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_INIT_REQ);


#ifdef __USIM_SUPPORT__

	
#if defined (__SMSAL_UT__)
	usim_flag = smsal_ut_is_usim_type();
    if ( usim_flag )
	
#else  // __SMSAL_UT__

    /* check USIM or SIM ? */
#ifdef __GEMINI__
    if ( is_usim_type(smsal_cur_mod - MOD_SMSAL))
#else
    if ( is_usim_type() )
#endif

#endif // __SMSAL_UT__
    {
        /* read order
         *  SIM (original)
         *    EFelp = FILE_ELP_IDX
         *    EFlp  = FILE_LP_IDX
         *
         * USIM
         *    EFli  = FILE_U_LI_IDX
         *    EFpl  = FILE_ELP_IDX
         */

        SET_FLAGS_EXT(SMSAL_EXT_IS_USIM);
        for( i=0 ; i<(file_list_cnt-1) ; i++)
        {
            if( init_file_list[i] == FILE_ELP_IDX && init_file_list[i+1] == FILE_LP_IDX )
            {
                init_file_list[i] = FILE_U_LI_IDX;
                init_file_list[i+1] = FILE_ELP_IDX;
                break;
            }
        }
    }
#endif //__USIM_SUPPORT__

#if defined (__SMSAL_UT__)
    SET_FLAGS(SIM_MSG_FLAG);
    SET_FLAGS(SMSAL_PARAM_FLAG);
    /* SIM SMSP is present */
    SET_FLAGS(SMSAL_SIM_SMSP_FLAG);
#else


#ifdef __SMS_STORAGE_BY_MMI__
    CLR_FLAGS(SIM_MSG_FLAG);
#else
    /* check whether SIM support EFsms, EFsmss */
    //if (sim_service_table_query(SERVICE_SMS) == SERVICE_SUPPORT)
    #ifdef __GEMINI__
    if (sim_service_table_query(SERVICE_SMS, SMSAL_SIM_ID) == SERVICE_SUPPORT)
    #else
    if (sim_service_table_query(SERVICE_SMS) == SERVICE_SUPPORT)
    #endif
    {
        SET_FLAGS(SIM_MSG_FLAG);
    }
    else
    {
        CLR_FLAGS(SIM_MSG_FLAG);
        kal_brief_trace(TRACE_WARNING, EF_SMS_NOT_SUPPORT);
    }
#endif


    /* check whether SIM support EFsmsp */
    //if (sim_service_table_query(SERVICE_SMSP) == SERVICE_SUPPORT)
    #ifdef __GEMINI__
    if (sim_service_table_query(SERVICE_SMSP, SMSAL_SIM_ID) == SERVICE_SUPPORT)
    #else
    if (sim_service_table_query(SERVICE_SMSP) == SERVICE_SUPPORT)
    #endif
    {
        SET_FLAGS(SMSAL_PARAM_FLAG);
        /* SIM SMSP is present */
        SET_FLAGS(SMSAL_SIM_SMSP_FLAG);
    }
    else
    {
        CLR_FLAGS(SMSAL_PARAM_FLAG);
        /* SIM SMSP is invalid */
        CLR_FLAGS(SMSAL_SIM_SMSP_FLAG);
    }
#endif /* __SMSAL_UT__ */

    /*
     * Get a free Pending Act Struct to access SIM/NVM,
     * * this struct shall be free while we finish access all necessary data 
     */
    if (id == SMSAL_MAX_PENDING_ACT)
    {
        if (smsal_get_pending_act_id(&id) == KAL_FALSE)
            return KAL_FALSE;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = act_code;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    hold_local_para(local_para_ptr);

    aux_info = (smsal_read_file_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_read_file_aux_info_struct));

    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
    smsal_init_file_info(aux_info);

    /* function pointer for finishing reading process */
    aux_info->finish_fn_ptr = fn_ptr;
    aux_info->file_type_bitmap = file_type_bitmap;
    aux_info->send_init_cnf = send_init_cnf;

    aux_info->current_read_idx = 0;
    aux_info->msg_box_seq_num = SMSLA_MAX_START_UP_MSG_NUM;
    aux_info->nvram_rec_decoded = 0;
    aux_info->nvram_rec_amount = 0;

    for (i = 0; i < file_list_cnt; i++)
        smsal_assign_file_list(aux_info, init_file_list[i]);

    aux_info->current_read_idx = 0;

#if ((defined(__MTK_INTERNAL__)) && (!defined(LOW_COST_SUPPORT)))
#ifdef __EMS_REL5__
/* under construction !*/
#endif
#endif

    smsal_read_files(id, aux_info);

    return KAL_TRUE;

}                                       /* end of smsal_start_handler */

void smsal_early_start_handler(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint8 i, id;

    const smsal_file_enum init_file_list[3] = {FILE_SMSS_IDX,
                                               FILE_SMSP_IDX,
                                               NVRAM_EF_SMSAL_COMMON_PARAM_LID};

    if (smsal_get_pending_act_id(&id) == KAL_FALSE)
    {
        return;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_INIT_PROC;

    aux_info = (smsal_read_file_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_read_file_aux_info_struct));

    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
    smsal_init_file_info(aux_info);

    /* function pointer for finishing reading process */
    aux_info->finish_fn_ptr = smsal_early_start_finish;
    aux_info->file_type_bitmap = 0x00000004;    /* first two in SIM, 3rd in NVRAM */

    aux_info->current_read_idx = 0;

    for (i = 0; i < 3; i++)
    {
        smsal_assign_file_list(aux_info, init_file_list[i]);
    }

    aux_info->current_read_idx = 0;

    smsal_read_files(id, aux_info);

    return;

}

void smsal_early_start_finish(kal_uint8 id, kal_bool result)
{

    smsal_early_init_pending_act_hdlr();
    smsal_free_pending_act(id);         /* Free the Pending Act Struct */
    return;
}

void smsal_early_init_pending_act_hdlr(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE)
        {
            switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
            {
                case SMSAL_SAT_SEND:
                {
                    smsal_send_by_sim_ctrl(id, SMSAL_SAT_SEND_FROM_SAT);
                }
                    break;

                default:
                    break;
            }                           /* switch */
        }                               /* if (in_use) */
    }                                   /* for */

}                                       /* end of smsal_early_init_pending_act_hdlr */

#if defined(__CANCEL_LOCK_POWERON__)

void smsal_init_me_only_req_handler(local_para_struct *local_para_ptr)
{
    l4csmsal_init_req_struct *init_req;
    kal_bool ret;
    kal_uint8 id = SMSAL_MAX_PENDING_ACT;

    init_req = (l4csmsal_init_req_struct *) local_para_ptr;

    if (init_req->init_type == SMSAL_PARAM_INIT_ONLY)
    {
        SET_FLAGS(SMSAL_ME_ONLY_INIT);
        smsal_early_start_handler();
        return;
    }

    /* Start normal initialization
     * * 1. ignore the duplicated init req 2. reject sim refresh if not set 
     */
    if (IS_FLAG_SET(SMSAL_NORMAL_INIT) == KAL_TRUE)
        return;
    else
        SET_FLAGS(SMSAL_NORMAL_INIT);

    ret = smsal_start_handler(smsal_startup_finish, id,
                              SMSAL_INIT_PROC, KAL_TRUE, local_para_ptr);

    if (ret == KAL_FALSE)
    {
        smsal_init_me_only_cnf(KAL_FALSE);
    }

    return;
}
#endif

void smsal_init_req_handler(local_para_struct *local_para_ptr)
{
    l4csmsal_init_req_struct *init_req;
    kal_bool ret = KAL_FALSE;
    kal_uint8 id = SMSAL_MAX_PENDING_ACT;
    kal_uint8 i;

#if defined (__DEBUG_WRITE_DATA_TO_NVM__)
//debug data in NVM
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
#endif

    init_req = (l4csmsal_init_req_struct *) local_para_ptr;

    if (init_req->init_type == SMSAL_PARAM_INIT_ONLY)
    {
        smsal_early_start_handler();

        return;
    }
    else if (init_req->init_type == SMSAL_RESET_INIT)
    {
        #ifdef __GEMINI__
            smsal_reset_by_cur_mod(SMSAL_SIM_ID);
        #else
        #ifdef __SMSAL_UT__
            smsal_reset_for_ut_reset_only();
        #else
            smsal_reset();
        #endif
        #endif

        
        for (i = 0; i < SMSAL_MAX_PENDING_ACT; i++)
        {
            if (smsal_ptr_g->pending_act[i].act_code == SMSAL_SAT_SEND)
            {
                smsal_sat_send_cnf(((l4csmsal_sat_send_req_struct *)
                                    (&(smsal_ptr_g->pending_act[i]))->local_para_ptr)->src_id,
                                    SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                    SAT_NO_SPECIFIC_CAUSE);
            }
        }
        
        for (i = 0; i < SMSAL_MAX_PENDING_ACT; i++)
        {
            smsal_free_pending_act(i);
        }

        smsal_ptr_g->flags = 0;
        smsal_ptr_g->flags_ext = 0;

        smsal_pending_struct_init();

        /* Re-init as normal init */
        SET_FLAGS(SMSAL_NORMAL_INIT);

        ret = smsal_start_handler(smsal_startup_finish, id,
                                  SMSAL_INIT_PROC, KAL_TRUE, local_para_ptr);
    }
    else  //Normal Initialization
    {
        if (IS_FLAG_SET(SMSAL_NORMAL_INIT) == KAL_TRUE)
            return;
        else
            SET_FLAGS(SMSAL_NORMAL_INIT);

    #if defined (__DEBUG_WRITE_DATA_TO_NVM__)
        //debug data in NVM
        for (i = 1; i <= 10; i++)
        {
            peer_ptr = (peer_buff_struct *) construct_peer_buff(SMSAL_SMS_ME_LEN, 0, 0, TD_CTRL);
            pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);
            kal_mem_cpy(pdu_ptr, fakenvm+(i-1)*SMSAL_SMS_ME_LEN, SMSAL_SMS_ME_LEN);
            smsal_write_to_nvram(SMSAL_MAX_PENDING_ACT, NVRAM_EF_SMSAL_SMS_LID, i, peer_ptr);
        }
    #endif

        /*
         * if SIM card is NOT test SIM && SIM card changed
         * * we reset some files in NVRAM 
         */
        if (init_req->is_sim_change == SMU_SIM_REPLACED)
        {
            SET_FLAGS(SIM_CHANGE_FLAG);
        }

        if ((init_req->is_sim_change == SMU_SIM_REPLACED) &&
            (KAL_FALSE == is_test_sim(SMSAL_SIM_ID)))
        {
            ret = smsal_reset_files_in_nvram(local_para_ptr);
        }
        else
        {
            ret = smsal_start_handler(smsal_startup_finish, id,
                                      SMSAL_INIT_PROC, KAL_TRUE, local_para_ptr);
        }   
    }

    if (ret == KAL_FALSE)
    {
        smsal_init_cnf(KAL_FALSE);
    }

    return;
}


void smsal_reread_files_handler(smsal_file_enum         file_id[],
                                kal_uint8               file_list_cnt,
                                kal_uint32              file_type_bitmap,
                                READ_FILE_ERROR_FUNC    error_fn_ptr,
                                READ_FILE_FINISH_FUNC   finish_fn_ptr,
                                local_para_struct       *local_ptr,
                                kal_uint8               src_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint8 i, id;

    if (smsal_get_pending_act_id(&id) == KAL_FALSE)
    {
        error_fn_ptr(L4C_ERROR, SMSAL_UNSPECIFIED_ERROR_CAUSE, src_id);    
        return;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_FILES_REFRESH;

    if( local_ptr )
    {
        (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_ptr;
        hold_local_para(local_ptr);
    }

    aux_info = (smsal_read_file_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_read_file_aux_info_struct));

    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
    smsal_init_file_info(aux_info);

    /* function pointer for finishing reading process */
    aux_info->finish_fn_ptr = finish_fn_ptr;
    aux_info->file_type_bitmap = file_type_bitmap;    /* 0 in SIM, 1 in NVRAM */

    aux_info->current_read_idx = 0;

    for (i = 0; i < file_list_cnt; i++)
        smsal_assign_file_list(aux_info, file_id[i]);

    aux_info->current_read_idx = 0;

    smsal_read_files(id, aux_info);

    return;

}


void smsal_reread_mailbox_num_file_finish(kal_uint8 id, kal_bool result)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_get_mailbox_num_req_struct *req;

    req = (l4csmsal_get_mailbox_num_req_struct *)(&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

    if (result == KAL_TRUE)
    {
        smsal_get_mailbox_num_cnf(L4C_OK,
                                  (kal_uint32) 0,
                                  req->src_id);

    }
    else
    {
        smsal_get_mailbox_num_cnf(L4C_ERROR,
                                  (kal_uint32) SMSAL_UNSPECIFIED_ERROR_CAUSE,
                                  req->src_id);

    }

    smsal_free_pending_act(id);         /* Free the Pending Act Struct */
    return;
}

#ifndef __SMS_STORAGE_BY_MMI__

void smsal_read_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_error_cause_enum error_cause;
    l4csmsal_read_req_struct *read_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ);

    ASSERT(local_para_ptr != NULL);

    read_req = (l4csmsal_read_req_struct *) local_para_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_READ_REQ,
                             (void *)read_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        if( ((&(smsal_cntx_ptr->message_box[read_req->index]))->state & SMSAL_MB_ENTRY_PENDING) &&
            read_req->index < SMSAL_MAX_MSG_NUM )
        {
            // N/A
        }
        else
        {
            smsal_read_error(read_req->src_id, error_cause);
            return;
        }
    }

    if (read_req->req_type == EXACTLY_INDEXING)
    {
        smsal_read_index(read_req);
    }
    else
    {
        smsal_read_next(read_req);
    }

}                                       /* end of smsal_read_handler */


#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
void smsal_read_raw_data_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_error_cause_enum error_cause;
    l4csmsal_read_raw_data_req_struct *read_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_RAW_DATA);

    ASSERT(local_para_ptr != NULL);

    read_req = (l4csmsal_read_raw_data_req_struct *) local_para_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_READ_RAW_DATA_REQ,
                             (void *)read_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        if( ((&(smsal_cntx_ptr->message_box[read_req->index]))->state & SMSAL_MB_ENTRY_PENDING) &&
            read_req->index < SMSAL_MAX_MSG_NUM )
        {
            // N/A
        }
        else
        {
            smsal_read_raw_data_error(read_req->src_id, error_cause);
            return;
        }
    }

    smsal_read_raw_data_index(read_req);
}                                       /* end of smsal_read_raw_data_handler */

void smsal_write_raw_data_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    smsal_error_cause_enum error_cause;
    l4csmsal_write_raw_data_req_struct *write_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_WRITE_RAW_DATA);

    ASSERT(local_para_ptr != NULL);

    write_req = (l4csmsal_write_raw_data_req_struct *) local_para_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_WRITE_RAW_DATA_REQ,
                             (void *)write_req,
                             (void *)peer_buff_ptr,
                             &error_cause) == KAL_FALSE)
    {
        smsal_write_raw_data_cnf(L4C_ERROR, write_req->src_id, error_cause, SMSAL_INVALID_INDEX, 0);
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_WRITE_RAW_DATA;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
    hold_local_para(local_para_ptr);
    hold_peer_buff(peer_buff_ptr);
    pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    /* system is booting up. pending write_req. */
    //if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
    //    return;

    smsal_write_raw_data_single(id, write_req, (void *)pdu_ptr, pdu_len);
}                                       /* end of smsal_write_raw_data_handler */

#endif

void smsal_write_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint8 *pdu_ptr;
    kal_uint16 params_length;
    smsal_error_cause_enum error_cause;
    l4csmsal_write_req_struct *write_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_WRITE);

    ASSERT(local_para_ptr != NULL);

    write_req = (l4csmsal_write_req_struct *) local_para_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_WRITE_REQ,
                             (void *)write_req,
                             (void *)peer_buff_ptr,
                             &error_cause) == KAL_FALSE)
    {
        smsal_write_cnf(L4C_ERROR, write_req->src_id, error_cause, SMSAL_INVALID_INDEX, 0);
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_WRITE;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;
    hold_local_para(local_para_ptr);

    if (peer_buff_ptr != NULL)
    {
        hold_peer_buff(peer_buff_ptr);
        pdu_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &params_length);
    }
    else
        pdu_ptr = NULL;

    /* system is booting up. pending write_req. */
    if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
        return;

    smsal_write_single(id, write_req, (void *)pdu_ptr);
}                                       /* end of smsal_write_handler */


/*****************************************************************************
* FUNCTION
*  smsal_delete_handler
* DESCRIPTION
*   This function handles DELETE request from MMI.
*
* PARAMETERS
*  a  IN       local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_delete_handler(local_para_struct *local_para_ptr)
{
    smsal_error_cause_enum error_cause;
    l4csmsal_delete_req_struct *del_req;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_DELETE);

    del_req = (l4csmsal_delete_req_struct *) local_para_ptr;

    if(smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_DELETE_REQ,
                            (void*) del_req,
                            NULL,
                            &error_cause) == KAL_FALSE)
    {
        smsal_del_cnf(L4C_ERROR, del_req, NULL,
                      error_cause     /* error cause */
                      );
        return;
    }

    if (del_req->del_flag == SMSAL_DEL_INDEXED_MSG)
    {
        smsal_delete_index(del_req);
    }
    else
    {
        smsal_delete_flag(del_req);
    }

}                                       /* end of smsal_delete_handler */
#endif //__SMS_STORAGE_BY_MMI__

/*****************************************************************************
* FUNCTION
*  smsal_send_handler
* DESCRIPTION
*   This function handles SMS-SUBMIT & SMS-COMMAND.
*
* PARAMETERS
*  a  IN          local_para_ptr
*  b  IN          peer_buff_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  shall free peer_buff_ptr when finished 
*****************************************************************************/
void smsal_send_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id = SMSAL_MAX_PENDING_ACT;
    l4csmsal_send_req_struct *send_req;
    smsal_error_cause_enum error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
    smsal_send_sms_aux_info_struct *aux_info;
    smsal_concat_struct concat_info;
    kal_uint16 pdu_len;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND);

    ASSERT(local_para_ptr != NULL);

    /* init. */
    concat_info.ref = 0;
    concat_info.total_seg = 1;
    concat_info.seg = 1;

    send_req = (l4csmsal_send_req_struct *) local_para_ptr;

    if (send_req->message_len > 0 && peer_buff_ptr != NULL &&
        send_req->req_type == SMSAL_SEND_MSG &&
        send_req->msg_header.submit.udhi == KAL_TRUE)
    {
        smsal_get_concat_info((kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len), &concat_info);
    }

    if ((smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SEND_REQ,
                              (void*) send_req,
                              (void*) peer_buff_ptr,
                              &error_cause)) == KAL_FALSE)

    {
        smsal_send_error(send_req->src_id,      /* src id */
                         send_req->seq_num, 
                         &concat_info,
                         error_cause);          /* error cause */

        if (id != SMSAL_MAX_PENDING_ACT)
        {
            /* peer_buffer will be free in smsal_free_pending_act */
            smsal_free_pending_act(id);
        }
        else
        {
            /* because ilm_ptr->peer_buff_ptr is set to NULL */
            if (peer_buff_ptr != NULL)
                free_peer_buff(peer_buff_ptr);
        }
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_MO_SMS;
    aux_info = (smsal_send_sms_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_send_sms_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_buff_ptr;   /* no hold */
    hold_local_para(local_para_ptr);
    kal_mem_set(aux_info, 0x0, sizeof(smsal_send_sms_aux_info_struct));

    aux_info->src_id = send_req->src_id;
    aux_info->is_da_modified = KAL_FALSE;
    aux_info->concat_info = concat_info;

#ifndef __SMS_STORAGE_BY_MMI__
    if (smsal_reply_index_hdlr(id, send_req->reply_index) == KAL_TRUE)
    {
        /* reply index is available. Need to get SC and DA address from storage. */

        /* change sub action. */
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_RP_MSG;
        return;                         /* wait read result from storage */
    }
#endif

    smsal_mo_sms_fdn_check(id);

}

void smsal_mo_sms_fdn_check(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_bool retval;
    l4csmsal_send_req_struct *send_req;
    smsal_error_cause_enum error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
    smsal_send_sms_aux_info_struct *aux_info;

    send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    /* get SC, DA and etc. */
    /* peer buffer is for PDU mode only. */
    /* also check further, address, length */
    retval = smsal_get_mo_sms_info(send_req, (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr,
                                   aux_info, &error_cause);

    if (retval == KAL_FALSE)
    {
        smsal_send_error(send_req->src_id,              /* src id */
                         send_req->seq_num,
                         &(aux_info->concat_info),
                         error_cause);                  /* error cause */

        if (id != SMSAL_MAX_PENDING_ACT)
        {
            /* peer_buffer will be free in smsal_free_pending_act */
            smsal_free_pending_act(id);
        }
        return;
    }

    if ((send_req->fdn_check == KAL_TRUE) &&
        (smsal_para_ptr->common.sms_fdn_off != KAL_TRUE))
    {
        smsal_fdn_check_hdlr(id);
        return;
    }

    smsal_send_by_sim_ctrl(id, SMSAL_SAT_SEND_MSG);

}


void smsal_send_by_sim_ctrl(kal_uint8 id, kal_uint8 sub_act_code)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_send_sms_aux_info_struct *aux_info;

    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

#if defined (__SAT__)
    /* 
     * SAT MO short message control by SAT 
     */
    if (smsal_sat_mo_msg_ctrl(id, &aux_info->sat_addr) == KAL_FALSE)
    {
        (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SAT_MO_SMS_CTRL;
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = sub_act_code;
        return;                         /* wait query result from SIM */
    }
#endif

    smsal_get_msg_ref_hdlr(id, &aux_info->msg_ref);
    /* smsal_mo_sms_hdlr(id); */
}

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_send_from_storage_handler
* DESCRIPTION
*   This function sends a short message from storage.
*
* PARAMETERS
*  a  IN          local_para_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_send_from_storage_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    smsal_error_cause_enum error_cause;
    l4csmsal_send_from_storage_req_struct *send_req;
    smsal_send_sms_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_FROM_STORAGE);

    ASSERT(local_para_ptr != NULL);

    send_req = (l4csmsal_send_from_storage_req_struct *) local_para_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ,
                             (void*)local_para_ptr,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        smsal_send_error(send_req->src_id, 0, NULL, error_cause);
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_FROM_STORAGE;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = local_para_ptr;
    hold_local_para(local_para_ptr);
    aux_info = (smsal_send_sms_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_send_sms_aux_info_struct));

    /* reset auxiliary info */
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
    aux_info->peer_to_send = NULL;
    aux_info->src_id = send_req->src_id;
    aux_info->is_da_modified = KAL_FALSE;

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_FROM_STORAGE;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_MSG_FR_STORAGE;
    smsal_read_short_msg(id,
                         (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[send_req->index]))->storage_type,
                         (&(smsal_cntx_ptr->message_box[send_req->index]))->record_no);

}                                       /* end of smsal_send_from_storage_handler */

void smsal_send_from_storage_fdn_check(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    l4csmsal_send_from_storage_req_struct   *send_req;
    smsal_send_sms_aux_info_struct          *aux_info;

    send_req = (l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    /* Get destination address */
    if (aux_info->is_da_modified == KAL_FALSE)
    {
        /* There is no Reply index message. */

        /* modify DA address. */
        if (send_req->da_tag == KAL_TRUE)
        {
            l4_addr2_sms_tp_addr(&(send_req->da), &(aux_info->sat_addr.dest_addr));
            aux_info->is_da_modified = KAL_TRUE;
        }
    }

    /* Get SC address */
    smsal_get_msg_sc_addr(send_req->src_id, send_req->reply_index, NULL, send_req,
                          &aux_info->sat_addr.sc_addr);

    if ((send_req->fdn_check == KAL_TRUE) &&
        (smsal_para_ptr->common.sms_fdn_off != KAL_TRUE))
    {
        smsal_fdn_check_hdlr(id);
        return;
    }

    smsal_send_by_sim_ctrl(id, SMSAL_SAT_SEND_FROM_STORAGE);
}
#endif

#ifdef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_send_deliver_report_handler
* DESCRIPTION
*   This function send SMS-DELIVER-REPORT(s).
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none 
*****************************************************************************/
void smsal_send_deliver_report_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_send_deliver_report_req_struct *send_req;
    l4csmsal_send_deliver_report_cnf_struct *send_cnf;

    kal_uint8 id;

    send_req = (l4csmsal_send_deliver_report_req_struct *)local_para_ptr;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE &&
            smsal_cntx_ptr->pending_act[id].act_code == SMSAL_SEND_DELIVER_REPORT)
        {
            if( send_req->result == KAL_TRUE )
            {
                smsal_deliver_ack_post(smsal_cntx_ptr->pending_act[id].sub_act_code, 0, 0, 0, 0, NULL);
            }
            else
            {
                smsal_deliver_nack_post(smsal_cntx_ptr->pending_act[id].sub_act_code, 
                                        send_req->error_cause, 0, 0, 0, 0, NULL);

                if( send_req->error_cause == MEM_CAP_EXCEEDED )
                {
                    smsal_mem_exceed_ind(SMSAL_MEM_EXCEED_NORMAL);
                }

            }

            smsal_free_pending_act(id);
            break;
        }
    }

    send_cnf = (l4csmsal_send_deliver_report_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_send_deliver_report_cnf_struct), TD_CTRL);

    send_cnf->src_id = send_req->src_id;
    send_cnf->uid = send_req->uid;

    // can't find the MT-SMS pending
    if( id >= SMSAL_MAX_PENDING_ACT )
    {
        send_cnf->result = L4C_ERROR;
        send_cnf->error_cause = INVALID_REQ_PARAMETER;
    }
    else
    {
        send_cnf->result = L4C_OK;
        send_cnf->error_cause = 0;
    }

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_DELIVER_REPORT_CNF,
                          (local_para_struct *) send_cnf, NULL);
}

/*****************************************************************************
* FUNCTION
*  smsal_sync_msg_storage_handler
* DESCRIPTION
*   This function sync the storage status, if necessary, it would trigger RP-SMMA
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none 
*****************************************************************************/
void smsal_sync_msg_storage_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_sync_msg_storage_req_struct *send_req;

    send_req = (l4csmsal_sync_msg_storage_req_struct *)local_para_ptr;

    smsal_ptr_g->storage_num_info.sim_msg_num      = send_req->sm_max_num;
    smsal_ptr_g->storage_num_info.used_sim_msg_num = send_req->sm_current_num;
    smsal_ptr_g->storage_num_info.me_msg_num       = send_req->me_max_num;
    smsal_ptr_g->storage_num_info.used_me_msg_num  = send_req->me_current_num;

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
}


#endif

/*****************************************************************************
* FUNCTION
*  smsal_send_abort_handler
* DESCRIPTION
*   This function aborts SMS-SUBMIT(s).
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*  none 
*****************************************************************************/
void smsal_send_abort_handler(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 n, id, src_id, msg_ref, seq_num, req_src_id, req_seq_num;
    kal_bool need_send_abort = KAL_FALSE;
    l4csmsal_send_abort_struct *req;
    l4csmsal_send_abort_cnf_struct *abort_cnf;
    sms_submit_abort_struct *abort_req;

    if (IS_FLAG_SET(ABORT_PENDING_FLAG) == KAL_TRUE)
    {
        /* ignore this abort req */
        return;
    }

    SET_FLAGS(ABORT_PENDING_FLAG);

    req = (l4csmsal_send_abort_struct *)local_para_ptr;

    req_src_id = req->src_id;
    req_seq_num  = req->seq_num;

    smsal_ptr_g->send_abort.src_id = req_src_id;
    smsal_ptr_g->send_abort.seq_num = req_seq_num;
	    
    for (n = 0; n < SMSAL_MAX_PENDING_ACT; n++)
    {
        if (smsal_get_pending_send(n, &id, &src_id, &msg_ref, &seq_num) == KAL_TRUE)
        {
            if (((src_id == req_src_id) && (seq_num == req_seq_num)) ||
                ((src_id == SAT_SRC) && (seq_num == req_seq_num)))
            {
                if ((((&(smsal_cntx_ptr->pending_act[id]))->action_status) & 0x02) == 0x02)
                {
                    need_send_abort = KAL_TRUE;
                }
                
                // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
                // smsal_free_pending_act(id);
                // mark as abort
                (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x01;
            }
        }
    }

    if (need_send_abort == KAL_TRUE)
    {
        abort_req = (sms_submit_abort_struct *) construct_local_para
                    (sizeof(sms_submit_abort_struct), TD_CTRL);                

        abort_req->smi = req_src_id;  // source id
        abort_req->seq_num = req_seq_num;

        smsal_send_msg_to_sms(MSG_ID_SMS_SUBMIT_ABORT,
                              (local_para_struct *)abort_req, NULL );
    }
    else
    {
        abort_cnf = (l4csmsal_send_abort_cnf_struct *) construct_local_para
            (sizeof(l4csmsal_send_abort_cnf_struct), TD_CTRL);

        abort_cnf->src_id  = req_src_id;
        abort_cnf->seq_num = req_seq_num;
        abort_cnf->result = L4C_OK;
        abort_cnf->error_cause = 0;

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_ABORT_CNF,
                              (local_para_struct *) abort_cnf, NULL);

        CLR_FLAGS(ABORT_PENDING_FLAG);
    }

    return;
}                                       /* end of smsal_send_abort_handler */


/*****************************************************************************
* FUNCTION
*  smsal_set_parameter_handler
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
void smsal_set_common_para_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 act_id;
    smsal_error_cause_enum error_cause;
    l4csmsal_set_common_para_req_struct *set_req;
    smsal_set_param_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SET_PARAM);

    set_req = (l4csmsal_set_common_para_req_struct *) local_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ,
                             (void *)set_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        smsal_set_param_cnf(L4C_ERROR, set_req->src_id,
                            MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF, error_cause);
        return;
    }

    smsal_get_pending_act_id(&act_id);

    (&(smsal_cntx_ptr->pending_act[act_id]))->act_code = SMSAL_SAVE_PARAM;
    aux_info = (smsal_set_param_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_set_param_aux_info_struct));

    aux_info->set_ind = 0;
    aux_info->common = NULL;
    aux_info->profile = NULL;

    (&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr = (local_para_struct *) set_req;
    (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info = (void *)aux_info;
    hold_local_para((&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr);

    smsal_fill_pending_common_param(set_req, act_id);
    smsal_save_parameter(act_id);

}

void smsal_set_profile_para_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 act_id;
    smsal_error_cause_enum error_cause;
    l4csmsal_set_profile_para_req_struct *set_req;
    smsal_set_param_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SET_PARAM);

    set_req = (l4csmsal_set_profile_para_req_struct *) local_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ,
                             (void*) set_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        smsal_set_param_cnf(L4C_ERROR, set_req->src_id,
                            MSG_ID_L4CSMSAL_SET_PROFILE_PARA_CNF, error_cause);
        return;
    }

    smsal_get_pending_act_id(&act_id);

    (&(smsal_cntx_ptr->pending_act[act_id]))->act_code = SMSAL_SAVE_PARAM;
    aux_info = (smsal_set_param_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_set_param_aux_info_struct));

    aux_info->set_ind = 0;
    aux_info->common = NULL;
    aux_info->profile = NULL;

    (&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr = (local_para_struct *) set_req;
    (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info = (void *)aux_info;
    hold_local_para((&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr);

    smsal_fill_pending_profile_param(set_req, act_id);
    smsal_save_parameter(act_id);

}

#ifndef __SMS_STORAGE_BY_MMI__
#ifndef EMPTY_MMI
void smsal_startup_read_next_handler(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_read_file_aux_info_struct *aux_info;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_INIT_PROC ||
             (&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SIM_REFRESH ||
             (&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_FILES_REFRESH) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_READ_SMS_FILE))
        {

            break;
        }
    }

    if (id < SMSAL_MAX_PENDING_ACT)
    {
        aux_info = (smsal_read_file_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
        aux_info->msg_box_seq_num = SMSLA_MAX_START_UP_MSG_NUM;

        /* There is still records in peer buffer */
        if ((aux_info->file[aux_info->current_read_idx].file_id == NVRAM_EF_SMSAL_SMS_LID) &&
            (aux_info->nvram_rec_decoded < aux_info->nvram_rec_amount))
        {
            ASSERT((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr != NULL);

            smsal_continue_read_nvram_sms(id, aux_info);
            return;
        }
        /* There is no records in peer buffer */
        else if ((aux_info->file[aux_info->current_read_idx].file_id == NVRAM_EF_SMSAL_SMS_LID) &&
                 ((aux_info->record_no > aux_info->number)) &&
                 ((aux_info->file_type_bitmap & 0x0001) == 1))
        {
            /* all SMS records in NVRAM were read */
            if (smsal_cntx_ptr->sms_prefer_order == SMSAL_SM_FIRST)
            {
                smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_FINISH_IND, NULL, NULL);
                (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = 0;
                SET_FLAGS(SMSAL_FINISH_NVM_LOAD_FLAG);
            }

            aux_info->record_no = 1;    /* reset for reading next file */
            aux_info->current_read_idx += 1;
            aux_info->file_type_bitmap >>= 1;
        }

        else if ((aux_info->file[aux_info->current_read_idx].file_id == FILE_SMS_IDX) &&
                 (aux_info->record_no > aux_info->number) &&
                 ((aux_info->file_type_bitmap & 0x0001) == 0))
        {
            aux_info->record_no = 1;    /* reset for reading next file */

            aux_info->current_read_idx += 1;
            aux_info->file_type_bitmap >>= 1;
        }
        else
        {
            ASSERT((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr == NULL);
        }

        /* resume to reading SMS from storage. */
        smsal_read_files(id, aux_info);
    }

    return;
}
#endif
#endif //__SMS_STORAGE_BY_MMI__

void smsal_fdn_check_rsp_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_fdn_check_rsp_struct *fdn_check_rsp;
    kal_uint8 id, seq_num, src_id;

    l4csmsal_send_from_storage_req_struct *send_fr_req;
    l4csmsal_send_req_struct *send_req;
    smsal_send_sms_aux_info_struct *aux_info;

    fdn_check_rsp = (l4csmsal_fdn_check_rsp_struct *) local_ptr;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {

        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_FDN_CHECK) &&
            (((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MO_SMS) ||
             ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_FROM_STORAGE)))
        {
            if (fdn_check_rsp->result == L4C_OK)
            {
                switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
                {
                    case SMSAL_SEND_MO_SMS:
                        smsal_send_by_sim_ctrl(id, SMSAL_SAT_SEND_MSG);
                        break;

                    case SMSAL_SEND_FROM_STORAGE:
                        smsal_send_by_sim_ctrl(id, SMSAL_SAT_SEND_FROM_STORAGE);
                        break;

                    default:
                        smsal_free_pending_act(id);
                        return;
                }
            }
            else
            {
                switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
                {
                    case SMSAL_SEND_MO_SMS:
                    {
                        send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
                        seq_num = send_req->seq_num;
                        src_id = send_req->src_id;
                    }
                        break;

                    case SMSAL_SEND_FROM_STORAGE:
                    {
                        send_fr_req = (l4csmsal_send_from_storage_req_struct *)
                                       (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
                        seq_num = send_fr_req->seq_num;
                        src_id = send_fr_req->src_id;

                    }
                        break;

                    default:
                        smsal_free_pending_act(id);
                        return;
                }

                aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
                smsal_send_error(src_id, seq_num, &(aux_info->concat_info),
                                 (smsal_error_cause_enum) fdn_check_rsp->cause);
                smsal_free_pending_act(id);
            }
        }
    }

    CLR_FLAGS(FDN_PENDING_FLAG);

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_FDN_CHECK_PENDING) &&
            (((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MO_SMS) ||
             ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_FROM_STORAGE)))
        {
            break;
        }
    }

    if (id < SMSAL_MAX_PENDING_ACT)
    {
        smsal_fdn_check_hdlr(id);
    }

    return;
}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_copy_msg_req_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_bool ret_val;
    kal_uint16 entry_id;
    smsal_error_cause_enum error_cause;
    l4csmsal_copy_msg_req_struct *copy_req;
    smsal_write_aux_info_struct *aux_info;

    copy_req = (l4csmsal_copy_msg_req_struct *) local_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_COPY_MSG_REQ,
                             (void*) copy_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        smsal_send_copy_cnf(L4C_ERROR, error_cause, copy_req, SMSAL_INVALID_INDEX);
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_COPY;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_INDEX;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) copy_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    /* The dst index shall be found and marked (changed to pending state) in this stage. */
    /* Or new MT SMS during reading SMS may cause storage not available.                 */

    aux_info = (smsal_write_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_write_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    /*
     * Find a free message box entry which allocated for the
     * * storage which specified by 'storage_type' 
     */
    ret_val = smsal_get_free_mb_entry(copy_req->dst_storage, &entry_id);
    ASSERT(ret_val == KAL_TRUE);

    /* Save 'index' */
    aux_info->index = entry_id;
#ifdef __SMS_ME_STORAGE__
    aux_info->storage_type = copy_req->dst_storage;
#endif

    /* Mark the state of the message box's entry to PENDING */
    (&(smsal_cntx_ptr->message_box[entry_id]))->state |= SMSAL_MB_ENTRY_PENDING;
    INCR_USED_MSG_NUM(copy_req->dst_storage);

    smsal_read_short_msg(id,
                         (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->storage_type,
                         (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->record_no);

}


/* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
void smsal_set_status_req_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    smsal_error_cause_enum error_cause;
    l4csmsal_set_status_req_struct *set_status_req;
    smsal_write_aux_info_struct *aux_info;

    set_status_req = (l4csmsal_set_status_req_struct *) local_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SET_STATUS_REQ,
                             (void*) set_status_req,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        smsal_send_set_status_cnf(L4C_ERROR, error_cause, set_status_req);
        return;
    }

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SET_STATUS;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_INDEX;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) set_status_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    /* The index shall be found and marked (changed to pending state) in this stage. */
    /* Or new other SMS action during reading SMS may cause error.                   */

    aux_info = (smsal_write_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_write_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    /* Save 'index' */
    aux_info->index = set_status_req->index;
#ifdef __SMS_ME_STORAGE__
    /* [MAUI_00817141]
    aux_info->storage_type = SMSAL_ME;
    */
    aux_info->storage_type = (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[set_status_req->index]))->storage_type;
#endif

    /* Mark the state of the message box's entry to PENDING */
    (&(smsal_cntx_ptr->message_box[set_status_req->index]))->state |= SMSAL_MB_ENTRY_PENDING;

    smsal_read_short_msg(id,
                         //* SMSAL_ME, [MAUI_00817141] */
                         (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[set_status_req->index]))->storage_type,
                         (&(smsal_cntx_ptr->message_box[set_status_req->index]))->record_no);

}
#endif

void smsal_get_mailbox_num_req_handler(local_para_struct *local_ptr)
{
    l4csmsal_get_mailbox_num_req_struct *req;

#ifdef __REL4__
    smsal_file_enum reread_file_list[3] = {FILE_MBDN_IDX,
                                           FILE_MAILBOX_NUM_IDX,
                                           NVRAM_EF_SMSAL_MAILBOX_ADDR_LID};

    req = (l4csmsal_get_mailbox_num_req_struct *)local_ptr;

    smsal_reread_files_handler(reread_file_list,
                               3,
                               0x00000004,
                               smsal_get_mailbox_num_cnf,
                               smsal_reread_mailbox_num_file_finish,
                               local_ptr,
                               req->src_id);
#else
    smsal_file_enum reread_file_list[2] = {FILE_MAILBOX_NUM_IDX,
                                           NVRAM_EF_SMSAL_MAILBOX_ADDR_LID};

    req = (l4csmsal_get_mailbox_num_req_struct *)local_ptr;

    smsal_reread_files_handler(reread_file_list,
                               2,
                               0x00000002,
                               smsal_get_mailbox_num_cnf,
                               smsal_reread_mailbox_num_file_finish,
                               local_ptr,
                               req->src_id);
#endif
}

void smsal_set_msg_waiting_req_handler(local_para_struct *local_ptr)
{
    l4csmsal_set_msg_waiting_req_struct *req;
    smsal_mwis_struct mwis;

    req = (l4csmsal_set_msg_waiting_req_struct *)local_ptr;

#ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if( req->line_no >= SMSAL_MAX_LINES || req->ind_type >= NUM_OF_MSG_WAITING_TYPE)
    {
        smsal_set_msg_waiting_cnf(L4C_ERROR, INVALID_REQ_PARAMETER, req);
        return;
    }
    
    mwis = smsal_para_ptr_g->mailbox.mwis[req->line_no];

    mwis.waiting_num[req->ind_type] = req->waiting_num;

    smsal_update_mwis(smsal_para_ptr_g->common.selected_msp, req->line_no, &mwis);

    smsal_set_msg_waiting_cnf(L4C_OK, 0, req);
}

#ifdef __CPHS__
void smsal_get_ext1_num_req_handler(local_para_struct *local_ptr)
{
    if ((IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE) ||
        (IS_FLAG_SET(NVM_MBOX_FLAG) == KAL_TRUE))
    {
        smsal_get_ext1_num_cnf();
    }
    else
    {
        // not yet read CPHS_MBOX_FLAG or NVM_MBOX_FLAG
        SET_FLAGS(PHB_WAIT_EXT1_FLAG);
    }
}
#endif

void smsal_mem_full_ind(kal_uint8 type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#ifndef __SMS_STORAGE_BY_MMI__
    l4csmsal_mem_full_ind_struct *mem_ind;
    sim_card_status_enum sim_status;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MEM_FULL, type);

#ifndef __SMS_STORAGE_BY_MMI__
    // [MAUI_01780719] if there is no SIM card, do not send MEM FULL indication to MMI
#ifdef __GEMINI__
    SMSAL_ASSERT((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM);
    sim_status = check_sim_card_status((kal_uint8)(smsal_cur_mod - MOD_SMSAL));
#else 
    sim_status = check_sim_card_status();
#endif

#ifndef __SMSAL_UT__
    if( (sim_status != NORMAL_SIM_PRESENCE) && (sim_status != TEST_SIM_PRESENCE) )
    {
        // ignore the indication
    }
    else
#endif
    {
        mem_ind = (l4csmsal_mem_full_ind_struct *)
                   construct_local_para(sizeof(l4csmsal_mem_full_ind_struct), TD_CTRL);
        
        mem_ind->type = type;

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_MEM_FULL_IND,
                              (local_para_struct *) mem_ind, NULL);
    }
#endif

    if (type == SMSAL_MEM_FULL_NORMAL)
    {
        SET_FLAGS(MEM_FULL_FLAG);

        if (smsal_cntx_ptr->smma.pending_smma == KAL_TRUE)
            smsal_send_mem_avl_notif_abort();
    }
    else if (type == SMSAL_SM_FULL_ONLY)
        SET_FLAGS(SM_FULL_FLAG);
    else if (type == SMSAL_ME_FULL_ONLY)
        SET_FLAGS(ME_FULL_FLAG);

}                                       /* end of smsal_mem_full_ind */

void smsal_mem_exceed_ind(kal_uint8 type)
{
    kal_uint8 data = SMSAL_MEM_EXCEED;
#ifndef __SMS_STORAGE_BY_MMI__
    l4csmsal_mem_exceed_ind_struct *mem_ind;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MEM_EXCEED, type);

#ifndef __SMS_STORAGE_BY_MMI__
    mem_ind = (l4csmsal_mem_exceed_ind_struct *)
               construct_local_para(sizeof(l4csmsal_mem_exceed_ind_struct), TD_CTRL);

    mem_ind->type = type;

   /*-------------------------------------------------------
    * Notify MMI that SMSAL rejected a incoming message 
    * due to memory capacity full
    *-------------------------------------------------------*/
    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_MEM_EXCEED_IND,
                          (local_para_struct *) mem_ind, NULL);
#endif

   /*-------------------------------------------------
    * Update the "MEM Cap. Exceeded" flag of EF SMSS 
    *-------------------------------------------------*/
    if (type == SMSAL_MEM_EXCEED_NORMAL)
    {
        SET_FLAGS(MEM_EXD_FLAG);

        /* SMSS file is present. */
        if (IS_FLAG_SET(SMSAL_SIM_SMSS_FLAG) == KAL_TRUE)
        {
            smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,   /* ignore the sim cnf */
                               FILE_SMSS_IDX, &data, 1, SMSAL_SMSS_MEM_EXD_FLAG);
        }
        // MAUI_01748085 only one storage updated and send no-matter SIM reject
        /* MAUI_01629973 [SMSAL][Revise] use nvram backup smss and update sim at best effort */
        else
        {
            smsal_set_common_change_to_nvram(SMSAL_MAX_PENDING_ACT);
        }
    }

}                                       /* end of smsal_mem_exceed_ind */

void smsal_mem_available_ind(kal_uint8 type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#ifndef __SMS_STORAGE_BY_MMI__
    l4csmsal_mem_available_ind_struct *mem_ind;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MEM_AVAILABLE);

#ifndef __SMS_STORAGE_BY_MMI__
    mem_ind = (l4csmsal_mem_available_ind_struct *) construct_local_para
        (sizeof(l4csmsal_mem_available_ind_struct), TD_CTRL);

    mem_ind->type = type;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_MEM_AVAILABLE_IND,
                          (local_para_struct *) mem_ind, NULL);
#endif

    if (type == SMSAL_MEM_AVAIL_NORMAL)
    {
        CLR_FLAGS(MEM_FULL_FLAG);

        /* Whether to send SMMA */
        if ((IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
            (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE))
        {
            smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;

            smsal_send_mem_avl_notif_req();
        }
    }
    else if (type == SMSAL_SM_AVAIL_ONLY)
        CLR_FLAGS(SM_FULL_FLAG);
    else if (type == SMSAL_ME_AVAIL_ONLY)
        CLR_FLAGS(ME_FULL_FLAG);

}                                       /* end of smsal_mem_available_ind */


#ifdef __SMS_DEPERSONALIZATION__

kal_bool smsal_de_personalization_req(kal_uint8 smi, smsal_pdu_decode_struct *pdu_decode)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 msg_len;
    l4csmsal_sms_depersonalization_ind_struct *pdu_ptr;
    peer_buff_struct *unpack_pdu_ptr = NULL;
    smsal_sms_depersonalization_aux_info_struct *aux_info;
    kal_uint8 id;

#if defined(__SMS_STORAGE_BY_MMI__)
#else
    smsal_header_info_union msg_header;
#endif

    if (smsal_get_pending_act_id(&id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SMU_DEPERSONALIZATION;

#if defined(__SMS_STORAGE_BY_MMI__)
    unpack_pdu_ptr = smsal_get_msg_content_ext(KAL_FALSE, pdu_decode, &msg_len, NULL);
#else
    unpack_pdu_ptr = smsal_get_msg_content(KAL_FALSE, pdu_decode, &msg_len, &msg_header);
#endif //__SMS_STORAGE_BY_MMI__

    if( unpack_pdu_ptr == NULL )
    {
        smsal_free_pending_act(id);
        return KAL_FALSE;
    }
    
    pdu_ptr = (l4csmsal_sms_depersonalization_ind_struct *)
              construct_local_para(sizeof(l4csmsal_sms_depersonalization_ind_struct), TD_CTRL);
    pdu_ptr->length = msg_len;
    pdu_ptr->access_id = id;

    aux_info = (smsal_sms_depersonalization_aux_info_struct *)
               get_ctrl_buffer(sizeof(smsal_sms_depersonalization_aux_info_struct));
    aux_info->smi = smi;
    aux_info->dcs = pdu_decode->tpdu.data.deliver_tpdu.dcs;
    aux_info->pid = pdu_decode->tpdu.data.deliver_tpdu.pid;
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SMS_DEPERSONALIZATION_IND, (local_para_struct *)pdu_ptr, unpack_pdu_ptr);

    return KAL_TRUE;
}

void smsal_de_personalization_rsp(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_sms_depersonalization_rsp_struct *de_cnf;
    smsal_sms_depersonalization_aux_info_struct *aux_info;
    void * pdu_ptr;
    kal_uint8 cause;
    kal_uint16 pdu_len;
    kal_uint16 data_char_len;   // number of characters
    kal_uint16 byte_len;        // number of bytes
    kal_uint8 msg_data[SMSAL_DE_PERSONAL_DATA_LEN];  // pack data

    SMSAL_ASSERT(local_para_ptr != NULL);

    de_cnf = (l4csmsal_sms_depersonalization_rsp_struct *) local_para_ptr;
    aux_info = (smsal_sms_depersonalization_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[de_cnf->access_id]))->aux_info;


    if (de_cnf->response == KAL_TRUE)
    {
        SMSAL_ASSERT(peer_buff_ptr != NULL);
        
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        // check length
        data_char_len = (pdu_len < de_cnf->length) ? pdu_len : de_cnf->length ;
        kal_mem_set(msg_data, 0, data_char_len);
        
        if( data_char_len > 0)
        {
            smsal_gsm7_pack(pdu_ptr, msg_data, data_char_len, 0);
        }
        
        byte_len = (data_char_len*7+7)/8;
        

        /* Send Deliver Report (ACK) */
        if (byte_len == 0)
        {
            smsal_deliver_ack_post(aux_info->smi, 0, 0, 0, 0, NULL);
        }
        else
        {
            smsal_deliver_ack_post(aux_info->smi,
                                   0x07,   /* parameter indicator */
                                   aux_info->pid,
                                   0x00,
                                   (kal_uint8)byte_len,
                                   msg_data);
        }
    }
    else
    {
        /* Send Deliver Report (NACK) */
        cause = UNSPECIFIED_TP_FCS;
        smsal_deliver_nack_post(aux_info->smi, (smsal_error_cause_enum) cause,
                                0, 0, 0, 0, NULL);
    }

    smsal_free_pending_act(de_cnf->access_id);
}
#endif /* __SMS_DEPERSONALIZATION__ */


/*****************************************************************************
* FUNCTION
*  smsal_msg_waiting_ind
* DESCRIPTION
*   This function sends message waiting indication to MMI.
*
* PARAMETERS
*  a  IN/OUT   line_no
*  b  IN       mwis, message waiting indication status
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_msg_waiting_ind(kal_uint8                line_no,
                           #ifdef __REL4__
                           kal_uint8                msp_no,
                           #endif
                           kal_uint8                ind_type,
                           smsal_msg_waiting_struct *msg_ptr,
                           kal_bool                 is_from_storage)
{
    l4csmsal_msg_waiting_ind_struct *mw_ind_ptr;
    sim_card_status_enum sim_status;
    
    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MSG_WAITING);

    // [MAUI_01531163] if there is no SIM card, can't send VM waiting to MMI
#ifdef __GEMINI__
    SMSAL_ASSERT((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM);
    sim_status = check_sim_card_status((kal_uint8)(smsal_cur_mod - MOD_SMSAL));
#else 
    sim_status = check_sim_card_status();
#endif

#ifndef __SMSAL_UT__
    if( (sim_status != NORMAL_SIM_PRESENCE) && (sim_status != TEST_SIM_PRESENCE) )
    {
        // ignore the indication
        return;
    }
#endif
    
    mw_ind_ptr = (l4csmsal_msg_waiting_ind_struct *)
        construct_local_para(sizeof(l4csmsal_msg_waiting_ind_struct), TD_CTRL);

    mw_ind_ptr->line_no = line_no;
    #ifdef __REL4__
    mw_ind_ptr->msp_no = msp_no;
    #else
    mw_ind_ptr->msp_no = 0;
    #endif
    mw_ind_ptr->waiting_num =       msg_ptr->mwis.waiting_num[ind_type];
    mw_ind_ptr->ind_type =          ind_type;
    mw_ind_ptr->is_show_num =       msg_ptr->is_show_num[ind_type];
    mw_ind_ptr->is_clear =          msg_ptr->is_clear[ind_type];
    mw_ind_ptr->is_from_storage =   is_from_storage;
    mw_ind_ptr->ext_indicator = 0;
    
    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_MSG_WAITING_IND,
                          (local_para_struct *) mw_ind_ptr,
                          NULL);

}                                       /* end of smsal_msg_waiting_ind */

void smsal_msg_waiting_ext_ind(kal_uint8                line_no,
                               kal_uint8                msp_no,
                               kal_bool                 is_from_storage)
{
    l4csmsal_msg_waiting_ind_struct *mw_ind_ptr;
    sim_card_status_enum sim_status;
    smsal_mwis_struct mwis_data;
    kal_uint8 i, counter = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MSG_WAITING_EXT, msp_no, line_no);

    // [MAUI_01531163] if there is no SIM card, can't send VM waiting to MMI
#ifdef __GEMINI__
    SMSAL_ASSERT((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM);
    sim_status = check_sim_card_status((kal_uint8)(smsal_cur_mod - MOD_SMSAL));
#else 
    sim_status = check_sim_card_status();
#endif

#ifndef __SMSAL_UT__
    if( (sim_status != NORMAL_SIM_PRESENCE) && (sim_status != TEST_SIM_PRESENCE) )
    {
        // ignore the indication
        return;
    }
#endif

    if( line_no == SMSAL_LINE_2 )
    {
        mwis_data = smsal_para_ptr_g->mailbox.mwis[line_no];
    }
    else
    {
#ifdef __REL4__
        if( msp_no >= SMSAL_MAX_MSP_NUM )
        {
            return;
        }        
        /* report rel4 mwis */
        mwis_data = smsal_para_ptr_g->mailbox.r4mwis[msp_no];
#else
        /* report normal mwis */
        mwis_data = smsal_para_ptr_g->mailbox.mwis[SMSAL_LINE_1];
#endif
    }


    mw_ind_ptr = (l4csmsal_msg_waiting_ind_struct *)
        construct_local_para(sizeof(l4csmsal_msg_waiting_ind_struct), TD_RESET);


    // find the first one
    for (i = 0 ; i < NUM_OF_MSG_WAITING_TYPE ; i++)
    {
        if (mwis_data.waiting_num[i] != 0)
        {
            mw_ind_ptr->line_no =           line_no;
            mw_ind_ptr->msp_no =            msp_no;
            mw_ind_ptr->waiting_num =       mwis_data.waiting_num[i];
            mw_ind_ptr->ind_type =          i;
            mw_ind_ptr->is_show_num =       KAL_FALSE;
            mw_ind_ptr->is_clear =          KAL_FALSE;
            mw_ind_ptr->is_from_storage =   is_from_storage;
            i++;
            break;
        }
    }

    // others eg. Fax mail, E-mail, Other, Video mail
    for ( counter = 0 ; i < NUM_OF_MSG_WAITING_TYPE ; i++)
    {
        if (mwis_data.waiting_num[i] != 0)
        {
            mw_ind_ptr->msg_waiting[counter].line_no =         line_no;
            mw_ind_ptr->msg_waiting[counter].msp_no =          msp_no;
            mw_ind_ptr->msg_waiting[counter].waiting_num =     mwis_data.waiting_num[i];
            mw_ind_ptr->msg_waiting[counter].ind_type =        i;
            mw_ind_ptr->msg_waiting[counter].is_show_num =     KAL_FALSE;
            mw_ind_ptr->msg_waiting[counter].is_clear =        KAL_FALSE;
            mw_ind_ptr->msg_waiting[counter].is_from_storage = is_from_storage;
            counter++;
        }
    }

    if( (0 == mw_ind_ptr->waiting_num) && (0 == counter) )
    {
        free_local_para((local_para_struct *)mw_ind_ptr);
        return;
    }

    mw_ind_ptr->ext_indicator = counter;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_MSG_WAITING_IND,
                          (local_para_struct *) mw_ind_ptr,
                          NULL);

}                                       /* end of smsal_msg_waiting_ind */


#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
void smsal_evm_update_voicemail(smsal_evmi_struct *msg_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 mailbox_index;
    smsal_file_enum  file_id;
    smsal_file_enum  ext_file_id;
    kal_uint16 addr_len;
    kal_uint8 *addr_data;
    smsal_mailbox_addr_struct mailbox_addr;

    if( IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE )
    {
        return;
    }

    if( IS_FLAG_SET(REL4_MBI_FLAG) == KAL_TRUE )
    {
        mailbox_index = smsal_para_ptr_g->mailbox.mbi[msg_ptr->multi_sub_profile].mbi_id[0] - 1;
    }
    else
    {
        // stored in NVRAM or EF_MBDN ... Voice Mail
        // 1. special case in EF_MBDN
        // 2. normal case  in NVRAM
        mailbox_index = msg_ptr->multi_sub_profile;
    }
    
    if( mailbox_index >= SMSAL_MAX_MAILBOX_NUM )
        return;

    /* padding bcd address with 0xff */
    smsal_para_ptr_g->mailbox.addr[mailbox_index].addr.addr_bcd[smsal_para_ptr_g->mailbox.addr[mailbox_index].addr.addr_length] = 0xff;
    
    /* unused bcd length is 0xff, set to zero for clarity */
    if (smsal_para_ptr->mailbox.addr[mailbox_index].addr.addr_length == 0xff)
        smsal_para_ptr->mailbox.addr[mailbox_index].addr.addr_length = 0;
    
    kal_mem_cpy(&mailbox_addr,
                &(smsal_para_ptr_g->mailbox.addr[mailbox_index]),
                sizeof(smsal_mailbox_addr_struct));

    mailbox_addr.addr = msg_ptr->vm_access_addr;
    mailbox_addr.addr.addr_length = 1 + ((mailbox_addr.addr.addr_length+1)/2);
    smsal_para_ptr_g->mailbox.addr[mailbox_index].addr = msg_ptr->vm_access_addr;

    /* Save MAILBOX address */
    if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
    {
        /* save in SIM */
        //smsal_mailbox_addr_struct *mb_addr = &(smsal_para_ptr_g->mailbox.addr[set_req->dest_no]);
        addr_len = SMSAL_MAILBOX_NUM_LEN + smsal_para_ptr_g->mailbox.alpha_size;    
        
        addr_data = get_ctrl_buffer(addr_len);

        // REL4 file
        file_id = FILE_MBDN_IDX;
        ext_file_id = FILE_EXT6_IDX;            

        /* replace ext id */
        if ( (IS_FLAG_SET(SMSAL_EXT_FLAG) == KAL_TRUE) )
        {
            kal_uint16 ext_para_id = mailbox_addr.extension_id;
            kal_uint8 *ext_data = get_ctrl_buffer(SMSAL_EXT_LEN);
            kal_bool update_extfile = KAL_TRUE;


            if (mailbox_addr.addr.addr_length > SMSAL_ADDR_LEN)
            {
                if (ext_para_id == 0xff)
                {
                    /* use SMSAL ext table to find free record in ext1, return from 0 */
                    ext_para_id = 1+smsal_bitmap_get_free_index((kal_uint16)smsal_para_ptr_g->mailbox.ext_rec_num,
                                                                    (kal_uint8*)smsal_para_ptr_g->mailbox.rec_bitmap);
                    smsal_bitmap_set_index((kal_uint16)(ext_para_id-1), smsal_para_ptr_g->mailbox.rec_bitmap);

                    mailbox_addr.extension_id = ext_para_id;
                }

                smsal_encode_mailbox_ext_addr(&mailbox_addr, ext_data);

            }
            else if (ext_para_id != 0xff)
            {
                /* use SMSAL ext table to set free record in ext6, start from 0 */
                smsal_bitmap_clr_index((kal_uint16)(ext_para_id-1),
                                       smsal_para_ptr_g->mailbox.rec_bitmap);

                mailbox_addr.extension_id = 0xff;
                smsal_para_ptr_g->mailbox.addr[mailbox_index].extension_id = 0xff;
                
                kal_mem_set(ext_data, 0xff, SMSAL_EXT_LEN);
            }
            else
            {
                update_extfile = KAL_FALSE;
            }

            if (update_extfile == KAL_TRUE)
            {
                /* Save MAILBOX address */
                smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,
                                   ext_file_id,
                                   ext_data,
                                   SMSAL_EXT_LEN,       /* length */
                                   ext_para_id          /* record no */
                                   );
            }

            free_ctrl_buffer(ext_data);
        }

        smsal_encode_mailbox_addr(&mailbox_addr, addr_data, KAL_TRUE);

        smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,
                           file_id,
                           addr_data,
                           addr_len,       /* length */
                           (kal_uint16) (mailbox_index + 1)      /* record no */
            );

        free_ctrl_buffer(addr_data);
    }
    else
    {
        /* save in NVRAM */
        smsal_write_nvm_params(NVRAM_EF_SMSAL_MAILBOX_ADDR_LID,
                               (kal_uint16)(mailbox_index+1), /* record no */
                               0,
                               (void*) (&mailbox_addr),
                               SMSAL_MAX_PENDING_ACT);
    }

}

void smsal_evm_ind(smsal_msg_waiting_struct *msg_ptr)
{
    l4csmsal_enhanced_voice_mail_ind_struct *evm_ind_ptr;
    sim_card_status_enum sim_status;
    kal_uint16 i, count;
    
    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_EVM_IND);

    if( msg_ptr == NULL )
        return;

    count = (msg_ptr->evmi.evm_pdu_type == SMSAL_EVMI_NOTIFICATION ) ? msg_ptr->evmi.number_of_vm_notify : msg_ptr->evmi.number_of_vm_delete;

    if( msg_ptr->evmi.vm_status_ext_data )
    {
        kal_buffer_trace(TRACE_INFO, INFO_EVM_STATUS_INFO, msg_ptr->evmi.vm_status_ext_len, msg_ptr->evmi.vm_status_ext_data);
    }

    for( i=0 ; i<count ; i++ )
    {
        if( msg_ptr->evmi.vm_msg[i])
        {
            kal_brief_trace(TRACE_INFO, INFO_EVM_MSG_INFO, msg_ptr->evmi.vm_msg[i]->id, msg_ptr->evmi.vm_msg[i]->id, msg_ptr->evmi.vm_msg[i]->msg_len_insec, msg_ptr->evmi.vm_msg[i]->msg_retention_day, msg_ptr->evmi.vm_msg[i]->priority);
        }

        if( msg_ptr->evmi.vm_msg[i]->msg_ext_data )
        {
            kal_buffer_trace(TRACE_INFO, INFO_EVM_MSG_EXT_INFO, msg_ptr->evmi.vm_msg[i]->msg_ext_len, msg_ptr->evmi.vm_msg[i]->msg_ext_data );
        }
    }

    // [MAUI_01531163] if there is no SIM card, can't send VM waiting to MMI
#ifdef __GEMINI__
    SMSAL_ASSERT((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM);
    sim_status = check_sim_card_status(smsal_cur_mod - MOD_SMSAL);
#else 
    sim_status = check_sim_card_status();
#endif

    if( (sim_status != NORMAL_SIM_PRESENCE) && (sim_status != TEST_SIM_PRESENCE) )
    {
        // ignore the indication
        return;
    }

    // update in storage
    smsal_evm_update_voicemail( &(msg_ptr->evmi) );
    
    evm_ind_ptr = (l4csmsal_enhanced_voice_mail_ind_struct *)
        construct_local_para(sizeof(l4csmsal_enhanced_voice_mail_ind_struct), TD_CTRL);

    // copy to ilm(local parameter)
    //*evm_ind_ptr = (msg_ptr->evmi);
    kal_mem_cpy(evm_ind_ptr, &(msg_ptr->evmi), sizeof(smsal_evmi_struct));

    // send to MMI and clean original points
    kal_mem_set(&(msg_ptr->evmi), 0, sizeof(smsal_evmi_struct));

    // mark "sent"
    msg_ptr->evmi.l4_status = 1;
    evm_ind_ptr->l4_status = 1;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_ENHANCED_VOICE_MAIL_IND,
                          (local_para_struct *) evm_ind_ptr,
                          NULL);
   
}                                       /* end of smsal_evm_ind */
#endif

/*****************************************************************************
* FUNCTION
*  smsal_init_vm_ind
* DESCRIPTION
*   This function sends an indication(s) to L4C to notify that
*   there are some messages waiting.
*
* PARAMETERS
*  none 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_init_vm_ind(void)
{
    kal_uint8 line_no;

    /*kal_uint8 i;
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;
    smsal_msg_waiting_struct msg;*/

#ifdef __REL4__
    kal_int8 msp_no = smsal_para_ptr_g->common.selected_msp;

    kal_int8 msp_id;
    
    /* REL4 only uses SMSAL_LINE_1, SMSAL_LINE_2 will store in NVM */
    if (IS_FLAG_SET(REL4_MWIS_FLAG) == KAL_TRUE)
    {
        smsal_para_ptr_g->mailbox.mwis[SMSAL_LINE_1] = smsal_para_ptr_g->mailbox.r4mwis[msp_no];

        /* report rel4 mwis */
        for (msp_id = 0; msp_id < smsal_para_ptr_g->mailbox.mwis_rec_num; msp_id++)
        {
            smsal_msg_waiting_ext_ind(SMSAL_LINE_1, msp_id, KAL_TRUE);
        }
        
        smsal_msg_waiting_ext_ind(SMSAL_LINE_2, 0, KAL_TRUE);
    }
    else
#endif  // __REL4__
    {

#ifdef __REL4__
        if( IS_FLAG_SET(CPHS_MWF_FLAG) == KAL_FALSE )
        {
            smsal_para_ptr_g->mailbox.mwis[SMSAL_LINE_1] = smsal_para_ptr_g->mailbox.r4mwis[msp_no];
        }
        else
        {
            smsal_para_ptr_g->mailbox.r4mwis[msp_no] = smsal_para_ptr_g->mailbox.mwis[SMSAL_LINE_1];
        }
#endif

        for (line_no = 0; line_no < SMSAL_MAX_LINES; line_no++)
        {
            smsal_msg_waiting_ext_ind(line_no, 0, KAL_TRUE);
        }
    }
}                                       /* end of smsal_init_vm_ind */


/*****************************************************************************
* FUNCTION
*  smsal_status_report_ind
* DESCRIPTION
*   This function sends an indication to L4C to notify that
*   SMSAL receives a status report.
*
* PARAMETERS
*  a  IN       status_ptr
*  b  IN       peer_buff_ptr
*  c  IN       dest_id, indicate the destination of this indication
*              1: LMI, 2: RMI, 3: Both            
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_status_report_ind(smsal_status_report_peer_struct *status_ptr,
                             peer_buff_struct                *peer_buff_ptr,
                             kal_uint8                       dest_id,
                             sms_addr_struct                 *sc_addr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    l4csmsal_new_msg_text_ind_struct *nmi_text_ind_ptr;
    l4csmsal_new_msg_pdu_ind_struct *nmi_pdu_ind_ptr;
    peer_buff_struct *peer_ptr;

#ifndef __SMS_STORAGE_BY_MMI__
    if ((dest_id == SMSAL_TO_RMI) &&
        (smsal_para_ptr->rmi.message_format == SMSAL_PDU_MODE))
#else
    if ( (dest_id == SMSAL_TO_LMI) ||
         ((dest_id == SMSAL_TO_RMI) && (smsal_para_ptr->rmi.message_format == SMSAL_PDU_MODE)) )
#endif
    {
        kal_uint8 *pdu_ptr;
        kal_uint16 pdu_len;
        kal_uint8 *new_ptr;

        /*----------------------
         * PDU Mode
         *----------------------*/
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        nmi_pdu_ind_ptr = (l4csmsal_new_msg_pdu_ind_struct *)
            construct_local_para(sizeof(l4csmsal_new_msg_pdu_ind_struct), TD_CTRL);

        peer_ptr = (peer_buff_struct*)construct_peer_buff(
                    (kal_uint16)(pdu_len+(sc_addr->addr_length)+1),
                    0, 0, TD_CTRL);

        /* MAUI_00748299 [SMSAL][Revise] Add SC in status report */
        new_ptr = get_peer_buff_pdu(peer_ptr, &nmi_pdu_ind_ptr->message_len);

        /* MAUI_01047660 [SMSAL][Fixbug] SC address octets are not counted in the length */
        /* 3GPP TS 27.005 3.1 <length> */
        nmi_pdu_ind_ptr->message_len = pdu_len;
        nmi_pdu_ind_ptr->dest = dest_id;

        /* fill SC address */
        *new_ptr = sc_addr->addr_length;
        if (sc_addr->addr_length > 0)
        {
            kal_mem_cpy(new_ptr+1,
                        sc_addr->addr_bcd,
                        sc_addr->addr_length);
        }

        /* fill TPDU */
        kal_mem_cpy(new_ptr + 1 + (sc_addr->addr_length), pdu_ptr, pdu_len);

        nmi_pdu_ind_ptr->mti = SMSAL_MTI_STATUS_REPORT;
        nmi_pdu_ind_ptr->id = smsal_get_free_cnmi_id();

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_NEW_MSG_PDU_IND,
                              (local_para_struct *) nmi_pdu_ind_ptr,
                              peer_ptr);

        return;
    }
    else
    {
      /*----------------------
       * TEXT Mode
       *----------------------*/
        nmi_text_ind_ptr = (l4csmsal_new_msg_text_ind_struct *)
            construct_local_para(sizeof(l4csmsal_new_msg_text_ind_struct), TD_CTRL);

        nmi_text_ind_ptr->dest = dest_id;
        nmi_text_ind_ptr->mti = SMSAL_MTI_STATUS_REPORT;
        nmi_text_ind_ptr->id = smsal_get_free_cnmi_id();
        /* nmi_text_ind_ptr->rmi_use_hex = KAL_FALSE; */

        peer_ptr = smsal_get_status_report(status_ptr, &nmi_text_ind_ptr->message_len,
                                           &nmi_text_ind_ptr->msg_header);

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_NEW_MSG_TEXT_IND,
                              (local_para_struct *) nmi_text_ind_ptr, peer_ptr);

    }

}                                       /* end of smsal_status_report_ind */

void smsal_new_msg_pdu_ind(smsal_pdu_decode_struct *pdu_decode,
                           kal_uint8               dest_id,
                           peer_buff_struct        *peer_buff_ptr,                             
                           kal_uint8               cnmi_id)
{
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 *new_ptr;
    l4csmsal_new_msg_pdu_ind_struct *nmi_pdu_ind_ptr;

    /*----------------------
     * PDU Mode
     *----------------------*/
    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    nmi_pdu_ind_ptr = (l4csmsal_new_msg_pdu_ind_struct *)
        construct_local_para(sizeof(l4csmsal_new_msg_pdu_ind_struct), TD_CTRL);

    peer_ptr = (peer_buff_struct*)construct_peer_buff(
                (kal_uint16)(pdu_len+pdu_decode->sca.addr_length+1),
                0, 0, TD_CTRL);

    new_ptr = get_peer_buff_pdu(peer_ptr, &nmi_pdu_ind_ptr->message_len);

    /* fill SC address */
    *new_ptr = pdu_decode->sca.addr_length;
    if (pdu_decode->sca.addr_length > 0)
    {
        kal_mem_cpy(new_ptr+1,
                    pdu_decode->sca.addr_bcd,
                    pdu_decode->sca.addr_length);
    }

    /* fill TPDU */
    kal_mem_cpy(new_ptr + 1 + pdu_decode->sca.addr_length, pdu_ptr, pdu_len);

    nmi_pdu_ind_ptr->dest = dest_id;
    nmi_pdu_ind_ptr->mti = SMSAL_MTI_DELIVER;
    nmi_pdu_ind_ptr->id = cnmi_id;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_NEW_MSG_PDU_IND,
                          (local_para_struct *) nmi_pdu_ind_ptr,
                          peer_ptr);

    return;

}


void smsal_new_msg_text_ind(smsal_pdu_decode_struct *pdu_decode,
                            kal_uint8               dest_id,
                            kal_uint8               cnmi_id,
                            kal_uint8               lmi_ind,
                            kal_uint16              index)
{
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#endif
    l4csmsal_new_msg_text_ind_struct *nmi_text_ind_ptr;
    peer_buff_struct *peer_ptr;
    kal_uint8 src_id = LMMI_SRC;
#if defined(__SMS_STORAGE_BY_MMI__)
    l4_addr_bcd_struct *TP_Addr;
#endif

   /*----------------------
    * TEXT Mode
    *----------------------*/
    nmi_text_ind_ptr = (l4csmsal_new_msg_text_ind_struct *)
        construct_local_para(sizeof(l4csmsal_new_msg_text_ind_struct), TD_CTRL);

    if ((dest_id & SMSAL_TO_RMI) == SMSAL_TO_RMI)
        src_id = RMMI_SRC;

    nmi_text_ind_ptr->dest = dest_id;
    nmi_text_ind_ptr->index = index;
    nmi_text_ind_ptr->mti = SMSAL_MTI_DELIVER;
    nmi_text_ind_ptr->id = cnmi_id;
#if defined(__SMS_STORAGE_BY_MMI__)
    kal_mem_cpy(&(nmi_text_ind_ptr->concat_info), &(pdu_decode->tpdu.concat_info), sizeof(smslib_concat_struct));
#else
    nmi_text_ind_ptr->concat_info = pdu_decode->tpdu.concat_info;
#endif

    /* MAUI_00678607 [ECMT] if no storing action is needed, need not get index info. */

#ifndef __SMS_STORAGE_BY_MMI__
    if (index != SMSAL_INVALID_INDEX)
        nmi_text_ind_ptr->storage_type = (&(smsal_cntx_ptr->message_box[index]))->storage_type;
    else
#endif
        nmi_text_ind_ptr->storage_type = SMSAL_STORAGE_UNSPECIFIED;

    if (pdu_decode->tpdu.port.dest_port == SMSAL_INVALID_PORT_NUM)
        nmi_text_ind_ptr->dest_port = 0;
    else
        nmi_text_ind_ptr->dest_port = (kal_uint16)pdu_decode->tpdu.port.dest_port;

    if (pdu_decode->tpdu.port.src_port == SMSAL_INVALID_PORT_NUM)
        nmi_text_ind_ptr->src_port = 0;
    else
        nmi_text_ind_ptr->src_port = (kal_uint16)pdu_decode->tpdu.port.src_port;

    if (lmi_ind == 0)
        nmi_text_ind_ptr->display_type = SMSAL_MSG_TYPE_UPDATE_ONLY;
    else if ((lmi_ind & SMSAL_INDEX_NMI_BITS) == SMSAL_INDEX_NMI_BITS)
        nmi_text_ind_ptr->display_type = SMSAL_MSG_TYPE_NORMAL;
    else if ((lmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
        nmi_text_ind_ptr->display_type = SMSAL_MSG_TYPE_CLASS0;

    nmi_text_ind_ptr->rmi_use_hex = smsal_check_rmi_use_hex(src_id, pdu_decode);

#if defined(__SMS_STORAGE_BY_MMI__)

    if (pdu_decode->tpdu.mti == SMSLIB_MTI_DELIVER)
    {
        TP_Addr = &(nmi_text_ind_ptr->msg_header.deliver.oa);
    }
    else if (pdu_decode->tpdu.mti == SMSLIB_MTI_SUBMIT)
    {
        TP_Addr = &(nmi_text_ind_ptr->msg_header.submit.da);
    }
    else
    {
        TP_Addr = &(nmi_text_ind_ptr->msg_header.status_rep.ra);
    }

    smslib_get_msg_content(nmi_text_ind_ptr->rmi_use_hex, pdu_decode, TP_Addr);

    peer_ptr = smsal_get_msg_content_ext(nmi_text_ind_ptr->rmi_use_hex,
                                         pdu_decode,
                                         &(nmi_text_ind_ptr->message_len),
                                         &(nmi_text_ind_ptr->msg_header));
#else
    peer_ptr = smsal_get_msg_content(nmi_text_ind_ptr->rmi_use_hex,
                                     pdu_decode,  
                                     &(nmi_text_ind_ptr->message_len),
                                     &(nmi_text_ind_ptr->msg_header)
                                     );                                              
#endif

    /* if peer_ptr == NULL, there is no content. */

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_NEW_MSG_TEXT_IND,
                          (local_para_struct *) nmi_text_ind_ptr,
                          peer_ptr);

}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_new_msg_index_ind(kal_uint8                dest_id,
                             kal_uint16               index,
                             smsal_tpdu_decode_struct *tpdu 
                            )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_new_msg_index_ind_struct *index_ind;
    smsal_deliver_peer_struct *deliver_ptr;
    sms_addr_struct oa;

    deliver_ptr = &tpdu->data.deliver_tpdu;
    index_ind = (l4csmsal_new_msg_index_ind_struct *) construct_local_para
        (sizeof(l4csmsal_new_msg_index_ind_struct), TD_CTRL);

    index_ind->dest = dest_id;
    index_ind->index = index;
    index_ind->storage_type = (&(smsal_cntx_ptr->message_box[index]))->storage_type;
    index_ind->concat_info = tpdu->concat_info;

    if (tpdu->port.dest_port == SMSAL_INVALID_PORT_NUM)
        index_ind->dest_port = 0;
    else
        index_ind->dest_port = (kal_uint16)tpdu->port.dest_port;

    if (tpdu->port.src_port == SMSAL_INVALID_PORT_NUM)
        index_ind->src_port = 0;
    else
        index_ind->src_port = (kal_uint16)tpdu->port.src_port;

    /* for MMI to display Originating Address or Name */
    oa.addr_length = deliver_ptr->orig_addr[0];
    oa.addr_bcd[0] = deliver_ptr->orig_addr[1];

    if (deliver_ptr->orig_addr[0] > 0)
    {
        kal_mem_cpy(&oa.addr_bcd[1],
                    &deliver_ptr->orig_addr[2],
                    (deliver_ptr->orig_addr[0] + 1) / 2);
    }

    sms_tp_addr2_l4_addr(&oa, &index_ind->oa);

    kal_mem_cpy(index_ind->scts, deliver_ptr->scts, 7);

    index_ind->mti = SMSAL_MTI_DELIVER;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_NEW_MSG_INDEX_IND,
                          (local_para_struct*) index_ind,
                          NULL);

}                                       /* end of smsal_nmi_index_to_l4c */


void smsal_dispatch_stored_new_msg(smsal_mt_msg_aux_info_struct *aux_info, 
                                   peer_buff_struct             *peer_ptr)   

{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 dummy, lmi_ind, rmi_ind, dest_id = 0;
    kal_uint8 cnmi_id = SMSAL_INVALID_CNMI_ID;
    smsal_tpdu_decode_struct *tpdu;

    kal_bool is_rmi_index = KAL_TRUE;   /* KAL_FALSE for PDU or TEXT */

    tpdu = &aux_info->pdu_decode->tpdu;

    smsal_consult_nmi_table(tpdu->msg_class, &dummy, &lmi_ind, &rmi_ind);

    dest_id |= SMSAL_TO_LMI;

    if ((rmi_ind & SMSAL_INDEX_NMI_BITS) == SMSAL_INDEX_NMI_BITS)
    {
        dest_id |= SMSAL_TO_RMI;
    }

    if ((rmi_ind & SMSAL_MSG_NMI_BITS) == SMSAL_MSG_NMI_BITS)
    {
        dest_id |= SMSAL_TO_RMI;

        /* send full msg to RMI. */
        is_rmi_index = KAL_FALSE;
    }

    kal_brief_trace(TRACE_INFO, MT_SMS_DISPATCH, dummy, lmi_ind, rmi_ind, dest_id, is_rmi_index);

    if ((dest_id == (SMSAL_TO_RMI | SMSAL_TO_LMI)) &&
        (is_rmi_index == KAL_FALSE) &&
        (smsal_para_ptr->rmi.message_format == SMSAL_TEXT_MODE))
    {
        /* Send TEXT to both RMI or LMI . */
        smsal_new_msg_text_ind(aux_info->pdu_decode,
                               dest_id,
                               cnmi_id,
                               lmi_ind,
                               aux_info->index);

    }
    else
    {

        if ((dest_id & SMSAL_TO_RMI) == SMSAL_TO_RMI)
        {
            if (is_rmi_index == KAL_TRUE)
            {
                smsal_new_msg_index_ind(SMSAL_TO_RMI, aux_info->index, tpdu);
            }
            else if (smsal_para_ptr->rmi.message_format == SMSAL_PDU_MODE)
            {
                /* Send PDU to RMI */
                smsal_new_msg_pdu_ind(aux_info->pdu_decode,
                                      SMSAL_TO_RMI,
                                      peer_ptr,                              
                                      cnmi_id);
            }
        }

        if ((dest_id & SMSAL_TO_LMI) == SMSAL_TO_LMI)
        {
            /* Send TEXT to RMI */
            smsal_new_msg_text_ind(aux_info->pdu_decode,
                                   SMSAL_TO_LMI, /* TEXT */
                                   cnmi_id,
                                   lmi_ind,
                                   aux_info->index);
        }
    }

    /* Send message waiting indication (MWI) to MMI if present */
    if (tpdu->msg_wait.is_msg_wait == KAL_TRUE)
    {
        kal_uint8 i = 0;
        smsal_msg_waiting_struct *msg_ptr = &tpdu->msg_wait;

        for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
        {
            if (msg_ptr->ind_flag[i] == KAL_TRUE)
            {
                smsal_msg_waiting_ind(tpdu->msg_wait.line_no,
                                      #ifdef __REL4__
                                      msg_ptr->msp,
                                      #endif
                                      i,
                                      msg_ptr,
                                      KAL_FALSE);
            }
        }

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        if( msg_ptr->type_of_info & SMSAL_MSG_WAIT_UDH_EVM )
        {
            smsal_evm_ind(msg_ptr);
        }
#endif

        smsal_update_mwis(msg_ptr->msp, tpdu->msg_wait.line_no, &tpdu->msg_wait.mwis);
    }

}                                       /* end of smsal_dispatch_stored_new_msg */
#endif //__SMS_STORAGE_BY_MMI__

void smsal_send_service1_cnf(kal_uint8           result,
                             kal_uint8           src_id,
                             kal_uint8           msg_ref,                             
                             kal_uint8           scts[],
                             peer_buff_struct    *peer_buff_ptr,
                             kal_uint16          cause,
                             kal_uint8           seq_num,
                             smsal_concat_struct concat_info)
{
    l4csmsal_send_cnf_struct *send_cnf;

    send_cnf = (l4csmsal_send_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_send_cnf_struct), TD_CTRL);

    send_cnf->src_id = src_id;
    send_cnf->result = result;
    send_cnf->mr = msg_ref;
    send_cnf->seq_num = seq_num;
    send_cnf->concat_info = concat_info;

    if (result == L4C_ERROR)
        send_cnf->error_cause = cause;

    kal_mem_cpy(send_cnf->scts, scts, 7);

    if (smsal_get_msg_format(src_id) == SMSAL_PDU_MODE)
    {
        /* PDU MODE */
        hold_peer_buff(peer_buff_ptr);
        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_CNF,
                              (local_para_struct *) send_cnf,
                              peer_buff_ptr);
    }
    else
    {
        /* TEXT MODE */
        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_CNF,
                              (local_para_struct *) send_cnf,
                              NULL);
    }
}                                       /* smsal_send_service1_cnf */


#if defined (__SAT__)
void smsal_sat_send_cnf(kal_uint8  src_id,
                        kal_uint8  res_code,
                        kal_uint8  error_cause)
{
    l4csmsal_sat_send_cnf_struct *send_cnf;

    send_cnf = (l4csmsal_sat_send_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_sat_send_cnf_struct), TD_CTRL);

    send_cnf->src_id = src_id;
    send_cnf->res = res_code;
    send_cnf->cause = error_cause;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SAT_SEND_CNF,
                          (local_para_struct*)send_cnf,
                          NULL);
   

}                                       /* end of smsal_sat_send_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_sat_send_handler
* DESCRIPTION
*   This function handles SEND MESSAGE triggered by SAT.
*
* PARAMETERS
*  a  IN          local_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_sat_send_handler(local_para_struct *local_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    l4csmsal_sat_send_req_struct *send_req;
    smsal_error_cause_enum error_cause;
    smsal_send_sms_aux_info_struct *aux_info=NULL;
    smsal_mti_enum mti;
    kal_bool need_pending = KAL_FALSE;
    kal_bool retval = KAL_TRUE;
    kal_uint8 access_id = SMSAL_MAX_PENDING_ACT;

    ASSERT(local_ptr != NULL);

    send_req = (l4csmsal_sat_send_req_struct *) local_ptr;

    if (smsal_l4c_msg_checks(MSG_ID_L4CSMSAL_SAT_SEND_REQ,
                             (void*)local_ptr,
                             NULL,
                             &error_cause) == KAL_FALSE)
    {
        /* If not ready, pend request. */
        if (error_cause != SMSAL_NOT_READY && error_cause != SMSAL_NO_MO_SERVICE)
        {
            smsal_sat_send_cnf(send_req->src_id,
                               SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                               SAT_NO_SPECIFIC_CAUSE);
            return;
        }
        else
            need_pending = KAL_TRUE;
    }

    if (KAL_TRUE == smsal_get_pending_act_id(&access_id))
    {
        (&(smsal_cntx_ptr->pending_act[access_id]))->act_code = SMSAL_SAT_SEND;
        aux_info = (smsal_send_sms_aux_info_struct *)
                     get_ctrl_buffer(sizeof(smsal_send_sms_aux_info_struct));
        (&(smsal_cntx_ptr->pending_act[access_id]))->aux_info = (void *)aux_info;
        (&(smsal_cntx_ptr->pending_act[access_id]))->local_para_ptr = local_ptr;
        hold_local_para(local_ptr);
        kal_mem_set(aux_info, 0x0, sizeof(smsal_send_sms_aux_info_struct));

        // [MAUI_01401915] src_id is modified from SAT_SRC to RMMI_SRC
        aux_info->src_id = SAT_SRC;//send_req->src_id;

        /* Get DA address */
        mti = send_req->tpdu[0] & SMSAL_MTI_BITS;
        if (mti == SMSAL_MTI_SUBMIT || mti == SMSAL_MTI_COMMAND)
        {
            retval = smsal_get_dest_addr_from_tpdu(mti,
                                                  send_req->tpdu,
                                                  &(aux_info->sat_addr.dest_addr));

        }
        else
            retval = KAL_FALSE;
    }
    else
        retval = KAL_FALSE;

    if (KAL_FALSE == retval)
    {
        if (access_id != SMSAL_MAX_PENDING_ACT)
        {
            smsal_free_pending_act(access_id);
        }

        smsal_sat_send_cnf(send_req->src_id,
                           SAT_CMD_DATA_NOT_UNDERSTAND_BY_ME,
                           SAT_NO_SPECIFIC_CAUSE);
        return;
    }
    
    /* Get SC address */
    if (send_req->sc_addr.addr_length > 0)
    {
        l4_addr2_sms_rp_addr(&(send_req->sc_addr), &(aux_info->sat_addr.sc_addr));
    }
    else
    {
        /* use default SCA */
        /* if no sc from STK, use default one. (11.14 6.6.9 send short message) */
        aux_info->sat_addr.sc_addr = smsal_para_ptr->profile.profile[0].sca;
    }

    /* If not ready, pend request. */
    if (need_pending == KAL_TRUE)
        return;

    smsal_send_by_sim_ctrl(access_id, SMSAL_SAT_SEND_FROM_SAT);
}

void smsal_process_sat_send_msg(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_sat_send_req_struct *send_req;
    smsal_send_sms_aux_info_struct *send_aux_info;
    smsal_mti_enum mti;
    kal_uint8 *new_tpdu_ptr;
    kal_uint16 newtpdulength;

    send_req = (l4csmsal_sat_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    send_aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if (send_aux_info->is_da_modified == KAL_TRUE)
    {
        mti = send_req->tpdu[0] & SMSAL_MTI_BITS;
        if (mti == SMSAL_MTI_SUBMIT || mti == SMSAL_MTI_COMMAND)
        {
            send_aux_info->peer_to_send
            = smsal_modify_da_in_tpdu(mti,
                                      send_req->tpdu,
                                      send_req->tpdu_length,
                                      send_aux_info->sat_addr.dest_addr.addr_length,
                                      send_aux_info->sat_addr.dest_addr.addr_bcd);

            new_tpdu_ptr = get_peer_buff_pdu(send_aux_info->peer_to_send, &newtpdulength);
            kal_mem_set(send_req->tpdu, 0xff, send_req->tpdu_length);
            kal_mem_cpy(send_req->tpdu, new_tpdu_ptr, newtpdulength);
            send_req->tpdu_length = (kal_uint8)newtpdulength;

            /* Modify original SC address */
            sms_rp_addr2_l4_addr(&(send_aux_info->sat_addr.sc_addr), &(send_req->sc_addr));
        }
    }

    if ((send_req->tpdu[0] & SMSAL_MTI_BITS) == SMSAL_MTI_SUBMIT)
    {
        smsal_sat_send_msg(send_req, send_aux_info->msg_ref);
    }
    else
    {
        smsal_sat_send(MSG_ID_SMS_COMMAND, send_req, send_aux_info->msg_ref);
        kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__COMMAND);
    }

}                                       /* end of smsal_sat_send_handler */
#endif /* __SAT__ */

void smsal_new_app_data_ind(smsal_tpdu_decode_struct *tpdu, kal_uint16 dest_id)
{
    kal_uint16 msg_len;
    peer_buff_struct *peer_buff_ptr;
    l4csmsal_app_data_ind_struct *data_ind_ptr;

    if (tpdu->mti != SMSAL_MTI_DELIVER)
        return;

    data_ind_ptr = (l4csmsal_app_data_ind_struct *)
                    construct_local_para(sizeof(l4csmsal_app_data_ind_struct), TD_CTRL);

    peer_buff_ptr = smsal_get_user_data_content(tpdu , &msg_len,
                                                &data_ind_ptr->oa,
                                                data_ind_ptr->scts
                                                );
    /* MAUI_00374512 JAVA_In WMADemo,Send one empty SMS to myself then it receive from MMI
    if (peer_buff_ptr == NULL)
    {
        free_local_para((local_para_struct *) data_ind_ptr);
        return;
    }
    */

    data_ind_ptr->dest_mod_id = dest_id;
    data_ind_ptr->dest_port = (kal_uint16)tpdu->port.dest_port;
    data_ind_ptr->src_port = (kal_uint16)tpdu->port.src_port;
    data_ind_ptr->message_len = msg_len;
    data_ind_ptr->dcs = smsal_dcs_to_mmi(tpdu->data.deliver_tpdu.dcs);
    data_ind_ptr->mti = tpdu->mti;

#if defined(__SMS_STORAGE_BY_MMI__)
    kal_mem_cpy(&(data_ind_ptr->concat_info), &(tpdu->concat_info), sizeof(smslib_concat_struct));
#else
    data_ind_ptr->concat_info = tpdu->concat_info;
#endif

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_APP_DATA_IND,
                          (local_para_struct *) data_ind_ptr,
                          peer_buff_ptr);
    return;
}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_startup_read_msg_ind(smsal_pdu_decode_struct *pdu_decode,
                                kal_uint16              index,
                                kal_uint8               status,
                                kal_uint8               *startup_seq_num,
                                kal_uint8               *scts_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_startup_read_msg_ind_struct *msg_ind;
    peer_buff_struct *peer_ptr;

    msg_ind = (l4csmsal_startup_read_msg_ind_struct *)
        construct_local_para(sizeof(l4csmsal_startup_read_msg_ind_struct), TD_CTRL);

    (*startup_seq_num)--;

    SMSAL_ASSERT((*startup_seq_num) != 0xff);

    msg_ind->dest = SMSAL_TO_LMI;
    msg_ind->startup_seq_num = *startup_seq_num;
    msg_ind->mti = (kal_uint8) pdu_decode->tpdu.mti;
    msg_ind->index = index;
    msg_ind->storage_type = (&(smsal_cntx_ptr->message_box[index]))->storage_type;

    if (pdu_decode->tpdu.port.dest_port == SMSAL_INVALID_PORT_NUM)
        msg_ind->dest_port = 0;
    else
        msg_ind->dest_port = (kal_uint16) pdu_decode->tpdu.port.dest_port;

    if (pdu_decode->tpdu.port.src_port == SMSAL_INVALID_PORT_NUM)
        msg_ind->src_port = 0;
    else
        msg_ind->src_port = (kal_uint16) pdu_decode->tpdu.port.src_port;

    if (scts_ptr != NULL)
        kal_mem_cpy(msg_ind->scts, scts_ptr, 7);

    smsal_get_ext_status(status, &(msg_ind->status));

    msg_ind->concat_info = pdu_decode->tpdu.concat_info;

    peer_ptr = smsal_get_msg_content(KAL_FALSE, /* rmi_use_hex */
                                     pdu_decode,
                                     &(msg_ind->message_len),
                                     &(msg_ind->msg_header)
                                     );                                              

    /* if peer_ptr == NULL, there is no content. */

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_STARTUP_READ_MSG_IND,
                          (local_para_struct *) msg_ind,
                          peer_ptr);

}                                       /* end of smsal_direct_msg_to_l4c */

void smsal_pending_act_hdlr(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8  id;
    kal_uint16 index;

    l4csmsal_read_req_struct *read_req;
#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
    l4csmsal_read_raw_data_req_struct *read_raw_req;
#endif

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE &&
            (smsal_cntx_ptr->pending_act[id].action_status & 0x80) == 0x00)
        {
            switch ((&(smsal_cntx_ptr->pending_act[id]))->act_code)
            {
#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
                case SMSAL_READ_RAW_DATA:
                    read_raw_req = (l4csmsal_read_raw_data_req_struct *) ((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);
                    index = read_raw_req->index;
                    if( smsal_is_index_valid(index) )
                    {
                        smsal_cntx_ptr->pending_act[id].action_status |= 0x80;
                        smsal_read_short_msg(id,
                            (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                            (&(smsal_cntx_ptr->message_box[index]))->record_no);
                    }
                    else if( ((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_INVALID) ||
                             ((&(smsal_cntx_ptr->message_box[index]))->state & SMSAL_MB_ENTRY_FREE == SMSAL_MB_ENTRY_FREE ))
                    {
                        smsal_read_raw_data_error(read_raw_req->src_id, INVALID_MEM_INDEX);
                        smsal_free_pending_act(id);
                    }
                   
                    break;
#endif
                case SMSAL_READ:
                    if ( (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code == SMSAL_READ_INDEX )
                    {
                        read_req = (l4csmsal_read_req_struct *) ((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);
                        index = read_req->index;
                        if( smsal_is_index_valid(index) )
                        {
                            smsal_cntx_ptr->pending_act[id].action_status |= 0x80;
                            smsal_read_short_msg(id,
                                (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                                (&(smsal_cntx_ptr->message_box[index]))->record_no);
                        }
                        else if( ((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_INVALID) ||
                                 (((&(smsal_cntx_ptr->message_box[index]))->state & SMSAL_MB_ENTRY_FREE) == SMSAL_MB_ENTRY_FREE ))
                        {
                            smsal_read_error(read_req->src_id, INVALID_MEM_INDEX);
                            smsal_free_pending_act(id);
                        }
                    }
                    
                    break;

                default:
                    break;
            }                           /* switch */
        }                               /* if (in_use) */
    }                                   /* for */

}                                       /* end of smsal_init_pending_act_hdlr */
#endif
