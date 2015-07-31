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
 * rac_hdlrs.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for message handlers of RAC.
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
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#define RAC2_HDLRS_C

#ifdef __MOD_RAC__
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "md_sap.h"
#include "drv_sap.h"
#include "mm_msgid.h"
#include "sim_ps_msgid.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "event_info_utility.h"
#include "l4_event_info_trc.h"

#include "ps_public_enum.h"
#include "mm_mmi_enums.h"
#include "l4crac_enums.h"
#include "l3_inc_enums.h"
#include "nvram_enums.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
/* John Tang 2004/09/06: For CMUX modification in L4C. */
#include "l4c_common_enum.h"

#include "mcd_l3_inc_struct.h"
#include "l3_inc_local.h"
#include "mmi2mm_struct.h"
#include "mm2mmi_struct.h"
#include "l4c2rac_struct.h"
#include "rac2l4c_struct.h"
#include "nvram_struct.h"
#ifdef __SAT__
#include "ps2sat_struct.h"
#endif /* #ifdef __SAT__ */

#include "rac_defs.h"
#include "rac_trc.h"
#include "rac_context.h"
#include "rac_hdlrs.h"
#include "rac_others.h"
#include "l4_msgid.h"
#include "nvram_editor_data_item.h"
#ifdef __GEMINI__
extern kal_bool is_test_sim(kal_uint8 simInterface);
#ifdef UNIT_TEST
extern kal_uint8 l4c_get_cfun_state(void);
#endif
#endif
extern l4c_data_speed_support_enum custom_max_data_speed_support(void);

#if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
#endif
/*****************************************************************************
* FUNCTION
*  rac_l4c_act_req_handler
* DESCRIPTION
*   rac_l4c_act_req_handler handles L4C_RAC_ACT_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_act_req_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_act_req_struct *act_req =
                  (l4crac_act_req_struct *) local_para_ptr;
      
    if (rac_ptr_g->current_action == RAC_NULL)
    {
        rac_set_action(RAC_ACTIVATION);

        rac_ptr_g->src_id = act_req->src_id;
      
        rac_ptr_g->local_para_ptr = 
                 construct_local_para(sizeof( gmmreg_init_req_struct),
                                      TD_RESET);
        /* Read SVN */
        rac_read_from_nvrm_svn();
    }
    else
    {
        DEBUG_ASSERT(0);
    }
} /* end of rac_l4c_act_req_handler */

/*****************************************************************************
* FUNCTION
*  rac_l4c_rfoff_req_handler
* DESCRIPTION
*   rac_l4c_act_req_handler handles L4C_RAC_RFOFF_REQ ilm.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
/* Ripple */
void  rac_l4c_rfoff_req_handler(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    kal_brief_trace(TRACE_INFO,RAC_CURRENT_ACTION,rac_ptr_g->current_action);

    DEBUG_ASSERT (rac_ptr_g->current_action == RAC_IDLE);
   
    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_RFOFF_REQ,
                                          NULL); 

    return;
}

/*****************************************************************************
* FUNCTION
*  rac_mm_rfoff_cnf_handler
* DESCRIPTION
*   rac_mm_rfoff_cnf_handler handles GMMREG_RFOFF_REQ ilm.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_rfoff_cnf_handler(void)
{
    #ifdef __UMTS_TDD128_MODE__
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    #endif
    DEBUG_ASSERT (rac_ptr_global->current_action == RAC_IDLE);

    #ifdef __UMTS_TDD128_MODE__
    if((rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT)
    {
        ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_LEAVE_HSUPA_CELL, MOD_RAC);
    }
    #endif

    rac_reset_cell_info_rat(); //mtk02475: reset cell info before next registration
    rac_set_action(RAC_IDLE);

    rac_send_ilm(MOD_L4C, RAC_L4C_SAP,MSG_ID_L4CRAC_RFOFF_CNF, NULL); 
}
/* ~Ripple */

/*****************************************************************************
* FUNCTION
*  rac_l4c_reg_req_msg_handler
* DESCRIPTION
*   rac_l4c_reg_req_msg_handler handles L4C_RAC_REG_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
void rac_l4c_reg_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{    
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_reg_req_struct *reg_req = 
                        (l4crac_reg_req_struct *) local_para_ptr;
    domain_id_enum requested_service ;
    kal_bool req_needed = KAL_FALSE;
    kal_bool response = KAL_FALSE;

    if(is_rac_activating()) 
      return;   

    /* Erica:
       High speed SIM, MM receives SIM_READY before 1st ATTACH_REQ(trigger by RAC_ACT_CNF).
       Therefore even though Phone lock is still on, 
       but since MM "sim_valid_for_cs" flag is TRUE,
       MM will search normal service instead of limited service.
       Therefore L4C needs to decide the search type and passed to RAC and MM */
    rac_ptr_g->search_type = reg_req->search_type;

#ifdef __GEMINI__
   /* RAC reads auto_attach setting before SIM is ready, 
       L4C will send REG_REQ with MMI_SEARCH_NORMAL after SIM is ready, 
       so check if auto_attach is allowed here */
   if (rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
   {
      if (rac_is_gprs_always_attach_allowed() == KAL_FALSE)
      {
      /*  not allowed for gprs auto attach */
      rac_ptr_g->auto_attach = KAL_FALSE;
      }
   }
#endif   

    switch(rac_ptr_g->mobile_class)
    {
        case MS_CLASS_B:
            if(rac_ptr_g->auto_attach)
            {
                requested_service = CS_PS_DOMAIN;
            }
            else
            {
                requested_service = CS_DOMAIN;
            }
            break;
            
        case MS_CLASS_CG:
            requested_service = PS_DOMAIN;
            break;

        case MS_CLASS_CC:
        default:   
            requested_service = CS_DOMAIN;
            break;
    }

  /* MAUI_02380519
   * mtk02475: extend this rule for both GEMINI and non-GEMINI project
   *           MM will send DETACH_IND with cause SIM_INVALID_FOR_PS 
   *           and RAC will enter GMM_DEREG_NO_IMSI until GPRS attach successfully
   */
  /* because gemini doesn't allow gprs auto attach when not test sim
    to avoid scenario below: 
     ------> ATTACH_REQ (any: CS+PS)
     ------> SIM_STATUS_UPDATE_REQ (not test SIM)
     ------> ATTACH_REQ (normal : CS)
     MM will confuse, and RAC didn't detach PS service */     
   if (reg_req->search_type == MMI_SEARCH_ANY
      && requested_service == CS_PS_DOMAIN)
   {
      requested_service = CS_DOMAIN;      
   }
  


    if(requested_service == CS_DOMAIN || requested_service == CS_PS_DOMAIN)
    {
        rac_l4c_reg_req_cs(&req_needed, &response);
    }
            
    if(requested_service == PS_DOMAIN || requested_service == CS_PS_DOMAIN)
    {
        rac_l4c_reg_req_ps(&req_needed, &response);
    }

     rac_ptr_g->src_id = reg_req->src_id;
     rac_set_action(RAC_REGISTRATION);
     rac_send_attach_req(requested_service);
     rac_send_reg_ind(requested_service, RAC_NORMAL_SEND, CAUSE_NONE); /* mtk02475: for AT+CREG, notify MMI/AP enter searching state */
/*
 *  For SIM refresh case, ex : SIM Refresh & ATT=1 -> SIM ERROR -> MM DETACH REQ -> SIM READY IND
 *   and then L4CRAC_REG_REQ before NW DETACH ACCEPT (GMMREG_DETACH_IND has not sent to RAC).
 *  => that will cause RAC ignore the attach request and send L4CRAC_REG_CNF immediately.
*/
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
#endif   
    if (req_needed != KAL_TRUE)
    {
        RAC_ERROR_LOG(UNEXPECTED_MESSAGE, rac_ptr_g->current_action);
    }

#ifdef __GEMINI__
#ifdef UNIT_TEST
   if ((rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
      && (l4c_get_cfun_state() != 0))
   {
      //for MoDIS MMI power on
      rac_mm_search_normal_finish_ind_handler(NULL);
   }
#endif
#endif
   
   
} /* end of rac_l4c_reg_req_msg_handler */

#else /* #if defined(__CS_SERVICE__) && defined(__PS_SERVICE__) */

#ifdef __CS_SERVICE__
/* gsm only */

void rac_l4c_reg_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_reg_req_struct *reg_req = 
                        (l4crac_reg_req_struct *) local_para_ptr;
    kal_bool req_needed = KAL_FALSE;
    kal_bool response = KAL_FALSE;

    if(is_rac_activating()) 
      return;   

    /* Erica:
       High speed SIM, MM receives SIM_READY before 1st ATTACH_REQ(trigger by RAC_ACT_CNF).
       Therefore even though Phone lock is still on, 
       but since MM "sim_valid_for_cs" flag is TRUE,
       MM will search normal service instead of limited service.
       Therefore L4C needs to decide the search type and passed to RAC and MM */
    rac_ptr_g->search_type = reg_req->search_type;

    //switch( rac_ptr_g->rac_mm_state)
    //{
        rac_l4c_reg_req_cs(&req_needed, &response);
    //}

    rac_ptr_g->src_id = reg_req->src_id;
    rac_set_action(RAC_REGISTRATION);
    rac_send_attach_req(CS_DOMAIN);
    rac_send_reg_ind(CS_DOMAIN, RAC_NORMAL_SEND, CAUSE_NONE); /* mtk02475: for AT+CREG, notify MMI/AP enter searching state */
/*
 *  For SIM refresh case, ex : SIM Refresh & ATT=1 -> SIM ERROR -> MM DETACH REQ -> SIM READY IND
 *   and then L4CRAC_REG_REQ before NW DETACH ACCEPT (GMMREG_DETACH_IND has not sent to RAC).
 *  => that will cause RAC ignore the attach request and send L4CRAC_REG_CNF immediately.
*/
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
#endif   
   if (req_needed != KAL_TRUE)
   {
        RAC_ERROR_LOG(UNEXPECTED_MESSAGE, rac_ptr_g->current_action);
   }

#ifdef __GEMINI__
#ifdef UNIT_TEST
   if ((rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
      && (l4c_get_cfun_state() != 0))
   {
      //for MoDIS MMI power on
      rac_mm_search_normal_finish_ind_handler(NULL);
   }
#endif
#endif
   
} /* end of rac_l4c_reg_req_msg_handler */


#else /*#ifdef __CS_SERVICE__ */

/* gprs only */
void rac_l4c_reg_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_reg_req_struct *reg_req = 
                        (l4crac_reg_req_struct *) local_para_ptr;

    kal_bool req_needed = KAL_FALSE;
    kal_bool response = KAL_FALSE;

    if(is_rac_activating()) 
      return;   

    /* Erica:
       High speed SIM, MM receives SIM_READY before 1st ATTACH_REQ(trigger by RAC_ACT_CNF).
       Therefore even though Phone lock is still on, 
       but since MM "sim_valid_for_cs" flag is TRUE,
       MM will search normal service instead of limited service.
       Therefore L4C needs to decide the search type and passed to RAC and MM */
    rac_ptr_g->search_type = reg_req->search_type;

    rac_l4c_reg_req_ps(&req_needed, &response);

    rac_ptr_g->src_id = reg_req->src_id;
    rac_set_action(RAC_REGISTRATION);
    rac_send_attach_req(PS_DOMAIN);
    rac_send_reg_ind(PS_DOMAIN, RAC_NORMAL_SEND, CAUSE_NONE); /* mtk02475: for AT+CREG, notify MMI/AP enter searching state */
/*
 *  For SIM refresh case, ex : SIM Refresh & ATT=1 -> SIM ERROR -> MM DETACH REQ -> SIM READY IND
 *   and then L4CRAC_REG_REQ before NW DETACH ACCEPT (GMMREG_DETACH_IND has not sent to RAC).
 *  => that will cause RAC ignore the attach request and send L4CRAC_REG_CNF immediately.
*/
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
#endif   
    if (req_needed != KAL_TRUE)
    {
        RAC_ERROR_LOG(UNEXPECTED_MESSAGE, rac_ptr_g->current_action);
    }

#ifdef __GEMINI__
#ifdef UNIT_TEST
   if ((rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
      && (l4c_get_cfun_state() != 0))
   {
      //for MoDIS MMI power on
      rac_mm_search_normal_finish_ind_handler(NULL);
   }
#endif
#endif
   
} /* end of rac_l4c_reg_req_msg_handler */

#endif /* #ifdef __CS_SERVICE__ */

#endif /* #if defined(__CS_SERVICE__) && defined(__PS_SERVICE__) */
/*****************************************************************************
* FUNCTION
*  rac_l4c_dereg_req_handler
* DESCRIPTION
*   rac_l4c_dereg_req_handler handles MSG_ID_L4CRAC_DEREG_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_dereg_req_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_dereg_req_struct *dereg_req  =
                  (l4crac_dereg_req_struct *) local_para_ptr;
   
    /* Johnny: poweroff detach from L4C, RAC could replace the previous action directly */
    rac_ptr_g->src_id = dereg_req->src_id;   
    
    //MAUI_01742461 mtk02475:
    //power-off detach may come before initialization
    //direct send DEREG_CNF without interference current RAC action
    if (rac_ptr_g->current_action <= RAC_ACTIVATION) {
        rac_send_dereg_cnf();
        return;
    }
     
    rac_set_action(RAC_DEREGISTRATION);
      
#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
    rac_send_detach_req(dereg_req->service,dereg_req->is_poweroff);
#else /*#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)*/
      
#ifdef __CS_SERVICE__
    /* GSM ONLY */
    rac_send_detach_req(CS_DOMAIN,dereg_req->is_poweroff);
      
#else /* #ifdef __CS_SERVICE__ */

    /* GPRS only(Class C) */
    rac_send_detach_req(PS_DOMAIN,dereg_req->is_poweroff);
      
#endif /* #ifdef __CS_SERVICE__ */
      
#endif /*#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)*/
} /* end of rac_l4c_dereg_req_handler */

/*****************************************************************************
* FUNCTION
*  rac_l4c_plmn_list_req_msg_handler
* DESCRIPTION
*   rac_l4c_plmn_list_req_msg_handler handles MSG_ID_L4CRAC_PLMN_LIST_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_plmn_list_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_plmn_list_req_struct *list_req =
                 (l4crac_plmn_list_req_struct *) local_para_ptr;
                 
    if(is_rac_activating()) 
      return;
                    
    rac_ptr_g->src_id = list_req->src_id;
    rac_set_action(RAC_PLMN_LIST);

    rac_send_ilm(MOD_MM,GMMREG_SAP, MSG_ID_GMMREG_PLMN_LIST_REQ,NULL);

#ifdef __RAC_GUARD_PLMN_LIST__
    rac_start_timer_hdlr(RAC_PLMN_LIST_GUARD_TIMER_ID);
#endif
} /* end of rac_l4c_plmn_list_req_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_l4c_plmn_search_req_msg_handler
* DESCRIPTION
*   rac_l4c_plmn_search_req_msg_handler handles MSG_ID_L4CRAC_PLMN_SEL_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_plmn_search_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_plmn_search_req_struct *sel_req =   
               (l4crac_plmn_search_req_struct *) local_para_ptr;
    gmmreg_plmn_search_req_struct *reg_req;

    if(is_rac_activating()) 
      return;

    // mtk02475: need update src_id for later response to L4C, also update context represents RAC is processing PLMN search request
    rac_ptr_g->src_id = sel_req->src_id;
    rac_set_action(RAC_SELECT_PLMN);
   

   /* mtk00714: RAC2 revise */
    /* Johnny: for plmn search retry if needed */
    //kal_mem_cpy(&(rac_ptr_g->plmn_search_req), sel_req, sizeof(l4crac_plmn_search_req_struct));

    /* check if register PLMN is the same as selected one */
