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
 * SMU_MAIN.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is the main function to parse entry messages to handler function.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
/* KAL - RTOS Abstraction Layer */
//#include "kal_release.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "sim_ps_msgid.h"
#include "tst_msgid.h"
#include "sysservice_msgid.h"
//#include "soc_msgid.h"
//#include "abm_msgid.h"
#include "sim_public_msgid.h"

/* Task Message Communication */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stack_ltlcom.h"    /* local/peer struct */
//#include "stack_ltlcom.h"

/* Timer Management  */
//#include "stacklib.h"
//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"

/* Buffer Management */
//#include "app_buff_alloc.h"     

/* Task Management */
//#include "syscomp_config.h"     
//#include "task_config.h"   


//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "ps2sat_struct.h"	/* Benson SATCE */
#include "smu_def.h"
//#include "l4c2smu_struct.h"
 
//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

void l4csmu_plmn_sel_write_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_security_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sim_access_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_start_req_handler( ilm_struct *smu_ilm_ptr );
void nvram_read_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_nvram_read_cnf_handler(ilm_struct * smu_ilm_ptr);
void smu_nvram_write_cnf_handler(ilm_struct * smu_ilm_ptr);
void smu_mmrr_ready_ind_handler( ilm_struct *smu_ilm_ptr );
#ifdef __IMEI_LOCK_SUPPORT__
void smu_imei_lock_verified_ind_handler( ilm_struct *smu_ilm_ptr );
#endif
void smu_mmi_ready_ind_handler( ilm_struct *smu_ilm_ptr );
void smu_sim_read_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_security_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_start_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_status_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_send_security_ind( smu_security_type_enum type );
void smu_send_security_req(
        sim_chv_type_enum which_chv,
        sim_security_operation_enum op,
        kal_uint8 *key1,
        kal_uint8 *key2);
void smu_sim_write_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_dial_mode_cnf_handler(ilm_struct *ilm_ptr );
void l4csmu_puct_read_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_puct_write_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_dial_mode_req_handler( ilm_struct *smu_ilm_ptr );
void smu_file_change_ind_handler( ilm_struct *smu_ilm_ptr );
void smu_file_info_cnf_handler( ilm_struct *smu_ilm_ptr );
void smu_mmi_security_ind_handler( ilm_struct *smu_ilm_ptr );
void smu_sim_read_plmn_cnf_handler( ilm_struct *smu_ilm_ptr);
void smu_sim_write_plmn_cnf_handler( ilm_struct *smu_ilm_ptr);
void smu_tst_handler( ilm_struct *smu_ilm_ptr);
#if defined(__SATCE__) && !defined(__RSAT__)  //mtk02374
void sat_open_gprs_channel_ind_handler( ilm_struct *smu_ilm_ptr );
void sat_open_csd_channel_ind_handler( ilm_struct *smu_ilm_ptr );
void sat_open_server_mode_channel_ind_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sat_open_channel_res_handler( ilm_struct *smu_ilm_ptr );  // mtk01488
void l4csmu_sat_set_csd_prof_res_handler( ilm_struct *smu_ilm_ptr ); // mtk01488
void l4csmu_sat_set_gprs_prof_res_handler( ilm_struct *smu_ilm_ptr ); // mtk01488
void sat_close_channel_ind_handler( ilm_struct *smu_ilm_ptr );
void sat_send_data_ind_handler( ilm_struct *smu_ilm_ptr );
void sat_recv_data_ind_handler( ilm_struct *smu_ilm_ptr );
void sat_ch_status_ind_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sat_open_channel_req_handler( ilm_struct *smu_ilm_ptr );
//void l4csat_set_gprs_data_account_res_handler( ilm_struct *smu_ilm_ptr );
void sat_app_bearer_info_ind_req_handler( ilm_struct *smu_ilm_ptr );
//void l4csat_csm_open_csd_res_handler( ilm_struct *smu_ilm_ptr );
void l4csat_cc_call_disc_res_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sat_send_data_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sat_recv_data_req_handler( ilm_struct *smu_ilm_ptr );
void sat_app_soc_notify_ind_handler( ilm_struct * smu_ilm_ptr );
void sat_app_soc_deactivate_cnf_handler( ilm_struct * smu_ilm_ptr );
void l4csat_cc_call_disc_ind_req_handler( ilm_struct * smu_ilm_ptr );
void smu_l2r_data_ind_handler( ilm_struct * smu_ilm_ptr );
void smu_timer_expiry_handler(ilm_struct *smu_ilm_ptr);
void l4csmu_sat_bearer_para_req_handler(ilm_struct *smu_ilm_ptr);
#endif

