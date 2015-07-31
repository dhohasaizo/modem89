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
 * smsal_parameter.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to handling of SMS parameters.
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

/* SMSAL <--> L4C */
#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"

#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"


/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"
#include "smsal_l4c_funcs.h"
#include "smsal_sms.h"
#include "smsal_other_funcs.h"
#include "smsal_storage.h"
#include "smsal_parameter.h"
#include "smsal_msg_proc.h"
#include "smsal_utils.h"
#ifdef __CB__
#include "smsal_cb.h"
#endif

/* SIM */
#include "sim_common_enums.h"

/* PHB Utilities */
#include "phb_utils.h"

/* PHB ext1 */
#include "nvram_data_items.h"
#include "nvram_editor_data_item.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "l4_msgid.h"

/*****************************************************************************
 * 
 * Following functions are intended for reading parameters from SIM
 *
 ****************************************************************************/
void smsal_write_nvm_params(smsal_file_enum  file_id,
                            kal_uint16       record_no,
                            kal_uint16       aux_data,
                            void             *data_to_write,
                            kal_uint8        access_id)
{
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len = 0;

    switch (file_id)
    {
        case NVRAM_EF_SMSAL_COMMON_PARAM_LID:
            pdu_len = NVRAM_EF_SMSAL_COMMON_PARAM_SIZE;
            break;
        case NVRAM_EF_SMSAL_MWIS_LID:
            pdu_len = NVRAM_EF_SMSAL_MWIS_SIZE;
            break;
        case NVRAM_EF_SMSAL_MAILBOX_ADDR_LID:
            pdu_len = NVRAM_EF_SMSAL_MAILBOX_ADDR_SIZE;
            break;
        case NVRAM_EF_SMSAL_SMSP_LID:
            pdu_len = NVRAM_EF_SMSAL_SMSP_SIZE;
            break;
    }

    peer_ptr = (peer_buff_struct *) construct_peer_buff(pdu_len, 0, 0, TD_CTRL);

    pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);

    switch (file_id)
    {
        case NVRAM_EF_SMSAL_COMMON_PARAM_LID:
            kal_mem_cpy(pdu_ptr, data_to_write, sizeof(smsal_nvm_common_param_struct));
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
            break;

        case NVRAM_EF_SMSAL_MWIS_LID:
            //smsal_encode_mwis((kal_uint8) (record_no - 1), pdu_ptr);
            smsal_encode_nvram_mwis_rec((kal_uint8) (record_no - 1) /* msp */,
                                        (kal_uint8) aux_data /* line_no */, pdu_ptr);
            if( aux_data == SMSAL_LINE_2 )
            {
#ifdef __REL4__
#ifdef __SMS_MSP_UP_TO_4__
                record_no = 5;
                // LINE2 stored in record #5,
                // #1,#2,#3,#4 are msp
#else
                record_no = 3;
                // LINE2 stored in record #3,
                // #1,#2 are msp
#endif
#else
                record_no = 2;
                // LINE2 stored in record #2,
                // #1 is line 1
#endif //__REL4__
            }

            break;

        case NVRAM_EF_SMSAL_MAILBOX_ADDR_LID:
            smsal_encode_mailbox_addr((smsal_mailbox_addr_struct *) data_to_write, pdu_ptr, KAL_FALSE);
            break;
        case NVRAM_EF_SMSAL_SMSP_LID:
            kal_mem_cpy(pdu_ptr, data_to_write, NVRAM_EF_SMSAL_SMSP_SIZE);
            break;
    }

    smsal_write_to_nvram(access_id, file_id, record_no, peer_ptr);

}                                       /* end of smsal_write_nvm_params */


void smsal_fill_pending_common_param(l4csmsal_set_common_para_req_struct *set_req, 
                                     kal_uint8 act_id)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_nvm_common_param_struct *common;
    smsal_set_param_aux_info_struct *aux_info;

    aux_info = (smsal_set_param_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info;

    if ((set_req->para_ind & SMSAL_COM_PARA_MAILBOX_ADDR) == SMSAL_COM_PARA_MAILBOX_ADDR)
    {
        //aux_info->set_ind |= 0x00000002;
        aux_info->set_ind |= 0x00000012;
        return;
    }

    #ifdef __REL4__
    if ((set_req->para_ind & SMSAL_COM_PARA_MBI_NUM) == SMSAL_COM_PARA_MBI_NUM)
    {
        aux_info->set_ind |= 0x00000008;
        return;
    }
    #endif

    common = (smsal_nvm_common_param_struct *)
              get_ctrl_buffer(sizeof(smsal_nvm_common_param_struct));

    aux_info->set_ind |= 0x00000001;
    aux_info->common = common;

    /* fill pending struct for COMMON PARAM */
    common->fo = smsal_para_ptr->common.fo;
    common->bearer_service = smsal_para_ptr->common.bearer_service;
    common->status_report = smsal_para_ptr->common.status_report;
    common->reply_path = smsal_para_ptr->common.reply_path;

    /* SMSS file is not present. */
    // MAUI_01748085 only one storage updated and send no-matter SIM reject
    /* MAUI_01629973 [SMSAL][Revise] use nvram backup smss and update sim at best effort */
    if (IS_FLAG_SET(SMSAL_SIM_SMSS_FLAG) == KAL_FALSE)
    {
        common->last_used_tp_mr = smsal_cntx_ptr->msg_ref;   /* save message reference */
    }

    /* If MEM_EXD_FLAG set, memory capacity exceed */
    if (IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE)
    {
        common->mem_capacity_available = SMSAL_MEM_EXCEED;
    }
    else
    {
        common->mem_capacity_available = SMSAL_MEM_AVAILABLE;
    }

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
    common->all_lang_on = smsal_cb_data_ptr->all_lang_on;
    common->cbch_req = smsal_cb_data_ptr->cbch_req;
    common->rmi_act_pfile_id = smsal_para_ptr->rmi.act_pfile_id;

    if ((set_req->para_ind & SMSAL_COM_PARA_FO) == SMSAL_COM_PARA_FO)
        common->fo = set_req->fo;

    if ((set_req->para_ind & SMSAL_COM_PARA_BEARER) == SMSAL_COM_PARA_BEARER)
        common->bearer_service = set_req->bearer_serivce;

    if ((set_req->para_ind & SMSAL_COM_PARA_STATUS_REP) == SMSAL_COM_PARA_STATUS_REP)
        common->status_report = set_req->status_report;

    if ((set_req->para_ind & SMSAL_COM_PARA_REPLY_PATH) == SMSAL_COM_PARA_REPLY_PATH)
        common->reply_path = set_req->reply_path;

    if ((set_req->para_ind & SMSAL_COM_PARA_PREFER_MEM) == SMSAL_COM_PARA_PREFER_MEM)
    {
        common->prefer_mem1 = (smsal_storage_enum) set_req->prefer_mem.mem1;
        common->prefer_mem2 = (smsal_storage_enum) set_req->prefer_mem.mem2;
        common->prefer_mem3 = (smsal_storage_enum) set_req->prefer_mem.mem3;
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_RESTORE_PROFILE) == SMSAL_COM_PARA_RESTORE_PROFILE)
    {
        common->rmi_act_pfile_id = set_req->dest_no;
    }

