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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	csmcc_utility.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for utilities used in CSM module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define CSMCC_UTILITY_C

//#include "kal_release.h"      	/* Basic data type */
#include "data_msgid.h"
#include "VT_msgid.h"

//#include "stack_common.h"  
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */
#include "kal_public_api.h"


//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */
//#include "app_buff_alloc.h"
#include "phb_defs.h"           //mtk01602:MAUI_394268 

#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
#include "ps2sat_struct.h"  /* Ripple SATCE */
#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
#include "mncc_struct.h"

#include "l3_inc_enums.h"
#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
#include "l4c_common_enum.h"
//#include "csmss_common_enums.h"
#include "sim_common_enums.h"
//#include "nvram_enums.h"
#include "l4_defs.h"
#include "csmcc_defs.h"
//#include "csmcc_bc_defs.h"
//#include "csmcc_bc_types.h"
extern void 
csmcc_send_ilm(void *local_para_ptr, msg_type ilm_id, module_type dst_id, peer_buff_struct *peer_buff);


#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)

//#include "rr_mpal_interface.h"
#include "csm_data_enums.h"

#include "ratcm_csd_interface.h"


#ifdef __CSD_T__
#include "csm2tdt_struct.h"
#endif

#ifdef __CSD_NT__
#include "data_xid_struct.h"
#include "csm2l2r_struct.h"
#endif

#ifdef __CSD_FAX__
#include "csm2t30_struct.h"
#endif

#endif /* __CSD_T__ || __CSD_NT__ || __CSD_FAX__*/

#include "csmcc_types.h"
#include "csmcc_aux_msg_hdlr.h"

#include "kal_trace.h"
#include "csm_trc.h"

//#include "custom_nvram_editor_data_item.h"

//#include "custom_data_account.h"
#ifdef __VIDEO_CALL_SUPPORT__
#include "csm2vt_struct.h"
//#include "vt_common_enum.h"
#endif /*__VIDEO_CALL_SUPPORT__*/

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_non_specific_general_types.h"
//#include "kal_common_defs.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
//#include "ps_public_struct.h"

#ifdef __GEMINI__
extern   kal_uint8 csmcc_get_cc_sim_interface(void);
#endif /*__GEMINI__*/

extern kal_bool cm_dtmf_p_w_switch(void);
#ifdef __AOC_SUPPORT__
extern kal_bool custom_is_acm_exceed_boundary (kal_uint32 acm_value);
extern kal_uint32 custom_cc_get_acm_bound(void);
extern kal_uint32 custom_cc_get_acm_ccwe_time(void); /* MAUI_01637672 support CCWE */
extern void csmcc_aoc_timeout_handler(kal_uint32 data);
#endif
extern void csmcc_dtmf_pause_timeout_handler(kal_uint32 data);

extern void csmcc_rlc_timeout_handler(kal_uint32 data);

#ifdef __FWP_NC_LAI_INFO__
extern kal_uint8 cm_get_cell_lock_string(kal_uint8** prefix); //[MAUI_751970]
#endif /*__FWP_NC_LAI_INFO__*/
#ifdef __CSMCC_CALLCONFIRM_TIMER__
extern void csmcc_call_confirm_timeout_handler(kal_uint32 data);
#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_call_state
* DESCRIPTION                                                           
*    This function is used to update call state
*
* CALLS  
*	csmcc_update_call_state(kal_uint8 call_id, csmcc_call_state_enum state)
*
* PARAMETERS
*  call_id  IN first variable, used as input
*  state    IN second variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_update_call_state(kal_uint8 call_id, csmcc_call_state_enum state)
{
   ASSERT((call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1));
   
   csmcc_ctab_g.call_tab[call_id-1].call_state = state; 
         
   kal_brief_trace(TRACE_STATE, 
             CSMCC_TRACE_STATE_CHANGE, 
             call_id, 
             GET_CALL_STATE(call_id), 
             GET_MPTY_STATE(call_id), 
             CALL_DATA(call_id, src_id));

}  /* end of csmcc_update_call_state */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_set_call_state
* DESCRIPTION                                                           
*    This function is used to set call state
*
* CALLS  
*	csmcc_set_call_state(kal_uint8 call_id, csmcc_call_state_enum state)
*
* PARAMETERS
*  call_id  IN first variable, used as input
*  state    IN second variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_set_call_state(kal_uint8 call_id, csmcc_call_state_enum state)
{
   csmcc_update_call_state(call_id, state);
   csmcc_send_l4c_update_call_state_ind(call_id, state);
}/* end of csmcc_set_call_state */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_ccbs_invoked_call
* DESCRIPTION                                                           
*    This function used to check if the call is a ccbs invoked call.
*
* CALLS  
*	csmcc_is_ccbs_invoked_call(kal_uint8 call_id)
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool
csmcc_is_ccbs_invoked_call(kal_uint8 call_id)
{
   return ((kal_bool)(CALL_DATA(call_id,ccbs_status) == CSMCC_CCBS_INVOKED));   

} /* end of csmcc_is_ccbs_invoked_call */

#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_any_call_exist
* DESCRIPTION                                                           
*    This function used to check if any call exists
*
* CALLS  
*	csmcc_is_any_call_exist()
* PARAMETERS
*
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_any_call_exist(void)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif /*__GEMINI__*/
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK)
      {
         return KAL_TRUE;
      }
   }
   
   return KAL_FALSE;

} /* end of csmcc_is_any_call_exist */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_any_call_except_waiting_exist
* DESCRIPTION                                                           
*    This function used to check if any call except waiting call exists
*
* CALLS  
*	csmcc_is_any_call_exist()
* PARAMETERS
*
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_any_call_except_waiting_exist(void)
{
   kal_uint8 call_index;
   csmcc_call_orig_enum call_orig;
   csmcc_call_state_enum call_state;

   /*check if there's any waiting call exist, because cw_flag will be reset to False when "All call except waiting call" is released
       we use call state and call_orig to find waiting call */
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      call_orig = CALL_DATA(call_index,call_orig);
      call_state = GET_CALL_STATE(call_index);
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK && 
	  	!(call_orig == CSMCC_MT_CALL && call_state == CSMCC_CALL_INIT))
      {
         return KAL_TRUE;
      }
   }
   
   return KAL_FALSE;

} /* end of csmcc_is_any_call_exist */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_the_only_call
* DESCRIPTION                                                           
*    This function used to check if any call exists
*
* CALLS  
*	csmcc_is_the_only_call(kal_uint8 call_id)
* PARAMETERS
*
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_the_only_call(kal_uint8 call_id)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(call_index == call_id)
	  	 continue;
	  
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK)
      {
         return KAL_FALSE;
      }
   }
   
   return KAL_TRUE;

} /* end of csmcc_is_the_only_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_attach_speech
* DESCRIPTION                                                           
*    This function is used to inform L4C to turn on speech
*
* CALLS  
*	csmcc_attach_speech(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_attach_speech(void)
{
   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CHANNEL_ATTACH_STATUS, 
            CSMCC_PTR->attach_status, CSMCC_PTR->channel_info);
      
   if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON
      && CSMCC_PTR->channel_info == CSMCC_SPEECH_TCH)
   {
      csmcc_send_l4c_attach_ind(CSMCC_PTR->channel_mode, KAL_FALSE);
      CSMCC_PTR->attach_status = CSMCC_SPEECH_ON;
   }
   else if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON)
   {
      CSMCC_PTR->attach_status = CSMCC_ATTACH_REQ;
   }

} /* end of csmcc_attach_speech */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_detach_speech
* DESCRIPTION                                                           
*    This function used to inform L4C to turn off speech if necessary
*
* CALLS  
*	csmcc_detach_speech()
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_detach_speech(void)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool speech_off = KAL_FALSE;
   
   /* add by johnnie 2003/11/03 for turn-off speech in case of call re-establihsment */
   if(CSMCC_PTR->call_reest == KAL_TRUE)
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      /* reset attach status */
      CSMCC_PTR->attach_status = CSMCC_DETACH;
      return;
   }
   /* end by johnnie 2003/11/03 for turn-ff speech in case of call re-establihsment */
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
      {
         continue;
      }      
   
      switch(GET_CALL_STATE(call_index))
      {
         case CSMCC_CALL_INIT:  
         
            if(CALL_DATA(call_index,call_orig) == CSMCC_MT_CALL)
            {
               /* for mt call exists, shall detach speech, so L4C can play ring 
                   if it becomes incoming call. */
                   
               speech_off = KAL_TRUE;
            }
            else 
            {
               /* Ripple, for 1H, 1 Outgoing with invalid number 
               (Rx Call Proceeding and PROGRESS, "Your dial number 
               is invalid." ). Then 1H released => shall not detach speech, 
               or can't hear sound of the outgoing. So if any ourgoing call 
               exists, shall not detach speech. */
               
               return;
            }
            
            break;                        
                  
         case CSMCC_CALL_ALERT:
         case CSMCC_CALL_ACCEPT:
         case CSMCC_CALL_ACTIVE:
         case CSMCC_CALL_HOLD_REQ:
         case CSMCC_CALL_RETRIEVE_REQ:
         case CSMCC_MS_CALL_DISC:
         case CSMCC_NW_CALL_DISC:         
            /* nothing to do if any call is in states above */
            return;
         
         case CSMCC_CALL_HOLD:
         case CSMCC_NW_CALL_DISC_ON_HOLD:         
         case CSMCC_CALL_MODIFY:
            /* only turn off speech */
            speech_off = KAL_TRUE;
            break;
         default: 
            break;
      }
   }  

   if(speech_off == KAL_TRUE)
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      CSMCC_PTR->attach_status = CSMCC_SPEECH_OFF;
   }
   else
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      /* reset attach status */  
      CSMCC_PTR->attach_status = CSMCC_DETACH;
   }

} /* end of csmcc_detach_speech */