#ifdef __SIM_ME_LOCK__
void l4csmu_set_personalization_req_handler( ilm_struct *smu_ilm_ptr );
void l4csmu_sml_status_req_handler( ilm_struct *smu_ilm_ptr );
#ifdef __SMS_DEPERSONALIZATION__
void l4csmu_sms_depersonalization_req_handler(ilm_struct *smu_ilm_ptr);
#endif
#if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
void l4csmu_tc01_set_personalization_req_handler(ilm_struct * smu_ilm_ptr);
void l4csmu_tc01_sml_status_req_handler(ilm_struct * smu_ilm_ptr);
#endif
#endif

#ifdef __WIFI_SUPPORT__
void sim_authenticate_cnf_handler(ilm_struct *smu_ilm_ptr);
#endif

void smu_sim_error_ind_hdlr(ilm_struct *smu_ilm_ptr);

#ifdef __GEMINI__


/*****************************************************************************
 * FUNCTION
 *  smu_context_selection
 * DESCRIPTION
 *  
 * PARAMETERS
 *  simInterface        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void smu_context_selection(kal_uint8 simInterface)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    this_smu = &smu_context_g[simInterface];    
}
#endif /* __GEMINI__ */ 

 


/*****************************************************************************
 * FUNCTION
 *  smu_main
 * DESCRIPTION
 *  This function is to parse the message to respectively handler function.
 * PARAMETERS
 *  ilm_ptr     [IN]        The pointer of ilm
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void smu_main(ilm_struct *ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*
     * Extract the msg_id from the Interlayer Message received
     * and call the appropriate handler
     */
    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_L4CSMU_START_REQ:
            l4csmu_start_req_handler(ilm_ptr);
            break;
        case MSG_ID_NVRAM_READ_CNF:
            smu_nvram_read_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_NVRAM_WRITE_CNF:
            smu_nvram_write_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_START_CNF:
            smu_start_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_SECURITY_CNF:
            smu_security_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_MMI_SECURITY_IND:
            smu_mmi_security_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_MMRR_READY_IND:
            smu_mmrr_ready_ind_handler(ilm_ptr);
            break;
 #ifdef __IMEI_LOCK_SUPPORT__			
        case MSG_ID_SIM_IMEI_LOCK_VERIFIED_IND:
	     smu_imei_lock_verified_ind_handler(ilm_ptr);
	     break;
 #endif		 
        case MSG_ID_SIM_MMI_READY_IND:
            smu_mmi_ready_ind_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SECURITY_REQ:
            l4csmu_security_req_handler(ilm_ptr);
            break;
#ifdef __SIM_ME_LOCK__            
#if defined(__CUSTOMER_TC01_DISK__) && !defined(WISDOM_MMI)
        case MSG_ID_L4CSMU_SET_PERSONALIZATION_REQ:
            l4csmu_tc01_set_personalization_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SML_STATUS_REQ:
            l4csmu_tc01_sml_status_req_handler(ilm_ptr);
            break;
 #else
        case MSG_ID_L4CSMU_SET_PERSONALIZATION_REQ:
            l4csmu_set_personalization_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SML_STATUS_REQ:
            l4csmu_sml_status_req_handler(ilm_ptr);
            break;
 #endif
