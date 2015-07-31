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
 *	csmcc_atfunc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for exporting function call used by L4C.
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define CSMCC_ATFUNC_C

//#include "kal_release.h"      	/* Basic data type */

//#include "stack_common.h"  
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"         /* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
//#include "ps2sat_struct.h"   /* Ripple SATCE */
//#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
//#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
#include "l4c_common_enum.h"
//#include "csmss_common_enums.h"
//#include "sim_common_enums.h"
//#include "nvram_enums.h"
//#include "rr_mpal_interface.h"
//#include "l4_defs.h"
#include "csmcc_defs.h"
#include "csmcc_bc_defs.h"
//#include "csmcc_bc_types.h"

#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
#endif

#include "csmcc_types.h"
#include "csmcc_atfunc.h"
#include "csmcc_utility.h"

#include "kal_trace.h"
#include "csm_trc.h"
//#include "GV.h"
//#include "tst_def.h"

//#include "custom_nvram_editor_data_item.h"

//#include "Custom_data_account.h"
//#include "kal_non_specific_general_types.h"
//#include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
//#include "ps_public_struct.h"

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)) /*mtk01602, 070606*/
extern kal_bool 
l4ccsm_cc_get_sat_prof(kal_uint8 sat_prof_id, csmcc_sat_profile_struct *sat_prof_ptr);
#endif

/*************************************************************************
* FUNCTION                                                            
* csmcc_get_clcc_mode
* DESCRIPTION                                                           
*    This function is get clcc_mode_enum
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_uint8 csmcc_get_clcc_mode(kal_uint8 call_id)
{
    clcc_mode_enum mode = CLCC_UNKNOWN_MODE;
    
    switch(CALL_DATA(call_id, call_mode))
    {
      case CSMCC_SINGLE_MODE:
         switch(GET_CALL_TYPE(call_id))
         {
            /* voice */
            case CSMCC_VOICE_CALL:
            case CSMCC_AUX_VOICE_CALL:
               mode = CLCC_VOICE_CALL;
               break;
            /* data */
            case CSMCC_DATA_CALL:
            case CSMCC_CSD_CALL:   
            case CSMCC_SAT_DATA_CALL:
               mode = CLCC_DATA_CALL;
               break;
            /* fax */
            case CSMCC_FAX_CALL:
               mode = CLCC_FAX_CALL;
               break;
            case CSMCC_VIDEO_CALL:
               mode = CLCC_VIDEO_CALL;
               break;
            default:
               /* invalid value range */
               break;
         }
         break;
         
      case CSMCC_ALT_VOICE_FAX:
         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         {
            /* alternating voice/fax, voice mode */
            mode = CLCC_AVF_VOICE;
         }
         else
         {
            /* alternating voice/fax, fax mode */
            mode = CLCC_AVF_FAX;
         }
         break;  
         
      case CSMCC_ALT_VOICE_DATA:
         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         {
            /* alternating voice/data, voice mode */
            mode = CLCC_AVD_VOICE;
         }
         else
         {
            /* alternating voice/data,  data mode */
            mode = CLCC_AVD_DATA;
         }
         break;        
      case CSMCC_VOICE_FOLLOW_DATA:
         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         {
            /* voice followed by data, voice mode */
            mode = CLCC_VFD_VOICE;
         }
         else
         {
            /* voice followed by data, data mode */
            mode = CLCC_VFD_DATA;
         }
         break;
      default:
         /* unknown */
         mode = CLCC_UNKNOWN_MODE;
         break;
    }    

    return mode;
}


/*************************************************************************
* FUNCTION                                                            
*	csmcc_find_next_call
* DESCRIPTION                                                           
*   This function used to get next call in call table after the specified
*   call ID.
*
* CALLS  
*	csmcc_find_next_call(kal_uint8 call_id, kal_uint8 *next_call_id)
*                           
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	next_call_id	OUT	second variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_find_next_call(kal_uint8 call_id, kal_uint8 *next_call_id)
{
   kal_uint8 i;
   CSMCC_PTR_G_TO_L

   if(call_id == CSMCC_INVALID_CALL_ID)
   {
      call_id = 1;
   }
   else
   {
      call_id += 1;
   }

   *next_call_id = CSMCC_INVALID_CALL_ID;
   
   for(i = call_id; i < CSMCC_MAX_CALL_NUM+1; i++)
   {
      if(GET_CALL_STATUS(i) == CSMCC_CALL_BLK
         && GET_CALL_STATE(i) != CSMCC_CALL_IDLE
         /*&& GET_CALL_STATE(i) != CSMCC_MS_CALL_DISC
         && GET_CALL_STATE(i) != CSMCC_NW_CALL_DISC
         && GET_CALL_STATE(i) != CSMCC_NW_CALL_DISC_ON_HOLD*/)
      {
         *next_call_id = i;
         break;
      }
      else if((i == CSMCC_PTR->req_call_id) &&
      	    ((CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ) 
      	    || (CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ)
      	    || (CSMCC_PTR->cur_req == CSMCC_EMERGENCY_CALL_SETUP_REQ))) /* MAUI_01360498, add emergency call */
      {
         /*mtk01602: 2 cases of call is exist but call_state = IDLE.
          1. Call is waiting for response of CALL_CTRL_BY_SIM. 
          2. 1A, MO-> hold->abort.*/
         
      	 *next_call_id = i;
         break;
      }
   }      

} /* end of csmcc_find_next_call */
            
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_call_info
* DESCRIPTION                                                           
*   This function used to provide call summery information of a specific call.
*
* CALLS  
*	l4ccsm_cc_get_call_info(kal_uint8 call_id,
*                               l4c_call_entry_struct *call_info,
*                               kal_uint8 *next_call_id)
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	*call_info	OUT	second variable, used as return
*	*next_call_id	OUT	third variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_call_info(kal_uint8 call_id,
                        l4c_call_entry_struct *call_info,
                        kal_uint8 *next_call_id)
{      
   csmcc_call_state_enum check_state;
   CSMCC_PTR_G_TO_L
      
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif
      
   if(call_id == CSMCC_INVALID_CALL_ID)
   {
      csmcc_find_next_call(CSMCC_INVALID_CALL_ID, &call_id);
      if(call_id == CSMCC_INVALID_CALL_ID)
      {
         if(next_call_id != NULL)
         {
            *next_call_id = CSMCC_INVALID_CALL_ID;
         }
         return KAL_FALSE;
      }
   }
      
   if(next_call_id != NULL)
   {
      /* find if next call exists */
      csmcc_find_next_call(call_id, next_call_id);
   }

   /* check if the specified call ID is valid */
   if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1) 
      || GET_CALL_STATUS(call_id) == CSMCC_CALL_FREE
      /*|| GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE
      || GET_CALL_STATE(call_id) == CSMCC_MS_CALL_DISC
      || GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC
      || GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC_ON_HOLD*/)
   {
      return KAL_FALSE;
   }
   
   call_info->src_id = CALL_DATA(call_id, src_id);
   call_info->call_id = call_id;
   
   /* CLCC dir */
   switch(CALL_DATA(call_id, call_orig))
   {
      /* MO call */
      case CSMCC_MO_CALL:
      case CSMCC_NW_INIT_MO_CALL:
         call_info->call_orig = CLCC_MO_CALL;
         break;
      /* MT call */
      case CSMCC_MT_CALL:
         call_info->call_orig = CLCC_MT_CALL;
         break;
      default:
         /* invalid value range */
         break;
   }
   
   /* CLCC state */
   if ((GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC)
      ||(GET_CALL_STATE(call_id) == CSMCC_MS_CALL_DISC))
   {
      check_state = csmcc_ctab_g.call_tab[call_id-1].pre_call_state;
   }
   else
   {
      check_state = GET_CALL_STATE(call_id);
   }

   kal_brief_trace(TRACE_INFO, CSMCC_CALL_INFO, call_id, CALL_DATA(call_id, call_orig), 
      GET_CALL_STATE(call_id), check_state, CALL_DATA(call_id, cw_flag));
   
   if ((check_state == CSMCC_NW_CALL_DISC)
      || (check_state == CSMCC_MS_CALL_DISC))
   {      
      kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_WRONG_CHECK_STATE,check_state);
   }
   
   switch(check_state)
   {

      case CSMCC_CALL_IDLE:
      	  if(call_id == CSMCC_PTR->req_call_id &&
      	    ((CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ) 
      	    || (CSMCC_PTR->cur_req == CSMCC_EMERGENCY_CALL_SETUP_REQ) /* added for MAUI_01360498 */
      	    || (CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ)))
      	  {
            call_info->call_state = CLCC_CALL_DIALING;
      	  }
         break;
          
      case CSMCC_CALL_INIT:
      case CSMCC_CALL_ACCEPT:
         if(CALL_DATA(call_id, call_orig) == CSMCC_MT_CALL)
         {
            if(CALL_DATA(call_id, cw_flag) == KAL_TRUE)
            {
               /* waiting */
               call_info->call_state = CLCC_CALL_WAITING;
            }
            else 
            {
               /* incoming */
               call_info->call_state = CLCC_CALL_INCOMING;
            }
         }
         else
         {
            /* dialing */
            call_info->call_state = CLCC_CALL_DIALING;
         }
         break;
         
      /* alerting */
      case CSMCC_CALL_ALERT:
         call_info->call_state = CLCC_CALL_ALERTING;
         break;
      
      /* active */ 
      case CSMCC_CALL_ACTIVE:
      case CSMCC_CALL_MODIFY:
      case CSMCC_CALL_HOLD_REQ:
      //case CSMCC_CALL_RETRIEVE_REQ: //Cosine, 070707
         call_info->call_state = CLCC_CALL_ACTIVE;
         break;
      
      /* held */
      case CSMCC_CALL_HOLD:
      case CSMCC_NW_CALL_DISC_ON_HOLD: /* add for Tailand field trial problem 1 */
      case CSMCC_CALL_RETRIEVE_REQ:    /* Cosine, 070707 [MAUI_235279]*/
         call_info->call_state = CLCC_CALL_HELD;
         break;
      default:
         /* invalid value range */
         break;
   }
   
   /* CLCC mode */
   /* MAUI_01722847 set call mode as default value */
   call_info->call_mode = csmcc_get_clcc_mode(call_id);

