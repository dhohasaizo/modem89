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
 * RMMI_MSGHDLR.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intended to handle the messages sent to MOD_ATCI.
 *
 * Author:
 * -------
 * -------
 *==============================================================================
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *****************************************************************************/

#define RMMI_MSGHDLR_C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "kal_release.h"
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "stack_buff_pool.h"
//#include "ctrl_buff_pool.h"
#include "sysconf_statistics.h"
#include "rmmi_sio.h" //mtk02285, temp 1104

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"
//#include "uart_sw.h"
#include "dcl.h"

//#include "mcd_l4_common.h"
 
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l4_trc.h"
#include "atci_trc.h"   
//#include "tst_sap.h"
//#include "l4c_aux_struct.h"
#ifdef __MOD_SMU__
#include "ps2sat_struct.h"
#endif 
#ifdef __MOD_SMU__
//#include "l4c2smu_struct.h"
#endif 

#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
 
//mtk00468 add

#ifdef __MOD_NVRAM__
//#include "nvram_data_items.h"
//#include "nvram_user_defs.h"
//#include "nvram_struct.h"
//#include "nvram_enums.h"
#endif /* __MOD_NVRAM__ */ 
#ifdef __MOD_RAC__
//#include "mcd_l3_inc_struct.h"

#endif /* __MOD_RAC__ */ 

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"
//#include "l3_inc_local.h"
 
#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
//#include "l4c2tcm_struct.h"
//#include "l4c2tcm_func.h" // __PPP_TYPE_PDP_DIALUP_SUPPORT__
#include "l4c_gprs_cmd.h" // __PPP_TYPE_PDP_DIALUP_SUPPORT__
#endif /* __MOD_TCM__ */ 
#ifdef __MOD_UEM__
//#include "l4c2uem_struct.h"
//#include "med_struct.h"
//#include "device.h"
//#include "uem_proc_cmd.h"
//#include "l4c_eq_cmd.h"
#endif /* __MOD_UEM__ */ 

#ifdef __UE_SIMULATOR__
#include "l4c2uegw_struct.h"
#endif

#ifdef __IRDA_SUPPORT__
#include "app2ircomm_struct.h"
#endif 

//#ifdef __TCPIP__
//#include "abm_soc_enums.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
//#endif

#include "rmmi_parser.h"
#include "rmmi_msghdlr.h"
#include "rmmi_analyzer.h"
#include "rmmi_utility.h"
#include "l4c_utility.h"
#include "l4c_cc_cmd.h"

#ifdef __SAT__
#include "sat_def.h"
extern kal_bool l4c_sat_run_at_command_res(sat_run_at_command_res_struct *local_ptr);
#endif 

#include "cmux_struct.h"
#include "dcl.h"

#include "csmcc_atfunc.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"

//#include "l4c2smsal_struct.h"
//#include "keypad_sw.h"
//#include "l4c2phb_enums.h" 
//#include "l4c2phb_struct.h"
#include "lmmi_ind.h"

#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"
#include "rmmi_ind.h"

//#include "l4c_ss_parse.h"
//#include "smsal_l4c_enum.h"
//#include "l4c2csm_ss_struct.h"
#include "lmmi_rsp.h"

//#include "rmmi_rsp.h"
#include "csmcc_atfunc.h"
#include "l4c_nw_cmd.h"
#include "rmmi_rspfmttr.h"

//#include "l4c2rac_struct.h"
//#include "syscomp_config.h"
#include "task_config.h"

//#include "rmmi_gati.h"  

#include "l4c2dt_struct.h" 
#include "rmmi_struct.h"
//#include "l4a.h"

//#include "custom_nvram_sec.h"

#ifdef __CMUX_SUPPORT__
#include "cmux_public_def.h"
#endif 

#if defined(__TC01__)
#ifdef __RMMI_EXTEND_CUSTOM_CMD__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif

//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "fs_func.h"
#include "fs_errcode.h"
//#include "mmi_msg_struct.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "cmux_vp_num.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"

#include "rmmi_root.h"
#include "rmmi_sio.h"

#include "md_sap.h"
#include "drv_msgid.h"
#include "l4_msgid.h"
#if defined(__BT_SUPPORT__)
#include "bluetooth_msgid.h"
#endif
#include "ps_public_l4_msgid.h"

#if defined(__BT_SUPPORT__)
#include "bluetooth_struct.h"
#include "che_api.h"
/* for pts V2.1.0.4 */
/* cannot update indicators to remote bluetooth headset while HFP is connected */
/* indicators shall be retrieved by remote HF AT+CIND? */
/* so for pts V2.1.0.4, host will not udpate indicators while HFP is just connected */
extern unsigned char g_enable_pts_test; /* 0: disable, 1: enable */
extern kal_char* release_verno(void);
#define SEQUENCE_NUM_0_LENGHT 16
#define SEQUENCE_NUM_1_LENGHT 16 
#define SEQUENCE_NUM_2_LENGHT 16 
#endif /* defined(__BT_SUPPORT__) */ 

#ifdef __ECALL_SUPPORT__
#include "med_struct.h"
#endif

extern UART_PORT PS_UART_PORT;
extern kal_bool stack_update_sys_statistics(stack_statistics_struct *prev_stats);
extern void rmmi_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause);
extern kal_uint8 cmux_get_channel_def(kal_uint8 channel);

#ifdef UART_ENABLE
//extern kal_uint8 send_Rxilm[2];
#endif 

//RMMI_UT ---
#define LOCAL_ATCI_MAX_UT_IO_LENGTH 1024

typedef struct
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    kal_uint8 src_id;
	kal_uint8 port;
    kal_uint8 string[LOCAL_ATCI_MAX_UT_IO_LENGTH];
	kal_bool stuff;
} local_atci_ut_rmmi_output_string_struct; // MSG_ID_ATCI_UT_RMMI_IO_STRING
//--- RMMI_UT

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_rtw_ind_hdlr
 * DESCRIPTION
 *  This is rmmi_uart_rtw_ind_hdlr function of L4C module.
 *  is called when receive uart ready to write indication
 *  and copy data from rmmi output queue to uart if any
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_rtw_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint16 actual_write;
    kal_uint16 length;
    kal_uint8 cid;
    UART_PORT port;
    uart_ready_to_write_ind_struct *msg_ptr = NULL;
    
    msg_ptr = (uart_ready_to_write_ind_struct*) local_para_ptr;
    port = msg_ptr->port;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_UART_RTW_IND_HDLR_ENTRY);
    cid = rmmi_port_2_cid((kal_uint8) port);
    ASSERT(cid != 0xff);
    RMMI_PTR->current_src = rmmi_cid_2_srcid(cid);
    RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);

    if (RMMI_COMM_PTR->uart_output_queue[cid].length == 0
        #if defined(__MMI_FMI__)
        && RMMI_PTR->screenshot_pending == KAL_FALSE
        #endif
        )
    {
        return;
    }
    else
    {

        length = RMMI_COMM_PTR->uart_output_queue[cid].length;
        actual_write = rmmi_uart_send_data((kal_uint8) port);

        if (actual_write < length)
        {
            RMMI_COMM_PTR->uart_stop_send_flag |= (0x01 << cid);
        }
        else
        {
        #ifdef __GATI_ENABLE__
                /***********************************************
                 * When GATI enable, if actual_write==length of the uart output,
                 * we should check if there is any module needed to send 
                 * RTW to them 
                 ***********************************************/
            if (actual_write == length)
            {
                gati_send_rtw_ind(RMMI_PTR->current_src, MAX_DATA_QUEUE_LENGTH);
            }
        #endif /* __GATI_ENABLE__ */ 
        
        #if defined(PLUTO_MMI)
        if(RMMI_PTR->screenshot_pending == KAL_TRUE)
        {
            l4c_eq_screen_shot_output();
        }
        #endif /* defined(PLUTO_MMI) */
        }
        return;
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_rtr_ind_hdlr
 * DESCRIPTION
 *  This is rmmi_uart_rtr_ind_hdlr function of L4C module.
 *  is called when receive uart ready to read indication
 *  and copy data from uart to rmmi input queue
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_rtr_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    uart_ready_to_read_ind_struct *msg_ptr = NULL;
    kal_uint8 port = (kal_uint8)PS_UART_PORT;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_UART_RTR_IND_HDLR_ENTRY);

    if (local_para_ptr != NULL)
    {
        msg_ptr = (uart_ready_to_read_ind_struct*) local_para_ptr;

        #if defined(__MTK_TARGET__) && defined(__RMMI_UT__)
        #ifdef __SMART_PHONE_MODEM__
            if ( msg_ptr->port == uart_port_at_ccci ) return;
        #endif /*__SMART_PHONE_MODEM__*/       
        #endif /*defined(__MTK_TARGET__) && defined(__RMMI_UT__)*/

        port = (kal_uint8) msg_ptr->port;
    }

    rmmi_root_select_context(port);
    rmmi_read_from_uart(port);
    
    return;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_uart_plugin_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_plugin_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    uart_plugin_ind_struct *msg_ptr = NULL;

    // PS_UART_PORT is usb and plug-in, so use cid =0
    msg_ptr =(uart_plugin_ind_struct*) local_para_ptr;
#ifdef __MODEM_CARD__
	RMMI_UART_CtrlDCD(msg_ptr->port, (IO_level)0, RMMI_UART_GetOwnerID(msg_ptr->port)); //mtk02285, 1104 temp
#endif    
    rmmi_root_plugin_uart((kal_uint8)msg_ptr->port);

}

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_plugout_ind_hdlr
 * DESCRIPTION
 *  This is rmmi_uart_rtr_ind_hdlr function of L4C module.
 *  is called when receive uart ready to read indication
 *  and copy data from uart to rmmi input queue
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_plugout_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    uart_plugout_ind_struct *msg_ptr = NULL;
    uart_plugout_ind_struct * msg_ptr2 = NULL;
    kal_uint8 cid;
    #if defined(__MMI_FMI__) || defined(__BT_SUPPORT__)
    kal_uint8 src_id;
    #endif
    kal_bool get_uart_control = KAL_TRUE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;

    msg_ptr = (uart_plugout_ind_struct*) local_para_ptr;

    rmmi_root_select_context((kal_uint8) msg_ptr->port);

    cid = rmmi_port_2_cid((kal_uint8) msg_ptr->port);
    if (cid == 0xff)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    
    #if defined(__MMI_FMI__) || defined(__BT_SUPPORT__)
    src_id = rmmi_cid_2_srcid(cid);
    #endif
    
#if defined(__MOD_TCM__) && defined(__PS_DIALUP__)
    /*
     * MAUI_02532440 mtk02126
     * 1.we refine l4c_ps_disc_ppp_dialup_req 
     * to handle the uart plugout during escape and other general case.
     * The original __PPP_TYPE_PDP_DIALUP_SUPPORT__ can be handled, too.
     * Therefore, we can remove the code for __PPP_TYPE_PDP_DIALUP_SUPPORT__.
     * 2.we move the handling code to here because we need to handle the plugout indication
     *   regardless the RMMI_PTR->state
     */
    /* 
     * We only deactivate the PDP context 
     * while the cid of data_src_id and the cid of plugout indication is the same.
     */
    if (INVALID_PDP_CONTEXT_ID != l4c_ps_dialup_get_cid((kal_uint16)msg_ptr->port))
    {
       //l4c_ps_disc_ppp_dialup_req(L4C_SRC, data_src_id, L4C_PTR->cid_used_by_ppp, KAL_FALSE);
       l4c_ps_dialup_disc_req(L4C_SRC, l4c_ps_dialup_get_cid((kal_uint16)msg_ptr->port), KAL_FALSE);
       //2011-12-05: MAUI_03074521 has some flaw - the escape port maybe not the current unplug one
       //            Ex. BT SPP connected; USB dialup and escaped; BT SPP PLUGOUT
       if (rmmi_cid_2_srcid(cid) == RMMI_PTR->online_cmd_state_src_id)
       {
           //If PLUGOUT happens during escape time, then UART already belongs to ATCI.
           //So L4C could take care of the plugout handling directly
           //kal_print("????????????????????????????????");
           get_uart_control = KAL_TRUE;
       }
       else
       {
           //It is not an escape scenario. It might be race condition that PPP could not handle L4CPPP_ACT_REQ in time
           //PPP could send L4CPPP_ACT_CNF failure back later
           get_uart_control = KAL_FALSE;       
       } //MAUI_03074521, mtk02285, 20111108
    }            
