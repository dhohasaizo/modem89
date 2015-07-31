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
 * L4C_CISS_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_CISS_MSG_C
#ifdef __MOD_CSM__
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "string.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "event_info_utility.h"
#include "l4_msgid.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"
#include "csmcc_common_enums.h"

//#include "mcd_l4_common.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"
//#include "l3_inc_local.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_ft.h"
#include "l4_trc.h"
#include "l4c_sendmsg.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"
#include "l4c2csm_ss_struct.h"

//#include "l4c_aux_struct.h"
#ifdef __MOD_SMSAL__
#include "l4c2smsal_struct.h"
#include "smsal_l4c_enum.h"
#endif /* __MOD_SMSAL__ */ 

#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
#include "l4c2tcm_struct.h"
#endif /* __MOD_TCM__ */ 

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "nvram_struct.h"
//#include "nvram_user_defs.h"

//#include "l4c_ss_parse.h"
#include "l4c_ciss_msg.h"
#include "l4c_utility.h"
//#include "l4c2phb_enums.h"  
//#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"
//#include "l4c_aux_struct.h"
#include "l4c_ciss_cmd.h"
#include "sat_def.h"
//#include "l4a.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
#include "rmmi_rsp.h"
#include "lmmi_rsp.h"
#include "rmmi_ind.h"
#include "lmmi_ind.h"
#include "rmmi_utility.h"
#include "rmmi_rspfmttr.h"

#include "smsal_l4c_enum.h"

#include "rmmi_msghdlr.h"
#include "l4_event_info_trc.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "l4c_sim_cmd.h"
#include "cmux_vp_num.h"
#ifdef __MBIM_SUPPORT__
#include "mbim_defs.h"
#include "mbci_ind.h"
#include "mbci_msg.h"
#endif

extern void smsal_decode_cbsdcs(
                kal_uint8 dcs,
                kal_uint8 *lang_type,
                smsal_dcs_enum *alphabet_type,
                smsal_msg_class_enum *msg_class,
                kal_bool *is_compress,
                kal_bool *is_reserved);

extern kal_bool phb_reset(void);

extern kal_uint8 cm_max_retry_count(void);

/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_startup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_startup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
//MAUI_02580295    l4ccsm_ciss_startup_cnf_struct *msg_ptr = NULL;
#ifdef __MOD_TCM__    
    l4ctcm_start_req_struct *param_ptr = NULL;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    l4c_ptr->csm_state = CSM_STATE_CISS_READY;   

//MAUI_02580295   msg_ptr = (l4ccsm_ciss_startup_cnf_struct*) local_para_ptr;

    kal_trace(TRACE_INFO, INFO_L4C_STARTUP,
              l4c_ptr->cc_current_action[LMMI_SRC2], l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);

