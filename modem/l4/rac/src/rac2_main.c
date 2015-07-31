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
 * rac_main.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for 
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
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
#define RAC2_MAIN_C

#ifdef __MOD_RAC__
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "sim_ps_msgid.h"
#include "sysservice_msgid.h"
#include "tst_msgid.h"

#include "ps_public_enum.h"
#include "l3_inc_enums.h"

#include "mcd_l3_inc_struct.h"
#include "rac2l4c_struct.h"
#ifdef __SAT__
#include "ps2sat_struct.h"
#endif

#include "rac_defs.h"
#include "rac_trc.h"
#include "rac_context.h"
#include "rac_hdlrs.h"
#include "rac_others.h"

/*Declarations for Global variable*/
rac_context_struct *rac_ptr_global;

/* MAUI_02838008 [Gemini+] MM checkin */
#ifndef __GEMINI__
rac_context_struct rac_context;
#else
rac_context_struct rac_context[MAX_SIM_NUM];

void rac_context_selection(kal_uint8 sim_interface)
{
     rac_ptr_global = &(rac_context[sim_interface]);
}
#endif


/*****************************************************************************
* FUNCTION
*  rac_main
* DESCRIPTION
*   rac_main is the dispacher of message handler..
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_main( ilm_struct *ilm_ptr )
{
    local_para_struct *local_para_ptr = ilm_ptr->local_para_ptr; 
    peer_buff_struct *peer_buff_ptr = ilm_ptr->peer_buff_ptr;
    rac_context_struct * rac_ptr_g = rac_ptr_global;

   kal_brief_trace(TRACE_INFO,RAC_INFO_BEFORE_MAIN, rac_ptr_g->current_action, rac_ptr_g->rac_mm_state, rac_ptr_g->rac_gmm_state);
   switch( ilm_ptr->msg_id )
   {
      /*****************************/
      /*       L4C Message         */
      /*****************************/
      case MSG_ID_L4CRAC_SET_PREFERRED_BAND_REQ:
         rac_l4c_set_preferred_band_req_handler(local_para_ptr, peer_buff_ptr);
         break;
      case MSG_ID_L4CRAC_RFOFF_REQ:
         rac_l4c_rfoff_req_handler();
         break;

      case MSG_ID_L4CRAC_ACT_REQ :
         rac_l4c_act_req_handler(local_para_ptr, peer_buff_ptr);
         break;
   	
  	   case MSG_ID_L4CRAC_REG_REQ:
         rac_l4c_reg_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      #ifdef __PS_SERVICE__
  	   case MSG_ID_L4CRAC_PS_REG_REQ:
         rac_l4c_ps_reg_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
      #endif

      case MSG_ID_L4CRAC_DEREG_REQ:
         rac_l4c_dereg_req_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_PLMN_LIST_REQ:
         rac_l4c_plmn_list_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_PLMN_SEARCH_REQ:
         rac_l4c_plmn_search_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_PLMN_LIST_STOP_REQ:
         rac_l4c_plmn_list_stop_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_CLASS_CHANGE_REQ:
         rac_l4c_class_change_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_SET_RAT_MODE_REQ:
         rac_l4c_set_rat_mode_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_SET_PREFER_RAT_REQ:
         rac_l4c_set_prefer_rat_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
#ifdef __2STAGE_NW_SELECTION__
      case MSG_ID_L4CRAC_SUSP_RESU_UPDATE_REQ:
         rac_l4c_susp_resu_update_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif         
      case MSG_ID_L4CRAC_SET_ROAMING_MODE_REQ:
         rac_l4c_set_roaming_mode_req_handler(local_para_ptr, peer_buff_ptr); 
         break;

      #ifdef __DYNAMIC_SET_IMEI__
      case MSG_ID_L4CRAC_SET_IMEI_REQ:
         rac_l4c_set_imei_req_handler(local_para_ptr, peer_buff_ptr); 
         break;
      #endif