#endif /* defined(__MOD_TCM__) && defined(__PS_DIALUP__) */    

    #if defined(__MMI_FMI__)
    /* For AT+ECSCN, if output data and plugout happens, close file and clear related flags */
    if((rmmi_ptr->current_src == src_id) && (rmmi_ptr->screenshot_pending == KAL_TRUE))
    {
        kal_int32 ret_v;
        if(rmmi_ptr->screenshot_fd != NULL)
        {
            ret_v = FS_Close(rmmi_ptr->screenshot_fd);
            if(ret_v <= FS_NO_ERROR)
            {
                kal_brief_trace(TRACE_WARNING, WARNING_EQ_FS_RETURN_ERROR, 3, ret_v);
            }
            rmmi_ptr->screenshot_pending = KAL_FALSE;
            rmmi_ptr->screenshot_fd = NULL;
            rmmi_ptr->screenshot_index = 0;        
        }
    }    
    #endif /* defined(__MMI_FMI__) */
    if (msg_ptr->port == rmmi_comm_ptr->transfer.port  && rmmi_comm_ptr->transfer.dest_mod != MOD_NIL)
    {
       // transfer ongoing, relay plugout indication
        msg_ptr2= (uart_plugout_ind_struct *) 
	                construct_local_para(
	                sizeof(uart_plugout_ind_struct),
	                TD_RESET);
        msg_ptr2->port = msg_ptr->port;  
        rmmi_send_ilm(rmmi_comm_ptr->transfer.dest_mod, MSG_ID_UART_PLUGOUT_IND, 1, msg_ptr2, NULL);             
        get_uart_control = KAL_FALSE;
    }

    if (rmmi_ptr->ath_for_dialup == msg_ptr->port)
    {
        rmmi_clear_ath_for_dialup_hdlr();		
    }

    if (msg_ptr->port >= start_of_virtual_port)
    {
        if (cid != 0)
        {
            #if defined(__BT_SUPPORT__)
            if (src_id == rmmi_comm_ptr->rmmi_hf_src)    // Both SPP and HFP will send plugout indication, use srcid to distinguish              
            {
                kal_brief_trace(TRACE_INFO, INFO_CLEAR_HF_URC_REPORT_FLAG, cid, src_id);
                rmmi_comm_ptr->hf_urc_report_flag = KAL_FALSE;       //mtk01616_070722

                rmmi_comm_ptr->rmmi_hf_src = INVALID_SRC;
            }

            #endif /* defined(__BT_SUPPORT__) */ 
        }
        else
        {   
            //can not find this port, maybe lower layer send plugout_ind twice.
            //ASSERT(0);
        }
    }
    else
    {
        // USB port
    }

    if (get_uart_control == KAL_TRUE)
    {
        /* Here, we use PS_UART_PORT instead of uart_port_value.
         * This is because when uart_port_value is UART,
         * we will switch and close PS_UART_PORT later
         * in the l4cuem_usbdetect_ind
         */
        if (msg_ptr->port != PS_UART_PORT)
        {
            if (RMMI_UART_is_usb_active(msg_ptr->port) == KAL_FALSE)
            {
                RMMI_UART_Close(msg_ptr->port, MOD_ATCI);
                rmmi_root_plugout_uart((kal_uint8)msg_ptr->port);
            }
        }
    }
    else
    {
        /* we will close UART and do root_plugotu later when
          * other modules transfer UART control back to L4C
          */
        rmmi_comm_ptr->uart_plugout |= 0x01 << cid;
    }
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_escape_ind_hdlr
 * DESCRIPTION
 *  This is rmmi_uart_escape_ind_hdlr function of L4C module.
 *  is called when receive uart escape indication
 *  and read out the escape status
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_escape_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    /* read out the escape char */
#ifdef UART_ENABLE
    UART_PORT port;
    kal_uint8 tmp_data, status;
    uart_escape_detected_ind_struct *msg_ptr = NULL;

    msg_ptr = (uart_escape_detected_ind_struct*) local_para_ptr;
    port = msg_ptr->port;
    RMMI_UART_GetBytes(port, &tmp_data, 1, &status, MOD_ATCI);
#endif /* UART_ENABLE */ 
    return;
}


#if defined(__CMUX_MODEM_STATUS_SUPPORT__)	 
/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_dsr_change_ind_hdlr
 *
 * DESCRIPTION
 * handler of UART_DSR_CHANGE_IND
 *
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_dsr_change_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    uart_dsr_change_ind_struct *msg_ptr = NULL;
    kal_uint8 cid;
    kal_uint8 src_id;
    kal_bool ret_val = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (uart_dsr_change_ind_struct*) local_para_ptr;
    if (msg_ptr->port != uart_port_null)
    {
        cid = rmmi_port_2_cid((kal_uint8) msg_ptr->port);
        src_id = rmmi_cid_2_srcid(cid);

	 //mtk01616_090203: to prevent return OK
        ret_val = l4c_cc_exe_chld_req(src_id, CSMCC_REL_ALL,255);

        //check if CRSS_REQ is really sent
        if(ret_val == KAL_TRUE && l4c_ptr->cc_current_action[src_id] == ATH_EXE)
        {
            RMMI_COMM_PTR->isDSRAbort_flag |= (0x1 << cid);
        }		 
    }

    return;
}
#endif /* __CMUX_MODEM_STATUS_SUPPORT__ */


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_send_data
 * DESCRIPTION
 *  This is rmmi_uart_send_data function of L4C module.
 *  pass data from rmmi output queue to uart
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  count    number of bytes sent to uart
 *****************************************************************************/
kal_uint16 rmmi_uart_send_data(kal_uint8 port)
{
    kal_uint16 result = 0;
    kal_uint16 temp;
    kal_uint16 len;
    kal_uint8 cid = rmmi_port_2_cid(port);
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;    
#if (!defined(__MTK_TARGET__) && defined(__RMMI_UT__)) || defined(__RMMI_IO_LOGGING__) //MAUI_02124960, mtk02285, 20091208
    kal_uint16 result2;
    kal_uint8* str_write_ptr = NULL;
    kal_uint16 str_remain_space = LOCAL_ATCI_MAX_UT_IO_LENGTH;
	kal_uint16 part_write_len = 0;
    atci_ut_rmmi_output_string_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    param_ptr = (atci_ut_rmmi_output_string_struct*) construct_local_para((kal_uint16) sizeof(atci_ut_rmmi_output_string_struct), TD_RESET);
	str_write_ptr = param_ptr->string;
	param_ptr->src_id = RMMI_PTR->current_src;
    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(RMMI_PTR->current_src));
	if (RMMI_PTR->current_src != RMMI_ALL)
	{
    	ASSERT(param_ptr->port == port);
	}
	else
	{
		param_ptr->port = port;
	}
#endif

#ifndef UART_ENABLE
    FILE *output;
#endif 
    ASSERT(cid != 0xff);
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_UART_SEND_DATA_ENTRY);

    len = rmmi_comm_ptr->uart_output_queue[cid].length;

    if ((rmmi_comm_ptr->uart_output_queue[cid].head + len) > MAX_DATA_QUEUE_LENGTH)
    {
        temp = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_output_queue[cid].head;

        if (temp!=0) 
        {
        #if (!defined(__MTK_TARGET__) && defined(__RMMI_UT__)) || defined(__RMMI_IO_LOGGING__)
    		result2 = part_write_len = (temp < str_remain_space)?(temp):(str_remain_space);
    	    kal_mem_cpy(str_write_ptr, 
    	                &(rmmi_comm_ptr->uart_output_queue[cid].data[rmmi_comm_ptr->uart_output_queue[cid].head]), 
    	                part_write_len);
    		str_write_ptr += part_write_len;
    		str_remain_space -= part_write_len;	
        #endif    
        #if defined(UART_ENABLE) && !defined(__RMMI_UT__)
            result = RMMI_UART_PutBytes(
                        (UART_PORT) port,
                        &(rmmi_comm_ptr->uart_output_queue[cid].data[rmmi_comm_ptr->uart_output_queue[cid].head]),
                        temp,
                        MOD_ATCI);
        #elif !defined(__RMMI_UT__)/* UART_ENABLE */ 
            output = fopen("c:\\mcu_out.log", "a");
            result = fprintf(output, "%s", rmmi_comm_ptr->uart_output_queue[cid].data + rmmi_comm_ptr->uart_output_queue[cid].head);
    
        #endif /* UART_ENABLE */
        }

        len -= temp;

	#if (!defined(__MTK_TARGET__) && defined(__RMMI_UT__)) || defined(__RMMI_IO_LOGGING__)
        if (result2 < temp)
        {
            ASSERT(0); // fake PutBytes should always succeed
        }
		part_write_len = (len < str_remain_space)?(len):(str_remain_space);
	    kal_mem_cpy(str_write_ptr, 
	                rmmi_comm_ptr->uart_output_queue[cid].data, 
	                part_write_len);
		str_write_ptr += part_write_len;
		str_remain_space -= part_write_len;
		result2 += part_write_len;
    #endif
    #if defined(UART_ENABLE) && !defined(__RMMI_UT__)
        if (result < temp)
        {
            rmmi_comm_ptr->uart_output_queue[cid].head += result;
            rmmi_comm_ptr->uart_output_queue[cid].length -= result;
            return result;
        }
        result += RMMI_UART_PutBytes((UART_PORT)port, rmmi_comm_ptr->uart_output_queue[cid].data, len, MOD_ATCI);
    #elif !defined(__RMMI_UT__) /* UART_ENABLE */ 
        result += fprintf(output, "%s", rmmi_comm_ptr->uart_output_queue[cid].data);
        fclose(output);
    #endif /* UART_ENABLE */ 

    #if defined(__RMMI_UT__) || defined(__RMMI_IO_LOGGING__)
		result = result2;
    #endif

        rmmi_comm_ptr->uart_output_queue[cid].head =
            (rmmi_comm_ptr->uart_output_queue[cid].head + result) % MAX_DATA_QUEUE_LENGTH;
        rmmi_comm_ptr->uart_output_queue[cid].length -= result;
    }
    else
    {
    #if (!defined(__MTK_TARGET__) && defined(__RMMI_UT__)) || defined(__RMMI_IO_LOGGING__)
		part_write_len = (len < str_remain_space)?(len):(str_remain_space);
	    kal_mem_cpy(str_write_ptr, 
	                &(rmmi_comm_ptr->uart_output_queue[cid].data[rmmi_comm_ptr->uart_output_queue[cid].head]), 
	                part_write_len);
		str_write_ptr += part_write_len;
		str_remain_space -= part_write_len;
		result2 = part_write_len;
    #endif
    #if defined(UART_ENABLE) && !defined(__RMMI_UT__)
        result = RMMI_UART_PutBytes(
                    (UART_PORT) port,
                    &(rmmi_comm_ptr->uart_output_queue[cid].data[rmmi_comm_ptr->uart_output_queue[cid].head]),
                    len,
                    MOD_ATCI);
    #elif !defined(__RMMI_UT__) /* UART_ENABLE */ 
        output = fopen("c:\\mcu_out.log", "a");
        result = fprintf(output, "%s", rmmi_comm_ptr->uart_output_queue[cid].data + rmmi_comm_ptr->uart_output_queue[cid].head);
        fclose(output);
    #endif /* UART_ENABLE */ 

    #if defined(__RMMI_UT__) || defined(__RMMI_IO_LOGGING__)
		result = result2;
    #endif

        rmmi_comm_ptr->uart_output_queue[cid].head += result;
        rmmi_comm_ptr->uart_output_queue[cid].length -= result;
    }

#if (!defined(__MTK_TARGET__) && defined(__RMMI_UT__))
    l4c_send_msg_to_tst_reader(MSG_ID_ATCI_UT_RMMI_OUTPUT_STRING, param_ptr);
    return (LOCAL_ATCI_MAX_UT_IO_LENGTH - str_remain_space);
#endif //--- RMMI_UT

#if defined(__RMMI_IO_LOGGING__) && !defined(__RMMI_UT__)
    l4c_send_msg_to_tst_reader(MSG_ID_ATCI_UT_RMMI_OUTPUT_STRING, param_ptr);
#endif
    return result;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_read_data
 * DESCRIPTION
 *  This is rmmi_uart_read_data function of L4C module.
 *  get data from uart to rmmi input queue
 * PARAMETERS
 *  port        [IN]        
 *  len         [IN]        
 * RETURNS
 *  count    number of bytes read from uart
 *****************************************************************************/
