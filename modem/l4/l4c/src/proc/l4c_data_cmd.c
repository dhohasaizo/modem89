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
 * L4C_DATA_CMD.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_DATA_CMD_C
//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
//#include "stack_config.h"
#include "kal_trace.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
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
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"

//#include "l4_defs.h"
//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"

#include "csmcc_atfunc.h"
#include "csmcc_defs.h"
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
#endif 

#include "rmmi_rspfmttr.h"
//#include "l4c_utility.h"
//#include "uart_sw.h"
#include "dcl.h"

#include "rmmi_utility.h"

#include "l4_trc.h"  //__RMMI_CUSTOM_CONTROL_DCD__, MAUI_02376231, mtk02285, 20100322

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "drv_comm.h"
#include "rmmi_sio.h"
#include "l4_msgid.h"

extern UART_PORT PS_UART_PORT;
extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);

#ifdef CSD_SUPPORT


/*****************************************************************************
 * FUNCTION
 *  l4c_df_set_rlp_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  iws         [IN]        
 *  mws         [IN]        
 *  t1          [IN]        
 *  n2          [IN]        
 *  ver         [IN]        
 *  t4          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_set_rlp_params_req(
            kal_uint8 src_id,
            kal_uint8 iws,
            kal_uint8 mws,
            kal_uint8 t1,
            kal_uint8 n2,
            kal_uint8 ver,
            kal_uint8 t4)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_set_rlp_param(iws, mws, t1, n2, ver, t4);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_get_rlp_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_get_rlp_params_req(kal_uint8 src_id)
{
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_set_v120_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rah             [IN]        
 *  mfm             [IN]        
 *  mode            [IN]        
 *  llineg          [IN]        
 *  assign          [IN]        
 *  neg_type        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_set_v120_params_req(
            kal_uint8 src_id,
            kal_uint8 rah,
            kal_uint8 mfm,
            kal_uint8 mode,
            kal_uint8 llineg,
            kal_uint8 assign,
            kal_uint8 neg_type)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_set_v120_param(rah, mfm, mode, llineg, assign, neg_type);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_get_v120_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  rah             [?]         
 *  mfm             [?]         
 *  mode            [?]         
 *  llineg          [?]         
 *  assign          [?]         
 *  neg_type        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_get_v120_params_req(
            kal_uint8 src_id,
            kal_uint8 *rah,
            kal_uint8 *mfm,
            kal_uint8 *mode,
            kal_uint8 *llineg,
            kal_uint8 *assign,
            kal_uint8 *neg_type)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_get_v120_param(rah, mfm, mode, llineg, assign, neg_type);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_set_comp_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  dir             [IN]        
 *  comp_neg        [IN]        
 *  max_dict        [IN]        
 *  max_str         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_set_comp_params_req(
            kal_uint8 src_id,
            kal_uint8 dir,
            kal_uint8 comp_neg,
            kal_uint16 max_dict,
            kal_uint8 max_str)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_set_data_compression_param(dir, comp_neg, max_dict, max_str);

    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_get_comp_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  dir             [?]         
 *  comp_neg        [?]         
 *  max_dict        [?]         
 *  max_str         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_get_comp_params_req(
            kal_uint8 src_id,
            kal_uint8 *dir,
            kal_uint8 *comp_neg,
            kal_uint16 *max_dict,
            kal_uint8 *max_str)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_get_data_compression_mode(dir, comp_neg, max_dict, max_str);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_set_bearer_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  bearer      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_set_bearer_mode_req(kal_uint8 src_id, kal_uint8 bearer)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_set_fclass_mode(bearer);

    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_get_bearer_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  bearer      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_get_bearer_mode_req(kal_uint8 src_id, kal_uint8 *bearer)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_get_fclass_mode(bearer);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_set_char_framing_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  format      [IN]        
 *  parity      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_set_char_framing_req(kal_uint8 src_id, kal_uint8 format, kal_uint8 parity)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_set_char_framing(format, parity);
    return ret_val;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_df_get_char_framing_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  format      [?]         
 *  parity      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_get_char_framing_req(kal_uint8 src_id, kal_uint8 *format, kal_uint8 *parity)
{
    kal_bool ret_val;

    ret_val = l4ccsm_cc_get_char_framing(format, parity);

    return ret_val;
}

#endif /* CSD_SUPPORT */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_df_exe_back_data_state_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_df_exe_back_data_state_req(kal_uint8 src_id)
{
    kal_bool result;
    kal_uint8 call_id;
    l4ccsm_cc_uart_transfer_req_struct *param;

    result = l4ccsm_cc_get_active_call(&call_id);

    if ((result == KAL_FALSE) || (call_id == CSMCC_INVALID_CALL_ID))
    {
        return KAL_FALSE;
    }

    param = (l4ccsm_cc_uart_transfer_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4ccsm_cc_uart_transfer_req_struct), TD_RESET);

    if (src_id >= RMMI_SRC)     // add on CURRENT_SRC_REVIEW
    rmmi_result_code_fmttr(RMMI_RCODE_CONNECT, L4C_GEN_CAUSE);

#if 0 // edit on CURRENT_SRC_REVIEW
/* under construction !*/
#else
    if(src_id >= RMMI_SRC)
        param->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
#endif


    param->is_esc_off = KAL_TRUE;
    kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, param->port, custom_get_dcd_value_for_data_state());
    RMMI_UART_CtrlDCD((UART_PORT)param->port, (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);
    RMMI_PTR->uart_in_data_mode = KAL_TRUE;
    // get data rate

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ, param, NULL, 0);
    L4C_PTR->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
    L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

    return KAL_TRUE;
}