/* MAUI_01643590 */
/* UK_FT_weird_sound, detach_ind should go prior than call_rel_ind */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_check_if_detach_speech
* DESCRIPTION                                                           
*    This function is used to check if speech need to be detached
*
* CALLS  
*	csmcc_check_if_detach_speech()
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_check_if_detach_speech(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool speech_off = KAL_FALSE;
   
   /* add by johnnie 2003/11/03 for turn-off speech in case of call re-establihsment */
   if(CSMCC_PTR->call_reest == KAL_TRUE)
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      /* reset attach status */
      CSMCC_PTR->attach_status = CSMCC_DETACH;
      return;
   }
   /* end by johnnie 2003/11/03 for turn-ff speech in case of call re-establihsment */
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      /*skip self check*/
      if((GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
	  	|| (call_index == call_id))
      {
         continue;
      }      
   
      switch(GET_CALL_STATE(call_index))
      {
         case CSMCC_CALL_INIT:  
         
            if(CALL_DATA(call_index,call_orig) == CSMCC_MT_CALL)
            {
               /* for mt call exists, shall detach speech, so L4C can play ring 
                   if it becomes incoming call. */
                   
               speech_off = KAL_TRUE;
            }
            else 
            {
               /* Ripple, for 1H, 1 Outgoing with invalid number 
               (Rx Call Proceeding and PROGRESS, "Your dial number 
               is invalid." ). Then 1H released => shall not detach speech, 
               or can't hear sound of the outgoing. So if any ourgoing call 
               exists, shall not detach speech. */
               
               return;
            }
            
            break;                        
                  
         case CSMCC_CALL_ALERT:
         case CSMCC_CALL_ACCEPT:
         case CSMCC_CALL_ACTIVE:
         case CSMCC_CALL_HOLD_REQ:
         case CSMCC_CALL_RETRIEVE_REQ:
         case CSMCC_MS_CALL_DISC:
         case CSMCC_NW_CALL_DISC:         
            /* nothing to do if any call is in states above */
            return;
         
         case CSMCC_CALL_HOLD:
         case CSMCC_NW_CALL_DISC_ON_HOLD:         
         case CSMCC_CALL_MODIFY:
            /* only turn off speech */
            speech_off = KAL_TRUE;
            break;
         default: 
            break;
      }
   }  

   if(speech_off == KAL_TRUE)
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      CSMCC_PTR->attach_status = CSMCC_SPEECH_OFF;
   }
   else
   {
      /* turn off speech */
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
      {
         csmcc_send_l4c_detach_ind(KAL_FALSE);
      }
      /* reset attach status */  
      CSMCC_PTR->attach_status = CSMCC_DETACH;
   }

} /* end of csmcc_check_if_detach_speech */
#ifdef __GEMINI__
/*************************************************************************
* FUNCTION                                                            
* csmcc_is_call_table_availible
* DESCRIPTION                                                           
*   This function used to check if other SIM has occupied the call context or CC has been allocated
*   
*
* CALLS  
* csmcc_is_call_table_availible
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_call_table_availible(void)
{
   CSMCC_PTR_G_TO_L
   if ((csmcc_ctab_mod_id != 0) && (csmcc_ctab_mod_id != (CSMCC_MOD_ID)))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }

   /* race condition that CC has been allocated */
   if ((csmcc_ctab_mod_id == 0) &&
       (csmcc_get_cc_sim_interface() != CSMCC_DEFAULT_INTERFACE) &&
       (CSMCC_PTR->csmcc_sim_interface != csmcc_get_cc_sim_interface()))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
   
   return KAL_TRUE;
}
#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_alloc_call_context
* DESCRIPTION                                                           
*   This function used to allocate a empty call context for a new call
*   (MO or MT), and output the call id of the call context.
*
* CALLS  
*	csmcc_alloc_call_context(kal_uint8* call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as returns
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_alloc_call_context(kal_uint8* call_id_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool first_call = KAL_TRUE;
   
   //mtk01602, 070610: ACM bug
   /*TS 22.024 v5.0.0 Sec. 4.2.1, CCM shall hold the value of the last call AOC, until the initiation of an
      outgoing call or acceptance of an incoming call, at which point it shall be reset to zero.*/
   //if(csmcc_is_any_call_exist() == KAL_FALSE)	
   //CSMCC_PTR->last_ccm = 0;  
   
#ifdef __GEMINI__
   /*Check if the sim is occupied or CC has occupied the other SIM ,
           put before allocate mod_id in case after csmcc_is_sim_availible()
           context switch to other higher peiority module ,ex CC */
   if (csmcc_is_call_table_availible() == KAL_FALSE)
   {
          return CSMCC_ERROR;
   }
   csmcc_ctab_mod_id = CSMCC_MOD_ID;
#endif
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE )
      {
         break;
      }
      first_call = KAL_FALSE;
   }

   if(call_index == CSMCC_MAX_CALL_NUM+1)
   {
      /* no free call context is found */
      return CSMCC_ERROR;
   }
   else
   {   	
      *call_id_ptr = call_index;
      SET_CALL_STATUS(call_index, CSMCC_CALL_BLK)
      /* MAUI_01685482 */
      //only update the state but not notify L4C.
      //SET_CALL_STATE(call_index, CSMCC_CALL_IDLE)
      csmcc_update_call_state(call_index, CSMCC_CALL_IDLE);
   }

   if(first_call == KAL_TRUE)
   {
      csmcc_send_l4c_call_info_ind(KAL_TRUE);
      
   #ifdef __SAT__
      csmcc_send_sim_call_status_ind(KAL_TRUE);
   #endif
   
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_alloc_call_context */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_dtmf
* DESCRIPTION                                                           
*    This function is used to reset dtmf information in call context.
*
* CALLS  
*	csmcc_reset_dtmf(csmcc_dmtf_struct *dtmf_ptr)
*
* PARAMETERS
*	dtmf_ptr	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_dtmf(csmcc_dtmf_struct *dtmf_ptr)
{
   if(dtmf_ptr->digit != NULL)
   {
      free_ctrl_buffer(dtmf_ptr->digit);
      dtmf_ptr->digit = NULL;
   }
   dtmf_ptr->cur_digit_index = 0;
   dtmf_ptr->count = 0;
   
} /* end of csmcc_reset_dtmf */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_inv_info
* DESCRIPTION                                                           
*    This function is used to reset SS invoke information in call context.
*
* CALLS  
*	csmcc_reset_inv_info(csmcc_inv_info_struct *inv_info_ptr)
*
* PARAMETERS
*	inv_info_ptr	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_inv_info(csmcc_inv_info_struct *inv_info_ptr)
{
   inv_info_ptr->used = KAL_FALSE;
   inv_info_ptr->inv_id = 0;
   inv_info_ptr->opcode = 0;
         
} /* end of csmcc_reset_inv_info */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_call_context
* DESCRIPTION                                                           
*    This function is used to reset call context.
*
* CALLS  
*	csmcc_reset_call_context(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_call_context(kal_uint8 call_id)
{
   
   /* local val declare */
   csmcc_call_context_struct *call_context_ptr;
   
   call_context_ptr = &(CALL_ENTRY(call_id));
   
   call_context_ptr->src_id = LMMI_SRC;
   call_context_ptr->call_id = CSMCC_INVALID_CALL_ID;   
   call_context_ptr->ti = CSMCC_INVALID_TI;
   call_context_ptr->number_present = KAL_FALSE;
   call_context_ptr->number.addr_length = 0;
   kal_mem_set(call_context_ptr->number.addr_bcd, 
               0xff, 
               sizeof(call_context_ptr->number.addr_bcd));   
#ifdef __SUBADDR_SUPPORT__
   call_context_ptr->sub_addr_present = KAL_FALSE;
   kal_mem_set(&(call_context_ptr->sub_addr), 
               0, 
               sizeof(l4ccsm_cc_sub_addr_struct));   
#endif
   call_context_ptr->dtmf_mode = CSMCC_INVALID_DTMF_MODE;
   call_context_ptr->wait_stop_dtmf = KAL_FALSE;
   csmcc_reset_dtmf(&(call_context_ptr->dtmf));
   call_context_ptr->cw_flag = KAL_FALSE;
   call_context_ptr->cug_info = KAL_FALSE;
   call_context_ptr->clir_info = CSMCC_INVALID_CLIR_INFO;
#ifdef __EMLPP_SUPPORT__
   call_context_ptr->call_priority = CSMCC_NO_CALL_PRIORITY;
#endif 
   call_context_ptr->call_state = CSMCC_CALL_IDLE;
   call_context_ptr->pre_call_state = CSMCC_CALL_IDLE;
#ifdef __CCBS_SUPPORT__   
   call_context_ptr->ccbs_status = CSMCC_CCBS_NONE;   
#endif
   call_context_ptr->mpty_state = CSMCC_MPTY_IDLE;
   call_context_ptr->call_mode = CSMCC_INVALID_CALL_MODE;
   call_context_ptr->call_orig = CSMCC_ORIG_NONE;
   call_context_ptr->cur_call_type = 0;
   call_context_ptr->bc[0] = CSMCC_INVALID_CALL_TYPE;
   call_context_ptr->bc[1] = CSMCC_INVALID_CALL_TYPE;
#ifdef __AOC_SUPPORT__
   call_context_ptr->ccm_per_call = 0;
   call_context_ptr->aoc_cdur = 0;
#endif
   #ifdef __REL4__
   call_context_ptr->service_category = 0;
   #endif
   csmcc_reset_inv_info(&(call_context_ptr->inv_info));
   
   if(call_context_ptr->local_para_ptr != NULL)
   {
	   /*MOLY00010036*/
	   kal_uint8 i;
	   mncc_setup_ind_struct *setup_ind_ptr = (mncc_setup_ind_struct*)(call_context_ptr->local_para_ptr);
	   if (setup_ind_ptr->facilityP)
       {
		   for(i = 0; i< setup_ind_ptr->facility.num_of_components; i++)
	       {
	           if(setup_ind_ptr->facility.component[i])
	           {
	              cc_ss_comp_del(setup_ind_ptr->facility.component[i]);
	              setup_ind_ptr->facility.component[i] = NULL;            
	           }
	        }
	   }
       free_local_para(call_context_ptr->local_para_ptr);	   
       call_context_ptr->local_para_ptr = NULL;
   }
   #ifdef __SAT__
   call_context_ptr-> sat_call_type = 0; 
   call_context_ptr->type_of_modification = SIMCALLCONTROL_NOMODIFY;
   #endif

   call_context_ptr->rlc_timer.call_id  = CSMCC_INVALID_CALL_ID;
   call_context_ptr->rlc_timer.event_id = NULL;
   call_context_ptr->csmcc_rlc_status   = RLC_TIMER_INIT;
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_dealloc_call_context
* DESCRIPTION                                                           
*   This function used to deallocate a used call context.
*
* CALLS  
*	csmcc_dealloc_call_context(kal_uint8 call_id)
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_dealloc_call_context(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_uint8 call_num = 0;
   kal_uint8 waiting_call_id = CSMCC_INVALID_CALL_ID;   
   kal_uint8 mpty_num = 0;
   //kal_uint8 mpty_call_id;
   
   ASSERT((call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1))   ;
 
   /* store last call CCM */
   //CSMCC_PTR->last_ccm = CALL_DATA(call_id, ccm);   
   /*mtk00924_060925: last call cost will be total cost of calls until all calls are disconnected*/
#ifdef __AOC_SUPPORT__
   CSMCC_PTR->last_ccm += CALL_DATA(call_id, ccm_per_call);   
#endif/*__AOC_SUPPORT__*/
         
   /* MAUI_01645808 */
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if (GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
      {
         continue;
      }
      if (call_index != call_id)
         call_num++;
   }

   if ((call_num == 0) && (GET_CALL_STATUS(call_id) == CSMCC_CALL_BLK))
   {
      csmcc_send_l4c_cpi_ind(call_id,
                             CSMCC_ALL_CALLS_DISC_MSG,
                             KAL_FALSE,
                             KAL_FALSE,
                             CSMCC_NO_CAUSE,
                             0);
   }
#ifdef __CSMCC_REJWAIT_CALL__   
   if (GET_CALL_STATE(call_id)==CSMCC_CALL_IDLE && CALL_DATA(call_id, call_orig) == CSMCC_MT_CALL)
   {
       //MT call but CSMCC_CALL_IDLE, means MT call is reject before MMI notice, don't need to send MMI ECPI
       csmcc_update_call_state(call_id,CSMCC_CALL_IDLE);
   }
   else
#endif
   {
       SET_CALL_STATE(call_id, CSMCC_CALL_IDLE);
   }

   /* reset the call_num for the following check */
   call_num = 0;

   /* reset call context */
   SET_CALL_STATUS(call_id, CSMCC_CALL_FREE)
   csmcc_reset_call_context(call_id);  
    
  if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
  {
      CSMCC_PTR->csmcc_emergency_call_id = CSMCC_INVALID_CALL_ID;
  }
#if defined(__ECALL_SUPPORT__)
  if (call_id == CSMCC_PTR->csmcc_ecall_id)
  {
      CSMCC_PTR->csmcc_ecall_id = CSMCC_INVALID_CALL_ID;
      CSMCC_PTR->ecall_type = ECALL_DISABLE;
  }
#endif  
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
      {
         continue;
      }
      
      call_num++;

      if(CALL_DATA(call_index, cw_flag) == KAL_TRUE)
      {
         waiting_call_id = call_index;
      }         
      else if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE)
      {
         //mpty_call_id = call_index;
         mpty_num++;
      }

   }

#if 0 /* ignore this step for test case 31.4.2.1.4 */
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

   /* if the last call is released, then reset the call reestablishment 
      on going flag
   */

   if(call_num == 0)
   {
      CSMCC_PTR->call_reest = KAL_FALSE;

#ifdef __GEMINI__
      csmcc_ctab_mod_id = 0;
#endif

      csmcc_send_l4c_call_info_ind(KAL_FALSE);
      
      #if defined (__CCM_NO_RESET__) && defined (__AOC_SUPPORT__) 
      csmcc_send_nvram_als_req(CSMCC_PTR->als.line_id, CSMCC_PTR->last_ccm);
      #endif
	  
#ifdef __SAT__
      csmcc_send_sim_call_status_ind(KAL_FALSE);
#endif
   }
   else if(call_num == 1 && waiting_call_id != CSMCC_INVALID_CALL_ID)
   {
      /* clear waiting call flag if there exists only one waiting call and
         this waiting call won't be accepted right later */
      if(!(CSMCC_PTR->aux_req == CSMCC_ACCEPT_WAITING_CALL_REQ
         && CSMCC_PTR->aux_req_call_id == waiting_call_id))
      {         
         CALL_DATA(waiting_call_id, cw_flag) = KAL_FALSE;
      }
   }

} /* end of csmcc_dealloc_call_context */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_call
* DESCRIPTION                                                           
*    This function used to find a call of which call originating type
*    and call state match the condition specified by parameters.
*
* CALLS  
*	csmcc_find_call(csmcc_call_orig_enum call_orig, 
*                       kal_uint16 call_state,
*                       kal_uint8 *call_id_ptr)
* PARAMETERS
*	call_orig 	IN	first  variable, used as input
*	call_state	IN	second veriable, used as input
*	call_id_ptr	OUT	third  veriable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_call(csmcc_call_orig_enum orig,
                            kal_uint16 state,
                                 kal_uint8 *call_id_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif /*__GEMINI__*/
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
         continue;
         
      if((orig == CSMCC_ORIG_NONE 
         || (CALL_DATA(call_index, call_orig) & orig) > 0)
         && (GET_CALL_STATE(call_index) & state) > 0)
      {
         if(call_id_ptr != NULL)
         {
            *call_id_ptr = call_index;
         }
         return CSMCC_NO_ERROR;
      }
   }
   
   return CSMCC_ERROR;

} /* end of csmcc_find_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_call_id_from_ti
* DESCRIPTION                                                           
*    This function used to find the call id according ti
*
* CALLS  
*	
* PARAMETERS
*	
* RETURNS
*	the actual call id
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_uint8 csmcc_find_call_id_from_ti(kal_uint8 ti)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index <= CSMCC_MAX_CALL_NUM; call_index++)
   {
      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
         continue;
      
      if (CALL_DATA(call_index, ti) == ti)
      {
         kal_brief_trace(TRACE_INFO, CSMCC_TRACE_TI_AND_CALL_ID, ti, call_index);
         return call_index;
      }         
   }

   /* can't find the call id corresponding to the ti. */
   kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_TI_AND_CALL_ID, ti, call_index);
   
   return CSMCC_INVALID_CALL_ID;   
}


/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_waiting_call
* DESCRIPTION                                                           
*    This function used to find a current waiting call 
*
* CALLS  
*	csmcc_find_call(kal_uint8 *call_id_ptr)
*
* PARAMETERS
*	call_id_ptr	OUT	first  veriable, used as output
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_waiting_call(kal_uint8 *call_id_ptr)
{
   kal_uint8 call_index;
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(CALL_DATA(call_index, cw_flag) == KAL_TRUE)
      {
         if(call_id_ptr != NULL)
         {
            *call_id_ptr = call_index;
         }
         return CSMCC_NO_ERROR;
      }
   }
   
   return CSMCC_ERROR;
   
}   /* end of csmcc_find_waiting_call */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_ccbs_call
* DESCRIPTION                                                           
*    This function used to find a ccbs call.
*
* CALLS  
*	csmcc_find_call(csmcc_ccbs_status_enum ccbs_status,
*                       kal_uint8 *call_id_ptr)
*                       
* PARAMETERS
*	ccbs_status	IN	first variable, used as input 
*	*call_id_ptr	OUT	second veriable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_ccbs_call(csmcc_ccbs_status_enum ccbs_status,
                                      kal_uint8 *call_id_ptr)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(CALL_DATA(call_index,ccbs_status) == ccbs_status)
      {
         *call_id_ptr = call_index;
         return CSMCC_NO_ERROR;
      }
   }
   
   /* no CCBS call which meets requirement exists */
   return CSMCC_ERROR;

} /* end of csmcc_find_ccbs_call */

#endif /*__CCBS_SUPPORT__*/
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_aoc_call
* DESCRIPTION                                                           
*    This function used to find a ccbs call.
*
* CALLS  
*	csmcc_find_aoc_call(csmcc_ccbs_status_enum ccbs_status,
*                       kal_uint8 *call_id_ptr)
*                       
* PARAMETERS
*	ccbs_status	IN	first variable, used as input 
*	*call_id_ptr	OUT	second veriable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_other_aoc_call(kal_uint8 call_id)
{
   kal_uint8 call_index;

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(call_index != call_id)
      {
      		if(CALL_DATA(call_index,aoc_cdur) != 0)
      		{
         		return CSMCC_NO_ERROR;
      		}
      }
   }
   
   /* no AoC call which meets requirement exists */
   return CSMCC_ERROR;

} /* end of csmcc_find_ccbs_call */
#endif

