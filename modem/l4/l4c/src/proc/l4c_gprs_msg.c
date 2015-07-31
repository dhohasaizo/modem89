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
 * L4C_GPRS_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for K.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define L4C_GPRS_MSG_C

//#include "kal_release.h"
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "uart_sw.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
//#include "cbm_consts.h"
#include "drv_comm.h"
//#include "custom_mmi_default_value.h"
#include "l4crac_enums.h"
#include "task_config.h"
#include "md_mw_sap.h"
#ifdef __TCPIP__
#include "abm_msgid.h"
#endif
#include "l4_msgid.h"
#include "ppp_msgid.h"
#ifdef __IRDA_SUPPORT__
#include "ircomm_msgid.h"
#endif
#include "ups_msgid.h"

#ifdef __MOD_TCM__
#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_msghdlr.h"
//#include "l4c_ft.h"
#include "l4_trc.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"
//#include "l3_inc_local.h"

//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"

//#include "abm_soc_enums.h"
#include "l4c2abm_struct.h"
#include "abm2l4c_struct.h"

#include "l4c2tcm_struct.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
#include "tcm_context.h"
#include "l4c2tcm_func.h"
#include "tcm2l4c_struct.h"
#include "l4c2tcm_func.h"
#include "ppp2l4c_struct.h"
#include "l4c2ppp_struct.h" // MSG_ID_L4CPPP_PPPTYPEPDP_ACTIVATED_IND
#include "l4c2tcm_func.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
#endif 
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#ifdef __TCPIP__
//#include "abm_soc_enums.h"
#include "abm2l4c_struct.h"
#include "l4c2abm_struct.h"
//#endif
#include "l4c_gprs_cmd.h"
#include "l4c_gprs_msg.h"

#include "l4c_utility.h"
#include "rmmi_utility.h"
#include "rmmi_rspfmttr.h"
//#include "l4c_nw_cmd.h"

#include "l4c2phb_struct.h" //MAUI_02956467
#include "l4crac_func.h"

//mtk01616_070707
//#include "l4a.h"
//#include "l4c2smu_struct.h"
//#include "l4c2csm_cc_struct.h"
//#include "l4c2csm_ss_struct.h"
#include "rmmi_rsp.h"
#include "lmmi_rsp.h"
#include "lmmi_ind.h"
#include "rmmi_ind.h"
//#include "sat_def.h"
#include "l4c_cc_msg.h"
//#include "cbm_api.h"

#ifdef __DIALUP_GPRS_COUNTER_SUPPORT__
#include "l4c_ratdm_struct.h"
#endif

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "atci_trc.h" //MAUI_02865990, mtk02285, to prevent ATCI putbytes stuck by uart_stop_to_send flag
#include "rmmi_sio.h"
#if defined(__USB_TETHERING__)
#include "cbm_consts.h"
#endif /* __USB_TETHERING__ */

#ifdef __NDIS_SUPPORT__
#if defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__)
#include "ups_struct.h"
#endif
#endif

#ifdef __MBIM_SUPPORT__
#include "mbci_msg.h"
#include "mbci_ind.h"
#endif

extern UART_PORT PS_UART_PORT;
extern kal_bool phb_reset(void);

extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);

//MAUI_02956467, temp api, should be replaced by MMI custom implementation ---
extern kal_bool custom_phb_xmgnt_approve_fdn(
    kal_uint8* tel_number, /* BCD coding, including type */
    kal_uint8 num_length,
    kal_uint8 sim_id,
    kal_uint8 oper, /* l4c_operation_type_enum */
    kal_uint16* cause);

/*****************************************************************************
 * FUNCTION
 *  l4ctcm_start_cnf_hdlr
 * DESCRIPTION
 *  This function is called when L4A MSG_ID_L4CTCM_START_CNF received
 *  and sends MSG_ID_L4CPHB_INIT_LN_REQ to PHB.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4ctcm_start_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_start_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4ctcm_start_cnf_struct*) local_para_ptr;

    kal_trace(TRACE_INFO, INFO_L4C_STARTUP,
              0,
              l4c_ptr->cc_current_action[msg_ptr->src_id],
              l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);

    l4c_ptr->tcm_ready_flag = KAL_TRUE;

    if (msg_ptr->result == L4C_ERROR)
    {
        /* tcm fail */
    }
    else
    {
        if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
        {
            return;
        }
        //phb_reset();
        //l4c_send_msg_to_phb ( MSG_ID_L4CPHB_INIT_LN_REQ,
        //                        NULL, NULL);
    }
    return;
}

/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_activate_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_ACTIVATE_CNF received.
 *  call l4c_ps_exe_act_req or send MSG_ID_L4C_PS_ABM_SETUP_RSP to ABM
 * PARAMETERS
 *  local_para_ptr      [IN]
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void tcm_pdp_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_activate_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_action_enum action = L4C_NO_ACTION;
    kal_uint8 cell_support_egprs;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    kal_bool rsp_result = KAL_TRUE; //IPV6_TODO: result+cause declare
    kal_uint16 rsp_cause = (kal_uint16)L4C_NO_CAUSE;
