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
 * l4c_tst.c
 *
 * Description:
 * ------------
 *   This file implements the req and cnf handlers interfacing TST task
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
*==============================================================================
*****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_TST_C

//#include <stdio.h>
#include <string.h>
//#include "kal_release.h"
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_buff_alloc.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stack_timer.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
//#include "uart_sw.h"
#include "dcl.h"

#include "tst_sap.h"
#include "l4c_tst.h"

//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "csmss_common_enums.h"
//#include "csmcc_common_enums.h"
//#include "csmcc_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4_trc.h"
#include "rmmi_analyzer.h"
#include "l4c2tst_struct.h"
#include "l4c2tst_enum.h"

//#include "l3_inc_enums.h"
//#include "l3_inc_local.h"
//#include "mcd_l3_inc_struct.h"
//#include "mcd_mm_common_gen_struct.h"

//#include "l4crac_enums.h"
//#include "rac2l4c_struct.h"

//#include "mcd_ps2sat_peer.h"

//#include "l4c_aux_struct.h"
//#include "l4c2smsal_struct.h"
//#include "keypad_sw.h"
//#include "ps2sat_struct.h"
//#include "l4c2smu_struct.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2phb_enums.h" //mtk02514_storage
//#include "l4c2phb_struct.h"
#include "lmmi_ind.h"
#include "rmmi_ind.h"

//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
//#include "stack_ltlcom.h"
#include "rmmi_sio.h"


#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"

#include "rmmi_utility.h"
#include "rmmi_root.h"

#include "sim_public_enum.h"
#include "l4c_utility.h"
#include "drv_sap.h"
#include "l4_msgid.h"
#include "md_svc_sap.h"
#include "nvram_struct.h"
#include "nvram_msgid.h"
#include "l4c_sendmsg.h"
#include "nvram_interface.h"
#include "rmmi_rsp.h"
#include "l4c_eq_msg.h"

extern UART_PORT PS_UART_PORT;
extern UART_baudrate PS_BAUDRATE;
extern void l4c_attach_uart_port_lrsp(kal_uint8 result);        //l4c_port_result_enum
extern void l4c_detach_uart_port_lrsp(kal_uint8 result);        //l4c_port_result_enum
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
extern kal_bool tcm_create_sib( kal_uint8 sib_id );

kal_uint8 l4c_test_target_type = 0x56;

#if defined(__FLC_SUPPORT__)
#ifdef __FLC2__
extern void flc2_tst_inject_string_hdlr(tst_module_string_inject_struct *msg_ptr);
#else 
extern kal_bool gprs_flc_pool_status_report(kal_uint8 mem_id, kal_uint8 req_mod);
#endif 
#endif /* defined(__FLC_SUPPORT__) */ 

/* End  FLC2 Modification */

#ifndef __MTK_TARGET__ //RMMI_UT ---
#define LOCAL_ATCI_MAX_UT_IO_LENGTH 1024

typedef struct
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    kal_uint8 src_id;
	kal_uint8 port;
    kal_uint8 string[LOCAL_ATCI_MAX_UT_IO_LENGTH];
	kal_bool stuff;
} local_atci_ut_rmmi_input_string_struct; // MSG_ID_ATCI_UT_RMMI_OUTPUT_STRING

void l4c_atci_ut_rmmi_input_string_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    local_atci_ut_rmmi_input_string_struct* msg_ptr;
    rmmi_string_struct temp_struct;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint16 length;

    msg_ptr = (local_atci_ut_rmmi_input_string_struct*) local_para_ptr;
	
    length = (kal_uint16)strlen((char*)msg_ptr->string);
    temp_struct.index = 0;
    if ((kal_uint16)length + 2 >= 2048)
    {
        ASSERT(0);
    }

    temp_struct.string_ptr = get_ctrl_buffer((kal_uint16) (length + 2));
    kal_mem_cpy(temp_struct.string_ptr, msg_ptr->string, length);
    temp_struct.string_ptr[length] = rmmi_ptr->s_reg.s3;
    temp_struct.string_ptr[length + 1] = RMMI_END_OF_STRING_CHAR;
    temp_struct.src_id = msg_ptr->src_id;
	
    rmmi_cmd_processor(&temp_struct, (kal_uint16) (length + 1));
    free_ctrl_buffer(temp_struct.string_ptr);
}
#endif //not __MTK_TARGET__ //--- RMMI_UT


