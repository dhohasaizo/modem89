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
 * RMMI_INIT.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define RMMI_INIT_C
//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "drvpdn.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "uart_sw.h"
#include "dcl.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"


//#include "mcd_l4_common.h"
 
#ifdef __MOD_UEM__
//#include "custom_em.h"
#endif 

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4_trc.h"
#include "atci_trc.h"

#include "rmmi_parser.h"

//#include "nvram_struct.h"
//#include "nvram_data_items.h"

//#include "rmmi_msghdlr.h"

#include "ps_public_enum.h"
#include "kal_public_api.h"
#ifdef __CMUX_SUPPORT__
#include "cmux_vp_num.h"
#endif
#include "l1audio.h"

#include "sim_public_enum.h"

#include "rmmi_root.h"
#include "rmmi_utility.h"

#include "rmmi_struct.h"
#ifdef __MINI_LOG_SUPPORT__
#include "tst_mini_log.h"
#endif 

#include "intrCtrl.h" //for LEVEL_SENSITIV

#include "custom_sms_config.h"

extern UART_PORT PS_UART_PORT;
extern kal_uint8 L1SM_GetHandle(void);
kal_uint8 rmmi_aux_PDNhandle;

rmmi_common_context_struct rmmi_common_cntxt_g;
rmmi_context_struct rmmi_cntxt_g[RMMI_MAX_SIM_NUM];

module_type rmmi_current_mod_id;       
rmmi_common_context_struct *rmmi_common_ptr_g;
rmmi_context_struct *rmmi_ptr_g;
#if defined(__ATCMD_ONOFF_CHECK__)
kal_bool rmmi_check_at_enable;
#endif

extern UART_baudrate PS_BAUDRATE;
extern void rmmi_custom_init_context(rmmi_custom_context_struct *rmmi_ptr_g);
extern void rmmi_get_vgr_default_setting(kal_bool *customer_provided, kal_uint8 *vgr_gain);
extern void L1SP_SetMicrophoneVolume( kal_uint8 mic_volume );
extern void rmmi_get_vgt_default_setting(kal_bool *customer_provided, kal_uint8 *vgt_gain);
extern void L1SP_SetOutputVolume( kal_uint8 volume1, kal_int8 digital_gain_index );
extern void rmmi_eint0_hdlr(void);

//extern UART_flowCtrlMode UART_GetFlowCtrl(UART_PORT uart_port);

#if defined(__MTK_TARGET__) && defined(__RMMI_UT__)
extern void L1SM_SleepDisable(kal_uint8 handle);
#endif

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
extern const kal_uint8 WAKE_UP_EINT_NO;
#endif

//#include "rmmi_ind.h"


/*****************************************************************************
 * FUNCTION
 *  rmmi_init_uart
 * DESCRIPTION
 *  This is rmmi_init_uart function of ATCI module.
 *  config initial setting for PS_UART_PORT
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_init_uart(void)
{
#ifdef UART_ENABLE

    if (PS_UART_PORT == uart_port_null)
    {
        return;
    }

    rmmi_open_uart_port(PS_UART_PORT, PS_BAUDRATE);

    RMMI_COMM_PTR->uart_port_value = (kal_uint8)PS_UART_PORT;
#if defined(__MTK_TARGET__) && defined(__RMMI_UT__)
    /* Redirect PS_UART_PORT to uart_port2 */
    /* Must be used with __MODEM_CONTROL_UART4__*/

    // Overwrite PS_UART_PORT to uart_port2 ( redirect to uart4 by uart driver )
    rmmi_root_plugout_uart(PS_UART_PORT);
    PS_UART_PORT = uart_port2;
    
    rmmi_open_uart_port(PS_UART_PORT, 921600);
    
    RMMI_COMM_PTR->uart_port_value = PS_UART_PORT;

    // Disable L1 sleep
    L1SM_SleepDisable(rmmi_aux_PDNhandle);
#endif

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    // Disable L1 sleep
//    L1SM_SleepDisable(rmmi_aux_PDNhandle);