#ifdef __CB__
    if ((set_req->para_ind & SMSAL_COM_PARA_ALL_CB_LANG) == SMSAL_COM_PARA_ALL_CB_LANG)
    {
        common->all_lang_on = set_req->is_all_language_on;
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_CBCH_REQ) == SMSAL_COM_PARA_CBCH_REQ)
    {
        common->cbch_req = (kal_bool) set_req->cbch_req;

    #if defined(__GEMINI__) && defined(__ETWS_SUPPORT__)
        if ((set_req->cbch_req == KAL_FALSE) && (smsal_cb_data_ptr->set_type == L4C_ETWS_CB_START_RX))
        {
            smsal_cb_data_ptr->set_type = L4C_ETWS_CB_STOP_RX;
        }
    #endif
    }
#endif /* __CB__ */

}                                       /* end of smsal_fill_pending_common_param */

void smsal_fill_pending_profile_param(l4csmsal_set_profile_para_req_struct *set_req,
                                      kal_uint8 act_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 len, max_name_len;
    smsal_profile_element_struct *profile;
    smsal_set_param_aux_info_struct *aux_info;

    aux_info = (smsal_set_param_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info;

    profile = (smsal_profile_element_struct *)
               get_ctrl_buffer(sizeof(smsal_profile_element_struct));

    aux_info->set_ind |= 0x00000004;
    aux_info->profile = profile;

    /* fill pending struct for PROFILE PARAM */
    *profile = smsal_para_ptr->profile.profile[set_req->profile_no];

    if ((set_req->para_ind & SMSAL_PARA_PID) == SMSAL_PARA_PID)
    {
        profile->para_ind &= SMSAL_SMSP_PID_BITS;
        profile->pid = set_req->pid;
    }
    if ((set_req->para_ind & SMSAL_PARA_DCS) == SMSAL_PARA_DCS)
    {
        profile->para_ind &= SMSAL_SMSP_DCS_BITS;
        profile->dcs = set_req->dcs;
    }

    if ((set_req->para_ind & SMSAL_PARA_VP) == SMSAL_PARA_VP)
    {
        profile->para_ind &= SMSAL_SMSP_VP_BITS;
        profile->vp = set_req->vp;
    }
    if ((set_req->para_ind & SMSAL_PARA_SCA) == SMSAL_PARA_SCA)
    {
        profile->para_ind &= SMSAL_SMSP_SCA_BITS;
        l4_addr2_sms_rp_addr(&set_req->sca, &profile->sca);
    }

    if ((set_req->para_ind & SMSAL_PARA_PROFILE_NAME) == SMSAL_PARA_PROFILE_NAME)
    {
        if (smsal_para_ptr->profile.alpha_size > SMSAL_PROFILE_NAME_LEN)
            max_name_len = SMSAL_PROFILE_NAME_LEN;
        else
            max_name_len = smsal_para_ptr->profile.alpha_size;

        kal_mem_set(profile->profile_name.name, 0, max_name_len);

        if (set_req->profile_name.name_length > max_name_len)
            len = max_name_len;
        else
            len = set_req->profile_name.name_length;

        profile->profile_name.name_dcs = set_req->profile_name.name_dcs;
        profile->profile_name.name_length = len;

        kal_mem_cpy(profile->profile_name.name, set_req->profile_name.name, len);
    }

    if ((set_req->para_ind & SMSAL_PARA_SAVE_PROFILE) == SMSAL_PARA_SAVE_PROFILE)
    {
        *profile = smsal_para_ptr->rmi.profile;
        /* Don't change profile name for AT path */
        profile->profile_name = smsal_para_ptr->profile.profile[set_req->profile_no].profile_name;
    }

}                                       /* end of smsal_fill_pending_profile_param */

void smsal_set_common_param(smsal_nvm_common_param_struct *common, kal_uint16 para_ind)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
#ifdef __CB__
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
#endif
	  
    smsal_para_ptr->common.fo = common->fo;
    smsal_para_ptr->common.bearer_service = common->bearer_service;
    smsal_para_ptr->common.status_report = common->status_report;
    smsal_para_ptr->common.reply_path = common->reply_path;

    /* SMSS file is not present. */
    // MAUI_01748085 only one storage updated and send no-matter SIM reject
    /* MAUI_01629973 [SMSAL][Revise] use nvram backup smss and update sim at best effort */
    /* if smss data in SIM is ok. need not use NVM */
    if (IS_FLAG_SET(SMSAL_SIM_SMSS_FLAG) == KAL_FALSE)
    {
        smsal_cntx_ptr->msg_ref = common->last_used_tp_mr;   /* save message reference */

        /* 
         * Save the memory capacity exceeded notifiation flag
         */
        if ((common->mem_capacity_available & 0x01) == 0x01)
        {
            CLR_FLAGS(MEM_EXD_FLAG);
        }
        else
        {
            SET_FLAGS(MEM_EXD_FLAG);
        }
    }

    smsal_para_ptr->common.vp_format = common->vp_format;
    smsal_para_ptr->common.sms_fdn_off = common->sms_fdn_off;

    #ifdef __REL4__
        if (common->selected_msp <= SMSAL_MAX_MSP_NUM)
            smsal_para_ptr->common.selected_msp = common->selected_msp;
        else
    #endif
            smsal_para_ptr->common.selected_msp = 0;

    smsal_para_ptr->rmi.prefer_mem1 = common->prefer_mem1;
    smsal_para_ptr->rmi.prefer_mem2 = common->prefer_mem2;
    smsal_para_ptr->rmi.prefer_mem3 = common->prefer_mem3;
    smsal_para_ptr->rmi.act_pfile_id = common->rmi_act_pfile_id;

#ifdef __CB__
    smsal_cb_data_ptr->all_lang_on = common->all_lang_on;
    smsal_cb_data_ptr->cbch_req = common->cbch_req;
#endif

    if ((para_ind & SMSAL_COM_PARA_RESTORE_PROFILE) == SMSAL_COM_PARA_RESTORE_PROFILE)
    {
        smsal_cres_set(common->rmi_act_pfile_id);
    }

#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
    /*
     * SCR: 1418
     * * if ClassB, if user change the SMS preferred bearer service,
     * * notify SMS module.
     */
    if (para_ind & SMSAL_COM_PARA_BEARER)
    {
        smsal_prefer_sms_bearer_change();
    }
#endif

#ifdef __CB__
    if (para_ind & SMSAL_COM_PARA_ALL_CB_LANG)
    {
        smsal_cb_update_rmc_cb();
    }

    if (para_ind & SMSAL_COM_PARA_CBCH_REQ)
    {
        smsal_cbch_req_handler(SMSAL_TO_LMI, common->cbch_req);
    }
#endif

}                                       /* end of smsal_set_common_param */