#ifdef __CS_SERVICE__
    if (rac_ptr_g->rac_mm_state == RAC_MM_NORMAL
   
#else //else __PS_SERVICE__ must be defined
    if (is_rac_gmm_state_reg()   
   
#endif
       && sel_req->plmn_reselection_mode == MANUAL_RESELECTION
       && rac_is_plmn_id_equal(&rac_ptr_g->current_cell_rat.cell_info.plmn_id, &sel_req->plmn_id.plmn_id)
#ifdef __CSG_SUPPORT__
//mtk02475: if UE already registered on the specified CSG, directly send CNF to L4C
       && (sel_req->is_manual_csg_sel == KAL_FALSE
           || (rac_ptr_g->current_cell_rat.cell_info.is_csg_cell == KAL_TRUE
               && sel_req->csg_id == rac_ptr_g->current_cell_rat.cell_info.csg_info.csg_id
               && rac_ptr_g->current_cell_rat.cell_info.csg_info.csg_type == ALLOWED_CSG))
#endif /* __CSG_SUPPORT__ */
       )
    {

        if ((sel_req->plmn_id.rat != RAT_NONE && rac_ptr_g->current_cell_rat.rat == sel_req->plmn_id.rat) 
             || (sel_req->plmn_id.rat == RAT_NONE 
                 && ((rac_ptr_g->rat_mode & sel_req->preference) == rac_ptr_g->current_cell_rat.rat
                      || (rac_ptr_g->rat_mode != RAT_GSM_UMTS))))
        {
            rac_send_plmn_search_cnf(rac_get_gsm_status(), CAUSE_NONE);
            rac_set_action(RAC_IDLE);
            return;
        }
    }      

        /* mtk00714: RAC2 revise */
        if (rac_ptr_g->plmn_search_req_ptr == NULL)
        {
            hold_local_para(local_para_ptr);
            rac_ptr_g->plmn_search_req_ptr = local_para_ptr;
        }

        if (sel_req->plmn_reselection_mode == MANUAL_RESELECTION)
        {
            kal_mem_cpy(&rac_ptr_g->selected_plmn_id, &sel_req->plmn_id, sizeof(plmn_id_rat_struct));
        }

        reg_req = (gmmreg_plmn_search_req_struct*) construct_local_para(
                     sizeof(gmmreg_plmn_search_req_struct),TD_CTRL);

        reg_req->plmn_search_mode =  sel_req->plmn_reselection_mode ;

        kal_mem_cpy(&reg_req->selected_plmn, &sel_req->plmn_id, sizeof(plmn_id_rat_struct));
         
        reg_req->prefer_rat = sel_req->preference;
         
        if (sel_req->src_id == L4C_SRC)
        {
            reg_req->from_l4c = KAL_TRUE;
        }
        else
        {
            reg_req->from_l4c = KAL_FALSE;
        }
         
        /* 20081110 mtk00714, for fast camp on test machine */
        reg_req->factory_mode_arfcn = 0xFFFF;
         
        if (sel_req->plmn_reselection_mode == MANUAL_RESELECTION)
        {
            reg_req->factory_mode_arfcn = sel_req->factory_mode_arfcn;
        }
        /* ~ 20081110 mtk00714, for fast camp on test machine */        

#ifdef __CSG_SUPPORT__
        reg_req->is_manual_csg_sel = sel_req->is_manual_csg_sel;
        reg_req->csg_id = sel_req->csg_id;
#endif /* __CSG_SUPPORT__ */
         
        rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_PLMN_SEARCH_REQ,
                     (local_para_struct*)reg_req);

      /* John Tang 2004/03/16: After discussing with Vito, we think that we don't need 
      to set the gsm_status to be "L4C_RAC_NO_CELL". The reason is that it will cause 
      RAC can't report reg_state_ind to L4C since it will make MMI display "NO Service".
      (Since GSM is in NO_CELL state). Consider a condition, if PLMN select from a GPRS 
      cell to GSM cell, then GMM will report GMMREG_DETACH_IND(PS Service) to RAC,
      if we set rac_ptr_g->gsm_status to "L4C_RAC_NO_CELL", then we can't inform L4C that
      GPRS is deregistered since it will make MMI display "No service". */
      #if 0
/* under construction !*/
/* under construction !*/
        #endif

#ifdef __CS_SERVICE__
        /* Evan : if ms class is CG, we only modify PS state to searching. */
        if (rac_ptr_g->rac_mm_state != RAC_MM_NULL && rac_ptr_g->rac_mm_state != RAC_MM_SEARCHING)
        {
            /* Johnny: should we check rac_mm_state == RAC_MM_SEARCHING
            before we set rac_mm_state to previous_rac_mm_state everytime?
            if rac_mm_state == RAC_MM_SEARCHING, should we keep previous_rac_mm_state? */
            rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
            rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;
        }
#endif

#ifdef __PS_SERVICE__
   /* mtk01778, 2007/07/31: take back the restriction to avoid unexpected changing rac_gmm_state. 
       e.g. we switch on with When needed, rac_gmm_state will be changed from RAC_GMM_NULL to RAC_GMM_SEARCHING,
       and never go back. { */
          if (rac_ptr_g->rac_gmm_state != RAC_GMM_NULL)
          {         
   /* } mtk01778, 2007/07/31 */ 
            /* Johnny: 
               #if defined(__CS_SERVICE__) && defined(__PS_SERVICE__), RAC refer to rac_mm_state.
               If rac_mm_state need to perform PLMN search but rac_gmm_state need not,
               rac_gmm_state will stay in the original one instead of RAC_GMM_SEARCHING */
            if (is_rac_gmm_state_reg() 
               && sel_req->plmn_reselection_mode == MANUAL_RESELECTION
               && (rac_is_plmn_id_rat_equal_to_current(&sel_req->plmn_id) == KAL_TRUE)
            )
            {
               ;
            }
            else
            {
                rac_ptr_g->previous_rac_gmm_state = rac_ptr_g->rac_gmm_state;
                rac_ptr_g->rac_gmm_state= RAC_GMM_SEARCHING;            
            }
   /* mtk01778, 2007/07/31: take back the restriction to avoid unexpected changing rac_gmm_state. 
       e.g. we switch on with When needed, rac_gmm_state will be changed from RAC_GMM_NULL to RAC_GMM_SEARCHING,
       and never go back. { */
          }   
   /* } mtk01778, 2007/07/31 */     
#endif

        rac_send_reg_ind(CS_PS_DOMAIN, RAC_NORMAL_SEND, CAUSE_NONE); /* Ripple: for AT+CREG. */

} /* end of rac_l4c_plmn_sel_req_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_l4c_class_change_req_msg_handler
* DESCRIPTION
*   rac_l4c_class_change_req_msg_handler handles MSG_ID_L4CRAC_PLMN_SEL_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_class_change_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    ms_mobile_class_enum prev_ms_class;
    l4crac_class_change_req_struct * class_change
         = (l4crac_class_change_req_struct *) local_para_ptr;
   
    if(is_rac_activating()) 
      return;
   
    rac_ptr_g->src_id = class_change->src_id;
    rac_set_action(RAC_CLASS_CHANGE);

    prev_ms_class = rac_ptr_g->mobile_class;
    
    if( rac_ptr_g->mobile_class != class_change->ms_class )
    {
        /*  mtk03643  save NVRAM write counts*/
        rac_ptr_g->mobile_class = class_change->ms_class;

        rac_save_preference();
    }
   
    kal_brief_trace(TRACE_INFO, RAC_CHANGE_MS_CLASS, prev_ms_class, rac_ptr_g->mobile_class);
    
    if(rac_ptr_g->rac_gmm_state == RAC_GMM_NULL && rac_ptr_g->rac_mm_state == RAC_MM_NULL)
    {
        /*for at^sysconfig command: 1. DEREG 2.CLASS_CHANGE 3.REG*/
        rac_send_class_change_cnf();
    }
    else
    {
        /*for at+cgclass command*/
        rac_handle_class_change(prev_ms_class);
    }
}

/*****************************************************************************
* FUNCTION
*  rac_l4c_plmn_list_stop_req_msg_handler
* DESCRIPTION
*   This function handles MSG_ID_L4CRAC_ABORT_LIST_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_plmn_list_stop_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_plmn_list_stop_req_struct * l4crac_msg_ptr
        = (l4crac_plmn_list_stop_req_struct *) local_para_ptr;

    /* send abort to MM */
    if (rac_ptr_g->current_action == RAC_PLMN_LIST)
    {
        rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
/* mtk01778, 2007/07/31: add rac timer enum. { */
        if (rac_ptr_g->event_id[RAC_RETRY_PLMN_LIST_TIMER_ID] != 0)
/* } mtk01778, 2007/07/31 */    
        {
            rac_send_plmn_list_stop_cnf();
			rac_set_action(RAC_IDLE);
        }
        else
        {   
            rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_PLMN_LIST_STOP_REQ,
                     NULL);
            rac_set_action(RAC_PLMN_LIST_STOP);
        }
    }
    else if (rac_ptr_g->current_action == RAC_PLMN_LIST_STOP_TIMEOUT)
    {
        rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
        rac_set_action(RAC_PLMN_LIST_STOP);
    }
    else
    {
      RAC_ERROR_LOG(PLMN_LIST_FLAG_ERROR, KAL_FALSE);
    }
}

/*****************************************************************************
* FUNCTION
*  rac_l4c_set_preferred_band_req_handler
* DESCRIPTION
*   This function handles MSG_ID_L4CRAC_SET_PREFERRED_BAND_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_set_preferred_band_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_set_preferred_band_req_struct *local_ptr
             = (l4crac_set_preferred_band_req_struct *) local_para_ptr;
    rat_enum change_rat = RAT_NONE;

    if(is_rac_activating()) 
      return;

    /* John Tang 2004/06/23: Only one Band Change is allowed. Only one action from AT command 
    "AT+CPBSE=3" and MMI will be processed. */

    /* John Tang 2004/03/17: Current setting is already the one that users want */   

    if (local_ptr->is_gsm_band_present == KAL_TRUE
      && local_ptr->gsm_band != rac_ptr_g->requested_gsm_band)
    {
      rac_ptr_g->requested_gsm_band = local_ptr->gsm_band;
      change_rat |= RAT_GSM;
    }

#ifdef __UMTS_RAT__     /* 3G band change */
    if (local_ptr->is_umts_band_present == KAL_TRUE
      && (kal_mem_cmp(local_ptr->umts_fdd_band, rac_ptr_g->requested_umts_fdd_band, sizeof(kal_uint8)*SIZE_OF_UMTS_BAND) != 0))
    {
        kal_mem_cpy(rac_ptr_g->requested_umts_fdd_band, local_ptr->umts_fdd_band, sizeof(kal_uint8)*SIZE_OF_UMTS_BAND);
        change_rat |= RAT_UMTS;
    }
#endif

    if (change_rat == RAT_NONE)
    {
         /* band setting is not changed */
        rac_send_set_band_cnf(L4C_RAC_OK, local_ptr->src_id);
    }
    else
    {
         /* band setting is changed! */
#ifdef __DYNAMIC_BAND_SEL__
        rac_send_set_band_req(change_rat);
#endif
        rac_save_preference();

        rac_send_set_band_cnf(L4C_RAC_OK, local_ptr->src_id);
        /* save band selection to NVRAM */
         

        /* John Tang 2004/06/14: Since both band change/PLMN Selection operation shall based on the 
           registeration result of GSM CS service. If reject cause is NO_GPRS_SERVICE, we shall NOT regard 
           that Band change/PLMN Selection is successful or done. We also can NOT report 
           L4CRAC_REG_STATE_IND to L4 Coz if user abort the PLMN List, MMI will regard that selected PLMN is 
           already registered and fail to back to the original PLMN. "G" icon can disappear after RR connection
           release Coz at that time, RR will report a GMMAS_SYS_INFO_IND again. */
    }
}

void rac_l4c_set_rat_mode_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_set_rat_mode_req_struct *l4crac_msg_ptr = (l4crac_set_rat_mode_req_struct *) local_para_ptr;

    gmmreg_set_rat_mode_req_struct *gmmreg_msg_ptr;
    
    if(is_rac_activating()) 
      return; 
    
    gmmreg_msg_ptr = (gmmreg_set_rat_mode_req_struct*) construct_local_para(sizeof(gmmreg_set_rat_mode_req_struct),TD_CTRL);
    gmmreg_msg_ptr->rat_mode = l4crac_msg_ptr->rat_mode ;

    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_RAT_MODE_REQ,
                           (local_para_struct *)gmmreg_msg_ptr);
    
    rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
    rac_set_action(RAC_SET_RAT_MODE);

    rac_ptr_g->request_rat_mode = l4crac_msg_ptr->rat_mode;

    if (l4crac_msg_ptr->save_to_nvram == KAL_TRUE && rac_ptr_g->nvram_rat_mode != l4crac_msg_ptr->rat_mode )
    {
        rac_ptr_g->nvram_rat_mode = l4crac_msg_ptr->rat_mode;
        rac_save_preference();    
    }
}

void rac_l4c_set_prefer_rat_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_set_prefer_rat_req_struct *l4crac_msg_ptr = (l4crac_set_prefer_rat_req_struct *) local_para_ptr;
    gmmreg_set_prefer_rat_req_struct *gmmreg_msg_ptr;
#if (defined(__UMTS_RAT__) && defined(__GSM_RAT__))


    if(is_rac_activating()) 
          return; 

    if(rac_ptr_g->prefer_rat != l4crac_msg_ptr->prefer_rat)
    {
        rac_ptr_g->prefer_rat = l4crac_msg_ptr->prefer_rat;
        rac_save_preference();
        gmmreg_msg_ptr = (gmmreg_set_prefer_rat_req_struct*) construct_local_para(sizeof(gmmreg_set_prefer_rat_req_struct),TD_CTRL);
        gmmreg_msg_ptr->prefer_rat = l4crac_msg_ptr->prefer_rat;

        rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_PREFER_RAT_REQ,
					   (local_para_struct *)gmmreg_msg_ptr);
    }
    /* mtk03643: no need to wait for prefer rat cnf from mm, just send confirm to l4c */
    rac_send_set_prefer_rat_cnf(KAL_TRUE, l4crac_msg_ptr->src_id);    
#endif
}

#ifdef __2STAGE_NW_SELECTION__
void rac_l4c_susp_resu_update_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_susp_resu_update_req_struct *send_ind =
                  (gmmreg_susp_resu_update_req_struct *)construct_local_para(sizeof(l4crac_susp_resu_update_req_struct), TD_RESET);

    l4crac_susp_resu_update_req_struct *recv_ind
         = (l4crac_susp_resu_update_req_struct *) local_para_ptr;
   
    rac_ptr_g->sus_src_id = recv_ind->src_id;
    send_ind->action = recv_ind->action;
    send_ind->mode = recv_ind->mode;
    send_ind->susp_id = recv_ind->susp_id;
        
    rac_send_ilm(MOD_MM,GMMREG_SAP,
                MSG_ID_GMMREG_SUSP_RESU_UPDATE_REQ,
                (local_para_struct *)send_ind);
}
#endif

/*****************************/
/*      NVRAM Message        */
/*****************************/

/*****************************************************************************
* FUNCTION
*  rac_nvram_read_cnf_msg_handler
* DESCRIPTION
*   rac_naram_read_cnf_msg_handler handles MSG_ID_NVRAM_READ_CNF ilm.
* The reading sequence is as following:
* 1. imei amd imeisv
* 2. RAC perference including
*  plmn_sel_mode,prefered_band and prefered_service
* 3. ms_ra_cap
* 4. ms_nw_cap
* 5. drx_param
* 6. classmark1
* 7. classmark2
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_nvram_read_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    nvram_read_cnf_struct *read_cnf = 
                        (nvram_read_cnf_struct *)local_para_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_length;
    l4crac_act_cnf_struct* local_ptr;
#ifdef __UE_EFOPLMN__      
    kal_uint16 no_oplmn_entry;
    kal_uint8 *oplmn_data;  
#endif
    nvram_ef_mm_eqplmn_locigprs_struct *nvram_pdu_ptr = NULL;
   kal_uint8 imeisv[9]; /* IMEI 8 byte, SVN 1 byte*/
   
#ifdef __PS_SERVICE__
    kal_uint8 drx_para_array[2] = {RAC_DRX_PARAM_DEFAULT_1,
                                                     RAC_DRX_PARAM_DEFAULT_2};
#endif
#ifdef __SAT__
    sat_nw_search_mode_ind_struct *sat_nw_search_mode_ind;