/*
    register EINT0 to be waked-up by AP
*/
    EINT_Registration(WAKE_UP_EINT_NO, KAL_FALSE, KAL_FALSE, rmmi_eint0_hdlr, KAL_FALSE);
    EINT_Set_Sensitivity(0, LEVEL_SENSITIVE);
#endif /* __DUAL_TALK_MODEM_SUPPORT__ */

#if defined(__DUAL_TALK_MODEM_SUPPORT__)//6575+52 (WG+'G')
  #define __L4_INIT_MULTI_PS_PORT__ //__L4_INIT_MULTIUSB_COM__
  #define RMMI_PS_1 (uart_port2)
  #define RMMI_PS_2 (uart_port_usb)
#elif defined(__USB_MULTIPLE_COMPORT_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__)
  #ifdef __MULTIPLE_PPP_DIALUP_SUPPORT__ 
    #define __L4_INIT_MULTI_PS_PORT__
    //20120917, support SPEECH(DCT) + TRIPLE PPP IOT test cases
    // Target USB Enum,    Function,    Initial Owner,    PC Device Naming
    //             usb,    PPP1,        ATCI,             MTK Modem
    //            usb2,    PPP23/CMUX,  ATCI,             MTK Modem
    //            usb3,    AT,          ATCI,             Application Port
    //            usb4,    Speech,      ATCI,             Speech Port
    //            usb5,    Catcher Log, TST,              Debug Port
    // [Note] for MT6280, 3PPP cannot be enabled along with MBIM at the same time
    #define RMMI_PS_1 (uart_port_usb2) 
    #define RMMI_PS_2 (uart_port_usb3)
  #else
    #define __L4_INIT_MULTI_PS_PORT__
    #define RMMI_PS_1 (uart_port_usb3)
    #define RMMI_PS_2 (uart_port_usb2)
  #endif /* __MULTIPLE_PPP_DIALUP_SUPPORT__ */
#elif defined(__USB_MULTIPLE_COMPORT_SUPPORT__) && defined(__SP_RIL_SUPPORT__) //For 75+80
  #define __L4_INIT_MULTI_PS_PORT__
  #define RMMI_PS_1 (uart_port_at_ccci)
  #define RMMI_PS_2 (uart_port_usb)
#endif

#if defined(__L4_INIT_MULTI_PS_PORT__)
	if ( PS_UART_PORT == RMMI_PS_1 )
	{
		extern UART_PORT TST_PORT;
		extern UART_PORT TST_PORT_L1;

   		if ((TST_PORT != RMMI_PS_2) && (TST_PORT_L1 != RMMI_PS_2))
		{
            rmmi_open_uart_port(RMMI_PS_2, PS_BAUDRATE);
        #if defined(__USB_MULTIPLE_COMPORT_SUPPORT__) && defined(__L4_INIT_MULTIUSB_COM__)
        #ifndef __MBIM_SUPPORT__
            rmmi_open_uart_port(uart_port_usb, PS_BAUDRATE);
        #endif
        #endif
        } /* end of if (TST...) */
	}	
#endif /* defined (__L4_INIT_MULTI_PS_PORT__) */
	
#else /* UART_ENABLE */ 
    system("del c:\\mcu_out.log");
#endif /* UART_ENABLE */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_profile_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  profile_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_profile_init(rmmi_profile_struct *profile_ptr)
{
    profile_ptr->s_reg.s0 = 0;
    profile_ptr->s_reg.s2 = 43;
    profile_ptr->s_reg.s3 = 13;
    profile_ptr->s_reg.s4 = 10;
    profile_ptr->s_reg.s5 = 8;
    profile_ptr->s_reg.s6 = 2;
    profile_ptr->s_reg.s7 = 1;
    profile_ptr->s_reg.s8 = 2;
    profile_ptr->s_reg.s10 = 2; 
    profile_ptr->s_reg.s32 = 17;
    profile_ptr->s_reg.s33 = 19;
    profile_ptr->s_reg.s95 = 0;

    profile_ptr->rmmi_cbst.speed = 0;
    profile_ptr->rmmi_cbst.name = 0;
    profile_ptr->rmmi_cbst.ce = 1;

    profile_ptr->rmmi_crlp.iws = 61;
    profile_ptr->rmmi_crlp.mws = 61;
    profile_ptr->rmmi_crlp.T1 = 48;
    profile_ptr->rmmi_crlp.N2 = 6;

    profile_ptr->rmmi_ciwf = 0;
    profile_ptr->rmmi_atv = 1;
    profile_ptr->rmmi_ate = 1;
    profile_ptr->rmmi_atq = 0;
    profile_ptr->rmmi_atx = 4;
    profile_ptr->rmmi_atw = 2;
    profile_ptr->rmmi_atampC = 1;
    profile_ptr->rmmi_atampD = 2;
    profile_ptr->rmmi_atampK = 3;

}