#if 0    
/* under construction !*/
#endif //mtk02285, 20120130, ALPS00114154's extension, see comments below

    msg_ptr = (tcm_pdp_activate_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (msg_ptr->context_id > MAX_EXT_PDP_CONTEXT)
    {   //external id range 1 - 3, internal id begin from 4
        action = ABM_ACT;
        //kal_print("action = ABM_ACT");
    }
    else if (l4c_ptr->tcm_current_action != L4C_NO_ACTION)
    {
        action = l4c_ptr->tcm_current_action;
    }

    switch (action)
    {
    #if defined(__EXT_PDP_CONTEXT_ON__)
        /*
         * MAUI_02534457 mtk02126
         * Merge case CGACT_EXE and CGACT_TEST to reduce code size
         */
        case CGACT_EXE:
        case CGACT_TEST:            
        {            
            //IPV6_NOTE: call rind function to send URC, "+CGEV: ME PDN ACT <cid>"
            /* mtk02285, 20120130, ALPS00114154's extension: 
               If the following two conditions are satified, 
                   (1) ATCI sends "+CGEV: ME PDN ACT" and "OK" on 2 seperate channels
                   (2) RIL only receives 1 ME_PDN_ACT,
               then RIL can NOT tell either there is still another ME_PDN_ACT on the way or there is no more ME_PDN_ACT.
               Hence ATCI MUST regard "+CGEV: ME PDN ACT" as an intermediate result code to prevent this ambiguity.
             */
            RMMI_PTR->current_src = src_id;
            l4c_nw_gprs_event_report_rind(ME_PDN_ACT_EVENT, msg_ptr->context_id, 0, 0, NULL);

        #ifdef __MBIM_SUPPORT__
        //    if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_nw_gprs_event_report_mind(ME_PDN_ACT_EVENT, src_id, msg_ptr->context_id);
            }
        #endif

			/**************************************************************************
			 V6_NOTE:
			 1. with this code, there is one more unnecessary pdp copy at the last step
			 2. if NW REPLY is NOT reasonable, 
			                          Ex. Accept, IPV4, cause2=IPV6 only allowed
			                          => L4C skips this cause
			                          Ex. Accept, IPV6, cause2=IPV4 only allowed
			                          => L4C skips this cause
			 **************************************************************************/   				 
#ifdef __SP_RIL_SUPPORT__
            if (CGACT_EXE == action)
            {
                L4C_PTR->ext_pdp_activating[msg_ptr->context_id] = KAL_FALSE;
                L4C_PTR->ext_pdp_src_id[msg_ptr->context_id] = INVALID_SRC;
                kal_trace(TRACE_WARNING, WARNING_ABORT_PDP_ACTIVATION_STATE, 
                    msg_ptr->context_id, L4C_PTR->ext_pdp_activating[msg_ptr->context_id], L4C_PTR->ext_pdp_src_id[msg_ptr->context_id]);
            }
#endif //mtk02285, DUMA00206863, abort_cgact_activation             
			 
#if defined(__IPV4V6__) && defined(__IPV6__)		
            if (KAL_FALSE == l4c_gprs_ipv4v6_pdp_activate_cnf_helper(
                                &(L4C_COMM_PTR->v4v6_act_ptr),
                                L4C_IPV4V6_PDP_ACTIVATOR_IS_L4C,
                                msg_ptr->context_id, msg_ptr->pdp_type,
                                msg_ptr->cause2_present, msg_ptr->cause2,
                                &rsp_result, &rsp_cause))
            {   //activation is ongoing, we should skip the lrsp/rrsp operation
                //goto the end of the function, send LIND to update the lastest G icon state to MMI
                break; 
            }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */

            if (src_id == LMMI_SRC)
            {
                if (CGACT_EXE == action)
                {                  
                    //l4c_ps_exe_act_lrsp(KAL_TRUE, L4C_NO_CAUSE); /* remove MMI_PS_ACT_RSP */
                }
                else  //action == CGACT_TEST
                {
                    l4c_ps_exe_act_test_lrsp(rsp_result, rsp_cause);//IPV6_TODO: result+cause usage
                }
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                RMMI_PTR->current_src = src_id;
                l4c_ps_general_rrsp(rsp_result, rsp_cause);//IPV6_TODO: result+cause usage
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_ps_exe_act_mrsp(src_id, rsp_result);
            }
        #endif

        #if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
            if ((KAL_TRUE == rsp_result) && (l4c_ptr->fast_dormancy_mode == 1) && (l4c_ptr->fd_event == 0))
            {
                /* start Fast Dormancy monitor timer */
                l4c_fd_start_monitor_timer(L4C_SRC);
            }
        #endif
            
            l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);			            
        }
            break;
    #endif /* __EXT_PDP_CONTEXT_ON__ */            
    #if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
        case ABM_ACT:
        {
            l4c_ps_abm_setup_rsp_struct *param_ptr;

            param_ptr = (l4c_ps_abm_setup_rsp_struct*)
                construct_local_para((kal_uint16) sizeof(l4c_ps_abm_setup_rsp_struct), TD_RESET);

            param_ptr->result = KAL_TRUE;
            param_ptr->profile_id = msg_ptr->additional_para_content; // __HSPA_DATA_PATH_OPT__
            kal_mem_cpy(param_ptr->ip_addr, msg_ptr->ip_addr, 4);
            kal_mem_cpy(param_ptr->pri_dns_addr, msg_ptr->pri_dns_addr, 4);
            kal_mem_cpy(param_ptr->sec_dns_addr, msg_ptr->sec_dns_addr, 4);

            param_ptr->context_id = msg_ptr->context_id;
            param_ptr->is_qos_fulfilled = msg_ptr->is_qos_fulfilled;

        // __APP_SECONDARY_PDP_SUPPORT__
		//     - feature option to enable/disable Secondary PDP support for LMMI
		//     - This shall be build error, if TCM is unavailable to support corresponding context and code logic
		// 
		// [L4C] __APP_SECONDARY_PDP_SUPPORT__    NOT__SLIM_AT__
		// [TCM] Internal 2nd PDP Support         External 2nd PDP Support
        #if defined(__APP_SECONDARY_PDP_SUPPORT__) 
            param_ptr->qos_id = (kal_uint8) (l4c_ptr->pdp_context_id[msg_ptr->context_id - MAX_EXT_PDP_CONTEXT - 1] & 0x00FF); //MAX_EXT_PDP_CONTEXT, 02285, 20100208
        #endif 

        #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
		    kal_mem_cpy(&(param_ptr->nwk_neg_qos), &(msg_ptr->neg_qos), sizeof(qos_struct));
		#endif

        #ifdef __USB_TETHERING__
    	    if ((TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == msg_ptr->additional_para_type) &&
                (MOD_UPS == msg_ptr->additional_para_content))
    	    {
                param_ptr->profile_id = CBM_USB_TR_PS_ACCT_ID; //USB TR'S Account ID is fixed
    	    }        
        #endif /* __USB_TETHERING__ */

            l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_SETUP_RSP, param_ptr);

        #ifdef __SATCE__
    	    if (msg_ptr->additional_para_content == CBM_SAT_PS_ACCT_ID) // __HSPA_DATA_PATH_OPT__
            {
                l4csmu_sat_bearer_para_req_struct *param_ptr;

                param_ptr = (l4csmu_sat_bearer_para_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4csmu_sat_bearer_para_req_struct), TD_RESET);

                param_ptr->bearer_type = SAT_GPRS_BEARER;
                param_ptr->gprs_bearer.d_class = msg_ptr->qos.delay_class;
                param_ptr->gprs_bearer.p_class = msg_ptr->qos.precedence_class;
                param_ptr->gprs_bearer.r_class = msg_ptr->qos.reliability_class;
                param_ptr->gprs_bearer.mean_rate = msg_ptr->qos.mean_throughput;
                param_ptr->gprs_bearer.peak_rate = msg_ptr->qos.peak_throughput;
                param_ptr->gprs_bearer.proto_type = 0x02;

                l4c_send_msg_to_smu(MSG_ID_L4CSMU_SAT_BEARER_PARA_REQ, param_ptr);
            }
        #endif /* __SATCE__ */ 

        }
            break;
    #endif /* __TCPIP__ */ 

        default:
            break;
    }
    cell_support_egprs = l4crac_get_egprs_status();
	l4c_ptr->max_data_bearer_capa = (l4c_data_bearer_capablility_enum) l4c_ps_get_data_bearer_capability(); //MAUI_02321403
    l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs
		,l4crac_get_cell_data_speed_support()
		,l4c_ptr->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
    l4c_ps_update_current_reg_rind();
    return;
}


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_activate_rej_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_ACTIVATE_REJ received.
 *  call l4c_ps_exe_act_req or l4c_ps_abm_setup_rsp_fail_helper
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void tcm_pdp_activate_rej_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_activate_rej_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_action_enum action = L4C_NO_ACTION;
    kal_uint8 cell_support_egprs;
    l4c_data_bearer_capablility_enum latest_data_bearer_capa = L4C_NONE_ACTIVATE; //mtk02285, hspa_mmi_h2, review_h2
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    kal_bool rsp_result = KAL_FALSE;
    kal_uint16 rsp_cause = (kal_uint16) L4C_NO_CAUSE;

    msg_ptr = (tcm_pdp_activate_rej_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (msg_ptr->context_id > MAX_EXT_PDP_CONTEXT)      //external id range 1 - 3, internal id begin from 4
    {
        action = ABM_ACT;
        //kal_print("action = abm_act");
    }
    else if (l4c_ptr->tcm_current_action != L4C_NO_ACTION)
    {
        action = l4c_ptr->tcm_current_action;
    }

    switch (action)
    {
    #if defined(__EXT_PDP_CONTEXT_ON__)
        /*
         * MAUI_02534457 mtk02126
         * Merge case CGACT_EXE and CGACT_TEST to reduce code size
         */        
        case CGACT_EXE:
        case CGACT_TEST:            
        {
#ifdef __SP_RIL_SUPPORT__
            if (CGACT_EXE == action)
            {
                L4C_PTR->ext_pdp_activating[msg_ptr->context_id] = KAL_FALSE;
                L4C_PTR->ext_pdp_src_id[msg_ptr->context_id] = INVALID_SRC;
                kal_trace(TRACE_WARNING, WARNING_ABORT_PDP_ACTIVATION_STATE, 
                    msg_ptr->context_id, L4C_PTR->ext_pdp_activating[msg_ptr->context_id], L4C_PTR->ext_pdp_src_id[msg_ptr->context_id]);           
            }
#endif //mtk02285, DUMA00206863, abort_cgact_activation   
            
#if defined(__IPV4V6__) && defined(__IPV6__)	
            if (KAL_FALSE == l4c_gprs_ipv4v6_pdp_activate_rej_helper(
                                 &(L4C_COMM_PTR->v4v6_act_ptr),
                                 L4C_IPV4V6_PDP_ACTIVATOR_IS_L4C,
                                 msg_ptr->context_id, msg_ptr->cause, 
                                 &rsp_result, &rsp_cause))
            {   //activation is ongoing,
                //goto the end of the function, send LIND to update the lastest G icon state to MMI
                break; 
            }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */

#if defined(__ACMT_SUPPORT__)
            if( (SM_CAUSE_START < (msg_ptr->cause)) && ((msg_ptr->cause) < SM_CAUSE_END) )
            {
                l4c_at_acmt_rind(ERROR_SM, ((msg_ptr->cause)-SM_CAUSE_START));
            }
#endif

            if (src_id == LMMI_SRC)
            {
                if (CGACT_EXE == action)
                {
                    //l4c_ps_exe_act_lrsp(KAL_FALSE, L4C_NO_CAUSE); /* remove MMI message */
                }
                else // action == CGACT_TEST
                {
                    l4c_ps_exe_act_test_lrsp(rsp_result, rsp_cause);
                }
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                RMMI_PTR->current_src = src_id;
                l4c_ps_general_rrsp(rsp_result, msg_ptr->cause);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_ps_exe_act_mrsp(src_id, rsp_result);
            }
        #endif
        
        #if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
            if ((KAL_TRUE == rsp_result) && (l4c_ptr->fast_dormancy_mode == 1) && (l4c_ptr->fd_event == 0))
            {
                /* start Fast Dormancy monitor timer */
                l4c_fd_start_monitor_timer(L4C_SRC);
            }
        #endif
        
            l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);			
        }
            break;
    #endif /* __EXT_PDP_CONTEXT_ON__ */
    
    #if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
        case ABM_ACT:
        {
        #ifdef __APP_SECONDARY_PDP_SUPPORT__
            if (msg_ptr->linked_context_id != 0xFF)
            {
                l4c_ps_abm_setup_rsp_cnf_helper(
                    msg_ptr->context_id,
                    msg_ptr->linked_context_id,
                    msg_ptr->is_qos_fulfilled);
            }
            else
        #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 
            {
        #ifdef __USB_TETHERING__
        	    if ((TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == msg_ptr->additional_para_type) &&
                    (MOD_UPS == msg_ptr->additional_para_content))
        	    {
                    msg_ptr->additional_para_content = CBM_USB_TR_PS_ACCT_ID; //USB TR'S Account ID is fixed
        	    }        
        #endif /* __USB_TETHERING__ */            
                l4c_ps_abm_setup_rsp_fail_helper(msg_ptr->cause, msg_ptr->context_id, msg_ptr->additional_para_content); // __HSPA_DATA_PATH_OPT__
            }
        }
            break;
    #endif /* __TCPIP__ */ 

        default:
            break;
    }

    latest_data_bearer_capa = (l4c_data_bearer_capablility_enum)l4c_ps_get_data_bearer_capability(); //mtk02285, hspa_mmi_h2, review_h2
    cell_support_egprs = l4crac_get_egprs_status();
    if (check_pdp_context_exist_func() == KAL_FALSE) /* 1. PDP state change */
    {
        l4c_ps_gprs_status_update_lind(L4C_PDP_DEACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa); // 1.1 update G-icon
        l4c_gprs_connection_timer_hdlr(); // 1.2 GPRS when-needed
    }
    else if (l4c_ptr->max_data_bearer_capa != latest_data_bearer_capa) /* 2. RAB state change */
    {
        l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa); // 2.1 update RAB info
    }    
	l4c_ps_update_current_reg_rind();
    l4c_ptr->max_data_bearer_capa = latest_data_bearer_capa;
    return;
}


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_deactivate_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_DEACTIVATE_CNF received.
 *  call l4c_ps_exe_act_req or send MSG_ID_L4C_PS_ABM_DISC_RSP to ABM
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void tcm_pdp_deactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_deactivate_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_action_enum action = L4C_NO_ACTION;
    kal_uint8 cell_support_egprs;
    l4c_data_bearer_capablility_enum latest_data_bearer_capa = L4C_NONE_ACTIVATE; //mtk02285, hspa_mmi_h2, review_h2
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (tcm_pdp_deactivate_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (msg_ptr->context_id > MAX_EXT_PDP_CONTEXT)
    {
        action = ABM_DEACT;
        //kal_print("action = abm_deact");
    }
    else if (l4c_ptr->tcm_current_action != L4C_NO_ACTION)
    {
        action = l4c_ptr->tcm_current_action;
    }

    switch (action)
    {
    #if defined(__EXT_PDP_CONTEXT_ON__)
        case CGACT_EXE:
        {
            // Clear TCM action for MBIM continously deactivate PDP
            l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);

        #if 0 /* remove MMI message */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                /*
                 * mtk02126: for the src send CGACT=0, we respond true  
                 */
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                
                /*
                 * mtk02126: for the src send CGACT=1, we respond false  
                 */
#ifdef __SP_RIL_SUPPORT__
			    if (l4c_ptr->ext_pdp_activating[msg_ptr->context_id] == KAL_TRUE)
			    {        
			        rmmi_ptr->current_src = l4c_ptr->ext_pdp_src_id[msg_ptr->context_id];
					l4c_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
					l4c_ptr->ext_pdp_activating[msg_ptr->context_id] = KAL_FALSE;
					l4c_ptr->ext_pdp_src_id[msg_ptr->context_id] = INVALID_SRC;
			    }
         		kal_trace(TRACE_WARNING, WARNING_ABORT_PDP_ACTIVATION_STATE, 
        			msg_ptr->context_id, l4c_ptr->ext_pdp_activating[msg_ptr->context_id], l4c_ptr->ext_pdp_src_id[msg_ptr->context_id]);									
#endif //mtk02285, DUMA00206863, abort_cgact_activation            				
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_ps_exe_deact_mrsp(src_id, KAL_TRUE, msg_ptr->context_id);
            }
        #endif
        }
            break;
        case CGACT_TEST:
        {
            if (src_id == LMMI_SRC)
            {
                l4c_ps_exe_act_test_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);

        }
            break;
    #endif /* __EXT_PDP_CONTEXT_ON__ */
    
    #if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
        case ABM_DEACT:
        {
            l4c_ps_abm_disc_rsp_struct *param_ptr;
            kal_uint8 pid;

        #ifdef __APP_SECONDARY_PDP_SUPPORT__
            kal_uint8 qos_id;

            l4c_free_pdp_context(msg_ptr->context_id, &pid, &qos_id);
        #else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
            l4c_free_pdp_context(msg_ptr->context_id, &pid);
        #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

            param_ptr = (l4c_ps_abm_disc_rsp_struct*)
                construct_local_para((kal_uint16) sizeof(l4c_ps_abm_disc_rsp_struct), TD_RESET);

            param_ptr->result = KAL_TRUE;
            param_ptr->profile_id = pid;
        #ifdef __APP_SECONDARY_PDP_SUPPORT__
            /* 
             * mtk02126  
             * context_id is checked only when __APP_SECONDARY_PDP_SUPPORT__ is defined
             * If __APP_SECONDARY_PDP_SUPPORT__ is not defined, profile_id will be checked.
             */        
            param_ptr->context_id = msg_ptr->context_id;
            param_ptr->qos_id = qos_id;
        #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

            l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_DISC_RSP, param_ptr);
		#if 0 //MAUI_01922673, mtk02285, 20091208
/* under construction !*/
		#endif // l4c did not set action when abm_disc, so it is un-necessary to clear action here

        }
            break;
    #endif /* __TCPIP__ */ 

        default:
            break;
    }

    latest_data_bearer_capa = (l4c_data_bearer_capablility_enum)l4c_ps_get_data_bearer_capability(); //mtk02285, hspa_mmi_h2, review_h2
    cell_support_egprs = l4crac_get_egprs_status();
    if (check_pdp_context_exist_func() == KAL_FALSE)
    {
        l4c_ps_gprs_status_update_lind(L4C_PDP_DEACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(), latest_data_bearer_capa);

        /* Neptune is GPRS when needed, detach will make 45.4.3.1 fail */
    #ifndef __TCPIP__
        if (l4c_is_test_sim() == KAL_FALSE)
    #endif 
        {
            l4c_gprs_connection_timer_hdlr(); // do not auto detach, when Neptune is using test sim
        }        
    }
    else if (l4c_ptr->max_data_bearer_capa != latest_data_bearer_capa)
    {
        l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(), latest_data_bearer_capa);    
    }
  	l4c_ps_update_current_reg_rind();
    l4c_ptr->max_data_bearer_capa = latest_data_bearer_capa;
    return;
}

#ifdef __APP_SECONDARY_PDP_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_reactivate_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void tcm_pdp_reactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    /* MAUI_02534246 mtk02126 init msg_ptr to prevent fatal error */
    tcm_pdp_reactivate_cnf_struct *msg_ptr = (tcm_pdp_reactivate_cnf_struct*)local_para_ptr;
    l4c_ps_abm_reactivate_rsp_struct *param_ptr;

    param_ptr = (l4c_ps_abm_reactivate_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_ps_abm_reactivate_rsp_struct), TD_RESET);

    param_ptr->result = KAL_TRUE;
    param_ptr->context_id = msg_ptr->context_id;

    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_REACTIVATE_RSP, param_ptr);
    l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);
}
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_modify_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_MODIFY_CNF received.
 *  call l4c_ps_exe_modify_req()
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void tcm_pdp_modify_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    tcm_pdp_modify_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (tcm_pdp_modify_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->tcm_current_action == CGCMOD_EXE)
    {
    #if 0 /* remove MMI message */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* 0 */
        if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            RMMI_PTR->current_src = src_id;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }

        l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);

    }
    else
    {
        /* wrong msg error */
    }
    return;
#endif /* __EXT_PDP_CONTEXT_ON__ */    
}


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_modify_rej_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_MODIFY_REJ received.
 *  call l4c_ps_exe_modify_req()
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void tcm_pdp_modify_rej_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    tcm_pdp_modify_rej_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (tcm_pdp_modify_rej_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->tcm_current_action == CGCMOD_EXE)
    {
    #if 0 /* remove MMI message */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* 0 */
        if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            RMMI_PTR->current_src = src_id;
            l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
        }

        l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);

    }
    else
    {
        /* wrong msg error */
    }
    return;
