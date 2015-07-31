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
 * TCM_SEND_MSG.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "tcm_send_msg.h"
#include "drv_msgid.h"
#include "svc_sap.h"
#include "md_sap.h"
#include "md_mw_sap.h"
#include "sm_msgid.h"
#include "l4_msgid.h"
#include "ppp_msgid.h"
#include "em_msgid.h"

/* structs. */
#include "l4c2tcm_struct.h"
#include "tcm2l4c_struct.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "task_config.h"

#ifdef __EXT_PDP_CONTEXT_ON__
#include "ppp2tcm_struct.h"
#include "tcm2ppp_struct.h"
#include "tcm_pco_api.h"
#endif /* __EXT_PDP_CONTEXT_ON__ */

#ifdef __ACL_SUPPORT__
#include "sim_public_enum.h"
#include "sim_ps_struct.h"
#endif /* ACL_SUPPORT__ */

#ifdef __MODEM_EM_MODE__
#include "em_struct.h"
#include "em_public_struct.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#endif /* __MODEM_EM_MODE__ */

#ifdef __UGTCM__
#include "tcm_ugtcm_send_msg.h"
#include "tcm_ugtcm_fsm.h"
#endif /* __UGTCM__ */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) 
#include "tst_sap.h"
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */ 

void tcm_send_activate_rej_rsp( tcm_startup_type_enum startup_type, 
                                ps_cause_enum cause, 
                                local_para_struct *local_para_ptr, 
                                kal_uint8 sib_id )
{
   SESSION_INFO_PTR 				si_db_ptr = NULL;

   si_db_ptr = tcm_get_sib_ptr(sib_id);

   if(startup_type == TCM_INTERNAL_STARTUP)
   {
	   tcm_pdp_activate_req_struct *msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;
	   
       tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, cause) ;    
       
       #ifdef __UGTCM__
	   /* Send activation reject response to SM */
	   tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
	                    si_db_ptr,
	                    (void *)NULL,
	                    &cause );
       #endif /* __UGTCM__*/

	   /* Terminate the context */
	   tcm_terminate_context( sib_id );
   	}
	else
	{
#ifdef __EXT_PDP_CONTEXT_ON__
#ifdef __PS_DIALUP__
	   mmi_ext_pdp_activate_ind_struct *msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

	   /* Send activate REJ msg to PPP including src_id */
       tcm_send_activate_rej_to_ppp( si_db_ptr, msg_ptr->context_id, 
				msg_ptr->config_option_len, (void *)msg_ptr->config_option, 
				msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG, 
				msg_ptr->src_id );

       #ifdef __UGTCM__
       /* Send activation reject response to SM */
       tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
                           si_db_ptr,
                           (void *)NULL,
                           &cause );
       #endif /* __UGTCM__ */

       /* Terminate the context if the link layer was other than PPP */
       if ( si_db_ptr->l2p != PPP )
          tcm_terminate_context( sib_id );
       else
	   {}
#endif
          //si_db_ptr->main_state = TCM_CONTEXT_INACTIVE_STATE;
          //tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);// do not set fsm in func hdlr
#else // #ifdef __EXT_PDP_CONTEXT_ON__
       ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
	}
}


void tcm_send_l4c_activate_rej( kal_bool is_sib_ptr, void *param_ptr, ps_cause_enum cause )
{
    ilm_struct                  ilm ;
    tcm_pdp_activate_rej_struct *msg_ptr = NULL;

    SESSION_INFO_PTR            si_db_ptr = NULL;
    
    msg_ptr = (tcm_pdp_activate_rej_struct *)
                  construct_local_para(sizeof(tcm_pdp_activate_rej_struct), TD_RESET);

    if (is_sib_ptr == KAL_TRUE)
    {
        SESSION_INFO_PTR temp_ptr = (SESSION_INFO_PTR) param_ptr; 
    
        msg_ptr->context_id              = temp_ptr->context_id ;
#if defined(__IPV6__)
        msg_ptr->is_rejected_by_nw       = temp_ptr->is_rejected_by_nw ;
#endif
        msg_ptr->cause                   = cause ;
        msg_ptr->src_id                  = temp_ptr->src_id ;

        msg_ptr->additional_para_type    = temp_ptr->additional_para_type ;
        msg_ptr->additional_para_content = temp_ptr->additional_para_content ;

        si_db_ptr = param_ptr ;
    }
    else
    {
        tcm_pdp_activate_req_struct *temp_ptr = (tcm_pdp_activate_req_struct *) param_ptr ;

        msg_ptr->context_id              = temp_ptr->context_id ;
        msg_ptr->is_rejected_by_nw       = KAL_FALSE ;
        msg_ptr->cause                   = cause ;
        msg_ptr->src_id                  = temp_ptr->src_id ;

        msg_ptr->additional_para_type    = temp_ptr->additional_para_type ;
        msg_ptr->additional_para_content = temp_ptr->additional_para_content ;

        /* Poying: Get si_db_ptr from the context_id in the incoming ACT-req msg. */
        si_db_ptr = tcm_get_sib_ptr( tcm_get_sib_id( GET_FROM_CONTEXTID, temp_ptr->context_id) ) ;
    }

    /* Poying: Comply with the original design. */
    if (si_db_ptr->context_type == SECONDARY_CONTEXT && si_db_ptr->context_id > TCM_TOT_EXT_CONTEXT)
    {
        msg_ptr->linked_context_id  = si_db_ptr->primary_context_id ;
    }
    else  /* (context_type == PRIMARY_CONTEXT || UNKNOWN_CONTEXT) */
    {
        msg_ptr->linked_context_id  = TCM_PRIMARY_UNKNOWN ; /* 0xFF, in original code. */
    }
    
    /* Poying: In original design, the below field is always FALSE for ACT-reject case. */
    msg_ptr->is_qos_fulfilled       = KAL_FALSE ;


    /* Ready to send ilm to L4C. */
    ilm.msg_id = MSG_ID_TCM_PDP_ACTIVATE_REJ ;
    ilm.local_para_ptr = (local_para_struct *) msg_ptr ;
    ilm.peer_buff_ptr = NULL ;

    /* Poying: src_mod and dest_mod will be properly filled in the below function. */
    TCM_SEND_ILM( MOD_TCM, MOD_L4C, TCM_L4C_SAP, &ilm );

    return ;
}