/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_other_call_to_be_accepted
* DESCRIPTION                                                           
*    This function used to check if 
*
* CALLS  
*	ccsmcc_find_other_call_to_be_accepted(kal_uint8 *accept_req
*                                        kal_uint8 *accept_call_id)
* PARAMETERS
*	accept_req	OUT	first variable, used as output
*	accept_call_id	OUT	second variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_other_call_to_be_accepted(kal_uint8 *accept_req,
                                                 kal_uint8 *accept_call_id)
{

   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   csmcc_ret_t ret_val;

   csmcc_crss_req_enum opcode = CSMCC_PTR->crss_req;

   /* MAUI_01079884 
    * [CSMCC][Revise] Add new op code for WAITING/CCBS/HELD in crss_req_enum
    * for CSMCC_HOLD_ACTIVE_AND_ACCEPT and CSMCC_REL_ACTIVE_AND_ACCEPT
    * accept the call at best effort: waiting -> ccbs -> held
    * for the others, accept the call by specific opcode
    */
         
   if (opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT_WAITING ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING)
   {
      /* find a waiting call */
      ret_val = csmcc_find_waiting_call(&call_id);
      
      if(ret_val == CSMCC_NO_ERROR) 
      {
         /* a waiting found */
         *accept_req = CSMCC_ACCEPT_WAITING_CALL_REQ;
         *accept_call_id = call_id;

         return CSMCC_NO_ERROR;
      }
   }

   #ifdef __CCBS_SUPPORT__
   if (opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT_CCBS ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_CCBS)
   {
      /* find a CCBS call */   
      ret_val = csmcc_find_ccbs_call(CSMCC_CCBS_INVOKED, &call_id);
      
      if(ret_val == CSMCC_NO_ERROR)
      {
         /* a CCBS call found */
         *accept_req = CSMCC_ACCEPT_CCBS_CALL_REQ;
         *accept_call_id = call_id;
         return CSMCC_NO_ERROR;
      }
   }
   #endif /*__CCBS_SUPPORT__*/
   
   if (opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT ||
       opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_HELD)
   {
      /* find a held call */
      ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_HOLD, &call_id);
      
      if(ret_val == CSMCC_NO_ERROR)
      {
         /* a held call found */
         *accept_req= CSMCC_ACCEPT_HELD_CALL_REQ;
         *accept_call_id = call_id;
         
         return CSMCC_NO_ERROR;
      }   
   }

   *accept_req = CSMCC_NO_REQ;
   *accept_call_id = CSMCC_INVALID_CALL_ID;

   return CSMCC_ERROR;
   
} /* end of csmcc_find_other_call_to_be_accepted */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_in_call
* DESCRIPTION                                                           
*   This function used to get call id of current in-call.
*
* CALLS  
*	csmcc_find_in_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_find_in_call(kal_uint8 *call_id_ptr)
{ 
   kal_uint8 call_index;
   csmcc_call_orig_enum call_orig;
   csmcc_call_state_enum call_state;

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
      {
         continue;
      }
        
      call_orig = CALL_DATA(call_index,call_orig);
      call_state = GET_CALL_STATE(call_index);

      if((call_orig == CSMCC_MO_CALL && call_state == CSMCC_CALL_INIT)
         ||(call_orig == CSMCC_MO_CALL && call_state == CSMCC_CALL_ALERT)
         ||(call_orig == CSMCC_MT_CALL && call_state == CSMCC_CALL_INIT)
         ||(call_orig == CSMCC_MT_CALL && call_state == CSMCC_CALL_ACCEPT)         
         ||(call_state == CSMCC_NW_CALL_DISC))
      {
         *call_id_ptr = call_index;
         return CSMCC_NO_ERROR;
      }
   }
   
   /* if no call is found until here, then find active call */
   if(csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE|CSMCC_CALL_MODIFY, call_id_ptr) == CSMCC_NO_ERROR)//cosine:__REL5__
   {
      return CSMCC_NO_ERROR;
   }
   
   return CSMCC_ERROR;

} /* end of csmcc_find_in_call */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_mo_call_context
* DESCRIPTION                                                           
*    This function is used to update call context. The update mainly save
*    connected number and subaddress.
*
* CALLS  
*	csmcc_update_mo_call_context(mncc_setup_cnf_struct *setup_cnf_ptr)
*
* PARAMETERS
*	*setup_cnf_ptr	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_update_mo_call_context(mncc_setup_cnf_struct *setup_cnf_ptr)
{
   kal_uint8 call_id;      
   csmcc_call_context_struct *call_context_ptr;
   kal_uint8 presentation_indicator = 0;
   kal_uint8 screening_indicator = 0;

   call_id = setup_cnf_ptr->call_id;   

   call_context_ptr = &(CALL_ENTRY(call_id));
         
   if(setup_cnf_ptr->connected_numP == KAL_TRUE)   
   {                                           
      if(setup_cnf_ptr->connected_num.addr_ind_present)
      {
         presentation_indicator = (setup_cnf_ptr->connected_num.addr_ind & 0x60);
	  screening_indicator = (setup_cnf_ptr->connected_num.addr_ind & 0x03);   
		 
      }
      
      /* if not Presentation restricted and Number not available due to interworking */
      //if(presentation_indicator != CC_PRESENTATION_RESTRICTED
      //   && presentation_indicator != CC_NUMBER_UNAVAILABLE)
      if(presentation_indicator == CC_PRESENTATION_ALLOWED ||
	  (presentation_indicator == CC_PRESENTATION_RESTRICTED && screening_indicator == CC_SCR_NW))      
      {
         call_context_ptr->number_present = KAL_TRUE;      
         call_context_ptr->number = setup_cnf_ptr->connected_num.addr;
      }
   }
#ifdef __SUBADDR_SUPPORT__
   if(setup_cnf_ptr->connected_sub_addrP == KAL_TRUE)
   {
      call_context_ptr->sub_addr_present = KAL_TRUE;      
      call_context_ptr->sub_addr = setup_cnf_ptr->connected_sub_addr;
   }
#endif
   
} /* end of csmcc_update_mo_call_context */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_start_dtmf_pause_timer
* DESCRIPTION                                                           
*    This function used to implement 'p' when sending DTMF. The unit of 
*    duration is 1 msec.
*
* CALLS  
*	csmcc_start_dtmf_pause_timer(kal_uint32 duration)
*
* PARAMETERS
*	duration	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_start_dtmf_pause_timer(kal_uint8 call_id, kal_uint32 duration)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct   *timer_ptr;
   csmcc_timer_hdlr_t	timer_hdlr = NULL;

   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_start_dtmf_pause_timer);

   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_DTMF_PAUSE_TIMER]);
   timer_ptr->call_id = call_id;
   timer_ptr->timer_duration = duration;
   timer_hdlr = csmcc_dtmf_pause_timeout_handler;
   
   timer_ptr->event_id = evshed_set_event(
   	(CSMCC_PTR->csmcc_timer.evshed_ptr), 
    (kal_timer_func_ptr)timer_hdlr,
   	timer_ptr,
   	duration);

   kal_trace(TRACE_INFO, 
   	     CSMCC_TRACE_TIMER_STATUS,
   	     timer_ptr->call_id,
   	     timer_ptr->event_id,
   	     timer_ptr->timer_duration);

} /* end of csmcc_start_dtmf_pause_timer */

#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_start_aoc_timer
* DESCRIPTION                                                           
*    This function is used to start AocC increase SIM timer
*    
*
* CALLS  
*	csmcc_start_aoc_timer(kal_uint32 duration)
*
* PARAMETERS
*	duration	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_start_aoc_timer(kal_uint8 call_id, kal_uint32 duration)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;
   csmcc_timer_hdlr_t	timer_hdlr = NULL;

   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_start_aoc_timer);

   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_AOC_TIMER]);
   timer_ptr->call_id = call_id;
   timer_ptr->timer_duration = duration;
   timer_hdlr = csmcc_aoc_timeout_handler;
   
   timer_ptr->event_id = evshed_set_event(
   	(CSMCC_PTR->csmcc_timer.evshed_ptr), 
    (kal_timer_func_ptr)timer_hdlr,
   	timer_ptr,
   	duration);

   kal_trace(TRACE_INFO, 
   		     CSMCC_TRACE_TIMER_STATUS,
   			 timer_ptr->call_id,
   			 timer_ptr->event_id,
   			 timer_ptr->timer_duration);

} /* end of csmcc_start_aoc_timer */
#endif /*__AOC_SUPPORT__*/
#ifdef __CSMCC_CALLCONFIRM_TIMER__
/*************************************************************************
* FUNCTION                                                            
* csmcc_start_call_confirm_timer
* DESCRIPTION                                                           
*    After SETUP MSG. with signal flag = false , Call confirm is sent but will wait for channel to start
*    ALERTING and notify user, if 30 secs out, we should disconnect the call 
*
* CALLS  
*csmcc_start_call_confirm_timer(kal_uint8 call_id, kal_uint32 duration)
*
* PARAMETERS
*	duration	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_start_call_confirm_timer(kal_uint8 call_id, kal_uint32 duration)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;
   csmcc_timer_hdlr_t	timer_hdlr = NULL;

   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_start_call_confirm_timer);

   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_CALL_CONFIRM_TIMER]);
   timer_ptr->call_id = call_id;
   timer_ptr->timer_duration = duration;
   timer_hdlr = csmcc_call_confirm_timeout_handler;
   
   timer_ptr->event_id = evshed_set_event(
   	(CSMCC_PTR->csmcc_timer.evshed_ptr), 
    (kal_timer_func_ptr)timer_hdlr,
   	timer_ptr,
   	duration);

   kal_trace(TRACE_INFO, 
   		     CSMCC_TRACE_TIMER_STATUS,
   			 timer_ptr->call_id,
   			 timer_ptr->event_id,
   			 timer_ptr->timer_duration);

} /* end of csmcc_start_aoc_timer */
#endif 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_start_rlc_timer
* DESCRIPTION                                                           
*    This function is used to start CSMCC rlc timer
*    
*
* CALLS  
*	csmcc_start_rlc_timer(kal_uint8 call_id, kal_uint32 duration)
*
* PARAMETERS
*	call_id  	IN  first variable, used as input to specify which call
*	duration	IN	second variable, used as input to specify timer duration
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_start_rlc_timer(kal_uint8 call_id, kal_uint32 duration)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;
   csmcc_timer_hdlr_t	timer_hdlr = NULL;
  
   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_start_rlc_timer);

   /* APLS00531771, if there is a rlc timer already started, ignore this one. 
      avoid to duplicate rlc timer */
   if (CALL_DATA(call_id, csmcc_rlc_status) != RLC_TIMER_INIT)
   {
       return ;
   }

   timer_ptr = &(CALL_DATA(call_id, rlc_timer));
   timer_ptr->call_id = call_id;
   //timer_ptr->timer_id = 2;
   timer_ptr->timer_duration = duration;
   timer_hdlr = csmcc_rlc_timeout_handler;
   
   timer_ptr->event_id = evshed_set_event(
   	(CSMCC_PTR->csmcc_timer.evshed_ptr), 
    (kal_timer_func_ptr)timer_hdlr,
   	timer_ptr,
   	duration);

   CALL_DATA(call_id, csmcc_rlc_status) = RLC_TIMER_RUNNING;

   kal_trace(TRACE_INFO, 
   		     CSMCC_TRACE_TIMER_STATUS,
   			 timer_ptr->call_id,
   			 timer_ptr->event_id,
   			 timer_ptr->timer_duration);

} /* end of csmcc_start_rlc_timer */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_stop_auto_dtmf
* DESCRIPTION                                                           
*    This function is used to stop sending automatic DTMF tone 
*
* CALLS  
*	csmcc_stop_auto_dtmf(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_stop_auto_dtmf(kal_uint8 call_id)
{	
   CSMCC_PTR_G_TO_L
   csmcc_dtmf_struct *dtmf_ptr;
   csmcc_timer_struct *timer_ptr;
   
   kal_brief_trace(TRACE_GROUP_1, CSMCC_TRACE_CLEAR_DTMF, call_id);
      
   dtmf_ptr = &(CALL_DATA(call_id,dtmf));
   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_DTMF_PAUSE_TIMER]);
   
   if(timer_ptr->call_id == call_id)
   {
      /* stop possible dtmf pause timer */
     if(timer_ptr->event_id != NULL)
     {
        evshed_cancel_event(CSMCC_PTR->csmcc_timer.evshed_ptr,
       		           &(timer_ptr->event_id)); 		
     }
     timer_ptr->call_id = CSMCC_INVALID_CALL_ID;
   }

#ifdef __SAT__

   if ( (CSMCC_PTR->is_sat_dtmf == KAL_TRUE)
      && (dtmf_ptr->count > dtmf_ptr->cur_digit_index))
   {
      /* SAT dtmf is not sent completely, send sat_send_dtmf_cnf */          
      csmcc_send_l4c_sat_send_dtmf_cnf(CSMCC_PTR->dtmf_src_id,  
                                                SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD, 
                                                SAT_NOT_IN_SPEECH_MODE);
      
      CSMCC_PTR->is_sat_dtmf = KAL_FALSE;
      
   }
   