kal_uint16 rmmi_uart_read_data(kal_uint8 port, kal_uint16 len)
{
    kal_uint16 result;
    kal_uint16 tail;
    kal_uint16 i;

    //kal_int16 j;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 cid;
    kal_uint8 src_id;
    kal_uint8 status;
    kal_uint8 char_space = ' ';
#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__    
    // for MAUI_02543760 mtk02126 l4ctcm_get_pri_pdp_info() misuse problem temp solution    
    kal_bool ret = KAL_FALSE;   
    kal_uint32 index = 0;       
#endif /* ~__PPP_TYPE_PDP_DIALUP_SUPPORT__  */
#ifndef UART_ENABLE
    FILE *input;
#endif 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_UART_READ_DATA_ENTRY);

#ifdef UART_ENABLE
    /* here's we really read the data from UART */
    //mtk00924_060217:NULL pointer will make IRCOMM fatal error data abort
    result = RMMI_UART_GetBytes((UART_PORT)port, (kal_uint8*) buffer, len, &status, MOD_ATCI);
#else /* UART_ENABLE */ 
    input = fopen("c:\\mcu_in.log", "r");
    fgets((kal_char*) buffer, len, input);
    result = strlen((kal_char*) buffer);
    fclose(input);
#endif /* UART_ENABLE */ 

    /* convert port to the src_id */
    cid = rmmi_port_2_cid(port);
    ASSERT(cid < RMMI_MAX_CHANNEL_NUMBER);
    src_id = rmmi_cid_2_srcid(cid);
    rmmi_ptr->current_src = src_id;

    //mtk01616_070707 : I did not support ATD abort in UCM_AT
    /* mtk00714 20040412: ATD already, any additional character should abort ATD */
    if (RMMI_COMM_PTR->isAtdAction_flag & (0x01 << cid))
    {
        kal_brief_trace(TRACE_INFO, RMMI_RECEIVE_DATA_DURING_ATD);
    #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
        // Allow ATD abort for PPP type ATD*99#
        if (l4c_ptr->cc_current_action[src_id] == CGDATA_EXE)
        {
		    if (INVALID_PDP_CONTEXT_ID != l4c_ps_dialup_get_cid(port)) /*L4CPPP_FB_2*/
	    	{
	    	    kal_uint8 context_id = l4c_ps_dialup_get_cid(port);
    		    l4c_prim_pdp_info_list_struct info;
                /* 
                 * MAUI_02543760 mtk02126 l4ctcm_get_pri_pdp_info() misuse problem temp solution
                 * We use a loop to find the corresponding array index
                 */
                ret = l4ctcm_get_pri_pdp_info(&info);
                if (ret)
                {
                    // reset result to KAL_FALSE to check if we find valid index
                    ret = KAL_FALSE;
                    for (index = 0; index < MAX_EXT_PDP_CONTEXT; index++)
                    {
                        // find the corresponding index
                        if (info.prim_pdp_info[index].context_id == context_id)
                        {
                            ret = KAL_TRUE;
                            break;
                        }
                    }
                }
                if (KAL_TRUE == ret 
                    && (PPP_ADDR_TYPE == info.prim_pdp_info[index].pdp_type)
			    	&& (l4c_ptr->cc_state[src_id] != L4C_ONLINE_DATA_GPRS_STATE))
                {
                    /*
                     * MAUI_02532440 mtk02126 refine l4c_ps_disc_ppp_dialup_req
                     */                                              
	    	        kal_brief_trace(TRACE_INFO, RMMI_ABORT_ATD_OPERATION);
                    l4c_ps_dialup_disc_req(L4C_SRC, context_id, KAL_FALSE);
                    return result;
                }
		    }        
        }
        else
    #endif /* ~__PPP_TYPE_PDP_DIALUP_SUPPORT__ */
    #if defined(__BT_SUPPORT__) 
        if (src_id != RMMI_COMM_PTR->rmmi_hf_src) //Do no't support ATD abort by any character for HF
    #endif        
        {
            kal_brief_trace(TRACE_INFO, RMMI_ABORT_ATD_OPERATION);
            //LMMI needs this msg to stop calling view.

            RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
            RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
            RMMI_COMM_PTR->isAtdAction_flag &= ~(0x01 << cid);
            RMMI_COMM_PTR->isAtdAbort_flag |= (0x1 << cid);  // mtk01616 070323

        #ifndef __UCM_SUPPORT__
            //MAUI_01789057 SETUP_CNF is not received yet
            if ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) ||
                (l4c_ptr->cc_current_action[src_id] == ATD_ECC) ||
                (l4c_ptr->cc_current_action[src_id] == ATD_APP))
            {
                l4c_result_struct result_struct;
                
                result_struct.flag = L4C_ERROR;
                result_struct.cause = CM_L4C_GEN_CAUSE;

                l4c_cc_exe_call_setup_lrsp(result_struct, 0, KAL_FALSE, 0); //MAUI_02526481
            }
            else if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION) //DIAL_IND has been sent
            {
                kal_bool get_call_result;
                kal_uint8 call_id;
                l4c_call_entry_struct call_entry;
                
                get_call_result = l4ccsm_cc_get_outgoing_call(&call_id);
                if (get_call_result == KAL_FALSE)
                {
                    get_call_result = l4ccsm_cc_get_active_call(&call_id);
                }
                if (get_call_result == KAL_TRUE)
                {
                    l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);
                    //only data or fax call could be isAtdAction_flag is set and CC in no action
                    if ((call_entry.call_type == CSMCC_DATA_CALL || call_entry.call_type == CSMCC_FAX_CALL)
                        && call_entry.call_orig == CLCC_MO_CALL)
                    {
                        l4c_cc_call_release_lind(call_id, CM_NORMAL_CALL_CLR, KAL_FALSE, 0); //MAUI_02526481
                    }
                }
            }
//DUMA00144393            rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_NO_ERR);
            l4c_cc_exe_ath_req(src_id, L4C_DISCONNECT_NONE);
        #else
            l4c_mmi_ucm_at_req_lind(
                RMMI_UCM_CHLD,
                src_id,
                KAL_FALSE,
                0,
                NULL,
                CSMCC_REL_ALL,
                255); //CSMCC_INVALID_CALL_ID
        #endif /* __UCM_SUPPORT__ */
            return result;
        }
    }
    //mtk00924: bug fix, ATD, ATD_ECC, SAT_ATD should able to be aborted 
    /* AT is doing some action already, not allowed to do other action */
#ifndef __ATCI_QUEUE_AT__
    else if ((l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION && l4c_ptr->cc_current_action[src_id] != POWERON_EXE
              && l4c_ptr->cc_current_action[src_id] != ATD_EXE && l4c_ptr->cc_current_action[src_id] != ATD_ECC
#ifdef __SAT__
              && l4c_ptr->cc_current_action[src_id] != SAT_ATD_EXE
#endif 
#ifndef __MMI_FMI__ //mtk01616_090320: allow to end call whe ata is still processing 
              && l4c_ptr->cc_current_action[src_id] != ATA_EXE
#endif 
              && l4c_ptr->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT
              && l4c_ptr->cc_current_action[src_id] != ATD_ECC_CHANGE_RAT_ABORT
             ) || (l4c_ptr->ss_user == src_id && l4c_ptr->ss_current_action != L4C_NO_ACTION && l4c_ptr->ss_current_action != USSR_FAC_IND && l4c_ptr->ss_current_action != USSN_FAC_IND
#ifndef __MMI_FMI__ //for modem load AT+CUSD will return OK first
               && l4c_ptr->ss_current_action != CUSD_EXE
#endif
#if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)//mtk01616_081201
               && l4c_ptr->ss_current_action != PARSE_SS_EXE
#endif
             ) 
               || (l4c_ptr->sms_current_action[src_id]!= L4C_NO_ACTION) 
               || (l4c_ptr->rac_user == src_id 
               	&& l4c_ptr->rac_current_action != L4C_NO_ACTION
               	&& l4c_ptr->rac_current_action != SET_GPRS_CON_TYPE               	
               	&& l4c_ptr->rac_current_action != PWRON_SET_RAT_MODE
               	&& l4c_ptr->rac_current_action != PWRON_ATTACH	// [MAUI_01401889], mtk02480
               	&& l4c_ptr->rac_current_action != RFON_ATTACH		
             	&& l4c_ptr->rac_current_action != SET_RAT_MODE_ATTACH)
               || (l4c_ptr->smu_user == src_id 
               	&& l4c_ptr->smu_current_action != L4C_NO_ACTION)  
#ifdef __MOD_TCM__               	
               || (l4c_ptr->tcm_user == src_id 
               	&& l4c_ptr->tcm_current_action != L4C_NO_ACTION) 
#endif //mtk02285, 201003, 6251_ram               	
               || (l4c_ptr->phb_user == src_id 
               	&& l4c_ptr->phb_current_action != L4C_NO_ACTION) 
               || (l4c_ptr->eq_user == src_id
               	&& l4c_ptr->eq_current_action != L4C_NO_ACTION)
#if defined(__MMI_FMI__)
               || (l4c_ptr->route_thru_lmmi_user == src_id && l4c_ptr->route_thru_lmmi == KAL_TRUE)
#endif             
           )    
    {   
	    if (L4C_PTR->rac_user == src_id && L4C_PTR->rac_current_action == COPS_TEST)
        {   // Allow abort ongoing PLMN list action
        }
        else if (  (l4c_ptr->sms_current_action[src_id] == CMGS_PDU_EXE)
                 ||(l4c_ptr->sms_current_action[SAT_SRC] == SAT_CMGS_EXE)
                 ||(l4c_ptr->sms_current_action[src_id] == CMGS_EXE) ) 
        {
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, WARNING_RMMI_CMD_NOT_ALLOWED, RMMI_ERR_ACTION_ALREADY);
            RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
            RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
            return result;
        }
    }
#endif /*__ATCI_QUEUE_AT__*/

    #ifdef SYNCML_DM_SUPPORT
    if (RMMI_COMM_PTR->lock_atci)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_RMMI_CMD_NOT_ALLOWED, RMMI_ERR_UNSPECIFIED);
        RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
        RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
        return result;
    }
    #endif

    for (i = 0; i < result; i++)
    {
    #ifdef __GATI_ENABLE__
        /********************************************
        * If the src_id is in the binary mode, we should put the chars
        * into the buffer directly
        *********************************************/
        if (rmmi_ptr->gati_binary_mode_module[src_id] != MOD_NIL)
        {
            //put the char in uart_input_queue
            tail = (RMMI_COMM_PTR->uart_input_queue[cid].head +
                    RMMI_COMM_PTR->uart_input_queue[cid].length) % MAX_DATA_QUEUE_LENGTH;
            RMMI_COMM_PTR->uart_input_queue[cid].data[tail] = buffer[i];
            RMMI_COMM_PTR->uart_input_queue[cid].length++;
        }
        else
    #endif /* __GATI_ENABLE__ */ 
        if (buffer[i] == rmmi_ptr->s_reg.s5)
        {
            // Backspace :
            // we have to check uart_input_queue length.
            // if there's nothing in uart_input_queue (length == 0),
            // then Backspace is ignored.
            if (RMMI_COMM_PTR->uart_input_queue[cid].length > 0)
            {
                RMMI_COMM_PTR->uart_input_queue[cid].length--;
                if ((RMMI_PTR->rsp_mode.echo_flag & (0x01 << cid)))
                {
                    rmmi_write_to_uart(&buffer[i], 1, KAL_FALSE);
                    rmmi_write_to_uart(&char_space, 1, KAL_FALSE);
                    rmmi_write_to_uart(&buffer[i], 1, KAL_FALSE);
                }
            }
        }
    #ifdef __TC01__ 
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
    #ifdef __BT_SUPPORT__
        else
    #else 
        else if ((buffer[i] >= 0x0a) && (buffer[i] < 0x80))     //for module: Maui_sw 9943
    #endif 
        {
            // Other charactors except Backspace

            /********************************************
                <ESC> would not show up in the hyperterminal
                to avoid user think that why the command can't be executed
                when he typed a command string with ESC
                we ignore <ESC> here
             ********************************************/
            if ( !(RMMI_COMM_PTR->is_sms_cmd & (0x01 << cid)) ) 
            {// what if ctrl+z is in the PHB, can MMI display it?
                if (buffer[i] == 27)
                    continue;
            }

            //generate echo
            if ((rmmi_ptr->rsp_mode.echo_flag & (0x01 << cid)))
            {
                rmmi_write_to_uart(&buffer[i], 1, KAL_FALSE);
            }

            //put the char in uart_input_queue
            tail = (RMMI_COMM_PTR->uart_input_queue[cid].head +
                    RMMI_COMM_PTR->uart_input_queue[cid].length) % MAX_DATA_QUEUE_LENGTH;
            RMMI_COMM_PTR->uart_input_queue[cid].data[tail] = buffer[i];
            RMMI_COMM_PTR->uart_input_queue[cid].length++;
        }
    }

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_read_from_uart
 * DESCRIPTION
 *  This is rmmi_read_from_uart function of L4C module.
 *  calculate available space in rmmi input queue for
 *  reading data from uart, continue read until no space
 *  or uart has no more data
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_read_from_uart(kal_uint8 port)
{
    kal_uint16 space;
    kal_uint16 actual_read = 0;
    kal_uint16 temp_read = 0;   /* to print more detail trace information */
    kal_uint8 cid;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_READ_FROM_UART_ENTRY);

    if (port == uart_port_null)
    {
        return;
    }

#ifdef __CMUX_SUPPORT__
    if (rmmi_comm_ptr->cmux_enable == KAL_FALSE)
#endif //mtk02285, 201003, 6251_ram		
    {
        if (RMMI_UART_GetOwnerID((UART_PORT)port) != MOD_ATCI)
        {
            kal_brief_trace(TRACE_ERROR, READ_FROM_UART_INCORRECT_OWNER,RMMI_UART_GetOwnerID((UART_PORT)port));
            return;
        }
    }

    cid = rmmi_port_2_cid(port);
    if( cid == 0xff)
    {
        if (port != PS_UART_PORT && port == rmmi_comm_ptr->uart_port_value)
        {
            kal_brief_trace(TRACE_ERROR, READ_FROM_UART_INVALID_CHANNEL);
            RMMI_UART_ClrRxBuffer(port, MOD_ATCI);        
        }
        else
        {
            #ifdef DEMO_PROJECT
            ASSERT(0);
            #else
            kal_brief_trace(TRACE_ERROR, READ_FROM_UART_INVALID_CHANNEL);
            RMMI_UART_ClrRxBuffer(port, MOD_ATCI);        
            #endif
        }
        return;
    }

#ifdef __GATI_ENABLE__
    /***********************************************************
    * If we receive rtr indication from the UART before receiving replying message from MOD_APP, 
    * We should remember this event which will be handle after receiving reply message
    ************************************************************/
    {
        kal_uint8 src_id;

        src_id = rmmi_cid_2_srcid(cid);

        if (src_id != 0xff)
        {
            if ((rmmi_ptr->gati_stop_read_data_from_uart & (0x01 << src_id)) != 0)
            {

                rmmi_ptr->gati_pending_rtr_ind |= 0x01 << src_id;
                kal_brief_trace(TRACE_GROUP_7, GATI_RECEIVE_RTR_FROM_UART);
                return;
            }
        }
    }
#endif /* __GATI_ENABLE__ */ 

    space = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_input_queue[cid].length;
    while (space > 0)
    {
        temp_read += actual_read;   /* only to print more detail trace information */
        if (space > MAX_UART_LENGTH)
        {
            actual_read = rmmi_uart_read_data(port, MAX_UART_LENGTH);
            if (actual_read < MAX_UART_LENGTH)
            {
                break;
            }
        }
        else
        {
            actual_read = rmmi_uart_read_data(port, space);
            if (actual_read < space)
            {
                break;
            }
        }
        space = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_input_queue[cid].length;
    }

    space = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_input_queue[cid].length;
    temp_read += actual_read;   /* to print more detail trace information */
    {
    #ifdef UART_ENABLE
        kal_brief_trace(
            TRACE_INFO,
            INFO_RMMI_INPUT,
            rmmi_comm_ptr->uart_input_queue[cid].length,
            space,
            temp_read,
            0);  //send_Rxilm[port]);
    #endif /* UART_ENABLE */ 
    }

    if ((space == 0) || (rmmi_comm_ptr->uart_input_queue[cid].length == MAX_DATA_QUEUE_LENGTH))
    {
        kal_sys_trace("Warning: RMMI uart_input_queue Full!");
        /* mtk00714: the data of +CMGS,+CMGW should not be too long. force to abort the short message */
        if (rmmi_comm_ptr->is_sms_cmd & (0x01 << cid))
        {
            rmmi_comm_ptr->is_sms_cmd &= ~(0x01 << cid);
            rmmi_ptr->current_src = rmmi_cid_2_srcid(cid);
            rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, 0, KAL_FALSE);
        }

    #ifdef UART_ENABLE
        RMMI_UART_ClrRxBuffer((UART_PORT)port, MOD_ATCI);
    #endif 
        rmmi_comm_ptr->uart_input_queue[cid].length = 0;
        rmmi_comm_ptr->uart_input_queue[cid].head = 0;
    }
    return;
}

