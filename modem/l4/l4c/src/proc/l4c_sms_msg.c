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
 * L4C_SMS_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ???K.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_SMS_MSG_C
#ifdef __MOD_SMSAL__

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
#include "drv_msgid.h"
#include "nvram_msgid.h"
#include "l4_msgid.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"
#include "l4_trc.h"

//#include "mcd_l3_inc_struct.h"

//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"

#ifdef __MOD_CSM__
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
//#include "l4c2csm_ss_struct.h"
#endif /* __MOD_CSM__ */ 
#ifdef __MOD_PHB__
//#include "l4c2phb_enums.h"
//#include "l4c2phb_struct.h"
#endif /* __MOD_PHB__ */ 
#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"
#include "l4c2smsal_struct.h"
#include "smsal_l4c_funcs.h"

//#include "mcd_l4c2smsal_peer.h"

#include "l4c_sms_cmd.h"
#include "rmmi_rsp.h"
#include "l4c_utility.h"
#include "l3_inc_enums.h"

//#include "mcd.h"

//#include "mcd_ps2sat_peer.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"
#ifdef __SAT__
#include "ps2sat_struct.h"
#include "sat_def.h"
#endif /* __SAT__ */ 
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
//#include "keypad_sw.h"
#include "ps2sat_struct.h"
#include "l4c2smu_struct.h"
#include "lmmi_ind.h"
#include "lmmi_rsp.h"
#include "rmmi_ind.h"

#include "rmmi_rspfmttr.h"

//#include "smsal_defs.h"
//#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"
#include "smsal_structs.h"
#include "smsal_utils.h"

#include "l4c_phb_cmd.h"
#include "l4c_sim_cmd.h"

#include "l4c2smsal_struct.h"
//#include "rmmi_msghdlr.h"

//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
    
#include "as2l4c_struct.h"
#include "nvram_struct.h"

#ifdef __MBIM_SUPPORT__
#include "mbci_msg.h"
#include "mbci_ind.h"
#endif
extern kal_uint8 cm_max_retry_count(void);
extern void smsal_evm_free_evm(smsal_evmi_struct *evmi);
extern kal_uint16 smsal_force_at_cmgf_mode_set(kal_uint8 msg_format);
extern kal_bool custom_phb_xmgnt_approve_fdn (
        kal_uint8 *tel_number,      /* BCD coding, include ??????type??????*/
        kal_uint8 num_length,
        kal_uint8 sim_id,
        l4c_operation_type_enum oper,
        kal_uint16 *cause);
extern kal_uint8 custom_sms_fdn_check_da_only(void);
extern void l4cas_etws_information_ind_hdlr(local_para_struct *local_para_ptr, 
                                            peer_buff_struct *peer_buff_ptr);
extern void l4crac_get_current_plmn(plmn_id_rat_struct  *current_plmn);


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_init_cnf_hdlr
 * DESCRIPTION
 *  This function is called by MSG_ID_L4CSMSAL_INIT_CNF then trigger MOD PHB by
 *  MSG_ID_L4CPHB_STARTUP_REQ
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 *  S)(?)
 * PARAMETE
 * RS
 *  
 * RETURNS
 *  the description of retur(?)
 *  n value, if any.(?)
 *****************************************************************************/
void l4csmsal_init_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_init_cnf_struct *msg_ptr = NULL;
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_init_cnf_struct*) local_para_ptr;

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__)
{
    l4c_sim_status_enum sim_status;
	
    sim_status = l4c_get_sim_status();

    l4c_sms_startup_read_lind(sim_status);
}
#else
{
    l4c_sms_ready_lind(msg_ptr->result);
}
#endif 

    l4c_ptr->sms_ready_flag = KAL_TRUE;
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_ready_rind((l4c_result_enum)msg_ptr->result);
    rmmi_ptr->current_src = temp_src;

#ifdef __MBIM_SUPPORT__
    l4c_sms_ready_mind();
#endif
    
#ifdef __ETWS_SUPPORT__
    if (l4c_current_mod_id == MOD_L4C)
    {
        nvram_read_req_struct *param_ptr;
        param_ptr = (nvram_read_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_read_req_struct), TD_RESET);

        param_ptr->file_idx = NVRAM_EF_ETWS_SETTING_LID;
        param_ptr->para = 1;

        l4c_send_msg_to_nvm(
                MSG_ID_NVRAM_READ_REQ, 
                param_ptr, NULL, 0);
    }
