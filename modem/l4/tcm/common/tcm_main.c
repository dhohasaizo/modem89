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
 * TCM_MAIN.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes entry handler of TCM.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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


#include "tcm_main.h"
#include "l4_msgid.h"
#include "ppp_msgid.h"
#include "nvram_msgid.h"
#include "sysservice_msgid.h"
#include "sim_ps_msgid.h"
#include "em_msgid.h"
#include "tst_msgid.h"

/* kals. */
#include "kal_general_types.h"
#include "kal_public_api.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

/* structs. */
#include "tcm_context.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "tcm_at_handler.h"
#include "tcm_gprs_statistic.h"
#include "tcm_send_msg.h"

#ifdef __UGTCM__ 
#include "sm2tcm_struct.h"
#include "tcm_ugtcm_fsm.h"
#include "tcm_ugtcm_timer.h"
#endif /* __UGTCM__ */

#ifdef __MODEM_EM_MODE__
#include "em_struct.h"
#include "em_public_struct.h"
#endif /* __MODEM_EM_MODE__ */

#ifdef __REL4__
#include "tst_sap.h"
#include "l4c2tcm_func.h"
#include "tcm2l4c_struct.h"
#endif /* __REL4__ */

#ifdef __GEMINI_3G_SWITCH__
#include "global_def.h"
#endif /* __GEMINI_3G_SWITCH__ */

#ifdef __ACL_SUPPORT__
#include "tcm_acl_support.h"
#endif /* __ACL_SUPPORT__ */

/* 3G switchable. */
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
#include "l4c_context.h"
extern l4c_context_struct l4c_cntxt_g[];
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */ 

#ifdef __MEDIATEK_SMART_QOS__
extern nvram_ef_msq_list_struct tcm_msq_context ;
#endif /* __MEDIATEK_SMART_QOS__ */

#ifdef __GEMINI__
extern tcm_context_struct tcm_context[];
void tcm_context_selection(kal_uint8 sim_interface)
{
     tcm_ptr_g = &(tcm_context[sim_interface]);
}
#endif

#if (defined(__TCM_NEW_ARCH_DEBUG__) && !defined(__MTK_TARGET__))
void tcm_ut_check_context_content_correctness(void)
{
    kal_uint8 indx = 0;
    for (indx = 0; indx < TCM_TOT_CONTEXT; indx++)
    {
        ASSERT( TCM_CONTEXT_MAIN_STATE_END > tcm_ptr_g->sib_tab[indx].main_state );
        ASSERT( TCM_PDP_ACT_REQ_EXTRA_PARAMETER_ENUM_LIMIT > tcm_ptr_g->sib_tab[indx].additional_para_type);

        if(tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_INACTIVE_STATE)
        {
            //ASSERT(tcm_ptr_g->sib_tab[indx].sub_state >= TCM_CONTEXT_INACTIVE_SUBSTATE_BEGIN);
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state <= TCM_CONTEXT_INACTIVE_SUBSTATE_END);
        }
        else if(tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_WAIT_AP_RSP_STATE)
        {
            //ASSERT(tcm_ptr_g->sib_tab[indx].sub_state >= TCM_CONTEXT_INACTIVE_SUBSTATE_BEGIN);
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state <= TCM_CONTEXT_INACTIVE_SUBSTATE_END);
        }
        else if(tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_ACTIVE_STATE)
        {
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state >= TCM_CONTEXT_ACTIVE_SUBSTATE_BEGIN);
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state < TCM_CONTEXT_ACTIVE_SUBSTATE_END);
        }

        if(tcm_ptr_g->sib_tab[indx].data_plane_state == TCM_DATA_PLANE_DECONFIGURED)
        {
            ASSERT(    (tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE)
                        || (tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_INACTIVE_NULL_STATE)
                        || (tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE)
                       );
        }
        else if(tcm_ptr_g->sib_tab[indx].data_plane_state == TCM_DATA_PLANE_CONFIGURING)
        {
            ASSERT(tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_ACTIVE_STATE);
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_ACTIVE_WAITING_DATA_PLANE_CONFIG_CNF_STATE);
        }
        else if(tcm_ptr_g->sib_tab[indx].data_plane_state == TCM_DATA_PLANE_CONFIGURED)
        {
            ASSERT(tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_ACTIVE_STATE);
            ASSERT(tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_ACTIVE_DATA_STATE);
        }
        else if(tcm_ptr_g->sib_tab[indx].data_plane_state == TCM_DATA_PLANE_DECONFIGURING)
        {
            ASSERT((tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_INACTIVE_STATE) || (tcm_ptr_g->sib_tab[indx].main_state == TCM_CONTEXT_ACTIVE_STATE));
            ASSERT((tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_INACTIVE_NULL_STATE) || (tcm_ptr_g->sib_tab[indx].sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE));
        }

        
    }
}
#endif /* (defined(__TCM_NEW_ARCH_DEBUG__) && !defined(__MTK_TARGET__)) */