kal_bool tcm_activate_cnf_aux_proc( SESSION_INFO_PTR si_db_ptr )
{
    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                      MMI_FN_ENTER_TCM_ACTIVATE_CNF_AUX_PROC_SUBOP );

    #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
    TCM_PTR(last_rx_data) = 0;
    TCM_PTR(last_tx_data) = 0;    
    #endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )

    {
      /* If the mode of operation is normal then send the activate
       * confirm message.
       */
      if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
      {
        /* If the startup type is internal then send the activate
         * confirm message to ATCI.
         */
	   kal_uint16 param[2];

	   param[0] = si_db_ptr->context_id;
	   param[1] = (kal_uint16)KAL_TRUE;
	   
	   tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_ACTIVATE_CNF,
                              si_db_ptr,
                              (void *)param); //(void *)&si_db_ptr->context_id );
      }
      else
      {
#ifdef __EXT_PDP_CONTEXT_ON__
        /* If the startup type is external then send the activate
         * confirm message to LTWOH.
         */
          
        /* MMI : added */  
#ifdef __PS_DIALUP__
        tcm_gprs_send_msg_to_ppp( 
                                    MSG_ID_TAF_EXT_PDP_ACTIVATE_ACK_RSP,
                                    si_db_ptr,
                                    NULL,
                                    NULL,
                                    (tcm_source_of_config_enum)0
                                   );
#else
        ASSERT(0);
#endif
#else
		ASSERT(0); //define EXT_PDP_CONTEXT_ON but not define PS_DIALUP,then enter this section of code, we should assert it
#endif //  #ifdef __EXT_PDP_CONTEXT_ON__
      }
    }

    /* Update the state to context activate state */
    //si_db_ptr->main_state = TCM_CONTEXT_ACTIVE_STATE;
    //tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);// do not set fsm in func hdlr

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
    //                 MMI_FN_EXIT_TCM_ACTIVATE_CNF_AUX_PROC_SUBOP );

    return( KAL_TRUE );
}


void tcm_report_event_to_l4c( mmi_event_enum event_type, SESSION_INFO_PTR si_db_ptr )
{
    kal_uint16               param[1];
    /* Send the deactivate event to ATCI. Here a network deactivate
     * event is being sent because of time out. Its like the MT has
     * waited for enough time and the TE has not replied.
     */
    param[0] = (kal_uint16)event_type;
    tcm_send_msg_to_l4c( MSG_ID_L4CTCM_PS_EVENT_REPORT_IND,
                          si_db_ptr,
                          (void *)param );
}


void tcm_send_modify_rej_to_l4c( kal_uint8 context_id, ps_cause_enum cause, kal_uint8 l4c_src_id )
{
   kal_uint16 param[3];
   SESSION_INFO_PTR si_db_ptr = NULL;

   /* Send context modification reject message */
   param[0] = context_id;
   param[1] = (kal_uint16)cause;
   param[2] = l4c_src_id;
   tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_MODIFY_REJ,
           si_db_ptr,
           (void *)param );

   return;
}


void tcm_send_deactivate_cnf_to_l4c( kal_uint8 context_id, kal_uint8 l4c_src_id )
{
   kal_uint8 param[2];
   SESSION_INFO_PTR si_db_ptr = NULL;

   /* Send context deactivation accept message */
   param[0] = context_id;
   param[1] = l4c_src_id;
   tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_CNF,
           si_db_ptr,
           (void *)param );

   return;
}