#endif

    
    if (msg_ptr->result == L4C_ERROR)
    {

    }
    else
    {

    #ifdef __MOD_PHB__
    #ifdef _SMSAL_FIRST_

        l4c_phb_startup_begin_req();

    #endif /* _SMSAL_FIRST_ */ 
    #endif /* __MOD_PHB__ */ 
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_read_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_read_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_read_cnf_struct *msg_ptr = NULL;
    l4c_parameter_struct parameter3; //mtk02508_090508
    kal_bool result = KAL_FALSE;
    l4_name_struct list;
    kal_uint8 src_id, format;
    kal_uint16 action;
    kal_bool read_finish = KAL_FALSE;
    l4_name_struct name;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;

    kal_uint8 sms_user;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;


    parameter3.length = 0;
    parameter3.data = NULL;

    msg_ptr = (l4csmsal_read_cnf_struct*) local_para_ptr;

    if (rmmi_ptr->is_emgr == KAL_FALSE) //We don't support draft of AT+CMGR
    {
    	if (msg_ptr->src_id >= RMMI_SRC) 
    	{
		if (msg_ptr->status == SMSAL_STO_DRAFT)
		{
			msg_ptr->status = SMSAL_STO_UNSENT;
		}
    	}
    }

    src_id = msg_ptr->src_id;
    action = l4c_ptr->sms_current_action[src_id];
    sms_user = src_id;

    kal_mem_set(&list, 0, sizeof(l4_name_struct));
    kal_mem_set(&name, 0, sizeof(l4_name_struct));

    if (src_id <= LMMI_SRC2)
    {
        action = CMGR_EXE;
        sms_user = LMMI_SRC;
    }

    if (action == CMGR_EXE || action == CMGL_EXE)
    {
        if (msg_ptr->result == L4C_OK && msg_ptr->index == SMSAL_INVALID_INDEX)
        {
            result = KAL_TRUE;
            read_finish = KAL_TRUE;
        }
        else if ((msg_ptr->result == L4C_ERROR) || (msg_ptr->index == SMSAL_INVALID_INDEX))
        {
            result = KAL_FALSE;
            read_finish = KAL_TRUE;
        }

        if (read_finish)
        {
        #ifdef __MBIM_SUPPORT__
            if ((action == CMGL_EXE) && (sms_user >= MBCI_SRC && sms_user <= MBCI_SRC_END))
            {
                l4c_sms_exe_read_msg_list_pdu_mrsp(sms_user, result,
                    msg_ptr->index,
                    msg_ptr->next_index,
                    msg_ptr->status,
                    peer_buff_ptr);

                free_local_para(l4c_ptr->parameter[src_id].data);
                l4c_ptr->parameter[src_id].length = 0;
            }
            else if ((action == CMGR_EXE) && (sms_user >= MBCI_SRC && sms_user <= MBCI_SRC_END))
            {
                l4c_sms_exe_read_msg_pdu_mrsp(src_id, result, msg_ptr->index, msg_ptr->status, peer_buff_ptr);
            }
            else
        #endif
            if ((action == CMGL_EXE) && (sms_user >= RMMI_SRC))
            {
                rmmi_ptr->current_src = src_id;
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);    //can remove it ?
                free_local_para(l4c_ptr->parameter[src_id].data);
                l4c_ptr->parameter[src_id].length = 0;

            }
            else if (action == CMGR_EXE)
            {
                if (sms_user == LMMI_SRC)
                {
                    l4c_sms_exe_read_msg_lrsp(
                        result,
                        msg_ptr->error_cause,
                        msg_ptr->concat_info,
                        msg_ptr->dest_port,
                        msg_ptr->src_port,
                        msg_ptr->message_len,
                        msg_ptr->mti,
                        msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                        msg_ptr->rmi_use_hex,
                        msg_ptr->storage_type,
                        list,
                        &(msg_ptr->scts[0]),    /* Johnny: only for SMSAL_MTI_SUBMIT */
                        &(msg_ptr->msg_header),
                        src_id,
                        NULL);
                }

                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_sms_exe_read_msg_rrsp(
                        result,
                        msg_ptr->error_cause,
                        msg_ptr->message_len,
                        msg_ptr->mti,
                        msg_ptr->status,
                        msg_ptr->rmi_use_hex,
                        list,
                        &(msg_ptr->msg_header),
                        NULL);
                }

            }

            if (src_id != LMMI_SRC)
            {
            	rmmi_ptr->is_emgr = KAL_FALSE; 
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }

            return;

        }

        smsal_cmgf_query(&format);

    #ifdef __MBIM_SUPPORT__
        if ((src_id >= MBCI_SRC && src_id <= MBCI_SRC_END) && (format == SMSAL_PDU_MODE))
        {
            if (msg_ptr->result == L4C_OK)
            {
                result = KAL_TRUE;
            }

            if (action == CMGR_EXE)
            {
                l4c_sms_exe_read_msg_pdu_mrsp(src_id, result, msg_ptr->index, msg_ptr->status, peer_buff_ptr);
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
            else // CMGL_EXE
            {
                l4c_sms_exe_read_msg_list_pdu_mrsp(src_id, result,
                    msg_ptr->index,
                    msg_ptr->next_index,
                    msg_ptr->status,
                    peer_buff_ptr);

                if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
                {
                    //return last OK to PC
                    free_local_para(l4c_ptr->parameter[src_id].data);
                    l4c_ptr->parameter[src_id].length = 0;
                    l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                }
                else
                {
                    hold_local_para((local_para_struct*) l4c_ptr->parameter[src_id].data);
                    ((l4csmsal_read_req_struct*) l4c_ptr->parameter[src_id].data)->index = msg_ptr->next_index;
                
                    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, (void*)(l4c_ptr->parameter[src_id].data), NULL, 0);
                }
            }

            return;
        }
        else
    #endif
        if ((src_id >= RMMI_SRC) && (format == SMSAL_PDU_MODE))
        {
            if (action == CMGR_EXE)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sms_exe_read_msg_pdu_rrsp(msg_ptr->status, peer_buff_ptr);
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
		rmmi_ptr->is_emgr = KAL_FALSE;
                l4c_sms_sync_msg_lind(
                    L4C_AT_SMS_READ_CMGR,
                    msg_ptr->index,
                    msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                    NULL);
            #if defined(__MMI_FMI__)
                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = src_id;				
            #endif				
            }
            else
            {
                //convert index to index+1 (index start 0 => 1)
                rmmi_ptr->current_src = src_id;
                l4c_sms_exe_read_msg_list_pdu_rrsp(
                    msg_ptr->status,
                    (kal_uint16) (msg_ptr->index + 1),
                    peer_buff_ptr,
                    msg_ptr->message_len);

           #if defined (__MMI_FMI__)
                if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
                {
                    free_local_para(l4c_ptr->parameter[src_id].data);
                    l4c_ptr->parameter[src_id].length = 0;
                    l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                }
                else
                {
                    hold_local_para((local_para_struct*) l4c_ptr->parameter[src_id].data);
                    ((l4csmsal_read_req_struct*) l4c_ptr->parameter[src_id].data)->index = msg_ptr->next_index;
                }
				
		  l4c_sms_sync_msg_lind(
                    		L4C_AT_SMS_READ_CMGL,
                    		msg_ptr->index,
                    		msg_ptr->new_status,   
                    		NULL);
			  
		  l4c_ptr->route_thru_lmmi = KAL_TRUE;
		  l4c_ptr->route_thru_lmmi_user = src_id;	
            #else
                if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
                {
                    //return last OK to PC
                    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
                    free_local_para(l4c_ptr->parameter[src_id].data);
                    l4c_ptr->parameter[src_id].length = 0;
                    l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                }
                else
                {
                    hold_local_para((local_para_struct*) l4c_ptr->parameter[src_id].data);
                    ((l4csmsal_read_req_struct*) l4c_ptr->parameter[src_id].data)->index = msg_ptr->next_index;

                    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, (void*)(l4c_ptr->parameter[src_id].data), NULL, 0);
                }
                l4c_sms_sync_msg_lind(
                    L4C_AT_SMS_READ_CMGL,
                    msg_ptr->index,
                    msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                    NULL);
            #endif
            }                                                             
            return;
        }

        /* hold peer buffer */
        parameter3.length = msg_ptr->message_len;
        if (msg_ptr->message_len > 0)
        {
            parameter3.data = get_ctrl_buffer(msg_ptr->message_len);
            pdu_stream_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);
	    if (len > msg_ptr->message_len) 
            {
              	ASSERT(0);
            }
            kal_mem_cpy(parameter3.data, pdu_stream_ptr, len);
        }

        if ((action == CMGL_EXE) && (sms_user >= RMMI_SRC))
        {
        #if defined (__MMI_FMI__)
		
		rmmi_ptr->current_src = src_id;
              l4c_sms_exe_read_msg_list_rrsp(
                		KAL_TRUE,
                		CM_L4C_GEN_CAUSE,
                		msg_ptr->message_len,
                		msg_ptr->mti,
                		msg_ptr->status,
                		msg_ptr->index,
                		msg_ptr->rmi_use_hex,
                		list,
                		&(msg_ptr->msg_header),
                		parameter3.data);
			  
            if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
            {
                        free_local_para(l4c_ptr->parameter[src_id].data); 
                        l4c_ptr->parameter[src_id].length = 0;
                	l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
            else
            {
                	hold_local_para((local_para_struct*) l4c_ptr->parameter[src_id].data);
                	((l4csmsal_read_req_struct*) l4c_ptr->parameter[src_id].data)->index = msg_ptr->next_index;
            }
			
	     l4c_sms_sync_msg_lind(
                		L4C_AT_SMS_READ_CMGL,
                		msg_ptr->index,
                		msg_ptr->new_status,    
                		NULL);
					
	     l4c_ptr->route_thru_lmmi = KAL_TRUE;
	     l4c_ptr->route_thru_lmmi_user = src_id;	
	 #else
            /* must be RMMI_SRC */
            if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
            {
                free_local_para(l4c_ptr->parameter[src_id].data);//mtk02088_sms
                l4c_ptr->parameter[src_id].length = 0;
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
            else
            {
                hold_local_para((local_para_struct*) l4c_ptr->parameter[src_id].data);
                ((l4csmsal_read_req_struct*) l4c_ptr->parameter[src_id].data)->index = msg_ptr->next_index;

                l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, (void*)(l4c_ptr->parameter[src_id].data), NULL, 0);
            }

            /* we dont clear the state here, cause we will send smsal read again till
               info_ptr->next_index become SMSAL_INVALID_INDEX and clear l4c state */
            /* must be RMMI_SRC */
            rmmi_ptr->current_src = src_id;
            l4c_sms_exe_read_msg_list_rrsp(
                KAL_TRUE,
                CM_L4C_GEN_CAUSE,
                msg_ptr->message_len,
                msg_ptr->mti,
                msg_ptr->status,
                msg_ptr->index,
                msg_ptr->rmi_use_hex,
                list,
                &(msg_ptr->msg_header),
                parameter3.data);

            l4c_sms_sync_msg_lind(
                L4C_AT_SMS_READ_CMGL,
                msg_ptr->index,
                msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                NULL);

            //L4C_PTR->route_thru_lmmi = KAL_TRUE ;

            if (msg_ptr->next_index == SMSAL_INVALID_INDEX)
            {
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);    //return last ok to PC
            }
        #endif
        }
        else if (action == CMGR_EXE)
        {
            if (sms_user == LMMI_SRC)
            {
                l4c_sms_exe_read_msg_lrsp(
                    KAL_TRUE,
                    CM_L4C_GEN_CAUSE,
                    msg_ptr->concat_info,
                    msg_ptr->dest_port,
                    msg_ptr->src_port,
                    msg_ptr->message_len,
                    msg_ptr->mti,
                    msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                    msg_ptr->rmi_use_hex,
                    msg_ptr->storage_type,
                    list,
                    &(msg_ptr->scts[0]),    /* Johnny: only for SMSAL_MTI_SUBMIT */
                    &(msg_ptr->msg_header),
                    src_id,
                    parameter3.data);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_sms_exe_read_msg_rrsp(
                    KAL_TRUE,
                    CM_L4C_GEN_CAUSE,
                    msg_ptr->message_len,
                    msg_ptr->mti,
                    msg_ptr->status,
                    msg_ptr->rmi_use_hex,
                    list,
                    &(msg_ptr->msg_header),
                    parameter3.data);
                l4c_sms_sync_msg_lind(
                    L4C_AT_SMS_READ_CMGR,
                    msg_ptr->index,
                    msg_ptr->new_status,    /* Johnny: status for AT, new_status for MMI */
                    NULL);
                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = src_id;				

            }

            if (src_id != LMMI_SRC)
            {
            	rmmi_ptr->is_emgr = KAL_FALSE; 
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }

        }
        if (parameter3.length > 0)
        {
            free_ctrl_buffer(parameter3.data);
        }
    }
    else
    {
        /* error */
    }
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_send_command_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_send_command_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_send_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    msg_ptr = (l4csmsal_send_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->sms_current_action[src_id] == CMGC_EXE)
    {

        l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->current_src = src_id;
            l4c_sms_exe_send_rrsp(result, cause, msg_ptr->mr, (kal_uint8*) msg_ptr->scts,src_id);
        }
        else
        {
            l4c_sms_exe_post_command_lrsp(result, cause, msg_ptr->mr, (kal_uint8*) msg_ptr->scts,src_id);         
        }

        //if (msg_ptr->is_last_cnf == KAL_TRUE)
        {
            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
        }
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

