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
 * L4C_EQ_MSG.C
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_EQ_MSG_C
#ifdef __MOD_UEM__
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "med_struct.h"
//#include "stack_ltlcom.h"
//#include "kal_common_defs.h"
//#include "ps_trace.h"
#include "kal_trace.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"

#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l4_trc.h"

//#include "l4c_aux_struct.h"

#include "nvram_struct.h"
#include "device.h"
#include "l4c2uem_struct.h"
#include "uem_proc_cmd.h"

//#include "mcd_uem_peer.h"

#ifdef __MOD_SMSAL__
//#include "smsal_l4c_defs.h"     
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_enum.h"   
//#include "l4c_sms_cmd.h"       
#endif /* __MOD_SMSAL__ */ 
//#if defined (VM_SUPPORT)
//#include "med_struct.h"
//#endif /* defined (VM_SUPPORT) */ 
//#include "aud_defs.h"
//#include "l4c2smu_struct.h"
#include "keypad_sw.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "l4c2phb_enums.h" 
//#include "l4c2phb_struct.h"
#include "lmmi_ind.h"
#include "l4c_eq_msg.h"
#include "bitop_macros.h"
//#include "sim_al.h"
#include "sim_common_enums.h"
//#include "dma_sw.h"  
//#include "sim_sw.h"  
//#include "sim_def.h"
#include "kbd_table.h"
#include "dcl.h"
#include "l4c_utility.h"
//#include "ppp_l4_enums.h"
//#include "abm_soc_enums.h"
//#include "l4c2abm_struct.h"
#if defined(__GEMINI__)
#include "l4c_root.h"
#endif

//#include "l4_defs.h"
#include "csmcc_atfunc.h"
//#include "l4c_ss_parse.h"
#include "l4c_common_enum.h"
#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
#include "rmmi_rsp.h"
#include "lmmi_rsp.h"
#include "rmmi_ind.h"
#include "rmmi_utility.h"
#include "rmmi_sio.h"
#include "rmmi_root.h"
//#include "l4c_msghdlr.h"

//#include "syscomp_config.h"
#include "task_config.h"

#include "rmmi_msghdlr.h"
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "ps_public_utility.h"
#include "cmux_vp_num.h"
#include "kal_public_api.h"

#include "nvram_interface.h"

#include "nvram_msgid.h"
#include "sim_ps_msgid.h"

#include "dcl.h"
#include "mph_cs_msg.h"
#include "md_sap.h"

#include "nvram_data_items.h"

#ifdef __GEMINI__
extern kal_uint8 *get_sim_context_g_sat_event_list(kal_uint8 simInterface);
#else 
extern kal_uint8 *get_sim_context_g_sat_event_list(void);
#endif 

extern void tst_change_port(UART_PORT new_port);

extern UART_PORT PS_UART_PORT;
extern kbd_buffer_struct l4c_kbd_buffer;
extern kal_bool l4c_send_kbdilm;

#if defined(__TC01__) && defined(__MTK_TARGET__)
/* under construction !*/
/* under construction !*/
#endif
/*****************************************************************************
 * FUNCTION
 *  l4cuem_startup_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_startup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cuem_startup_cnf_struct *msg_ptr = NULL;
    nvram_read_req_struct *param_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

    msg_ptr = (l4cuem_startup_cnf_struct*) local_para_ptr;

    kal_trace(TRACE_INFO, INFO_L4C_STARTUP,
              //L4C_PTR->cc_sub_state[LMMI_SRC],
              0, l4c_ptr->cc_current_action[msg_ptr->src_id], l4c_ptr->smu_activated, l4c_comm_ptr->rac_activated);

    if (msg_ptr->response == L4C_ERROR)
    {
        /* uem fail */
    }
    else
    {
        kal_uint8 *buffer = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);

        l4c_comm_ptr->uem_activated = KAL_TRUE;

        /*mtk80396, Read PS Conformance setting before sending power on indication to MMI*/   
        if (nvram_external_read_data(NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID, 1, buffer, NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE) == KAL_TRUE)
        {
            kal_uint32 profile_setting;
            kal_mem_cpy((kal_uint8*)&profile_setting, buffer, NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);
            l4c_comm_ptr->ps_conf_test_mode = (kal_uint8)(profile_setting >> 24);
            l4c_comm_ptr->ps_conf_test_profile = (profile_setting & 0x00FFFFFF );
        }
        else
        {
            param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(0xFF,
                                                                                    NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID,
                                                                                    1,
                                                                                    1);
            l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
        }
        free_ctrl_buffer(buffer);
        
        if (is_rac_activated() == KAL_TRUE)
        {
        #ifdef __GEMINI__
            module_type temp_mod_id;
            
            temp_mod_id = l4c_current_mod_id;
            layer4_module_context_selection(MOD_L4C);
        #endif
            l4c_power_on_stage1_finished_ind();
        #ifdef __GEMINI__
            layer4_module_context_selection(temp_mod_id);
        #endif
        }
    }

    /* Johnny: for UEM handling special case */
    l4cuem_startup_cnf_rsp();

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_audio_play_by_name_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_audio_play_by_name_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
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
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_audio_stop_by_name_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_audio_stop_by_name_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
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
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_audio_play_by_string_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_audio_play_by_string_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_play_by_string_cnf_struct *msg_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;

    msg_ptr = (media_aud_play_by_string_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_EQ, src_id, AUDI_STRING_PLAY) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
        if (msg_ptr->result == 0)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_audio_play_by_string_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_audio_play_by_string_lrsp(KAL_FALSE, msg_ptr->result);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->result);
            }
        }

    }

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_audio_stop_by_string_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_audio_stop_by_string_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_stop_by_string_cnf_struct *msg_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;

    msg_ptr = (media_aud_stop_by_string_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_EQ, src_id, AUDI_STRING_STOP) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
        if (msg_ptr->result == 0)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_audio_stop_by_string_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_audio_stop_by_string_lrsp(KAL_FALSE, msg_ptr->result);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->result);
            }
        }

    }
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_get_audio_profile_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_get_audio_profile_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_get_audio_profile_cnf_struct *msg_ptr = (media_aud_get_audio_profile_cnf_struct*) local_para_ptr;

    if(msg_ptr->src_id == LMMI_SRC)
    {
        l4c_eq_get_audio_profile_lrsp(KAL_TRUE, msg_ptr->audio_profile);
    }

    else if(msg_ptr->src_id >= RMMI_SRC)
    {
        /* call rmmi function */
        RMMI_PTR->current_src = msg_ptr->src_id;
        l4c_eq_get_audio_profile_rrsp(msg_ptr->result, msg_ptr->audio_profile);
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_get_volume_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_get_volume_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    media_aud_get_volume_cnf_struct *msg_ptr = (media_aud_get_volume_cnf_struct*) local_para_ptr;
    kal_uint8 i;
    kal_uint8 cid;

    /* call rmmi function */
    rmmi_ptr->current_src = msg_ptr->src_id;
    l4c_eq_get_voleme_rrsp(msg_ptr->result, msg_ptr->volume_type, msg_ptr->volume);

    l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION); //clean CLVL_READ or CRSL_READ
    
    cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);

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