#ifdef __UE_EFOPLMN__
      case MSG_ID_L4CRAC_UE_OPLMN_UPDATE_REQ:
         rac_l4c_set_ue_oplmn_update_req_handler(local_para_ptr, peer_buff_ptr); 
         break;
#endif         
      /*****************************/
      /*      NVRAM Message        */
      /*****************************/

      case MSG_ID_NVRAM_READ_CNF:
         rac_nvram_read_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
      
      case MSG_ID_NVRAM_WRITE_CNF:
         /* Do nothing, since don't know how */
         /* John Tang 2004/07/09: */
         rac_nvram_write_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      /*****************************/
      /*      MM Message           */
      /*****************************/
      case MSG_ID_GMMREG_RFOFF_CNF:
         rac_mm_rfoff_cnf_handler();
         break;
      case MSG_ID_GMMREG_ATTACH_CNF:
         rac_mm_attach_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
#if 0 /* Johnny: 3G RAC */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* ~Johnny */
      case MSG_ID_GMMREG_DETACH_IND:
         rac_mm_detach_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

#if 0 /* Johnny: 3G RAC */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* ~Johnny */

      case MSG_ID_GMMREG_NW_INFO_IND:
         rac_mm_nw_info_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_GMMREG_PLMN_LIST_CNF:
         rac_mm_plmn_list_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_GMMREG_CELL_INFO_UPDATE_IND:
         rac_mm_cell_info_update_ind_msg_handler(local_para_ptr, peer_buff_ptr);          
         break;
         
      case MSG_ID_GMMREG_CIPHER_IND:
         rac_mm_cipher_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
         
      case MSG_ID_GMMREG_PLMN_SEARCH_CNF:
	  rac_mm_plmn_search_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
	  break;

      case MSG_ID_GMMREG_PLMN_LIST_STOP_CNF:
	  rac_mm_plmn_list_stop_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
	  break;

      case MSG_ID_GMMREG_SET_RAT_MODE_CNF:
	  rac_mm_set_rat_mode_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
	  break;
         
      /* CH_Liang 2005/05/31: Notify L4C if entering dedicated / pkt transfer mode */

      case MSG_ID_GMMREG_DEDICATED_MODE_IND:
         rac_mm_dedicated_mode_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
      #ifdef __HOMEZONE_SUPPORT__
      case MSG_ID_MMIAS_PKT_TRANSFER_MODE_IND:
         rac_rr_pkt_transfer_mode_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
      #endif

      #ifdef __PS_SERVICE__
      case MSG_ID_GMMREG_PS_SERVICE_INFO_IND:
         rac_mm_ps_service_info_ind_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
      #endif         

      #ifdef __REL5__
      case MSG_ID_GMMREG_NW_ECC_IND:
         rac_mm_nw_ecc_ind_msg_handler(ilm_ptr);
         break;
      #endif       

      case MSG_ID_GMMREG_SET_ROAMING_MODE_CNF:
         rac_mm_set_roaming_mode_cnf_handler(local_para_ptr, peer_buff_ptr); 
         break;
      
      case MSG_ID_GMMREG_SET_PREFER_RAT_CNF:
         break;
         
#if defined (__NO_PSDATA_SEND_SCRI__) || defined (__FAST_DORMANCY__) 
      case MSG_ID_GMMREG_END_PS_DATA_SESSION_IND:
         rac_mm_end_ps_data_session_ind_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif /*defined (__NO_PSDATA_SEND_SCRI__) || defined (__FAST_DORMANCY__) */
#ifdef __REPORT_AVAILABLE_PLMN__
      case MSG_ID_GMMREG_PLMN_LIST_IND:
         rac_mm_plmn_list_ind_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif		 
#ifdef __2STAGE_NW_SELECTION__		 
      case MSG_ID_GMMREG_SUSP_RESU_UPDATE_CNF:
         rac_mm_susp_resu_update_cnf_handler(local_para_ptr, peer_buff_ptr);
         break;
      case MSG_ID_GMMREG_SUSPEND_STATUS_IND:
         rac_mm_suspend_status_ind_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif		 
      /*****************************/
      /*      GEMINI Message          */
      /*****************************/
