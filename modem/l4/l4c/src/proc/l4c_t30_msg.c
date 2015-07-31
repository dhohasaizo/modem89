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
 * L4C_T30_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
 *
 * Author:
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
*==============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_T30_MSG_C
#include <stdio.h>
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"

#ifdef __CSD_FAX__

//#include "nvram_editor_data_item.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2smu_struct.h"
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
//#include "l4c_msghdlr.h"

//#include "mcd_l3_inc_struct.h"

#include "l4c_utility.h"
//#include "l4c_ft.h"

//#include "mcd.h"

//#include "l4c_aux_struct.h"
#include "l4c_cc_cmd.h"
//#include "l4c_ss_parse.h"
//#include "csmcc_atfunc.h"
//#include "l4c2csm_ss_struct.h"
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
#endif 
#include "rmmi_rsp.h"
#include "rmmi_rspfmttr.h"

#include "l4c2t30_struct.h"
#include "l4c2t30_enums.h"

#include "uart_sw.h"
#include "dcl.h"

//#include "mcd_ps2sat_peer.h"
#include "rmmi_utility.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"

extern UART_PORT PS_UART_PORT;

 


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_tx_msg_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_TX_MSG_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_tx_msg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_tx_msg_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    msg_ptr = (l4c_t30_tx_msg_cnf_struct*) local_para_ptr;

    src_id = l4c_ptr->fax_src_id;
    rmmi_ptr->current_src = src_id;

    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if ((l4c_ptr->cc_current_action[src_id] == FDT_EXE) || (l4c_ptr->cc_current_action[src_id] == FTM_EXE))
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

            if (msg_ptr->result_code == CODE_CONNECT)
            {
                l4c_t30_transfer_uart_req_struct *param_ptr;

                /* transfer uart to t30 */

                param_ptr = (l4c_t30_transfer_uart_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);

                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);

                //if(src_id == RMMI_SRC)
                //param_ptr->port = PS_UART_PORT;
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

                l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);       /* no field in this msg */

                /* uart now should belong to T30 */
                rmmi_ptr->uart_in_data_mode = KAL_TRUE;
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
                return;
            }
            else
            {
                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);
                return;
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
 *  l4c_t30_rx_msg_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RX_MSG_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_rx_msg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_rx_msg_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4c_t30_rx_msg_cnf_struct*) local_para_ptr;

    src_id = l4c_ptr->fax_src_id;
    rmmi_ptr->current_src = src_id;	

    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if ((l4c_ptr->cc_current_action[src_id] == FDR_EXE) || (l4c_ptr->cc_current_action[src_id] == FRM_EXE))
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

            if (msg_ptr->result_code == CODE_CONNECT)
            {
                l4c_t30_transfer_uart_req_struct *param_ptr;

                /* transfer uart to t30 */

                param_ptr = (l4c_t30_transfer_uart_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);

                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);

                //if(src_id == RMMI_SRC)
                //param_ptr->port = PS_UART_PORT;
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

                l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);       /* no field in this msg */
                /* uart now should belong to T30 */
                rmmi_ptr->uart_in_data_mode = KAL_TRUE;
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
                return;
            }
            else
            {
                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);
                return;
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
 *  l4c_t30_rw_param_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RW_PARAM_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_rw_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_rw_param_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (l4c_t30_rw_param_cnf_struct*) local_para_ptr;

    src_id = L4C_PTR->fax_src_id;
    RMMI_PTR->current_src = src_id;	

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

        if ((msg_ptr->action == ACTION_TEST) || (msg_ptr->action == ACTION_QUERY))
        {
            l4c_t30_result_string_rrsp(msg_ptr->result_str);    //print to DTE: test or query result
        }

        //print final result code to DTE: OK or ERROR
        if (msg_ptr->result_code == KAL_FALSE)
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        l4c_t30_general_rrsp(result);
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

  


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_rw_str_param_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RW_STR_PARAM_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_rw_str_param_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_rw_str_param_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (l4c_t30_rw_str_param_cnf_struct*) local_para_ptr;

    src_id = L4C_PTR->fax_src_id;
    RMMI_PTR->current_src = src_id;

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

        if ((msg_ptr->action == ACTION_TEST) || (msg_ptr->action == ACTION_QUERY))
        {
            l4c_t30_result_string_rrsp(msg_ptr->result_str);    //print to DTE: test or query result
        }

        //print final result code to DTE: OK or ERROR
        if (msg_ptr->result_code == KAL_FALSE)
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        l4c_t30_general_rrsp(result);
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

 


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_tx_bcs_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_TX_BCS_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_tx_bcs_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_tx_bcs_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4c_t30_tx_bcs_cnf_struct*) local_para_ptr;

    src_id = l4c_ptr->fax_src_id;
    rmmi_ptr->current_src = src_id;

    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if (l4c_ptr->cc_current_action[src_id] == FTH_EXE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

            if (msg_ptr->result_code == CODE_CONNECT)
            {
                l4c_t30_transfer_uart_req_struct *param_ptr;

                /* transfer uart to t30 */

                param_ptr = (l4c_t30_transfer_uart_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);

                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);

                //if(src_id == RMMI_SRC)
                //param_ptr->port = PS_UART_PORT;
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

                l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);       /* no field in this msg */
                /* uart now should belong to T30 */
                rmmi_ptr->uart_in_data_mode = KAL_TRUE;
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
                return;
            }
            else
            {
                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);
                return;
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
 *  l4c_t30_rx_bcs_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RX_BCS_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_rx_bcs_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_rx_bcs_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (l4c_t30_rx_bcs_cnf_struct*) local_para_ptr;

    src_id = l4c_ptr->fax_src_id;
    rmmi_ptr->current_src = src_id;

    if (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if (l4c_ptr->cc_current_action[src_id] == FRH_EXE)
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

            if (msg_ptr->result_code == CODE_CONNECT)
            {
                l4c_t30_transfer_uart_req_struct *param_ptr;

                /* transfer uart to t30 */

                param_ptr = (l4c_t30_transfer_uart_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);

                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);

                // if(src_id == RMMI_SRC)
                //param_ptr->port = PS_UART_PORT;
                param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

                l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);       /* no field in this msg */
                /* uart now should belong to T30 */
                rmmi_ptr->uart_in_data_mode = KAL_TRUE;
                l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_STATE;
                return;
            }
            else
            {
                /* l4c_t30_act_rrsp: response result_code to DTE */
                l4c_t30_act_rrsp(msg_ptr->result_code);
                return;
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
 *  l4c_t30_tx_silence_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_TX_SILENCE_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_tx_silence_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_result_struct result;
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if (L4C_PTR->cc_current_action[src_id] == FTS_EXE)
        {
            L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
	     RMMI_PTR->current_src = src_id;
            l4c_t30_general_rrsp(result);
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
 *  l4c_t30_rx_silence_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RX_SILENCE_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_rx_silence_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_result_struct result;
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if (L4C_PTR->cc_current_action[src_id] == FRS_EXE)
        {
            L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;

            //print to DTE: OK
	     RMMI_PTR->current_src = src_id;            
            l4c_t30_general_rrsp(result);
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
 *  l4c_t30_tx_ppm_cnf_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_RX_SILENCE_CNF from T.30.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_tx_ppm_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_tx_ppm_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4c_t30_tx_ppm_cnf_struct*) local_para_ptr;

    src_id = L4C_PTR->fax_src_id;

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        if (L4C_PTR->cc_current_action[src_id] == FET_EXE)
        {
            L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;

            /* l4c_t30_act_rrsp: response result_code to DTE */
	     RMMI_PTR->current_src = src_id;			
            l4c_t30_act_rrsp(msg_ptr->result_code);
            return;
        }
        //else: wrong msg error
    }
    else
    {
        /* wrong msg error */
    }
    return;
}

 


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_transfer_uart_ind_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_TRANSFER_UART_IND from T.30.
 *  after receiving this message, L4c get uart control.
 *  Add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_transfer_uart_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_transfer_uart_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4c_t30_transfer_uart_ind_struct*) local_para_ptr;
    src_id = l4c_check_port_owner_source(msg_ptr->port);

    if (L4C_PTR->cc_state[src_id] == L4C_ONLINE_DATA_STATE)
    {
        rmmi_obtain_uart_control(msg_ptr->port, KAL_FALSE);
        RMMI_PTR->uart_in_data_mode = KAL_FALSE;
        L4C_PTR->cc_state[src_id] = L4C_COMMAND_STATE;
        L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;
        if (msg_ptr->is_esc_on == KAL_TRUE)
        {
            RMMI_PTR->current_src = src_id;
            rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
        }
    }
    return;
}

 


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_ready_ind_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_READY_IND from T.30.
 *  after receiving this message, indicate L4c and DTE go to AT command mode,
 *  and passed the result_code from T30 to DTE.
 *  Add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_ready_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_ready_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;
    RMMI_PTR->current_src = src_id;

    msg_ptr = (l4c_t30_ready_ind_struct*) local_para_ptr;

    l4c_t30_act_rrsp(msg_ptr->result_code);
}

 


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_tx_bcs_ind_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_TX_BCS_IND from T.30.
 *  if transmitted HDLC frames is not the final frame, and DTE needs to continue to
 *  transmit HDLC frames, T30 uses this MSG to notify L4C.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_tx_bcs_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_transfer_uart_req_struct *param_ptr;
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;

    //hogan fax_src_id
    RMMI_PTR->current_src = src_id;    
    rmmi_result_code_fmttr(RMMI_RCODE_CONNECT, L4C_NO_CAUSE);

    /* transfer uart to t30 */

    param_ptr = (l4c_t30_transfer_uart_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_transfer_uart_req_struct), TD_RESET);

    /* l4c_t30_act_rrsp: response result_code to DTE */
    // if(src_id == RMMI_SRC)
    //param_ptr->port = PS_UART_PORT;
    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TRANSFER_UART_REQ, param_ptr);   /* no field in this msg */
    /* uart now should belong to T30 */
    RMMI_PTR->uart_in_data_mode = KAL_TRUE;
    L4C_PTR->cc_state[src_id] = L4C_ONLINE_DATA_STATE;

    return;
}

  


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_report_param_ind_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_REPORT_PARAM_IND from T.30.
 *  it is when T.30 needs to response AT command to DTE.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_report_param_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_t30_report_param_ind_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;
    RMMI_PTR->current_src = src_id;

    msg_ptr = (l4c_t30_report_param_ind_struct*) local_para_ptr;

    l4c_t30_result_string_rrsp(msg_ptr->result_str);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_voice_mode_ind_hdlr
 * DESCRIPTION
 *  This function is for handling MSG_ID_L4C_T30_VOICE_MODE_IND from T.30.
 *  which is used by T30 to notify L4C to change call mode to speech.
 *  L4C will send +FVO to DTE and request the CSM to do In Call Modify.
 *  add by mtk00714.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_voice_mode_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 string[5];
    kal_uint8 src_id;

    src_id = L4C_PTR->fax_src_id;
    RMMI_PTR->current_src = src_id;

    if (L4C_PTR->cc_current_action[src_id] != L4C_NO_ACTION)
    {
        L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;
    }

    kal_sprintf((char*)string, "+FVO");
    l4c_t30_result_string_rrsp(string);
    l4c_cc_exe_call_modify_req(src_id);
    return;
}

#endif /* __CSD_FAX__ */ 