#ifdef __RMMI_UART_CURRENT_SIM_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_check_current_uart_sim
 * DESCRIPTION
 *  This function is used to check and maintain the current SIM of the UART
 *  If the current SIM is different from the current module ID
 *  we should send +CURSIM to inform user that the following AT REQ/RSP/URC is for which SIM.
 *  On the other hand, we will set rmmi_current_mod_id as the current UART owner
 *  to output the data out.
 *
 * PARAMETERS
 *  is_begin        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void rmmi_check_current_uart_sim(kal_bool is_begin)
{

    static sim_interface_enum current_uart_sim = MOD_NIL;
    sim_interface_enum current_simId = SIM1;
    kal_uint8 buffer[MAX_UART_LENGTH];

    if (is_begin)
    {
        ASSERT(PS_UART_PORT != uart_port_null);

        current_simId = rmmi_root_get_uart_owner(rmmi_port_2_cid(PS_UART_PORT));
        if (current_uart_sim != current_simId)
        {
            current_uart_sim = current_simId;
            sprintf((char*)buffer, "+CURSIM: %d", current_simId);
            rmmi_uart_write_data(buffer, strlen((char*)buffer), KAL_TRUE, 0, PS_UART_PORT);
		rmmi_uart_print_data(buffer,strlen((char*)buffer),rmmi_port_2_cid(PS_UART_PORT), PS_UART_PORT, 0);
        }
    }   
    
}
#endif

/*****************************************************************************
 * FUNCTION
 *  rmmi_write_to_uart
 * DESCRIPTION
 *  This is rmmi_write_to_uart function of L4C module.
 *  continue write until uart has no available space
 *  or rmmi output queue is empty
 * PARAMETERS
 *  buffer      [IN]        Data to be write to uart
 *  length      [IN]        Number of bytes to be write to uart
 *  stuff       [IN]        Need to pad CR & LF in front and back of data or not
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_write_to_uart(kal_uint8 *buffer, kal_uint16 length, kal_bool stuff)
{
    kal_uint8 port;
    kal_uint8 cid;
    kal_uint8 i;
    #if defined(__GATI_ENABLE__) || defined(__BT_SUPPORT__)
    kal_uint8 src_id;
    #endif

    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_WRITE_TO_UART_ENTRY);


    // Print AT command URC to trace
#if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__)
    {
#define URC_OUTPUT_BUFFER 200

        kal_uint8 *tmp_buf, *ptr;
        kal_uint16 len, str_len;
        kal_uint16 j, start, temp_len;

        for( j=0 ; j<length ; )
        {
            // seek to the end line
            start = j;
            for( ; j<length ; j++)
            {
                if( buffer[j] < ' ' )
                {
                    break;
                }                
            }

            ptr = buffer + start;
            temp_len = j-start;

            //kal_prompt_trace(MOD_L4C, "%x, temp_len=%d, start=%d, j=%d", ptr, temp_len, start, j);

            if( temp_len >= 2 && temp_len < URC_OUTPUT_BUFFER)
            {
                tmp_buf = get_ctrl_buffer(URC_OUTPUT_BUFFER + 5);

                cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);
                if(cid >= 0xfe)
                {
                    kal_sprintf((kal_char*)tmp_buf, "[URC][P][C] ");
                }
                else
                {
                    port = rmmi_cid_2_port(cid);
                    kal_sprintf((kal_char*)tmp_buf, "[URC][%d][%d] ", port, cid);
                }

                len= (kal_uint16)strlen((char*)tmp_buf);
                str_len = (temp_len>(URC_OUTPUT_BUFFER-len-1)) ? (URC_OUTPUT_BUFFER-len-1) : temp_len;
                kal_mem_cpy(tmp_buf+len, ptr, str_len);
                tmp_buf[len+str_len] = '\0';

                //tst_sys_trace(tmp_buf);
                kal_prompt_trace(MOD_ATCI, (kal_char*)tmp_buf);
                free_ctrl_buffer(tmp_buf);
            }

            // ignore \r\n ...
            for( j++ ; j<length ; j++)
            {
                if( buffer[j] >= ' ' )
                {
                    break;
                }
            }
        }
    }
#endif



#ifdef __UE_SIMULATOR__
    if (length > 0 && length < 256)
    {
        l4uegw_at_response_ind_struct *l4uegw_at_response_ind_ptr;
        l4uegw_at_response_ind_ptr = (l4uegw_at_response_ind_struct *)construct_local_para((kal_uint16)sizeof(l4uegw_at_response_ind_struct), TD_RESET);
        memcpy((kal_char*)l4uegw_at_response_ind_ptr->tst_inject.string, buffer, length);
        l4uegw_at_response_ind_ptr->tst_inject.index = length;
        l4c_send_msg_to_uegw(MSG_ID_L4UEGW_AT_RESPONSE_IND, l4uegw_at_response_ind_ptr);
    }
#endif

#if defined(__GEMINI__) && defined(__DISABLE_SIM2_AT_SUPPORT__)//mtk01616_100511: prevent SIM2 event to update RMMI context
    if(l4c_current_mod_id == MOD_L4C_2)
        return;		
#endif
	
#ifdef __SAT__
#ifdef __SATCB__
    if (rmmi_ptr->current_src == RMMI_SAT)
    {
        kal_brief_trace(TRACE_INFO, RMMI_CMD_FROM_SAT);    
        rmmi_rsp_to_SAT(buffer, length, stuff);
        return;
    }
#endif	
#endif /* __SAT__ */ 

    /* mtk01616_071214: tst inject, do not send data to DTE(cmd_from_tst will reset when final result printed) */
    if (rmmi_comm_ptr->cmd_from_tst == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, RMMI_CMD_FROM_TST);
        return;
    }

#ifdef __CMUX_SUPPORT__
    // CMUX is not enable, we should change RMMI_UNSOLICITED to RMMI_ALL
    if ( rmmi_comm_ptr->cmux_enable == KAL_TRUE )
    {
        if ( rmmi_ptr->current_src == RMMI_UNSOLICITED )
        {
            rmmi_ptr->current_src = rmmi_ptr->rmmi_urc_channel_src;   
        }            
    }
    else
    {
        if ( rmmi_ptr->current_src == RMMI_UNSOLICITED )
        {
            rmmi_ptr->current_src = RMMI_ALL;   
        }            
    }
#endif

// For data card project, only send URC to Application port(shall be PS_UART_PORT)
#ifdef __MODEM_CARD__
    if ( rmmi_ptr->current_src == RMMI_UNSOLICITED )
    {
        rmmi_ptr->current_src = rmmi_cid_2_srcid(rmmi_port_2_cid(PS_UART_PORT));
    } 
#endif

#ifdef __GATI_ENABLE__
    if (rmmi_ptr->gati_write_allow_flag == KAL_FALSE)
    {
        kal_brief_trace(TRACE_GROUP_7, GATI_NOT_WRITE_ALLOW, rmmi_ptr->current_src);
        if (rmmi_ptr->current_src >= RMMI_SRC && rmmi_ptr->current_src < RMMI_ALL &&
            rmmi_ptr->gati_binary_mode_module[rmmi_ptr->current_src] != MOD_NIL)
        {
            /*
             * Since it is in the binary mode, now
             * We buffer the output data which is not from the MOD_APP to the gati_buffer
             */
            gati_insert_data_to_buffer(buffer, length, rmmi_ptr->current_src, NULL, GATI_NOT_GATI_DATA, stuff);
            return;
        }
        else if (rmmi_ptr->current_src == RMMI_ALL)
        {
            /*
             * For the RMMI_ALL,
             * We should check if there is any channel in the binary mode.
             * If any, we should buffer the data
             */
            for (i = RMMI_SRC; i < RMMI_ALL; i++)
            {
                if (rmmi_ptr->gati_binary_mode_module[i] != MOD_NIL)
                {
                    gati_insert_data_to_buffer(buffer, length, rmmi_ptr->current_src, NULL, GATI_NOT_GATI_DATA, stuff);
                    return;
                }
            }
        }
    }
#endif /* __GATI_ENABLE__ */ 

    #ifdef __RMMI_UART_CURRENT_SIM_SUPPORT__
    rmmi_check_current_uart_sim(KAL_TRUE);
    #endif

    #ifdef __DISABLE_AT_URC__
    if (rmmi_ptr->current_src == RMMI_ALL)
    {
        return;
    }
    #endif

    #if defined(__MESSAGE_BASED_AT_SUPPORT__)
    
    if(rmmi_ptr->current_src == RMMI_ALL)
    {
        kal_brief_trace(TRACE_INFO, INFO_MSG_BASED_URC, length);
        rmmi_msgbased_write_urc(buffer, length, stuff);
    }

    if (rmmi_msgbased_is_valid_src(rmmi_ptr->current_src) && rmmi_ptr->msg_based_at_enable)
    {
        kal_brief_trace(TRACE_INFO, INFO_MSG_BASED_RESPONSE, length, rmmi_ptr->current_src);
        rmmi_msgbased_write_response(buffer, length, stuff, rmmi_ptr->current_src);
    }
    else
    #endif

    if (rmmi_ptr->current_src != RMMI_ALL)
    {
        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);
        if ( cid >= RMMI_MAX_CHANNEL_NUMBER ) 
        {
            kal_brief_trace(TRACE_WARNING, WARNING_RMMI_ERROR);
        }
        else
        {
            ASSERT(cid < RMMI_MAX_CHANNEL_NUMBER);
            port = rmmi_cid_2_port(cid);
            ASSERT(port != uart_port_null); //debug

            if (RMMI_UART_GetOwnerID((UART_PORT)port) != MOD_ATCI)
            {
                kal_brief_trace(TRACE_WARNING, WARNING_RMMI_PORT_OWNER_ERROR,
                        port,RMMI_UART_GetOwnerID((UART_PORT)port));
            }
            else
            {
                if (rmmi_root_is_uart_owner(cid) == KAL_TRUE)
                {
                    rmmi_uart_write_data(buffer, length, stuff, cid, port);
#ifdef __CMUX_SUPPORT__
					if (rmmi_ptr->current_src == rmmi_ptr->rmmi_urc_channel_src)
				    {
                        rmmi_uart_print_data(buffer,length,cid, port, 1);
					}
					else
#endif /*__CMUX_SUPPORT__*/
				    {
					    rmmi_uart_print_data(buffer,length,cid, port, 0);
				    }
                }
            }
        }
    }
    else        //RMMI_ALL: indication, should write to every channel.
    {
    #ifdef __GATI_ENABLE__
        kal_int16 remain_size;

        for (i = 0; i < RMMI_MAX_CHANNEL_NUMBER; i++)
        {
            port = rmmi_cid_2_port(i);
            src_id = rmmi_cid_2_srcid(i);

            /*check if there is any space remaining*/
            if ((port != uart_port_null) && (RMMI_UART_GetOwnerID(port) == MOD_ATCI))
            {
                #if defined (__BT_SUPPORT__)
                if ( (src_id == rmmi_ptr->except_src) || 
                     (src_id == rmmi_comm_ptr->rmmi_hf_src && rmmi_comm_ptr->hf_urc_report_flag == KAL_FALSE))
                {
                    continue;
                }
                #endif
            
                if (stuff == KAL_TRUE)
                {
                    remain_size = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_output_queue[i].length - 4;    // 4: for head and tail \\r\n
                }
                else
                {
                    remain_size = MAX_DATA_QUEUE_LENGTH - rmmi_comm_ptr->uart_output_queue[i].length;
                }
                if (remain_size < length)
                {
                    kal_brief_trace(TRACE_GROUP_7, GATI_WRITE_RMMI_ALL_FAIL, remain_size, length, i);
                    return;
                }
            }
        }
    #endif /* __GATI_ENABLE__ */ 

        for (i = 0; i < RMMI_MAX_CHANNEL_NUMBER; i++)
        {
            port = rmmi_cid_2_port(i);

            #if defined (__BT_SUPPORT__)
            src_id = rmmi_cid_2_srcid(i);
            if (src_id == rmmi_comm_ptr->rmmi_hf_src && rmmi_comm_ptr->hf_urc_report_flag == KAL_FALSE)
            {
                kal_brief_trace(TRACE_INFO, INFO_HF_IS_NOT_READY_TO_RECIEVE_URC_REPORT);
                continue;
            }
            if (src_id == rmmi_ptr->except_src)
            {
                continue;
            }
            #endif
            if ((port != uart_port_null) && 
                (RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
               )
            {
                if (rmmi_root_is_uart_owner(i) == KAL_TRUE)
                {
                    rmmi_uart_write_data(buffer, length, stuff, i, port);
					rmmi_uart_print_data(buffer,length,i, port, 1);
                }
            }
        }
    }
    #ifdef __RMMI_UART_CURRENT_SIM_SUPPORT__
    rmmi_check_current_uart_sim(KAL_FALSE);
    #endif

}

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_write_data
 * DESCRIPTION
 *  
 * PARAMETERS
 *  buffer      [?]         
 *  length      [IN]        
 *  stuff       [IN]        
 *  cid         [IN]        
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_write_data(kal_uint8 *buffer, kal_uint16 length, kal_bool stuff, kal_uint8 cid, kal_uint8 port)
{
    kal_uint16 i;
    kal_uint16 tail;
    kal_uint16 temp;
    kal_uint16 actual_write;
    kal_int16 remain_size;		
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_check_online_cid(cid))
    {
        kal_sys_trace("RMMI: online state");
        return;
    }
    /* we will clear our uart queue if we can not write to rmmi queue */

    /* Compute the remain_size according to the stuff */
    if (stuff == KAL_TRUE)
    {
        remain_size = MAX_DATA_QUEUE_LENGTH - RMMI_COMM_PTR->uart_output_queue[cid].length-4; // 4: for head and tail \\r\n
    }
    else
    {
        remain_size = MAX_DATA_QUEUE_LENGTH - RMMI_COMM_PTR->uart_output_queue[cid].length;
    }
	
    if ( remain_size <= length)
    {
    #ifdef __GATI_ENABLE__
        /*
         * if the __GATI_ENABLE__ is on, we should not clean the uart_output_queue when it is full.
         */
        if (remain_size <= 0)
        {
            return;
        }
        if (rmmi_ptr->gati_data_type != GATI_OUTPUT_NORMAL)
        {
            /*
             * data need to have integrity.
             * Since the space is not enough, we return directly
             */
            kal_brief_trace(TRACE_GROUP_7, GATI_WRITE_INTEGRITY_FAIL, remain_size, length, cid);
            return;
        }
        length = remain_size;

    #else /* __GATI_ENABLE__ */ 

        kal_brief_trace(TRACE_INFO, RMMI_CLEAR_OUTPUT_QUEUE);
    #ifdef UART_ENABLE
        kal_sys_trace("RMMI: ClrTxBuffer");
        RMMI_UART_ClrTxBuffer((UART_PORT)port, MOD_ATCI);
        RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
    #endif /* UART_ENABLE */ 
        RMMI_COMM_PTR->uart_output_queue[cid].head = 0;
        RMMI_COMM_PTR->uart_output_queue[cid].length = 0;
    #endif /* __GATI_ENABLE__ */ 
    }
    tail = (RMMI_COMM_PTR->uart_output_queue[cid].head + RMMI_COMM_PTR->uart_output_queue[cid].length) % MAX_DATA_QUEUE_LENGTH;

    #ifdef __RMMI_AT_OUTPUT__
    {
        kal_uint8 *tmp_buf;
        kal_uint16 len, str_len;

        #define AT_OUTPUT_BUFFER 2048
    
        tmp_buf = get_ctrl_buffer(AT_OUTPUT_BUFFER);
        kal_sprintf(tmp_buf, "[AT_OUT:%d]: ", port);    
        len= strlen((char*)tmp_buf);
        str_len = (length>(AT_OUTPUT_BUFFER-len-1)) ? (AT_OUTPUT_BUFFER-len-1) : length;
        kal_mem_cpy(
                    tmp_buf+len, 
                    buffer, 
                    str_len);
        tmp_buf[len+str_len] = '\0';
        kal_sys_trace(tmp_buf);
        free_ctrl_buffer(tmp_buf);
    }
    #endif

    if (stuff == KAL_TRUE)
    {
        //for module: Maui_sw 9943
        if (rmmi_ptr->rsp_mode.format != RMMI_NUM_PARTIAL_HEAD_TAIL)
        {
            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 0) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s3;
            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 1) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s4;

            for (i = 0; i < length; i++)
            {
                RMMI_COMM_PTR->uart_output_queue[cid].data
                    [(tail + 2 + i) % MAX_DATA_QUEUE_LENGTH] = *((kal_uint8*) buffer + i);
            }

            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 2 + length) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s3;
            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 3 + length) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s4;

            RMMI_COMM_PTR->uart_output_queue[cid].length += 4;
        }
        else
        {       //for module: Maui_sw 9943
            for (i = 0; i < length; i++)
            {
                RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + i) % MAX_DATA_QUEUE_LENGTH] = *((kal_uint8*) buffer + i);
            }

            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 0 + length) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s3;
        #if defined(__WM_RIL_SUPPORT__)
            //RMMI_PTR->uart_output_queue[cid].data
            //      [(tail+1+length) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s4;

            /*
            * To ease handling the response data with rail 0x0d 0x0a, 
            * we don't send 0x0a for WM
            */

            (RMMI_COMM_PTR->uart_output_queue[cid].length)++;
        #else /* __SP_RIL_SUPPORT__ */ 
            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + 1 + length) % MAX_DATA_QUEUE_LENGTH] = RMMI_PTR->s_reg.s4;

            RMMI_COMM_PTR->uart_output_queue[cid].length += 2;
        #endif /* __SP_RIL_SUPPORT__ */ 
        }       //for module: Maui_sw 9943
    }
    else
    {
        for (i = 0; i < length; i++)
        {
            RMMI_COMM_PTR->uart_output_queue[cid].data[(tail + i) % MAX_DATA_QUEUE_LENGTH] = *((kal_uint8*) buffer + i);
        }
    }
    RMMI_COMM_PTR->uart_output_queue[cid].length += length;

