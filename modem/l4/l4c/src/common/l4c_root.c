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
 * L4C_ROOT.C
 *
 * Project:
 * --------
 *   ALL
 *
 * Description:
 * ------------
 *   This file is intends for �K.
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

#define L4C_ROOT_C

#if defined(__GEMINI__)

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
#include "rsva_msgid.h"

//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"


//#include "mcd_l4_common.h"
//#include "csmss_common_enums.h"
//#include "csmcc_atfunc.h"

//#include "smsal_l4c_enum.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l4_trc.h"
//#include "l4c_aux_struct.h"
//#include "l4c_utility.h"
//#include "l4c_ss_parse.h"
#include "l4c_nw_cmd.h"
#include "l4c_sim_cmd.h"
//#include "l4c2csm_ss_struct.h"
//#include "l4c2smsal_struct.h"
//#include "device.h"
#include "l4c_eq_cmd.h"

#include "lmmi_ind.h"
#include "lmmi_rsp.h"
#include "rmmi_rsp.h"

//#include "kal_non_specific_general_types.h"

#include "kal_general_types.h"    
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"    
#include "ps_public_enum.h"    
#include "kal_public_api.h"    
//#include "l3_inc_enums.h"
#include "l4c_root.h"
#include "as2l4c_struct.h" //for rsvas_sim_status_config_req_struct

#if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
#include "ostd_public.h"
#endif

#ifdef __SIM_ME_LOCK__
#include "l4c2smu_struct.h" //link_SML
#include "l4_msgid.h" //for MSG_ID_L4CSMU_SECURITY_REQ
#include "custom_l4_utility.h"
#include "ps_public_utility.h"
#endif

/*****************************************************************************
 * FUNCTION
 *  get_desired_cfun_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mod_id       [IN]        
 * RETURNS
 *  1   desire to Radio on
 *  4   desire to Radio off
 *****************************************************************************/
kal_uint8 get_desired_cfun_state(module_type mod_id)
{
    return ((L4C_ROOT_PTR->efun_state & (1 << (mod_id - MOD_L4C)))? 1:4);
}


/*****************************************************************************
 * FUNCTION
 *  check_efun_state_consistency
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  KAL_TRUE: each L4C has reach to deire cfun_state
 *  KAL_FALSE: need switch
 *****************************************************************************/
kal_bool check_efun_state_consistency()
{
    kal_uint8 i;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        module_type mod_id = L4_MODULE(MOD_L4C, i);
        l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);

    #if defined(__SINGLE_AP_DUAL_MODEM__)    
        if (!(L4C_ROOT_PTR->sim_support_mode & (0x01 << i)))
            continue;
    #endif

        if (get_desired_cfun_state(mod_id) != l4c_ptr->cfun_state)
        {
            return KAL_FALSE;
        }
    }
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  check_new_sim_config
 * DESCRIPTION
 *   This function return new efun_state.
 *   Make sure that radio can be turn on if and only if SIM inserted
 *   The only exception is when no SIM card inserted.
 * PARAMETERS
 *     desired efun_state
 * RETURNS
 *  KAL_TRUE: allowed efun_state
 *****************************************************************************/