void tcm_send_msg_to_l4c( msg_type         msg_type,
                          SESSION_INFO_PTR si_db_ptr,
                          void             *param_ptr )
{
    kal_bool    ret_val = KAL_TRUE;
    ilm_struct  ilm ;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                      MMI_FN_ENTER_TCM_SEND_MSG_TO_ATCI_SUBOP );

    ilm.msg_id = msg_type ;
    ilm.peer_buff_ptr = NULL ;

    /* Fill-in the local_para_ptr in belew. */
    switch ( msg_type )
    {
    #ifdef __HSDPA_SUPPORT__
    case MSG_ID_L4CTCM_BEARER_CAPABILITY_IND: /* Fall through */
    #endif // ~ #ifdef __HSDPA_SUPPORT__
    case MSG_ID_L4CTCM_START_CNF: /* Fall through */
    case MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF: /* Fall through */
    case MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF: /* Fall through */
    case MSG_ID_L4CTCM_SET_QOS_INFO_CNF: /* Fall through */
    case MSG_ID_L4CTCM_SET_PPP_AUTH_CNF:
    case MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_CNF:
    case MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF: //mtk00714 w0633
    #if ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) // only in 3G load we UT on TCM
    case MSG_ID_L4CTCM_SET_CONFIG_OPTION_CNF:
    case MSG_ID_L4CTCM_ENTER_DATA_MODE_CNF:
    #endif        
    case MSG_ID_L4CTCM_SET_EQOS_INFO_CNF: /* Fall through */
    case MSG_ID_L4CTCM_SET_MSQ_MODE_CNF:    /* __MEDIATEK_SMART_QOS__ */
    case MSG_ID_L4CTCM_SET_MSQ_ENTRY_CNF:   /* __MEDIATEK_SMART_QOS__ */
    {
       ilm.local_para_ptr = (local_para_struct *)param_ptr;

       break;
    }
    case MSG_ID_TCM_PDP_MODIFY_CNF :
      {
        tcm_pdp_modify_cnf_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_modify_cnf_struct *)construct_local_para
                  (sizeof(tcm_pdp_modify_cnf_struct),
                    TD_DL );

        /* Now fill up the local parameters */
        msg_ptr->context_id = si_db_ptr->context_id;
       
       /* Modified by: CH_Liang 2005.01.10
        * Description: send CNF msg with src_id specified in session info.
        */
        msg_ptr->src_id = si_db_ptr->src_id;
       /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

       #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
       kal_mem_cpy(((kal_uint8 *)&(msg_ptr->new_neg_qos)), ((kal_uint8 *)&(si_db_ptr->neg_qos)), sizeof(qos_struct));
       #endif // ~ __GPRS_BEARER_REPORT_NEGOTIATED_QOS__

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
      case MSG_ID_TCM_PDP_MODIFY_IND :
      {
          tcm_pdp_modify_ind_struct *msg_ptr = NULL;
          
          msg_ptr = (tcm_pdp_modify_ind_struct *)construct_local_para
                  (sizeof(tcm_pdp_modify_ind_struct), TD_RESET);

          msg_ptr->context_id = si_db_ptr->context_id;
          kal_mem_cpy(((kal_uint8 *)&(msg_ptr->new_neg_qos)), ((kal_uint8 *)&(si_db_ptr->neg_qos)), sizeof(qos_struct));
          ilm.local_para_ptr = (local_para_struct *)msg_ptr;
          break;
      }
      #endif // ~ __GPRS_BEARER_REPORT_NEGOTIATED_QOS__

      /* Incase if the message to send is a context modification
       * rejection.
       */
      case MSG_ID_TCM_PDP_MODIFY_REJ :
      {
        tcm_pdp_modify_rej_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_modify_rej_struct *)construct_local_para
                  ( sizeof(tcm_pdp_modify_rej_struct),
                    TD_DL );

        /* Now fill up the local parameters */
        /* Modified by: CH_Liang 2005.01.10
         * Description: context_id, cause, src_id are passed as parameters.
         */       
        msg_ptr->context_id = (kal_uint8)(*((kal_uint16 *)param_ptr + 0));
        msg_ptr->cause =
                 (ps_cause_enum)(*((kal_uint16 *)param_ptr+1));
        msg_ptr->src_id = (kal_uint8)(*((kal_uint16 *)param_ptr + 2));
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      /* Incase if the message to send is a context deactivation
       * confirmation.
       */
      case MSG_ID_TCM_PDP_DEACTIVATE_CNF :
      {
        tcm_pdp_deactivate_cnf_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_deactivate_cnf_struct *)
                  construct_local_para
                  ( sizeof(tcm_pdp_deactivate_cnf_struct),
                    TD_DL );

        /* Now fill up the local parameters */
        /* Modified by: CH_Liang 2005.01.10
         * Description: context_id, src_id are passed as parameters.
         */
        msg_ptr->context_id = *((kal_uint8 *)param_ptr + 0);
        msg_ptr->src_id = *((kal_uint8 *)param_ptr + 1);
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      /* Incase if the message to send is a context deactivation
       * indication.
       */
      case MSG_ID_TCM_PDP_DEACTIVATE_IND :
      {
        tcm_pdp_deactivate_ind_struct *msg_ptr = NULL;
        kal_uint8                     indx;
        kal_uint8			cid;
       
        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_deactivate_ind_struct *)
                  construct_local_para
                  ( sizeof(tcm_pdp_deactivate_ind_struct),
                    TD_DL );

        /* Now fill up the local parameters. Cause will be passed to
         * this procedure. the context_id is obtained from the global
         * TCM_SRTCH.context_id.
         */
        msg_ptr->cause =
                 (ps_cause_enum)(*((kal_uint16 *)param_ptr + 0));

	  kal_mem_set(msg_ptr->context_id_list, 0, 11);


        for ( indx = 1; 
              indx <= (sizeof(msg_ptr->context_id_list)/sizeof(kal_uint8)); 
              indx++ )
        {
        	cid = (kal_uint8)(*((kal_uint16 *)param_ptr + indx));
              msg_ptr->context_id_list[indx - 1] = cid;
          
          /* Modified by: CH_Liang 2005.01.10 */
              if ( cid == 0 )
          {
              	//means end of the cid list
            break;
          }
           
          /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
        }

        /* Joseph: 
         * Fill src_id in this message for L4C will check this field to dicedie whether this DEACT_IND
         * shall be passed to ABM.
         */
        /* Modified by: CH_Liang 2005.01.10
         * Description:  fill up the src_id of the message
         */        
        msg_ptr->src_id = (kal_uint8)(*((kal_uint16 *)param_ptr + indx + 1));
         /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      /* Incase if the message to send is a context activation
       * confirmation.
       */
      case MSG_ID_TCM_PDP_ACTIVATE_CNF :
      {
        tcm_pdp_activate_cnf_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_activate_cnf_struct *)construct_local_para
                  ( sizeof(tcm_pdp_activate_cnf_struct),
                    TD_RESET );

        /* Now fill up the local parameters. The context_id is passed
         * as a parameter to this procedure.
         */
        msg_ptr->context_id = (kal_uint8)(*((kal_uint16 *)param_ptr + 0));
        msg_ptr->is_qos_fulfilled = (kal_bool)(*((kal_uint16 *)param_ptr + 1)); /* __APP_SECONDARY_PDP_SUPPORT__ */
		
        //msg_ptr->src_id = TCM_PTR(tcm_act_src_id); //For L4C src_id, 03.01.07.01.07
        msg_ptr->src_id = si_db_ptr->src_id;
        /* Add for WAP GPRS. 03.06.25 */

        //ASSERT(si_db_ptr->pdp_addr_len <= 4); // make sure the msg_ptr->ip_addr[] will not be "array index out of bound"

        /* Poying: Note~
         * - The IP address here is prepared for ABM. 
         * - For smart phone project, RIL will get IP address later via command: AT+CGPADDR?
         */

        /* Poying: Handle the IP address (IPv4/6). */
        if ( (si_db_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN) 
              #if __PPP_TYPE_PDP_DIALUP_SUPPORT__
              || (si_db_ptr->pdp_addr_len == PPP_ADDR_LEN) 
              #endif /*__PPP_TYPE_PDP_DIALUP_SUPPORT__  */
           )
        {
            /* Poying: NULL_PDP_ADDR_LEN will be set in tcm_activate_cnf_state0hdlr() if the received address is invalid. */
            msg_ptr->ip_addr_present = KAL_FALSE; 
            msg_ptr->ipv6_addr_present = KAL_FALSE ;
        }
        else 
        {
            if ( (si_db_ptr->pdp_addr_len == IPV4_ADDR_LEN) 
                 #if __IPV4V6__
                 || (si_db_ptr->pdp_addr_len == IPV4V6_ADDR_LEN)
                 #endif /* __IPV4V6__ */
               )
            {
                msg_ptr->ip_addr_present = KAL_TRUE ;
                kal_mem_cpy( msg_ptr->ip_addr, (kal_uint8 *)si_db_ptr->addr_val, IPV4_ADDR_LEN );
            }

            #if __IPV6__
            if (si_db_ptr->pdp_addr_len == IPV6_ADDR_LEN) 
            {
                msg_ptr->ipv6_addr_present = KAL_TRUE ;
                kal_mem_cpy( msg_ptr->ipv6_addr, (kal_uint8 *)si_db_ptr->addr_val, IPV6_ADDR_LEN );
            }
            #endif /* __IPV6__ */

            #if __IPV4V6__
            /* Poying: If pdp_type = IPv4v6, the IPv6 address is stored in Byte 5 ~ 20. */
            if (si_db_ptr->pdp_addr_len == IPV4V6_ADDR_LEN)
            {
                msg_ptr->ipv6_addr_present = KAL_TRUE ;
                kal_mem_cpy( msg_ptr->ipv6_addr, &(si_db_ptr->addr_val[4]), IPV6_ADDR_LEN );
            }
            #endif /* __IPV4V6__ */
        }

        
        /* Poying: Handle the cause2 and IPv6 DNS address. */
        #if (defined(__IPV4V6__) || defined (__IPV6__))

        if (si_db_ptr->pdp_act_cause_2_present == KAL_TRUE)
        {
            msg_ptr->cause2_present = KAL_TRUE ;
            msg_ptr->cause2 = si_db_ptr->pdp_act_cause_2 ;
        }

        if (si_db_ptr->ipv6_dns1_present == KAL_TRUE)
        {
            msg_ptr->ipv6_dns1_present = KAL_TRUE ;
            kal_mem_cpy((kal_uint8 *)msg_ptr->ipv6_dns1, si_db_ptr->ipv6_dns1, IPV6_ADDR_LEN);
        }

        if (si_db_ptr->ipv6_dns2_present == KAL_TRUE)
        {
            msg_ptr->ipv6_dns2_present = KAL_TRUE ;
            kal_mem_cpy((kal_uint8 *)msg_ptr->ipv6_dns2, si_db_ptr->ipv6_dns2, IPV6_ADDR_LEN);
        }
        
        #endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */
        

        kal_mem_cpy(msg_ptr->pri_dns_addr, si_db_ptr->dns, 4);
        kal_mem_cpy(msg_ptr->sec_dns_addr, si_db_ptr->dns2, 4);

	/* SATe */
	msg_ptr->pdp_type = si_db_ptr->pdp_addr_type;

	msg_ptr->qos.qos_type = ATCI_NEG_QOS;
	msg_ptr->qos.context_id = msg_ptr->context_id;
	msg_ptr->qos.delay_class = (delay_class_enum)si_db_ptr->neg_qos.delay_class;
	msg_ptr->qos.reliability_class = (reliability_class_enum)si_db_ptr->neg_qos.reliability_class;
	msg_ptr->qos.peak_throughput = (peak_throughput_class)si_db_ptr->neg_qos.peak_throughput;
	msg_ptr->qos.precedence_class = (precedence_class_enum)si_db_ptr->neg_qos.precedence_class;
	msg_ptr->qos.mean_throughput = (mean_throughput_enum)si_db_ptr->neg_qos.mean_throughput;
	/* ~SATe */
	
        //msg_ptr->profile_id = si_db_ptr->profile_id;
        msg_ptr->additional_para_type = si_db_ptr->additional_para_type;// For removing profile id between L4C and TCM
        msg_ptr->additional_para_content = si_db_ptr->additional_para_content;// For removing profile id between L4C and TCM

        #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
        kal_mem_cpy(((kal_uint8 *)&(msg_ptr->neg_qos)), ((kal_uint8 *)&(si_db_ptr->neg_qos)), sizeof(qos_struct));
        #endif // ~ __GPRS_BEARER_REPORT_NEGOTIATED_QOS__

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

#ifdef __APP_SECONDARY_PDP_SUPPORT__
      /* Incase if the message to send is a context reactivation
       * confirmation.
       */
      case MSG_ID_TCM_PDP_REACTIVATE_CNF :
      {
        tcm_pdp_reactivate_cnf_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_reactivate_cnf_struct *)construct_local_para
                  ( sizeof(tcm_pdp_reactivate_cnf_struct),
                    TD_RESET );

        /* Now fill up the local parameters. The context_id is passed
         * as a parameter to this procedure.
         */
        msg_ptr->context_id = si_db_ptr->context_id;
        msg_ptr->src_id = si_db_ptr->src_id;

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }
#endif /* ~__APP_SECONDARY_PDP_SUPPORT__ */

      /* Incase if the message to be send is a context activation
       * rejection.
       */
      case MSG_ID_TCM_PDP_ACTIVATE_REJ :
      {
          /* Poying: Should use tcm_send_l4c_activate_rej() instead. */  
          DEBUG_ASSERT(0) ;                  
      }

      /* Incase if the a network initiated context activation is to
       * take place then the activation indication is sent.
       */
      case MSG_ID_TCM_PDP_ACTIVATE_IND :
      {
        tcm_pdp_activate_ind_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (tcm_pdp_activate_ind_struct *)construct_local_para
                  ( sizeof(tcm_pdp_activate_ind_struct),
                    TD_DL );

        /* Now fill up the local parameters. The context_id parameter
         * is sent along as a parameter to this procedure.
         */
        msg_ptr->context_id = *((kal_uint8 *)param_ptr);

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

//20080809
      /* Incase if the message to be sent is a event report */
      case MSG_ID_L4CTCM_PS_EVENT_REPORT_IND : 
      {
        l4ctcm_ps_event_report_ind_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */ 
        msg_ptr = (l4ctcm_ps_event_report_ind_struct *)construct_local_para
                  ( sizeof(l4ctcm_ps_event_report_ind_struct),
                    TD_DL );

        /* Now fill up the local parameters */
        msg_ptr->event_id =
                 (mmi_event_enum)(kal_uint8)(*((kal_uint16 *)param_ptr+0));
        if ( msg_ptr->event_id >= NW_CONTEXT_REJ_EVENT &&
             msg_ptr->event_id <= ME_CONTEXT_DEACT_EVENT )
        {
          msg_ptr->src_id = si_db_ptr->src_id;
          msg_ptr->context_id = si_db_ptr->context_id;
          msg_ptr->pdp_addr_type = si_db_ptr->pdp_addr_type;
          msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len;
          kal_mem_cpy( (kal_uint8 *)msg_ptr->pdp_addr,
                       (kal_uint8 *)si_db_ptr->addr_val,
                       si_db_ptr->pdp_addr_len );
        }

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

#ifdef __ACL_SUPPORT__
      case MSG_ID_L4CTCM_SET_ACL_MODE_CNF:
      {
        sim_acl_mode_cnf_struct *sim_cnf_ptr = NULL;
        l4ctcm_set_acl_entry_cnf_struct *msg_ptr = NULL;

        msg_ptr = (l4ctcm_set_acl_entry_cnf_struct *)construct_local_para(
                            sizeof(l4ctcm_set_acl_entry_cnf_struct), TD_DL);
        if (NULL != param_ptr)
        {
            sim_cnf_ptr = (sim_acl_mode_cnf_struct *)param_ptr;
            if (SIM_CMD_SUCCESS == sim_cnf_ptr->result)
            {
                msg_ptr->result = KAL_TRUE;

                /* Debug trace */
                if (KAL_TRUE == sim_cnf_ptr->switch_on)
                    kal_brief_trace(TRACE_INFO, TCM_INFO_ACL_ENABLE_MODE_SUCCESS);
                else
                    kal_brief_trace(TRACE_INFO, TCM_INFO_ACL_DISABLE_SUCCESS);
            }
            else
            {
                /* SIM command fail */
                msg_ptr->result = KAL_FALSE;
                msg_ptr->cause = (kal_uint16) sim_cnf_ptr->result;
                kal_brief_trace(TRACE_INFO, TCM_INFO_ACL_SET_ACL_MODE_FAIL);
            }

            ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        }
        else
        {
            /* Set ACL mode is not allowed now. */
            msg_ptr->result = KAL_FALSE;
            // TODO: Cause enum?
            msg_ptr->cause = 0;
            kal_brief_trace(TRACE_INFO, TCM_INFO_ACL_SET_ACL_MODE_NOT_ALLOWED);
            ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        }
        break;
      }
      case MSG_ID_L4CTCM_ADD_ACL_ENTRY_CNF:
      case MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF:
      case MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF:
      case MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF:
      {
        ilm.local_para_ptr = (local_para_struct *)param_ptr;
        break;
      }
#endif /* ~__ACL_SUPPORT__ */

      /* Incase if the message code is unknown */
      default :
      {
        /* Incorrect message code used in send msg to ATCI */
        ASSERT(0) ;
        ret_val = KAL_FALSE;
        break;
      }
    } /* End Switch */
    /* Check whether that there were no errors while constructing the
     * message.
     */
    if ( ret_val == KAL_TRUE )
    {

      #ifndef __MASE__
      TCM_SEND_ILM( MOD_TCM, MOD_L4C, TCM_L4C_SAP, &ilm );
      #else
      TCM_SEND_ILM( MOD_TCM, msg_type == MSG_ID_TCM_PDP_ACTIVATE_CNF ? MOD_URR : MOD_L4C, TCM_L4C_SAP, &ilm );
      #endif

    }

    return;
}


