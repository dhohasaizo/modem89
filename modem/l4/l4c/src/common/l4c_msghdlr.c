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
 * L4C_MSGHDLR.C
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_MSGHDLR_C
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "sysconf_statistics.h"
#include "kal_trace.h"
#include "kal_public_api.h"

#ifdef __MOD_SMU__
#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#endif /* __MOD_SMU__ */ 

#include "dcl.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
#include "l4_trc.h"
#ifdef __MOD_SMU__
#include "ps2sat_struct.h"
#endif 
#ifdef __MOD_SMU__
//#include "l4c2smu_struct.h"
#endif 

#include "ps2sat_struct.h"

#ifdef __MOD_NVRAM__
#include "nvram_data_items.h"
//#include "nvram_user_defs.h"
#include "nvram_struct.h"
#include "nvram_enums.h"
#endif /* __MOD_NVRAM__ */ 
#ifdef __MOD_RAC__
//#include "mcd_l3_inc_struct.h"

#endif /* __MOD_RAC__ */ 
#include "l3_inc_enums.h"
#ifdef __MOD_TCM__
#include "abm2l4c_struct.h"
#endif /* __MOD_TCM__ */ 
#ifdef __MOD_UEM__
#include "l4c2uem_struct.h"
#include "uem_proc_cmd.h"
#endif /* __MOD_UEM__ */ 

#ifdef __IRDA_SUPPORT__
#include "app2ircomm_struct.h"
#endif 

#include "abm2l4c_struct.h"

#include "l4c_utility.h"
#include "l4c_eq_cmd.h"

#if defined(__NFC_SUPPORT__)
#include "mtk_nfc_ext_msg.h"
#endif


#ifdef __SAT__
//#include "sat_def.h"
extern kal_bool l4c_sat_run_at_command_res(sat_run_at_command_res_struct *local_ptr);
#endif 

#include "dcl.h"

#include "csmcc_atfunc.h"

#include "l4c_common_enum.h"
#include "ps2sat_struct.h"
#include "lmmi_ind.h"
#include "rmmi_ind.h"

#include "lmmi_rsp.h"

#include "rmmi_rsp.h"
#include "csmcc_atfunc.h"
#include "rmmi_rspfmttr.h"

#include "l4c2rac_struct.h"
#include "task_config.h"

#include "ps_em_enum.h"

#ifdef __CMUX_SUPPORT__
//#include "cmux_def.h"
#endif 

#ifdef __HOMEZONE_SUPPORT__
#include "l4c_hz_utility.h"
#include "l4c_hz_context.h"
#endif

#include "as2l4c_struct.h"  

#ifdef __RMMI_EXTEND_CUSTOM_CMD__
#include "rmmi_custom_inc.h"
#endif
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "l4c_root.h"

#include "drv_sap.h"
#include "svc_sap.h"
#include "md_sap.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "ps_public_l4_msgid.h"

#if defined(__UMTS_FDD_MODE__)
#include "ul1_cnst.h"
#include "ul1_def.h"
#include "ul1_struct.h"
#endif
#ifdef UART_ENABLE
#include "rmmi_sio.h"
#endif

#ifdef __MBIM_SUPPORT__
#include "mbci_msg.h"
#endif

#include "l4c_sms_cmd.h"
#include "l4c_sim_cmd.h"

#if defined(__NBR_CELL_INFO__)
#if defined(__ANDROID_RIL_SUPPORT__)
#include "ipc_msgsvc_msgid.h"
#endif
#endif

#if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
#include "ostd_public.h"
#endif

#include "ccci.h" //for Thermal

#if defined(__BT_SUPPORT__)
//#include "bluetooth_struct.h"
/* for pts V2.1.0.4 */
/* cannot update indicators to remote bluetooth headset while HFP is connected */
/* indicators shall be retrieved by remote HF AT+CIND? */
/* so for pts V2.1.0.4, host will not udpate indicators while HFP is just connected */
extern unsigned char g_enable_pts_test; /* 0: disable, 1: enable */
#endif /* defined(__BT_SUPPORT__) */ 

//AT_FRST

extern UART_PORT PS_UART_PORT;
extern kal_bool stack_update_sys_statistics(stack_statistics_struct *prev_stats);
extern void rmmi_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause);
extern void toUpper(kal_uint8 *str);

extern kal_uint32 stack_get_statistics_struct_size(void);

//extern void cmux_channel_definition(kal_uint8* ch1, kal_uint8* ch2, kal_uint8* ch3);
#ifdef UART_ENABLE
extern kal_uint8 send_Rxilm[2];
#endif 

#ifdef __MOD_NVRAM__


/*****************************************************************************
 * FUNCTION
 *  nvram_startup_cnf_hdlr
 * DESCRIPTION
 *  This is nvram_startup_cnf_hdlr function of L4C module.
 *  is called when receive nvram startup confirm
 *  and notify MMI for power on if success
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_startup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_startup_cnf_struct *msg_ptr = NULL;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
#ifdef __GEMINI__
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR; //for slim
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_NVRAM_STARTUP_CNF_HDLR_ENTRY);

    msg_ptr = (nvram_startup_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == NVRAM_ERRNO_SUCCESS)
    {
    #ifdef __MOD_UEM__
        /* act uem */
        l4cuem_startup_req_struct *param_ptr;

        param_ptr = (l4cuem_startup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4cuem_startup_req_struct), TD_RESET);

        param_ptr->src_id = LMMI_SRC;
        l4c_send_msg_to_uem(MSG_ID_L4CUEM_STARTUP_REQ, param_ptr, NULL);
    #endif /* __MOD_UEM__ */ 

    #ifdef __MOD_RAC__
    {
        l4crac_act_req_struct *param1_ptr;
        kal_uint8 i;
    #ifdef __GEMINI__
        module_type mod_id;
        module_type temp_mod_id = l4c_current_mod_id;
    #endif
        
        /* activate all RAC */
        for (i=0; i<L4_MAX_SIM_NUM; i++)
        {
        #ifdef __GEMINI__
            mod_id = L4_MODULE(MOD_L4C, i);
            layer4_module_context_selection(mod_id);
        #endif
            param1_ptr = (l4crac_act_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4crac_act_req_struct), TD_RESET);
            param1_ptr->src_id = LMMI_SRC2;
            l4c_send_msg_to_rac(MSG_ID_L4CRAC_ACT_REQ, param1_ptr);
        }
    #ifdef __GEMINI__
        layer4_module_context_selection(temp_mod_id);
    #endif
    }
    #endif
    
    #ifdef __GEMINI__        
        l4c_comm_ptr->flightmode_state = (kal_uint8) msg_ptr->data[L4C_SETTING_FLIGHT_MODE];
        l4c_comm_ptr->dual_sim_mode_setting = (kal_uint8) msg_ptr->data[L4C_SETTING_DUAL_SIM_MODE];
        
        #ifdef __DISABLE_SIM2_AT_SUPPORT__
        rmmi_comm_ptr->sim_uart_setting = RMMI_UART_TO_SIM1;
        #else
        rmmi_comm_ptr->sim_uart_setting = (kal_uint8) msg_ptr->data[L4C_SETTING_DUAL_SIM_UART];
        #endif
        rmmi_comm_ptr->rmmi_uart_owner[0] = msg_ptr->data[L4C_SETTING_DUAL_SIM_UART] - RMMI_UART_TO_SIM1;
    #ifdef __GEMINI_3G_SWITCH__
        {
            kal_uint8 service_bitmap;
            sim_interface_enum default_3g_simId = SIM1;
            kal_char buf[55];
            kal_uint8 i;
            
            // workaround: prevent in-consistent state caused by request while still initializing
            // side effect: AP and MD state may no longer be consistent (SP will reset modem)
            if (!l4c_comm_ptr->c3gs_ref_flag)
            {
                service_bitmap = (kal_uint8) msg_ptr->data[L4C_SETTING_3G_SERVICE_BITMAP];
                l4c_comm_ptr->cur_3g_capability = service_bitmap;

                i = 1;
                do{
                    service_bitmap >>= 1;

                    if (service_bitmap & 0x01)
                    {
                        default_3g_simId = SIM1 + i;
                        l4c_cntxt_g[i].cur_3g_switch_map = SIM1;
                    }
                    else
                    {
                        l4c_cntxt_g[i].cur_3g_switch_map = SIM1 + i;
                    }

                    i++;
                } while(i<L4_MAX_SIM_NUM);
                l4c_cntxt_g[0].cur_3g_switch_map = default_3g_simId;
            }
        
            kal_sprintf(buf, "[SIM Switch Info] Current used 3G SIM: %d", default_3g_simId);
            kal_sys_trace(buf);
        }
    #endif /*__GEMINI_3G_SWITCH__*/

    #else /* __GEMINI__ */ 
        l4c_comm_ptr->flightmode_state = (kal_uint8) msg_ptr->data[L4C_SETTING_FLIGHT_MODE];
    #endif /* __GEMINI__ */ 
    }
    else
    {
        /* power on fail */
    }
}


