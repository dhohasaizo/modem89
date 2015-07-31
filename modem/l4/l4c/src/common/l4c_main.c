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
 * L4C_MAIN.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_MAIN_C

#undef _FILE_CODE_
#define _FILE_CODE_  _L4C_MAIN_C_

#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h" /* Task message communiction */
#include "kal_trace.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_ft.h"
#include "l4c_msghdlr.h"
#include "l4_trc.h"
#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
#include "l4c_em.h"
#endif /* __MODEM_EM_MODE__ */ 
#include "l4c_sim_msg.h"

#include "dcl.h"
#include "l4c_tst.h"

#ifndef MED_NOT_PRESENT
//#include "med_global.h"
#endif /* MED_NOT_PRESENT */ 

#include "rmmi_utility.h"

#include "l4c_sat_msg.h"

#include "rmmi_msghdlr.h"

#include "csmcc_defs.h" //MAUI_02574001
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "cmux_vp_num.h"
#include "ps_public_enum.h"

#include "sysservice_msgid.h"
#include "ps_public_l4_msgid.h"
#include "l4_msgid.h"
#include "ups_msgid.h"
#include "nvram_msgid.h"
#include "sim_ps_msgid.h"
#include "sim_public_msgid.h"
#include "med_msgid.h"
#include "em_msgid.h"
#include "tst_msgid.h"
#include "ulcs_msgid.h"
#if defined(__NFC_SUPPORT__)
#include "nfc_msgid.h"
#endif
#if defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__)
//#include "mmi_msgid.h"
#endif
#include "tst_sap.h"
#include "ul1_msgid.h"
#include "l1_ext_msgid.h"

#ifdef __UAGPS_CP_SUPPORT__
#include "l4c_lcs_msg.h"
#endif

#include "rmmi_root.h"

//agps_ipc
#if defined(__AGPS_CONTROL_PLANE__) || defined(__NBR_CELL_INFO__)
#include "lmmi_ind.h" //for l4c_agps_reset_positioning_lind()
#if defined(__ANDROID_RIL_SUPPORT__)
#include "ipc_msgsvc_msgid.h"
#endif
#endif

#ifdef __MOD_TCM__
#include "l4c_gprs_msg.h"
#endif

#include "l4c_sms_msg.h"
#include "l4c_nw_cmd.h"
#include "l4c_eq_msg.h"

#ifdef __AGPS_CONTROL_PLANE__
#include "l4c_lcs_cmd.h"
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
#include "l4c_nw_msg.h" //for l4c_rrce_pch_txrx_ind_hdlr()
#endif

#if defined(__REGIONAL_PHONE__)
#include "ccci.h"
#include "l4c_sim_cmd.h"
#endif

#ifdef __MOD_L4A__
extern void l4a_recvmsg(ilm_struct *ilm_ptr);
#endif 

extern void customer_l4c_msghdlr(ilm_struct* ilm_ptr);

extern kal_bool l4c_cc_exe_chld_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 call_id); //MAUI_02574001

//hogan: to print debug info 070308 
extern UART_PORT PS_UART_PORT;