void tcm_send_msg_to_nvram( msg_type MsgID, 
                            local_para_struct *pLocalParam, 
                            peer_buff_struct *pPeerBuf )
{
   ilm_struct ilm ;

   ilm.msg_id = MsgID;
   ilm.local_para_ptr = pLocalParam;
   ilm.peer_buff_ptr = pPeerBuf;

   TCM_SEND_ILM(MOD_TCM, MOD_NVRAM, PS_NVRAM_SAP, &ilm);
}


void tcm_send_ilm(module_type src_mod, module_type dest_mod, sap_type sap, ilm_struct * ilm_ptr)
{
    #ifdef __GEMINI__
    {
    	module_type new_src_mod = src_mod;
    	module_type new_dest_mod = dest_mod;
    	
    	if (src_mod == MOD_TCM) 
    	{
    		new_src_mod = (module_type)(MOD_TCM + tcm_ptr_g->sim_interface);
    	}

    	if ( dest_mod != MOD_NVRAM
            #ifdef __CMUX_SUPPORT__
    		&& dest_mod != MOD_CMUX // This is no MOD_CMUX_2 module
            #endif /* __CMUX_SUPPORT__ */
            #ifdef __UPS_SUPPORT__
    		&& dest_mod != MOD_UPS // This is no MOD_UPS_2 module
            #endif /* __UPS_SUPPORT__ */
    		&& dest_mod != MOD_PPP )
    	{
    		new_dest_mod = (module_type)(dest_mod + tcm_ptr_g->sim_interface);
    	}

        ilm_ptr->src_mod_id = new_src_mod ;
        ilm_ptr->dest_mod_id = new_dest_mod ;
    }
    #else /* __GEMINI__ */ 
    {
        ilm_ptr->src_mod_id = src_mod ;
        ilm_ptr->dest_mod_id = dest_mod ;    
    }
    #endif /* __GEMINI__ */

    ilm_ptr->sap_id= sap ;       
    msg_send(ilm_ptr) ;

    #ifdef __UGTCM__
    if(KAL_TRUE == tcm_ptr_g->record_sent_msg) // only when meet fsm related msgs, we need to record sent msg id
    {
        tcm_record_sent_fsm_msg(ilm_ptr->msg_id); // for other sent messages, record it
    }
    #endif /* __UGTCM__ */
}


