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
 *	csmcc_crss_proc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for handling call related supplementary service request
 *   from L4C.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define CSMCC_CRSS_PROC_C

//#include "kal_release.h"      	/* Basic data type */

//#include "stack_common.h"  
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
//#include "ps2sat_struct.h" /* Ripple SATCE */
#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
//#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"
//#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
//#include "l4c_common_enum.h"
#include "csmss_common_enums.h"
//#include "sim_common_enums.h"
//#include "nvram_enums.h"
//#include "l4_defs.h"
#include "csmcc_defs.h"
//#include "csmcc_bc_defs.h"
//#include "csmcc_bc_types.h"

#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
#endif

#include "csmcc_types.h"
#include "csmcc_utility.h"
#include "csmcc_aux_msg_hdlr.h"

#include "kal_trace.h"
#include "csm_trc.h"
//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"

static csmcc_ret_t 
csmcc_retrieve_held_call(kal_uint8 call_id);

/*************************************************************************
* FUNCTION                                                            
*	csmcc_accept_other_call
* DESCRIPTION                                                           
*    This function is used to accept a call, and the call could be a waiting 
*    call, or CCBS call, or a held call.
*
* CALLS  
*	csmcc_accept_other_call(kal_uint8 accept_req, kal_uint8 accept_call_id)
*
* PARAMETERS
*	accept_type	IN	first variable, used as input
*       accept_call_id	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_accept_other_call(kal_uint8 accept_req,
                                    kal_uint8 accept_call_id)
{      
   switch(accept_req)
   {
      case CSMCC_ACCEPT_WAITING_CALL_REQ:
         /* to avoid the incoming call or waiting call has been released by the remote side. */
         if(CALL_DATA(accept_call_id,call_orig) != CSMCC_MT_CALL
           || GET_CALL_STATE(accept_call_id) != CSMCC_CALL_INIT)
         {
            return CSMCC_CALL_ACCEPT_NOT_ALLOW; 
         }
         
         /* a waiting call found */
         return csmcc_accept_mt_call(accept_call_id);

#ifdef __CCBS_SUPPORT__                 
      case CSMCC_ACCEPT_CCBS_CALL_REQ:
         /* a CCBS call found, accept it */
         return csmcc_accept_ccbs_call(accept_call_id);
#endif        
      case CSMCC_ACCEPT_HELD_CALL_REQ:
         /* a held call found, retrieve it */
         return csmcc_retrieve_held_call(accept_call_id);
         
      default:
         /* invalid value range*/
         break;         
   }
      
   return CSMCC_CALL_ACCEPT_NOT_ALLOW;

} /* end of csmcc_accept_other_call */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_active_call
* DESCRIPTION                                                           
*    This function is used to put a active call on hold. The call could be a mpty
*    call or a single call.
*
* CALLS  
*	csmcc_hold_active_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_active_call(kal_uint8 call_id)
{
   /* local var declare */
   kal_uint8 call_index;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_ACTIVE)
   {
      return CSMCC_CMD_NOT_ALLOW;
   }
  
   if(GET_MPTY_STATE(call_id) == CSMCC_MPTY_ACTIVE)
   {
      /* this is a active mpty call */
      csmcc_send_cc_facility_req(call_id, SS_OP_HOLDMPTY);
      
      /* update call state */
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE
            && GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE)
         {
            SET_CALL_STATE(call_index, CSMCC_CALL_HOLD_REQ)
               
            if (CALL_DATA(call_index, dtmf.digit) != NULL)
            {
               csmcc_stop_auto_dtmf(call_index);
            }
         }

      } /* for(..call_index < CSMCC_MAX_CALL_NUM..) */

   } /* if (GET_MPTY_STATE(call_id) == CSMCC_MPTY_ACTIVE) */
   else
   {
      /* stop sending dtmf */
      csmcc_stop_auto_dtmf(call_id);

      /* this is a active single call */
      csmcc_send_cc_hold_req(call_id);
                  
      SET_CALL_STATE(call_id, CSMCC_CALL_HOLD_REQ)
   }
   
   return CSMCC_NO_ERROR;
                   
} /* end of csmcc_hold_active_call */     