#endif /* __EXT_PDP_CONTEXT_ON__ */      
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_set_cnf_hdlr
 * DESCRIPTION
 *  This function is called when    MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_QOS_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_TFT_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_GPRS_ACCOUNT_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_CNF,
 *  MSG_ID_L4CTCM_SET_PPP_AUTH_CNF received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4ctcm_set_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    l4ctcm_set_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 temp_src;
    kal_bool  result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4ctcm_set_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    temp_src = src_id;
    if (temp_src == WAP_SRC)
    {
        temp_src = LMMI_SRC;
    }

    if (msg_ptr->result == L4C_ERROR)
    {
        result = KAL_FALSE;
    }
    else
    {
        result = KAL_TRUE;
        msg_ptr->error_cause = L4C_NO_CAUSE;
    }

    if ((l4c_ptr->tcm_current_action == CGQMIN_EXE) ||
        (l4c_ptr->tcm_current_action == CGQREQ_EXE) ||
        (l4c_ptr->tcm_current_action == CGTFT_EXE) ||
        (l4c_ptr->tcm_current_action == GPRS_COUNTER_RESET) ||
        (l4c_ptr->tcm_current_action == EGPAU_EXE) || (l4c_ptr->tcm_current_action == CGUNDEF_EXE)
#ifdef __R99__
        || (l4c_ptr->tcm_current_action == CGEQMIN_EXE) || (l4c_ptr->tcm_current_action == CGEQREQ_EXE)
#endif 
#ifdef __MEDIATEK_SMART_QOS__
        || (l4c_ptr->tcm_current_action == SMART_QOS_MODE_SET) || (l4c_ptr->tcm_current_action == SMART_QOS_ENTRY_SET)
#endif
        )
    {
        kal_uint16 action = l4c_ptr->tcm_current_action;

        l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);
        switch (action)
        {
            case CGQMIN_EXE:
            case CGQREQ_EXE:
                if (temp_src == LMMI_SRC)
                {
                    l4c_ps_set_qos_lrsp(result, msg_ptr->error_cause);
                }
            #ifdef __R99__
            case CGEQMIN_EXE:
            case CGEQREQ_EXE:
                if (temp_src == LMMI_SRC)
                {
                    l4c_ps_set_eqos_lrsp(result, msg_ptr->error_cause);
                }
            #endif /* __R99__ */ 
            case CGTFT_EXE:
                if (temp_src == LMMI_SRC)
                {
                    l4c_ps_set_tft_lrsp(result, msg_ptr->error_cause);
                }
            case GPRS_COUNTER_RESET:
                if (temp_src == LMMI_SRC)
                {
                    l4c_ps_reset_gprs_data_counter_lrsp(result, msg_ptr->error_cause);
                }
            case EGPAU_EXE:
                //only RMMI
            case CGUNDEF_EXE:
                //only RMMI
#ifdef __MEDIATEK_SMART_QOS__
            case SMART_QOS_MODE_SET:
            case SMART_QOS_ENTRY_SET:
                //only RMMI
#endif                
                if (temp_src != LMMI_SRC)
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_general_rrsp(result, msg_ptr->error_cause);
                }
        }
    }
    /* If oprator through WAP to set GPRS contxt def , we should response to LMMI or
       WAP accordding to it response source id , and we should tell L4a to dispatch to WAP or
       LMMI in argument's src_id value */
    else if ((l4c_ptr->tcm_current_action == CGDCONT_EXE) ||
             (l4c_ptr->tcm_current_action == CGDSCONT_EXE))
    {
        kal_uint16 action = l4c_ptr->tcm_current_action;

        l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);

        // if (msg_ptr->result == L4C_ERROR)
        //  {
        /* we check the source cause in RMMI we will call general response
           therefore, we should use diferent argument for different response function */
        //     if(temp_src == LMMI_SRC)
        //          l4c_cmd_ft[action][temp_src + 1](src_id, KAL_FALSE, msg_ptr->error_cause);
        //      else
        //          l4c_cmd_ft[action][temp_src + 1](KAL_FALSE, msg_ptr->error_cause);
        //  }
        //  else
        //   {
        //     if(temp_src == LMMI_SRC)
        //           l4c_cmd_ft[action][temp_src + 1](src_id, KAL_TRUE, L4C_NO_CAUSE);
        //      else
        //           l4c_cmd_ft[action][temp_src + 1](KAL_TRUE, L4C_NO_CAUSE);
        //   }

        switch (action)
        {
            case CGDCONT_EXE:
                if (msg_ptr->result == L4C_ERROR)
                {
                    if (temp_src == LMMI_SRC)
                    {
                        l4c_ps_set_definition_lrsp(KAL_FALSE, msg_ptr->error_cause);
                    }
                    else if (temp_src >= RMMI_SRC && temp_src < RMMI_ALL)
                    {
                        rmmi_ptr->current_src = src_id;
                        //l4c_general_rrsp(KAL_FALSE, msg_ptr->error_cause);
                        l4c_ps_general_rrsp(KAL_FALSE, msg_ptr->error_cause);
                    }
                #ifdef __MBIM_SUPPORT__
                    else if (temp_src >= MBCI_SRC && temp_src <= MBCI_SRC_END)
                    {
                        l4c_ps_set_definition_mrsp(temp_src, KAL_FALSE);
                    }
                #endif
                }
                else
                {
                    if (temp_src == LMMI_SRC)
                    {
                        l4c_ps_set_definition_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                    else if (temp_src >= RMMI_SRC && temp_src < RMMI_ALL)
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                #ifdef __MBIM_SUPPORT__
                    else if (temp_src >= MBCI_SRC && temp_src <= MBCI_SRC_END)
                    {
                        l4c_ps_set_definition_mrsp(temp_src, KAL_TRUE);
                    }
                #endif
                }
                break;
        #ifdef __EXT_SECONDARY_PDP_FEASIBLE__                
            case CGDSCONT_EXE:
                if (msg_ptr->result == L4C_ERROR)
                {
                    if (temp_src == LMMI_SRC)
                    {
                        l4c_ps_set_sec_definition_lrsp(KAL_FALSE, msg_ptr->error_cause);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_ps_general_rrsp(KAL_FALSE, msg_ptr->error_cause);
                    }
                }
                else
                {
                    if (temp_src == LMMI_SRC)
                    {
                        l4c_ps_set_sec_definition_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }

                }
                break;
        #endif /* __EXT_SECONDARY_PDP_FEASIBLE__ */
        }
    }
    else
    {
        /* wrong message */
    }
    return;
#endif /* __EXT_PDP_CONTEXT_ON__ */      
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_set_acl_mode_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ctcm_set_acl_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_set_acl_mode_cnf_struct *msg_ptr = (l4ctcm_set_acl_mode_cnf_struct*) local_para_ptr;

    l4c_ps_set_acl_mode_lrsp(msg_ptr->result, msg_ptr->cause);
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_get_acl_entries_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ctcm_get_acl_entries_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_get_acl_entries_cnf_struct *msg_ptr = (l4ctcm_get_acl_entries_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    if (msg_ptr->result == KAL_TRUE)
    {
        result.flag = L4C_OK;
    }
    else
    {
        result.flag = L4C_ERROR;
    }

    result.cause = msg_ptr->cause;
    l4c_ps_get_acl_entries_lrsp(
        result,
        msg_ptr->start_index,
        msg_ptr->num_of_entries,
        msg_ptr->more_flag,
        (l4c_tcm_acl_entry_struct*) msg_ptr->acl_list);
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_set_acl_entry_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ctcm_set_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_set_acl_entry_cnf_struct *msg_ptr = (l4ctcm_set_acl_entry_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    if (msg_ptr->result == KAL_TRUE)
    {
        result.flag = L4C_OK;
    }
    else
    {
        result.flag = L4C_ERROR;
    }

    result.cause = msg_ptr->cause;
    l4c_ps_set_acl_entry_lrsp(result);
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_add_acl_entry_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ctcm_add_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_add_acl_entry_cnf_struct *msg_ptr = (l4ctcm_add_acl_entry_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    if (msg_ptr->result == KAL_TRUE)
    {
        result.flag = L4C_OK;
    }
    else
    {
        result.flag = L4C_ERROR;
    }

    result.cause = msg_ptr->cause;
    l4c_ps_add_acl_entry_lrsp(result);
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_del_acl_entry_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4ctcm_del_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_del_acl_entry_cnf_struct *msg_ptr = (l4ctcm_del_acl_entry_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    if (msg_ptr->result == KAL_TRUE)
    {
        result.flag = L4C_OK;
    }
    else
    {
        result.flag = L4C_ERROR;
    }

    result.cause = msg_ptr->cause;
    l4c_ps_del_acl_entry_lrsp(result);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_set_gprs_account_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_set_gprs_account_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

#if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
    l4cabm_set_gprs_account_info_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 temp_src;

    msg_ptr = (l4cabm_set_gprs_account_info_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

#ifdef __SATCE__        //mtk01616_070530
    if (src_id == SAT_SRC)
    {
        l4csmu_sat_set_gprs_prof_res_struct *param_ptr;

        param_ptr = (l4csmu_sat_set_gprs_prof_res_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4csmu_sat_set_gprs_prof_res_struct),
                                                            TD_RESET);

        if (msg_ptr->result == L4C_OK)  // Benson add to trans the result
        {
            param_ptr->res = KAL_TRUE;
        }
        else
        {
            param_ptr->res = KAL_FALSE;
        }

        l4c_send_msg_to_smu(MSG_ID_L4CSMU_SAT_SET_GPRS_PROF_RES, param_ptr);

        return;
    }
    else
#endif /* __SATCE__ */ 
    {
        temp_src = src_id;
        if (temp_src == WAP_SRC)
        {
            temp_src = LMMI_SRC;
        }

        /* If oprator through WAP to set GPRS contxt def , we should response to LMMI or
           WAP accordding to it response source id , and we should tell L4a to dispatch to WAP or
           LMMI in argument's src_id value */
        if (msg_ptr->result == L4C_ERROR)
        {
            /* we check the source cause in RMMI we will call general response
               therefore, we should use diferent argument for different response function */
            if (temp_src == LMMI_SRC)
            {
                l4c_ps_set_gprs_data_account_lrsp(src_id, KAL_FALSE, msg_ptr->error_cause);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->error_cause);
            }
        }
        else
        {
            if (temp_src == LMMI_SRC)
            {
                l4c_ps_set_gprs_data_account_lrsp(src_id, KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }

        //mtk01616_070707: remove comment here

        return;
    }
#endif /* __TCPIP__ */ 
    //return; //rvct_warning, mtk02285

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_get_gprs_account_info_cnf_hdlr
 * DESCRIPTION
 *  MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_RSP  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_get_gprs_account_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if 0//mtk02285, no more L4CABM_GET_GPRS_ACCOUNT_INFO_CNF, 10A_DA_Revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	
}


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_activate_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void tcm_pdp_activate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_activate_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 tmp_src_id; 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (tcm_pdp_activate_ind_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    tmp_src_id = rmmi_ptr->current_src; 
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_ps_activate_rind();
    rmmi_ptr->current_src = tmp_src_id; 

    if ((l4c_ptr->tcm_auto_answer == KAL_TRUE) ||
#ifdef __VSIM__
        (l4c_is_vsim_on() == KAL_TRUE) ||
#endif
		(l4c_is_test_sim() == KAL_TRUE))      //erica 20060831 modified for TC 16.2.1
    {
        tmp_src_id = rmmi_ptr->current_src; 
        rmmi_ptr->current_src = RMMI_UNSOLICITED; 
#ifdef __BT_SUPPORT__
        rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
    #endif         
        rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_NO_CAUSE); //MAUI_02386357, mtk02285, MAUI_02825172, MAUI_02956467
    #ifdef __BT_SUPPORT__
        rmmi_ptr->except_src = INVALID_SRC;
#endif     
        rmmi_ptr->current_src = tmp_src_id; 

        if (is_cmd_conflict(LMMI_SRC, CGANS_EXE) == KAL_FALSE)
        {
            /* erica : for 3G test case 16.2.1 */
            if ((l4c_is_test_sim() == KAL_TRUE) && (msg_ptr->context_id <= MAX_EXT_PDP_CONTEXT))
            {
                l4c_ps_exe_act_req(RMMI_SRC, TCM_PDP_ACTIVATE, msg_ptr->context_id);
            }
            else    /* ~erica */
            {
                l4c_ps_exe_act_req(LMMI_SRC, TCM_PDP_ACTIVATE, msg_ptr->context_id);
            }
        }
        else
        {
            tmp_src_id = rmmi_ptr->current_src; 
            rmmi_ptr->current_src = src_id; 
            l4c_general_rrsp(KAL_FALSE, L4C_GEN_CAUSE);
            rmmi_ptr->current_src = tmp_src_id; 
        }
    }
    else
    {
        l4c_ptr->parameter[LMMI_SRC].length = 1;
        l4c_ptr->parameter[LMMI_SRC].data = get_ctrl_buffer(sizeof(kal_uint8));
        *((kal_uint8*) l4c_ptr->parameter[LMMI_SRC].data + 0) = msg_ptr->context_id;
    }
}


/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_deactivate_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_TCM_PDP_DEACTIVATE_IND received.
 *  PDP is deactivated by network or external PDP deactivated.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void tcm_pdp_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

#if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
    l4c_ps_abm_disc_ind_struct *param1_ptr;
    kal_uint8 pid;
#endif //erica 20060730
    tcm_pdp_deactivate_ind_struct *msg_ptr = NULL;
    kal_uint8 i = 0;
    kal_uint8 cell_support_egprs;
    l4c_data_bearer_capablility_enum latest_data_bearer_capa = L4C_NONE_ACTIVATE; //mtk02285, hspa_mmi_h2, review_h2

    msg_ptr = (tcm_pdp_deactivate_ind_struct*) local_para_ptr;

#if defined(__ACMT_SUPPORT__)
    if( (SM_CAUSE_START < (msg_ptr->cause)) && ((msg_ptr->cause) < SM_CAUSE_END) )
    {
        l4c_at_acmt_rind(ERROR_SM, ((msg_ptr->cause)-SM_CAUSE_START));
    }
#endif

    while (msg_ptr->context_id_list[i] != 0)
    {
    #ifdef __MBIM_SUPPORT__
        l4c_nw_gprs_event_report_mind(NW_DETACH_EVENT, L4C_SRC, msg_ptr->context_id_list[i]);
    #endif

    #if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)        //erica 20060730 for FTA 45.2.2
        if (msg_ptr->context_id_list[i] > MAX_EXT_PDP_CONTEXT)
        {
            //L4C_PTR->ps_abm_current_action = L4C_NO_ACTION;
        #ifdef __APP_SECONDARY_PDP_SUPPORT__
            kal_uint8 qos_id;

            l4c_free_pdp_context(msg_ptr->context_id_list[i], &pid, &qos_id);
        #else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
            l4c_free_pdp_context(msg_ptr->context_id_list[i], &pid);
        #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

            param1_ptr = (l4c_ps_abm_disc_ind_struct*)
                construct_local_para((kal_uint16) sizeof(l4c_ps_abm_disc_ind_struct), TD_RESET);
            param1_ptr->profile_id = pid;
            param1_ptr->err_cause = msg_ptr->cause;

        #ifdef __APP_SECONDARY_PDP_SUPPORT__
            /* 
             * mtk02126  
             * context_id is checked only when __APP_SECONDARY_PDP_SUPPORT__ is defined
             * If __APP_SECONDARY_PDP_SUPPORT__ is not defined, profile_id will be checked.
             */
            param1_ptr->context_id = msg_ptr->context_id_list[i];
            param1_ptr->qos_id = qos_id;
        #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

            l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_DISC_IND, param1_ptr);
        }
    #endif /* defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)  */ //erica 20060730		
        i++;
        if (i > 10)
        {
            break;      //patch 070327: prevent infinite loop
        }
    }

    latest_data_bearer_capa = (l4c_data_bearer_capablility_enum)l4c_ps_get_data_bearer_capability(); //mtk02285, hspa_mmi_h2, review_h2
    cell_support_egprs = l4crac_get_egprs_status();
    if (check_pdp_context_exist_func() == KAL_FALSE)		
    {    
        l4c_ps_gprs_status_update_lind(L4C_PDP_DEACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa);
        l4c_gprs_connection_timer_hdlr();
    }
    else if (L4C_PTR->max_data_bearer_capa != latest_data_bearer_capa)
    {
        l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs
			, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa);    
    }
	l4c_ps_update_current_reg_rind();
    L4C_PTR->max_data_bearer_capa = latest_data_bearer_capa;
    return;
}