#endif
   
    ASSERT(read_cnf->result == NVRAM_IO_ERRNO_OK
         || read_cnf->result == NVRAM_IO_ERRNO_INIT);
   
    pdu_ptr = (kal_uint8*)get_peer_buff_pdu(peer_buff_ptr, &pdu_length);
   
    switch(read_cnf->file_idx)
    {
       case NVRAM_EF_SYS_CACHE_OCTET_LID:

           /* Read IMEI */
           nvram_get_imei_value(8, imeisv, rac_get_nvram_record_id());
#if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
#else
           imeisv[8] = pdu_ptr[0];
#endif
           rac_copy_imei_imeisv(imeisv);

            /* John Tang 2004/10/18: To save NVRAM usage, use hardcode for DRX parameters. 
            This is confirmed OK by RR modules designers. */
#if 0
/* under construction !*/
#else
       
#ifdef __PS_SERVICE__
            rac_copy_drx_param(drx_para_array);
#endif

#ifdef __TC02_SECURITY_REQUIREMENT__
            rac_read_from_nvrm(NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID);
#else
            /* Johnny 2005/11/07: add locigprs in nvram */
            rac_read_from_nvrm(NVRAM_EF_MM_EQPLMN_LOCIGPRS_LID);
#endif /* __TC02_SECURITY_REQUIREMENT__ */
#endif /* 0 */
		 
            break;

#ifdef __TC02_SECURITY_REQUIREMENT__
        case NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID:
        	  kal_mem_cpy(rac_ptr_g->local_para_ptr->nvram_imsi_loci_gloci, pdu_ptr, MAX_LEN_OF_IMSI_LOCI_GLOCI);
        	  rac_read_from_nvrm(NVRAM_EF_MM_EQPLMN_LOCIGPRS_LID);
        	  break;
#endif /* __TC02_SECURITY_REQUIREMENT__ */

#if 0    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0
/* under construction !*/
#else
/* under construction !*/
#ifdef __PS_SERVICE__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */
/* under construction !*/
/* under construction !*/
#endif
      
#if 0 
#ifdef __PS_SERVICE__   
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#endif /* #ifdef __PS_SERVICE__ */   
#endif

        /* Johnny 2005/11/07: add locigprs in nvram */
        case NVRAM_EF_MM_EQPLMN_LOCIGPRS_LID:			
			nvram_pdu_ptr = (nvram_ef_mm_eqplmn_locigprs_struct *)pdu_ptr;
            rac_ptr_g->local_para_ptr->rplmn_rat = nvram_pdu_ptr->rplmn_rat;
            rac_ptr_g->local_para_ptr->num_of_eq_plmn = nvram_pdu_ptr->num_of_eq_plmn;
            kal_mem_cpy(rac_ptr_g->local_para_ptr->eq_plmn, nvram_pdu_ptr->eq_plmn, sizeof(plmn_id_struct)*MAX_NUM_EQ_PLMN);
#ifdef __PS_SERVICE__      
            kal_mem_cpy(rac_ptr_g->local_para_ptr->nvram_locigprs, nvram_pdu_ptr->nvram_locigprs, MM_LOCI_GPRS_LEN);
#endif
#ifdef __UE_EFOPLMN__  
            rac_ptr_g->ue_oplmn_ver[0] = nvram_pdu_ptr->ue_oplmn_ver[0];   
            rac_ptr_g->ue_oplmn_ver[1] = nvram_pdu_ptr->ue_oplmn_ver[1];

            no_oplmn_entry = nvram_pdu_ptr->no_oplmn_entry;

            if( no_oplmn_entry != 0 && no_oplmn_entry <= MAX_UE_OPLMN_ENTRY)
            {
                oplmn_data = get_ctrl_buffer(no_oplmn_entry * 5);
                kal_mem_cpy(oplmn_data,nvram_pdu_ptr->oplmn_data,no_oplmn_entry*5);  
                rac_send_ue_oplmn_update(KAL_FALSE,no_oplmn_entry,oplmn_data);
            }
#endif             
             rac_read_from_nvrm(NVRAM_EF_RAC_PREFERENCE_LID);
            break;
      
        case NVRAM_EF_RAC_PREFERENCE_LID:         
            rac_copy_rac_perference(pdu_ptr);
         
            rac_set_action(RAC_IDLE);
         
            /* read finish, forward to MM and activate MM */

            rac_send_ilm(MOD_MM,GMMREG_SAP,
                     MSG_ID_GMMREG_INIT_REQ,
                     (local_para_struct*)rac_ptr_g->local_para_ptr);
            rac_ptr_g->local_para_ptr = NULL;

            /* confirm MMI */
            local_ptr = (l4crac_act_cnf_struct*) 
                     construct_local_para(sizeof( l4crac_act_cnf_struct),
                                          TD_CTRL);
            local_ptr->src_id = rac_ptr_g->src_id;
            local_ptr->response = L4C_RAC_OK;
         
            rac_send_ilm(MOD_L4C,RAC_L4C_SAP,
                     MSG_ID_L4CRAC_ACT_CNF,(local_para_struct*)local_ptr);

            /*
             * mtk02475:
             * send NW search mode to SAT at power-on
             */
            #ifdef __SAT__
            sat_nw_search_mode_ind = (sat_nw_search_mode_ind_struct*)
                  construct_local_para(sizeof(sat_nw_search_mode_ind_struct),TD_CTRL);
            sat_nw_search_mode_ind->nw_search_mode = rac_ptr_g->plmn_sel_mode;
            rac_send_ilm(MOD_SIM,PS_SIM_SAP,MSG_ID_SAT_NW_SEARCH_MODE_IND,
                     (local_para_struct*) sat_nw_search_mode_ind);
            #endif

            break;
         
        default:
            break;
    }
} /* end of rac_nvram_read_cnf_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_nvram_write_cnf_msg_handler
*
* DESCRIPTION
*   rac_naram_read_cnf_msg_handler handles MSG_ID_NVRAM_WRITE_CNF ilm.
*
*   There is a issue when the handset is performing FTP UP+DL, play 
*   MP3, and change MMI GPRS connection between ""Always" and "When needed", the 
*   queue of NVRAM will be Full due to NVRAM's low task priority. The solution is that 
*   ONLY when NVRAM_WRITE_CNF is received shall we send the next NVRAM_WRITE_REQ.
*   Therefore, a counter "nvram_write_counter" is applied. 
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
*
* GLOBALS AFFECTED
*   nvram_write_counter in RAC context.
*****************************************************************************/
void rac_nvram_write_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    ASSERT(0 < rac_ptr_g->nvram_write_counter);
    rac_ptr_g->nvram_write_counter--;
    kal_brief_trace(TRACE_INFO, 
            RAC_NVRAM_WRITE_COUNT, 
            rac_ptr_g->nvram_write_counter, 
            RAC_RECV_NVRAM_CNF);
    /* Still at least one NVRAM_WRITE_REQ is pending due to NOT receiving NVRAM_WRITE_CNF yet. 
    However, we just need to write NVRAM once Coz everytime RAC write to NVRAM is with all RAC 
    information (2 bytes). */
    if (0 != rac_ptr_g->nvram_write_counter)
    {
        /* Just need to write NVRAM once. Therefore, reset the counter so that it just like the only one
        NVRAM_WRITE_REQ. */
        rac_ptr_g->nvram_write_counter = 0;
        rac_save_preference();
    }

    return;
}

/*****************************/
/*      MM Message           */
/*****************************/

/*****************************************************************************
* FUNCTION
*  rac_mm_attach_cnf_msg_handler
* DESCRIPTION
*   rac_mm_attach_cnf_msg_handler handles MSG_ID_GMMREG_ATTACH_CNF ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_attach_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_attach_cnf_struct *attach_cnf =
                     (gmmreg_attach_cnf_struct *) local_para_ptr;
#ifdef __HOMEZONE_SUPPORT__
    cell_info_and_rat_struct original_cell;
    rac_mm_state_enum original_rac_mm_state;
#endif
    /* MAUI_01650679, Only forward the standard network reject causes
     * For the other causes, it will be set to CAUSE_NONE while sending 
     * reg_ind/reg_cnf/plmn_search_cnf. And MMI will then think this is a don't care value
     */
    mm_cause_enum nw_reg_cause = CAUSE_NONE;
    
    if (attach_cnf->cause <= PROTO_ERROR_UNSPECIFIED)
    {
       nw_reg_cause = attach_cnf->cause;
    }
    else if ((attach_cnf->cause == MM_ABNORMAL_LU ||
              attach_cnf->cause == MM_ABNORMAL_LU_LESS_THEN_4_TIMES)
            && ((attach_cnf->abnormal_lu_cause <= PROTO_ERROR_UNSPECIFIED) &&
                 attach_cnf->abnormal_lu_cause != CAUSE_NONE))
    {
       /* use the real network reject cause */
       nw_reg_cause = attach_cnf->abnormal_lu_cause;
    }
    
#ifdef __HOMEZONE_SUPPORT__    
    original_rac_mm_state = rac_ptr_g->rac_mm_state;
    original_cell = rac_ptr_g->current_cell_rat;
#endif

    /* copy cell info */
    rac_ptr_g->current_cell_rat = attach_cnf->cell_info;
    /* change service state */
    rac_ptr_g->is_on_hplmn = attach_cnf->is_on_hplmn; //mtk02475: update on_hplmn information

    
    /* Johnny: 1. handle rac_mm_state */
#ifdef __CS_SERVICE__
    if(attach_cnf->attach_type == CS_DOMAIN || attach_cnf->attach_type == CS_PS_DOMAIN)
    {
        if(attach_cnf->attach_type == CS_DOMAIN
           && (attach_cnf->cause == MM_ABNORMAL_LU
           || attach_cnf->cause == MM_ABNORMAL_LU_LESS_THEN_4_TIMES))
        {
            /* Ripple: gsm_state is for AT+CREG. gsm_status is for L4 retry and MMI display.
             * To sync with MMI display. When L4C_RAC_ATTEMPT_TO_UPDATE,
             * MMI show Limited Service, so +CREG should be REG_DENIED. 
             */
            /* ~ Ripple */
            rac_ptr_g->rac_mm_state = RAC_MM_ATTEMPT_TO_UPDATE;
        }
        else
        {      
            rac_ptr_g->rac_mm_state = RAC_MM_NORMAL;
        }
    }
#endif

    /* Johnny: 2. handle rac_gmm_state */   
#ifdef __PS_SERVICE__
    if(attach_cnf->attach_type == PS_DOMAIN || attach_cnf->attach_type == CS_PS_DOMAIN)
    {
        /* Johnny: plmn_search_cnf with PROC_SUCCESSFUL is only for rac_mm_state,
                   rac_gmm_state should wait for attach_cnf/detach_ind with PS.
                   so:
                   rac_mm_state = previous_rac_mm_state in rac_mm_plmn_search_cnf_msg_handler()
                   rac_gmm_state = previous_rac_gmm_state in in rac_mm_attach_cnf_msg_handler()
                   and rac_mm_detach_ind_msg_handler() */

        if (attach_cnf->cause == MM_DO_NOT_NEED_PLMN_SEARCH)
        {
            if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
            {
               rac_ptr_g->rac_gmm_state = rac_ptr_g->previous_rac_gmm_state;
            }
            else 
            {
               /* MONZA00008140: RAC_GMM_NULL*/
               ;
            }
        }
        else
        {
            rac_ptr_g->rac_gmm_state = RAC_GMM_REG_NORMAL;
        }
    }