kal_uint8 check_new_sim_config(kal_uint8 desired_efun_state)
{
    kal_uint8 efun_state;

#if defined(__MMI_FMI__)
    // Not allow turn on radio if SIM not inserted
    efun_state = (desired_efun_state & L4C_COMM_PTR->dual_sim_inserted_status);

    // Desired to turn on radio when NO_SIM_INSERTED, just as the desired
    if (efun_state == SIM_RADIO_OFF && desired_efun_state != SIM_RADIO_OFF)
    {
        efun_state = desired_efun_state;
    }
#else
    efun_state = desired_efun_state;
#endif

    kal_trace(TRACE_INFO, INFO_L4C_ROOT_EFUN_STATE, desired_efun_state, efun_state, L4C_COMM_PTR->dual_sim_inserted_status);
    return efun_state;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_sim_reset_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_sim_reset_req(module_type mod_id)
{
    module_type temp_mod_id = l4c_current_mod_id;

    layer4_module_context_selection(mod_id);
    l4c_sim_reset_req(LMMI_SRC2);
    layer4_module_context_selection(temp_mod_id);    
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_sim_reset_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_sim_reset_rsp(module_type mod_id, kal_uint8 is_sim_inserted)
{
    l4c_root_power_on_ind();
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_power_on_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_power_on_ind(void)
{
    kal_uint8 i;
    module_type temp_mod_id;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        module_type mod_id = L4_MODULE(MOD_L4C, i);
        l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);
        
        if (l4c_ptr->single_sim_inserted_status == L4C_SINGLE_SIM_INSERTED_STATUS_NONE)
        {
            l4c_root_sim_reset_req(mod_id);
            return;
        }
    }

    temp_mod_id = l4c_current_mod_id;
    layer4_module_context_selection(MOD_L4C);
    l4c_sim_status_update_lind(L4C_COMM_PTR->dual_sim_inserted_status, L4C_COMM_PTR->dual_sim_mode_setting);
    layer4_module_context_selection(temp_mod_id);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_switch_to_desire_state_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sim_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint8 l4c_root_switch_to_desire_state_req(module_type mod_id, kal_uint8 desired_cfun_state)
{
    kal_bool res = KAL_FALSE;
    module_type temp_mod_id = l4c_current_mod_id;
	
    layer4_module_context_selection(mod_id);
    res = l4c_nw_cfun_state_req(LMMI_SRC2, desired_cfun_state);
    layer4_module_context_selection(temp_mod_id);
	
    return (kal_uint8)res;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_mode_switch_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id       [IN]    request src_id from LMMI or RMMI
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_root_sim_mode_switch_req(kal_uint8 root_src_id)
{
    module_type temp_mod_id = l4c_current_mod_id;
    kal_uint8 src_id = L4C_ROOT_PTR->root_src_id;  // Currently, L4C Root backup the root_src_id. Gernerally, src_id should piggy back by caller
    kal_uint8 ret = 0xFF;
    kal_uint8 i;

    /* ----------------------------------------------
        * Mulitple SIM switch principle:
        * - Turn off(1->4) should be done at first, before updating SIM config and other switching(4->1, 0->1, 0->4)
        * - Before turn on RF, update SIM config status as RFON.
         -------------------------------------------------*/

    // If all L4C_X has in desired state, end the switch procedure
    if (check_efun_state_consistency() == KAL_TRUE)
    {
        l4c_root_sim_mode_update_req(L4C_ROOT_PTR->efun_state);

	    layer4_module_context_selection(MOD_L4C);
        l4c_nw_sim_mode_switch_stop_req(src_id);

        if (src_id == LMMI_SRC)
        {
            l4c_nw_efun_state_lrsp(KAL_TRUE);
        }
	    else
        {  
            RMMI_PTR->current_src = src_id;
            l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);
    	}		
	    layer4_module_context_selection(temp_mod_id);
	    return KAL_TRUE;
    }

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        module_type mod_id = L4_MODULE(MOD_L4C, i);
        l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);
        kal_uint8 desired_cfun_state = get_desired_cfun_state(mod_id);

    #if defined(__SINGLE_AP_DUAL_MODEM__)    
        if (!(L4C_ROOT_PTR->sim_support_mode & (0x01 << i)))
            continue;
    #endif

        if ((desired_cfun_state==4) && (l4c_ptr->cfun_state==1)) //  1 -> 4
        {
            ret = l4c_root_switch_to_desire_state_req(mod_id, desired_cfun_state);
            break;
        }
        else if (desired_cfun_state > l4c_ptr->cfun_state) //  0 -> 4 , 0 ->1
        {
            l4c_root_sim_mode_update_req(L4C_ROOT_PTR->efun_state);

            ret = l4c_root_switch_to_desire_state_req(mod_id, desired_cfun_state);
            break;
        }
    }

    if (ret == 0xFF)
    {
        l4c_root_sim_mode_update_req(L4C_ROOT_PTR->efun_state);

        for (i=0; i<L4_MAX_SIM_NUM; i++)
        {
            module_type mod_id = L4_MODULE(MOD_L4C, i);
            l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);
            kal_uint8 desired_cfun_state = get_desired_cfun_state(mod_id);

        #if defined(__SINGLE_AP_DUAL_MODEM__)    
            if (!(L4C_ROOT_PTR->sim_support_mode & (0x01 << i)))
                continue;
        #endif

            if (desired_cfun_state != l4c_ptr->cfun_state) //  4 -> 1
            {
                ret = l4c_root_switch_to_desire_state_req(mod_id, desired_cfun_state);
                break;
            }
        }
    }

    // Something abnormal, not allow switching, e.g. call existed
    if (ret == 0)
    {
	    layer4_module_context_selection(MOD_L4C);
        l4c_nw_sim_mode_switch_stop_req(src_id);

        if (src_id == LMMI_SRC)
        {
            l4c_nw_efun_state_lrsp(KAL_FALSE);
        }
	    else
	    {  
            RMMI_PTR->current_src = src_id;
            l4c_cfun_rrsp(KAL_FALSE, OPERATION_NOT_ALLOWED_ERR);
	    }		
	    layer4_module_context_selection(temp_mod_id);    
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_power_off_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_power_off_req(kal_uint8 root_src_id)
{
    module_type temp_mod_id = l4c_current_mod_id;
    kal_uint8 i;

    L4C_ROOT_PTR->root_src_id = root_src_id;

    for (i=1; i<=L4_MAX_SIM_NUM; i++)
    {
        module_type mod_id = L4_MODULE(MOD_L4C, L4_MAX_SIM_NUM - i);
        l4c_context_struct *l4c_ptr = get_l4c_ptr_by_mod(mod_id);

    #if defined(__SINGLE_AP_DUAL_MODEM__)    
        if (!(L4C_ROOT_PTR->sim_support_mode & (0x01 << (L4_MAX_SIM_NUM - i))))
            continue;
    #endif
    
        if (l4c_ptr->cfun_state == 1)
        {
            // Step1. Detach network if radio is on
            layer4_module_context_selection(mod_id);
            //l4c_nw_powroff_detach_req(LMMI_SRC2);  // Only detach network without RFOFF
            l4c_nw_exe_rf_off_req(LMMI_SRC2, PWROFF_DETACH); //detach network and RF OFF
            layer4_module_context_selection(temp_mod_id);
            l4c_ptr->cfun_state = 4;
            return;
        }
        else //if (l4c_ptr->sim_poweroff == KAL_FALSE && l4c_ptr->cc_current_action[RMMI_SRC] != POWEROFF_EXE)
        {
            // Step2. Sync PHB and power off SIM        
            // Step3. (L4C_1) dump statistic data to NVRAM and call DRIVE OFF
            layer4_module_context_selection(mod_id);
            l4c_eq_power_off_req(RMMI_SRC);  // SIM power off
        }
    }
   
    layer4_module_context_selection(temp_mod_id);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_power_off_done_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_power_off_done_ind(kal_uint8 root_src_id)
{
    module_type temp_mod_id = l4c_current_mod_id;
    kal_uint8 src_id = L4C_ROOT_PTR->root_src_id;

    // Currently, power_off_done_ind always invoked by L4C_1
    layer4_module_context_selection(MOD_L4C);	
    if (src_id == LMMI_SRC)
    {
        //TODO: efun_state_lrsp
    }
    else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
        RMMI_PTR->current_src = L4C_ROOT_PTR->root_src_id;
        l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);    
    }
    layer4_module_context_selection(temp_mod_id);

#if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__MTK_TARGET__)
    OSTD_MD_Infinite_Sleep();
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_root_sim_mode_update_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_sim_mode_update_req(kal_uint8 new_sim_mode)
{
    module_type temp_mod_id = l4c_current_mod_id;
    kal_uint8 i;

    if (L4C_ROOT_PTR->has_update_sim_statust == KAL_TRUE)
    {
        return;
    }

    L4C_ROOT_PTR->has_update_sim_statust = KAL_TRUE;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
    #if defined(__SINGLE_AP_DUAL_MODEM__)    
        if (!(L4C_ROOT_PTR->sim_support_mode & (0x01 << i)))
            continue;
    #endif

        layer4_module_context_selection(L4_MODULE(MOD_L4C, i));
        l4c_smu_sim_status_update_req(new_sim_mode);
    }

    layer4_module_context_selection(temp_mod_id);	    
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_efun_state_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_root_nw_efun_state_req(kal_uint8 root_src_id, kal_uint8 new_sim_mode)
{
    kal_uint8 old_sim_mode = L4C_ROOT_PTR->efun_state;

    // Backup src_id for response
    L4C_ROOT_PTR->root_src_id = root_src_id;
    L4C_ROOT_PTR->efun_state = check_new_sim_config(new_sim_mode);

    l4c_nw_sim_mode_switch_start_req(root_src_id);	
    //l4c_root_sim_mode_update_req(L4C_ROOT_PTR->efun_state);
    L4C_ROOT_PTR->has_update_sim_statust = KAL_FALSE;

    if (l4c_root_sim_mode_switch_req(root_src_id) != KAL_TRUE)
    {
      /***
            *   [ALPS00040835]
            *   If sim_mode_switch_req fail due to command conflict,
            *   rollback the sim mode config
            ***/
        L4C_ROOT_PTR->has_update_sim_statust = KAL_FALSE;
        l4c_root_sim_mode_update_req(old_sim_mode);
        L4C_ROOT_PTR->efun_state = old_sim_mode;
    }

    return KAL_TRUE;
}


#if defined(__L4C_GEMINI_BT_HF__)
/*****************************************************************************
 * FUNCTION
 *  l4c_root_check_call_exist
 * DESCRIPTION
 *  To check if any call exist in modem for all SIM
 * PARAMETERS
 *  which_sim   [OUT] in which SIM the call exist, starts from 0
 * RETURNS
 *  KAL_TRUE if there is call exists, KAL_FALSE if not
 *****************************************************************************/
kal_bool l4c_root_check_call_exist(kal_uint8 *which_sim)
{
    module_type temp_mod_id = l4c_current_mod_id;
    kal_uint8 i;
    kal_bool ret_val = KAL_FALSE;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        layer4_module_context_selection(L4_MODULE(MOD_L4C, i));
        if (csmcc_is_any_call_exist() == KAL_TRUE)
        {
            ret_val = KAL_TRUE;
            if (which_sim != NULL)
                *which_sim = i;
            break;
        }
    }
    layer4_module_context_selection(temp_mod_id);
    
    return ret_val;
}
#endif /* defined(__L4C_GEMINI_BT_HF__) */