void smsal_set_profile_param(l4csmsal_set_profile_para_req_struct * set_req, kal_uint8 act_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    smsal_para_ptr->profile.profile[set_req->profile_no] =
        *(((smsal_set_param_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info)->profile);
}                                       /* end of smsal_set_profile_param */

void smsal_set_mailbox_addr(l4csmsal_set_common_para_req_struct *set_req, kal_uint8 act_id)
{
    smsal_para_ptr_g->mailbox.addr[set_req->dest_no] = set_req->mailbox_addr;
}                                       /* end of smsal_set_mailbox_addr */

#ifdef __REL4__
void smsal_set_mbi(l4csmsal_set_common_para_req_struct *set_req)
{
    kal_uint8 i;

    // MAUI_01926235 [SMSAL][FixBug] REL4 MBI <index> does not sync with MMI 
    for( i=0 ; i<NUM_OF_MSG_WAITING_TYPE ; i++)
    {
        //smsal_para_ptr_g->mailbox.mbi[set_req->msp_no].mbi_id[i] = set_req->mbi.mbi_id[i] + 1;
        // has +1 in smsal_save_parameter()
        // index 0 -> record 1
        // index 1 -> record 2
        // index 2 -> record 3
        // ...
        smsal_para_ptr_g->mailbox.mbi[set_req->msp_no].mbi_id[i] = set_req->mbi.mbi_id[i];
    }
}                                       /* end of smsal_set_mbi */
#endif

void smsal_save_parameter(kal_uint8 act_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_set_param_aux_info_struct *aux_info;

    aux_info = (smsal_set_param_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->aux_info;

    if ((aux_info->set_ind & 0x00000001) == 0x00000001)
    {
        /* Save COMMON parameter */
        (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_SAVE_COMMON_PARAM;
        smsal_write_nvm_params(NVRAM_EF_SMSAL_COMMON_PARAM_LID, 1, 0,    /* dummy */
                               (void *)aux_info->common, act_id);
    }
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
    else if ((aux_info->set_ind & 0x00000002) == 0x00000002)
    {
        l4csmsal_set_common_para_req_struct *set_req;

        set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr;

        /* Save MAILBOX address */
        (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_SAVE_MAILBOX_ADDR;

    #if defined (__REL4__) || defined (__CPHS__)
        #if defined (__REL4__) && defined (__CPHS__)
        if ((IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE) || (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE))
        #elif defined (__REL4__)
        if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
        #elif defined (__CPHS__)
        if (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE)
        #endif
        {
            /* save in SIM */
            smsal_file_enum  file_id;
            smsal_file_enum  ext_file_id;
            kal_uint16 addr_len = SMSAL_MAILBOX_NUM_LEN + smsal_para_ptr_g->mailbox.alpha_size;
            //smsal_mailbox_addr_struct *mb_addr = &(smsal_para_ptr_g->mailbox.addr[set_req->dest_no]);
            
            kal_uint8 *addr_data = get_ctrl_buffer(addr_len);


            #if defined (__REL4__)
            if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
            {
                file_id = FILE_MBDN_IDX;
                ext_file_id = FILE_EXT6_IDX;
            }
            else
            #endif
            {
                file_id = FILE_MAILBOX_NUM_IDX;
                ext_file_id = FILE_EXT1_IDX;
            }
                

            /* replace ext id */
            if ((IS_FLAG_SET(SMSAL_EXT_FLAG) == KAL_TRUE) &&
                ((aux_info->set_ind & 0x00000010) == 0x00000010))
            {
                kal_uint16 ext_para_id = set_req->mailbox_addr.extension_id;
                kal_uint8 *ext_data = get_ctrl_buffer(SMSAL_EXT_LEN);
                kal_bool update_extfile = KAL_TRUE;


                if (set_req->mailbox_addr.addr.addr_length > SMSAL_ADDR_LEN)
                {
                    if (ext_para_id == 0xff)
                    {
                        #if defined (__REL4__)
                        if (file_id == FILE_MBDN_IDX)
                        {
                            /* use SMSAL ext table to find free record in ext1, return from 0 */
                            ext_para_id = 1+smsal_bitmap_get_free_index((kal_uint16)smsal_para_ptr_g->mailbox.ext_rec_num,
                                                                        (kal_uint8*)smsal_para_ptr_g->mailbox.rec_bitmap);
                            smsal_bitmap_set_index((kal_uint16)(ext_para_id-1), smsal_para_ptr_g->mailbox.rec_bitmap);
                        }
                        else
                        #endif
                        {
                            /* use PHB table to find free record in ext1, return from 1 */
                            #if 0 //waitphb
/* under construction !*/
/* under construction !*/
                            #else
                                /* use SMSAL ext table to find free record in ext1, return from 0 */
                                ext_para_id = 1+smsal_bitmap_get_free_index((kal_uint16)smsal_para_ptr_g->mailbox.ext_rec_num,
                                                                            (kal_uint8*)smsal_para_ptr_g->mailbox.rec_bitmap);
                            #endif

                            /* keep in SMSAL ext table for PHB query */
                            smsal_bitmap_set_index((kal_uint16)(ext_para_id-1),
                                                   (kal_uint8*)(smsal_para_ptr_g->mailbox.rec_bitmap));
                        }

                        set_req->mailbox_addr.extension_id = (kal_uint8) ext_para_id;
                        
                    }

                    smsal_encode_mailbox_ext_addr(&set_req->mailbox_addr, ext_data);

                }
                else if (ext_para_id != 0xff)
                {
                        #if defined (__REL4__)
                        if (file_id == FILE_MBDN_IDX)
                        {
                            /* use SMSAL ext table to set free record in ext6, start from 0 */
                            smsal_bitmap_clr_index((kal_uint16)(ext_para_id-1),
                                                   smsal_para_ptr_g->mailbox.rec_bitmap);
                        }
                        else
                        #endif
                        {
                            /* use PHB table to set free record in ext1, return from 1 */
                            #if 0 //waitphb
/* under construction !*/
                            #endif
                            /* use SMSAL ext table to set free record in ext1, start from 0 */
                            smsal_bitmap_clr_index((kal_uint16)(ext_para_id-1),
                                                   (kal_uint8*)(smsal_para_ptr_g->mailbox.rec_bitmap));
                        }

                    //mb_addr->extension_id = 0xff;
                    set_req->mailbox_addr.extension_id = 0xff;
                    
                    kal_mem_set(ext_data, 0xff, SMSAL_EXT_LEN);

                }
                else
                {
                    update_extfile = KAL_FALSE;
                    aux_info->set_ind &= 0x000000ef;
                }

                if (update_extfile == KAL_TRUE)
                {
                    /* Save MAILBOX address */
                    (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_SAVE_EXT_MAILBOX_ADDR;

                    smsal_write_to_sim(act_id,//SMSAL_MAX_PENDING_ACT,
                                       ext_file_id,
                                       ext_data,
                                       SMSAL_EXT_LEN,       /* length */
                                       ext_para_id          /* record no */
                                       );

                    free_ctrl_buffer(ext_data);
                    free_ctrl_buffer(addr_data);
                    return;
                }

                free_ctrl_buffer(ext_data);
            }

            smsal_encode_mailbox_addr(&set_req->mailbox_addr, addr_data, KAL_TRUE);

            smsal_write_to_sim(act_id,
                               file_id,
                               addr_data,
                               addr_len,       /* length */
                               (kal_uint16) (set_req->dest_no + 1));      /* record no */
            
            free_ctrl_buffer(addr_data);
        }
        else
        {
            /* save in NVRAM */
            smsal_write_nvm_params(NVRAM_EF_SMSAL_MAILBOX_ADDR_LID,
                                   (kal_uint16)(set_req->dest_no+1), /* record no */
                                   0,
                                   (void*) (&set_req->mailbox_addr),
                                   act_id);
        }

    #else
        smsal_write_nvm_params(NVRAM_EF_SMSAL_MAILBOX_ADDR_LID,
                               (kal_uint16) (set_req->dest_no + 1),    /* record no */
                               0,
                               (void *)(&set_req->mailbox_addr),
                               act_id);

    #endif /* __CPHS__ */

    }
#endif //__SMS_STORAGE_BY_MMI__ WISDOM_MMI
    else if ((aux_info->set_ind & 0x00000004) == 0x00000004)
    {
        l4csmsal_set_profile_para_req_struct *set_req;

        /* Save PROFILE parameter */
        kal_uint8 *data;
        kal_uint8 smsp_len = SMSAL_SMSP_LEN + smsal_para_ptr->profile.alpha_size;

        set_req = (l4csmsal_set_profile_para_req_struct *)
                   (&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr;

        data = (kal_uint8 *) get_ctrl_buffer((kal_uint16) smsp_len);
        (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_SAVE_PROFILE_PARAM;
        smsal_encode_smsp(aux_info->profile, data);

        if (IS_FLAG_SET(SMSAL_SIM_SMSP_FLAG) == KAL_TRUE)
        {
            /* save in SIM */
            smsal_write_to_sim(act_id,
                               FILE_SMSP_IDX,
                               data,
                               smsp_len,   /* length */
                               (kal_uint16) (set_req->profile_no + 1));   /* record no */
            
            free_ctrl_buffer(data);
        }
        else
        {
            /* save in NVRAM */
            smsal_write_nvm_params(NVRAM_EF_SMSAL_SMSP_LID,
                                   (kal_uint16) (set_req->profile_no + 1),     /* record no */
                                   0,
                                   (void *)data,
                                   act_id);
        }
    }
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
#ifdef __REL4__
    else if ((aux_info->set_ind & 0x00000008) == 0x00000008)
    {
        l4csmsal_set_common_para_req_struct *set_req;
        kal_uint8 i;

        set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[act_id]))->local_para_ptr;

        /* Save MAILBOX address */
        (&(smsal_cntx_ptr->pending_act[act_id]))->sub_act_code = SMSAL_SAVE_MBI_PARAM;

        if (IS_FLAG_SET(REL4_MBI_FLAG) == KAL_TRUE)
        {
            /* save in SIM */
            kal_uint8 *mbi_data = get_ctrl_buffer(smsal_para_ptr_g->mailbox.mbi_rec_length);

            //MAUI_01926235 [SMSAL][FixBug] REL4 MBI <index> does not sync with MMI 
            for(i=0 ; i<NUM_OF_MSG_WAITING_TYPE ; i++)
            {
                set_req->mbi.mbi_id[i] += 1;
                // 0 -> record 1
                // 1 -> record 2
                // 2 -> record 3
                // ...
            }

            smsal_encode_mbi(&set_req->mbi, mbi_data, smsal_para_ptr_g->mailbox.mbi_rec_length);
            
            smsal_write_to_sim(act_id,
                               FILE_MBI_IDX,
                               mbi_data,
                               smsal_para_ptr_g->mailbox.mbi_rec_length,       /* length */
                               (kal_uint16) (set_req->msp_no + 1)      /* record no */
                );

            free_ctrl_buffer(mbi_data);
        }
        else
        {
            smsal_set_param_cnf(L4C_ERROR,
                                set_req->src_id,
                                MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF,
                                (smsal_error_cause_enum) SMS_SIM_FAILURE);

            smsal_free_pending_act(act_id);

        }
    }
#endif
#endif //__SMS_STORAGE_BY_MMI__ WISDOM_MMI
}                                       /* end of smsal_save_parameter */


/***********************************
 * 
 * Main SAVE CNF/REJ Handlers
 *
 ***********************************/
void smsal_save_parameter_cnf(kal_uint8 id, kal_uint8 sub_act_code)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_set_param_aux_info_struct *aux_info;
    msg_type msg_id = 0;
    kal_uint8 src_id = 0;

    aux_info = (smsal_set_param_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    switch (sub_act_code)
    {
        case SMSAL_SAVE_COMMON_PARAM:  /* clear bit 0 */
        {
            l4csmsal_set_common_para_req_struct *set_req;

            set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            aux_info->set_ind &= 0x000000fe;
            smsal_set_common_param(aux_info->common, set_req->para_ind);

            msg_id = MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }

        case SMSAL_SAVE_PROFILE_PARAM: /* clear bit 2 */
        {
            l4csmsal_set_profile_para_req_struct *set_req;

            set_req = (l4csmsal_set_profile_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            aux_info->set_ind &= 0x000000fb;
            smsal_set_profile_param(set_req, id);

            msg_id = MSG_ID_L4CSMSAL_SET_PROFILE_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }

        case SMSAL_SAVE_EXT_MAILBOX_ADDR:
        {
            aux_info->set_ind &= 0x000000ef;
            break;
        }

        case SMSAL_SAVE_MAILBOX_ADDR:  /* clear bit 1 */
        {
            l4csmsal_set_common_para_req_struct *set_req;

            set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            //aux_info->set_ind &= 0x000000fd;
            /* also clear ext flag */
            aux_info->set_ind &= 0x000000ed;
            smsal_set_mailbox_addr(set_req, id);

            msg_id = MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }

    #ifdef __REL4__
        case SMSAL_SAVE_MBI_PARAM:  /* clear bit 3 */
        {
            l4csmsal_set_common_para_req_struct *set_req;


            set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            aux_info->set_ind &= 0x000000f7;
            smsal_set_mbi(set_req);

            msg_id = MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }
    #endif

        default:
            smsal_free_pending_act(id);
            break;
    }

    /* all parameters are saved, send confirmation to L4C */
    if (aux_info->set_ind == 0)
    {
        smsal_set_param_cnf(L4C_OK,
                            src_id,
                            msg_id,
                            (smsal_error_cause_enum) 0  /* ingore error cause */
            );
        smsal_free_pending_act(id);

    }
    else
    {
        /* Save others parameters */
        smsal_save_parameter(id);
    }

}                                       /* end of smsal_save_parameter_cnf */


void smsal_save_parameter_rej(kal_uint8 id, kal_uint8 sub_act_code, kal_uint16 cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    msg_type msg_id = 0;
    kal_uint8 src_id = 0;

    switch (sub_act_code)
    {
        case SMSAL_SAVE_COMMON_PARAM:
        case SMSAL_SAVE_EXT_MAILBOX_ADDR:
        case SMSAL_SAVE_MAILBOX_ADDR:
        #ifdef __REL4__
        case SMSAL_SAVE_MBI_PARAM:
        #endif
        {
            l4csmsal_set_common_para_req_struct *set_req;

            set_req = (l4csmsal_set_common_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            msg_id = MSG_ID_L4CSMSAL_SET_COMMON_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }
        case SMSAL_SAVE_PROFILE_PARAM:
        {
            l4csmsal_set_profile_para_req_struct *set_req;

            set_req = (l4csmsal_set_profile_para_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            msg_id = MSG_ID_L4CSMSAL_SET_PROFILE_PARA_CNF;
            src_id = set_req->src_id;
            break;
        }
        default:
            break;
    }

    if (src_id >= RMMI_SRC)
    {
        cause = SMS_SIM_FAILURE;
    }

    smsal_set_param_cnf(L4C_ERROR, src_id, msg_id, (smsal_error_cause_enum) cause);

    smsal_free_pending_act(id);

}                                       /* end of smsal_save_parameter_rej */


/******************************************
 * 
 * Fucntions for Encode/Decode parameters
 *
 ******************************************/
void smsal_decode_smsp(kal_uint8 id, kal_uint8 data[], kal_uint16 length)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 param_ind = 0, i, add_len;
    kal_uint16 offset = 0;
    istring_type istring;
    smsal_profile_element_struct *profile = &smsal_para_ptr->profile.profile[id];

    /* Save the profile name */
    if (smsal_para_ptr->profile.alpha_size > 0)
    {
        /* decode the alpha id into l4 name format */
        istring.length = MAX_PS_NAME_SIZE;
        istring.data = profile->profile_name.name;
        profile->profile_name.name_length =
        istring_decode_from_sim(smsal_para_ptr->profile.alpha_size, data, &istring);
        profile->profile_name.name_dcs = istring.charset;
    }

    offset = smsal_para_ptr->profile.alpha_size;

    /* Save Parameter Indicator */
    param_ind = profile->para_ind = data[offset];
    offset++;

    /* Whether Destination address present */
    if ((param_ind | SMSAL_SMSP_DA_BITS) == SMSAL_SMSP_DA_BITS)
    {
        /* Save DA length */
        profile->da.addr_length = data[offset];

        /*
         * 10 bytes for storing bcd numbers,
         * * thus maximum 'useful' digits is 20 
         */
        if (profile->da.addr_length > 20)
            profile->da.addr_length = 20;

        /* Save DA Type/BCD numbers */
        kal_mem_cpy(profile->da.addr_bcd, &data[offset + 1], SMSAL_ADDR_LEN);
    }
    offset += 12;                       /* TP-DA */

    /* Whether SC address present */
    if ((param_ind | SMSAL_SMSP_SCA_BITS) == SMSAL_SMSP_SCA_BITS)
    {

        kal_mem_set(profile->sca.addr_bcd, 0xff, SMSAL_ADDR_LEN);

        /* Save SCA length */
        profile->sca.addr_length = data[offset];

        /* include addr type, maximum len is 11 */
        if (profile->sca.addr_length > SMSAL_ADDR_LEN)
            profile->sca.addr_length = SMSAL_ADDR_LEN;

        profile->sca.addr_bcd[0] = data[offset + 1];

        /* Save SCA Type/BCD numbers */
        add_len = profile->sca.addr_length;
        /* exclude type of number byte. i=0 */
        for (i = 1; i < add_len; i++)
        {
            kal_uint8 ch1, ch2;

            ch1 = data[offset + i + 1] & 0x0f;
            ch2 = (data[offset + i + 1] & 0xf0) >> 4;

            if (ch1 == 0x0f)
            {
                /* exclude current byte. */
                profile->sca.addr_length = i;
                break;
            }
            else if (ch2 == 0x0f)
            {
                /* plus current byte. */
                profile->sca.addr_bcd[i] = data[offset + i + 1];
                profile->sca.addr_length = i + 1;
                break;
            }
            else
            {
                profile->sca.addr_bcd[i] = data[offset + i + 1];
            }
        }
    }
    offset += 12;                       /* SCA */

    /* Whether PID present */
    if ((param_ind | SMSAL_SMSP_PID_BITS) == SMSAL_SMSP_PID_BITS)
    {
        /* Save PID */
        /* MAUI_00562012 */
        /* [SMSAL][Revise] If SIM pid value is not supported, change it as SMSAL_DEFAULT_PID */
        switch (data[offset])
        {
            case SMSAL_DEFAULT_PID:   /* Text SMS */
            case SMSAL_G3_FAX_PID:    /* Group 3 telefax */
            case SMSAL_G4_FAX_PID:    /* Group 4 telefax */
            case SMSAL_PAGING_PID:    /* National Paging system */
            case SMSAL_EMAIL_PID:     /* E-mail SMS */
                profile->pid = data[offset];
                break;
            default:
                profile->pid = SMSAL_DEFAULT_PID;
        }
    }
    offset++;

    /* Whether DCS present */
    if ((param_ind | SMSAL_SMSP_DCS_BITS) == SMSAL_SMSP_DCS_BITS)
    {
        /* Save DCS */
        profile->dcs = data[offset];
    }
    offset++;

    /* Whether VP present */
    if ((param_ind | SMSAL_SMSP_VP_BITS) == SMSAL_SMSP_VP_BITS)
    {
        /* Save VP */
        profile->vp = data[offset];
    }

    /* Also refresh rmi profile, otherwise after SIM refresh, AT Command still get old value */
    if (id == smsal_para_ptr->rmi.act_pfile_id)
    {
        kal_mem_cpy(&(smsal_para_ptr->rmi.profile), profile, sizeof(smsal_profile_element_struct));
    }
}                                       /* end of smsal_decode_smsp */

void smsal_encode_smsp(smsal_profile_element_struct *profile, kal_uint8 data[])
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 param_ind = 0;
    kal_uint16 offset = 0;
    istring_type istring;

    /* Clear all bytes in the record of EFsmsp */
    kal_mem_set(data, 0xff, (SMSAL_SMSP_LEN + smsal_para_ptr->profile.alpha_size));

    /* Save the profile name */
    if (smsal_para_ptr->profile.alpha_size > 0)
    {
        kal_uint8 dummy_data[MAX_PS_NAME_SIZE];

        /* Encode l4 name format into alpha id */
        istring.charset = profile->profile_name.name_dcs;
        istring.data = profile->profile_name.name;
        istring.length = profile->profile_name.name_length;
        istring_encode_to_sim(CODING_AUTO, &istring, smsal_para_ptr->profile.alpha_size, data);

        /* get profile length */
        istring.length = MAX_PS_NAME_SIZE;
        istring.data = dummy_data;
        profile->profile_name.name_length =
        istring_decode_from_sim(smsal_para_ptr->profile.alpha_size, data, &istring);

    }

    offset = smsal_para_ptr->profile.alpha_size;

    /* Save Parameter Indicator */
    param_ind = data[offset] = profile->para_ind;
    offset++;

    /* Whether Destination address present */
    if ((param_ind | SMSAL_SMSP_DA_BITS) == SMSAL_SMSP_DA_BITS)
    {
        /* Save DA length */
        data[offset] = profile->da.addr_length;

        /* Save DA Type/BCD numbers */
        kal_mem_cpy(&data[offset + 1], profile->da.addr_bcd, SMSAL_ADDR_LEN);
    }
    offset += 12;

    /* Whether SC address present */
    if ((param_ind | SMSAL_SMSP_SCA_BITS) == SMSAL_SMSP_SCA_BITS)
    {
        /* Save SCA length */
        data[offset] = profile->sca.addr_length;

        /* Save SCA Type/BCD numbers */
        /* CR329845 [SMSAL][Revise] Reset the SC unused data element in SMSP file */
        //kal_mem_cpy(&data[offset + 1], profile->sca.addr_bcd, SMSAL_ADDR_LEN);
        kal_mem_cpy(&data[offset + 1], profile->sca.addr_bcd, profile->sca.addr_length);
    }
    offset += 12;

    /* Whether PID present */
    if ((param_ind | SMSAL_SMSP_PID_BITS) == SMSAL_SMSP_PID_BITS)
    {
        /* Save PID */
        data[offset] = profile->pid;
    }
    offset++;

    /* Whether DCS present */
    if ((param_ind | SMSAL_SMSP_DCS_BITS) == SMSAL_SMSP_DCS_BITS)
    {
        /* Save DCS */
        data[offset] = profile->dcs;
    }
    offset++;

    /* Whether VP present */
    if ((param_ind | SMSAL_SMSP_VP_BITS) == SMSAL_SMSP_VP_BITS)
    {
        /* Save VP */
        data[offset] = profile->vp;
    }
}                                       /* end of smsal_encode_smsp */

void smsal_decode_nvram_mwis_rec(kal_uint8 msp, kal_uint8 line_no, kal_uint8 * pdu_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;
    kal_uint8 check_num = 0;
    kal_uint8 i = 0;
    kal_uint8 waiting_ind = *pdu_ptr;
    smsal_mwis_struct *mwis;

    if( line_no == SMSAL_LINE_2 )
    {
        mwis = &(mb->mwis[SMSAL_LINE_2]);
    }
    else
    {
#ifdef __REL4__
        if( msp >= SMSAL_MAX_MSP_NUM )
        {
            return;
        }        
        mwis = &(mb->r4mwis[msp]);
#else
        mwis = &(mb->mwis[SMSAL_LINE_1]);
#endif
    }

    
    for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
    {
        check_num = *(pdu_ptr + i + 1);
        if ((waiting_ind & (1 << i)) != 0)
        {
            if (check_num == 0)
                mwis->waiting_num[i] = 1;
            else
                mwis->waiting_num[i] = check_num;
        }
        else
        {
            mwis->waiting_num[i] = 0;
        }
    
    }   
}                                       /* end of smsal_decode_mwis */


void smsal_encode_nvram_mwis_rec(kal_uint8 msp, kal_uint8 line_no, kal_uint8 *pdu_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 waiting_ind = 0;
    kal_uint8 check_num = 0;
    kal_uint8 i = 0;
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;
    smsal_mwis_struct mwis;

    if( line_no == SMSAL_LINE_2 )
    {
        mwis = mb->mwis[SMSAL_LINE_2];    
    }
    else
    {
#ifdef __REL4__
        if( msp >= SMSAL_MAX_MSP_NUM )
        {
            return;
        }        
        mwis = mb->r4mwis[msp];
#else
        mwis = mb->mwis[SMSAL_LINE_1];
#endif
    }

    /* *pdu_ptr     = mb->mwis[line_no].waiting_ind; */

    for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
    {
        check_num = mwis.waiting_num[i];
        if (check_num != 0)
        {
            *(pdu_ptr + (i+1)) = check_num;
            waiting_ind |= (1 << i);
        }
        else
        {
            *(pdu_ptr + (i+1)) = 0;
        }
    
    }
    *pdu_ptr = waiting_ind;
}

void smsal_encode_mailbox_addr(smsal_mailbox_addr_struct *mb_addr, kal_uint8 *pdu_ptr, kal_bool is_from_sim)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 offset;
    kal_uint8 alpha_size;
    istring_type istring;
    kal_uint8 addr_len;
    kal_uint8 dummy_data[MAX_PS_NAME_SIZE];

    alpha_size = smsal_para_ptr->mailbox.alpha_size;

    /* Clear all bytes in the record of EFsmsp */
    kal_mem_set(pdu_ptr, 0xff, (SMSAL_MAILBOX_NUM_LEN + alpha_size));

    /* Save the profile name */
    if (alpha_size > 0)
    {
        /* Encode l4 name format into alpha id */
        istring.charset = mb_addr->name.name_dcs;
        istring.data = mb_addr->name.name;
        istring.length = mb_addr->name.name_length;
        istring_encode_to_sim(CODING_AUTO, &istring, alpha_size, pdu_ptr);

        /* get name length */
        istring.length = MAX_PS_NAME_SIZE;
        istring.data = dummy_data;
        mb_addr->name.name_length = istring_decode_from_sim(alpha_size, pdu_ptr, &istring);
    }

    offset = alpha_size;

    /* Save address length */
    //*(pdu_ptr + offset++) = mb_addr->addr.addr_length;
    addr_len = mb_addr->addr.addr_length;

    /* Save AddrType/BCD numbers */
    if (is_from_sim == KAL_TRUE)
    {
        if (addr_len > SMSAL_ADDR_LEN)
        {
            *(pdu_ptr + offset++) = SMSAL_ADDR_LEN;
            addr_len = SMSAL_ADDR_LEN;
        }
        else
        {
            *(pdu_ptr + offset++) = addr_len;
        }

        kal_mem_cpy((pdu_ptr + offset), mb_addr->addr.addr_bcd, addr_len);
        offset += SMSAL_ADDR_LEN;
    }
    else
    {
        if (addr_len > SMSAL_ME_ADDR_LEN)
        {
            *(pdu_ptr + offset++) = SMSAL_ME_ADDR_LEN;
            addr_len = SMSAL_ME_ADDR_LEN;
        }
        else
        {
            *(pdu_ptr + offset++) = addr_len;
        }

        kal_mem_cpy((pdu_ptr + offset), mb_addr->addr.addr_bcd, addr_len);
        offset += SMSAL_ME_ADDR_LEN;
    }

    /* Save capability identifier */
    *(pdu_ptr + offset++) = mb_addr->capability_id;

#if defined (__CPHS__) || defined (__REL4__)
    if ((mb_addr->extension_id <= smsal_para_ptr_g->mailbox.ext_rec_num) &&
        (mb_addr->extension_id != 0))
    {
        /* Save extension 1 identifier */
        *(pdu_ptr + offset) = mb_addr->extension_id;
    }
    else
#endif
    {
        *(pdu_ptr + offset) = 0xff;
    }
}                                       /* end of smsal_encode_mailbox_addr */


void smsal_encode_mailbox_ext_addr(smsal_mailbox_addr_struct *mb_addr, kal_uint8 *pdu_ptr)
{
    kal_uint8 offset = 0;
    kal_uint8 ext_len = 0;

    /* Clear all bytes in the record of EFsmsp */
    kal_mem_set(pdu_ptr, 0xff, SMSAL_EXT_LEN);

    *(pdu_ptr + offset++) = 0x02; //rec type

    /* Save address length */
    ext_len = mb_addr->addr.addr_length - SMSAL_ADDR_LEN;
    *(pdu_ptr + offset++) = ext_len;

    /* Save AddrType/BCD numbers */
    kal_mem_cpy((pdu_ptr + offset), mb_addr->addr.addr_bcd + SMSAL_ADDR_LEN, ext_len);
    offset += (SMSAL_ADDR_LEN-1);

    /* Save capability identifier */
    *(pdu_ptr + offset++) = 0xff;
}                                       /* end of smsal_encode_mailbox_addr */


void smsal_decode_mailbox_addr(kal_uint8 line_no, kal_uint8 *pdu_ptr, kal_bool is_from_sim)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 alpha_size;
    kal_uint8 offset;
    kal_uint8 addr_len;
    istring_type istring;
    smsal_mailbox_addr_struct *mb_addr = &(smsal_para_ptr_g->mailbox.addr[line_no]);

    alpha_size = smsal_para_ptr->mailbox.alpha_size;

    /* decode the alpha id into l4 name format */
    istring.length = MAX_PS_NAME_SIZE;
    istring.data = mb_addr->name.name;
    mb_addr->name.name_length = istring_decode_from_sim(alpha_size, pdu_ptr, &istring);
    mb_addr->name.name_dcs = istring.charset;

    offset = alpha_size;

    /* Save Address length */
    addr_len = *(pdu_ptr + offset++);

    /* Save AddrType/BCD numbers */
    if (is_from_sim == KAL_TRUE)
    {
        if (addr_len > SMSAL_ADDR_LEN)
            mb_addr->addr.addr_length = SMSAL_ADDR_LEN;
        else
            mb_addr->addr.addr_length = addr_len;

        kal_mem_cpy(mb_addr->addr.addr_bcd, (pdu_ptr + offset), SMSAL_ADDR_LEN);
        offset += SMSAL_ADDR_LEN;
    }
    else
    {
        if (addr_len > SMSAL_ME_ADDR_LEN)
            mb_addr->addr.addr_length = SMSAL_ME_ADDR_LEN;
        else
            mb_addr->addr.addr_length = addr_len;

        kal_mem_cpy(mb_addr->addr.addr_bcd, (pdu_ptr + offset), SMSAL_ME_ADDR_LEN);
        offset += SMSAL_ME_ADDR_LEN;
    }


    //offset += SMSAL_ADDR_LEN;
    /* Save capability identifier */
    mb_addr->capability_id = *(pdu_ptr + offset++);

    /* Save extension 1 identifier */
    mb_addr->extension_id = *(pdu_ptr + offset);
}                                       /* end of smsal_decode_mailbox_addr */


#ifdef __REL4__

void smsal_decode_r4mwis(kal_uint8 msp_no, kal_uint8 * pdu_ptr, kal_uint16 length)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;
    kal_uint8 check_num = 0;
    kal_uint8 i = 0;
    kal_uint8 waiting_ind = *pdu_ptr;
    kal_uint8 count = NUM_OF_MSG_WAITING_TYPE;
    
#ifdef __REL6__
    if( length < 6 )
    {
        count = 4; // 4 types, ignore "voice mail" type
    }    
#endif
    
    for (i = 0; i < count ; i++)
    {
        check_num = *(pdu_ptr + i + 1);
        if ((waiting_ind & (1 << i)) != 0)
        {
            if (check_num == 0)
                mb->r4mwis[msp_no].waiting_num[i] = 1;
            else
                mb->r4mwis[msp_no].waiting_num[i] = check_num;
        }
        else
        {
            mb->r4mwis[msp_no].waiting_num[i] = 0;
        }
    
    }

}


void smsal_encode_mbi(smsal_mbi_struct *mbi, kal_uint8 *pdu_ptr, kal_uint16 length)
{
    *(pdu_ptr ++) = mbi->mbi_id[SMSAL_MW_VM];
    *(pdu_ptr ++) = mbi->mbi_id[SMSAL_MW_FAX];
    *(pdu_ptr ++) = mbi->mbi_id[SMSAL_MW_EMAIL];
    *(pdu_ptr ++) = mbi->mbi_id[SMSAL_MW_OTHER];
#ifdef __REL6__
    if( length >= 5 )
    {
        *(pdu_ptr ++) = mbi->mbi_id[SMSAL_MW_VIDEO_MSG];
    }
#endif
}                                       /* end of smsal_encode_mbi */


void smsal_decode_mbi(kal_uint8 msp_no, kal_uint8 *data, kal_uint16 length)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;

    mb->mbi[msp_no].mbi_id[SMSAL_MW_VM] = *(data + 0);
    mb->mbi[msp_no].mbi_id[SMSAL_MW_FAX] = *(data + 1);
    mb->mbi[msp_no].mbi_id[SMSAL_MW_EMAIL] = *(data + 2);
    mb->mbi[msp_no].mbi_id[SMSAL_MW_OTHER] = *(data + 3);
#ifdef __REL6__
    if( length >= 5 )
    {
        mb->mbi[msp_no].mbi_id[SMSAL_MW_VIDEO_MSG] = *(data + 4);        
    }
#endif

}                                       /* end of smsal_decode_mbi */
#endif


#ifdef __CPHS__
void smsal_decode_mwf(kal_uint8 *data)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;

    smsal_reset_mailbox_info(mb, 0);    /* reset for line 1 */
    smsal_reset_mailbox_info(mb, 1);    /* reset for line 2 */

    if (smsal_para_ptr->mailbox.mwf_file_size >= 1)
    {
        /* line 1 */
        if ((*data & 0x0f) == 0x0A)
        {
            /* mb->mwis[0].waiting_ind |= 0x01; */
            mb->mwis[0].waiting_num[SMSAL_MW_VM] = 1;
        }

        /* line 2 */
        if ((*data & 0xf0) == 0xA0)
        {
            /* mb->mwis[1].waiting_ind |= 0x01; */
            mb->mwis[1].waiting_num[SMSAL_MW_VM] = 1;
        }
    }

    if (smsal_para_ptr->mailbox.mwf_file_size >= 2)
    {
        if ((*(data + 1) & 0x0f) == 0x0A)
        {
            /* mb->mwis[0].waiting_ind |= 0x02; */
            mb->mwis[0].waiting_num[SMSAL_MW_FAX] = 1;
        }
    }

}                                       /* end of smsal_decode_mwf */

void smsal_encode_mwf(kal_uint8 *data)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    smsal_mailbox_info_struct *mb = &smsal_para_ptr->mailbox;

    if (smsal_para_ptr->mailbox.mwf_file_size >= 1)
    {
        *data = 0x55;                   /* reset */

        /* line 1 */
        /* if((mb->mwis[0].waiting_ind & 0x01) == 0x01) */
        if (mb->mwis[0].waiting_num[SMSAL_MW_VM] > 0)
        {
            *data &= 0xf0;
            *data |= 0x0A;
        }

        /* line 2 */
        /* if((mb->mwis[1].waiting_ind & 0x01) == 0x01) */
        if (mb->mwis[1].waiting_num[SMSAL_MW_VM] > 0)
        {
            *data &= 0x0f;
            *data |= 0xA0;
        }
    }

    if (smsal_para_ptr->mailbox.mwf_file_size >= 2)
    {
        *(data + 1) = 0x55;             /* reset */

        /* fax */
        if (mb->mwis[0].waiting_num[SMSAL_MW_FAX] > 0)
        {
            *(data + 1) &= 0xf0;
            *(data + 1) |= 0x0A;
        }
    }

}                                       /* end of smsal_encode_mwf */
#endif /* __CPHS__ */