#endif
   /* DUMA00112321 remove dtmf reset */
   //CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;

   csmcc_reset_dtmf(dtmf_ptr);
   
   CALL_DATA(call_id,dtmf_mode) = CSMCC_INVALID_DTMF_MODE;
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_stop_auto_dtmf */
#ifdef __AOC_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_stop_aoc_timer
* DESCRIPTION                                                           
*    This function is used to stop update ACM of SIM 
*
* CALLS  
*	csmcc_stop_aoc_timer(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_stop_aoc_timer(kal_uint8 call_id)
{	
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;

   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_AOC_TIMER]);
   
   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_stop_aoc_timer);
   if(call_id != CSMCC_INVALID_CALL_ID)
   {
   	//ASSERT(timer_ptr->event_id != NULL);
      kal_trace(TRACE_INFO, 
   		        CSMCC_TRACE_TIMER_STATUS,
   			    timer_ptr->call_id,
   			    timer_ptr->event_id,
   			    timer_ptr->timer_duration);

      if(timer_ptr->event_id != NULL)
      {
   	    evshed_cancel_event(CSMCC_PTR->csmcc_timer.evshed_ptr,
   				&(timer_ptr->event_id));
   	  }	
      timer_ptr->call_id = CSMCC_INVALID_CALL_ID;
   }

   return CSMCC_NO_ERROR;

} /* end of csmcc_stop_aoc_timer */
/*************************************************************************
* FUNCTION                                                            
*csmcc_reset_cdur
* DESCRIPTION                                                           
*    This function is used to reset CDUR related parameter  
*
* CALLS  
*csmcc_reset_cdur(void)
*
* PARAMETERS
*
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_reset_cdur(void)
{
    CSMCC_PTR_G_TO_L
    CSMCC_PTR->cdur_present = KAL_FALSE;
    CSMCC_PTR->cdur = 0;
    CSMCC_PTR->updated_cdur_present = KAL_FALSE;
    CSMCC_PTR->updated_cdur =0;
    return CSMCC_NO_ERROR;
}
/*************************************************************************
* FUNCTION                                                            
*csmcc_increase_acm
* DESCRIPTION                                                           
*    This function is used to increase ACM to SIM 
*
* CALLS  
*csmcc_increase_acm(void)
*
* PARAMETERS
*
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_increase_acm(void)
{
    CSMCC_PTR_G_TO_L
    kal_uint8 data[ACM_LEN];
    
    if(CSMCC_PTR->acm > CSMCC_PTR->pre_acm)   
    {
        FILL_ACM_VAL(data, (CSMCC_PTR->acm - CSMCC_PTR->pre_acm))
        CSMCC_PTR->acm_before_write_sim = CSMCC_PTR->acm; 
        csmcc_send_sim_increase_req(FILE_ACM_IDX, data, ACM_LEN);                
    }
    return CSMCC_NO_ERROR;
}
#endif /*__AOC_SUPPORT__*/
#ifdef __CSMCC_CALLCONFIRM_TIMER__
/*************************************************************************
* FUNCTION                                                            
* csmcc_stop_call_confirm_timer
* DESCRIPTION                                                           
*    This function is used to stop call confirm timer
*
* CALLS  
* csmcc_stop_call_confirm_timer(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_stop_call_confirm_timer(kal_uint8 call_id)
{	
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;

   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[CSMCC_CALL_CONFIRM_TIMER]);
   
   if(call_id != CSMCC_INVALID_CALL_ID)
   {
   	//ASSERT(timer_ptr->event_id != NULL);
      kal_trace(TRACE_INFO, 
   		        CSMCC_TRACE_TIMER_STATUS,
   			    timer_ptr->call_id,
   			    timer_ptr->event_id,
   			    timer_ptr->timer_duration);

      if(timer_ptr->event_id != NULL)
      {
        kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_stop_call_confirm_timer);
   	    evshed_cancel_event(CSMCC_PTR->csmcc_timer.evshed_ptr,
   				&(timer_ptr->event_id));
        timer_ptr->event_id = NULL;
   	  }	
      timer_ptr->call_id = CSMCC_INVALID_CALL_ID;
      
   }

   return CSMCC_NO_ERROR;

} /* end of csmcc_stop_call_confirm_timer */
#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_stop_rlc_timer
* DESCRIPTION                                                           
*    This function is used to stop CSMCC rlc timer
*    
*
* CALLS  
*	csmcc_stop_rlc_timer(kal_uint8 call_id)
*
* PARAMETERS
*	duration	IN	second variable, used as input to specify timer duration
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_stop_rlc_timer(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;

   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_stop_rlc_timer);

   timer_ptr = &(CALL_DATA(call_id, rlc_timer));
   
   if((call_id != CSMCC_INVALID_CALL_ID) 
   	  && (CALL_DATA(call_id, csmcc_rlc_status) != RLC_TIMER_INIT)
   	  && (CALL_DATA(call_id, csmcc_rlc_status) != RLC_TIMER_EXPIRE))
   {
   		//ASSERT(timer_ptr->event_id != NULL);
   		kal_trace(TRACE_INFO, 
   		          CSMCC_TRACE_TIMER_STATUS,
   				  timer_ptr->call_id,
   				  timer_ptr->event_id,
   				  timer_ptr->timer_duration);
		
   		if(timer_ptr->event_id != NULL)
	   		evshed_cancel_event(CSMCC_PTR->csmcc_timer.evshed_ptr,
   								&(timer_ptr->event_id));
   		
   		timer_ptr->call_id = CSMCC_INVALID_CALL_ID;
   		timer_ptr->event_id = NULL;
   }

   /* Reset rlc_status to initial state.*/
   CALL_DATA(call_id, csmcc_rlc_status) = RLC_TIMER_INIT;

   return CSMCC_NO_ERROR;

} /* end of csmcc_stop_rlc_timer */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_auto_dtmf
* DESCRIPTION                                                           
*    This function is used to start sending automatic DTMF tone 
*
* CALLS  
*	csmcc_send_auto_dtmf(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_auto_dtmf(kal_uint8 call_id)
{	
   CSMCC_PTR_G_TO_L
   csmcc_dtmf_struct *dtmf_ptr;
   kal_uint8 digit;
   
   dtmf_ptr = &(CALL_DATA(call_id,dtmf));

   if(dtmf_ptr->digit == NULL)
   {
      return CSMCC_ERROR;
   }
      
   while(dtmf_ptr->count > 0  
         && dtmf_ptr->count > dtmf_ptr->cur_digit_index)
   {
      digit = dtmf_ptr->digit[dtmf_ptr->cur_digit_index++];

      switch(digit)
      {
         case 0: /* '0' */           
         case 1: /* '1' */
         case 2: /* '2' */
         case 3: /* '3' */
         case 4: /* '4' */
         case 5: /* '5' */
         case 6: /* '6' */
         case 7: /* '7' */
         case 8: /* '8' */
         case 9: /* '9' */
            digit += 48; /* change to ia5 */
            break;
         case 10: /* '*' */
            digit = 42; /* change to ia5 */
            break;
         case 11: /* '#' */
            digit = 35; /* change to ia5 */
            break;         
         case 12: /* 'DTMF Control digit separator' pause */
	     if(cm_dtmf_p_w_switch())
	     {
	     	/*use "W" operation to instead of "P" operation*/
            	csmcc_send_l4c_auto_dtmf_start_ind(call_id);
            	csmcc_stop_auto_dtmf(call_id);                        
            	return CSMCC_DTMF_QUERY;      		 	
	     }
            else
	     {
                csmcc_start_dtmf_pause_timer(call_id, CSMCC_PTR->pause_duration);            
                return CSMCC_NO_ERROR;    
	     }
         case 13: /* "Wild" value */
	     if(cm_dtmf_p_w_switch())
	     {
	       /*use "P" operation to instead of "W" operation*/
            	csmcc_start_dtmf_pause_timer(call_id, CSMCC_PTR->pause_duration);            
            	return CSMCC_NO_ERROR;
 	     }
	     else
	     {
                csmcc_send_l4c_auto_dtmf_start_ind(call_id);
                csmcc_stop_auto_dtmf(call_id);                        
                return CSMCC_DTMF_QUERY;            
	     }	
         default:            
            /* invalid value range */            
	    kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_DTMF_DIGIT, digit);
            digit = 0;
            break;                  
      } /* switch(digit) */

      if(digit > 0)
      {
         csmcc_send_cc_start_dtmf_req(call_id, digit);
         csmcc_send_cc_stop_dtmf_req(call_id, digit);  
         return CSMCC_NO_ERROR;       
      }

   } /* while(dtmf_ptr->count>0...) */
   
   return CSMCC_ERROR;

} /* end of csmcc_send_auto_dtmf */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_accept_mt_call
* DESCRIPTION                                                           
*    This function is used to accept an incoming call
*
* CALLS  
*	csmcc_accept_mt_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_accept_mt_call(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   csmcc_call_context_struct *call_context_ptr;
   kal_uint8 cur_call_type,call_index;
   
   call_context_ptr = &(CALL_ENTRY(call_id));
   cur_call_type = call_context_ptr->cur_call_type;

   if((call_context_ptr->bc[cur_call_type] != CSMCC_VOICE_CALL)
      && (call_context_ptr->bc[cur_call_type] != CSMCC_AUX_VOICE_CALL))
   {
      /* If the call to be accepted is a non-voice call, e.g. data call, 
          then if any other call exists, can't accept it. */
      for(call_index = 1; call_index <= CSMCC_MAX_CALL_NUM; call_index++)
      {
         if((call_index != call_id)
            &&(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK))
         {            
            return CSMCC_CALL_ACCEPT_NOT_ALLOW;
         }
      }

      if (CSMCC_PTR->channel_info == CSMCC_SPEECH_TCH)
      {
         return CSMCC_CALL_ACCEPT_NOT_ALLOW;
      }
   }
   else
   {
       if (CSMCC_PTR->channel_info == CSMCC_DATA_TCH)
      {
         return CSMCC_CALL_ACCEPT_NOT_ALLOW;
      }
   }
   
   /* send setup response to CC */
   csmcc_send_cc_setup_res(call_id);
         
   SET_CALL_STATE(call_id ,CSMCC_CALL_ACCEPT)
   
   /* reset the call waiting flag */
   if(CALL_DATA(call_id, cw_flag) == KAL_TRUE)
   {      
      CALL_DATA(call_id, cw_flag) = KAL_FALSE;         
   }
   
   /* attach user connection for speech call */
   if(GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL
      || GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL
      || CSMCC_PTR->channel_info == CSMCC_SPEECH_TCH)
   {
      /* update call type according to channel type */
      if(GET_CALL_TYPE(call_id) != CSMCC_VOICE_CALL
         && GET_CALL_TYPE(call_id) != CSMCC_AUX_VOICE_CALL)
      {
         SET_CALL_TYPE(call_id, CSMCC_VOICE_CALL)
      }            
          
      csmcc_attach_speech();
   }
      
   return CSMCC_NO_ERROR;
   
}  /* csmcc_accept_mt_call */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_accept_ccbs_call
* DESCRIPTION                                                           
*    This function is used to accept a ccbs call.
*
* CALLS  
*	csmcc_accept_ccbs_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first  variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_accept_ccbs_call(kal_uint8 call_id)
{

   if(csmcc_is_ccbs_invoked_call(call_id) == KAL_FALSE)
   {
      return CSMCC_CALL_ACCEPT_NOT_ALLOW;
   }
   
   csmcc_send_cc_ccbs_setup_req(call_id);
         
   SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
   /*[Cosine 070305]: When user accept CCBS recall, reset ccbs_status.*/
   CALL_DATA(call_id,ccbs_status) = CSMCC_CCBS_NONE;  
   CALL_DATA(call_id, call_orig) = CSMCC_NW_INIT_MO_CALL;
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_accept_ccbs_call */

#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_ts11_call
* DESCRIPTION                                                           
*    This function is used to check if the call is a TS11 service call.
*
* CALLS  
*	csmcc_is_ts11_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_ts11_call(kal_uint8 call_id)          
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_call_context_struct *call_context_ptr;
   kal_uint8 cur_call_type;
   
   call_context_ptr = &(CALL_ENTRY(call_id));

   cur_call_type = call_context_ptr->cur_call_type;
   
   /* TS11 service call is a single service and normal speech call */
   if(call_context_ptr->call_mode == CSMCC_SINGLE_MODE 
      && (call_context_ptr->bc[cur_call_type] == CSMCC_VOICE_CALL
      || call_context_ptr->bc[cur_call_type] == CSMCC_AUX_VOICE_CALL)
      )
   {
      /* MAUI_01974432 [CSMCC] modify csmcc_is_ts11_call check */
      if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
      {
         return KAL_FALSE;
      }
      return KAL_TRUE;
   }
   
   return KAL_FALSE;
   
} /* end of csmcc_is_ts11_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_bcd_decode
* DESCRIPTION                                                           
*    This function used to decode BCD number.
*
* CALLS  
*	csmcc_bcd_decode(kal_uint8 *bcd_num, 
*                        kal_uint8 *num, 
*                        kal_uint8 bcd_num_len)
*
* PARAMETERS
*	bcd_num		IN	first variable, used as input
*	num		OUT	second variable, used as ouptput
*	bcd_num_len	IN	third variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_uint8 csmcc_bcd_decode(kal_uint8 *bcd_num, kal_uint8 *num, kal_uint8 bcd_num_len)
{
  kal_uint8 i;
  kal_uint8 count = 0;
  	
  for (i = 0; i < bcd_num_len; i++) {
    
    num[2*i] = (bcd_num[i] & 0x0f);
    //mtk01602, [MAUI_407331]: B* SAT invalid string
    if(num[2*i] == 0x0f || num[2*i] == 0x0e)
    {
 	break;
    }
    count++;
    num[(2*i)+1] = (bcd_num[i] & 0xf0) >> 4; 
    if(num[(2*i)+1] == 0x0f || num[(2*i)+1] == 0x0e)
    {
       break;
    }
    count++;
  } /* for (..i < bcd_num_len..) */

  return count;
} /* end of csmcc_bcd_decode */  
  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_bcd_encode
* DESCRIPTION                                                           
*    This function used to encode BCD number.
*
* CALLS  
*	csmcc_bcd_encode(kal_uint8 *num, 
*                        kal_uint8 *bcd_num, 
*                        kal_uint8 num_len)
*
* PARAMETERS
*	num		IN	first variable, used as input
*	bcd_num		OUT	second variable, used as ouptput
*	num_len		IN	third variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_uint8 csmcc_bcd_encode(kal_uint8 *num, kal_uint8 *bcd_num, kal_uint8 num_len)
{
  kal_uint8 limit;
  kal_uint8 odd_number_of_digits;
  kal_uint8 digit_index;
  	
  limit = num_len/2;
  odd_number_of_digits = num_len % 2;
  limit += odd_number_of_digits;

  for (digit_index = 0; digit_index < limit; digit_index++) {
    
    bcd_num[digit_index] = num[2*digit_index];

    if (digit_index == limit - 1) {
      if (odd_number_of_digits) {
	break;
      }
    }
    
    bcd_num[digit_index] |= (num[(2*digit_index)+ 1] << 4);
    
  } /* for (..digit_index < app_num_ptr->num_digits..) */
  
  if (odd_number_of_digits) {
    bcd_num[digit_index] |= 0xf0;    
  }

  return limit;
  
} /* end of csmcc_bcd_encode */    


/*************************************************************************
* FUNCTION                                                            
*	csmcc_check_called_number
* DESCRIPTION                                                           
*    This function used to parse the phone number and store the auto dtmf in called number.
*
* CALLS  
*	csmcc_check_called_number(l4_addr_bcd_struct *addr_bcd_ptr)
*
* PARAMETERS
*	addr_bcd_ptr	IN/OUT	first variable, used as input/output
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_check_called_number(kal_uint8 call_id, l4_addr_bcd_struct *addr_bcd_ptr)
{
   kal_uint8 i;
   kal_uint8 digit_count;
   kal_uint8 num[MAX_CALLED_BCD_NUM_LEN*2];
   kal_uint8 addr_len;

   addr_len = addr_bcd_ptr->addr_length - 1;
   
   kal_mem_set(num, 0, MAX_CALLED_BCD_NUM_LEN*2);
   
   if(FETCH_TON(addr_bcd_ptr->addr_bcd[0]) > TON_DEDICATED)
   { 
       /*24.008 10.5.4.7 TON NOTE2
         The type of "unknown" is used when the user of network has no knowledge of the type of number.
         In the case the number digits field is organized according to the network dialling plan. */
        addr_bcd_ptr->addr_bcd[0] = ((TON_UNKNOWN<<4) | (NPI_ISDN));
   }	
   
   digit_count = csmcc_bcd_decode(addr_bcd_ptr->addr_bcd+1, 
                                  num, 
                                  addr_len);
   
   for(i = 0; i<digit_count ;i++)
   {
      if( (num[i] == 0x0c) || (num[i] == 0x0d) )
      {
         /* DTMF separator */
         break;
      }
   }
   
   if(i < digit_count)
   {
      /* auto dtmf exists, save them including DTMF separator */

      CALL_DATA(call_id, dtmf.digit) = 
                      (kal_uint8*)get_ctrl_buffer(digit_count - i);
                      
      kal_mem_cpy(CALL_DATA(call_id,dtmf.digit), 
                  &(num[i]), 
                  digit_count - i);
                  
      CALL_DATA(call_id,dtmf.count) = digit_count - i;
   }
   
   addr_bcd_ptr->addr_length = 
                  1+csmcc_bcd_encode(num, addr_bcd_ptr->addr_bcd+1, i);

} /* end of csmcc_check_called_number */

//mtk01602, [MAUI_751970]
#ifdef __FWP_NC_LAI_INFO__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_insert_cell_lock_prefix
* DESCRIPTION                                                           
*    This function is used to insert cell lock prefix,  
*    which will be only called when cell lock is supported
*
* CALLS  
*
* PARAMETERS
*	
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_insert_cell_lock_prefix(kal_uint8* prefix_ptr, kal_uint8 prefix_digit_count, l4_addr_bcd_struct *addr_bcd_ptr)
{
    kal_uint8 i, digit_count, addr_len;
    kal_uint8 num[MAX_CALLED_BCD_NUM_LEN*2];

    addr_len = addr_bcd_ptr->addr_length - 1;

    digit_count = csmcc_bcd_decode(addr_bcd_ptr->addr_bcd+1, 
                                  num, 
                                  addr_len);
	
    addr_len = 2 * (addr_bcd_ptr->addr_length - 1);

    for(i = 0; i < addr_len; i++)
    {
        num[addr_len + prefix_digit_count - i - 1] = num[addr_len - i - 1]; 
    }
    for(i = 0; i<prefix_digit_count; i++)
    {
 	num[i] = prefix_ptr[i];
    }

    addr_bcd_ptr->addr_length = 
                  1+csmcc_bcd_encode(num, addr_bcd_ptr->addr_bcd+1, (kal_uint8)(digit_count + prefix_digit_count));	
	
} /* end of csmcc_insert_cell_lock_prefix */
#endif /*__FWP_NC_LAI_INFO__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_convert_bcd_dtmf_to_digit
* DESCRIPTION                                                           
*    This function is used to conver sat dtmf from bcd to ascii and store the asciis 
*    in dtmf of context. 
*
* CALLS  
*
* PARAMETERS
*	
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_convert_bcd_dtmf_to_digit (kal_uint8 call_id, 
                                      kal_uint8 no_dtmf, kal_uint8 *dtmf)
{
   kal_uint8 digit_count;
   kal_uint8 num[(MAX_CC_ADDR_BCD_LEN-1)<<1]; 

   if (no_dtmf >= MAX_CC_ADDR_BCD_LEN)   
   {
      no_dtmf = MAX_CC_ADDR_BCD_LEN-1;
   }
     
   kal_mem_set(num, 0, ((MAX_CC_ADDR_BCD_LEN-1)<<1));
   
   digit_count = csmcc_bcd_decode(dtmf, num, no_dtmf);

   CALL_DATA(call_id, dtmf.digit) = (kal_uint8*)get_ctrl_buffer(digit_count);
                      
   kal_mem_cpy(CALL_DATA(call_id, dtmf.digit), num, digit_count);
                  
   CALL_DATA(call_id, dtmf.count) = digit_count;      
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_mo_call_context
* DESCRIPTION                                                           
*    This function is used to call context of a MO call according to
*    MO call setup request from L4C.
*
* CALLS  
*	csmcc_fill_mo_call_context(kal_uint8 call_id, 
               l4ccsm_cc_call_setup_req_struct *call_setup_req_ptr)
*
* PARAMETERS
*	call_id			IN	first variable, used as input
*	call_setup_req_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_mo_call_context(kal_uint8 call_id, 
                  l4ccsm_cc_call_setup_req_struct *call_setup_req_ptr)
{

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)||defined(__ECALL_SUPPORT__))
   CSMCC_PTR_G_TO_L