#ifdef __GEMINI__
      case MSG_ID_GMMREG_POWERON_SEARCH_FINISH_IND:
         rac_mm_search_normal_finish_ind_handler(ilm_ptr);
         break;

      case MSG_ID_GMMREG_RR_SERVICE_STATUS_IND: //20080217
         rac_mm_rr_service_status_ind_handler(ilm_ptr);
         break;

      case MSG_ID_L4CRAC_SIM_STATUS_UPDATE_REQ: //20071211
         rac_l4c_sim_status_update_req_handler(ilm_ptr);
         break;
#endif		 
	  
      /*****************************/
      /*      SAT Message          */
      /*****************************/
      #ifdef __SAT__

      case MSG_ID_SAT_IMEI_INFO_REQ:
         rac_sat_imei_info_req_msg_handler(ilm_ptr);
         break;

      case MSG_ID_SAT_TIME_ZONE_REQ:
         rac_sat_time_zone_req_msg_handler();
         break;
       
      #endif /* #ifdef __SAT__ */

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
      //mtk02475: for Fast Dormancy, allow upperlayer explicitly disconnect data channel
      case MSG_ID_L4CRAC_END_PS_DATA_SESSION_REQ:
         rac_l4c_end_ps_data_session_req_handler(local_para_ptr, peer_buff_ptr);
         break;
         
      case MSG_ID_GMMREG_END_PS_DATA_SESSION_CNF:
         rac_mm_end_ps_data_session_cnf_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif

#ifdef __CSG_SUPPORT__
      //mtk02475: for Rel8 CSG feature
      case MSG_ID_L4CRAC_CSG_LIST_REQ:
         rac_l4c_csg_list_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_L4CRAC_CSG_LIST_STOP_REQ:
         rac_l4c_csg_list_stop_req_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_GMMREG_CSG_LIST_CNF:
         rac_mm_csg_list_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;

      case MSG_ID_GMMREG_CSG_LIST_STOP_CNF:
         rac_mm_csg_list_stop_cnf_msg_handler(local_para_ptr, peer_buff_ptr);
         break;
#endif /* __CSG_SUPPORT__ */

      case MSG_ID_TIMER_EXPIRY:
      {
         //MAUI_02914482 [RAC] use evshed_create to replace new_evshed
         /* Execute event's timeout handler */
         evshed_timer_handler(rac_ptr_g->event_scheduler_ptr);
      }
      break;

#ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
#ifdef __UMTS_RAT__         
/* under construction !*/
#endif             
/* under construction !*/
/* under construction !*/
#endif /* __MTK_INTERNAL__ */   
  
      default:
         DEBUG_ASSERT(0);
         break;

   } /* end of switch messages */

} /* end of rac_main*/