/*****************************************************************************
 * FUNCTION
 *  nvram_read_cnf_hdlr
 * DESCRIPTION
 *  This is nvram_read_cnf_hdlr function of L4C module.
 *  is called when receive nvram read confirm
 *  and pass the data read back to MMI if the initial
 *  request is from MMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_read_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_read_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint16 length = 0;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint8 src_id;
    kal_bool need_rsp = KAL_TRUE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_NVRAM_READ_CNF_HDLR_ENTRY);

    msg_ptr = (nvram_read_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->access_id;

    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
        pdu_ptr = (kal_uint8*) get_peer_buff_pdu(peer_buff_ptr, &length);
    }

    if (src_id == L4C_NVRAM_ACCESS_SRC) 
    {
        l4c_eq_read_nvram_lrsp(result, msg_ptr->file_idx, msg_ptr->length, msg_ptr->para, pdu_ptr);
        return;
    }
    
#if defined(__GEMINI__) && !defined(__MMI_FMI__)
    if ((msg_ptr->file_idx == NVRAM_EF_SYS_CACHE_OCTET_LID) && (l4c_ptr->eq_current_action == L4C_NO_ACTION))
    {        

        if (src_id >= RMMI_SRC)
        {
            if (l4c_ptr->dual_sim_mode_setting_command == RMMI_EDSIM_READING)
            {
                rmmi_ptr->current_src = src_id;
                if (msg_ptr->result == NVRAM_IO_ERRNO_OK)
                {
                    l4c_edsim_nvram_read_cnf_rrsp(KAL_TRUE, pdu_ptr);                
                }
                else
                {
                    l4c_edsim_nvram_read_cnf_rrsp(KAL_FALSE, pdu_ptr);
                }
                l4c_ptr->dual_sim_mode_setting_command = RMMI_EDSIM_NORMAL;
            }
            else
            {
                nvram_write_req_struct * param_ptr = NULL;
                kal_uint8 data[8] = {0,0,0,0,0,0,0,0};
                // Write the dual SIM setting to NVRAM
                param_ptr = (nvram_write_req_struct*)
                    construct_local_para((kal_uint16) sizeof(nvram_write_req_struct), TD_RESET);
                param_ptr->access_id = RMMI_SRC;
                param_ptr->file_idx = NVRAM_EF_SYS_CACHE_OCTET_LID;
                param_ptr->para = NVRAM_SYS_FLIGHTMODE_STATE;
                kal_mem_cpy((kal_uint8*)data, (kal_uint8*)pdu_ptr, sizeof(data));

                switch (l4c_ptr->dual_sim_mode_setting_command)
                {
                    case 0:
                    {
                        data[L4C_SETTING_FLIGHT_MODE] = KAL_TRUE;                            
  			   l4c_comm_ptr->flightmode_state = KAL_TRUE;
                        break;
                    }
                    case 1:
                    {
                        data[L4C_SETTING_FLIGHT_MODE] = KAL_FALSE;
  			   l4c_comm_ptr->flightmode_state = KAL_FALSE;
                        data[L4C_SETTING_DUAL_SIM_MODE] = SIM1_ONLY_CONFIG;
			   l4c_comm_ptr->dual_sim_mode_setting = SIM1_ONLY_CONFIG;						
                        break;
                    }
                    case 2:
                    {
                        data[L4C_SETTING_FLIGHT_MODE] = KAL_FALSE;                        
  			   l4c_comm_ptr->flightmode_state = KAL_FALSE;
                        data[L4C_SETTING_DUAL_SIM_MODE] = SIM2_ONLY_CONFIG;
			   l4c_comm_ptr->dual_sim_mode_setting = SIM2_ONLY_CONFIG;
                        break;
                    }
                    break;
                    case 3:
                    {
                        data[L4C_SETTING_FLIGHT_MODE] = KAL_FALSE;                        
  			   l4c_comm_ptr->flightmode_state = KAL_FALSE;
                        data[L4C_SETTING_DUAL_SIM_MODE] = DAUL_SIM_CONFIG;
			   l4c_comm_ptr->dual_sim_mode_setting = DAUL_SIM_CONFIG;
                        break;
                    }
                    break;
                    default:
                    {
                        break;
                    }
                }
                l4c_ptr->dual_sim_mode_setting_command = RMMI_EDSIM_WRITING;
                l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, (kal_uint8*) data, sizeof(data));
            }
            return;
        }
        else
        { 
            kal_sys_trace("NVRAM READ CNF: src_id < RMMI_SRC");
            return;
        }
    } /* end of if(msg_ptr->file_idx == NVRAM_EF_SYS_CACHE_OCTET_LID) */
#endif /* defined(__GEMINI__) && !defined(__MMI_FMI__) */

    /*mtk80396, Read PS conformance test setting during power on procedure */
    if(msg_ptr->file_idx == NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID)
    {
        kal_uint32 profile_setting;
        kal_char buf[80];
        
        kal_mem_cpy((kal_uint8*)&profile_setting, pdu_ptr, 4);
        l4c_comm_ptr->ps_conf_test_mode = (kal_uint8)(profile_setting >> 24);
        l4c_comm_ptr->ps_conf_test_profile = (profile_setting & 0x00FFFFFF );
        
        kal_sprintf(buf, "[Test Mode Info] Current Test Mode: %d, Special Setting: 0x%X", l4c_comm_ptr->ps_conf_test_mode, l4c_comm_ptr->ps_conf_test_profile);
        kal_sys_trace(buf);
        return;
    }

#ifdef __ETWS_SUPPORT__
    if (msg_ptr->file_idx == NVRAM_EF_ETWS_SETTING_LID)
    {
        l4c_sms_etws_setting_req(
                LMMI_SRC2, 
                (pdu_ptr[0] & RMMI_ETWS_IS_NEEDED) >>0, 
                (pdu_ptr[0] & RMMI_ETWS_IS_SECURITY_NEEDED) >>1,
                (pdu_ptr[0] & RMMI_ETWS_IS_TESTING_ON) >> 2,
                KAL_FALSE);

        return;
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

    if ((l4c_ptr->cc_current_action[src_id] == POWEROFF_EXE) && (msg_ptr->file_idx == NVRAM_EF_SYS_STATISTICS_LID))
    {
        kal_bool update;
        stack_statistics_struct *statistic;
		kal_uint32 nSizeStat = 0;

		nSizeStat = stack_get_statistics_struct_size();

        //statistic = (stack_statistics_struct*) get_ctrl_buffer(sizeof(stack_statistics_struct));
        //kal_mem_cpy(statistic, pdu_ptr, sizeof(stack_statistics_struct));

		statistic = (stack_statistics_struct*) get_ctrl_buffer(nSizeStat);
        kal_mem_cpy(statistic, pdu_ptr, nSizeStat);
		
        update = stack_update_sys_statistics(statistic);

        if (update == KAL_TRUE)
        {
            nvram_write_req_struct *param_ptr;

            param_ptr = (nvram_write_req_struct*)
                construct_local_para((kal_uint16) sizeof(nvram_write_req_struct), TD_RESET);

            param_ptr->access_id = src_id;
            param_ptr->file_idx = NVRAM_EF_SYS_STATISTICS_LID;
            param_ptr->para = 1;

            l4c_send_msg_to_nvm(
                MSG_ID_NVRAM_WRITE_REQ,
                param_ptr,
                (kal_uint8*) statistic,
                (kal_uint16)nSizeStat);
            free_ctrl_buffer(statistic);
            return;
        }
        else
        {
            free_ctrl_buffer(statistic);
        }
        //l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

        if (l4c_sim_poweroff_done() == KAL_TRUE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        #if defined(__GEMINI__)
            l4c_root_power_off_done_ind(src_id);
        #endif
            l4cuem_power_off_req();
        #if !defined(__MMI_FMI__)
            if(rmmi_ptr->poweroff_src_id != INVALID_SRC)
            {               
                rmmi_ptr->current_src = rmmi_ptr->poweroff_src_id;
                rmmi_final_rsp_generator(rmmi_ptr->poweroff_src_id, KAL_TRUE, NULL, 0);
                rmmi_ptr->poweroff_src_id = INVALID_SRC;//reset to prevent "OK" for AT+EPOF twice
            #if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
                OSTD_MD_Infinite_Sleep();
            #endif
            }                       
        #endif /* __SP_RIL_SUPPORT__ */ 
        }
        return;
    }
    
    if (l4c_check_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION) != KAL_TRUE)
    {
        switch (l4c_ptr->eq_current_action)
        {
            case MS_SV_READ:                
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                rmmi_ptr->current_src = src_id;
                l4c_eq_read_ms_sv_rrsp(result, length, pdu_ptr);
                need_rsp = KAL_FALSE;
                break;
            }
            case MS_SN_READ:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                rmmi_ptr->current_src = src_id;
                l4c_eq_read_ms_sn_rrsp(result, length, pdu_ptr);
                need_rsp = KAL_FALSE;
                break;
            }
        #if defined(NEPTUNE_MMI)
            case TEST_REPORT_READ:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                rmmi_ptr->current_src = src_id;
                l4c_eq_read_autotest_report_rrsp(((result.flag == L4C_OK)? KAL_TRUE : KAL_FALSE), 
                                                 length, 
                                                 pdu_ptr);
                need_rsp = KAL_FALSE;
                break;
            }
        #endif
            case UART_PORT_READ:
            {
                port_setting_struct port_set;

                kal_mem_cpy((kal_uint8*) & port_set, (kal_uint8*) pdu_ptr, sizeof(port_setting_struct));

                #if defined(__DSP_FCORE4__)
                    l4c_eq_get_uart_port_lrsp(KAL_TRUE, 
                                            (kal_uint8) port_set.ps_port, 
                                            port_set.ps_baudrate, 
                                            (kal_uint8) port_set.tst_port_ps, 
                                            port_set.tst_baudrate_ps, 
                                            (kal_uint8) port_set.cti_uart_port, 
                                            port_set.cti_baudrate, 
                                            (kal_uint8) port_set.tst_port_l1, 
                                            port_set.tst_baudrate_l1, 
                                            port_set.tst_output_mode, 
                                            port_set.usb_logging_mode,
                                            (kal_uint8) port_set.tst_port_dsp,
                                            port_set.tst_baud_rate_dsp,
                                            port_set.High_Speed_SIM_Enabled,
                                            port_set.swdbg,
                                            port_set.uart_power_setting);             
                #else
                l4c_eq_get_uart_port_lrsp(KAL_TRUE, 
                                        (kal_uint8) port_set.ps_port, 
                                        port_set.ps_baudrate, 
                                        (kal_uint8) port_set.tst_port_ps, 
                                        port_set.tst_baudrate_ps, 
                                        (kal_uint8) port_set.cti_uart_port, 
                                        port_set.cti_baudrate, 
                                        (kal_uint8) port_set.tst_port_l1, 
                                        port_set.tst_baudrate_l1, 
                                        port_set.tst_output_mode, 
                                        port_set.usb_logging_mode,
                                        0xff,
                                        0xffffffff,
                                        port_set.High_Speed_SIM_Enabled,
                                        port_set.swdbg,
                                        port_set.uart_power_setting);

                #endif

                need_rsp = KAL_FALSE;
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                break;
            }