#endif
   
    /* Johnny: 3. handle current_action */
    /* response to L4C if necessary */
    switch(rac_ptr_g->current_action)      
    {
#ifdef __PS_SERVICE__
        case RAC_GPRS_ATTACH:
            if(attach_cnf->attach_type == PS_DOMAIN || attach_cnf->attach_type == CS_PS_DOMAIN)
            {         
                if (attach_cnf->att_id == rac_ptr_g->att_id)
                {
                    update_service_to_be_reged(attach_cnf->attach_type);
                    if (rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                    {
                        rac_send_ps_reg_cnf(GPRS_ATTACHED);
                        rac_set_action(RAC_IDLE);
                    }
                }
            }
            break;
#endif /* #ifdef __PS_SERVICE__ */         
      
        case RAC_REGISTRATION:
            if (attach_cnf->att_id == rac_ptr_g->att_id)
            {
                update_service_to_be_reged(attach_cnf->attach_type);
                if (rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                {
                    rac_send_reg_cnf(nw_reg_cause);
                    rac_set_action(RAC_IDLE);
                }
            }
            break;

        case RAC_CLASS_CHANGE:
           if (attach_cnf->att_id == rac_ptr_g->att_id)
            {
                update_service_to_be_reged(attach_cnf->attach_type);
                if(rac_ptr_g->service_to_be_dereged == DOMAIN_NONE && rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                {
                    rac_handle_class_change(rac_ptr_g->mobile_class);
                }          
            }         
            break;

        case RAC_IDLE:
        case RAC_DEREGISTRATION:
        case RAC_SET_GPRS_CONN_TYPE_ALWAYS:
        case RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED:
        case RAC_SELECT_PLMN:
        case RAC_PLMN_LIST:
        case RAC_PLMN_LIST_STOP:  
        case RAC_PLMN_LIST_STOP_TIMEOUT:      
#ifdef __CSG_SUPPORT__
        case RAC_CSG_LIST:
        case RAC_CSG_LIST_STOP:
        case RAC_CSG_LIST_STOP_TIMEOUT:
#endif /* __CSG_SUPPORT__ */
            if (rac_ptr_g->current_action == RAC_SET_GPRS_CONN_TYPE_ALWAYS
               && (attach_cnf->attach_type == PS_DOMAIN
               || attach_cnf->attach_type == CS_PS_DOMAIN))
            {
                rac_send_ps_reg_cnf(GPRS_ATTACHED);
                rac_set_action(RAC_IDLE);
            }
            break;

        default:
            //ASSERT_FAIL("Unexpected states");
            break;      
    }
    
    rac_send_reg_ind(attach_cnf->attach_type, RAC_NORMAL_SEND, nw_reg_cause);    
   
#ifdef __HOMEZONE_SUPPORT__
    if (!( (original_rac_mm_state == rac_ptr_g->rac_mm_state) &&
        rac_is_cell_info_equal( &rac_ptr_g->current_cell_rat.cell_info , &original_cell.cell_info) == KAL_TRUE &&
        rac_ptr_g->current_cell_rat.rat == original_cell.rat)
        )
    {
        /* CH_Liang 2005/05/31: Notify L4C of current cell information */
        rac_send_cell_info_update_ind();
    }
#endif

    /* Johnny: in 101.267 11.4.1:
    when the ME enters the MM-IDLE state with the result that either the Location status or
    Location information has been changed or updated, the ME shall inform the SIM that this has occurred.
    
    So RAC will send MSG_ID_SAT_LOCATION_INFO_IND to SIM when:
    
    1. not in MM_IDLE:
    a. enter MM_IDLE (check rac_ptr_g->send_sat_location_info_ind)
    
    2. in MM_IDLE:
    a. in rac_mm_attach_cnf_msg_handler()/rac_mm_detach_ind_msg_handler(),
       rac_current_equal_last_sat_location_info_ind() == KAL_FALSE
    b. in rac_mm_cell_info_update_ind_msg_handler(),
       change location_info in normal service
    RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM when location_info changes in limited service.
    
    ps. if latest_location_status == NO_SERVICE && current_location_status == NO_SERVICE,
        altought location_info changes, RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM task
        (SIM task also does not send location_info to SIM card if SIM location_status == NO_SERVICE)
    */
#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
/* mtk01778 2007/09/20 : { */
    if ((attach_cnf->attach_type == CS_DOMAIN || attach_cnf->attach_type == CS_PS_DOMAIN)
         && ( (rac_ptr_g->roaming_broker_support == KAL_FALSE && attach_cnf->cause != MM_ABNORMAL_LU_LESS_THEN_4_TIMES) //abnormal LU < 4, don't send to SIM
         	||(rac_ptr_g->roaming_broker_support == KAL_TRUE && attach_cnf->cause != MM_ABNORMAL_LU_LESS_THEN_4_TIMES && attach_cnf->cause != MM_ABNORMAL_LU))
         ) //abnormal LU, don't send to SIM    	
/* } mtk01778 2007/09/20 */     
    {
        if (rac_current_equal_last_sat_location_info_ind() == KAL_FALSE)
        {
            if (rac_ptr_g->is_dedicated_mode == KAL_TRUE)
            {
                rac_ptr_g->send_sat_location_info_ind = KAL_TRUE;
            }
            else
            {
                rac_send_sat_location_info_ind();
            }
        }
        else
        {
            rac_ptr_g->send_sat_location_info_ind = KAL_FALSE;
        }
    }
#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif

    /* Johnny: update only */
    rac_send_reg_ind(attach_cnf->attach_type, RAC_ALWAYS_NOT_SEND, nw_reg_cause);  

#ifdef __NW_REG_CAUSE_REPORT__
   {
      mm_cause_enum reg_cause = 0xFF;
      
      if (attach_cnf->cause <= PROTO_ERROR_UNSPECIFIED)
      {
         reg_cause = attach_cnf->cause;
      }
      else if ((attach_cnf->cause == MM_ABNORMAL_LU ||
                attach_cnf->cause == MM_ABNORMAL_LU_LESS_THEN_4_TIMES)
              && ((attach_cnf->abnormal_lu_cause <= PROTO_ERROR_UNSPECIFIED) &&
                   attach_cnf->abnormal_lu_cause != CAUSE_NONE))
      {
         /* use the real network reject cause */
         reg_cause = attach_cnf->abnormal_lu_cause;
      }

      if (reg_cause != 0xFF)
      {
         l4crac_reg_cause_ind_struct *reg_cause_ind;
         reg_cause_ind = (l4crac_reg_cause_ind_struct *) 
                  construct_local_para( sizeof(l4crac_reg_cause_ind_struct), TD_RESET);

         reg_cause_ind->domain = attach_cnf->attach_type;
         reg_cause_ind->cause = reg_cause;         

         rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_REG_CAUSE_IND,(local_para_struct*)reg_cause_ind);
      }
   }
#endif
    
} /* end of rac_mm_attach_cnf_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_mm_detach_ind_msg_handler
* DESCRIPTION
*   rac_mm_detach_ind_msg_handler handles MSG_ID_GMMREG_DETACH_IND ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_detach_ind_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_detach_ind_struct *detach_ind = 
                     (gmmreg_detach_ind_struct *) local_para_ptr;
    
#ifdef __HOMEZONE_SUPPORT__
    cell_info_and_rat_struct original_cell;
    rac_mm_state_enum original_rac_mm_state;
#endif    
    #ifdef __PS_SERVICE__  
    /*mtk02475: CGEV modification*/
    rac_gmm_state_enum original_rac_gmm_state;
    /*~CGEV modification*/
    /* MAUI_01602234 */
    kal_bool pending_gmm_to_null_state = KAL_FALSE; 
    #endif
    /* MAUI_01602234 */
    kal_bool pending_mm_to_null_state = KAL_FALSE; 

    /* MAUI_01650679, Only forward the standard network reject causes
     * For the other causes, it will be set to CAUSE_NONE while sending 
     * reg_ind/reg_cnf/plmn_search_cnf. And MMI will then think this is a don't care value
     */
    mm_cause_enum nw_reg_cause = CAUSE_NONE;
    if (detach_ind->cause == SEARCH_FINISHED)
    {
    	if (rac_ptr_g->roaming_broker_support == KAL_TRUE)
    	{
	        if (rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
	        {
	            if(rac_current_equal_last_sat_location_info_ind() == KAL_FALSE)
	            {
	                /* mtk03643: SEARCH_FINISHED special cause for roaming broker 
	                        send sat at the end of first round of search */
	                if (rac_ptr_g->is_dedicated_mode == KAL_TRUE)
	                {
	                    rac_ptr_g->send_sat_location_info_ind = KAL_TRUE;
	                }
	                else
	                {
	                    rac_send_sat_location_info_ind();
	                }
	            }
	            else
	            {
	                rac_ptr_g->send_sat_location_info_ind = KAL_FALSE;
	            }
	        }
    	}
        
        /* mtk03643: if do not turn on ROAMING BROKER ignore this special cause */    
        return ;
    }
    
    if (detach_ind->cause <= PROTO_ERROR_UNSPECIFIED)
    {
       nw_reg_cause = detach_ind->cause;
    }
    
#ifdef __HOMEZONE_SUPPORT__
    original_rac_mm_state = rac_ptr_g->rac_mm_state;
    original_cell = rac_ptr_g->current_cell_rat;
#endif

    rac_ptr_g->is_on_hplmn = detach_ind->is_on_hplmn; //mtk02475: update on_hplmn information

   kal_brief_trace(TRACE_INFO, RAC_INFO, rac_ptr_g->current_action, rac_ptr_g->rac_mm_state, rac_ptr_g->rac_gmm_state);
   kal_brief_trace(TRACE_INFO, RAC_RECEIVE_DETACH_IND, rac_ptr_g->service_to_be_reged, rac_ptr_g->service_to_be_dereged,
                                                                                  detach_ind->detach_type, detach_ind->cause);  
   
#ifdef __CS_SERVICE__
    /* John Tang 2004/05/24: If PLMN Selection is running and report detach ind with PS service, 
    we just return. The reason is that when user choose another PLMN, it maybe just a GSM cell. 
    In such case, LU may still ongoing. If we inform L4C and MMI, it's conflicit for us between "plmn id"
    and "gsm_status"/"gsm_state". 
    (1) If we report new PLMN Id, actually the result of new PLMN registration
    is still unknown. If we report "gsm_state" as "REG_STATE_NOT_REGISTERED" and "gsm_status" as
    "L4C_RAC_ATTEMPT_TO_UPDATE", it will make MMI display "limited service" for a while. It's not
    prefered for users' feeling.
    (2) Therefore, we just don't report to L4C and MMI Coz there will be a new status update by GMM
    after CS registration is done. Let's update gprs_state and gprs_status then.
   
    This happens in China field trial between "CM" and "CU" PLMN. */
   
    if ( (PS_DOMAIN == detach_ind->detach_type) && 
         ( RAC_SELECT_PLMN == rac_ptr_g->current_action) )
    {
         kal_brief_trace(TRACE_INFO,RAC_RECV_PS_DETACH_WHEN_PLMN_SEL, 
               rac_get_gprs_status(), rac_get_gprs_state());
      return;
    }
      
    /* John Tang 2004/06/14: Since both band change/PLMN Selection operation shall based on the 
    registeration result of GSM CS service. If reject cause is NO_GPRS_SERVICE, we shall NOT regard 
    that Band change/PLMN Selection is successful or done. 

    (The following is wrong)   
    We also don't update the status of CS service.
    Otherwise, it will display Limited Service for a while in MMI screen. Only PS service is updated. It may be
    possible that users first see the "G" icon disappear, then the new PLMN(if registration successful) or 
    Limited service(if registration fails). 

    [Reason](2004/05/24) Also, when MS is GPRS attached and selected to the GSM only PLMN, 
    RAC shall not report reg_state_ind to L4C/MMI. Otherwise, MMI will regard that the selected PLMN is CS 
    registration OK even when LU is still ongoing. If user then abort the PLMN Selection, it will stay in the GSM
    PLMN.   
    */

    /* Johnny: LU reject (PLMN not allowed)
          ori: attach_rej + detach_ind -> return in attach_rej is ok
          new: detach_ind + detach_ind -> we should not return in detach_ind */   
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
#endif


#ifdef __GEMINI__
        if (detach_ind->cause == MM_REJ_CUZ_RR_IN_SUSPEND_MODE)
        {
            kal_brief_trace(TRACE_INFO,RAC_CURRENT_ACTION,rac_ptr_g->current_action);
#ifdef __PS_SERVICE__            
            if (rac_ptr_g->current_action == RAC_GPRS_ATTACH && 
                  detach_ind->att_id == rac_ptr_g->att_id)
            {
                rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_LIMITED_DENIED;
                update_service_to_be_reged(detach_ind->detach_type);
                if (rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                {
                    rac_send_ps_reg_cnf(rac_get_gprs_status());
                    rac_set_action(RAC_IDLE);
                }
                else
                {
                    rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, CAUSE_NONE);
                }                
            }
#endif
            /* RAC doesn't handle this cause, don't change gsm/gprs state */
            return;
        }
#endif                                          


    /* mtk02475: if MM notify no service, need to reset current cell info */
    if (detach_ind->cause != NO_COVERAGE)
    {
        /* copy cell info */
        rac_ptr_g->current_cell_rat = detach_ind->cell_info;
        /* change service state */

        if(detach_ind->cause == FORBIDDEN_PLMN)
        {
            #ifdef __UMTS_TDD128_MODE__
            if((rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT)
            {
                ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_LEAVE_HSUPA_CELL, MOD_RAC);
            }
            #endif

            /*when enter no service, limited service, flight mode or set rat mode,
              reset this context. 
             */
            rac_ptr_g->cell_data_speed_support = NONE_SPECIFIED;
        }
    }
    else
    {
        #ifdef __UMTS_TDD128_MODE__
        if((rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT)
        {
            ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_LEAVE_HSUPA_CELL, MOD_RAC);
        }
        #endif

        rac_reset_cell_info_rat();
    }
    
    /* Johnny: 1. handle rac_mm_state */
    /* if rac_mm_state is null, we cannot modify its state to synchronize mm state. 
         ex: class change (B to CG) in no service area, 
               rac_mm_state will be updated from RAC_MM_NULL to NO COVERAGE by detach_ind.
               ,whereas mm state is still in MM_STATE_BEGIN (null). 
        if rac_mm_state is null and result of attach_req is detach_ind, we need to consider state change.
   */
    if((rac_ptr_g->rac_mm_state != RAC_MM_NULL || rac_ptr_g->service_to_be_reged == CS_DOMAIN ||  rac_ptr_g->service_to_be_reged == CS_PS_DOMAIN) 
        &&
       (detach_ind->detach_type == CS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN))
    {
        switch(detach_ind->cause)
        {
            case ILLEGAL_ME:
            case ILLEGAL_MS:
            case IMSI_UNKNOWN_IN_HLR:
            case GPRS_NON_GPRS_NOT_ALLOWED:
            case SIM_INVALID_FOR_CS_AND_PS:               
            case SIM_INVALID_FOR_CS:
                /* For MMI's sake, don't notify about INVALID SIM in case of  SIM not ready*/
                /*case SIM_REMOVED:  */
                if (rac_ptr_g->current_action == RAC_REGISTRATION || rac_ptr_g->current_action == RAC_SELECT_PLMN)
                {
                    rac_ptr_g->rac_mm_state = RAC_MM_NO_IMSI_DENIED;
                }
                else
                {
                    rac_ptr_g->rac_mm_state = RAC_MM_NO_IMSI;
                }
                break;

            case NO_COVERAGE:
                if (rac_ptr_g->current_action == RAC_REGISTRATION || rac_ptr_g->current_action == RAC_SELECT_PLMN)
                {
                    rac_ptr_g->rac_mm_state = RAC_MM_NO_CELL_DENIED;
                }
                else
                {                
                    rac_ptr_g->rac_mm_state = RAC_MM_NO_CELL;
                }

                if (custom_rac_display_searching_when_plmn_loss() == KAL_TRUE)
                {
                    if (detach_ind->issearching == KAL_TRUE)
                    {
                        rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
                        rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;
                    }
                }
                break;
                
            case MM_RECOVERY_SEARCH:
                if (custom_rac_display_searching_when_plmn_loss() == KAL_TRUE)
                {
                    if (rac_ptr_g->rac_mm_state != RAC_MM_SEARCHING)
                    {             
                        rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
                        rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;                     
                    }
                }
                else
                {
                    break;
                }
                /* fall through */
            case PLMN_NOT_ALLOWED:
                /* go through */
            default:
                /* MAUI_01746390 mtk02475:
                 * gsm_state should be RAC_MM_LIMITED when camp on acceptable cells
                 * for AT+CREG, MS will return 'not registered' instead of 'register denied'
                 */
                if ((detach_ind->cause != FORBIDDEN_PLMN)&& (rac_ptr_g->current_action == RAC_REGISTRATION || rac_ptr_g->current_action == RAC_SELECT_PLMN))
                {
                    if (rac_ptr_g->rac_mm_state != RAC_MM_NO_IMSI_DENIED)
                    {                              
                        rac_ptr_g->rac_mm_state = RAC_MM_LIMITED_DENIED;
                    }
                }
                else
                {
                    /* MAUI_01611452
                     * mtk02475: RAC should remember NO_IMSI state for action overwrite scenario (REGISTRATION to SELECT_PLMN)
                     */
                    if (rac_ptr_g->rac_mm_state == RAC_MM_NO_IMSI_DENIED)
                    {
                        rac_ptr_g->rac_mm_state = RAC_MM_NO_IMSI;
                    } 
                    else if (rac_ptr_g->rac_mm_state != RAC_MM_NO_IMSI)
                    {                              
                        rac_ptr_g->rac_mm_state = RAC_MM_LIMITED;
                    }
                }

                if (detach_ind->issearching == KAL_TRUE)
                {             
                    rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
                    rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;                     
                }
                break;
        }
            
          /* mtk01778, 2007/08/06:  while performing DEREGISTRATION or CLASS_CHANGE,
             we set rac_mm_state as RAC_MM_NULL instead of RAC_MM_LIMITED, in order to avoid 
           confusing when MS performing ms class change. However, we return the same mm status to MMI as RAC_MM_LIMITED.
           for eg, rac_mm_state will be RAC_MM_LIMITED if there is no cell. (while class change : B -> CG)
                   but we don't need to send detach_ind (CS) twice at this case.
          */
          //MAUI_01561091 mtk02475: take this detach_ind as deregertration confirm only if the att_id is matched.
        if ((rac_ptr_g->att_id == detach_ind->att_id) &&
            (rac_ptr_g->current_action == RAC_DEREGISTRATION || rac_ptr_g->current_action == RAC_CLASS_CHANGE) &&  
            (rac_ptr_g->service_to_be_dereged == CS_DOMAIN || rac_ptr_g->service_to_be_dereged == CS_PS_DOMAIN))              
        {
            //rac_ptr_g->rac_mm_state = RAC_MM_LIMITED;
            /* MAUI_01602234, if the DEREGISTRATION is performed during REGISTRATION, then it is possible that 
             * RAC will receive the detach indication with network reject cause from the processing registration
             * activity. So if SIM is invalided by network in this situation, RAC shall indicate upper layer this 
             * information but not just change to null state. Otherwise, upper will still think the SIM is valid 
             * after some action such like SET RAT MODE. 
             * So just remember we need to change to null state here, 
             * and then do the state change and send the regn state indication soon after 
             * handling both mm and gmm state checking. 
             */
            if(rac_ptr_g->rac_mm_state == RAC_MM_NO_IMSI)
            {
                pending_mm_to_null_state = KAL_TRUE; 
            }
            else
            {
                rac_ptr_g->rac_mm_state = RAC_MM_NULL;
            }
        }
    }
#endif

#ifdef __PS_SERVICE__ 
    /* Johnny: 2. handle rac_gmm_state */
    /* if rac_gmm_state is null, we cannot modify its state to synchronize gmm state. */
    if((rac_ptr_g->rac_gmm_state != RAC_GMM_NULL || rac_ptr_g->service_to_be_reged == PS_DOMAIN ||  rac_ptr_g->service_to_be_reged == CS_PS_DOMAIN)
        &&
       (detach_ind->detach_type == PS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN))
    {
        /* Johnny: plmn_search_cnf with PROC_SUCCESSFUL is only for rac_mm_state,
                   rac_gmm_state should wait for attach_cnf/detach_ind with PS.
                   so:
                   rac_mm_state = previous_rac_mm_state in rac_mm_plmn_search_cnf_msg_handler()
                   rac_gmm_state = previous_rac_gmm_state in in rac_mm_attach_cnf_msg_handler()
                   and rac_mm_detach_ind_msg_handler() */
        if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
        {
            rac_ptr_g->rac_gmm_state = rac_ptr_g->previous_rac_gmm_state;
        }

        /*mtk02475: CGEV modification*/
        original_rac_gmm_state = rac_ptr_g->rac_gmm_state;
        /*~CGEV modification*/

        rac_ptr_g->gmm_cause = detach_ind->cause;
        switch(detach_ind->cause)
        {
            case ILLEGAL_ME:
            case ILLEGAL_MS:
            case IMSI_UNKNOWN_IN_HLR:
            case GPRS_NON_GPRS_NOT_ALLOWED:
            case SIM_INVALID_FOR_CS_AND_PS:

            case SIM_INVALID_FOR_PS:
            case GPRS_NOT_ALLOWED:

            /* For MMI's sake, don't notify about INVALID SIM in case of  SIM not ready*/
            /*case SIM_REMOVED:  */
                if (rac_ptr_g->current_action == RAC_REGISTRATION || 
                    rac_ptr_g->current_action == RAC_SELECT_PLMN  || 
                    rac_ptr_g->current_action == RAC_GPRS_ATTACH)
                {
                    rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_NO_IMSI_DENIED;
                }
                else
                {
                    rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_NO_IMSI;
                }
          
                ASSERT(detach_ind->is_reged == KAL_FALSE);   
                break;
   
            case NO_GPRS_COVERAGE:
            case NO_COVERAGE:              
                if (detach_ind->is_reged == KAL_TRUE)
                {
                    rac_ptr_g->rac_gmm_state = RAC_GMM_REG_NO_CELL;
                }    
                else
                {
                    if (rac_ptr_g->current_action == RAC_REGISTRATION
                       || rac_ptr_g->current_action == RAC_SELECT_PLMN
                       || rac_ptr_g->current_action == RAC_GPRS_ATTACH)
                    {                    
                        rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_NO_CELL_DENIED;
                    }
                    else
                    {
                        rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_NO_CELL;
                    }
                }

                if (detach_ind->issearching == KAL_TRUE)
                {
                    rac_ptr_g->previous_rac_gmm_state = rac_ptr_g->rac_gmm_state;
                    rac_ptr_g->rac_gmm_state = RAC_GMM_SEARCHING;
                }                
                break;
/* mtk02475: cause=0xff is not used in MONZA architecture, replace as NETWORK_FAILURE */
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
            /* mtk02475: 
             * MM will notify RAC that search is executed.
             * Therefore, PS domain need to enter search state and notify MMI/AP to remove G icon 
             */
            case MM_RECOVERY_SEARCH:
                {
                    kal_bool previous_attached = ((rac_get_gprs_status() == GPRS_ATTACHED) ? KAL_TRUE : KAL_FALSE);
                    if (rac_ptr_g->rac_gmm_state != RAC_GMM_SEARCHING)
                    {
                        rac_ptr_g->previous_rac_gmm_state = rac_ptr_g->rac_gmm_state;
                        rac_ptr_g->rac_gmm_state = RAC_GMM_SEARCHING;                     
                    }
                    if (previous_attached == KAL_TRUE)
                    {
                        rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, CAUSE_NONE);
                    }
                    return;
                }            
            case MM_WAIT_FOR_RELEASE:
                {
                    if(rac_ptr_g->current_action == RAC_GPRS_ATTACH)
                    {
                        /* mtk03643: [MBIM] GPRS attach conflict with lu, just postpone cnf to next registration result
                                        at+cops=0 (2G lu accept return search cnf in wait network cmd)
                                        at+cgatt=1 (always rejected due to in suspend mode)
                                        in this scenario we expect attach shall start shortly,
                                        some conditions might take very long, cannot ask upper layer always wait for next result 
                                        */
                        return;
                    }
                }
        default:
              //mtk02475: only allow GMM_REG state to be stay in GMM_REG.LIMITED_SERVICE
              if (detach_ind->is_reged == KAL_TRUE && is_rac_gmm_state_reg() == KAL_TRUE)
              {
                  rac_ptr_g->rac_gmm_state = RAC_GMM_REG_LIMITED;
              }
              else if (rac_ptr_g->rac_gmm_state != RAC_GMM_DEREG_NO_IMSI_DENIED
                       && rac_ptr_g->rac_gmm_state != RAC_GMM_DEREG_NO_IMSI)
              {
                  if (rac_ptr_g->current_action == RAC_REGISTRATION || 
                      rac_ptr_g->current_action == RAC_SELECT_PLMN  ||
                      rac_ptr_g->current_action == RAC_GPRS_ATTACH)
                  {              
                      rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_LIMITED_DENIED;
                  }
                  else
                  {              
                      rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_LIMITED;  
                  }
              }
              else if (rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_IMSI_DENIED) /* mtk02475: swtich to NOT_REGISTERED after action finished*/
              {
                rac_ptr_g->rac_gmm_state = RAC_GMM_DEREG_NO_IMSI;
              }
            
              if (detach_ind->issearching == KAL_TRUE)
              {
                  rac_ptr_g->previous_rac_gmm_state = rac_ptr_g->rac_gmm_state;            
                  rac_ptr_g->rac_gmm_state = RAC_GMM_SEARCHING;
              }            
              break;
        }
      
          /* mtk01778, 2007/08/06:  while performing DEREGISTRATION or CLASS_CHANGE,
             we set rac_mm_state as RAC_MM_NULL instead of RAC_MM_LIMITED, in order to avoid 
           confusing when MS performing ms class change. However, we return the same mm status to MMI as RAC_MM_LIMITED.
           for eg, rac_mm_state will be RAC_MM_LIMITED if there is no cell. (while class change : B -> CG)
                 but we don't need to send detach_ind (CS) twice at this case.
          */
          //MAUI_01561091 mtk02475: take this detach_ind as deregertration confirm only if the att_id is matched.
        if ((rac_ptr_g->att_id == detach_ind->att_id)
            && (rac_ptr_g->current_action == RAC_DEREGISTRATION || rac_ptr_g->current_action == RAC_CLASS_CHANGE || rac_ptr_g->current_action == RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED)
            && (rac_ptr_g->service_to_be_dereged == PS_DOMAIN || rac_ptr_g->service_to_be_dereged == CS_PS_DOMAIN)
            /* MAUI_02726890: RAC has checked att_id here for detach_ind from GMM, but sometimes race condition happens in GMM.
               At this time, GMM sends detach_ind with is_reged KAL_TRUE, and it does not mean that it is the response for detach_req.
               So in future, detach for PS domain is finished until RAC receives detach_ind with is_reged KAL_FALSE.
            */
            && detach_ind->is_reged == KAL_FALSE)
        {
            /* MAUI_01602234, if the DEREGISTRATION is performed during REGISTRATION, then it is possible that 
             * RAC will receive the detach indication with network reject cause from the processing registration
             * activity. So if SIM is invalided by network in this situation, RAC shall indicate upper layer this 
             * information but not just change to null state. Otherwise, upper will still think the SIM is valid 
             * after some action such like SET RAT MODE. 
             * So just remember we need to change to null state here, 
             * and then do the state change and send the regn state indication soon after 
             * handling both mm and gmm state checking. 
             */
            if(rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_IMSI)
            {
                pending_gmm_to_null_state = KAL_TRUE; 
            }
            else
            {
                rac_ptr_g->rac_gmm_state = RAC_GMM_NULL;
            }
        } /*mtk02475: CGEV modification*/
        else if (original_rac_gmm_state >= RAC_GMM_REG_NORMAL && 
                 rac_ptr_g->rac_gmm_state <= RAC_GMM_DEREG_NO_CELL_DENIED)
         {
            rac_send_ps_event_report_ind(NW_DETACH_EVENT);
         }
        /*~CGEV modification*/
        
    }
#endif      

    /* MAUI_01602234, send the reg ind to indicate the invalid SIM information
     * and then change to null state. 
     */
    if(pending_mm_to_null_state == KAL_TRUE 
#ifdef __PS_SERVICE__
        || pending_gmm_to_null_state == KAL_TRUE
#endif
      )
    {
        rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
        if(pending_mm_to_null_state == KAL_TRUE)
        {
            rac_ptr_g->rac_mm_state = RAC_MM_NULL;
        }
#ifdef __PS_SERVICE__
        if(pending_gmm_to_null_state == KAL_TRUE)
        {
            rac_ptr_g->rac_gmm_state = RAC_GMM_NULL;
        }
#endif        
    }

    /* Johnny: 3. handle current_action */
    switch(rac_ptr_g->current_action)
    {
        case RAC_REGISTRATION:
            if (detach_ind->att_id == rac_ptr_g->att_id)
            {
                update_service_to_be_reged(detach_ind->detach_type);
                if (rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                {
                    rac_send_reg_cnf(nw_reg_cause);
                    rac_set_action(RAC_IDLE);
                }
            }
            /* for IMSI refresh, to make L4 happy */
            rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
            break;

        case RAC_DEREGISTRATION:
            if (detach_ind->att_id == rac_ptr_g->att_id)
            {
#if 0
#ifdef __PS_SERVICE__
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
#endif
                /* MAUI_02726890: RAC has checked att_id here for detach_ind from GMM, but sometimes race condition happens in GMM.
                   At this time, GMM sends detach_ind with is_reged KAL_TRUE, and it does not mean that it is the response for detach_req.
                   So in future, detach for PS domain is finished until RAC receives detach_ind with is_reged KAL_FALSE.
                */

                if((detach_ind->detach_type == PS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN)
					&& rac_ptr_g->rac_gmm_state == RAC_GMM_NULL)
                {
                    update_service_to_be_dereged(PS_DOMAIN);
                }
                if((detach_ind->detach_type == CS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN)
					&& rac_ptr_g->rac_mm_state == RAC_MM_NULL)
                {
                    update_service_to_be_dereged(CS_DOMAIN);
                }
                if (rac_ptr_g->service_to_be_dereged == DOMAIN_NONE)
                {
                    /* CH_Liang 2005/05/28: When all the service_to_be_dereged are dereg, send CNF to L4C */        
                    rac_send_dereg_cnf();
                    rac_set_action(RAC_IDLE);
                }
                //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed
                //else
                //{
                //    rac_send_reg_ind(CS_PS_DOMAIN, RAC_NORMAL_SEND);
                //}
            }
            //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed
            //else
            //{
                      rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
            //}
            break;

#ifdef __PS_SERVICE__
        case RAC_GPRS_ATTACH:
            if (detach_ind->att_id == rac_ptr_g->att_id)
            {
                update_service_to_be_reged(detach_ind->detach_type);
                if (rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                {
                    rac_send_ps_reg_cnf(rac_get_gprs_status());
                    rac_set_action(RAC_IDLE);

                    /* Johnny: when needed, gprs attach fail, gprs detach should be performed by L4C, not RAC */            
#if 0           
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif            
                }
                //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed
                //else
                //{
                //rac_send_reg_ind(CS_PS_DOMAIN, RAC_NORMAL_SEND);
                //}
            }
            //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed
            rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
            break;
#endif /* __PS_SERVICE__*/        
      
        case RAC_CLASS_CHANGE:
            if (detach_ind->att_id == rac_ptr_g->att_id)
            {            
                /* MAUI_02726890: RAC has checked att_id here for detach_ind from GMM, but sometimes race condition happens in GMM.
                   At this time, GMM sends detach_ind with is_reged KAL_TRUE, and it does not mean that it is the response for detach_req.
                   So in future, detach for PS domain is finished until RAC receives detach_ind with is_reged KAL_FALSE.
                */
                if(rac_ptr_g->service_to_be_dereged == PS_DOMAIN
                   && (detach_ind->detach_type == PS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN)
                   && detach_ind->is_reged == KAL_TRUE)
                {
                    ;
                }
                else
                {
                    update_service_to_be_dereged(detach_ind->detach_type);
                    update_service_to_be_reged(detach_ind->detach_type);
                    if(rac_ptr_g->service_to_be_dereged == DOMAIN_NONE && rac_ptr_g->service_to_be_reged == DOMAIN_NONE)
                    {
                        rac_handle_class_change(rac_ptr_g->mobile_class);
                    } 
                }
            }            
            //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed            
            //else
            //{
                rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause); 
            //}         
            break;
            
        case RAC_SELECT_PLMN:
              /* John Tang 2004/06/14: Since both band change/PLMN Selection operation shall based on the 
              registeration result of GSM CS service. If reject cause is NO_GPRS_SERVICE, we shall NOT regard 
              that Band change/PLMN Selection is successful or done. We also can NOT report 
              L4CRAC_REG_STATE_IND to L4 Coz if user abort the PLMN List, MMI will regard that selected PLMN is 
              already registered and fail to back to the original PLMN. "G" icon can disappear after RR connection
              release Coz at that time, RR will report a GMMAS_SYS_INFO_IND again. */      
            if( rac_ptr_g->plmn_sel_mode == AUTOMATIC_MODE 
                || (rac_is_plmn_id_rat_equal_to_current(& rac_ptr_g->selected_plmn_id) == KAL_TRUE 
                       || rac_ptr_g->rac_mm_state == RAC_MM_NO_CELL)
                || (rac_ptr_g->selected_plmn_id.plmn_id.mcc1 == 0xFF
                    &&rac_ptr_g->selected_plmn_id.plmn_id.mcc2 == 0xFF
                    &&rac_ptr_g->selected_plmn_id.plmn_id.mcc3 == 0xFF 
                    &&rac_ptr_g->selected_plmn_id.plmn_id.mnc1 == 0xFF 
                    &&rac_ptr_g->selected_plmn_id.plmn_id.mnc2 == 0xFF
                    &&rac_ptr_g->selected_plmn_id.plmn_id.mnc3 == 0xFF ) 
                || detach_ind->issearching == KAL_FALSE)
            {
                  /* John Tang 2004/02/27: In 2004 Feb. China field trial, it happened that 
                   when PLMN selects a GSM Only cell, GMM will sends RAC "DETACH_IND"
                   while LU is ongoing. In such case, we shall wait for LU's result instead of 
                   confirm L4C that PLMN SELECTION is done. That's, wait for CS service's
                   registration result. */

#if 0
/* under construction !*/
#endif
                    if (PS_DOMAIN == detach_ind->detach_type)                
                    {
                            /* John Tang 2004/03/16: For condition PLMN select from GPRS cell to GSM cell,
                            GMM will report GMMREG_DETACH_IND to RAC. Therefore, RAC shall report
                            reg_state_ind to L4C so that MMI can let icon "G" dispear. If LU is rejected in
                            GSM cell, when AS reports the original cell, icon "G" will appear while display
                            "Emergency" service. */
                            rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
                    }
            }
            else
            {
                    //kal_print("[RAC]Ignore Detach Ind with PLMN SEL flag set!");
            }
            break;

        case RAC_ACTIVATION:
        case RAC_IDLE:
        case RAC_SET_GPRS_CONN_TYPE_ALWAYS:
        case RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED:   
        case RAC_PLMN_LIST:
        case RAC_PLMN_LIST_STOP:
        case RAC_PLMN_LIST_STOP_TIMEOUT:
#ifdef __CSG_SUPPORT__
        case RAC_CSG_LIST:
        case RAC_CSG_LIST_STOP:
        case RAC_CSG_LIST_STOP_TIMEOUT:
#endif /* __CSG_SUPPORT__ */
            if (rac_ptr_g->current_action == RAC_SET_GPRS_CONN_TYPE_ALWAYS
                && (detach_ind->detach_type == PS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN))
            {
                rac_send_ps_reg_cnf(rac_get_gprs_status());
                rac_set_action(RAC_IDLE);
            }
            /* MAUI_02726890: RAC has checked att_id here for detach_ind from GMM, but sometimes race condition happens in GMM.
               At this time, GMM sends detach_ind with is_reged KAL_TRUE, and it does not mean that it is the response for detach_req.
               So in future, detach for PS domain is finished until RAC receives detach_ind with is_reged KAL_FALSE.
            */			
            else if (rac_ptr_g->current_action == RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED
                     && detach_ind->att_id == rac_ptr_g->att_id
                     && rac_ptr_g->rac_gmm_state == RAC_GMM_NULL)
            {
                rac_send_dereg_cnf();
                rac_set_action(RAC_IDLE);
            }
            //MAUI_01561284 mtk02475: send REG_STATE_IND to update MMI if MM/GMM state is changed
            //else
            //{      
                rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
            //}
            break;
             
        default:
            //John Tang 2003/05/19: For TC 44.2.1.1.5.3.3
            //ASSERT_FAIL("ERROR STATE");
         
            /* CH_Liang 2005/07/20: Notify L4C of current state even if RAC_IDLE
            1. SELECT_PLMN 2. LU ACC (RAC_IDLE) 3. RAU REJ (#9) 4. GPRS ATTACH REJ (#14) */
            rac_send_reg_ind(detach_ind->detach_type, RAC_NORMAL_SEND, nw_reg_cause);
            break;         
    }


#ifdef __HOMEZONE_SUPPORT__
    if (!( (original_rac_mm_state == rac_ptr_g->rac_mm_state) &&
        rac_is_cell_info_equal( &rac_ptr_g->current_cell_rat.cell_info , &original_cell.cell_info) == KAL_TRUE &&
        rac_ptr_g->current_cell_rat.rat == original_cell.rat
        )
     ||
     (original_rac_mm_state == RAC_MM_SEARCHING && 
     (detach_ind->detach_type==CS_DOMAIN || detach_ind->detach_type==CS_PS_DOMAIN))
    )
    {
        /* CH_Liang 2005/05/31: Notify L4C of current cell information */
        rac_send_cell_info_update_ind();
    }
#endif

    /* John Tang 2004/12/09: To aviod the queue of SIM task full. This fatal error happens when
    I use Attach/Detach script while power-on (before SIM ready in MM/GMM.) At this scenraio, GMM 
    will keep sending GMMREG_ATTACH_REJ (cause=SIM_REMOVED) so that RAC keeps sending 
    "MSG_ID_SAT_LOCATION_INFO_IND" to SIM then cause fatal error. Let's inform SIM only when
    the gsm_status changes since "gsm_status" is the only field that will be changed in this function. 
    (the location information of "MSG_ID_SAT_LOCATION_INFO_IND" won't change here. */   

    /* Johnny: in 101.267 11.4.1:
    when the ME enters the MM-IDLE state with the result that either the Location status or
    Location information has been changed or updated, the ME shall inform the SIM that this has occurred.
    
    So RAC will send MSG_ID_SAT_LOCATION_INFO_IND to SIM when:
    
    1. not in MM_IDLE:
    a. enter MM_IDLE (check rac_ptr_g->send_sat_location_info_ind)
    
    2. in MM_IDLE:
    a. in rac_mm_attach_cnf_msg_handler()/rac_mm_detach_ind_msg_handler(),
       rac_current_equal_last_sat_location_info_ind() == KAL_FALSE
    b. in rac_mm_cell_info_update_ind_msg_handler(),
       change location_info in normal service
    RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM when location_info changes in limited service.
    
    ps. if latest_location_status == NO_SERVICE && current_location_status == NO_SERVICE,
        altought location_info changes, RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM task
        (SIM task also does not send location_info to SIM card if SIM location_status == NO_SERVICE)
    */
#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__

	if( rac_ptr_g->roaming_broker_support == KAL_TRUE ) /* not turned on by default */
	{
	       /* mtk00714 20080323, MAUI_00560791, MAUI_00736881: use __RAC_REPORT_LIMIT_AFTER_TRYALLPLMN__ option, 
	      if turn on, RAC will not update limited service to SAT until MM indicates cause with "FORBIDDEN_PLMN",
	      which means MM has tried to search all PLMNs but cannot obtain any normal service, 
	      so Limited service will send to SAT only if MS is only obtain limited service */
	      /* 20080804, T mobile's request, enter FPLMN Limited service should send SAT LOCATION INFO,
	                          no matter if enter dedicated mode or not */
	   if (rac_current_equal_last_sat_location_info_ind() == KAL_FALSE)
	   {
	      if (rac_ptr_g->rac_mm_state == RAC_MM_NO_CELL
	         || rac_ptr_g->rac_mm_state == RAC_MM_NO_CELL_DENIED)
	      {
	         /* 1. NO_SERVICE : (27.22.7.4.1) NORMAL_SERVICE to NO_SERVICE must be sent */
	         rac_send_sat_location_info_ind(); 
	      }
	      else if (detach_ind->cause == FORBIDDEN_PLMN && rac_ptr_g->search_type == MMI_SEARCH_NORMAL)
	      {
	         /* 2. Enter Limited service */
	         rac_send_sat_location_info_ind(); 
	      }
	      else
	      {
	            /* Roaming broker request sending Location Info only when all PLMN has tried and rejected */
	            /* I.e. when receiving cause = FORBIDDEN_PLMN */
	      }
	   }
	}
	else // roaming broker is not support
	{

	    if (detach_ind->detach_type == CS_DOMAIN || detach_ind->detach_type == CS_PS_DOMAIN)
	    {
	        if (rac_current_equal_last_sat_location_info_ind() == KAL_FALSE)
	        {

	            if (rac_ptr_g->is_dedicated_mode == KAL_TRUE)
	            {
	               rac_ptr_g->send_sat_location_info_ind = KAL_TRUE;
	            }
	            else
	            {
	         /* mtk01778 2007/09/20 : { */
	         /* mtk00714: For LIMITED_SERVICE, if MM didn't do LU or RAU (for example : cause = FORBIDDEN_PLMN)
	               RAC should not send event download to SIM, 
	               otherwise Roaming Broker will not function correctly [MAUI_00537597] */

	               /* if Location info changes, (no equal to last)
	               and it's change during MM Idle mode, (didn't enter dedicated mode)
	               then 2 scenario needs to send to SAT
	               1. NO_SERVICE : (27.22.7.4.1) NORMAL_SERVICE to NO_SERVICE must be sent
	               2. combined procedure (combined attach or combined RAU, rejected by network.
	               So here we check reject cause defined in spec 24.008 Sec 4.7.5.2.4 which affects both CS and PS
	               (other causes: some doesn't affect CS, some are treat as abnormal. 
	               If abnormal reaches 5, GMM will send ATTACH_REJ, so will be handle in attach_rej_msg_handler )           
	               */
	          
	               if  ((rac_ptr_g->rac_mm_state == RAC_MM_NO_CELL) //27.22.7.4.1: NORMAL_SERVICE to NO_SERVICE : always notify SAT
	                     || (rac_ptr_g->rac_mm_state == RAC_MM_NO_CELL_DENIED)
#ifdef __ENS__
	                     || (detach_ind->cause == FORBIDDEN_PLMN)  /* mtk02475: for ENS, need update cell info when cell change in limited service*/
#endif
	          #ifdef __PS_SERVICE__
	                     || ((detach_ind->detach_type == CS_PS_DOMAIN) //combined must be CS_PS_DOMAIN
	                     && ((detach_ind->cause == ILLEGAL_MS)||(detach_ind->cause == ILLEGAL_ME)
	                     || (detach_ind->cause == GPRS_NON_GPRS_NOT_ALLOWED)||(detach_ind->cause == IMPLICIT_DETACH)
	                     || (detach_ind->cause == PLMN_NOT_ALLOWED)||(detach_ind->cause == LOCATION_AREA_NOT_ALLOWED)
	                     || (detach_ind->cause == ROAMING_AREA_NOT_ALLOWED)||(detach_ind->cause == NO_SUITABLE_CELLS_IN_LA)))
	         #endif
	               )
	               {
	                  rac_send_sat_location_info_ind(); 
	               }
	               else
	               {
	                  rac_ptr_g->send_sat_location_info_ind = KAL_FALSE; //LIMITED_SERVICE (all other gsm_status except L4C_RAC_OK means LIMITED_SERVICE)
	               }
	         /* } mtk01778 2007/09/20 */    
	            }
	        }
	        else
	        {
	               rac_ptr_g->send_sat_location_info_ind = KAL_FALSE;
	        }
	    }
	}	    

#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif /* __SAT__ */

    /* Johnny: update only */
    rac_send_reg_ind(detach_ind->detach_type, RAC_ALWAYS_NOT_SEND, nw_reg_cause);  


#ifdef __NW_REG_CAUSE_REPORT__
    if (detach_ind->cause <= PROTO_ERROR_UNSPECIFIED
        && detach_ind->cause != CAUSE_NONE)
    {
       l4crac_reg_cause_ind_struct *reg_cause_ind;
       reg_cause_ind = (l4crac_reg_cause_ind_struct *) 
           construct_local_para(sizeof(l4crac_reg_cause_ind_struct), TD_RESET);

       reg_cause_ind->domain = detach_ind->detach_type;         
       reg_cause_ind->cause = detach_ind->cause;
       rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_REG_CAUSE_IND,(local_para_struct*)reg_cause_ind);
    }
#endif
    
} /* end of rac_mm_detach_ind_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_mm_plmn_list_cnf_msg_handler
* DESCRIPTION
*   rac_mm_plmn_list_cnf_msg_handler handles MSG_ID_GMMREG_PLMN_LIST_IND ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_plmn_list_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_plmn_list_cnf_struct *list_ind =
               (gmmreg_plmn_list_cnf_struct *) local_para_ptr;
    /*  mtk03643:  avoid race condition 
                RAC timeout list stop in the same time RAC receive list cnf, RAC should send list cnf
                */
    if (rac_ptr_g->current_action == RAC_PLMN_LIST || rac_ptr_g->current_action == RAC_PLMN_LIST_STOP_TIMEOUT)
    {
        if (list_ind->status == PROC_SUCCESSFUL)
        {
            rac_set_action(RAC_IDLE);
    /* mtk01778, 2007/07/31: Vary the function interface to pass parameter pointer instead of parameter value. 
       This is due to passing parameter value will increase the RAC stack size. For example, 
       if we receive GMMREG_PLMN_LIST_STOP_CNF triggering by timeout, we need to pass a fake plmn list 
       (temp_plmn_list) to this function. That will enlarge RAC stack size with more than 224 bytes (32*7). { */
       rac_send_plmn_list_cnf(&(list_ind->plmn_list), L4C_RAC_OK, CAUSE_NONE, list_ind->num_of_hplmn);
    /* } mtk01778, 2007/07/31 */

        }
        else if (list_ind->status == PROC_FAILED)
        {
            rac_set_action(RAC_IDLE);
    
    /* mtk01778, 2007/07/31: Vary the function interface to pass parameter pointer instead of parameter value. 
       This is due to passing parameter value will increase the RAC stack size. For example, 
       if we receive GMMREG_PLMN_LIST_STOP_CNF triggering by timeout, we need to pass a fake plmn list 
       (temp_plmn_list) to this function. That will enlarge RAC stack size with more than 224 bytes (32*7). { */
            rac_send_plmn_list_cnf(&(list_ind->plmn_list), L4C_RAC_ERROR, list_ind->cause, list_ind->num_of_hplmn);      
    /* } mtk01778, 2007/07/31 */ 
   
            
        }
        else if (list_ind->status == PROC_REJECTED) //retry!!!
        {
            if (rac_ptr_g->retry_count < RAC_MAX_PLMN_LIST_RETRY_COUNT && rac_ptr_g->current_action != RAC_PLMN_LIST_STOP_TIMEOUT )
            {
                rac_start_retry_timer_hdlr(RAC_RETRY_PLMN_LIST_TIMER_ID);
            }
            else
            {
                rac_set_action(RAC_IDLE);
    /* mtk01778, 2007/07/31: Vary the function interface to pass parameter pointer instead of parameter value. 
       This is due to passing parameter value will increase the RAC stack size. For example, 
       if we receive GMMREG_PLMN_LIST_STOP_CNF triggering by timeout, we need to pass a fake plmn list 
       (temp_plmn_list) to this function. That will enlarge RAC stack size with more than 224 bytes (32*7). { */
                rac_send_plmn_list_cnf(&(list_ind->plmn_list), L4C_RAC_ERROR, list_ind->cause, list_ind->num_of_hplmn);      
    /* } mtk01778, 2007/07/31 */                    
   

                /* Ripple: GMMREG_STATUS_IND should carry the reject action, 
                 * and RAC should just reset one action in this function. */
            }
        }
    }
    else if( rac_ptr_g->current_action == RAC_PLMN_LIST_STOP ) 
    {
        /*  mtk03643:  avoid race condition 
            user send list stop in the same time RAC receive list cnf, RAC should send list stop cnf
            */
        rac_set_action(RAC_IDLE);
        rac_send_plmn_list_stop_cnf();
    }
    else
    {
        /* John Tang 2004/02/12: To fix the bug that if perform manual PLMN list first, 
       then initiate GPRS Detach by at+cgatt=0. rac_ptr_g->current_action will be set to
       RAC_DEREGISTRATION. Then when GMMREG_PLMN_LIST_IND is received, original 
       bug will make RAC ignore this primitive so that MMI keeps displaying "searching"
       forever..... */

        RAC_ERROR_LOG(UNEXPECTED_MESSAGE,rac_ptr_g->current_action);
    }
} /* end of rac_mm_status_ind_msg_handler */