/* only for RMMI */


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_send_storage_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_send_storage_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_send_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_send_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

    #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #elif defined(__SMS_STORAGE_BY_MMI__) 
    {
    	if(l4c_ptr->sms_current_action[src_id] == CMSS_EXE)
	{
		smsal_force_at_cmgf_mode_set(3);
	}
    }
    #endif

    if((l4c_ptr->sms_current_action[src_id] == CMSS_EXE) || (l4c_ptr->sms_current_action[src_id] == CMGS_PDU_EXE)) // CMGS_PDU_EXE only came from at+cmgs
    {
        if (msg_ptr->src_id >= RMMI_SRC)    // MMI background sending
        {
            rmmi_ptr->current_src = msg_ptr->src_id;
            l4c_sms_exe_send_rrsp(result, cause, msg_ptr->mr, (kal_uint8*) msg_ptr->scts,src_id);     
        }
        else
        {
            #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
	     #elif defined(__SMS_STORAGE_BY_MMI__) 
    	     l4c_sms_send_pdu_msg_lrsp(result, cause, msg_ptr->src_id, msg_ptr->mr, msg_ptr->seq_num);
	    #else
            l4c_sms_send_from_storage_lrsp(result, cause, msg_ptr->mr, msg_ptr->seq_num, msg_ptr->concat_info,src_id);
	    #endif
        }

       #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI)
       {
	     if (l4c_ptr->sms_num[src_id] > 0)
            {
                l4c_ptr->sms_num[src_id]--;
            }

            if (l4c_ptr->sms_num[src_id] == 0)
            {
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
       }
       #else
       {
            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);      
       }
       #endif 		
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_send_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_send_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_send_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    kal_uint16 action;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_send_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    action = l4c_ptr->sms_current_action[src_id];

    switch (action)
    {
        case CMSS_EXE:
        case CMGS_PDU_EXE:

        #ifdef __MBIM_SUPPORT__
            if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
                l4c_sms_exe_post_msg_mrsp(src_id, result, msg_ptr->mr);
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
            else
        #endif
            {
                l4csmsal_send_storage_cnf_hdlr(local_para_ptr, peer_buff_ptr);
            }
            return;
        case CMGC_EXE:
            l4csmsal_send_command_cnf_hdlr(local_para_ptr, peer_buff_ptr);
            return;
        case CMGS_EXE:
        {
            l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

            #ifndef __SMS_STORAGE_BY_MMI__
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            #endif
            {
                rmmi_ptr->current_src = msg_ptr->src_id;
                l4c_sms_exe_send_rrsp(result, cause, msg_ptr->mr, (kal_uint8*) msg_ptr->scts,src_id);
            }
            #ifndef __SMS_STORAGE_BY_MMI__
            else
            {
                l4c_sms_exe_post_msg_lrsp(
                    result,
                    cause,
                    msg_ptr->mr,
                    (kal_uint8*) msg_ptr->scts,
                    msg_ptr->seq_num,
                    msg_ptr->concat_info,
                    src_id);
            }
            #endif
            if (l4c_ptr->sms_num[src_id] > 0)
            {
                l4c_ptr->sms_num[src_id]--;
            }

            if (l4c_ptr->sms_num[src_id] == 0)
            {
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }

            break;
        }

    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_write_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_write_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_write_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->sms_current_action[src_id] == CMGW_EXE)
    {
        l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->current_src = msg_ptr->src_id;
            l4c_sms_exe_write_msg_rrsp(result, cause, msg_ptr->index);
            if (result == KAL_TRUE)
            {
                l4c_sms_sync_msg_lind(L4C_AT_SMS_ADD, msg_ptr->index, msg_ptr->status, NULL);
            #if defined(__MMI_FMI__)
                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = src_id;
            #endif
            }			
        }
        else
        {
            l4c_sms_exe_write_msg_lrsp(result, cause, msg_ptr->index, msg_ptr->status, msg_ptr->storage_type,src_id);
        }

        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
    }
    else
    {
        /* wrong msg error */
    }
    return;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_delete_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_delete_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_delete_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;


    msg_ptr = (l4csmsal_delete_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

    if (l4c_ptr->sms_current_action[src_id] == CMGD_EXE)
    {
        if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            rmmi_ptr->current_src = msg_ptr->src_id;
            /* mtk01616_070726: give OK when receiving MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ */
        #ifndef __MMI_FMI__
            l4c_sms_general_rrsp(result, cause);
        #else /* __MMI_FMI__ */ 
            if (result == KAL_TRUE)
            {
                l4c_sms_sync_msg_lind(L4C_AT_SMS_DELETE, 0, 0, msg_ptr->msg_bitmap);

                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = src_id;				
            }
            else
            {
                l4c_sms_general_rrsp(result, cause);
            }

        #endif /* __MMI_FMI__ */ 
        }
    #ifdef __MBIM_SUPPORT__
        else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
        {
            l4c_sms_exe_delete_msg_mrsp(src_id, result);
        }
    #endif
        else
        {
            l4c_sms_exe_delete_msg_lrsp(
                result,
                cause,
                msg_ptr->del_flag,
                msg_ptr->index,
                msg_ptr->storage_type,
                (kal_uint8*) msg_ptr->msg_bitmap,
                src_id);

        }

        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);

    }
    else
    {
        //wrong
        kal_brief_trace(TRACE_INFO, INFO_IN_L4CSMSAL_DELETE_CNF_HDLR, msg_ptr->index);
    }
    return;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_send_abort_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_send_abort_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_send_abort_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4csmsal_send_abort_cnf_struct*) local_para_ptr;

    /* Johnny: we've cleared sms_current_action in l4c_sms_exe_abort_req() */

    l4c_ptr->sms_abort_ongoing = KAL_FALSE;//mtk01616_081117

    if (msg_ptr->result == L4C_ERROR)
    {
        l4c_sms_send_abort_finish_lind(KAL_FALSE, msg_ptr->error_cause,msg_ptr->src_id, msg_ptr->seq_num);
    }
    else
    {
        l4c_sms_send_abort_finish_lind(KAL_TRUE, L4C_NO_CAUSE,msg_ptr->src_id, msg_ptr->seq_num);
    }

    #ifdef __SAT__
    #ifdef __RSAT__
    if (msg_ptr->src_id <= LMMI_SRC2)
    {
        //do nothing
    }
    else
    {
        if (msg_ptr->seq_num == 2)
        {
            sat_send_sms_res_struct *param_ptr = (sat_send_sms_res_struct*)
                		construct_local_para(
                    		(kal_uint16) sizeof(sat_send_sms_res_struct),
                    		TD_RESET);                       
            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
            param_ptr->res = SAT_PROACTIVE_CMD_TERMINATED_BY_USER; //SAT_BACKWARD_MOVE_IN_PROACTIVE_SESSION_BY_USER
            param_ptr->cause = 0;
            l4c_sat_send_sms_res(param_ptr);
        }
    }
    #endif /* __RSAT__ */ 
    #endif /* __SAT__ */ 

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_set_profile_para_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_set_profile_para_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_set_profile_para_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_set_profile_para_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    #if defined(__SMS_STORAGE_BY_MMI__) 
    {
    	if (src_id >= RMMI_SRC)
    	{
    		if (l4c_ptr->sms_current_action[src_id] == CSAS_SET)
    		{
  			l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

    			if (result == KAL_TRUE)
			{								
				l4c_sms_atcmd_csas_lind(msg_ptr->profile);
			}
    		}
    	}
    }
   #endif
		
    if ((l4c_ptr->sms_current_action[src_id] == CSMP_SET) || (l4c_ptr->sms_current_action[src_id] == CSAS_SET))
    {
        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
    }

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
    if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
        rmmi_ptr->current_src = src_id;
        l4c_sms_general_rrsp(result, cause);
    }
