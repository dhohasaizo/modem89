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
 * L4C_SAT_MSG.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_SAT_MSG_C
#ifdef __SAT__

#include "sim_common_enums.h"
#include "mcd_l4_common.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "ps2sat_struct.h"
#include "mcd_ps2sat_peer.h"
#include "l4_msgid.h"
#ifdef __TCPIP__
#include "abm_msgid.h"
#endif
#ifdef __MOD_CSM__
#include "l4c_common_enum.h"
#include "ps2sat_struct.h"
#endif 
#include "l4c2smu_struct.h"
#include "lmmi_ind.h"
#include "lmmi_rsp.h"
#include "sat_def.h"
#include "l4_trc.h" 
#include "mcd.h"
#ifdef __RSAT__
#include "l4c_rsat_msg_struct.h"
#endif
#include "l4c_phb_cmd.h"
#include "rmmi_ind.h"
#ifdef __HOMEZONE_SUPPORT__
#include "l4c_hz_utility.h"
#endif
#include "kal_trace.h"
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "sim_ps_enum.h" 
#include "l4c_sim_cmd.h"
#ifdef __SATCE__
#include "mmi_l3_enums.h"
#include "l4c2abm_struct.h"
#endif
#include "l4c_utility.h"

/*****************************************************************************
 * FUNCTION
 *  l4csat_dspl_text_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_dspl_text_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_dspl_text_ind_struct *msg_ptr;
//    sat_dspl_text_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_dspl_text_ind_struct*) local_para_ptr;
/*
    L4C_UNPACK_ALLOC(
        sat_dspl_text_ind_peer_struct_alloc,
        MCD_SAT_DSPL_TEXT_IND_PEER_STRUCT,
        sat_dspl_text_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_dspl_text_ind_peer_struct_unpack,
        MCD_SAT_DSPL_TEXT_IND_PEER_STRUCT,
        sat_dspl_text_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);
*/
#ifdef __RSAT__
{
    kal_uint8 temp_src;
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_dspl_text_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_dspl_text_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_get_inkey_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_get_inkey_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_get_inkey_ind_struct *msg_ptr;
//    sat_get_inkey_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_get_inkey_ind_struct*) local_para_ptr;
/*
    L4C_UNPACK_ALLOC(
        sat_get_inkey_ind_peer_struct_alloc,
        MCD_SAT_GET_INKEY_IND_PEER_STRUCT,
        sat_get_inkey_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_get_inkey_ind_peer_struct_unpack,
        MCD_SAT_GET_INKEY_IND_PEER_STRUCT,
        sat_get_inkey_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);
*/
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_get_inkey_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_get_inkey_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_get_input_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_get_input_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_get_input_ind_struct *msg_ptr;
//    sat_get_input_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_get_input_ind_struct*) local_para_ptr;
/*
    L4C_UNPACK_ALLOC(
        sat_get_input_ind_peer_struct_alloc,
        MCD_SAT_GET_INPUT_IND_PEER_STRUCT,
        sat_get_input_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_get_input_ind_peer_struct_unpack,
        MCD_SAT_GET_INPUT_IND_PEER_STRUCT,
        sat_get_input_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_get_input_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_get_input_ind_peer_struct_dealloc, peer_buff);
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
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csat_setup_menu_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_setup_menu_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_setup_menu_ind_struct *msg_ptr;
//    sat_setup_menu_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_setup_menu_ind_struct*) local_para_ptr;

/*    L4C_UNPACK_ALLOC(
        sat_setup_menu_ind_peer_struct_alloc,
        MCD_SAT_SETUP_MENU_IND_PEER_STRUCT,
        sat_setup_menu_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_setup_menu_ind_peer_struct_unpack,
        MCD_SAT_SETUP_MENU_IND_PEER_STRUCT,
        sat_setup_menu_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_setup_menu_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_setup_menu_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_select_item_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_select_item_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_select_item_ind_struct *msg_ptr;
//    sat_select_item_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_select_item_ind_struct*) local_para_ptr;

/*    L4C_UNPACK_ALLOC(
        sat_select_item_ind_peer_struct_alloc,
        MCD_SAT_SELECT_ITEM_IND_PEER_STRUCT,
        sat_select_item_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_select_item_ind_peer_struct_unpack,
        MCD_SAT_SELECT_ITEM_IND_PEER_STRUCT,
        sat_select_item_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_select_item_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_select_item_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_play_tone_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_play_tone_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_play_tone_ind_struct *msg_ptr;
//    sat_play_tone_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_play_tone_ind_struct*) local_para_ptr;

/*    L4C_UNPACK_ALLOC(
        sat_play_tone_ind_peer_struct_alloc,
        MCD_SAT_PLAY_TONE_IND_PEER_STRUCT,
        sat_play_tone_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_play_tone_ind_peer_struct_unpack,
        MCD_SAT_PLAY_TONE_IND_PEER_STRUCT,
        sat_play_tone_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_play_tone_lind(msg_ptr, peer_buff);
#endif

//    L4C_UNPACK_DEALLOC(sat_play_tone_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_setup_call_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_setup_call_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_setup_call_ind_struct *msg_ptr;
    sat_setup_call_ind_peer_struct *peer_buff = NULL;

#ifdef __RSAT__
    mmi_sat_call_setup_stage1_req_struct *param_ptr = NULL;
#endif 

    msg_ptr = (sat_setup_call_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_setup_call_ind_peer_struct_alloc,
        MCD_SAT_SETUP_CALL_IND_PEER_STRUCT,
        sat_setup_call_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_setup_call_ind_peer_struct_unpack,
        MCD_SAT_SETUP_CALL_IND_PEER_STRUCT,
        sat_setup_call_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

//mtk01616_100223 : check 'command qualifier' to check if "redial" possible
if((msg_ptr->cmd_detail[4] == SETUP_CALL_WITH_REDIAL_IF_NO_ANOTHER_CALL) ||
    (msg_ptr->cmd_detail[4] == SETUP_CALL_WITH_REDIAL_PUT_ANOTHER_HOLD) ||
    (msg_ptr->cmd_detail[4] == SETUP_CALL_WITH_REDIAL_DISCON_ANOTHER)) 
{
    kal_brief_trace(TRACE_INFO, INFO_L4C_SET_SAT_REDIAL_FLAG,KAL_TRUE);                
    L4C_PTR->sat_redial_flag = KAL_TRUE; 
    L4C_PTR->sat_redial_duration = msg_ptr->duration;
}

#ifdef __RSAT__
{
    kal_uint8 temp_src;  
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
    msg_ptr->proactive_cmd.is_wait_for_rsp,
    msg_ptr->proactive_cmd.procomm,
    msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;

    if (L4C_PTR->parameter_sat.data != NULL)
    {
        free_local_para((local_para_struct*) L4C_PTR->parameter_sat.data);
    }

    /* save to L4C_PTR->parameter_sat */
    L4C_PTR->parameter_sat.length = sizeof(mmi_sat_call_setup_stage1_req_struct);
    L4C_PTR->parameter_sat.data = (mmi_sat_call_setup_stage1_req_struct*)
        construct_local_para((kal_uint16) sizeof(mmi_sat_call_setup_stage1_req_struct), TD_RESET);
    param_ptr = (mmi_sat_call_setup_stage1_req_struct*) L4C_PTR->parameter_sat.data;
    param_ptr->sat_call_type = msg_ptr->condition;       //SETUP_CALL_IF_NO_ANOTHER_CALL
    param_ptr->no_addr = (peer_buff->no_addr > MAX_CC_ADDR_LEN)? MAX_CC_ADDR_LEN : peer_buff->no_addr; //MAUI_02867359
    kal_mem_cpy(param_ptr->addr, peer_buff->addr, MAX_CC_ADDR_LEN);
    param_ptr->no_sub_addr = (msg_ptr->size_of_subaddr > MAX_CC_SUB_ADDR_BCD_LEN)? MAX_CC_SUB_ADDR_BCD_LEN : msg_ptr->size_of_subaddr;
    kal_mem_cpy(param_ptr->sub_addr, msg_ptr->subaddr, MAX_CC_SUB_ADDR_BCD_LEN);
    param_ptr->no_ccp = msg_ptr->size_of_ccp;
    kal_mem_cpy(param_ptr->ccp, msg_ptr->ccp, MAX_SAT_SIZE_OF_CCP); //MAUI_02863694
    //    param_ptr->is_changed_from_ss = msg_ptr->is_changed_from_ss;
    param_ptr->type_of_modification = msg_ptr->type_of_modification; 
}
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_setup_call_lind(msg_ptr, peer_buff);
#endif 

    L4C_UNPACK_DEALLOC(sat_setup_call_ind_peer_struct_dealloc, peer_buff);

}