/*****************************************************************************
* FUNCTION
*  rac_reset
* DESCRIPTION
*   This function reset the content of RAC context to default value.
*
* PARAMETERS
*  none.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

kal_bool rac_reset(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
#ifdef __GEMINI__
   kal_uint8 i;

   for (i=0; i < MAX_SIM_NUM; i++)
#endif
   {
#ifdef __GEMINI__
   rac_ptr_g  = & rac_context[i];
#endif

    /* mtk03643 fix UT event scheduler bugs, stop timers and clean all event_info */
    evshed_delete_all_events( rac_ptr_g->event_scheduler_ptr );
    kal_mem_set( &(rac_ptr_g->event_id[0]) , 0 , sizeof(rac_ptr_g->event_id) );

    rac_ptr_g->mobile_class=MS_CLASS_A;

    /* mtk01778, 2007/07/31:  remove the unused global variable { */
    /* rac_ptr_g->mm_cause = 0; */
    /* } mtk01778, 2007/07/31 */ 
    rac_ptr_g->gmm_cause=CAUSE_NONE;
   
    rac_ptr_g->current_action = RAC_NULL;
    /* John Tang 2004/12/20: For Cannon_Plus SCR#4111. When using a SIM not registered for GPRS 
    and activate WAP. Users see "G" icon just after ATTACH REQUEST is sent. The reason is that we 
    initialise it with value "0". It's same as "GPRS_ATTACHED" for "gprs_response" (mapping to 
    "gprs_status" in MMI_NW_ATTACH_IND from L4C to MMI. */


    rac_ptr_g->rac_mm_state = RAC_MM_NULL;
    rac_ptr_g->previous_rac_mm_state = RAC_MM_NULL;

    rac_ptr_g->rac_gmm_state = RAC_GMM_NULL;
    rac_ptr_g->previous_rac_gmm_state = RAC_GMM_NULL;

	  
    rac_ptr_g->local_para_ptr = NULL;
   
    kal_mem_set(&(rac_ptr_g->current_cell_rat), 0, sizeof (cell_info_and_rat_struct));
    kal_mem_set(&(rac_ptr_g->selected_plmn_id), 0, sizeof (plmn_id_rat_struct));

    /* John Tang 2004/12/10: To keep the last content of "L4CRAC_REG_STATE_IND" 
    sent	to L4C so that we can save the frequency which L4C sends status to MMI. Too
    many primitives may cause the external queue of MMI full. */
    kal_mem_set(&(rac_ptr_g->last_l4crac_reg_state_ind), 0, sizeof (l4crac_reg_state_ind_struct));

    kal_mem_set(&(rac_ptr_g->imei[0]), 0, 8);
    rac_ptr_g->imei_svn = 0;
   
     
    rac_ptr_g->requested_gsm_band = 0;

#ifdef __UMTS_RAT__    
    kal_mem_set(rac_ptr_g->requested_umts_fdd_band, 0, sizeof (kal_uint8)*SIZE_OF_UMTS_BAND);
#endif    

    rac_ptr_g->prefered_service=CS_DOMAIN;
    rac_ptr_g->plmn_sel_mode=MANUAL_MODE;  
    
#ifdef __CSG_SUPPORT__
//mtk02475: for Rel8 CSG feature
    rac_ptr_g->csg_auto_search_preference = KAL_FALSE;
#endif /* __CSG_SUPPORT__ */
    /* mtk01778, 2007/07/31:  remove the unused global variable { */
    /* _context.reading_index=0;	   */
    /* } mtk01778, 2007/07/31 */ 
    rac_ptr_g->src_id=LMMI_SRC;

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
   rac_ptr_g->end_data_src_id = LMMI_SRC;
#endif
	     
    rac_ptr_g->nw_time_zone=0;
	  
    rac_ptr_g->nw_time_zone_valid = KAL_FALSE;
    rac_ptr_g->attach_req_sent = KAL_FALSE;
    rac_ptr_g->auto_attach = KAL_FALSE;

    rac_ptr_g->rat_mode = RAT_NONE;
    rac_ptr_g->request_rat_mode = RAT_NONE;
    
    rac_ptr_g->service_to_be_dereged=DOMAIN_NONE; /* John Tang 2004/03/08 */
    rac_ptr_g->nvram_write_counter=0; /* John Tang 2004/07/09 */

    rac_ptr_g->service_to_be_reged = DOMAIN_NONE;
    rac_ptr_g->att_id = 0;//send first att/det, att_id will be 1 (++)
    rac_ptr_g->retry_count = 0;	   
   
   /* mtk00714: RAC2 revise */
    //kal_mem_set(&(rac_ptr_g->plmn_search_req), 0, sizeof (l4crac_plmn_search_req_struct));
    rac_ptr_g->plmn_search_req_ptr = NULL;

#if (defined(__UMTS_RAT__) && defined(__GSM_RAT__))
    rac_ptr_g->prefer_rat = RAT_NONE;
#endif