void rac_mm_plmn_search_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_plmn_search_cnf_struct*msg_ptr = 
            (gmmreg_plmn_search_cnf_struct*) local_para_ptr;

    /* MAUI_01650679, Only forward the standard network reject causes
     * For the other causes, it will be set to CAUSE_NONE while sending 
     * reg_ind/reg_cnf/plmn_search_cnf. And MMI will then think this is a don't care value
     */
    mm_cause_enum nw_reg_cause = CAUSE_NONE;
    
    if (msg_ptr->cause <= PROTO_ERROR_UNSPECIFIED)
    {
        nw_reg_cause = msg_ptr->cause;
    }
    else if(rac_ptr_g->last_l4crac_reg_state_ind.cause != CAUSE_NONE)
    {
        /* For the case of reject cause #11,#13,or #15 */
        nw_reg_cause = rac_ptr_g->last_l4crac_reg_state_ind.cause;
        rac_ptr_g->last_l4crac_reg_state_ind.cause = CAUSE_NONE;
    }

    if (rac_ptr_g->current_action == RAC_SELECT_PLMN)
    {
        if (msg_ptr->status == PROC_SUCCESSFUL || msg_ptr->status == PROC_FAILED)
        {
            if (rac_ptr_g->rac_mm_state == RAC_MM_SEARCHING)
            {
                /*MAUI_02319532,when RAC is in searching state and receiving PLMN_SEARCH_REQ,
                * and after MM responses for it directly, RAC should check whether previous state for mm is RAC_MM_NULL.
                * Or RAC will restore state for mm to RAC_MM_NULL. Then RAC may stay in RAC_MM_NULL and MMI shows "no service".
                */ 		
                if((msg_ptr->status == PROC_FAILED)&&(rac_ptr_g->previous_rac_mm_state == RAC_MM_NULL))
                {
                    ;
                }
                else
                {
                    rac_ptr_g->rac_mm_state = rac_ptr_g->previous_rac_mm_state; //PROC_FAILED => RAC_MM_LIMITED_DENIED?
                }
            }

            /* Johnny: plmn_search_cnf with PROC_SUCCESSFUL is only for rac_mm_state,
                       rac_gmm_state should wait for attach_cnf/detach_ind with PS.
                       so:
                       rac_mm_state = previous_rac_mm_state in rac_mm_plmn_search_cnf_msg_handler()
                       rac_gmm_state = previous_rac_gmm_state in in rac_mm_attach_cnf_msg_handler()
                       and rac_mm_detach_ind_msg_handler() */
            if (msg_ptr->status == PROC_FAILED && rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
            {
                rac_ptr_g->rac_gmm_state = rac_ptr_g->previous_rac_gmm_state;
            }
         
            rac_send_plmn_search_cnf(rac_get_gsm_status(), nw_reg_cause);
            rac_set_action(RAC_IDLE);
            rac_send_reg_ind(CS_PS_DOMAIN, RAC_ALWAYS_NOT_SEND, nw_reg_cause);   //DUMA00159596: mtk02475: update latest status sent to MMI/AT
        }
        else if (msg_ptr->status==PROC_REJECTED) //retry!!!
        {
         /* mtk01778, 2007/08/21:  modify rac_mm_state, rac_gmm_state before sending 
            L4CRAC_PLMN_SEARCH_CNF { */
          
            /* Ripple: GMMREG_STATUS_IND should carry the reject action, 
            * and RAC should just reset one action in this function. */
            
            /*MAUI_02319532,when RAC is in searching state and receiving PLMN_SEARCH_REQ,
            * and after MM responses for it directly, RAC should check whether previous state for mm is RAC_MM_NULL.
            * Or RAC will restore state for mm to RAC_MM_NULL. Then RAC may stay in RAC_MM_NULL and MMI shows "no service".
            */ 
            if((rac_ptr_g->rac_mm_state == RAC_MM_SEARCHING)&&(rac_ptr_g->previous_rac_mm_state != RAC_MM_NULL))
            {
                rac_ptr_g->rac_mm_state = rac_ptr_g->previous_rac_mm_state;
            }            
                
            /* Johnny: plmn_search_cnf with PROC_SUCCESSFUL is only for rac_mm_state,
                       rac_gmm_state should wait for attach_cnf/detach_ind with PS.
                       so:
                       rac_mm_state = previous_rac_mm_state in rac_mm_plmn_search_cnf_msg_handler()
                       rac_gmm_state = previous_rac_gmm_state in in rac_mm_attach_cnf_msg_handler()
                       and rac_mm_detach_ind_msg_handler() */
            if (msg_ptr->status == PROC_REJECTED && rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
            {
                rac_ptr_g->rac_gmm_state = rac_ptr_g->previous_rac_gmm_state;
            }                
            /* ~ Ripple */          
            
         /* } mtk01778, 2007/08/21 */    
              
            if (rac_ptr_g->retry_count < RAC_MAX_PLMN_SEARCH_RETRY_COUNT)
            {
                rac_start_retry_timer_hdlr(RAC_RETRY_PLMN_SEARCH_TIMER_ID);
                /* Johnny:
                during retry PLMN search timer running,
                rac_mm_state will go back to previous_rac_mm_state temporarily,
                rac_mm_state = RAC_MM_SEARCHING again when retry PLMN search timer timeout.
                
                during retry PLMN search timer running:
                current_action == RAC_SELECT_PLMN but rac_mm_state != RAC_MM_SEARCHING,
                so current_action == RAC_SELECT_PLMN does not mean rac_mm_state == RAC_MM_SEARCHING */
            }
            else
            {
                rac_send_plmn_search_cnf(L4C_RAC_ERROR, nw_reg_cause);
                rac_set_action(RAC_IDLE);
                /*MAUI_02323245, after set rat mode, RAC sends attach_req. If RAC sends plmn_search_req and 
                receives plmn_search_cnf with rejected, RAC will start retry timer. 
                If RAC receives attach_cnf during PLMN Search, RAC will not send reg_ind immediately and 
                also will not send reg_ind to tell upper layer "normal service" after retry count exceeds although MM already is normal service.
                So we should change "RAC_ALWAYS_NOT_SEND" to "RAC_NORMAL_SEND" at the below fuction's second paramter.
                */
                rac_send_reg_ind(CS_PS_DOMAIN, RAC_NORMAL_SEND, nw_reg_cause);   //DUMA00159596: mtk02475: update latest status sent to MMI/AT
            }
                    
        }
    }
    else
    {
        RAC_ERROR_LOG(UNEXPECTED_MESSAGE,rac_ptr_g->current_action);
    }
}

/*****************************************************************************
* FUNCTION
*  rac_mm_set_roaming_mode_cnf_handler
* DESCRIPTION
*   rac_mm_set_roaming_mode_cnf_handler handles MSG_ID_GMMREG_SET_ROAMING_MODE_CNF ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_set_roaming_mode_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_set_roaming_mode_cnf_struct *l4crac_msg_ptr =
                                       (l4crac_set_roaming_mode_cnf_struct *) 
                                       construct_local_para(sizeof(l4crac_set_roaming_mode_cnf_struct),TD_CTRL);

    l4crac_msg_ptr->src_id = rac_ptr_global->src_id;
    l4crac_msg_ptr->result = KAL_TRUE;
    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SET_ROAMING_MODE_CNF,
                           (local_para_struct*) l4crac_msg_ptr);
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
#endif


void rac_mm_set_rat_mode_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_set_rat_mode_cnf_struct *gmmreg_msg_ptr = 
         (gmmreg_set_rat_mode_cnf_struct*) local_para_ptr;
   
    //check is set_rat_mode
    if (gmmreg_msg_ptr->status == PROC_SUCCESSFUL)
    {
        rac_send_set_rat_mode_cnf(KAL_TRUE, gmmreg_msg_ptr->cause);
        rac_ptr_g->rat_mode = rac_ptr_g->request_rat_mode;
    }
    else if (gmmreg_msg_ptr->status == PROC_FAILED) //never happens
    {
        rac_send_set_rat_mode_cnf(KAL_FALSE, gmmreg_msg_ptr->cause);
    }
   
    #ifdef __UMTS_TDD128_MODE__
    if((rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT)
    {
        ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_LEAVE_HSUPA_CELL, MOD_RAC);
    }
    #endif
     
    rac_reset_cell_info_rat();   //mtk02475: reset cell info before registration
#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
    kal_mem_set(&(rac_ptr_g->last_sat_location_info_ind), 0, sizeof (sat_location_info_ind_struct));
    rac_ptr_g->last_sat_location_info_ind.mm_status = 0xFF;        // shouldn't be init as 0 (=SAT_MM_NO_SERVICE) , otherwise power on NO_SERVICE won't sent to SIM */
    rac_ptr_g->last_sat_location_info_ind.location_info[7] = 0xFF; // extended cell id should default set as 0xFFFF
    rac_ptr_g->last_sat_location_info_ind.location_info[8] = 0xFF;
#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif /* __SAT__ */        
    rac_set_action(RAC_IDLE);
}