/*****************************************************************************
 * FUNCTION
 *  l4cuem_get_gain_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_get_gain_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
//mtk01616_100706 : at+cvgs is obsolete
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_get_audio_param_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_get_audio_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_get_audio_param_cnf_struct *msg_ptr = (media_aud_get_audio_param_cnf_struct*) local_para_ptr;
    if(msg_ptr->src_id < RMMI_SRC)
    {
        l4c_eq_get_audio_param_lrsp(KAL_TRUE, &(msg_ptr->audio_param));
    }
    else
    {
        RMMI_PTR->current_src = msg_ptr->src_id;
        l4c_eq_get_audio_param_rrsp(msg_ptr->result, &(msg_ptr->audio_param));
    }

}


#if defined(__AMRWB_LINK_SUPPORT__)
void l4cuem_get_audio_wb_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    switch(RMMI_PTR->eaps_action)
    {
        case RMMI_EAPS_WB_INPUT_FIR_GET:
        case RMMI_EAPS_WB_INPUT_FIR_SET:
        {
            media_aud_get_audio_wb_input_fir_param_cnf_struct *msg_ptr = (media_aud_get_audio_wb_input_fir_param_cnf_struct *)local_para_ptr;
            if(msg_ptr->src_id >= RMMI_SRC)
            {
                RMMI_PTR->current_src = msg_ptr->src_id;
                l4c_eq_get_audio_wb_fir_rrsp(msg_ptr->result, &(msg_ptr->fir_param));
            }
            break;
        }
        case RMMI_EAPS_WB_OUTPUT_FIR_GET:
        case RMMI_EAPS_WB_OUTPUT_FIR_SET:
        {
            media_aud_get_audio_wb_output_fir_param_cnf_struct *msg_ptr = (media_aud_get_audio_wb_output_fir_param_cnf_struct *)local_para_ptr;
            if(msg_ptr->src_id >= RMMI_SRC)
            {
                RMMI_PTR->current_src = msg_ptr->src_id;
                l4c_eq_get_audio_wb_fir_rrsp(msg_ptr->result, &(msg_ptr->fir_param));
            }
            break;
        }
        case RMMI_EAPS_WB_MODE_PARAM_GET:
        case RMMI_EAPS_WB_MODE_PARAM_SET:
        {
            media_aud_get_audio_wb_mode_param_cnf_struct *msg_ptr = (media_aud_get_audio_wb_mode_param_cnf_struct *)local_para_ptr;

            if(msg_ptr->src_id >= RMMI_SRC)
            {
                RMMI_PTR->current_src = msg_ptr->src_id;
                l4c_eq_get_audio_wb_mode_rrsp(msg_ptr->result, &(msg_ptr->fir_param));
            }
            break;
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4cuem_set_audio_wb_param_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/

void l4cuem_set_audio_wb_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    
    if(RMMI_PTR->eaps_action == RMMI_EAPS_WB_INPUT_FIR_SET)
    {
        media_aud_set_audio_wb_input_fir_param_cnf_struct *msg_ptr = (media_aud_set_audio_wb_input_fir_param_cnf_struct *)local_para_ptr;
        if(msg_ptr->src_id >= RMMI_SRC)
        {
            RMMI_PTR->current_src = msg_ptr->src_id;
            l4c_general_rrsp(msg_ptr->result, L4C_NO_CAUSE);
        }
    }
    else
    {
        media_aud_set_audio_wb_output_fir_param_cnf_struct *msg_ptr = (media_aud_set_audio_wb_output_fir_param_cnf_struct *)local_para_ptr;
        if(msg_ptr->src_id >= RMMI_SRC)
        {
            RMMI_PTR->current_src = msg_ptr->src_id;
            l4c_general_rrsp(msg_ptr->result, L4C_NO_CAUSE);
        }
    }
    RMMI_PTR->eaps_action = RMMI_EAPS_NO_ACION;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4cuem_set_audio_profile_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_set_audio_profile_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_set_audio_profile_cnf_struct *msg_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;

    msg_ptr = (media_aud_set_audio_profile_cnf_struct*) local_para_ptr;

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
#endif
    src_id = msg_ptr->src_id; //eq_action_revise

    if (l4c_check_user_action(L4C_EQ, src_id, AUDI_SET) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
        if (!msg_ptr->result)   /* Fail */
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_audio_profile_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_audio_profile_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }

    }
    else
    {
        /* error */
    }

    return;
}