#if defined(__SINGLE_AP_DUAL_MODEM__)
/*****************************************************************************
 * FUNCTION
 *  l4c_root_sim_support_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]
 *  mode       [IN] bitmap for SIM power-on mode
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_root_sim_support_mode_req(kal_uint8 src_id, kal_uint8 mode)
{
    rsvas_sim_status_config_req_struct *para_ptr = NULL;

    if (L4C_PTR->cfun_state != 0)
    {
        /* don't allow this command after power-on */
        return KAL_FALSE;
    }
    
    L4C_ROOT_PTR->sim_support_mode = mode;
    
    para_ptr = (rsvas_sim_status_config_req_struct*) construct_local_para(
        (kal_uint16) sizeof(rsvas_sim_status_config_req_struct), TD_RESET);

    para_ptr->sim_config = mode;
    l4c_send_msg_to_rsvas(MSG_ID_RSVAS_SIM_STATUS_CONFIG_REQ, para_ptr);

    return KAL_TRUE;
}
#endif /* defined(__SINGLE_AP_DUAL_MODEM__) */


#ifdef __SIM_ME_LOCK__
/*****************************************************************************
 * FUNCTION
 *  l4c_root_sim_support_mode_req
 * DESCRIPTION
 *  link_SML
 * PARAMETERS
 *  src_id  [IN]
 *  mode    [IN] bitmap for SIM power-on mode
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_root_lock_status_ind(kal_uint8 src_id)
{
    l4c_root_context_struct *l4c_root_ptr = L4C_ROOT_PTR;
    kal_bool need_unlock = KAL_FALSE;
    kal_uint8 i;
    l4csmu_security_req_struct *param_ptr;
    module_type temp_mod = l4c_current_mod_id;
    smu_pending_password_id_enum pending_password = l4csmu_get_pending_password_id();
    kal_uint8 need_unlock_table[L4_MAX_SIM_NUM]; //represents the actual SIM id
    kal_bool notify_mmi = KAL_TRUE;
#ifdef __GEMINI_3G_SWITCH__
    kal_uint8 sim_id = L4C_PTR->cur_3g_switch_map;

    L4C_COMM_PTR->c3gs_ref_flag = KAL_TRUE;
#else
    kal_uint8 sim_id = l4c_current_mod_id - MOD_L4C;
#endif

    kal_mem_set(need_unlock_table, 0, L4_MAX_SIM_NUM);

    if (src_id != L4C_SRC)
    {
        need_unlock = custom_l4c_root_lock_verify(sim_id, 
                                                  pending_password, 
                                                  l4c_root_ptr->root_pending_password,
                                                  need_unlock_table);
    }

    if (need_unlock == KAL_TRUE)
    {
        for (i=0; i<L4_MAX_SIM_NUM; i++)
        {
            sim_id = l4c_gemini_get_actual_sim_id(i);
            
            pending_password = l4csmu_get_pending_password_id_ext((sim_interface_enum)i);
            
            kal_brief_trace(TRACE_INFO, INFO_L4C_ROOT_PENDING_PASSWD, sim_id, 
                            l4c_root_ptr->root_pending_password[sim_id], need_unlock_table[sim_id]);
            
            if (need_unlock_table[sim_id] != 0)
            {
                if (i == (l4c_current_mod_id-MOD_L4C))
                {
                    notify_mmi = KAL_FALSE;
                }
                
                layer4_module_context_selection(MOD_L4C+i);

                param_ptr = (l4csmu_security_req_struct*)
                            construct_local_para((kal_uint16) sizeof(l4csmu_security_req_struct), TD_RESET);
                
                if (l4csmu_get_pending_lock(pending_password, &(param_ptr->type)) == KAL_FALSE)
                {
                    continue;
                }
                param_ptr->src_id = L4C_SRC;
                param_ptr->op = SUPER_VERIFY;
                l4c_send_msg_to_smu(MSG_ID_L4CSMU_SECURITY_REQ, param_ptr);
            }
        }
        layer4_module_context_selection(temp_mod);
    }

    return notify_mmi;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_root_get_pending_password_id
 * DESCRIPTION
 *  link_SML
 * PARAMETERS
 *  sim_id  [IN] protocol stack ID
 * RETURNS
 *  the fake pending password
 *****************************************************************************/
