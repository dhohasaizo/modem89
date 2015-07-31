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
 * TCM_UGTCM_SEND_MSG.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

/* Ensure header file self-compilable. */
#include "tcm_ugtcm_send_msg.h"
#include "md_sap.h"
#include "sm_msgid.h"

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "flc2_config.h"
#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
#include "l3_inc_enums.h"
#include "mmi_sm_enums.h"
#endif /* __LOCAL_DEACTIVATE_PDP_SUPPORT__ */

/* structs. */
#include "mcd_l3_inc_gprs_struct.h"
#include "tcm2sm_struct.h"
#include "sm2tcm_struct.h"
#include "tcm_context.h"
#include "l4_ps_api.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "tcm_pco_api.h"
#include "tcm_tft_api.h"
#include "tcm_send_msg.h"
#include "tcm_ugtcm_fsm.h"
#include "tcm_qos_api.h"


void tcm_send_msg_to_ratdm( msg_type MsgID, local_para_struct *pLocalParam, peer_buff_struct *pPeerBuf )
{
   ilm_struct ilm ;

   ilm.msg_id = MsgID;
   ilm.local_para_ptr = pLocalParam;
   ilm.peer_buff_ptr = pPeerBuf;

   TCM_SEND_ILM( MOD_TCM, MOD_RATDM, TCM_RATDM_SAP, &ilm );
}