#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
            case DIAG_NVM_READ:
			{
				port_setting_struct *port_setting = (port_setting_struct *)pdu_ptr;
				if ((port_setting->tst_port_l1 == uart_port_usb2) ||
				    (port_setting->tst_port_ps == uart_port_usb2)				    
				    )
				{
				    rmmi_diag_nvm_read_rrsp(src_id, KAL_TRUE, RMMI_DIAG_FOR_TST);
				}
				else
				{
			        rmmi_diag_nvm_read_rrsp(src_id, KAL_TRUE, RMMI_DIAG_FOR_AT);
				}
				need_rsp = KAL_FALSE;
				l4c_ptr->eq_current_action = L4C_NO_ACTION; //clear DIAG_NVM_READ
				break;
			}

            case DIAG_NVM_SET_AT_READ: //RMMI_DIAG_FOR_AT (1)
			{
				port_setting_struct *port_setting = (port_setting_struct *)pdu_ptr;
                nvram_write_req_struct *param_ptr = NULL;	
				l4c_set_user_action(L4C_EQ, src_id, DIAG_NVM_WRITE); //MAUI_02256669, mtk02285
				//l4c_ptr->eq_current_action = DIAG_NVM_WRITE;

                // Prepare Local Parameter
				param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                                                          NVRAM_EF_PORT_SETTING_LID,
                                                                                                          1);
				
                // Fill peer buffer content
                // mtk02285, MAUI_02260621				
                // MAUI_02180223, mtk02285, 20100415
                port_setting->tst_port_ps = uart_port_null;
                port_setting->tst_port_l1 = uart_port_null;
				port_setting->ps_port = uart_port1;				
                l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr,(kal_uint8*)pdu_ptr, length);
				need_rsp = KAL_FALSE;
				break;
			}

            case DIAG_NVM_SET_TST_READ: //RMMI_DIAG_FOR_TST (0)
			{
				port_setting_struct *port_setting = (port_setting_struct *)pdu_ptr;
                nvram_write_req_struct *param_ptr = NULL;		
				l4c_set_user_action(L4C_EQ, src_id, DIAG_NVM_WRITE); //MAUI_02256669, mtk02285
				//l4c_ptr->eq_current_action = DIAG_NVM_WRITE;

                // Prepare Local Parameter
				param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                                                          NVRAM_EF_PORT_SETTING_LID,
                                                                                                          1);

                // Fill peer buffer content
                port_setting->tst_port_ps = uart_port_usb2;
                port_setting->tst_port_l1 = uart_port_usb2;
				port_setting->tst_baudrate_ps = 115200;
				port_setting->tst_baudrate_l1 = 115200;
                port_setting->ps_port = uart_port_usb; //mtk02285, MAUI_02260621
				port_setting->ps_baudrate = 115200;
				//if (port_setting->ps_port == uart_port_usb2)
				//{
				//    port_setting->ps_port = uart_port_null;
				//} //MAUI_02169236, mtk02285
                l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr,(kal_uint8*)pdu_ptr, length);				

				need_rsp = KAL_FALSE;
				break;
			}
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */
            #ifdef __GEMINI_3G_SWITCH__
            case ES3G_EXE:
            {
                kal_uint8 data[8];

                if (result.flag == L4C_ERROR)
                {
                    RMMI_PTR->current_src = src_id;
                    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                    l4c_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
                }
                else
                {
                    kal_mem_cpy((kal_uint8*)data, (kal_uint8*)pdu_ptr, sizeof(data));
                    data[L4C_SETTING_3G_SERVICE_BITMAP] = L4C_COMM_PTR->cur_3g_capability;
                    l4c_eq_write_nvram_req(
                            src_id, 
                            NVRAM_EF_SYS_CACHE_OCTET_LID, 
                            NVRAM_SYS_FLIGHTMODE_STATE, 
                            data, sizeof(data));
                }
                need_rsp = KAL_FALSE;
                break;
            }
            #endif /*__GEMINI_3G_SWITCH__*/


#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
            case MOBILE_BROADBAND_PROVISION_CONTEXT_GET:
            case MOBILE_BROADBAND_PROVISION_CONTEXT_GET_ALL:
			{                 
                if (msg_ptr->file_idx != NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID)
                {
                    ASSERT(0);
                }
                
                if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
                {
                    //kal_prompt_trace(l4c_current_mod_id, "NVRAM READ ERROR for MBPC!!!");
  				    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                    l4c_general_rrsp(KAL_FALSE, L4C_GEN_CAUSE);
                }
                else
                {
                    kal_uint8 imsi[17];
                    kal_uint8 oper[7];
                    nvram_ef_mobile_broadband_provision_context_struct* prov_cntxt =
                        (nvram_ef_mobile_broadband_provision_context_struct*) pdu_ptr;
                    
                    //0. Get PLMN ID from SIM card
                    if (KAL_TRUE == l4c_smu_get_imsi_req(msg_ptr->access_id, (kal_uint8*) imsi))
                    {
                        //0.1. with SIM
                        kal_mem_cpy(oper, &imsi[1], strlen((char*)(prov_cntxt->plmn_in_digit)));
                        oper[strlen((char*)(prov_cntxt->plmn_in_digit))] = '\0';
                    }
                    else
                    {
                        //0.2. without SIM
                        oper[0] = 'X';
                        oper[1] = '\0';
                    }

                    //1. If (empty entry || match SIM Card PLMN), then print the current entry
                    if ((0 == strcmp((char*)(prov_cntxt->plmn_in_digit), (char*)oper))
                        || (0 == prov_cntxt->status)
                        || (MOBILE_BROADBAND_PROVISION_CONTEXT_GET_ALL == L4C_PTR->eq_current_action)
                       )
                    {
                        rmmi_mbpc_read_result_code_fmttr(src_id, prov_cntxt, msg_ptr->para);
                    }
    				if (NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL == msg_ptr->para)
    				{
    				    //2.1. All entries read done, print OK
    				    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
    				    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
    				}
    				else
    				{
                        //2.2. Read the next entry                    
                        nvram_read_req_struct* param_ptr = NULL;
                        param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(
                            src_id, NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, msg_ptr->para+1, 1); //para is for index
                        l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);                    
    				}        
                }                    
				need_rsp = KAL_FALSE;								
				break;
			}