#ifdef __SMS_DEPERSONALIZATION__      
      case MSG_ID_L4CSMU_SMS_DEPERSONALIZATION_REQ: //Kinki: [MAUI_01255000]
            l4csmu_sms_depersonalization_req_handler( ilm_ptr );
            break;
#endif            
#endif
        case MSG_ID_SIM_WRITE_CNF:
        case MSG_ID_SIM_APP_WRITE_CNF:
            smu_sim_write_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_READ_CNF:
        case MSG_ID_SIM_APP_READ_CNF:
            smu_sim_read_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_PUCT_WRITE_REQ:
            l4csmu_puct_write_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_PUCT_READ_REQ:
            l4csmu_puct_read_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SIM_ACCESS_REQ:
            l4csmu_sim_access_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_PLMN_SEL_WRITE_REQ:
            l4csmu_plmn_sel_write_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_DIAL_MODE_REQ:
            l4csmu_dial_mode_req_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_DIAL_MODE_CNF:
            smu_dial_mode_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_STATUS_CNF:
            smu_status_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_FILE_CHANGE_IND:
            smu_file_change_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_FILE_INFO_CNF:
        case MSG_ID_SIM_APP_FILE_INFO_CNF:
            smu_file_info_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_READ_PLMN_CNF:
            smu_sim_read_plmn_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_SIM_WRITE_PLMN_CNF:
            smu_sim_write_plmn_cnf_handler(ilm_ptr);
            break;
        case MSG_ID_TST_INJECT_STRING:
            smu_tst_handler(ilm_ptr);
            break;
#if defined(__SATCE__) && !defined(__RSAT__)  //mtk02374
        case MSG_ID_SAT_OPEN_GPRS_CHANNEL_IND:
            sat_open_gprs_channel_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_OPEN_CSD_CHANNEL_IND:
            sat_open_csd_channel_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_OPEN_SERVER_MODE_CHANNEL_IND:
            sat_open_server_mode_channel_ind_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_OPEN_CHANNEL_REQ:
            l4csmu_sat_open_channel_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_SET_CSD_PROF_RES:
            l4csmu_sat_set_csd_prof_res_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_SET_GPRS_PROF_RES:
            l4csmu_sat_set_gprs_prof_res_handler(ilm_ptr);
            break;
        case MSG_ID_TIMER_EXPIRY:
            smu_timer_expiry_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_CLOSE_CHANNEL_IND:
            sat_close_channel_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_SEND_DATA_IND:
            sat_send_data_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_RECV_DATA_IND:
            sat_recv_data_ind_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_SEND_DATA_REQ:
            l4csmu_sat_send_data_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_RECV_DATA_REQ:
            l4csmu_sat_recv_data_req_handler(ilm_ptr);
            break;
        case MSG_ID_APP_SOC_NOTIFY_IND:
            sat_app_soc_notify_ind_handler(ilm_ptr);
            break;
        case MSG_ID_SAT_CH_STATUS_IND:
            sat_ch_status_ind_handler(ilm_ptr);
            break;
        case MSG_ID_APP_CBM_BEARER_INFO_IND:
            sat_app_bearer_info_ind_req_handler(ilm_ptr);
            break;
        case MSG_ID_L4CSMU_SAT_BEARER_PARA_REQ:
            l4csmu_sat_bearer_para_req_handler(ilm_ptr);
            break;
#endif /* __SATCE__ */ 
#ifdef __WIFI_SUPPORT__
        case MSG_ID_SIM_AUTHENTICATE_CNF:
            sim_authenticate_cnf_handler(ilm_ptr);
            break;
#endif /* __WIFI_SUPPORT__ */ 
        case MSG_ID_SIM_ERROR_IND:
        {
            smu_sim_error_ind_hdlr(ilm_ptr);
            break;
        }
        default:
            break;
    }
}