void tcm_send_msg_to_sm( msg_type msg_type, SESSION_INFO_PTR si_db_ptr, void *param1ptr, void *param2ptr )
{
    kal_bool    ret_val = KAL_TRUE;
    kal_bool    iot_mode = KAL_FALSE;
    ilm_struct  ilm ;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                      MMI_FN_ENTER_TCM_SEND_MSG_TO_SM_SUBOP );

    ilm.msg_id = msg_type ;
    ilm.peer_buff_ptr = NULL ; 

    if(NULL != si_db_ptr) // Gemini Plus UT found bug ??
    {
    tcm_change_qos_length_to_proper_length(&(si_db_ptr->req_qos)); // make sure qos length is correct
    tcm_change_qos_length_to_proper_length(&(si_db_ptr->min_qos)); // make sure qos length is correct
    }

    /* The MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP case will be checked in below. */
    if ((msg_type != MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP) && (si_db_ptr == NULL))
    {
        ASSERT(0) ;
    }
    
    switch ( msg_type )
    {
      case MSG_ID_SMREG_PDP_MODIFY_REQ :
      {
        smreg_pdp_modify_req_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (smreg_pdp_modify_req_struct *)construct_local_para
                   ( sizeof(smreg_pdp_modify_req_struct),
                     TD_RESET );

            /* copy min_qos */
            kal_mem_cpy( (kal_uint8 *)&msg_ptr->min_qos,
                         (kal_uint8 *)&si_db_ptr->min_qos,
                         sizeof(qos_struct) );

        /* Now fill up the local parameters */
        switch ( si_db_ptr->mod_type )
        {
          case MIN_QOS_MOD :
          {
            /* If only the minimum Qos needs to be modified then fill
             * only the minimum Qos.
             */
            kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_mod,
                         (kal_uint8 *)&si_db_ptr->min_qos,
                         sizeof(qos_struct) );
            break;
          }

          case REQ_QOS_MOD :
          {
            /* If only the requested Qos needs to be modified then
             * fill only the requested Qos.
             */
            kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_mod,
                         (kal_uint8 *)&si_db_ptr->req_qos,
                         sizeof(qos_struct) );
            break;
          }

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
          case TFT_MOD :
          {
            /* If only the Tft needs to be modified then fill only the
             * Tft field.
             */
            tcm_pack_tft( si_db_ptr->tft_opcode,
                          &msg_ptr->tft,
                          si_db_ptr );
            break;
          }

          case TFT_REQ_QOS_MOD :
          {
            /* If Tft and requested Qos needs to be modified then fill
             * the two fields.
             */
            tcm_pack_tft( si_db_ptr->tft_opcode,
                          &msg_ptr->tft,
                          si_db_ptr );
            kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_mod,
                         (kal_uint8 *)&si_db_ptr->req_qos,
                         sizeof(qos_struct) );
            break;
          }

          /* Poying: Modify both TFT and MIN_QOS. */
          case TFT_MIN_QOS_MOD :
          {
            /* If Tft and requested Qos needs to be modified then fill
             * the two fields.
             */
            tcm_pack_tft( si_db_ptr->tft_opcode,
                          &msg_ptr->tft,
                          si_db_ptr );
            kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_mod,
                         (kal_uint8 *)&si_db_ptr->min_qos,
                         sizeof(qos_struct) );
            break;
          }
          
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

          default :
          {
            break;
          }
        } /* End switch */

        msg_ptr->mod_type = si_db_ptr->mod_type;
        msg_ptr->nsapi = si_db_ptr->nsapi;

        #ifdef __MEDIATEK_SMART_QOS__
        msg_ptr->is_use_r6_qos = tcm_msq_check_if_use_r6_qos() ;
        #else  /* __MEDIATEK_SMART_QOS__ */
        msg_ptr->is_use_r6_qos = KAL_FALSE ;
        #endif /* __MEDIATEK_SMART_QOS__ */
        
        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      case MSG_ID_SMREG_PDP_DEACTIVATE_REQ :
      {
        smreg_pdp_deactivate_req_struct *msg_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (smreg_pdp_deactivate_req_struct *)
                  construct_local_para
                  ( sizeof(smreg_pdp_deactivate_req_struct),
                    TD_RESET );

        /* Fill up the parameters of the message to be sent */
        msg_ptr->nsapi = si_db_ptr->nsapi;
        msg_ptr->cause =
                 (ps_cause_enum)(*((kal_uint16 *)param1ptr ));
        msg_ptr->tear_ind =
                 (teardown_enum)(*((kal_uint8 *)param2ptr ));

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      case MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP :
      {
        smreg_pdp_activate_rej_rsp_struct *msg_ptr = NULL;
        smreg_pdp_activate_ind_struct     *local_ptr = NULL;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (smreg_pdp_activate_rej_rsp_struct *)
                  construct_local_para
                  ( sizeof(smreg_pdp_activate_rej_rsp_struct),
                    TD_RESET );

        /* Fill up the parameters of the message to be sent */
        msg_ptr->cause = *(ps_cause_enum *)param2ptr;

        if ( param1ptr != NULL )
        {
          /* Fill up the message parameters from the parameter passed
           * to this function.
           */
          local_ptr = (smreg_pdp_activate_ind_struct *)param1ptr;
          msg_ptr->token_id = local_ptr->token_id;
          msg_ptr->pdp_addr_type =
                  (pdp_addr_type_enum)local_ptr->pdp_addr_type;
          msg_ptr->pdp_addr_len =
                  (pdp_addr_len_enum)local_ptr->pdp_addr_len;
          msg_ptr->apn_len = local_ptr->apn_len;
          kal_mem_cpy( (kal_uint8 *)msg_ptr->pdp_addr,
                       (kal_uint8 *)local_ptr->pdp_addr,
                       local_ptr->pdp_addr_len );
          kal_mem_cpy( (kal_uint8 *)msg_ptr->access_name,
                       (kal_uint8 *)local_ptr->access_name,
                       local_ptr->apn_len );
        }
        else
        {
        
          if (si_db_ptr == NULL) 
          {
            ASSERT(0);
          }
        
          /* Fill up the message parameters from the scratch */
          msg_ptr->token_id = si_db_ptr->token_id;
          msg_ptr->pdp_addr_type = si_db_ptr->pdp_addr_type;
          msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len;
          msg_ptr->apn_len = si_db_ptr->apn_len;
          kal_mem_cpy( (kal_uint8 *)msg_ptr->pdp_addr,
                       (kal_uint8 *)si_db_ptr->addr_val,
                       si_db_ptr->pdp_addr_len );
          kal_mem_cpy( (kal_uint8 *)msg_ptr->access_name,
                       (kal_uint8 *)si_db_ptr->apn,
                       si_db_ptr->apn_len );
        }

        /* Now link the local parameters to the interlayer message */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      case MSG_ID_SMREG_PDP_ACTIVATE_REQ :
      {
        smreg_pdp_activate_req_struct *msg_ptr = NULL;        

        /* Allocate memory to send the local parameters */  
        msg_ptr = (smreg_pdp_activate_req_struct *)
                  construct_local_para
                  ( sizeof(smreg_pdp_activate_req_struct ),
                    TD_RESET );

        /* Allocation of internal pointers will result into resetting
	 * of reference count */
        //smreg_pdp_activate_req_struct_alloc(msg_ptr);

        /* Hard coding reference count; currently there is not common
	 * function available */
//	 msg_ptr->ref_count = 1;

        /* Fill up the parameters of the message to be sent */
        msg_ptr->nsapi = si_db_ptr->nsapi;
        msg_ptr->module_id= tcm_decide_app_module(si_db_ptr); // for PDCP / RABM to determine DL IP packet destination
        msg_ptr->context_id = si_db_ptr->context_id; // for PDCP / RABM to determine DL IP packet destination

        /* For SM use, add 03.03.27 */
        /* Modified by: CH_Liang 2005.01.25
         * Description: assign mmi_id according to startup_type & src_id
         */
        if(mmi_is_internal(si_db_ptr) == KAL_TRUE)
        {
           msg_ptr->mmi_id = LMMI_ID;
           msg_ptr->dl_pool_id = FLC2_POOL_ID_SPDU_DL;  //erica 20060509
        }
        else
        {
           msg_ptr->mmi_id = RMMI_ID;
           
           /* Note: For MBIM (src_id == MBCI_SRC), dl_pool_id is a don't-care value.
            * In this case, DL DATA will be GPD/BD format and uses FLC2_POOL_ID_MAC_DL as its dl_pool. 
            * PDCP just uses FLC2_POOL_ID_MAC_DL by itself once it has a DL DATA in GPD/BD format.
            */
           msg_ptr->dl_pool_id = tcm_alloc_dl_flc_pool_id(si_db_ptr->nsapi);
        }

        /*
          *                                  PPP Dialup                                            CMUX Dialup                                        WAP/MMS
          * startup_type            TCM_EXTERNAL_STARTUP (PPP trigger PDP)         TCM_INTERNAL_STARTUP (L4C trigger PDP)        TCM_INTERNAL_STARTUP (L4C trigger PDP)
          * mmi_id sent to SM       RMMI_ID                                            RMMI_ID                                              LMMI_ID
          * app_module_id to SM     MOD_PPP                                       MOD_NIL                                              MOD_NIL
          * 
          * SM can know dialup exists if (1)RMMI_ID is received and if (2)app_module_id == MOD_PPP is received
          */
 #ifdef __PS_DIALUP__
        if ( si_db_ptr->startup_type == TCM_EXTERNAL_STARTUP )
        {
             // if the startup_type is TCM_EXTERNAL_STARTUP, the context must be a PPP dialup
             msg_ptr->app_module_id = MOD_PPP;
        }
        else //if ( si_db_ptr->startup_type == TCM_EXTERNAL_STARTUP )
        {   
 #endif /*__PS_DIALUP__*/
             // for internal application (ex: (1)WAP, (2)MMS, (3)SAT...) context or 
             // (4)CMUX dialup context (CMUX startup_type is TCM_INTERNAL_STARTUP, but the msg_ptr->mmi_id sent to SM will be RMMI_ID)
             // currently we do not tell SM which module activate PDP context
             msg_ptr->app_module_id = MOD_NIL;
 #ifdef __PS_DIALUP__ 
        } // ~ if ( si_db_ptr->startup_type == TCM_EXTERNAL_STARTUP )
#endif /*__PS_DIALUP__*/

        
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

        // For QOS element: relibaility_class and sdu_error_ratio
        // If CGQREQ is undefed, we can apply the IOT mode setting (all zero)
        if (query_ps_conf_test_mode() == PS_CONF_TEST_IOT)
        {
            iot_mode = KAL_TRUE;            
        }
        else
        {
            iot_mode = KAL_FALSE;
        }
        
        if ( !(si_db_ptr->AT_definition & TCM_CGQREQ_DEFINED) )
        {        
            if (iot_mode == KAL_TRUE)
            { 
                si_db_ptr->req_qos.reliability_class = SUBSCRIBED_RELIABILITY_CLASS;
                si_db_ptr->req_qos.sdu_err_ratio = SUBSCRIBED_SDU_ERR_RATIO_;
            }
        }

        kal_brief_trace(TRACE_INFO, TCM_QOS_SETTING_CHECK, si_db_ptr->AT_definition, iot_mode);

        tcm_print_qos_content(&si_db_ptr->req_qos, KAL_TRUE, si_db_ptr->context_id, TCM_REQ_QOS);        

        
        kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_requested,
                     (kal_uint8 *)&si_db_ptr->req_qos,
                     sizeof(qos_struct) );
                    
        kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_minimum,
                     (kal_uint8 *)&si_db_ptr->min_qos,
                     sizeof(qos_struct) );
        msg_ptr->token_id = si_db_ptr->token_id;
        msg_ptr->pdp_addr_type = si_db_ptr->pdp_addr_type;
        msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len;
        if((NULL_PDP_ADDR_LEN != si_db_ptr->pdp_addr_len) && (PPP_ADDR_LEN != si_db_ptr->pdp_addr_len))
        {
            if(KAL_FALSE == tcm_check_if_truely_exist_pdp_addr(si_db_ptr->addr_val,si_db_ptr->pdp_addr_len))
            {
                //kal_prompt_trace(MOD_TCM, "warning, use static IP but IP is 0");
                msg_ptr->pdp_addr_len = si_db_ptr->pdp_addr_len = NULL_PDP_ADDR_LEN;
            }
        }

        msg_ptr->config_protocol = si_db_ptr->config_protocol; // 03.01.10
        msg_ptr->config_option_len = si_db_ptr->prot_option_len;

        tcm_cpy_sib_into_config_info(
                                      si_db_ptr,
                                      (void *)msg_ptr->config_option
                                    );

        msg_ptr->p_comp_algo = si_db_ptr->pcomp_algo;
        msg_ptr->d_comp_algo = si_db_ptr->dcomp_algo;
        msg_ptr->aux_info.req_n201u = si_db_ptr->req_n201u;  //erica 20070112
		  
        msg_ptr->initiated_by = si_db_ptr->initiated_by;
        kal_mem_cpy( (kal_uint8 *)msg_ptr->pdp_addr,
                     (kal_uint8 *)si_db_ptr->addr_val,
                     si_db_ptr->pdp_addr_len );
        
        if(NW_INITIATED == msg_ptr->initiated_by)
        {
        kal_mem_cpy( (kal_uint8 *)msg_ptr->access_name,
                     (kal_uint8 *)si_db_ptr->apn,
                     si_db_ptr->apn_len );
            msg_ptr->apn_len = si_db_ptr->apn_len;
        }
        else
        {
           if(0 != si_db_ptr->apn_len)
           {
              tcm_translate_apn(msg_ptr->access_name, si_db_ptr) ;
              msg_ptr->apn_len = si_db_ptr->apn_len + 1;
           }
           else
           {
              /* For empty APN, we should set apn_len=0 for SM */
              msg_ptr->apn_len = 0;
           }
        }

        #ifdef __MEDIATEK_SMART_QOS__
        msg_ptr->is_use_r6_qos = tcm_msq_check_if_use_r6_qos() ;
            #ifdef __TCM_DEBUG_MSQ_LIST__
            tcm_msq_print_msq_list();
            #endif /* __TCM_DEBUG_MSQ_LIST__ */
        #else  /* __MEDIATEK_SMART_QOS__ */
        msg_ptr->is_use_r6_qos = KAL_FALSE ;
        #endif /* __MEDIATEK_SMART_QOS__ */
        
        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REQ :
      {
        smreg_pdp_activate_sec_req_struct *msg_ptr = NULL;
        SESSION_INFO_PTR primary_sib_ptr = NULL ;

        /* Allocate memory to send the local parameters */  
        msg_ptr = (smreg_pdp_activate_sec_req_struct *)
                  construct_local_para
                  ( sizeof(smreg_pdp_activate_sec_req_struct),
                    TD_RESET );

        /* Fill up the parameters of the message to be sent */
        msg_ptr->nsapi = si_db_ptr->nsapi;

        if(mmi_is_internal(si_db_ptr) == KAL_TRUE)
        {
               msg_ptr->mmi_id = LMMI_ID;
               msg_ptr->dl_pool_id = FLC2_POOL_ID_SPDU_DL;  //erica 20060509
        }
        else
        {
               msg_ptr->mmi_id = RMMI_ID;
               msg_ptr->dl_pool_id = FLC2_POOL_ID_NPDU_DL;   //erica 20060509        
        }

        // For QOS element: relibaility_class and sdu_error_ratio
        // If CGQREQ is undefed, we can apply the IOT mode setting (all zero)
        if (query_ps_conf_test_mode() == PS_CONF_TEST_IOT)
        {
            iot_mode = KAL_TRUE;            
        }
        else
        {
            iot_mode = KAL_FALSE;
        }
        
        if ( !(si_db_ptr->AT_definition & TCM_CGQREQ_DEFINED) )
        {        
            if (iot_mode == KAL_TRUE)
            { 
                si_db_ptr->req_qos.reliability_class = SUBSCRIBED_RELIABILITY_CLASS;
                si_db_ptr->req_qos.sdu_err_ratio = SUBSCRIBED_SDU_ERR_RATIO_;
            }
        }

        kal_brief_trace(TRACE_INFO, TCM_QOS_SETTING_CHECK, si_db_ptr->AT_definition, iot_mode);

        tcm_print_qos_content(&si_db_ptr->req_qos, KAL_TRUE, si_db_ptr->context_id, TCM_REQ_QOS);        

        kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_requested,
                     (kal_uint8 *)&si_db_ptr->req_qos,
                     sizeof(qos_struct) );
        kal_mem_cpy( (kal_uint8 *)&msg_ptr->qos_minimum,
                     (kal_uint8 *)&si_db_ptr->min_qos,
                     sizeof(qos_struct) );

        primary_sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->primary_context_id) ) ;
        msg_ptr->linked_nsapi = primary_sib_ptr->nsapi ;

        /* Pack the packet flow template */
        tcm_pack_tft( CREATE_NEW_TFT, &msg_ptr->tft, si_db_ptr );

        msg_ptr->p_comp_algo = si_db_ptr->pcomp_algo;
        msg_ptr->d_comp_algo = si_db_ptr->dcomp_algo;
        msg_ptr->aux_info.req_n201u = si_db_ptr->req_n201u;  //erica 20070112
        msg_ptr->module_id= tcm_decide_app_module(si_db_ptr); // for PDCP / RABM to determine DL IP packet destination
        msg_ptr->context_id = si_db_ptr->context_id; // for PDCP / RABM to determine DL IP packet destination

        #ifdef __MEDIATEK_SMART_QOS__
        msg_ptr->is_use_r6_qos = tcm_msq_check_if_use_r6_qos() ;
        #else  /* __MEDIATEK_SMART_QOS__ */
        msg_ptr->is_use_r6_qos = KAL_FALSE ;
        #endif /* __MEDIATEK_SMART_QOS__ */

        /* Link the local Parameter to the Ilm */
        ilm.local_para_ptr = (local_para_struct *)msg_ptr;
        break;
      }

      default :
      {
        /* Incorrect message code used in send msg to SM */
        ASSERT(0) ;
        ret_val = KAL_FALSE;
        break;
      }
    }

    /* Check whether that there were no errors while constructing the
     * message and send the message to SM.
     */
    if ( ret_val == KAL_TRUE )
    {
#ifndef __MASE__    
      TCM_SEND_ILM( MOD_TCM, MOD_SM, SMREG_SAP, &ilm );
#else
      TCM_SEND_ILM( MOD_TCM, MOD_URR, SMREG_SAP, &ilm );
#endif
    }

    return;
}