void rac_mm_plmn_list_stop_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (rac_ptr_g->current_action == RAC_PLMN_LIST_STOP)
    {
        rac_send_plmn_list_stop_cnf();
        rac_set_action(RAC_IDLE);
    }
    else if (rac_ptr_g->current_action == RAC_PLMN_LIST_STOP_TIMEOUT)
    {
        /* Johnny:
           1. if (rac_ptr_g->current_action == RAC_PLMN_LIST_STOP), RAC send MSG_ID_L4CRAC_PLMN_LIST_STOP_CNF to L4C
           2. if (rac_ptr_g->current_action == RAC_PLMN_LIST_STOP_TIMEOUT), it means that RAC stop PLMN list by itself, 
              RAC send MSG_ID_L4CRAC_PLMN_LIST_CNF to L4C (ex. rac_plmn_list_guard_timer_timeout_hdlr())
        */
            
       /* mtk01778, 2007/08/06:  pass NULL directly to rac_send_plmn_list_cnf { */
       rac_send_plmn_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE, 0); //0 for no cause
       /* } mtk01778, 2007/08/06 */   
        
      
      rac_set_action(RAC_IDLE);         
    }
}

/*****************************************************************************
* FUNCTION
*  rac_mm_nw_info_ind_msg_handler(
* DESCRIPTION
*   rac_mm_nw_info_ind_msg_handler( handles MSG_ID_GMMREG_NW_INFO_IND ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_nw_info_ind_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_nw_info_struct * nw_info = 
                     (gmmreg_nw_info_struct *) local_para_ptr;

    if(nw_info->nw_time_zoneP)
    {
        rac_ptr_g->nw_time_zone = nw_info->nw_time_zone;
        rac_ptr_g->nw_time_zone_valid = KAL_TRUE;      
    }

    /* Ripple: For MMI's request, send all info to MMI. 2004.05.06 */
   
    hold_local_para(local_para_ptr);

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_NW_INFO_IND,
                   local_para_ptr);

    return;
} /* end of rac_mm_nw_info_ind_msg_handler */

/*****************************************************************************
* FUNCTION
*  rac_mm_cipher_ind_msg_handler
* DESCRIPTION
*   This handler is to indicate L4C the cipher indication.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
/* Ripple add for cipher indicator, 2005/02/16 */
void rac_mm_cipher_ind_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    hold_local_para(local_para_ptr);

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_CIPHER_IND,
                   local_para_ptr);
    return;
}
/* ~ Ripple */