/*****************************************************************************
 * FUNCTION
 *  l4csat_send_sms_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_send_sms_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_send_sms_ind_struct *msg_ptr;
    sat_send_sms_ind_peer_struct *peer_buff = NULL;

#ifdef __RSAT__
    mmi_sat_send_sms_stage1_req_struct *param_ptr = NULL;
#endif 

    msg_ptr = (sat_send_sms_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_send_sms_ind_peer_struct_alloc,
        MCD_SAT_SEND_SMS_IND_PEER_STRUCT,
        sat_send_sms_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_send_sms_ind_peer_struct_unpack,
        MCD_SAT_SEND_SMS_IND_PEER_STRUCT,
        sat_send_sms_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;

    if (L4C_PTR->parameter_sat.data != NULL)
    {
        free_local_para((local_para_struct*) L4C_PTR->parameter_sat.data);
    }

    /* save to L4C_PTR->parameter_sat */
    L4C_PTR->parameter_sat.length = sizeof(mmi_sat_send_sms_stage1_req_struct);
    L4C_PTR->parameter_sat.data = (mmi_sat_send_sms_stage1_req_struct*)
        construct_local_para((kal_uint16) sizeof(mmi_sat_send_sms_stage1_req_struct), TD_RESET);
    param_ptr = (mmi_sat_send_sms_stage1_req_struct*) L4C_PTR->parameter_sat.data;
    param_ptr->is_sms_packed_required = msg_ptr->is_sms_packed_required;