#if 0 //move to csmcc_get_clcc_mode
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

   switch(GET_MPTY_STATE(call_id))
   {
      case CSMCC_MPTY_IDLE:
      case CSMCC_MPTY_REQ:
         call_info->mpty = CLCC_NOT_MPTY;
         break;
      case CSMCC_MPTY_ACTIVE:
      case CSMCC_SPLIT_REQ:
         call_info->mpty = CLCC_MPTY;
         break;
      default:
         /* invalid value range */
         break;
   }
   
   if(CALL_DATA(call_id, number_present) == KAL_TRUE)
   {
      call_info->number = CALL_DATA(call_id, number);      
   }
   else
   {
      call_info->number.addr_length = 0;
   }
#ifdef __EMLPP_SUPPORT__
   call_info->priority = CALL_DATA(call_id, call_priority);
#else 
   call_info->priority = 0;
#endif 
   call_info->call_type = GET_CALL_TYPE(call_id);

   return KAL_TRUE;
   
} /* end of l4ccsm_cc_get_call_info */

#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_acm
* DESCRIPTION                                                           
*   This function used to get ACM and ACMMax value .
*
* CALLS  
*	l4ccsm_cc_get_acm(kal_uint32 *acm,
*                         kal_uint32 *acmmax)
* PARAMETERS
*	*acm		OUT	first variable, used as return
*	*acmmax		OUT	second variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_acm(kal_uint32 *acm,
                  kal_uint32 *acmmax)
{
   CSMCC_PTR_G_TO_L
   *acm = CSMCC_PTR->acm;
   *acmmax = CSMCC_PTR->acmmax;
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_acm */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_ccm
* DESCRIPTION                                                           
*   This function used to get current call meter of a call.
*
* CALLS  
*	l4ccsm_cc_get_ccm(kal_uint8 call_id,
*                         kal_uint32 *ccm)
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	*ccm		OUT	second variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_ccm(kal_uint8 call_id,
                  kal_uint32 *ccm)
{
   CSMCC_PTR_G_TO_L
   if(call_id == 0xff)
   {
      *ccm = (CSMCC_PTR->last_ccm) & 0x00ffffff;
      return KAL_TRUE;
   }
   #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
   return KAL_FALSE;

} /* end of l4ccsm_cc_get_ccm */
#endif /*__AOC_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_data_rate
* DESCRIPTION                                                           
*   This function used to get current data call user rate
*
* CALLS  
*	l4ccsm_cc_get_data_rate(kal_uint32 *rate)
*
* PARAMETERS
*	*rate		OUT	first variable, used as return
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_data_rate(kal_uint32 *rate)
{

   CSMCC_PTR_G_TO_L
   
   if(CSMCC_PTR->rat == RAT_GSM)
   {

        switch(CSMCC_PTR->channel_mode)
        {
           case DATA_14_5_RADIO_INTF_RATE:
              *rate = 14400;
              break;      
           case DATA_12_0_RADIO_INTF_RATE:
              *rate = 9600;
              break;      
           case DATA_06_0_RADIO_INTF_RATE:
              *rate = 4800;
              break;      
           case DATA_03_6_RADIO_INTF_RATE:
              *rate = 2400;
              break;      
           default:
              return KAL_FALSE;
        }

   }
#ifdef __UMTS_RAT__
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {  
   	csmcc_data_bc_param_struct *data_bc_param_ptr = &(CSMCC_PTR->data_bc_param);
	kal_uint8 fixed_network_user_rate=0, wanted_air_interface_user_rate=0;

	
	fixed_network_user_rate = data_bc_param_ptr->fnur;


	if(data_bc_param_ptr->fnur != CSMCC_FNUR_NM)
	{
		if(data_bc_param_ptr->fnur == CSMCC_FNUR_28_8_K)	   
			wanted_air_interface_user_rate = CSMCC_AIUR_28_8_K;	   
   		else if (data_bc_param_ptr->fnur > CSMCC_FNUR_28_8_K)	
			wanted_air_interface_user_rate = CSMCC_AIUR_57_6_K;
		else	 
			wanted_air_interface_user_rate = CSMCC_AIUR_14_4_K;
	}



	if(wanted_air_interface_user_rate == CSMCC_AIUR_14_4_K)
	{
		if(fixed_network_user_rate == CSMCC_FNUR_9_6_K)
			*rate = 9600;
		else
			*rate = 14400;
	}
	else if(wanted_air_interface_user_rate == CSMCC_AIUR_28_8_K) 
	{
		if(fixed_network_user_rate < CSMCC_FNUR_28_8_K && fixed_network_user_rate != CSMCC_FNUR_NM)
		{
			if(fixed_network_user_rate == CSMCC_FNUR_9_6_K )
				*rate = 9600;
			else if(fixed_network_user_rate == CSMCC_FNUR_14_4_K)
				*rate = 14400;
			else
				*rate = 19200;
		}
		else
			*rate = 28800;
	}
	else if(wanted_air_interface_user_rate == CSMCC_AIUR_57_6_K) 
	{
		if(fixed_network_user_rate != CSMCC_FNUR_64_K && fixed_network_user_rate != CSMCC_FNUR_NM)
		{
			if(fixed_network_user_rate == CSMCC_FNUR_9_6_K )
				*rate = 9600;
			else if(fixed_network_user_rate == CSMCC_FNUR_14_4_K)
				*rate = 14400;
			else if(fixed_network_user_rate == CSMCC_FNUR_19_2_K)
				*rate = 19200;
			else if(fixed_network_user_rate == CSMCC_FNUR_28_8_K)
				*rate = 28800;
			else if(fixed_network_user_rate == CSMCC_FNUR_38_4_K)
				*rate = 38400;	
			else if(fixed_network_user_rate == CSMCC_FNUR_48_K)
				*rate = 48000;
			else if(fixed_network_user_rate == CSMCC_FNUR_56_K)
				*rate = 56000;
			else if(fixed_network_user_rate == CSMCC_FNUR_33_6_K)
				*rate = 33600;
			else if(fixed_network_user_rate == CSMCC_FNUR_32_K)
				*rate = 32000;		
			else if(fixed_network_user_rate == CSMCC_FNUR_31_2_K)
				*rate = 31200;			
		}
        #ifdef __SYNC_HDLC_CSD__
		/* [__UMTS_CSD_T__] add for 64K transparent CSD */
		else if(fixed_network_user_rate == CSMCC_FNUR_64_K)
			*rate = 64000;
        #endif /* __SYNC_HDLC_CSD__ */
		else
			*rate = 57600;		
	}
	
   }
#endif /*__UMTS_RAT__*/
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
   }

   return KAL_TRUE;

} /* end of l4ccsm_cc_get_data_rate */