/*****************************************************************************
 * FUNCTION
 *  tcm_pdp_modify_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
void tcm_pdp_modify_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_modify_ind_struct* msg_ptr = (tcm_pdp_modify_ind_struct*) local_para_ptr;
	l4c_ps_abm_pdp_modify_ind_struct* param1_ptr = NULL;

    if (msg_ptr->context_id > MAX_EXT_PDP_CONTEXT) 
    {
        param1_ptr = (l4c_ps_abm_pdp_modify_ind_struct*)
            construct_local_para((kal_uint16) sizeof(l4c_ps_abm_pdp_modify_ind_struct), TD_RESET);
        param1_ptr->context_id = msg_ptr->context_id;
	    param1_ptr->profile_id = l4c_find_pdp_cid2pid(msg_ptr->context_id);
        kal_mem_cpy(&(param1_ptr->nwk_neg_qos), &(msg_ptr->new_neg_qos), sizeof(qos_struct));
        l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_PDP_MODIFY_IND, param1_ptr);
    }
}
#endif //__GPRS_BEARER_REPORT_NEGOTIATED_QOS__

#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)
/*****************************************************************************
 * FUNCTION
 *  l4cppp_activate_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_ACTIVATE_CNF received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_activate_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 cell_support_egprs;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4cppp_activate_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

#if !defined(__IPV6__ ) && (defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__))
    if ((l4c_ptr->fast_dormancy_mode == 1) && (l4c_ptr->fd_event == 0))
    {
        /* start Fast Dormancy monitor timer */
        l4c_fd_start_monitor_timer(L4C_SRC);
    }
#endif /* !defined __IPV6__ */

    if (l4c_ptr->cc_current_action[src_id] == CGDATA_EXE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->result == L4C_ERROR)
        {
            l4c_data_bearer_capablility_enum latest_data_bearer_capa = L4C_NONE_ACTIVATE; //mtk02285, hspa_mmi_h2, review_h2
            if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id)
            {
                l4c_ps_dialup_reset_port2cid(msg_ptr->context_id);
            }
        #ifdef __IPV4V6__            
            if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id2)
            {
                l4c_ps_dialup_reset_port2cid(msg_ptr->context_id2);
            } //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
        #endif /* __IPV4V6__ */            
        
            { //mtk02285, MAUI_03144268 ---
                kal_uint8 ext_cid = 0;
                for (ext_cid=1; ext_cid<=MAX_EXT_PDP_CONTEXT; ext_cid++)
                {
                    if (msg_ptr->port == l4c_ptr->ps_dialup_port[ext_cid])
                    {
                        l4c_ps_dialup_reset_port2cid(ext_cid);
                    }
                }                                      
            }//--- mtk02285, MAUI_03144268
        
            //L4C_PTR->ongoing_csd_dialup = KAL_FALSE;    // MAUI_02284187, mtk02285
            /* mtk02126  
             * In our implementation now, if pdp_type != IPV4_ADDR_TYPE, it can be PPP_ADDR_TYPE.
             * For the PPP type, we are still the uart owner and we don't have to get owner if confirmed fail.
             */
            if (msg_ptr->pdp_type != PPP_ADDR_TYPE) //__IPV6__: for any type that does not require delayed "CONNECT"
            {
                rmmi_obtain_uart_control(msg_ptr->port, msg_ptr->cause == PPPE_PLUGOUT_DETECT);
            }
            //Data Carrier Detect
        #if !defined(__SP_RIL_SUPPORT__)
            if (RMMI_UART_GetOwnerID((UART_PORT)msg_ptr->port) == MOD_ATCI)
            {                
        #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
                l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
        #else	               
	            kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, msg_ptr->port, custom_get_dcd_value_for_cmd_state());
                RMMI_UART_CtrlDCD((UART_PORT)msg_ptr->port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);//rvct_warning, mtk02285
        #endif			
            }
        #endif 

            l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
            rmmi_ptr->uart_in_data_mode = KAL_FALSE;
            rmmi_ptr->current_src = src_id;
            rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);

            if (msg_ptr->cause != PPPE_PLUGOUT_DETECT)
            {
                rmmi_start_ath_for_dialup_hdlr(msg_ptr->port);
            }
			else
			{
                kal_uint8 cid = rmmi_port_2_cid(msg_ptr->port);
                if (cid == 0xFF)
                {        
                    kal_brief_trace(TRACE_INFO, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
                }
                else
                {
                    RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
                }
			} //MAUI_02865990, mtk02285, to prevent ATCI putbytes stuck by uart_stop_to_send flag

        //mtk02285, 20110224, dialup fail must notify ABM
        #ifdef __TCPIP__ /* ABM */    
			l4c_abm_dialup_disc_ind_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id);				
		#endif
            
            latest_data_bearer_capa = (l4c_data_bearer_capablility_enum)l4c_ps_get_data_bearer_capability();
            cell_support_egprs = l4crac_get_egprs_status();            
            if ((check_pdp_context_exist_func() == KAL_FALSE)) 
            {
                l4c_ps_gprs_status_update_lind(L4C_PDP_DEACTIVED, cell_support_egprs
					, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa);
                l4c_gprs_connection_timer_hdlr();
            }
            else if (l4c_ptr->max_data_bearer_capa != latest_data_bearer_capa)
            {
                l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs
					, l4crac_get_cell_data_speed_support(),latest_data_bearer_capa);            
            }
        	l4c_ps_update_current_reg_rind();			
            L4C_PTR->max_data_bearer_capa = latest_data_bearer_capa;
#if defined(__IPV4V6__) && defined(__IPV6__)
            if ((NULL != L4C_COMM_PTR->v4v6_act_ptr) && (l4c_gprs_ipv4v6_check_cid_existence(L4C_COMM_PTR->v4v6_act_ptr, msg_ptr->context_id)))
            {
                l4c_gprs_ipv4v6_act_table_print(L4C_COMM_PTR->v4v6_act_ptr);
                l4c_gprs_ipv4v6_act_table_free(L4C_COMM_PTR->v4v6_act_ptr);
                L4C_COMM_PTR->v4v6_act_ptr = NULL; //MAUI_03175178, mtk02285, 20120426
            }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */
        }
        else
        {
            cell_support_egprs = l4crac_get_egprs_status();
            l4c_ps_gprs_status_update_lind(L4C_PDP_ACTIVED, cell_support_egprs, 
				l4crac_get_cell_data_speed_support()
				,l4c_ps_get_data_bearer_capability()); //mtk02285, hspa_mmi_h2
            l4c_ps_update_current_reg_rind();
#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__			
            if (msg_ptr->pdp_type == PPP_ADDR_TYPE)
            {
                l4cppp_ppptypepdp_uart_transfer_ind_struct* uart_trans_ind = NULL;
                uart_trans_ind = (l4cppp_ppptypepdp_uart_transfer_ind_struct*)
                    construct_local_para((kal_uint16) sizeof(l4cppp_ppptypepdp_uart_transfer_ind_struct), TD_RESET);
			
            #if 0
/* under construction !*/
/* under construction !*/
			#endif //MAUI_02124634, mtk02285, 20091208

                //[1] send back the result code to TE														   
            #if defined(__SP_RIL_SUPPORT__)                    
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE); // Only return "OK" to WM
			#else
                rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_GEN_CAUSE); // MAUI_02386357, mtk02285, MAUI_02825172
            #endif

                //[2] transfer the action to DATA Port
                /*
                 [coding note] 20091117
                 If we want to support CMUX_REDIRECT_DATA_CHANNEL for PPP type dialup, 
                 we have to fulfill the following conditions:
                     1. Give PPP src_id and port of DATA_CHANNEL at l4cphb_approve_cnf_hdlr
                     2. Return ATD*99# result code to TE on CMD_CHANNEL at l4cppp_activate_cnf_hdlr
                     => but we don't have src_id of CMD_CHANNEL
                     => It brings extra code size
			     */

            #if defined(__WM_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__)
                #error PPP_TYPE_PDP_DAILUP IS NOT SUPPORTED WITH DATA CHANNEL REDIRECTION
            #else
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_GPRS_STATE;
                l4c_ptr->cc_current_action[src_id] = CGDATA_EXE;
				uart_trans_ind->src_id = src_id;
            #endif /* defined(__SP_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__) */

            #if 0
/* under construction !*/
/* under construction !*/
   			#endif //MAUI_02124634, mtk02285, 20091208

                //[5] Data Carrier Detect
            #if !defined(__SP_RIL_SUPPORT__)
            #if defined(__CMUX_MODEM_STATUS_SUPPORT__) && !defined(__UCM_SUPPORT__) //mtk02514_check
                l4c_ctrl_dcd_status(src_id, MOD_ATCI);
            #else	    			
                kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, msg_ptr->port, custom_get_dcd_value_for_data_state());		
                RMMI_UART_CtrlDCD((UART_PORT)msg_ptr->port, (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);//rvct_warning, mtk02285
            #endif
            #endif

			    //[6] Transfer UART to PPP                
                uart_trans_ind->context_id = msg_ptr->context_id;
                uart_trans_ind->port = rmmi_cid_2_port(rmmi_srcid_2_cid(uart_trans_ind->src_id));
                l4c_send_msg_to_ppp(MSG_ID_L4CPPP_PPPTYPEPDP_UART_TRANSFER_IND, uart_trans_ind);
				return;
            }
			else //if (msg_ptr->pdp_type == IPV4_ADDR_TYPE)
#endif // __PPP_TYPE_PDP_DIALUP_SUPPORT__			
		    {
	        #ifdef __TCPIP__ /* ABM */
	            l4c_abm_dialup_connect_ind_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id);
	        #endif
			}
        }

    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_deactivate_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_DEACTIVATE_CNF received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_deactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_deactivate_cnf_struct *msg_ptr = NULL;
    kal_uint8 port;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4cppp_deactivate_cnf_struct*) local_para_ptr;
    //l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
    port = msg_ptr->port;

#ifdef __IRDA_SUPPORT__
    if (l4c_ptr->cc_current_action[RMMI_SRC] == PPP_DEACT_EXE)
    {
        l4c_ptr->cc_state[RMMI_SRC] = L4C_COMMAND_STATE;
        l4c_ptr->cc_current_action[RMMI_SRC] = L4C_NO_ACTION;
        rmmi_ptr->uart_in_data_mode = KAL_FALSE;
        l4c_ptr->uart_data_mode = L4C_NONE_DATA;

        l4c_send_msg_to_irda(MSG_ID_IRCOMM_DISCONNECT_REQ, NULL);

        l4c_send_msg_to_irda(MSG_ID_IRCOMM_CLOSE, NULL);
        /* open UART and obtain UART port */
        PS_UART_PORT = l4c_ptr->uart_port_value;    /* set uart to IRDA port */
        RMMI_UART_Open(PS_UART_PORT, MOD_ATCI);
        rmmi_obtain_uart_control(port);         /* set uart owner *///bug??
    }
    else