#ifdef __MOD_TCM__
    if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
    {
        return;
    }
    param_ptr = (l4ctcm_start_req_struct*) construct_local_para(
                                            (kal_uint16) sizeof(l4ctcm_start_req_struct),
                                            TD_RESET);

    param_ptr->src_id = LMMI_SRC;
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_START_REQ, param_ptr);
#endif /* __MOD_TCM__ */ 

    /* act PHB */
    #ifdef __MOD_PHB__
       phb_reset();
       l4c_send_msg_to_phb(MSG_ID_L4CPHB_INIT_LN_REQ, NULL, NULL);
    #endif
    
    /* act SMSAL */
    #ifdef __MOD_SMSAL__	
    {
       l4csmsal_init_req_struct *param_ptr1;
    
       param_ptr1 = (l4csmsal_init_req_struct*)construct_local_para((kal_uint16) sizeof(l4csmsal_init_req_struct), TD_RESET);
       param_ptr1->src_id = LMMI_SRC;
       param_ptr1->is_sim_change = l4c_check_sim_status();
       param_ptr1->init_type = SMSAL_PARAM_INIT_ONLY;
       l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_REQ, param_ptr1, NULL, 0);
    }
    #endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ss_parse_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ss_parse_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ss_parse_cnf_struct *msg_ptr;
    l4c_ss_string_info_struct info;
    kal_uint8 src_id;
    l4c_result_struct result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ss_parse_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    kal_mem_set(&info,0,sizeof(l4c_ss_string_info_struct));

    if (l4c_check_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION) == KAL_TRUE)
    {
        return;
    }

    if (l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE && msg_ptr->opcode != SS_OPERATION)
    {
    #ifdef __SAT__
    #if defined(__MMI_FMI__)
        kal_uint8 cause = 0x00; //0x00: No specific cause can be given
    #endif

    #ifdef __RSAT__
        sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
            construct_local_para(
                (kal_uint16) sizeof(sat_send_ss_res_struct),
                TD_RESET);

        kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
        param_ptr->res = SAT_CMD_DATA_NOT_UNDERSTAND_BY_ME;
        param_ptr->size_of_additional_info = 1;
        param_ptr->additional_info[0] = L4C_NO_CAUSE;

        l4c_sat_send_ss_res(param_ptr);
    #endif /* __RSAT__ */ 
    #if defined(__MMI_FMI__)
        l4c_sat_send_ss_lrsp(0x32, 1, &cause);
    #endif 
    #endif /* __SAT__ */ 
        //L4C_PTR->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        return;
    }
    if (msg_ptr->opcode == SS_OPERATION)
    {
        l4ccsm_ciss_ss_parse_req_struct *param_ptr;
        
        info.opcode = SS_OPERATION;

        /* mtk02508_090218: test sim will be blocked in ss_need_retry for normal retry,
           but change phase retry is needed */

        /* mtk00924: always queue ciss_ss_parse_req for retry */
        l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_ss_parse_req_struct);
        l4c_ptr->ss_parameter.data = (l4ccsm_ciss_ss_parse_req_struct*) construct_local_para(
                                                                                (kal_uint16) sizeof (l4ccsm_ciss_ss_parse_req_struct),
                                                                                TD_RESET);
        param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
        param_ptr->src_id = src_id;
        param_ptr->ton_npi = 0x81;
        param_ptr->length = (kal_uint8)strlen((char*)msg_ptr->ss_string);
        param_ptr->change_phase_req = KAL_FALSE;
        param_ptr->ss_dcs = msg_ptr->ss_dcs;
        param_ptr->type_of_modification = msg_ptr->type_of_modification;  
        param_ptr->cf_number_length = msg_ptr->cf_number_length; //MAUI_02547720
    #ifdef __CSMSS_EXPLICIT_SS_OPERATION__
        param_ptr->explicit_ss_op = msg_ptr->explicit_ss_op; //MAUI_02553565
    #endif
        kal_mem_cpy(param_ptr->ss_string, msg_ptr->ss_string, param_ptr->length + 1);
    }
    else if (msg_ptr->opcode == INVALID_OPERATION)
    {
        info.opcode = INVALID_OPERATION;
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }

    if (l4c_ptr->retry_ss != KAL_TRUE)
    {
        //031229 mtk00468 modify for SAT parse dont response to LMMI
        if (src_id == SAT_SRC)
        {
            return;
        }

        if (info.opcode == INVALID_OPERATION)
        {
            result.flag = KAL_FALSE;
            result.cause = CM_INVALID_NUMBER_FORMAT;
            
		        if (src_id == LMMI_SRC)
            {
                #if defined(__SS_OPERATION_SUPPORT__) 
                l4c_ss_operation_lrsp(result);
                #else
                l4c_ss_string_parsing_lrsp(result, &info);
                #endif
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_string_parsing_rrsp(result, &info);

            }
        }
        else
        {
            result.flag = KAL_TRUE;
            result.cause = L4C_NO_CAUSE;
            if (src_id == LMMI_SRC)
            {
                #if defined(__SS_OPERATION_SUPPORT__) 
                l4c_ss_operation_lrsp(result);
                #else
                l4c_ss_string_parsing_lrsp(result, &info);
                #endif
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_string_parsing_rrsp(result, &info);
            }
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_emlpp_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_emlpp_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_emlpp_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_emlpp_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_SS, src_id, CAEMLPP_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
    {

    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            //l4c_sat_stktrind_rind(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info,
            //  msg_ptr->ss_return.additional_info);
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            //param_ptr->res = msg_ptr->ss_return.res;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }

                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id >= RMMI_SRC)
            {
                l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            }
            if (src_id == LMMI_SRC)
            {
                l4c_ss_exe_emlpp_lrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->default_priority_level,
                    msg_ptr->maximum_priority_level);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_exe_emlpp_rrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->default_priority_level,
                    msg_ptr->maximum_priority_level);
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	    l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info,
                               msg_ptr->ss_return.additional_info);
    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);

        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */

        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }

        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_cf_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_cf_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_cf_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 bs_code;
    l4c_number_struct dest;
    l4c_sub_addr_struct sub_dest;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_cf_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_SS, src_id, CCFC_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
    {

    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }

                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id >= RMMI_SRC)
            {
                l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            }
            if (src_id == LMMI_SRC)
            {
                l4c_ss_exe_call_forward_lrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->ss_code,
                    msg_ptr->bs_count,
                    (forwarding_list_struct*) (msg_ptr->forwarding_list));
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_exe_call_forward_rrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->ss_code,
                    msg_ptr->bs_count,
                    (forwarding_list_struct*) (msg_ptr->forwarding_list));
            }
 
            if (src_id >= RMMI_SRC)
            {
                rmmi_ptr->ccfc_current_class = 0;
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }

    /* Add by mtk00714 */
    /* this comes from AT+CCFC. combination of classes. */
    else if (l4c_check_user_action(L4C_SS, src_id, CCFC_REPEAT) == KAL_TRUE)
    {
        if (msg_ptr->return_code == L4C_OK)
        {
            rmmi_ptr->ccfc_result = KAL_TRUE;
        }

        if (msg_ptr->op_code == SS_OP_INTERROGATESS)
        {
            /* print rsp to PC  */
            rmmi_ptr->current_src = src_id;
            l4c_ss_exe_repeat_ccfc_rrsp(
                msg_ptr->return_code,
                msg_ptr->bs_count,
                msg_ptr->op_code,
                (forwarding_list_struct*) (msg_ptr->forwarding_list));
        }

        /* check l4c_cntxt_g.ccfc_classx and see if more classes have to be done */
        switch (rmmi_ptr->ccfc_current_class)
        {
            case 1:
                if ((rmmi_ptr->ccfc_combi_classx & 0x02) != 0)
                    // bit 7 : classx = 2 : data
                {
                    bs_code = L4_ALL_BEARER_SERVICES;
                    rmmi_ptr->ccfc_current_class = 2;
                    break;      //break and do the next request
                }
                //else keep searching the follwing
            case 2:
                if ((rmmi_ptr->ccfc_combi_classx & 0x04) != 0)
                    // bit 6 : classx = 4 : fax
                {
                    bs_code = L4_FACSIMILE_SERVICES;
                    rmmi_ptr->ccfc_current_class = 4;
                    break;
                }
            case 4:
                if ((rmmi_ptr->ccfc_combi_classx & 0x08) != 0)
                    // bit 5 : classx = 8 : SMS
                {
                    bs_code = L4_SHORT_MESSAGE_SERVICES;
                    rmmi_ptr->ccfc_current_class = 8;
                    break;
                }
            case 8:
                if ((rmmi_ptr->ccfc_combi_classx & 0x10) != 0)
                    // bit 4 : classx = 16 : data circuit sync
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
                    rmmi_ptr->ccfc_current_class = 16;
                    break;
                }
            case 16:
                if ((rmmi_ptr->ccfc_combi_classx & 0x20) != 0)
                    // bit 3 : classx = 32 : data circuit async
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
                    rmmi_ptr->ccfc_current_class = 32;
                    break;
                }
            default:
                bs_code = 0;    //finished : no request anymore
        }

        if (bs_code != 0)
            //more class has to be done
        {
            /* copy the store parameters in ccfc_req_param and
               call l4c_ss_exe_call_forward_req() to make a request again */
            kal_mem_cpy(&dest, rmmi_ptr->ccfc_req_param.dest_buffer, sizeof(l4c_number_struct));
            kal_mem_cpy(&sub_dest, rmmi_ptr->ccfc_req_param.sub_dest_buffer, sizeof(l4c_sub_addr_struct));

            l4c_ss_exe_call_forward_req(
                src_id,
                rmmi_ptr->ccfc_req_param.mode,
                rmmi_ptr->ccfc_req_param.reason,
                bs_code,
                rmmi_ptr->ccfc_req_param.timer,
                dest,
                rmmi_ptr->ccfc_req_param.sub_addr_flag,
                sub_dest);
        }
        else
            /* finished, no request anymore */
        {
            rmmi_ptr->current_src = src_id;
            if (msg_ptr->op_code == SS_OP_INTERROGATESS)
            {
                l4c_ps_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                l4c_ps_general_rrsp(rmmi_ptr->ccfc_result, L4C_NO_CAUSE);
            }

            /* clear stored global variable */
            rmmi_ptr->ccfc_combi_classx = 0;
            rmmi_ptr->ccfc_current_class = 0;
            rmmi_ptr->ccfc_result = KAL_FALSE;
            kal_mem_set(&rmmi_ptr->ccfc_req_param, 0, sizeof(ccfc_req_param_struct));

            /* clean the state */
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        }
        return;
    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	    l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info,
                               msg_ptr->ss_return.additional_info);
        
    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
    
        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */
    
        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }
    
        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
    
        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_cw_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_cw_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_cw_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 bs_code;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_cw_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if ((l4c_check_user_action(L4C_SS, src_id, CCWA_EXE) == KAL_TRUE
         || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE))
    {

    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }
                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id >= RMMI_SRC)
            {
                l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            }
            /* only activated bs_codes can be interrogated */
            if (src_id == LMMI_SRC)
            {
                l4c_ss_exe_call_wait_lrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->bs_count,
                    msg_ptr->ss_status,
                    msg_ptr->bs_code);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_exe_call_wait_rrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->bs_count,
                    msg_ptr->ss_status,
                    msg_ptr->bs_code);
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else if (l4c_check_user_action(L4C_SS, src_id, CCWA_REPEAT) == KAL_TRUE)
    {
        if (msg_ptr->return_code == L4C_OK)
        {
            rmmi_ptr->ccwa_result = KAL_TRUE;
        }

        /* check l4c_cntxt_g.ccfc_classx and see if more classes have to be done */
        switch (rmmi_ptr->ccwa_current_class)
        {
            case 1:
                if ((rmmi_ptr->ccwa_combi_classx & 0x02) != 0)
                    // bit 7 : classx = 2 : data
                {
                    bs_code = L4_ALL_BEARER_SERVICES;
                    rmmi_ptr->ccwa_current_class = 2;
                    break;      //break and do the next request
                }
                //else keep searching the follwing
            case 2:
                if ((rmmi_ptr->ccwa_combi_classx & 0x04) != 0)
                    // bit 6 : classx = 4 : fax
                {
                    bs_code = L4_FACSIMILE_SERVICES;
                    rmmi_ptr->ccwa_current_class = 4;
                    break;
                }
            case 4:
                if ((rmmi_ptr->ccwa_combi_classx & 0x08) != 0)
                    // bit 5 : classx = 8 : SMS
                {
                    bs_code = L4_SHORT_MESSAGE_SERVICES;
                    rmmi_ptr->ccwa_current_class = 8;
                    break;
                }
            case 8:
                if ((rmmi_ptr->ccwa_combi_classx & 0x10) != 0)
                    // bit 4 : classx = 16 : data circuit sync
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
                    rmmi_ptr->ccwa_current_class = 16;
                    break;
                }
            case 16:
                if ((rmmi_ptr->ccwa_combi_classx & 0x20) != 0)
                    // bit 3 : classx = 32 : data circuit async
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
                    rmmi_ptr->ccwa_current_class = 32;
                    break;
                }
            default:
                bs_code = 0;    //finished : no request anymore
        }

        if (bs_code != 0)
            //more class has to be done
        {
            /* copy the store parameters in ccfc_req_param and
               call l4c_ss_exe_call_forward_req() to make a request again */

            l4c_ss_exe_call_wait_req(src_id, rmmi_ptr->ccwa_req_param.mode, bs_code);
        }
        else
            /* finished, no request anymore */
        {
            rmmi_ptr->current_src = src_id;
            l4c_ps_general_rrsp(rmmi_ptr->ccwa_result, L4C_NO_CAUSE);

            /* clear stored global variable */
            rmmi_ptr->ccwa_combi_classx = 0;
            rmmi_ptr->ccwa_current_class = 0;
            rmmi_ptr->ccwa_result = KAL_FALSE;
            kal_mem_set(&rmmi_ptr->ccwa_req_param, 0, sizeof(ccwa_req_param_struct));

            /* clean the state */
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        }
        return;
    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	    l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info,
                               msg_ptr->ss_return.additional_info);
        
    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
    
        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */
    
        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }
    
        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
    
        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_cli_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_cli_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_cli_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 ss_code;
    kal_uint8 clir_option = 0;
    kal_bool flag = KAL_TRUE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_cli_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    ss_code = msg_ptr->ss_code;

    if (flag == KAL_TRUE)
    {
    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }
                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (l4c_check_user_action(L4C_SS, src_id, ITRG_EXE) == KAL_TRUE
                || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
            {

                switch (ss_code)
                {
                    case L4_CDIP:
		            #if 0 //MAUI_01998659
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
		            #endif
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_cdip_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    case L4_CLIP:
                        if (src_id == LMMI_SRC)
                        {
                            l4c_ss_exe_clip_interrogate_lrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        else
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_clip_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    case L4_CLIR:
                        clir_option = msg_ptr->clir_option;
                        if (src_id == LMMI_SRC)
                        {
                            l4c_ss_exe_clir_interrogate_lrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        else
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_clir_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    case L4_CNAP:
                        if (src_id == LMMI_SRC)
                        {
                            l4c_ss_exe_cnap_interrogate_lrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        else
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_cnap_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    case L4_COLP:
                        if (src_id == LMMI_SRC)
                        {
                            l4c_ss_exe_colp_interrogate_lrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        else
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_colp_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    case L4_COLR:
                        if (src_id == LMMI_SRC)
                        {
                            l4c_ss_exe_colr_interrogate_lrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        else
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_ss_exe_colr_interrogate_rrsp(
                                result,
                                msg_ptr->ss_return.para_present,
                                msg_ptr->ss_status,
                                clir_option);
                        }
                        break;
                    default:
                        /* wrong msg */
                        //flag = KAL_FALSE;
                        break;
                }
            }

            /* only activated bs_codes can be interrogated */
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info, 
                               msg_ptr->ss_return.additional_info);
    
    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
    
        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */
    
        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }
    
        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
    
        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_cb_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_cb_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_cb_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 bs_code;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_cb_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE && msg_ptr->op_code == SS_OP_REGISTERPASSWORD)
    {
        l4c_set_user_action(L4C_SS, src_id, CPWD_SS_EXE);
    }

    if (l4c_check_user_action(L4C_SS, src_id, CLCK_SS_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, CPWD_SS_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
    {

    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }
                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }

            if (l4c_check_user_action(L4C_SS, src_id, CLCK_SS_EXE) == KAL_TRUE
                || l4c_check_user_action(L4C_SS, src_id, CB_FAC_IND) == KAL_TRUE
                || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
            {
                /* only activated bs_codes can be interrogated */
                if (src_id == LMMI_SRC)
                {
                    l4c_ss_exe_call_barring_lrsp(
                        result,
                        msg_ptr->ss_return.para_present,
                        msg_ptr->op_code,
                        msg_ptr->ss_code,
                        msg_ptr->bs_count,
                        (barring_list_struct*) (msg_ptr->barring_list));
                }
#if !defined(__SLIM_AT__) 			
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_ss_exe_call_barring_rrsp(
                        result,
                        msg_ptr->ss_return.para_present,
                        msg_ptr->op_code,
                        msg_ptr->ss_code,
                        msg_ptr->bs_count,
                        (barring_list_struct*) (msg_ptr->barring_list));
                }
#endif				
            }
            else
            {
                if (src_id >= RMMI_SRC)
                {
                    l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
                    rmmi_ptr->current_src = src_id;
                    if (result.flag == L4C_OK)
                    {
                        l4c_ps_general_rrsp(KAL_TRUE, result.cause);
                    }
                    else
                    {
                        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
                    }
                }
                else if (src_id == LMMI_SRC)
                {
                    l4c_ss_exe_change_password_lrsp(result);
                }
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);

    }
    else if (l4c_check_user_action(L4C_SS, src_id, CLCK_SS_REPEAT) == KAL_TRUE)
    {
    #if !defined(__SLIM_AT__) 
        if (msg_ptr->return_code == L4C_OK)
        {
            rmmi_ptr->clck_ss_result = KAL_TRUE;
        }

        /* check l4c_cntxt_g.ccfc_classx and see if more classes have to be done */
        switch (rmmi_ptr->clck_ss_current_class)
        {
            case 1:
                if ((rmmi_ptr->clck_ss_combi_classx & 0x02) != 0)
                    // bit 7 : classx = 2 : data
                {
                    bs_code = L4_ALL_BEARER_SERVICES;
                    rmmi_ptr->clck_ss_current_class = 2;
                    break;      //break and do the next request
                }
                //else keep searching the follwing
            case 2:
                if ((rmmi_ptr->clck_ss_combi_classx & 0x04) != 0)
                    // bit 6 : classx = 4 : fax
                {
                    bs_code = L4_FACSIMILE_SERVICES;
                    rmmi_ptr->clck_ss_current_class = 4;
                    break;
                }
            case 4:
                if ((rmmi_ptr->clck_ss_combi_classx & 0x08) != 0)
                    // bit 5 : classx = 8 : SMS
                {
                    bs_code = L4_SHORT_MESSAGE_SERVICES;
                    rmmi_ptr->clck_ss_current_class = 8;
                    break;
                }
            case 8:
                if ((rmmi_ptr->clck_ss_combi_classx & 0x10) != 0)
                    // bit 4 : classx = 16 : data circuit sync
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
                    rmmi_ptr->clck_ss_current_class = 16;
                    break;
                }
            case 16:
                if ((rmmi_ptr->clck_ss_combi_classx & 0x20) != 0)
                    // bit 3 : classx = 32 : data circuit async
                {
                    bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
                    rmmi_ptr->clck_ss_current_class = 32;
                    break;
                }
            default:
                bs_code = 0;    //finished : no request anymore
        }

        if (bs_code != 0)
            //more class has to be done
        {
            /* copy the store parameters in ccfc_req_param and
               call l4c_ss_exe_call_forward_req() to make a request again */

            l4c_ss_exe_call_barring_req(
                src_id,
                rmmi_ptr->clck_ss_req_param.mode,
                rmmi_ptr->clck_ss_req_param.reason,
                bs_code,
                rmmi_ptr->clck_ss_req_param.passwd);
        }
        else
            /* finished, no request anymore */
        {
            rmmi_ptr->current_src = src_id;
            l4c_ps_general_rrsp(rmmi_ptr->clck_ss_result, L4C_NO_CAUSE);

            /* clear stored global variable */
            rmmi_ptr->clck_ss_combi_classx = 0;
            rmmi_ptr->clck_ss_current_class = 0;
            rmmi_ptr->clck_ss_result = KAL_FALSE;
            kal_mem_set(&rmmi_ptr->clck_ss_req_param, 0, sizeof(clck_ss_req_param_struct));

            /* clean the state */
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        }
        return;
    #endif /* !defined(__SLIM_AT__)*/ 

    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	    l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info, 
                               msg_ptr->ss_return.additional_info);

    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
    
        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */
    
        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }
    
        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
    
        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ccbs_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ccbs_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ccbs_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ccbs_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_SS, src_id, CCBS_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
    {

    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
                    return;
                }
                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id >= RMMI_SRC)
            {
                l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            }
            if (src_id == LMMI_SRC)
            {
                l4c_ss_exe_ccbs_lrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->ccbs_count,
                    (ccbs_list_struct*) msg_ptr->ccbs_list);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_exe_ccbs_rrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    (ccbs_list_struct*) msg_ptr->ccbs_list);
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
#ifdef __SAT__
    else if (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO,INFO_USSD_CONTAINS_SS);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
	    l4c_sat_send_ussd_lrsp(msg_ptr->ss_return.res, msg_ptr->ss_return.size_of_additional_info,
                               msg_ptr->ss_return.additional_info);

    #ifdef __RSAT__
    {
        /* return Terminal Response by L4C */
        sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
    
        kal_mem_set(param_ptr->cmd_detail, 0, 5);/* do not fill it, SIM module will fill this field */
    
        if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
        {
            param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
        }
        else
        {
            param_ptr->res = msg_ptr->ss_return.res;
        }
    
        rmmi_ptr->sat_icon_displayed = KAL_TRUE;
        param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
        kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
    
        l4c_sat_send_ussd_res(param_ptr);
    }
    #endif
    }
