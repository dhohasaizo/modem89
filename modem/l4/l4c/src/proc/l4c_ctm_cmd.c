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
 * l4c_ctm_cmd.c
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_CTM_CMD_C
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "med_struct.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "nvram_msgid.h"

//#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"

//#include "l3_inc_enums.h"
#include "l4c_utility.h"
//#include "mcd.h"

//#include "l4a.h"
//#include "mmi_msg_struct.h"
#include "l4_trc.h"

//#include "l4c_ctm_cmd.h"

//#include "l1audio.h"
#include "aud_main.h"
#include "nvram_struct.h"
//#include "nvram_user_defs.h"
#include "Lmmi_rsp.h"
//#include "Rmmi_rsp.h"
#include "Lmmi_ind.h"
#include "nvram_data_items.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_utility.h"

#ifdef __CTM_SUPPORT__

extern void aud_send_ctm_open_req(module_type src_mod_id, kal_uint8 ctm_interface, ctm_param_struct *ctm_param);
extern void aud_send_ctm_close_req(module_type src_mod_id);
extern void aud_send_ctm_connect_req(module_type src_mod_id);
extern void aud_send_ctm_send_text_req(module_type src_mod_id, kal_uint16 num_of_char, void *text);


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_init_context
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_init_context()
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    
    l4c_ptr->ctm_current_action = L4C_NO_ACTION;
    l4c_ptr->ctm_user = L4C_NO_USER;

    l4c_ptr->is_ctm_connected = KAL_FALSE;
    l4c_ptr->connected_src_id = L4C_NO_USER;
    l4c_ptr->is_gpio_plug = KAL_FALSE;

    l4c_ptr->ctm_default_settings.is_turn_on = (kal_uint8) KAL_FALSE;
    l4c_ptr->ctm_default_settings.ctm_interface = CTM_BAUDOT_MODE;

    kal_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_init()
{
    nvram_read_req_struct *param_ptr;
    sim_interface_enum access_simId;

    access_simId = l4c_gemini_get_actual_sim_id(l4c_current_mod_id - MOD_L4C);
    param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para((kal_uint8)LMMI_SRC,
                                                                             NVRAM_EF_CTM_DEFAULT_SETTINGS_LID,
                                                                             (1 + access_simId),
                                                                             1);

    l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);

    l4c_set_user_action(L4C_CTM, LMMI_SRC, CTM_INIT);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, L4C_PTR->ctm_current_action, L4C_PTR->ctm_user);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_open_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  ctm_interface       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_open_req(kal_uint8 src_id, kal_uint8 ctm_interface)
{
#ifndef MED_NOT_PRESENT
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_ctm_cmd_conflict(src_id, CTM_OPEN) == KAL_TRUE)
    {
        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        return KAL_FALSE;
    }

    /*
     * if (L4C_PTR->ctm_default_settings.ctm_interface == CTM_DIRECT_MODE && L4C_PTR->is_gpio_plug == KAL_TRUE)
     * {
     * aud_send_ctm_open_req(l4c_current_mod_id, CTM_BAUDOT_MODE, &(L4C_PTR->ctm_default_settings.ctm_param));
     * }
     * else
     * {
     * aud_send_ctm_open_req(l4c_current_mod_id, L4C_PTR->ctm_default_settings.ctm_interface, &(L4C_PTR->ctm_default_settings.ctm_param));
     * }
     */

    if (src_id == LMMI_SRC)
    {
        /* Johnny: for LMMI_SRC, ctm_interface should == L4C_PTR->ctm_default_settings.ctm_interface */
        aud_send_ctm_open_req(l4c_current_mod_id, ctm_interface, &(l4c_ptr->ctm_default_settings.ctm_param));
    }
    else
    {
        aud_send_ctm_open_req(
            l4c_current_mod_id,
            l4c_ptr->ctm_default_settings.ctm_interface,
            &(l4c_ptr->ctm_default_settings.ctm_param));
    }

    l4c_set_user_action(L4C_CTM, src_id, CTM_OPEN);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
#endif /* MED_NOT_PRESENT */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_close_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_close_req(kal_uint8 src_id)
{
#ifndef MED_NOT_PRESENT
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    #if defined(__CTM_AT_CMD_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    #endif

    if (is_ctm_cmd_conflict(src_id, CTM_CLOSE) == KAL_TRUE)
    {
        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        return KAL_FALSE;
    }

    /* Johnny: for LMMI_SRC, L4C should send MMI_CTM_CONNECT_CNF to MMI before MEDIA_CTM_CLOSE_REQ */
    if (l4c_ptr->ctm_current_action == CTM_CONNECT)
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_connect_lrsp(KAL_FALSE);
        }
        /*
         * else
         * {
         * l4c_ctm_connect_rrsp(KAL_FALSE);
         * }
         */
    }

    aud_send_ctm_close_req(l4c_current_mod_id);

    //l4c_set_user_action(L4C_CTM, src_id, CTM_CLOSE);

    /* Johnny: CTM_CLOSE always success, L4C send CLOSE_CNF immediately */
    if (src_id == LMMI_SRC)
    {
        l4c_ctm_close_lrsp(KAL_TRUE);
    }
#if defined(__CTM_AT_CMD_SUPPORT__)
    else
    {
        rmmi_ptr->current_src = src_id;
        l4c_ctm_close_rrsp(KAL_TRUE);
    }
#endif
    l4c_ptr->is_ctm_connected = KAL_FALSE;
    l4c_ptr->connected_src_id = L4C_NO_USER;

    l4c_set_user_action(L4C_CTM, L4C_NO_USER, L4C_NO_ACTION);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