#endif /* __IRDA_SUPPORT__ */ 
    {
#if !defined(__MMI_FMI__) || defined (__TCPIP__) /* ABM */
        kal_uint8 src_id = msg_ptr->src_id;
#endif

#if defined(__IPV4V6__) && defined(__IPV6__)
        if ((NULL != L4C_COMM_PTR->v4v6_act_ptr) && (l4c_gprs_ipv4v6_check_cid_existence(L4C_COMM_PTR->v4v6_act_ptr, msg_ptr->context_id)))
        {
            l4c_gprs_ipv4v6_act_table_print(L4C_COMM_PTR->v4v6_act_ptr);
            l4c_gprs_ipv4v6_act_table_free(L4C_COMM_PTR->v4v6_act_ptr);
            L4C_COMM_PTR->v4v6_act_ptr = NULL; //MAUI_03175178, mtk02285, 20120426
        }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */ //L4CPPP_FB
   
/*
 * mtk02126: We can disc GPRS dial up by:  
 * 1. CGACT if !defined(__MMI_FMI__)
 * 2. ABM defined (__CBM_CONNECTION_MANAGER__)    
 */        
#if !defined(__MMI_FMI__) || defined (__TCPIP__) /* ABM */

        if (msg_ptr->result == L4C_OK)
        {
            //[0] Reset cid_used_by_ppp
	        if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id)
            {
                l4c_ps_dialup_reset_port2cid(msg_ptr->context_id);
            }   
        #ifdef __IPV4V6__
	        if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id2)
            {
                l4c_ps_dialup_reset_port2cid(msg_ptr->context_id2);
            }               
	    #endif /* __IPV4V6__ */

            { //mtk02285, MAUI_03144268 ---
                kal_uint8 ext_cid = 0;
                for (ext_cid=1; ext_cid<=MAX_EXT_PDP_CONTEXT; ext_cid++)
                {
                    if (msg_ptr->port == l4c_ptr->ps_dialup_port[ext_cid])
                    {
                        l4c_ps_dialup_reset_port2cid(ext_cid);
                    }
                }                                      
            }//--- mtk02285, MAUI_03144268
        
	        if ((rmmi_ptr->online_cmd_state == L4C_ONLINE_DATA_GPRS_STATE) && 
			          (rmmi_ptr->online_cmd_state_src_id == src_id))
	        {
	            //[1] online cmd state: clear contexts (during escape)
	            rmmi_ptr->online_cmd_state = L4C_COMMAND_STATE;
				rmmi_ptr->online_cmd_state_src_id = INVALID_SRC;
	        }
			else
			{
			    //[2] online data state: clear cc_state, cc_current_action, uart_in_data_mode, get UART control
		        l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
		        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
		        rmmi_ptr->uart_in_data_mode = KAL_FALSE;
		        rmmi_obtain_uart_control(port, msg_ptr->cause == PPPE_PLUGOUT_DETECT);
			}

	        //[3] Pull UART DCD        
	        if (RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
	        {
	        #if !defined(__SP_RIL_SUPPORT__)
	        #if defined(__CMUX_MODEM_STATUS_SUPPORT__)
	            l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
	        #else	      			
	            kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());	
	            RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);//rvct_warning, mtk02285
	        #endif 
	        #endif 
	        }

            //[4][5] Notify ABM/RMMI
            //kal_prompt_trace(MOD_L4C, "l4c_ptr->disc_ppp_src_id=%d", l4c_ptr->disc_ppp_src_id);
            if (l4c_ptr->disc_ppp_src_id == WAP_SRC)
	        {
		        //[4-1] Response "NO CARRIER" to DATA port
		        rmmi_ptr->current_src = src_id;
				//kal_prompt_trace(MOD_L4C, "rmmi current src=%d", rmmi_ptr->current_src);
		        rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_ERR_UNKNOWN);
				
                //[5-1] Response to ABM
            #ifdef __TCPIP__ /* ABM */
				l4c_abm_dialup_disc_rsp_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id, KAL_TRUE);
			#endif
	        }
	        else if ((l4c_ptr->disc_ppp_src_id >= RMMI_SRC) || (l4c_ptr->disc_ppp_src_id == L4C_SRC))
			{
			    if (l4c_ptr->disc_ppp_src_id == L4C_SRC)
			    {
			        //[4-2] This is for UART PLUGOUT before L4CPPP_ACTIVATE_CNF, do nothing
			    }
				else
				{
				    //[4-3-1] Response "OK" to CMD port
				    rmmi_ptr->current_src = l4c_ptr->disc_ppp_src_id;
					//kal_prompt_trace(MOD_L4C, "rmmi current src=%d", rmmi_ptr->current_src);
				    rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);				
				}
                //[5-2] Indication to ABM
            #ifdef __TCPIP__ /* ABM */    
				l4c_abm_dialup_disc_ind_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id);				
			#endif
			}		
        }
		else //(msg_ptr->result == L4C_ERROR)
		{
		    if (l4c_ptr->disc_ppp_src_id == WAP_SRC)
	        {			
                //Response to ABM
            #ifdef __TCPIP__ /* ABM */
				l4c_abm_dialup_disc_rsp_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id, KAL_FALSE);
			#endif
	        }
			else if (l4c_ptr->disc_ppp_src_id >= RMMI_SRC && l4c_ptr->disc_ppp_src_id < RMMI_ALL)
			{		
	        	//[4-3-2] Response "ERROR" to CMD port
	        	rmmi_ptr->current_src = l4c_ptr->disc_ppp_src_id;
		        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
			}
		}	

        //[6] Start timer to ignore the following ATH
        if (msg_ptr->cause != PPPE_PLUGOUT_DETECT)
        {
            rmmi_start_ath_for_dialup_hdlr(port);
        }
		else
		{
            kal_uint8 cid = rmmi_port_2_cid(msg_ptr->port);
            if (cid == 0xFF)
            {        
                kal_brief_trace(TRACE_INFO, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
            }
            else
            {
                RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
            }
		} //MAUI_02865990, mtk02285, to prevent ATCI putbytes stuck by uart_stop_to_send flag        

		//[7] Reset disc_ppp_src_id
		l4c_ptr->disc_ppp_src_id = INVALID_SRC;

#endif /* !defined(__MMI_FMI__) || defined (__TCPIP__, ABM) */		
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_resume_cnf_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_RESUME_CNF received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_resume_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_resume_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 tmp_src_id; // add on CURRENT_SRC_REVIEW
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4cppp_resume_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == ATO_EXE)
    {

        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

        if (msg_ptr->result == L4C_ERROR)
        {
            rmmi_obtain_uart_control(msg_ptr->port, KAL_FALSE);
            tmp_src_id = rmmi_ptr->current_src; // add on CURRENT_SRC_REVIEW
            /* 
             * mtk02126 MAUI_02420368
             * Set the cc_state to the L4C_COMMAND_STATE
             * if no this, NO_CARRIER can't be send.            
             */
            l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;  
            rmmi_ptr->current_src = src_id; // add on CURRENT_SRC_REVIEW
            rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
            rmmi_ptr->current_src = tmp_src_id; // add on CURRENT_SRC_REVIEW
            rmmi_ptr->uart_in_data_mode = KAL_FALSE;
        }
        /*
            mtk02126: For success case, do nothing
        */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cppp_deactivate_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_DEACTIVATE_IND received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_deactivate_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 tmp_src_id; // add on CURRENT_SRC_REVIEW
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4cppp_deactivate_ind_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    /*
     * MAUI_02534068 mtk02126
     * add "((rmmi_ptr->online_cmd_state == L4C_ONLINE_DATA_GPRS_STATE) && (rmmi_ptr->online_cmd_state_src_id == src_id))"
     * in if statement to handle MSG_ID_L4CPPP_DEACTIVATE_IND during escape
     */
    if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_GPRS_STATE 
        || ((rmmi_ptr->online_cmd_state == L4C_ONLINE_DATA_GPRS_STATE) 
             && (rmmi_ptr->online_cmd_state_src_id == src_id)))
    {        
        if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_GPRS_STATE)
        {
            l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;            
            rmmi_ptr->uart_in_data_mode = KAL_FALSE;
            rmmi_obtain_uart_control(msg_ptr->port, msg_ptr->cause == PPPE_PLUGOUT_DETECT);           
            if (RMMI_UART_GetOwnerID((UART_PORT)msg_ptr->port) == MOD_ATCI)
            {
                //Data Carrier Detect
            #if !defined(__SP_RIL_SUPPORT__)
            #if defined(__CMUX_MODEM_STATUS_SUPPORT__)//mtk01616_090203            
                l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
            #else	    		
                kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, msg_ptr->port, custom_get_dcd_value_for_cmd_state());
                RMMI_UART_CtrlDCD((UART_PORT)msg_ptr->port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);//rvct_warning, mtk02285
            #endif 
            #endif 
            }            
        }
        else /* escape state */
        {
            rmmi_ptr->online_cmd_state = L4C_COMMAND_STATE;
			rmmi_ptr->online_cmd_state_src_id = INVALID_SRC;            
        }
            
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        //L4C_PTR->cid_used_by_ppp = 0; //L4CPPP_FB_2
    	if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id)
        {
            l4c_ps_dialup_reset_port2cid(msg_ptr->context_id);
        }   
    #ifdef __IPV4V6__        
        if (INVALID_PDP_CONTEXT_ID != msg_ptr->context_id2)
        {
            l4c_ps_dialup_reset_port2cid(msg_ptr->context_id2);
        }  
    #endif /* __IPV4V6__ */

        { //mtk02285, MAUI_03144268 ---
            kal_uint8 ext_cid = 0;
            for (ext_cid=1; ext_cid<=MAX_EXT_PDP_CONTEXT; ext_cid++)
            {
                if (msg_ptr->port == l4c_ptr->ps_dialup_port[ext_cid])
                {
                    l4c_ps_dialup_reset_port2cid(ext_cid);
                }
            }                                      
        }//--- mtk02285, MAUI_03144268
    
        tmp_src_id = rmmi_ptr->current_src; // add on CURRENT_SRC_REVIEW
        rmmi_ptr->current_src = src_id;
        rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_ERR_UNKNOWN);
        rmmi_ptr->current_src = tmp_src_id; // add on CURRENT_SRC_REVIEW

        //l4c_ptr->ongoing_csd_dialup = KAL_FALSE;        //MAUI_02284187, mtk02285
        //mtk01616_071001: ATH is expected after GPRS dialup is disconnected by user or nw   or cable plugout(ATH is not able to get)        
        if (msg_ptr->cause != PPPE_PLUGOUT_DETECT)
        {
	        rmmi_start_ath_for_dialup_hdlr(msg_ptr->port);
        }
		else
		{
            kal_uint8 cid = rmmi_port_2_cid(msg_ptr->port);
            if (cid == 0xFF)
            {        
                kal_brief_trace(TRACE_INFO, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
            }
            else
            {
                RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
            }
		} //MAUI_02865990, mtk02285, to prevent ATCI putbytes stuck by uart_stop_to_send flag        

    #ifdef __TCPIP__ /* ABM */
        l4c_abm_dialup_disc_ind_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id);
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
 *  l4cppp_escape_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_ESCAPE_IND received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_escape_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4cppp_escape_ind_struct *msg_ptr = NULL;
    l4c_source_id_enum src_id;

    msg_ptr = (l4cppp_escape_ind_struct*) local_para_ptr;
    src_id = (l4c_source_id_enum) msg_ptr->src_id;

    if (l4c_ptr->cc_state[src_id] == L4C_ONLINE_DATA_GPRS_STATE)
    {
        l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
        rmmi_ptr->online_cmd_state = L4C_ONLINE_DATA_GPRS_STATE;
		rmmi_ptr->online_cmd_state_src_id = src_id; //MAUI_01652672, mtk02285, 20090324
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        rmmi_ptr->uart_in_data_mode = KAL_FALSE;
        rmmi_obtain_uart_control(msg_ptr->port, KAL_FALSE);
        if (RMMI_UART_GetOwnerID((UART_PORT)msg_ptr->port) == MOD_ATCI) //MAUI_03074521, mtk02285, 20111108
        {        
    		kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, msg_ptr->port, custom_get_dcd_value_for_cmd_state());
	    	RMMI_UART_CtrlDCD((UART_PORT)msg_ptr->port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
        }
        else
        {
            //kal_print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
        }
#ifdef __ESCAPE_OK_ATO_CONNECT__
        {       
            kal_uint8 temp_src = rmmi_ptr->current_src;
			rmmi_ptr->current_src = src_id;
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_GEN_CAUSE);
			rmmi_ptr->current_src = temp_src;			
        }