#ifdef __MBIM_SUPPORT__
    if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
    {
        l4c_sms_set_profile_params_mrsp(src_id, result);
    }
#endif
    else
    {
        l4c_sms_set_profile_params_lrsp(result, cause);
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_set_common_para_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_set_common_para_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_set_common_para_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    kal_uint16 action;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_set_common_para_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    action = l4c_ptr->sms_current_action[src_id];

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
    if (src_id >= RMMI_SRC)
    {
        if ((action == CPMS_SET) && (result == KAL_TRUE))
        {
        	#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
		#elif defined(__SMS_STORAGE_BY_MMI__) 
		{
		       rmmi_ptr->cpms_set = KAL_TRUE;
			l4c_sms_get_mem_status_lind(src_id);
		}
		#else
		{
            smsal_prefer_storage_struct param;

            l4c_sms_get_preferred_mem_req(src_id, &param);
            rmmi_ptr->current_src = src_id;
            rmmi_sms_storage_rsp_fmttr(&param);
        }
		#endif
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_sms_general_rrsp(result, cause);

	     	#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
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
		#elif defined(__SMS_STORAGE_BY_MMI__) 
		{
			if (action == CGSMS_SET)
			{
				if (result == KAL_TRUE)
				{
    					kal_uint8 bearer_service;

					l4c_sms_get_bearer_service_req(src_id, &bearer_service);

					l4c_sms_atcmd_cgsms_lind(bearer_service);
				}
			}
		}
		#endif
        }
        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
    }
    else
    {
        switch (action)
        {
            case CSMP_SET:
                l4c_sms_set_common_params_lrsp(result, cause);
		l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                break;
            case MAILBOX_SET:
                l4c_sms_set_mailbox_addr_lrsp(result, cause);
		l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                break;
            case CPMS_SET:
            {
                smsal_prefer_storage_struct param;

                l4c_sms_get_preferred_mem_req(src_id, &param);
                l4c_sms_set_preferred_mem_lrsp(result, &param);
		l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            }
                break;
                //for R4/R5
            #ifdef __REL4__
            case MBI_SET:
                l4c_sms_set_mbi_lrsp(result, cause);
		l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                break;
            #endif
            #if defined(__SMS_STORAGE_BY_MMI__) 
            default:
                l4c_sms_set_common_params_lrsp(result, cause);
            break;
            #endif
        }

    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_get_mailbox_num_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_get_mailbox_num_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_get_mailbox_num_cnf_struct *msg_ptr = NULL;
    l4c_sms_mailbox_info_struct mailbox_info[SMSAL_MAX_MAILBOX_NUM]; 
    smsal_mailbox_addr_struct mailbox_addr[SMSAL_MAX_MAILBOX_NUM];
    kal_uint8 mailbox_num, alpha_length, max_num_length, i;
    l4_addr_bcd_struct address_num;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4csmsal_get_mailbox_num_cnf_struct*) local_para_ptr;
    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
    src_id = msg_ptr->src_id;

    if (l4c_ptr->sms_current_action[src_id] == MAILBOX_GET)
    {
        kal_mem_set(mailbox_info, 0, sizeof(l4c_sms_mailbox_info_struct) * SMSAL_MAX_MAILBOX_NUM);
        kal_mem_set(mailbox_addr, 0, sizeof(smsal_mailbox_addr_struct) * SMSAL_MAX_MAILBOX_NUM);
        smsal_get_mailbox_addr(&mailbox_num, &alpha_length, &max_num_length, mailbox_addr);

        for (i = 0; i < mailbox_num; i++)
        {
	    kal_mem_set(&address_num, 0, sizeof(l4_addr_bcd_struct));

            kal_mem_cpy(&(mailbox_info[i].name), &(mailbox_addr[i].name), sizeof(mailbox_addr[i].name));
            kal_mem_cpy(&address_num, &(mailbox_addr[i].addr), sizeof(mailbox_addr[i].addr));

            if (address_num.addr_length > 0)
            {
                mailbox_info[i].number_info.type = address_num.addr_bcd[0];
                mailbox_info[i].number_info.length = convert_to_digit(
                                                        (kal_uint8*) & (address_num.addr_bcd[1]),
                                                        (kal_uint8*) & (mailbox_info[i].number_info.number));
            }
            else
            {
                mailbox_info[i].number_info.length = 0;
            }
        }

        l4c_sms_get_mailbox_addr_lrsp(result, mailbox_num, alpha_length, max_num_length, mailbox_info);
        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_set_status_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_set_status_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_set_status_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4csmsal_set_status_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

    if (l4c_ptr->sms_current_action[src_id] == CMST_SET)
    {
        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
    }
    else
    {
        //wrong
        kal_brief_trace(TRACE_INFO, INFO_IN_L4CSMSAL_STATUS_CNF_HDLR, msg_ptr->index);
    }

    l4c_sms_set_status_lrsp(result, cause, msg_ptr->index,msg_ptr->src_id);
    return;
}


#ifdef __CANCEL_LOCK_POWERON__           
/*****************************************************************************
 * FUNCTION
 *  l4csmsal_init_me_sms_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_init_me_sms_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_init_me_sms_cnf_struct *msg_ptr = NULL;
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_init_me_sms_cnf_struct*) local_para_ptr;

    l4c_sms_ready_lind(msg_ptr->result);
    l4c_ptr->sms_ready_flag = KAL_TRUE;
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_ready_rind(msg_ptr->result);
    rmmi_ptr->current_src = temp_src;

    l4c_eq_cancel_lock_poweron_lrsp(KAL_TRUE,L4C_NO_CAUSE);
    return;
}
#endif /* __CANCEL_LOCK_POWERON__ */


#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__ 
/*****************************************************************************
 * FUNCTION
 *  l4csmsal_read_raw_data_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_read_raw_data_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_read_raw_data_cnf_struct *msg_ptr = NULL;   
    kal_bool result = KAL_TRUE;
    kal_uint16 cause = L4C_NO_CAUSE;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len = 0;	
	
    msg_ptr = (l4csmsal_read_raw_data_cnf_struct*) local_para_ptr;

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);

	if(result == KAL_FALSE)
	{
    	l4c_sms_exe_read_raw_data_lrsp(result,
								       cause,
								       msg_ptr->index,
								       msg_ptr->status,
								       msg_ptr->storage_type,
								       0,
								       NULL);
	}
	else
	{
    	if (msg_ptr->data_len > 0)
	    {
    	    pdu_stream_ptr = get_peer_buff_pdu(peer_buff_ptr, &len); 

        	//len shall equal to data_len		
	        if (msg_ptr->data_len != len)
    	    {
        	    ASSERT(0);
	        }
    	}
	
	    l4c_sms_exe_read_raw_data_lrsp(result,
								      cause,
								      msg_ptr->index,
								      msg_ptr->status,
								      msg_ptr->storage_type,
								      msg_ptr->data_len,
								      pdu_stream_ptr);
	}
	
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_write_raw_data_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_write_raw_data_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_write_raw_data_cnf_struct *msg_ptr = NULL;
    kal_bool result = KAL_TRUE;
    kal_uint16 cause = L4C_NO_CAUSE;

    msg_ptr = (l4csmsal_write_raw_data_cnf_struct*) local_para_ptr;

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
	
    l4c_sms_exe_write_raw_data_lrsp(result,cause,msg_ptr->index,msg_ptr->status,msg_ptr->storage_type);

    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csmsal_set_msg_waiting_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_set_msg_waiting_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_set_msg_waiting_cnf_struct *msg_ptr = NULL;
    kal_bool result = KAL_TRUE;
    kal_uint16 cause = L4C_NO_CAUSE;

    msg_ptr = (l4csmsal_set_msg_waiting_cnf_struct*) local_para_ptr;

    l4c_convert_result(msg_ptr->result, msg_ptr->cause, &result, &cause);
    l4c_sms_exe_set_msg_waiting_lrsp(result,cause,msg_ptr->src_id,msg_ptr->line_no,msg_ptr->waiting_num,msg_ptr->ind_type);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_mem_full_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_mem_full_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__  
    l4csmsal_mem_full_ind_struct *msg_ptr = NULL;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_mem_full_ind_struct*) local_para_ptr;

    l4c_sms_mem_full_lind(msg_ptr->type);
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_mem_full_rind();
    rmmi_ptr->current_src = temp_src;

#ifdef __MBIM_SUPPORT__
    l4c_sms_mem_full_mind(msg_ptr->type);
#endif
    
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_mem_exceed_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_mem_exceed_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__
    l4csmsal_mem_exceed_ind_struct *msg_ptr = NULL;
    #ifndef __MMI_FMI__
    kal_uint8 temp_src;
    #endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_mem_exceed_ind_struct*) local_para_ptr;

    l4c_sms_mem_exceed_lind(msg_ptr->type);

    #ifndef __MMI_FMI__ 
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_sms_mem_exceed_rind(msg_ptr->type);
    rmmi_ptr->current_src = temp_src;    
    #endif
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_mem_available_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_mem_available_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_mem_available_ind_struct *msg_ptr = NULL;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_mem_available_ind_struct*) local_para_ptr;

    l4c_sms_mem_available_lind(msg_ptr->type);
    
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_mem_available_rind();
    rmmi_ptr->current_src = temp_src;    
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_msg_waiting_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_msg_waiting_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_msg_waiting_ind_struct *msg_ptr;

    msg_ptr = (l4csmsal_msg_waiting_ind_struct*) local_para_ptr;

    l4c_sms_msg_waiting_lind(
        msg_ptr->line_no,
        msg_ptr->waiting_num,
        msg_ptr->ind_type,
        msg_ptr->is_show_num,
        msg_ptr->is_clear,
        msg_ptr->is_from_storage,
        msg_ptr->msp_no,
        msg_ptr->ext_indicator,
        msg_ptr->msg_waiting);
}

/*****************************************************************************
 * FUNCTION
 *  l4csmsal_enhanced_voice_mail_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_enhanced_voice_mail_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
#ifdef __MMI_FMI__
    l4csmsal_enhanced_voice_mail_ind_struct *msg_ptr = (l4csmsal_enhanced_voice_mail_ind_struct *)local_para_ptr;

    msg_ptr = (l4csmsal_enhanced_voice_mail_ind_struct*) local_para_ptr;

    l4c_sms_enhanced_voice_mail_lind(
        msg_ptr->evm_pdu_type,
        msg_ptr->multi_sub_profile,
        msg_ptr->is_store,
        msg_ptr->vm_almost_full,
        msg_ptr->vm_full,
        msg_ptr->vm_status_ext_flg,
        msg_ptr->vm_access_addr,
        msg_ptr->number_of_vm_unread,
        msg_ptr->number_of_vm_notify,
        msg_ptr->number_of_vm_delete,
        msg_ptr->l4_status,
        msg_ptr->vm_status_ext_len,
        msg_ptr->vm_status_ext_data,
        msg_ptr->vm_msg);    
#else
	smsal_evm_free_evm((smsal_evmi_struct *)msg_ptr);
#endif
#endif


}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_new_msg_index_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_new_msg_index_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_new_msg_index_ind_struct *msg_ptr;
    l4c_number_struct oa_num;
    l4_name_struct alpha_id;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_mem_set(&alpha_id, 0, sizeof(l4_name_struct));

    msg_ptr = (l4csmsal_new_msg_index_ind_struct*) local_para_ptr;

    oa_num.type = msg_ptr->oa.addr_bcd[0];

    if ((oa_num.type & 0xf0) == 0xd0)   /* See 03.40 9.1.2.5 Type-of-number: Alphanumeric(7-bit default alphabet) */
    {
        kal_uint8 temp[41];
        kal_uint16 out_len;

        oa_num.length = (kal_uint8)smsal_msg_len_in_character(
                            0,
                            msg_ptr->oa.addr_length - 1,
                            msg_ptr->oa.addr_bcd[msg_ptr->oa.addr_length - 1]);

        smsal_gsm7_unpack((kal_uint8*) & (msg_ptr->oa.addr_bcd[1]), (kal_uint8*) oa_num.number, oa_num.length, 0);

        l4c_ConvertGSM7BitDefaultEncodingToAscii(temp, oa_num.number, (kal_uint16) oa_num.length, &out_len);
	if (out_len > (MAX_CC_ADDR_LEN - 1)) 
        {
              ASSERT(0);
        }
        kal_mem_cpy(oa_num.number, temp, out_len);
        oa_num.number[out_len] = 0x00;
        oa_num.length = (kal_uint8)out_len;
    }
    else
    {

        oa_num.length = convert_to_digit((kal_uint8*) & (msg_ptr->oa.addr_bcd[1]), (kal_uint8*) oa_num.number);
    }

    if (msg_ptr->index == SMSAL_INVALID_INDEX)
    {
        return;
    }
    {

        if ((msg_ptr->dest & SMSAL_TO_RMI) != KAL_FALSE)
        {
            temp_src = rmmi_ptr->current_src;        
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_sms_new_msg_index_rind(msg_ptr->index, msg_ptr->storage_type, &msg_ptr->concat_info);
            rmmi_ptr->current_src = temp_src;            

        #ifdef __MBIM_SUPPORT__
            l4c_sms_new_msg_index_mind(msg_ptr->index);
        #endif
        }
    }
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_new_msg_pdu_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_new_msg_pdu_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    	kal_uint16 packed_peer_buff_len;
    	kal_uint8 temp_src;  

    l4csmsal_new_msg_pdu_ind_struct *msg_ptr;
    kal_uint8 *pdu_stream_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_new_msg_pdu_ind_struct*) local_para_ptr;
    pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu((peer_buff_struct*) peer_buff_ptr, &packed_peer_buff_len);

	#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
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
	#elif defined(__SMS_STORAGE_BY_MMI__)
	{
		if ((msg_ptr->dest & SMSAL_TO_LMI) == SMSAL_TO_LMI)
    		{
			l4c_sms_new_msg_pdu_mode_lind(0, 0, packed_peer_buff_len, pdu_stream_ptr);
		}
	}
	#endif

    if ((msg_ptr->dest & SMSAL_TO_RMI) == SMSAL_TO_RMI)
    {
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_new_msg_pdu_rind(
        msg_ptr->mti,
        msg_ptr->message_len,
        msg_ptr->id,
        (void*)pdu_stream_ptr,
        packed_peer_buff_len);
    rmmi_ptr->current_src = temp_src;
    }

