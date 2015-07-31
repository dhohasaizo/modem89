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
 * TCM_TRC.H
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for TCM trace function.
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

#ifndef _TCM_TRC_H
#define _TCM_TRC_H

//------------------------------ suggest Add ------------------------------
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"


#define TCM_CONTROL_PLANE_FN_ENTRY_LOG(X,Y) kal_brief_trace(TRACE_GROUP_4, Y)
#define TCM_CONTROL_PLANE_TRACE_GROUP TRACE_GROUP_4
#define TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG(X,Y) kal_brief_trace(TRACE_GROUP_4, Y)
#define TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG(X,Y) kal_brief_trace(TRACE_WARNING, Y)
#define TCM_DATA_PLANE_FN_ENTRY_LOG(X,Y) kal_brief_trace(TRACE_GROUP_10, Y)
#define TCM_FN_ENTRY_LOG(X,Y) kal_brief_trace(TRACE_FUNC, Y)
#define TCM_FN_NORMAL_EXIT_LOG(X,Y) kal_brief_trace(TRACE_FUNC, Y)


#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "tcm_trc_gen.h"
#endif /* TST Trace Defintion */
#endif
BEGIN_TRACE_MAP(MOD_TCM)

   /* TCM_CONTROL_PLANE_TRACE_GROUP (TRACE_GROUP_4) */ 
   /* H Icon */
   TRC_MSG(TCM_H_ICON_INVALID_CONTEXT_ID, " [TCM H Icon] nsapi: %hd has invalid context id")
   TRC_MSG(TCM_H_ICON_CONTEXT_ID_AND_BEARER_CAPABILITY, " [TCM H Icon] context id: %d, bearer capability: %Mdata_speed_activate_enum")
   TRC_MSG(TCM_H_ICON_TCM_CHANGE_DATA_SPEED_STATE, " [TCM H Icon] nsapi: %hd, context_id: %hd, data_speed change from %Mdata_speed_activate_enum to %Mdata_speed_activate_enum")
   TRC_MSG(TCM_H_ICON_L4CTCM_GET_BEARER_CAPABILITY, " [TCM H Icon] l4ctcm_get_bearer_capability: context_id[%hd]: %hd, bearer_capability[%hd]: %Mdata_speed_activate_enum")

   /* TCM_FN_ENTRY_LOG (TRACE_FUNC) */
   /* Enter Function */
   TRC_MSG(MMI_FN_ENTER_TCM_MODULE_MAIN_SUBOP, "TCM: tcm_module_main()")
   TRC_MSG(MMI_FN_ENTER_MMI_CREATE_SIB_SUBOP, "TCM: mmi_create_sib()")
   TRC_MSG(MMI_FN_ENTER_MMI_DELETE_SIB_SUBOP, "TCM: mmi_delete_sib()")
   TRC_MSG(MMI_FN_ENTER_MMI_READ_SIB_SUBOP, "TCM: mmi_read_sib()")
   TRC_MSG(MMI_FN_ENTER_MMI_WRITE_SIB_SUBOP, "TCM: mmi_write_sib()")
   TRC_MSG(MMI_FN_ENTER_MMI_READ_MOBILITY_STATE_SUBOP, "TCM: mmi_read_mobility_state()")
   TRC_MSG(MMI_FN_ENTER_MMI_WRITE_MOBILITY_STATE_SUBOP, "TCM: mmi_write_mobility_state()")
   TRC_MSG(MMI_FN_ENTER_MMI_INIT_CONTEXT_SUBOP, "TCM: mmi_init_context()")
   TRC_MSG(MMI_FN_ENTER_MMI_RESET_CONTEXT_SUBOP, "TCM: mmi_reset_context()")
   TRC_MSG(MMI_FN_ENTER_MMI_END_CONTEXT_SUBOP, "TCM: mmi_end_context()")
   TRC_MSG(MMI_FN_ENTER_MMI_CHECK_MSG_SUBOP, "TCM: mmi_check_msg()")
   TRC_MSG(MMI_FN_ENTER_MMI_STRING_CMP_SUBOP, "TCM: mmi_string_cmp()")
   TRC_MSG(MMI_FN_ENTER_MMI_FILL_DEF_QOS_UMTS_SUBOP, "TCM: mmi_fill_def_qos_umts()")
   TRC_MSG(MMI_FN_ENTER_MMI_FILL_DEF_QOS_GPRS_SUBOP, "TCM: mmi_fill_def_qos_gprs()")
   TRC_MSG(MMI_FN_ENTER_TCM_PACK_TFT_SUBOP, "TCM: tcm_pack_tft()")
   TRC_MSG(MMI_FN_ENTER_TCM_UPDATE_TFT_SUBOP, "TCM: tcm_update_tft()")
   TRC_MSG(MMI_FN_ENTER_MMI_IS_SIB_FREE_SUBOP, "TCM: mmi_is_sib_free()")
   TRC_MSG(MMI_FN_ENTER_TCM_FIND_FREE_NSAPI_SUBOP, "TCM: tcm_find_free_nsapi()")
   TRC_MSG(MMI_FN_ENTER_MMI_IS_TFT_PRESENT_SUBOP, "TCM: mmi_is_tft_present()")
   TRC_MSG(MMI_FN_ENTER_MMI_TASK_RESET_SUBOP, "TCM: mmi_task_reset()")
   TRC_MSG(MMI_FN_ENTER_TCM_MODULE_RESET_SUBOP, "TCM: tcm_module_reset()")
   TRC_MSG(MMI_FN_ENTER_TCM_STOP_TIMER_SUBOP, "TCM: tcm_stop_timer()")
   TRC_MSG(MMI_FN_ENTER_TCM_START_TIMER_SUBOP, "TCM: tcm_start_timer()")
   TRC_MSG(MMI_FN_ENTER_TCM_RESET_TIMER_SUBOP, "TCM: tcm_reset_timer()")
   TRC_MSG(MMI_FN_ENTER_TCM_TERMINATE_CONTEXT_SUBOP, "TCM: tcm_terminate_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_USER_ATTACH_SUBOP, "TCM: tcm_user_attach()")
   TRC_MSG(MMI_FN_ENTER_TCM_ATTACH_CNF_SUBOP, "TCM: tcm_attach_cnf()")
   TRC_MSG(MMI_FN_ENTER_TCM_ATTACH_REJ_SUBOP, "TCM: tcm_attach_rej()")
   TRC_MSG(MMI_FN_ENTER_TCM_USER_DETACH_SUBOP, "TCM: tcm_user_detach()")
   TRC_MSG(MMI_FN_ENTER_TCM_DETACH_CNF_SUBOP, "TCM: tcm_detach_cnf()")
   TRC_MSG(MMI_FN_ENTER_TCM_DETACH_IND_SUBOP, "TCM: tcm_detach_ind()")
   TRC_MSG(MMI_FN_ENTER_TCM_STATUS_IND_SUBOP, "TCM: tcm_status_ind()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEND_MSG_TO_ATCI_SUBOP, "TCM: tcm_send_msg_to_atci()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEND_MSG_TO_GMM_SUBOP, "TCM: tcm_send_msg_to_gmm()")
   TRC_MSG(MMI_FN_ENTER_TCM_EXT_ACTIVATE_IND_STATE0_HDLR_SUBOP, "TCM: tcm_ext_activate_ind_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_EXT_ACTIVATE_IND_STATE1_HDLR_SUBOP, "TCM: tcm_ext_activate_ind_state1_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_REQ_STATE0_HDLR_SUBOP, "TCM: tcm_activate_req_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_REQ_STATE1_HDLR_SUBOP, "TCM: tcm_activate_req_state1_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_IND_STATE0_HDLR_SUBOP, "TCM: tcm_activate_ind_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP, "TCM: tcm_activate_cnf_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP, "TCM: tcm_activate_rej_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP, "TCM: tcm_sec_activate_cnf_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP, "TCM: tcm_sec_activate_rej_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_REJ_RSP_STATE1_HDLR_SUBOP, "TCM: tcm_activate_rej_rsp_state1_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_TIMER_EXPIRY_STATE1_HDLR_SUBOP, "TCM: tcm_timer_expiry_state1_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_UL_DATA_IND_STATE2_HDLR_SUBOP, "TCM: tcm_ul_data_ind_state2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DL_DATA_IND_STATE2_HDLR_SUBOP, "TCM: tcm_dl_data_ind_state2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DL_UNITDATA_IND_STATE2_HDLR_SUBOP, "TCM: tcm_dl_unitdata_ind_state2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_UL_DATA_IND_HDLR_SUBOP, "TCM: tcm_ul_data_ind_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_EXT_UL_DATA_IND_HDLR_SUBOP, "TCM: tcm_ext_ul_data_ind_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DL_DATA_IND_HDLR_SUBOP, "TCM: tcm_dl_data_ind_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DL_UNITDATA_IND_HDLR_SUBOP, "TCM: tcm_dl_unitdata_ind_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_MODIFY_REQ_HDLR_SUBOP, "TCM: tcm_modify_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_MODIFY_IND_STATE2_HDLR_SUBOP, "TCM: tcm_modify_ind_state2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_MODIFY_CNF_HDLR_SUBOP, "TCM: tcm_modify_cnf_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_MODIFY_REJ_HDLR_SUBOP, "TCM: tcm_modify_rej_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DEACTIVATE_REQ_STATE2_HDLR_SUBOP, "TCM: tcm_deactivate_req_state2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_EXT_DEACTIVATE_IND_STATE0N2_HDLR_SUBOP, "TCM: tcm_ext_deactivate_ind_state0n2_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_EXT_DEACTIVATE_IND_STATE1_HDLR_SUBOP, "TCM: tcm_ext_deactivate_ind_state1_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DEACTIVATE_IND_HDLR_SUBOP, "TCM: tcm_deactivate_ind_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_DEACTIVATE_CNF_HDLR_SUBOP, "TCM: tcm_deactivate_cnf_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_LINK_FREE_STATE0_HDLR_SUBOP, "TCM: tcm_link_free_state0_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_CNTXT_DATA_FSM_SUBOP, "TCM: tcm_cntxt_data_fsm()")
   TRC_MSG(MMI_FN_ENTER_TCM_MATCH_PDP_STARTUP_PARAMS_SUBOP, "TCM: tcm_match_pdp_startup_params()")
   TRC_MSG(MMI_FN_ENTER_TCM_UPDATE_SIB_FROM_STARTUP_INFO_SUBOP, "TCM: tcm_update_sib_from_startup_info()")
   TRC_MSG(MMI_FN_ENTER_TCM_CHECK_CONTEXT_PRIM_SEC_SUBOP, "TCM: tcm_check_context_prim_sec()")
   TRC_MSG(MMI_FN_ENTER_TCM_PDP_TYPE_CHECK_SUBOP, "TCM: tcm_pdp_type_check()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEND_MSG_TO_SN_SUBOP, "TCM: tcm_send_msg_to_sn()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEND_MSG_TO_SM_SUBOP, "TCM: tcm_send_msg_to_sm()")
   TRC_MSG(MMI_FN_ENTER_TCM_SEND_MSG_TO_LTWOH_SUBOP, "TCM: tcm_send_msg_to_ltwoh()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_AUX_PROC_SUBOP, "TCM: tcm_activate_aux_proc()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_CNF_AUX_PROC_SUBOP, "TCM: tcm_activate_cnf_aux_proc()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACTIVATE_REJ_AUX_PROC_SUBOP, "TCM: tcm_activate_rej_aux_proc()")
   TRC_MSG(MMI_FN_ENTER_TCM_GET_SIB_ID_SUBOP, "TCM: tcm_get_sib_id()")
   TRC_MSG(MMI_FN_ENTER_TCM_REACT_SEC_PROC_SUBOP, "TCM: tcm_react_sec_proc()")
   TRC_MSG(MMI_FN_ENTER_TCM_ELECT_PRIM_N_ACTIVATE_PROC_SUBOP, "TCM: tcm_elect_prim_n_activate_proc()")
   TRC_MSG(MMI_FN_ENTER_TCM_TEARDOWN_NEEDED_SUBOP, "TCM: tcm_teardown_needed()")

   /* TRACE_FUNC */
   TRC_MSG(FUNC_TCM_INIT_TIMER, "TCM: ppp_init_timer")
   TRC_MSG(FUNC_TCM_STOP_TIMER, "TCM: ppp_stop_timer")
   TRC_MSG(FUNC_TCM_START_TIMER, "TCM: ppp_start_timer")
   TRC_MSG(FUNC_TCM_RELEASE_TIMER, "TCM: ppp_release_timer")
   TRC_MSG(FUNC_TCM_RESET_TIMER, "TCM: ppp_reset_timer")
   TRC_MSG(FUNC_TCM_IS_TIMEOUT_VALID, "TCM: tcm_is_timeout_valid")
   TRC_MSG(FUNC_TCM_SIM_MSG_HDLR, "TCM: tcm_sim_msg_hdlr()")
   TRC_MSG(FUNC_TCM_CONTINUE_ACT_PROC, "TCM: tcm_continue_activate_proc()")
   TRC_MSG(FUNC_TCM_CHECK_ACL_LIST, "TCM: tcm_check_acl_list()")
   TRC_MSG(FUNC_TCM_ACL_REJECT_ACT_PROC, "TCM: tcm_acl_pdp_reject_activate_proc()")
   TRC_MSG(FUNC_CONTEXT_IS_ACTIVATED_OR_DURING_ACTIVATING, "TCM: check_pdp_context_exist_or_during_activating_func() nsapi %hd (cid %hd) is activated or actiavting")

   /* TCM_CONTROL_PLANE_FN_ENTRY_LOG (TRACE_GROUP_4) */
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SET_MODE_REQ_HDLR_SUBOP, "TCM: tcm_acl_set_mode_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_GET_ENTRIES_REQ_HDLR_SUBOP, "TCM: tcm_acl_get_entries_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SET_ENTRY_REQ_HDLR_SUBOP, "TCM: tcm_acl_set_entry_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_ADD_ENTRY_REQ_HDLR_SUBOP, "TCM: tcm_acl_add_entry_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_DEL_ENTRY_REQ_HDLR_SUBOP, "TCM: tcm_acl_del_entry_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_LEAVE_MENU_REQ_HDLR_SUBOP, "TCM: tcm_acl_leave_menu_req_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_GET_ENTRIES_REJ_TO_L4C_SUBOP, "TCM: tcm_acl_send_get_entries_rej_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_SET_ENTRY_REJ_TO_L4C_SUBOP, "TCM: tcm_acl_send_set_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_ADD_ENTRY_REJ_TO_L4C_SUBOP, "TCM: tcm_acl_send_add_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_DEL_ENTRY_REJ_TO_L4C_SUBOP, "TCM: tcm_acl_send_del_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_IS_APN_EXIST_IN_CONTEXT_SUBOP, "TCM: tcm_acl_is_apn_exist_in_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SIM_READ_CNF_HDLR_SUBOP, "TCM: tcm_acl_sim_read_cnf_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SIM_WRITE_CNF_HDLR_SUBOP, "TCM: tcm_acl_sim_write_cnf_hdlr()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_WRITE_APN_LIST_TO_SIM_SUBOP, "TCM: tcm_acl_write_apn_list_to_sim()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_ADD_ENTRY_CNF_TO_L4C_SUBOP, "TCM: tcm_acl_send_add_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_SET_ENTRY_CNF_TO_L4C_SUBOP, "TCM: tcm_acl_send_set_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_DEL_ENTRY_CNF_TO_L4C_SUBOP, "TCM: tcm_acl_send_del_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_WRITE_CNF_TO_L4C_SUBOP, "TCM: tcm_acl_send_write_cnf_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_WRITE_REJ_TO_L4C_SUBOP, "TCM: tcm_acl_send_write_rej_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_SEND_READ_CNF_TO_L4C_SUBOP, "TCM: tcm_acl_send_read_cnf_to_l4c()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_ADD_APN_TO_CONTEXT_SUBOP, "TCM: tcm_acl_add_apn_to_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_ENCODE_APN_SUBOP, "TCM: tcm_acl_encode_apn()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_PARSE_SIM_FILE_STATE0_SUBOP, "TCM: tcm_acl_parse_sim_file_state0()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_RESET_CONTEXT_SUBOP, "TCM: tcm_acl_reset_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_MODIFY_APN_IN_CONTEXT_SUBOP, "TCM: tcm_acl_modify_apn_in_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_ACL_DEL_APN_IN_CONTEXT_SUBOP, "TCM: tcm_acl_del_apn_in_context()")
   TRC_MSG(MMI_FN_ENTER_TCM_L4CTCM_ENCODE_TRANSFER_DELAY, "TCM: l4ctcm_encode_transfer_delay, delay: %d, val_ptr: %d")

   /* TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG (TRACE_GROUP_4) */
   /* Exit Function */
   TRC_MSG(MMI_FN_EXIT_TCM_TEARDOWN_NEEDED_SUBOP, "TCM: ~tcm_teardown_needed()")
   TRC_MSG(MMI_FN_EXIT_TCM_ELECT_PRIM_N_ACTIVATE_PROC_SUBOP, "TCM: ~tcm_elect_prim_n_activate_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_REACT_SEC_PROC_SUBOP, "TCM: ~tcm_react_sec_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_GET_SIB_ID_SUBOP, "TCM: ~tcm_get_sib_id()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REJ_AUX_PROC_SUBOP, "TCM: ~tcm_activate_rej_aux_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_CNF_AUX_PROC_SUBOP, "TCM: ~tcm_activate_cnf_aux_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_AUX_PROC_SUBOP, "TCM: ~tcm_activate_aux_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEND_MSG_TO_SM_SUBOP, "TCM: ~tcm_send_msg_to_sm()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEND_MSG_TO_SN_SUBOP, "TCM: ~tcm_send_msg_to_sn()")
   TRC_MSG(MMI_FN_EXIT_TCM_PDP_TYPE_CHECK_SUBOP, "TCM: ~tcm_pdp_type_check()")
   TRC_MSG(MMI_FN_EXIT_TCM_CHECK_CONTEXT_PRIM_SEC_SUBOP, "TCM: ~tcm_check_context_prim_sec_s()")
   TRC_MSG(MMI_FN_EXIT_TCM_UPDATE_SIB_FROM_STARTUP_INFO_SUBOP, "TCM: ~tcm_update_sib_from_startup_info_()")
   TRC_MSG(MMI_FN_EXIT_TCM_MATCH_PDP_STARTUP_PARAMS_SUBOP, "TCM: ~tcm_match_pdp_startup_params_()")
   TRC_MSG(MMI_FN_EXIT_TCM_CNTXT_DATA_FSM_SUBOP, "TCM: ~tcm_cntxt_data_fsm_()")
   TRC_MSG(MMI_FN_EXIT_TCM_LINK_FREE_IND_STATE0_HDLR_SUBOP, "TCM: ~tcm_link_free_ind_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REQ_STATE1_HDLR_SUBOP, "TCM: ~tcm_activate_req_state1_hdlr()")

   TRC_MSG(MMI_FN_EXIT_TCM_LINK_FREE_IND_STATE0_HDLR_SUBOP_2, "TCM: ~tcm_link_free_ind_state0_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_DEACTIVATE_CNF_HDLR_SUBOP, "TCM: ~tcm_deactivate_cnf_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_DEACTIVATE_CNF_HDLR_SUBOP_2, "TCM: ~tcm_deactivate_cnf_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_DEACTIVATE_IND_HDLR_SUBOP, "TCM: ~tcm_deactivate_ind_hdlr()")

   TRC_MSG(MMI_FN_EXIT_TCM_DEACTIVATE_IND_HDLR_SUBOP_2, "TCM: ~tcm_deactivate_ind_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_EXT_DEACTIVATE_IND_STATE1_HDLR_SUBOP, "TCM: ~tcm_ext_deactivate_ind_state1_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_EXT_DEACTIVATE_IND_STATE0N2_HDLR_SUBOP, "TCM: ~tcm_ext_deactivate_ind_state0n2_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_DEACTIVATE_REQ_STATE2_HDLR_SUBOP, "TCM: ~tcm_deactivate_req_state2_hdlr_su()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP, "TCM: ~tcm_modify_rej_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP_2, "TCM: ~tcm_modify_rej_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP_3, "TCM: ~tcm_modify_rej_hdlr()-3")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP, "TCM: ~tcm_modify_cnf_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP_2, "TCM: ~tcm_modify_cnf_hdlr_()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP_3, "TCM: ~tcm_modify_cnf_hdlr_()-3")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_IND_STATE2_HDLR_SUBOP, "TCM: ~tcm_modify_ind_state2_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_IND_STATE2_HDLR_SUBOP_2, "TCM: ~tcm_modify_ind_state2_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_MODIFY_REQ_HDLR_SUBOP, "TCM: ~tcm_modify_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_DL_UNITDATA_IND_STATE2_HDLR_SUBOP, "TCM: ~tcm_dl_unitdata_ind_state2_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_DL_DATA_IND_STATE2_HDLR_SUBOP, "TCM: ~tcm_dl_data_ind_state2_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_UL_DATA_IND_STATE2_HDLR_SUBOP, "TCM: ~tcm_ul_data_ind_state2_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_DL_UNITDATA_IND_HDLR_SUBOP, "TCM: ~tcm_dl_unitdata_ind_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_DL_DATA_IND_HDLR_SUBOP, "TCM: ~tcm_dl_data_ind_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_UL_DATA_IND_HDLR_SUBOP, "TCM: ~tcm_ul_data_ind_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_EXT_UL_DATA_IND_HDLR_SUBOP, "TCM: ~tcm_ext_ul_data_ind_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_TIMER_EXPIRY_STATE1_HDLR_SUBOP, "TCM: ~tcm_timer_expiry_state1_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REJ_RSP_STATE1_HDLR_SUBOP, "TCM: ~tcm_activate_rej_rsp_state1_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP, "TCM: ~tcm_sec_activate_rej_state0_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP_2, "TCM: ~tcm_sec_activate_rej_state0_hdlr_()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP, "TCM: ~tcm_sec_activate_cnf_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP_2, "TCM: ~tcm_sec_activate_cnf_state0_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP, "TCM: ~tcm_activate_rej_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP_2, "TCM: ~tcm_activate_rej_state0_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP, "TCM: ~tcm_activate_cnf_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP_2, "TCM: ~tcm_activate_cnf_state0_hdlr()-2")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_IND_STATE0_HDLR_SUBOP, "TCM: ~tcm_activate_ind_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACTIVATE_REQ_STATE0_HDLR_SUBOP, "TCM: ~tcm_activate_req_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE0_HDLR_SUBOP, "TCM: ~tcm_ext_activate_ind_state0_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE1_HDLR_SUBOP, "TCM: ~tcm_ext_activate_ind_state1_hdlr_()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEND_MSG_TO_GMM_SUBOP, "TCM: ~tcm_send_msg_to_gmm()")
   TRC_MSG(MMI_FN_EXIT_TCM_SEND_MSG_TO_ATCI_SUBOP, "TCM: ~tcm_send_msg_to_atci()")
   TRC_MSG(MMI_FN_EXIT_TCM_MOBILITY_STATUS_SUBOP, "TCM: ~tcm_mobility_status()")
   TRC_MSG(MMI_FN_EXIT_TCM_STATUS_IND_SUBOP, "TCM: ~tcm_status_ind()")
   TRC_MSG(MMI_FN_EXIT_TCM_DETACH_IND_SUBOP, "TCM: ~tcm_detach_ind()")
   TRC_MSG(MMI_FN_EXIT_TCM_DETACH_CNF_SUBOP, "TCM: ~tcm_detach_cnf()")
   TRC_MSG(MMI_FN_EXIT_TCM_USER_DETACH_SUBOP, "TCM: ~tcm_user_detach_su()")
   TRC_MSG(MMI_FN_EXIT_TCM_ATTACH_REJ_SUBOP, "TCM: ~tcm_attach_rej()")
   TRC_MSG(MMI_FN_EXIT_TCM_ATTACH_CNF_SUBOP, "TCM: ~tcm_attach_cnf()")
   TRC_MSG(MMI_FN_EXIT_TCM_USER_ATTACH_SUBOP, "TCM: ~tcm_user_attach_()")
   TRC_MSG(MMI_FN_EXIT_TCM_TERMINATE_CONTEXT_SUBOP, "TCM: ~tcm_terminate_context()")
   TRC_MSG(MMI_FN_EXIT_TCM_RESET_TIMER_SUBOP, "TCM: ~tcm_reset_timer()")
   TRC_MSG(MMI_FN_EXIT_TCM_START_TIMER_SUBOP, "TCM: ~tcm_start_timer()")
   TRC_MSG(MMI_FN_TCM_STOP_TIMER_EXIT_SUBOP, "TCM: ~tcm_stop_timer_exit()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODULE_RESET_SUBOP, "TCM: ~tcm_module_reset()")
   TRC_MSG(MMI_FN_EXIT_MMI_TASK_RESET_SUBOP, "TCM: ~mmi_task_reset()")
   TRC_MSG(MMI_FN_EXIT_MMI_IS_TFT_PRESENT_SUBOP, "TCM: ~mmi_is_tft_present()")
   TRC_MSG(MMI_FN_EXIT_TCM_FIND_FREE_NSAPI_SUBOP, "TCM: ~tcm_find_free_nsapi()")
   TRC_MSG(MMI_FN_EXIT_MMI_IS_SIB_FREE_SUBOP, "TCM: ~mmi_is_sib_free()")
   TRC_MSG(MMI_FN_EXIT_TCM_UPDATE_TFT_SUBOP, "TCM: ~tcm_update_tft()")
   TRC_MSG(MMI_FN_EXIT_TCM_PACK_TFT_SUBOP, "TCM: ~tcm_pack_tft()")
   TRC_MSG(MMI_FN_EXIT_MMI_FILL_DEF_QOS_GPRS_SUBOP, "TCM: ~mmi_fill_def_qos_gprs()")
   TRC_MSG(MMI_FN_EXIT_MMI_FILL_DEF_QOS_UMTS_SUBOP, "TCM: ~mmi_fill_def_qos_umts()")
   TRC_MSG(MMI_FN_EXIT_MMI_STRING_CMP_SUBOP, "TCM: ~mmi_string_cmp()")
   TRC_MSG(MMI_FN_EXIT_MMI_CHECK_MSG_SUBOP, "TCM: ~mmi_check_msg()")
   TRC_MSG(MMI_FN_EXIT_MMI_END_CONTEXT_SUBOP, "TCM: ~mmi_end_context()")
   TRC_MSG(MMI_FN_EXIT_MMI_RESET_CONTEXT_SUBOP, "TCM: ~mmi_reset_context()")
   TRC_MSG(MMI_FN_EXIT_MMI_INIT_CONTEXT_SUBOP, "TCM: ~mmi_init_context()")
   TRC_MSG(MMI_FN_EXIT_MMI_WRITE_MOBILITY_STATE_SUBOP, "TCM: ~mmi_write_mobility_state()")
   TRC_MSG(MMI_FN_EXIT_MMI_READ_MOBILITY_STATE_SUBOP, "TCM: ~mmi_read_mobility_state()")
   TRC_MSG(MMI_FN_EXIT_MMI_WRITE_SIB_SUBOP, "TCM: ~mmi_write_sib()")
   TRC_MSG(MMI_FN_EXIT_MMI_READ_SIB_SUBOP, "TCM: ~mmi_read_sib()")
   TRC_MSG(MMI_FN_EXIT_MMI_DELETE_SIB_SUBOP, "TCM: ~mmi_delete_sib()")
   TRC_MSG(MMI_FN_EXIT_MMI_CREATE_SIB_SUBOP, "TCM: ~mmi_create_sib()")
   TRC_MSG(MMI_FN_EXIT_TCM_MODULE_MAIN_SUBOP, "TCM: ~tcm_module_main()")
   TRC_MSG(MMI_FN_MMI_SEND_MSG_TO_MM_SUBOP, "TCM: ~send_msg_to_mm()")
   TRC_MSG(TCM_ACL_CHECK, "TCM: ACL checking result : %d")

   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SET_MODE_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_set_mode_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_GET_ENTRIES_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_get_entries_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SET_ENTRY_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_set_entry_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_ADD_ENTRY_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_add_entry_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_DEL_ENTRY_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_del_entry_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_LEAVE_MENU_REQ_HDLR_SUBOP, "TCM: ~tcm_acl_leave_menu_req_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_GET_ENTRIES_REJ_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_get_entries_rej_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_SET_ENTRY_REJ_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_set_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_ADD_ENTRY_REJ_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_add_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_DEL_ENTRY_REJ_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_del_entry_rej_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_IS_APN_EXIST_IN_CONTEXT_SUBOP, "TCM: ~tcm_acl_is_apn_exist_in_context()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SIM_READ_CNF_HDLR_SUBOP, "TCM: ~tcm_acl_sim_read_cnf_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SIM_WRITE_CNF_HDLR_SUBOP, "TCM: ~tcm_acl_sim_write_cnf_hdlr()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_WRITE_APN_LIST_TO_SIM_SUBOP, "TCM: ~tcm_acl_write_apn_list_to_sim()")
   TRC_MSG(FUNC_EXIT_TCM_CONTINUE_ACT_PROC, "TCM: ~tcm_acl_pdp_continue_activate_proc()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_ADD_ENTRY_CNF_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_add_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_SET_ENTRY_CNF_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_set_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_DEL_ENTRY_CNF_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_del_entry_cnf_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_WRITE_CNF_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_write_cnf_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_WRITE_REJ_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_write_rej_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_SEND_READ_CNF_TO_L4C_SUBOP, "TCM: ~tcm_acl_send_read_cnf_to_l4c()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_ADD_APN_TO_CONTEXT_SUBOP, "TCM: ~tcm_acl_add_apn_to_context()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_ENCODE_APN_SUBOP, "TCM: ~tcm_acl_encode_apn()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_PARSE_SIM_FILE_STATE0_SUBOP, "TCM: ~tcm_acl_parse_sim_file_state0()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_RESET_CONTEXT_SUBOP, "TCM: ~tcm_acl_reset_context()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_MODIFY_APN_IN_CONTEXT_SUBOP, "TCM: ~tcm_acl_modify_apn_in_context()")
   TRC_MSG(MMI_FN_EXIT_TCM_ACL_DEL_APN_IN_CONTEXT_SUBOP, "TCM: ~tcm_acl_del_apn_in_context()")
   
   /* TRACE_GROUP_2 */ 
   /* infomation for 2ndary PDP */
   TRC_MSG(TCM_SET_SEC_PDP_INFO, "TCM: second_cid = %hd, primary_cid = %hd")
   TRC_MSG(L4CTCM_SET_TFT_INFO, "TCM: l4ctcm_set_tft_info()")
   TRC_MSG(TCM_SET_TFT_INFO, "TCM: tcm_set_tft_info(), sib_id= %hd")
    TRC_MSG(TCM_GET_TFT_INFO, "TCM: tcm_get_tft_info(), sib_id= %hd")
    TRC_MSG(TCM_SET_TFT_MOD, "TCM: tcm_set_tft_mod(), mod_type= %Mcontext_mod_type_enum")
    TRC_MSG(TCM_TFT_OPCODE, "TCM: tft_opcode = %Mtft_opcode_enum")    
    TRC_MSG(TCM_SET_TFT_INFO_LOCAL, "TCM: tcm_set_tft_info_local(), sib_id= %hd, tft_opcode = %Mtft_opcode_enum")
    TRC_MSG(TCM_SET_TFT_INFO_PEER, "TCM: tcm_set_tft_info_peer(), sib_id= %hd, tft_opcode = %Mtft_opcode_enum")
    TRC_MSG(TCM_ADD_PACKET_FILTER, "TCM: tcm_add_packet_filter()")
    TRC_MSG(TCM_DELETE_PACKET_FILTER, "TCM: tcm_delete_packet_filter()")
    TRC_MSG(TCM_CREATE_PACKET_FILTER, "TCM: tcm_create_packet_filter()")
    TRC_MSG(TCM_REPLACE_PACKET_FILTER, "TCM: tcm_replace_packet_filter()")
    TRC_MSG(TCM_FREE_TFT, "TCM: tcm_free_tft()")
    TRC_MSG(TCM_GET_TFT_OPCODE, "TCM: tcm_get_tft_opcode()")
    TRC_MSG(TCM_GET_PRIMARY_CID, "[TCM: tcm_get_primary_context_id()] prim_cid = %d")
    TRC_MSG(TCM_CHECK_EPI_EXIST, "[TCM: tcm_check_epi_exist()] result = %Mkal_bool")
    TRC_MSG(TCM_CHECK_PFI_EXIST, "[TCM: tcm_check_pfi_exist()] result = %Mkal_bool")
    TRC_MSG(TCM_FILL_TFT_REPLACE, "TCM: tcm_fill_tft_replace()")
    TRC_MSG(TCM_FILL_TFT, "TCM: tcm_fill_tft()")
    TRC_MSG(TCM_FILL_PACKET_FILTER, "TCM: tcm_fill_packet_filter()")
    TRC_MSG(TCM_TFT_TYPE, "TCM: tft_type = %Mpacket_filter_type_enum")
    /* TRACE_INFO */
   TRC_MSG(TCM_MMI_CREATE_SIB, "TCM: mmi_create_sib()")
   TRC_MSG(TCM_PDP_CONTEXT_TYPE, "TCM: pdp_context_type %Mpdp_context_type_enum")
   TRC_MSG(TCM_PDP_SET_QOS, "TCM: set QoS %Matci_qos_enum")
   TRC_MSG(TCM_PDP_SET_EQOS, "TCM: set EQoS %Matci_qos_enum")
   TRC_MSG(TCM_TST_INJECT_MSG_PROCESSED, "tst_inject_msg is processed")

   /* TRACE_INFO */
   TRC_MSG(TCM_TFT_TRACE_PFI_EPI, "[TCM][TFT] context_id = %hd, pfi = %d, epi = %d")
   TRC_MSG(TCM_TFT_TRACE_SRC_ADDR, "[TCM][TFT] src_addr_len  = %d, src_addr_sb_net_mask = %d, %d, %d, %d, %d, %d, %d, %d")
   TRC_MSG(TCM_TFT_TRACE_PROTOCOL_NUMBER, "[TCM][TFT] prot_number_present  = %d, prot_number_next_hdr = %d")
   TRC_MSG(TCM_TFT_TRACE_DEST_PORT, "[TCM][TFT] dst_port_len  = %d, dst_port_range = %d, %d")
   TRC_MSG(TCM_TFT_TRACE_SRC_PORT, "[TCM][TFT] src_port_len  = %d, src_port_range = %d, %d")   
   TRC_MSG(TCM_TFT_TRACE_IPSEC, "[TCM][TFT] ipsec_spi_present  = %d, ipsec_spi = %d")
   TRC_MSG(TCM_TFT_TRACE_TOS_TRAFFIC_CLASS, "[TCM][TFT] tos_len  = %d, tos_traffic_class_mask = %d, %d")   
   TRC_MSG(TCM_TFT_TRACE_FLOW_LABEL, "[TCM][TFT] flow_label_present  = %d, flow_label = %d")

   TRC_MSG(TCM_TRACE_N201U, "[TCM] context_id %hd : requested n201u = %d")
   TRC_MSG(TCM_USE_PAP, "[TCM] use PAP")
   TRC_MSG(TCM_USE_CHAP, "[TCM] use CHAP")

   TRC_MSG(TCM_START_EVENT_TIMER,"[TCM][START TIMER] cid: %d")
   TRC_MSG(TCM_STOP_EVENT_TIMER,"[TCM][STOP TIMER] cid: %d")

    /* TRACE_WARNING */
   TRC_MSG(TCM_UNDEFINE_PDP_INFO, "TCM: undefine pdp info: %Ml4c_action_enum") //mtk00714 w0637: AT definition
   TRC_MSG(TCM_CGDCONT_NOT_DEFINED,"[TCM] CGDCONT or CGDSCONT not defined")
   TRC_MSG(TCM_CHECK_MSG_FAIL, "check message fail")
   TRC_MSG(TCM_N201U_UPDATED_FAIL, "N201U updated in context and NVRAM successfully")
   TRC_MSG(TCM_SIB_NOT_DEFINED, "[TCM] SIB not defined")
   TRC_MSG(TCM_IGNORE_DATA_DUE_TO_NO_RAB, "[TCM] data is ignored because no RAB")
   TRC_MSG(TCM_PRIMARY_WITH_TFT, "[TCM] Primary should not have TFT")
   TRC_MSG(TCM_SECONDARY_WITHOUT_TFT, "[TCM] Secondary without TFT")
   TRC_MSG(TCM_WARNING_PDP_NOT_HAVE_DL_FLC_POOL, "WARNING: nsapi: %hd do not have dl_flc_pool")      

   /* Check Data Account Format */
   TRC_MSG(TCM_USERNAME_STRING_WITHOUT_NUL_TERMINATOR, "[TCM] Data Account: Username string without NUL-terminator! Some characters are truncated." ) 
   TRC_MSG(TCM_PASSWORD_STRING_WITHOUT_NUL_TERMINATOR, "[TCM] Data Acocunt: Password string without NUL-terminator! Some characters are truncated." ) 
   

#ifdef TCM_WAP_QOS_SETTING   
   TRC_MSG(TCM_WAP_QOS_SETTING_APPLY_AT, "[TCM_WAP_QOS_SETTING] use AT setting for internal context")
   TRC_MSG(TCM_WAP_QOS_SETTING_RECEIVE_AT, "[TCM_WAP_QOS_SETTING] AT set internal QoS successful")
#endif

   /* TRACE_GROUP_3 */
   /* APN Control List */
   TRC_MSG(TCM_ACL_SET_MODE_REQ_ON, "[ACL] Set ACL mode request: ON")
   TRC_MSG(TCM_ACL_SET_MODE_REQ_OFF, "[ACL] Set ACL mode request: OFF")
   TRC_MSG(TCM_ACL_SET_MODE_NOT_ALLOWED, "[ACL] Set ACL mode Not Allowed!!: Current action=%Mtcm_acl_action_enum")
   TRC_MSG(TCM_ACL_CONTEXT_NOT_RESET, "[ACL] TCM context is not reset when MMI leaves ACL menu: Current action=%Mtcm_acl_action_enum")
   TRC_MSG(TCM_ACL_APN_TO_BE_ACTIVATED_IS_NETWORK_PROVIDED_APN, "[ACL] APN to be activated: Network-provided APN")
   TRC_MSG(TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, "[ACL][Parse SIM read cnf] End of read after 0xDD. Meaningful bytes = %d bytes")
   TRC_MSG(TCM_ACL_APN_TO_BE_COMPARED_IS_NETWORK_PROVIDED_APN, "[ACL] %d-th APN to be compared: Network-provided APN")
   TRC_MSG(TCM_ACL_BOTH_ARE_NETWORK_PROVIDED_APN, "[ACL] Both APNs are Network-provided APN")
   TRC_MSG(TCM_ACL_APN_FOUND, "[ACL] APN is found!!")
   TRC_MSG(TCM_ACL_APN_NOT_MATCH, "[ACL] APN does not match. Next!!")
   TRC_MSG(TCM_ACL_LIST_IN_CONTEXT_IS_EMPTY_AS_EXPECTED, "[ACL] ACL list in the context is empty")
   TRC_MSG(TCM_NUM_OF_APN_INDICATED_IN_EFACL, "[ACL] Num of APNs indicated in EFacl = %d")
   TRC_MSG(TCM_NUM_OF_APN_AFTER_PARSING_EFACL, "[ACL] Num of APNs after parsing EFacl = %d")

   /* SATCE */
   TRC_MSG(TCM_SATCE_INVALID_FORMAT_APN_1, "ERROR: Find SATCE use TCM_SATCE_APN_INVALID_FORMAT APN 1")
   TRC_MSG(TCM_SATCE_INVALID_FORMAT_APN_2, "ERROR: Find SATCE use TCM_SATCE_APN_INVALID_FORMAT APN 2")
   TRC_MSG(TCM_SATCE_FOLLOW_SPEC_FORMAT, "Find SATCE use TCM_SATCE_APN_SPEC_FORMAT APN")
   TRC_MSG(TCM_SATCE_USE_STRING_FORMAT, "WARNING: Find SATCE use TCM_SATCE_APN_STRING_FORMAT APN")
   TRC_MSG(TCM_SATCE_INVALID_FORMAT_APN_3, "ERROR: Find SATCE use TCM_SATCE_APN_INVALID_FORMAT APN 3")

   /* TRACE_ERROR */
   TRC_MSG(TCM_ACL_WRONG_ACCESS_ID_IN_SIM_WRITE_CNF, "[ACL] Wrong access id in SIM_WRITE_CNF: %d") 
   TRC_MSG(TCM_ACL_SIM_READ_SUCCESS_BUT_EMPTY_CONTENT, "[ACL] Read SIM successfully but content is EMPTY")
   TRC_MSG(TCM_ACL_CONTEXT_SHOULD_BE_EMPTY_BUT_NOT, "[ACL] ACL list in the context should be NULL but not when tcm_acl_parse_sim_file_state0()")
   TRC_MSG(TCM_ACL_DISACRD_ACL_LIST_IN_CONTEXT, "[ACL] Discard ACL list in the context")
   TRC_MSG(TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_DELETE_APN, "[ACL] EFacl is not available in context when trying to DELETE")
   TRC_MSG(TCM_ACL_CONTEXT_IS_EMPTY_WHEN_DELETE_APN, "[ACL] ACL list in the context is EMPTY when trying to DELETE")
   TRC_MSG(TCM_ACL_APN_INDEX_NOT_IN_CONTEXT_WHEN_DELETE, "[ACL] APN index is not in context when trying to DELETE: index=%d")
   TRC_MSG(TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_ADD_APN, "[ACL] EFacl is not available in context when trying to ADD")
   TRC_MSG(TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_MODIFY_APN, "[ACL] EFacl is not available in context when trying to MODIFY")
   TRC_MSG(TCM_ACL_CONTEXT_IS_EMPTY_WHEN_MODIFY_APN, "[ACL] ACL list in the context is EMPTY when trying to MODIFY")

   /* Trace for Call History */
   /* Enter Function */
   /* TRACE_WARNING */
   /* TRACE_ERROR */
   /* TRACE_INFO */
   TRC_MSG(TCM_FN_ENTER_L4CTCM_QUERY_EXT_GPRS_HISTORY, "   [call_history]:l4ctcm_query_ext_gprs_history()")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT, "   [call_history]total_tx:%d, total_rx:%d, last_cid:%d, sib_id:%d, last_tx:%d, last_rx:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_1,   "   [call_history]total_tx:               %d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_1_H, "   [call_history]total_tx:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_2,   "   [call_history]total_rx:               %d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_2_H, "   [call_history]total_rx:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_3, "   [call_history]last_cid:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_4, "   [call_history]sib_id:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_5,   "   [call_history]last_tx:               %d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_5_H, "   [call_history]last_tx:%d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_6,   "   [call_history]last_rx:               %d")
   TRC_MSG(TCM_QUERY_EXT_GPRS_HISTORY_RESULT_6_H, "   [call_history]last_rx:%d")
   TRC_MSG(TCM_FN_ENTER_L4CTCM_RESET_EXT_GPRS_HISTORY, "   call_history:l4ctcm_reset_ext_gprs_history(), para: %d, %d, %d, %d")
   TRC_MSG(TCM_FN_ENTER_L4CTCM_RESET_EXT_GPRS_HISTORY_RESET_ALL, "   l4ctcm_reset_ext_gprs_history() reset_all == KAL_TRUE")
   TRC_MSG(TCM_INFO_CALL_HISTORY_EXT_CONN_LAST_UPDATE_TICK, "   call_history_ext_conn_last_update_tick[%d]: %d ticks")
   TRC_MSG(TCM_INFO_CALL_HISTORY_EXT_CONN_LAST_UPDATE_TICK_INCREMENT_TO, "   call_history_ext_conn_last_update_tick[%d] increment to: %d ticks")
   TRC_MSG(TCM_INFO_CALL_HISTORY_L4CTCM_RESET_EXT_GPRS_HISTORY_RESET_CERTAIN_CID_LAST_HISTORY, "   call_history:l4ctcm_reset_ext_gprs_history(), reset_certain_cid_last_history == KAL_TRUE")
   TRC_MSG(TCM_FN_ENTER_L4CTCM_RESET_EXT_GPRS_HISTORY_RESET_TOTAL_HISTORY, "   call_history:l4ctcm_reset_ext_gprs_history(), reset_total_history == KAL_TRUE")
   TRC_MSG(TCM_INFO_CALL_HISTORY_SEND_NVRAM_READ_REQ, "   [call_history]: Send MSG_ID_NVRAM_READ_REQ")
   TRC_MSG(TCM_INFO_CALL_HISTORY_MSG_ID_NVRAM_WRITE_CNF, "   [call_history]:MSG_ID_NVRAM_WRITE_CNF")
   TRC_MSG(TCM_ERROR_NVRAM_WRITE_CNF_RESULT_FAIL, "   [call_history]: MSG_ID_NVRAM_WRITE_CNF result != NVRAM_IO_ERRNO_OK")
   TRC_MSG(TCM_ERROR_NVRAM_WRITE_CNF_FAIL_SET_ZERO_DEFAULT, "   !!! [call_history] NVRAM_READ_CNF result != NVRAM_IO_ERRNO_OK, set 0 as default history value")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_TX_DATA_IN_NVRAM, "    call_history_total_ext_tx_data in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_RX_DATA_IN_NVRAM, "    call_history_total_ext_rx_data in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_CONN_DURATION_IN_NVRAM, "    call_history_total_ext_conn_duration in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_TX_DATA_IN_NVRAM, "    call_history_last_ext_tx_data[%d] in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_RX_DATA_IN_NVRAM, "    call_history_last_ext_rx_data[%d] in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_CONN_DURATION_IN_NVRAM, "    call_history_last_ext_conn_duration[%d] in NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_RESET_SIB_ID_LAST_TX_RX_DURATION, "    call_history: reset sib_id(%d) last tx/rx and last conn duration")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_TX_DATA_IN_NVRAM_BECOMES, "    call_history_last_ext_tx_data[%d] in NVRAM becomes: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_RX_DATA_IN_NVRAM_BECOMES, "    call_history_last_ext_rx_data[%d] in NVRAM becomes: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_CONN_DURATION_BECOMES, "    call_history_last_ext_conn_duration[%d] in NVRAM becomes: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_EXT_CONN_LAST_UPDATE_TICK_BECOMES, "    call_history_ext_conn_last_update_tick[%d] becomes: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TX_INCREASE, "   call_history tx increase: %d bytes")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_TX_BYTES, "   call_history_last_ext_tx_data(%d): %d bytes")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_TX_BYTES, "   call_history_total_ext_tx_data: %d bytes")
   TRC_MSG(TCM_INFO_CALL_HISTORY_RX_INCREASE, "   call_history rx increase: %d bytes")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_RX_BYTES, "   call_history_last_ext_rx_data(%d): %d bytes")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_RX_BYTES, "   call_history_total_ext_rx_data: %d bytes")
   TRC_MSG(TCM_FN_ENTER_TCM_UPDATE_CALL_HISTORY_DURATION_AND_PARA, "   [call_history]: tcm_update_call_history_duration(): Para: %d, %d")
   TRC_MSG(TCM_FN_ENTER_TCM_UPDATE_CALL_HISTORY_DURATION_CERTAIN_SIB, "   [call_history]: tcm_update_call_history_duration(): sib_id(%d)")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_CONN_DURATION_TICKS, "    call_history_total_ext_conn_duration: %d ticks")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_CONN_DURATION_INCREMENT_TO, "    call_history_total_ext_conn_duration increment to: %d ticks")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_CONN_DURATION, "    call_history_last_ext_conn_duration[%d]: %d ticks")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_CONN_DURATION_INCREMENT_TO, "    call_history_last_ext_conn_duration[%d] increment to: %d ticks")
   TRC_MSG(TCM_FN_ENTER_TCM_SEND_WRITE_EXT_CALL_HISTORY_TO_NVRAM, "   [call_history]: tcm_send_write_ext_call_history_to_nvram()")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_TX_DATA_STORE_TO_NVRAM, "    call_history_total_ext_tx_data store to NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_RX_DATA_STORE_TO_NVRAM, "    call_history_total_ext_rx_data store to NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_TOTAL_EXT_CONN_DURATION_STORE_TO_NVRAM, "    call_history_total_ext_conn_duration store to NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_TX_DATA_STORE_TO_NVRAM, "    call_history_last_ext_tx_data[%d]  store to NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_RX_DATA_STORE_TO_NVRAM, "    call_history_last_ext_rx_data[%d]  store to NVRAM: %d")
   TRC_MSG(TCM_INFO_CALL_HISTORY_LAST_EXT_CONN_DURATION_STORE_TO_NVRAM, "    call_history_last_ext_conn_duration[%d]  store to NVRAM: %d")

   TRC_MSG(TCM_INFO_PDP_ADDR_LEN_EQUAL_TO_PPP_ADDR_LEN, "(msg_ptr->pdp_addr_len == PPP_ADDR_LEN):%hd")
   TRC_MSG(TCM_INFO_MMI_PDP_ADDR_LTCHECK_RESULT, "mmi_pdp_addr_ltcheck:%d")
   TRC_MSG(TCM_INFO_MMI_QOS_CHECK_RESULT, "mmi_qos_check:%d")
   TRC_MSG(TCM_INFO_CONFIG_OPT_LEN, "config_option_len:%d")
   TRC_MSG(TCM_INFO_PDP_ADDR_LEN, "TCM_PTR(sib_tab)[mmi_get_sib_id(MMI_NSAPI, msg_ptr->nsapi)].pdp_addr_len: %d")
   TRC_MSG(TCM_INFO_GET_ACL_TYPE_USIM_NOT_INITIALIZED, "Get ACL type: USIM_NOT_INITIALIZED")
   TRC_MSG(TCM_INFO_GET_ACL_TYPE_USIM_ACL_SERVICE_NOT_AVAILABLE, "Get ACL type: USIM_ACL_SERVICE_NOT_AVAILABLE")
   TRC_MSG(TCM_INFO_GET_ACL_TYPE_USIM_ACL_SERVICE_NOT_ACTIVATED, "Get ACL type: USIM_ACL_SERVICE_NOT_ACTIVATED")
   TRC_MSG(TCM_INFO_USIM_ACL_SERVICE_ACTIVATED, "USIM_ACL_SERVICE_ACTIVATED")
   TRC_MSG(TCM_INFO_TCPIP_COMPILE_OPTION_IS_OFF_USE_CONTEXT, "__TCPIP__ is off,  test sim is true: use (external) context_id : %d")
   TRC_MSG(TCM_INFO_ACL_APN_TO_BE_ACTIVATED, "[ACL] APN to be activated(first 10 byte content): %x %x %x %x %x %x %x %x %x %x")
   TRC_MSG(TCM_INFO_ACL_N_TH_APN_TO_BE_COMPARED, "[ACL] %d-th APN to be compared: (first 10 byte content): %x %x %x %x %x %x %x %x %x %x")
   TRC_MSG(TCM_INFO_ACL_N_TH_APN_ENTRY_IN_EFACL, "The %d-th APN entry in EFacl: (first 10 byte content): %x %x %x %x %x %x %x %x %x %x")
   TRC_MSG(TCM_INFO_ERROR_CERTAIN_PDP_CONTEXT_HAS_BEEN_ACTIVATED_BEFORE_TCM_FINISH_BOOTUP, "[TCM] ERROR: Certain PDP context has been activated before TCM finishing reading NVRAM")
   TRC_MSG(TCM_INFO_ERROR_CERTAIN_CNTXT_FLAG_ALREADY_VALID, "[TCM] ERROR: tcm_ptr_g->cntxt_flag[%d] already == TCM_CNTXT_VALID")
   TRC_MSG(TCM_INFO_TCM_SEND_PDP_ACT_TO_SM, "tcm_send_pdp_act_to_sm():context_id = %d, sib_id = %d")
   TRC_MSG(TCM_INFO_ACL_ENABLE_MODE_SUCCESS, "[ACL] Enable ACL Mode: Success!")
   TRC_MSG(TCM_INFO_ACL_DISABLE_SUCCESS, "[ACL] Disable ACL Mode: Success!")
   TRC_MSG(TCM_INFO_ACL_SET_ACL_MODE_FAIL, "[ACL] Set ACL Mode: FAIL!!")
   TRC_MSG(TCM_INFO_ACL_SET_ACL_MODE_NOT_ALLOWED, "[ACL] Set ACL Mode: Not Allowed!!")
   TRC_MSG(TCM_INFO_TCM_REACTIVATE_CNF_AUX_PROC_START, "[tcm_reactivate_cnf_aux_proc] Start")
   TRC_MSG(TCM_INFO_TCM_REACTIVATE_CNF_AUX_PROC_FINISH, "[tcm_reactivate_cnf_aux_proc] Finish")
   TRC_MSG(TCM_INFO_TCM_QOS_R98_TO_R99, "tcm_qos_R98_to_R99()")
   TRC_MSG(TCM_INFO_TCM_QOS_R99_TO_R98, "tcm_qos_R99_to_R98()")
   TRC_MSG(TCM_INFO_PDP_LEN_PDP_TYPE, "pdp_len==%hd, pdp_type==%x")
   TRC_MSG(TCM_INFO_AT_CONFIGURE_PDP_ADDR_TYPE, "AT command configure PDP Addr Type: %Mpdp_addr_type_enum")
   TRC_MSG(TCM_INFO_AT_CONFIGURE_PPP_PDP_BUT_ENABLE_COMPRESSION, "AT command configure PPP PDP but use dcomp: %d, hcomp: %d")

   TRC_MSG(TCM_QOS_CHECK_IF_NEED_TO_DO_R98_TO_R99, "TCM: tcm_qos_check_if_need_to_do_r98_to_r99: TRUE?%d (QOS Type: %Mtcm_qos_type_enum)")
   TRC_MSG(TCM_QOS_CHECK_IF_NEED_TO_DO_R99_TO_R98, "TCM: tcm_qos_check_if_need_to_do_r99_to_r98: TRUE?%d (QOS Type: %Mtcm_qos_type_enum)")

   TRC_MSG(TCM_PDP_QOS_CMD_TYPE, "  [TCM]: QOS Command Type:%Matci_qos_enum")
   TRC_MSG(TCM_PDP_QOS_TYPE, "  [TCM]: QOS Type:%Mtcm_qos_type_enum")
   TRC_MSG(TCM_PDP_QOS_CONTEXT_ID, "  [TCM]: QOS Context ID:%hd")
   TRC_MSG(TCM_PDP_QOS_LENGTH, "   [TCM]: QOS Length:%hd, (R97:3, R99-R4:11, R5-R6:14, R7: 16)")
   TRC_MSG(TCM_PDP_QOS_DELAY_CLASS, "    [TCM]: QOS[3:654]:Delay Class:%hd, (Samller Better, 0 is subscribed, 4 is best effort, 7 reserved, >5 regard as 3)")
   TRC_MSG(TCM_PDP_QOS_RELIABILITY_CLASS, "    [TCM]: QOS[3:321]:Reliability Class:%hd, (Samller Better, 0 is subscribed, 7 reserved, >4 regard as 4)")
   TRC_MSG(TCM_PDP_QOS_PEAK_THROUGHPUT, "    [TCM]: QOS[4:8765]:Peak Throughput:%hd, (Bigger Better, 0 is subscribed, 15 reserved, >9 regard as 1)")
   TRC_MSG(TCM_PDP_QOS_PRECEDENCE_CLASS, "    [TCM]: QOS[4:321]:Precedence Class:%hd, (Smaller Better, 0 is subscribed, 7 reserved, >3 regard as 2)")
   TRC_MSG(TCM_PDP_QOS_MEAN_THROUGHPUT, "    [TCM]: QOS[5:54321]:Mean Throughput:%hd, (Bigger Better, 0 is subscribed, 30 reserved, 31 Best Effort, >18 regard as 31)")
   TRC_MSG(TCM_PDP_QOS_TRAFFIC_CLASS, "    [TCM]: QOS[6:876]:Traffic Class:%hd, (Smaller Better, 0 is subscribed, 1: Conv, 2:Stream, 3:Inter, 4:BG)")
   TRC_MSG(TCM_PDP_QOS_DELIVERY_ORDER, "    [TCM]: QOS[6:54]:Delivery Order:%hd, (Smaller Better, 0 is subscribed, 1: With Order, 2:WO Order)")
   TRC_MSG(TCM_PDP_QOS_DELIVERY_OF_ERR_SDU, "    [TCM]: QOS[6:321]:Delivery of Err SUDs:%hd, (Smaller Better, 0 is subscribed, 1: No detect, 2:Yes, 3:No, 7 reserved)")
   TRC_MSG(TCM_PDP_QOS_MAX_SDU_SIZE, "    [TCM]: QOS[7]:Max SUD Size:%d, (Bigger Better, 0 is subscribed, 255 is reserved)")
   TRC_MSG(TCM_PDP_QOS_MAX_BIT_RATE_UPLINK, "    [TCM]: QOS[8]:Max Bit Rate for uplink:%d, (Bigger Better, 0 is subscribed, 255 is 0 kbps)")
   TRC_MSG(TCM_PDP_QOS_MAX_BIT_RATE_DOWNLINK, "    [TCM]: QOS[9]:Max Bit Rate for downlink:%d, (Bigger Better, 0 is subscribed, 255 is 0 kbps)")
   TRC_MSG(TCM_PDP_QOS_RESIDUAL_BER, "    [TCM]: QOS[10:8765]:Residual BER:%hd, (Bigger Better, 0 is subscribed, 15 is reserved)")
   TRC_MSG(TCM_PDP_QOS_SDU_ERR_RATIO, "    [TCM]: QOS[10:4321]:SDU Error Ratio:%hd, (No Rule, 0 is subscribed, 15 is reserved)")
   TRC_MSG(TCM_PDP_QOS_TRANSFER_DELAY, "    [TCM]: QOS[11:876543]:Transfer Delay:%hd, (Smaller Better, 0 is subscribed, 255 is reserved)")
   TRC_MSG(TCM_PDP_QOS_TRFC_HDLING_PRIORITY, "    [TCM]: QOS[11:21]:Traffic Handling Priority:%hd, (Smaller Better?, 0 is subscribed, 1:sPrio1, 2:Prio2, 3:Prio3)")
   TRC_MSG(TCM_PDP_QOS_GUAR_BIT_RATE_UPLINK, "    [TCM]: QOS[12]:Guar Bit Rate for uplink:%d, (Bigger Better, 0 is subscribed, 255 is 0 kbps)")
   TRC_MSG(TCM_PDP_QOS_GUAR_BIT_RATE_DOWNLINK, "    [TCM]: QOS[13]:Guar Bit Rate for downlink:%d, (Bigger Better, 0 is subscribed, 255 is 0 kbps)")
   TRC_MSG(TCM_PDP_QOS_SIGNALING_INDICATION, "    [TCM]: QOS[14:5]:Signaling Indication:%hd, (Bigger Better, 0:Not Optimized, 1:Optimized)")
   TRC_MSG(TCM_PDP_QOS_SRC_STAT_DES, "    [TCM]: QOS[14:4321]:Source Statis Desc:%hd, (??, 0:UNKNOWN, 1:Speech, Other: UNKNOWN)")
   TRC_MSG(TCM_PDP_QOS_EXT_MAX_BIT_RATE_DOWNLINK, "    [TCM]: QOS[15]:Ext Max Bit Rate for downlink:%d, (Bigger Better, 0: no use)")
   TRC_MSG(TCM_PDP_QOS_EXT_GUAR_BIT_RATE_DOWNLINK, "    [TCM]: QOS[16]:Ext Guar Bit Rate for downlink:%d, (Bigger Better, 0: no use)")   
   TRC_MSG(TCM_PDP_QOS_EXT_MAX_BIT_RATE_UPLINK, "    [TCM]: QOS[17]:Ext Max Bit Rate for uplink:%d, (Bigger Better, 0: no use)")
   TRC_MSG(TCM_PDP_QOS_EXT_GUAR_BIT_RATE_UPLINK, "    [TCM]: QOS[18]:Ext Guar Bit Rate for uplink:%d, (Bigger Better, 0: no use)")      

   TRC_MSG(TCM_L4CTCM_ENCODE_BIT_RATE, "l4ctcm_encode_bit_rate: %d --> %d")
   TRC_MSG(TCM_L4CTCM_DECODE_BIT_RATE, "l4ctcm_decode_bit_rate: %d --> %d")

   TRC_MSG(TCM_PDP_REQ_QOS_CONTEXT_ID, " [TCM]: Req QOS Context ID:%hd")
   TRC_MSG(TCM_PDP_MIN_QOS_CONTEXT_ID, " [TCM]: Min QOS Context ID:%hd")
   TRC_MSG(TCM_PDP_NEG_QOS_CONTEXT_ID, " [TCM]: Neg QOS Context ID:%hd")

   TRC_MSG(TCM_PDP_AT_GET_EQOS_INFO, "[TCM]: l4ctcm_get_eqos_info() %Matci_qos_enum")

   TRC_MSG(TCM_RESET_REQ_QOS_VALUES_TO_DEFAULT_VALUES, "TCM: tcm_reset_req_qos_values_to_default_values() %Mtcm_qos_reset_type_enum")
   TRC_MSG(TCM_RESET_MIN_QOS_VALUES_TO_DEFAULT_VALUES, "TCM: tcm_reset_min_qos_values_to_default_values() %Mtcm_qos_reset_type_enum")

   TRC_MSG(TCM_QOS_EXTEND, "TCM: tcm_qos_extend() pdp_type: %d, qos_type: %Mtcm_qos_type_enum")

   TRC_MSG(TCM_QOS_SETTING_CHECK, "[TCM]: QoS setting info: AT_definition: %x, IOT mode: %d")

   TRC_MSG(TCM_TCM_ERROR_HANDLER, "tcm_error_handler()")
   TRC_MSG(TCM_CHECK_MSG_ABNORMAL, "tcm_check_msg: msg_id: %Mmsg_type not checked")
   TRC_MSG(TCM_CHECK_MSG_RETURN_VALUE, "tcm_check_msg() return: %Mkal_bool")
   TRC_MSG(TCM_MAIN_FUNC_DISCARD_MSG, "discard message : %Mmsg_type, local: %x, peer: %x")

   TRC_MSG(TCM_MAIN_STATE_CHANGE_LOG, "TCM context: %hd main_state change from %Mtcm_context_main_state_enum to %Mtcm_context_main_state_enum")
   TRC_MSG(TCM_SUB_STATE_CHANGE_LOG, "TCM context: %hd sub_state change from %Mtcm_context_sub_state_enum to %Mtcm_context_sub_state_enum")
   TRC_MSG(TCM_DATA_PLANE_STATE_CHANGE_LOG, "TCM context: %hd data_plane_state change from %Mtcm_context_data_plane_state_enum to %Mtcm_context_data_plane_state_enum")

   TRC_MSG(TCM_ALL_STATE_TRACE, "TCM context: %hd current: main_state: %Mtcm_context_main_state_enum, sub_state: %Mtcm_context_sub_state_enum, data_plane_state: %Mtcm_context_data_plane_state_enum")
   TRC_MSG(TCM_RECORD_RCVD_MSG_AND_CURRENT_SIB_STATE, "context: %hd, main: %Mtcm_context_main_state_enum, sub: %Mtcm_context_sub_state_enum, data_plane: %Mtcm_context_data_plane_state_enum")

   TRC_MSG(TCM_CREATE_SIB, "tcm_create_sib() for context id: %hd")
   TRC_MSG(TCM_ADDITIONAL_PARA_CHANGE_LOG, "TCM context: %hd additional_para_type: change from %Mtcm_pdp_activate_req_additional_para_type_enum to %Mtcm_pdp_activate_req_additional_para_type_enum, additional_para_content change from %d to %d")
   TRC_MSG(TCM_ALLOCATE_DL_FLC_POOL_ID_RESULT, "tcm_alloc_dl_flc_pool_id : nsapi: %hd choose dl_flc_pool is %Mflc2_pool_id_enum(%hd)")
   TRC_MSG(TCM_FREE_DL_FLC_POOL_ID_RESULT, "tcm_free_dl_flc_pool_id : nsapi: %hd freed dl_flc_pool is %Mflc2_pool_id_enum(%hd)")

   //TRC_MSG(TCM_RECORD_SENT_FSM_MSG, "tcm_ptr_g->sent_fsm_msg_1: %Mmsg_type, tcm_ptr_g->sent_fsm_msg_2: %Mmsg_type")
   TRC_MSG(TCM_RECORD_SENT_FSM_MSG, "sent_fsm_msgs[%d]: %Mmsg_type")