/*****************************************************************************
 * FUNCTION
 *  rmmi_init_common_context
 * DESCRIPTION
 *  This is rmmi_init_common_context function of L4C module.
 *  initialize RMMI common context data with default value
 * PARAMETERS
 *  void
 * RETURNS
 *  kal_bool
 *****************************************************************************/
kal_bool rmmi_init_common_context()
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 i;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;

#ifdef __CMUX_SUPPORT__
    rmmi_comm_ptr->cmux_enable = KAL_FALSE;
#endif

    
    rmmi_comm_ptr->cmd_from_tst = KAL_FALSE; //catcher inject AT command    

#ifdef __BT_SUPPORT__
    rmmi_comm_ptr->rmmi_hf_src = INVALID_SRC;
#endif

#ifdef SYNCML_DM_SUPPORT
    rmmi_comm_ptr->lock_atci = 0;
#endif


#if defined(__CMUX_MODEM_STATUS_SUPPORT__)	 
    rmmi_comm_ptr->isDSRAbort_flag = 0;
#endif    

    rmmi_comm_ptr->transfer.dest_mod = MOD_NIL; 
    rmmi_comm_ptr->transfer.port = uart_port_null; 

    rmmi_comm_ptr->uart_plugout = 0;
    rmmi_comm_ptr->uart_stop_send_flag = 0x00;
    rmmi_comm_ptr->is_multi_cmd = 0x00;      //multi command control
    rmmi_comm_ptr->multi_cmd_error = 0x00;   //multi command control
    rmmi_comm_ptr->is_sms_cmd = 0;           /* yy/mm/dd as default format */
    rmmi_comm_ptr->isAtdAction_flag = 0x00;  /* mtk00714 */
    rmmi_comm_ptr->isAtdAbort_flag = 0x00;   /* mtk01616 070323 */

#ifdef __GEMINI__
    rmmi_comm_ptr->sim_uart_setting = RMMI_UART_TO_SIM1;
#endif
    for (i=0; i<RMMI_MAX_CHANNEL_NUMBER; i++)
    {
#ifdef __GEMINI__
        rmmi_comm_ptr->rmmi_uart_owner[i] = SIM1;
#endif
        rmmi_comm_ptr->port[i] = uart_port_null;
        rmmi_comm_ptr->source[i] = INVALID_SRC;
    }
#ifndef __MTK_TARGET__
    /*
    * For MODIS, we always open the UART fail,
    * So we need to init the source and port here.
    */
    rmmi_comm_ptr->port[0] = (kal_uint8)PS_UART_PORT;
    rmmi_comm_ptr->source[0] = RMMI_SRC;
#endif
    
#ifdef __TC01__
/* under construction !*/
/* under construction !*/
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

#ifdef __BT_SUPPORT__
    rmmi_comm_ptr->hf_urc_report_flag = KAL_FALSE;