#endif /* __MOBILE_BROADBAND_PROVISION_CONTEXT__ */

#if defined(__AT_IPR_WRITE_FS_SUPPORT__)
            case ATIPR_SET:
            {
                port_setting_struct *port_setting = (port_setting_struct *)pdu_ptr;
                nvram_write_req_struct *param_ptr = NULL;
                
                param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(src_id,
                                                                                          NVRAM_EF_PORT_SETTING_LID,
                                                                                          1);

                port_setting->ps_baudrate = rmmi_ptr->atipr_rate;
                l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr,(kal_uint8*)pdu_ptr, length);	
                
                need_rsp = KAL_FALSE;
                break;
            }
#endif
            default:
                break;
        }
    }

    if (need_rsp == KAL_TRUE && (msg_ptr->file_idx != NVRAM_EF_SYS_STATISTICS_LID))
    {
        rmmi_ptr->current_src = src_id;
        l4c_eq_read_nvram_rrsp(result, length, pdu_ptr);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_reset_cnf_hdlr
 * DESCRIPTION
 *  This is nvram_reset_cnf_hdlr function of L4C module.
 *  is called when receive nvram write confirm
 *  and inform MMI the result if the initial request is from MMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_reset_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (nvram_reset_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->access_id;

    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }

    if (src_id == LMMI_SRC)
    {
        l4c_eq_reset_nvram_lrsp(result);
    }
    else if (src_id >= RMMI_SRC)
    {
        RMMI_PTR->current_src = src_id;        
        l4c_eq_reset_nvram_rrsp(result); //AT_FRST
    }
}


/*****************************************************************************
 * FUNCTION
 *  nvram_write_cnf_hdlr
 * DESCRIPTION
 *  This is nvram_write_cnf_hdlr function of L4C module.
 *  is called when receive nvram write confirm
 *  and inform MMI the result if the initial request is from MMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_write_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint16 action;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_NVRAM_WRITE_CNF_HDLR_ENTRY);

    msg_ptr = (nvram_write_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->access_id;
    action = l4c_ptr->cc_current_action[src_id];

    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }

    //eq_action_revise
    if ((l4c_check_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION) != KAL_TRUE) && (l4c_ptr->eq_user == src_id))
    {
        switch (l4c_ptr->eq_current_action)
        {
            case MS_SN_SET:
            case MS_IMEI_SET:
            case MS_SV_SET:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                rmmi_ptr->current_src = src_id;
                l4c_eq_set_ms_sn_rrsp(result, (kal_uint8)msg_ptr->file_idx, msg_ptr->para);
                return;
            }
            case UART_WRITE_EXE: //tommy modify 031225 for set uart in poweron procedure but MMI read nvram at the same time
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                l4c_eq_write_nvram_lrsp(result, msg_ptr->file_idx, msg_ptr->para);
                return;
            }
#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
            case DIAG_NVM_WRITE:
			{
				l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION); //MAUI_02256669, mtk02285	
				//l4c_ptr->eq_current_action = L4C_NO_ACTION; //clear DIAG_NVM_WRITE						
				rmmi_ptr->current_src = src_id;
				l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
			#if 1
				kal_sleep_task(KAL_TICKS_100_MSEC * 5);
			    l4cuem_power_reset(0 /* NORMAL_RESET */);
			#endif
				return;
			}			
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */
            case PS_CONF_TEST_PROFILE_SET:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                
                if(src_id >= RMMI_SRC)
                {
                    rmmi_ptr->current_src = src_id;
                    if(result.flag == L4C_OK)
                    {
                        rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_OK, (kal_uint16)L4C_NO_CAUSE);
                    }
                    else
                    {
                        rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, (kal_uint16)L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if(result.flag == L4C_OK)
                    {
                        l4c_em_set_conftest_para_lrsp(L4C_SET_PS_CONF_TEST_PROFILE_OK);
                    }
                    else
                    {
                        l4c_em_set_conftest_para_lrsp(L4C_SET_PS_CONF_TEST_PROFILE_WRITE_FAIL);
                    }
                }
                return;
            }
            #ifdef __GEMINI_3G_SWITCH__
            case ES3G_EXE:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                RMMI_PTR->current_src = src_id;
                if (result.flag == L4C_OK)
                    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                else
                    l4c_general_rrsp(KAL_FALSE, result.cause);
                return;
            }
            #endif /*__GEMINI_3G_SWITCH__*/

#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
            case MOBILE_BROADBAND_PROVISION_CONTEXT_SET:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);                
                RMMI_PTR->current_src = src_id;
                if(src_id >= RMMI_SRC && src_id < RMMI_ALL)
                {
                    if(result.flag == L4C_OK)
                    {
                        rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_OK, (kal_uint16)L4C_NO_CAUSE);
                    }
                    else
                    {
                        rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, (kal_uint16)L4C_NO_CAUSE);
                    }
                }
            #ifdef __MBIM_SUPPORT__
                else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                {
                    if(result.flag == L4C_OK)
                    {
                        l4c_ps_set_provision_context_mrsp(src_id, KAL_TRUE);
                    }
                    else
                    {
                        l4c_ps_set_provision_context_mrsp(src_id, KAL_FALSE);
                    }
                }
            #endif
                else
                {
                    ASSERT(0); //No plan to support LMMI
                }
                return;
            }
#endif /* __MOBILE_BROADBAND_PROVISION_CONTEXT__ */

#if defined(__AT_IPR_WRITE_FS_SUPPORT__)
            case ATIPR_SET:
            {
                UART_CONFIG_T dcb;
                
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                
                if(PS_UART_PORT >= uart_port_usb)
                {
                    /* Prevent user Set IPR with UART, before it take effect, and USB plugin->choose COM port*/
                    return;
                }
                rmmi_ptr->current_src = src_id;
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
                kal_sleep_task(100); // add this delay to prevent "OK" sent with new baud rate
        
                RMMI_UART_ReadDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI);
                dcb.u4Baud = rmmi_ptr->atipr_rate;
                RMMI_UART_SetDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI); 
                rmmi_ptr->atipr_rate = 0;
                return;
            }
#endif
        #if defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__)
            case ETSTLP_EXE:
            {
                l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
                rmmi_ptr->current_src = src_id;
				if (result.flag == L4C_OK)
                {
                    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                }
                else
                {
                    l4c_general_rrsp(KAL_FALSE, result.cause);
                }
                return;
            }
        #endif /* defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__) */
            default:
                break;
        }
    }
    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        switch (action)
        {
            case POWEROFF_EXE:
            {
                /* clear the flag file for unexpected poweroff support */
                //l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION; 

                if (l4c_sim_poweroff_done() == KAL_TRUE)
                {
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                #if defined(__GEMINI__)
                    l4c_root_power_off_done_ind(src_id);
                #endif
                    l4cuem_power_off_req();
                #if !defined(__MMI_FMI__)
                    if(rmmi_ptr->poweroff_src_id != INVALID_SRC)
                    {				
                        rmmi_ptr->current_src = rmmi_ptr->poweroff_src_id;
                        rmmi_final_rsp_generator(rmmi_ptr->poweroff_src_id, KAL_TRUE, NULL, 0);
                        rmmi_ptr->poweroff_src_id = INVALID_SRC;//reset to prevent "OK" for AT+EPOF twice
                    #if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
                        OSTD_MD_Infinite_Sleep();
                    #endif
                    }
                #endif /* __SP_RIL_SUPPORT__ */
                }
                return;
            }
                // {
                //l4c_ptr->cc_sub_state[src_id] = L4C_IDLE_STATE;
                //l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

                /* modify by Erica 20040715 */
                //  l4c_cmd_ft[action][src_id+1]
                //          (result, msg_ptr->file_idx, msg_ptr->para);
                //}
                //    return;
            default:
                break;
        }
    }