#endif
    else
    {
        /* wrong msg error */
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_pussr_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_pussr_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_pussr_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_pussr_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

#ifdef __MBIM_SUPPORT__
    if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
    {
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        l4c_ss_ussd_mrsp(src_id, msg_ptr->ussd_dcs, MBIMUSSDTerminatedByNW, (kal_uint8*)msg_ptr->ussd_string, msg_ptr->ussd_string_length);
        l4c_clear_ss_queued_msg(src_id);
        return;
    }
    else
#endif
    /* mtk00714 : for RMMI +CUSD */
    if ((src_id >= RMMI_SRC) && (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE)
        && (l4c_ptr->sat_ussr_flag == SAT_USSR_NONE))
    {
        if (msg_ptr->return_code == L4C_ERROR)
        {
            if ((msg_ptr->change_phase_ind == KAL_TRUE)
                /* mtk02508_090415: change phase retry shall not be limited by max_retry_count
                   ToDo: change phase retry can overwrite normal retry */
                && (l4c_ptr->retry_cc != KAL_TRUE) && (l4c_ptr->retry_ss != KAL_TRUE))
            {
                l4ccsm_ciss_pussr_begin_req_struct *param_ptr;
                
                //mtk02508_090218 use the original string stored in l4c_ptr->parameter2
                param_ptr = (l4ccsm_ciss_pussr_begin_req_struct*) l4c_ptr->ss_parameter.data;
                param_ptr->change_phase_req = KAL_TRUE;

                //mtk01616_070515 : start 1 sec retry timer fro ss change phase request
                l4c_ptr->retry_ss = KAL_TRUE;
                l4c_start_change_phase_retry_timer_hdlr(src_id);
                return;
            }

            result.flag = L4C_ERROR;
            if (msg_ptr->ss_return.cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->ss_return.cause_value;
            }
            else
            {
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        
        //mtk01616_080603: +cusd response is sent to URC channel in modem load
    #ifndef __MMI_FMI__            
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
    #else 
        rmmi_ptr->current_src = src_id;
    #endif 
        l4c_ss_exe_ussd_rrsp(
            result,
            msg_ptr->ss_return.para_present,
            msg_ptr->op_code,
            msg_ptr->ussd_dcs,
            msg_ptr->ussd_string,
            msg_ptr->ussd_string_length);
    
        l4c_clear_ss_queued_msg(src_id);
    }
    else if (src_id == SAT_SRC || (l4c_ptr->sat_ussr_flag != SAT_USSR_NONE)) //ALPS00029231
    {
        if (msg_ptr->return_code == L4C_ERROR)
        {
            //mtk01616_080611: as MMI USSR ,in USSR_FAC_IND, change phase retry is not needed          
            if ((msg_ptr->change_phase_ind == KAL_TRUE)
                /* mtk02508_090415: change phase retry shall not be limited by max_retry_count 
                   ToDo: change phase retry can overwrite normal retry */
                && (l4c_ptr->retry_cc != KAL_TRUE) && (l4c_ptr->retry_ss != KAL_TRUE)
                && (l4c_ptr->sat_ussr_flag == SAT_USSR_NONE)) //ALPS00029231
            {
                l4ccsm_ciss_ss_parse_req_struct *param_ptr;

                /* mtk02508_090202: use saved local param even for test sim*/
                param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
                param_ptr->change_phase_req = KAL_TRUE;
                param_ptr->type_of_modification = SIMCALLCONTROL_L4RETRY;

                //mtk01616_070515 : start 1 sec retry timer fro ss change phase request
                l4c_ptr->retry_ss = KAL_TRUE;
                l4c_start_change_phase_retry_timer_hdlr(src_id);
                return;
            }

            result.flag = L4C_ERROR;
            if (msg_ptr->ss_return.cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->ss_return.cause_value;
            }
            else
            {
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }

        //DUMA00209281: msg_ptr->src_id is the original initiated src. we shall clear the current ss_user's context
        l4c_clear_ss_queued_msg(l4c_ptr->ss_user);
    #ifdef __SAT__
        //if (src_id == SAT_SRC)
        //{
        if ((l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE) || 
            (l4c_ptr->sat_ussr_flag != SAT_USSR_NONE)) //ALPS00029231
            //ori: msg_ptr->ussd_dcs==0x0f
        {
        #ifdef __RSAT__
            sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct),
                    TD_RESET);
        #endif /* __RSAT__ */ 
            kal_brief_trace(TRACE_INFO, INFO_SAT_USSD);

            /* Johnny: for successful sat ussd (return result), we should transfer the format of additional info */
            if (msg_ptr->ss_return.size_of_additional_info != 1)
            {
                kal_uint8 temp[255];

                kal_mem_cpy(temp, msg_ptr->ss_return.additional_info, msg_ptr->ss_return.size_of_additional_info);

                if (msg_ptr->ss_return.additional_info[0] == 0x3b)      /* Johnny: PUSS-Request */
                {
                    if (msg_ptr->ss_return.size_of_additional_info >= 6)        /* Johnny: 3b 30 1e 04 01 f0 04 19 xx ... */
                    {
                        kal_uint8 lang_type;
                        smsal_dcs_enum alphabet_type; //MAUI_02320007
                        smsal_msg_class_enum mclass;
                        kal_bool is_compress;
                        kal_bool is_reserved;

                        kal_uint8 dcs_index;
                        kal_uint8 string_index;

                        if (msg_ptr->ss_return.additional_info[2] == 0x81)
                        {
                            dcs_index = 6;
                            if (msg_ptr->ss_return.additional_info[8] == 0x81)
                            {
                                string_index = 10;
                            }
                            else
                            {
                                string_index = 9;
                            }
                        }
                        else
                        {
                            dcs_index = 5;
                            string_index = 8;
                        }

                        smsal_decode_cbsdcs(
                            msg_ptr->ss_return.additional_info[dcs_index],
                            &lang_type,
                            &alphabet_type,
                            &mclass,
                            &is_compress,
                            &is_reserved);

                        //MAUI_02320007 MMI need to to do extra handling when dcs is 0x11
                        msg_ptr->ss_return.additional_info[0] = 
                            (kal_uint8)((msg_ptr->ss_return.additional_info[dcs_index] == 0x11)? 0x11 : alphabet_type);

                        kal_mem_cpy(
                            msg_ptr->ss_return.additional_info + 1,
                            temp + string_index,
                            msg_ptr->ss_return.size_of_additional_info - string_index);
                        msg_ptr->ss_return.size_of_additional_info -= string_index - 1;
                    }
                    else    /* Johnny: 3b 30 1e 04 19 xx ... */
                    {
                        kal_uint8 string_index;

                        msg_ptr->ss_return.additional_info[0] = SMSAL_DEFAULT_DCS;

                        if (msg_ptr->ss_return.additional_info[2] == 0x81)
                        {
                            if (msg_ptr->ss_return.additional_info[5] == 0x81)
                            {
                                string_index = 7;
                            }
                            else
                            {
                                string_index = 6;
                            }
                        }
                        else
                        {
                            string_index = 5;
                        }

                        kal_mem_cpy(
                            msg_ptr->ss_return.additional_info + 1,
                            temp + string_index,
                            msg_ptr->ss_return.size_of_additional_info - string_index);
                        msg_ptr->ss_return.size_of_additional_info -= string_index - 1;
                    }
                }
                else if (msg_ptr->ss_return.additional_info[0] == 0x13) /* Johnny: PUSS-Data */
                {
                    kal_uint8 string_index;

                    /* Johnny: 13 16 0b xx ... */
                    msg_ptr->ss_return.additional_info[0] = SMSAL_8BIT_DCS;

                    if (msg_ptr->ss_return.additional_info[2] == 0x81)
                    {
                        string_index = 4;
                    }
                    else
                    {
                        string_index = 3;
                    }

                    kal_mem_cpy(
                        msg_ptr->ss_return.additional_info + 1,
                        temp + string_index,
                        msg_ptr->ss_return.size_of_additional_info - string_index);
                    msg_ptr->ss_return.size_of_additional_info -= string_index - 1;
                }
            }
        #ifdef __RSAT__
            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);
            
            /* MAUI_02441171 0x11 is a special CBS dcs, MMI shall do extra effort to decode
               But SAT uses SMS dcs so L4C shall translate it in RSAT as MMI does in feature phone
            */
            if (param_ptr->additional_info[0] == 0x11)
            {
                param_ptr->additional_info[0] = (kal_uint8)SMSAL_UCS2_DCS;
            }

            if (l4c_ptr->sat_ussr_flag == SAT_SS_USSR)
            {
                /* ALPS00029231 USSD triggered by SAT send SS containing USSD string
                   L4C shall return SAT send SS terminal response here
                */
                l4c_sat_send_ss_res((sat_send_ss_res_struct*)param_ptr);
            }
            else
            {
                l4c_sat_send_ussd_res(param_ptr);
            }
        #endif /* __RSAT__ */ 
            //mtk01616_080611: To clear MMI USSR screen
            if ((l4c_check_user_action(L4C_SS, LMMI_SRC, USSR_FAC_IND) == KAL_TRUE ||
                 l4c_check_user_action(L4C_SS, LMMI_SRC, CUSD_EXE) == KAL_TRUE) && 
                 l4c_ptr->sat_ussr_flag != SAT_USSR_NONE) //ALPS00029231
            {
                //mtk01616_080620: we should get the dcs in NW response
                l4c_ss_exe_ussd_lrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->ss_return.additional_info[0],
                    msg_ptr->ussd_string,
                    msg_ptr->ussd_string_length,
                    l4c_ptr->ussd_version);
                l4c_ptr->ussd_version = USSD_VERSION_PHASE2;
            }
        #if !defined(__MMI_FMI__) || defined(__RSAT__) //DUMA00209281: To clear RMMI USSR screen
        /* for RMMI, we report +CUSD always no matter SAT triggered USSD is ever replied by user or not */
            else if (((l4c_ptr->ss_user >= RMMI_SRC && l4c_ptr->ss_user < RMMI_ALL) || l4c_ptr->ss_user == SAT_SRC)
                && (l4c_ptr->ss_current_action == USSR_FAC_IND || l4c_ptr->ss_current_action == CUSD_EXE 
                /*|| l4c_ptr->ss_current_action == SAT_USD_EXE*/))
            {
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
                l4c_ss_exe_ussd_rrsp(
                    result,
                    msg_ptr->ss_return.para_present,
                    msg_ptr->op_code,
                    msg_ptr->ussd_dcs,
                    msg_ptr->ussd_string,
                    msg_ptr->ussd_string_length);
            }
        #endif /* !defined(__MMI_FMI__) || defined(__RSAT__) */

            if (l4c_ptr->sat_ussr_flag == SAT_SS_USSR)
            {
                /* ALPS00029231 USSD triggered by SAT send SS containing USSD string
                   L4C shall return SAT send SS stage1 response here
                */
                l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
            }
            else
            {
                l4c_sat_send_ussd_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
            }
            
            if (l4c_ptr->sat_ussr_flag != SAT_USSR_NONE) //ALPS00029231
            {
                kal_brief_trace(TRACE_INFO, INFO_CLEAR_SAT_USSR_FLAG);

                l4c_ptr->sat_ussr_flag = SAT_USSR_NONE; //ALPS00029231
            }
        }
        else if (l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
            //ori: msg_ptr->ussd_dcs==0x01
        {
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ss_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ss_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #elif !defined(__MMI_FMI__) || defined(__RSAT__)
        /* for RMMI, we report +CUSD always no matter SAT triggered USSD is ever replied by user or not */
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_ss_exe_ussd_rrsp(
                result,
                msg_ptr->ss_return.para_present,
                msg_ptr->op_code,
                msg_ptr->ussd_dcs,
                msg_ptr->ussd_string,
                msg_ptr->ussd_string_length);
        #endif /* defined(__MMI_FMI__) */ 
        }
        //}
    #endif /* __SAT__ */ 
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);

    }
    else if (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE
             //paul, ussd
             //       || l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE
             || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE
             || l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE
             || l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)
    {
        if (msg_ptr->return_code == L4C_ERROR)
        {
            if (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_FALSE
                && l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_FALSE)
            {
                //in USSR_FAC_IND, retry is not needed
                if (msg_ptr->change_phase_ind == KAL_TRUE 
                    /* mtk02508_090415: change phase retry shall not be limited by max_retry_count 
                       ToDo: change phase retry can overwrite normal retry */
                    && (l4c_ptr->retry_cc != KAL_TRUE) && (l4c_ptr->retry_ss != KAL_TRUE))
                {
                    // MAUI_01596336
                    if (l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
                    {
                        l4ccsm_ciss_ss_parse_req_struct *param_ptr;

                        /* mtk02508_090218: use saved local param even for test sim*/
                        param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
                        param_ptr->change_phase_req = KAL_TRUE;
                        param_ptr->type_of_modification = SIMCALLCONTROL_L4RETRY;
                    }
                    else // ss_current_action is CUSD_EXE
                    {
                        l4ccsm_ciss_pussr_begin_req_struct *param_ptr;

                        param_ptr = (l4ccsm_ciss_pussr_begin_req_struct*) l4c_ptr->ss_parameter.data;
                        param_ptr->change_phase_req = KAL_TRUE;
                    }
                    //l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE); //MAUI_01596336

                    //mtk01616_070515 : start 1 sec retry timer fro ss change phase request 
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_change_phase_retry_timer_hdlr(src_id);
                    return;
                }
                if (ss_need_retry(src_id, msg_ptr->ss_return.cause_value) == KAL_TRUE)
                {
                    ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_MO_SS_RETRY, MOD_L4C);
                    l4c_ptr->retry_ss = KAL_TRUE;
                    l4c_start_retry_timer_hdlr(src_id);
                    //l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE); //MAUI_01596336
                    return;
                }
            }
            result.flag = L4C_ERROR;
            if (msg_ptr->ss_return.cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->ss_return.cause_value;
            }
            else
            {
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }

        if (src_id == LMMI_SRC)
        {
            kal_uint8 lang_type;
            smsal_dcs_enum alphabet_type; //MAUI_02320007
            smsal_msg_class_enum mclass;
            kal_bool is_compress;
            kal_bool is_reserved;

            smsal_decode_cbsdcs(msg_ptr->ussd_dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);
            
            l4c_ss_exe_ussd_lrsp(
                result,
                msg_ptr->ss_return.para_present,
                msg_ptr->op_code,
                (kal_uint8)((msg_ptr->ussd_dcs == 0x11)? 0x11 : alphabet_type), //MAUI_02320007
                msg_ptr->ussd_string,
                msg_ptr->ussd_string_length,
                l4c_ptr->ussd_version);
            l4c_ptr->ussd_version = USSD_VERSION_PHASE2;
        }
        else
        {
            //mtk01616_080603: +cusd response is sent to URC channel in modem load
        #ifndef __MMI_FMI__                 
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
        #else
            rmmi_ptr->current_src = src_id;
        #endif

            l4c_ss_exe_ussd_rrsp(
                result,
                msg_ptr->ss_return.para_present,
                msg_ptr->op_code,
                msg_ptr->ussd_dcs,
                msg_ptr->ussd_string,
                msg_ptr->ussd_string_length);
        }
        
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    {
        /* wrong msg error */
    }

#ifndef __MMI_FMI__
    /* MAUI_02280752: In modem load this handler function set the RMMI current_src to RMMI_UNSOLICITED
       to respond via URC. Reset RMMI current_src to the original source here for rmmi_process_multi_cmd()
       in l4c_main(). Or the following multi-command can't be processed correctly.
    */
    rmmi_ptr->current_src = src_id;
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ussd_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussd_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussd_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ussd_end_cnf_struct*) local_para_ptr;

    //mtk02508_090220: NW initiated USSD is no src_id
    src_id = l4c_ptr->ss_user;

    if (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)
    {
    #ifdef __SAT__
        if (src_id == SAT_SRC)
        {
            //l4c_clear_queued_msg(src_id);
        #ifdef __RSAT__  
            sat_send_ussd_res_struct *param_ptr = (sat_send_ussd_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ussd_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            //param_ptr->res = msg_ptr->ss_return.res;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            l4c_sat_send_ussd_res(param_ptr);
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            l4c_sat_send_ussd_lrsp(
                msg_ptr->ss_return.res,
                msg_ptr->ss_return.size_of_additional_info,
                msg_ptr->ss_return.additional_info);
        #endif /* defined(__MMI_FMI__) */
        }
        else
    #endif /* __SAT__ */ 
        {
            if (msg_ptr->return_code == L4C_ERROR)
            {
                //ni ussd never retry
                result.flag = L4C_ERROR;
                if (msg_ptr->ss_return.cause_present == KAL_TRUE)
                {
                    result.cause = msg_ptr->ss_return.cause_value;
                }
                else
                {
                    result.cause = L4C_NO_CAUSE;
                }
            }
            else
            {
                result.flag = L4C_OK;
                result.cause = L4C_NO_CAUSE;
            }
            if (src_id >= RMMI_SRC)
            {
                l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            }

            if (l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) != KAL_TRUE)
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_ss_exe_ussd_lrsp(
                        result,
                        msg_ptr->ss_return.para_present,
                        SS_OP_UNSTRUCTUREDSS_REQUEST,
                        0,
                        NULL,
                        0,
                        l4c_ptr->ussd_version);
                    l4c_ptr->ussd_version = USSD_VERSION_PHASE2;
                }
            #ifdef __MBIM_SUPPORT__
                else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                {
                    l4c_ss_ussd_mrsp(src_id, 0, MBIMUSSDNoActionRequired, NULL, 0);
                }
            #endif
                else
                {
                    //mtk01616_080603: +cusd response is sent to URC channel in modem load
                #ifndef __MMI_FMI__            
                    rmmi_ptr->current_src = RMMI_UNSOLICITED;
                #else 
                    rmmi_ptr->current_src = src_id;
                #endif 
                    l4c_ss_exe_ussd_rrsp(
                        result,
                        msg_ptr->ss_return.para_present,
                        SS_OP_UNSTRUCTUREDSS_REQUEST,
                        0,
                        NULL,
                        0);
                #ifndef __MMI_FMI__
                    /* MAUI_02280752: In modem load this handler function set the RMMI current_src 
                       to RMMI_UNSOLICITED to respond via URC. Reset RMMI current_src to the original 
                       source here for rmmi_process_multi_cmd() in l4c_main(). Or the following 
                       multi-command can't be processed correctly.
                    */
                    rmmi_ptr->current_src = src_id;
                #endif
                }
            }
        }
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    {
        /* wrong msg error */
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ussn_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussn_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussd_end_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ussd_end_cnf_struct*) local_para_ptr;

    //mtk02508_090220: NW initiated USSD is no src_id
    src_id = l4c_ptr->ss_user;

    if (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)
    {

        if (msg_ptr->return_code == L4C_ERROR)
        {
            //ni ussd never retry
            result.flag = L4C_ERROR;
            if (msg_ptr->ss_return.cause_present == KAL_TRUE)
            {
                result.cause = msg_ptr->ss_return.cause_value;
            }
            else
            {
                result.cause = L4C_NO_CAUSE;
            }
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        if ((src_id >= RMMI_SRC) && (l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) != KAL_TRUE))
        {
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        }

        if (l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) != KAL_TRUE)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_ss_exe_ussd_lrsp(result, msg_ptr->ss_return.para_present, SS_OP_UNSTRUCTUREDSS_REQUEST, 0, NULL, 0, l4c_ptr->ussd_version);
                l4c_ptr->ussd_version = USSD_VERSION_PHASE2;
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_ss_ussd_mrsp(src_id, 0, MBIMUSSDTerminatedByNW, NULL, 0);
            }
        #endif
            else
            {
                //mtk01616_080603: +cusd response is sent to URC channel in modem load
            #ifndef __MMI_FMI__            
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
            #else 
                rmmi_ptr->current_src = src_id;
            #endif 
                l4c_ss_exe_ussd_rrsp(result, msg_ptr->ss_return.para_present, SS_OP_UNSTRUCTUREDSS_REQUEST, 0, NULL, 0);
            #ifndef __MMI_FMI__
                /* MAUI_02280752: In modem load this handler function set the RMMI current_src 
                   to RMMI_UNSOLICITED to respond via URC. Reset RMMI current_src to the original 
                   source here for rmmi_process_multi_cmd() in l4c_main(). Or the following 
                   multi-command can't be processed correctly.
                */
                rmmi_ptr->current_src = src_id;
            #endif
            }
        }

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    {
        /* wrong msg error */
    }

    return;
}