/*****************************************************************************
* FUNCTION
*   tcm_main
* DESCRIPTION
*   This function describes entry point of TCM
*
* PARAMETERS
*   ilm_ptr   IN     Pointer to ILM
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_main( ilm_struct *ilm_ptr )
{
    TCM_FN_ENTRY_LOG( MOD_TCM, MMI_FN_ENTER_TCM_MODULE_MAIN_SUBOP );

    #ifdef __GEMINI__
    ASSERT(tcm_ptr_g->sim_interface == (ilm_ptr->dest_mod_id-MOD_TCM));
    #endif

    #ifdef __MEDIATEK_SMART_QOS__
    tcm_ptr_g->tcm_msq_context_ptr = &tcm_msq_context ;
    #endif /* __MEDIATEK_SMART_QOS__ */

    #ifdef __UGTCM__
    if ( tcm_check_msg( ilm_ptr) == KAL_FALSE )
    {
       return;
    }
    #endif /* __UGTCM__ */

    switch(ilm_ptr->msg_id)
    {

        /*
          * Part 1/4
          * Normal handling --> after calling message handler, will return directly
          */
  #if ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) // only in 3G load we UT on TCM
        /* Poying: For IPv6, AT+CGPRCO is used to set req_IPv6_DNS flag. */
        case MSG_ID_L4CTCM_SET_CONFIG_OPTION_REQ:
        {
            tcm_l4ctcm_set_config_option_req_hdlr(ilm_ptr);
            return;
        }
  #endif /* ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) */

  #if ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) // only in 3G load we UT on TCM
        case MSG_ID_L4CTCM_ENTER_DATA_MODE_REQ:
        {
            tcm_l4ctcm_enter_data_mode_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_TCM_RATDM_ENTER_DATA_MODE_CNF:
        {
            tcm_ratdm_enter_data_mode_cnf_hdlr(ilm_ptr);
            return;
        }
  #endif /* ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) */


        case MSG_ID_TCM_RATDM_PS_BEARER_CAPABILITY_IND:
        {
            #ifdef __UGTCM__
            #ifdef __HSDPA_SUPPORT__
            tcm_ratdm_ps_bearer_capability_ind_hdlr(ilm_ptr);
            #else // #ifdef __HSDPA_SUPPORT__
            ASSERT(0);
            #endif // ~ #ifdef __HSDPA_SUPPORT__
            #else  /* __UGTCM__ */
            TCM_DEV_ASSERT(0);
            #endif /* __UGTCM__ */
            return;
        }

        case MSG_ID_SMREG_PS_SUSPEND_IND:
        {
#ifdef __PS_DIALUP__
            #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
            tcm_gprs_send_msg_to_ppp(MSG_ID_TAF_PS_SUSPEND_IND, NULL, NULL, NULL, (tcm_source_of_config_enum)0);
            #endif // ~ #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
#else
			ASSERT(0);
#endif
            return;
        }

        case MSG_ID_SMREG_PS_RESUME_IND:
        {
#ifdef __PS_DIALUP__
            #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
            tcm_gprs_send_msg_to_ppp(MSG_ID_TAF_PS_RESUME_IND, NULL, NULL, NULL, (tcm_source_of_config_enum)0);
            #endif // ~ #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
#else
			ASSERT(0);
#endif

            return;
        }

        case MSG_ID_TAF_EXT_PDP_SET_IP_AND_DNS_INFO_REQ:
        {
#ifdef __PS_DIALUP__
            // TODO: need to implement this message handler?
#else
			ASSERT(0);
#endif
            return;
        }

        case MSG_ID_L4CTCM_START_REQ:
        {
            tcm_l4ctcm_start_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_PRI_PDP_INFO_REQ:
        {
            tcm_l4ctcm_set_pri_pdp_info_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_SEC_PDP_INFO_REQ:
        {
            tcm_l4ctcm_set_sec_pdp_info_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_QOS_INFO_REQ:
        {
            tcm_l4ctcm_set_qos_info_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_EQOS_INFO_REQ:
        {
            tcm_l4ctcm_set_eqos_info_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_PPP_AUTH_INFO_REQ:
        {
            tcm_l4ctcm_set_ppp_auth_info_req_hdlr(ilm_ptr);
            return;
        }

        #ifdef __MEDIATEK_SMART_QOS__
        case MSG_ID_L4CTCM_SET_MSQ_MODE_REQ: 
        {
            tcm_l4ctcm_set_msq_mode_req_handler(ilm_ptr) ;
            return ;
        }
        
        case MSG_ID_L4CTCM_SET_MSQ_ENTRY_REQ: 
        {
            tcm_l4ctcm_set_msq_entry_req_handler(ilm_ptr) ;
            return ;
        }
        #endif /* __MEDIATEK_SMART_QOS__ */
        
        case MSG_ID_NVRAM_WRITE_CNF:
        {
            tcm_nvram_write_cnf_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_NVRAM_READ_CNF:
        {
            tcm_nvram_read_cnf_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_TIMER_EXPIRY:
        {
            #ifdef __UGTCM__
            tcm_timer_expiry(ilm_ptr) ;
            #else  /* __UGTXM__ */
            TCM_DEV_ASSERT(0);
            #endif /* __UGTCM__ */
            return;
        }

        case MSG_ID_SMREG_PDP_PRESERVE_IND :
        {
           #ifdef __UGTCM__
           tcm_preserve_ind_hdlr(ilm_ptr);
           #else  /* __UGTCM__ */
           TCM_DEV_ASSERT(0);
           #endif /* __UGTCM__ */
           return;
        }

        case MSG_ID_SMREG_PDP_REESTABLISH_IND :
        {
           #ifdef __UGTCM__
           tcm_reestablish_ind_hdlr(ilm_ptr);
           #else  /* __UGTCM__ */
           TCM_DEV_ASSERT(0);
           #endif /* __UGTCM__ */
           return;
        }

        case MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_REQ:
        {
           tcm_l4ctcm_undefine_pdp_info_req_hdlr(ilm_ptr);
           return;
        }

        case MSG_ID_SMREG_PDP_ACTIVATE_IND:
        {
            #ifdef __UGTCM__
            /* If message received is a network initiated context activation
             * indication then directly call the handler, because nsapi is
             * not present.
             */
            tcm_activate_ind_state0hdlr( ilm_ptr->local_para_ptr,
                                         ilm_ptr->peer_buff_ptr );
            #else  /* __UGTCM__ */
            TCM_DEV_ASSERT(0);
            #endif /* __UGTCM__ */
            return;
        }

  #ifdef __ACL_SUPPORT__
        case MSG_ID_SIM_FILE_INFO_CNF:
        case MSG_ID_SIM_READ_CNF:
        {
            tcm_sim_msg_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_ACL_MODE_REQ:
        {
            tcm_acl_set_mode_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_SIM_WRITE_CNF:
        case MSG_ID_SIM_ACL_MODE_CNF:
        {
            tcm_sim_msg_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_GET_ACL_ENTRIES_REQ:
        {
            tcm_acl_get_entries_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_SET_ACL_ENTRY_REQ:
        {
            tcm_acl_set_entry_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_ADD_ACL_ENTRY_REQ:
        {
            tcm_acl_add_entry_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_DEL_ACL_ENTRY_REQ:
        {
            tcm_acl_del_entry_req_hdlr(ilm_ptr);
            return;
        }

        case MSG_ID_L4CTCM_LEAVE_ACL_MENU_REQ:
        {
            tcm_acl_leave_menu_req_hdlr(ilm_ptr);
            return;
        }
  #endif

  #ifdef __MODEM_EM_MODE__
        case MSG_ID_L4CPS_EM_UPDATE_REQ:
        {
            l4cps_em_update_req_struct     *em_update_req_ptr = NULL;
       
            em_update_req_ptr = (l4cps_em_update_req_struct *)ilm_ptr->local_para_ptr;
       
            if (em_update_req_ptr->info_request[TCM_EM_CONTEXT_INFO] == EM_ON)
            {
               // Poying: 20101208. EM_MODE.
               switch (em_update_req_ptr->em_src)
               {
                  case EM_FROM_MMI: 
                  {
                     TCM_PTR(is_em_act_from_mmi) = KAL_TRUE ;
                     break ;
                  }
                  case EM_FROM_CATCHER: 
                  {
                     TCM_PTR(is_em_act_from_catcher) = KAL_TRUE;
                     break ;
                  }
                  default:
                  {
                     // do-nothing
                  }
               }

               #ifdef __HSDPA_SUPPORT__
               /* send PDP context information */
               tcm_send_em_context_info();
               #endif
       
               /* Poying: 20101208. Remove for EM_MODE. */
               /* send internal PDP data counter */
               // tcm_send_em_data_counter_info(KAL_TRUE);
       
               /* send external PDP data counter */
               // tcm_send_em_data_counter_info(KAL_FALSE);
            }
            else if (em_update_req_ptr->info_request[TCM_EM_CONTEXT_INFO] == EM_OFF)
            {
               // Poying: 20101208. EM_MODE.
               switch (em_update_req_ptr->em_src)
               {
                  case EM_FROM_MMI: 
                  {
                     TCM_PTR(is_em_act_from_mmi) = KAL_FALSE ;
                     break ;
                  }
                  case EM_FROM_CATCHER: 
                  {
                     TCM_PTR(is_em_act_from_catcher) = KAL_FALSE ;
                     break ;
                  }
                  default:
                  {
                     // do-nothing
                  }
               }
               
            }
            else
            {
               /* EM_NC: no change */
            }
       
            return;
        }
  #endif // ~ #ifdef __MODEM_EM_MODE__

        case MSG_ID_TST_INJECT_STRING:
        {
            #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
            tcm_tst_inject_string_handler(ilm_ptr);
            #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
            return;
        }

        // Call History (__TCM_EXT_CALL_HISTORY_SUPPORT__)
        case MSG_ID_L4CTCM_QUERY_EXT_GPRS_HISTORY_REQ:
        case MSG_ID_L4CTCM_RESET_EXT_GPRS_HISTORY_REQ:
        {
            DEBUG_ASSERT(0);
            return;
        }
        
        case MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_CNF:
        {

#ifndef __TCM_UT__
            #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
                tcm_ratdm_query_ps_statistics_cnf_hdlr_for_old_call_history(ilm_ptr);
            #else
                ASSERT(0);
            #endif 
#else // #ifndef __TCM_UT__
            ASSERT(0) ;
#endif // ~ #ifndef __TCM_UT__
            return;
        }
        case MSG_ID_TCM_RATDM_RESET_PS_STATISTICS_CNF:
        {

#ifndef __TCM_UT__
            #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
                tcm_ratdm_reset_ps_statistics_cnf_hdlr_for_old_call_history(ilm_ptr);
            #else
                ASSERT(0);
            #endif 
#else // #ifndef __TCM_UT__
            ASSERT(0);
#endif // ~ #ifndef __TCM_UT__

            return;
        }

        // old call history
        case MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_REQ:
        {
            tcm_l4ctcm_set_gprs_statistics_info_req_hdlr(ilm_ptr);
            return;
        }
        #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
        case MSG_ID_L4CTCM_GET_GPRS_STATISTICS_INFO_REQ:
        {
            l4ctcm_get_gprs_statistics_info_req_hdlr(ilm_ptr);
            return;
        }
        #endif // ~ #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))

        /*
          * Part 2/4
          * Special handling --> not return 
          */
        case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
        {
#ifndef __PS_DIALUP__
		ASSERT(0);
#endif
          break;
        }
    }



    /*
      * Part 3/4
      * Drop unknown messages
      */
    if (!((ilm_ptr->msg_id >= MSG_ID_TCM_CODE_BEGIN) && (ilm_ptr->msg_id <= MSG_ID_TCM_CODE_END)))
    {
        kal_brief_trace(TRACE_ERROR, TCM_MAIN_FUNC_DISCARD_MSG, ilm_ptr->msg_id, ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        return;
    }


    #ifdef __UGTCM__
    /*
      * Part 4/4
      * If the message belongs to the messages which will affect FSM, then go into the fsm handler
      */
    if((MSG_ID_SMREG_PDP_DEACTIVATE_CNF != ilm_ptr->msg_id) && (MSG_ID_SMREG_PDP_DEACTIVATE_IND != ilm_ptr->msg_id))
    {
    tcm_cntxt_data_fsm( ilm_ptr );
    }
    else
    {
        // process the msg: SMREG_PDP_DEACTIVATE_CNF & SMREG_PDP_DEACTIVATE_IND
        if(MSG_ID_SMREG_PDP_DEACTIVATE_IND == ilm_ptr->msg_id)
        {
          // because there may be a lot of nsapis deactivated at the same time, 
          // we let the fsm process one nsapi deactivate at at time
          smreg_pdp_deactivate_ind_struct *msg_ptr = NULL;
          kal_uint8 i = 0;
          kal_uint8 tot_valid_nsapi_in_original_msg_local_para;

          msg_ptr =
          (smreg_pdp_deactivate_ind_struct *)ilm_ptr->local_para_ptr;

          if (msg_ptr->tot_valid_nsapi > 11) 
          {
              DEBUG_ASSERT(0) ;
              msg_ptr->tot_valid_nsapi = 11 ;
          }
          
          tot_valid_nsapi_in_original_msg_local_para = msg_ptr->tot_valid_nsapi;

          for(i=0;i<tot_valid_nsapi_in_original_msg_local_para;i++)
          {
              msg_ptr->tot_valid_nsapi = 1;
              msg_ptr->nsapi_list[0] = msg_ptr->nsapi_list[i];
              tcm_cntxt_data_fsm(ilm_ptr);
          }
        }
        else if (MSG_ID_SMREG_PDP_DEACTIVATE_CNF == ilm_ptr->msg_id)
        {
          smreg_pdp_deactivate_cnf_struct *msg_ptr = NULL;
          kal_uint8 i = 0;
          kal_uint8 tot_valid_nsapi_in_original_msg_local_para;

          msg_ptr =
          (smreg_pdp_deactivate_cnf_struct *)ilm_ptr->local_para_ptr;

          if (msg_ptr->tot_valid_nsapi > 11)
          {
              DEBUG_ASSERT(0) ;
              msg_ptr->tot_valid_nsapi = 11 ;
          }
          
          tot_valid_nsapi_in_original_msg_local_para = msg_ptr->tot_valid_nsapi;

          for(i=0;i<tot_valid_nsapi_in_original_msg_local_para;i++)
          {
              msg_ptr->tot_valid_nsapi = 1;
              msg_ptr->nsapi_list[0] = msg_ptr->nsapi_list[i];
              tcm_cntxt_data_fsm(ilm_ptr);
          }
        }
        else
        {
            DEBUG_ASSERT(0);
        }

    }
    #else  /* __UGTCM__ */
    TCM_DEV_ASSERT(0);
    #endif /* __UGTCM__ */

    TCM_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MODULE_MAIN_SUBOP );

    #if (defined(__TCM_NEW_ARCH_DEBUG__) && !defined(__MTK_TARGET__))
    tcm_ut_check_context_content_correctness();
    #endif /* (defined(__TCM_NEW_ARCH_DEBUG__) && !defined(__MTK_TARGET__)) */

    return;
}


void tcm_tst_inject_string_handler(ilm_struct *ilm_ptr)
{
    #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
    tst_module_string_inject_struct *msg_ptr = NULL; 
    
    msg_ptr = (tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;         
    
    switch(msg_ptr->index)
    {
        case 31: /* AT+CGTFT=1,... */
        case 32: /* AT+CGTFT=2,... */
        {
            l4c_tft_struct tft; 

            if (msg_ptr->index == 31)
            {   tft.context_id = 1; }
            else /* index == 32 */
            {   tft.context_id = 2; }
            

            tft.tot_pf_count = 1;
            tft.pf[0].pfi = 1;
            tft.pf[0].epi = 1;

            tft.pf[0].src_addr_sb_net_mask_len = 8;
            tft.pf[0].src_addr_sb_net_mask[0]= 235;
            tft.pf[0].src_addr_sb_net_mask[1]= 235;
            tft.pf[0].src_addr_sb_net_mask[2]= 235;
            tft.pf[0].src_addr_sb_net_mask[3]= 235;
            tft.pf[0].src_addr_sb_net_mask[4]= 225;
            tft.pf[0].src_addr_sb_net_mask[5]= 225;
            tft.pf[0].src_addr_sb_net_mask[6]= 225;
            tft.pf[0].src_addr_sb_net_mask[7]= 225;

            tft.pf[0].tos_len=0;
            tft.pf[0].flow_label_present = KAL_FALSE;

            tft.pf[0].prot_number_present = KAL_TRUE;
            tft.pf[0].prot_number_next_hdr = 17;

            tft.pf[0].dst_port_len = 2;
            tft.pf[0].dst_port_range[0]=200;
            tft.pf[0].dst_port_range[1]=300;

            tft.pf[0].src_port_len = 2;
            tft.pf[0].src_port_range[0]=300;
            tft.pf[0].src_port_range[1]=400;

            tft.pf[0].ipsec_spi_present = KAL_FALSE;
            tft.pf[0].tos_len = 0;
            tft.pf[0].tos_traffic_class_mask[0]=0;
            tft.pf[0].tos_traffic_class_mask[1]=0;

            tft.pf[0].flow_label_present = KAL_FALSE;

            l4ctcm_set_tft_info(&tft);
            break;
        }
        #if (defined(__IPV4V6__) || defined (__IPV6__))
        case 33:
        case 34: 
        {
            l4c_tft_struct tft; 
            kal_uint8      i ;

            kal_mem_set(&tft, 0, sizeof(l4c_tft_struct)) ;

            if (msg_ptr->index == 33)
            {   tft.context_id = 1; }
            else /* index == 34 */
            {   tft.context_id = 2; }
 
            tft.tot_pf_count = 1;
            tft.pf[0].pfi = 1;
            tft.pf[0].epi = 1;
 
            tft.pf[0].src_addr_sb_net_mask_len = 32;

            for (i=0; i<16; i++)
            {
                tft.pf[0].src_addr_sb_net_mask[i] = i+1 ;
            }

            for (i=16; i<32; i++)
            {
                tft.pf[0].src_addr_sb_net_mask[i] = 0xc0+i-16 ;
            }


            /* Poying: Check tcm_create_packet_filter() to see the packet filter types. */
            if (0 == strncmp((kal_char*)msg_ptr->string, "TYPE1", 5))
            {
                tft.pf[0].dst_port_len = 2;
                tft.pf[0].dst_port_range[0] = 200;
                tft.pf[0].dst_port_range[1] = 300;
     
                tft.pf[0].src_port_len = 2;
                tft.pf[0].src_port_range[0] = 400;
                tft.pf[0].src_port_range[1] = 500;
            }
            else if (0 == strncmp((kal_char*)msg_ptr->string, "TYPE2", 5))
            {
                tft.pf[0].ipsec_spi_present = KAL_TRUE;
                tft.pf[0].ipsec_spi = 0x12345678 ; 
            }
            else if (0 == strncmp((kal_char*)msg_ptr->string, "TYPE3", 5))
            {
                tft.pf[0].flow_label_present = KAL_TRUE ;
                tft.pf[0].flow_label = 0xffffabcd ;
            }
            else
            {
                /* Poying: Do nothing (and it will be treated as TYPE2). */
            }

            /* Poying: Some well-known "Next Header" defined in IPv6 (RFC-2460). 
             * - TCP: 6
             * - UDP: 17
             * - ICMPv6: 58
             */
            tft.pf[0].prot_number_present = KAL_TRUE;
            tft.pf[0].prot_number_next_hdr = 6 ;

                        
            tft.pf[0].tos_len = 0;  /* Poying: It is used in IPv4. */

            tft.pf[0].tos_traffic_class_mask[0]=99;
            tft.pf[0].tos_traffic_class_mask[1]=199;
            
            l4ctcm_set_tft_info(&tft);
        
            break ;
        }
        #endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */

        default: 
        {

			if (0 == strncmp((kal_char*)msg_ptr->string, "N201U=", 6))
			{
                #ifdef __UGTCM__
				kal_uint16 req_n201u;
	        		kal_uint8 cid;

				cid = msg_ptr->index;
				if (cid < 1 || cid > TCM_TOT_EXT_CONTEXT) 
				{
					//kal_prompt_trace (MOD_TCM, "[TCM] Wrong Cid, Cid from 1 to 3 is for Dialup!");
					return;
				}				 
				else if (strlen((kal_char*)msg_ptr->string) != 10)
				{
					//kal_prompt_trace (MOD_TCM, "[TCM] received invalid inject string!");
					return;
				}
				else 
				{
				 	req_n201u =  (msg_ptr->string[6]- '0' ) *1000
				 					+(msg_ptr->string[7]- '0' ) *100
				 					+(msg_ptr->string[8]- '0' ) * 10
				 					+(msg_ptr->string[9]- '0' );

					if ( (req_n201u == 0) || 
						  ((req_n201u >= 140) && (req_n201u <= 1520)) )
					{
						kal_brief_trace(TRACE_WARNING, TCM_TST_INJECT_MSG_PROCESSED);
						kal_brief_trace(TRACE_WARNING, TCM_TRACE_N201U, cid, req_n201u);
					}
					else
					{
						//kal_prompt_trace (TCM_MODULE_ID, "[TCM] invalid N201U value!");
						return;
					}					
				}

				tcm_set_req_n201u_hdlr(cid, req_n201u) ;
                #endif /* __UGTCM__ */
			}
#if __REL8__
            else if (0 == strcmp((kal_char*)msg_ptr->string, "NO_IPV4_ALLOC_PCO"))
            {
                tcm_ptr_g->tcm_skip_ipv4_alloc = KAL_TRUE;

                kal_prompt_trace (MOD_TCM, "[TCM] TST_Inject: skip ipv4 pco");                
            }
#endif /* __REL8__ */ 
			
            #ifdef __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__
			else if (0 == strcmp((kal_char*)msg_ptr->string, "SET_NSAPI"))
			{
                tcm_ptr_g->tcm_tst_specified_nsapi = msg_ptr->index ;

                kal_prompt_trace(MOD_TCM, "TST_INJECT: The specified nsapi: %d", msg_ptr->index) ;
			}
			#endif /* __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__ */ 
			
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_encode_bit_rate"))
                        {
                            kal_uint16 return_val=0;
                            kal_uint32 rate = 0;
                            rate += ((msg_ptr->string[49])<<16);
                            rate += ((msg_ptr->string[50])<<8);
                            rate += ((msg_ptr->string[51]));
                            ASSERT(KAL_FALSE == l4ctcm_encode_bit_rate(0, NULL)); // if give null pointer, should return false
                            #ifdef __REL6__
                            l4ctcm_encode_bit_rate(rate, &return_val);
                            #else // #ifdef __REL6__
                            l4ctcm_encode_bit_rate((kal_uint16)rate, &return_val);
                            #endif // ~ #ifdef __REL6__
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_encode_bit_rate: input(rate): %d, output(binary encode): %d", rate, return_val);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_decode_bit_rate"))
                        {
                            kal_uint16 val=0;
                            kal_uint32 rate = 0;
                            val += ((msg_ptr->string[50])<<8);
                            val += ((msg_ptr->string[51]));

                            tcm_pdp_decode_qos_bit_rate(val, &rate);

                            ASSERT(KAL_FALSE == l4ctcm_decode_bit_rate(0, NULL)); // if give null pointer, should return false
                            l4ctcm_decode_bit_rate(val, &rate);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_decode_bit_rate: input(binary encode): %d, output(rate): %d", val, rate);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "ENABLE test SIM"))
                        {
                            tcm_ptr_g->ut_is_test_sim_flag = KAL_TRUE;
                            kal_prompt_trace(MOD_TCM, "tcm_ptr_g->ut_is_test_sim_flag = KAL_TRUE");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "DISABLE test SIM"))
                        {
                            tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE;
                            kal_prompt_trace(MOD_TCM, "tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "SET TFT on context 2"))
                        {
                            kal_uint8 cid = 2;
                            tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE;
                            kal_prompt_trace(MOD_TCM, "at+cgtft=2,1,1,\"235.235.235.235.225.225.225.225\",17,\"200.300\",\"300.400\"");
                            //if (l4ctcm_get_pdp_type(cid) == SECONDARY_CONTEXT)
                            {
                                l4c_tft_struct tft;
                    
                                tft.context_id = cid;
                                tft.tot_pf_count = 1;
                                tft.pf[0].pfi = 1;
                                tft.pf[0].epi = 1;
                    
                                tft.pf[0].src_addr_sb_net_mask_len = 8;
                                tft.pf[0].src_addr_sb_net_mask[0] = 235;
                                tft.pf[0].src_addr_sb_net_mask[1] = 235;
                                tft.pf[0].src_addr_sb_net_mask[2] = 235;
                                tft.pf[0].src_addr_sb_net_mask[3] = 235;
                                tft.pf[0].src_addr_sb_net_mask[4] = 225;
                                tft.pf[0].src_addr_sb_net_mask[5] = 225;
                                tft.pf[0].src_addr_sb_net_mask[6] = 225;
                                tft.pf[0].src_addr_sb_net_mask[7] = 225;
                    
                                tft.pf[0].prot_number_present = KAL_TRUE;
                                tft.pf[0].prot_number_next_hdr = 17;
                                tft.pf[0].dst_port_len = 2;
                                tft.pf[0].dst_port_range[0] = 200;
                                tft.pf[0].dst_port_range[1] = 300;
                                tft.pf[0].src_port_len = 2;
                                tft.pf[0].src_port_range[0] = 300;
                                tft.pf[0].src_port_range[1] = 400;
                    
                                tft.pf[0].ipsec_spi_present = KAL_FALSE;
                                tft.pf[0].tos_len = 0;
                                tft.pf[0].tos_traffic_class_mask[0] = 0;
                                tft.pf[0].tos_traffic_class_mask[1] = 0;
                                tft.pf[0].flow_label_present = KAL_FALSE;
                    
                                l4ctcm_set_tft_info(&tft);
                            }

                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "CHANGE TFT on context 2"))
                        {
                            kal_uint8 cid = 2;
                            tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE;
                            kal_prompt_trace(MOD_TCM, "at+cgtft=2,1,1,\"235.235.235.235.255.255.255.255\",17,\"200.300\",\"300.400\"");
                            //if (l4ctcm_get_pdp_type(cid) == SECONDARY_CONTEXT)
                            {
                                l4c_tft_struct tft;
                    
                                tft.context_id = cid;
                                tft.tot_pf_count = 1;
                                tft.pf[0].pfi = 1;
                                tft.pf[0].epi = 1;
                    
                                tft.pf[0].src_addr_sb_net_mask_len = 8;
                                tft.pf[0].src_addr_sb_net_mask[0] = 235;
                                tft.pf[0].src_addr_sb_net_mask[1] = 235;
                                tft.pf[0].src_addr_sb_net_mask[2] = 235;
                                tft.pf[0].src_addr_sb_net_mask[3] = 235;
                                tft.pf[0].src_addr_sb_net_mask[4] = 255;
                                tft.pf[0].src_addr_sb_net_mask[5] = 255;
                                tft.pf[0].src_addr_sb_net_mask[6] = 255;
                                tft.pf[0].src_addr_sb_net_mask[7] = 255;
                    
                                tft.pf[0].prot_number_present = KAL_TRUE;
                                tft.pf[0].prot_number_next_hdr = 17;
                                tft.pf[0].dst_port_len = 2;
                                tft.pf[0].dst_port_range[0] = 200;
                                tft.pf[0].dst_port_range[1] = 300;
                                tft.pf[0].src_port_len = 2;
                                tft.pf[0].src_port_range[0] = 300;
                                tft.pf[0].src_port_range[1] = 400;
                    
                                tft.pf[0].ipsec_spi_present = KAL_FALSE;
                                tft.pf[0].tos_len = 0;
                                tft.pf[0].tos_traffic_class_mask[0] = 0;
                                tft.pf[0].tos_traffic_class_mask[1] = 0;
                                tft.pf[0].flow_label_present = KAL_FALSE;
                    
                                l4ctcm_set_tft_info(&tft);
                            }

                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test check_pdp_context_exist_or_during_activating_func"))
                        {
                            kal_bool return_value = 
                                check_pdp_context_exist_or_during_activating_func();
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test check_pdp_context_exist_or_during_activating_func: %d", return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_pri_pdp_info"))
                        {
                            l4c_prim_pdp_info_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_prim_pdp_info_list_struct));
                            return_value = l4ctcm_get_pri_pdp_info(&info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_pri_pdp_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_sec_pdp_info"))
                        {
                            l4c_sec_pdp_info_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_sec_pdp_info_list_struct));
                            return_value = l4ctcm_get_sec_pdp_info(&info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_sec_pdp_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_sec_pdp_info"))
                        {
                            kal_bool return_value;
                            kal_uint8 string[500];
                            kal_uint8 * string_ptr = &(string[0]);
                            kal_mem_set((kal_uint8*)&(string[0]), 0, 500);
                            return_value = l4ctcm_test_sec_pdp_info(&(string_ptr));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_sec_pdp_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "l4ctcm_get_tft_info"))
                        {
                            l4c_tft_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_tft_struct));
                            info.context_id = msg_ptr->string[50];
                            return_value = l4ctcm_get_tft_info(&info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_tft_info string[50] as context id");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_tft_info"))
                        {
                            kal_bool return_value;
                            kal_uint8 string[500];
                            kal_uint8 * string_ptr = &(string[0]);
                            kal_mem_set((kal_uint8*)&(string[0]), 0, 500);
                            ASSERT(KAL_FALSE == l4ctcm_test_tft_info(NULL));
                            return_value = l4ctcm_test_tft_info(&(string_ptr));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_tft_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_qos_info ATCI_REQ_QOS"))
                        {
                            l4c_qos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_qos_list_struct));
                            return_value = l4ctcm_get_qos_info(ATCI_REQ_QOS, &info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_qos_info ATCI_REQ_QOS");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_qos_info ATCI_MIN_QOS"))
                        {
                            l4c_qos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_qos_list_struct));
                            return_value = l4ctcm_get_qos_info(ATCI_MIN_QOS, &info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_qos_info ATCI_MIN_QOS");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_config_option_info"))
                        {
                            l4c_config_option_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_config_option_list_struct));
                            return_value = l4ctcm_get_config_option_info(&info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_config_option_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_eqos_info (info==NULL)"))
                        {
                            l4c_eqos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_eqos_list_struct));
                            return_value = l4ctcm_get_eqos_info(ATCI_REQ_QOS, NULL);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test test l4ctcm_get_eqos_info (info==NULL)");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_eqos_info (ATCI_REQ_QOS)"))
                        {
                            l4c_eqos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_eqos_list_struct));
                            return_value = l4ctcm_get_eqos_info(ATCI_REQ_QOS, &info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_eqos_info (ATCI_REQ_QOS)");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_eqos_info (ATCI_MIN_QOS)"))
                        {
                            l4c_eqos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_eqos_list_struct));
                            return_value = l4ctcm_get_eqos_info(ATCI_MIN_QOS, &info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_eqos_info (ATCI_MIN_QOS)");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_eqos_info (ATCI_NEG_QOS)"))
                        {
                            l4c_eqos_list_struct info;
                            kal_bool return_value;
                            kal_mem_set((kal_uint8*)&(info), 0, sizeof(l4c_eqos_list_struct));
                            return_value = l4ctcm_get_eqos_info(ATCI_NEG_QOS, &info);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_eqos_info (ATCI_NEG_QOS)");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_encode_sdu_size"))
                        {
                            kal_uint16 size = 0;
                            kal_uint16 val = 0;
                            kal_bool return_value;
                            size += (((kal_uint8)(msg_ptr->string[30]))<<8);
                            size += (((kal_uint8)(msg_ptr->string[31]))      );
                            
                            ASSERT(KAL_FALSE == l4ctcm_encode_sdu_size(size, NULL)); // give NULL ptr shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_encode_sdu_size(1, &val)); // size < 10 should return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_encode_sdu_size(9, &val)); // size < 10 should return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_encode_sdu_size(1501, &val)); // size == 1501 should return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_encode_sdu_size(1521, &val)); // size > 1520 should return KAL_FALSE
                            
                            return_value = l4ctcm_encode_sdu_size(size, &val);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_encode_sdu_size: input: %d, output: %d, return bool: %d", size, val, return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_decode_sdu_size"))
                        {
                            kal_uint16 value = 0;
                            kal_uint16 sizze = 0;
                            kal_bool return_value;
                            value += msg_ptr->string[30];

                            ASSERT(KAL_FALSE == l4ctcm_decode_sdu_size(value, NULL)); // give NULL ptr shoud return KAL_FALSE                            
                            ASSERT(KAL_FALSE == l4ctcm_decode_sdu_size(154, &sizze)); // give value > 153 shoud return KAL_FALSE
                            
                            return_value = l4ctcm_decode_sdu_size(value, &sizze);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_decode_sdu_size: input: %d, output: %d, return bool: %d", value, sizze, return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_encode_transfer_delay"))
                        {
                            kal_uint16 delay = 0;
                            kal_uint16 val = 0;
                            kal_bool return_value;
                            ilm_struct ilm ;
                            tcm_ut_check_callback_l4ctcm_encode_transfer_delay_struct * tcm_ut_check_callback_l4ctcm_encode_transfer_delay_ptr;

                            delay += (((kal_uint8)(msg_ptr->string[40]))<<8);
                            delay += (((kal_uint8)(msg_ptr->string[41]))      );

                            ASSERT(KAL_FALSE == l4ctcm_encode_transfer_delay(delay, NULL)); // give NULL ptr shoud return KAL_FALSE
                            //ASSERT(KAL_FALSE == l4ctcm_encode_transfer_delay(1, &val)); // 1~9 shoud return KAL_FALSE
                            //ASSERT(KAL_FALSE == l4ctcm_encode_transfer_delay(9, &val)); // 1~9 shoud return KAL_FALSE
                            
                            ASSERT(KAL_TRUE == (return_value = l4ctcm_encode_transfer_delay(delay, &val)));
                            
                            tcm_ut_check_callback_l4ctcm_encode_transfer_delay_ptr = (tcm_ut_check_callback_l4ctcm_encode_transfer_delay_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_transfer_delay_struct), TD_RESET));
                            tcm_ut_check_callback_l4ctcm_encode_transfer_delay_ptr->val = val;
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_TRANSFER_DELAY;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_transfer_delay_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_encode_transfer_delay: input: %d, output: %d, return bool: %d", delay, val, return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_decode_transfer_delay"))
                        {
                            kal_uint16 value = 0;
                            kal_uint16 dly = 0;
                            kal_bool return_value;
                            ilm_struct  ilm ;
                            tcm_ut_check_callback_l4ctcm_decode_transfer_delay_struct * tcm_ut_check_callback_l4ctcm_decode_transfer_delay_ptr;

                            value += (((kal_uint8)(msg_ptr->string[40]))<<8);
                            value += (((kal_uint8)(msg_ptr->string[41]))      );

                            tcm_pdp_decode_qos_transfer_delay(value, &dly);

                            ASSERT(KAL_FALSE == l4ctcm_decode_transfer_delay(1, NULL)); // give NULL ptr shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_decode_transfer_delay(64, &dly)); // > 63 shoud return KAL_FALSE
                            
                            ASSERT(KAL_TRUE == (return_value = l4ctcm_decode_transfer_delay(value, &dly)));
                            
                            tcm_ut_check_callback_l4ctcm_decode_transfer_delay_ptr = (tcm_ut_check_callback_l4ctcm_decode_transfer_delay_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_decode_transfer_delay_struct), TD_RESET));
                            tcm_ut_check_callback_l4ctcm_decode_transfer_delay_ptr->val = dly;
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_DECODE_TRANSFER_DELAY;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_decode_transfer_delay_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_decode_transfer_delay: input: %d, output: %d, return bool: %d", value, dly, return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_pdp_addr cid 1"))
                        {
                            kal_bool return_value;
                            ilm_struct ilm;
                            kal_uint8 length = 0; 
                            kal_uint8 addr[100];
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct * tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;

                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(0,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(100,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(1,NULL,addr)); // NULL parameter shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(1,&length,NULL)); // NULL parameter shoud return KAL_FALSE
                            
                            ASSERT(KAL_TRUE == (return_value = l4ctcm_get_pdp_addr(1,&length, addr)));
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr = (tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct), TD_RESET));
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->length = length;
                            kal_mem_cpy(&(tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->addr[0]),&(addr[0]),100);
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_PDP_ADDR;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_pdp_addr cid 1");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_pdp_addr cid 2"))
                        {
                            kal_bool return_value;
                            ilm_struct ilm ;
                            kal_uint8 length = 0; 
                            kal_uint8 addr[100];
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct * tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;

                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(0,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(100,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(2,NULL,addr)); // NULL parameter shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(2,&length,NULL)); // NULL parameter shoud return KAL_FALSE
                            
                            ASSERT(KAL_TRUE == (return_value = l4ctcm_get_pdp_addr(2,&length, addr)));
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr = (tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct), TD_RESET));
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->length = length;
                            kal_mem_cpy(&(tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->addr[0]),&(addr[0]),100);
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_PDP_ADDR;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_pdp_addr cid 2");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_pdp_addr cid 3"))
                        {
                            kal_bool return_value;
                            ilm_struct ilm ;
                            kal_uint8 length = 0; 
                            kal_uint8 addr[100];
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct * tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;

                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(0,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(100,&length, addr)); // wrong cid shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(3,NULL,addr)); // NULL parameter shoud return KAL_FALSE
                            ASSERT(KAL_FALSE == l4ctcm_get_pdp_addr(3,&length,NULL)); // NULL parameter shoud return KAL_FALSE
                            
                            ASSERT(KAL_TRUE == (return_value = l4ctcm_get_pdp_addr(3,&length, addr)));
                            
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr = (tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_pdp_addr_struct), TD_RESET));
                            tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->length = length;
                            kal_mem_cpy(&(tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr->addr[0]),&(addr[0]),100);
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_PDP_ADDR;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_pdp_addr_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_pdp_addr cid 3");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_context_state"))
                        {
                            kal_bool return_value;
                            ilm_struct ilm ;
                            
                            tcm_ut_check_callback_l4ctcm_get_context_state_struct * tcm_ut_check_callback_l4ctcm_get_context_state_ptr;

                            tcm_ut_check_callback_l4ctcm_get_context_state_ptr = (tcm_ut_check_callback_l4ctcm_get_context_state_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_context_state_struct), TD_RESET));

                            ASSERT(KAL_TRUE == (return_value = l4ctcm_get_context_state(&(tcm_ut_check_callback_l4ctcm_get_context_state_ptr->total_context[0]),&(tcm_ut_check_callback_l4ctcm_get_context_state_ptr->state_list[0]))));

                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_CONTEXT_STATE;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_context_state_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_context_state");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_answer_mode"))
                        {
                            kal_uint8 string[100];
                            l4ctcm_test_answer_mode(&string);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_answer_mode");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_auto_answer_mode"))
                        {
                            kal_uint8 string[100];
                            l4ctcm_test_auto_answer_mode(&string);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_auto_answer_mode");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_modify_info"))
                        {
                            kal_uint8 string[1000];
                            l4ctcm_test_modify_info(&string);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_modify_info");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_test_l2p"))
                        {
                            kal_uint8 string[100];
                            l4ctcm_test_l2p(&string);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_test_l2p");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_empty_gprs_prof"))
                        {
                            kal_bool return_value;
                            ilm_struct ilm ;
                            kal_uint8 empty_gprs_prof_entry[100];
                            
                            tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_struct * tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_ptr;

                            return_value = l4ctcm_get_empty_gprs_prof(empty_gprs_prof_entry);
                            
                            tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_ptr = (tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_struct *)
                                                                                                                 (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_struct), TD_RESET));
                            kal_mem_cpy(&(tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_ptr->empty_gprs_prof_entry[0]),&(empty_gprs_prof_entry[0]),100);
                            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_EMPTY_GPRS_PROF;
                            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_empty_gprs_prof_ptr;
                            ilm.peer_buff_ptr = NULL;
                            tcm_send_msg_to_mod_nil(&ilm);
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_empty_gprs_prof return: %d", return_value);
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_get_ppp_auth"))
                        {
                            kal_uint8 is_chap = KAL_FALSE;
                            l4ctcm_get_ppp_auth(1, &is_chap);
                            l4ctcm_get_ppp_auth(2, &is_chap);
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_get_ppp_auth");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test check_pdp_context_exist_func == true"))
                        {
                            ASSERT(KAL_TRUE == check_pdp_context_exist_func());
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test check_pdp_context_exist_func == true");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test check_pdp_context_exist_func == false"))
                        {
                            ASSERT(KAL_FALSE == check_pdp_context_exist_func());
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test check_pdp_context_exist_func == false");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "test l4ctcm_check_qos_fulfilled"))
                        {
#ifdef __APP_SECONDARY_PDP_SUPPORT__
                            ASSERT(KAL_FALSE == l4ctcm_check_qos_fulfilled(NULL, 1));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: test l4ctcm_check_qos_fulfilled");
#endif // ~ #ifdef __APP_SECONDARY_PDP_SUPPORT__
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 1 == PRIMARY_CONTEXT"))
                        {
                            ASSERT(PRIMARY_CONTEXT == l4ctcm_get_pdp_type(1));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 1 == PRIMARY_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 1 == SECONDARY_CONTEXT"))
                        {
                            ASSERT(SECONDARY_CONTEXT == l4ctcm_get_pdp_type(1));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 1 == SECONDARY_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 1 == UNKNOWN_CONTEXT"))
                        {
                            ASSERT(UNKNOWN_CONTEXT == l4ctcm_get_pdp_type(1));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 1 == UNKNOWN_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 2 == PRIMARY_CONTEXT"))
                        {
                            ASSERT(PRIMARY_CONTEXT == l4ctcm_get_pdp_type(2));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 2 == PRIMARY_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 2 == SECONDARY_CONTEXT"))
                        {
                            ASSERT(SECONDARY_CONTEXT == l4ctcm_get_pdp_type(2));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 2 == SECONDARY_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 2 == UNKNOWN_CONTEXT"))
                        {
                            ASSERT(UNKNOWN_CONTEXT == l4ctcm_get_pdp_type(2));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 2 == UNKNOWN_CONTEXT");
                        }
                        #if 0 // TCM reduce code size
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
                        #endif // ~ TCM reduce code size
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "verify l4ctcm_get_pdp_type context 3 == UNKNOWN_CONTEXT"))
                        {
                            ASSERT(UNKNOWN_CONTEXT == l4ctcm_get_pdp_type(3));
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: verify l4ctcm_get_pdp_type context 3 == UNKNOWN_CONTEXT");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "allocate all nsapis"))
                        {
                            kal_uint8 cid;
                            kal_uint8 cindex;

                            for (cid = 1; cid <= TCM_TOT_CONTEXT; cid++)
                            {
                                tcm_alloc_nsapi(cid) ;
                            }
                            
                            for(cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
                            {
                                SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;
                                
                                kal_prompt_trace(MOD_TCM, "  context_id: %d -- nsapi: %d", sib_ptr->context_id, sib_ptr->nsapi) ;
                            }
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: allocate all nsapis");
                        }
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "free all nsapis"))
                        {
                            kal_uint8  cindex;

                            for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
                            {
                                SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;
                                tcm_free_nsapi(sib_ptr) ;
                            }

                            for (cindex = 0 ; cindex < TCM_TOT_CONTEXT; cindex++)
                            {
                                SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;
                                kal_prompt_trace(MOD_TCM, "  context_id: %d -- nsapi: %d", sib_ptr->context_id, sib_ptr->nsapi) ;
                            }
                            
                            kal_prompt_trace(MOD_TCM, "TST_INJECT: free all nsapis");
                        }
                        
                        #ifdef __HSDPA_SUPPORT__
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "l4ctcm_get_bearer_capability"))
                        {
                            kal_uint8 valid_contexts;
                            kal_uint8 context_id[TCM_TOT_CONTEXT];
                            kal_uint8 bearer_capability[TCM_TOT_CONTEXT];

                            kal_prompt_trace(MOD_TCM, "call l4ctcm_get_bearer_capability");

                            l4ctcm_get_bearer_capability(&valid_contexts, context_id, bearer_capability);
                        }
                        #endif // ~ #ifdef __HSDPA_SUPPORT__
                        
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "call_some_useless_functions"))
                        {
                            // kal_prompt_trace(MOD_TCM, "call tcm_deinit()");
                            // tcm_deinit();

                            kal_prompt_trace(MOD_TCM, "call tcm_create_sib()");
                            tcm_create_sib(0);

                            {
                                l4c_gprs_statistics_info_struct temp2;
                                kal_prompt_trace(MOD_TCM, "call l4ctcm_get_gprs_statistics_info()");
                                l4ctcm_get_gprs_statistics_info(&temp2);
                            }
                        }                        
                        #ifdef __GEMINI_3G_SWITCH__
                        else if (0 == strcmp((kal_char*)msg_ptr->string, "3g switch"))
                        {
                            /* Note: if index=3, it means SIM3 is switched with SIM1. */
                            kal_uint8 sim_id = msg_ptr->index ;
                            kal_uint8 index ;

                            /* Initialize L4C's context. */
                            for (index=0; index<MAX_SIM_NUM; index++)
                            {
                                l4c_cntxt_g[index].cur_3g_switch_map = index ;
                            }

                            l4c_cntxt_g[0].cur_3g_switch_map = SIM1 + (sim_id-1) ;  /* Logical SIM1 is set to non-3G. */
                            l4c_cntxt_g[sim_id-1].cur_3g_switch_map = SIM1 ;        /* The specified SIM is set to 3G. */

                            kal_prompt_trace(MOD_TCM, "SIM%d is switched to SIM%d (non-3G)",  1, l4c_cntxt_g[0].cur_3g_switch_map+1) ;
                            kal_prompt_trace(MOD_TCM, "SIM%d is switched to SIM%d (3G)", sim_id, l4c_cntxt_g[sim_id-1].cur_3g_switch_map+1) ;
                        }
                        #endif /* __GEMINI_3G_SWITCH__ */
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

		 	return;
        }
    }
    
    #endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

}