/*************************************************************************
* FUNCTION                                                            
*	csmcc_retrieve_held_call
* DESCRIPTION                                                           
*    This function is used to retrieve a held call. The call could be a mpty
*    call or a single call.
*
* CALLS  
*	csmcc_retrieve_held_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_retrieve_held_call(kal_uint8 call_id)
{
   /* local var declare */
   kal_uint8 call_index;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_HOLD)
   {
      return CSMCC_CALL_ACCEPT_NOT_ALLOW;
   }
   
   if(GET_MPTY_STATE(call_id) == CSMCC_MPTY_ACTIVE)
   {
      /* this is a mpty call */
      csmcc_send_cc_facility_req(call_id, SS_OP_RETRIEVEMPTY);
      
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE 
            && GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD)
         {
            SET_CALL_STATE(call_index, CSMCC_CALL_RETRIEVE_REQ)
         }

      } /* for(..call_index < CSMCC_MAX_CALL_NUM..) */

   } /* if (mpty_state == CSMCC_MPTY_ACTIVE) */
   else
   {
      /* this is a active single call */
      csmcc_send_cc_retrieve_req(call_id);
   
      SET_CALL_STATE(call_id, CSMCC_CALL_RETRIEVE_REQ)
   }
   
   return CSMCC_NO_ERROR;
                   
} /* end of csmcc_retrieve_held_call */     


/*************************************************************************
* FUNCTION                                                            
*	csmcc_alternate_two_call
* DESCRIPTION                                                           
*    This function is used to put current active call on hold and retrieve 
*    the held call.
*
* CALLS  
*	csmcc_alternate_two_call(kal_uint8 active_call_id, 
*                                kal_uint8 held_call_id)
*
* PARAMETERS
*	active_call_id	IN	first variable, used as input
*	held_call_id	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_alternate_two_call(kal_uint8 active_call_id,
                                          kal_uint8 held_call_id)
{
   csmcc_hold_active_call(active_call_id);

   csmcc_retrieve_held_call(held_call_id);
   
   return CSMCC_NO_ERROR;


} /* end of csmcc_alternate_two_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_build_mpty_call
* DESCRIPTION                                                           
*    This function is used to build a conference call.
*
* CALLS  
*	csmcc_build_mpty_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_build_mpty_call(kal_uint8 call_id)
{
   /* local var declare */
   kal_uint8 call_index;
   
   csmcc_send_cc_facility_req(call_id, SS_OP_BUILDMPTY);
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE 
         || GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD)
      {
         if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_IDLE)
         {
            SET_MPTY_STATE(call_index, CSMCC_MPTY_REQ)
         }
      }
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_build_mpty_call */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_split_mpty_call
* DESCRIPTION                                                           
*    This function is used to separate a private communication with the 
*    specific call.
*
* CALLS  
*	csmcc_split_mpty_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_split_mpty_call(kal_uint8 call_id)
{

   csmcc_send_cc_facility_req(call_id, SS_OP_SPLITMPTY);
      
   SET_MPTY_STATE(call_id, CSMCC_SPLIT_REQ)
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_split_mpty_call */

/*************************************************************************
*
* FUNCTION                                                            
*	csmcc_rel_held_or_udub
* DESCRIPTION                                                           
*    This function is used to User Determained User Busy (UDUB) for
*    a waiting call or clear a CCBS call or release all held calls 
*
* CALLS  
*	csmcc_rel_held_or_udub(kal_uint8 src_id)
*
* PARAMETERS
*  src_id   IN    first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_held_or_udub(kal_bool need_to_check_udub, kal_uint8 src_id)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   kal_uint8 call_index;
   csmcc_ret_t ret_val;
   kal_bool rel_flag;

   csmcc_crss_req_enum opcode = CSMCC_PTR->crss_req;

   /* local var init */
   rel_flag = KAL_FALSE;
   
   if (need_to_check_udub == KAL_TRUE)
   {
      /* MAUI_01079884 
       * [CSMCC][Revise] Add new op code for WAITING/CCBS/HELD in crss_req_enum
       * for CSMCC_REL_HELD_OR_UDUB
       * accept the call at best effort: waiting -> ccbs -> held
       * for the others, accept the call by specific opcode
       */
         
      if (opcode == CSMCC_REL_HELD_OR_UDUB ||
          opcode == CSMCC_REL_UDUB)
      {
            /* find a waiting call */
            ret_val = csmcc_find_waiting_call(&call_id);
            
            if(ret_val == CSMCC_NO_ERROR) 
            {
               /* a waiting call found, clear it. By the way,
                  save src id for this waiting call */
               
               csmcc_disc_call(call_id, CM_USER_BUSY);      

               CALL_DATA(call_id, src_id) = src_id;

               return CSMCC_NO_ERROR;      
            }
      }

#ifdef __CCBS_SUPPORT__
      if (opcode == CSMCC_REL_HELD_OR_UDUB ||
          opcode == CSMCC_REL_CCBS)
      {
         /* find a CCBS call */
         ret_val = csmcc_find_ccbs_call(CSMCC_CCBS_INVOKED, &call_id);
         
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* a CCBS call found, clear it */
            csmcc_send_cc_ccbs_rej_req(call_id, CM_CALL_REJECTED);
            
            csmcc_send_l4c_rel_ind(call_id, CSMCC_NO_CAUSE,0);
            
            /* for a ccbs call, directly deallocate call context*/
            csmcc_dealloc_call_context(call_id);
            
            return CSMCC_CMD_SUCC;
         }
      }
#endif/*__CCBS_SUPPORT__*/
   }
   
   /* release all held calls */
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD)
      {
         csmcc_disc_call(call_index, CM_NORMAL_CALL_CLR);        
         rel_flag = KAL_TRUE;
      }

   } /* for(..call_index < CSMCC_MAX_CALL_NUM ..) */
      
   if(rel_flag == KAL_TRUE)
   {
      return CSMCC_NO_ERROR;
   }
   
   return CSMCC_CMD_NOT_ALLOW;   

} /* end of csmcc_rel_held_or_udub */
#ifdef __CALL_REJECT__
/*************************************************************************
*
* FUNCTION                                                            
* csmcc_rel_call_reject
* DESCRIPTION                                                           
*    This function is used to release incoming/waiting call using cause "call reject"
*
* CALLS  
*	csmcc_rel_call_reject(kal_uint8 src_id)
*
* PARAMETERS
*  src_id   IN    first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_call_reject( kal_uint8 src_id)
{
   /* local var declare */
   kal_uint8 call_id;
   csmcc_ret_t ret_val;
   kal_bool rel_flag;

   csmcc_crss_req_enum opcode = CSMCC_PTR->crss_req;

   /* local var init */
   rel_flag = KAL_FALSE;
   
   ret_val = csmcc_find_call(CSMCC_MT_CALL,
                      CSMCC_CALL_INIT,
                      &call_id);
    
   if(ret_val == CSMCC_NO_ERROR) 
   {
       /* a waiting/incoming call found, clear it. By the way,
          save src id for this waiting call */
       
      csmcc_disc_call(call_id, CM_CALL_REJECTED);      

      CALL_DATA(call_id, src_id) = src_id;

      rel_flag = KAL_TRUE;     
   }

      
   if(rel_flag == KAL_TRUE)
   {
      return CSMCC_NO_ERROR;
   }
   
   return CSMCC_CMD_NOT_ALLOW;   

} /* end of csmcc_rel_held_or_udub */
#endif