// TCM NEW ARCH
   TRC_MSG(TCM_L4CTCM_GET_LINKED_CONTEXT_ID, "l4ctcm_get_linked_context_id(dataAccountId: %d), return: %d")
   TRC_MSG(TCM_TCM_RATDM_CONFIG_CNF_STATE2_HDLR, "tcm_ratdm_config_cnf_state2hdlr()")
   TRC_MSG(TCM_TCM_OLD_CALL_HISTORY_CONTENT, " [Old Call History] total_rx: %d, total_tx: %d, last_rx: %d, last_tx: %d")
   TRC_MSG(TCM_WHEN_NETWORK_DOESNOT_ASSIGN_DNS_ASSIGN_DEFAULT_TO_PPP, "when network doesn't assign DNS, TCM will use 172.21.120.6 value to give to PPP")
   TRC_MSG(TCM_INVALID_TIMER_EXPIRY, "Invalid TIMER_EXPIRY")
   TRC_MSG(TCM_TCM_GET_SIB_ID_FAIL, "tcm_get_sib_id() fail")
   TRC_MSG(TCM_TCM_ALLOC_NSAPI_SUCCESS, "tcm_alloc_nsapi: success (context %hd nsapi is %hd)")
   TRC_MSG(TCM_TCM_ALLOC_NSAPI_FAIL, "tcm_alloc_nsapi: fail")
   TRC_MSG(TCM_CALL_HISTORY_IS_WRITING_CHANGE, "call_history_is_writing change from %Mkal_bool to %Mkal_bool")
   TRC_MSG(TCM_CALL_HISTORY_NEEDS_UPDATE_CHANGE, "call_history_needs_update change from %Mkal_bool to %Mkal_bool")
   TRC_MSG(TCM_TCM_UPDATE_CALL_HISTORY_TO_NVRAM, "tcm_update_call_history_to_nvram()")
   TRC_MSG(TCM_CALL_HISTORY_TOTAL_EXT_TX_DATA_CHANGE, "call_history_total_ext_tx_data: %d (%d + %d)")
   TRC_MSG(TCM_CALL_HISTORY_TOTAL_EXT_RX_DATA_CHANGE, "call_history_total_ext_rx_data: %d (%d + %d)")
   TRC_MSG(TCM_CALL_HISTORY_EXT_CONN_LAST_UPDATE_TX_BYTES, "call_history_ext_conn_last_update_tx_bytes[%hd] now: %d")
   TRC_MSG(TCM_CALL_HISTORY_EXT_CONN_LAST_UPDATE_RX_BYTES, "call_history_ext_conn_last_update_rx_bytes[%hd] now: %d")
   TRC_MSG(TCM_CURRENT_CALL_HISTORY_LAST_EXT_TX_DATA, "current call_history_last_ext_tx_data[%hd] is %d")
   TRC_MSG(TCM_CURRENT_CALL_HISTORY_LAST_EXT_RX_DATA, "current call_history_last_ext_rx_data[%hd] is %d")
   TRC_MSG(TCM_SET_CALL_HISTORY_EXT_CONN_LAST_UPDATE_TX_BYTES_AS_ZERO, "set call_history_ext_conn_last_update_tx_bytes[%hd] as 0")
   TRC_MSG(TCM_SET_CALL_HISTORY_EXT_CONN_LAST_UPDATE_RX_BYTES_AS_ZERO, "set call_history_ext_conn_last_update_rx_bytes[%hd] as 0")
   TRC_MSG(TCM_TCM_UPDATE_CALL_HISTORY_WHEN_ENTER_DATA_PLANE_DECONFIGURED_STATE, "tcm_update_call_history_when_enter_data_plane_deconfigured_state()")
   TRC_MSG(TCM_TCM_L4CTCM_RESET_EXT_GPRS_HISTORY_REQ_HDLR, "tcm_l4ctcm_reset_ext_gprs_history_req_hdlr()")
   TRC_MSG(TCM_RCV_MSG_PTR_TX_DATA_OCTETS, "rcv_msg_ptr->tx_data_octets[%hd]: %d")
   TRC_MSG(TCM_RCV_MSG_PTR_RX_DATA_OCTETS, "rcv_msg_ptr->rx_data_octets[%hd]: %d")
   TRC_MSG(TCM_STATISTICS_IS_WRITING_CHANGE, "statistic_is_writing change from %Mkal_bool to %Mkal_bool")
   TRC_MSG(TCM_STATISTICS_NEEDS_UPDATE_CHANGE, "statistic_needs_update change from %d to %d")
   TRC_MSG(TCM_TCM_UPDATE_OLD_CALL_HISTORY_TO_NVRAM, "tcm_update_old_call_history_to_nvram()")
   TRC_MSG(TCM_TCM_UPDATE_OLD_CALL_HISTORY_WHEN_ENTER_DATA_PLANE_DECONFIGURED_STATE, "tcm_update_old_call_history_when_enter_data_plane_deconfigured_state()")
   TRC_MSG(TCM_TCM_OLD_CALL_HISTORY_TOTAL_TX_DATA_CHANGE, " [Old Call History] total_tx_data %d + %d = %d")
   TRC_MSG(TCM_TCM_OLD_CALL_HISTORY_TOTAL_RX_DATA_CHANGE, " [Old Call History] total_rx_data %d + %d = %d")
   TRC_MSG(TCM_TCM_OLD_CALL_HISTORY_LAST_TX_DATA_CHANGE, " [Old Call History] last_tx_data change from %d to %d")
   TRC_MSG(TCM_TCM_OLD_CALL_HISTORY_LAST_RX_DATA_CHANGE, " [Old Call History] last_rx_data change from %d to %d")
   TRC_MSG(TCM_TCM_UPDATE_OLD_CALL_HISTORY_WHEN_ENTER_DATA_PLANE_CONFIGURED_STATE, "tcm_update_old_call_history_when_enter_data_plane_configured_state()")
   TRC_MSG(TCM_NSAPI_ALREADY_FREED_USE_LOCAL_CONTEXT_VALUE, "nsapi already freed, use the nsapi_for_tcm_ratdm_deconfig_req_use as the nsapi in TCM_RATDM_DECONFIG_REQ")
   TRC_MSG(TCM_ERROR_NO_MEMORY_TO_STORE_ADDITIONAL_SENT_MSGS, "ERROR ! no memory to store additional sent msgs")

   TRC_MSG(TCM_PRINT_EQOS_CONTENT, "ctx:%hd,qos_type:%Matci_qos_enum,tc:%hd,do:%hd,des:%hd,mss:%d,mbu:%d,mbd:%d,rber:%hd,ser:%hd,td:%hd,thp:%hd,gbu:%d,gbd:%d,si:%hd,ssd:%hd,embd:%d,egbd:%d,embu:%d,egbu:%d")
   TRC_MSG(TCM_PRINT_QOS_CONTENT, "qos_len:%hd,dc:%hd,rc:%hd,pt:%hd,pc:%hd,mt:%hd--tc:%hd,do:%hd,des:%hd,mss:%d,mbu:%d,mbd:%d,rber:%hd,ser:%hd,td:%hd,thp:%d,gbu:%d,gbd:%d,si:%hd,ssd:%hd,embd:%d,egbd:%d,embu:%d,egbu:%d")

   TRC_MSG(TCM_L4CTCM_RESET_EXT_GPRS_HISTORY_COMMAND, "l4ctcm_reset_ext_gprs_history_command (%x)")
   TRC_MSG(TCM_CALL_HISTORY_TOTAL_EXT_TX_DATA_BECOMES_ZERO, "call_history_total_ext_tx_data = 0")
   TRC_MSG(TCM_CALL_HISTORY_TOTAL_EXT_RX_DATA_BECOMES_ZERO, "call_history_total_ext_rx_data = 0")
   TRC_MSG(TCM_CALL_HISTORY_TOTAL_EXT_CONN_DURATION_BECOMES_ZERO, "call_history_total_ext_conn_duration = 0")
   TRC_MSG(TCM_CALL_HISTORY_CID_LAST_EXT_TX_DATA_BECOMES_ZERO, "call_history_last_ext_tx_data[%hd] = 0")
   TRC_MSG(TCM_CALL_HISTORY_CID_LAST_EXT_RX_DATA_BECOMES_ZERO, "call_history_last_ext_rx_data[%hd] = 0")
   TRC_MSG(TCM_CALL_HISTORY_CID_LAST_EXT_CONN_DURATION_BECOMES_ZERO, "call_history_last_ext_conn_duration[%hd] = 0")
   TRC_MSG(TRACE_TCM_L4CTCM_RESET_EXT_GPRS_HISTORY_COMMAND, "l4ctcm_reset_ext_gprs_history_command : %d")