void smsal_update_mwis(kal_uint8 msp, kal_uint8 line_no, smsal_mwis_struct *mwis)
{

    kal_uint8 data[10];  // make sure that no-used data is oxff

    if( line_no >= SMSAL_MAX_LINES )
    {
        return;
    }

    kal_mem_set(data, 0xff, sizeof(data));

    smsal_para_ptr_g->mailbox.mwis[line_no] = *mwis;

#ifdef __REL4__
    /* REL4 only uses SMSAL_LINE_1, SMSAL_LINE_2 will store in NVM */
    if ((IS_FLAG_SET(REL4_MWIS_FLAG) == KAL_TRUE) && 
        ((line_no == SMSAL_LINE_1) && ( msp < smsal_para_ptr_g->mailbox.mwis_rec_num)) )
    {
        smsal_para_ptr_g->mailbox.r4mwis[msp] = *mwis;
        
        //smsal_encode_mwis(SMSAL_LINE_1, data);
        smsal_encode_nvram_mwis_rec(msp, SMSAL_LINE_1, data);
        smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,       /* ignore sim cnf */
                           FILE_MWIS_IDX, data, smsal_para_ptr_g->mailbox.mwis_rec_length, (kal_uint16)(msp+1));
        return;
    }
#endif

#ifdef __CPHS__
    if (IS_FLAG_SET(CPHS_MWF_FLAG) == KAL_TRUE)
    {
        smsal_encode_mwf(data);
        smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,       /* ignore sim cnf */
                           FILE_VM_WAIT_IDX, data, smsal_para_ptr_g->mailbox.mwf_file_size, 0);
        return;
    }
#endif

    /*
     * If CPHS not support or Message Wait Flag file is not support ,
     * * update the Message Waiting Status Indication in NVRAM 
     */

#ifdef __REL4__
    if( msp < SMSAL_MAX_MSP_NUM )
    {
        smsal_para_ptr_g->mailbox.r4mwis[msp] = *mwis;
    }
#endif

    if( msp >= SMSAL_MAX_MSP_NUM )
    {
        return;
    }

    smsal_write_nvm_params(NVRAM_EF_SMSAL_MWIS_LID,
                           (kal_uint16) (msp + 1),
                           line_no,
                           NULL,
                           SMSAL_MAX_PENDING_ACT);    /* ignore nvram cnf */

}                                       /* end of smsal_update_mwi */