/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_data_call_info
* DESCRIPTION                                                           
*   This function used to get current data call type and sync/async info.
*
* CALLS  
*
* PARAMETERS
*	*rate		OUT	first variable, used as return
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_data_call_info(kal_uint8 *data_call_type)
{
   CSMCC_PTR_G_TO_L
   if (CSMCC_PTR->data_bc_param.ce == CSMCC_TRANSPARENT)
   {
      if (CSMCC_PTR->data_bc_param.sync == CSMCC_SYNC_DATA)
      {
         *data_call_type = L4C_SYNC_T;
      }
      else /* Async */
      {
         *data_call_type = L4C_ASYNC_T;
      }
   }
   else /* Non-transparent */
   {
      if (CSMCC_PTR->data_bc_param.sync == CSMCC_SYNC_DATA)
      {
         *data_call_type = L4C_SYNC_NT;
      }
      else /* Async */
      {
         *data_call_type = L4C_ASYNC_NT;
      }
   }
   
   return KAL_TRUE;

} /* end of l4ccsm_cc_get_data_call_info */

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_sat_prof
* DESCRIPTION                                                           
*   This function used to get sat profile by sat profile type
*
* CALLS  
*	l4ccsm_cc_get_sat_prof(kal_uint8 sat_prof_type, csmcc_sat_profile_struct *sat_prof_ptr)
*
* PARAMETERS
*	sat_prof_type		IN	first variable, used as input
*  csd_prof_ptr      OUT second variable, used as output
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_sat_prof(kal_uint8 sat_prof_type, csmcc_sat_profile_struct *sat_prof_ptr)
{
   CSMCC_PTR_G_TO_L
   if(sat_prof_type != CSMCC_SAT_PROF)
   {
      return KAL_FALSE;
   }
   
   kal_mem_cpy(sat_prof_ptr, 
               &(CSMCC_PTR->sat_prof), 
               sizeof(csmcc_sat_profile_struct));
   
   kal_brief_trace(TRACE_GROUP_3,CSMCC_SAT_CSD_PROF_CONTEXT,
          sat_prof_type,
          CSMCC_PTR->sat_prof.addr.addr_length,
          CSMCC_PTR->sat_prof.addr.addr_bcd[0],
          CSMCC_PTR->sat_prof.addr.addr_bcd[1],
          CSMCC_PTR->sat_prof.addr.addr_bcd[2]);

   if(CSMCC_PTR->sat_prof.sat_cbst.ce == CSMCC_TRANSPARENT
   	  || CSMCC_PTR->sat_prof.sat_cbst.ce == CSMCC_TRANSPARENT_PREF)
   {
   		sat_prof_ptr->csd_module = MOD_TDT;
   }
   else if(CSMCC_PTR->sat_prof.sat_cbst.ce == CSMCC_NON_TRANSPARENT
   	     || CSMCC_PTR->sat_prof.sat_cbst.ce == CSMCC_NON_TRANSPARENT_PREF)
   {
   		sat_prof_ptr->csd_module = MOD_L2R;
   }
   
   return KAL_TRUE;               

} /* end of l4ccsm_cc_get_sat_prof */
#endif /* __SATCE__ */
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_mt_call
* DESCRIPTION                                                           
*   This function used to get call id of current incomnig call or waiting call.
*
* CALLS  
*	l4ccsm_cc_get_mt_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_mt_call(kal_uint8 *call_id)
{
   csmcc_ret_t ret_val;
   CSMCC_PTR_G_TO_L
   
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif

   ret_val = csmcc_find_call(CSMCC_MT_CALL, CSMCC_CALL_INIT, call_id);
   
   if(ret_val == CSMCC_NO_ERROR)
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;
   
} /* end of l4ccsm_cc_get_mt_call */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_in_call
* DESCRIPTION                                                           
*   This function used to get call id of current in-call.
*
* CALLS  
*	l4ccsm_cc_get_in_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_in_call(kal_uint8 *call_id)
{ 
   kal_uint8 call_index;
   csmcc_call_orig_enum call_orig;
   csmcc_call_state_enum call_state;
   CSMCC_PTR_G_TO_L

#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif

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
         ||(call_orig == CSMCC_MT_CALL && call_state == CSMCC_CALL_ACCEPT)
         ||(call_state == CSMCC_NW_CALL_DISC))
      {
         *call_id = call_index;
         return KAL_TRUE;
      }
   }
   
   //Cosine, 070710: patch for MAUI_235279
   /* if no call is found until here, then find active call */
   if((csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, call_id) == CSMCC_NO_ERROR)
   	  || (csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_HOLD_REQ, call_id) == CSMCC_NO_ERROR))
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;

} /* end of l4ccsm_cc_get_in_call */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_outgoing_call
* DESCRIPTION                                                           
*   This function used to get call id of outgoing call.
*
* CALLS  
*	l4ccsm_cc_get_outgoing_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_outgoing_call(kal_uint8 *call_id)
{    

   kal_uint8 call_index;
   CSMCC_PTR_G_TO_L
   
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
         continue;
         
       /*[Cosine 070323] Add CSMCC_NW_INIT_MO_CALL as another kind of outgoing call. */
      if((CALL_DATA(call_index, call_orig) & (CSMCC_MO_CALL|CSMCC_NW_INIT_MO_CALL)) > 0
         && (GET_CALL_STATE(call_index) & (CSMCC_CALL_INIT|CSMCC_CALL_ALERT)) > 0)
      {
         if(call_id != NULL)
         {
            *call_id = call_index;
         }
         return KAL_TRUE;
      }
      /*[Cosine 070323] Add CSMCC_NW_INIT_MO_CALL as another kind of outgoing call. */
     if((CALL_DATA(call_index, call_orig) & (CSMCC_MO_CALL|CSMCC_NW_INIT_MO_CALL)) > 0
     	  && (CALL_DATA(call_index, pre_call_state) == CSMCC_CALL_INIT
     	        || CALL_DATA(call_index, pre_call_state) == CSMCC_CALL_ALERT)
         && (CALL_DATA(call_index, call_state) == CSMCC_NW_CALL_DISC
               || CALL_DATA(call_index, call_state) == CSMCC_MS_CALL_DISC))
      {
         if(call_id != NULL)
         {
            *call_id = call_index;
         }
         return KAL_TRUE;
      }
      
   }
   
  /* Ripple: 1A, MO => hold_req 1A, MO state is IDLE. */
   if((CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ 
      || CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ
      || CSMCC_PTR->cur_req == CSMCC_EMERGENCY_CALL_SETUP_REQ)
      && GET_CALL_STATE(CSMCC_PTR->req_call_id) == CSMCC_CALL_IDLE)
   {
      *call_id = CSMCC_PTR->req_call_id;
      return KAL_TRUE;
   }
   
   return KAL_FALSE;

} /* end of l4ccsm_cc_get_active_call */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_active_call
* DESCRIPTION                                                           
*   This function used to get call id of active call.
*
* CALLS  
*	l4ccsm_cc_get_active_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_active_call(kal_uint8 *call_id)
{ 
   CSMCC_PTR_G_TO_L
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif

   if(csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, call_id) == CSMCC_NO_ERROR)
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;

} /* end of l4ccsm_cc_get_active_call */
               
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_hold_call
* DESCRIPTION                                                           
*   This function used to get call id of hold call.
*
* CALLS  
*	l4ccsm_cc_get_hold_call(kal_uint8 *call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_hold_call(kal_uint8 *call_id)
{ 
   CSMCC_PTR_G_TO_L
#ifdef __GEMINI__
   if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
   {
      kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
      return KAL_FALSE;
   }
#endif

   if(csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_HOLD, call_id) == CSMCC_NO_ERROR)
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;

} /* end of l4ccsm_cc_get_active_call */

               
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_addr_type
* DESCRIPTION                                                           
*   This function used to set address type by L4C upon +CSTA.
*
* CALLS  
*	l4ccsm_cc_set_addr_type(kal_uint8 addr_type)
* PARAMETERS
*	addr_type	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_addr_type(kal_uint8 addr_type)
{
   CSMCC_PTR_G_TO_L
   switch(addr_type)
   {
      case CSMCC_DEFAULT_ADDR_TYPE:
      case CSMCC_INTERNATIONAL_ADDR:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   } /* switch(addr_type) */
   
   CSMCC_PTR->at_param.addr_type = (csmcc_addr_type_enum)addr_type;

   return KAL_TRUE;
   
} /* end of l4ccsm_cc_set_addr_type */
                       
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_addr_type
* DESCRIPTION                                                           
*   This function used to query address type setting by L4C upon +CSTA?.
*
* CALLS  
*	l4ccsm_cc_get_addr_type(kal_uint8 *addr_type)
* PARAMETERS
*	*addr_type	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_addr_type(kal_uint8 *addr_type)
{
   CSMCC_PTR_G_TO_L
   *addr_type = CSMCC_PTR->at_param.addr_type;
   
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_addr_type */

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
#endif //[MAUI_00736467]
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_call_mode
* DESCRIPTION                                                           
*   This function used to set call mode by L4C upon +CMOD.
*
* CALLS  
*	l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
* PARAMETERS
*	call_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
{
   CSMCC_PTR_G_TO_L
   switch(call_mode)
   {
      case CSMCC_SINGLE_MODE:
      case CSMCC_ALT_VOICE_FAX:
      case CSMCC_ALT_VOICE_DATA:
      case CSMCC_VOICE_FOLLOW_DATA:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   } /* switch(call_mode) */
   
   CSMCC_PTR->at_param.call_mode = (csmcc_call_mode_enum)call_mode;
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_call_mode */
               
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_call_mode
* DESCRIPTION                                                           
*   This function used to query call mode setting by L4C upon +CMOD?.
*
* CALLS  
*	l4ccsm_cc_get_call_mode(kal_uint8 *call_mode)
* PARAMETERS
*	*call_mode	OUT	first variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/        
kal_bool 
l4ccsm_cc_get_call_mode(kal_uint8 *call_mode)
{
   CSMCC_PTR_G_TO_L
   *call_mode = CSMCC_PTR->at_param.call_mode;
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_call_mode */

#ifdef __CNAP_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_cnap_info
* DESCRIPTION                                                           
*   This function used to get caller name info. of MT call.
*
* CALLS  
*	
* PARAMETERS
*	
* RETURNS
*      name_present : If need to show CNAP in MMI
*	   cnap_info_exist : If MS received CNAP 
*      tag : CNAP tag,(PresentationAllowed, PresentationRestricted, NameUnavailable, NamePresentationRestricted)
*     
*      Only 2 cases need to show CNAP name:
*            1. tag = CNAP_ALLOWED and name_length != 0
*            2. tag = CNAP_RESTRICTEDNAME and name_length != 0
*	
* GLOBALS AFFECTED
*   
*************************************************************************/        
/*[Cosine] CNAP*/
void 
l4ccsm_cc_get_cnap_info(kal_uint8 *name_present, kal_uint8 *cnap_info_exist, kal_uint8 *tag, l4_name_struct *l4_name_ptr)
{
   CSMCC_PTR_G_TO_L
         *cnap_info_exist = CSMCC_PTR->cnap_info.callingName_present;
         *tag = CSMCC_PTR->cnap_info.callingName_choice_tag;
         *name_present = KAL_FALSE;
     
	 kal_brief_trace(TRACE_FUNC, FN_ENTRY_l4ccsm_cc_get_cnap_info);

	 if(*cnap_info_exist == KAL_TRUE && *tag == CNAP_ALLOWED)
	 {
	    /* If CNAP name length=0, name_present = FALSE */
	    if(CSMCC_PTR->cnap_info.callingName_choice_value.namePresentationAllowed.name_length != 0)
	    {
			*name_present = KAL_TRUE;
	 		kal_mem_cpy(l4_name_ptr, 
				&(CSMCC_PTR->cnap_info.callingName_choice_value.namePresentationAllowed),
				sizeof(l4_name_struct));
	    }
	 }
	 else if(*cnap_info_exist == KAL_TRUE && *tag == CNAP_RESTRICTEDNAME)
  	 {
            if(CSMCC_PTR->cnap_info.callingName_choice_value.namePresentationRestricted.name_length != 0)
            {
                        *name_present = KAL_TRUE;
		 	kal_mem_cpy(l4_name_ptr, 
				&(CSMCC_PTR->cnap_info.callingName_choice_value.namePresentationRestricted),
				sizeof(l4_name_struct));
	    }
 	 }
	 
	 //mtk01602, 070626: reset CNAP whenever L4C call this function and get cnap info
	 CSMCC_PTR->cnap_info.callingName_present = KAL_FALSE;
	 
} /* end of l4ccsm_cc_get_cnap_info */
#endif /*__CNAP_SUPPORT__*/
#if 0
/* under construction !*/
#ifdef __test_mode__
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
#endif /*__test_mode__*/                       
#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_check_cbst_para_supported
* DESCRIPTION                                                           
*   This function used to check if the cbst para is supported by the MS.
*
* CALLS  
*	
* PARAMETERS
*	bearer_speed	IN	first variable, used as input
*	bearer_name	IN	second variable, used as input
*	bearer_ce	IN	third variable, used as input
*   need_check_fax IN forth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
csmcc_check_cbst_para_supported(kal_uint8 bearer_speed,
                                   kal_uint8 bearer_name,
                                   kal_uint8 bearer_ce,
                                   kal_bool need_check_fax)
{
   CSMCC_PTR_G_TO_L
   if(CSMCC_PTR->rat == RAT_GSM)
   {

   	switch(bearer_ce)
   	{
      		case CSMCC_TRANSPARENT:
         	/* check if the setting is for fax or data */
         		if((need_check_fax == KAL_TRUE) 
            		&& ( CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_TIA
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_ITUT 
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_MANU_SPECIFIC
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_2))
         		{
            			if(DATA_CAP(TRANS_FAX_MASK) == KAL_FALSE)
            			{
               			return KAL_FALSE;
            			}
         		}
         		else
         		{
            			switch(bearer_name)
            			{
               			case CSMCC_DATA_ASYNC:
               			case CSMCC_DATA_ASYNC_RDI:
                  				if(DATA_CAP(TRANS_ASYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			case CSMCC_DATA_SYNC:
               			case CSMCC_DATA_SYNC_RDI:
                  				if(DATA_CAP(TRANS_SYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			default:
                  			/* invalid value */
                  				return KAL_FALSE;
            			}
         		}
         		break;
      		case CSMCC_NON_TRANSPARENT:
         	/* check if the setting is for fax or data */
         		if((need_check_fax == KAL_TRUE) 
            		&& (CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_TIA
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_ITUT 
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_MANU_SPECIFIC
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_2))
         		{
            			if(DATA_CAP(NON_TRANS_FAX_MASK) == KAL_FALSE)
            			{
               			return KAL_FALSE;
            			}
         		}
         		else
         		{
            			switch(bearer_name)
            			{
               			case CSMCC_DATA_ASYNC:
               			case CSMCC_DATA_ASYNC_RDI:
                  				if(DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			case CSMCC_DATA_SYNC:
               			case CSMCC_DATA_SYNC_RDI:
                  				if(DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			default:
                  			/* invalid value */
                  				return KAL_FALSE;
            			}
         		}
         		break;
      		case CSMCC_TRANSPARENT_PREF:
      		case CSMCC_NON_TRANSPARENT_PREF:
         	/* check if the setting is for fax or data */
         		if((need_check_fax == KAL_TRUE) 
            		&& (CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_TIA
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_ITUT 
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_MANU_SPECIFIC
            		|| CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_2))
         		{
            			if(DATA_CAP(TRANS_FAX_MASK) == KAL_FALSE
               		|| DATA_CAP(NON_TRANS_FAX_MASK) == KAL_FALSE)
            			{
               			return KAL_FALSE;
            			}
         		}
         		else
         		{
            			switch(bearer_name)
            			{
               			case CSMCC_DATA_ASYNC:
               			case CSMCC_DATA_ASYNC_RDI:
                  				if(DATA_CAP(TRANS_ASYNC_MASK) == KAL_FALSE
                     			|| DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			case CSMCC_DATA_SYNC:
               			case CSMCC_DATA_SYNC_RDI:
                  				if(DATA_CAP(TRANS_SYNC_MASK) == KAL_FALSE
                    	 			|| DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_FALSE)
                  				{
                     				return KAL_FALSE;
                  				}
                  				break;
               			default:
                  			/* invalid value */
                  				return KAL_FALSE;
            			}
         		}
         		break;
      		default:
         	/* invalid value range */
         		return KAL_FALSE;
   	}

   	switch(bearer_speed)
   	{
      		case CSMCC_2400_BPS_V22BIS:
      		case CSMCC_2400_BPS_V26TER:
      		/* case CSMCC_2400_BPS_V120: disable V.120 */ /* Ripple: RA does not support V.120 */
      		case CSMCC_2400_BPS_V110:
         		#ifndef __CSD_NT_2400__
         		/* Ripple: 2400 is only for Transparent mode. */
         		if(bearer_ce != CSMCC_TRANSPARENT)
         		{
            			/* no support non-transparent 2.4k according to spec. 04.21*/
            			return KAL_FALSE;
         		}
         		#endif
         		break;
      		case CSMCC_AUTOBAUDING:
         	/* according to 27.007, autobauding (automatic selection 
          	* of the speed; this setting is possible in case of 3.1 
          	* kHz modem and non-transparent service) */
         		if(bearer_ce == CSMCC_TRANSPARENT)
         		{
            			return KAL_FALSE;
         		}
         		break;      
      		case CSMCC_4800_BPS_V32:
      		case CSMCC_9600_BPS_V32:
      		case CSMCC_9600_BPS_V34:
      		case CSMCC_14400_BPS_V34:
      		/* case CSMCC_4800_BPS_V120: disable V.120 */
      		/* case CSMCC_9600_BPS_V120: disable V.120 */
      		/* case CSMCC_14400_BPS_V120: disable V.120 */
      		case CSMCC_4800_BPS_V110:
      		case CSMCC_9600_BPS_V110:
      		case CSMCC_14400_BPS_V110:
         		break;
      		default:
         	/* invalid value range */
         		return KAL_FALSE;
   	} /* switch(bearer_speed) */
 
   }
#ifdef __UMTS_RAT__ 
   else if (CSMCC_PTR->rat == RAT_UMTS)
   {
   	switch(bearer_ce)
   	{	
   	    case CSMCC_NON_TRANSPARENT:
	    {
                if((need_check_fax == KAL_TRUE) 
            	  && (CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_TIA
            	  || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_ITUT 
            	  || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_MANU_SPECIFIC
            	  || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_2))
         	{
            	    if(DATA_CAP(NON_TRANS_FAX_MASK) == KAL_FALSE)
            	    {
               	        return KAL_FALSE;
            	    }
         	}
		else
		{
		    switch(bearer_name)
		    {
		        case CSMCC_DATA_ASYNC:
			case CSMCC_DATA_ASYNC_RDI:
			    if(DATA_CAP(NON_TRANS_ASYNC_MASK) == KAL_FALSE)
			    {
			        return KAL_FALSE;
			    }
			    break;
			case CSMCC_DATA_SYNC:
			case CSMCC_DATA_SYNC_RDI:
			    if(DATA_CAP(NON_TRANS_SYNC_MASK) == KAL_FALSE)
			    {
			        return KAL_FALSE;
			    }
			    break;
			default:
			    /* invalid value */
			    return KAL_FALSE;
			}
		    }
   		}
		break;

/*[MAUI_01416826] transparent service should be accepted for BS30 (video call)*/
#if defined(__SYNC_HDLC_CSD__) || defined(__VIDEO_CALL_SUPPORT__)
		case CSMCC_TRANSPARENT:
		    if(bearer_name != CSMCC_DATA_SYNC
		      && bearer_name != CSMCC_DATA_SYNC_RDI)  //__UMTS_CSD_T__
		    {
		        return KAL_FALSE;
		    }
		    break;
#endif /*(__SYNC_HDLC_CSD__) || (__VIDEO_CALL_SUPPORT__)*/
		default:
		    return KAL_FALSE;	
	}
   	
	switch(bearer_speed)
	{
		case CSMCC_AUTOBAUDING:
		case CSMCC_2400_BPS_V22BIS:
		case CSMCC_2400_BPS_V26TER:			
		case CSMCC_4800_BPS_V32:
		case CSMCC_9600_BPS_V32:
		case CSMCC_9600_BPS_V34:
		case CSMCC_14400_BPS_V34:		
		case CSMCC_19200_BPS_V34:	
		case CSMCC_28800_BPS_V34:			
		case CSMCC_2400_BPS_V120:
		case CSMCC_4800_BPS_V120:
		case CSMCC_9600_BPS_V120: 		
		case CSMCC_14400_BPS_V120:
		case CSMCC_19200_BPS_V120:
		case CSMCC_28800_BPS_V120:
		case CSMCC_38400_BPS_V120: 		
		case CSMCC_48000_BPS_V120: 
		case CSMCC_56000_BPS_V120:
		case CSMCC_2400_BPS_V110:
		case CSMCC_4800_BPS_V110:			
		case CSMCC_9600_BPS_V110:
		case CSMCC_14400_BPS_V110:
		case CSMCC_19200_BPS_V110:
		case CSMCC_28800_BPS_V110:			
		case CSMCC_38400_BPS_V110:			
		case CSMCC_48000_BPS_V110:
		case CSMCC_56000_BPS_V110:
		    if(bearer_ce == CSMCC_TRANSPARENT)  //__UMTS_CSD_T__
		    {
		        return KAL_FALSE;
		    }
		    break;
		
#ifdef __SYNC_HDLC_CSD__
                /* [__UMTS_CSD_T__] TS27.007 6.7, CBST = 115, 5, 0
                 * Refer to TS22.002 3.1.2.1.2 and TS27.001 B.1.3.1.3 for bc parameters
                 */
		case CSMCC_56000_BPS_TRANSPARENT:
		    if(bearer_ce != CSMCC_TRANSPARENT || bearer_name != CSMCC_DATA_SYNC_RDI)
		    {
		        return KAL_FALSE;
		    }
		    break;

                /* [__UMTS_CSD_T__] TS27.007 6.7, CBST = 116, 1, 0
                 * Refer to TS22.002 3.1.2.1.2 and TS27.001 B.1.3.1.5 for bc parameters
                 */
		case CSMCC_64000_BPS_TRANSPARENT:
		    if(bearer_ce != CSMCC_TRANSPARENT || bearer_name != CSMCC_DATA_SYNC)
		    {
		        return KAL_FALSE;
		    }
		    break;
#endif /* __SYNC_HDLC_CSD__ */

/*[MAUI_00740014]Video Call Fallback*/
#if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
		case CSMCC_64000_BPS_MULTIMEDIA:
		    if((bearer_ce != CSMCC_TRANSPARENT) || (bearer_name != CSMCC_DATA_SYNC))
		    {
			/* MAUI_01312392, This bearer_speed can only used by 
                           multimedia(BS30, TRANSPARENT_SYNC)*/
			return KAL_FALSE;
		    }
		    break;
#endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/

		default:
			return KAL_FALSE;
         
	}
   }
#endif /*__UMTS_RAT__*/
   else
   {
   	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
	return KAL_FALSE;
   }

   return KAL_TRUE;
         
}
                       
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_bearer_service_type
* DESCRIPTION                                                           
*   This function used to set bearer service type by L4C upon +CBST.
*
* CALLS  
*	csmcc_check_cbst_para_supported(kal_uint8 bearer_speed,
*                                  kal_uint8 bearer_name,
*                                  kal_uint8 bearer_ce,
*                                  kal_bool need_check_fax)
* PARAMETERS
*	bearer_speed	IN	first variable, used as input
*	bearer_name	IN	second variable, used as input
*	bearer_ce	IN	third variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_bearer_service_type (kal_uint8 bearer_speed,
                                   kal_uint8 bearer_name,
                                   kal_uint8 bearer_ce)
{
   CSMCC_PTR_G_TO_L
   kal_bool is_supported;

   is_supported = csmcc_check_cbst_para_supported(bearer_speed, bearer_name, 
                                                             bearer_ce, KAL_TRUE);

   if (is_supported == KAL_TRUE)
   {
   CSMCC_PTR->at_param.bearer_service_type.bearer_speed = (csmcc_bearer_speed_enum)bearer_speed;
   CSMCC_PTR->at_param.bearer_service_type.bearer_name = (csmcc_bearer_name_enum)bearer_name;
   CSMCC_PTR->at_param.bearer_service_type.bearer_ce = (csmcc_bearer_ce_enum)bearer_ce;
   }
   
   return is_supported;

} /* end of l4ccsm_cc_set_bearer_service_type */

#if 0 /*mtk01602, 070606*/
#ifdef __SATCE__
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
#endif /*mtk01602, 070606*/
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_bearer_service_type
* DESCRIPTION                                                           
*   This function used to query bearer service type setting by L4C upon +CBST?.
*
* CALLS  
*	l4ccsm_cc_get_bearer_service_type(kal_uint8 *bearer_speed,
*                                         kal_uint8 *bearer_name,
*                                         kal_uint8 *bearer_ce)
* PARAMETERS
*	*bearer_speed	OUT	first variable, used as return
*	*bearer_name	OUT	second variable, used as return
*	*bearer_ce	OUT	third variable, used as return
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/        

kal_bool 
l4ccsm_cc_get_bearer_service_type (kal_uint8 *bearer_speed,
                                   kal_uint8 *bearer_name,
                                   kal_uint8 *bearer_ce)
{
   CSMCC_PTR_G_TO_L
   *bearer_speed = CSMCC_PTR->at_param.bearer_service_type.bearer_speed;
   *bearer_name = CSMCC_PTR->at_param.bearer_service_type.bearer_name;
   *bearer_ce = CSMCC_PTR->at_param.bearer_service_type.bearer_ce;
   
   return KAL_TRUE;
   
} /* end of l4ccsm_cc_get_bearer_service_type */
#if 0
/* under construction !*/
#ifdef __test_mode__
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
#if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
/* under construction !*/
#ifdef __CSD_NT_2400__
/* under construction !*/
#else  /* __CSD_NT_2400__ */
/* under construction !*/
/* under construction !*/
#endif /* __CSD_NT_2400__ */
/* under construction !*/
#else /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/
#ifdef __CSD_NT_2400__
/* under construction !*/
#else  /* __CSD_NT_2400__ */
/* under construction !*/
/* under construction !*/
#endif /* __CSD_NT_2400__ */
#endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*__test_mode__*/
#endif
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_sns_mode
* DESCRIPTION                                                           
*   This function used to set SNS mode by L4C upon +CSNS.
*
* CALLS  
*	l4ccsm_cc_set_sns_mode(kal_uint8 sns_mode)
* PARAMETERS
*	sns_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool l4ccsm_cc_set_sns_mode (kal_uint8 sns_mode)
{
   CSMCC_PTR_G_TO_L
   switch(sns_mode)
   {
      case CSMCC_SNS_VOICE:
      case CSMCC_SNS_ALT_VOICE_FAX_VOICE_FIRST:
      case CSMCC_SNS_FAX:
      case CSMCC_SNS_ALT_VOICE_DATA_VOICE_FIRST:
      case CSMCC_SNS_DATA:
      case CSMCC_SNS_ALT_VOICE_FAX_FAX_FIRST:
      case CSMCC_SNS_ALT_VOICE_DATA_DATA_FIRST:
      case CSMCC_SNS_VOICE_FOLLOW_DATA:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.sns_mode = (csmcc_sns_mode_enum)sns_mode;
   
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_sns_mode */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_sns_mode
* DESCRIPTION                                                           
*   This function used to get SNS mode by L4C upon +CSNS?.
*
* CALLS  
*	l4ccsm_cc_get_sns_mode(kal_uint8 *sns_mode)
* PARAMETERS
*	*sns_mode	OUT	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                       
kal_bool 
l4ccsm_cc_get_sns_mode (kal_uint8 *sns_mode)
{
    CSMCC_PTR_G_TO_L
   *sns_mode = CSMCC_PTR->at_param.sns_mode;
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_sns_mode */
#if 0
/* under construction !*/
#ifdef __test_mode__
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
#endif /*__test_mode__*/
#endif
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_char_framing
* DESCRIPTION                                                           
*   This function used to set character framing by L4C upon +ICF.
*
* CALLS  
*	l4ccsm_cc_set_char_framing(kal_uint8 cf_format,
*                                  kal_uint8 cf_parity)
* PARAMETERS
*	cf_format	IN	first variable, used as input
*	cf_parity	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_char_framing (kal_uint8 cf_format,
                            kal_uint8 cf_parity)
{
   CSMCC_PTR_G_TO_L
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
#endif
   if ((cf_format > CSMCC_CF_7_DATA_1_STOP) || (cf_parity > CSMCC_CF_PARITY_SPACE))
   {
      return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.cf_param.cf_format = (csmcc_cf_format_enum)cf_format;
   CSMCC_PTR->at_param.cf_param.cf_parity = (csmcc_cf_parity_enum)cf_parity;      
   return KAL_TRUE;
   
} /* end of l4ccsm_cc_set_char_framing */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_char_framing
* DESCRIPTION                                                           
*   This function used to set character framing by L4C upon +ICF?.
*
* CALLS  
*	l4ccsm_cc_get_char_framing(kal_uint8 *cf_format,
*                                  kal_uint8 *cf_parity)
* PARAMETERS
*	*cf_format	OUT	first variable, used as input
*	*cf_parity	OUT	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_char_framing (kal_uint8 *cf_format,
                            kal_uint8 *cf_parity)
{
   CSMCC_PTR_G_TO_L
   *cf_format = CSMCC_PTR->at_param.cf_param.cf_format;
   *cf_parity  = CSMCC_PTR->at_param.cf_param.cf_parity;
   return KAL_TRUE;

} /* end of l4ccsm_cc_get_char_framing */
#if 0
/* under construction !*/
#ifdef __test_mode__
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
#endif /*__test_mode__*/
#endif
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_v120_param
* DESCRIPTION                                                           
*   This function used to set v.120 parameters L4C upon +CV120.
*
* CALLS  
*	l4ccsm_cc_set_v120_param(kal_uint8 v120_rah,
*                                kal_uint8 v120_mfm,
*                                kal_uint8 v120_mode,
*                                kal_uint8 v120_llineg,
*                                kal_uint8 v120_assign,
*                                kal_uint8 v120_negtype)
* PARAMETERS
*	v120_rah	IN	first variable, used as input
*	v120_mfm	IN	second variable, used as input
*	v120_mode	IN	third variable, used as input
*	v120_llineg	IN	fourth variable, used as input
*	v120_assign	IN	fifth variable, used as input
*	v120_negtype	IN	sixth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                      
kal_bool 
l4ccsm_cc_set_v120_param (kal_uint8 v120_rah,
                          kal_uint8 v120_mfm,
                          kal_uint8 v120_mode,
                          kal_uint8 v120_llineg,
                          kal_uint8 v120_assign,
                          kal_uint8 v120_negtype)
{
   CSMCC_PTR_G_TO_L
   switch(v120_rah)
   {
      case CSMCC_RAH_NOT_INCLUDED:
      case CSMCC_RAH_INCLUDED:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(v120_mfm)
   {
      case CSMCC_MULTI_FRAME_EST_NOT_SUPPORT:
      case CSMCC_MULTI_FRAME_EST_SUPPORT:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(v120_mode)
   {
      case CSMCC_BIT_TRANSPARENT_MODE:
      case CSMCC_PROTOCOL_SENSITIVE_MODE:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(v120_llineg)
   {
      case CSMCC_LLI_NEG_NOT_ALLOWED:
      case CSMCC_LLI_NEG_ALLOWED:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(v120_assign)
   {
      case CSMCC_DEFAULT_ASSIGNEE:
      case CSMCC_ASSIGNOR_ONLY:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(v120_negtype)
   {
      case CSMCC_LOGICAL_LINK_ZERO:
      case CSMCC_USER_INFO:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.v120_param.v120_rah = (csmcc_v120_rah_enum)v120_rah;
   CSMCC_PTR->at_param.v120_param.v120_mfm = (csmcc_v120_mfm_enum)v120_mfm;
   CSMCC_PTR->at_param.v120_param.v120_mode = (csmcc_v120_mode_enum)v120_mode;
   CSMCC_PTR->at_param.v120_param.v120_llineg = (csmcc_v120_llineg_enum)v120_llineg;
   CSMCC_PTR->at_param.v120_param.v120_assign = (csmcc_v120_assign_enum)v120_assign;
   CSMCC_PTR->at_param.v120_param.v120_negtype = (csmcc_v120_negtype_enum)v120_negtype;
   
   return KAL_TRUE;
   
} /* end of l4ccsm_cc_set_v120_param */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_v120_param
* DESCRIPTION                                                           
*   This function used to get v.120 parameters L4C upon +CV120?.
*
* CALLS  
*	l4ccsm_cc_get_v120_param(kal_uint8 *v120_rah,
*                                kal_uint8 *v120_mfm,
*                                kal_uint8 *v120_mode,
*                                kal_uint8 *v120_llineg,
*                                kal_uint8 *v120_assign,
*                                kal_uint8 *v120_negtype)
* PARAMETERS
*	*v120_rah	OUT	first variable, used as input
*	*v120_mfm	OUT	second variable, used as input
*	*v120_mode	OUT	third variable, used as input
*	*v120_llineg	OUT	fourth variable, used as input
*	*v120_assign	OUT	fifth variable, used as input
*	*v120_negtype	OUT	sixth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                             
kal_bool 
l4ccsm_cc_get_v120_param (kal_uint8 *v120_rah,
                          kal_uint8 *v120_mfm,
                          kal_uint8 *v120_mode,
                          kal_uint8 *v120_llineg,
                          kal_uint8 *v120_assign,
                          kal_uint8 *v120_negtype)
{
   CSMCC_PTR_G_TO_L
   *v120_rah = CSMCC_PTR->at_param.v120_param.v120_rah;
   *v120_mfm = CSMCC_PTR->at_param.v120_param.v120_mfm;
   *v120_mode = CSMCC_PTR->at_param.v120_param.v120_mode;
   *v120_llineg = CSMCC_PTR->at_param.v120_param.v120_llineg;
   *v120_assign = CSMCC_PTR->at_param.v120_param.v120_assign;
   *v120_negtype = CSMCC_PTR->at_param.v120_param.v120_negtype;
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_v120_param */

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
#endif //[MAUI_00736467] 
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_rlp_param
* DESCRIPTION                                                           
*   This function used to set RLP parameters L4C upon +CRLP.
*
* CALLS  
*	l4ccsm_cc_set_rlp_param(kal_uint8 rlp_iws,
*                           kal_uint8 rlp_mws,
*                           kal_uint16 rlp_T1,
*                           kal_uint8 rlp_N2,
*                           kal_uint8 rlp_ver,
*                           kal_uint8 rlp_T4)
* PARAMETERS
*	rlp_iws		IN	first variable, used as input
*	rlp_mws		IN	second variable, used as input
*	rlp_T1		IN	third variable, used as input
*	rlp_N2		IN	fourth variable, used as input
*	rlp_ver1	IN	fifth variable, used as input
*	rlp_T4		IN	sixth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                
kal_bool 
l4ccsm_cc_set_rlp_param (kal_uint8 rlp_iws,
                         kal_uint8 rlp_mws,
                         kal_uint8 rlp_T1,
                         kal_uint8 rlp_N2,
                         kal_uint8 rlp_ver,
                         kal_uint8 rlp_T4)
{
   CSMCC_PTR_G_TO_L
   /* IWF -> MS window size (0 - 61) */
   if(rlp_iws > CSMCC_MAX_RLP_IWS)
   {
      return KAL_FALSE;
   }
   
   /* MS -> IWF window size (0 - 61) */
   if(rlp_mws > CSMCC_MAX_RLP_MWS)
   {
      return KAL_FALSE;
   }
   
   /* MAUI_01782767 [3G-Gemini] AT+CRLP=? will return error but AT+CRLP? performed well */
   if(rlp_T1 <= CSMCC_MIN_9600_BPS_T1)
   {
      return KAL_FALSE;
   }
   
   /* N2 > 0, this is trivial */
   if(rlp_N2 == 0)
   {
      return KAL_FALSE;
   }   
   
   CSMCC_PTR->at_param.rlp_param.rlp_iws = rlp_iws;
   CSMCC_PTR->at_param.rlp_param.rlp_mws = rlp_mws;
   CSMCC_PTR->at_param.rlp_param.rlp_T1 = rlp_T1;
   CSMCC_PTR->at_param.rlp_param.rlp_N2 = rlp_N2;
   
   /* don't care ver and T4 (for data compression) because only 
      support version 0 right now, ver1 support datas compression, 
      ver2 supports HSCSD. */   
#if 0
/* under construction !*/
/* under construction !*/
#endif   
   
   return KAL_TRUE;
      
} /* end of l4ccsm_cc_set_rlp_param */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_rlp_param
* DESCRIPTION                                                           
*   This function used to get RLP parameters L4C upon +CRLP?.
*
* CALLS  
*	l4ccsm_cc_get_rlp_param(kal_uint8 *rlp_iws,
*                           kal_uint8 *rlp_mws,
*                           kal_uint16 *rlp_T1,
*                           kal_uint8 *rlp_N2,
*                           kal_uint8 *rlp_ver,
*                           kal_uint8 *rlp_T4)
* PARAMETERS
*	*rlp_iws	OUT	first variable, used as input
*	*rlp_mws	OUT	second variable, used as input
*	*rlp_T1		OUT	third variable, used as input
*	*rlp_N2		OUT	fourth variable, used as input
*	*rlp_ver1	OUT	fifth variable, used as input
*	*rlp_T4		OUT	sixth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/       
kal_bool 
l4ccsm_cc_get_rlp_param (kal_uint8 *rlp_iws,
                         kal_uint8 *rlp_mws,
                         kal_uint16 *rlp_T1,
                         kal_uint8 *rlp_N2,
                         kal_uint8 *rlp_ver,
                         kal_uint8 *rlp_T4)
{
   CSMCC_PTR_G_TO_L
   *rlp_iws = CSMCC_PTR->at_param.rlp_param.rlp_iws;
   *rlp_mws = CSMCC_PTR->at_param.rlp_param.rlp_mws;
   *rlp_T1  = CSMCC_PTR->at_param.rlp_param.rlp_T1;
   *rlp_N2  = CSMCC_PTR->at_param.rlp_param.rlp_N2;
   *rlp_ver = CSMCC_PTR->at_param.rlp_param.rlp_ver;
   *rlp_T4  = CSMCC_PTR->at_param.rlp_param.rlp_T4;
   
   return KAL_TRUE;
   
} /* end of l4ccsm_cc_get_rlp_param */

/* MAUI_01782767 [3G-Gemini] AT+CRLP=? will return error but AT+CRLP? performed well */
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
#ifdef __CSD_NT_2400__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif      
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

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_data_compression_param
* DESCRIPTION                                                           
*   This function used to set RLP data compression parameters L4C upon +DS.
*
* CALLS  
*	l4ccsm_cc_set_data_compression_param(kal_uint8 dir,
*                                            kal_uint8 negotiation,
*                                            kal_uint8 max_dict,
*                                            kal_uint8 max_string)
* PARAMETERS
*	dir		IN	first variable, used as input
*	negotiation	IN	second variable, used as input
*	max_dict	IN	third variable, used as input
*	max_string	IN	fourth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                
kal_bool 
l4ccsm_cc_set_data_compression_param (kal_uint8 dir,
                                      kal_uint8 negotiation,
                                      kal_uint16 max_dict,
                                      kal_uint8 max_string)
{
   CSMCC_PTR_G_TO_L
   switch(dir)
   {
      case CSMCC_NO_COMPRESSION:
         break;
      case CSMCC_TRANSMIT_ONLY:
      case CSMCC_RECEIVE_ONLY:
      case CSMCC_BOTH_DIRECTION:
         return KAL_FALSE;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(negotiation)
   {
      case CSMCC_NO_DISC_IF_NO_NEGOTIATION:
      case CSMCC_DISC_IF_NO_NEGOTIATION:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   if(max_dict < CSMCC_MIN_DC_DICT_NUM 
      || max_dict > CSMCC_MAX_DC_DICT_NUM)
   {
      return KAL_FALSE;
   }

   if(max_string < CSMCC_MIN_DC_STRING_LEN
      || max_string > CSMCC_MAX_DC_STRING_LEN)
   {
      return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.data_compression_param.dir = (csmcc_data_compression_dir_enum)dir;
   CSMCC_PTR->at_param.data_compression_param.negotiation = (csmcc_data_compression_nego_enum)negotiation;
   CSMCC_PTR->at_param.data_compression_param.max_dict = max_dict;
   CSMCC_PTR->at_param.data_compression_param.max_string = max_string;
   
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_data_compression_param */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_data_compression_param
* DESCRIPTION                                                           
*   This function used to get RLP data compression parameters L4C upon +DS?.
*
* CALLS  
*	l4ccsm_cc_get_data_compression_param(kal_uint8 *dir,
*                                            kal_uint8 *negotiation,
*                                            kal_uint8 *max_dict,
*                                            kal_uint8 *max_string)
* PARAMETERS
*	*dir		OUT	first variable, used as input
*	*negotiation	OUT	second variable, used as input
*	*max_dict	OUT	third variable, used as input
*	*max_string	OUT	fourth variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                        
kal_bool 
l4ccsm_cc_get_data_compression_mode(kal_uint8 *dir,
                                    kal_uint8 *negotiation,
                                    kal_uint16 *max_dict,
                                    kal_uint8 *max_string)
{
   CSMCC_PTR_G_TO_L
   *dir = CSMCC_PTR->at_param.data_compression_param.dir;
   *negotiation = CSMCC_PTR->at_param.data_compression_param.negotiation;
   *max_dict = CSMCC_PTR->at_param.data_compression_param.max_dict;
   *max_string = CSMCC_PTR->at_param.data_compression_param.max_string;
   
   return KAL_TRUE;
   
} /* end of l4ccsm_cc_get_data_compression_mode */
#if 0
/* under construction !*/
#ifdef __test_mode__
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
#endif /*__test_mode__*/
#endif
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_cug_param
* DESCRIPTION                                                           
*   This function used to set CUG parameters L4C upon +CCUG.
*
* CALLS  
*	l4ccsm_cc_set_cug_param(kal_uint8 cug_temporary_mode,
*                               kal_uint8 cug_index,
*                               kal_uint8 cug_suppress)
* PARAMETERS
*	cug_temporary_mode	IN	first variable, used as input
*	cug_index		IN	second variable, used as input
*	cug_suppress		IN	third variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                                      
kal_bool 
l4ccsm_cc_set_cug_param (kal_uint8 cug_temporary_mode,
                         kal_uint8 cug_index,
                         kal_uint8 cug_suppress)
{
   CSMCC_PTR_G_TO_L
   switch(cug_temporary_mode)
   {
      case CSMCC_DISABLE_CUG_TEMPORARY_MODE:
      case CSMCC_ENABLE_CUG_TEMPORARY_MODE:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(cug_index)
   {
      case CSMCC_CUG_INDEX_0:
      case CSMCC_CUG_INDEX_1:
      case CSMCC_CUG_INDEX_2:
      case CSMCC_CUG_INDEX_3:
      case CSMCC_CUG_INDEX_4:
      case CSMCC_CUG_INDEX_5:
      case CSMCC_CUG_INDEX_6:
      case CSMCC_CUG_INDEX_7:
      case CSMCC_CUG_INDEX_8:
      case CSMCC_CUG_INDEX_9:
      case CSMCC_CUG_NO_INDEX:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   switch(cug_suppress)
   {
      case CSMCC_CUG_NO_SUPPRESS_INFO:
      case CSMCC_CUG_SUPPRESS_OA:
      case CSMCC_CUG_SUPPRESS_PREF_CUG:
      case CSMCC_CUG_SUPPRESS_OA_AND_PREF_CUG:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.cug_param.cug_temporary_mode = (csmcc_cug_temporary_mode_enum)cug_temporary_mode;
   CSMCC_PTR->at_param.cug_param.cug_index = (csmcc_cug_index_enum)cug_index;
   CSMCC_PTR->at_param.cug_param.cug_suppress = (csmcc_cug_suppress_enum)cug_suppress;
   
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_cug_param */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_cug_param
* DESCRIPTION                                                           
*   This function used to get CUG parameters L4C upon +CCUG?.
*
* CALLS  
*	l4ccsm_cc_get_cug_param(kal_uint8 *cug_temporary_mode,
*                               kal_uint16 *cug_index,
*                               kal_uint8 *cug_suppress)
* PARAMETERS
*	*cug_temporary_mode	OUT	first variable, used as input
*	*cug_index		OUT	second variable, used as input
*	*cug_suppress		OUT	third variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/            
kal_bool 
l4ccsm_cc_get_cug_param (kal_uint8 *cug_temporary_mode,
                         kal_uint8 *cug_index,
                         kal_uint8 *cug_suppress)
{
   CSMCC_PTR_G_TO_L
   *cug_temporary_mode = CSMCC_PTR->at_param.cug_param.cug_temporary_mode;
   *cug_index = CSMCC_PTR->at_param.cug_param.cug_index;
   *cug_suppress = CSMCC_PTR->at_param.cug_param.cug_suppress;
   return KAL_TRUE;

} /* end of l4ccsm_cc_get_cug_param */

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
#endif //[MAUI_00736467]                  
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_fclass_mode
* DESCRIPTION                                                           
*   This function used to set FCLASS mode L4C upon +FCLASS.
*
* CALLS  
*	l4ccsm_cc_set_fclass_mode(kal_uint8 fcalss_mode)
*
* PARAMETERS
*	fclass_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/                
kal_bool 
l4ccsm_cc_set_fclass_mode(kal_uint8 fclass_mode)
{
   CSMCC_PTR_G_TO_L
   switch(fclass_mode)
   {
      case CSMCC_DATA:
      case CSMCC_FAX_CLASS_1_TIA:
      /* MAUI_01400106 [AT][CSM] remove fclass=1.0 */
      //case CSMCC_FAX_CLASS_1_ITUT:
      case CSMCC_FAX_MANU_SPECIFIC:
      case CSMCC_FAX_CLASS_2:
         break;
      default:
         /* invalid value range */
         return KAL_FALSE;
   }
   
   CSMCC_PTR->at_param.fclass_mode = (csmcc_fclass_mode_enum)fclass_mode;
   return KAL_TRUE;
} /* end of l4ccsm_cc_set_fclass_mode */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_fclass_mode
* DESCRIPTION                                                           
*   This function used to get FCLASS mode L4C upon +FCLASS.
*
* CALLS  
*	l4ccsm_cc_set_fclass_mode(kal_uint8 *fcalss_mode)
*
* PARAMETERS
*	*fclass_mode	OUT	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/              
kal_bool 
l4ccsm_cc_get_fclass_mode(kal_uint8 *fclass_mode)
{
   CSMCC_PTR_G_TO_L
   *fclass_mode = CSMCC_PTR->at_param.fclass_mode;
   return KAL_TRUE;
} /* end of l4ccsm_cc_get_fclass_mode */

#if 0
/* under construction !*/
#ifdef __test_mode__
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*__test_mode__*/
#endif
/*************************************************************************
* FUNCTION                                                            
*	ccsmcc_get_line_id
* DESCRIPTION                                                           
*   This function used to return current line id.
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
kal_uint8
csmcc_get_line_id(void)
{   
   CSMCC_PTR_G_TO_L
   #ifdef __CPHS__		
   return CSMCC_PTR->als.line_id;
   #else
   return 0;
   #endif
} /* end of l4ccsm_cc_get_line_id */

#ifdef __CTM_SUPPORT__                       
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_ctm_status
* DESCRIPTION                                                           
*   This function used to set call mode by L4C upon +CMOD.
*
* CALLS  
*	l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
* PARAMETERS
*	call_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_ctm_status(kal_uint8 ctm_status)
{

   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CTM_STATUS, ctm_status);
    
   CSMCC_PTR->ctm_status = ctm_status;
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_ctm_status */

#endif /*__CTM_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_call_capability
* DESCRIPTION                                                           
*   This function used to set call capability by L4C upon +eccp.
* PARAMETERS
*	capability	IN	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*************************************************************************/
kal_bool l4ccsm_cc_set_call_capability(kal_uint32 capability)
{
    csmcc_call_capability = capability;
    return KAL_TRUE;
}

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_iwf
* DESCRIPTION                                                           
*   This function used to set call mode by L4C upon +CMOD.
*
* CALLS  
*	l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
* PARAMETERS
*	call_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_iwf(kal_uint8 iwf)
{

   CSMCC_PTR_G_TO_L
   CSMCC_PTR->iwf = iwf;
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_iwf */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_iwf
* DESCRIPTION                                                           
*   This function used to set call mode by L4C upon +CMOD.
*
* CALLS  
*	l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
* PARAMETERS
*	call_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_get_iwf(kal_uint8 * iwf)
{

   CSMCC_PTR_G_TO_L
   *iwf = CSMCC_PTR->iwf;
   return KAL_TRUE;

} /* end of l4ccsm_cc_get_iwf */

/*************************************************************************
* FUNCTION                                                            
*	check_call_exist_in_either_SIM
* DESCRIPTION                                                           
*   This function used to check if any call ongoing
*
* CALLS  
*	l4c_cc_check_call_exist
* PARAMETERS
*	which_sim	IN	SIM interface
* RETURNS
*	call existed or not
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool check_call_exist_in_either_SIM(kal_uint8 which_sim)
{
    kal_uint8 call_index;
    kal_bool active_call_exist = KAL_FALSE;

    for (call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
    {
        if (GET_CALL_STATUS(call_index) == CSMCC_CALL_BLK)
        {
            active_call_exist = KAL_TRUE;
        }
    }

    return active_call_exist;
}

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_rat_mode
* DESCRIPTION                                                           
*   This function used to set rat mode by L4C.
*
* CALLS  
*	l4ccsm_cc_set_call_mode(kal_uint8 call_mode)
* PARAMETERS
*	call_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool 
l4ccsm_cc_set_rat_mode(kal_uint8 rat_mode)
{
   CSMCC_PTR_G_TO_L
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_RAT_MODE, CSMCC_PTR->rat_mode, rat_mode);
   CSMCC_PTR->rat_mode= rat_mode;
   return KAL_TRUE;

} /* end of l4ccsm_cc_set_rat_mode */



/* MAUI_01618869 CSM provide l4ccsm_cc_get_CSM_call_id function */
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_get_CSM_call_id
* DESCRIPTION                                                           
*   This function used to query call id, which is going to be used by CSM
*
* CALLS  
*	l4ccsm_cc_get_CSM_call_id(kal_uint8* call_id)
* PARAMETERS
*	call_id 	OUT	first variable, used as returns
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool l4ccsm_cc_get_CSM_call_id(kal_uint8* call_id_ptr)
{
   kal_uint8 call_index;
   csmcc_ret_t ret_val = CSMCC_NO_ERROR;

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE )
      {
         break;
      }
   }

   if(call_index == CSMCC_MAX_CALL_NUM+1)
   {
      /* no free call context is found */
      ret_val = CSMCC_ERROR;
   }
   else
   {   	
      *call_id_ptr = call_index;
   }

   if(ret_val == CSMCC_NO_ERROR)
   {
      return KAL_TRUE;
   }
   
   return KAL_FALSE;
   
} /* end of l4ccsm_cc_get_CSM_call_id */
