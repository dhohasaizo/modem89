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
 * Filename:
 * ---------
 * RMMI_MAIN.C
 *
 * Description:
 * ------------
 *   This file contains the main function of MOD_ATCI.
 *
 * Author:
 * -------
 * -------
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "uart_sw.h"
#include "drv_msgid.h"
#include "l4_msgid.h"
#include "cmux_msgid.h"
#if defined(__BT_SUPPORT__)
#include "bluetooth_msgid.h"
#endif
#ifdef __IRDA_SUPPORT__
#include "ircomm_msgid.h"
#endif
#include "ps_public_l4_msgid.h"
#include "nvram_msgid.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"


//#include "mcd_l4_common.h"

#ifdef __MOD_UEM__
//#include "custom_em.h"
#endif 

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4_trc.h"
#include "rmmi_parser.h"
//#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_context.h"
//#include "layer4_context.h"
//#include "l4_trc.h"
//#include "rmmi_parser.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4_trc.h"
#include "atci_trc.h"

#include "rmmi_parser.h"

#include "rmmi_msghdlr.h"
#ifndef __MTK_TARGET__
#include "l4c_tst.h"
#endif 

#include "rmmi_gas.h"
#ifdef __ECALL_SUPPORT__
#include "med_msgid.h"
#endif




/*****************************************************************************
 * FUNCTION
 *  rmmi_main
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_main(ilm_struct *ilm_ptr)
{
    if (ilm_ptr->msg_id == MSG_ID_UART_READY_TO_WRITE_IND)
    {
        rmmi_uart_rtw_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_UART_READY_TO_READ_IND)
    {
        rmmi_uart_rtr_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_UART_ESCAPE_DETECTED_IND)
    {
        rmmi_uart_escape_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_UART_PLUGOUT_IND)
    {
        rmmi_uart_plugout_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#if defined(__DT_SUPPORT__) || defined(__GEMINI__)    
    else if (ilm_ptr->msg_id == MSG_ID_ATCIDT_UART_TRANSFER_REQ)
    {
        rmmi_uart_transfer_req_hdlr(ilm_ptr->src_mod_id, ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_ATCIDT_UART_TRANSFER_CNF)
    {
        rmmi_uart_transfer_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_ATCIDT_UART_TRANSFER_IND)
    {
        rmmi_uart_transfer_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif    
#if defined(__CMUX_MODEM_STATUS_SUPPORT__)	 
    else if (ilm_ptr->msg_id == MSG_ID_UART_DSR_CHANGE_IND)
    {
        rmmi_uart_dsr_change_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }	
#endif /* __CMUX_MODEM_STATUS_SUPPORT__ */		
#ifdef __CMUX_SUPPORT__
    else if (ilm_ptr->msg_id == MSG_ID_CMUX_DLC_CONNECT_IND)
    {
        rmmi_uart_cmux_dlc_connect_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_CMUX_CLOSE_DOWN_IND)
    {
        rmmi_uart_cmux_close_down_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* __CMUX_SUPPORT__ */ 
#if defined(__BT_SUPPORT__)
    else if (ilm_ptr->msg_id == MSG_ID_BT_SPP_CONNECT_IND)
    {
        rmmi_bt_spp_conncet_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_HF_CONNECT_IND)
    {
        rmmi_bt_hf_conncet_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_HFG_SLC_FINISH_IND)
    {
        rmmi_bt_hf_slc_finish_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_RESET_REQ_IND)
    {
        rmmi_uart_bt_reset_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_L4C_AT_GENERAL_CNF)
    {
        rmmi_bt_l4c_at_general_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_PCM_LB_CNF)
    {
        rmmi_bt_pcm_lb_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    // add by stanley: 2006-0721
    else if (ilm_ptr->msg_id == MSG_ID_BT_L4C_TEST_CMD_CNF)
    {
        rmmi_bt_test_cmd_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_GET_BD_ADDR_CNF)
    {
        rmmi_bt_get_bd_addr_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_BT_ADV_TEST_MODE_CNF) //from MMI BT
    {
        rmmi_bt_adv_test_mode_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif /* defined(__BT_SUPPORT__) */ 
#ifdef __IRDA_SUPPORT__
    else if (ilm_ptr->msg_id == MSG_ID_IRCOMM_CONNECT_IND)
    {
        ircomm_connect_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_IRCOMM_DISCONNECT_IND)
    {
        ircomm_disconnect_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }

#endif /* __IRDA_SUPPORT__ */ 

#ifdef __GATI_ENABLE__
    else if(ilm_ptr->msg_id == MSG_ID_GATI_DATA_RSP){
        gati_data_rsp_hdlr(ilm_ptr->src_mod_id);
    }
    else if(ilm_ptr->msg_id == MSG_ID_GATI_DATA_REQ){
        gati_data_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->src_mod_id);
    }
    else if(ilm_ptr->msg_id == MSG_ID_GATI_CTRL_REQ){
        gati_ctrl_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->src_mod_id);
    }
    else if(ilm_ptr->msg_id == MSG_ID_GATI_SWITCH_MODE_REQ){
        gati_switch_mode_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->src_mod_id);
    }
