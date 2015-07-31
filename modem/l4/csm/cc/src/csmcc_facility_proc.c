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
 *	csmcc_facility_proc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for component handling of call related 
 *   supplementary service in facility information element.
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

#define CSMCC_FACILITY_C

//#include "kal_release.h"      	/* Basic data type */

//#include "stack_common.h"  
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

#include "mcd_ss_parameters.h"
#include "mcd_ss_tcapmessages.h"
#include "mcd_l4_common.h"
#include "mcd.h"
//#include "app_buff_alloc.h"

#ifdef __SAT__
//#include "ps2sat_struct.h"  /* Ripple SATCE */
#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
//#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
//#include "l4c_common_enum.h"
#include "csmss_common_enums.h"
//#include "sim_common_enums.h"
//#include "nvram_enums.h"
#include "l4_defs.h"
#include "csmcc_defs.h"
//#include "csmcc_bc_defs.h"
//#include "csmcc_bc_types.h"

#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
#endif

#include "csmcc_types.h"
#include "csmcc_aux_msg_hdlr.h"
#include "csmcc_utility.h"
#include "csmcc_crss_proc.h"

#include "kal_trace.h"
#include "csm_trc.h"
//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

extern void cc_ss_comp_del(Component *comp);

extern kal_bool cc_ss_arg_unpack(kal_uint16 msgid,
                          kal_uint8 *pun_buff,
                          kal_uint16 pun_buff_len,
                          kal_uint8 *parameter,
                          kal_uint8 parameterLen);