/*************************************************************************
* FUNCTION                                                            
*	csmcc_rel_active_and_accept
* DESCRIPTION                                                           
*    This function is used to release all active calls if any exist and accepts
*    the other call which could be a waiting call, or a CCBS call, or a held call
*
* CALLS  
*	csmcc_rel_active_and_accept(kal_uint8 *accept_req, kal_uint8 *accept_call_id)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_active_and_accept(kal_bool need_accept, kal_uint8 *accept_req, kal_uint8 *accept_call_id)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool rel_flag = KAL_FALSE;
   csmcc_ret_t ret_val;
   
   /* this cmd is not allowed if MO call is in init or alert state */
   ret_val = csmcc_find_call(CSMCC_MO_CALL,
                             CSMCC_CALL_INIT|CSMCC_CALL_ALERT,
                             NULL);

   if(ret_val == CSMCC_NO_ERROR)
   {
      return CSMCC_CMD_NOT_ALLOW;
   }                          
      
   /* release all active calls, and nw disc calls, which are waiting user release. */
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {      
      if((GET_CALL_STATE(call_index) & 
         (CSMCC_CALL_ACTIVE |CSMCC_NW_CALL_DISC |CSMCC_NW_CALL_DISC_ON_HOLD))  != 0 )
      {
         /* for active: send DISC. for nw_disc: send RELEASE. */
         csmcc_disc_call(call_index, CM_NORMAL_CALL_CLR);         
         rel_flag = KAL_TRUE;
      }
      else if (GET_CALL_STATE(call_index) == CSMCC_MS_CALL_DISC)
      {
         rel_flag = KAL_TRUE;
      }
   } /* for(..call_index < CSMCC_MAX_CALL_NUM ..) */

   /* ripple: add for rel active. not to accept. */
   if ( need_accept == KAL_FALSE )
   {
      if (rel_flag == KAL_FALSE)
      {
         /* if no active calls to be released, cmd is not allowed. */ 
         return CSMCC_CMD_NOT_ALLOW;
      }
      else
      {
         /* if any active call to be released, cmd is in progress. */
         return CSMCC_NO_ERROR;
      }
   }
   /* end ripple */

   /* need_accept == KAL_TRUE. */
   if(rel_flag == KAL_TRUE)
   {
      /*
       * at least one call is disconnected or releasing, so the other call if any exists 
       * can be accepted only after call disconnect is completed. 
       */

      /* check if waiting call ,or ccbs call ,or held call exists. */
      csmcc_find_other_call_to_be_accepted(accept_req, accept_call_id);      

      return CSMCC_NO_ERROR;
   }
   
   /* no existing active call is released, so accept the other call right now */

   /* check if it is allowed to accept any call first */
   if(csmcc_is_allowed_accept_call() == KAL_FALSE)
   {      
      return CSMCC_CMD_NOT_ALLOW;
   }
      
   csmcc_find_other_call_to_be_accepted(accept_req, accept_call_id);
   
   if(*accept_req != CSMCC_NO_REQ)
   {
      ret_val = csmcc_accept_other_call(*accept_req, *accept_call_id);  
      
      if(ret_val == CSMCC_NO_ERROR)
      {
         CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
      }
      
      return ret_val;
   }
      
   return CSMCC_CMD_NOT_ALLOW;
   
} /* end of csmcc_rel_active_and_accept */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_rel_specific_active_call
* DESCRIPTION                                                           
*    This function is used to release a specific active call.
*
* CALLS  
*	csmcc_rel_specific_active_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_specific_active_call(kal_uint8 call_id)
{   
   if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1))
   {
      /* invalid call id */
      return CSMCC_CMD_NOT_ALLOW;
   }

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK
      || GET_CALL_STATE(call_id) != CSMCC_CALL_ACTIVE) 
   {
      /* the specified call is not active */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_rel_specific_active_call */

/*MAUI_02641977 CMCC feature, disconnect VT with cause 88*/
#if defined(__VIDEO_CALL_SUPPORT__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_vt_fallto_voice_call
* DESCRIPTION                                                           
*    This function is used to release vt call with cause88(cmcc requirment).
*
* CALLS  
*	csmcc_reject_vt_by_specific_cause(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_reject_vt_by_specific_cause(kal_uint8 call_id)
{   
   if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1))
   {
      /* invalid call id */
      return CSMCC_CMD_NOT_ALLOW;
   }

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK) 
   {
      /* the specified call doesn't exist */
      return CSMCC_CMD_NOT_ALLOW;
   }
   if(GET_CALL_TYPE(call_id) != CSMCC_VIDEO_CALL
   	|| CALL_DATA(call_id,call_orig) != CSMCC_MT_CALL
   	||GET_CALL_STATE(call_id) != CSMCC_CALL_INIT)
   {
   		return CSMCC_CMD_NOT_ALLOW;
   }
   csmcc_disc_call(call_id, CM_INCOMPATIBLE_DEST);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_reject_vt_by_specific_cause */