#endif //__ESCAPE_OK_ATO_CONNECT__
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4cppp_ppptypepdp_activated_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CPPP_PPPTYPEPDP_ACTIVATED_IND received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4cppp_ppptypepdp_activated_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_ppptypepdp_activated_ind_struct* msg_ptr = 
		(l4cppp_ppptypepdp_activated_ind_struct*) local_para_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    if (msg_ptr->result == L4C_OK)
    {
        if (l4c_ptr->cc_current_action[msg_ptr->src_id] == CGDATA_EXE)
        {
            l4c_ptr->cc_current_action[msg_ptr->src_id] = L4C_NO_ACTION;
            rmmi_ptr->uart_in_data_mode = KAL_TRUE;
        } // MAUI_02124634, mtk02285, 20091207
    #ifdef __TCPIP__ /* ABM */
	    l4c_abm_dialup_connect_ind_helper(GPRS_BEARER_DIALUP, 0, msg_ptr->context_id);
    #endif
    }
	else
	{
	    /* wait for coding */
		ASSERT(0); // PPP shall report L4CPPP_DEACTIVATE_IND
	}

}
#endif /* ~__PPP_TYPE_PDP_DIALUP_SUPPORT__ */

#if defined(__IPV4V6__) && defined(__IPV6__)
/*****************************************************************************
 * FUNCTION
 *  l4cppp_initial_ip_type_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *       
 * RETURNS
 *  
 *****************************************************************************/
void l4cppp_initial_ip_type_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cppp_initial_ip_type_ind_struct* msg_ptr = (l4cppp_initial_ip_type_ind_struct*) local_para_ptr;
    l4c_gprs_ipv4v6_pdp_activate_req_helper(&(L4C_COMM_PTR->v4v6_act_ptr), msg_ptr->context_id, msg_ptr->src_id, msg_ptr->pdp_type);
}

/*****************************************************************************
 * FUNCTION
 *  l4cppp_ipv4v6_fallback_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *       
 * RETURNS
 *  
 *****************************************************************************/
void l4cppp_ipv4v6_fallback_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint16 rsp_cause = 0;
    kal_bool rsp_result = KAL_FALSE;
    kal_bool fallback_result = KAL_FALSE;
    l4cppp_ipv4v6_fallback_ind_struct* msg_ptr = (l4cppp_ipv4v6_fallback_ind_struct*) local_para_ptr;
    kal_uint8 current_dialup_port = (kal_uint8) l4c_ps_dialup_get_port(msg_ptr->pdp_activate_rsp_cid); //mtk02285, MAUI_03156013, get port information before it is deleted
    
    if (KAL_TRUE == msg_ptr->pdp_activate_rsp_accept)
    {
        fallback_result = l4c_gprs_ipv4v6_pdp_activate_cnf_helper(
                                &(L4C_COMM_PTR->v4v6_act_ptr),
                                L4C_IPV4V6_PDP_ACTIVATOR_IS_PPP,
                                msg_ptr->pdp_activate_rsp_cid, msg_ptr->pdp_activate_rsp_pdp_type,
                                msg_ptr->pdp_activate_cause2_present, msg_ptr->pdp_activate_cause2,
                                &rsp_result, &rsp_cause);

    #if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
        if ((KAL_TRUE == fallback_result) && (L4C_PTR->fast_dormancy_mode == 1) && (L4C_PTR->fd_event == 0))
        {
            /* start Fast Dormancy monitor timer */
            l4c_fd_start_monitor_timer(L4C_SRC);
        }
    #endif
    }
    else
    {
        fallback_result = l4c_gprs_ipv4v6_pdp_activate_rej_helper(
                                 &(L4C_COMM_PTR->v4v6_act_ptr),
                                 L4C_IPV4V6_PDP_ACTIVATOR_IS_PPP,
                                 msg_ptr->pdp_activate_rsp_cid, msg_ptr->pdp_activate_cause, 
                                 &rsp_result, &rsp_cause);

    #if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
        if ((KAL_TRUE == fallback_result) && (KAL_TRUE == rsp_result) &&
            (L4C_PTR->fast_dormancy_mode == 1) && (L4C_PTR->fd_event == 0))
        {
            /* start Fast Dormancy monitor timer */
            l4c_fd_start_monitor_timer(L4C_SRC);
        }
    #endif
    }        

    if (KAL_TRUE == fallback_result)
    {
        l4cppp_ipv4v6_fallback_rsp_struct* param_ptr = (l4cppp_ipv4v6_fallback_rsp_struct*)
            construct_local_para((kal_uint16) sizeof(l4cppp_ipv4v6_fallback_rsp_struct), TD_RESET);     
        //param_ptr->activate_port = l4c_ps_dialup_get_port(msg_ptr->pdp_activate_rsp_cid); //mtk02285, MAUI_03127025, IPV4V6 fallback: cid2 vs. ps_dialup_port[]
        param_ptr->activate_port = current_dialup_port; //mtk02285, MAUI_03156013
        param_ptr->activate_next_pdp = KAL_FALSE;
        l4c_send_msg_to_ppp(MSG_ID_L4CPPP_IPV4V6_FALLBACK_RSP, param_ptr);            
    }
    
} /* end of l4cppp_ipv4v6_fallback_ind_hdlr() */
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */

#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) */

#if defined(__TCPIP__) && defined(__INT_PDP_CONTEXT_ON__)
tcm_pdp_activate_req_struct* l4c_ps_construct_tcm_pdp_activate_req(l4c_ps_abm_setup_req_struct* msg_ptr, kal_uint8 context_id)
{
    tcm_pdp_activate_req_struct* param_ptr = (tcm_pdp_activate_req_struct*)
        construct_local_para((kal_uint16) sizeof(tcm_pdp_activate_req_struct), TD_RESET);

    param_ptr->context_id = context_id;
    // mtk02126: TCM will recognize LMMI_SRC while receiving MMSG_ID_TCM_PDP_ACTIVATE_REQ. TCM didn't handle WAP_SRC.
    param_ptr->src_id = LMMI_SRC;
	param_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID;
    param_ptr->additional_para_content = msg_ptr->profile_id;
    kal_mem_cpy(&param_ptr->account_info, &msg_ptr->gprs_account_info, sizeof(l4c_gprs_account_info_struct));
#if defined(__USB_TETHERING__)
    if (CBM_USB_TR_PS_ACCT_ID == msg_ptr->profile_id)
    {
        param_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
		param_ptr->additional_para_content = MOD_UPS;                
    }
#endif /* __USB_TETHERING__ */

    kal_mem_cpy(&param_ptr->qos_info, &msg_ptr->qos_info, sizeof(tcm_ps_qos_profile_struct));
#ifdef __SATCE__
    kal_mem_cpy(&param_ptr->sate_account_info, &msg_ptr->sate_account_info, sizeof(l4c_sate_gprs_account_info_struct));
    if (param_ptr->additional_para_content == CBM_SAT_PS_ACCT_ID)
    {
        param_ptr->is_sate_account_info_valid = KAL_TRUE;
    }
#endif
    param_ptr->gprs_pf_num = msg_ptr->gprs_pf_num;
    kal_mem_cpy(param_ptr->gprs_pf_info, msg_ptr->gprs_pf_info, 8 * sizeof(l4c_gprs_pf_struct));
    return param_ptr;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_abm_setup_req_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4C_PS_ABM_SETUP_REQ received.
 *  send MSG_ID_TCM_PDP_ACTIVATE_REQ to TCM to activate PDP context.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4c_ps_exe_abm_setup_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_ps_abm_setup_req_struct *msg_ptr;
    kal_uint8 cid;
    kal_bool found = KAL_FALSE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    
#ifndef __PHB_APPROVE_BY_MMI__
    l4cphb_approve_req_struct *param1_ptr;
#endif /* __PHB_APPROVE_BY_MMI__ */

#ifdef __APP_SECONDARY_PDP_SUPPORT__
    kal_uint8 linked_context_id;
#endif 

    msg_ptr = (l4c_ps_abm_setup_req_struct*) local_para_ptr;

    /* MAUI_00216681 */
    if (l4c_ptr->cfun_state != 1 || l4c_ptr->rac_current_action == PWROFF_DETACH
        || l4c_ptr->rac_current_action == SET_RAT_MODE_DETACH
        || l4c_ptr->rac_current_action == RFOFF_DETACH
#ifdef __GEMINI__
        || L4C_COMM_PTR->during_sim_mode_switch
#endif 
        )       // karen
    {
        l4c_ps_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE, 0, msg_ptr->profile_id);
        return;
    }

#ifdef __APP_SECONDARY_PDP_SUPPORT__
    // mtk02126: if resources is available, we'll try 2nd PDP context first. 
    found = l4c_find_free_pdp_context(&cid, msg_ptr->profile_id, msg_ptr->qos_id);
    if (!found)
    {
        /* 
         * mtk02126: if No free PDP context available for 2nd PDP context, 
         * we'll share the primary PDP context. 
         */
        // if not found, check if there is linked context id we can use
        linked_context_id = l4ctcm_get_linked_context_id(msg_ptr->profile_id);

        if (linked_context_id != 0xFF)
        {
            l4c_ps_abm_setup_rsp_struct *rsp;

            rsp = (l4c_ps_abm_setup_rsp_struct*)
                construct_local_para((kal_uint16) sizeof(l4c_ps_abm_setup_rsp_struct), TD_RESET);

            rsp->result = KAL_TRUE;
            rsp->profile_id = msg_ptr->profile_id;
            rsp->context_id = linked_context_id;
            rsp->is_qos_fulfilled = l4ctcm_check_qos_fulfilled(&msg_ptr->qos_info.req_qos, linked_context_id);
            rsp->qos_id = msg_ptr->qos_id;
            l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_SETUP_RSP, rsp);
            return;
        }
        else
        {
            l4c_ps_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE, 0, msg_ptr->profile_id);
            return;
        }
    }
#else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
    found = l4c_find_free_pdp_context(&cid, msg_ptr->profile_id);
    if (!found)
    {
        l4c_ps_abm_setup_rsp_fail_helper(CM_L4C_GEN_CAUSE, 0, msg_ptr->profile_id);
        return;
    }
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

#ifdef __PHB_APPROVE_BY_MMI__
    {
        /* mtk02285, 20110607
         * CGDATA_EXE on WAP_SRC is only used to identify PHB_APPROVE_REQ/CNF.
         * It is not necessary in function-based PHB Approve.
         */
        //L4C_PTR->cc_current_action[WAP_SRC] = CGDATA_EXE; 
        
        /* PHB Approve by function call API */
        kal_uint16 cause = 0;
        l4_addr_bcd_struct tel_number;
        tel_number.addr_bcd[0] = 0x81;
        tel_number.addr_bcd[1] = 0x9A;
        tel_number.addr_bcd[2] = 0xB9;
        tel_number.addr_bcd[3] = 0xFF;
        tel_number.addr_length = 3;
        if (KAL_FALSE == custom_phb_xmgnt_approve_fdn(
                    (kal_uint8*)&(tel_number.addr_bcd[0]), tel_number.addr_length, 
                    (kal_uint8)(l4c_current_mod_id - MOD_L4C), L4C_INT_GPRS_OPERATION, &cause)
           )
        {
        
            l4c_ps_abm_setup_rsp_fail_helper(PHB_L4C_ERROR, cid, msg_ptr->profile_id);
            return;
        }        
        else
        {
            tcm_pdp_activate_req_struct* param_ptr = l4c_ps_construct_tcm_pdp_activate_req(msg_ptr, cid);
            l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, param_ptr);      
            return;
        }
    }
#endif /* __PHB_APPROVE_BY_MMI__ */
#ifndef __PHB_APPROVE_BY_MMI__
    {
        tcm_pdp_activate_req_struct* param_ptr = NULL;        
        
        /* Set CGDATA on WAP_SRC for later l4cphb_approve_cnf_hdlr decision */
        l4c_ptr->cc_current_action[WAP_SRC] = CGDATA_EXE;
    
        /* PHB Approve by Message-based */
        l4c_ptr->cc_parameter[WAP_SRC].length = sizeof(tcm_pdp_activate_req_struct);
        l4c_ptr->cc_parameter[WAP_SRC].data = l4c_ps_construct_tcm_pdp_activate_req(msg_ptr, cid);

        param1_ptr = (l4cphb_approve_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4cphb_approve_req_struct),
                                                    TD_RESET);
        param1_ptr->src_id = WAP_SRC;
        param1_ptr->is_retrieve = KAL_TRUE;

        // mtk02126: use *99# for phonebook approve
        param1_ptr->tel_number.addr_bcd[0] = 0x81;
        param1_ptr->tel_number.addr_bcd[1] = 0x9A;
        param1_ptr->tel_number.addr_bcd[2] = 0xB9;
        param1_ptr->tel_number.addr_bcd[3] = 0xFF;
        param1_ptr->tel_number.addr_length = 3;

        //mtk01616_090216:current src_id for internal gprs operation is always wap_src
        param1_ptr->approval_type = l4_custom_approval_type(L4C_INT_GPRS_OPERATION,WAP_SRC);

        l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
        return;
    }
#endif /* NOT __PHB_APPROVE_BY_MMI__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_abm_disc_req_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4C_PS_ABM_DISC_REQ received.
 *  send MSG_ID_TCM_PDP_DEACTIVATE_REQ to TCM to deactivate PDP context.
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_exe_abm_disc_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_deactivate_req_struct *param_ptr = (tcm_pdp_deactivate_req_struct*)
        construct_local_para((kal_uint16) sizeof(tcm_pdp_deactivate_req_struct), TD_RESET);
    l4c_ps_abm_disc_req_struct *msg_ptr = (l4c_ps_abm_disc_req_struct*) local_para_ptr;
    kal_uint8 cid = 0xff;

    //L4C_PTR->ps_abm_current_action = ABM_DEACT;
    param_ptr->src_id = LMMI_SRC;

    // Karen, this informtion is carried in the req message from ABM