#ifdef __GATI_ENABLE__
    /*
     * Set RMMI_PTR->gati_actual_write, so that we can get actual _write in the gati_data_req_hdlr()
     */
    rmmi_ptr->gati_actual_write = length;
#endif /* __GATI_ENABLE__ */ 

    if ((RMMI_COMM_PTR->uart_stop_send_flag & (0x01 << cid)) == 0)
    {
        temp = RMMI_COMM_PTR->uart_output_queue[cid].length;
        actual_write = rmmi_uart_send_data(port);
        if (actual_write < temp)
        {
            RMMI_COMM_PTR->uart_stop_send_flag |= (0x01 << cid);
            kal_brief_trace(TRACE_WARNING, WARNING_RMMI_SET_UART_STOP_TO_SEND_FLAG,cid);			
        }
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, WARNING_RMMI_UART_STOP_TO_SEND,cid);				
    }

    return;
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_print_data
 * DESCRIPTION
 *  
 * PARAMETERS
 *  buffer      [?]         
 *  length      [IN]        
 *  stuff       [IN]        
 *  cid         [IN]        
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_print_data(kal_uint8 *buffer, kal_uint16 length,kal_uint8 cid, kal_uint8 port,kal_uint8 URC)
{
    kal_uint8 *tmp_buf;
    kal_uint16 len, str_len;
    kal_uint8 src_id; 
    #define AT_OUTPUT_BUFFER 2048
	
	src_id = rmmi_cid_2_srcid(cid);
    
    tmp_buf = get_ctrl_buffer(AT_OUTPUT_BUFFER);
	if (URC == 1) 
    {
		kal_sprintf((kal_char*)tmp_buf, "[AT_U p%d, s%d]", port,src_id); 
	}
	else if (URC == 0)
    {
        kal_sprintf((kal_char*)tmp_buf, "[AT_R p%d, s%d]", port,src_id); 
	}
	else
	{
        kal_sprintf((kal_char*)tmp_buf, "[AT_I p%d, s%d]", port,src_id); 
	}
	
       
    len= (kal_uint16)strlen((char*)tmp_buf);
    str_len = (length>(AT_OUTPUT_BUFFER-len-1)) ? (AT_OUTPUT_BUFFER-len-1) : length;
    kal_mem_cpy(
                tmp_buf+len, 
                buffer, 
                str_len);
    tmp_buf[len+str_len] = '\0';
    kal_sys_trace((kal_char*)tmp_buf);
    free_ctrl_buffer(tmp_buf);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_send_rsp_to_SAT
 * DESCRIPTION
 *  Used to send the response message with data back to SAT
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_send_rsp_to_SAT(void)
{
#ifdef __SAT__
#ifdef __SATCB__
    sat_run_at_command_res_struct *local_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->IsSATresponse = KAL_FALSE;

    /* prepare RSP_MSG */
    local_ptr = rmmi_ptr->SAT_rsp_ptr;
    local_ptr->size_of_at_response = rmmi_ptr->sat_output_queue.length;     //size_of_at_resposne

    kal_mem_cpy((kal_uint8*) local_ptr->at_response,    
        (kal_uint8*) rmmi_ptr->sat_output_queue.data, MAX_AT_RESPONESE_LEN);    //original RMMI_PTR->sat_output_queue.length, for security issue, change to 240, modified by mtk02514_081216
    local_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;        //res

    l4c_sat_run_at_command_res(local_ptr);

    rmmi_ptr->sat_output_queue.length = 0;
    rmmi_ptr->sat_output_queue.head = 0;
#endif
#endif
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_rsp_to_SAT
 * DESCRIPTION
 *  This is format the response for SAT and send it to SAT at the end.
 * PARAMETERS
 *  buffer      [IN]        Data to be write to uart
 *  length      [IN]        Number of bytes to be write to uart
 *  stuff       [IN]        Need to pad CR & LF in front and back of data or not
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_rsp_to_SAT(kal_uint8 *buffer, kal_uint16 length, kal_bool stuff)
{
#ifdef __SAT__
#ifdef __SATCB__ 
    kal_uint16 i;
    kal_uint16 tail;
    sat_run_at_command_res_struct *local_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SEND_TO_SAT_ENTRY);

    if (rmmi_ptr->sat_output_queue.length + length > 240)
    {
        //sat_run_at_command_res_struct: at_response[240]
        // do not append to sat_output_queue
    }
    else
    {
        tail = (rmmi_ptr->sat_output_queue.head + rmmi_ptr->sat_output_queue.length);

        if (stuff == KAL_TRUE)
        {
            rmmi_ptr->sat_output_queue.data[(tail + 0)] = rmmi_ptr->s_reg.s3;
            rmmi_ptr->sat_output_queue.data[(tail + 1)] = rmmi_ptr->s_reg.s4;

            for (i = 0; i < length; i++)
            {
                rmmi_ptr->sat_output_queue.data[(tail + 2 + i)] = *((kal_uint8*) buffer + i);
            }

            rmmi_ptr->sat_output_queue.data[(tail + 2 + length)] = rmmi_ptr->s_reg.s3;
            rmmi_ptr->sat_output_queue.data[(tail + 3 + length)] = rmmi_ptr->s_reg.s4;

            rmmi_ptr->sat_output_queue.length += 4;
        }
        else
        {
            for (i = 0; i < length; i++)
            {
                rmmi_ptr->sat_output_queue.data[(tail + i)] = *((kal_uint8*) buffer + i);
            }
        }
        rmmi_ptr->sat_output_queue.length += length;
    }

    /* finished parse SAT at command, send MSG_ID_SAT_RUN_AT_COMMAND_RES */
    if (rmmi_ptr->IsSATcommand == KAL_FALSE)
    {
        rmmi_send_rsp_to_SAT();
    }
#endif	
#endif /* __SAT__ */ 
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_process_one_cmd
 * DESCRIPTION
 *  This is rmmi_process_one_cmd function of L4C module.
 *  detect CR to identify a full cmd line and then process
 *  that line of at cmd
 * PARAMETERS
 *  cid     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
extern kal_bool custom_is_edit_mode_command(kal_uint8 *data);
void rmmi_process_one_cmd(kal_uint8 cid)
{
    kal_bool full_cmd = KAL_FALSE;
    kal_uint16 i, j, index;
    rmmi_string_struct temp_struct;
#ifndef __SMS_AT_DIRECT_INPUT_SUPPORT__ 
    kal_uint8 input_hint_string[3] = "> ";
#endif 
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_PROCESS_ONE_CMD_ENTRY);

    src_id = rmmi_cid_2_srcid(cid);
    ASSERT(src_id != 0xff);
    rmmi_ptr->current_src = src_id;

    /* mtk00714 20040408: AT is doing some action already, not allowed */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __SAT__
/* under construction !*/
    #endif 
    #ifndef __MMI_FMI__ //mtk01616_090320: allow to end call whe ata is still processing
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
#endif

#ifdef __GATI_ENABLE__
    // if activating binary mode, ignore the following check AT command action
    if (rmmi_ptr->gati_binary_mode_module[src_id] != MOD_NIL)
    {
        kal_uint16 length, head;

        head = RMMI_COMM_PTR->uart_input_queue[cid].head;
        length = RMMI_COMM_PTR->uart_input_queue[cid].length;

        kal_brief_trace(TRACE_GROUP_7, GATI_INPUT_DATA_IN_BINARY_MODE);

        temp_struct.string_ptr = get_ctrl_buffer(length);
        for (i = 0; i < length; i++)
        {
            temp_struct.string_ptr[i] = RMMI_COMM_PTR->uart_input_queue[cid].data[(head + i) % MAX_DATA_QUEUE_LENGTH];
        }

        gati_suspend_read_from_uart(rmmi_ptr->gati_binary_mode_module[src_id], src_id);
        gati_send_data_ind(rmmi_ptr->gati_binary_mode_module[src_id], temp_struct.string_ptr, length);

        free_ctrl_buffer(temp_struct.string_ptr);
        RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
        RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
        return;
    }
#endif /* __GATI_ENABLE__ */ 

    /* mtk00758 */
#ifdef l4c_autobaud

    if ((rmmi_cid_2_port(cid)) == PS_UART_PORT)
    {
        if ((RMMI_COMM_PTR->uart_input_queue[cid].length > 1) && (RMMI_COMM_PTR->is_sms_cmd == KAL_FALSE))
        {
            index = (RMMI_COMM_PTR->uart_input_queue[cid].head) % MAX_DATA_QUEUE_LENGTH;
            if (((RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 'a') ||
                 (RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 'A')) &&
                ((RMMI_COMM_PTR->uart_input_queue[cid].data[index + 1] == 't') ||
                 (RMMI_COMM_PTR->uart_input_queue[cid].data[index + 1] == 'T')))

            {
                /* continue */
            }
            else
            {
                kal_brief_trace(TRACE_WARNING, WARNING_RMMI_CMD_NOT_ALLOWED, RMMI_ERR_NOT_AT_CMD);
                RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
                RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
                l4c_set_uart_auto_baud();
                return;
            }
        }
    }
    /* mtk00758 */
#endif /* l4c_autobaud */ 

    /* Begin : mtk00714 20050112 */
    /* skip the beginnig Null terminaters (PC always throw a lot Null when query the modem. */
    for (i = 0; i < RMMI_COMM_PTR->uart_input_queue[cid].length; i++)
    {
        index = (RMMI_COMM_PTR->uart_input_queue[cid].head + i) % MAX_DATA_QUEUE_LENGTH;
        if (RMMI_COMM_PTR->uart_input_queue[cid].data[index] != RMMI_END_OF_STRING_CHAR
            && RMMI_COMM_PTR->uart_input_queue[cid].data[index] != 13 && RMMI_COMM_PTR->uart_input_queue[cid].data[index] != 10)
        {
            break;      //we found the first charactor.
        }
    }
    RMMI_COMM_PTR->uart_input_queue[cid].head = (RMMI_COMM_PTR->uart_input_queue[cid].head + i) % MAX_DATA_QUEUE_LENGTH;
    RMMI_COMM_PTR->uart_input_queue[cid].length -= i;
    /* End : mtk00714 20050112 */

    for (i = 0; i < RMMI_COMM_PTR->uart_input_queue[cid].length; i++)
    {   //mtk00924: change SMS +CMGW/+CMGS/+CMGC/+CNMA cmd format
        index = (RMMI_COMM_PTR->uart_input_queue[cid].head + i) % MAX_DATA_QUEUE_LENGTH;
        if ((RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 13) || (RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 10))
            //(RMMI_PTR->uart_input_queue[cid].data[index] == RMMI_END_OF_STRING_CHAR))
        {
        /* here we format a tmp_str and check if it's sms_command */
            kal_uint8 tmp_str[11];
            kal_uint8 maxlen, k;

            if (i  > 10)
            {
                maxlen = 10;
            }
            else
            {
                maxlen = (kal_uint8)i;
            }

            for (k = 0; k < maxlen; k++)
            {
                tmp_str[k] = *(RMMI_COMM_PTR->uart_input_queue[cid].data +
                               ((RMMI_COMM_PTR->uart_input_queue[cid].head + k) % MAX_DATA_QUEUE_LENGTH));
            }
            tmp_str[maxlen] = RMMI_END_OF_STRING_CHAR;
            toUpper(tmp_str);

#ifdef __ATCI_QUEUE_AT__ 
            if (rmmi_is_action_conducting(src_id) && (!rmmi_is_cfunoff_command(tmp_str,maxlen)))
            {
                return; 
            }
            else
            {
                kal_prompt_trace(rmmi_current_mod_id,"start process ATCI queue"); 
            }
#endif 
        #ifdef __SMS_AT_DIRECT_INPUT_SUPPORT__ 
            i++;
            full_cmd = KAL_TRUE;
            break;
        #else 
            if ((i < 3) || 
                ((is_sms_command(tmp_str, maxlen) == KAL_FALSE) 
                    && (custom_is_edit_mode_command(tmp_str) == KAL_FALSE)) )
            {
                i++;
                full_cmd = KAL_TRUE;
                if (RMMI_COMM_PTR->is_sms_cmd & (0x01 << cid))
                {
                    RMMI_COMM_PTR->is_sms_cmd &= ~(0x01 << cid);
                }
                break;
            }
            else if (RMMI_COMM_PTR->is_sms_cmd & (0x01 << cid))
            {
                RMMI_COMM_PTR->uart_input_queue[cid].data[index] = RMMI_PTR->s_reg.s4;
            }
            else if (((RMMI_COMM_PTR->is_sms_cmd & (0x01 << cid)) == 0) && 
                    ((is_sms_command(tmp_str, maxlen) == KAL_TRUE) || (custom_is_edit_mode_command(tmp_str) == KAL_TRUE) ))
            {
                rmmi_write_to_uart(&rmmi_ptr->s_reg.s3, 1, KAL_FALSE);
                rmmi_write_to_uart(&rmmi_ptr->s_reg.s4, 1, KAL_FALSE);
                rmmi_write_to_uart(input_hint_string, 2, KAL_FALSE);

                RMMI_COMM_PTR->is_sms_cmd |= (0x01 << cid);

            }
        #endif /* __SP_RIL_SUPPORT__ */ 
        }
    #ifndef __SMS_AT_DIRECT_INPUT_SUPPORT__  
        if ( RMMI_COMM_PTR->is_sms_cmd & (0x01 << cid) )  
        {
            if (RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 26)
            {
                i++;
                full_cmd = KAL_TRUE;
                RMMI_COMM_PTR->is_sms_cmd &= ~(0x01 << cid);
                break;
            }
            else if (RMMI_COMM_PTR->uart_input_queue[cid].data[index] == 27)
            {
                RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
                RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
                RMMI_COMM_PTR->is_sms_cmd &= ~(0x01 << cid);

                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
                return;
            }
        }
    #endif 

    }


    if (full_cmd == KAL_TRUE)
    {
        if (i <= 1)
        {
            RMMI_COMM_PTR->uart_input_queue[cid].head = (RMMI_COMM_PTR->uart_input_queue[cid].head + i) % MAX_DATA_QUEUE_LENGTH;
            RMMI_COMM_PTR->uart_input_queue[cid].length -= i;
            return;
        }
        temp_struct.index = 0;
        ASSERT(i + 1 < 2048);
        temp_struct.string_ptr = get_ctrl_buffer((kal_uint16) (i + 1));

        kal_mem_set(temp_struct.string_ptr, 0, sizeof(kal_uint8) * (i + 1));

        for (j = 0; j < i - 1; j++)
        {
            temp_struct.string_ptr[j] =
                RMMI_COMM_PTR->uart_input_queue[cid].data
                [(RMMI_COMM_PTR->uart_input_queue[cid].head + j) % MAX_DATA_QUEUE_LENGTH];
        }
        temp_struct.string_ptr[i - 1] = RMMI_PTR->s_reg.s3;
        RMMI_COMM_PTR->uart_input_queue[cid].head = (RMMI_COMM_PTR->uart_input_queue[cid].head + i) % MAX_DATA_QUEUE_LENGTH;
        RMMI_COMM_PTR->uart_input_queue[cid].length -= i;
        temp_struct.src_id = (l4c_source_id_enum) src_id;

        rmmi_cmd_processor(&temp_struct, i);

        free_ctrl_buffer(temp_struct.string_ptr);
    }
    return;
}

/*****************************************************************************
* 2004 02 28 comment by mtk00714
* FUNCTION
*  check_multi_command
*
* DESCRIPTION
*   This function to see if there exists multi commands need to be process.
*  If yes, call rmmi_cmd_processor
*   !!THIS FUNCTION MUST BE CALLED
*     when l4c changes its state from  "L4C_CMD_FORWARDED_FOR_ACTION_STATE"
*                       to  "L4C_IDLE_STATE"
* PARAMETERS
*
* RETURNS
*   KAL_FALSE => not multi command
*  KAL_TRUE => is mutli command
* GLOBALS AFFECTED
*  none.
*****************************************************************************/


/*****************************************************************************
 * FUNCTION
 *  rmmi_process_multi_cmd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cid     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_process_multi_cmd(kal_uint8 cid)
{
    rmmi_string_struct temp_string_ptr;
    kal_uint16 len;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    kal_brief_trace(TRACE_INFO, RMMI_PROCESS_MULTI_CMD);


    /*mtk02514** MAUI_01630886 ** 2009/02/16 ******
    * In this function, we will transfer cid to src_id
    * and use it as the current src in the following ocde
    *****************************************/

    src_id = rmmi_cid_2_srcid(cid);
    if (src_id >= MAX_SOURCE_NUM)
        ASSERT(0);
    rmmi_ptr->current_src = src_id;
    
    /* mtk02514 *** MAUI_01643487 *** 090309 *************
    *  Since there is something wrong when handling previous command when
    *  receiving confirmation message, 
    *  we should not process the following commands, so we break direcly.
    ********************************************/

    if ((RMMI_COMM_PTR->multi_cmd_error & (0x01 << cid)) )
    {
        RMMI_COMM_PTR->is_multi_cmd &= ~(0x01 << cid);
        RMMI_COMM_PTR->multi_cmd_error &= ~(0x01 << cid);
        RMMI_COMM_PTR->multi_cmd_string[cid][0] = 0;
        return;
    }

    if (has_any_current_action(src_id) == KAL_TRUE 
        #if defined(__MMI_FMI__)
        || l4c_ptr->route_thru_lmmi == KAL_TRUE
        #endif				
        || rmmi_ptr->is_ucm_action == KAL_TRUE) //mtk01616_071007: pending multi-cmd processing after receiving rcode_req from ucm , otherwise the previous result code will be print out due to is_multi_cmd flag is clear
    {
        kal_brief_trace(
            TRACE_INFO,
            RMMI_PROCESS_MULTI_CMD_ACTION_EXIST,
            rmmi_ptr->is_ucm_action,
            l4c_ptr->route_thru_lmmi);
        if ((l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) != KAL_TRUE))
        {
            return;
        }
        else if (rmmi_ptr->is_ucm_action == KAL_TRUE)
        {
            return;
        }
    }

    len = (kal_uint16)strlen((kal_char*) RMMI_COMM_PTR->multi_cmd_string[cid]);
    if (len > 0)
    {
        kal_brief_trace(TRACE_INFO, RMMI_MULTI_CMD_STRING_EXIST);
        ASSERT(len + 1 < 2048);
        temp_string_ptr.string_ptr = (kal_uint8*) get_ctrl_buffer(len + 1);
        strcpy((kal_char*) temp_string_ptr.string_ptr, (kal_char*) RMMI_COMM_PTR->multi_cmd_string[cid]);
        temp_string_ptr.index = 0;

        /* mtk02514 *** MAUI_01643487 *** 090309 *************
        *  We will clear is_multi_cmd first.
        *  If the command string is still an multi-command
        *  we will set it at the rmmi_cmd_processor
        ********************************************/
        
        RMMI_COMM_PTR->is_multi_cmd &= ~(0x01 << cid);       //RMMI_PTR->is_multi_cmd = KAL_FALSE;
        RMMI_COMM_PTR->multi_cmd_string[cid][0] = 0;
        temp_string_ptr.src_id = (l4c_source_id_enum)src_id  ;
        rmmi_cmd_processor((rmmi_string_struct*) & temp_string_ptr, (kal_uint16) len);
        free_ctrl_buffer(temp_string_ptr.string_ptr);
    }
    else
    {
        kal_brief_trace(TRACE_INFO, RMMI_MULTI_CMD_STRING_NOT_EXIST);
    }
    return;

}