//    param_ptr->no_addr = msg_ptr->size_of_addr;
    param_ptr->no_addr = (msg_ptr->size_of_addr < 41)?(msg_ptr->size_of_addr):(41); // mtk02480 avoid mem corrupt
    kal_mem_cpy(param_ptr->addr, msg_ptr->addr, 41);
    param_ptr->tpdu_length = peer_buff->no_sms_tpdu;
    kal_mem_cpy(param_ptr->tpdu, peer_buff->sms_tpdu, 175);
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_send_sms_lind(msg_ptr, peer_buff);
#endif 

    L4C_UNPACK_DEALLOC(sat_send_sms_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_send_ss_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_send_ss_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_send_ss_ind_struct *msg_ptr;
    sat_send_ss_ind_peer_struct *peer_buff = NULL;

#ifdef __RSAT__
    mmi_sat_send_ss_stage1_req_struct *param_ptr = NULL;
#endif 

    msg_ptr = (sat_send_ss_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_send_ss_ind_peer_struct_alloc,
        MCD_SAT_SEND_SS_IND_PEER_STRUCT,
        sat_send_ss_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_send_ss_ind_peer_struct_unpack,
        MCD_SAT_SEND_SS_IND_PEER_STRUCT,
        sat_send_ss_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    //if (msg_ptr->is_changed_from_setupcall == KAL_FALSE)
    //   {
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;

    if (L4C_PTR->parameter_sat.data != NULL)
    {
        free_local_para((local_para_struct*) L4C_PTR->parameter_sat.data);
    }

    /* save to L4C_PTR->parameter_sat */
    L4C_PTR->parameter_sat.length = sizeof(mmi_sat_send_ss_stage1_req_struct);
    L4C_PTR->parameter_sat.data = (mmi_sat_send_ss_stage1_req_struct*)
        construct_local_para((kal_uint16) sizeof(mmi_sat_send_ss_stage1_req_struct), TD_RESET);
    param_ptr = (mmi_sat_send_ss_stage1_req_struct*) L4C_PTR->parameter_sat.data;
    kal_mem_cpy(param_ptr->input, peer_buff->ss_string, 182);
    param_ptr->dcs = 0x01; //MAUI_02337303
    param_ptr->length = peer_buff->no_ss_string;
    param_ptr->type_of_modification = msg_ptr->type_of_modification; 
}
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_send_ss_lind(msg_ptr, peer_buff);
#endif 

    L4C_UNPACK_DEALLOC(sat_send_ss_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_send_ussd_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_send_ussd_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_send_ussd_ind_struct *msg_ptr;
    sat_send_ussd_ind_peer_struct *peer_buff = NULL;
    sat_send_ussd_res_struct *tr_ptr = NULL;

#ifdef __RSAT__
    mmi_sat_send_ussd_stage1_req_struct *param_ptr = NULL;
#endif 
    msg_ptr = (sat_send_ussd_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_send_ussd_ind_peer_struct_alloc,
        MCD_SAT_SEND_USSD_IND_PEER_STRUCT,
        sat_send_ussd_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_send_ussd_ind_peer_struct_unpack,
        MCD_SAT_SEND_USSD_IND_PEER_STRUCT,
        sat_send_ussd_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    //MAUI_02638615: the USSD received here is raw data from SIM and shall be limited in 160 bytes
    if (peer_buff->no_ussd_string > 160)
    {
        tr_ptr = (sat_send_ussd_res_struct*)construct_local_para(
            (kal_uint16) sizeof(sat_send_ussd_res_struct), TD_RESET);
        tr_ptr->res = SAT_CMD_DATA_NOT_UNDERSTAND_BY_ME;
        tr_ptr->size_of_additional_info = 0;
        l4c_sat_send_ussd_res(tr_ptr);
        L4C_UNPACK_DEALLOC(sat_send_ussd_ind_peer_struct_dealloc, peer_buff);
        return;
    }
    
#ifdef __RSAT__
{
    kal_uint8 temp_src; // lexel    
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;

    if (L4C_PTR->parameter_sat.data != NULL)
    {
        free_local_para((local_para_struct*) L4C_PTR->parameter_sat.data);
    }

    /* save to L4C_PTR->parameter_sat */
    L4C_PTR->parameter_sat.length = sizeof(mmi_sat_send_ussd_stage1_req_struct);
    L4C_PTR->parameter_sat.data = (mmi_sat_send_ussd_stage1_req_struct*)
        construct_local_para((kal_uint16) sizeof(mmi_sat_send_ussd_stage1_req_struct), TD_RESET);
    param_ptr = (mmi_sat_send_ussd_stage1_req_struct*) L4C_PTR->parameter_sat.data;
    kal_mem_cpy(param_ptr->input, peer_buff->ussd_string, 160); //SIM send USSD in raw data which shall be limited in 160 bytes
    param_ptr->dcs = peer_buff->dcs_of_ussd_string; //MAUI_02337303

    param_ptr->length = peer_buff->no_ussd_string; //MAUI_02638615

    param_ptr->type_of_modification = msg_ptr->type_of_modification;   
}
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_send_ussd_lind(msg_ptr, peer_buff);
#endif 

    L4C_UNPACK_DEALLOC(sat_send_ussd_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_mmi_info_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_mmi_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__MMI_FMI__)
    sat_mmi_info_ind_struct *msg_ptr;
    sat_mmi_info_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_mmi_info_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_mmi_info_ind_peer_struct_alloc,
        MCD_SAT_MMI_INFO_IND_PEER_STRUCT,
        sat_mmi_info_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_mmi_info_ind_peer_struct_unpack,
        MCD_SAT_MMI_INFO_IND_PEER_STRUCT,
        sat_mmi_info_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    l4c_sat_mmi_info_lind(msg_ptr, peer_buff);

    L4C_UNPACK_DEALLOC(sat_mmi_info_ind_peer_struct_dealloc, peer_buff);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_setup_idle_dspl_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_setup_idle_dspl_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_setup_idle_dspl_ind_struct *msg_ptr;
//    sat_setup_idle_dspl_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_setup_idle_dspl_ind_struct*) local_para_ptr;

/*    L4C_UNPACK_ALLOC(
        sat_setup_idle_dspl_ind_peer_struct_alloc,
        MCD_SAT_SETUP_IDLE_DSPL_IND_PEER_STRUCT,
        sat_setup_idle_dspl_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_setup_idle_dspl_ind_peer_struct_unpack,
        MCD_SAT_SETUP_IDLE_DSPL_IND_PEER_STRUCT,
        sat_setup_idle_dspl_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;
}	
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    l4c_sat_setup_idle_dspl_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_setup_idle_dspl_ind_peer_struct_dealloc, peer_buff);
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_run_at_command_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_run_at_command_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SAT__
#ifdef __SATCB__
    sat_run_at_command_ind_struct *msg_ptr;
    sat_run_at_command_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_run_at_command_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_run_at_command_ind_peer_struct_alloc,
        MCD_SAT_RUN_AT_COMMAND_IND_PEER_STRUCT,
        sat_run_at_command_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_run_at_command_ind_peer_struct_unpack,
        MCD_SAT_RUN_AT_COMMAND_IND_PEER_STRUCT,
        sat_run_at_command_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

/* If AT command is processed by AP side ,AP is responsible to response TR to SIM   *
 * If AT command is processed by MD side, MD noly notifiy AP this event.            */ 	
#ifdef __RUN_AT_COMMAND_BY_AP__
#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}
#endif /*__RSAT__*/
#else
    RMMI_PTR->current_src = RMMI_SAT;
    l4c_sat_run_at_command_rind(msg_ptr, peer_buff);

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(RSAT_BY_SIM, NULL, 0);  /* should be handled by ME */
    RMMI_PTR->current_src = temp_src;	
}
#endif /*__RSAT__*/

#if defined(__MMI_FMI__)
    l4c_sat_run_at_command_lind(msg_ptr, peer_buff);
#endif /*__MMI_FMI__*/
#endif /*__RUN_AT_COMMAND_BY_AP__*/

    L4C_UNPACK_DEALLOC(sat_run_at_command_ind_peer_struct_dealloc, peer_buff);
#endif /* __SATCB__ */
#endif /* __SAT__ */ 
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_send_dtmf_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_send_dtmf_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_send_dtmf_ind_struct *msg_ptr;
    sat_send_dtmf_ind_peer_struct *peer_buff = NULL;

#ifdef __RSAT__
    mmi_sat_send_dtmf_stage1_req_struct *param_ptr = NULL;
#endif 

    msg_ptr = (sat_send_dtmf_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        sat_send_dtmf_ind_peer_struct_alloc,
        MCD_SAT_SEND_DTMF_IND_PEER_STRUCT,
        sat_send_dtmf_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_send_dtmf_ind_peer_struct_unpack,
        MCD_SAT_SEND_DTMF_IND_PEER_STRUCT,
        sat_send_dtmf_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	

    if (L4C_PTR->parameter_sat.data != NULL)
    {
        free_local_para((local_para_struct*) L4C_PTR->parameter_sat.data);
    }

    /* save to L4C_PTR->parameter_sat */
    L4C_PTR->parameter_sat.length = sizeof(mmi_sat_send_dtmf_stage1_req_struct);
    L4C_PTR->parameter_sat.data = (mmi_sat_send_dtmf_stage1_req_struct*)
        construct_local_para((kal_uint16) sizeof(mmi_sat_send_dtmf_stage1_req_struct), TD_RESET);
    param_ptr = (mmi_sat_send_dtmf_stage1_req_struct*) L4C_PTR->parameter_sat.data;
    kal_mem_cpy(param_ptr->dtmf_digit, peer_buff->dtmf, MAX_CC_ADDR_BCD_LEN);
    if (peer_buff->no_dtmf >= MAX_CC_ADDR_BCD_LEN)
    {
        param_ptr->no_digit = MAX_CC_ADDR_BCD_LEN - 1;
    }
    else
    {
        param_ptr->no_digit = peer_buff->no_dtmf;
    }
}
#endif /* __RSAT__ */ 

#if defined(__MMI_FMI__)
    if (peer_buff->no_dtmf >= MAX_CC_ADDR_BCD_LEN)
    {
        peer_buff->no_dtmf = MAX_CC_ADDR_BCD_LEN - 1;
    }

    l4c_sat_send_dtmf_lind(msg_ptr, peer_buff);
#endif /* defined(__MMI_FMI__) */ 

    L4C_UNPACK_DEALLOC(sat_send_dtmf_ind_peer_struct_dealloc, peer_buff);
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_file_change_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_file_change_ind_hdlr(local_para_struct *local_para_ptr)
{
    sat_file_change_ind_struct *msg_ptr;
    kal_uint8 i;

    msg_ptr = (sat_file_change_ind_struct*) local_para_ptr;

    l4c_sat_file_change_lind(
        (kal_uint8) msg_ptr->is_full_changed,
        msg_ptr->refresh_type,
        msg_ptr->num_of_file,
        msg_ptr->file_list);
#if !defined(__MMI_FMI__)
    {
        kal_uint8 temp_src;

        temp_src = RMMI_PTR->current_src;
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_file_change_rind(msg_ptr->is_full_changed, msg_ptr->num_of_file, msg_ptr->file_list);
        RMMI_PTR->current_src = temp_src;
    }
#endif 

    L4C_PTR->file_changed_map = 0;

    if (msg_ptr->is_full_changed == KAL_TRUE)
    {
    #if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__) 
        L4C_PTR->file_changed_map |= L4C_REFRESH_CSP;
    #endif
    #if defined(__ENS_RAT_BALANCING__)    
        L4C_PTR->file_changed_map |= L4C_REFRESH_RAT;
    #endif

        l4c_phb_update();
    #ifdef __HOMEZONE_SUPPORT__
        l4c_hz_update();
    #endif 
    }
    else
    {
        for (i = 0; i < msg_ptr->num_of_file; i++)
        {
            switch (msg_ptr->file_list[i])
            {
        #if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__) 
                case FILE_CSP_IDX:
                    L4C_PTR->file_changed_map |= L4C_REFRESH_CSP;
                    break;
        #endif
        #if defined(__ENS_RAT_BALANCING__)
                case FILE_U_ENS_RAT_IDX:
                    L4C_PTR->file_changed_map |= L4C_REFRESH_RAT;
                    break;
        #endif
                case FILE_ADN_IDX:
                case FILE_FDN_IDX:
                case FILE_LND_IDX:
                case FILE_SDN_IDX:
                case FILE_EXT1_IDX:
                case FILE_EXT2_IDX:
                case FILE_EXT3_IDX:
                case FILE_BDN_IDX:
                case FILE_EXT4_IDX:
                    l4c_phb_update();
                    break;
        #ifdef __HOMEZONE_SUPPORT__	   		
                case FILE_HZ_IDX:
                case FILE_HZ_CACHE1_IDX:
                case FILE_HZ_CACHE2_IDX:
                case FILE_HZ_CACHE3_IDX:            
	             l4c_hz_update();
		      break;
        #endif /* __HOMEZONE_SUPPORT__ */ 					
                default:
                    break;
            }
        }
    }

    l4c_sat_file_change_hdlr(msg_ptr->src_id);
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_lang_notify_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_lang_notify_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SAT_LOWCOST_UI_DISABLE__
    sat_lang_notify_ind_struct *msg_ptr;

    msg_ptr = (sat_lang_notify_ind_struct*) local_para_ptr;

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}
#endif 

#if defined(__MMI_FMI__)
    l4c_sat_lang_notify_lind(msg_ptr);
#endif 

#endif /* __SAT_LOWCOST_UI_DISABLE__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_launch_browser_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_launch_browser_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifndef __SAT_LOWCOST_UI_DISABLE__
    sat_launch_browser_ind_struct *msg_ptr;
//    sat_launch_browser_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (sat_launch_browser_ind_struct*) local_para_ptr;
/*
    L4C_UNPACK_ALLOC(
        sat_launch_browser_ind_peer_struct_alloc,
        MCD_SAT_LAUNCH_BROWSER_IND_PEER_STRUCT,
        sat_launch_browser_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        sat_launch_browser_ind_peer_struct_unpack,
        MCD_SAT_LAUNCH_BROWSER_IND_PEER_STRUCT,
        sat_launch_browser_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);*/

#ifdef __RSAT__
{
    kal_uint8 temp_src; 
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}
#endif 

#if defined(__MMI_FMI__)
    l4c_sat_launch_browser_lind(msg_ptr, peer_buff);
#endif 

//    L4C_UNPACK_DEALLOC(sat_launch_browser_ind_peer_struct_dealloc, peer_buff);
#endif /* __SAT_LOWCOST_UI_DISABLE__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_no_other_cmd_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_no_other_cmd_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{

#ifdef __RSAT__
{
    kal_uint8 temp_src;  
    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src =RMMI_UNSOLICITED;
    l4c_sat_no_other_cmd_rind();
    RMMI_PTR->current_src =temp_src;	
}
#endif 

#if defined(__MMI_FMI__)
    l4c_sat_no_other_cmd_lind();
#endif 

}


/*****************************************************************************
 * FUNCTION
 *  l4csat_menu_select_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_menu_select_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_menu_select_cnf_struct *msg_ptr;

    msg_ptr = (sat_menu_select_cnf_struct*) local_para_ptr;

    if (L4C_PTR->cc_current_action[SAT_SRC] == MENU_SEL_EXE)
    {
        l4c_sat_exe_menu_select_lrsp(msg_ptr->is_successful);

        L4C_PTR->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
    }
    else
    {
        /* error */
    }
}