#ifdef __APP_SECONDARY_PDP_SUPPORT__
    if (msg_ptr->context_id != 0xFF)
    {
        /*
         * mtk02126 if this is a 2nd PDP context, 
         * it's possible that we can't find it by l4c_find_pdp_pid2cid()
         * because the 2nd PDP reuse the context_id of primary PDP context.
         * Therefore we need the context_id of msg_ptr.
         */
        param_ptr->context_id = msg_ptr->context_id;
    }
    else
    {
        l4c_find_pdp_pid2cid(&cid, msg_ptr->profile_id, msg_ptr->qos_id);
        param_ptr->context_id = cid;
    }
#else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
    l4c_find_pdp_pid2cid(&cid, msg_ptr->profile_id);
    param_ptr->context_id = cid;
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

    /* MAUI_02534135 mtk02126 add code to hadle the error case */
    if (0xff == param_ptr->context_id || param_ptr->context_id <= MAX_EXT_PDP_CONTEXT)
    {
        /* 
         * We don't find a valid context_id. 
         * This could happen if abm try to disc a connection which is not established.
         * In this case, we'll respond error directly.
         */
        l4c_ps_abm_disc_rsp_struct *disc_rsp_ptr = 
            (l4c_ps_abm_disc_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_ps_abm_disc_rsp_struct), TD_RESET);
        
        free_local_para((local_para_struct*)param_ptr); /* We don't need to send deactivate req. free the buff */
        disc_rsp_ptr->result = KAL_FALSE;
        disc_rsp_ptr->profile_id = msg_ptr->profile_id;
    #ifdef __APP_SECONDARY_PDP_SUPPORT__        
        disc_rsp_ptr->qos_id = msg_ptr->qos_id;
        disc_rsp_ptr->context_id = msg_ptr->context_id;
    #endif       
        l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_DISC_RSP, disc_rsp_ptr);
    }
    else
    {
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_DEACTIVATE_REQ, param_ptr);
    }
}

#ifdef __APP_SECONDARY_PDP_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_abm_reactivate_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_exe_abm_reactivate_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tcm_pdp_reactivate_req_struct *param_ptr;
    l4c_ps_abm_reactivate_req_struct *msg_ptr;
    kal_uint8 cid;

    //L4C_PTR->ps_abm_current_action = ABM_DEACT;

    msg_ptr = (l4c_ps_abm_reactivate_req_struct*) local_para_ptr;

    param_ptr = (tcm_pdp_reactivate_req_struct*)
        construct_local_para((kal_uint16) sizeof(tcm_pdp_reactivate_req_struct), TD_RESET);

    param_ptr->src_id = LMMI_SRC;

    if (msg_ptr->context_id != 0xFF)
    {
        param_ptr->context_id = msg_ptr->context_id;
    }
    else
    {
        l4c_find_pdp_pid2cid(&cid, msg_ptr->profile_id, msg_ptr->qos_id);
        /* 
         * MAUI_02534135 mtk02126
         * cid = 0xff means we don't find corresponding context id.
         * In this case we'll return MSG_ID_L4C_PS_ABM_REACTIVATE_RSP with error directly
         */
         if (0xff == cid)
         {
            l4c_ps_abm_reactivate_rsp_struct *react_rsp_ptr = (l4c_ps_abm_reactivate_rsp_struct*)
                construct_local_para((kal_uint16) sizeof(l4c_ps_abm_reactivate_rsp_struct), TD_RESET);

            free_local_para((local_para_struct*)param_ptr); /* We don't need to send deactivate req. free the buff */
            /* err_cause */
            react_rsp_ptr->result = KAL_FALSE;
            react_rsp_ptr->context_id = 0xff;   /* cid is not found*/
            react_rsp_ptr->profile_id = msg_ptr->profile_id;
            react_rsp_ptr->qos_id = msg_ptr->qos_id;         
            l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_REACTIVATE_RSP, react_rsp_ptr);
            return;
         }
        param_ptr->context_id = cid;
    }

    l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_REACTIVATE_REQ, param_ptr);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_abm_qos_tft_modify_req_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4C_PS_ABM_QOS_TFT_MODIFY_REQ received.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4c_ps_exe_abm_qos_tft_modify_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_setup_rsp_cnf_helper
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid                     [IN]        
 *  linked_context_id       [IN]        
 *  is_qos_fulfilled        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_setup_rsp_cnf_helper(kal_uint8 cid, kal_uint8 linked_context_id, kal_uint8 is_qos_fulfilled)
{
    l4c_ps_abm_setup_rsp_struct *param_ptr;
    kal_uint8 profile_id;
    kal_uint8 qos_id;

    l4c_free_pdp_context(cid, &profile_id, &qos_id);
    param_ptr = (l4c_ps_abm_setup_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_ps_abm_setup_rsp_struct), TD_RESET);
    param_ptr->result = KAL_TRUE;
    param_ptr->profile_id = profile_id;
    param_ptr->qos_id = qos_id;
    param_ptr->context_id = linked_context_id;
    param_ptr->is_qos_fulfilled = is_qos_fulfilled;
    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_SETUP_RSP, param_ptr);
}
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_setup_rsp_fail_helper
 * DESCRIPTION
 *  This function is called by l4c_ps_exe_abm_setup_req_hdlr when is_cmd_conflict() == KAL_TRUE
 *  send MSG_ID_L4C_PS_ABM_SETUP_RSP to ABM.
 * PARAMETERS
 *  cause       [IN]        
 *  cid         [IN]        
 *   MAUI_02532349 mtk02126 
 *   cid = 0 means there is no valid cid, we should not call l4c_free_pdp_context()
 *  pid         [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_setup_rsp_fail_helper(kal_uint16 cause, kal_uint8 cid, kal_uint8 pid)
{
    l4c_ps_abm_setup_rsp_struct *param_ptr;
    kal_uint8 profile_id;
#ifdef __APP_SECONDARY_PDP_SUPPORT__
    kal_uint8 qos_id;
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

    /*
     * MAUI_02532349 mtk02126 
     * cid = 0 means there is no valid cid, we should not call l4c_free_pdp_context()
     */
    if (cid != 0)
    {
    #ifdef __APP_SECONDARY_PDP_SUPPORT__
        l4c_free_pdp_context(cid, &profile_id, &qos_id);
    #else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
        l4c_free_pdp_context(cid, &profile_id);
    #endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 
    }

    param_ptr = (l4c_ps_abm_setup_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_ps_abm_setup_rsp_struct), TD_RESET);

    param_ptr->result = KAL_FALSE;
    param_ptr->err_cause = cause;
    param_ptr->profile_id = pid;
#ifdef __APP_SECONDARY_PDP_SUPPORT__
    param_ptr->qos_id = qos_id;
#endif 

    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_SETUP_RSP, param_ptr);
}
#endif /* __TCPIP__ */ 


#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__)
/* ABM -> L4C */
#ifdef __TCPIP__ //__MOD_ABM__
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_get_dialup_info_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_get_dialup_info_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    l4c_ps_abm_get_dialup_info_req_struct* msg_ptr = 
        (l4c_ps_abm_get_dialup_info_req_struct*) local_para_ptr;

#ifdef __EXT_PDP_CONTEXT_ON__
    l4c_ps_query_ext_pdp_statistics_req_struct* req_ptr = 
        (l4c_ps_query_ext_pdp_statistics_req_struct*) construct_local_para(
            sizeof(l4c_ps_query_ext_pdp_statistics_req_struct), TD_RESET);

    req_ptr->src_id = WAP_SRC;
    req_ptr->serial_num  = msg_ptr->serial_num;
    req_ptr->total_context_id = msg_ptr->total_context_id;
    kal_mem_cpy(req_ptr->context_id, msg_ptr->context_id, MAX_EXT_PDP_CONTEXT);

    l4c_send_msg_to_ratdm(MSG_ID_L4C_PS_QUERY_EXT_PDP_STATISTICS_REQ, req_ptr);    
#else
    l4c_ps_abm_get_dialup_info_rsp_struct* rsp_ptr = 
	    (l4c_ps_abm_get_dialup_info_rsp_struct*) construct_local_para(
		    sizeof(l4c_ps_abm_get_dialup_info_rsp_struct), TD_RESET);

    rsp_ptr->serial_num = msg_ptr->serial_num;
	rsp_ptr->total_context_id = 0;
    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_GET_DIALUP_INFO_RSP, rsp_ptr);	
#endif
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_reset_dialup_info_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_reset_dialup_info_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_ps_abm_reset_dialup_info_req_struct* msg_ptr = 
        (l4c_ps_abm_reset_dialup_info_req_struct*) local_para_ptr;

#ifdef __EXT_PDP_CONTEXT_ON__
	kal_uint8 i = 0;
    l4c_ps_reset_ext_pdp_statistics_req_struct* req_ptr = 
        (l4c_ps_reset_ext_pdp_statistics_req_struct*) construct_local_para(
            sizeof(l4c_ps_reset_ext_pdp_statistics_req_struct), TD_RESET);

    req_ptr->src_id = WAP_SRC;
    req_ptr->serial_num  = msg_ptr->serial_num;

    if (msg_ptr->reset_cmd_type == L4C_PS_ABM_DIALUP_RESET_TX_RX)
    {
        req_ptr->total_reset_num = MAX_EXT_PDP_CONTEXT;
        for (i=0; i<MAX_EXT_PDP_CONTEXT; i++)
        {
            req_ptr->reset_cmd[i].context_id = i + 1;
            req_ptr->reset_cmd[i].reset_tx = KAL_TRUE;
            req_ptr->reset_cmd[i].reset_rx = KAL_TRUE;
        }
    }   
    else if (msg_ptr->reset_cmd_type == L4C_PS_ABM_DIALUP_RESET_TX)
    {
        req_ptr->total_reset_num = MAX_EXT_PDP_CONTEXT;
        for (i=0; i<MAX_EXT_PDP_CONTEXT; i++)
        {
            req_ptr->reset_cmd[i].context_id = i + 1;
            req_ptr->reset_cmd[i].reset_tx = KAL_TRUE;
            req_ptr->reset_cmd[i].reset_rx = KAL_FALSE;
        }        
    }  
    else if (msg_ptr->reset_cmd_type == L4C_PS_ABM_DIALUP_RESET_RX)
    {
        req_ptr->total_reset_num = MAX_EXT_PDP_CONTEXT;
        for (i=0; i<MAX_EXT_PDP_CONTEXT; i++)
        {
            req_ptr->reset_cmd[i].context_id = i + 1;
            req_ptr->reset_cmd[i].reset_tx = KAL_FALSE;
            req_ptr->reset_cmd[i].reset_rx = KAL_TRUE;
        }        
    }  
    else if (msg_ptr->reset_cmd_type == L4C_PS_ABM_DIALUP_RESET_IN_DETAIL)
    {
        req_ptr->total_reset_num = msg_ptr->total_reset_num;
        kal_mem_cpy(msg_ptr->reset_cmd, req_ptr->reset_cmd,
            sizeof(l4c_ps_dialup_info_reset_cmd_struct)*MAX_EXT_PDP_CONTEXT);
    }
    else
    {
        ASSERT(0);
    }
    
    l4c_send_msg_to_ratdm(MSG_ID_L4C_PS_RESET_EXT_PDP_STATISTICS_REQ, req_ptr);    
#else
    l4c_ps_abm_reset_dialup_info_rsp_struct* rsp_ptr = 
	    (l4c_ps_abm_reset_dialup_info_rsp_struct*) construct_local_para(
		    sizeof(l4c_ps_abm_reset_dialup_info_rsp_struct), TD_RESET);

    rsp_ptr->serial_num = msg_ptr->serial_num;
	rsp_ptr->total_reset_num = 0;
    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_GET_DIALUP_INFO_RSP, rsp_ptr);	    
#endif
    return;
} /* end of l4c_ps_abm_reset_dialup_info_req_hdlr */
#endif /* __TCPIP__ //__MOD_ABM__ */

/* RATDM -> L4C */
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_query_ext_pdp_statistics_rsp_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_query_ext_pdp_statistics_rsp_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    l4c_ps_query_ext_pdp_statistics_rsp_struct* msg_ptr = 
        (l4c_ps_query_ext_pdp_statistics_rsp_struct*) local_para_ptr;

#ifdef __TCPIP__ //__MOD_ABM__
    if (msg_ptr->src_id == WAP_SRC)
    {
        l4c_ps_abm_get_dialup_info_rsp_struct* rsp_ptr = (l4c_ps_abm_get_dialup_info_rsp_struct*) 
            construct_local_para(sizeof(l4c_ps_abm_get_dialup_info_rsp_struct), TD_RESET);
        rsp_ptr->serial_num = msg_ptr->serial_num;
        rsp_ptr->total_context_id = msg_ptr->total_context_id;
        kal_mem_cpy(rsp_ptr->result, msg_ptr->query_result,
            sizeof(single_pdp_call_history_info_struct) * MAX_EXT_PDP_CONTEXT);
        l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_GET_DIALUP_INFO_RSP, rsp_ptr);
    }
#endif /* __TCPIP__ //__MOD_ABM__ */        