#if defined(__GEMINI__) && !defined(__MMI_FMI__)
    if ((msg_ptr->file_idx == NVRAM_EF_SYS_CACHE_OCTET_LID) && (l4c_ptr->eq_current_action == L4C_NO_ACTION))
    {
        if (l4c_ptr->dual_sim_mode_setting_command == RMMI_EDSIM_WRITING)
        {
            //kal_print("NVRAM WRITE CNF received,");
            rmmi_ptr->current_src = src_id;
            if (msg_ptr->result == NVRAM_IO_ERRNO_OK)
            {
                //kal_print("RMMI shall return OK here with an rrsp function!!");        
                l4c_edsim_nvram_write_cnf_rrsp(KAL_TRUE);
            }
            else
            {
                //kal_print("RMMI shall return ERROR here with an rrsp function!!");        
                l4c_edsim_nvram_write_cnf_rrsp(KAL_FALSE);        
            }
            l4c_ptr->dual_sim_mode_setting_command = RMMI_EDSIM_NORMAL;
        }
        return;
    } /* end of if(msg_ptr->file_idx == NVRAM_EF_SYS_CACHE_OCTET_LID) */
#endif /* defined(__GEMINI__) && !defined(__MMI_FMI__) */

#ifdef __ETWS_SUPPORT__ 
    if (msg_ptr->file_idx == NVRAM_EF_ETWS_SETTING_LID)
    {
        
        if (src_id == LMMI_SRC)
        {
            l4c_sms_etws_setting_lrsp(result.flag == L4C_OK, L4C_NO_CAUSE);
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_general_rrsp(result.flag == L4C_OK, L4C_NO_CAUSE);
        }
        return;
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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


    if (msg_ptr->file_idx != NVRAM_EF_SYS_STATISTICS_LID)
    {
        if (src_id == LMMI_SRC)
        {
            l4c_eq_write_nvram_lrsp(result, msg_ptr->file_idx, msg_ptr->para);
        }
        else if ((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
        {
            rmmi_ptr->current_src = src_id;
            l4c_eq_write_nvram_rrsp(result, (kal_uint8)msg_ptr->file_idx, msg_ptr->para);
        }
    }
}

// mtk00468 add for AMB need to let MMI know it has init ready.


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_abm_start_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_abm_start_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __TCPIP__
    l4cabm_start_cnf_struct *msg_ptr = NULL;

    msg_ptr = (l4cabm_start_cnf_struct*) local_para_ptr;

    kal_trace(TRACE_INFO, INFO_L4C_STARTUP,
              L4C_PTR->cc_current_action[msg_ptr->src_id], L4C_PTR->smu_activated, L4C_COMM_PTR->rac_activated);
    if (msg_ptr->result == L4C_ERROR)
    {
        /* tcm fail */
    }
    else
    {

    }
#endif /* __TCPIP__ */ 
    return;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_set_lock_cnf_hdlr
 * DESCRIPTION
 *  This is nvram_write_cnf_hdlr function of L4C module.
 *  is called when receive nvram write confirm
 *  and inform MMI the result if the initial request is from MMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_set_lock_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_set_lock_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;

    msg_ptr = (nvram_set_lock_cnf_struct*) local_para_ptr;

    if (msg_ptr->result != NVRAM_ERRNO_SUCCESS)
    {
        result.flag = KAL_FALSE;
        result.cause = msg_ptr->result;
    }
    else
    {
        result.flag = KAL_TRUE;
        result.cause = L4C_NO_CAUSE;
        /*  if(RMMI_PTR->nvram_lock == KAL_FALSE)
           RMMI_PTR->nvram_lock = KAL_TRUE; */
    }
#if 0 //eq_action_revise
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
    RMMI_PTR->current_src = L4C_PTR->eq_user; //eq_action_revise
    l4c_general_rrsp((kal_bool)result.flag, result.cause);
    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);

    return;
}


#if defined(__AT_BACKUP_DATA_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_nvram_sds_cnf_hdlr
 * DESCRIPTION
 * Secure data backup/restore cnf from nvram
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nvram_sds_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nvram_sds_cnf_struct *msg_ptr = NULL;

    msg_ptr = (nvram_sds_cnf_struct *) local_para_ptr;

    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);

    RMMI_PTR->current_src = msg_ptr->access_id;

    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
    {
        l4c_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
    }
    else
    {
        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
    }
    
}
#endif /* __AT_BACKUP_DATA_SUPPORT__ */
#endif /* __MOD_NVRAM__ */ 


/*****************************************************************************
 * FUNCTION
 *  sim_read_cnf_hdlr
 * DESCRIPTION
 *  This is sim_read_cnf_hdlr function of L4C module.
 *  is called when receive sim read confirm
 *  and pass the data read back to MMI
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void sim_read_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_read_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
#if defined(__ENS_RAT_BALANCING__)
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SIM_READ_CNF_HDLR_ENTRY);

    msg_ptr = (sim_read_cnf_struct*) local_para_ptr;
    //src_id = msg_ptr->access_id; 
    src_id = msg_ptr->src_id; 

    if (msg_ptr->result != SIM_CMD_SUCCESS)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
        msg_ptr->length = 0;
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;

    }   /* mtk00468 modified for CSP using and mark the following code */

    if (l4c_check_user_action(L4C_SMU, src_id, FILE_CHANGE_EXE) == KAL_TRUE)
    {
        switch (msg_ptr->file_idx)
        {
        #if !defined(__MMI_FMI__)
        #if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__)
            case FILE_CSP_IDX:
                if (msg_ptr->result == SIM_CMD_SUCCESS && msg_ptr->length != 0)
                {
                    l4c_cphs_mmi_info_rind(0, 0, KAL_TRUE, msg_ptr->data, RMMI_PTR->is_spn_valid, RMMI_PTR->spn);
                }
                l4c_sat_file_change_hdlr(src_id);
                return;
        #endif
        #endif

        #if defined(__ENS_RAT_BALANCING__)
            case FILE_U_ENS_RAT_IDX:
                if (msg_ptr->result == SIM_CMD_SUCCESS && msg_ptr->length != 0)
                {
                    l4c_rat_enum rat_mode = L4C_RAT_GSM_UMTS;

                    l4c_ptr->is_valid_ef_rat_mode = KAL_TRUE;
                    l4c_ptr->ef_rat_mode = msg_ptr->data[0];

                #if defined(__UMTS_RAT__)
                    if (l4c_current_mod_id == MOD_L4C)
                    {
                        l4c_nw_ef_rat_mode_change_lind(l4c_ptr->is_valid_ef_rat_mode, l4c_ptr->ef_rat_mode);
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
                #endif
                    rat_mode = l4c_nw_check_ef_rat_mode();

                    if (rat_mode != l4crac_get_rat_mode())
                    {
                        l4c_nw_set_rat_mode_req(L4C_SRC, rat_mode);
                    }
                #endif
                }
                l4c_sat_file_change_hdlr(src_id);
                return;
        #endif
        
            default:
                break;
        }
    }

#if defined(__OP01__)
    if (l4c_check_user_action(L4C_SMU, src_id, SPN_EXE) == KAL_TRUE)
    {
        if (msg_ptr->src_id >= RMMI_SRC)
        {
            l4c_op01_spn_read_rrsp(result, msg_ptr->access_id, msg_ptr->data, msg_ptr->length);
        }

        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
        return;
    }        
#endif

    {
    #ifdef __HOMEZONE_SUPPORT__
        if (HZ_PTR->hz_sim_access != HZ_SIM_ACCESS_NONE &&
            (msg_ptr->file_idx == FILE_HZ_IDX || msg_ptr->file_idx == FILE_HZ_CACHE1_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE2_IDX || msg_ptr->file_idx == FILE_HZ_CACHE3_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE4_IDX))
        {
            l4c_hz_read_sim_cnf_hdlr(result, msg_ptr->length, msg_ptr->data);
        }
        else
        {
    #endif /* __HOMEZONE_SUPPORT__ */ 
            if (src_id == LMMI_SRC)
            {
                l4c_smu_read_sim_lrsp(result, msg_ptr->length, msg_ptr->data, msg_ptr->access_id); 
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_smu_read_sim_rrsp(result, msg_ptr->length, msg_ptr->data);
            }
        #ifdef __HOMEZONE_SUPPORT__
        }
        #endif 

    }
}