#ifdef __SAT__


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_sim_end_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_sim_end_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_sim_end_cnf_struct *msg_ptr = NULL;
    l4c_ss_string_info_struct info;
    kal_uint8 src_id;
    l4c_result_struct result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_sim_end_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if ((l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE) 
        || (l4c_check_user_action(L4C_SS, src_id, SAT_USD_EXE) == KAL_TRUE) // mtk01616 070410
        || (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE))
    {
        if (msg_ptr->return_code == 2)
        {
            // changed to CC by SAT
        }

        info.opcode = INVALID_OPERATION;
        result.flag = L4C_ERROR;
        result.cause = L4C_NO_CAUSE;
        if (src_id == LMMI_SRC)
        {
            l4c_ss_exe_ussd_lrsp(result, 0, 0, 0, NULL, 0, l4c_ptr->ussd_version);
            l4c_ptr->ussd_version = USSD_VERSION_PHASE2;
        }
        else if (src_id == SAT_SRC)
        {
        #ifdef __SAT__
        #ifdef __RSAT__
            sat_send_ss_res_struct *param_ptr = (sat_send_ss_res_struct*)
                construct_local_para(
                    (kal_uint16) sizeof(sat_send_ss_res_struct),
                    TD_RESET);

            kal_mem_set(param_ptr->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */

            if (msg_ptr->ss_return.res == SAT_CMD_PERFORMED_SUCCESSFULLY && rmmi_ptr->sat_icon_displayed == KAL_FALSE)
            {
                param_ptr->res = SAT_CMD_PERFORMED_BUT_ICON_COULD_NOT_DSPL;
            }
            else
            {
                param_ptr->res = msg_ptr->ss_return.res;
            }

            rmmi_ptr->sat_icon_displayed = KAL_TRUE;
            param_ptr->size_of_additional_info = msg_ptr->ss_return.size_of_additional_info;
            kal_mem_cpy(param_ptr->additional_info, msg_ptr->ss_return.additional_info, 255);

            if (l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
            {
                l4c_sat_send_ss_res(param_ptr);
            }
            else if (l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE)
            {
                /* ALPS00025444 The original operation is SAT send USDS so we shall 
                   respond SAT_SEND_USSD_RES. Note: sat_send_ussd_res_struct is the same 
                   as sat_send_ss_res_struct so we cast here.
                */
                l4c_sat_send_ussd_res((sat_send_ussd_res_struct*)param_ptr);
            }
        #endif /* __RSAT__ */ 
        #if defined(__MMI_FMI__)
            if (l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
            {
                l4c_sat_send_ss_lrsp(
                    msg_ptr->ss_return.res,
                    msg_ptr->ss_return.size_of_additional_info,
                    msg_ptr->ss_return.additional_info);
            }
            else if (l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE)
            {
                l4c_sat_send_ussd_lrsp(
                    msg_ptr->ss_return.res,
                    msg_ptr->ss_return.size_of_additional_info,
                    msg_ptr->ss_return.additional_info);
            }
        #endif /* defined(__MMI_FMI__) */ 
        #endif /* __SAT__ */ 
        }
        else
        {
            if (l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
            {
                l4ccsm_ciss_ss_parse_req_struct *param_ptr;

                /* mtk02508_090218: use saved local param even for test sim*/
                param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
                if (param_ptr->explicit_ss_op == CSMSS_EXPLICIT_SS_OP)
                {
                    /*
                        return ERROR for SS operation from original source id
                    */
                    rmmi_ptr->current_src = src_id;
                    l4c_ss_string_parsing_rrsp(result, &info);
                }
                else
                {
                    /*
                        OK has been returned for USSD, or AP didn't expect SS explicitly
                        so return +CUSD: 4 here
                    */
                    result.flag = L4C_ERROR;
                    rmmi_ptr->current_src = RMMI_UNSOLICITED;
                    l4c_ss_exe_ussd_rrsp(
                    result,
                    KAL_FALSE,
                    SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST, /* not used */
                    0,
                    NULL,
                    0);
                }
            }
            else // CUSD_EXE
            {
                result.flag = L4C_ERROR;
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
                l4c_ss_exe_ussd_rrsp(
				result,
                KAL_FALSE,
                SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST, /* not used */
                0,
                NULL,
                0);
            }
        }
        
        l4c_clear_ss_queued_msg(src_id);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    {
        /* wrong msg error */
    }

    return;
}

#endif /* __SAT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ussr_begin_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussr_begin_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussr_begin_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    #ifndef __MMI_FMI__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    kal_uint8 temp_src;
    #endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ussr_begin_ind_struct*) local_para_ptr;

    //mtk02508_090220: NW initiated USSD is no src_id
    src_id = LMMI_SRC;
    
    if (l4c_ptr->retry_ss == KAL_TRUE)
    {
        while (l4c_ptr->ss_parameter.length == 0)
        {
            src_id++;
            if (src_id == WAP_SRC)
                //this means no src id with retry strategy
            {
                break;
            }
        }
        if (src_id != WAP_SRC)
        {
            l4c_clear_ss_queued_msg(src_id);
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            //reset action
        }
    }
    if (l4c_check_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION) == KAL_TRUE)
    {
        kal_uint8 lang_type;
        smsal_dcs_enum alphabet_type; //MAUI_02320007
        smsal_msg_class_enum mclass;
        kal_bool is_compress;
        kal_bool is_reserved;

        smsal_decode_cbsdcs(msg_ptr->ussd_dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);

        //MAUI_02320007 MMI need to distingush the dcs is 0x11 , to do extra handling when dcs is 0x11
        l4c_ss_ussr_lind((kal_uint8)((msg_ptr->ussd_dcs == 0x11)? 0x11 : alphabet_type), 
                         (kal_uint8*) (msg_ptr->ussd_string), 
                         msg_ptr->ussd_string_length,
                         L4C_SS_MT);

    #ifdef __MBIM_SUPPORT__
        l4c_ss_ussd_mind(msg_ptr->ussd_dcs, MBIMUSSDActionRequired, (kal_uint8*)(msg_ptr->ussd_string), msg_ptr->ussd_string_length);
    #endif
        
    #ifndef __MMI_FMI__
        /* so far we let LMMI make the USSR for nw initialized USSD,
           (only one of LMMI, RMMI should do this),
           if it's for module, then we should let RMMI do this */

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_ss_ussr_rind(msg_ptr->ussd_dcs, (kal_uint8*) (msg_ptr->ussd_string), msg_ptr->ussd_string_length);
        rmmi_ptr->current_src = temp_src;
        //we are not sure what source will respond this USSR, use L4C_SRC to represent
        l4c_set_user_action(L4C_SS, L4C_SRC, USSR_FAC_IND);
    #else
        l4c_set_user_action(L4C_SS, LMMI_SRC, USSR_FAC_IND);
    #endif /* __MMI_FMI__ */ 
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ussn_begin_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussn_begin_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussn_begin_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    #ifndef __MMI_FMI__
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    #endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ussn_begin_ind_struct*) local_para_ptr;

    //mtk02508_090220: NW initiated USSD is no src_id
    src_id = LMMI_SRC;

    if (l4c_ptr->retry_ss == KAL_TRUE)
    {
        while (l4c_ptr->ss_parameter.length == 0)
        {
            src_id++;
            if (src_id == WAP_SRC)
                //this means no src id with retry strategy
            {
                break;
            }
        }
        if (src_id != WAP_SRC)
        {
            l4c_clear_ss_queued_msg(src_id);
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        }
    }
    if (l4c_check_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION) == KAL_TRUE)
    {
        kal_uint8 lang_type;
        smsal_dcs_enum alphabet_type; //MAUI_02320007
        smsal_msg_class_enum mclass;
        kal_bool is_compress;
        kal_bool is_reserved;

        smsal_decode_cbsdcs(msg_ptr->ussd_dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);

        //MAUI_02320007: MMI need to distingush the dcs is 0x11 , to do extra handling when dcs is 0x11
        l4c_ss_ussn_lind((kal_uint8)((msg_ptr->ussd_dcs == 0x11)? 0x11 : alphabet_type), 
                         (kal_uint8*) (msg_ptr->ussd_string), 
                         msg_ptr->ussd_string_length,
                         L4C_SS_MT);

    #ifdef __MBIM_SUPPORT__
        l4c_ss_ussd_mind(msg_ptr->ussd_dcs, MBIMUSSDNoActionRequired, (kal_uint8*)(msg_ptr->ussd_string), msg_ptr->ussd_string_length);
    #endif

    #ifndef __MMI_FMI__
        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_ss_ussn_rind(msg_ptr->ussd_dcs, (kal_uint8*) (msg_ptr->ussd_string), msg_ptr->ussd_string_length);
        rmmi_ptr->current_src = temp_src;
        l4c_set_user_action(L4C_SS, L4C_SRC, USSN_FAC_IND); //mtk02508_090220
    #else
        l4c_set_user_action(L4C_SS, LMMI_SRC, USSN_FAC_IND);
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
 *  l4ccsm_ciss_ussr_fac_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussr_fac_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussr_fac_ind_struct *msg_ptr = NULL;
    kal_uint8 cid;
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ccsm_ciss_ussr_fac_ind_struct*) local_para_ptr;

    //MAUI_01323505: L4C_PTR->ss_user is LMMI_SRC now, but for SAT_USD_EXE we should clear SAT_SRC
    l4c_clear_ss_queued_msg(l4c_ptr->ss_user); //DUMA00209281 we shall clear the current ss_user

#ifdef __SAT__ //DUMA00209281
    if (l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE)
    {
        //ALPS00029231 USSR triggered by SAT send USSD
        kal_brief_trace(TRACE_INFO, INFO_SET_SAT_USSR_FLAG, SAT_USSD_USSR);
        l4c_ptr->sat_ussr_flag = SAT_USSD_USSR;
    }
    else if (l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
    {
        //ALPS00029231 USSR triggered by SAT send SS
        kal_brief_trace(TRACE_INFO, INFO_SET_SAT_USSR_FLAG, SAT_SS_USSR);
        l4c_ptr->sat_ussr_flag = SAT_SS_USSR;
    }
#endif /* __SAT__ */

    if ((((l4c_ptr->ss_user >= RMMI_SRC && l4c_ptr->ss_user < RMMI_ALL) 
        #ifdef __MBIM_SUPPORT__
            || (l4c_ptr->ss_user >= MBCI_SRC && l4c_ptr->ss_user <= MBCI_SRC_END)
        #endif           
        ) && (l4c_check_user_action(L4C_SS, (kal_uint8) l4c_ptr->ss_user, CUSD_EXE) == KAL_TRUE
#if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
            || l4c_check_user_action(L4C_SS, (kal_uint8) l4c_ptr->ss_user, PARSE_SS_EXE) == KAL_TRUE
#endif
            || l4c_check_user_action(L4C_SS, (kal_uint8) l4c_ptr->ss_user, USSN_FAC_IND) == KAL_TRUE))
#ifdef __SAT__
#if !defined(__MMI_FMI__) || defined(__RSAT__) //DUMA00209281
            || (l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) || l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE))
#endif
#endif /* __SAT__ */
        )
    {
        l4c_set_user_action(L4C_SS, (kal_uint8) l4c_ptr->ss_user, USSR_FAC_IND);

    #ifdef __MBIM_SUPPORT__
        if (l4c_ptr->ss_user >= MBCI_SRC && l4c_ptr->ss_user <= MBCI_SRC_END)
        {
            l4c_ss_ussd_mrsp(l4c_ptr->ss_user, msg_ptr->ussd_dcs, MBIMUSSDActionRequired, (kal_uint8*)(msg_ptr->ussd_string), msg_ptr->ussd_string_length);
        }
    #endif

        temp_src = rmmi_ptr->current_src;
    #ifndef __MMI_FMI__
        rmmi_ptr->current_src = RMMI_UNSOLICITED; //mtk01616_080603: +cusd response is sent to URC channel in modem load
        l4c_ss_ussr_rind(msg_ptr->ussd_dcs, (kal_uint8*) (msg_ptr->ussd_string), msg_ptr->ussd_string_length);
    #else
    #ifdef __RSAT__ //DUMA00209281
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
    #else
        rmmi_ptr->current_src = l4c_ptr->ss_user;
    #endif /* __RSAT__ */
        l4c_ss_ussr_rind(msg_ptr->ussd_dcs, (kal_uint8*) (msg_ptr->ussd_string), msg_ptr->ussd_string_length);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE); //mtk01616_080603 : cusd return OK/ERROR immediately only in modem load
    #endif /* __MMI_FMI__ */
        rmmi_ptr->current_src = temp_src;

        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src); 
        if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
        {
            rmmi_process_multi_cmd(cid);
        }
    }

    /* Johnny:
       1. atd will never be a ss-string, atd may be sim-string/gprs-string/cc-string
       (ex. user can not use atd to reply ussd)
       2. l4c_ptr->ss_user == RMMI_SRC && l4c_ptr->ss_current_action == PARSE_SS_EXE will never happen */

    else if (l4c_check_user_action(L4C_SS, LMMI_SRC, CUSD_EXE) == KAL_TRUE || l4c_check_user_action(L4C_SS, LMMI_SRC, PARSE_SS_EXE) == KAL_TRUE || l4c_check_user_action(L4C_SS, LMMI_SRC, USSN_FAC_IND) == KAL_TRUE /* USSR screen will replace USSN screen */
#ifdef __SAT__
        || l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) || l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE)