/*****************************************************************************
 * FUNCTION
 *  l4c_check_tst_inject_cmd_conflict
 * DESCRIPTION
 *  This is command conflict check for tst inject string, Check if any action on going here
 * PARAMETERS
 *  cmd_string            [IN]            
 * RETURNS
 *  KAL_TRUE    command conflct
 *  KAL_FALSE   command not conflict
 *****************************************************************************/
kal_bool l4c_check_tst_inject_cmd_conflict(kal_char* cmd_string)
{
    kal_bool ret_val = KAL_FALSE;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    /* normal AT command should be allowed IF and ONLY IF
           when RMMI is in command state and when RMMI is not doing any action. */

    /* mtk00714 20040408: AT is doing some action already, not allowed */
    if (l4c_ptr->cc_state[RMMI_SRC] != L4C_COMMAND_STATE)
    {
        /* online data state */
        ret_val = KAL_TRUE;
    }
    else if (l4c_ptr->cc_current_action[RMMI_SRC] != L4C_NO_ACTION)
    {
        /* RMMI is in action */
        ret_val = KAL_TRUE;
    }
    else if(l4c_ptr->route_thru_lmmi == KAL_TRUE)
    {
        /* Check command conflict! Now we only check route_thru_lmmi flag, and this maybe extended 
                 to action check later if necessary */
        ret_val = KAL_TRUE;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  tst_inject_string_hdlr
 * DESCRIPTION
 *  This is tst_inject_string_hdlr function of L4C module.
 *  is called when receive tst inject string msg
 *  and take the string as at cmd to process
 * PARAMETERS
 *  local_para_ptr      [IN]        Local parameter of the received msg
 *  peer_buff_ptr       [IN]        Peer buffer of the received msg
 * RETURNS
 *  void
 *****************************************************************************/
void tst_inject_string_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    tst_module_string_inject_struct *msg_ptr;
    rmmi_string_struct temp_struct;
    kal_uint16 length;
    l4c_context_struct *l4c_ptr = L4C_PTR;
#if !defined(__MTK_TARGET__) && defined(__GEMINI__)
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
#endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_TST_INJECT_STRING_HDLR_ENTRY);
    msg_ptr = (tst_module_string_inject_struct*) local_para_ptr;

#if defined(__FLC_SUPPORT__)
#ifdef __FLC2__
    if (msg_ptr->index > 100 && msg_ptr->index <= 200)
    {
        flc2_tst_inject_string_hdlr(msg_ptr);
    }
#else /* __FLC2__ */ 
    if (strcmp((char*)msg_ptr->string, "FLC") == 0)
    {
        gprs_flc_pool_status_report(msg_ptr->index, (kal_uint8) l4c_current_mod_id);
    }
#endif /* __FLC2__ */ 
    else
#endif /* defined(__FLC_SUPPORT__) */ 

    if (msg_ptr->index == 201)
    {
        kal_char buf[80];

        #ifdef __GEMINI_3G_SWITCH__
        kal_sprintf(buf, "[SIM Switch Info] Current used 3G SIM: %d", l4c_gemini_get_actual_sim_id(SIM1));
        kal_sys_trace(buf);
        #endif /*__GEMINI_3G_SWITCH__*/
        
        kal_sprintf(buf, "[Test Mode Info] Current Test Mode: %d, Special Setting: 0x%X", L4C_COMM_PTR->ps_conf_test_mode, L4C_COMM_PTR->ps_conf_test_profile);
        kal_sys_trace(buf);
    }
    else
    if (strcmp((char*)msg_ptr->string, "l4cstate") == 0)
    {
        kal_brief_trace(
            TRACE_INFO,
            INFO_LMMI_STATE_AND_CURRENT_ACTION,
            l4c_ptr->cc_state[LMMI_SRC],
            l4c_ptr->cc_current_action[LMMI_SRC]);

        kal_brief_trace(
            TRACE_INFO,
            INFO_STATE_AND_CURRENT_ACTION,
            l4c_ptr->cc_state[RMMI_SRC],
            l4c_ptr->cc_current_action[RMMI_SRC]);
    }
    else if (strcmp((char*)msg_ptr->string, "ipv4") == 0)
    {
        l4c_test_target_type = 0x21; //IPV4_ADDR_TYPE;
    }
    else if (strcmp((char*)msg_ptr->string, "ipv6") == 0)
    {
        l4c_test_target_type = 0x57; //IPV6_ADDR_TYPE;
    }
    else if (strcmp((char*)msg_ptr->string, "ipv4v6") == 0)
    {
        l4c_test_target_type = 0x8D; //IPV4V6_ADDR_TYPE;
    }    
    else if (strcmp((char*)msg_ptr->string, "ip5566") == 0)
    {
        l4c_test_target_type = 0x56;
    }
	else if (strcmp((char*)msg_ptr->string, "l4c_ready") == 0)
	{
	    //MAUI_03246429 , set l4c and smsal ready, simulate scene: send a sms, and havn't recv ack.
		l4c_ptr->sub_modules_ready = KAL_TRUE;
		
		l4c_ptr->sms_current_action[RMMI_SRC] = CMGS_PDU_EXE;

		l4c_ptr->sms_ready_flag = KAL_TRUE;
	}
    else if (strcmp((char*)msg_ptr->string, "nitz") == 0)
    {
        l4c_nw_time_zone_time_struct nw_time_zone_time;

        kal_uint8 full_nw_name[MAX_NW_NAME_LEN] =
            { 'a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'a', 'a', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'a',
'a', 'a', 0};
        nw_time_zone_time.year = 0x60;
        nw_time_zone_time.month = 0x50;
        nw_time_zone_time.day = 0x61;
        nw_time_zone_time.hour = 0x51;
        nw_time_zone_time.min = 0x03;
        nw_time_zone_time.sec = 0x95;
        nw_time_zone_time.time_zone = 0;

        l4c_nw_time_zone_lind(KAL_TRUE, //full_nw_nameP
                              0,        //SMSAL_DEFAULT_DCS, full_nw_name_dcs
                              KAL_TRUE, //full_nw_name_add_ci
                              MAX_NW_NAME_LEN,  //full_nw_name_len                                                                     
                              full_nw_name, 
                              KAL_FALSE,  //short_nw_nameP
                              0,        //SMSAL_DEFAULT_DCS, short_nw_name_dcs
                              KAL_FALSE,        //short_nw_name_add_ci
                              0,        //short_nw_name_len                                                                  
                              NULL,     //short_nw_name                                                                   
                              KAL_TRUE, //nw_time_zoneP,
                              0x23,     //nw_time_zone,
                              KAL_TRUE, //nw_time_zone_timeP,
                              nw_time_zone_time,        //nw_time_zone_time,
                              KAL_FALSE,        //lsa_idP,
                              0,        //lsa_id_len,
                              0,        //lsa_id,
                              KAL_FALSE,        //nw_day_light_saving_timeP,
                              0,      //nw_day_light_saving_time
                              NULL);

        l4c_nw_time_zone_rind(0x80, KAL_TRUE, 1);
    }
    else
    {
        if ((strncmp((char*)msg_ptr->string, "AT+EKEY", 7) == 0) ||
            (strncmp((char*)msg_ptr->string, "at+ekey", 7) == 0))
        {
            /* we allow this special command +EKEY to turn on testing mode, so that +CKPD can be by-pass
               during gprs data state */
            /* so we do not check state here. +EKEY won't be blocked */
        }
        #if defined(__MMI_FMI__) 
        else if (l4c_ptr->ekey_mode == 1)
        {
            /* we allow AT CMD from Catcher if AT+EKEY was enabled, which is for testing during gprs data state */
            /* so we do not check state here. */
        }
        #endif
    #ifndef __MTK_TARGET__
        else if (strcmp((char*)msg_ptr->string, "poweron") == 0)
        {
            l4cuem_power_on_ind(0, 0);  //POWER_ON_KEYPAD
        #ifdef __GEMINI__
            l4c_comm_ptr->dual_sim_inserted_status = msg_ptr->index;
        #endif /* __GEMINI__ */ 
        }
    #ifdef __MOD_TCM__
        else if (strcmp((char*)msg_ptr->string, "mmi_create_sib_3") == 0)
        {
            tcm_create_sib(3);
        }
    #endif /* __MOD_TCM__ */ 
    #endif /* __MTK_TARGET__ */ 
        else
        {
            /* Check command conflict. */
            if(l4c_check_tst_inject_cmd_conflict((kal_char *)msg_ptr->string) == KAL_TRUE)
            {
                return;
            }
        }

        RMMI_COMM_PTR->cmd_from_tst = KAL_TRUE;

        length = (kal_uint16)strlen((char*)msg_ptr->string);
        temp_struct.index = 0;
        if ((kal_uint16) length + 2 >= 2048)
        {
            ASSERT(0);
        }

        temp_struct.string_ptr = get_ctrl_buffer((kal_uint16) (length + 2));
        kal_mem_cpy(temp_struct.string_ptr, msg_ptr->string, length);
        temp_struct.string_ptr[length] = rmmi_ptr->s_reg.s3;
        temp_struct.string_ptr[length + 1] = RMMI_END_OF_STRING_CHAR;
        temp_struct.src_id = RMMI_SRC;
        rmmi_cmd_processor(&temp_struct, (kal_uint16) (length + 1));

        free_ctrl_buffer(temp_struct.string_ptr);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_attach_uart_port_req
 * DESCRIPTION
 *  for uart configure in run-time,
 *  it handles the request by MMI_EQ_SET_UART_ATTACH_REQ
 * PARAMETERS
 *  src_id          [IN]        
 *  module_id       [IN]        the owner module of the uart port.
 *  port            [IN]        the uart port to be opened.
 *  baud_rate       [IN]        
 * RETURNS
 *  kal_bool.
 *****************************************************************************/
kal_bool l4c_attach_uart_port_req(kal_uint8 src_id, module_type module_id, UART_PORT port, kal_uint32 baud_rate)
{
    kal_bool ret;
    l4c_port_result_enum result;

    if (l4c_check_port_free((kal_uint8) port) == KAL_FALSE)
    {
        if (src_id == LMMI_SRC)
        {
            l4c_attach_uart_port_lrsp(L4C_PORT_OPEN_FAIL_PORT_NOT_FREE);
        }
        return KAL_FALSE;
    }

    if (module_id == l4c_current_mod_id)
    {
        if (PS_UART_PORT == port)
        {
            result = L4C_PORT_OPEN_FAIL_PORT_ALREADY_OPEN;
        }
        else if (PS_UART_PORT != uart_port_null)
        {
            result = L4C_PORT_OPEN_FAIL_HOLDING_PORT;
        }
        else
        {
            rmmi_root_plugout_uart((kal_uint8)PS_UART_PORT);
            PS_UART_PORT = port;
            PS_BAUDRATE = baud_rate;
            ret = rmmi_open_uart_port(port, baud_rate);
            if (ret == KAL_TRUE)
            {
                result = L4C_PORT_NO_ERROR;
            }
            else
            {
                result = L4C_PORT_OPEN_FAIL_PORT_NOT_FREE;
                PS_UART_PORT = uart_port_null;
            }
        }

        if (src_id == LMMI_SRC)
        {
            l4c_attach_uart_port_lrsp((kal_uint8) result);
        }
        //else RMMI?
    }
    else
    {
        l4c_send_open_port_req((kal_uint8) port, (kal_uint8) module_id, baud_rate);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_detach_uart_port_req
 * DESCRIPTION
 *  for uart configure in run-time,
 *  it handles the request by MMI_EQ_SET_UART_DETACH_REQ
 * PARAMETERS
 *  src_id          [IN]        
 *  module_id       [IN]        the owner module of the uart port.
 *  port            [IN]        the uart port to be opened.
 * RETURNS
 *  kal_bool.
 *****************************************************************************/
kal_bool l4c_detach_uart_port_req(kal_uint8 src_id, module_type module_id, UART_PORT port)
{
    if (module_id == l4c_current_mod_id)
    {
        if (PS_UART_PORT != port)
        {
            l4c_detach_uart_port_lrsp(L4C_PORT_CLOSE_FAIL_NOT_OWNER);
        }
        else
        {
            RMMI_UART_Close(port, MOD_ATCI);
            rmmi_root_plugout_uart((kal_uint8)port);
            PS_UART_PORT = uart_port_null;
            
            l4c_detach_uart_port_lrsp(L4C_PORT_NO_ERROR);
        }
    }
    else
    {
        l4c_send_close_port_req((kal_uint8) port, (kal_uint8) module_id);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_open_uart_port_cnf_hdlr
 * DESCRIPTION
 *  for uart configure in run-time,
 *  it then sends MMI_EQ_SET_UART_ATTACH_RSP to MMI
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_open_uart_port_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_open_uart_port_cnf_struct *msg_ptr = NULL;

    msg_ptr = (l4c_open_uart_port_cnf_struct*) local_para_ptr;

    l4c_attach_uart_port_lrsp(msg_ptr->result);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_close_uart_port_cnf_hdlr
 * DESCRIPTION
 *  for uart configure in run-time,
 *  it then sends MMI_EQ_SET_UART_DETACH_RSP to MMI
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_close_uart_port_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_close_uart_port_cnf_struct *msg_ptr = NULL;

    msg_ptr = (l4c_close_uart_port_cnf_struct*) local_para_ptr;

    l4c_detach_uart_port_lrsp(msg_ptr->result);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_check_port_free
 * DESCRIPTION
 *  This is l4c_check_port_free function of L4C module.
 * PARAMETERS
 *  port        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_check_port_free(kal_uint8 port)
{
    if (((port == uart_port1) && (RMMI_UART_GetOwnerID((UART_PORT)port) != MOD_UART1_HISR)) ||
#ifdef __UART3_SUPPORT__
        ((port == uart_port3) && (RMMI_UART_GetOwnerID((UART_PORT)port) != MOD_UART3_HISR)) ||
#endif 
        ((port == uart_port2) && (RMMI_UART_GetOwnerID((UART_PORT)port) != MOD_UART2_HISR)))
    {
        return KAL_FALSE;
    }
    else
    {
        return KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_open_port_req
 * DESCRIPTION
 *  This is l4c_send_open_uart_req function of L4C module.
 *  it sends msg to other task and asks to open the port in run-time
 * PARAMETERS
 *  port            [IN]        
 *  module_id       [IN]        
 *  baud_rate       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_open_port_req(kal_uint8 port, kal_uint8 module_id, kal_uint32 baud_rate)
{

    l4c_open_uart_port_req_struct *param_ptr;

    param_ptr = (l4c_open_uart_port_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_open_uart_port_req_struct), TD_RESET);
    param_ptr->port = (UART_PORT)port;
    param_ptr->baud_rate = baud_rate;


    l4c_send_msg(module_id, 
            MSG_ID_L4C_OPEN_UART_PORT_REQ, UART_L4C_SAP, param_ptr, NULL);

}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_close_port_req
 * DESCRIPTION
 *  This is l4c_send_close_uart_req function of L4C module.
 *  it sends msg to other task and asks to close the port in run-time
 * PARAMETERS
 *  port            [IN]        
 *  module_id       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_close_port_req(kal_uint8 port, kal_uint8 module_id)
{

    l4c_close_uart_port_req_struct *param_ptr;

    param_ptr = (l4c_close_uart_port_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_close_uart_port_req_struct), TD_RESET);
    param_ptr->port = (UART_PORT)port;

    l4c_send_msg(module_id, 
            MSG_ID_L4C_CLOSE_UART_PORT_REQ, UART_L4C_SAP, param_ptr, NULL);

}


/*****************************************************************************
 * FUNCTION
 *  l4c_tst_change_log_port_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]
 *  l1_port         [IN]    TST-L1 config
 *  ps_port         [IN]    TST-PS config
 *  log_mode        [IN]    1:USB logging; 2:SD logging
 * RETURNS
 *  kal_bool
 *****************************************************************************/
kal_bool l4c_tst_change_log_port_req(l4c_source_id_enum src_id,
                                     DCL_DEV l1_port, 
                                     DCL_DEV ps_port,
                                     kal_uint8 log_mode)
{
#if defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__)
    l4c_change_uart_port_req_struct *local_param_ptr = NULL;

    local_param_ptr = (l4c_change_uart_port_req_struct*)construct_local_para(
        (kal_uint16)sizeof(l4c_change_uart_port_req_struct), TD_RESET);

    local_param_ptr->src_id = src_id;
    local_param_ptr->l1_port = l1_port;
    local_param_ptr->ps_port = ps_port;
    local_param_ptr->mode = log_mode;

    l4c_send_msg_to_tst_reader(MSG_ID_L4C_CHANGE_UART_PORT_REQ, local_param_ptr);

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif /* defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__) */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_change_uart_port_cnf_hdlr
 * DESCRIPTION
 *   Handler function for MSG_ID_L4C_CHANGE_UART_PORT_CNF
 * PARAMETERS
 *  local_para_ptr  [IN] 
 *  peer_buff_ptr   [IN] 
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_change_uart_port_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    rmmi_common_context_struct *rmmi_common_ptr = RMMI_COMM_PTR;
    kal_uint8 *buffer = NULL;
    l4c_change_uart_port_cnf_struct *msg_ptr = NULL;
    kal_bool retval = KAL_FALSE;
    port_setting_struct *port_setting = NULL;
    nvram_write_req_struct *param_ptr = NULL;

    msg_ptr = (l4c_change_uart_port_cnf_struct*)local_para_ptr;

    if (msg_ptr->result == L4C_PORT_NO_ERROR)
    {
        buffer = (kal_uint8*)get_ctrl_buffer(NVRAM_EF_PORT_SETTING_SIZE);
        if (buffer != NULL)
        {
            if (nvram_external_read_data(NVRAM_EF_PORT_SETTING_LID, 1, buffer, NVRAM_EF_PORT_SETTING_SIZE) == KAL_TRUE)
            {
                port_setting = (port_setting_struct*)buffer;
                param_ptr = (nvram_write_req_struct*)l4c_construct_nvram_write_local_para(msg_ptr->src_id, 
                                                                                          NVRAM_EF_PORT_SETTING_LID,
                                                                                          1);
                port_setting->tst_port_ps = rmmi_common_ptr->etstlp_port[0];
                port_setting->tst_port_l1 = rmmi_common_ptr->etstlp_port[1];
                l4c_set_user_action(L4C_EQ, msg_ptr->src_id, ETSTLP_EXE);
                l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, 
                                    param_ptr, 
                                    (kal_uint8*)port_setting, 
                                    NVRAM_EF_PORT_SETTING_SIZE);
            }
            free_ctrl_buffer(buffer);
            retval = KAL_TRUE;
        }
    }

    if (retval == KAL_FALSE)
    {
        rmmi_ptr->current_src = msg_ptr->src_id;
        l4c_general_rrsp(KAL_FALSE, L4C_NO_CAUSE);
    }
#endif /* defined(__AT_ETSTLP_SUPPORT__) || !defined(__MMI_FMI__) */
}