/*************************************************************************
* FUNCTION                                                            
*	csmcc_call_deflection_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of call deflection
*   invocation from network.
*
* CALLS  
*	csmcc_call_deflection_result_hdlr(kal_uint8 call_id) 
* PARAMETERS
*	call_id IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_call_deflection_result_hdlr(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   if (CSMCC_PTR->cur_req == CSMCC_CALL_DEFLECTION_REQ)
   {       
      csmcc_send_l4c_call_deflection_succ(call_id);
   }
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_call_deflection_result_hdlr */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_access_register_cc_entry_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of access
*   register CC entry invocation from network.
*
* CALLS  
*	csmcc_access_register_cc_entry_result_hdlr(kal_uint8 call_id,
*                                             ReturnResult *rr)
* PARAMETERS
*	call_id IN	first variable, used as input
*	rr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_access_register_cc_entry_result_hdlr(kal_uint8 call_id,
                                                       ReturnResult *rr)
{   
   CSMCC_PTR_G_TO_L
   if (CSMCC_PTR->cur_req == CSMCC_ACTIVATE_CCBS_CALL_REQ)
   {
      csmcc_send_l4c_crss_succ(CSMCC_ACTIVATE_CCBS_CALL_REQ);

      CALL_DATA(call_id,ccbs_status) = CSMCC_CCBS_ACTIVATED;
   }
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_access_register_cc_entry_result_hdlr */

#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_explicit_call_transfer_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of explicit call transfer
*   invocation from network.
*
* CALLS  
*	csmcc_explicit_call_transfer_result_hdlr(kal_uint8 call_id)
* PARAMETERS
*	call_id IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_explicit_call_transfer_result_hdlr(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   if (CSMCC_PTR->cur_req == CSMCC_EXPLICIT_CALL_TRANSFER_REQ)
   {
      csmcc_send_l4c_crss_succ(CSMCC_EXPLICIT_CALL_TRANSFER_REQ);
   }
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_explicit_call_transfer_result_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_build_mpty_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of build mpty
*   invocation from network.
*
* CALLS  
*	csmcc_build_mpty_result_hdlr(void)
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_build_mpty_result_hdlr(void)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   
   if (CSMCC_PTR->cur_req == CSMCC_ADD_HELD_CALL_REQ)
   {
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_REQ)
         {
            SET_MPTY_STATE(call_index, CSMCC_MPTY_ACTIVE)
            /* MAUI_00917762 [CC][Fixbug] handle BUILD/HOLD/RETRIEVE MPTY with different return ti */
            /* reset invoke information of the call */
            csmcc_reset_inv_info(&CALL_DATA(call_index,inv_info));
         }
         
         if((GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE)
            && (GET_CALL_STATE(call_index) & CSMCC_ALL_DISC_STATES) == 0 ) /* ripple */
         {
            SET_CALL_STATE(call_index, CSMCC_CALL_ACTIVE)         
         }      
      }
      
      csmcc_send_l4c_crss_succ(CSMCC_ADD_HELD_CALL_REQ);
   }
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_build_mpty_result_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_split_mpty_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of split mpty
*   invocation from network.
*
* CALLS  
*	csmcc_split_mpty_result_hdlr(kal_uint8 call_id)
* PARAMETERS
*	call_id IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_split_mpty_result_hdlr(kal_uint8 call_id)
{
   
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_uint8 mpty_call_num;
   kal_uint8 held_call_id;
   
   /* local var init */
   mpty_call_num = 0;
   
   if (CSMCC_PTR->cur_req == CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ)
   {
      SET_MPTY_STATE(call_id, CSMCC_MPTY_IDLE)
      
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if((GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE)
            && (GET_CALL_STATE(call_index) & CSMCC_ALL_DISC_STATES) == 0 ) /* ripple */
         {
            held_call_id = call_index;
            SET_CALL_STATE(held_call_id, CSMCC_CALL_HOLD)
            mpty_call_num++;
         }
      }

   #if 0  /* ignore this step for test case 31.4.2.1.2.1 */     
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif   
       
      csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ);
   }
         
   return CSMCC_NO_ERROR;

} /* end of csmcc_split_mpty_result_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_mpty_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of hold mpty
*   invocation from network.
*
* CALLS  
*	csmcc_hold_mpty_result_hdlr(kal_uint8 call_id)
* PARAMETERS
*	call_id IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_mpty_result_hdlr(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   #ifdef __EMLPP_SUPPORT__
   kal_uint8 waiting_call_id;
   #endif
   kal_uint8 retrieve_req_call_id;
   
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_HOLD);
   
   switch(CSMCC_PTR->cur_req)   
   {
      /* ripple */
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:

         /* send emergency call setup to CC */
         csmcc_send_cc_emergency_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         
         break;

      case CSMCC_CALL_SETUP_REQ:

         /* hold mpty call successfully, send call setup request to CC */
         
         csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         
         break;

 #ifdef __EMLPP_SUPPORT__
      case CSMCC_CALL_PREEMPT_REQ:
         
         /* hold pre-empted mpty call successfully, accept waiting call */
         
         ret_val = csmcc_find_waiting_call(&waiting_call_id);
         
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* accept the waiting call */
            ret_val = csmcc_accept_mt_call(waiting_call_id);
            
            if(ret_val == CSMCC_NO_ERROR)
            {
               /* update current request */            
               csmcc_update_cur_req(CSMCC_AUTO_ANSWER_REQ,
                                    CSMCC_INVALID_SRC_ID,
                                    waiting_call_id);
            }
            else
            {
               /* reset non-L4C request */
               csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
            }                                  
         }
         else
         {
            /* beause no waiting call exists now, reset non-L4C request */
            csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
         }
         break;
 #endif /* __EMLPP_SUPPORT__ */
         
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         if(CSMCC_PTR->aux_req == CSMCC_NO_REQ)
         {
            csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);            
         }
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_WAITING_CALL_REQ
                 || CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
         {
            /* check if it is allowed to accept any call first */
            if(csmcc_is_allowed_accept_call() == KAL_FALSE)
            {      
               /* now it is not allowed to accept any call */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CSMCC_CALL_ACCEPT_NOT_ALLOW);         
               break;
            }

            ret_val = csmcc_accept_other_call((kal_uint8)CSMCC_PTR->aux_req, 
				                                  CSMCC_PTR->aux_req_call_id);
            
            CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
            
            if(ret_val != CSMCC_NO_ERROR)
            {
               /* now it is not allowed to accept any call */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        ret_val);         
            }
         }
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_HELD_CALL_REQ)
         {
            ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                      CSMCC_CALL_RETRIEVE_REQ,
                                      &retrieve_req_call_id);

            if(ret_val != CSMCC_NO_ERROR)
            {
               if(GET_CALL_STATE(CSMCC_PTR->aux_req_call_id) == CSMCC_CALL_ACTIVE)
               {
                  /* The aux_call has been retrieved succ. */
               csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);         
            }
               else
               {
                  /* no call is at retrieve_req, and it is not active, it must be released. */
                  csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CM_SS_ERR_SS_ERRORSTATUS);                              
               }                   
            }
         }
         
         break;
         
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:
         
         /* call swap, wait call retrieve ack */
                  
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:

         /* hold mpty call successfully, send call setup request to CC */
         
         csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         
         break;
#endif /* __SAT__ */
      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */ 
         break;
       
   } /* switch(cur_req) */
   
   /* detach speech if necessary */
   csmcc_detach_speech();

   return CSMCC_NO_ERROR;

} /* end of csmcc_hold_mpty_result_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_retrieve_mpty_result_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component of retrieve mpty
*   invocation from network.
*
* CALLS  
*	csmcc_retrieve_mpty_result_hdlr(kal_uint8 call_id)
* PARAMETERS
*	call_id IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_retrieve_mpty_result_hdlr(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_ACTIVE);
      
   switch(CSMCC_PTR->cur_req)   
   {

      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:

         csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
                  
         break;
                  
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         
         if(csmcc_find_call(CSMCC_ORIG_NONE, 
                            CSMCC_CALL_HOLD_REQ, 
                            NULL) != CSMCC_NO_ERROR)
         {         
            csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);         
         }

         break;
         
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:
      
         /* construct mncc_facility_req(SplitMPTY, TI)*/
         /* csmcc_send_ilm(CC, CC_APP_FACILITY_REQ) */
         
         break;
      
      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */ 
         break;
       
   } /* switch(cur_req) */
   
   /* attach speech if necessary */
   csmcc_attach_speech();

   return CSMCC_NO_ERROR;

} /* end of csmcc_retrieve_mpty_result_hdlr */