#endif 
        )       //mtk01616 070325: for SAT_USSD ,get ussr fac 
    {
        kal_uint8 lang_type;
        smsal_dcs_enum alphabet_type; //MAUI_02320007
        smsal_msg_class_enum mclass;
        kal_bool is_compress;
        kal_bool is_reserved;

        smsal_decode_cbsdcs(msg_ptr->ussd_dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);
        
        l4c_set_user_action(L4C_SS, LMMI_SRC, USSR_FAC_IND);

        //MAUI_02320007 MMI need to distingush the dcs is 0x11 , to do extra handling when dcs is 0x11
        l4c_ss_ussr_lind((kal_uint8)((msg_ptr->ussd_dcs == 0x11)? 0x11 : alphabet_type),
                         (kal_uint8*) (msg_ptr->ussd_string), 
                         msg_ptr->ussd_string_length, 
                         L4C_SS_MO);
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_ciss_ussn_fac_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_ciss_ussn_fac_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_ussn_fac_ind_struct *msg_ptr = NULL;

    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type; //MAUI_02320007
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;
    kal_uint8 temp_src;

    msg_ptr = (l4ccsm_ciss_ussn_fac_ind_struct*) local_para_ptr;

    smsal_decode_cbsdcs(msg_ptr->ussd_dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);

#ifdef __SAT__
    if (l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE)
    {
        //ALPS00029231 USSR triggered by SAT send USSD
        kal_brief_trace(TRACE_INFO, INFO_SET_SAT_USSR_FLAG, SAT_USSD_USSR);
        L4C_PTR->sat_ussr_flag = SAT_USSD_USSR;
    }
    else if (l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
    {
        //ALPS00029231 USSR triggered by SAT send SS
        kal_brief_trace(TRACE_INFO, INFO_SET_SAT_USSR_FLAG, SAT_SS_USSR);
        L4C_PTR->sat_ussr_flag = SAT_SS_USSR;
    }
#endif /* __SAT__ */

    l4c_set_user_action(L4C_SS, msg_ptr->src_id, USSN_FAC_IND); /* USSN screen will replace USSN screen */

    //MAUI_02320007 MMI need to distingush the dcs is 0x11 , to do extra handling when dcs is 0x11
    l4c_ss_ussn_lind((kal_uint8)((msg_ptr->ussd_dcs == 0x11)? 0x11 : alphabet_type),
                     (kal_uint8*) (msg_ptr->ussd_string), 
                     msg_ptr->ussd_string_length, 
                     L4C_SS_MO);

    //mtk01616_080616:in MMI load ,always ack by MMI
#ifdef __USSD_AUTO_REJECT__    
#ifndef __MMI_FMI__
    {
        //MMI can display, CSMSS response to NW until MMI ACK
        l4c_clear_ss_queued_msg(msg_ptr->src_id);
		
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_USSN_FAC_RES, NULL);

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);		
    }