#ifdef __SATCE__
/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_open_channel_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_open_channel_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_sat_open_channel_cnf_struct *msg_ptr;

    msg_ptr = (l4csmu_sat_open_channel_cnf_struct*) local_para_ptr;

    l4c_sat_open_channel_lrsp(msg_ptr->res);

    L4C_PTR->cc_current_action[SAT_SRC] = L4C_NO_ACTION;

}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_open_channel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_open_channel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __MMI_FMI__

    l4csmu_sat_open_channel_ind_struct *msg_ptr;
    l4csmu_sat_open_channel_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (l4csmu_sat_open_channel_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        l4csmu_sat_open_channel_ind_peer_struct_alloc,
        MCD_SAT_OPEN_GPRS_CHANNEL_IND_PEER_STRUCT,
        l4csmu_sat_open_channel_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        l4csmu_sat_open_channel_ind_peer_struct_unpack,
        MCD_SAT_OPEN_GPRS_CHANNEL_IND_PEER_STRUCT,
        l4csmu_sat_open_channel_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    l4c_sat_open_channel_lind(msg_ptr, peer_buff);

    L4C_UNPACK_DEALLOC(l4csmu_sat_open_channel_ind_peer_struct_dealloc, peer_buff);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_close_channel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_close_channel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __MMI_FMI__
    l4csmu_sat_close_channel_ind_struct *msg_ptr;
    l4csmu_sat_close_channel_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (l4csmu_sat_close_channel_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        l4csmu_sat_close_channel_ind_peer_struct_alloc,
        MCD_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT,
        l4csmu_sat_close_channel_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        l4csmu_sat_close_channel_ind_peer_struct_unpack,
        MCD_SAT_CLOSE_CHANNEL_IND_PEER_STRUCT,
        l4csmu_sat_close_channel_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    l4c_sat_close_channel_lind(msg_ptr, peer_buff);
 

    L4C_UNPACK_DEALLOC(l4csmu_sat_close_channel_ind_peer_struct_dealloc, peer_buff);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_send_data_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_send_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __MMI_FMI__
    l4csmu_sat_send_data_ind_struct *msg_ptr;
    l4csmu_sat_send_data_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (l4csmu_sat_send_data_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        l4csmu_sat_send_data_ind_peer_struct_alloc,
        MCD_SAT_SEND_DATA_IND_PEER_STRUCT,
        l4csmu_sat_send_data_ind_peer_struct,
        peer_buff);
    L4C_UNPACK(
        l4csmu_sat_send_data_ind_peer_struct_unpack,
        MCD_SAT_SEND_DATA_IND_PEER_STRUCT,
        l4csmu_sat_send_data_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    l4c_sat_send_data_lind(msg_ptr, peer_buff);
 

    L4C_UNPACK_DEALLOC(l4csmu_sat_send_data_ind_peer_struct_dealloc, peer_buff);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_recv_data_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_recv_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __MMI_FMI__
    l4csmu_sat_recv_data_ind_struct *msg_ptr;
    l4csmu_sat_recv_data_ind_peer_struct *peer_buff = NULL;

    msg_ptr = (l4csmu_sat_recv_data_ind_struct*) local_para_ptr;

    L4C_UNPACK_ALLOC(
        l4csmu_sat_recv_data_ind_peer_struct_alloc,
        MCD_SAT_RECV_DATA_IND_PEER_STRUCT,
        l4csmu_sat_recv_data_ind_struct,
        peer_buff);
    L4C_UNPACK(
        l4csmu_sat_recv_data_ind_peer_struct_unpack,
        MCD_SAT_RECV_DATA_IND_PEER_STRUCT,
        l4csmu_sat_recv_data_ind_peer_struct,
        peer_buff,
        peer_buff_ptr);

    l4c_sat_recv_data_lind(msg_ptr, peer_buff);

    L4C_UNPACK_DEALLOC(l4csmu_sat_recv_data_ind_peer_struct_dealloc, peer_buff);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_set_csd_prof_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_set_csd_prof_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __TCPIP__
    //reference   l4c_cc_set_csd_profile_req
    l4csmu_sat_set_csd_prof_ind_struct *msg_ptr = NULL;


    l4ccsm_cc_set_csd_prof_req_struct *param_ptr;

    msg_ptr = (l4csmu_sat_set_csd_prof_ind_struct*) local_para_ptr;

    if (is_cmd_conflict(SAT_SRC, CSD_PROF_SET) == KAL_TRUE)
    {
        return;
    }

    L4C_PTR->cc_current_action[SAT_SRC] = CSD_PROF_SET;

    param_ptr = (l4ccsm_cc_set_csd_prof_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_set_csd_prof_req_struct),
                                                        TD_RESET);

    param_ptr->src_id = SAT_SRC;
    //param_ptr->csd_prof_id = CBM_SAT_CSD_ACCT_ID; //MAUI_02395134 CSD_NWT_ACCT_ID;
    param_ptr->profile_type = DATA_ACCT_SAT_PROF;

    //SATe don't have to set dns
    //    param_ptr->dns_addr_present = msg_ptr->dns_addr_present;
    //mtk01616_070530 : SATe set csd profile . we need tp fill in sat_prof instead of csd_prof struct
    //some information in sat_set_csd_prof_ind are not passed to csm

    param_ptr->sat_prof.addr.addr_length = msg_ptr->size_of_address;
    param_ptr->sat_prof.subaddr.sub_addr_len = msg_ptr->size_of_subaddr;
    param_ptr->sat_prof.is_addr_present = msg_ptr->is_addr_valid;
    param_ptr->sat_prof.is_subaddr_present = msg_ptr->is_subaddr_valid;
    param_ptr->sat_prof.is_local_addr_present = msg_ptr->is_local_addr_valid;
    param_ptr->sat_prof.is_user_id_present = msg_ptr->is_username_valid;
    param_ptr->sat_prof.is_user_pwd_present = msg_ptr->is_passwd_valid;
    param_ptr->sat_prof.sat_cbst = msg_ptr->csd_bearer;
    // mtk01616_070530 convert_to_bcd is needed!?       ?
    kal_mem_cpy(param_ptr->sat_prof.addr.addr_bcd, msg_ptr->addr, MAX_SIM_ADDR_BCD_LEN);
    kal_mem_cpy(param_ptr->sat_prof.subaddr.sub_addr, msg_ptr->subaddr, MAX_SIM_ADDR_BCD_LEN);
    kal_mem_cpy(param_ptr->sat_prof.local_addr, msg_ptr->local_addr, 16);
    kal_mem_cpy(param_ptr->sat_prof.user_id, msg_ptr->username, 16);
    kal_mem_cpy(param_ptr->sat_prof.user_pwd, msg_ptr->passwd, 16);
    kal_mem_cpy(
        (sat_csd_bearer_para_struct*) & param_ptr->sat_prof.sat_cbst,
        (sat_csd_bearer_para_struct*) & msg_ptr->csd_bearer,
        sizeof(param_ptr->sat_prof.sat_cbst));   // mtk02480 revise

    param_ptr->profile_type = DATA_ACCT_SAT_PROF;
    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_SET_CSD_PROF_REQ, param_ptr, NULL, 0);

#endif /* __TCPIP__ */ /* #ifdef __TCPIP__ */

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_set_gprs_prof_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_set_gprs_prof_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __TCPIP__
    l4csmu_sat_set_gprs_prof_ind_struct *msg_ptr = NULL;
    l4cabm_set_gprs_account_info_req_struct *param_ptr;

    msg_ptr = (l4csmu_sat_set_gprs_prof_ind_struct*) local_para_ptr;

    param_ptr = (l4cabm_set_gprs_account_info_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4cabm_set_gprs_account_info_req_struct),
                                                            TD_RESET);

    param_ptr->src_id = SAT_SRC;
    param_ptr->profile_type = DATA_ACCT_SAT_PROF;
    param_ptr->sate_account_info.is_apn_valid = msg_ptr->is_apn_valid;
    param_ptr->sate_account_info.apn_length = msg_ptr->apn_length;
    param_ptr->sate_account_info.is_username_valid = msg_ptr->is_username_valid;
    param_ptr->sate_account_info.no_username = msg_ptr->no_username;
    param_ptr->sate_account_info.dcs_of_username = msg_ptr->dcs_of_username;
    param_ptr->sate_account_info.is_passwd_valid = msg_ptr->is_passwd_valid;
    param_ptr->sate_account_info.no_passwd = msg_ptr->no_passwd;
    param_ptr->sate_account_info.dcs_of_passwd = msg_ptr->dcs_of_passwd;
    param_ptr->sate_account_info.is_local_addr_valid = msg_ptr->is_local_addr_valid;
    param_ptr->sate_account_info.no_local_addr = msg_ptr->no_local_addr;
    param_ptr->sate_account_info.is_dest_addr_valid = msg_ptr->is_dest_addr_valid;
    param_ptr->sate_account_info.no_dest_addr = msg_ptr->no_dest_addr;

    param_ptr->sate_account_info.gprs_bearer.p_class = msg_ptr->gprs_bearer.p_class;
    param_ptr->sate_account_info.gprs_bearer.d_class = msg_ptr->gprs_bearer.d_class;
    param_ptr->sate_account_info.gprs_bearer.r_class = msg_ptr->gprs_bearer.r_class;
    param_ptr->sate_account_info.gprs_bearer.peak_rate = msg_ptr->gprs_bearer.peak_rate;
    param_ptr->sate_account_info.gprs_bearer.mean_rate = msg_ptr->gprs_bearer.mean_rate;
    param_ptr->sate_account_info.gprs_bearer.proto_type = msg_ptr->gprs_bearer.proto_type;

    kal_mem_cpy(param_ptr->sate_account_info.apn, msg_ptr->apn, 50);
    kal_mem_cpy(param_ptr->sate_account_info.username, msg_ptr->username, 16);
    kal_mem_cpy(param_ptr->sate_account_info.passwd, msg_ptr->passwd, 16);
    kal_mem_cpy(param_ptr->sate_account_info.local_addr, msg_ptr->local_addr, 16);
    kal_mem_cpy(param_ptr->sate_account_info.dest_addr, msg_ptr->dest_addr, 16);
    param_ptr->profile_type = DATA_ACCT_SAT_PROF;

    l4c_send_msg_to_abm(MSG_ID_L4CABM_SET_GPRS_ACCOUNT_INFO_REQ, param_ptr);