#if !defined(__MMI_FMI__)
    if (msg_ptr->src_id >= RMMI_SRC && msg_ptr->src_id < RMMI_ALL) 
    {
        // call the rrsp function
    }
#endif
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_reset_ext_pdp_statistics_rsp_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_reset_ext_pdp_statistics_rsp_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    l4c_ps_reset_ext_pdp_statistics_rsp_struct* msg_ptr = 
        (l4c_ps_reset_ext_pdp_statistics_rsp_struct*) local_para_ptr;

#ifdef __TCPIP__ //__MOD_ABM__
    if (msg_ptr->src_id == WAP_SRC)
    {
        l4c_ps_abm_reset_dialup_info_rsp_struct* rsp_ptr = (l4c_ps_abm_reset_dialup_info_rsp_struct*) 
            construct_local_para(sizeof(l4c_ps_abm_reset_dialup_info_rsp_struct), TD_RESET);
        rsp_ptr->serial_num = msg_ptr->serial_num;
        rsp_ptr->total_reset_num = msg_ptr->total_reset_num;
        kal_mem_cpy(rsp_ptr->result, msg_ptr->result,
            sizeof(l4c_ps_dialup_info_reset_result_struct) * MAX_EXT_PDP_CONTEXT);
        l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_RESET_DIALUP_INFO_RSP, rsp_ptr);
    }
#endif /* __TCPIP__ //__MOD_ABM__ */        

#if !defined(__MMI_FMI__)
    if (msg_ptr->src_id >= RMMI_SRC && msg_ptr->src_id < RMMI_ALL) 
    {
        // call the rrsp function
    }
#endif
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_ext_pdp_statistics_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_ext_pdp_statistics_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    l4c_ps_ext_pdp_statistics_ind_struct* msg_ptr = 
        (l4c_ps_ext_pdp_statistics_ind_struct*) local_para_ptr;
    kal_uint8 i = 0;
    kal_uint8 entry_num = msg_ptr->total_context_id;
	
    for (i=0; i<entry_num; i++)
    {
#ifdef __TCPIP__ //__MOD_ABM__    
        l4c_ps_abm_dialup_info_ind_struct* ind_ptr = (l4c_ps_abm_dialup_info_ind_struct*) 
            construct_local_para(sizeof(l4c_ps_abm_dialup_info_ind_struct), TD_RESET);
		single_pdp_call_history_info_struct* result_ptr = NULL;
		result_ptr = &((msg_ptr->result)[i]);
        ind_ptr->context_id = result_ptr->context_id;
        ind_ptr->tx_before_reset = result_ptr->tx;
        ind_ptr->rx_before_reset = result_ptr->rx;         
        l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_DIALUP_INFO_IND, ind_ptr);
#endif /* __TCPIP__ //__MOD_ABM__ */                
    }

#if !defined(__MMI_FMI__)
    {
        // call the rind function
    }
#endif
#endif  
}
#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__) */ 


#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__NDIS_SUPPORT__)
#if defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__) //MAUI_02900475
void l4cups_port_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cups_port_deactivate_ind_struct* param_ptr = 
        (l4cups_port_deactivate_ind_struct*) local_para_ptr;
    kal_uint8 port = param_ptr->port;
    kal_uint8 data_src_id = rmmi_cid_2_srcid(rmmi_port_2_cid(port));    
    

   if (L4C_ONLINE_DATA_GPRS_STATE == L4C_PTR->cc_state[data_src_id])
    {
        L4C_PTR->cc_state[data_src_id] = L4C_COMMAND_STATE;        
        rmmi_obtain_uart_control(port, KAL_FALSE); //mtk02285, temp, 20120130
        kal_brief_trace(TRACE_STATE, STATE_L4C_CC_ACTION,
            data_src_id, L4C_PTR->cc_state[data_src_id], L4C_NO_ACTION);
    }
    else    
    {
        ASSERT(0);
    }
}

void l4cups_port_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cups_port_activate_cnf_struct* param_ptr = 
        (l4cups_port_activate_cnf_struct*) local_para_ptr;
    kal_bool result = param_ptr->result;
    kal_uint8 src_id = param_ptr->src_id;

    if (CGDATA_EXE == L4C_PTR->cc_current_action[src_id])
    {
	    if (KAL_TRUE == result)
	    {    
	        /* MAUI_02900475, mtk02285, 20110321: 
	         [online data state note 1/2]
	         1. for UPS-USB or PPP-GPRS-dialup, L4C needs to set L4C_ONLINE_DATA_GPRS_STATE
	         2. this state is stored for L4C to know if a RMMI_PTR->port[x] is used or not
	         */
	        kal_uint8 data_src_id = rmmi_cid_2_srcid(rmmi_port_2_cid(param_ptr->port));          
	        L4C_PTR->cc_state[data_src_id] = L4C_ONLINE_DATA_GPRS_STATE;
	        kal_brief_trace(TRACE_STATE, STATE_L4C_CC_ACTION,
	            data_src_id, L4C_PTR->cc_state[data_src_id], L4C_NO_ACTION);
	    }        
	    else
	    {
	        /* Port activate fail. The reason may be interrupted by AT+CFUN=4 / MT PDP deactivation
	           For these cases, UPS receives the following msgs continuously,
	           (1) NDIS_RATDM_DATA_ACTIVATE_IND
	           (2) NDIS_RATDM_DATA_DEACTIVATE_IND
	           (3) L4CUPS_PORT_ACTIVATE_REQ
	           Hence it confirms (3) with a failure result.
	         */
	        kal_brief_trace(TRACE_WARNING, WARNING_L4CUPS_PORT_ACTIVATE_CNF_FAILURE);  
	        rmmi_obtain_uart_control(param_ptr->port, KAL_FALSE); //mtk02285, temp, 20120130
	    }    
	    RMMI_PTR->current_src = src_id;
	    L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;            
	    l4c_general_rrsp(result, L4C_NO_CAUSE);     		
    }
    else
    {
        ASSERT(0);
    }                     
}
#endif /* defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__) */

/*****************************************************************************
 * FUNCTION
 *  l4ctcm_enter_data_mode_cnf_handler
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CTCM_ENTER_DATA_MODE_CNF is received
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4ctcm_enter_data_mode_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_enter_data_mode_cnf_struct *param_ptr = 
        (l4ctcm_enter_data_mode_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = param_ptr->src_id;
       
#if defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__) && defined(__USB_MULTIPLE_COMPORT_SUPPORT__)//MAUI_02900475
    /* [Data port Configuration]
       20110322, for MT6276M, no matter the user chooses PPP(dialup) or UPS(NDIS) as the data module.
       The USB data port is pre-defined as "uart_port_usb" (refer to rmmi_init_uart())
       If this assumption changes, please modify here and rmmi_init_uart() at the same time.
     */
    const UART_PORT l4cups_port = RMMI_COMM_PTR->port[RMMI_USB2_CHANNEL];
    module_type real_owner = MOD_NIL;

    if ((L4C_OK == param_ptr->result) && 
        (uart_port_null != l4cups_port) &&
        (KAL_TRUE == rmmi_check_port_ownership((DCL_DEV)l4cups_port, &real_owner)))
    {
        //kal_uint8 data_src_id = rmmi_cid_2_srcid(rmmi_port_2_cid((kal_uint8)l4cups_port));
        L4C_DECLARE_AND_CONSTRUCT_LOCAL_PARAM(l4cups_port_activate_req_struct, act_req, TD_RESET);
                
        act_req->port = (kal_uint8)l4cups_port;
        act_req->src_id = param_ptr->src_id;
        act_req->context_id = param_ptr->context_id;
        L4C_PTR->cc_current_action[param_ptr->src_id] = CGDATA_EXE;

        l4c_send_msg(MOD_UPS, MSG_ID_L4CUPS_PORT_ACTIVATE_REQ, UPS_SAP, act_req, NULL);
        return;
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, WARNING_L4CUPS_PORT_MAYBE_NOT_AVALIABLE,
            l4cups_port, real_owner, rmmi_current_mod_id, PS_UART_PORT);
    }
#endif /* defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__) && defined(__USB_MULTIPLE_COMPORT_SUPPORT__)*/         

    //fix by mtk02126, MAUI_02421005, handle the L4C_ERROR result

    if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
    RMMI_PTR->current_src = param_ptr->src_id;
    l4c_general_rrsp((L4C_OK != param_ptr->result)?(KAL_FALSE):(KAL_TRUE), L4C_NO_CAUSE);
    }
#ifdef __MBIM_SUPPORT__
    else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
    {
        l4c_ps_exe_enter_data_state_mrsp(src_id, (L4C_OK != param_ptr->result)?(KAL_FALSE):(KAL_TRUE));
    }
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4ctcm_set_config_option_cnf_handler
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CTCM_SET_CONFIG_OPTION_CNF is received
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4ctcm_set_config_option_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ctcm_set_config_option_cnf_struct *param_ptr = 
        (l4ctcm_set_config_option_cnf_struct*) local_para_ptr; // add on CURRENT_SRC_REVIEW
    kal_uint8 src_id = param_ptr->src_id;

    if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
        RMMI_PTR->current_src = src_id; // add on CURRENT_SRC_REVIEW
        l4c_ps_general_rrsp(((param_ptr->result==L4C_ERROR)? KAL_FALSE : KAL_TRUE), param_ptr->error_cause);
    }
#ifdef __MBIM_SUPPORT__
    else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
    {
        l4c_ps_set_config_option_mrsp(src_id, KAL_TRUE);
    }
#endif
}

#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__NDIS_SUPPORT__) */

/*****************************************************************************
 * FUNCTION
 *  l4ctcm_ps_event_report_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CTCM_PS_EVENT_REPORT_IND is received
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4ctcm_ps_event_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if !defined(__SLIM_AT__) // at+cgerep is wrapped by SLIM
    l4ctcm_ps_event_report_ind_struct *param_ptr;
    kal_uint8 tmp_src_id; 
    param_ptr = (l4ctcm_ps_event_report_ind_struct*) local_para_ptr;

    tmp_src_id = RMMI_PTR->current_src; 
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_nw_gprs_event_report_rind(
        param_ptr->event_id,
        param_ptr->context_id,
        param_ptr->pdp_addr_len,
        param_ptr->pdp_addr_type,
        param_ptr->pdp_addr);
    RMMI_PTR->current_src = tmp_src_id; 

#ifdef __MBIM_SUPPORT__
    l4c_nw_gprs_event_report_mind(param_ptr->event_id, L4C_SRC, param_ptr->context_id);
#endif

#endif 	/* !defined(__SLIM_AT__) */
}

#ifdef __HSDPA_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4ctcm_bearer_capability_ind_hdlr
 * DESCRIPTION
 *  This function is called when MSG_ID_L4CTCM_BEARER_CAPABILITY_IND is received
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4ctcm_bearer_capability_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    //20110103, mtk02285, revise with TCM - local param does NOT carry info anymore
    //l4ctcm_bearer_capability_ind_struct *param_ptr = (l4ctcm_bearer_capability_ind_struct*) local_para_ptr;
    kal_uint8 status = L4C_PDP_DEACTIVED;
    kal_uint8 i = 0;
    kal_uint8 max_capability = L4C_NONE_ACTIVATE;
    kal_uint8 pdp_state_list[TCM_TOT_CONTEXT][2];
    kal_uint8 pdp_num = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

	// indication to LMMI	
    /*
	for (i=0; i<param_ptr->valid_contexts; i++)
	{
	    if (param_ptr->bearer_capability[i] > max_capability)
	    {
	        max_capability = param_ptr->bearer_capability[i];
	    }
	}
    */
    //20110103, mtk02285, revise with TCM - always callback to get whole RAB info, they should be stored in TCM context
    max_capability = l4c_ps_get_data_bearer_capability();

    // MAUI_02316028, l4ctcm_get_context_state() supports both INT & EXT PDP
	if (l4ctcm_get_context_state(&pdp_num, (kal_uint8*) pdp_state_list))
	{
        for (i=0; i<pdp_num; i++)
        {
            if (pdp_state_list[i][1] == 1)
            {
                status = L4C_PDP_ACTIVED;
				break;
            }
        }
		if (status != L4C_PDP_ACTIVED)
		{
		    status = l4crac_get_gprs_status();
			status = (status == GPRS_NULL)?(GPRS_NO_COVERAGE):(status);
		}
	}
	else
	{
	    ASSERT(0);
	}

    l4c_ptr->max_data_bearer_capa = (l4c_data_bearer_capablility_enum)max_capability;
	l4c_ps_gprs_status_update_lind((l4c_gprs_status_enum)status
		, l4crac_get_egprs_status()
		, l4crac_get_cell_data_speed_support()
		, max_capability);

    // indication to RMMI
    l4c_ps_update_current_reg_rind();

#ifdef __MBIM_SUPPORT__
    l4c_ps_gprs_status_update_mind();
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    if ((l4c_ptr->fast_dormancy_mode == 1) && (l4c_ptr->fd_event == 0) && 
        (l4c_ptr->max_data_bearer_capa > L4C_EDGE_CAPABILITY) && 
        (l4c_ptr->max_data_bearer_capa < L4C_LTE_CAPABILITY))
        {
            /* start Fast Dormancy monitor timer */
            l4c_fd_start_monitor_timer(L4C_SRC);
        }
#endif
} //hspa_mmi_h2, mtk02285
#endif //__HSDPA_SUPPORT__
#endif /* __MOD_TCM__ */ 