/* 030927 mtk00468 add for new audio parameter confirm */


/*****************************************************************************
 * FUNCTION
 *  l4cuem_set_audio_param_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_set_audio_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_aud_set_audio_param_cnf_struct *msg_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;

    msg_ptr = (media_aud_set_audio_param_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_EQ, src_id, AUDI_PARAM_SET) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
        if (!msg_ptr->result)   /* Fail */
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_audio_param_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_audio_param_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);

            }

        }

    }
    else
    {
        /* error */
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_power_on_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  poweron_mode        [IN]        
 *  battery_level       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_power_on_ind(kal_uint8 poweron_mode, kal_uint8 battery_level)
{
    nvram_startup_req_struct *param_ptr;

    //L4C_PTR->cc_current_action[LMMI_SRC] = POWERON_EXE;
    L4C_COMM_PTR->poweron_mode = poweron_mode;
    param_ptr = (nvram_startup_req_struct*)
        construct_local_para((kal_uint16) sizeof(nvram_startup_req_struct), TD_RESET);
    //we dont use poweron_mode is because we may restart with default poweron mode when exception
    /* trigger L4C to send start to NVRAM */
    param_ptr->poweron_mode = poweron_mode;
    param_ptr->access_id = LMMI_SRC;

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_STARTUP_REQ, param_ptr, NULL, 0);

#ifdef __REGIONAL_PHONE__
{
    kal_uint8 mode;
    
    nvram_external_read_data(NVRAM_EF_REGIONAL_PHONE_MODE_LID,  /* LID */
                             1,                                 /* Record ID */
                             &mode,                             /* Dest buffer */
                             NVRAM_EF_REGIONAL_PHONE_MODE_SIZE);/* Buffer size of dest */
    
    /* read MCC MNC from SIM at the beginning of boot-up */
    if (mode != 0)
    {
        l4c_send_msg_to_sim(MSG_ID_SIM_READ_IMSI_REQ, NULL, NULL);
    }
}
#endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_audio_play_finish_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  identifier      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_audio_play_finish_ind(kal_uint8 result, kal_uint16 identifier)
{
    /* here we dont use src_id cause we implement rrsp in future */
    l4c_eq_audio_play_finish_lind(result, identifier);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_gpio_detect_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  gpio_device     [IN]        
 *  on_off          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_gpio_detect_ind(kal_uint8 gpio_device, kal_bool on_off)
{
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
	
#if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__) && defined(__MTK_TARGET__) 
/* under construction !*/
#endif
	
    kal_trace(TRACE_INFO, INFO_DEVICE_AND_ON_OFF, gpio_device, on_off);
    l4c_eq_gpio_detect_lind(gpio_device, on_off);
    if (rmmi_ptr->em_enable)
    {
    	temp_src = rmmi_ptr->current_src;
	    rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_eq_gpio_detect_rind(gpio_device, on_off);
	    rmmi_ptr->current_src = temp_src;
    }
#if 0
/* under construction !*/
/* under construction !*/
    #ifdef __CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif 
/* under construction !*/
#ifdef __CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif
}

#if defined(__NONE_USED_L4MMI_MESSAGE__)


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_general_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_general_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_record_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 src_id;
    kal_uint8 action;

    msg_ptr = (l4aud_vm_record_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    action = l4c_ptr->cc_current_action[src_id];

    if ((l4c_ptr->cc_current_action[src_id] == VM_PLAY_EXE) ||
        (l4c_ptr->cc_current_action[src_id] == VM_DEL_EXE) ||
        (l4c_ptr->cc_current_action[src_id] == VM_ABT_EXE) ||
        (l4c_ptr->cc_current_action[src_id] == VM_RES_EXE) ||
        (l4c_ptr->cc_current_action[src_id] == VM_APP_EXE) || (l4c_ptr->cc_current_action[src_id] == VM_REN_EXE))
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

        switch (action)
        {
            case VM_REC_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_record_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_record_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_PLAY_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_play_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_play_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_DEL_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_delete_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_delete_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_ABT_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_abort_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_abort_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_RES_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_resume_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_resume_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_APP_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_append_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_append_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
            case VM_REN_EXE:
                if (msg_ptr->result == 0)
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_rename_lrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                }
                else
                {
                    if (src_id == LMMI_SRC)
                    {
                        l4c_eq_vm_rename_lrsp(KAL_FALSE, msg_ptr->result);
                    }
                }
                break;
        }
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_stop_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_stop_cnf_struct *msg_ptr;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (l4aud_vm_stop_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (msg_ptr->result == 0)
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }
    else
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;
    }
#ifdef __FS_ON__
    if (src_id == LMMI_SRC)
    {
        l4c_eq_vm_stop_lrsp(result, msg_ptr->file_name);
    }
#else /* __FS_ON__ */ 
    if (src_id == LMMI_SRC)
    {
        l4c_eq_vm_stop_lrsp(result, msg_ptr->file_id);
    }
#endif /* __FS_ON__ */ 

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_pause_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_pause_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_pause_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (l4aud_vm_pause_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == VM_PAU_EXE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->result == 0)
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        else
        {
            result.flag = L4C_ERROR;
            result.cause = msg_ptr->result;
        }
    #ifdef __FS_ON__
        if (src_id == LMMI_SRC)
        {
            l4c_eq_vm_pause_lrsp(result, msg_ptr->file_name);
        }
    #else /* __FS_ON__ */ 
        if (src_id == LMMI_SRC)
        {
            l4c_eq_vm_pause_lrsp(result, msg_ptr->file_id);
        }

    #endif /* __FS_ON__ */ 
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_record_finish_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_record_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_record_finish_ind_struct *msg_ptr;
    kal_uint8 src_id;

    msg_ptr = (l4aud_vm_record_finish_ind_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

#ifdef __FS_ON__
    if (src_id == LMMI_SRC)
    {
        l4c_eq_vm_record_finish_lind(msg_ptr->result, msg_ptr->file_name);
    }
#else /* __FS_ON__ */ 
    if (src_id == LMMI_SRC)
    {
        l4c_eq_vm_record_finish_lind(msg_ptr->result, msg_ptr->file_id);
    }
#endif /* __FS_ON__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_get_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_get_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_get_info_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 src_id;

    msg_ptr = (l4aud_vm_get_info_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (l4c_ptr->cc_current_action[src_id] == VM_GET_EXE)
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
    #ifdef __FS_ON__
        if (src_id == LMMI_SRC)
        {
            l4c_eq_vm_get_info_lrsp(
                msg_ptr->vm_info.no_of_vm,
                (kal_wchar*) msg_ptr->vm_info.file_name_list,
                msg_ptr->vm_info.more_entry,
                msg_ptr->vm_info.free_space);
        }
    #else /* __FS_ON__ */ 
        if (src_id == LMMI_SRC)
        {
            l4c_eq_vm_get_info_lrsp(msg_ptr->vm_info.vm_idx, msg_ptr->vm_info.remain_time);
        }

    #endif /* __FS_ON__ */ 
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_play_finish_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_play_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4aud_vm_play_finish_ind_struct *msg_ptr;

    msg_ptr = (l4aud_vm_play_finish_ind_struct*) local_para_ptr;

    //l4c_eq_vm_play_finish_lind(msg_ptr->result);
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_record_full_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_record_full_ind()
{
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_vm_play_finish_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_vm_play_finish_ind()
{
}
#endif /* defined(__NONE_USED_L4MMI_MESSAGE__) */ 


/*****************************************************************************
 * FUNCTION
 *  l4cuem_alarm_detect_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rtc_time        [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_alarm_detect_ind(rtc_format_struct *rtc_time)
{
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    l4c_eq_alarm_detect_lind(rtc_time);
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_ALL;
    l4c_eq_alarm_detect_rind(rtc_time);
    rmmi_ptr->current_src = temp_src;

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_rtc_period_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rtc_type        [IN]        
 *  rtc_time        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_rtc_period_ind(kal_uint8 rtc_type, rtc_format_struct *rtc_time)
{
    l4c_eq_rtc_period_lind(rtc_type, rtc_time);
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_keypad_detect_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  drv_get_key_func        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_keypad_detect_ind(kal_bool(*drv_get_key_func) (kbd_data *))
{
    kal_uint8 temp_src;
#ifdef __GEMINI__
    kal_uint8 counter_i = 0;
    kal_uint8 ckpd_cntx_in_use = 0;
#endif
    kal_bool  ckpd_ongoing = KAL_FALSE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    #if defined(__TC01__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

    #if defined(__MMI_FMI__) 
    if (l4c_ptr->ekey_mode == 1)   /* 20040510 mtk00714 add for Joseph */
    {
        /* if ekey_mode ==1, we ignored the data come from keypad (+CKPD has higher priority) */
        if ((*drv_get_key_func) != (l4c_kbd_getkeydata))
        {
            DCL_HANDLE handle;
            DCL_CTRL_DATA_T data;

            handle = DclSKBD_Open(DCL_KBD, 0);
            while(DclSKBD_Control(handle, KBD_CMD_GET_KEY_DATA, (DCL_CTRL_DATA_T*)&data) != STATUS_BUFFER_EMPTY);

            return;
        }
    }
    else
    #endif
    #ifdef __GEMINI__
    for( ; counter_i < L4_MAX_SIM_NUM; counter_i++)
    {
        if(l4c_cntxt_g[counter_i].eq_user == RMMI_SRC && l4c_cntxt_g[counter_i].eq_current_action == CKPD_EXE)
        {
            ckpd_cntx_in_use = counter_i;
            ckpd_ongoing = KAL_TRUE;
            break;
        }
    }
    #else
    if (l4c_check_user_action(L4C_EQ, RMMI_SRC, CKPD_EXE) == KAL_TRUE)
    {
        //ckpd_cntx_in_use = 0;
        ckpd_ongoing = KAL_TRUE;
    }
    #endif
    
    if (ckpd_ongoing == KAL_TRUE)
    {
        /* If AT is in +CKPD action, but indication coming  from DRVKBD */
        /* then we stop +CKPD action, CKPD and Phone Keypad cannot be concurrent */
        /* we compare function pointer to see if it is from L4C's key buffer or driver's */
        if ((*drv_get_key_func) != (l4c_kbd_getkeydata))
        {
            kbd_data k1, k;
            kal_uint8 key_index;
            kal_bool release_needed = KAL_FALSE;

    #if defined(__GEMINI__) && !defined(__DISABLE_SIM2_AT_SUPPORT__)
            kal_bool switch_needed = KAL_FALSE;
            if (ckpd_cntx_in_use != 0)
            {
                // the AT+CKPD is executed in the SIM2/SIM3/SIM4 etc...
                // so we need to swtich L4C_PTR and RMMI_PTR to SIM_N temporaily
                switch_needed = KAL_TRUE;
                l4c_ptr = &l4c_cntxt_g[ckpd_cntx_in_use];
                rmmi_ptr = &rmmi_cntxt_g[ckpd_cntx_in_use];
                rmmi_current_mod_id = L4_MODULE(MOD_ATCI, ckpd_cntx_in_use);
            }
            #endif

            /* Begin : for Maui_sw SCR 7960 */
            if (l4c_kbd_getkeydata(&k1) == KAL_TRUE)
            {
                if (k1.Keyevent == kbd_onekey_release)  //we need to send release key for last key.
                {
                    release_needed = KAL_TRUE;
                }
                while (l4c_kbd_getkeydata(&k) == KAL_TRUE);
            }
            else
            {
                if (*((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 3) == kbd_onekey_press)
                {
                    release_needed = KAL_TRUE;
                    key_index = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2);
                    k1.Keydata[0] = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 5 + key_index);
                }
            }

            if (release_needed == KAL_TRUE)
            {

                /* mtk02514 ** 090213 ** MAUI_01552968 ***********************
                 * Since in thie place, we should cancel the keypad command AT+CKPD.
                 * Before we cancel the command, we should release the previously keypad from CKPD
                 * So, here we should send l4c_kbd_getkeydata instead of drv_get_key_func
                 ********************************************************/
            
                l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_release, k1.Keydata[0]);
                l4c_eq_keypad_detect_lind((kal_uint8)L4C_KEY_FROM_CKPD);
                temp_src = rmmi_ptr->current_src;
                rmmi_ptr->current_src = RMMI_ALL;
                l4c_eq_keypad_detect_rind(l4c_kbd_getkeydata);
                rmmi_ptr->current_src = temp_src;
            }
            /* End:  for Maui_sw SCR 7960 */

            if (l4c_ptr->parameter[RMMI_SRC].data != NULL)
            {
                free_ctrl_buffer(l4c_ptr->parameter[RMMI_SRC].data);
            }
            l4c_ptr->parameter[RMMI_SRC].data = NULL; 
            l4c_ptr->parameter[RMMI_SRC].length = 0;

            /* cancel envnt if exist */
            if (l4c_ptr->event_id[0] != 0)
            {
                kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
                evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
                l4c_ptr->event_id[0] = 0;
            }
            l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
            temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_SRC;
            l4c_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
            rmmi_ptr->current_src = temp_src;

            #if defined(__GEMINI__) && !defined(__DISABLE_SIM2_AT_SUPPORT__)
            if (switch_needed == KAL_TRUE)
            {
                // the AT+CKPD is executed in the SIM_N and we have switched the context temporaily
                // we should wtich back to SIM1
                l4c_ptr = &l4c_cntxt_g[0];
                rmmi_ptr = &rmmi_cntxt_g[0];
                rmmi_current_mod_id = MOD_ATCI;
            }
            #endif

        }
    }

    if((*drv_get_key_func) != (l4c_kbd_getkeydata))
    {
        l4c_eq_keypad_detect_lind((kal_uint8)L4C_KEY_FROM_DRVKPD);
    }
    else
    {
        l4c_eq_keypad_detect_lind((kal_uint8)L4C_KEY_FROM_CKPD);
    }

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_ALL;
    l4c_eq_keypad_detect_rind(drv_get_key_func);
    rmmi_ptr->current_src = temp_src;
    /* paul added for SATc3 EventDownload (User Activity) */
#if 1
    {
    #ifdef __GEMINI__
        kal_uint8 counter = 0;
    #endif
        kal_uint8 *event_list[L4_MAX_SIM_NUM];
        sat_evdl_user_activity_req_struct *param_ptr[L4_MAX_SIM_NUM];

    #ifdef __GEMINI__

        for( ; counter < L4_MAX_SIM_NUM; counter++)
        {
            event_list[counter] = get_sim_context_g_sat_event_list(((kal_uint8)SIM1 + counter));
#ifdef __MTK_TARGET__
            if(GET_BITS_1_8(event_list[counter], 4, 1) != 0)
#else
            if((*event_list[counter] & 0x08) != 0)
#endif
        {
                param_ptr[counter] = (sat_evdl_user_activity_req_struct*)
                construct_local_para((kal_uint16) sizeof(sat_evdl_user_activity_req_struct), TD_RESET);
            
            msg_send5(MOD_L4C, L4_MODULE(MOD_SIM, counter), 
                    PS_SIM_SAP, MSG_ID_SAT_EVDL_USER_ACTIVITY_REQ, (local_para_struct *)param_ptr[counter]);

        }
        }
    #else /* __GEMINI__ */ //gemini
        event_list[0] = get_sim_context_g_sat_event_list();
        /* EVDL_USER_ACTIVITY in event list? */
#ifdef __MTK_TARGET__
        if (GET_BITS_1_8(event_list[0], 4, 1) == 0)
#else
        if((*event_list[0] & 0x08) == 0)
#endif
        {
            return;
        }

        param_ptr[0] = (sat_evdl_user_activity_req_struct*)
            construct_local_para((kal_uint16) sizeof(sat_evdl_user_activity_req_struct), TD_RESET);

        l4c_send_msg_to_sim(MSG_ID_SAT_EVDL_USER_ACTIVITY_REQ, param_ptr[0], NULL);
    #endif /* __GEMINI__ */ 
    }
#endif /* 1 */ 
    /* paul added for SATc3 EventDownload (User Activity) */

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_battery_status_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  battery_status      [IN]        
 *  battery_voltage     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_battery_status_ind(kal_uint8 battery_status, kal_uint8 battery_voltage)
{
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    l4c_eq_battery_status_lind(battery_status, battery_voltage);
    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_eq_battery_status_rind(battery_status, battery_voltage);
    rmmi_ptr->current_src = temp_src;

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_get_adc_all_channel_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  vbat                [IN]        
 *  bat_temp            [IN]        
 *  vaux                [IN]        
 *  charge_current      [IN]        
 *  vcharger            [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_get_adc_all_channel_ind(
        kal_int32 vbat,
        kal_int32 bat_temp,
        kal_int32 vaux,
        kal_int32 charge_current,
        kal_int32 vcharger)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    l4c_get_adc_all_channel_lind(vbat, bat_temp, vaux, charge_current, vcharger);
    if (L4C_PTR->adc_flag)
    {

        kal_uint8 temp_src;

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_ALL;
        l4c_get_adc_all_channel_rind(vbat, bat_temp, vaux, charge_current, vcharger);
        rmmi_ptr->current_src = temp_src;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_kbd_getkeydata
 * DESCRIPTION
 *  
 * PARAMETERS
 *  keydata     [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_kbd_getkeydata(kbd_data *keydata)
{
    kal_bool result;

    if (l4c_kbd_buffer.kbd_data_buffer_rindex != l4c_kbd_buffer.kbd_data_buffer_windex)
    {
        l4c_dequeue_onekey_from_kbdbuffer(keydata->Keyevent, keydata->Keydata[0]);
        kal_trace(
            TRACE_INFO,
            INFO_L4C_KBDGETKEY,
            keydata->Keyevent,
            keydata->Keydata[0],
            l4c_kbd_buffer.kbd_data_buffer_rindex);

        if (keydata->Keydata[0] > MAX_DEVICE_KEYS)
        {
            kal_trace(TRACE_WARNING, WARNING_INVALID_KEY);
            l4c_send_kbdilm = KAL_TRUE;
            return KAL_FALSE;
        }

        result = KAL_TRUE;
    }
    else
    {
        l4c_send_kbdilm = KAL_TRUE;
        result = KAL_FALSE;
    }

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_keypad_input_press_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_keypad_input_press_hdlr()
{
    kal_uint8 key_index;
    kal_uint8 keydata;
    kal_uint8 pause;
    kal_uint8 keys_length;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    

    /* index for current press */
    pause = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 1);
    key_index = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2);
    keys_length = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 4);
    keydata = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 5 + key_index);

    if (l4c_ptr->event_id[0] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
        l4c_ptr->event_id[0] = 0;
    }

    if (keydata >= MAX_DEVICE_KEYS)
    {
        ASSERT(0);
    }

    l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_release, keydata);
    kal_trace(TRACE_INFO, INFO_RMMI_KEYRELEASE, keydata, key_index, l4c_kbd_buffer.kbd_data_buffer_windex);

    if (l4c_send_kbdilm)
    {
        l4c_send_kbdilm = KAL_FALSE;
        l4cuem_keypad_detect_ind(l4c_kbd_getkeydata);
    }

    if ((key_index + 1) < keys_length)
    {
        *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2) = key_index + 1;
        *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 3) = kbd_onekey_release;
        /* start keypad release timer */
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_pause_hdlr,
                                NULL,
                                pause * KAL_TICKS_100_MSEC);
    }
    else
    {
        /* end of input */

        /* cancel envnt if exist */
        if (l4c_ptr->event_id[0] != 0)
        {
            kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
            evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
            l4c_ptr->event_id[0] = 0;
        }
        /* 20040510 mtk00714 add for Joseph: to enable testing +CKPD from Catcher during dial-up */
        /* if(L4C_PTR->ekey_mode==1): only testing, DO NOT change L4C state and action */
        #if defined(__MMI_FMI__) //mtk02514_context
        if (l4c_ptr->ekey_mode != 1)
        {
            RMMI_PTR->current_src = RMMI_SRC;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }
        #endif

        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION); //eq_action_revise
        
        if (l4c_ptr->parameter[RMMI_SRC].data != NULL)
        {
            free_ctrl_buffer(l4c_ptr->parameter[RMMI_SRC].data);
        }
        l4c_ptr->parameter[RMMI_SRC].data = NULL;
        l4c_ptr->parameter[RMMI_SRC].length = 0;
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_keypad_input_long_press_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_keypad_input_long_press_hdlr()
{
    #if defined(__MMI_FMI__) 

    kal_uint8 key_index;
    kal_uint8 keydata;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    key_index = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2);
    keydata = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 5 + key_index);

    if (l4c_ptr->event_id[0] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
        l4c_ptr->event_id[0] = 0;
    }

    if (keydata >= MAX_DEVICE_KEYS)
    {
        ASSERT(0);
    }

    l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_longpress, keydata);
    kal_trace(TRACE_INFO, INFO_RMMI_KEYLONGPRESS, keydata, key_index, l4c_kbd_buffer.kbd_data_buffer_windex);

    if (l4c_send_kbdilm)
    {
        l4c_send_kbdilm = KAL_FALSE;
        l4cuem_keypad_detect_ind(l4c_kbd_getkeydata);
    }

    l4c_ptr->keypad_press_timer = (kal_uint8) l4c_ptr->keypad_press_timer - L4C_LONGPRESS_TIMER;        // left press time

    // we should send the repeat key event to MMI if remain time more than one sec.
    if (l4c_ptr->keypad_press_timer >= L4C_REPEATED_TIMER)
    {

        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_repeat_hdlr,
                                NULL,
                                L4C_REPEATED_TIMER * KAL_TICKS_100_MSEC);
    }
    /* the timer is 2 sec therefore, if we send a long press message we 
       should send the release and handle the next key */
    else if ((kal_uint8) l4c_ptr->keypad_press_timer == 0)
    {
        l4c_keypad_input_press_hdlr();
    }
    else        // the let time is between 0 and one sec. we hace to handle after time-out
    {

        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_press_hdlr,
                                NULL,
                                (kal_uint8) l4c_ptr->keypad_press_timer * KAL_TICKS_100_MSEC);
    }
    #endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_keypad_input_pause_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_keypad_input_pause_hdlr()
{
    #if defined(__MMI_FMI__) 

    kal_uint8 key_index;
    kal_uint8 keydata;
    kal_uint8 time;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    /* index for next press */
    time = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 0);
    key_index = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2);
    //keys_length = *((kal_uint8*) L4C_PTR->parameter[RMMI_SRC].data + 4);
    keydata = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 5 + key_index);

    if (l4c_ptr->event_id[0] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
        l4c_ptr->event_id[0] = 0;
    }

    if (keydata >= MAX_DEVICE_KEYS)
    {
        ASSERT(0);
    }

    l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_press, keydata);
    *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 3) = kbd_onekey_press;

    kal_trace(TRACE_INFO, INFO_RMMI_KEYPRESS, keydata, key_index, l4c_kbd_buffer.kbd_data_buffer_windex);

    if (l4c_send_kbdilm)
    {
        l4c_send_kbdilm = KAL_FALSE;
        l4cuem_keypad_detect_ind(l4c_kbd_getkeydata);
    }

    l4c_ptr->keypad_press_timer = (kal_uint8) time;     //reset timer to initial value

    /* start keypad press timer */
    if (time >= L4C_LONGPRESS_TIMER)
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_long_press_hdlr,
                                NULL,
                                L4C_LONGPRESS_TIMER * KAL_TICKS_100_MSEC);

    }
    else
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_press_hdlr,
                                NULL,
                                time * KAL_TICKS_100_MSEC);
    }
    #endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_keypad_input_repeat_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_keypad_input_repeat_hdlr()
{
    #if defined(__MMI_FMI__) 

    kal_uint8 key_index;
    kal_uint8 keydata;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    key_index = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 2);
    keydata = *((kal_uint8*) l4c_ptr->parameter[RMMI_SRC].data + 5 + key_index);

    if (l4c_ptr->event_id[0] != 0)
    {
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[0]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[0]));
        l4c_ptr->event_id[0] = 0;
    }

    if (keydata >= MAX_DEVICE_KEYS)
    {
        ASSERT(0);
    }
    l4c_equeue_onekey_to_kbdbuffer(kbd_onekey_repeated, keydata);
    kal_trace(TRACE_INFO, INFO_RMMI_KEYREPEAT, keydata, key_index, l4c_kbd_buffer.kbd_data_buffer_windex);

    if (l4c_send_kbdilm)
    {
        l4c_send_kbdilm = KAL_FALSE;
        l4cuem_keypad_detect_ind(l4c_kbd_getkeydata);
    }

    l4c_ptr->keypad_press_timer = (kal_uint8) l4c_ptr->keypad_press_timer - L4C_REPEATED_TIMER;

    if ((kal_uint8) l4c_ptr->keypad_press_timer >= L4C_REPEATED_TIMER)  //the left time is more than one sec.
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_repeat_hdlr,
                                NULL,
                                L4C_REPEATED_TIMER * KAL_TICKS_100_MSEC);
    }
    else if ((kal_uint8) l4c_ptr->keypad_press_timer == 0)
    {

        l4c_keypad_input_press_hdlr();
    }
    else        // the let time is between 0 and one sec. we hace to handle after time-out
    {
        l4c_ptr->event_id[0] = evshed_set_event(
                                l4c_ptr->event_scheduler_ptr,
                                (kal_timer_func_ptr) l4c_keypad_input_press_hdlr,
                                NULL,
                                (kal_uint8) l4c_ptr->keypad_press_timer * KAL_TICKS_100_MSEC);

    }
    #endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_set_hw_level_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_set_hw_level_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cuem_set_hw_level_cnf_struct *msg_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;

    msg_ptr = (l4cuem_set_hw_level_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    //ASSERT(src_id == LMMI_SRC) ;
    if (l4c_check_user_action(L4C_EQ, src_id, HW_PROF_SET) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_EQ, L4C_NO_USER, L4C_NO_ACTION);
        if (msg_ptr->response == L4C_ERROR)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_hw_level_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_eq_set_hw_level_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }

        }

    }
    else
    {
        /* error */
    }

    return;
}