#endif	
    return;
}

//To notify close_channel , send_data , recv_data finished


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sat_notify_mmi_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sat_notify_mmi_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_sat_notify_mmi_ind_struct *msg_ptr;

    msg_ptr = (l4csmu_sat_notify_mmi_ind_struct*) local_para_ptr;

    l4c_sat_notify_mmi_lind(msg_ptr->state);

    return;
}

#if defined(__RSAT__) || defined(EXTERNAL_MMI)
/*****************************************************************************
 * FUNCTION
 *  l4csat_open_channel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_open_channel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_open_channel_ind_struct *msg_ptr = (sat_open_channel_ind_struct*) local_para_ptr;

  #ifdef EXTERNAL_MMI
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
  
  #ifdef __RSAT__
  {
    kal_uint8 temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
  }
  #endif
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_close_channel_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_close_channel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_close_channel_ind_struct *msg_ptr = (sat_close_channel_ind_struct*) local_para_ptr;

  #ifdef EXTERNAL_MMI
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

  #ifdef __RSAT__
  {
     kal_uint8 temp_src = RMMI_PTR->current_src;	
     RMMI_PTR->current_src = RMMI_UNSOLICITED;
     l4c_sat_stkpci_rind(
         msg_ptr->proactive_cmd.is_wait_for_rsp,
         msg_ptr->proactive_cmd.procomm,
         msg_ptr->proactive_cmd.length);
     RMMI_PTR->current_src = temp_src;
   }
   #endif	
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_send_data_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_send_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_send_data_ind_struct *msg_ptr = (sat_send_data_ind_struct*) local_para_ptr;

  #ifdef EXTERNAL_MMI
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

  #ifdef __RSAT__
  {
    kal_uint8 temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
  }
  #endif	
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_recv_data_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_recv_data_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_recv_data_ind_struct *msg_ptr = (sat_recv_data_ind_struct*) local_para_ptr;

  #ifdef EXTERNAL_MMI
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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


  #ifdef __RSAT__
  {
    kal_uint8 temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
  }
  #endif	
}

/*****************************************************************************
 * FUNCTION
 *  l4csat_channel_status_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_channel_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_ch_status_ind_struct *msg_ptr = (sat_ch_status_ind_struct*) local_para_ptr;

  #ifdef EXTERNAL_MMI 
/* under construction !*/
  #endif
  
  #ifdef __RSAT__
  {
    kal_uint8 temp_src = RMMI_PTR->current_src;	
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
  }
  #endif	
}
#endif /*__RSAT__*/
#endif /* __SATCE__ */ 