#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
void tcm_send_msg_to_mod_nil( ilm_struct *ilm_ptr )
{
       TCM_SEND_ILM( MOD_TCM, MOD_NIL, SMREG_SAP, ilm_ptr);
}
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */


#ifdef __PS_DIALUP__

void tcm_send_activate_rej_to_ppp( SESSION_INFO_PTR  si_db_ptr,
                                   kal_uint8	context_id,
                                   kal_uint8	config_option_len,
                                   void       *config_option,
                                   kal_uint8   config_protocol, 
                                   tcm_source_of_config_enum	config_source,
                                   kal_uint8 	l4c_src_id )
{
#ifdef __EXT_PDP_CONTEXT_ON__
      kal_uint8 param[4];
      
      param[0] = context_id;
      param[1] = config_option_len;
      param[2] = config_protocol;
      param[3] = l4c_src_id;

      tcm_gprs_send_msg_to_ppp( MSG_ID_TAF_EXT_PDP_ACTIVATE_REJ_RSP, 
                                 si_db_ptr,
                                 (void *)param,
                                 (void *)config_option,
                                 config_source
                                );
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
   return;
}


void tcm_gprs_send_msg_to_ppp( msg_type msg_type,
                               session_info_block_struct *si_db_ptr,
                               void *param_ptr,
                               void *config_option_ptr,
                               tcm_source_of_config_enum config_source )
{
    kal_bool    ret_val = KAL_TRUE;
    ilm_struct  ilm ;

    ilm.msg_id = msg_type ;
    ilm.peer_buff_ptr = NULL ;
    
    switch(msg_type)
    {

      case MSG_ID_TAF_EXT_PDP_ACTIVATE_REJ_RSP :
      {
#ifdef __EXT_PDP_CONTEXT_ON__
        mmi_ext_pdp_activate_rej_rsp_struct *msg_ptr = NULL;
        
        /* Allocate memory to send the local parameters */  
        msg_ptr = (mmi_ext_pdp_activate_rej_rsp_struct *)
                  construct_local_para (
                  sizeof(mmi_ext_pdp_activate_rej_rsp_struct), TD_RESET);
        
        //mmi_ext_pdp_activate_rej_rsp_struct_alloc(msg_ptr);
        
        /* Fill up the parameters of the message to be sent */
        /* Modified by: CH_Liang 2005.01.25
         * Description: fill up the context_id instead of nsapi
         */    
        msg_ptr->context_id= *((kal_uint8 *)param_ptr + 0);
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */ 
  
        msg_ptr->config_option_len = *((kal_uint8 *)param_ptr + 1);
        msg_ptr->config_protocol = *((kal_uint8 *)param_ptr + 2);

       /* Modified by: CH_Liang 2005.01.10
        * Description:  fill up the src_id of the message to be sent
        */
        msg_ptr->src_id =  *((kal_uint8 *)param_ptr + 3);
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
        
        if (config_source == TCM_CONFIG_OPTION_FROM_SIB )
        {
            /* Poying: The PCO info can be simply retrieved from SIB. 
             * - Note: The calling function will not pass PCO as argument after TCM's ACT-reject revision.
             */
            msg_ptr->config_option_len = si_db_ptr->prot_option_len ;
            msg_ptr->config_protocol = si_db_ptr->config_protocol ;
            
            tcm_cpy_sib_into_config_info (
                                          si_db_ptr,
                                          (void *)msg_ptr->config_option
                                         ); 
        }
        else
        {
            tcm_cpy_config_info_from_msg_to_msg(
                                  msg_ptr->config_option,
                                  (config_option_struct *)config_option_ptr,
                                  (kal_uint8)(msg_ptr->config_option_len)); 
        }

		/* Following 2 lines was added by Danny */
		msg_ptr->ref_count = 1;
		msg_ptr->msg_len = sizeof(mmi_ext_pdp_activate_rej_rsp_struct);

        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;

        #if defined(__IPV4V6__) || defined(__IPV6__)
        msg_ptr->is_rejected_by_nw = si_db_ptr->is_rejected_by_nw ;
        
        msg_ptr->pdp_act_cause_present = KAL_TRUE;
        msg_ptr->pdp_act_cause = si_db_ptr->cause;
        #endif
        
        break;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
        ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
      }

      case MSG_ID_TAF_EXT_PDP_ACTIVATE_ACK_RSP :
      {
#ifdef __EXT_PDP_CONTEXT_ON__
        mmi_ext_pdp_activate_ack_rsp_struct *msg_ptr = NULL;
        
        /* Allocate memory to send the local parameters */  
        msg_ptr = (mmi_ext_pdp_activate_ack_rsp_struct *)
                  construct_local_para (
                  sizeof(mmi_ext_pdp_activate_ack_rsp_struct), TD_RESET);
        
        //mmi_ext_pdp_activate_ack_rsp_struct_alloc(msg_ptr);
        
        /* Fill up the parameters of the message to be sent */
        
        /* Modified by: CH_Liang 2005.01.25
         * Description: fill up the context_id instead of nsapi
         */    
        msg_ptr->context_id = si_db_ptr->context_id;
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

        msg_ptr->pdp_addr_type = si_db_ptr->pdp_addr_type;
        msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len;
        kal_mem_cpy((kal_uint8 *)msg_ptr->pdp_addr,
                  (kal_uint8 *)si_db_ptr->addr_val,
                  si_db_ptr->pdp_addr_len);
        
        msg_ptr->config_option_len = si_db_ptr->prot_option_len;
        msg_ptr->config_protocol = si_db_ptr->config_protocol;
        kal_mem_cpy(msg_ptr->dns, si_db_ptr->dns, 4); /* Add 03.03.28 */

       /* Modified by: CH_Liang 2005.01.10
        * Description:  fill up the src_id of the message to be sent
        */
        msg_ptr->src_id =  si_db_ptr->src_id;
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
        
        tcm_cpy_sib_into_config_info(
                                      si_db_ptr,
                                      (void *)msg_ptr->config_option
                                    );

		/* Following 2 lines was added by Danny */
		msg_ptr->ref_count = 1;
		msg_ptr->msg_len = sizeof(mmi_ext_pdp_activate_ack_rsp_struct);

        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;

        #if defined(__IPV4V6__) || defined(__IPV6__)
        msg_ptr->pdp_act_cause_2_present = si_db_ptr->pdp_act_cause_2_present;
        msg_ptr->pdp_act_cause_2 = si_db_ptr->pdp_act_cause_2;
        #endif 
        
        break;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
        ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
      }

      #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
      case MSG_ID_TAF_PS_SUSPEND_IND :
      case MSG_ID_TAF_PS_RESUME_IND :
      {
        ilm.local_para_ptr = NULL;
        break;
      }
      #endif // ~ #ifdef __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__

      default :
      {
        /* incorrect message code used in send msg to LTWOH */
        ASSERT(0);
        ret_val = KAL_FALSE;
        break;
      }
    }

    /* Check whether that there were no errors while constructing the message
     * and send the message to SM.
     */
    if(ret_val == KAL_TRUE)
    {
      TCM_SEND_ILM( MOD_TCM, MOD_PPP, TCM_PPP_SAP, &ilm);
    }

    return;
}