#ifdef __MBIM_SUPPORT__
    l4c_sms_new_msg_pdu_mind(
        msg_ptr->mti,
        (void*)pdu_stream_ptr,
        packed_peer_buff_len);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_new_msg_text_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_new_msg_text_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_new_msg_text_ind_struct *msg_ptr;
    l4_name_struct alpha_id;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_mem_set(&alpha_id, 0, sizeof(l4_name_struct));
    /* save local parameter and peer buf into L4C context */
    msg_ptr = (l4csmsal_new_msg_text_ind_struct*) local_para_ptr;

    if (msg_ptr->message_len > 0)
    {
        pdu_stream_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);
    }
#ifndef __SMS_STORAGE_BY_MMI__
    if ((msg_ptr->dest & SMSAL_TO_LMI) == SMSAL_TO_LMI)
    {
        l4c_sms_new_msg_text_lind(
            msg_ptr->index,
            msg_ptr->dest_port,
            msg_ptr->src_port,
            msg_ptr->mti,
            msg_ptr->display_type,
            msg_ptr->storage_type,
            &(msg_ptr->concat_info),
            msg_ptr->message_len,
            &msg_ptr->msg_header,
            pdu_stream_ptr);
    }
#endif
    if ((msg_ptr->dest & SMSAL_TO_RMI) == SMSAL_TO_RMI)
    {
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_sms_new_msg_text_rind(
            msg_ptr->mti,
            msg_ptr->id,
            msg_ptr->rmi_use_hex,
            msg_ptr->message_len,
            &msg_ptr->msg_header,
            pdu_stream_ptr);
        rmmi_ptr->current_src = temp_src;        
    }

    return;
}