#ifdef __SATCR__
/*****************************************************************************
 * FUNCTION
 *  l4csat_activate_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_contactless_state_changed_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_contactless_state_changed_ind_struct *msg_ptr;

    msg_ptr = (sat_contactless_state_changed_ind_struct*) local_para_ptr;

    #ifdef __RSAT__
    {
        kal_uint8 temp_src; 
        temp_src = RMMI_PTR->current_src;
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_sat_stkpci_rind(
            msg_ptr->proactive_cmd.is_wait_for_rsp,
            msg_ptr->proactive_cmd.procomm,
            msg_ptr->proactive_cmd.length);
        RMMI_PTR->current_src = temp_src;	
    }
    #endif 

}
#endif /* __SATCR__ */


#ifdef __SATCL__ 
/*****************************************************************************
 * FUNCTION
 *  l4csat_activate_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_activate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_activate_ind_struct *msg_ptr;

    msg_ptr = (sat_activate_ind_struct*) local_para_ptr;

    #ifdef __RSAT__
    {
        kal_uint8 temp_src; 
        temp_src = RMMI_PTR->current_src;
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_sat_stkpci_rind(
            msg_ptr->proactive_cmd.is_wait_for_rsp,
            msg_ptr->proactive_cmd.procomm,
            msg_ptr->proactive_cmd.length);
        RMMI_PTR->current_src = temp_src;	
    }
    #endif 

}
#endif /* __SATCL__ */