#endif
#ifdef __GAS_SUPPORT__ 
    else if(ilm_ptr->msg_id == MSG_ID_GAS_DATA_REQ){
        gas_data_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->src_mod_id);
    }
#endif 

#ifdef SYNCML_DM_SUPPORT
    else if(ilm_ptr->msg_id == MSG_ID_RMMI_LOCK_AT_CMD_REQ)
    {
        rmmi_dmui_lawmo_cmd_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_ATCIDT_FORCE_TRANSFER_CNF)
    {
        rmmi_force_tansfer_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
#endif
    else if(ilm_ptr->msg_id == MSG_ID_NVRAM_READ_CNF) 
    {
        rmmi_nvram_read_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_UART_PLUGIN_IND)
    {
        rmmi_uart_plugin_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    #if defined(__MMI_FMI__) && defined(__GEMINI__)
    else if(ilm_ptr->msg_id == MSG_ID_MMI_ATCI_MASTER_SIM_CHANGE_REQ)
    {
        rmmi_master_sim_change_req(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    #endif
#if defined(__MESSAGE_BASED_AT_SUPPORT__)
    else if(ilm_ptr->msg_id == MSG_ID_RMMI_REGISTER_CHANNEL_REQ) 
    {
        rmmi_register_channel_req_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr, ilm_ptr->src_mod_id);
    }
    else if(ilm_ptr->msg_id == MSG_ID_RMMI_EXE_AT_REQ) 
    {
        rmmi_execution_at_req_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr, ilm_ptr->src_mod_id);
    }
#endif
#ifdef __ECALL_SUPPORT__
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_MONITOR_CNF) 
    {
        rmmi_media_aud_emsd_monitor_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_SET_CNF) 
    {
        rmmi_media_aud_emsd_set_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_PUSH_CNF) 
    {
        rmmi_media_aud_emsd_push_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_PULL_IND) 
    {
        rmmi_media_aud_emsd_pull_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_HACK_IND) 
    {
        rmmi_media_aud_emsd_hack_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_SYNC_IND) 
    {
        rmmi_media_aud_emsd_sync_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_LACK_IND) 
    {
        rmmi_media_aud_emsd_lack_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
#endif /*__ECALL_SUPPORT__*/
#ifdef __ECALL_PSAP_SUPPORT__
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_PSAP_MONITOR_CNF) 
    {
        rmmi_media_aud_emsd_psap_monitor_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_PSAP_PULL_CNF) 
    {
        rmmi_media_aud_emsd_psap_pull_cnf_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_EMSD_PSAP_DATA_IND) 
    {
        rmmi_media_aud_emsd_psap_data_ind_hdlr(ilm_ptr->local_para_ptr,  ilm_ptr->peer_buff_ptr);
    }
#endif 
#ifndef __MTK_TARGET__ //RMMI_UT ---
    else if (ilm_ptr->msg_id == MSG_ID_ATCI_UT_RMMI_INPUT_STRING)
    {
        l4c_atci_ut_rmmi_input_string_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
#endif //--- RMMI_UT
    /*else  // for test, it could be used to test AT command through this interfaces and tst inject string
    {
        tp_ps_message_handler(ilm_ptr);
    }*/
}