#ifdef __CB__


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_cb_update_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_cb_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_cb_update_cnf_struct *msg_ptr;
    kal_uint8 src_id;
    kal_bool ret_result;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    msg_ptr = (l4csmsal_cb_update_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    ret_result = l4c_mmi_result(msg_ptr->result);

    if (src_id >= RMMI_SRC)
    {
        if (ret_result == KAL_TRUE)
        {
            l4c_cb_subscribe_req(src_id, (kal_uint8) rmmi_ptr->cb_mode);
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_sms_general_rrsp(ret_result, msg_ptr->error_cause);

            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
        }
    }
    else
    {
        l4c_sms_set_cb_mode_lrsp(ret_result, msg_ptr->error_cause);

        /* MAUI_02456921 * mtk02514 ***********
        * It is possible that MMI send SMS and set CB setting at the same time.
        * So in this case, sms_current_action would not be CBMI_SET
        * and we should not clean the action
        ************************************/
        #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
        if (l4c_ptr->sms_current_action[src_id] == CBMI_SET)
        #endif
        {
            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
        }
    }  
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_cb_msg_text_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_cb_msg_text_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_cb_msg_text_ind_struct *msg_ptr;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4csmsal_cb_msg_text_ind_struct*) local_para_ptr;

    if ((msg_ptr->dest & 0x1) != KAL_FALSE)
    {
        l4c_cb_msg_lind(msg_ptr);
    }
    if ((msg_ptr->dest & 0x2) != KAL_FALSE)
    {
        kal_uint8 *text_data;

        text_data = get_ctrl_buffer(msg_ptr->msg_length);
	 kal_mem_cpy(text_data, msg_ptr->msg_data, msg_ptr->msg_length); 

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_cb_msg_text_rind(
            msg_ptr->sn,
            msg_ptr->mi,
            msg_ptr->dcs,
            msg_ptr->page,
            msg_ptr->pages,
            msg_ptr->rmi_use_hex,
            (kal_uint8)msg_ptr->msg_length,
            text_data);
        rmmi_ptr->current_src = temp_src;        
        
        free_ctrl_buffer(text_data);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_cb_msg_pdu_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_cb_msg_pdu_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_cb_msg_pdu_ind_struct *msg_ptr;
    kal_uint8 *pdu_data;
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    msg_ptr = (l4csmsal_cb_msg_pdu_ind_struct*) local_para_ptr;

    pdu_data = get_ctrl_buffer(msg_ptr->msg_length);
    kal_mem_cpy(pdu_data, msg_ptr->msg_data, msg_ptr->msg_length); 

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) //mtk02088_ut6
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    if ((msg_ptr->dest & 0x2) != KAL_FALSE)
    {
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_cb_msg_pdu_rind(msg_ptr->msg_length, (void*)pdu_data);
    rmmi_ptr->current_src = temp_src;
    free_ctrl_buffer(pdu_data);
    }
}

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
#endif
#endif /* __CB__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_sat_send_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_sat_send_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SAT__
    l4csmsal_sat_send_cnf_struct *msg_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4csmsal_sat_send_cnf_struct*) local_para_ptr;

    if (l4c_ptr->sms_current_action[SAT_SRC] == SAT_CMGS_EXE)
        {
        #ifdef __RSAT__
            //l4c_sat_stktrind_rind(msg_ptr->res, 1,
            //                             &(msg_ptr->cause));
            sat_send_sms_res_struct *param_ptr = (sat_send_sms_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_sms_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;

            param_ptr->cause = msg_ptr->cause;

            l4c_sat_send_sms_res(param_ptr);
        #endif /* __RSAT__ */ 

        #if defined(__MMI_FMI__)
            l4c_sat_send_sms_lrsp(msg_ptr->res, msg_ptr->cause);
        #endif 

        l4c_set_user_action(L4C_SMS, SAT_SRC, L4C_NO_ACTION);
    }
    else
    {
        /* error */
    }
#endif /* __SAT__ */ 
}