#endif 
   /*mtk01602, [MAUI_751970]*/
   #ifdef __FWP_NC_LAI_INFO__
   kal_uint8 *prefix = 0;
   kal_uint8 len = 0;
   #endif
	
   /* local var declare */
   csmcc_call_context_struct *call_context_ptr;
   
   call_context_ptr = &(CALL_ENTRY(call_id));
      
   call_context_ptr->src_id = call_setup_req_ptr->src_id;
   call_context_ptr->call_id = call_id;
   call_context_ptr->call_orig = CSMCC_MO_CALL;
      

#ifdef __EMLPP_SUPPORT__
   /* fill call priority */
   if(call_setup_req_ptr->call_priority_present == KAL_TRUE)
   {
      call_context_ptr->call_priority = (csmcc_call_priority_enum)(call_setup_req_ptr->call_priority);

       /* TBD: verify the selected priority level against the 
       * priority levels stored in the SIM. If the selected
       * priority is not allowed, then the priority of the call 
       * shall be modified to that of the nearest allowed priority 
       * level below the requested level. (51.010 31.12.1)*/
   }
   else
   {
      /* normal call priority */
      call_context_ptr->call_priority = CSMCC_CALL_PRIORITY_3;
   }      
#endif /*__EMLPP_SUPPORT__*/
   
   
   /* fill number */
   call_context_ptr->number_present = KAL_TRUE;
   
   if(call_setup_req_ptr->called_number.addr_length > 0)
   {
      /* check auto DTMF */   
      call_context_ptr->number = call_setup_req_ptr->called_number;
      csmcc_check_called_number(call_id, &(call_context_ptr->number));
   }

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   else if(call_setup_req_ptr->call_type == CSMCC_SAT_DATA_CALL)
   {
       if(CSMCC_PTR->sat_prof.addr.addr_length > 0)
         {       
       call_context_ptr->number = CSMCC_PTR->sat_prof.addr;
       csmcc_check_called_number(call_id, &(call_context_ptr->number));

   }
  }
#endif

/*mtk01602, [MAUI_751970]*/
#ifdef __FWP_NC_LAI_INFO__   
  if(call_setup_req_ptr->is_cell_lock_call != KAL_FALSE)
   {
   	//get cell lock prefix string and length from customer folder
	len = cm_get_cell_lock_string(&prefix);
	csmcc_insert_cell_lock_prefix(prefix, len, &(call_context_ptr->number));
   }
#endif /*__FWP_NC_LAI_INFO__*/

#ifdef __SUBADDR_SUPPORT__
   /* fill subaddress */
   if(call_setup_req_ptr->called_sub_addr_present == KAL_TRUE)
   {
      call_context_ptr->sub_addr_present = KAL_TRUE;
      call_context_ptr->sub_addr = call_setup_req_ptr->called_sub_addr;
   }
#endif
   
   /* fill CUG info */
   call_context_ptr->cug_info = (kal_bool)(call_setup_req_ptr->cug_info);
   
   if(call_setup_req_ptr->clir_info_present == KAL_TRUE)
   {
      call_context_ptr->clir_info = call_setup_req_ptr->clir_info;
   }
   else
   {
      call_context_ptr->clir_info = CSMCC_INVALID_CLIR_INFO;
   }

#if defined(__ECALL_SUPPORT__)
   if (call_setup_req_ptr->is_ecall == KAL_TRUE)
   {
      CSMCC_PTR->csmcc_ecall_id = call_id;
      CSMCC_PTR->ecall_type = call_setup_req_ptr->ecall_type;
   }
#endif

} /* end of csmcc_fill_mo_call_contxt */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_emergency_mo_call_context
* DESCRIPTION                                                           
*    This function is used to call context of a MO call according to
*    MO call setup request from L4C.
*
* CALLS  
*	csmcc_fill_emergency_mo_call_context(kal_uint8 call_id, 
               l4ccsm_cc_emergency_call_setup_req_struct *emergency_call_setup_req_ptr)
*
* PARAMETERS
*	call_id			                IN	first variable, used as input
*	emergency_call_setup_req_ptr	IN	second variable, used as input
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_emergency_mo_call_context(kal_uint8 call_id, 
                  l4ccsm_cc_emergency_call_setup_req_struct *emergency_call_setup_req_ptr)
{	
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_call_context_struct *call_context_ptr;
   
   call_context_ptr = &(CALL_ENTRY(call_id));
      
   call_context_ptr->src_id = emergency_call_setup_req_ptr->src_id;
   call_context_ptr->call_id = call_id;
   call_context_ptr->call_orig = CSMCC_MO_CALL;
   call_context_ptr->call_mode = CSMCC_SINGLE_MODE;
   
#ifdef __EMLPP_SUPPORT__
   /* fill emergency call priority */
   call_context_ptr->call_priority = CSMCC_CALL_PRIORITY_0;
#endif 
   CSMCC_PTR->csmcc_emergency_call_id = call_id ;
   
   /* fill number */
   call_context_ptr->number_present = KAL_TRUE;
   
   if(emergency_call_setup_req_ptr->called_number.addr_length > 0)
   {
      /* check auto DTMF */   
      call_context_ptr->number = emergency_call_setup_req_ptr->called_number;
      csmcc_check_called_number(call_id, &(call_context_ptr->number));
   }   

   /* fill call type, the initial call type must be the first */
   call_context_ptr->cur_call_type = 0;
   call_context_ptr->bc[0] = CSMCC_VOICE_CALL;

   #ifdef __REL4__
   /* fill emergency call service category*/
   call_context_ptr->service_category = emergency_call_setup_req_ptr->service_category;
   #endif

#if defined(__ECALL_SUPPORT__)
   if (emergency_call_setup_req_ptr->is_ecall == KAL_TRUE)
   {
      CSMCC_PTR->csmcc_ecall_id = call_id;
      CSMCC_PTR->ecall_type = emergency_call_setup_req_ptr->ecall_type;
   }
#endif

} /* end of csmcc_fill_mo_call_contxt */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_mt_call_context
* DESCRIPTION                                                           
*    This function is used to call context of a MT call according to
*    MT call setup indication from CC.
*
* CALLS  
*	csmcc_fill_mt_call_context(kal_uint8 call_id, 
               mncc_setup_ind_struct *call_setup_ind_ptr)
*
* PARAMETERS
*	call_id			IN	first variable, used as input
*	call_setup_ind_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_mt_call_context(kal_uint8 call_id, 
                  mncc_setup_ind_struct *setup_ind_ptr)
{
   csmcc_call_context_struct *call_context_ptr;
   kal_uint8 presentation_indicator = 0;
   kal_uint8 screening_indicator = 0;
   
   call_context_ptr = &(CALL_ENTRY(call_id));
   
   call_context_ptr->call_id = call_id;   
   call_context_ptr->ti = setup_ind_ptr->ti;   
   call_context_ptr->call_orig = CSMCC_MT_CALL;
   
#ifdef __EMLPP_SUPPORT__
   if(setup_ind_ptr->priorityP == KAL_TRUE)
   {
      call_context_ptr->call_priority = (csmcc_call_priority_enum)(setup_ind_ptr->priority.call_priority);
   }
#endif 
      
   if(setup_ind_ptr->calling_numP == KAL_TRUE)
   {
      if(setup_ind_ptr->calling_num.addr_ind_present)
      {
         presentation_indicator = (setup_ind_ptr->calling_num.addr_ind & 0x60);
	  screening_indicator =  (setup_ind_ptr->calling_num.addr_ind & 0x03);	 
      }
      
      /* if not Presentation restricted and Number not available due to interworking */
      //if(presentation_indicator != CC_PRESENTATION_RESTRICTED
      //   && presentation_indicator != CC_NUMBER_UNAVAILABLE)
      if(presentation_indicator == CC_PRESENTATION_ALLOWED ||
	  (presentation_indicator == CC_PRESENTATION_RESTRICTED && screening_indicator == CC_SCR_NW))
      {
         call_context_ptr->number_present = KAL_TRUE;                                 
         call_context_ptr->number = setup_ind_ptr->calling_num.addr;   
	 call_context_ptr->clir_info = CSMCC_CLIR_SUPPRESSION; //mtk01602, 070724
      }
      else //mtk01602, 070724: If user subscribed CLIR, then CNAP should not be shown in MMI either.
      {
  	 call_context_ptr->clir_info = CSMCC_CLIR_INVOCATION; 
      }
   }
#ifdef __SUBADDR_SUPPORT_
   if(setup_ind_ptr->calling_sub_addrP == KAL_TRUE)
   {
      call_context_ptr->sub_addr_present = KAL_TRUE;
      call_context_ptr->sub_addr = setup_ind_ptr->calling_sub_addr;
   }
#endif
      
} /* end of csmcc_fill_mt_call_contxt */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_prog_desc_hdlr
* DESCRIPTION                                                           
*    This function is used to process progress description.
*
* CALLS  
*	csmcc_prog_desc_hdlr(kal_uint8 call_id, 
*                            csmcc_prog_desc_enum prog_desc)
*
* PARAMETERS
*	call_id			IN	first variable, used as input
*	prog_desc		IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_prog_desc_hdlr(kal_uint8 call_id,
                                      csmcc_prog_desc_enum prog_desc)
{      
   CSMCC_PTR_G_TO_L
   if(GET_CALL_TYPE(call_id) != CSMCC_VOICE_CALL
      && GET_CALL_TYPE(call_id) != CSMCC_AUX_VOICE_CALL)
   {
      return CSMCC_NO_ERROR;
   }
   
   switch(prog_desc)
   {
      case CSMCC_NOT_END_TO_END:
      case CSMCC_DEST_IN_NON_PLMN_ISDN:
      case CSMCC_ORIG_IN_NON_PLMN_ISDN:
      case CSMCC_IN_BAND_AVAILABLE:
         CSMCC_PTR->is_ibt = KAL_TRUE;/*mtk00924 add 041210 for ECPI*/
         if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON)
         {
            CSMCC_PTR->attach_status = CSMCC_ATTACH_REQ;   
         }
         break;
      case CSMCC_RETURN_PLMN_ISDN:
      case CSMCC_END_TO_END:
      case CSMCC_QUEUEING:
         break;
      default:
         if(prog_desc >= 6 && prog_desc <= 20)
         {
            if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON)
            {
               CSMCC_PTR->attach_status = CSMCC_ATTACH_REQ;   
            }
         }
         break;
   } /* switch(prog_desc) */
   
   if(CSMCC_PTR->attach_status == CSMCC_ATTACH_REQ
      && CSMCC_PTR->channel_info == CSMCC_SPEECH_TCH)
   {
      /* 
       * if TCH is assigned and this is a speech call and 
       * user attachment is requested
       */
      csmcc_send_l4c_attach_ind(CSMCC_PTR->channel_mode, KAL_FALSE);
      CSMCC_PTR->attach_status = CSMCC_SPEECH_ON;
   }
   
   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_CHANNEL_ATTACH_STATUS,
             CSMCC_PTR->attach_status,
             CSMCC_PTR->channel_info);

   return CSMCC_NO_ERROR;

} /* end of csmcc_prog_desc_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_allowed_accept_call
* DESCRIPTION                                                           
*    This function is used to check if it is allowed to accept waiting call
*    in current condition.
*
* CALLS  
*	csmcc_is_allowed_accept_call(void)
*
* PARAMETERS
*
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_allowed_accept_call(void)
{
   kal_uint8 call_index;
   csmcc_call_state_enum call_state;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
      {
         /* the call context has been free */
         continue;
      }
      call_state = GET_CALL_STATE(call_index);
      
      switch(call_state)
      {
         case CSMCC_CALL_INIT:
            if(CALL_DATA(call_index,call_orig) == CSMCC_MO_CALL)
            {
               return KAL_FALSE;
            }
            break;
         case CSMCC_CALL_ACTIVE:
         /* case CSMCC_MS_CALL_DISC: */         
         /* case CSMCC_NW_CALL_DISC: */ 
         /* remove for 1 H, 1 incoming, answer the incoming and remote H rel 
             at the same time, is allowed to accept the mt call. Or if directly reuturn 
             l4 accept fail, mmi will go to idle, but cc still active. */
         case CSMCC_CALL_HOLD_REQ:
            return KAL_FALSE;
         default:
            break;
      }
   }
   
   return KAL_TRUE;

} /* end of csmcc_is_allowed_accept_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_allowed_setup_call
* DESCRIPTION                                                           
*    This function is used to check if it is allowed to setup a MO call
*
* CALLS  
*	csmcc_is_allowed_setup_call(kal_bool full)
*
* PARAMETERS
*  full  IN first variable, used as input
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_allowed_setup_call(kal_bool full)
{
   /* local var declare */
   kal_uint8 call_index;
   csmcc_call_state_enum call_state;
   kal_bool active_flag;
   kal_bool hold_flag;
   
   /* local var init */
   active_flag = KAL_FALSE;
   hold_flag = KAL_FALSE;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE)
      {
         /* the call context has been free */
         continue;
      }
      
      call_state = GET_CALL_STATE(call_index);
      
      switch(call_state)
      {
         case CSMCC_CALL_ACTIVE:
            if(full == KAL_TRUE)
            {
               return KAL_FALSE;
            }
            if(csmcc_is_ts11_call(call_index) == KAL_FALSE)
            {
               return KAL_FALSE;
            }
            active_flag = KAL_TRUE;
            break;
         case CSMCC_CALL_HOLD:
         case CSMCC_NW_CALL_DISC_ON_HOLD:         
            hold_flag = KAL_TRUE;
            break;

         case CSMCC_CALL_INIT:
            if(CALL_DATA(call_index, cw_flag) == KAL_FALSE)
            {
               return KAL_FALSE;
            }
            break;         
         case CSMCC_CALL_ALERT:
         //case CSMCC_NW_CALL_DISC:
            return KAL_FALSE;

         /* 
          * this case only occurs in case that one active must be put on hold,
          * and then new call can be setup up.
          */
        case CSMCC_CALL_HOLD_REQ:
            return KAL_FALSE;

         /* the following case shall not occur */
         case CSMCC_CALL_ACCEPT:
         //case CSMCC_MS_CALL_DISC:
         case CSMCC_CALL_MODIFY:
         case CSMCC_CALL_RETRIEVE_REQ:
            return KAL_FALSE;
         default:
            break;
      }
      
      /* active call and held call exist at the same time */
      
      if(active_flag == KAL_TRUE &&
         hold_flag == KAL_TRUE)
      {
         return KAL_FALSE;
      }
   }

   return KAL_TRUE;   

} /* end of csmcc_is_allowed_setup_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_mpty_call_state
* DESCRIPTION                                                           
*    This function is used to update call state of each member
*    in mpty call.
*
* CALLS  
*	csmcc_update_mpty_call_state(csmcc_call_state_enum call_state)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_update_mpty_call_state(csmcc_call_state_enum call_state)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if((GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE)
         && (GET_CALL_STATE(call_index) & CSMCC_ALL_DISC_STATES) == 0 ) /* ripple */
      {
         SET_CALL_STATE(call_index, call_state)
         /* MAUI_00917762 [CC][Fixbug] handle BUILD/HOLD/RETRIEVE MPTY with different return ti */
         /* reset invoke information of the call */
         csmcc_reset_inv_info(&CALL_DATA(call_index,inv_info));
      }
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_update_mpty_call_state */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_cur_req
* DESCRIPTION                                                           
*    This function is used to reset csm current request relative parameter
*
* CALLS  
*	csmcc_reset_cur_req(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_cur_req(csmcc_req_enum cur_req)
{
   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_REQUEST_SAVE, 
             CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id,CSMCC_PTR->req_call_id);

   if(CSMCC_PTR->cur_req == cur_req)
   {   
      CSMCC_PTR->cur_req = CSMCC_NO_REQ;
      CSMCC_PTR->req_src_id = CSMCC_INVALID_SRC_ID;
      CSMCC_PTR->req_call_id = CSMCC_INVALID_CALL_ID;
      CSMCC_PTR->aux_req = CSMCC_NO_REQ;
      CSMCC_PTR->aux_req_call_id = CSMCC_INVALID_CALL_ID;
      CSMCC_PTR->is_aux_req_processed = KAL_FALSE;
   }

} /* end of csmcc_reset_cur_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_save_cur_req
* DESCRIPTION                                                           
*    This function is used to save csm current request relative parameter.
*
* CALLS  
*	csmcc_save_cur_req(kal_uint8 cur_req, 
*                          kal_uint8 src_id, 
*                          kal_uint8 req_call_id)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_save_cur_req(csmcc_req_enum cur_req, 
                        kal_uint8 req_src_id,
                        kal_uint8 req_call_id)
{
   CSMCC_PTR_G_TO_L
   CSMCC_PTR->cur_req = cur_req;
   CSMCC_PTR->req_src_id = req_src_id;
   CSMCC_PTR->req_call_id = req_call_id;
  
   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_REQUEST_SAVE,
             CSMCC_PTR->cur_req,
             CSMCC_PTR->req_src_id,
             CSMCC_PTR->req_call_id);

} /* end of csmcc_save_cur_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_cur_req
* DESCRIPTION                                                           
*    This function is used to update csm current request relative parameter
*
* CALLS  
*	csmcc_update_cur_req(kal_uint8 cur_req, 
*                     kal_uint8 src_id, 
*                     kal_uint8 req_call_id)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_update_cur_req(csmcc_req_enum cur_req, 
                        kal_uint8 req_src_id,
                        kal_uint8 req_call_id)
{
   CSMCC_PTR_G_TO_L
   CSMCC_PTR->cur_req = cur_req;
   CSMCC_PTR->req_src_id = req_src_id;
   CSMCC_PTR->req_call_id = req_call_id;
   CSMCC_PTR->aux_req = CSMCC_NO_REQ;
   CSMCC_PTR->aux_req_call_id = CSMCC_INVALID_CALL_ID;   

   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_REQUEST_UPDATE,
             CSMCC_PTR->cur_req,
             CSMCC_PTR->req_src_id,
             CSMCC_PTR->req_call_id);
             
} /* end of csmcc_update_cur_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_prev_req
* DESCRIPTION                                                           
*    This function is used to reset csm current request relative parameter
*
* CALLS  
*	csmcc_reset_prev_req(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_prev_req(csmcc_req_enum cur_req)
{
   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_REQUEST_SAVE, 
             CSMCC_PTR->prev_req, CSMCC_PTR->prev_req_src_id,CSMCC_PTR->prev_req_call_id);

   if(CSMCC_PTR->prev_req == cur_req)
   {   
      CSMCC_PTR->prev_req = CSMCC_NO_REQ;
      CSMCC_PTR->prev_req_src_id = CSMCC_INVALID_SRC_ID;
      CSMCC_PTR->prev_req_call_id = CSMCC_INVALID_CALL_ID;
   }

} /* end of csmcc_reset_prev_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_save_prev_req
* DESCRIPTION                                                           
*    This function is used to save csm previous request relative parameter.
*
* CALLS  
*	csmcc_save_prev_req(kal_uint8 prev_req, 
*                          kal_uint8 prev_src_id, 
*                          kal_uint8 prev_req_call_id)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_save_prev_req(csmcc_req_enum prev_req, 
                        kal_uint8 prev_src_id,
                        kal_uint8 prev_req_call_id)
{
   /*Cosine: 20080503, [MAUI_00682453]*/
   CSMCC_PTR_G_TO_L
   /* MAUI_01617512 */
   if ((CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ) ||
       (CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ) ||
       (CSMCC_PTR->cur_req == CSMCC_EMERGENCY_CALL_SETUP_REQ))
   {

   CSMCC_PTR->prev_req = prev_req;
   CSMCC_PTR->prev_req_src_id = prev_src_id;
   CSMCC_PTR->prev_req_call_id = prev_req_call_id;
  
   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_REQUEST_SAVE,
             CSMCC_PTR->prev_req,
             CSMCC_PTR->prev_req_src_id,
             CSMCC_PTR->prev_req_call_id);
   }
} /* end of csmcc_save_prev_req */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_acm_exceed
* DESCRIPTION                                                           
*    This function used to check if acm >= acmmax.
*
* CALLS  
*	csmcc_is_acm_exceed(void)
*
* PARAMETERS
*
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_acm_exceed(void)
{
   CSMCC_PTR_G_TO_L
   /* AS Per TS 22.024 V 301 Sec 4.2.3, 
      The ACMmax is not valid if set to zero */
#ifdef __CUSTOM_CONFIG_ACM_BOUND__
   if(custom_is_acm_exceed_boundary(CSMCC_PTR->acm)==KAL_TRUE)
   {
      /*mtk01602,[MAUI_378217]:If acm is out of reasonable range, 
        ignore the checking of ACM value*/
      return KAL_FALSE;
   }
#endif

   if(CSMCC_PTR->acm_valid == KAL_TRUE && CSMCC_PTR->acmmax > 0)
   {
      return ((kal_bool)(CSMCC_PTR->acm >= CSMCC_PTR->acmmax));
   }

   /* acm not valid, return acm not exceeded */
   return KAL_FALSE;   

} /* end of csmcc_is_acm_exceed */
#endif/* __AOC__SUPPORT__*/

