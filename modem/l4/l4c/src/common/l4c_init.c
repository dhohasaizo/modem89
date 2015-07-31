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
 * L4C_INIT.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_INIT_C

#undef _FILE_CODE_
#define _FILE_CODE_  _L4C_INIT_C_

//#include <stdlib.h>
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"
//#include "uart_sw.h"
#include "dcl.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "fat_fs.h"
#include "l4c_context.h"
//#include "layer4_context.h"

//#include "l4c2phb_enums.h"

#include "rmmi_init.h"
#include "l4c_init.h"
//#include "mmi_l3_enums.h"

//#include "l4c_ctm_cmd.h"
//#include "l4c_rspfmttr.h"
#include "l4c_hz_context.h"
#ifdef __HOMEZONE_SUPPORT__
#include "l4c_hz_utility.h"
#endif

#include "l3_inc_enums.h"
//#include "csmcc_common_enums.h" 
#include "csmcc_defs.h"
//#include "layer4_context.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "em_struct.h"
#include "rmmi_context.h"
#include "custom_l4_utility.h"

/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)    
#include "Lcd_lqueue.h"
//#include "App_sdu_buff_alloc.h"
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            

#if defined(__RMMI_UT__) && defined(__IPV4V6__)
//#include "tcm_common.h"
#include "tcm_context.h"
extern kal_uint8 ipv6ut_tcm_pdp_addr_type[TCM_TOT_CONTEXT];
#endif

l4c_context_struct l4c_cntxt_g[L4_MAX_SIM_NUM];

#ifdef __HOMEZONE_SUPPORT__
l4c_hz_context_struct l4c_hz_cntxt_g[L4_MAX_SIM_NUM];
l4c_hz_context_struct *l4c_hz_ptr;
#endif 
module_type l4c_current_mod_id;
l4c_context_struct *l4c_ptr_g;

l4c_common_context_struct l4c_comm_cntxt_g;
l4c_common_context_struct *l4c_comm_ptr_g;

#if defined(__GEMINI__)
l4c_root_context_struct l4c_root_cntxt_g;
l4c_root_context_struct *l4c_root_ptr_g;
#endif

UART_PORT PS_UART_PORT = uart_port2;

extern kal_uint8 cm_max_retry_count(void);
extern kal_bool custom_disable_gprs_csd_dialup(void); //MAUI_02600165