//040312 mtk00468 add for WMA


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_app_data_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_app_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_app_data_ind_struct *msg_ptr;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 packed_peer_buff_len;
    l4c_number_struct *addr_num1 = NULL;
    l4_addr_bcd_struct *addr_bcd1 = NULL;

    msg_ptr = (l4csmsal_app_data_ind_struct*) local_para_ptr;

    if (peer_buff_ptr != NULL)
    {
        pdu_ptr = (kal_uint8*) get_peer_buff_pdu((peer_buff_struct*) peer_buff_ptr, &packed_peer_buff_len);

        pdu_stream_ptr = (kal_uint8*) get_ctrl_buffer(packed_peer_buff_len);
        kal_mem_cpy(pdu_stream_ptr, pdu_ptr, packed_peer_buff_len);
    }
    /* */
    addr_num1 = get_ctrl_buffer(sizeof(l4c_number_struct));
    addr_bcd1 = &msg_ptr->oa;

    if (addr_num1)
    {
        if (addr_bcd1->addr_length > 0)
        {
            addr_num1->type = addr_bcd1->addr_bcd[0];
        }

        if ((addr_num1->type & 0xf0) == 0xd0)   /* See 03.40 9.1.2.5 Type-of-number: Alphanumeric(7-bit default alphabet) */
        {
            if (addr_bcd1->addr_length > 1)
            {
                kal_uint8 temp[41];
                kal_uint16 out_len;

                addr_num1->length = (kal_uint8)smsal_msg_len_in_character(
                                        0,
                                        addr_bcd1->addr_length - 1,
                                        addr_bcd1->addr_bcd[addr_bcd1->addr_length - 1]);

                smsal_gsm7_unpack(
                    (kal_uint8*) & (addr_bcd1->addr_bcd[1]),
                    (kal_uint8*) addr_num1->number,
                    addr_num1->length,
                    0);

                l4c_ConvertGSM7BitDefaultEncodingToAscii(
                    temp,
                    addr_num1->number,
                    (kal_uint16) addr_num1->length,
                    &out_len);
		if (out_len > (MAX_CC_ADDR_LEN - 1))
        	{
              	    ASSERT(0);
        	}
                kal_mem_cpy(addr_num1->number, temp, out_len);
                addr_num1->number[out_len] = 0x00;
                addr_num1->length = (kal_uint8)out_len;

            }
            else
            {
                addr_num1->length = 0;
            }

        }
        else
        {
            if (addr_bcd1->addr_length > 1)
            {
                addr_num1->length = convert_to_digit(
                                        (kal_uint8*) & (addr_bcd1->addr_bcd[1]),
                                        (kal_uint8*) addr_num1->number);
            }
            else
            {
                addr_num1->length = 0;
            }
        }
    }
    /* */

    l4c_sms_app_data_lind(
        msg_ptr->dest_mod_id,
        msg_ptr->dest_port,
        msg_ptr->src_port,
        msg_ptr->dcs,
        msg_ptr->mti,
        msg_ptr->message_len,
        &msg_ptr->concat_info,
        addr_num1,
        msg_ptr->scts,
        pdu_stream_ptr);

    free_ctrl_buffer(addr_num1);
    if (pdu_stream_ptr != NULL)
    {
        free_ctrl_buffer(pdu_stream_ptr);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_sync_msg_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_sync_msg_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    temp_src = 	rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;    
    l4c_sms_ready_rind(L4C_OK);
    rmmi_ptr->current_src = temp_src;

    l4c_sms_sync_msg_lind(L4C_SMS_SIM_REFRESH, 0, 0, NULL);
#else
    l4c_sim_status_enum sim_status;

    sim_status = l4c_get_sim_status();

    l4c_sms_startup_read_lind(sim_status);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_startup_read_msg_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_startup_read_msg_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_startup_read_msg_ind_struct *msg_ptr;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;

    msg_ptr = (l4csmsal_startup_read_msg_ind_struct*) local_para_ptr;

    if (msg_ptr->message_len > 0)
    {
        pdu_stream_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);
    }

    l4c_sms_startup_read_msg_lind(
        msg_ptr->startup_seq_num,
        msg_ptr->mti,
        msg_ptr->status,
        msg_ptr->storage_type,
        msg_ptr->index,
        msg_ptr->dest_port,
        msg_ptr->src_port,
        &(msg_ptr->concat_info),
        &(msg_ptr->scts[0]),    /* Johnny: only for SMSAL_MTI_SUBMIT */
        msg_ptr->message_len,
        &(msg_ptr->msg_header),
        (void*)pdu_stream_ptr);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_startup_begin_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_startup_begin_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4c_sms_startup_begin_lind();
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_startup_finish_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_startup_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4c_sms_startup_finish_lind();
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_fdn_check_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_fdn_check_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_fdn_check_ind_struct *msg_ptr;

    msg_ptr = (l4csmsal_fdn_check_ind_struct*) local_para_ptr;

    #ifdef __PHB_APPROVE_BY_MMI__
    {
        kal_uint8 approve_type;
        kal_uint8 result = L4C_OK;
        kal_uint16 cause = CM_L4C_GEN_CAUSE;
        
        approve_type = l4_custom_approval_type(L4C_SMS_OPERATION,LMMI_SRC);
        if (approve_type == APPROVAL_TYPE_FULL || approve_type == APPROVAL_TYPE_FDN_ONLY)
        {
            // Check sca
            if(custom_sms_fdn_check_da_only() == KAL_TRUE)
            {
                kal_brief_trace(TRACE_INFO, INFO_SMS_FDN_CHECK_DA_ADDRESS);
            }
            else
            {
                if (custom_phb_xmgnt_approve_fdn(
                        msg_ptr->sc_addr.addr_bcd,
                        msg_ptr->sc_addr.addr_length,
                        l4c_current_mod_id - MOD_L4C,
                        L4C_SMS_SCA_OPERATION, &cause) == KAL_FALSE )
                {
                    result = L4C_ERROR;
                }
            }

            // Check da
            if (custom_phb_xmgnt_approve_fdn(
                        msg_ptr->da.addr_bcd,
                        msg_ptr->da.addr_length,
                        l4c_current_mod_id - MOD_L4C,
                        L4C_SMS_DA_OPERATION, &cause) == KAL_FALSE )
            {
                result = L4C_ERROR;
            }

            if (result == L4C_ERROR)
            {
                cause = PHB_L4C_ERROR;
            }
            else
            {
                cause = CM_L4C_GEN_CAUSE;
            }            
        }        
        l4c_smsal_fdn_check_rsp(result, cause);
    }

    #else
    l4c_phb_sms_fdn_check_req(LMMI_SRC, msg_ptr->sc_addr, msg_ptr->da);
    #endif /*__PHB_APPROVE_BY_MMI__*/
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_copy_msg_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_copy_msg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_copy_msg_cnf_struct *msg_ptr;
    kal_bool result;
    kal_uint16 cause;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4csmsal_copy_msg_cnf_struct*) local_para_ptr;

    if (l4c_ptr->sms_current_action[msg_ptr->src_id] == CMGW_COPY)
    {
        l4c_set_user_action(L4C_SMS, msg_ptr->src_id, L4C_NO_ACTION);

    l4c_convert_result(msg_ptr->result, msg_ptr->error_cause, &result, &cause);
        l4c_sms_copy_msg_lrsp(result, cause, msg_ptr->action, msg_ptr->dst_storage, msg_ptr->src_index, msg_ptr->dst_index,msg_ptr->src_id);
    }        
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_cb_gs_change_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_cb_gs_change_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__GSM_RAT__)
    l4csmsal_cb_gs_change_ind_struct *msg_ptr;

    msg_ptr = (l4csmsal_cb_gs_change_ind_struct*) local_para_ptr;

    l4c_sms_cb_gs_change_lind(msg_ptr->geography_type);