#ifdef __USB_ENABLE__

/*****************************************************************************
 * FUNCTION
 *  l4cuem_usbdetect_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  action      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_usbdetect_ind(kal_uint8 action)
{

    kal_uint8 cid;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

    kal_trace(TRACE_INFO, INFO_L4CUEM_USBDETECT_IND, action);  

    if (action == DEVUSB_DETECT_ACTION_PLUGOUT)
    {    
        if (l4c_comm_ptr->usb_app == USB_SWITCH_PORT_APP_DATA)
        {
            l4c_comm_ptr->usb_app = USB_SWITCH_PORT_APP_NULL;
            cid = rmmi_port_2_cid(PS_UART_PORT);
            if (RMMI_UART_GetOwnerID(PS_UART_PORT) == MOD_ATCI)
            {
                if ( !(rmmi_comm_ptr->uart_plugout & (0x01 << cid)) )
                {
                    /* MAUI_03029033 * mtk02514 * 20110916 ********
                    * When dialup, if we plugout USB
                    * It is possible that we will receive the message 
                    * MSG_ID_L4CPPP_DEACTIVATE_IND from PPP
                    * before receiving MSG_ID_DRVUEM_USBDETECT_IND(to UEM)
                    * So here we judge if PS_UART_PORT is USB or not
                    * if not, it should be UART and we could switch them.
                    *****************************************/
                    if (rmmi_comm_ptr->uart_port_value != PS_UART_PORT)
                    {
                        RMMI_UART_Close(PS_UART_PORT, MOD_ATCI);
                        rmmi_root_plugout_uart(PS_UART_PORT);
                        PS_UART_PORT = rmmi_comm_ptr->uart_port_value;
                        rmmi_root_plugin_uart(PS_UART_PORT);
                    }
                }
            }
            else
            {
                rmmi_comm_ptr->uart_plugout |= (0x01 << cid);
            }
        }
        else if (l4c_comm_ptr->usb_app == USB_SWITCH_PORT_APP_DEBUG)
        {
            l4c_comm_ptr->usb_app = USB_SWITCH_PORT_APP_NULL;
            tst_change_port(rmmi_comm_ptr->uart_port_value);
        }

        if (RMMI_PTR->ath_for_dialup != uart_port_null)
        {
            rmmi_clear_ath_for_dialup_hdlr();
        }
    }
    else
    {
        ;
    }

    l4c_eq_usbdetect_lind(action);
    return;

}