#ifdef __IRDA_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  ircomm_connect_ind_hdlr
 * DESCRIPTION
 *  This is ircomm_connect_ind_hdlr function of L4C module.
 *  is called when receive irda connect indication
 *  and switch uart port to IRDA
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void ircomm_connect_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    ircomm_connect_rsp_struct *param_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_IRCOMM_CONNECT_IND_HDLR_ENTRY);
    L4C_PTR->uart_port_value = PS_UART_PORT;
    PS_UART_PORT = uart_port_irda;  /* set uart to IRDA port */

#if defined(__BT_SUPPORT__)
    RMMI_COMM_PTR->port[0] = PS_UART_PORT;
#endif 

    rmmi_obtain_uart_control(uart_port_irda);   /* set uart owner */
    param_ptr = (ircomm_connect_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(ircomm_connect_rsp_struct), TD_RESET);
    param_ptr->result = KAL_TRUE;

    l4c_send_msg_to_irda(MSG_ID_IRCOMM_CONNECT_RSP, param_ptr);

    l4c_eq_ircomm_connect_lind();
    return;

}


/*****************************************************************************
 * FUNCTION
 *  ircomm_disconnect_ind_hdlr
 * DESCRIPTION
 *  This is ircomm_connect_ind_hdlr function of L4C module.
 *  is called when receive irda disconnect indication
 *  and imform MMI/RMMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void ircomm_disconnect_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_IRCOMM_DISCONNECT_IND_HDLR_ENTRY);
    PS_UART_PORT = L4C_PTR->uart_port_value;    /* set uart to IRDA port */

#if defined(__BT_SUPPORT__)
    RMMI_COMM_PTR->port[0] = PS_UART_PORT;
#endif 

    rmmi_obtain_uart_control(L4C_PTR->uart_port_value); /* set uart owner */
    l4c_eq_ircomm_disconnect_lind();

    return;

}
#endif /* __IRDA_SUPPORT__ */ 


#if defined(__MMI_FMI__) 
/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_ready_notify_req
 * DESCRIPTION
 *  MMI sent the message to inform L4C that it is ready.
 *  L4C turns on the flag to store the information.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_ready_notify_req(void)
{
#if !defined(__UCM_SUPPORT__)
    L4C_PTR->mmi_ready_flag = KAL_TRUE;
#endif
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_at_general_res_req
 * DESCRIPTION
 *  MMI sent the message to inform L4C the previous action is successful or fail
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
#if defined(__TC01__)
/* under construction !*/
#endif
void l4c_at_general_res_req(kal_bool result, kal_uint8* string)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (l4c_ptr->route_thru_lmmi == KAL_TRUE)
    {
        rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
    }

    #if defined(__TC01__)
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
		#ifndef EXTERNAL_MMI
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
		#else
/* under construction !*/
		#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif

    switch (rmmi_ptr->action_cmd)
    {
    #ifdef __MMI_FMI__
    #if !defined(__DISABLE_SELDOM_USED_PROPRIETARY_CMD__) //at+emmistr is a seldom use command
        case RMMI_CMD_ATEMMISTR:
        {
            if (result == KAL_FALSE)
            {
                if (rmmi_ptr->MMI_string_enable == RMMI_EMMISTR_ENABLE ||
                    rmmi_ptr->MMI_string_enable == RMMI_EMMISTR_DATA_FROM_MMI)
                {
                    rmmi_ptr->MMI_string_enable = RMMI_EMMISTR_DISABLE;
                }
                //else
                //  RMMI_PTR->MMI_string_enable = KAL_TRUE;
            }
            break;
        }
    #endif
    #endif
        default:
            break;
    }

    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    l4c_ptr->route_thru_lmmi = KAL_FALSE;

    rmmi_ptr->action_cmd = RMMI_MAX_CMD_NUM;

    if ((l4c_ptr->phb_current_action == CPBW_LN ||
         l4c_ptr->phb_current_action == CPBW_EXE ||
         l4c_ptr->phb_current_action == CPBD_EXE ||
         l4c_ptr->phb_current_action == CPBD_LN) && l4c_ptr->phb_user >= RMMI_SRC)
    {
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }
}

