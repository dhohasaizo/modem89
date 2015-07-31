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
 * l4c_ctm_msg.c
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

#define L4C_CTM_MSG_C
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "med_struct.h"
//#include "ps_trace.h"
#include "kal_trace.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_mm_common_gen_struct.h"

//#include "l3_inc_enums.h"

#include "l4c_utility.h"

//#include "mcd.h"

//#include "l4a.h"
//#include "mmi_msg_struct.h"

#include "l4_trc.h"

//#include "l4c_ctm_msg.h"

#include "med_main.h"

#include "Lmmi_rsp.h"
//#include "Rmmi_rsp.h"
#include "Lmmi_ind.h"
//#include "Rmmi_ind.h"
#include "csmcc_atfunc.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

#ifdef __GEMINI__
extern void csmcc_context_selection(kal_uint8 sim_interface);
#endif


#ifdef __CTM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_open_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_open_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_ctm_open_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (media_ctm_open_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == MED_RES_OK)
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_open_lrsp(KAL_TRUE);//MAUI_02397070
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_open_rrsp(KAL_TRUE);
        }
    #endif
    }
    else
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_open_lrsp(KAL_FALSE);//MAUI_02397070
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_open_rrsp(KAL_FALSE);
        }
    #endif
    }
    if (l4c_check_user_action(L4C_CTM, (kal_uint8) l4c_ptr->ctm_user, CTM_OPEN))
    {
        l4c_set_user_action(L4C_CTM, L4C_NO_USER, L4C_NO_ACTION);
    }

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_close_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_close_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, L4C_PTR->ctm_current_action, L4C_PTR->ctm_user);
    kal_brief_trace(L4C_CTM_TRC, CTM_CONTEXT, L4C_PTR->is_ctm_connected, L4C_PTR->connected_src_id, L4C_PTR->is_gpio_plug);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_connect_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_connect_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_ctm_connect_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (media_ctm_connect_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == MED_RES_OK)
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_connect_lrsp(KAL_TRUE);
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_connect_rrsp(KAL_TRUE);
        }
    #endif
        l4c_ptr->is_ctm_connected = KAL_TRUE;
        l4c_ptr->connected_src_id = l4c_ptr->ctm_user;
    }
    else
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_connect_lrsp(KAL_FALSE);
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_connect_rrsp(KAL_FALSE);
        }
    #endif
    }
    if (l4c_check_user_action(L4C_CTM, (kal_uint8) l4c_ptr->ctm_user, CTM_CONNECT))
    {
        l4c_set_user_action(L4C_CTM, L4C_NO_USER, L4C_NO_ACTION);
    }

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
    kal_brief_trace(L4C_CTM_TRC, CTM_CONTEXT, l4c_ptr->is_ctm_connected, l4c_ptr->connected_src_id, l4c_ptr->is_gpio_plug);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_connected_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_connected_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
//MAUI_02580295    media_ctm_connected_ind_struct *msg_ptr;
    kal_bool ret_val = KAL_FALSE;	
    kal_uint8 temp_call_id;
    l4c_call_entry_struct call_info;
    kal_uint8 which_sim;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

//MAUI_02580295   msg_ptr = (media_ctm_connected_ind_struct*) local_para_ptr;

    kal_mem_set(&call_info,0,sizeof(l4c_call_entry_struct));

    /* Currently, we always let L4C_1 to handle CTM */
#if defined(__GEMINI__)
    /*
        for GEMINI, find sim2...simN call
    */
    for (which_sim = 0; which_sim < L4_MAX_SIM_NUM; which_sim++)
    {
        module_type this_l4c = L4_MODULE(MOD_L4C, which_sim);
		l4c_context_struct* this_l4c_ptr = get_l4c_ptr_by_mod(this_l4c);
        
        if (this_l4c_ptr->call_exist == KAL_TRUE)
        {
            kal_brief_trace(TRACE_INFO, INFO_SWITCH_CSM_CONTEXT, which_sim);
            csmcc_context_selection(which_sim);
        }
    }
#endif

    ret_val = l4ccsm_cc_get_active_call(&temp_call_id);

    if((ret_val == KAL_TRUE) && (l4ccsm_cc_get_call_info(temp_call_id, &call_info, NULL) == KAL_TRUE))
    {
        if (call_info.src_id == LMMI_SRC)
        {
            l4c_ctm_connected_lind();
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_connected_rind();
        }
    #endif

        l4c_ptr->is_ctm_connected = KAL_TRUE;
        l4c_ptr->connected_src_id = call_info.src_id;

        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        kal_brief_trace(L4C_CTM_TRC, CTM_CONTEXT, l4c_ptr->is_ctm_connected, l4c_ptr->connected_src_id, l4c_ptr->is_gpio_plug);
    }

#if defined(__GEMINI__)
    kal_brief_trace(TRACE_INFO, INFO_SWITCH_CSM_CONTEXT,SIM1);
    csmcc_context_selection(SIM1);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_send_text_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_send_text_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_ctm_send_text_cnf_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (media_ctm_send_text_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == MED_RES_OK)
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_send_text_lrsp(KAL_TRUE);
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_send_text_rrsp(KAL_TRUE);
        }
    #endif
    }
    else
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_send_text_lrsp(KAL_FALSE);
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_send_text_rrsp(KAL_FALSE);
        }
    #endif
    }
    if (l4c_check_user_action(L4C_CTM, (kal_uint8) l4c_ptr->ctm_user, CTM_SEND_TEXT))
    {
        l4c_set_user_action(L4C_CTM, L4C_NO_USER, L4C_NO_ACTION);
    }

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_med_ctm_recv_text_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_med_ctm_recv_text_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    media_ctm_recv_text_ind_struct *msg_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    msg_ptr = (media_ctm_recv_text_ind_struct*) local_para_ptr;

    if (l4c_ptr->is_ctm_connected == KAL_TRUE)
    {
        if (l4c_ptr->connected_src_id == LMMI_SRC)
        {
            l4c_ctm_recv_text_lind(msg_ptr->num_of_char, msg_ptr->text);
        }
    #if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            l4c_ctm_recv_text_rind(msg_ptr->num_of_char, msg_ptr->text);
        }
    #endif
    }
    else
    {
        ;       //error, ignore it.
    }

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
}

#endif /* __CTM_SUPPORT__ */ 