/*****************************************************************************
 * FUNCTION
 *  l4cuem_usb_power_on_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_usb_power_on_ind(void)
{
    kal_uint8 build_label = GSM_ONLY;
    rtc_alarm_info_struct rtc_time;
    kal_uint8 battery_status, battery_vol;
    kal_uint8 dual_sim_mode_setting = 0;
    kal_uint8 dual_sim_uart_setting = 0;

#if defined (__CS_SERVICE__) && defined (__PS_SERVICE__)
    build_label = GSM_AND_GPRS;
#elif defined (__PS_SERVICE__)
    build_label = GPRS_ONLY;
#else 
    build_label = GSM_ONLY;
#endif 

    L4C_COMM_PTR->poweron_mode = POWER_ON_USB;
    l4cuem_get_battery_status_req(&battery_status, &battery_vol);
    l4cuem_rtc_get_hw_time_req(RTC_TIME_CLOCK_IND, 0, &rtc_time);

#ifdef __GEMINI__
    dual_sim_mode_setting = L4C_COMM_PTR->dual_sim_mode_setting;
    dual_sim_uart_setting = RMMI_COMM_PTR->sim_uart_setting;
#endif /* __GEMINI__ */ 

    l4c_eq_power_on_lind(
        L4C_COMM_PTR->poweron_mode,
        battery_status,
        build_label,
        (rtc_format_struct*) & rtc_time.data_time,
        L4C_COMM_PTR->flightmode_state,
        dual_sim_mode_setting,
        dual_sim_uart_setting);
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_usbconfig_cnf
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  result          [IN]        
 *  mode            [IN]        
 *  reserved        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_usbconfig_cnf(kal_uint8 src_id, kal_bool result, kal_uint8 mode, kal_uint32 reserved)
{

    l4c_eq_usbconfig_lrsp(result, mode, reserved);

    return;
}