#if defined(__MTK_TARGET__) && defined(DRV_GPIO_FOR_LED_AND_15_SEGMENT)
//extern DCL_STATUS gpio_led_init(void);
//extern DCL_STATUS gpio_15_segment_led_init(void);
#include "dcl_15_segment.h"
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_init
 * DESCRIPTION
 *  This is l4c_init function of L4C module.
 *  will be called when stack init
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_init()
{
    kal_bool ret_val = KAL_FALSE;
    kal_int8 i = 1;

    for (i = L4_MAX_SIM_NUM-1; i >= 0; i--)
    {
        l4c_ptr_g = &l4c_cntxt_g[i];
        kal_mem_set((kal_uint8*) L4C_PTR, (kal_uint32) 0, (kal_uint32) sizeof(l4c_context_struct));
        l4c_current_mod_id = L4_MODULE(MOD_L4C, i);

    #if !defined(__MMI_FMI__) && defined(__GEMINI__)
        l4c_ptr_g->dual_sim_mode_setting_command = RMMI_EDSIM_NORMAL; // for AT+EDSIM set mode
    #endif /* no __MMI_FMI__ */
        
        ret_val = l4c_init_context();

    #ifdef __HOMEZONE_SUPPORT__
        HZ_PTR = &l4c_hz_cntxt_g[i];

        kal_mem_set((kal_uint8*) HZ_PTR, (kal_uint32) 0, (kal_uint32) sizeof(l4c_hz_context_struct));

        l4c_hz_init_context();
    #endif 

        L4C_PTR->event_scheduler_ptr = evshed_create("L4CTIMER", l4c_current_mod_id, 0, 0);  //evshed_create, mtk02285, 20110328
    }

    /* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
    #if 0
    #if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)    
/* under construction !*/
/* under construction !*/
    #endif /*~ __MOD_TCM__*/
    #endif

    l4c_comm_ptr_g = &l4c_comm_cntxt_g;
    ret_val = l4c_init_common_context();

#if defined(__GEMINI__)
    l4c_root_ptr_g = &l4c_root_cntxt_g;    
    ret_val = l4c_init_root_context();
#endif

#if defined(__MTK_TARGET__) && defined(DRV_GPIO_FOR_LED_AND_15_SEGMENT)
    gpio_led_init();
    gpio_15_segment_led_init();
#endif

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_init_context
 * DESCRIPTION
 *  This is l4c_init_context function of L4C module.
 *  set initial value for l4c context if necessary
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_init_context()
{
    kal_uint8 i;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    for (i = 0; i < MAX_SOURCE_NUM; i++)
    {
        l4c_ptr->cc_state[i] = L4C_COMMAND_STATE;
        //l4c_ptr->cc_sub_state[i] = L4C_IDLE_STATE;
        l4c_ptr->cc_current_action[i] = L4C_NO_ACTION;
        l4c_ptr->parameter[i].length = 0;
        l4c_ptr->parameter[i].data = NULL;
        l4c_ptr->cc_parameter[i].length = 0;
        l4c_ptr->cc_parameter[i].data = NULL;
    }

#ifdef __SAT__
    l4c_ptr->cc_peer_buf.length = 0;
    l4c_ptr->cc_peer_buf.data = NULL;
#endif

    l4c_ptr->ss_parameter.length = 0;
    l4c_ptr->ss_parameter.data = NULL;

#ifdef __RSAT__
    l4c_ptr->parameter_sat.length = 0;
    l4c_ptr->parameter_sat.data = NULL;
#endif

#ifdef __TCPIP_OVER_CSD__
    l4c_ptr->csd_parameter.length = 0;
    l4c_ptr->csd_parameter.data = NULL;
#endif

    for (i = 0; i < MAX_SOURCE_NUM; i++)
    {
        l4c_ptr->sms_current_action[i] = L4C_NO_ACTION;    
    }    

    l4c_ptr->eq_current_action = L4C_NO_ACTION; 
    l4c_ptr->eq_user = L4C_NO_USER;

    l4c_ptr->rac_current_action = L4C_NO_ACTION;
    l4c_ptr->rac_user = L4C_NO_USER;

    l4c_ptr->smu_current_action = L4C_NO_ACTION;
    l4c_ptr->smu_user = L4C_NO_USER;
#ifdef __MOD_TCM__
    l4c_ptr->tcm_current_action = L4C_NO_ACTION;
    l4c_ptr->tcm_user = L4C_NO_USER;
#endif //mtk02285, 201003, 6251_ram
    l4c_ptr->phb_current_action = L4C_NO_ACTION;
    l4c_ptr->phb_user = L4C_NO_USER;

    l4c_ptr->ss_current_action = L4C_NO_ACTION;
    l4c_ptr->ss_user = L4C_NO_USER;
#ifdef __MOD_TCM__
    l4c_ptr->tcm_auto_answer = KAL_FALSE;
#endif //mtk02285, 201003, 6251_ram
    l4c_ptr->power_on_not_finish = KAL_TRUE;
    l4c_ptr->smu_activated = L4C_SMU_INACTIVE;
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    l4c_ptr->first_camp_on = KAL_FALSE;
    l4c_ptr->sim_refresh = KAL_FALSE;
    l4c_ptr->line_num = 1;
    l4c_ptr->clir_flag = 2;     //initial value as CLIR_AUTO */
    l4c_ptr->adc_flag = KAL_FALSE;  /* initial value for ADC indication turn off */
    #if defined(__MMI_FMI__) 
    l4c_ptr->keypad_event_flag = KAL_FALSE;
    #endif
    l4c_ptr->sim_detected = KAL_FALSE;
    l4c_ptr->sim_error_cause = 0x00;
    //l4c_ptr->sim_reg_state_received = KAL_FALSE;
    //l4c_ptr->sim_security_received = KAL_FALSE;
    l4c_ptr->phb_ready_flag = KAL_FALSE;
    l4c_ptr->sms_ready_flag = KAL_FALSE;
    l4c_ptr->csm_state = CSM_STATE_NOT_INITIATED;
    l4c_ptr->evdl_mode = 1; // default value:1, event download is triggered by modem
#ifdef __MOD_TCM__
    l4c_ptr->tcm_ready_flag = KAL_FALSE;
#endif //mtk02285, 201003, 6251_ram
    #if defined(__MMI_FMI__) && !defined(__UCM_SUPPORT__)
    l4c_ptr->mmi_ready_flag = KAL_FALSE;
    #endif
    l4c_ptr->sms_da_fdn_check = KAL_FALSE;
    l4c_ptr->retry_count = 0;

    for (i = 0; i < MAX_SOURCE_NUM; i++)
    {    
        l4c_ptr->sms_num[i] = 0;
    }    

    l4c_ptr->mo_call_id = 255;	/* CSMCC_INVALID_CALL_ID */
    l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID; //MAUI_02554068
    l4c_ptr->cc_retry_ongoing_flag = KAL_FALSE;
    l4c_ptr->ongoing_csd_dialup = KAL_FALSE;    //MAUI_02284187, mtk02285
    l4c_ptr->disallow_gprs_and_csd = custom_disable_gprs_csd_dialup(); //MAUI_02600165
#ifdef __TCPIP__ /* ABM */
    l4c_ptr->disc_dialup_req = INVALID_BEARER;  //to distinguish if the disconnect request is from CBM
#endif 

#if !defined(__PHB_APPROVE_BY_MMI__)
    l4c_ptr->mo_call_ecc_info = INFO_ECC_CHECK_BY_MODEM;
#endif

    l4c_ptr->mt_call_id = CSMCC_INVALID_CALL_ID;
#ifdef __AUTO_CALL_REJECTION__
    l4c_ptr->present_call_id = CSMCC_INVALID_CALL_ID;
#endif
#if defined(__VTS_LATE_RESPONSE__)
    l4c_ptr->dtmf_call_id = CSMCC_INVALID_CALL_ID;
#endif
    l4c_ptr->mt_call_incoming = KAL_FALSE;
    l4c_ptr->crss_opcode = CSMCC_INVALID_CRSS_TYPE; 
    l4c_ptr->sat_ussr_flag = SAT_USSR_NONE; //ALPS00029231 for SAT SS/USSD triggered USSR
    l4c_ptr->mmrr_ready_flag = KAL_FALSE;       
    l4c_ptr->sat_redial_flag = KAL_FALSE; 
    l4c_ptr->sat_redial_duration = 0;
    kal_mem_set((l4_number_struct*) & (l4c_ptr->sms_da_number), 0, sizeof(l4_number_struct));  //init value
#ifdef __IRDA_SUPPORT__
    l4c_ptr->uart_data_mode = L4C_NONE_DATA;
#endif 

#if defined(__FWP_NC_LAI_INFO__)
    l4c_ptr->is_cell_lock_call = KAL_FALSE;
#endif 
    //l4c_ptr->ps_abm_current_action = L4C_NO_ACTION; //mtk02285, 201003, 6251_ram
    //l4c_ptr->abm_sub_state = L4C_IDLE_STATE;  /* l4c_sub_state_enum */

    l4c_ptr->call_exist = KAL_FALSE;
    //l4c_ptr->ps_abm_act = KAL_FALSE;
    l4c_ptr->csd_end_connect_race_flag = KAL_FALSE;
#ifdef __UCM_SUPPORT__	
    l4c_ptr->data_call_end_race_flag = INVALID_SRC;
    l4c_ptr->csd_call_end = KAL_FALSE; //MAUI_01801045
#endif    
    l4c_ptr->waiting_call_id = 0xff;
    l4c_ptr->call_alert = KAL_FALSE;

    l4c_ptr->retry_src_id = INVALID_SRC;
    l4c_ptr->retry_ss = KAL_FALSE;
    l4c_ptr->retry_cc = KAL_FALSE;
    l4c_ptr->ussd_version = USSD_VERSION_PHASE2;

    #if !defined(__PHB_APPROVE_BY_MMI__) && (!defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__))
    l4c_ptr->phb_approve_ussd = KAL_FALSE; //mtk02508_090304
    #endif

    //l4c_ptr->cipher_ind = KAL_FALSE;
#if defined ( __MMI_FMI__) && !defined(__FLIGHT_MODE_SUPPORT__) && !defined(__GEMINI__)
    l4c_ptr->cfun_state = 1;    //if MMi fly mode ready, remove it
#else 
    l4c_ptr->cfun_state = 0;
#endif 
#if defined(__MOD_TCM__) && defined(__INT_PDP_CONTEXT_ON__)
    for (i = 0; i < MAX_INT_PDP_CONTEXT; i++)
    {
        l4c_ptr->pdp_context_id[i] = 0;
    }
#endif

    #ifndef __CLOG_STORAGE_BY_MMI__  
    l4c_ptr->last_number_seq = 0;
    #endif
    l4c_ptr->data_signal_activate = KAL_FALSE;
    l4c_ptr->sms_init_sent = KAL_FALSE;
#ifdef __MOD_TCM__	
    l4c_ptr->gprs_connection_timeout = KAL_FALSE;
#endif //mtk02285, 201003, 6251_ram

    l4c_ptr->cipher_ind_msg.is_gsm_conn_exist = 0;
    l4c_ptr->cipher_ind_msg.gsm_cipher_cond = 255;
    l4c_ptr->cipher_ind_msg.gprs_cipher_cond = 255;

    l4c_ptr->ceer_report = 0;
    l4c_ptr->rat_mode = 0;

    l4c_ptr->sms_abort_ongoing = KAL_FALSE;
	
#ifdef __CSD_FAX__
    // hogan: init fax_src_id value 
    l4c_ptr->fax_src_id = RMMI_SRC;
#endif /* __CSD_FAX__ */ 

#ifdef __MOD_TCM__    // MAUI_02420439 mtk02126 wrap pending_latest_auto_attach in __MOD_TCM__
    /*
     * Johnny:
     * l4c_gprs_connect_type_enum =>
     * L4C_WHEN_NEEDED,
     * L4C_ALWAYS,
     * L4C_GPRS_CONN_TYPE_UNKNOWN (init value)
     */
    l4c_ptr->pending_latest_auto_attach = L4C_GPRS_CONN_TYPE_UNKNOWN;
  #ifdef __PS_DIALUP__
    //l4c_ptr->cid_used_by_ppp = 0; 
    {
        kal_uint8 cid=0;
        for (cid=0; cid<=MAX_EXT_PDP_CONTEXT; cid++)
        {
            L4C_PTR->ps_dialup_port[cid] = uart_port_null;
        }
    }
    l4c_ptr->disc_ppp_src_id = INVALID_SRC;
  #endif
    l4c_ptr->l4a_ps_gprs_last_status = (l4c_gprs_status_enum) 0xFF;
    l4c_ptr->l4a_ps_gprs_last_cell_support_egprs = 0xFF;
    l4c_ptr->l4a_ps_gprs_last_data_speed_support = 0xFF;
    l4c_ptr->l4a_ps_gprs_last_data_bearer_capability = 0xFF;    
#endif //mtk02285, 201003, 6251_ram	

#if defined(__SP_RIL_SUPPORT__) && defined(__MOD_TCM__) //mtk02285, 201003, 6251_ram
    for (i=0; i<MAX_EXT_PDP_CONTEXT+1; i++)
    {
        l4c_ptr->ext_pdp_activating[i] = KAL_FALSE;
        l4c_ptr->ext_pdp_src_id[i] = INVALID_SRC;
    }
#endif //mtk02285, DUMA00206863, abort_cgact_activation

    l4c_ptr->power_on_pin_check = KAL_TRUE;
    l4c_ptr->max_retry_count = cm_max_retry_count();

    l4c_ptr->single_sim_inserted_status = L4C_SINGLE_SIM_INSERTED_STATUS_NONE;

#ifdef __AUTO_CALL_REJECTION__
    l4c_ptr->mt_call_approval = MT_CALL_APPROVAL_DISABLE;
#endif

#if 0 //__CTM_SUPPORT__
/* under construction !*/
#endif 

    l4c_ptr->sub_modules_ready = KAL_FALSE;  
    l4c_ptr->has_deregistered = KAL_TRUE;

    //rx_level: reset csq_level, ber, rssi_in_qdbm, rscp_in_qdbm and EcN0_in_qdbm, when initial
    l4c_ptr->csq_level = 99;
    l4c_ptr->ber = 99;
    l4c_ptr->rssi_in_qdbm = 1;
    l4c_ptr->RSCP_in_qdbm = 1;
    l4c_ptr->EcN0_in_qdbm = 1;

    l4c_ptr->max_data_bearer_capa = L4C_NONE_ACTIVATE;//hspa_mmi_h2
    l4c_ptr->cc_ton = 129; //default without '+'

    l4c_ptr->sim_poweroff = KAL_TRUE; // [MAUI_02867094], SIM is inactive at init

#if defined(__ENS_RAT_BALANCING__)
    l4c_ptr->is_valid_ef_rat_mode = KAL_FALSE;
    l4c_ptr->ef_rat_mode = 0xff;
#endif

    l4c_ptr->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_CONDITIONED;
#ifdef __GEMINI_3G_SWITCH__
    l4c_ptr->cur_3g_switch_map = l4c_current_mod_id - MOD_L4C;
#endif

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    l4c_ptr->l1aud_spc_src_id = INVALID_SRC;
#endif

#if defined(__SYSSEL_SUPPORT__)
    l4c_ptr->nw_syssel = NULL;
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    l4c_ptr->fast_dormancy_mode = 0xff; //0: disable, 1: enable, 0xff: uninit
    l4c_ptr->is_screen_on = KAL_TRUE;
    l4c_ptr->fd_timer_counter = 0xff;
    l4c_ptr->scri_has_sent = KAL_FALSE;
    l4c_ptr->fd_monitor_tick = custom_get_fd_monitor_slot();
    l4c_ptr->fd_retry_count = 0;
    l4c_ptr->fd_fop_received = KAL_FALSE;
    l4c_ptr->need_resend = KAL_FALSE;
#endif

    l4c_ptr->mmi_info_received = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_init_common_context
 * DESCRIPTION
 *  This is L4C common context init function 
 *  L4C common context is created for RAM size optimization in Gemini platform
 *  In Gemini, there will be two L4C context. However, some context can be shared in SIM1/SIM2.
 *  Now we create L4C common context,there will be only one common context in Gemini 
 *  For context can be shared between SIM1/SIM2, please try to move to L4C common context. 
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_init_common_context() 
{
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
    
#ifdef __IP_NUMBER__
    l4c_comm_ptr->ip_string[0] = RMMI_END_OF_STRING_CHAR;
#endif
    l4c_comm_ptr->cpi_mode = 0;    //default disable the CPI indication message to MMI
    l4c_comm_ptr->flightmode_state = 0;
    l4c_comm_ptr->poweron_mode = 0;  //initial value as normal power on
    l4c_comm_ptr->poweroff_retry = 0;
    l4c_comm_ptr->usb_app = 2;
#ifdef __GEMINI__
    l4c_comm_ptr->dual_sim_mode_setting = SIM_CONFIG_STATUS_NONE;
    l4c_comm_ptr->dual_sim_inserted_status = NO_SIM_INSERTED;
    l4c_comm_ptr->during_sim_mode_switch = KAL_FALSE;
    l4c_comm_ptr->is_dual_sim_ind_sent = KAL_FALSE;    
#endif
    l4c_comm_ptr->wap_init_flag = KAL_FALSE;
#ifdef __AGPS_CONTROL_PLANE__
    l4c_comm_ptr->agps_cp_active_module = MOD_NIL;
#endif
    l4c_comm_ptr->ps_conf_test_mode = 0;
    l4c_comm_ptr->ps_conf_test_profile = 0;
#ifdef __ECALL_SUPPORT__
    l4c_comm_ptr->l4c_use_tnum =KAL_FALSE;
    l4c_comm_ptr->l4c_use_rnum =KAL_FALSE;
#endif 

#ifdef __IPV4V6__
    L4C_COMM_PTR->ipv4v6_fallback_enable = KAL_TRUE;
    L4C_COMM_PTR->ipv4v6_fallback_v4_first = KAL_TRUE;
#endif //__IPV4V6__

    L4C_COMM_PTR->rac_activated = 0;
    L4C_COMM_PTR->uem_activated = KAL_FALSE;

#ifdef __GEMINI_3G_SWITCH__
    L4C_COMM_PTR->cur_3g_capability = 0;
    L4C_COMM_PTR->c3gs_ref_flag = KAL_FALSE;
#endif

    return KAL_TRUE;
}

#if defined(__GEMINI__)
/*****************************************************************************
 * FUNCTION
 *  l4c_init_root_context
 * DESCRIPTION
 *  This is L4C root context init function 
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_init_root_context() 
{
    l4c_root_context_struct *l4c_root_ptr = L4C_ROOT_PTR; //for_slim
    kal_uint8 i;
    
    l4c_root_ptr->root_src_id = 0xFF;
    l4c_root_ptr->efun_state = SIM_RADIO_OFF;
#if defined(__L4C_GEMINI_BT_HF__)
    l4c_root_ptr->last_dialed_sim = SIM1;
#endif

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
    #if defined(__SIM_ME_LOCK__)
        l4c_root_ptr->root_pending_password[i] = ID_UNKNOWN; //link_SML
    #endif
    
    #if defined(__SINGLE_AP_DUAL_MODEM__)
        l4c_root_ptr->sim_support_mode |= (0x01 << i);
    #endif
    }

    return KAL_TRUE;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_set_uart_auto_baud
 * DESCRIPTION
 *  This is l4c_init_uart function of L4C module.
 *  config initial setting for PS_UART_PORT
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_set_uart_auto_baud()
{
#ifdef l4c_autobaud
#ifdef UART_ENABLE
    UART_CONFIG_T dcb = 
    {
        0,          /* init */
        len_8,      /* dataBits; */
        sb_1,       /* stopBits; */
        pa_none,    /* parity; */
        fc_hw,      /* flow control */
        0x11,       /* xonChar; */
        0x13,       /* xoffChar; */
        KAL_FALSE
    };

    if (PS_UART_PORT == uart_port_null)
    {
        return;
    }

    dcb.u1FlowControl= RMMI_UART_GetFlowCtrl(PS_UART_PORT);
    dcb.u4Baud = 0;   /* AutoBaud */
    RMMI_UART_SetAutoBaud_Div(PS_UART_PORT, MOD_ATCI);

    RMMI_UART_Open(PS_UART_PORT, MOD_ATCI);
    RMMI_UART_SleepOnTx_Enable(PS_UART_PORT, uart_sleep_on_tx_allow);
    RMMI_UART_SetDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI);
    RMMI_UART_ConfigEscape(PS_UART_PORT, RMMI_CHAR_PLUS, 1000, MOD_ATCI);
    RMMI_COMM_PTR->uart_port_value = PS_UART_PORT;