#endif 
    return;
}

#if defined (__SMS_DEPERSONALIZATION__)
void l4csmsal_depersonalization_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_sms_depersonalization_ind_struct *msg_ptr;
    l4csmu_sms_depersonalization_req_struct *param_ptr;

    msg_ptr = (l4csmsal_sms_depersonalization_ind_struct*) local_para_ptr;
    param_ptr = (l4csmu_sms_depersonalization_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4csmu_sms_depersonalization_req_struct),
                                                        TD_RESET);

    param_ptr->length = msg_ptr->length;

    l4c_send_msg(L4_MODULE(MOD_SMU, (l4c_current_mod_id - MOD_L4C)), 
            MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_REQ, SMU_L4C_SAP, param_ptr, peer_buff_ptr);

}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csmsal_send_deliver_report_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_send_deliver_report_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{ 
#ifdef __SMS_STORAGE_BY_MMI__ 
	l4csmsal_send_deliver_report_cnf_struct *msg_ptr = NULL;
    	kal_bool result;
    	kal_uint32 cause, uid = 0;

    	msg_ptr = (l4csmsal_send_deliver_report_cnf_struct*) local_para_ptr;

	if (msg_ptr->result == L4C_ERROR) 
    	{
        	result = KAL_FALSE;
        	cause = msg_ptr->error_cause;
    	}
    	else
    	{
        	result = KAL_TRUE;
        	cause = CM_L4C_GEN_CAUSE;
    	}
	
	#ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
	#else
	{
		uid = msg_ptr->uid;	
	}
    #endif

	l4c_sms_send_deliver_report_lrsp(result, cause, uid);
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4csmsal_mt_sms_final_ack_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_mt_sms_final_ack_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__) 
    l4csmsal_mt_sms_final_ack_ind_struct*msg_ptr;

    msg_ptr = (l4csmsal_mt_sms_final_ack_ind_struct*) local_para_ptr;

    l4c_sms_mt_sms_final_ack_lind(msg_ptr->result, msg_ptr->cause);
#endif
}

#if defined(__ETWS_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4cas_etws_information_ind_hdlr
 * DESCRIPTION
 *  this funtion is used to handle ETWS indication primitive MSG_ID_L4CAS_ETWS_INFORMATION_IND
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cas_etws_information_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cas_etws_information_ind_struct *msg_ptr;
    plmn_id_rat_struct plmn_id_rat_ptr;
    kal_uint8 plmn_id[6];
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4cas_etws_information_ind_struct*) local_para_ptr;


    /*Filter out ETWS notifications with incorrect message identifiers*/
    if((msg_ptr->message_id < 0x1100) ||      //message id should be 0x1100~0x1107
       (msg_ptr->message_id > 0x1107))
    {
        /*Ignore this notification*/
        return;
    }

    l4crac_get_current_plmn(&plmn_id_rat_ptr);

    plmn_id[0] = plmn_id_rat_ptr.plmn_id.mcc1;
    plmn_id[1] = plmn_id_rat_ptr.plmn_id.mcc2;
    plmn_id[2] = plmn_id_rat_ptr.plmn_id.mcc3;
    plmn_id[3] = plmn_id_rat_ptr.plmn_id.mnc1;
    plmn_id[4] = plmn_id_rat_ptr.plmn_id.mnc2;
    plmn_id[5] = plmn_id_rat_ptr.plmn_id.mnc3;

    /*the warning_type, message_id, serial_nubmer from (U)AS is big-endian
    * So we need to transfer it to little-endian
    */
    //msg_ptr->warning_type = (msg_ptr->warning_type >> 8) | (msg_ptr->warning_type << 8);
    //msg_ptr->message_id = (msg_ptr->message_id >> 8) | (msg_ptr->message_id << 8);
    //msg_ptr->serial_nubmer= (msg_ptr->serial_nubmer >> 8) | (msg_ptr->serial_nubmer << 8);

    l4c_sms_etws_informaion_lind(
        msg_ptr->warning_type, 
        msg_ptr->message_id, 
        msg_ptr->serial_nubmer, 
        msg_ptr->is_security_information_valid, 
        msg_ptr->etws_security_information, 
        plmn_id);

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_sms_etws_informaion_rind(
        msg_ptr->warning_type, 
        msg_ptr->message_id, 
        msg_ptr->serial_nubmer, 
        msg_ptr->is_security_information_valid, 
        msg_ptr->etws_security_information, 
        plmn_id);
    rmmi_ptr->current_src = temp_src;

}
#endif /* __ETWS_SUPPORT__ */


#endif /* __MOD_SMSAL__ */ 