kal_uint8 csmcc_form_sat_cause(kal_uint8 *cause_ptr, kal_uint8 *sat_cause_ptr)
{
	kal_uint8 offset = 0;
	kal_uint8 coding_std = CSMCC_GSM_PLMNS_24008; 
	kal_uint8 location = CSMCC_USER;
	mncc_cause_struct *app_cause_ptr;
	
	app_cause_ptr = (mncc_cause_struct *)cause_ptr;

	sat_cause_ptr[offset] = location;
	sat_cause_ptr[offset] |= (coding_std<<5);
	sat_cause_ptr[offset] |= (1<<7);
	offset++;

	sat_cause_ptr[offset] = (kal_uint8)app_cause_ptr->cause_value;
	sat_cause_ptr[offset] |=(1<<7);
	offset++;
	
	if(app_cause_ptr->diagnostics_length > 0 && app_cause_ptr->diagnostics_length <= 28)
	{
		kal_mem_cpy(&(sat_cause_ptr[offset]), app_cause_ptr->diagnostics, app_cause_ptr->diagnostics_length);
		offset += app_cause_ptr->diagnostics_length;
	}
	
	return offset;
}

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
/*************************************************************************
* FUNCTION                                                            
*	csmcc_compose_cbst_speed
* DESCRIPTION                                                           
*    This function is used to compose cbst speed by data parameter of context. 
*
* CALLS  
*
* PARAMETERS
*	*speed 	OUT	first variable, used as output
* RETURNS
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_compose_cbst_speed(kal_uint8 *speed)
{  
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);
   
   *speed = CSMCC_INVALID_SPEED;
   
   if (data_bc_param_ptr->ra == CSMCC_RA_V110 )
   {
      if (data_bc_param_ptr->fnur == CSMCC_FNUR_14_4_K)
      {
         *speed = CSMCC_14400_BPS_V110;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_9_6_K)
      {
         *speed = CSMCC_9600_BPS_V110;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_4_8_K)
      {
         *speed = CSMCC_4800_BPS_V110;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_2_4_K)
      {
         *speed = CSMCC_2400_BPS_V110;
      }
      
      /* error combination or MS not support. */
        
   }
   else if (data_bc_param_ptr->ra == CSMCC_RA_OTHER 
      && data_bc_param_ptr->other_ra == CSMCC_RA_V120 )
   {
      if (data_bc_param_ptr->fnur == CSMCC_FNUR_14_4_K)
      {
         *speed = CSMCC_14400_BPS_V120;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_9_6_K)
      {
         *speed = CSMCC_9600_BPS_V120;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_4_8_K)
      {
         *speed = CSMCC_4800_BPS_V120;
      }
      else if (data_bc_param_ptr->ur == CSMCC_UR_2_4_K)
      {
         *speed = CSMCC_2400_BPS_V120;
      }
      
      /* error combination or MS not support. */      
      
   }
   else if (data_bc_param_ptr->other_mt == CSMCC_MT_V34)
   {
      if (data_bc_param_ptr->fnur == CSMCC_FNUR_14_4_K)
      {
         *speed = CSMCC_14400_BPS_V34;
      }         
      else if (data_bc_param_ptr->ur == CSMCC_UR_9_6_K)
      {
         *speed = CSMCC_9600_BPS_V34;
      }

      /* error combination or MS not support. */
        
   }
   else if (data_bc_param_ptr->mt == CSMCC_MT_V32)
   {
      /* only 4800, 9600 bps is allowed. */
      if (data_bc_param_ptr->ur == CSMCC_UR_9_6_K)
      {
         *speed = CSMCC_9600_BPS_V32;
      }         
      else if (data_bc_param_ptr->ur == CSMCC_UR_4_8_K)
      {
         *speed = CSMCC_4800_BPS_V32;
      }
      
      /* error combination. */
        
   }
   else if (data_bc_param_ptr->mt == CSMCC_MT_V26_TER)
   {
      /* only 2400 bps is allowed. */
      if (data_bc_param_ptr->ur == CSMCC_UR_2_4_K)
      {
         *speed = CSMCC_2400_BPS_V26TER;
      }
      
      /* error combination. */
        
   }
   else if (data_bc_param_ptr->mt == CSMCC_MT_V22_BIS)
   {
      /* only 2400 bps is allowed. */
      if (data_bc_param_ptr->ur == CSMCC_UR_2_4_K)
      {
         *speed = CSMCC_2400_BPS_V22BIS;
      }
      
      /* error combination. */        
   }
   else if (data_bc_param_ptr->mt == CSMCC_MT_AUTOBAUDING)
   {
      *speed = CSMCC_AUTOBAUDING;
   } 
   
   /* else : error combination or MS not support. */
      
   return;
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_compose_cbst_name
* DESCRIPTION                                                           
*    This function is used to compose cbst bearer name by data parameter of context. 
*
* CALLS  
*
* PARAMETERS
*	*name	OUT	first variable, used as output
* RETURNS
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_compose_cbst_name(kal_uint8 *name)
{  
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);

   *name = CSMCC_INVALID_BEARER_NAME;
   
   if (data_bc_param_ptr->itc == CSMCC_OTHER_ITC 
         && data_bc_param_ptr->other_itc == CSMCC_ITC_RDI )
   {
      if (data_bc_param_ptr->sync == CSMCC_ASYNC_DATA)
      {
         *name = CSMCC_DATA_ASYNC_RDI;
      }
      else
      {
         *name = CSMCC_DATA_SYNC_RDI;
      }
   }
   else if (data_bc_param_ptr->itc == CSMCC_ITC_3_1_K_AUDIO
      || data_bc_param_ptr->itc == CSMCC_ITC_UDI)
   {
       if (data_bc_param_ptr->sync == CSMCC_ASYNC_DATA)
       {
          *name = CSMCC_DATA_ASYNC;
       }
       else
       {
          *name = CSMCC_DATA_SYNC;    
       }
   }
   
   /* Invalid combination or MS not support */
   
}

#endif /* ~  __SATCE__ */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_in_call_status
* DESCRIPTION                                                           
*   This function used to get if call status is active
*
* CALLS  
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_in_call_status(void)
{ 
   kal_uint8 call_index;

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK
         && (GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE
         || GET_CALL_STATE(call_index) ==CSMCC_CALL_MODIFY
         || GET_CALL_STATE(call_index) ==CSMCC_CALL_HOLD_REQ
         || GET_CALL_STATE(call_index) ==CSMCC_CALL_HOLD
         || GET_CALL_STATE(call_index) ==CSMCC_CALL_RETRIEVE_REQ))
      {
         return KAL_TRUE;
      }
   }

   return KAL_FALSE;

} /* end of csmcc_in_call_status */

#ifdef __SAT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_is_emergency_num
* DESCRIPTION                                                           
*    This function used to check if this is "112" emergency number.
*
* CALLS  
*	csmcc_is_emergency_num(kal_uint8 *num_ptr, kal_uint8 num_len)
*
* PARAMETERS
*  num_ptr  IN first variable
*  num_len  IN second   variable
* RETURNS
*	true or false
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_is_emergency_num(kal_uint8 *num_ptr, kal_uint8 num_len)
{
   if(num_len != 3)
   {
      /* the len of '112'+type in BCD format is 3 */
      return KAL_FALSE;
   }

   if(num_ptr[1] == 0x11 && num_ptr[2] == 0xf2)
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;

} /* csmcc_is_emergency_num */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_update_sat_call_context
* DESCRIPTION                                                           
*    This function is used to update sat call context. 
*
* CALLS  
*	csmcc_update_sat_call_context(kal_uint8 call_id,
*                       sat_call_ctrl_by_sim_cnf_struct *call_ctrl_cnf_ptr)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*  call_ctrl_cnf_ptr IN second variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_update_sat_call_context(kal_uint8 call_id,
                sat_call_ctrl_by_sim_cnf_struct *call_ctrl_cnf_ptr,
                peer_buff_struct *peer_buff_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 *addr_buff_ptr;
   kal_uint16 len = 0;
   
   csmcc_call_context_struct *call_context_ptr;

   call_context_ptr = &(CALL_ENTRY(call_id));
       
   if(peer_buff_ptr != NULL && peer_buff_ptr->pdu_len > 0)   
   {                                           
      addr_buff_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);

      call_context_ptr->number_present = KAL_TRUE;
      if((kal_uint8)peer_buff_ptr->pdu_len > L4_MAX_ADDR_BCD)
      {
         call_context_ptr->number.addr_length = L4_MAX_ADDR_BCD;
      }
      else
      {
         call_context_ptr->number.addr_length = (kal_uint8)peer_buff_ptr->pdu_len;
      }                 
         
      kal_mem_set(call_context_ptr->number.addr_bcd, 
                  0xff, 
                  sizeof(call_context_ptr->number.addr_bcd));            
         
      kal_mem_cpy(call_context_ptr->number.addr_bcd, 
                  addr_buff_ptr, 
                  call_context_ptr->number.addr_length);

	//mtk00924_061018: SIM may change the number to a number including p or w, so CSM should check dtmf here
      csmcc_check_called_number(call_id, &(call_context_ptr->number));	  

      if(csmcc_is_emergency_num(addr_buff_ptr, 
                             (kal_uint8)peer_buff_ptr->pdu_len) == KAL_TRUE)
      {
#ifdef __EMLPP_SUPPORT__
         call_context_ptr->call_priority = CSMCC_CALL_PRIORITY_0;         
#endif 
         CSMCC_PTR->csmcc_emergency_call_id = call_id;
      }
   }