void tcm_change_qos_length_to_proper_length( qos_struct *s )
{
    s->qos_length = SM_CORRECT_QOS_LEN;
}


kal_bool tcm_check_if_truely_exist_pdp_addr( kal_uint8 *addr_val_ptr, kal_uint8 addr_length )
{
    kal_uint8 i = 0;
    for(i=0; i<addr_length; i++)
    {
        if(*addr_val_ptr != 0x00)
        {
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
}


#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
void tcm_send_local_deactivate_req_to_sm( SESSION_INFO_PTR si_db_ptr, ps_cause_enum cause, teardown_enum teardown )
{
    ilm_struct ilm ;
    smreg_pdp_deactivate_req_struct *msg_ptr = NULL;

    ilm.msg_id = MSG_ID_SMREG_PDP_DEACTIVATE_REQ;
    ilm.peer_buff_ptr = NULL;

    tcm_change_qos_length_to_proper_length(&(si_db_ptr->req_qos)); // make sure qos length is correct
    tcm_change_qos_length_to_proper_length(&(si_db_ptr->min_qos)); // make sure qos length is correct

    /* Allocate memory to send the local parameters */  
    msg_ptr = (smreg_pdp_deactivate_req_struct *)
              construct_local_para
              ( sizeof(smreg_pdp_deactivate_req_struct),
                TD_RESET );
    
    /* Fill up the parameters of the message to be sent */
    msg_ptr->nsapi = si_db_ptr->nsapi;
    msg_ptr->cause = cause;
    msg_ptr->tear_ind = teardown;
    msg_ptr->local_deactivate_pdp = KAL_TRUE; // let SM do local deactivation
    
    /* Now link the local parameters to the interlayer message */
    ilm.local_para_ptr = (local_para_struct *)msg_ptr;
    
    TCM_SEND_ILM( MOD_TCM, MOD_SM, SMREG_SAP, &ilm );
}
#endif // ~ __LOCAL_DEACTIVATE_PDP_SUPPORT__