#if defined(__RSAT__) || defined(__SAT_PROPRIETARY_ENVELOPE__) || defined(__SAT_PROPRIETARY_COMMAND__) 
/*****************************************************************************
 * FUNCTION
 *  l4csat_envelope_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_envelope_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_envelope_cnf_struct *msg_ptr;

    msg_ptr = (sat_envelope_cnf_struct*) local_para_ptr;
    //do not send cnf to te now

    if (msg_ptr->src_id == LMMI_SRC)
    {
        l4c_sat_envelope_lrsp(
                msg_ptr->result, 
                msg_ptr->length, 
                msg_ptr->envelope_rsp);
    }  
}
#endif

#ifdef __RSAT__
/* mtk01616_110211 : MAUI_02868445 phase out RSAT AT+STKPD here */

/*****************************************************************************
 * FUNCTION
 *  l4csat_moretime_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_moretime_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_moretime_ind_struct *msg_ptr;
    kal_uint8 temp_src; 

    msg_ptr = (sat_moretime_ind_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_poll_interval_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_poll_interval_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_poll_interval_struct *msg_ptr;
    kal_uint8 temp_src; 

    msg_ptr = (sat_poll_interval_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
	
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_refresh_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_refresh_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_refresh_ind_struct *msg_ptr;
    kal_uint8 temp_src; 

    msg_ptr = (sat_refresh_ind_struct*) local_para_ptr;

    RMMI_PTR->eind_ready_flag &= ~(INFO_REPORT_MASK << RMMI_EIND_PHB_READY_BIT); 
    RMMI_PTR->eind_ready_flag &= ~(INFO_REPORT_MASK << RMMI_EIND_SMS_READY_BIT); 

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_polling_off_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_polling_off_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_polling_off_ind_struct *msg_ptr;
    kal_uint8 temp_src; 

    msg_ptr = (sat_polling_off_ind_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;	
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;		
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_provide_local_info_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_provide_local_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_provide_local_info_ind_struct *msg_ptr;
    kal_uint8 temp_src; 
    
    msg_ptr = (sat_provide_local_info_ind_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;	
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}


/*****************************************************************************
 * FUNCTION
 *  l4csat_timer_management_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_timer_management_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_timer_management_ind_struct *msg_ptr;
    kal_uint8 temp_src; 

    msg_ptr = (sat_timer_management_ind_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;	
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;
}
#endif /* __RSAT__ */ 

/*****************************************************************************
 * FUNCTION
 *  l4csat_setup_event_list_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csat_setup_event_list_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sat_setup_event_list_ind_struct *msg_ptr;

    msg_ptr = (sat_setup_event_list_ind_struct*) local_para_ptr;

    l4c_sat_event_list_lind(msg_ptr->event_list,msg_ptr->proactive_cmd);  

#ifdef __RSAT__
{
    kal_uint8 temp_src;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;	
    l4c_sat_stkpci_rind(
        msg_ptr->proactive_cmd.is_wait_for_rsp,
        msg_ptr->proactive_cmd.procomm,
        msg_ptr->proactive_cmd.length);
    RMMI_PTR->current_src = temp_src;	
}	
#endif
}

#endif /* __SAT__ */ 