/*****************************************************************************
 * FUNCTION
 *  l4c_main
 * DESCRIPTION
 *  l4c msg dispatcher
 * PARAMETERS
 *  ilm_ptr     [IN]        Received ilm
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_main(ilm_struct *ilm_ptr)
{
    /* Feed the received message to the functional FSM */
    /*
     * Call the appropriate message handler based on the current
     * * state and message received.
     */
    kal_uint8 i;
    kal_uint8 cid;
    rmmi_sim_uart_setting_enum sim_setting = RMMI_UART_TO_SIM1;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_MAIN_ENTRY);

    if (ilm_ptr->msg_id == MSG_ID_TIMER_EXPIRY)
    {
        /* Execute event's timeout handler */
        evshed_timer_handler(l4c_ptr->event_scheduler_ptr); //evshed_create, mtk02285, 20110328
    }
    else if (ilm_ptr->msg_id > MSG_TAG_L4C_FIRST_IND_MSG && ilm_ptr->msg_id < MSG_TAG_L4C_LAST_IND_MSG)
    {
        (*(l4c_ind_ft[ilm_ptr->msg_id - MSG_TAG_L4C_FIRST_IND_MSG-1])) (ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id > MSG_TAG_L4C_FIRST_CNF_MSG && ilm_ptr->msg_id < MSG_TAG_L4C_LAST_CNF_MSG)
    {
        (*(l4c_cnf_ft[ilm_ptr->msg_id - MSG_TAG_L4C_FIRST_CNF_MSG-1])) (ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src /* RMMI_SRC */ );

        if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
        {
            rmmi_process_multi_cmd(cid);
        }

        for (i = 0; i < RMMI_MAX_CHANNEL_NUMBER; i++)
        {
            if (rmmi_root_is_uart_owner(cid))
            {
                if (RMMI_COMM_PTR->uart_input_queue[i].length > 0)
                {
                    rmmi_process_one_cmd(i);
                }
            }
        }
    }
#ifdef __NBR_CELL_INFO__  
    else if (ilm_ptr->msg_id == MSG_ID_L4C_NBR_CELL_INFO_REG_REQ)
    {
         l4c_nbr_cell_info_reg_req_hdlr(ilm_ptr->src_mod_id,ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4C_NBR_CELL_INFO_DEREG_REQ)
    {
        l4c_nbr_cell_info_dereg_req_hdlr(ilm_ptr->src_mod_id,ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif	
#if defined(__MOD_TCM__) && defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__)
    else if (ilm_ptr->msg_id == MSG_ID_L4C_PS_QUERY_EXT_PDP_STATISTICS_RSP)
    {
         l4c_ps_query_ext_pdp_statistics_rsp_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4C_PS_RESET_EXT_PDP_STATISTICS_RSP)
    {
        l4c_ps_reset_ext_pdp_statistics_rsp_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4C_PS_EXT_PDP_STATISTICS_IND)
    {
        l4c_ps_ext_pdp_statistics_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }    
#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__) */
#if defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__)
    else if (ilm_ptr->msg_id == MSG_ID_L4CUPS_PORT_DEACTIVATE_IND)
    {
         l4cups_port_deactivate_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4CUPS_PORT_ACTIVATE_CNF)
    {
        l4cups_port_activate_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* defined(__UPS_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__) */
#ifdef __TCPIP__
    else if (ilm_ptr->msg_id > MSG_TAG_L4C_FIRST_REQ_MSG && ilm_ptr->msg_id < MSG_TAG_L4C_LAST_REQ_MSG)
    {
        (*(l4c_req_ft[ilm_ptr->msg_id - MSG_TAG_L4C_FIRST_REQ_MSG-1])) (ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* __TCPIP__ */ 
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_CNF)
    {
        nvram_write_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_READ_CNF)
    {
        nvram_read_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        //mtk00924_060216: to handle the multiple cmd after nvram_read_cnf, ex: at+xxx;+egmr=0,7
        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src /* RMMI_SRC */ );

        if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
        {
            rmmi_process_multi_cmd(cid);
        }
        
        for (i = 0; i < RMMI_MAX_CHANNEL_NUMBER; i++)
        {
            if (rmmi_root_is_uart_owner(cid))
            {
                if (RMMI_COMM_PTR->uart_input_queue[i].length > 0)
                {
                    rmmi_process_one_cmd(i);
                }
            }
        }

    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_RESET_CNF)
    {
        nvram_reset_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_SET_LOCK_CNF)
    {
        nvram_set_lock_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_STARTUP_CNF)
    {
        nvram_startup_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SIM_WRITE_CNF)
    {
        sim_write_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SIM_READ_CNF)
    {
        sim_read_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SIM_FILE_INFO_CNF)
    {
        sim_file_info_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }    
    else if (ilm_ptr->msg_id == MSG_ID_SIM_READ_PLMN_CNF)
    {
	l4csmu_sim_read_plmn_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SIM_WRITE_PLMN_CNF)	
    {
	l4csmu_sim_write_plmn_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
/* MAUI_02953154 */
#if defined(__SIM_SEARCH_RECORD_SUPPORT__)	
    else if (ilm_ptr->msg_id == MSG_ID_SIM_SEARCH_RECORD_CNF)	
    {
	l4csmu_sim_search_record_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#endif	
    else if (ilm_ptr->msg_id == MSG_ID_SIM_ERROR_IND)
    {
        sim_error_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#ifdef __SIM_O2_PREPAID_SIM_DETECT__	
    else if (ilm_ptr->msg_id == MSG_ID_SIM_O2_PREPAID_SIM_IND)   
    {
        sim_o2_prepaid_sim_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#endif	
    else if (ilm_ptr->msg_id == MSG_ID_SIM_RESET_CNF)  
    {
        sim_reset_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#ifdef __SAT__
    else if (ilm_ptr->msg_id == MSG_ID_SAT_FILE_CHANGE_IND)
    {
        l4csat_file_change_ind_hdlr(ilm_ptr->local_para_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_LANGUAGE_REQ) 
    {
       sim_sat_language_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }		
#endif /* __SAT__ */ 
    else if (ilm_ptr->msg_id == MSG_ID_SIM_POWEROFF_CNF)
    {
        sim_poweroff_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#ifdef __GEMINI__
    else if (ilm_ptr->msg_id == MSG_ID_SIM_STATUS_UPDATE_IND)
    {
        sim_status_update_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* __GEMINI__ */ 
    else if (ilm_ptr->msg_id == MSG_ID_SIM_CALL_DISCONNECT_IND) //MAUI_02574001
    {
        if (l4c_ptr->call_exist == KAL_TRUE) //MAUI_02622819
        {
            l4c_cc_exe_chld_req(L4C_SRC, CSMCC_REL_ALL, CSMCC_INVALID_CALL_ID);
        }
    }
#ifdef __GSMCDMA_DUALSIM__    
   else if(ilm_ptr->msg_id == MSG_ID_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_CNF)
   {
      sim_get_gsmcdma_dualsim_info_cnf_hdlr(ilm_ptr->local_para_ptr,
							 ilm_ptr->peer_buff_ptr);
   }
   else if(ilm_ptr->msg_id == MSG_ID_L4C_SIM_SET_GSMCDMA_DUALSIM_MODE_CNF)
   {
      sim_set_gsmcdma_dualsim_mode_cnf_hdlr(ilm_ptr->local_para_ptr,
							 ilm_ptr->peer_buff_ptr);
   }
#endif /* __GSMCDMA_DUALSIM__ */
#if !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__)
    else if (ilm_ptr->msg_id == MSG_ID_SIM_AUTHENTICATE_CNF)
    {
        sim_authenticate_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__) */
#if !defined(__MMI_FMI__)
    else if (ilm_ptr->msg_id == MSG_ID_SIM_QUERY_INFO_CNF)
    {
        sim_query_info_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif
#if !defined(__MMI_FMI__) && defined(__BT_SIM_PROFILE__)
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_CONNECT_CNF)
    {
        l4c_bt_sim_connect_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_DISCONNECT_CNF)
    {
        l4c_bt_sim_disconnect_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_POWER_ON_CNF)
    {
        l4c_bt_sim_power_on_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_POWER_OFF_CNF)
    {
        l4c_bt_sim_power_off_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }		
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_RESET_CNF)
    {
        l4c_bt_sim_reset_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }		
    else if (ilm_ptr->msg_id == MSG_ID_BT_SIM_APDU_CNF)
    {
        l4c_bt_sim_apdu_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }			
#endif /* !defined(__MMI_FMI__) && defined(__BT_SIM_PROFILE__) */
#if defined(__CSIM__) || defined(__CGLA__) 	/* MAUI_03082391 */ //mtk02514_nfc
    else if (ilm_ptr->msg_id == MSG_ID_SIM_APDU_ACCESS_CNF)
    {
        l4c_sim_apdu_access_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#endif
#ifdef __UICC_CHANNEL_SUPPORT__
    else if (ilm_ptr->msg_id == MSG_ID_SIM_MANAGE_CHANNEL_CNF)
    {
        l4c_sim_manage_channel_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif
#ifdef __VSIM__
    else if (ilm_ptr->msg_id == MSG_ID_L4C_SIM_SET_VSIM_MODE_CNF)
    {
        l4c_sim_vsim_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#endif	
#if 0 //__CTM_SUPPORT__
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
#endif /* __CTM_SUPPORT__ */ 

#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
    else if (ilm_ptr->msg_id >= MSG_ID_EM_CODE_BEGIN && ilm_ptr->msg_id <= MSG_ID_EM_CODE_END)
    {
        /* EM message */
        l4c_em_handler(ilm_ptr);
    }
#endif /* __MODEM_EM_MODE__ */ 
    else if (ilm_ptr->msg_id == MSG_ID_TST_INJECT_STRING)
    {
        tst_inject_string_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#if defined(SMS_FOR_NEPTUNE)
    else if (ilm_ptr->msg_id >= MSG_ID_MMI_SMS_SET_BEARER_SERVICE_REQ)
    {

    }
#endif /* defined(SMS_FOR_NEPTUNE) */ 
#ifdef __SAT__
    else if (ilm_ptr->msg_id == MSG_ID_SAT_SETUP_EVENT_LIST_IND)
    {
        l4csat_setup_event_list_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#if defined(__RSAT__) || defined(__SAT_PROPRIETARY_ENVELOPE__) || defined(__SAT_PROPRIETARY_COMMAND__) 
    else if (ilm_ptr->msg_id == MSG_ID_SAT_ENVELOPE_CNF)
    {
        l4csat_envelope_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif
#ifdef __RSAT__
    else if (ilm_ptr->msg_id == MSG_ID_SAT_MORETIME_IND)
    {
        l4csat_moretime_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_POLL_INTERVAL_IND)
    {
        l4csat_poll_interval_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_REFRESH_IND)
    {
        l4csat_refresh_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_POLLING_OFF_IND)
    {
        l4csat_polling_off_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_PROVIDE_LOCAL_INFO_IND)
    {
        l4csat_provide_local_info_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SAT_TIMER_MANAGEMENT_IND)
    {
        l4csat_timer_management_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* __RSAT__ */ 

#ifdef __SATCE__ /*message from SIM task, not SMU*/
#if defined(__RSAT__) || defined(EXTERNAL_MMI)
    else if (ilm_ptr->msg_id == MSG_ID_SAT_OPEN_CHANNEL_IND)
    {
        l4csat_open_channel_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_SAT_CLOSE_CHANNEL_IND)
    {
        l4csat_close_channel_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_SAT_SEND_DATA_IND)
    {
        l4csat_send_data_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_SAT_RECV_DATA_IND)
    {
        l4csat_recv_data_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
    else if (ilm_ptr->msg_id == MSG_ID_SAT_CH_STATUS_IND)
    {
        l4csat_channel_status_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }		
#endif	
#endif /*__SATCE__*/	

#ifdef __SATCR__
    else if (ilm_ptr->msg_id == MSG_ID_SAT_CONTACTLESS_STATE_CHANGED_IND)
    {
        l4csat_contactless_state_changed_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif

#ifdef __SATCL__ 
    else if (ilm_ptr->msg_id == MSG_ID_SAT_ACTIVATE_IND)
    {
        l4csat_activate_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /*__SATCL__*/	
#endif /* __SAT__ */ 

#ifdef __UAGPS_CP_SUPPORT__
    else if (ilm_ptr->msg_id == MSG_ID_L4C_UAGPS_CP_AGPS_NEW_KEY_NEEDED_IND)
    {
        l4c_uagps_cp_agps_new_key_needed_ind_hdlr();
    }
#endif /* __UAGPS_CP_SUPPORT__ */

#if defined(__AGPS_CONTROL_PLANE__)
    else if (ilm_ptr->msg_id == MSG_ID_L4C_RATCM_AGPS_RESET_POSITIONING_IND)
    {
        //send AGPS reset indication to MMI
        l4c_agps_reset_positioning_lind();
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4C_LCSP_AGPS_CP_START_IND)
    {
        l4c_lcsp_agps_cp_start_ind_hdlr(ilm_ptr->src_mod_id);
    }
    else if (ilm_ptr->msg_id == MSG_ID_L4C_LCSP_AGPS_CP_END_IND)
    {
        l4c_lcsp_agps_cp_end_ind_hdlr(ilm_ptr->src_mod_id);
    }
#endif

#if defined(__AT_RRC_TRACE_SUPPORT__)
    else if(ilm_ptr->msg_id == MSG_ID_L4CAS_RRC_PEER_TRACE_IND)
    {
        l4cas_rrc_peer_trace_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif

#if defined(__ETWS_SUPPORT__)
    else if (ilm_ptr->msg_id == MSG_ID_L4CAS_ETWS_INFORMATION_IND)
    {
        l4cas_etws_information_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);        
    }
#endif

#if defined(__NFC_SUPPORT__)
    else if(ilm_ptr->msg_id == MSG_ID_NFC_TEST_RSP)
    {
        l4c_nfc_test_rsp_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    else if ((ilm_ptr->msg_id == MSG_ID_L4C_END_PS_DATA_SENSSION_REQ) && 
        (L4C_PTR->fast_dormancy_mode == 0))
    {
        /* only accept AP CCCI send SCRI in old mechanism, that FD is not performed by L4C */
        l4c_nw_end_ps_data_session_req((kal_uint8)L4C_SRC, KAL_TRUE);
    }
#endif
    else if(ilm_ptr->msg_id == MSG_ID_L4C_MAX_TX_PWR_RED_REQ)
    {
        l4c_max_tx_pwr_red_req_struct *param = (l4c_max_tx_pwr_red_req_struct*)ilm_ptr->local_para_ptr;

        kal_uint8 gsm_tx_pwr_reduction_tbl[4][2][4];
        kal_uint8 umts_tx_pwr_reduction_tbl[20][2];

        kal_mem_set((void*)gsm_tx_pwr_reduction_tbl, param->gsm_tx_pwr_red, 4*2*4);

        kal_mem_set((void*)umts_tx_pwr_reduction_tbl, param->umts_tx_pwr_red, 20*2);
        
        l4c_l1_max_tx_pwr_red_req((kal_uint8)L4C_SRC, 1, KAL_TRUE, (kal_uint8***)gsm_tx_pwr_reduction_tbl, KAL_TRUE, (kal_uint8**)umts_tx_pwr_reduction_tbl);
    }

#if defined(__AT_BACKUP_DATA_SUPPORT__)
    else if(ilm_ptr->msg_id == MSG_ID_NVRAM_SDS_CNF)
    {
        l4c_nvram_sds_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif

#ifndef __MTK_TARGET__ //RMMI_UT ---
    else if (ilm_ptr->msg_id == MSG_ID_ATCI_UT_RMMI_INPUT_STRING)
    {
        l4c_atci_ut_rmmi_input_string_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif //--- RMMI_UT

#if defined(__UMTS_FDD_MODE__)
    else if(ilm_ptr->msg_id == MSG_ID_L4CUL1_EM_TST_CONTROL_CNF)
    {
        l4c_3g_rf_test_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif

    else if (ilm_ptr->msg_id == MSG_ID_L4CL1_QUERY_CAL_DATA_DL_STATUS_CNF)
    {
        l4c_l1_query_cal_data_dl_status_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    else if (ilm_ptr->msg_id == MSG_ID_MEDIA_IN_PROC_CALL_CNF)
    {
        l4c_med_in_proc_call_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif
    else if (ilm_ptr->msg_id == MSG_ID_L4C_MEAS_INFO_REQ) //Thermal
    {
        l4c_meas_info_req_hdlr();
    }
#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    else if (ilm_ptr->msg_id == MSG_ID_L4C_RRCE_PCH_TXRX_IND)
    {
        l4c_rrce_pch_txrx_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif
#if defined(__REGIONAL_PHONE__)
    else if (ilm_ptr->msg_id == MSG_ID_L4C_REGIONAL_PHONE_MODE_REQ)
    {
        /* read MCC MNC from SIM at the beginning of boot-up */
        CCCI_COMMON_ILM_4B *param_ptr = (CCCI_COMMON_ILM_4B*)(ilm_ptr->local_para_ptr);
        
        l4c_regional_phone_mode_req(param_ptr->W0);
    }
    else if (ilm_ptr->msg_id == MSG_ID_SIM_READ_IMSI_CNF)
    {
        /* read MCC MNC from SIM at the beginning of boot-up */
        l4c_sim_read_imsi_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* __REGIONAL_PHONE__ */
    else
    {
        /* to L4A dispatcher */
    #ifdef __MOD_L4A__
        if(ilm_ptr->msg_id>=MSG_ID_L4A_CODE_BEGIN && ilm_ptr->msg_id<MSG_ID_L4A_CODE_END)
            l4a_recvmsg(ilm_ptr);
        else
    #endif 
    //agps_ipc begin
    #if defined(__ANDROID_RIL_SUPPORT__)
        if (ilm_ptr->msg_id >= IPC_MSG_ID_INVALID_TYPE)
        {
        #if defined(__AGPS_CONTROL_PLANE__)
            if (ilm_ptr->msg_id >= IPC_MSG_ID_MMI_AGPS_BEGIN && ilm_ptr->msg_id <= IPC_MSG_ID_MMI_AGPS_END)
            {
                kal_brief_trace(TRACE_INFO, INFO_REC_IPC_MSG, ilm_ptr->msg_id);
                l4c_agps_ipc_dispatch(ilm_ptr);
            }
            else
        #endif
        #if defined(__NBR_CELL_INFO__)
            if (ilm_ptr->msg_id >= IPC_MSG_ID_MMI_NBR_BEGIN && ilm_ptr->msg_id <= IPC_MSG_ID_MMI_NBR_END)
            {
                if (ilm_ptr->msg_id == IPC_MSG_ID_L4C_NBR_CELL_INFO_REG_REQ)
                {
                     l4c_nbr_cell_info_reg_req_hdlr(MOD_CCCI_HISR, ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
                }
                else if (ilm_ptr->msg_id == IPC_MSG_ID_L4C_NBR_CELL_INFO_DEREG_REQ)
                {
                    l4c_nbr_cell_info_dereg_req_hdlr(MOD_CCCI_HISR, ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
                }
            }
            else
        #endif
            {
                // unknow IPC message
                kal_brief_trace(TRACE_ERROR, WARNING_L4C_ERROR);
            }
        }
        else
    #endif /* defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__) */
    //agps_ipc end
        {
            customer_l4c_msghdlr(ilm_ptr);
        }

        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src /* RMMI_SRC */ );
        if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
        {
            if (rmmi_ptr->is_ucm_action == KAL_FALSE)
                //mtk01616_071021: Previous ucm cmd is not finished, need not to check multi-cmd after processing MMI message
            {
                kal_brief_trace(TRACE_INFO, RMMI_PROCESS_MULTI_CMD_AFTER_PROCESS_MMI_MSG, rmmi_ptr->is_ucm_action);
                rmmi_process_multi_cmd(cid);
            }
        }
    }

    for (i = LMMI_SRC; i < MAX_SOURCE_NUM; i++)
    {
        if ((l4c_ptr->cc_current_action[i] != L4C_NO_ACTION) || (l4c_ptr->cc_state[i] != L4C_COMMAND_STATE))
        {
            kal_brief_trace(TRACE_STATE, STATE_L4C_CC_ACTION, i, l4c_ptr->cc_state[i], l4c_ptr->cc_current_action[i]);
        }
    }

    if (l4c_ptr->ss_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_SS_ACTION, l4c_ptr->ss_user, l4c_ptr->ss_current_action);
    }

    for (i = LMMI_SRC; i < MAX_SOURCE_NUM; i++)
    {
        if (l4c_ptr->sms_current_action[i] != L4C_NO_ACTION)
        {
            kal_brief_trace(TRACE_STATE, STATE_L4C_SMS, i,  l4c_ptr->sms_current_action[i]);
        }
    }
    /*
    if (l4c_ptr->ps_abm_current_action != L4C_NO_ACTION)
    {
        kal_trace(TRACE_STATE, STATE_L4C_PS_ABM, l4c_ptr->ps_abm_current_action);
    }
    */ //mtk02285, 201003, 6251_ram
    if (l4c_ptr->eq_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_EQ_ACTION, l4c_ptr->eq_user, l4c_ptr->eq_current_action);
    }

    if (l4c_ptr->rac_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_RAC_ACTION, l4c_ptr->rac_user, l4c_ptr->rac_current_action);
    }

    if (l4c_ptr->smu_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_SMU_ACTION, l4c_ptr->smu_user, l4c_ptr->smu_current_action);
    }
#ifdef __MOD_TCM__
    if (l4c_ptr->tcm_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_TCM_ACTION, l4c_ptr->tcm_user, l4c_ptr->tcm_current_action);
    }
#endif //mtk02285, 201003, 6251_ram
    if (l4c_ptr->phb_current_action != L4C_NO_ACTION)
    {
        kal_brief_trace(TRACE_STATE, STATE_L4C_PHB_ACTION, l4c_ptr->phb_user, l4c_ptr->phb_current_action);
    }

    for (i = LMMI_SRC; i < MAX_SOURCE_NUM; i++)
    {
        if (l4c_ptr->parameter[i].length != 0)
        {
            kal_brief_trace(TRACE_INFO, INFO_PARA, i, l4c_ptr->parameter[i].length);
        }
        if (l4c_ptr->cc_parameter[i].length != 0)
        {
            kal_brief_trace(TRACE_GROUP_1, L4C_CC_PARA, i, l4c_ptr->cc_parameter[i].length);
        }
    }

    if (l4c_ptr->ss_parameter.length != 0)
    {
        kal_brief_trace(TRACE_GROUP_1, L4C_SS_PARA, l4c_ptr->ss_parameter.length);
    }

#ifdef __SAT__
    if (l4c_ptr->cc_peer_buf.length != 0)
    {
        kal_brief_trace(TRACE_GROUP_1, CC_PEER_BUF, l4c_ptr->cc_peer_buf.length);
    }
#endif
    
    if ((l4c_ptr->retry_cc != KAL_FALSE) || (l4c_ptr->retry_ss != KAL_FALSE))
    {
        kal_brief_trace(
            TRACE_INFO,
            INFO_RETRY_FLAG,
            l4c_ptr->retry_cc,
            l4c_ptr->retry_ss,
            l4c_ptr->retry_count,
            l4c_ptr->retry_src_id);
    }

    kal_brief_trace(TRACE_STATE, STATE_L4C_CFUN_STATE, l4c_ptr->cfun_state);

    //hogan port and src related debug info 070308
    #ifdef __GEMINI__
    sim_setting = RMMI_COMM_PTR->sim_uart_setting;
    #endif
    kal_brief_trace(TRACE_INFO, INFO_L4C_UART_PORT, PS_UART_PORT, sim_setting);

#ifdef __CSD_FAX__
    kal_brief_trace(TRACE_GROUP_1, FAX_SRC_ID_INFO, l4c_ptr->fax_src_id);
#endif

#ifdef __GEMINI_3G_SWITCH__
    kal_brief_trace(TRACE_INFO, INFO_L4C_CURRENT_SIM_MAPPING_FOR_3G_SWITCH, L4C_PTR->cur_3g_switch_map);
#endif

    for (cid = 0; cid < RMMI_MAX_CHANNEL_NUMBER; cid++)
    {
        if ((RMMI_COMM_PTR->port[cid] != uart_port_null) && (RMMI_COMM_PTR->source[cid] != INVALID_SRC))
        {
            sim_interface_enum simid = SIM1;
            #ifdef __GEMINI__
            simid = RMMI_COMM_PTR->rmmi_uart_owner[cid];
            #endif
            kal_brief_trace(TRACE_GROUP_7, RMMI_CID_PORT_INFO, 
                        cid, RMMI_COMM_PTR->port[cid], 
                        RMMI_COMM_PTR->source[cid], simid);
        }
    }
    return;
}