/* CH_Liang 2005/05/31: Notify L4C if entering dedicated / pkt transfer mode */
//#ifdef __HOMEZONE_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_mm_dedicated_mode_ind_msg_handler
* DESCRIPTION
*   This handler is to indicate L4C if entering dedicated mode.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_dedicated_mode_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_dedicated_mode_ind_struct * dedicated_mode_ind_ptr = 
                     (gmmreg_dedicated_mode_ind_struct *) local_para_ptr;   

    /* Johnny: in 101.267 11.4.1:
    when the ME enters the MM-IDLE state with the result that either the Location status or
    Location information has been changed or updated, the ME shall inform the SIM that this has occurred.
    
    So RAC will send MSG_ID_SAT_LOCATION_INFO_IND to SIM when:
    
    1. not in MM_IDLE:
    a. enter MM_IDLE (check rac_ptr_g->send_sat_location_info_ind)
    
    2. in MM_IDLE:
    a. in rac_mm_attach_cnf_msg_handler()/rac_mm_detach_ind_msg_handler(),
       rac_current_equal_last_sat_location_info_ind() == KAL_FALSE
    b. in rac_mm_cell_info_update_ind_msg_handler(),
       change location_info in normal service
    RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM when location_info changes in limited service.
    
    ps. if latest_location_status == NO_SERVICE && current_location_status == NO_SERVICE,
        altought location_info changes, RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM task
        (SIM task also does not send location_info to SIM card if SIM location_status == NO_SERVICE)
    */

#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
    if (rac_ptr_g->is_dedicated_mode == KAL_TRUE && dedicated_mode_ind_ptr->is_dedicated_mode == KAL_FALSE)
    {
        if (rac_ptr_g->send_sat_location_info_ind == KAL_TRUE)
        {
            rac_send_sat_location_info_ind();
            rac_ptr_g->send_sat_location_info_ind = KAL_FALSE;
        }
    }
#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif

    rac_ptr_g->is_dedicated_mode = dedicated_mode_ind_ptr->is_dedicated_mode;

    
#ifdef __HOMEZONE_SUPPORT__   
    hold_local_para(local_para_ptr);

    rac_send_ilm(MOD_L4C, RAC_L4C_SAP, MSG_ID_L4CRAC_HZ_DEDICATED_MODE_IND,
                   local_para_ptr);
#endif                   
    return;
}

#ifdef __HOMEZONE_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_mm_pkt_transfer_mode_ind_msg_handler
* DESCRIPTION
*   This handler is to indicate L4C if entering packet tranfer mode.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_rr_pkt_transfer_mode_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    hold_local_para(local_para_ptr);

    rac_send_ilm(MOD_L4C, RAC_L4C_SAP, MSG_ID_L4CRAC_HZ_PKT_TRANSFER_MODE_IND,
                   local_para_ptr);
    return;
}
#endif


/*****************************************************************************
* FUNCTION
*  rac_mm_cell_info_update_ind_msg_handler
* DESCRIPTION
*   rac_mm_cell_info_update_ind_msg_handler handles 
*      MSG_ID_GMMREG_CELL_INFO_UPDATE_IND ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_cell_info_update_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_cell_info_update_ind_struct *sig_ptr =
                  (gmmreg_cell_info_update_ind_struct *) local_para_ptr;


    kal_bool is_same_cell = rac_is_cell_info_equal( &rac_ptr_g->current_cell_rat.cell_info , &sig_ptr->cell_info.cell_info );
    kal_bool is_same_rat = (kal_bool)(rac_ptr_g->current_cell_rat.rat == sig_ptr->cell_info.rat);
#ifdef __CSG_SUPPORT__
    kal_bool is_same_csg = rac_is_cell_csg_info_equal( &rac_ptr_g->current_cell_rat.cell_info , &sig_ptr->cell_info.cell_info );
#endif /* __CSG_SUPPORT__ */
    cell_info_and_rat_struct stored_cell = rac_ptr_g->current_cell_rat;
    kal_bool is_on_hplmn = rac_ptr_g->is_on_hplmn;
    data_speed_support_enum cell_data_speed_support = rac_ptr_g->cell_data_speed_support;

    rac_ptr_g->current_cell_rat = sig_ptr->cell_info;
    rac_ptr_g->is_on_hplmn = sig_ptr->is_on_hplmn; //mtk02475: update on_hplmn information

	if( sig_ptr->cell_data_speed_support > (data_speed_support_enum)custom_max_data_speed_support() )
	{
		sig_ptr->cell_data_speed_support = (data_speed_support_enum)custom_max_data_speed_support();
	}

    #ifdef __UMTS_TDD128_MODE__
    if((sig_ptr->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT &&
       ((rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) != HSUPA_SUPPORT ||
       is_same_cell == KAL_FALSE))
    {
        ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_ENTER_HSUPA_CELL, MOD_RAC);
    }
    
    if((sig_ptr->cell_data_speed_support & HSUPA_SUPPORT) != HSUPA_SUPPORT &&
       (rac_ptr_g->cell_data_speed_support & HSUPA_SUPPORT) == HSUPA_SUPPORT)
    {
        ps_event_trace(TRACE_GROUP_3, EVENT_INFO_GROUP3_LEAVE_HSUPA_CELL, MOD_RAC);
    } 
    #endif

    /* GAS/CSCE may update PLMN ID, LAC, Cell ID in connected mode
     * If cell change in connected mode, update these info to MMI
     */
    /* ALPS00928694
     * MM doesn't store this cell info and will use old cell info when inter-rat.
     * Do not update RAC context if cell info update is received in 2G connected mode
     */
    if (sig_ptr->is_from_cgi_ind == KAL_TRUE)
    {
        rac_ptr_g->cell_data_speed_support = sig_ptr->cell_data_speed_support;
        if (sig_ptr->is_ra_code_valid == KAL_TRUE)
        {
            rac_send_reg_ind(CS_PS_SERVICE, RAC_NORMAL_SEND, CAUSE_NONE);
        }
        else
        {
            rac_send_reg_ind(CS_SERVICE, RAC_NORMAL_SEND, CAUSE_NONE);
        }
        rac_ptr_g->cell_data_speed_support = cell_data_speed_support;
        rac_ptr_g->current_cell_rat = stored_cell;
        rac_ptr_g->is_on_hplmn = is_on_hplmn;
        return;
    }

    /*
     * MAUI_01676922, MAUI_01785662
     * mtk02475:
     * send REG_STATE_IND to update MMI with new cell_data_speed_support setting on the same cell immediately
     */
    if (rac_ptr_g->cell_data_speed_support != sig_ptr->cell_data_speed_support
#ifdef __CSG_SUPPORT__
/* mtk02475: 
 * if CSG info is updated on the same cell (e.g. HNB name changed), 
 * UE also need to update MMI
 */
        || is_same_csg == KAL_FALSE
#endif /* __CSG_SUPPORT__ */
        ) 
    {
        /* Johnny: for edge status */
        rac_ptr_g->cell_data_speed_support = sig_ptr->cell_data_speed_support;
        if ((is_same_cell == KAL_TRUE) && (is_same_rat == KAL_TRUE)) 
        {
            rac_send_reg_ind(CS_PS_DOMAIN, RAC_ALWAYS_SEND, CAUSE_NONE);
        }
    }

    /* Johnny: in 101.267 11.4.1:
    when the ME enters the MM-IDLE state with the result that either the Location status or
    Location information has been changed or updated, the ME shall inform the SIM that this has occurred.
    
    So RAC will send MSG_ID_SAT_LOCATION_INFO_IND to SIM when:
    
    1. not in MM_IDLE:
    a. enter MM_IDLE (check rac_ptr_g->send_sat_location_info_ind)
    
    2. in MM_IDLE:
    a. in rac_mm_attach_cnf_msg_handler()/rac_mm_detach_ind_msg_handler(),
       rac_current_equal_last_sat_location_info_ind() == KAL_FALSE
    b. in rac_mm_cell_info_update_ind_msg_handler(),
       change location_info in normal service
    RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM when location_info changes in limited service.
    
    ps. if latest_location_status == NO_SERVICE && current_location_status == NO_SERVICE,
        altought location_info changes, RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM task
        (SIM task also does not send location_info to SIM card if SIM location_status == NO_SERVICE)
    */
#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
    //rac_send_sat_location_info_ind(); /* CH_Liang 2005/05/31 */
    if ((is_same_cell == KAL_FALSE || is_same_rat == KAL_FALSE) &&
      (rac_ptr_g->rac_mm_state == RAC_MM_NORMAL && rac_ptr_g->is_dedicated_mode == KAL_FALSE))
    {
            rac_send_sat_location_info_ind();
    }
#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif
   
    /* CH_Liang 2005/05/31: Notify L4C of current cell information */
#ifdef __HOMEZONE_SUPPORT__
    rac_send_cell_info_update_ind();
#endif

#ifdef __UMTS_RAT__
    //send rat icon change when interat during incall.
    if ((rac_ptr_g->is_dedicated_mode == KAL_TRUE) &&
      (is_same_cell == KAL_TRUE) && (is_same_rat == KAL_FALSE))
    {
            rac_send_reg_ind(CS_PS_DOMAIN, RAC_NORMAL_SEND, CAUSE_NONE); //erica 20070524
    }
#endif

}

#ifdef __SAT__
/*****************************************************************************
* FUNCTION
*  rac_sat_imei_info_req_msg_handler
* DESCRIPTION
*   rac_sat_imei_info_req_msg_handler handles 
*      MSG_ID_SAT_IMEI_INFO_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_sat_imei_info_req_msg_handler(ilm_struct *ilm_ptr)
{
   kal_uint8 imei_buf[10];
   local_para_struct *local_para_ptr = construct_local_para(sizeof(sat_imei_info_cnf_struct),TD_CTRL );
   sat_imei_info_req_struct *imei_info_req = (sat_imei_info_req_struct *)ilm_ptr->local_para_ptr;
   sat_imei_info_cnf_struct *imei_info_cnf = (sat_imei_info_cnf_struct *)local_para_ptr;
   imei_info_cnf->is_imei_sv = imei_info_req->is_imei_sv;
   
   if( imei_info_req->is_imei_sv == KAL_TRUE )
   {
        rac_make_imeisvn(imei_buf);
   }
   else
   {
        rac_make_imei(imei_buf);
   }

   /* length is excluded */
   kal_mem_cpy(imei_info_cnf->imei, imei_buf + 1, 9);
   rac_send_ilm(MOD_SIM, PS_SIM_SAP,MSG_ID_SAT_IMEI_INFO_CNF,
                local_para_ptr);
   
}

/*****************************************************************************
* FUNCTION
*  rac_sat_time_zone_req_msg_handler
* DESCRIPTION
*   rac_sat_time_zone_req_msg_handler handles 
*      MSG_ID_SAT_TIME_ZONE_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_sat_time_zone_req_msg_handler(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   local_para_struct *local_para_ptr;
   sat_time_zone_cnf_struct *tz_cnf;

   local_para_ptr = 
         construct_local_para(sizeof(sat_time_zone_cnf_struct),TD_CTRL );

   tz_cnf = (sat_time_zone_cnf_struct *) local_para_ptr;
   
   if(rac_ptr_g->nw_time_zone_valid)
   {
      tz_cnf->time_zone = rac_ptr_g->nw_time_zone;
   }
   else
   {
      tz_cnf->time_zone = INVALID_TIME_ZONE;    
   }

   rac_send_ilm(MOD_SIM, PS_SIM_SAP,MSG_ID_SAT_TIME_ZONE_CNF,
                local_para_ptr );
}
#endif /* #ifdef __SAT__ */

/*****************************************************************************
* FUNCTION
*  rac_l4c_ps_reg_req_msg_handler
* DESCRIPTION
*   rac_l4c_reg_req_msg_handler handles L4C_RAC_PS_REG_REQ ilm.
*   It is issued for GPRS attach.
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#ifdef __PS_SERVICE__
void rac_l4c_ps_reg_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
   //kal_uint8 orginal_src_id = rac_ptr_g->src_id;
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   l4crac_ps_reg_req_struct *reg_req = 
                        (l4crac_ps_reg_req_struct *) local_para_ptr;
   
   /* gprs attach implies that class B/CG is required */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

   if(is_rac_activating()) 
      return;   

   rac_ptr_g->src_id = reg_req->src_id;
      
   /* reject */
   if(rac_ptr_g->mobile_class == MS_CLASS_CC)
   {
      rac_send_ps_reg_cnf(GPRS_NO_COVERAGE);
      return;
   }

   if (is_rac_gmm_state_null_dereg())
   {
        rac_ptr_g->rac_gmm_state = RAC_GMM_SEARCHING;
        rac_set_action(RAC_GPRS_ATTACH);
         
        rac_send_attach_req(PS_DOMAIN);
    }
    else if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
    {
        /* let LR keep ongoging */
        /* John Tang 2004/03/02: For GPRS limited service caused by "LA not allowed",
        "No suitable cell in this LA", we need to return ERROR for AT command. */
#if 0
/* under construction !*/
#else
        if (RMMI_SRC <= rac_ptr_g->src_id)
#endif
        {
           if ( (LOCATION_AREA_NOT_ALLOWED == rac_ptr_g->gmm_cause) 
               || (NO_SUITABLE_CELLS_IN_LA == rac_ptr_g->gmm_cause)
               || (PLMN_NOT_ALLOWED == rac_ptr_g->gmm_cause) )
           {
            rac_send_ps_reg_cnf(GPRS_LIMITED_SERVICE);

                kal_brief_trace(TRACE_INFO,
                   RAC_NOT_SEND_ATTACH_REQ_WHEN_RECV_PS_REG_REQ, 
                rac_get_gprs_state(), 
                rac_get_gprs_status());      
                kal_brief_trace(TRACE_INFO,
                   RAC_GET_STATE_STATUS_INFO, 
                rac_get_gsm_state(), 
                rac_get_gsm_status(),
                rac_get_gprs_state(), 
                rac_get_gprs_status());  
              return; 
           }

            /* John Tang 2004/04/06: Fix the bug that AT gets no response when at+cgatt=1 
           issues during power-on (with GPRS connection type "Always ON". */
           if ( (RAC_GPRS_ATTACH == rac_ptr_g->current_action) 
               && (KAL_TRUE == rac_ptr_g->auto_attach) )
           {   
               /* Just return GPRS_REGISTERING since GMM still trying attach. */
                 rac_send_ps_reg_cnf(GPRS_REGISTERING);

                kal_brief_trace(TRACE_INFO,
                   RAC_NOT_SEND_ATTACH_REQ_WHEN_RECV_PS_REG_REQ, 
                rac_get_gprs_state(), 
                rac_get_gprs_status());      
                kal_brief_trace(TRACE_INFO,
                   RAC_GET_STATE_STATUS_INFO, 
                rac_get_gsm_state(), 
                rac_get_gsm_status(),
                rac_get_gprs_state(), 
                rac_get_gprs_status());  
              return;                  
            }
           /* mtk03643: 2012/09/06 [MBIM] l4c return ok for at+cfun=1 right after receive set rat mode cnf,
                 so no need keep registration action here. MBIM test expect the attach action can be successful, 
                 therefore change action here to allow this command ok. */           
            else if(rac_ptr_g->service_to_be_reged == PS_DOMAIN || rac_ptr_g->service_to_be_reged == CS_PS_DOMAIN)
            {
                rac_set_action(RAC_GPRS_ATTACH);
                
                kal_brief_trace(TRACE_INFO,
                   RAC_NOT_SEND_ATTACH_REQ_WHEN_RECV_PS_REG_REQ, 
                rac_get_gprs_state(), 
                rac_get_gprs_status());      
                kal_brief_trace(TRACE_INFO,
                   RAC_GET_STATE_STATUS_INFO, 
                rac_get_gsm_state(), 
                rac_get_gsm_status(),
                rac_get_gprs_state(), 
                rac_get_gprs_status());  
                return;
            }
        }
         
        /* Johnny: except above 2 scenario, RAC will send attach_req with PS_DOMAIN to MM
                   even if rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING */         
        rac_set_action(RAC_GPRS_ATTACH);
         
        rac_send_attach_req(PS_DOMAIN);
   }
   else if (is_rac_gmm_state_reg())
   {
        if (rac_ptr_g->rac_gmm_state == RAC_GMM_REG_NORMAL)
            rac_send_ps_reg_cnf(GPRS_ATTACHED);
        else if (rac_ptr_g->rac_gmm_state == RAC_GMM_REG_LIMITED)
            rac_send_ps_reg_cnf(GPRS_LIMITED_SERVICE); //for MMI design issue
        else if(rac_ptr_g->rac_gmm_state == RAC_GMM_REG_NO_CELL)
            rac_send_ps_reg_cnf(GPRS_NO_COVERAGE); //for MMI design issue
   }
   else
   {
        kal_brief_trace(TRACE_INFO,
                   RAC_NOT_SEND_ATTACH_REQ_WHEN_RECV_PS_REG_REQ, 
               rac_get_gprs_state(), 
               rac_get_gprs_status());
   }
}
#endif /*#ifdef __PS_SERVICE__*/


/*****************************************************************************
* FUNCTION
*  rac_mm_nw_ecc_ind_msg_handler
* DESCRIPTION
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#ifdef __REL5__
void rac_mm_nw_ecc_ind_msg_handler( ilm_struct *ilm_ptr )
{

   hold_local_para(ilm_ptr->local_para_ptr);
   
   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_NW_ECC_IND, ilm_ptr->local_para_ptr);   
   
}
#endif /*__REL5__ */