#else /* UART_ENABLE */ 
    system("del c:\\mcu_out.log");
#endif /* UART_ENABLE */ 
#endif /* l4c_autobaud */ 
}

 //evshed_create, mtk02285, 20110328
//void l4c_start_base_timer(void *base_timer_ptr, unsigned int time_out)
//void l4c_stop_base_timer(void *base_timer_ptr)

#ifndef __MTK_TARGET__
/*****************************************************************************
 * FUNCTION
 *  l4c_reset
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_reset()
{
    kal_bool ret_val = KAL_FALSE;
    //stack_timer_struct temp_timer;
    event_scheduler *temp_evs_ptr;
/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if defined(__RMMI_UT__) && defined(__MOD_TCM__)       
    lcd_lqueue *temp_queue_ptr = NULL;
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */            

    kal_int8 i = 1;

    for (i = L4_MAX_SIM_NUM - 1; i >= 0; i--)
    {
        l4c_ptr_g = &l4c_cntxt_g[i];
        l4c_current_mod_id = MOD_L4C + i;

        /* 
         * We save context here and restore after mem_set to avoid allocate/create some context many time.
         * That will run out of memory.
         */
        /* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
        #if defined(__RMMI_UT__) && defined(__MOD_TCM__)       
        temp_queue_ptr = L4C_PTR->gprs_flc_queue;
        #endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */                   

        //temp_timer = L4C_PTR->base_timer;
        temp_evs_ptr = L4C_PTR->event_scheduler_ptr;

    
    /* 
     * move the kam_mem_set here, we can save some pointer before mem_set
     */        
        kal_mem_set((kal_uint8*) L4C_PTR, (kal_uint32) 0, (kal_uint32) sizeof(l4c_context_struct));
    
    /* 
     * We restore context here.
     */
    /* For GPRS_FLC_UT MAUI_02419672 mtk02126 */         
    #if defined(__RMMI_UT__) && defined(__MOD_TCM__)       
        L4C_PTR->gprs_flc_queue = temp_queue_ptr;
    #endif /*~ defined(__RMMI_UT__) && defined(__MOD_TCM__) */             
        ret_val = l4c_init_context();

        rmmi_init_context();

    #ifdef __HOMEZONE_SUPPORT__
        HZ_PTR = &l4c_hz_cntxt_g[i];
        kal_mem_set((kal_uint8*) HZ_PTR, (kal_uint32) 0, (kal_uint32) sizeof(l4c_hz_context_struct));

        l4c_hz_init_context();
    #endif 

	#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__)
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
#endif
        {
            kal_int8 timer_index; 
            //L4C_PTR->base_timer = temp_timer;
            L4C_PTR->event_scheduler_ptr = temp_evs_ptr;
            for (timer_index=0;timer_index<8;timer_index++)
            {
                if (L4C_PTR->event_id[timer_index] != 0)
                {
                    evshed_cancel_event(L4C_PTR->event_scheduler_ptr, &(L4C_PTR->event_id[timer_index]));                    
                    L4C_PTR->event_id[timer_index] = 0;
                }
            }
        }

	    RMMI_PTR->command_allow = KAL_TRUE;
	    L4C_PTR->smu_activated = L4C_SMU_ACTIVE;
		L4C_PTR->cfun_state = 1;
    #ifdef __MOD_TCM__		
		L4C_PTR->tcm_ready_flag = KAL_TRUE;
	#endif //mtk02285, 201003, 6251_ram
		L4C_PTR->csm_state = CSM_STATE_CISS_READY;
	#endif
    }

    l4c_comm_ptr_g = &l4c_comm_cntxt_g;
    ret_val = l4c_init_common_context();
    ret_val &= rmmi_init_common_context();

#if defined(__GEMINI__)
    l4c_root_ptr_g = &l4c_root_cntxt_g;
    ret_val = l4c_init_root_context();
#endif

#ifdef __IPV4V6__
#ifdef __RMMI_UT__
    kal_mem_set(ipv6ut_tcm_pdp_addr_type, 0x8d, sizeof(ipv6ut_tcm_pdp_addr_type));
#endif
#endif

    return ret_val;
}
#endif