#ifdef __CMUX_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_cmux_dlc_connect_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_cmux_dlc_connect_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    cmux_dlc_connect_ind_struct *msg_ptr = NULL;
    kal_uint8 i, cid, port;
    kal_uint8 temp_src; 
    kal_uint8 channel_type;
    sim_interface_enum simid;
    static kal_uint8 current_cmux_cid[RMMI_MAX_SIM_NUM];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ASSERT(local_para_ptr != NULL);

    msg_ptr = (cmux_dlc_connect_ind_struct*) local_para_ptr;

    port = rmmi_cid_2_port(0);
    if (port < start_of_virtual_port)
    {
        //this is the first channel
        if (rmmi_current_mod_id == MOD_ATCI)
        {
            rmmi_root_plugout_uart((kal_uint8)PS_UART_PORT);
            PS_UART_PORT = msg_ptr->port;

            for (i=0; i<RMMI_MAX_SIM_NUM; i++)
            {
                current_cmux_cid[i] = 1;   //cmux channel start with 1
            }
        }            
    }

    // compute current simID
    simid = rmmi_current_mod_id - MOD_ATCI;

    // Insert port to RMMI ROOT
    RMMI_UART_SetOwner(msg_ptr->port, MOD_ATCI);
    rmmi_root_plugin_uart((kal_uint8)msg_ptr->port);
    cid = rmmi_port_2_cid((kal_uint8)msg_ptr->port);
    rmmi_root_set_uart_owner(cid, simid);

    // update channel context
    // MAUI_01654934, mtk02285, 20090401 ~       
    if (RMMI_PTR->rsp_mode.echo_flag & (0x01 << 0)) // if cid=0 is echo ON
    {  
        RMMI_PTR->rsp_mode.echo_flag |= (0x01 << cid);
    }
    else // if cid=0 is echo OFF
    {
        RMMI_PTR->rsp_mode.echo_flag &= ~(0x01 << cid);
    }
    // ~ MAUI_01654934, mtk02285, 20090401


    // Check channel type.
    //channel_type = cmux_get_channel_def(current_cmux_cid[simid]); 
	channel_type = msg_ptr->type;
    kal_brief_trace(TRACE_INFO, RMMI_PARAM_D, channel_type);

    if (channel_type == CMUX_URC_CHANNEL && RMMI_PTR->rmmi_urc_channel_src == INVALID_SRC)
    {
        RMMI_PTR->rmmi_urc_channel_src = rmmi_cid_2_srcid(cid);
    }
    else if (channel_type == CMUX_DATA_CHANNEL && RMMI_PTR->rmmi_data_channel_src == INVALID_SRC)
    {
        RMMI_PTR->rmmi_data_channel_src = rmmi_cid_2_srcid(cid);
    }
    // Count CMUX channel number
    current_cmux_cid[simid]++;

    // Check if we reach the end of the channels
    if (current_cmux_cid[simid] == CMUX_VP_NUM_FOR_SINGLE_SIM)
    {
        RMMI_COMM_PTR->cmux_enable = KAL_TRUE;

        temp_src = rmmi_ptr->current_src; 
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_at_ready_rind();
        RMMI_PTR->current_src = temp_src;
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_cmux_close_down_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_cmux_close_down_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 i = 1;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    RMMI_COMM_PTR->cmux_enable = KAL_FALSE;

    for (i=0; i<RMMI_MAX_SIM_NUM; i++)
    {
        rmmi_ptr->rmmi_urc_channel_src = INVALID_SRC;
        rmmi_ptr->rmmi_data_channel_src = INVALID_SRC;
    }

    rmmi_root_plugout_uart((kal_uint8)PS_UART_PORT);
    PS_UART_PORT = RMMI_COMM_PTR->physical_port; //mtk02285, 201003, 6251_ram
    rmmi_root_plugin_uart((kal_uint8)PS_UART_PORT);
    rmmi_obtain_uart_control(RMMI_COMM_PTR->physical_port, KAL_FALSE); //mtk02285, 201003, 6251_ram

    rmmi_ptr->current_src = RMMI_SRC;
    //rmmi_result_code_fmttr(RMMI_RCODE_OK,L4C_NO_CAUSE);
    l4c_at_ready_rind();

#if defined(__IPV4V6__) && defined(__RMMI_UT__)
    ASSERT(NULL == L4C_COMM_PTR->v4v6_act_ptr);
#endif
}

#endif /* __CMUX_SUPPORT__ */ 

#if defined(__BT_SUPPORT__)


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_spp_conncet_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_spp_conncet_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    bt_spp_connect_ind_struct *msg_ptr = NULL;
    
    ASSERT(local_para_ptr != NULL);
    msg_ptr = (bt_spp_connect_ind_struct*) local_para_ptr;

    RMMI_UART_Open(msg_ptr->port, MOD_ATCI);

    rmmi_root_plugin_uart(msg_ptr->port);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_hf_conncet_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_hf_conncet_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __BT_SEQ_SUPPORT__    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	
    bt_hf_connect_ind_struct *msg_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 sim_id;
    kal_uint8 cid,src_id;
    
    ASSERT(local_para_ptr != NULL);

    msg_ptr = (bt_hf_connect_ind_struct*) local_para_ptr;

#ifdef __BT_SEQ_SUPPORT__    
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
        #ifdef __MTK_INTERNAL__
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
#endif /* __BT_SEQ_SUPPORT__ */

    kal_brief_trace(TRACE_INFO, INFO_HFP_CONNECTED,msg_ptr->port);

    RMMI_UART_Open(msg_ptr->port, MOD_ATCI);
    rmmi_root_plugin_uart(msg_ptr->port);
    cid = rmmi_port_2_cid(msg_ptr->port);
    src_id = rmmi_cid_2_srcid(cid);
    rmmi_root_set_uart_owner_by_srcid(src_id,(rmmi_current_mod_id-MOD_ATCI));

    RMMI_COMM_PTR->rmmi_hf_src = rmmi_cid_2_srcid(rmmi_port_2_cid(msg_ptr->port));
    /* Init all RMMI related context to support Gemini BT HF by L4C */
    for (sim_id=0; sim_id<RMMI_MAX_SIM_NUM; sim_id++)
    {
        (&rmmi_cntxt_g[sim_id])->rsp_mode.echo_flag &= ~(0x01 << rmmi_port_2_cid(msg_ptr->port));
        (&rmmi_cntxt_g[sim_id])->report_mode.cmer_mode = 3;
        (&rmmi_cntxt_g[sim_id])->report_mode.cmer_ind = 1;
    }


}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_hf_slc_finish_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_hf_slc_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    RMMI_COMM_PTR->hf_urc_report_flag = KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_bt_reset_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_uart_bt_reset_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 cid;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    for (cid = 1; cid < RMMI_MAX_CHANNEL_NUMBER; cid++)       //reset rmmi uart context
    {
        if (RMMI_COMM_PTR->port[cid] >= start_of_virtual_port)
        {
            rmmi_root_plugout_uart(RMMI_COMM_PTR->port[cid]);
        }
    }
    rmmi_ptr->report_mode.cmer_mode = 0;
    rmmi_ptr->report_mode.cmer_ind = 0;

    rmmi_send_msg_to_bt(MSG_ID_BT_L4C_RESET_REQ, NULL);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_l4c_at_general_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_l4c_at_general_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    bt_l4c_at_general_cnf_struct *msg_ptr = NULL;

    ASSERT(local_para_ptr != NULL);

    msg_ptr = (bt_l4c_at_general_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_pcm_lb_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_pcm_lb_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    bt_pcm_lb_rsp_struct *msg_ptr = NULL;

    msg_ptr = (bt_pcm_lb_rsp_struct*) local_para_ptr;

    if (msg_ptr->result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_get_bd_addr_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_get_bd_addr_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    bt_read_bd_addr_cnf_struct *msg_ptr = NULL;

    msg_ptr = (bt_read_bd_addr_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == KAL_TRUE)
    {
        kal_uint8 bd_addr_str[MAX_UART_LENGTH];
        kal_uint8 buffer[MAX_UART_LENGTH];
        kal_uint16 string_length = 0;

        check_sms_pdu_string(6, msg_ptr->bd_addr, bd_addr_str);
        kal_sprintf((char*)buffer, "+EMBT: %s", bd_addr_str);
        string_length = strlen((char*)buffer);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    return;
}

// add by stanley: 2006-0721 for MSG_ID_BT_L4C_TEST_CMD_CNF processing


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_test_cmd_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_test_cmd_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

    bt_test_cmd_rsp_struct *msg_ptr = NULL;

    msg_ptr = (bt_test_cmd_rsp_struct*) local_para_ptr;
    //write the test cmd rsp to Windows BlueTool
    rmmi_write_to_uart(msg_ptr->test_cmd_rsp_buf, msg_ptr->length, KAL_FALSE);

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_bt_adv_test_mode_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_bt_adv_test_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}
 /* __BT_SUPPORT__ */
#endif /* defined(__BT_SUPPORT__) */ 

#ifdef SYNCML_DM_SUPPORT
 /*****************************************************************************
 * FUNCTION
 *  rmmi_dmui_lawmo_cmd_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_dmui_lawmo_cmd_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{    
    rmmi_lock_at_cmd_req_struct *msg_ptr;
    rmmi_lock_at_cmd_cnf_struct *cnf_msg_ptr;
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (rmmi_lock_at_cmd_req_struct*) local_para_ptr;
    
    if (msg_ptr->lock == KAL_TRUE)
    {
        RMMI_COMM_PTR->lock_atci = KAL_TRUE;
        
        #ifdef __DT_SUPPORT__
            rmmi_atci_send_ilm(MOD_DT, MSG_ID_ATCIDT_FORCE_TRANSFER_REQ, NULL, NULL);
            return;
        #endif
    }
    else
    {
        RMMI_COMM_PTR->lock_atci = KAL_FALSE;
    }

    cnf_msg_ptr = construct_local_para(
        (kal_uint16) sizeof(rmmi_lock_at_cmd_cnf_struct), TD_RESET);
    cnf_msg_ptr->result = KAL_TRUE;
    rmmi_atci_send_ilm(MOD_MMI, MSG_ID_RMMI_LOCK_AT_CMD_CNF, cnf_msg_ptr, NULL);
}

 /*****************************************************************************
 * FUNCTION
 *  rmmi_force_tansfer_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_force_tansfer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rmmi_atcidt_force_transfer_cnf_struct *msg_ptr;
    rmmi_lock_at_cmd_cnf_struct* cnf_msg_ptr;
    kal_uint8 port;
    kal_uint8 src_id;
    kal_uint8 cid;

    msg_ptr = (rmmi_atcidt_force_transfer_cnf_struct*) local_para_ptr;
    port = msg_ptr->port;
    cid = rmmi_port_2_cid(port);
    src_id = rmmi_cid_2_srcid(cid);
    
    if (port == uart_port_null)
    {
        kal_trace(TRACE_ERROR, ERROR_INVALID_PORT);
    }
    else
    {
        if (msg_ptr->is_dt == KAL_TRUE)
        {
            rmmi_obtain_uart_control(port, KAL_FALSE);
            rmmi_clear_uart_queue(cid);
        }
    }    
    
    cnf_msg_ptr = construct_local_para(
        (kal_uint16) sizeof(rmmi_lock_at_cmd_cnf_struct), TD_RESET);
    cnf_msg_ptr->result = KAL_TRUE;
    rmmi_atci_send_ilm(MOD_MMI, MSG_ID_RMMI_LOCK_AT_CMD_CNF, cnf_msg_ptr, NULL);


}
#endif

#if defined(__MMI_FMI__) && defined(__GEMINI__) 
 /*****************************************************************************
 * FUNCTION
 *  rmmi_master_sim_change_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_master_sim_change_req(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rmmi_master_sim_change_req_struct *req_struct = 
            (rmmi_master_sim_change_req_struct *) local_para_ptr;
    rmmi_master_sim_change_cnf_struct *cnf_struct;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;

    if (rmmi_comm_ptr->sim_uart_setting != req_struct->sim_setting)
    {
        /* MAUI_03099902 * 2011/12/22 * mtk02514 ***********
        * When bootup, if the UART setting is set to the SIM which is not inserted.
        * MMI will send master SIM change to L4C to change the uart setting.
        * But in this case, if USB is plug-in, the PS_UART_PORT owner would not be changed.
        * So here, to let user don't need to plug-out the USB again.
        * we change the PS_UART_PORT owner to default one.
        ************************************************/
        sim_interface_enum ps_uart_sim = rmmi_root_get_uart_owner(0);
        if ( l4c_cntxt_g[ps_uart_sim].sim_detected == KAL_FALSE)
        {
            if ( (ps_uart_sim + RMMI_UART_TO_SIM1) != req_struct->sim_setting)
            {
                rmmi_root_set_uart_owner(0, req_struct->sim_setting-RMMI_UART_TO_SIM1);
            }
        }
    
        // update SIM UART setting
        rmmi_comm_ptr->sim_uart_setting = req_struct->sim_setting;
    }

    cnf_struct = construct_local_para(
            (kal_uint16) sizeof(rmmi_master_sim_change_cnf_struct), TD_RESET);
    cnf_struct->result = KAL_TRUE;
    rmmi_atci_send_ilm(
            MOD_MMI, 
            MSG_ID_MMI_ATCI_MASTER_SIM_CHANGE_CNF, 
            cnf_struct, NULL);
}
#endif

 /*****************************************************************************
 * FUNCTION
 *  rmmi_nvram_read_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_nvram_read_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    #if defined(__ATCMD_ONOFF_CHECK__)

    nvram_read_cnf_struct *msg_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 length = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_NVRAM_READ_CNF_HDLR_ENTRY);

    msg_ptr = (nvram_read_cnf_struct*) local_para_ptr;
    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
    {
        return;
    }
    else
    {
        pdu_ptr = (kal_uint8*) get_peer_buff_pdu(peer_buff_ptr, &length);
    }

    if (msg_ptr->file_idx == NVRAM_EF_ATCMD_ON_OFF_CHECK_LID)
    {
        atcmd_check_context_struct *check_ptr = 
                (atcmd_check_context_struct*) pdu_ptr;

        rmmi_check_at_enable = (kal_bool)(check_ptr->enable_flag & 0x00000001);
    }

    #endif
}


void rmmi_atci_send_ilm(module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{
    msg_send6(rmmi_current_mod_id,dest_id,ATCI_SAP,(msg_type) msg_id,(local_para_struct*) local_param_ptr,
              (peer_buff_struct*) peer_buf_ptr);
    
}

void rmmi_send_ilm(module_type dest_id, kal_uint16 msg_id, kal_uint8 queue_class, void *local_param_ptr, void *peer_buf_ptr)
{
    msg_send6(rmmi_current_mod_id,dest_id,ATCI_SAP,(msg_type) msg_id,(local_para_struct*) local_param_ptr,
              (peer_buff_struct*) peer_buf_ptr);
}

#if defined(__DT_SUPPORT__) || defined(__GEMINI__) 
/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_transfer_req_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_uart_transfer_req_hdlr(module_type mod_id, local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cdt_uart_transfer_req_struct *msg_ptr = (l4cdt_uart_transfer_req_struct*) local_para_ptr;
    l4cdt_uart_transfer_cnf_struct *msg_ptr2; 
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    cid = rmmi_port_2_cid(msg_ptr->port);
    src_id = rmmi_cid_2_srcid(cid);
    
    if (msg_ptr->port == uart_port_null)
    {
        kal_trace(TRACE_ERROR, ERROR_INVALID_PORT);
        return;
    }

    msg_ptr2 = (l4cdt_uart_transfer_cnf_struct*)
                            construct_local_para((kal_uint16) sizeof(l4cdt_uart_transfer_cnf_struct), TD_RESET);
    msg_ptr2->port = msg_ptr->port;

    rmmi_obtain_uart_control(msg_ptr->port, KAL_FALSE);
    
    //initial context
    rmmi_clear_uart_queue(cid);
    //set uart owner
    rmmi_root_set_uart_owner(cid, rmmi_current_mod_id - MOD_ATCI);
           
    rmmi_ptr->current_src = src_id;
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

    msg_ptr2->result = KAL_TRUE;
    rmmi_send_ilm(mod_id, MSG_ID_ATCIDT_UART_TRANSFER_CNF, 1, msg_ptr2, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_transfer_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_uart_transfer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cdt_uart_transfer_cnf_struct *msg_ptr = (l4cdt_uart_transfer_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    cid = rmmi_port_2_cid(msg_ptr->port);
    src_id = rmmi_cid_2_srcid(cid);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    
    if (msg_ptr->result == KAL_TRUE)
    {
        //clear context
        rmmi_clear_uart_queue(cid);
        RMMI_COMM_PTR->transfer.dest_mod = MOD_NIL;   
        RMMI_COMM_PTR->transfer.port = uart_port_null;   
    }
    else
    {
       rmmi_ptr->current_src = src_id;
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_uart_transfer_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_uart_transfer_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cdt_uart_transfer_ind_struct *msg_ptr = (l4cdt_uart_transfer_ind_struct*) local_para_ptr;
    kal_uint8 cid;

    cid = rmmi_port_2_cid(msg_ptr->port);

    if (msg_ptr->port == uart_port_null)
    {
        kal_trace(TRACE_ERROR, ERROR_INVALID_PORT);
        return;
    }

    rmmi_obtain_uart_control(msg_ptr->port, KAL_TRUE);

    //clear context
    rmmi_clear_uart_queue(cid);
}

#endif

#if defined(__MESSAGE_BASED_AT_SUPPORT__) 
/*****************************************************************************
 * FUNCTION
 *  rmmi_register_channel_req_hdlr
 * DESCRIPTION
 *  This function is used to register and enable message based AT command interfaces
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 * RETURNS
 *  none
 *****************************************************************************/