/*************************************************************************
* FUNCTION                                                            
*	csmcc_call_deflection_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of call deflection
*   invocation from network.
*
* CALLS  
*	csmcc_call_deflection_error_hdlr(kal_uint8 call_id, kal_uint8 error_code)
* PARAMETERS
*	call_id		IN	first variable, used as input
*       error_code	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_call_deflection_error_hdlr(kal_uint8 call_id, 
                                                 kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_CALL_DEFLECTION_REQ)
   {
      csmcc_send_l4c_call_deflection_error(CSMCC_PTR->req_src_id, 
                                           call_id,
                                           error_code);
   }      
   return CSMCC_NO_ERROR;

} /* end of csmcc_call_deflection_error_hdlr */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_access_register_cc_entry_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of access register CC
*   entry invocation from network.
*
* CALLS  
*	csmcc_access_register_cc_error_hdlr(kal_uint8 call_id, 
                                            kal_uint8 error_code)
* PARAMETERS
*	call_id		IN	first variable, used as input
*       error_code	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_access_register_cc_entry_error_hdlr(kal_uint8 call_id, 
                                                          kal_uint8 error_code)
{   
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_ACTIVATE_CCBS_CALL_REQ)
   {   
      CALL_DATA(call_id,ccbs_status) = CSMCC_CCBS_NONE;
      
      csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                CSMCC_ACTIVATE_CCBS_CALL_REQ, 
                                error_code);
   }      
   return CSMCC_NO_ERROR;

} /* end of csmcc_access_register_cc_error_hdlr */
#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_explicit_call_transfer_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of explicit call
*   transfer invocation from network.
*
* CALLS  
*	csmcc_explicit_call_transfer_error_hdlr(kal_uint8 error_code)
* PARAMETERS
*       error_code	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_explicit_call_transfer_error_hdlr(kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_EXPLICIT_CALL_TRANSFER_REQ)
   {
      csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                CSMCC_EXPLICIT_CALL_TRANSFER_REQ, 
                               error_code);
   }
   return CSMCC_NO_ERROR;

} /* end of csmcc_explicit_call_transfer_error_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_build_mpty_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of build mpty
*   invocation from network.
*
* CALLS  
*	csmcc_build_mpty_error_hdlr(kal_uint8 error_code)
* PARAMETERS
*       error_code	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_build_mpty_error_hdlr(kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
      
   if(CSMCC_PTR->cur_req == CSMCC_ADD_HELD_CALL_REQ)
   {
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_REQ)
         {
            SET_MPTY_STATE(call_index, CSMCC_MPTY_IDLE)
            /* MAUI_00917762 [CC][Fixbug] handle BUILD/HOLD/RETRIEVE MPTY with different return ti */
            /* reset invoke information of the call */
            csmcc_reset_inv_info(&CALL_DATA(call_index,inv_info));
         }
      }
      
      csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                               CSMCC_ADD_HELD_CALL_REQ, 
                               error_code);
   }
   return CSMCC_NO_ERROR;

} /* end of csmcc_build_mpty_error_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_split_mpty_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of split mpty
*   invocation from network.
*
* CALLS  
*	csmcc_split_mpty_error_hdlr(kal_uint8 error_code)
* PARAMETERS
*       error_code	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_split_mpty_error_hdlr(kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ)
   {
      SET_MPTY_STATE(CSMCC_PTR->req_call_id, CSMCC_MPTY_ACTIVE)

      csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ, 
                                error_code);   
   }     
   return CSMCC_NO_ERROR;

} /* end of csmcc_split_mpty_error_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_mpty_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of hold mpty
*   invocation from network.
*
* CALLS  
*	csmcc_hold_mpty_error_hdlr(kal_uint8 error_code)
* PARAMETERS
*       error_code	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_mpty_error_hdlr(kal_uint8 error_code)
{   
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   #ifdef __EMLPP_SUPPORT__
   kal_uint8 call_index;
   #endif
   kal_uint8 retrieve_req_call_id;
   kal_uint8 dealloc_call_id;
   
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_ACTIVE);

   /* ripple */
   if((csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, NULL) != CSMCC_NO_ERROR)
      && (csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_ALL_DISC_STATES, NULL)== CSMCC_NO_ERROR)
      && (CSMCC_PTR->cur_req != CSMCC_NO_REQ))
   {
      /* No active call exist, all the mpty calls must be released, 
         can do cur_req in csmcc_call_clear_hdlr(). */
      return CSMCC_NO_ERROR;
   }
   /* end ripple */
   
   switch(CSMCC_PTR->cur_req)
   {
      /* ripple */
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         
         dealloc_call_id = CSMCC_PTR->req_call_id;
         
         csmcc_send_l4c_emergency_setup_fail(CSMCC_PTR->req_src_id,
                                             CSMCC_CMD_NOT_ALLOW);
               
         /* deallocate call context */
         csmcc_dealloc_call_context(dealloc_call_id);    
         
         break;
         
      case CSMCC_CALL_SETUP_REQ:
      
         dealloc_call_id = CSMCC_PTR->req_call_id;
         /*mtk01602, 070606: add two more parameters if it's a SAT_DATA_CALL*/         
         csmcc_send_l4c_setup_fail(CSMCC_PTR->req_src_id, 
                                   (kal_uint8)GET_CALL_TYPE(CSMCC_PTR->req_call_id),
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_SS_RETURN_ERROR,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);
                                   
         /* deallocate call context */
         csmcc_dealloc_call_context(dealloc_call_id);
                                                                             
         break;
         
 #ifdef __EMLPP_SUPPORT__
      case CSMCC_CALL_PREEMPT_REQ:
      
         /* disconnect each member of the mpty in order to accept call */
         
         for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
         {
            if(GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD_REQ)
            {
               csmcc_disc_call(call_index, CM_PRE_EMPTION);
            }
         }
         
         break;
 #endif /* __EMLPP_SUPPORT__ */
         
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
         {
            /* deallocate call context */
            csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);
            
            csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id,
				                          CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                      error_code);                        
         }
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_HELD_CALL_REQ)
         {
            ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                      CSMCC_CALL_RETRIEVE_REQ,
                                      &retrieve_req_call_id);

            if(ret_val != CSMCC_NO_ERROR)
            {
               /* no call in retrieve request state */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CSMCC_CALL_ACCEPT_NOT_ALLOW);
            }
         }
         else
         {
            csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id,
				                          CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                      error_code);
            
         }

         break;
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         /* nothing to do */         
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         
         /* deallocate call context */
         csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);
         
         csmcc_send_l4c_sat_setup_fail(CSMCC_PTR->req_src_id, 
                                       SAT_SS_RETURN_ERROR,
                                       /*SAT_NO_SPECIFIC_CAUSE*/error_code,
                                       CSMCC_NO_CAUSE,
                                       CSMCC_PTR->req_call_id);                                          
         break;