#endif /* __USB_ENABLE__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4cuem_leave_precharge_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_leave_precharge_ind(void)
{
    l4c_eq_leave_precharge_lind();
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_pmic_config_cnf
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_pmic_config_cnf(kal_uint8 src_id, kal_uint8 request_type, pmic_config_param_struct request)
{
    if (src_id == LMMI_SRC)
    {
        l4c_eq_pmic_config_lrsp(request_type, request);
    }
    //#if defined(MT6318) 
    else if (src_id >= RMMI_SRC)
    {
        RMMI_PTR->current_src = src_id;
        l4c_eq_pmic_config_rrsp(request_type, request);
    }
    //#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_rf_test_gsm_cnf
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_rf_test_gsm_cnf(kal_uint8 src_id, kal_uint8 request_type, rf_test_gsm_param_struct request)
{
    if (src_id == LMMI_SRC)
    {
        l4c_eq_rf_test_gsm_lrsp(request_type, request);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4cuem_fm_radio_config_cnf
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_fm_radio_config_cnf(kal_uint8 src_id, kal_uint8 request_type, fm_radio_config_param_struct request)
{
    l4c_eq_fm_radio_config_lrsp(request_type, request);
}


#if defined(__WIFI_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4cuem_rf_test_wifi_cnf
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4cuem_rf_test_wifi_cnf(kal_uint8 src_id, kal_uint8 request_type, rf_test_wifi_param_struct request)
{
    if (src_id == LMMI_SRC)
    {
        l4c_eq_rf_test_wifi_lrsp(request_type, request);
    }
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_l1_query_cal_data_dl_status_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_l1_query_cal_data_dl_status_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cl1_query_cal_data_dl_status_cnf_struct *msg_ptr;
    kal_uint8 src_id;

    msg_ptr = (l4cl1_query_cal_data_dl_status_cnf_struct*)local_para_ptr;
    src_id = msg_ptr->src_id;
    
    kal_brief_trace(TRACE_INFO, INFO_CAL_DATA_DL_STATUS, msg_ptr->cal_data_valid);

    if (src_id == LMMI_SRC)
    {
        l4c_eq_query_cal_data_dl_status_lrsp(msg_ptr->cal_data_valid);
    }
    else if ((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
    {
        RMMI_PTR->current_src = src_id;
        l4c_eq_query_cal_data_dl_status_rrsp(msg_ptr->cal_data_valid);
    }
    return;
}

#endif /* __MOD_UEM__ */ 