/*****************************************************************************
 * FUNCTION
 *  sim_write_cnf_hdlr
 * DESCRIPTION
 *  This is sim_write_cnf_hdlr function of L4C module.
 *  is called when receive sim write confirm
 *  and inform MMI the result
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void sim_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_write_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_result_struct result;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
#ifdef __HOMEZONE_SUPPORT__
   l4c_hz_context_struct *hz_ptr = HZ_PTR; //for slim
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SIM_WRITE_CNF_HDLR_ENTRY);

    msg_ptr = (sim_write_cnf_struct*) local_para_ptr;
    //src_id = msg_ptr->access_id;  
    src_id = msg_ptr->src_id;  

    if (msg_ptr->result != SIM_CMD_SUCCESS)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    #ifdef __HOMEZONE_SUPPORT__
        if (hz_ptr->hz_sim_access != HZ_SIM_ACCESS_NONE &&
            (msg_ptr->file_idx == FILE_HZ_IDX || msg_ptr->file_idx == FILE_HZ_CACHE1_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE2_IDX || msg_ptr->file_idx == FILE_HZ_CACHE3_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE4_IDX))
        {
            l4c_hz_write_sim_cnf_hdlr(KAL_FALSE, result.cause);
        }
        else
        {
    #endif /* __HOMEZONE_SUPPORT__ */ 
            if (src_id == LMMI_SRC)
            {
                l4c_smu_write_sim_lrsp(KAL_FALSE, result.cause, msg_ptr->access_id);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_smu_write_sim_rrsp(KAL_FALSE, result);
            }
        #ifdef __HOMEZONE_SUPPORT__
        }
        #endif 
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    #ifdef __HOMEZONE_SUPPORT__
        if (hz_ptr->hz_sim_access != HZ_SIM_ACCESS_NONE &&
            (msg_ptr->file_idx == FILE_HZ_IDX || msg_ptr->file_idx == FILE_HZ_CACHE1_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE2_IDX || msg_ptr->file_idx == FILE_HZ_CACHE3_IDX ||
             msg_ptr->file_idx == FILE_HZ_CACHE4_IDX))
        {
            l4c_hz_write_sim_cnf_hdlr(KAL_TRUE, result.cause);
        }
        else
        {
    #endif /* __HOMEZONE_SUPPORT__ */ 
            if (src_id == LMMI_SRC)
            {
                l4c_smu_write_sim_lrsp(KAL_TRUE, result.cause, msg_ptr->access_id);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_smu_write_sim_rrsp(KAL_TRUE, result);
            }
        }
    #ifdef __HOMEZONE_SUPPORT__
    }
    #endif 
    /*
     * if (L4C_PTR->cc_current_action[src_id] == SIM_W_EXE)
     * {
     * L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;
     * }
     */

    return;
}


/*****************************************************************************
 * FUNCTION
 *  sim_file_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_file_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_file_info_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;

    kal_brief_trace(TRACE_FUNC, FUNC_SIM_WRITE_CNF_HDLR_ENTRY);

    msg_ptr = (sim_file_info_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (msg_ptr->result != SIM_CMD_SUCCESS)
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }

    if (l4c_check_user_action(L4C_SMU, src_id, FILE_CHANGE_EXE) == KAL_TRUE)
    {
        switch (msg_ptr->file_idx)
        {
        #if defined(__MODEM_CARD__) || defined(__ENS_RAT_BALANCING__) || defined(__SP_RIL_SUPPORT__) 
            case FILE_CSP_IDX:
            case FILE_U_ENS_RAT_IDX:
                if (msg_ptr->result == SIM_CMD_SUCCESS && msg_ptr->length != 0)
                {
                    l4c_smu_read_sim_req(src_id, msg_ptr->file_idx, 0, msg_ptr->length, NULL, 0);
                }
                else
                {
                    l4c_sat_file_change_hdlr(msg_ptr->src_id);
                }
                return;
        #endif    
            default:
                break;
        }
    }

#if defined(__OP01__)
    if (l4c_check_user_action(L4C_SMU, src_id, SPN_EXE) == KAL_TRUE)
    {
        if (msg_ptr->src_id >= RMMI_SRC)
        {
            if (msg_ptr->result != SIM_CMD_SUCCESS)
            {
                RMMI_PTR->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
                l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
            }
            else
            {
                kal_uint8 PATH_SPN[6] = {0x7F,0x20,0x6F,0x46,0x00,0x00};
                kal_uint8 PATH_U_SPN[6] = {0x7F,0xFF,0x6F,0x46,0x00,0x00};

                if (msg_ptr->access_id == 0)
                {
                    l4c_smu_read_sim_req(src_id, FILE_NONE, 0, msg_ptr->length, PATH_SPN, 0);
                }
                else
                {
                    l4c_smu_read_sim_req(src_id, FILE_NONE, 0, msg_ptr->length, PATH_U_SPN, 1);
                }
            }
        }
        return;
    }        
#endif

#ifdef __HOMEZONE_SUPPORT__
    if (HZ_PTR->hz_sim_access != HZ_SIM_ACCESS_NONE &&
        (msg_ptr->file_idx == FILE_HZ_IDX || msg_ptr->file_idx == FILE_HZ_CACHE1_IDX ||
         msg_ptr->file_idx == FILE_HZ_CACHE2_IDX || msg_ptr->file_idx == FILE_HZ_CACHE3_IDX ||
         msg_ptr->file_idx == FILE_HZ_CACHE4_IDX))
    {
        l4c_hz_read_file_info_cnf_hdlr(result, msg_ptr->file_size, msg_ptr->num_of_rec);
    }
    else
    {
#endif /* __HOMEZONE_SUPPORT__ */ 
												
        l4c_smu_read_file_info_lrsp(result, msg_ptr->file_size, msg_ptr->num_of_rec,msg_ptr->access_id,msg_ptr->file_type);
    #ifdef __HOMEZONE_SUPPORT__
    }
    #endif 

    return;
}


/*****************************************************************************
 * FUNCTION
 *  sim_poweroff_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_poweroff_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    L4C_PTR->sim_poweroff = KAL_TRUE;
    
    if (L4C_PTR->rac_current_action == RFOFF_SIM_POWEROFF)
    {
        RMMI_PTR->current_src = L4C_PTR->rac_user;
        l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }

  #if !defined(__MMI_FMI__) && defined(__GEMINI__)
    if (l4c_sim_poweroff_done() == KAL_TRUE)		
    {
        if(RMMI_PTR->poweroff_src_id != INVALID_SRC)
        {				
            RMMI_PTR->current_src = RMMI_PTR->poweroff_src_id;
            rmmi_final_rsp_generator(RMMI_PTR->poweroff_src_id, KAL_TRUE, NULL, 0);
            RMMI_PTR->poweroff_src_id = INVALID_SRC;//reset to prevent "OK" for AT+EPOF twice
        #if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
            OSTD_MD_Infinite_Sleep();
        #endif
        }	    
    }
  #endif    
}


#ifdef __GSMCDMA_DUALSIM__
/*****************************************************************************
 * FUNCTION
 *  sim_get_gsmcdma_dualsim_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_get_gsmcdma_dualsim_info_cnf_hdlr(local_para_struct  *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_sim_get_gsmcdma_dualsim_info_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4c_sim_get_gsmcdma_dualsim_info_cnf_struct *)local_para_ptr;
    src_id = msg_ptr->src_id;

    if (src_id == LMMI_SRC)
    {
    	l4c_sim_get_gsmcdma_dualsim_info_lrsp(msg_ptr->is_sim_inserted, msg_ptr->is_df_gsm_existed, msg_ptr->is_df_cdma_existed);
    }
    else
    {
    	RMMI_PTR->current_src = src_id;
    	l4c_sim_get_gsmcdma_dualsim_info_rrsp(msg_ptr->is_sim_inserted, msg_ptr->is_df_gsm_existed, msg_ptr->is_df_cdma_existed);	
    }

    return;    
}


/*****************************************************************************
 * FUNCTION
 *  sim_set_gsmcdma_dualsim_mode_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_set_gsmcdma_dualsim_mode_cnf_hdlr(local_para_struct  *local_para_ptr,
                          peer_buff_struct *peer_buff_ptr)
{
    l4c_sim_set_gsmcdma_dualsim_mode_cnf_struct *msg_ptr = NULL;

    msg_ptr = (l4c_sim_set_gsmcdma_dualsim_mode_cnf_struct *)local_para_ptr;

    l4c_sim_set_gsmcdma_dualsim_mode_lrsp (msg_ptr->op, msg_ptr->result);   

    return;
}
#endif /* __GSMCDMA_DUALSIM__ */


#ifdef __GEMINI__