void rmmi_register_channel_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr, module_type src_mod)
{
    kal_uint8 ch_num;
    rmmi_register_channel_req_struct *req_ptr = (rmmi_register_channel_req_struct*)local_para_ptr;
    rmmi_register_channel_cnf_struct *rsp_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rsp_ptr = (rmmi_register_channel_cnf_struct*)
            construct_local_para((kal_uint16) sizeof(rmmi_register_channel_cnf_struct), TD_RESET);

    ch_num = req_ptr->ch_num;
    kal_brief_trace(TRACE_INFO, INFO_MSG_BASED_REGISTER, ch_num);
    
    if (ch_num > RMMI_MAX_MSG_BASED_AT_CHANNEL)
    {
        rsp_ptr->result = KAL_FALSE;
    }
    else
    {
        rsp_ptr->result = KAL_TRUE;

        // assign port/src mapping
        rsp_ptr->begin_port_id = rmmi_msgbased_register_channel(ch_num);

        rmmi_ptr->msg_based_at_enable = KAL_TRUE;
    }

    rmmi_atci_send_ilm(
            src_mod, 
            MSG_ID_RMMI_REGISTER_CHANNEL_CNF, 
            rsp_ptr, NULL);
    
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_execution_at_req_hdlr
 * DESCRIPTION
 *  This function is used to execute the AT command from message based AT
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 * RETURNS
 *  none
 *****************************************************************************/
void rmmi_execution_at_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr, module_type src_mod)
{

    kal_uint16 length;
    kal_uint8 *data;
    kal_uint8 port_id, src_id;
    rmmi_exe_at_req_struct *req_ptr = (rmmi_exe_at_req_struct*) local_para_ptr;
    rmmi_exe_at_cnf_struct *rsp_ptr;
    rmmi_string_struct temp_struct;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rsp_ptr = (rmmi_exe_at_cnf_struct*)
            construct_local_para((kal_uint16) sizeof(rmmi_exe_at_cnf_struct), TD_RESET);

    //get AT command data;
    data = get_peer_buff_pdu(peer_buff_ptr, &length);
    src_id = rmmi_cid_2_srcid(rmmi_port_2_cid(req_ptr->port_id));
    kal_brief_trace(TRACE_INFO, INFO_MSG_BASED_EXECUTION, req_ptr->port_id, src_id, req_ptr->length, length);
    
    //assign port ID
    rsp_ptr->port_id = port_id = req_ptr->port_id;
    //assign length;
    length = req_ptr->length;
    
    if ( (rmmi_ptr->msg_based_at_enable == KAL_FALSE) || (length>=2048))
    {
        rsp_ptr->result = KAL_FALSE;
    }
    else 
    {
        rsp_ptr->result = KAL_TRUE;

        data[length] = RMMI_END_OF_STRING_CHAR;

        temp_struct.index = 0;
        temp_struct.string_ptr = data;
        temp_struct.src_id = src_id;
        
        rmmi_cmd_processor(&temp_struct, length);
    }

    rmmi_atci_send_ilm(
            src_mod, 
            MSG_ID_RMMI_EXE_AT_CNF,
            rsp_ptr, NULL);

}
#endif

#ifdef __ECALL_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_monitor_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_monitor_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_monitor_cnf_struct *msg_ptr = (media_aud_emsd_monitor_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;

    src_id = msg_ptr->src_id;

    cid = rmmi_srcid_2_cid(src_id);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    if (l4c_check_user_action(L4C_CC, src_id, EMSD_EXE) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_CC, src_id, L4C_NO_ACTION);
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = src_id;
    if (msg_ptr->result == KAL_TRUE)
    {  
       rmmi_result_code_fmttr(RMMI_RCODE_OK, RMMI_ERR_UNKNOWN); 
    }
    else
    {
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->current_src= temp_src;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_set_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_set_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_set_cnf_struct *msg_ptr = (media_aud_emsd_set_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;

    src_id = msg_ptr->src_id;

    cid = rmmi_srcid_2_cid(src_id);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    if (l4c_check_user_action(L4C_CC, src_id, EMSDSET_EXE) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_CC, src_id, L4C_NO_ACTION);
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = src_id;
    if (msg_ptr->result == KAL_TRUE)
    {  
       rmmi_result_code_fmttr(RMMI_RCODE_OK, RMMI_ERR_UNKNOWN); 
    }
    else
    {
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->current_src= temp_src;
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_push_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_push_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_push_cnf_struct *msg_ptr = (media_aud_emsd_push_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;

    src_id = msg_ptr->src_id;

    cid = rmmi_srcid_2_cid(src_id);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    if (l4c_check_user_action(L4C_CC, src_id, EMSDPUSH_EXE) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_CC, src_id, L4C_NO_ACTION);
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = src_id;
    if (msg_ptr->result == KAL_TRUE)
    {  
       rmmi_result_code_fmttr(RMMI_RCODE_OK, RMMI_ERR_UNKNOWN); 
    }
    else
    {
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->current_src= temp_src;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_pull_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_pull_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_pull_ind_struct *msg_ptr = (media_aud_emsd_pull_ind_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    temp_src = rmmi_ptr->current_src;    
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+EMSDPULL", rmmi_ptr->arg_list, 0);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_ptr->current_src = temp_src;
    
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_sync_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_sync_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_sync_ind_struct *msg_ptr = (media_aud_emsd_sync_ind_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    temp_src = rmmi_ptr->current_src;    
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+EMSDSYNC", rmmi_ptr->arg_list, 0);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_ptr->current_src = temp_src;
    
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_lack_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_lack_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_lack_ind_struct *msg_ptr = (media_aud_emsd_lack_ind_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    temp_src = rmmi_ptr->current_src;    
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+EMSDLACK", rmmi_ptr->arg_list, 0);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_ptr->current_src = temp_src;
    
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_hack_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_hack_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_hack_ind_struct *msg_ptr = (media_aud_emsd_hack_ind_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    temp_src = rmmi_ptr->current_src;    
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    rmmi_ptr->arg_list[0]= (void*)&msg_ptr->result;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+EMSDHACK:%d", rmmi_ptr->arg_list, 1);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_ptr->current_src = temp_src;
    
}
#endif 

#ifdef __ECALL_PSAP_SUPPORT__ 
/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_psap_monitor_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_psap_monitor_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_psap_monitor_cnf_struct *msg_ptr = (media_aud_emsd_psap_monitor_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;

    src_id = msg_ptr->src_id;

    cid = rmmi_srcid_2_cid(src_id);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    if (l4c_check_user_action(L4C_CC, src_id, EPSAP_EXE) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_CC, src_id, L4C_NO_ACTION);
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = src_id;
    if (msg_ptr->result == KAL_TRUE)
    {  
       rmmi_result_code_fmttr(RMMI_RCODE_OK, RMMI_ERR_UNKNOWN); 
    }
    else
    {
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->current_src= temp_src;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_psap_pull_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_psap_pull_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_psap_pull_cnf_struct *msg_ptr = (media_aud_emsd_psap_pull_cnf_struct*) local_para_ptr;
    kal_uint8 cid;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;

    src_id = msg_ptr->src_id;

    cid = rmmi_srcid_2_cid(src_id);

    if (cid == uart_port_null)
    {        
        kal_trace(TRACE_WARNING, RMMI_SRC_ID_AND_CID, INVALID_SRC, cid);
        return;
    }
    if (l4c_check_user_action(L4C_CC, src_id, EPSAPPULL_EXE) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_CC, src_id, L4C_NO_ACTION);
    }
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = src_id;
    if (msg_ptr->result == KAL_TRUE)
    {  
       rmmi_result_code_fmttr(RMMI_RCODE_OK, RMMI_ERR_UNKNOWN); 
    }
    else
    {
       rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->current_src= temp_src;
}
/*****************************************************************************
 * FUNCTION
 *  rmmi_media_aud_emsd_psap_data_ind_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void rmmi_media_aud_emsd_psap_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_emsd_psap_data_ind_struct *msg_ptr = (media_aud_emsd_psap_data_ind_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src;
    kal_uint16 string_length;
    kal_uint8 buffer[512];
    kal_uint8 *str;
    kal_uint16 i,j=0;

    temp_src = rmmi_ptr->current_src;    
    rmmi_ptr->current_src = RMMI_UNSOLICITED;

    str = (kal_uint8*)get_ctrl_buffer(512);

    j=0;
    for (i=0; i<EMSD_DATA_LEN; i++)
    {
        kal_sprintf((char*)str +j, "%02X", msg_ptr->data[i]); // M=2
        j += 2;
    }
    str[j] = '\0';

    rmmi_ptr->arg_list[0]= (void*)str;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) (kal_uint8*) "+EPSAPIND:%s", rmmi_ptr->arg_list, 1);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_ptr->current_src = temp_src;
    free_ctrl_buffer(str);
    
}    


#endif 