#endif

/*************************************************************************
* FUNCTION                                                            
*	csmcc_rel_specific_call
* DESCRIPTION                                                           
*    This function is used to release a specific call.
*
* CALLS  
*	csmcc_rel_specific_call(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_specific_call(kal_uint8 call_id)
{   
   CSMCC_PTR_G_TO_L
   if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1))
   {
      /* invalid call id */
      return CSMCC_CMD_NOT_ALLOW;
   }

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK) 
   {
      /* the specified call doesn't exist */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   if (GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
      /* Ripple Cheng: The call status is BLK, but the state is idle. This happens when 1A, 1 mo, 
       * during holding the 1A, the state of the mo is IDLE. At this time, to rel the mo is just need to 
       * send rel_ind and deallocate the call context. */
	  /*mtk00924_20051207: CSM send setup_cnf_fail instead of rel_ind becasue at this phase MMI doesn't 
	  know the call id of the MO call, if sending rel_ind will cause MMI call time displaying wrong problem*/       
       //csmcc_send_l4c_rel_ind(call_id, CM_NORMAL_CALL_CLR,0);
       /*mtk01602, 070606: add two more parameters if it's a SAT_DATA_CALL*/
       csmcc_send_l4c_setup_fail(CALL_DATA(call_id, src_id), 
                                (kal_uint8)GET_CALL_TYPE(call_id), 
                                CM_NORMAL_CALL_CLR,
                                SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                SAT_NO_SPECIFIC_CAUSE,
                                0);
       csmcc_dealloc_call_context(call_id);
       csmcc_reset_cur_req(CSMCC_PTR->cur_req);
       return CSMCC_CMD_SUCC;
   }   
   else if(CALL_DATA(call_id,call_orig) == CSMCC_MT_CALL
      && ((GET_CALL_STATE(call_id)&(CSMCC_CALL_INIT|CSMCC_CALL_ACCEPT)) != 0))
   {
      csmcc_disc_call(call_id, CM_USER_BUSY);
   }
   else
   {
    /*mtk00924_20051207: if CSM receives disc_req during the period that sending setup_req to CC and 
    before receiving proc_ind/alert_ind/setup_cnf, CSM should also send setup_cnf_success to MMI */		 	
    /*Cosine: 20080503, [MAUI_00682453]*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif   
   csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
   }
   /*Cosine, 20080503: [MAUI_00682453]Save previous request for dealing two consecutive request.*/
   csmcc_save_prev_req(CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id, CSMCC_PTR->req_call_id);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_rel_specific_call */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_active_and_accept
* DESCRIPTION                                                           
*    This function is used to put all active calls on hold if any exists and 
*    accept the other call which could be a waiting call or a CCBS call or a 
*    held call.
*
* CALLS  
*	csmcc_hold_active_and_accept(kal_uint8 *accept_req, kal_uint8 *accept_call_id, kal_bool need_accept)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_active_and_accept(kal_uint8 *accept_req, kal_uint8 *accept_call_id, kal_bool need_accept)
{   
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 active_call_id;
   csmcc_ret_t ret_val;
   
   /* this cmd is not allowed if MO call is in init or alert state */
   ret_val = csmcc_find_call(CSMCC_MO_CALL,
                             CSMCC_CALL_INIT|CSMCC_CALL_ALERT,
                             NULL);

   if(ret_val == CSMCC_NO_ERROR)
   {
      return CSMCC_CMD_NOT_ALLOW;
   }                       
   
   /* find the active call */
   ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                             CSMCC_CALL_ACTIVE,
                             &active_call_id);
      
   if(ret_val == CSMCC_NO_ERROR)
   {
      if(csmcc_is_ts11_call(active_call_id) == KAL_FALSE)
      {
         /* only TS11 call can be put on hold */
         return CSMCC_CMD_NOT_ALLOW;
      }

      /* 2+send must swap call first if held call exists */
      if(csmcc_find_call(CSMCC_ORIG_NONE,
                         CSMCC_CALL_HOLD,
                         accept_call_id) == CSMCC_NO_ERROR)
      {
         *accept_req = CSMCC_ACCEPT_HELD_CALL_REQ;
         csmcc_alternate_two_call(active_call_id, *accept_call_id);
      }
      else
      {                    
         if(need_accept == KAL_TRUE)
         {                        
            /* check if waiting call or ccbs call exists. */
            csmcc_find_other_call_to_be_accepted(accept_req, accept_call_id);
         }

         /* no held call found, so just put active call on hold */
         csmcc_hold_active_call(active_call_id);
      }
                  
      return CSMCC_NO_ERROR;
   }

   /********************************************************************* 
    * no active call is put on hold, so accept other call directly
    *********************************************************************/

    if(csmcc_is_allowed_accept_call() == KAL_FALSE)
   {      
      /* it's not allowed to accept any call */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   if(need_accept == KAL_TRUE) 
   {   
      csmcc_find_other_call_to_be_accepted(accept_req, accept_call_id);

      if(*accept_req != CSMCC_NO_REQ)
      {          
         ret_val = csmcc_accept_other_call(*accept_req, *accept_call_id);

         if(ret_val == CSMCC_NO_ERROR)
         {
            CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
         }
       
         return ret_val;
      }      
   }
   else /* swap */
   {
     if(csmcc_find_call(CSMCC_ORIG_NONE,
                        CSMCC_CALL_HOLD,
                        accept_call_id) == CSMCC_NO_ERROR)
      {
         *accept_req = CSMCC_ACCEPT_HELD_CALL_REQ;
         
         ret_val = csmcc_retrieve_held_call(*accept_call_id);

         if(ret_val == CSMCC_NO_ERROR)
         {
            CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
         }
         
         return ret_val;
      }
   }      
   
   return CSMCC_CMD_NOT_ALLOW;
   
} /* end of csmcc_hold_active_and_accept */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_hold_active_except_sepcific_call
* DESCRIPTION                                                           
*    This function is used to put all active calls on hold except a specific
*    call with which communication shall be supported.
*
* CALLS  
*	csmcc_hold_active_except_specific_call(kal_uint8 call_id, kal_uint8 *accept_req, kal_uint8 *accept_call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_hold_active_except_specific_call(kal_uint8 call_id, kal_uint8 *accept_req, kal_uint8 *accept_call_id)
{   
   /* local var declare */
   csmcc_ret_t ret_val;
   kal_uint8 held_call_id;
#if 0   
/* under construction !*/
#endif   
   
   if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1))
   {
      /* invalid call id */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   /* this cmd is not allowed if MO call is in init or alert state */
   ret_val = csmcc_find_call(CSMCC_MO_CALL,
                             CSMCC_CALL_INIT|CSMCC_CALL_ALERT,
                             NULL);

   if(ret_val == CSMCC_NO_ERROR)
   {
      return CSMCC_CMD_NOT_ALLOW;
   }                       
      
   if(GET_CALL_STATE(call_id) == CSMCC_CALL_ACTIVE)
   {
      if(GET_MPTY_STATE(call_id) != CSMCC_MPTY_ACTIVE)
      {
         /* the specific call is active and not in mpty call, so nothing 
          * to do.
          */

         return CSMCC_CMD_NOT_ALLOW;
      }
      
      /* 
       * now the specific call is a member of a active mpty call. check if 
       * another single held call exists. 
       */
      
      ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                CSMCC_CALL_HOLD,
                                &held_call_id);
      
      if(ret_val == CSMCC_NO_ERROR)
      {
         /* 
          * another single held call exists, in this condition, no call 
          * can be splitted from a active mpty call.
          */
         
         return CSMCC_CMD_NOT_ALLOW;
      }

      /* 
       * now only one active mpty call exists and the specific call is one 
       * member of the mpty call, so split it.
       */

      csmcc_split_mpty_call(call_id);

      return CSMCC_NO_ERROR;         
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

   return CSMCC_CMD_NOT_ALLOW;
                     
} /* end of csmcc_hold_active_except_specific_call */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_add_held_call
* DESCRIPTION                                                           
*    This function is used to add a held call to the conversation.
*
* CALLS  
*	csmcc_add_held_call(void)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_add_held_call(void)
{
   
   kal_uint8 call_id,active_call_id;
   kal_uint8 call_index;
   kal_uint8 mpty_call_count = 0;
   csmcc_ret_t ret_val;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK
         && CALL_DATA(call_index, mpty_state) == CSMCC_MPTY_ACTIVE)
      {
         mpty_call_count++;
      }
   }
   
   if(mpty_call_count == MAX_MPTY_MEMBER_NUM)
   {
      /* exceeds the limit of mpty members */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, &active_call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* no active call exists */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   /* check if the active call can be added into converstaion */
   
   if(csmcc_is_ts11_call(active_call_id) == KAL_FALSE)
   {
      /* only TS11 call can be added into converstation */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_HOLD, &call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* no held call exists */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   /* 
    * now one active call and one held call exists, so the conference call 
    * can be built.
    */
   
   csmcc_build_mpty_call(active_call_id);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_add_held_call */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_explicit_call_transfer
* DESCRIPTION                                                           
*    This function is used to connect the two calls and disconnect the 
*    subscriber from both calls.
*
* CALLS  
*	csmcc_explicit_call_transfer(void)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_explicit_call_transfer(void)
{
   csmcc_ret_t ret_val;

   kal_uint8 held_call_id;
   kal_uint8 another_call_id;    
   
   ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_HOLD, &held_call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* no held exists, but a held call is necessary */
      
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   if(GET_MPTY_STATE(held_call_id) == CSMCC_MPTY_ACTIVE)
   {
      /* Held mpty can't be ECT */
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, 
                             &another_call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* continue to find the ongoing call in establihsment phase */
      ret_val = csmcc_find_call(CSMCC_MO_CALL, CSMCC_CALL_ALERT, 
                                &another_call_id);
      
      if(ret_val != CSMCC_NO_ERROR)
      {
         
         /* no other active or ongoing MO call exists, but this is necessary */
         return CSMCC_CMD_NOT_ALLOW;
      }

   }
   else if(GET_MPTY_STATE(another_call_id) == CSMCC_MPTY_ACTIVE)
   {
      /* Active mpty can't be ECT */
      return CSMCC_CMD_NOT_ALLOW;
   }   
   
   if(csmcc_is_ts11_call(another_call_id) == KAL_FALSE)
   {
      /* only TS11 call can be explicitly transfered */
      
      return CSMCC_CMD_NOT_ALLOW;
   }
   
   /* now the precondition of ECT meets, so start sending request */

   csmcc_send_cc_facility_req(held_call_id, SS_OP_EXPLICITCT);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_explicit_call_transfer */

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_activate_ccbs_call
* DESCRIPTION                                                           
*    This function is used to activate completion of calls to busy 
*    subscriber request.
*
* CALLS  
*	csmcc_activate_ccbs_call(kal_uint8 *call_id)
*
* PARAMETERS
*  call_id     OUT   first variable, used as output
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_activate_ccbs_call(kal_uint8 *call_id)
{
   kal_uint8 ccbs_call_id;
   csmcc_ret_t ret_val;
   
   ret_val = csmcc_find_ccbs_call(CSMCC_CCBS_POSSIBLE, &ccbs_call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      return CSMCC_CMD_NOT_ALLOW;
   }

   /* return call id of activated call */
   *call_id = ccbs_call_id;

   csmcc_send_cc_ccbs_activate_req(ccbs_call_id);         
   SET_CALL_STATE(ccbs_call_id, CSMCC_MS_CALL_DISC)
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_activate_ccbs_call */

#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_rel_all_except_waiting_call
* DESCRIPTION                                                           
*    This function is used to release all existing calls except possible 
*    waiting.
*
* CALLS  
*	csmcc_rel_all_except_waiting_call(void)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_all_except_waiting_call(void)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool rel_flag = KAL_FALSE;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK
         && CALL_DATA(call_index,cw_flag) != KAL_TRUE )
      {
         /*[Cosine 070319] MMI will use this request to release all except CCBS recall, therefore we can't 
                              disconnect the call whose state=IDLE and ccbs_status=Activated or Invoked. */
	#ifdef __CCBS_SUPPORT__
		 if (GET_CALL_STATE(call_index) == CSMCC_CALL_IDLE
	     && CALL_DATA(call_index, ccbs_status) != CSMCC_CCBS_ACTIVATED
	     && CALL_DATA(call_index, ccbs_status) != CSMCC_CCBS_INVOKED ) 
	#else
 	    if (GET_CALL_STATE(call_index) == CSMCC_CALL_IDLE)
 	#endif 
         {
            /* Ripple Cheng: The call status is BLK, but the state is idle. This happens when 1A, 1 mo, 
             * during holding the 1A, the state of the mo is IDLE. At this time, to rel the mo is just need to 
             * send rel_ind and deallocate the call context. */
		/*mtk00924_20051207: CSM send setup_cnf_fail instead of rel_ind becasue at this phase MMI doesn't 
		know the call id of the MO call, if sending rel_ind will cause MMI call time displaying wrong problem*/
             //csmcc_send_l4c_rel_ind(call_index, CM_NORMAL_CALL_CLR,0);   
             /*mtk01602, 070606: add two more parameters if it's a SAT_DATA_CALL*/
             csmcc_send_l4c_setup_fail(CALL_DATA(call_index, src_id), 
                                       (kal_uint8)GET_CALL_TYPE(call_index), 
                                       CM_NORMAL_CALL_CLR,
                                       SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       0);
             csmcc_dealloc_call_context(call_index);
             csmcc_reset_cur_req(CSMCC_PTR->cur_req);
         }   
         else if(CALL_DATA(call_index,call_orig) == CSMCC_MT_CALL
            && ((GET_CALL_STATE(call_index)&(CSMCC_CALL_INIT|CSMCC_CALL_ACCEPT)) != 0))
         {
            csmcc_disc_call(call_index, CM_USER_BUSY);
            rel_flag = KAL_TRUE;
         }
         else
         {
		/*mtk00924_20051207: if CSM receives disc_req during the period that sending setup_req to CC and 
		before receiving proc_ind/alert_ind/setup_cnf, CSM should also send setup_cnf_success to MMI */		 	
                /*Cosine: 20080503*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
		#endif
            csmcc_disc_call(call_index, CM_NORMAL_CALL_CLR);         
            rel_flag = KAL_TRUE;
         }           
      }
      
   }
   /*Cosine, 20080503: [MAUI_00682453]Save previous request for dealing two consecutive request.*/
   csmcc_save_prev_req(CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id, CSMCC_PTR->req_call_id);

   if(rel_flag == KAL_TRUE)
   {
      return CSMCC_NO_ERROR;
   }
   else
   {
      return CSMCC_CMD_NOT_ALLOW;
   }

} /* end of csmcc_rel_all_except_waiting_call */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_rel_all
* DESCRIPTION                                                           
*    This function is used to release all calls
*
* CALLS  
*	
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_rel_all(kal_bool need_rel_sat_idle_call)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   kal_bool rel_flag = KAL_FALSE;
   kal_bool rel_ccbs_flag = KAL_FALSE;
     
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK)
      {
         if (GET_CALL_STATE(call_index) == CSMCC_CALL_IDLE)
      {
            if (CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ
               && need_rel_sat_idle_call == KAL_FALSE)              
            {
               /* Ripple: The IDLE call is a SAT call, and need_rel_sat_idle_call == F, 
                * not need to release this call. */               
                kal_brief_trace(TRACE_GROUP_1, CSMCC_NOT_REL_SAT_CALL);
               continue;
            }
            /* Ripple Cheng: The call status is BLK, but the state is idle. This happens when 1A, 1 mo, 
             * during holding the 1A, the state of the mo is IDLE. At this time, to rel the mo is just need to 
             * send rel_ind and deallocate the call context. */
		/*mtk00924_20051207: CSM send setup_cnf_fail instead of rel_ind becasue at this phase MMI doesn't 
		know the call id of the MO call, if sending rel_ind will cause MMI call time displaying wrong problem*/
             //csmcc_send_l4c_rel_ind(call_index, CM_NORMAL_CALL_CLR,0);    
             /*mtk01602, 070606: add two more parameters if it's a SAT_DATA_CALL*/
             csmcc_send_l4c_setup_fail(CALL_DATA(call_index, src_id), 
                                       (kal_uint8)GET_CALL_TYPE(call_index), 
                                       CM_NORMAL_CALL_CLR,
                                       SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       0);
             csmcc_dealloc_call_context(call_index);
             csmcc_reset_cur_req(CSMCC_PTR->cur_req);
         }   
#ifdef __CCBS_SUPPORT__
         else if(CALL_DATA(call_index,ccbs_status) == CSMCC_CCBS_INVOKED)
         {
            /* a CCBS call found, clear it */
            csmcc_send_cc_ccbs_rej_req(call_index, CM_CALL_REJECTED);
            
            csmcc_send_l4c_rel_ind(call_index, CSMCC_NO_CAUSE,0);
            
            /* for a ccbs call, directly deallocate call context*/
            csmcc_dealloc_call_context(call_index);

            rel_ccbs_flag = KAL_TRUE;            
         }
#endif /*__CCBS_SUPPORT__*/
         else if(CALL_DATA(call_index, cw_flag) == KAL_TRUE)
         {
            csmcc_disc_call(call_index, CM_USER_BUSY);  
            rel_flag = KAL_TRUE;
         }
         else
         {         
            /*Cosine: 20080503, [MAUI_00682453]*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	    #endif         
            csmcc_disc_call(call_index, CM_NORMAL_CALL_CLR);         
            rel_flag = KAL_TRUE;
         }
      }      
   }

   /* MAUI_01591733 if no call release, need not save prev req */
   if(rel_flag == KAL_TRUE)
   {
      /*Cosine, 20080503: [MAUI_00682453]Save previous request for dealing two consecutive request.*/
      csmcc_save_prev_req(CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id, CSMCC_PTR->req_call_id);

      return CSMCC_NO_ERROR;
   }
   else if (rel_ccbs_flag) /* only ccbs call is released. */
   {
      return CSMCC_CMD_SUCC;
   }
   else 
   {
      return CSMCC_CMD_NOT_ALLOW;
   }
} /* end of csmcc_rel_all_except_waiting_call */