/*****************************************************************************
* FUNCTION
*  rac_l4c_mm_ps_service_info_ind_msg_handler
* DESCRIPTION
*   rac_l4c_reg_req_msg_handler handles L4C_RAC_PS_REG_REQ ilm.
*   It is issued for GPRS attach.
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#ifdef __PS_SERVICE__
void rac_mm_ps_service_info_ind_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
/* mtk00714 20070516 mark as #if 0, (MAUI_233363)
    currently MMI doesn't look GPRS_CELL_FOUND and GPRS_REGISTERING,
    and current implementation this two status use same field of gprs_status, 
    which might be overwrite the real gprs_status (eg. GPRS_ATTACHED).
    So we decide not to send these two status.

    If these two state is needed to MMI in the future,
    (probably need to show a icon when gprs cell is found or gprs is registering)
    We will create a new interface for these 2 special status.
    independent with gprs_status.
*/

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
#ifdef __PS_SERVICE__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* __PS_SERVICE__ */
/* under construction !*/
#endif /* #ifdef __PS_SERVICE__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
}
#endif /*#ifdef __PS_SERVICE__*/

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
/*****************************************************************************
* FUNCTION
*  rac_l4c_end_ps_data_session_req_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_end_ps_data_session_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_end_ps_data_session_req_struct *l4crac_end_data_req = (l4crac_end_ps_data_session_req_struct *)local_para_ptr;
    gmmreg_end_ps_data_session_req_struct *gmmreg_end_data_req = (gmmreg_end_ps_data_session_req_struct *) 
           construct_local_para(sizeof(gmmreg_end_ps_data_session_req_struct), TD_RESET);
    
    gmmreg_end_data_req->force_send_SCRI = l4crac_end_data_req->force_send_SCRI;
    rac_ptr_global->end_data_src_id = l4crac_end_data_req->src_id;
    
    rac_send_ilm(MOD_MM, GMMREG_SAP, MSG_ID_GMMREG_END_PS_DATA_SESSION_REQ, (local_para_struct *)gmmreg_end_data_req);
}

/*****************************************************************************
* FUNCTION
*  rac_mm_end_ps_data_session_cnf_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_end_ps_data_session_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
   gmmreg_end_ps_data_session_cnf_struct *end_data_cnf = (gmmreg_end_ps_data_session_cnf_struct *)local_para_ptr;  

   l4crac_end_ps_data_session_cnf_struct *send_cnf = (l4crac_end_ps_data_session_cnf_struct *) 
           construct_local_para(sizeof(l4crac_end_ps_data_session_cnf_struct), TD_RESET);

   send_cnf->src_id = rac_ptr_global->end_data_src_id;
   send_cnf->result = end_data_cnf->result;
   
   rac_send_ilm(MOD_L4C, RAC_L4C_SAP, MSG_ID_L4CRAC_END_PS_DATA_SESSION_CNF, (local_para_struct *)send_cnf);   
}

/*****************************************************************************
* FUNCTION
*  rac_mm_end_ps_data_session_ind_handler(
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_end_ps_data_session_ind_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
  
    hold_local_para(local_para_ptr);

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_END_PS_DATA_SESSION_IND,
                   local_para_ptr);

    return;
} /* end of rac_mm_end_ps_data_session_ind_handler */

#endif /*defined (__NO_PSDATA_SEND_SCRI__) || defined (__FAST_DORMANCY__) */

#ifdef __2STAGE_NW_SELECTION__
/*****************************************************************************
* FUNCTION
*  rac_mm_susp_resu_update_cnf_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_susp_resu_update_cnf_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_susp_resu_update_cnf_struct *recv_ind =
                  (gmmreg_susp_resu_update_cnf_struct *) local_para_ptr;

    l4crac_susp_resu_update_cnf_struct *send_ind
         = (l4crac_susp_resu_update_cnf_struct *) 
           construct_local_para(sizeof(l4crac_susp_resu_update_cnf_struct), TD_RESET);
   
    send_ind->result = recv_ind->result;
    send_ind->src_id = rac_ptr_g->sus_src_id;
    
    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SUSP_RESU_UPDATE_CNF,
                   (local_para_struct*)send_ind);

    return;
} 

/*****************************************************************************
* FUNCTION
*  rac_mm_suspend_status_ind_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_suspend_status_ind_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    gmmreg_suspend_status_ind_struct *recv_ind =
                  (gmmreg_suspend_status_ind_struct *) local_para_ptr;

    l4crac_suspend_status_ind_struct *send_ind
         = (l4crac_suspend_status_ind_struct *) 
           construct_local_para(sizeof(l4crac_suspend_status_ind_struct), TD_RESET);
   
    send_ind->susp_id = recv_ind->susp_id;
    
    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SUSPEND_STATUS_IND,
                   (local_para_struct*)send_ind);

    return;
} 
#endif

#ifdef __REPORT_AVAILABLE_PLMN__
/*****************************************************************************
* FUNCTION
*  rac_mm_plmn_list_ind_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_plmn_list_ind_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    gmmreg_plmn_list_ind_struct *recv_ind =
                  (gmmreg_plmn_list_ind_struct *) local_para_ptr;

    l4crac_plmn_list_ind_struct *send_ind
         = (l4crac_plmn_list_ind_struct *) 
           construct_local_para(sizeof(l4crac_plmn_list_ind_struct), TD_RESET);
    
    kal_mem_cpy(&(send_ind->plmn_list), &(recv_ind->plmn_list), sizeof (rac_plmn_list_struct));     

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PLMN_LIST_IND,
                   (local_para_struct*)send_ind);

    return;
} 
#endif

#ifdef __GEMINI__
/*****************************************************************************
* FUNCTION
*  rac_mm_search_normal_finish_ind_handler
* DESCRIPTION
*   pass to L4C
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_search_normal_finish_ind_handler(ilm_struct *ilm_ptr)
{   
   rac_send_ilm(MOD_L4C, RAC_L4C_SAP, 
                           MSG_ID_L4CRAC_SEARCH_NORMAL_FINISH_IND, NULL);
   
}

void rac_mm_rr_service_status_ind_handler(ilm_struct *ilm_ptr)//20080217
{   
   gmmreg_rr_service_status_ind_struct *recv_ind =
                  (gmmreg_rr_service_status_ind_struct *) ilm_ptr->local_para_ptr;

   l4crac_mmrr_service_status_ind_struct *send_ind
         = (l4crac_mmrr_service_status_ind_struct *) 
           construct_local_para(sizeof(l4crac_mmrr_service_status_ind_struct), TD_RESET);
   
   if (recv_ind->rr_service_status == RR_NOT_IN_SUSPEND_MODE)
   {
      send_ind->service_status = L4C_SERVICE_ACTIVE;
   }
   else
   {
      send_ind->service_status = L4C_SERVICE_INACTIVE_DUE_TO_RR_SUSPEND;
   }
   
   rac_send_ilm(MOD_L4C, RAC_L4C_SAP, 
                           MSG_ID_L4CRAC_MMRR_SERVICE_STATUS_IND, (local_para_struct*)send_ind);
   
}

void rac_l4c_sim_status_update_req_handler(ilm_struct *ilm_ptr) 
{   
   l4crac_sim_status_update_req_struct *recv_req =
                  (l4crac_sim_status_update_req_struct *) ilm_ptr->local_para_ptr;

   gmmreg_sim_status_update_req_struct * send_req
         = (gmmreg_sim_status_update_req_struct *) 
           construct_local_para(sizeof(gmmreg_sim_status_update_req_struct), TD_RESET);

   /* update RAC context */
   rac_ptr_global->dual_sim_config_status = recv_req->sim_config_status;

   /* send to MM */   
   send_req->sim_config_status = recv_req->sim_config_status;
   send_req->sim_insert_status = recv_req->sim_insert_status; 
   rac_send_ilm(MOD_MM, RAC_L4C_SAP, 
                           MSG_ID_GMMREG_SIM_STATUS_UPDATE_REQ, (local_para_struct*) send_req);
   
}

#endif

#ifdef __UE_EFOPLMN__
/*****************************************************************************
* FUNCTION
*  rac_l4c_set_ue_oplmn_update_req_handler
* DESCRIPTION
*   rac_l4c_set_ue_oplmn_update_req_handler handles MSG_ID_L4CRAC_SET_ROAMING_MODE_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void  rac_l4c_set_ue_oplmn_update_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_ue_oplmn_update_req_struct *l4crac_msg_ptr =
                                       (l4crac_ue_oplmn_update_req_struct *) 
                                       local_para_ptr;
    rac_ptr_g->ue_oplmn_ver[0] = l4crac_msg_ptr->ue_oplmn_ver[0];
    rac_ptr_g->ue_oplmn_ver[1] = l4crac_msg_ptr->ue_oplmn_ver[1];

    if(is_rac_activating()) 
    {
      free_ctrl_buffer(l4crac_msg_ptr->oplmn_data);  
      return; 
    }

    rac_send_ue_oplmn_update(KAL_TRUE,l4crac_msg_ptr->no_oplmn_entry,l4crac_msg_ptr->oplmn_data);
}
#endif

/*****************************************************************************
* FUNCTION
*  rac_l4c_set_roaming_mode_req_handler
* DESCRIPTION
*   rac_l4c_set_roaming_mode_req_handler handles MSG_ID_L4CRAC_SET_ROAMING_MODE_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void  rac_l4c_set_roaming_mode_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_set_roaming_mode_req_struct *l4crac_msg_ptr = (l4crac_set_roaming_mode_req_struct *) local_para_ptr;
    gmmreg_set_roaming_mode_req_struct *gmmreg_msg_ptr;

    if(is_rac_activating()) 
      return; 
#ifdef __DYNAMIC_ROAMING_SUPPORT__	    
    DEBUG_ASSERT(l4crac_msg_ptr->is_supporting_roaming != rac_ptr_g->is_supporting_roaming);
#endif

    gmmreg_msg_ptr = (gmmreg_set_roaming_mode_req_struct*) construct_local_para(sizeof(gmmreg_set_roaming_mode_req_struct),TD_CTRL);
#ifdef __DYNAMIC_ROAMING_SUPPORT__	
    gmmreg_msg_ptr->is_supporting_roaming = l4crac_msg_ptr->is_supporting_roaming ;
#endif
	gmmreg_msg_ptr->disable_international_roaming_support = l4crac_msg_ptr->disable_international_roaming_support;		   
	gmmreg_msg_ptr->disable_national_roaming_support = l4crac_msg_ptr->disable_national_roaming_support;	   
	gmmreg_msg_ptr->disable_hhplmn_search_support = l4crac_msg_ptr->disable_hhplmn_search_support;

    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_ROAMING_MODE_REQ,
                           (local_para_struct *)gmmreg_msg_ptr);
	
    rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
#ifdef __DYNAMIC_ROAMING_SUPPORT__	
    rac_ptr_g->is_supporting_roaming =l4crac_msg_ptr->is_supporting_roaming;
#endif

	rac_ptr_g->disable_international_roaming_support = l4crac_msg_ptr->disable_international_roaming_support;	  
	rac_ptr_g->disable_national_roaming_support = l4crac_msg_ptr->disable_national_roaming_support;	   
	rac_ptr_g->disable_hhplmn_search_support = l4crac_msg_ptr->disable_hhplmn_search_support;

    rac_save_preference();    
}


#ifdef __DYNAMIC_SET_IMEI__
/*****************************************************************************
* FUNCTION
*  rac_l4c_set_imei_req_handler
* DESCRIPTION
*   rac_l4c_set_imei_req_handler handles MSG_ID_L4CRAC_SET_IMEI_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void  rac_l4c_set_imei_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_set_imei_req_struct *l4crac_msg_ptr = (l4crac_set_imei_req_struct*)local_para_ptr;
    gmmreg_set_imei_req_struct *gmmreg_msg_ptr;

    if(is_rac_activating())
    {
        return;
    }

    gmmreg_msg_ptr = (gmmreg_set_imei_req_struct*)construct_local_para(sizeof(gmmreg_set_imei_req_struct),TD_CTRL);
    
    kal_mem_cpy(rac_ptr_g->imei, l4crac_msg_ptr->imei, 8);
    /* unused digit should be 0xF */
    rac_ptr_g->imei[7] |= 0xF0;

    rac_make_imei(gmmreg_msg_ptr->imei);

    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_IMEI_REQ,
                           (local_para_struct *)gmmreg_msg_ptr);
}
#endif//__DYNAMIC_SET_IMEI__

#ifdef __CSG_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_l4c_csg_list_req_msg_handler
* DESCRIPTION
*   rac_l4c_csg_list_req_msg_handler handles MSG_ID_L4CRAC_CSG_LIST_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_csg_list_req_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_csg_list_req_struct *list_req =
                 (l4crac_csg_list_req_struct *) local_para_ptr;
    gmmreg_csg_list_req_struct *csg_list_req;

                 
    if(is_rac_activating()) 
      return;
                    
    rac_ptr_g->src_id = list_req->src_id;
    rac_set_action(RAC_CSG_LIST);

    if (rac_ptr_g->csg_list_req_ptr == NULL)
    {
        hold_local_para(local_para_ptr);
        rac_ptr_g->csg_list_req_ptr = local_para_ptr;
    }

    csg_list_req = (gmmreg_csg_list_req_struct *) 
               construct_local_para(sizeof(gmmreg_csg_list_req_struct),TD_CTRL);

    kal_mem_cpy(&(csg_list_req->plmn_id_rat), &(list_req->plmn_id_rat), sizeof(plmn_id_rat_struct));

    rac_send_ilm(MOD_MM,GMMREG_SAP, MSG_ID_GMMREG_CSG_LIST_REQ, (local_para_struct *)csg_list_req);

    //mtk02475: should not restart timer while retry CSG list
    if (rac_ptr_g->event_id[RAC_CSG_LIST_GUARD_TIMER_ID] == 0)	   
    {
        rac_start_csg_list_guard_timer_hdlr();
    }

}

/*****************************************************************************
* FUNCTION
*  rac_l4c_csg_list_stop_req_msg_handler
* DESCRIPTION
*   This function handles MSG_ID_L4CRAC_CSG_LIST_STOP_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_l4c_csg_list_stop_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    l4crac_csg_list_stop_req_struct * l4crac_msg_ptr
        = (l4crac_csg_list_stop_req_struct *) local_para_ptr;

    /* send abort to MM */
    if (rac_ptr_g->current_action == RAC_CSG_LIST)
    {
        rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
        if (rac_ptr_g->event_id[RAC_RETRY_CSG_LIST_TIMER_ID] != 0)
        {
            rac_send_csg_list_stop_cnf();
            rac_set_action(RAC_IDLE);
        }
        else
        {   
            rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_CSG_LIST_STOP_REQ,
                     NULL);
            rac_set_action(RAC_CSG_LIST_STOP);
        }
    }
    else if (rac_ptr_g->current_action == RAC_CSG_LIST_STOP_TIMEOUT)
    {
        rac_ptr_g->src_id = l4crac_msg_ptr->src_id;
        rac_set_action(RAC_CSG_LIST_STOP);
    }
    else
    {
        RAC_ERROR_LOG(PLMN_LIST_FLAG_ERROR, KAL_FALSE);
    }
}

/*****************************************************************************
* FUNCTION
*  rac_mm_csg_list_cnf_msg_handler
* DESCRIPTION
*   rac_mm_csg_list_cnf_msg_handler handles MSG_ID_GMMREG_CSG_LIST_CNF ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_csg_list_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_csg_list_cnf_struct *list_ind =
               (gmmreg_csg_list_cnf_struct *) local_para_ptr;

    switch(rac_ptr_g->current_action)
    {
    case RAC_CSG_LIST:
    case RAC_CSG_LIST_STOP_TIMEOUT:
        {
            if (list_ind->status == PROC_SUCCESSFUL)
            {
                rac_send_csg_list_cnf(&(list_ind->csg_list), L4C_RAC_OK, CAUSE_NONE);
                rac_set_action(RAC_IDLE);
            }
            else if (list_ind->status == PROC_FAILED)
            {
                rac_send_csg_list_cnf(&(list_ind->csg_list), L4C_RAC_ERROR, (mm_cause_enum)list_ind->cause);
                rac_set_action(RAC_IDLE);
            }
            else if (list_ind->status == PROC_REJECTED) //retry!!!
            {
                if (rac_ptr_g->retry_count < RAC_MAX_PLMN_LIST_RETRY_COUNT
                    && rac_ptr_g->current_action == RAC_CSG_LIST)
                {
                    rac_start_retry_timer_hdlr(RAC_RETRY_CSG_LIST_TIMER_ID);
                }
                else
                {
                    rac_send_csg_list_cnf(&(list_ind->csg_list), L4C_RAC_ERROR, (mm_cause_enum)list_ind->cause);
                    rac_set_action(RAC_IDLE);
                }
            }
            break;
        }
    case RAC_CSG_LIST_STOP:
        {
            //mtk02475: need to free csg_list received from MM, prevent memory leakage
            rac_free_csg_list(&(list_ind->csg_list));
            rac_send_csg_list_stop_cnf();
            rac_set_action(RAC_IDLE);
            break;
        }
    default:
        {
            //mtk02475: need to free csg_list received from MM, prevent memory leakage
            rac_free_csg_list(&(list_ind->csg_list));

            RAC_ERROR_LOG(UNEXPECTED_MESSAGE,rac_ptr_g->current_action);
        }
    }
}

/*****************************************************************************
* FUNCTION
*  rac_mm_csg_list_stop_cnf_msg_handler
* DESCRIPTION
*   rac_mm_csg_list_stop_cnf_msg_handler handles MSG_ID_GMMREG_CSG_LIST_STOP_CNF ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_mm_csg_list_stop_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    if (rac_ptr_g->current_action == RAC_CSG_LIST_STOP)
    {
        rac_send_csg_list_stop_cnf();
        rac_set_action(RAC_IDLE);
    }
    else if (rac_ptr_g->current_action == RAC_CSG_LIST_STOP_TIMEOUT)
    {
       rac_send_csg_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE);
       rac_set_action(RAC_IDLE);
    }
}
#endif /* __CSG_SUPPORT__ */

#endif /*end of __MOD_RAC__*/