#endif/*__MMI_FMI__*/	
#endif /*__USSD_AUTO_REJECT__*/

#ifdef __MBIM_SUPPORT__
    if (msg_ptr->src_id >= MBCI_SRC && msg_ptr->src_id <= MBCI_SRC_END)
    {
        l4c_ss_ussd_mrsp(msg_ptr->src_id, msg_ptr->ussd_dcs, MBIMUSSDNoActionRequired, (kal_uint8*)(msg_ptr->ussd_string), msg_ptr->ussd_string_length);
    }
#endif

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_ss_ussn_rind(msg_ptr->ussd_dcs, (kal_uint8*) (msg_ptr->ussd_string), msg_ptr->ussd_string_length);
    RMMI_PTR->current_src = temp_src;

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4ccsm_cphs_display_cfu_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ccsm_cphs_display_cfu_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_cphs_display_cfu_ind_struct *msg_ptr = NULL;
    kal_uint8 action;
    smu_sim_inserted_enum sim_inserted_status;
#ifdef __GEMINI__
    kal_uint8 which_sim;
#endif
    msg_ptr = (l4ccsm_cphs_display_cfu_ind_struct*) local_para_ptr;

#ifdef __GEMINI__    
    which_sim = SIM1 + (kal_uint8)(l4c_current_mod_id-MOD_L4C);
    sim_inserted_status = is_sim_inserted(which_sim);