/*****************************************************************************
 * FUNCTION
 *  sim_status_update_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_status_update_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
    return;
}
#endif /* __GEMINI__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_null_hdlr
 * DESCRIPTION
 *  This is l4c_null_hdlr function of L4C module.
 *  is a dummy function to be called in the function
 *  table for msgs to be ignored
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_null_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

}

#ifdef __NBR_CELL_INFO__

#if !defined(__MMI_FMI__)
void l4c_update_nbr_information(l4c_nbr_cell_info_ind_struct *nbr_info)
{
    if (nbr_info->is_nbr_info_valid)
    {
        kal_mem_cpy(&(RMMI_PTR->nbr_info), nbr_info, sizeof(l4c_nbr_cell_info_ind_struct));
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_nbr_sendmsg
 * DESCRIPTION
 *  This function used to send msg to dest_id module
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 *  dest_id                 [IN]       destination module
 *  msg                     [IN]       message name
 *  sap                      [IN]       SAP name
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nbr_sendmsg(void *local_para_ptr, void *peer_buff_ptr, 
                                                            module_type dest_id, 
                                                            msg_type msg, 
                                                            sap_type sap)
{

    msg_send6(l4c_current_mod_id, dest_id, sap, msg, 
            (local_para_struct *)local_para_ptr, (peer_buff_struct *)peer_buff_ptr);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nbr_cell_info_update
 * DESCRIPTION
 *  This function used to send NBR_CELL_INFO cnf or ind to registered module
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 *  dest_id                 [IN]       destination module
 *  msg                     [IN]       message name
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nbr_cell_info_update(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr, module_type dest_id, msg_type msg_name)
{
    l4c_nbr_cell_info_reg_cnf_struct *para;
    l4cps_nbr_cell_info_start_cnf_struct *msg = (l4cps_nbr_cell_info_start_cnf_struct*)local_para_ptr;

#ifndef __MMI_FMI__
    if (dest_id == l4c_current_mod_id)
    {
        l4c_update_nbr_information(msg);
    }
    else if (dest_id == MOD_ATCI)
    {
        kal_uint8 temp_src = RMMI_PTR->current_src;

        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_nbr_cell_info_rind(msg->rat_mode,msg->is_nbr_info_valid, (kal_uint8*)&msg->ps_nbr_cell_info_union, sizeof(ps_nbr_cell_info_union_type));
        RMMI_PTR->current_src = temp_src;
    }
    else
#endif
    {
        para = (l4c_nbr_cell_info_reg_cnf_struct*)construct_local_para((kal_uint16) sizeof(l4c_nbr_cell_info_reg_cnf_struct), TD_RESET);
        para->rat_mode = msg->rat_mode;
        para->is_nbr_info_valid = msg->is_nbr_info_valid;
        kal_mem_cpy(&para->ps_nbr_cell_info_union,
                    	   &msg->ps_nbr_cell_info_union, 
                    	   sizeof(para->ps_nbr_cell_info_union));

    #if defined(__ANDROID_RIL_SUPPORT__)
        if (dest_id == MOD_CCCI_HISR)
        {
            l4c_send_ilm_ipc((msg_type)NBR_IPC_MSG(msg_name), para);
        }
        else
    #endif
        {
            l4c_nbr_sendmsg(para, NULL, dest_id, msg_name, INVALID_SAP);
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  	l4c_nbr_cell_info_reg_req_hdlr
 * DESCRIPTION
 *	This function is for AP(i.e. RRLP) to register requesting cell info from RR
 * PARAMETERS
 *  local_para_ptr      NULL
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nbr_cell_info_reg_req_hdlr(module_type src_id,local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_bool existed=KAL_FALSE;
    kal_uint32 i;	
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    for  (i=0; i<l4c_ptr->cell_info_reg_index; i++)
    {
        if ((kal_uint32)src_id == l4c_ptr->cell_info_reg_table[i].src_id)
        {	
            existed=KAL_TRUE; /*  Already register */
            break; 
        }
    }

    if (!existed)
    {
        l4c_ptr->cell_info_reg_table[l4c_ptr->cell_info_reg_index].src_id = src_id; /* Add new registered module into table */
        l4c_ptr->cell_info_reg_table[l4c_ptr->cell_info_reg_index].already_cnf=KAL_FALSE;
        l4c_ptr->cell_info_reg_index++;
    }

    l4c_nbr_sendmsg(NULL, NULL, 
                                L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
                                MSG_ID_L4CPS_NBR_CELL_INFO_START_REQ, 
                                AS_L4C_SAP);

#ifdef __UMTS_RAT__
#ifdef __GEMINI__
    if (l4c_current_mod_id == MOD_L4C)
#endif	
    {           
        l4c_nbr_sendmsg(NULL, NULL, 
                                    MOD_MEME, 
                                    MSG_ID_L4CPS_NBR_CELL_INFO_START_REQ, 
                                    AS_L4C_SAP);
    }
#endif

    //kal_print("L4C has send a cell info request\n");	
    return;
}

/*****************************************************************************
 * FUNCTION
 *  	l4c_nbr_cell_info_dereg_req_hdlr
 * DESCRIPTION
 *	This function is for AP(i.e. RRLP) to deregister requesting cell info from RR
 *	If no one have registered, send stop req to RR
 * PARAMETERS
 *  local_para_ptr      NULL
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nbr_cell_info_dereg_req_hdlr(module_type src_id,local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint32 i;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    for  (i=0; i<l4c_ptr->cell_info_reg_index; i++)
    {
        if ((kal_uint32)src_id == l4c_ptr->cell_info_reg_table[i].src_id)
        break; /* dereg module was found */
    }

    if (i >= l4c_ptr->cell_info_reg_index)
    {
        //kal_prompt_trace(MOD_L4C,"dereg non-existed MOD"); return;
        ASSERT(0); /* can not find dereg module */   // shoud revise to Just return
    }

    l4c_ptr->cell_info_reg_index--;
    l4c_ptr->cell_info_reg_table[i].src_id = l4c_ptr->cell_info_reg_table[l4c_ptr->cell_info_reg_index].src_id; 
    l4c_ptr->cell_info_reg_table[i].already_cnf = l4c_ptr->cell_info_reg_table[l4c_ptr->cell_info_reg_index].already_cnf; 	
    /*   Replace dereg module with last reg module*/

#if defined(__ANDROID_RIL_SUPPORT__)
    if (src_id == MOD_CCCI_HISR)
    {
        kal_uint32 msg = (kal_uint32)NBR_IPC_MSG(MSG_ID_L4C_NBR_CELL_INFO_DEREG_CNF);
        l4c_send_ilm_ipc((msg_type)msg, NULL);
    }
    else
#endif    
    if (src_id != MOD_ATCI) // Not send CNF to ATCI
    {               
        l4c_nbr_sendmsg(NULL, NULL, 
                                    src_id, 
                                    MSG_ID_L4C_NBR_CELL_INFO_DEREG_CNF, 
                                    INVALID_SAP);
    }

	
    if (l4c_ptr->cell_info_reg_index > 0)
    {
    	return; /* someone still want cell info */
    }
    else
    {
        /*  No one reg cell info, we can stop request from GAS  */
        l4c_nbr_sendmsg(NULL, NULL, 
                                    L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
                                    MSG_ID_L4CPS_NBR_CELL_INFO_STOP_REQ, 
                                    AS_L4C_SAP);

    #ifdef __UMTS_RAT__
    #ifdef __GEMINI__
        if (l4c_current_mod_id == MOD_L4C)
    #endif	
        {
            /*  No one reg cell info, we can stop request from UAS  */
            l4c_nbr_sendmsg(NULL, NULL, 
                                        MOD_MEME, 
                                        MSG_ID_L4CPS_NBR_CELL_INFO_STOP_REQ, 
                                        AS_L4C_SAP);
        }
    #endif
    }
    	
    return;
}


/*****************************************************************************
 * FUNCTION
 *  	l4c_nbr_cell_info_start_cnf_hdlr
 * DESCRIPTION
 *	This function receive CNF from RR with cell info and send to registred modules
 * PARAMETERS
 *  local_para_ptr      l4cps_nbr_cell_info_start_cnf_struct
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_nbr_cell_info_start_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint32 i;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    /* Send cell info to modules who have registered */
    for (i=0; i<l4c_ptr->cell_info_reg_index; i++)
    {
        module_type dest_id= (module_type)l4c_ptr->cell_info_reg_table[i].src_id;

        if (l4c_ptr->cell_info_reg_table[i].already_cnf==KAL_TRUE)
        {
            /* If registered module had received cnf, send ind instead */
            l4c_nbr_cell_info_update(local_para_ptr, peer_buff_ptr, dest_id, MSG_ID_L4C_NBR_CELL_INFO_IND);
            continue;
        }

        /*  Send CNF to modules who have not receive CNF */
        l4c_nbr_cell_info_update(local_para_ptr, peer_buff_ptr, dest_id, MSG_ID_L4C_NBR_CELL_INFO_REG_CNF);		 
        l4c_ptr->cell_info_reg_table[i].already_cnf=KAL_TRUE;
    }
	
    return;
}