// Streaming secondary PDP QoS
   TRC_MSG(TCM_STREAMING_REQUEST_SECONDARY_BITRATE_BEFORE_ENCODE, "Streaming request secondary bitrate (before encode): ")
   TRC_MSG(TCM_STREAMING_REQUEST_BITRATE_VALUE_BEFORE_ENCODE, " guarantee DL: %dkbps, max DL: %dkbps, guarantee UL: %dkbps, max UL: %dkbps")
   TRC_MSG(TCM_STREAMING_REQUEST_SECONDARY_BITRATE_AFTER_ENCODE, "Streaming request secondary bitrate (after encode): ")
   TRC_MSG(TCM_STREAMING_GUARANTEE_BIT_RATE_AFTER_ENCODE, "guarntd_bit_rate_down_lnk: %d, guarntd_bit_rate_up_lnk: %d")
   TRC_MSG(TCM_STREAMING_EXT_GUARANTEE_BIT_RATE_AFTER_ENCODE, "ext_guarntd_bit_rate_down_lnk: %d, ext_guarntd_bit_rate_up_lnk: %d")
   TRC_MSG(TCM_STREAMING_MAX_BIT_RATE_AFTER_ENCODE, "max_bitrate_down_lnk: %d, max_bitrate_up_lnk: %d")
   TRC_MSG(TCM_STREAMING_EXT_MAX_BIT_RATE_AFTER_ENCODE, "ext_max_bitrate_down_lnk: %d, ext_max_bitrate_up_lnk: %d")

    /** TCM IPv6 */

    /* TRACE_INFO */
    TRC_MSG(TCM_IPV6_ACT_REQ_IPV6_DNS, "[TCM][IPv6] CID: %d, act_pdp_cntxt_req_ipv6_dns: %Ml4c_tcm_activate_pdp_request_ipv6_dns_enum (0: WITH req_ipv6_dns PCO, 1: WITHOUT req_ipv6_dns PCO)")
    TRC_MSG(TCM_IPV6_REPLACE_PDP_TYPE_BY_PPP, "[TCM][IPv6] pdp-type Old: %Mpdp_addr_type_enum New: %Mpdp_addr_type_enum")
    TRC_MSG(TCM_IPV6_REPLACE_PDP_LEN_BY_PPP, "[TCM][IPv6] pdp-len Old: %Mpdp_addr_len_enum New: %Mpdp_addr_len_enum")

    /* TRACE_WARNING */
    TRC_MSG(TCM_IPV6_RECV_INVALID_PDP_ADDR_LEN, "[TCM][IPv6] Received pdp address length is invalid. pdp_addr_type: %d, pdp_addr_len: %d")
    TRC_MSG(TCM_IPV6_RECV_INVALID_DNS_ADDR_LEN, "[TCM][IPv6] Received DNS address length is invalid (not 16 bytes). Skip the PCO. DNS addr len: %d")
    TRC_MSG(TCM_IPV6_RECV_MORE_THAN_TWO_DNS_ADDR, "[TCM][IPv6] Receives more than two DNS addresses. Discard it.")

    /** TCM MSQ */
    /* TRACE_INFO */
    TRC_MSG(TCM_MSQ_PRINT_MSQ_MODE, "[TCM][MSQ] is_msq_on: %d") 
    TRC_MSG(TCM_MSQ_PRINT_MSQ_ENTRY, "[TCM][MSQ] Entry(%d): PLMN: %c%c%c%c%c%c, check_nw: %d, check_sim: %d") 
    
    TRC_MSG(TCM_MSQ_SET_ENTRY_CLEAR, "[TCM][MSQ] Clear MSQ-Entry: %d") 
    
    TRC_MSG(TCM_MSQ_CURRENT_SIM_PLMN, "[TCM][MSQ] Current SIM PLMN ID: %c%c%c%c%c%c")
    TRC_MSG(TCM_MSQ_CURRENT_NW_PLMN, "[TCM][MSQ] Current NW PLMN ID: %c%c%c%c%c%c")
    TRC_MSG(TCM_MSQ_FIND_SIM_PLMN_IN_ENTRY, "[TCM][MSQ] Find current SIM PLMN ID in MSQ-Entry: %d") 
    TRC_MSG(TCM_MSQ_FIND_NW_PLMN_IN_ENTRY, "[TCM][MSQ] Find current NW PLMN ID in MSQ-Entry: %d") 

    /* TRACE_WARNING */

    
END_TRACE_MAP(MOD_TCM)

#endif /* _TCM_TRC_H */