#ifdef __SUBADDR_SUPPORT__         
   if(call_ctrl_cnf_ptr->size_of_subaddr > 0)
   {
      call_context_ptr->sub_addr_present = KAL_TRUE;
      
      if(call_ctrl_cnf_ptr->size_of_subaddr > L4_MAX_SUB_ADDR)
      {
         call_context_ptr->sub_addr.sub_addr_len = L4_MAX_SUB_ADDR;
      }
      else
      {
         call_context_ptr->sub_addr.sub_addr_len = call_ctrl_cnf_ptr->size_of_subaddr;
      }

      kal_mem_cpy(call_context_ptr->sub_addr.sub_addr, 
                  call_ctrl_cnf_ptr->subaddr, 
                  call_context_ptr->sub_addr.sub_addr_len);
   }
#endif
   
} /* end of csmcc_update_sat_call_context */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_sat_call_context
* DESCRIPTION                                                           
*    This function is used to fill sat call context. 
*
* CALLS  
*	csmcc_fill_sat_call_context(kal_uint8 call_id,
*                       l4ccsm_cc_sat_setup_req_struct *sat_setup_req_ptr,
*                       peer_buff_struct *peer_buff_ptr)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*  sat_setup_req_ptr IN second variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_sat_call_context(kal_uint8 call_id,
                l4ccsm_cc_sat_setup_req_struct *sat_setup_req_ptr,
                peer_buff_struct *peer_buff_ptr)
{
   CSMCC_PTR_G_TO_L
   csmcc_call_context_struct *call_context_ptr;
   kal_uint16 len = 0;

   call_context_ptr = &(CALL_ENTRY(call_id));

   call_context_ptr->src_id = sat_setup_req_ptr->src_id;
   call_context_ptr->call_id = call_id;
   call_context_ptr->call_orig = CSMCC_MO_CALL;
#ifdef __EMLPP_SUPPORT__
   if(sat_setup_req_ptr->is_emergency_call == KAL_FALSE)
	   call_context_ptr->call_priority = CSMCC_CALL_PRIORITY_3;
   else
   	   call_context_ptr->call_priority = CSMCC_CALL_PRIORITY_0;
#endif 
   if (sat_setup_req_ptr->is_emergency_call)
   {
       CSMCC_PTR->csmcc_emergency_call_id = call_id ;
   }
   call_context_ptr->sat_call_type = sat_setup_req_ptr->sat_call_type;
   /*mtk01602:store tom in call context and send back to L4C in setup_cnf */
   call_context_ptr->type_of_modification = sat_setup_req_ptr->type_of_modification; 
   
   /* call type is filled in csmcc_is_sat_call_compat() */

   /* fill number */
   if(peer_buff_ptr != NULL && peer_buff_ptr->pdu_len > 0)
   {   
      call_context_ptr->number_present = KAL_TRUE;
      if((kal_uint8)peer_buff_ptr->pdu_len > L4_MAX_ADDR_BCD)
      {
         call_context_ptr->number.addr_length = L4_MAX_ADDR_BCD;
      }
      else
      {
      call_context_ptr->number.addr_length = (kal_uint8)peer_buff_ptr->pdu_len;
      }
      kal_mem_cpy(call_context_ptr->number.addr_bcd,
                  get_peer_buff_pdu(peer_buff_ptr, &len),
                  call_context_ptr->number.addr_length);
   }

   /* check auto DTMF */ 
   csmcc_check_called_number(call_id, &(call_context_ptr->number));   
#ifdef __SUBADDR_SUPPORT__
   if(sat_setup_req_ptr->called_sub_addr_present == KAL_TRUE)
   {
      call_context_ptr->sub_addr_present = KAL_TRUE;      
      call_context_ptr->sub_addr = sat_setup_req_ptr->called_sub_addr;
   }
#endif
   /* MAUI_01736966 [L4C][CSM] STK support clir */
   if(sat_setup_req_ptr->clir_info_present == KAL_TRUE)
   {
      call_context_ptr->clir_info = sat_setup_req_ptr->clir_info;
   }
   else
   {
      call_context_ptr->clir_info = CSMCC_INVALID_CLIR_INFO;
   }

} /* end of csmcc_fill_sat_call_context */

#endif /* __SAT__ */

#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_map_csd_ur
* DESCRIPTION                                                           
*  This function is used to map CSM user rate to CSD user rate
*
* CALLS  
*	csmcc_csd_ur_mapping(kal_uint8 *csd_ur, kal_bool *isFR)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_csd_ur_mapping(kal_uint8 *csd_ur, kal_bool *isFR)
{
   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_GROUP_2, CSMCC_CH_TYPE_AND_CH_MODE, 
               CSMCC_PTR->channel_type, CSMCC_PTR->channel_mode);
   if(CSMCC_PTR->rat == RAT_GSM)
   {        
     switch(CSMCC_PTR->channel_type)
     {
        case TCH_H_0:
        case TCH_H_1:
        case TCH_H:
           *isFR = KAL_FALSE;
           break;
        default:
           *isFR = KAL_TRUE;
           break;
     }

     switch(CSMCC_PTR->channel_mode)
     {
        case DATA_14_5_RADIO_INTF_RATE:
           *csd_ur = CSD_USER_RATE_14400;
           break;      
        case DATA_12_0_RADIO_INTF_RATE:
           *csd_ur = CSD_USER_RATE_9600;
           break;      
        case DATA_06_0_RADIO_INTF_RATE:
           *csd_ur = CSD_USER_RATE_4800;
           break;      
        case DATA_03_6_RADIO_INTF_RATE:
           *csd_ur = CSD_USER_RATE_2400;
           break;      
        default:
           /* non-supported channel mode */
           return KAL_FALSE;
     }
  }
#ifdef __UMTS_RAT__
   else if (CSMCC_PTR->rat == RAT_UMTS)
   {
   	*isFR = KAL_TRUE;
   	switch(CSMCC_PTR->at_param.bearer_service_type.bearer_speed)
   	{  
      		case CSMCC_2400_BPS_V22BIS:
      		case CSMCC_2400_BPS_V26TER:
      		case CSMCC_2400_BPS_V120:
      		case CSMCC_2400_BPS_V110:	
         		*csd_ur = CSD_USER_RATE_2400;
         		break;      
      		case CSMCC_4800_BPS_V32:
      		case CSMCC_4800_BPS_V120:
      		case CSMCC_4800_BPS_V110:
         		*csd_ur = CSD_USER_RATE_4800;
         		break;      
         	case CSMCC_AUTOBAUDING:	
      		case CSMCC_9600_BPS_V32:
      		case CSMCC_9600_BPS_V34:	
      		case CSMCC_9600_BPS_V120:	
      		case CSMCC_9600_BPS_V110:	
         		*csd_ur = CSD_USER_RATE_9600;
         		break;
         	case CSMCC_14400_BPS_V34:
         	case CSMCC_14400_BPS_V120:
         	case CSMCC_14400_BPS_V110:
         		*csd_ur = CSD_USER_RATE_14400;	
         		break;      
         	case CSMCC_19200_BPS_V34:
         	case CSMCC_19200_BPS_V120:
         	case CSMCC_19200_BPS_V110:
         		*csd_ur = CSD_USER_RATE_19200;
         		break;
         	case CSMCC_28800_BPS_V34:
         	case CSMCC_28800_BPS_V120:
         	case CSMCC_28800_BPS_V110:
         		*csd_ur = CSD_USER_RATE_28800;
         		break;    
         	case CSMCC_38400_BPS_V120:
         	case CSMCC_38400_BPS_V110:
         		*csd_ur = CSD_USER_RATE_38400;
         		break;             		
         	case CSMCC_48000_BPS_V120:
         	case CSMCC_48000_BPS_V110:
         		*csd_ur = CSD_USER_RATE_48000;
         		break;    
         	case CSMCC_56000_BPS_V120:
         	case CSMCC_56000_BPS_V110:
	#ifdef __SYNC_HDLC_CSD__
		case CSMCC_56000_BPS_TRANSPARENT:
	#endif
         		*csd_ur = CSD_USER_RATE_56000;
         		break;

 	#ifdef __SYNC_HDLC_CSD__
		case CSMCC_64000_BPS_TRANSPARENT:
			*csd_ur = CSD_USER_RATE_64000;
			break;
	#endif /* __SYNC_HDLC_CSD__ */
	
      		default:
         		/* non-supported channel mode */
         		return KAL_FALSE;
   	}
   }
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
	return KAL_FALSE;
   }
#endif /*__UMTS_RAT__*/   
   return KAL_TRUE;
   
}  /* end of csmcc_csd_ur_mapping */

#endif /* __CSD_T__ || __CSD_NT__ */

#ifdef __CSD_T__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_tdt_data
* DESCRIPTION                                                           
*    This function is used to activate TDT data plane. 
*
* CALLS  
*	csmcc_activate_tdt_data(kal_uint8 call_type)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_tdt_data(kal_uint8 call_type)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 csd_ur;
   kal_bool isFR;

   if(csmcc_csd_ur_mapping(&csd_ur, &isFR) == KAL_TRUE)
   {
      csm_tdt_activate_req_struct *tdt_act_req_ptr;
      CSMCC_CONSTRUCT_LOCAL_PARA(tdt_act_req_ptr,
                                 csm_tdt_activate_req_struct)

      tdt_act_req_ptr->user_rate = csd_ur;
      tdt_act_req_ptr->isFR = isFR;
      tdt_act_req_ptr->rat = CSMCC_PTR->rat; 
      if(call_type == CSMCC_DATA_CALL)
      {
         tdt_act_req_ptr->user_app = CSD_APP_UART;
      }
#ifdef __TCPIP_OVER_CSD__
      else if(call_type == CSMCC_CSD_CALL)
      {
         tdt_act_req_ptr->user_app = CSD_APP_PPP;
      }
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
      else if(call_type == CSMCC_SAT_DATA_CALL)
      {
         /*mtk01602, 071031: [MAUI568781]*/
         //tdt_act_req_ptr->user_app = CSD_APP_SAT;
         tdt_act_req_ptr->user_app = CSD_APP_PPP;
      }
#endif    
      else
      {
         free_local_para((local_para_struct *)tdt_act_req_ptr);
         return CSMCC_ERROR;
      }      

      csmcc_send_ilm(tdt_act_req_ptr,
                     MSG_ID_CSM_TDT_ACTIVATE_REQ,
                     MOD_TDT,
                     NULL);      

      return CSMCC_NO_ERROR;                     
   }

   return CSMCC_ERROR;

} /* end of csmcc_activate_tdt_data */

#endif /* __CSD_T__ */

#ifdef __CSD_NT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_rlp_data
* DESCRIPTION                                                           
*    This function is used to activate RLP data plane. 
*
* CALLS  
*	csmcc_activate_rlp_data(kal_uint8 call_type)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_rlp_data(kal_uint8 call_type)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 csd_ur;
   kal_bool is_FR;

   if(csmcc_csd_ur_mapping(&csd_ur, &is_FR) == KAL_TRUE)
   {
      csm_l2r_activate_req_struct *l2r_act_req_ptr;

      CSMCC_CONSTRUCT_LOCAL_PARA(l2r_act_req_ptr,
                                 csm_l2r_activate_req_struct)

      l2r_act_req_ptr->user_rate = csd_ur;
      l2r_act_req_ptr->is_FR = is_FR;
      l2r_act_req_ptr->rat = CSMCC_PTR->rat;  
      if(call_type == CSMCC_DATA_CALL)
      {
         l2r_act_req_ptr->user_app = CSD_APP_UART;
      }
#ifdef __TCPIP_OVER_CSD__
      else if(call_type == CSMCC_CSD_CALL)
      {
         l2r_act_req_ptr->user_app = CSD_APP_PPP;
      }
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
      else if(call_type == CSMCC_SAT_DATA_CALL)
      {
         /*mtk01602, 071031: [MAUI568781]*/         
         //l2r_act_req_ptr->user_app = CSD_APP_SAT;
         l2r_act_req_ptr->user_app = CSD_APP_PPP;
      }
#endif    
      else
      {
         free_local_para((local_para_struct *)l2r_act_req_ptr);
         return CSMCC_ERROR;
      }            

      l2r_act_req_ptr->is_xid_params_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.version_num_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.version_num = CSMCC_PTR->data_bc_param.rlp_param.rlp_ver;
      l2r_act_req_ptr->xid_params.wsize_ms_iwf_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.wsize_ms_iwf = CSMCC_PTR->data_bc_param.rlp_param.rlp_mws;
      l2r_act_req_ptr->xid_params.wsize_iwf_ms_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.wsize_iwf_ms = CSMCC_PTR->data_bc_param.rlp_param.rlp_iws;
      l2r_act_req_ptr->xid_params.t1_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.t1 = CSMCC_PTR->data_bc_param.rlp_param.rlp_T1;
      l2r_act_req_ptr->xid_params.n2_p = KAL_TRUE;
      l2r_act_req_ptr->xid_params.n2 = CSMCC_PTR->data_bc_param.rlp_param.rlp_N2;

      csmcc_send_ilm(l2r_act_req_ptr,
                     MSG_ID_CSM_L2R_ACTIVATE_REQ,
                     MOD_L2R,
                     NULL);            
                     
      return CSMCC_NO_ERROR;                     
   }

   return CSMCC_ERROR;

} /* end of csmcc_activate_rlp_data */

#endif /* __CSD_NT__ */

#if defined(__CSD_T__) || defined(__CSD_NT__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_data
* DESCRIPTION                                                           
*    This function is used to activate TDT or RLP data plane. 
*
* CALLS  
*	csmcc_activate_data(kal_uint8 call_type)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_data(kal_uint8 call_type)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val = CSMCC_ERROR;
   kal_uint8 ce = CSMCC_PTR->data_bc_param.ce; 
   CSMCC_PTR->activate_data_call_ce = ce; /* MAUI_01789039 */

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   if(call_type == CSMCC_SAT_DATA_CALL)
   {
  	ce = CSMCC_PTR->sat_prof.sat_cbst.ce;
   }
#endif
   if(CSMCC_PTR->rat == RAT_GSM)
   {
     if(ce == CSMCC_TRANSPARENT)
     {
#ifdef __CSD_T__
        ret_val = csmcc_activate_tdt_data(call_type);
#endif
     }
     else if(CSMCC_PTR->data_bc_param.ce == CSMCC_NON_TRANSPARENT)
     {
#ifdef __CSD_NT__
        ret_val = csmcc_activate_rlp_data(call_type);
#endif
     }
   } 
#ifdef __UMTS_RAT__
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {
   	if(ce == CSMCC_NON_TRANSPARENT)
   	{
	#ifdef __CSD_NT__
      		ret_val = csmcc_activate_rlp_data(call_type);
	#endif
   	}
   #ifdef __SYNC_HDLC_CSD__
        else if(ce == CSMCC_TRANSPARENT)
        {
            ret_val = csmcc_activate_tdt_data(call_type);
        }
   #endif /* __SYNC_HDLC_CSD__ */
   }
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }
#endif /*__UMTS_RAT__*/
   if(ret_val == CSMCC_NO_ERROR)
   {
      CSMCC_PTR->attach_status = CSMCC_DATA_ATTACH_REQ;
   }
     
   return ret_val;
   
}  /* end of csmcc_activate_data */ 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_deactivate_data
* DESCRIPTION                                                           
*    This function is used to deactivate TDT or RLP data plane. 
*
* CALLS  
*	csmcc_deactivate_data()
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_deactivate_data(void)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val = CSMCC_ERROR;

   if(CSMCC_PTR->activate_data_call_ce == CSMCC_TRANSPARENT) /* MAUI_01789039 */
   {
#ifdef __CSD_T__
      csmcc_send_ilm(NULL, MSG_ID_CSM_TDT_DEACTIVATE_REQ, MOD_TDT,NULL);
      ret_val = CSMCC_NO_ERROR;
#endif
   }
   else if(CSMCC_PTR->activate_data_call_ce == CSMCC_NON_TRANSPARENT) /* MAUI_01789039 */
   {
#ifdef __CSD_NT__
      csmcc_send_ilm(NULL, MSG_ID_CSM_L2R_DEACTIVATE_REQ, MOD_L2R,NULL);
      ret_val = CSMCC_NO_ERROR;
#endif 
   }

   if(ret_val == CSMCC_NO_ERROR)
   {
      CSMCC_PTR->attach_status = CSMCC_DETACH;
   }
   
   return ret_val;
   
}   /* end of csmcc_deactivate_data */