#endif

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_init_context
 * DESCRIPTION
 *  This is rmmi_init_context function of L4C module.
 *  initialize RMMI context data with default value
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool rmmi_init_context()
{
    kal_bool ret_val = KAL_TRUE;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    rmmi_custom_context_struct rmmi_cust_cntxt;

#ifndef WIN32
    rmmi_aux_PDNhandle = L1SM_GetHandle();
#endif /* WIN32 */ 
    rmmi_ptr->s_reg.s0 = 0;
    rmmi_ptr->s_reg.s2 = 43;
    rmmi_ptr->s_reg.s3 = 13;
    rmmi_ptr->s_reg.s4 = 10;
    rmmi_ptr->s_reg.s5 = 8;
    rmmi_ptr->s_reg.s6 = 2;
    rmmi_ptr->s_reg.s7 = 1;    
    rmmi_ptr->s_reg.s8 = 2;
    rmmi_ptr->s_reg.s10 = 2;
    rmmi_ptr->s_reg.s32 = 17;
    rmmi_ptr->s_reg.s33 = 19;
    rmmi_ptr->s_reg.s95 = 0;

#if !defined(__ULC_AT__)
    rmmi_profile_init(&rmmi_ptr->rmmi_default_profile);
    rmmi_profile_init(&rmmi_ptr->rmmi_user_profile);
    rmmi_profile_init(&rmmi_ptr->rmmi_current_profile);
#endif	

    //RMMI_PTR->max_plmn_list_len = 10;

    rmmi_ptr->em_enable = 0;    /* mtk00468 add for default engineer mode (0)for disable */

    /* init custom setting*/
    kal_mem_set((kal_uint8*) &rmmi_cust_cntxt, (kal_uint32) 0, (kal_uint32) sizeof(rmmi_custom_context_struct));
    rmmi_custom_init_context(&rmmi_cust_cntxt);

    kal_mem_cpy(&(rmmi_ptr->rsp_mode), &(rmmi_cust_cntxt.rsp_mode), sizeof(rmmi_rsp_mode_struct));
    kal_mem_cpy(&(rmmi_ptr->report_mode), &(rmmi_cust_cntxt.report_mode), sizeof(rmmi_report_mode_struct));
#ifdef __OP01__
    kal_mem_cpy(&(rmmi_ptr->op01_report_mode), &(rmmi_cust_cntxt.op01_report_mode), sizeof(rmmi_op01_report_mode_struct));
#endif
    /* AT+CMEE=<n> default value */
    rmmi_ptr->error_report_mode = rmmi_cust_cntxt.error_report_mode;
    /* AT+CSCS=<chset> default value */
    rmmi_ptr->char_set = rmmi_cust_cntxt.char_set;    
	/* AT+COPS=<mode>,<format> default value */
    rmmi_ptr->plmn_format = rmmi_cust_cntxt.plmn_format;       //default for long alpha
    rmmi_ptr->cops_mode = rmmi_cust_cntxt.cops_mode; // default "automatic" mode
	/* AT+CPOL=<index>,<format> , set <format> default value here */
    rmmi_ptr->CPOL_plmn_format = rmmi_cust_cntxt.CPOL_plmn_format;	
    /* AT+CMEC=<keyp>,<disp>,<ind> default value */
    rmmi_ptr->cmec_keyp = rmmi_cust_cntxt.cmec_keyp; 
    rmmi_ptr->cmec_disp = rmmi_cust_cntxt.cmec_disp;
    rmmi_ptr->cmec_ind = rmmi_cust_cntxt.cmec_ind;
    /* AT+CLAE=<mode> default value */    
    rmmi_ptr->clae_mode = rmmi_cust_cntxt.clae_mode;    
    /* AT+CSDH=<show> default value */
    rmmi_ptr->csdh_show = rmmi_cust_cntxt.csdh_show;
    /* AT+CVHU=<mode> default value, only (0-1) is supported */
    rmmi_ptr->cvhu_mode = rmmi_cust_cntxt.cvhu_mode; //MAUI_02862643, mtk02285, ignore ATH in default -> To prevent disc CS call for Ericsson IOT      

    rmmi_ptr->uart_in_data_mode = KAL_FALSE;

#ifdef __PLMN_LIST_WITH_LAC__
    rmmi_ptr->list_plmn_with_lac = rmmi_cust_cntxt.list_plmn_with_lac; //default not print LAC
#endif

#ifdef __SAT__
#ifdef __SATCB__
    rmmi_ptr->IsSATcommand = KAL_FALSE; //SAT AT command
    rmmi_ptr->IsSATresponse = KAL_FALSE;
#endif	
#endif /* __SAT__ */ 

    rmmi_ptr->date_aux_mode = 1;        /* yy/mm/dd as default format */
    rmmi_ptr->response_type = 0xff; 
    rmmi_ptr->ats0_auto_answer = KAL_FALSE;
    rmmi_ptr->is_ucm_action = KAL_FALSE;

    kal_mem_set(rmmi_ptr->last_number_dialed, 0, MAX_CC_ADDR_LEN);

#ifdef __UCM_SUPPORT__
    rmmi_ptr->is_ata_action = KAL_FALSE;
    rmmi_ptr->is_compound_action = KAL_FALSE; //MAUI_02016224
#endif

#ifdef __VOIP__
    rmmi_ptr->string_ptr = NULL;
    rmmi_ptr->node_ptr = NULL;
    rmmi_ptr->id = NULL;
#endif /* __VOIP__ */ 

    rmmi_ptr->is_cpbw_phb_fdn = KAL_FALSE;
#if defined(__AT_EPBW_SUPPORT__)
    rmmi_ptr->phb_is_epbw = KAL_FALSE;
#endif

    //rmmi_ptr->sms_comma_assign = KAL_FALSE;  //mtk00714 change init value: KAL_TRUE=> KAL_FALSE
    rmmi_ptr->command_allow = KAL_FALSE;
    rmmi_ptr->cmd_error_cause = OPERATION_NOT_ALLOWED_ERR;      //default value
    //rmmi_ptr->is_gprs_data_dialing = KAL_FALSE; //mtk02285, 201003, 6251_ram
    rmmi_ptr->ring_count = 0;   //ATS0

    rmmi_ptr->cs_register_status.state = 0xff; // for +CREG
    rmmi_ptr->cs_register_status.cell_id = 0xffffffff;
    rmmi_ptr->cs_register_status.cell_data_speed_support = NONE_SPECIFIED;
#ifdef __MOD_TCM__
    rmmi_ptr->ps_register_status.state = 0xff; // for +CGREG
    rmmi_ptr->ps_register_status.cell_id = 0xffffffff;
    rmmi_ptr->ps_register_status.cell_data_speed_support = NONE_SPECIFIED;
    rmmi_ptr->cgatt_last_action = 0xff;
#endif //mtk02285, 201003, 6251_ram

    rmmi_ptr->cs_register_status.cause = 0;

    rmmi_ptr->preferred_lang = 0xff;
    rmmi_ptr->indicators.call = 0;
    rmmi_ptr->indicators.callsetup = 0;
    rmmi_ptr->indicators.callheld = 0;

    rmmi_ptr->eind_ready_flag = 0x00000000;
    rmmi_ptr->report_mode.ecsq_count = 0;

    rmmi_ptr->imei_action = 0;
    rmmi_ptr->online_cmd_state = L4C_COMMAND_STATE;    //mtk01616_080912: RMMI online_cmd_state is used to record which online connection is escaped
    rmmi_ptr->online_cmd_state_src_id = INVALID_SRC; //MAUI_01652672, mtk02285, 20090324
    rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE;
    rmmi_ptr->except_src = INVALID_SRC;
    rmmi_ptr->action_cmd = RMMI_MAX_CMD_NUM;
    rmmi_ptr->ws46 = 25;
    #if defined(__MMI_FMI__)  
        rmmi_ptr->MMI_string_enable = RMMI_EMMISTR_DATA_FROM_MMI;
        rmmi_ptr->screenshot_pending = KAL_FALSE;
        rmmi_ptr->screenshot_fd = NULL;
        rmmi_ptr->screenshot_index = 0;
        rmmi_ptr->report_mode.cmer_tscrn = 0;
    #endif
#ifdef __BT_SUPPORT__
    rmmi_ptr->last_reported_ciev_signal = 255; //hong_rx_level to make sure first diff is larger than custom_ciev_signal_variance
    rmmi_ptr->send_ciev_callheld = KAL_FALSE; //mtk01616_090923: To explictly send +ciev:<callheld>
#endif
    rmmi_ptr->ath_for_dialup = uart_port_null;  //mtk01616_080923: ATH is expected after GPRS dialup is disconnected by user or nw , or setup dialup fail

#if 0 //__CTM_SUPPORT__
/* under construction !*/
#endif 

#if !defined(__MMI_FMI__)
    rmmi_ptr->poweroff_src_id = INVALID_SRC;
#endif 
    rmmi_ptr->em_volume_level = 0;
    rmmi_ptr->em_volume_type = 0;
    rmmi_ptr->em_audio_type = 0;
    rmmi_ptr->em_audio_gain = 0;
    rmmi_ptr->em_audio_mode = 0;
    rmmi_ptr->em_eadp_action = RMMI_EADP_NO_ACTION;

    rmmi_ptr->eaps_action = (kal_uint8)RMMI_EAPS_NO_ACION;
    rmmi_ptr->eaps_para1 = 0xff;
    rmmi_ptr->eaps_para2 = 0xff;
    rmmi_ptr->eaps_para3 = 0xff;
    rmmi_ptr->eaps_audio_param = NULL;

#ifdef __CMUX_SUPPORT__
    rmmi_ptr->rmmi_data_channel_src = INVALID_SRC;
    rmmi_ptr->rmmi_urc_channel_src = INVALID_SRC;
#endif


#ifdef __SAT__
#ifdef __RSAT__
    rmmi_ptr->sat_icon_displayed = KAL_TRUE;    //mtk00924: display icon for STK SMS, SS, USSD, DTMF
#endif /* __RSAT__ */ 
#endif /* __SAT__ */ 

    rmmi_ptr->last_executed_P2_fail = RMMI_NO_ERR;  //[MAUI_01296349] mtk02480: 27.007: +CPIN? return  PIN2/PUK2 if previous command execured authentication failure, emee_err=17/18

#if defined(__MODEM_EM_MODE__)
    rmmi_ptr->em_src_id = INVALID_SRC;
#endif

#if defined(__SP_RIL_SUPPORT__)
    rmmi_ptr->CNMI_mode = sms_cnmi_para_mode();
    rmmi_ptr->smsal_bfr = 0;
#else
    rmmi_ptr->CNMI_mode = sms_cnmi_para_mode();
    rmmi_ptr->smsal_bfr = 1;
#endif 

#if defined(__SMS_STORAGE_BY_MMI__) 
rmmi_ptr->cpms_query = KAL_FALSE;
rmmi_ptr->cpms_set = KAL_FALSE;
rmmi_ptr->esmss_mode = 1;
#endif


    rmmi_ptr->indicators.smsfull = 0; //sms not full
	
    rmmi_ptr->is_emgr = KAL_FALSE; 
#if defined(PLUTO_MMI) && (defined(__OP11_ATK__) || defined(__AUTO_ATK__))
    rmmi_ptr->appName = NULL;
    rmmi_ptr->appName_len = 0;
#endif

#if defined(__AT_IPR_WRITE_FS_SUPPORT__)
    rmmi_ptr->atipr_rate = 0;
#endif

#if defined(__MODEM_CARD__) || defined(__SP_RIL_SUPPORT__)
    rmmi_ptr->csp_plmn_mode = 0xFF;
#endif
#if defined(__MESSAGE_BASED_AT_SUPPORT__)   
    rmmi_ptr->msg_based_at_enable = KAL_FALSE;
#endif

    rmmi_ptr->ats0_src_id = INVALID_SRC; //MAUI_02743662

    rmmi_ptr->cpls_selected = 0;

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    rmmi_ptr->wake_up_ap = KAL_FALSE;
#endif

#if !defined(__SLIM_AT__)
    rmmi_ptr->clck_sml_type = TYPE_UNSPECIFIED;
#endif

#if defined(__ACMT_SUPPORT__)
    rmmi_ptr->eacmt_mode = 1; //default is turned on +EACMT URC
#endif

#if defined(__REPORT_AVAILABLE_PLMN__)
    rmmi_ptr->ecops_mode = 0; //default turn off +ECOPS URC
#endif

#if defined(__2STAGE_NW_SELECTION__)
    rmmi_ptr->emsr_mode = 0; //default turn off modem suspend/resume
#endif
#ifdef __UICC_CHANNEL_SUPPORT__
    RMMI_PTR->is_crla = 0;
#endif /* __UICC_CHANNEL_SUPPORT__ */

    return ret_val;
}