#ifdef __DYNAMIC_ROAMING_SUPPORT__
    rac_ptr_g->is_supporting_roaming = KAL_FALSE;
#endif

    rac_ptr_g->cell_data_speed_support = NONE_SPECIFIED;

    rac_ptr_g->is_dedicated_mode = KAL_FALSE;

#ifdef __SAT__ 
#ifndef __SAT_LOWCOST_NW_DISABLE__
    rac_ptr_g->send_sat_location_info_ind = KAL_FALSE;
    /* mtk01778, 2007/08/06: Remove the unused proactive cmd in the structure to decrease local and 
       global memory consumption. In addition, add the "rat" information for SAT requirement after R4 . { */     
    kal_mem_set(&(rac_ptr_g->last_sat_location_info_ind), 0, sizeof(sat_location_info_ind_struct));
    rac_ptr_g->last_sat_location_info_ind.mm_status = 0xFF; /* mtk00714: 20080403, shouldn't be init as 0 (=SAT_MM_NO_SERVICE) , otherwise power on NO_SERVICE won't sent to SIM */
    rac_ptr_g->last_sat_location_info_ind.location_info[7] = 0xFF; //mtk02475: extended cell id should default set as 0xFFFF
    rac_ptr_g->last_sat_location_info_ind.location_info[8] = 0xFF;
    /* } mtk01778, 2007/08/06 */ 	    
#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif

#ifdef __GEMINI__
#ifdef UNIT_TEST
   rac_ptr_g->dual_sim_config_status = SIM1_RADIO_ON;
#else
   rac_ptr_g->dual_sim_config_status = 0;
#endif
#endif

   rac_ptr_g->is_on_hplmn = KAL_FALSE;

   rac_ptr_g->current_cell_rat.cell_info.cell_id = 0;

#ifdef UNIT_TEST
    rac_ptr_g->fake_hw_umts_band_capability = 0x00B3; //mtk02475: MODIS UT for UMTS band customization, default HW band is 1/2/5/6/8
    rac_ptr_g->fake_hw_gsm_band_capability  = 0xff; //mtk03643: default all on
#endif /* UNIT_TEST */

#ifdef __MONITOR_PAGE_DURING_TRANSFER__
   rac_ptr_g->gprs_transfer_preference = DATA_PREFER;
#endif
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
   rac_ptr_g->peer_gprs_transfer_preference = KAL_FALSE;
#endif

   rac_ptr_g->disable_international_roaming_support = KAL_FALSE;
   rac_ptr_g->disable_national_roaming_support = KAL_FALSE;
   rac_ptr_g->disable_hhplmn_search_support = KAL_FALSE;
   rac_ptr_g->roaming_broker_support = KAL_FALSE;
    }

    return KAL_TRUE;
}

//MAUI_02914482 [RAC] use evshed_create to replace new_evshed
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
#endif

/*****************************************************************************
* FUNCTION
*  rac_init
* DESCRIPTION
*   This function initialize the content of rac.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool rac_init(void)
{
   rac_context_struct * rac_ptr_g;
#ifdef __GEMINI__   
   kal_uint8 i;
#endif

#ifndef __GEMINI__
   rac_ptr_g = & rac_context;
   rac_ptr_global = rac_ptr_g;


   //MAUI_02914482 [RAC] use evshed_create to replace new_evshed
   rac_ptr_g->event_scheduler_ptr = evshed_create("RAC_Base_Timer", MOD_RAC, 0, 255);

#else

   for (i=0; i< MAX_SIM_NUM; i++)
   {
      rac_ptr_g  = & rac_context[i];
      rac_ptr_global = rac_ptr_g;
      rac_ptr_g->sim_interface = i;

      //MAUI_02914482 [RAC] use evshed_create to replace new_evshed
      rac_ptr_g->event_scheduler_ptr = evshed_create("RAC_Base_Timer", (module_type)RAC_MODULE_ID, 0, 255);
   }
   
#endif
   return  rac_reset();
}
#endif /*end of __MOD_RAC__*/