smu_pending_password_id_enum l4c_root_get_pending_password_id(sim_interface_enum sim_id)
{
    kal_uint8 actual_sim_id = l4c_gemini_get_actual_sim_id(sim_id);
    
    kal_brief_trace(TRACE_FUNC, 
                    FUNC_L4C_ROOT_GET_PENDING_PASSWORD_ID_ENTRY, 
                    sim_id, 
                    L4C_ROOT_PTR->root_pending_password[actual_sim_id]);
    
    return L4C_ROOT_PTR->root_pending_password[actual_sim_id];
}


/*****************************************************************************
 * FUNCTION
 *  l4c_root_set_pending_password_id
 * DESCRIPTION
 *  link_SML
 * PARAMETERS
 *  sim_id      [IN] protocol stack ID
 *  password    [IN] password
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_root_set_pending_password_id(sim_interface_enum sim_id, smu_pending_password_id_enum password)
{
    kal_uint8 actual_sim_id = l4c_gemini_get_actual_sim_id(sim_id);
    
    kal_brief_trace(TRACE_FUNC, 
                    FUNC_L4C_ROOT_GET_PENDING_PASSWORD_ID_ENTRY, 
                    sim_id, 
                    password);
    
    L4C_ROOT_PTR->root_pending_password[actual_sim_id] = password;
}

#endif /* __SIM_ME_LOCK__ */

#endif