#else
    sim_inserted_status = is_sim_inserted();
#endif
    if (sim_inserted_status != SMU_SIM_INSERTED)
    {
        action = 0;
    }
    else
    {
        action = msg_ptr->action;
    }
    l4c_cphs_display_cfu_lind(action, (kal_uint8) msg_ptr->line_num); 


    #if !defined(__MMI_FMI__) || defined(__ECFU_URC_SUPPORT__)
    {
        kal_uint8 line = 1; //line1
	    kal_uint8 temp_src;
		
        temp_src = RMMI_PTR->current_src;
	    RMMI_PTR->current_src = RMMI_UNSOLICITED;
		
	    if(msg_ptr->line_num == CSMCC_ALS_LINE2)
	        line = 2; //line2
			
	    l4c_cphs_display_cfu_rind(action, line);

	    RMMI_PTR->current_src = temp_src;
    }
    #endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  ss_need_retry
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  cause       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool ss_need_retry(kal_uint8 src_id, kal_uint16 cause)
{
    if (
#if defined(__MMI_FMI__) && !defined(__ECUSD_SUPPORT__)
           (src_id == LMMI_SRC) &&
#endif 
           (l4c_is_test_sim() == KAL_FALSE)
           && (L4C_PTR->retry_count < L4C_PTR->max_retry_count)
           && (l4c_need_retry(cause) == KAL_TRUE)
           && (L4C_PTR->retry_cc != KAL_TRUE) && (L4C_PTR->retry_ss != KAL_TRUE)
           && (L4C_PTR->ss_parameter.length > 0))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

#endif /* __MOD_CSM__ */ 