#endif /* __SAT__ */
      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */ 
         break;

   } /* switch(cur_req) */
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_hold_mpty_error_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_retrieve_mpty_error_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component of retrieve mpty
*   invocation from network.
*
* CALLS  
*	csmcc_retrieve_mpty_error_hdlr(kal_uint8 error_code)
* PARAMETERS
*       error_code	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_retrieve_mpty_error_hdlr(kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_HOLD);
   
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:

         csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                   CSMCC_REL_ACTIVE_AND_ACCEPT_REQ, 
                                   error_code);
         
         break;

      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         if(csmcc_find_call(CSMCC_ORIG_NONE, 
                            CSMCC_CALL_HOLD_REQ, 
                            NULL) != CSMCC_NO_ERROR)
         {          
            csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                      CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                      error_code);
         }                                                  
         
         break;

      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         csmcc_send_l4c_crss_error(CSMCC_PTR->req_src_id, 
                                   CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ, 
                                   error_code);                                            
         break;

      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */
         break;

   } /* switch(cur_req) */
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_retrieve_mpty_error_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_call_deflection_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of call deflection
*   invocation from network.
*
* CALLS  
*	csmcc_call_deflection_reject_hdlr(kal_uint8 call_id, 
*                                    Reject *reject)
* PARAMETERS
*	call_id	IN	first variable, used as input
*  reject	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_call_deflection_reject_hdlr(kal_uint8 call_id, 
                                              Reject *reject)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_CALL_DEFLECTION_REQ)
   {
      csmcc_send_l4c_call_deflection_reject(CSMCC_PTR->req_src_id, 
                                            call_id,
                                            reject);
   }         
   return CSMCC_NO_ERROR;

} /* end of csmcc_call_deflection_reject_hdlr */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_access_register_cc_entry_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of access register CC
*   entry invocation from network.
*
* CALLS  
*	csmcc_access_register_cc_reject_hdlr(kal_uint8 call_id, 
*                                       Reject *reject)
* PARAMETERS
*	call_id	IN	first variable, used as input
*  reject   IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_access_register_cc_entry_reject_hdlr(kal_uint8 call_id, 
                                                       Reject *reject)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_ACTIVATE_CCBS_CALL_REQ)
   {
      CALL_DATA(call_id,ccbs_status) = CSMCC_CCBS_NONE;
      
      csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id, 
                                 CSMCC_ACTIVATE_CCBS_CALL_REQ, 
                                 reject);
   }   
   return CSMCC_NO_ERROR;

} /* end of csmcc_access_register_cc_reject_hdlr */
#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_explicit_call_transfer_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of explicit call
*   transfer invocation from network.
*
* CALLS  
*	csmcc_explicit_call_transfer_error_hdlr(RejectChoice1 problem)
* PARAMETERS
*  reject	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_explicit_call_transfer_reject_hdlr(Reject *reject)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_EXPLICIT_CALL_TRANSFER_REQ)
   {
      csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                 CSMCC_EXPLICIT_CALL_TRANSFER_REQ, 
                                 reject);
   } 
   return CSMCC_NO_ERROR;

} /* end of csmcc_explicit_call_transfer_reject_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_build_mpty_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of build mpty
*   invocation from network.
*
* CALLS  
*	csmcc_build_mpty_reject_hdlr(Reject *reject)
* PARAMETERS
*  reject	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_build_mpty_reject_hdlr(Reject *reject)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   
   if(CSMCC_PTR->cur_req == CSMCC_ADD_HELD_CALL_REQ)
   {
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_REQ)
         {
            SET_MPTY_STATE(call_index, CSMCC_MPTY_IDLE)
            /* MAUI_00917762 [CC][Fixbug] handle BUILD/HOLD/RETRIEVE MPTY with different return ti */
            /* reset invoke information of the call */
            csmcc_reset_inv_info(&CALL_DATA(call_index,inv_info));
         }
      }
         
      csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                 CSMCC_ADD_HELD_CALL_REQ, 
                                 reject);
   }   
   return CSMCC_NO_ERROR;

} /* end of csmcc_build_mpty_reject_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_split_mpty_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of split mpty
*   invocation from network.
*
* CALLS  
*	csmcc_split_mpty_reject_hdlr(Reject *reject)
* PARAMETERS
*  reject	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_split_mpty_reject_hdlr(Reject *reject)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->cur_req == CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ)
   {
      SET_MPTY_STATE(CSMCC_PTR->req_call_id, CSMCC_MPTY_ACTIVE)
         
      csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                 CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ, 
                                 reject);
   }
   return CSMCC_NO_ERROR;

} /* end of csmcc_split_mpty_reject_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_mpty_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of hold mpty
*   invocation from network.
*
* CALLS  
*	csmcc_hold_mpty_reject_hdlr(Reject *reject)
* PARAMETERS
*  reject	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_mpty_reject_hdlr(Reject *reject)
{   
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   #ifdef __EMLPP_SUPPORT__
   kal_uint8 call_index;
   #endif
   kal_uint8 retrieve_req_call_id;
   kal_uint8 dealloc_call_id;
   
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_ACTIVE);

   /* ripple */
   if((csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, NULL) != CSMCC_NO_ERROR)
      && (csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_ALL_DISC_STATES, NULL)== CSMCC_NO_ERROR)
      && (CSMCC_PTR->cur_req != CSMCC_NO_REQ))
   {
      /* No active call exist, all the mpty calls must be released, 
         can do cur_req in csmcc_call_clear_hdlr(). */
      return CSMCC_NO_ERROR;
   }
   /* end ripple */
   
   switch(CSMCC_PTR->cur_req)
   {
      /* ripple */
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         
         dealloc_call_id = CSMCC_PTR->req_call_id;
         
         csmcc_send_l4c_emergency_setup_fail(CSMCC_PTR->req_src_id,
                                             CSMCC_CMD_NOT_ALLOW);
               
         /* deallocate call context */
         csmcc_dealloc_call_context(dealloc_call_id);    
         
         break;
         
      case CSMCC_CALL_SETUP_REQ:
      
         dealloc_call_id = CSMCC_PTR->req_call_id;
         /*mtk01602, 070606: add two more parameters if it's a SAT_DATA_CALL*/                
         csmcc_send_l4c_setup_fail(CSMCC_PTR->req_src_id, 
                                   (kal_uint8)GET_CALL_TYPE(CSMCC_PTR->req_call_id),
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_SS_RETURN_ERROR,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);                                          
                                   
         /* deallocate call context */
         csmcc_dealloc_call_context(dealloc_call_id);
                                            
         break;

#ifdef __EMLPP_SUPPORT__
      case CSMCC_CALL_PREEMPT_REQ:
         
         /* disconnect each member of the mpty in order to accept call */
         
         for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
         {
            if(GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD_REQ)
            {
               csmcc_disc_call(call_index, CM_PRE_EMPTION);
            }
         }
         
         break;
#endif

      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
         {
            /* deallocate call context */
            csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);
            
            csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
				                           CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                       reject);            
         }
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_HELD_CALL_REQ)
         {
            ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                      CSMCC_CALL_RETRIEVE_REQ,
                                      &retrieve_req_call_id);

            if(ret_val != CSMCC_NO_ERROR)
            {
               /* no call in retrieve request state */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CSMCC_CALL_ACCEPT_NOT_ALLOW);
            }
         }   
         else
         {
            csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
				                           CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                       reject);
            
         }         

         break;
         
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         /* nothing to do */
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         
         /* deallocate call context */
         csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);
         
         csmcc_send_l4c_sat_setup_fail(CSMCC_PTR->req_src_id, 
                                       SAT_SS_RETURN_ERROR,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       CSMCC_NO_CAUSE,
                                       CSMCC_PTR->req_call_id);                                          
         break;