#endif /* MED_NOT_PRESENT */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_connect_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_connect_req(kal_uint8 src_id)
{
#ifndef MED_NOT_PRESENT
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_ctm_cmd_conflict(src_id, CTM_CONNECT) == KAL_TRUE)
    {
        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        return KAL_FALSE;
    }

    aud_send_ctm_connect_req(l4c_current_mod_id);

    l4c_set_user_action(L4C_CTM, src_id, CTM_CONNECT);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
#endif /* MED_NOT_PRESENT */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_send_text_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  num_of_char     [IN]        
 *  text            [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_send_text_req(kal_uint8 src_id, kal_uint16 num_of_char, kal_uint16 *text)
{
#ifndef MED_NOT_PRESENT
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_ctm_cmd_conflict(src_id, CTM_SEND_TEXT) == KAL_TRUE)
    {
        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        return KAL_FALSE;
    }

    if (num_of_char == 0)
    {
        if (l4c_ptr->ctm_user == LMMI_SRC)
        {
            l4c_ctm_send_text_lrsp(KAL_TRUE);
        }
#if defined(__CTM_AT_CMD_SUPPORT__)
        else
        {
            RMMI_PTR->current_src = src_id;
            l4c_ctm_send_text_rrsp(KAL_TRUE);
        }
#endif
        return KAL_TRUE;
    }

    aud_send_ctm_send_text_req(l4c_current_mod_id, num_of_char, text);

    l4c_set_user_action(L4C_CTM, src_id, CTM_SEND_TEXT);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
#endif /* MED_NOT_PRESENT */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_set_default_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  is_turn_on          [IN]        
 *  ctm_interface       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_set_default_req(kal_uint8 src_id, kal_bool is_turn_on, kal_uint8 ctm_interface)
{
    nvram_write_req_struct *param_ptr;
    l4c_ctm_default_settings_struct ctm_default_settings;
    sim_interface_enum access_simId;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_ctm_cmd_conflict(src_id, CTM_SET_DEFAULT) == KAL_TRUE) //MAUI_02602044
    {
        kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
        return KAL_FALSE;
    }

    access_simId = l4c_gemini_get_actual_sim_id(l4c_current_mod_id - MOD_L4C);
    param_ptr = (nvram_write_req_struct *)l4c_construct_nvram_write_local_para(src_id,
                                                                               NVRAM_EF_CTM_DEFAULT_SETTINGS_LID,
                                                                               (1+access_simId));


    ctm_default_settings.is_turn_on = (kal_uint8) is_turn_on;
    ctm_default_settings.ctm_interface = ctm_interface;
    kal_mem_cpy(&(ctm_default_settings.ctm_param), &(l4c_ptr->ctm_default_settings.ctm_param), sizeof(ctm_param_struct));

    l4c_send_msg_to_nvm(
        MSG_ID_NVRAM_WRITE_REQ,
        param_ptr,
        (kal_uint8*) & ctm_default_settings,
        sizeof(l4c_ctm_default_settings_struct));

    //write nvram must success
    if (l4c_ptr->is_gpio_plug == KAL_TRUE)
    {
        if (l4c_ptr->ctm_default_settings.is_turn_on == (kal_uint8) KAL_TRUE && is_turn_on == KAL_FALSE)
        {
            l4c_ctm_tty_plug_lind(KAL_FALSE);
        }
        if (l4c_ptr->ctm_default_settings.is_turn_on == (kal_uint8) KAL_FALSE && is_turn_on == KAL_TRUE)
        {
            l4c_ctm_tty_plug_lind(KAL_TRUE);
        }
    }

    l4c_ptr->ctm_default_settings.is_turn_on = (kal_uint8) is_turn_on;
    l4c_ptr->ctm_default_settings.ctm_interface = ctm_interface;

    l4c_set_user_action(L4C_CTM, src_id, CTM_SET_DEFAULT);

    kal_brief_trace(L4C_CTM_TRC, CTM_CURRENT, l4c_ptr->ctm_current_action, l4c_ptr->ctm_user);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_get_default_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_get_default_req(kal_uint8 src_id)
{
    if (src_id == LMMI_SRC)
    {
        l4c_ctm_get_default_lrsp(
            KAL_TRUE,
            (kal_bool) L4C_PTR->ctm_default_settings.is_turn_on,
            L4C_PTR->ctm_default_settings.ctm_interface);
    }
#if defined(__CTM_AT_CMD_SUPPORT__)
    else
    {
        RMMI_PTR->current_src = src_id;
        l4c_ctm_get_default_rrsp(
            KAL_TRUE,
            (kal_bool) L4C_PTR->ctm_default_settings.is_turn_on,
            L4C_PTR->ctm_default_settings.ctm_interface);
    }
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_set_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  group_id        [IN]        
 *  para1           [IN]        
 *  para2           [IN]        
 *  para3           [IN]        
 *  para4           [IN]        
 *  para5           [IN]        
 *  bitmask         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_set_config_req(
            kal_uint8 group_id,
            kal_uint16 para1,
            kal_uint16 para2,
            kal_uint16 para3,
            kal_uint16 para4,
            kal_uint16 para5,
            kal_uint8 bitmask)
{
    return KAL_TRUE;
}

#if defined(__CTM_AT_CMD_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_get_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  group_id        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ctm_get_config_req(kal_uint8 group_id)
{
    l4c_ctm_get_config_rrsp(KAL_TRUE, 0, 0, 0, 0, 0);
    return KAL_TRUE;
}
#endif

#endif /* __CTM_SUPPORT__ */ 