#endif /* __CSD_T__ || __ CSD_NT__ */

#ifdef __CSD_FAX__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_fax
* DESCRIPTION                                                           
*    This function is used to activate T30 fax path. 
*
* CALLS  
*	
* PARAMETERS
*   CSD_FAX_DIRECTION_ENUM fax_direction
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_fax(kal_uint8 call_id, CSD_FAX_DIRECTION_ENUM fax_direction)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 csd_ur;
   kal_bool isFR;
   G3_SERVICE_CLASS_ENUM flacss;

   kal_brief_trace(TRACE_GROUP_2, CSMCC_ACTIVATE_FAX);

   /* check if fclass in FAX mode and map to Fax interface. */
   switch(CSMCC_PTR->at_param.fclass_mode )
   {
      case CSMCC_FAX_CLASS_1_TIA:
         flacss = G3_SERV_CLASS_1;
         break;

      case CSMCC_FAX_CLASS_1_ITUT:
         flacss = G3_SERV_CLASS_1_0;
         break;

      case CSMCC_FAX_MANU_SPECIFIC:
         flacss = G3_SERV_CLASS_2;
         break;

      case CSMCC_FAX_CLASS_2:
         flacss = G3_SERV_CLASS_2_0;
         break;

      default:
         /* Not in FAX mode. */
         return CSMCC_ERROR;
   }

   if(csmcc_csd_ur_mapping(&csd_ur, &isFR) == KAL_TRUE)
   {            
      csm_t30_activate_req_struct *t30_act_req_ptr;

      CSMCC_CONSTRUCT_LOCAL_PARA(t30_act_req_ptr,
                                 csm_t30_activate_req_struct)

      t30_act_req_ptr->access_rate = csd_ur;
      t30_act_req_ptr->is_FR = isFR;     
      t30_act_req_ptr->fax_direction = fax_direction;
      t30_act_req_ptr->serv_class = flacss;
      t30_act_req_ptr->rat = CSMCC_PTR->rat;
      if (CALL_DATA(call_id, call_mode) == CSMCC_SINGLE_MODE)
      {
         t30_act_req_ptr->alt_speech = KAL_FALSE;
      }
      else
      {
          t30_act_req_ptr->alt_speech = KAL_TRUE;
      }

      CSMCC_PTR->attach_status = CSMCC_DATA_ATTACH_REQ;
      
      csmcc_send_ilm(t30_act_req_ptr,
                     MSG_ID_CSM_T30_ACTIVATE_REQ,
                     MOD_T30,
                     NULL);      
      
      return CSMCC_NO_ERROR;                     
   }

   return CSMCC_ERROR;
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_deactivate_fax
* DESCRIPTION                                                           
*    This function is used to deactivate T30 fax plane. 
*
* CALLS  
*	csmcc_deactivate_fax()
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_deactivate_fax(void)
{   
   CSMCC_PTR_G_TO_L
   csmcc_send_ilm(NULL, MSG_ID_CSM_T30_DEACTIVATE_REQ, MOD_T30,NULL);

   CSMCC_PTR->attach_status = CSMCC_DETACH;
  
   return CSMCC_NO_ERROR;
   
}   /* end of csmcc_deactivate_data */

#endif
#ifdef __VIDEO_CALL_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_vt
* DESCRIPTION                                                           
*    This function is used to activate 3G324M task. 
*
* CALLS  
*	csmcc_activate_vt(kal_uint8 call_type)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_vt(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val = CSMCC_ERROR;

   if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
   {
     /* [NOKIA_IOT][DEBUG] CSM ACTIVATE 2nd time Skip and Return */

     return CSMCC_ERROR;
   }
   
   if(CSMCC_PTR->rat == RAT_GSM)
   {
   	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
	return CSMCC_ERROR;
   } 
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {
   	csm_vt_activate_req_struct *vt_act_req_ptr;

	CSMCC_CONSTRUCT_LOCAL_PARA(vt_act_req_ptr,
							  csm_vt_activate_req_struct)   
							  
	vt_act_req_ptr->call_id = call_id;
	
      	csmcc_send_ilm(vt_act_req_ptr,
                     MSG_ID_CSM_VT_ACTIVATE_REQ,
                     MOD_VT,
                     NULL);    
		
	ret_val = CSMCC_NO_ERROR;	
   }
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }

   if(ret_val == CSMCC_NO_ERROR)
   {
      CSMCC_PTR->attach_status = CSMCC_DATA_ATTACH_REQ;
   }
     
   return ret_val;
   
}  /* end of csmcc_activate_vt */ 

/*************************************************************************
* FUNCTION                                                            
*	csmcc_deactivate_vt
* DESCRIPTION                                                           
*    This function is used to deactivate 3G324M task. 
*
* CALLS  
*	csmcc_deactivate_vt(kal_uint8 call_type)
*
* PARAMETERS
*
* RETURNS
*	failure or success
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_deactivate_vt(kal_uint8 call_id, kal_uint8 call_end_type)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val = CSMCC_ERROR;

   if(CSMCC_PTR->attach_status == CSMCC_DETACH)
   {
     /* [NOKIA_IOT][DEBUG] CSM DEACTIVATE 2nd time Skip and Return */

     return CSMCC_ERROR;
   }
   
   if(CSMCC_PTR->rat == RAT_GSM)
   {
   	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
	return CSMCC_ERROR;
   } 
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {
   	csm_vt_deactivate_req_struct *vt_deact_req_ptr;

	CSMCC_CONSTRUCT_LOCAL_PARA(vt_deact_req_ptr,
							  csm_vt_deactivate_req_struct)   
							  
	vt_deact_req_ptr->call_id = call_id;
	vt_deact_req_ptr->call_end_type = call_end_type;
	
      	csmcc_send_ilm(vt_deact_req_ptr,
                     MSG_ID_CSM_VT_DEACTIVATE_REQ,
                     MOD_VT,
                     NULL);    
	ret_val = CSMCC_NO_ERROR;	
   }
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }

   if(ret_val == CSMCC_NO_ERROR)
   {
      CSMCC_PTR->attach_status = CSMCC_DETACH;
   }
     
   return ret_val;
   
}  /* end of csmcc_deactivate_vt */ 

#endif /*__VIDEO_CALL_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	csmcc_disc_call
* DESCRIPTION                                                           
*    This function is used to disconnect a call. 
*
* CALLS  
*	csmcc_disc_call(kal_uint8 call_id, kal_uint16 cause)
*
* PARAMETERS
*  call_id  IN first variable, used as input
*  cause    IN second variable, used as input
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_disc_call(kal_uint8 call_id, kal_uint16 cause)
{
   CSMCC_PTR_G_TO_L


   //CSMCC_PTR->is_ibt = KAL_FALSE;
   if (GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
      return;
   }
#ifdef __AOC_SUPPORT__
   if(csmcc_find_other_aoc_call(call_id) == CSMCC_ERROR)
   {
       csmcc_stop_aoc_timer(call_id);
       /*CR_ID reset CDUR if no other call exist */
       csmcc_reset_cdur();
       csmcc_increase_acm();
   }
#endif
#ifdef __CSMCC_CALLCONFIRM_TIMER__
   csmcc_stop_call_confirm_timer(call_id);
#endif
   if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
   {
      /* stop sending auto dtmf tone */
      csmcc_stop_auto_dtmf(call_id);
      /* MAUI_01643590 UK_FT_weird_sound */
      csmcc_check_if_detach_speech(call_id);
   }
      
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__) || defined(__VIDEO_CALL_SUPPORT__)   //cosine:fallback         
   else if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
           || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
   {
      switch(GET_CALL_TYPE(call_id))
      {
#if defined(__CSD_T__) || defined(__CSD_NT__)
         case CSMCC_DATA_CALL:
#ifdef __TCPIP_OVER_CSD__
         case CSMCC_CSD_CALL:
#endif         
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         case CSMCC_SAT_DATA_CALL:
#endif      

	//if(GET_CALL_STATE(call_id) == CSMCC_CALL_ACTIVE || GET_CALL_STATE(call_id) == CSMCC_CALL_MODIFY)
	if(CSMCC_PTR->activate_data_call_id == call_id)
	{
            /* deactivate data call */
            if(csmcc_deactivate_data() == CSMCC_NO_ERROR)
            {
            	 CSMCC_PTR->activate_data_call_id = 0Xff;
               /* wait data deactivation confirm */
               return;
            }
	}
	else
	{
	     kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	}
          
            break;
#endif
#ifdef __CSD_FAX__
         case CSMCC_FAX_CALL:

	//if(GET_CALL_STATE(call_id) == CSMCC_CALL_ACTIVE || GET_CALL_STATE(call_id) == CSMCC_CALL_MODIFY)
	if(CSMCC_PTR->activate_data_call_id == call_id)	
	{         	
            /* deactivate fax call */
            csmcc_deactivate_fax();
	     CSMCC_PTR->activate_data_call_id = 0Xff;		
            /* wait fax deactivation confirm */
            return;
	}
	else
	{
	     kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	}	
	break;
#endif
#ifdef __VIDEO_CALL_SUPPORT__
	case CSMCC_VIDEO_CALL:
	if(CSMCC_PTR->activate_data_call_id == call_id)	
	{     
	     kal_uint8 call_end_type;
		 
	     if(GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC)
		 	call_end_type = VT_MT_DISC;
	     else
		 	call_end_type = VT_MO_DISC;
		 
            /* deactivate data call */
            csmcc_deactivate_vt(call_id, call_end_type);
            
            CSMCC_PTR->activate_data_call_id = 0xff;
            /* wait data deactivation confirm */
            return;
            
	}
	else
	{
	     kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	}	

	break;
#endif /*__VIDEO_CALL_SUPPORT__*/
     default: 
     break; 

      }
   }   
#endif   
   
   if(GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC
      || GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC_ON_HOLD)
   {
      /* NW initiated call clearing. NW has sent disconnect indication
         and user decides to release call. */
       
      csmcc_send_cc_rel_req(call_id, cause);
   }   
   else if(GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC)
   {
      /* MS initiated call clearing */
      csmcc_send_cc_disc_req(call_id, cause);
      
   #ifdef __SAT__ //mtk01602, 070727    
   #ifndef __SAT_LOWCOST_NW_DISABLE__
      {
   	   kal_uint8 sat_cause[30];
   	   kal_uint8 sat_cause_len = 0xff;
   	   mncc_cause_struct temp_cause;

         kal_mem_set(&temp_cause, 0, sizeof(mncc_cause_struct));
         temp_cause.cause_value = cause;	  
         sat_cause_len = csmcc_form_sat_cause((kal_uint8 *)&temp_cause, sat_cause);  

         /* the first disconnect occur, need to inform SIM. */
         csmcc_send_sim_call_disc_req( CALL_DATA(call_id,ti),
                               KAL_FALSE, /* is_far_end */
                               //KAL_TRUE, /*cause_p*/
                               //(kal_uint8) cause);
                               sat_cause_len,
                               sat_cause);
      }
   #endif /* __SAT_LOWCOST_NW_DISABLE__ */
   #endif
      
      csmcc_ctab_g.call_tab[call_id-1].pre_call_state = GET_CALL_STATE(call_id);

      kal_brief_trace(TRACE_INFO, CSMCC_SET_PRE_STATE, 
         call_id, GET_CALL_STATE(call_id));
   }
   
   SET_CALL_STATE(call_id, CSMCC_MS_CALL_DISC);
        
} /* end of csmcc_disc_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_form_l4c_rdn_addr
* DESCRIPTION                                                           
*    This function used to form remote party address used in SS parameter.
*
* CALLS  
*	csmcc_form_l4c_rdn_addr(l4ccsm_cc_rdn_addr_struct *l4c_rdn_addr,
*                          RemotePartyNumber *rdn_addr)
* PARAMETERS
*	l4c_rdn_addr	OUT	first variable, used as output
*	rdn_addr	      IN	   second variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/

void csmcc_form_l4c_rdn_addr(l4ccsm_cc_rdn_addr_struct *l4c_rdn_addr, RemotePartyNumber *rdn_addr)
{     
   if(rdn_addr->partyNumber->octsLen > L4_MAX_ADDR_BCD)
   {
      l4c_rdn_addr->partyNumber.addr_length = L4_MAX_ADDR_BCD;
   }
   else
   {
      l4c_rdn_addr->partyNumber.addr_length = (kal_uint8)rdn_addr->partyNumber->octsLen;
   }

   kal_mem_set(l4c_rdn_addr->partyNumber.addr_bcd,
               0xff,
               L4_MAX_ADDR_BCD);

   kal_mem_cpy(l4c_rdn_addr->partyNumber.addr_bcd, 
               rdn_addr->partyNumber->octs, 
               l4c_rdn_addr->partyNumber.addr_length);   
#ifdef __SUBADDR_SUPPORT__
   if(rdn_addr->partyNumberSubaddressOpt == KAL_TRUE)
   {
      l4c_rdn_addr->partyNumberSubaddress_present = KAL_TRUE;

      if(rdn_addr->partyNumberSubaddress->octsLen > L4_MAX_SUB_ADDR )
      {
         l4c_rdn_addr->partyNumberSubaddress.sub_addr_len = L4_MAX_SUB_ADDR ;
      }
      else
      {
      l4c_rdn_addr->partyNumberSubaddress.sub_addr_len = 
         (kal_uint8)rdn_addr->partyNumberSubaddress->octsLen;
      }

      kal_mem_cpy(l4c_rdn_addr->partyNumberSubaddress.sub_addr, 
                  rdn_addr->partyNumberSubaddress->octs, 
                  l4c_rdn_addr->partyNumberSubaddress.sub_addr_len);
   }
#endif
} /* end of csmcc_form_l4c_rdn_addr */

/*************************************************************************
* FUNCTION                                                            
* csmcc_first_read_sim_flag
* DESCRIPTION                                                           
*    This function used to find the first read sim flag
*
* CALLS  
*void csmcc_find_first_read_sim_flag(kal_uint8 * read_sim_flag)
*                         
* PARAMETERS
*
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/

kal_uint8  csmcc_first_read_sim_flag(void)

{
   CSMCC_PTR_G_TO_L
    kal_uint8 read_sim_flag = 1;
	kal_uint8 i=0;
    for (i=0; i<8;i++)
    {
        if ((CSMCC_PTR->startup_req & read_sim_flag))
        {
            read_sim_flag = CSMCC_PTR->startup_req & read_sim_flag;
            break;
        }
        else
        {
            read_sim_flag = read_sim_flag <<1;
        }
          
    }

    return (read_sim_flag);
}
#ifdef __GEMINI__
/*************************************************************************
* FUNCTION                                                            
* cc_get_csmcc_sim_interface
* DESCRIPTION                                                           
*    This function is used for CC to get the current using CSMCC MOD INTERFACE
*
* CALLS  
*kal_uint8  cc_get_csmcc_sim_interface(void)
*                         
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_uint8 cc_get_csmcc_sim_interface(void)
{
    if (csmcc_ctab_mod_id ==0)
    {
        return(CSMCC_DEFAULT_INTERFACE);
    }
    else
    {
        return (kal_uint8)(csmcc_ctab_mod_id-MOD_CSM);
    }    

}
#endif /*__GEMINI__*/