#endif /* __SAT__ */
      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */ 
         break;

   } /* switch(cur_req) */
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_hold_mpty_reject_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_retrieve_mpty_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle reject component of retrieve mpty
*   invocation from network.
*
* CALLS  
*	csmcc_retrieve_mpty_reject_hdlr(Reject *reject)
* PARAMETERS
*  reject	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_retrieve_mpty_reject_hdlr(Reject *reject)
{
   CSMCC_PTR_G_TO_L
   /* update call state of each member in multiparty call */
   csmcc_update_mpty_call_state(CSMCC_CALL_HOLD);   

   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:

         csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                    CSMCC_REL_ACTIVE_AND_ACCEPT_REQ, 
                                    reject);
                                             
         break;

      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         if(csmcc_find_call(CSMCC_ORIG_NONE, 
                            CSMCC_CALL_HOLD_REQ, 
                            NULL) != CSMCC_NO_ERROR)
         {          
            csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                       CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                       reject);
         }
         
         break;

      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         csmcc_send_l4c_crss_reject(CSMCC_PTR->req_src_id,
                                    CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ, 
                                    reject);
                                    
         break;

      default:
         /* When receive this facility, all the calls may be released first, so cur_req was reset before. */ 
         break;

   } /* switch(cur_req) */   
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_retrieve_mpty_reject_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_notify_ss_hdlr
* DESCRIPTION                                                           
*   This function used to handle NotifySS invoke component from 
*   network.
*
* CALLS  
*	csmcc_notify_ss_hdlr(kall_uint8 cal_id, Invoke *invoke)
* PARAMETERS
*	call_id IN	first variable, used as input
*	invoke 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_notify_ss_hdlr(kal_uint8 call_id, Invoke *invoke)
{
   NotifySS_Arg *notify_ss_arg;

   notify_ss_arg = (NotifySS_Arg*)get_ctrl_buffer(800);
   if(cc_ss_arg_unpack(MCD_NOTIFYSS_ARG, (kal_uint8*)notify_ss_arg, 800,
                       invoke->parameter, (kal_uint8)invoke->parameterLen) == KAL_FALSE)
   {
      free_ctrl_buffer(notify_ss_arg);
      return CSMCC_ERROR;
   }      

   /* fill ccbs call context */
   if(notify_ss_arg->ccbs_FeatureOpt == KAL_TRUE)
   {
      if(notify_ss_arg->ccbs_Feature->b_subscriberNumberOpt == KAL_TRUE)
      {
         CALL_DATA(call_id, number_present) = KAL_TRUE;
         if(notify_ss_arg->ccbs_Feature->b_subscriberNumber->octsLen > L4_MAX_ADDR_BCD)
         {
            CALL_DATA(call_id, number.addr_length) = L4_MAX_ADDR_BCD;
         }
         else
         {
         CALL_DATA(call_id, number.addr_length) = 
            (kal_uint8)notify_ss_arg->ccbs_Feature->b_subscriberNumber->octsLen;
         }

         kal_mem_cpy(CALL_DATA(call_id, number.addr_bcd),
                     notify_ss_arg->ccbs_Feature->b_subscriberNumber->octs,
                     CALL_DATA(call_id, number.addr_length));
      }
#ifdef __SUBADDR_SUPPORT__
      if(notify_ss_arg->ccbs_Feature->b_subscriberSubaddressOpt == KAL_TRUE)
      {
         CALL_DATA(call_id, sub_addr_present) = KAL_TRUE;
         if(notify_ss_arg->ccbs_Feature->b_subscriberSubaddress->octsLen > L4_MAX_SUB_ADDR)
         {
            CALL_DATA(call_id, sub_addr.sub_addr_len) = L4_MAX_SUB_ADDR;
         }
         else
         {
         CALL_DATA(call_id, sub_addr.sub_addr_len) = 
            (kal_uint8)notify_ss_arg->ccbs_Feature->b_subscriberSubaddress->octsLen;
         }
         kal_mem_cpy(CALL_DATA(call_id, sub_addr.sub_addr),
                     notify_ss_arg->ccbs_Feature->b_subscriberSubaddress->octs,
                     CALL_DATA(call_id, sub_addr.sub_addr_len));
      }
#endif
   }

   csmcc_send_l4c_notify_ss_ind(call_id, notify_ss_arg);
   
   free_ctrl_buffer(notify_ss_arg);
   
   return CSMCC_NO_ERROR;
	
} /* endof csmcc_notify_ss_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_peer_invoke_hdlr
* DESCRIPTION                                                           
*   This function used to handle invoke component from network. The 
*   possible invoke operation are notifySS and userUserService. 
*   forwardChargeAdvice is impossible because it is handled in CC.
*
* CALLS  
*	csmcc_peer_invoke_hdlr(kall_uint8 cal_id, Invoke *invoke)
* PARAMETERS
*	call_id IN	first variable, used as input
*	invoke 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_peer_invoke_hdlr(kal_uint8 call_id, Invoke *invoke)
{

   kal_uint32 opcode;
   
   opcode = invoke->localValue;
   
   switch(opcode)
   {
      case SS_OP_NOTIFYSS:
         
         csmcc_notify_ss_hdlr(call_id, invoke);
         break;
      
      case SS_OP_USERUSERSERVICE:
      
         /* TBD: MT explicit UUS activation */
         break;
                     
      default:
         /* invalid value range */
         break;

   } /* switch(opcode) */
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_peer_invoke_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_peer_rr_hdlr
* DESCRIPTION                                                           
*   This function used to handle return result component from network.
*   The possible result component are call deflection, explicit call
*   transfer, MPTY, accessRegisterCCEntry, userUserService.
*
* CALLS  
*	csmcc_peer_rr_hdlr(kal_uint8 call_id, ReturnResult *rr)
* PARAMETERS
*	call_id IN	first variable, used as input
*	rr 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_peer_rr_hdlr(kal_uint8 call_id, ReturnResult *rr)
{
   
   csmcc_inv_info_struct *inv_info_ptr;
   kal_uint8 opcode;   
   
   inv_info_ptr = &(CALL_DATA(call_id,inv_info));
   
   if(inv_info_ptr->used == KAL_FALSE
      ||inv_info_ptr->inv_id != rr->invokeID->value)
   {
      kal_brief_trace(TRACE_WARNING,
                CSMCC_TRACE_ILLEGAL_INV_ID_RECEIVE,
                rr->invokeID->value);
                
      return CSMCC_ERROR;
   }
   
   opcode = inv_info_ptr->opcode;

   switch(opcode)
   {
      case SS_OP_CALLDEFLECTION:
         
         csmcc_call_deflection_result_hdlr(call_id);
         break;
  #ifdef __CCBS_SUPPORT__        
      case SS_OP_ACCESSREGISTERCCENTRY:
      
         csmcc_access_register_cc_entry_result_hdlr(call_id, rr);
         break;
  #endif /*__CCBS_SUPPORT__*/
  
      case SS_OP_EXPLICITCT:
         
         csmcc_explicit_call_transfer_result_hdlr(call_id);
         break;
         
      case SS_OP_BUILDMPTY:
         
         csmcc_build_mpty_result_hdlr();
         break;         
      
      case SS_OP_HOLDMPTY:
         
         csmcc_hold_mpty_result_hdlr(call_id);
         break;         

      case SS_OP_RETRIEVEMPTY:

         csmcc_retrieve_mpty_result_hdlr(call_id);
         break;
         
      case SS_OP_SPLITMPTY:

         csmcc_split_mpty_result_hdlr(call_id);
         break;

      case SS_OP_USERUSERSERVICE:
      
         /* TBD: MO explicit activation */
         break;

      default:
         /* invalid value range */
         break;
         
   } /* end of switch(opcode) */

   /* reset invoke information of the call */
   inv_info_ptr->used = KAL_FALSE;
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_peer_rr_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_peer_re_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component from network.
*   The possible error component are call deflection, explicit call
*   transfer, MPTY, accessRegisterCCEntry, userUserService.
*
* CALLS  
*	csmcc_peer_re_hdlr(kal_uint8 call_id, ReturnError *re)
* PARAMETERS
*	call_id IN	first variable, used as input
*	re 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_peer_re_hdlr(kal_uint8 call_id, ReturnError *re)
{
   csmcc_inv_info_struct *inv_info_ptr;        
   kal_uint8 error_code;   
   
   inv_info_ptr = &(CALL_DATA(call_id,inv_info));
   error_code = (kal_uint8)re->localValue;
      
   if(inv_info_ptr->used == KAL_FALSE
      || inv_info_ptr->inv_id != re->invokeID->value)
   {
      kal_brief_trace(TRACE_WARNING,
                CSMCC_TRACE_ILLEGAL_INV_ID_RECEIVE,
                re->invokeID->value);
      
      return CSMCC_ERROR;
   }
      
   switch(inv_info_ptr->opcode)
   {
      case SS_OP_CALLDEFLECTION:
         csmcc_call_deflection_error_hdlr(call_id, error_code);
         break;
   #ifdef __CCBS_SUPPORT__              
      case SS_OP_ACCESSREGISTERCCENTRY:
         csmcc_access_register_cc_entry_error_hdlr(call_id, error_code);
         break;
   #endif /*__CCBS_SUPPORT__*/       
      case SS_OP_EXPLICITCT:
         csmcc_explicit_call_transfer_error_hdlr(error_code);
         break;
      
      case SS_OP_BUILDMPTY:
         csmcc_build_mpty_error_hdlr(error_code);
         break;
         
      case SS_OP_SPLITMPTY:
         csmcc_split_mpty_error_hdlr(error_code);
         break;
         
      case SS_OP_HOLDMPTY:
         csmcc_hold_mpty_error_hdlr(error_code);
         break;
         
      case SS_OP_RETRIEVEMPTY:
         csmcc_retrieve_mpty_error_hdlr(error_code);
         break;

      case SS_OP_USERUSERSERVICE:
         /* TBD: MO explicit activation */
         break;
               
      default:
         /* invalid value range */
         break;

   } /* switch(inv_info_ptr->opcode) */
   
   
   if(re->parameterLen > 0)
   {
      /* TBD: do something with error parameter */            
   }
   
   /* reset invoke information of the call */
   inv_info_ptr->used = KAL_FALSE;
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_peer_re_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_peer_reject_hdlr
* DESCRIPTION                                                           
*   This function used to handle return error component from network.
*   The possible error component are call deflection, explicit call
*   transfer, MPTY, accessRegisterCCEntry, userUserService.
*
* CALLS  
*	csmcc_peer_re_hdlr(kal_uint8 call_id, Reject *reject)
* PARAMETERS
*	call_id IN	first variable, used as input
*	re 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_peer_reject_hdlr(kal_uint8 call_id, Reject *reject)
{
   csmcc_inv_info_struct *inv_info_ptr;              
   
   inv_info_ptr = &(CALL_DATA(call_id,inv_info));
   
   if(!reject->derivableOpt)
   {
      kal_brief_trace(TRACE_WARNING,
                CSMCC_TRACE_DERIVABLE_INV_ID);
      
      return CSMCC_ERROR;      
   }
   else if(inv_info_ptr->used == KAL_FALSE
      || inv_info_ptr->inv_id != reject->derivable->value)
   {
      kal_brief_trace(TRACE_WARNING,
                CSMCC_TRACE_ILLEGAL_INV_ID_RECEIVE,
                reject->derivable->value);
      
      return CSMCC_ERROR;
   }
      
   switch(inv_info_ptr->opcode)
   {
      case SS_OP_CALLDEFLECTION:
         csmcc_call_deflection_reject_hdlr(call_id, reject);
         break;
   #ifdef __CCBS_SUPPORT__      
      case SS_OP_ACCESSREGISTERCCENTRY:
         csmcc_access_register_cc_entry_reject_hdlr(call_id, reject);
         break;
   #endif /*__CCBS_SUPPORT__*/      
      case SS_OP_EXPLICITCT:
         csmcc_explicit_call_transfer_reject_hdlr(reject);
         break;
      
      case SS_OP_BUILDMPTY:
         csmcc_build_mpty_reject_hdlr(reject);
         break;
         
      case SS_OP_SPLITMPTY:
         csmcc_split_mpty_reject_hdlr(reject);
         break;
         
      case SS_OP_HOLDMPTY:
         csmcc_hold_mpty_reject_hdlr(reject);
         break;
         
      case SS_OP_RETRIEVEMPTY:
         csmcc_retrieve_mpty_reject_hdlr(reject);
         break;

      case SS_OP_USERUSERSERVICE:
         /* TBD: MO explicit activation */
         break;
               
      default:
         /* invalid value range */
         break;

   } /* switch(inv_info_ptr->opcode) */
         
   /* reset invoke information of the call */
   inv_info_ptr->used = KAL_FALSE;
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_peer_reject_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_peer_fac_ie_hdlr
* DESCRIPTION                                                           
*   This function used to handle each SS component, including invoke,
*   return result, return error, reject component.
*
* CALLS  
*	csmcc_peer_fac_ie_hdlr(mncc_facility_struct peer_fac_ie)
* PARAMETERS
*       call_id		IN	first variable, used as input        
*	peer_fac_ie 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_peer_fac_ie_hdlr(kal_uint8 call_id,
                                 mncc_facility_struct *peer_fac_ie)
{

   kal_uint8 comp_count;
   Component *comp;
   
	/*
	* Here is a block comment.
	* The comment text should be tabbed or spaced over uniformly.
	* The opening slash-star and closing star-slash are alone on a line.
	*/

   for(comp_count = 0; 
       comp_count < peer_fac_ie->num_of_components;
       comp_count++)
   {
      comp = peer_fac_ie->component[comp_count];
      
      if(comp->invokeOpt)
      {      
         csmcc_peer_invoke_hdlr(call_id, comp->invoke);
      }
      else if(comp->returnResultLastOpt)
      {
         csmcc_peer_rr_hdlr(call_id, comp->returnResultLast);

      }
      else if(comp->returnErrorOpt)
      {
         csmcc_peer_re_hdlr(call_id, comp->returnError);

      }
      else if(comp->rejectOpt)
      {
         csmcc_peer_reject_hdlr(call_id, comp->reject);
      }
   
      cc_ss_comp_del(peer_fac_ie->component[comp_count]);
      peer_fac_ie->component[comp_count] = NULL;
   }
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_peer_fac_ie_hdlr */