void tcm_send_msg_to_ppp( msg_type msg_type,
                          session_info_block_struct *si_db_ptr,
                          void *param_ptr )
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_bool    ret_val = KAL_TRUE;
    ilm_struct  ilm ;

    TCM_DATA_PLANE_FN_ENTRY_LOG( MOD_TCM,
                  MMI_FN_ENTER_TCM_SEND_MSG_TO_LTWOH_SUBOP);

    ilm.msg_id = msg_type ;
    ilm.peer_buff_ptr = NULL ;
    
    switch(msg_type)
    {
      case MSG_ID_TAF_EXT_UPDATE_PDP_ADDR_REQ :
      {
        mmi_ext_update_pdp_addr_req_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (mmi_ext_update_pdp_addr_req_struct *)construct_local_para
                 (
                  sizeof(mmi_ext_update_pdp_addr_req_struct), TD_DL);

        /* Modified by: CH_Liang 2005.01.25
         * Description: fill up the context_id instead of nsapi
         */    
        msg_ptr->context_id = si_db_ptr->context_id;
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */
        
        /* Fill up the parameters of the message to be sent */
        msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len;
        msg_ptr->pdp_addr_type = si_db_ptr->pdp_addr_type;

        ASSERT(si_db_ptr->pdp_addr_len <= 16) ;
        
        kal_mem_cpy((kal_uint8 *)msg_ptr->pdp_addr,
                    (kal_uint8 *)si_db_ptr->addr_val,
                    si_db_ptr->pdp_addr_len);

        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      case MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP :
      {
        mmi_ext_pdp_deactivate_ack_rsp_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (mmi_ext_pdp_deactivate_ack_rsp_struct *)
                 construct_local_para (
                 sizeof(mmi_ext_pdp_deactivate_ack_rsp_struct), TD_DL);

        /* Modified by: CH_Liang 2005.01.25
         * Description: fill up the context_id instead of nsapi
         */    
        msg_ptr->context_id = si_db_ptr->context_id;
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

       /* Modified by: CH_Liang 2005.01.10
        * Description:  fill up the src_id of the message to be sent
        */
        msg_ptr->src_id =  si_db_ptr->src_id;
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
        
        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;

        break;
      }

      case MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ :
      {
        mmi_ext_pdp_deactivate_req_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (mmi_ext_pdp_deactivate_req_struct *)construct_local_para
                 ( sizeof(mmi_ext_pdp_deactivate_req_struct),
                  TD_DL);

        kal_mem_cpy( (kal_uint8 *)msg_ptr->context_id_list, 
                      (kal_uint8 *)param_ptr,
                      sizeof(msg_ptr->context_id_list));

        ilm.local_para_ptr = (local_para_struct *)msg_ptr;

        break;
      }

      default :
      {
        /* incorrect message code used in send msg to LTWOH */
        ASSERT(0);
        ret_val = KAL_FALSE;
        break;
      }
    }

    /* Check whether that there were no errors while constructing the message
     * and send the message to SM.
     */
    if(ret_val == KAL_TRUE)
    {
      TCM_SEND_ILM( MOD_TCM, MOD_PPP, TCM_PPP_SAP, &ilm );
    }
 
    return;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

#endif /* __PS_DIALUP__ */

#ifdef __MODEM_EM_MODE__
void tcm_send_em_context_info(void)
{
    ilm_struct                       ilm ;
    l4cps_em_info_req_struct        *local_para_ptr = NULL;
    peer_buff_struct                *peer_buff_ptr = NULL;
    tcm_mmi_em_info_struct          *pdu_ptr = NULL;
    kal_uint16                       pdu_len = 0;
    
    kal_uint8                        cindex ;
    
    /* Poying: 20101210. EM_MODE. */
    if ( (TCM_PTR(is_em_act_from_mmi)==KAL_FALSE) && (TCM_PTR(is_em_act_from_catcher)==KAL_FALSE))
    {
      return;
    }

    local_para_ptr = (l4cps_em_info_req_struct *) construct_local_para(sizeof(l4cps_em_info_req_struct), TD_RESET);
    local_para_ptr->em_info = TCM_EM_CONTEXT_INFO;

    peer_buff_ptr = construct_peer_buff(sizeof(tcm_mmi_em_info_struct), 0, 0, TD_RESET);

    /* Poying: The kal_api does NOT support zero-init. on peer_buff. 
     * - Need to set it to zero manually. 
     */
    pdu_ptr = (tcm_mmi_em_info_struct *)get_peer_buff_pdu(peer_buff_ptr, &pdu_len);
    kal_mem_set(pdu_ptr, 0, sizeof(tcm_mmi_em_info_struct)) ; 

    pdu_ptr->num_of_valid_entries = 0 ;

    /* Scan all sib to find any ACTIVE nsapi. */
    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;
    
        if (sib_ptr->nsapi != TCM_INVALID_NSAPI) 
        {
            pdu_ptr->data_speed[pdu_ptr->num_of_valid_entries].nsapi = sib_ptr->nsapi ;
            #ifdef __HSDPA_SUPPORT__
            pdu_ptr->data_speed[pdu_ptr->num_of_valid_entries].data_speed_value = sib_ptr->data_speed ;
            #endif
        
            pdu_ptr->num_of_valid_entries ++ ;
        }
    }

    #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
    {
        l4cps_check_tcm_mmi_em_info_struct *l4cps_check_tcm_mmi_em_info_struct_ptr = NULL;

        l4cps_check_tcm_mmi_em_info_struct_ptr = (l4cps_check_tcm_mmi_em_info_struct *) construct_local_para( sizeof(l4cps_check_tcm_mmi_em_info_struct),TD_RESET);
        l4cps_check_tcm_mmi_em_info_struct_ptr->tcm_em_info = *pdu_ptr ;

        ilm.msg_id = MSG_ID_L4CPS_CHECK_TCM_MMI_EM_INFO ;
        ilm.local_para_ptr = (local_para_struct *)l4cps_check_tcm_mmi_em_info_struct_ptr ;
        ilm.peer_buff_ptr = NULL ;

        TCM_SEND_ILM( MOD_TCM, MOD_L4C, EM_PS_SAP, &ilm ) ;
    }
    #endif // ~ ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
    
    ilm.msg_id = MSG_ID_L4CPS_EM_STATUS_IND ;
    ilm.sap_id = EM_PS_SAP;
    ilm.local_para_ptr = (local_para_struct *)local_para_ptr ;
    ilm.peer_buff_ptr = peer_buff_ptr ;

    /* Poying: Update to Catcher if needed */
    if (TCM_PTR(is_em_act_from_catcher) == KAL_TRUE)
    {
        /* Poying: Send to Catcher */
        tst_EM_logger(&ilm);

        #if 1
        /* Poying: Free buffers only if it need not to update MMI */
        if (TCM_PTR(is_em_act_from_mmi) != KAL_TRUE)
        {
            /* Poying: local_para and peer_buff will be freed in this function. */
            destroy_ilm(&ilm) ;   /* Free ilm. */  
        }
        #endif 
    }

    /* Poying: Update to MMI if needed */
    if (TCM_PTR(is_em_act_from_mmi) == KAL_TRUE)
    {
        /* Poying: Send to MMI */       
        TCM_SEND_ILM( MOD_TCM, MOD_L4C, EM_PS_SAP, &ilm ) ;
    }

    return;
}
#endif /* __MODEM_EM_MODE__ */