void rmmi_read_custom_default_setting()
{
    kal_bool customer_provided;
    kal_uint8 vgr_gain, vgt_gain;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_get_vgr_default_setting(&customer_provided, &vgr_gain);
    if (customer_provided)
    {
        L1SP_SetOutputVolume(vgr_gain, 0);
	rmmi_ptr->vgr_gain = vgr_gain;
    }
    rmmi_get_vgt_default_setting(&customer_provided, &vgt_gain);
    if (customer_provided)
    {
        L1SP_SetMicrophoneVolume(vgt_gain);
	rmmi_ptr->vgt_gain = vgt_gain;
    }
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool rmmi_init()
{
    kal_bool ret_val = KAL_FALSE;
    kal_int8 i = 1;

    for (i = RMMI_MAX_SIM_NUM-1; i >= 0; i--)
    {

        rmmi_ptr_g = &rmmi_cntxt_g[i];

        kal_mem_set((kal_uint8*) RMMI_PTR, (kal_uint32) 0, (kal_uint32) sizeof(rmmi_context_struct));
        rmmi_current_mod_id = L4_MODULE(MOD_ATCI, i);
    
        ret_val = rmmi_init_context();

	    rmmi_read_custom_default_setting();

    }

    rmmi_common_ptr_g = &rmmi_common_cntxt_g;
    kal_mem_set((kal_uint8*) RMMI_COMM_PTR, (kal_uint32) 0, (kal_uint32) sizeof(rmmi_common_context_struct));
    ret_val &= rmmi_init_common_context();

    #if defined(__ATCMD_ONOFF_CHECK__)
    rmmi_check_at_enable = KAL_FALSE;
    #endif
    
#ifdef __MINI_LOG_SUPPORT__
    tst_mini_log_callback_register(MINI_LOG_INFO_MODULE_L4C,l4c_copy_mini_log,sizeof(l4c_minilog_struct));
#endif

    //we moved init_uart here for dual talk project SDIO issue , because init stage SDIO may send to MODEM command , but that 
    //does not make sense , therefore remove it to layer4_task_main
    //rmmi_init_uart();

    return ret_val;
}

/*****************************************************************************
* FUNCTION
 *  rmmi_init_atci 
*
* DESCRIPTION
*   Used to initial ATCI when entering l4 Task Main function
*
* PARAMETERS
*  none.
*
* RETURNS
*  none.
*
* GLOBALS AFFECTED
*  none.
*****************************************************************************/
void rmmi_init_atci()
{
    #if defined(__ATCMD_ONOFF_CHECK__)
    nvram_read_req_struct *param_ptr;

    param_ptr = (nvram_read_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_read_req_struct), TD_RESET);

    param_ptr->file_idx = NVRAM_EF_ATCMD_ON_OFF_CHECK_LID;
    param_ptr->para = 1;
    param_ptr->access_id = RMMI_SRC;

    rmmi_atci_send_ilm(MOD_NVRAM, MSG_ID_NVRAM_READ_REQ, param_ptr, NULL);
    #endif
}

/*****************************************************************************
* FUNCTION
*  atci_start_base_timer
*
* DESCRIPTION
*   This is l4c_start_base_timer function of L4C module.
*   provide the function pointer for create a event scheduler
*
* PARAMETERS
*  base_timer_ptr     IN       pointer to timer
*  time_out           IN       time out value
*
* RETURNS
*  none.
*
* GLOBALS AFFECTED
*  none.
*****************************************************************************/
/*****************************************************************************
* FUNCTION
*  atci_stop_base_timer
*
* DESCRIPTION
*   This is l4c_stop_base_timer function of L4C module.
*   provide the function pointer for create a event scheduler
*
* PARAMETERS
*  base_timer_ptr     IN       pointer to timer
*
* RETURNS
*  none.
*
* GLOBALS AFFECTED
*  none.
*****************************************************************************/