/*****************************************************************************
 * FUNCTION
 *  	l4cps_nbr_cell_info_stop_cnf_hdlr
 * DESCRIPTION
 *	This function receive stop CNF from RR
 * PARAMETERS
 *  local_para_ptr      NULL
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_nbr_cell_info_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	//kal_print("L4C has dereg cell info request\n");
 	return;
}


/*****************************************************************************
 * FUNCTION
 *  	l4cps_nbr_cell_info_indf_hdlr
 * DESCRIPTION
 *	This function relay cell info to AP which from RR
 * PARAMETERS
 *  local_para_ptr      l4cps_nbr_cell_info_start_cnf_struct
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_nbr_cell_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint32 i;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    /* Send cell info to modules who have registered */	
    for (i=0; i<l4c_ptr->cell_info_reg_index; i++)
    {
        module_type dest_id= (module_type)l4c_ptr->cell_info_reg_table[i].src_id;

        if (l4c_ptr->cell_info_reg_table[i].already_cnf==KAL_FALSE)
            continue;

        /*  Send IND to modules who have already receive CNF */
        l4c_nbr_cell_info_update(local_para_ptr, peer_buff_ptr, dest_id, MSG_ID_L4C_NBR_CELL_INFO_IND);
    }

    return;
}
#endif


#if defined(__AT_RRC_TRACE_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  	l4cas_rrc_peer_trace_ind_hdlr
 * DESCRIPTION
 *	This function output RRC trace message to UART
 * PARAMETERS
 *  local_para_ptr      l4cas_rrc_peer_trace_ind_struct
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4cas_rrc_peer_trace_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cas_rrc_peer_trace_ind_struct *msg_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 string_len = 0;
    kal_uint16 pdu_left = 0;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    
    msg_ptr = (l4cas_rrc_peer_trace_ind_struct *)local_para_ptr;

    rmmi_ptr->arg_list[0] = (void*)msg_ptr->message;
    rmmi_ptr->arg_list[1] = (void*)msg_ptr->message_type;
    string_len = rmmi_fast_string_print(buffer, (kal_uint8*) "+TRACE: \"%s\",\"%s\"", rmmi_ptr->arg_list, 2);
    rmmi_write_to_uart(buffer, string_len, KAL_FALSE);

    if(peer_buff_ptr != NULL)
    {        
        pdu_ptr = (kal_uint8*)get_peer_buff_pdu(peer_buff_ptr, &pdu_left);
        buffer[0] = RMMI_COMMA; /* add a comma & a " before pdu hex string */
        buffer[1] = RMMI_DOUBLE_QUOTE;
        rmmi_write_to_uart(buffer, 2, KAL_FALSE);
        while(pdu_left != 0)
        {
            /* Out put 50 Bytes each time*/
            if(pdu_left > 50)
            {
                print_hex_value_ext(pdu_ptr, buffer, 50);
                rmmi_write_to_uart(buffer, 100, KAL_FALSE);
                pdu_ptr += 50;
                pdu_left -= 50;
            }
            else
            {
                print_hex_value_ext(pdu_ptr, buffer, pdu_left); 
                /* Append " & <CR><LF> at the end */
                buffer[pdu_left*2] = RMMI_DOUBLE_QUOTE;
                buffer[pdu_left*2 +1] = 0x0d;
                buffer[pdu_left*2 +2] = 0x0a;
                rmmi_write_to_uart(buffer, (pdu_left*2 + 3), KAL_FALSE);
                pdu_left = 0;
            }
        }
    }

    return;
}
#endif


#if defined(__UMTS_FDD_MODE__)
void l4c_3g_rf_test_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4ul1_em_tst_cnf_struct *msg_ptr = (l4ul1_em_tst_cnf_struct *)local_para_ptr;
    
    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
    
    if(msg_ptr->src_id >= RMMI_SRC)
    {
        if(msg_ptr->success == KAL_TRUE)
        {
            rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_OK, L4C_NO_CAUSE);
        }
        else
        {
            rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, L4C_NO_CAUSE);
        }
    }
    
    return;
}
#endif

#if defined(__NFC_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  	l4c_nfc_test_rsp_hdlr
 * DESCRIPTION
 *	This function handle nfc test command response
 * PARAMETERS
 *  local_para_ptr      [IN]
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nfc_test_rsp_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    nfc_msg_struct *msg_ptr;

    msg_ptr = (nfc_msg_struct *)local_para_ptr;
    
    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
    
    if(msg_ptr->msg_length == 0)
    {
        rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, L4C_NO_CAUSE);
        return;
    }
    

    switch(msg_ptr->msg_type)
    {
        case MSG_ID_NFC_SWP_SELF_TEST_RSP:
        case MSG_ID_NFC_ANTENNA_SELF_TEST_RSP:
        case MSG_ID_NFC_CARD_EMULATION_MODE_TEST_RSP:
        {
            nfc_script_response *data_ptr;
            data_ptr = (nfc_script_response *)((kal_uint8 *)msg_ptr + sizeof(nfc_msg_struct));
            //kal_mem_cpy((void*)&result, (void*)((void*)msg_ptr + sizeof(nfc_msg_struct)), 4);
            if(data_ptr->result == 0)
            {
                rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_OK, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, L4C_NO_CAUSE);
            }
            break;
        }
        case MSG_ID_NFC_TAG_UID_RW_RSP:
        {
            nfc_script_uid_response *data_ptr;
            kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
            kal_uint32 string_len;
            kal_uint32 counter_i = 0;
            
            data_ptr = (nfc_script_uid_response *)((kal_uint8 *)msg_ptr + sizeof(nfc_msg_struct));
            if(data_ptr->result == 0)
            {
                RMMI_PTR->arg_list[0] = (void*)&data_ptr->uid_length;
                string_len = rmmi_fast_string_print(buffer, "+ENFC: %e,\"", RMMI_PTR->arg_list, 1);
                rmmi_write_to_uart(buffer, string_len, KAL_FALSE);
                
                for( ; counter_i < data_ptr->uid_length; counter_i++)
                {
                    string_len = kal_sprintf((char*)buffer, "%02X", (kal_uint8)(data_ptr->data[counter_i]));
                    rmmi_write_to_uart(buffer, string_len, KAL_FALSE);
                }
                RMMI_PTR->arg_list[0] = (void *)&RMMI_PTR->s_reg.s3;
                RMMI_PTR->arg_list[1] = (void *)&RMMI_PTR->s_reg.s4;
                string_len = rmmi_fast_string_print(buffer, "\"%c%c", RMMI_PTR->arg_list, 2);
                rmmi_write_to_uart(buffer, string_len, KAL_TRUE);
                rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_OK, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_result_code_fmttr((kal_uint8)RMMI_RCODE_ERROR, L4C_NO_CAUSE);
            }
            break;
        }
        default:
        {
            break;
        }
    }
}
#endif


#if defined(__DUAL_TALK_MODEM_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_med_in_proc_call_cnf_hdlr
 * DESCRIPTION
 *   Handler function for MSG_ID_MEDIA_IN_PROC_CALL_CNF
 * PARAMETERS
 *  local_para_ptr  [IN] NULL
 *  peer_buff_ptr   [IN] NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_in_proc_call_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    rmmi_ptr->current_src = l4c_ptr->l1aud_spc_src_id;
    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
    l4c_ptr->l1aud_spc_src_id = INVALID_SRC;
}
#endif /* defined(__DUAL_TALK_MODEM_SUPPORT__) */


#ifdef __ACMT_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_protocol_rej_ind_hdlr
 * DESCRIPTION
 *	handler function for MSG_ID_L4C_PROTOCOL_REJ_IND
 * PARAMETERS
 *  local_para_ptr      l4c_protocol_rej_ind_struct
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_protocol_rej_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_protocol_rej_ind_struct *msg_ptr = (l4c_protocol_rej_ind_struct *)local_para_ptr;

    l4c_at_acmt_rind(msg_ptr->error_type, msg_ptr->cause);
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_meas_info_req_hdlr
 * DESCRIPTION
 *  Thermal CNF handler for MSG_ID_L4C_MEAS_INFO_REQ from CCCI
 *  Send query message to MEME
 * PARAMETERS
 *  local_para_ptr      NULL
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_meas_info_req_hdlr(void)
{
    l4c_send_msg_to_meme(MSG_ID_L4CPS_MEAS_INFO_REQ, NULL);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cps_meas_info_cnf_hdlr
 * DESCRIPTION
 *  Thermal CNF handler for MSG_ID_L4CPS_MEAS_INFO_CNF from MEME
 * PARAMETERS
 *  local_para_ptr      l4cps_meas_info_cnf_struct
 *  peer_buff_ptr       NULL
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_meas_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint32 tx_power = 0;
    l4cps_meas_info_cnf_struct *msg_ptr = (l4cps_meas_info_cnf_struct *)local_para_ptr;

    tx_power |= msg_ptr->tx_power;
#ifdef __MTK_TARGET__
#ifdef __SP_RIL_SUPPORT__
    if (KAL_TRUE == ccci_send_message(CCMSG_ID_MD_L4_TX_PWR_LEV_REQ, tx_power))
#endif
#endif
    {
        kal_brief_trace(TRACE_INFO, INFO_TX_POWER, tx_power);
    }
    return;
}


