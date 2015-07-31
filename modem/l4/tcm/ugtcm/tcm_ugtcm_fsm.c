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
 * TCM_UGTCM_FSM.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "tcm_ugtcm_fsm.h"

/* kals. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

/* structs. */
#include "tcm_ratdm_struct.h"
#include "tcm2ppp_struct.h"
#include "tcm_context.h"
#include "tcm_api.h"

/* prototypes. */
#include "che_api.h" // to use MD5 
#include <stdlib.h>  // to use rand() function
#include "l4c_utility.h"        // For MT-PDP-ACT
#include "tcm_pco_api.h"
#include "tcm_qos_api.h"
#include "tcm_tft_api.h"
#include "tcm_ugtcm_check.h"
#include "tcm_ugtcm_timer.h"    // For MT-PDP-ACT
#include "tcm_ugtcm_send_msg.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

#include "md_mw_sap.h"
#include "l4_msgid.h"
#include "sm_msgid.h"
#include "ratdm_msgid.h"
#include "nvram_msgid.h"
#include "ppp_msgid.h"
#include "sysservice_msgid.h"

#ifdef __ACL_SUPPORT__
#include "sim_public_enum.h"
#endif /* __ACL_SUPPORT__ */

#define MMI_CONFIG_PROTOCOL_PPP  0

typedef void (*UGTCM_FSM_FUNCTION)( local_para_struct*, peer_buff_struct* );

const UGTCM_FSM_FUNCTION
tcm_cntxt_data_ft [MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM - MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM + 1][TCM_CONTEXT_MAIN_STATE_TOTAL_NUM] =
{
    /* Note: The following sequence should NOT be altered. */
#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) // MSG_ID_TAF_EXT_PDP_ACTIVATE_IND = MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM = MSG_ID_TCM_CODE_BEGIN
    {tcm_ext_activate_ind_state0hdlr, tcm_ext_activate_ind_state1hdlr, tcm_ext_activate_ind_state2hdlr},
#else  /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */
    {tcm_ext_activate_ind_state0hdlr, tcm_error_handler,               tcm_ext_activate_ind_state2hdlr},
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */

    {tcm_activate_req_state0hdlr, tcm_activate_req_state1hdlr, tcm_activate_req_state2hdlr}, // MSG_ID_TCM_PDP_ACTIVATE_REQ
    {tcm_error_handler,           tcm_error_handler,           tcm_error_handler}, // MSG_ID_SMREG_PDP_ACTIVATE_IND
    {tcm_activate_cnf_state0hdlr, tcm_error_handler,           tcm_error_handler}, // MSG_ID_SMREG_PDP_ACTIVATE_CNF
    {tcm_activate_rej_state0hdlr, tcm_error_handler,           tcm_error_handler}, // MSG_ID_SMREG_PDP_ACTIVATE_REJ

    {tcm_sec_activate_cnf_state0hdlr, tcm_error_handler, tcm_error_handler}, // MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF
    {tcm_sec_activate_rej_state0hdlr, tcm_error_handler, tcm_error_handler}, //MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ

    {tcm_error_handler,               tcm_activate_rej_rsp_state1hdlr, tcm_error_handler}, // MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP
    {tcm_error_handler,               tcm_error_handler,               tcm_error_handler}, // MSG_ID_TCM_TIMER_EXPIRY

    {tcm_modify_req_hdlr, tcm_error_handler, tcm_modify_req_hdlr}, // MSG_ID_TCM_PDP_MODIFY_REQ
    {tcm_error_handler,   tcm_error_handler, tcm_modify_ind_state2hdlr}, // MSG_ID_SMREG_PDP_MODIFY_IND
    {tcm_modify_cnf_hdlr, tcm_error_handler, tcm_modify_cnf_hdlr}, // MSG_ID_SMREG_PDP_MODIFY_CNF
    {tcm_modify_rej_hdlr, tcm_error_handler, tcm_modify_rej_hdlr}, // MSG_ID_SMREG_PDP_MODIFY_REJ

    {tcm_deactivate_req_state0n2hdlr, tcm_error_handler, tcm_deactivate_req_state0n2hdlr}, // MSG_ID_TCM_PDP_DEACTIVATE_REQ

#ifdef __APP_SECONDARY_PDP_SUPPORT__
    {tcm_error_handler, tcm_error_handler, tcm_reactivate_req_state2hdlr}, // MSG_ID_TCM_PDP_REACTIVATE_REQ
#else  /* __APP_SECONDARY_PDP_SUPPORT__ */
    {tcm_error_handler, tcm_error_handler, tcm_error_handler}, // MSG_ID_TCM_PDP_REACTIVATE_REQ
#endif /* ~__APP_SECONDARY_PDP_SUPPORT__ */

#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) // MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND
    {tcm_ext_deactivate_ind_state0n2hdlr, tcm_ext_deactivate_ind_state1hdlr, tcm_ext_deactivate_ind_state0n2hdlr},
#else  /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */
    {tcm_ext_deactivate_ind_state0n2hdlr, tcm_error_handler,                 tcm_ext_deactivate_ind_state0n2hdlr},
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */

    {tcm_deactivate_ind_hdlr, tcm_error_handler, tcm_deactivate_ind_hdlr}, // MSG_ID_SMREG_PDP_DEACTIVATE_IND
    {tcm_deactivate_cnf_hdlr, tcm_error_handler, tcm_deactivate_cnf_hdlr}, // MSG_ID_SMREG_PDP_DEACTIVATE_CNF

    {tcm_error_handler,                 tcm_error_handler,                 tcm_ratdm_config_cnf_state2hdlr}, // MSG_ID_TCM_RATDM_CONFIG_CNF = MSG_TAG_TCM_FIRST_MSG_AFFECT_DATA_PLANE_FSM
    {tcm_ratdm_deconfig_cnf_state0hdlr, tcm_ratdm_deconfig_cnf_state1hdlr, tcm_ratdm_deconfig_cnf_state2hdlr}, // MSG_ID_TCM_RATDM_DECONFIG_CNF = MSG_TAG_TCM_LAST_MSG_AFFECT_DATA_PLANE_FSM

    {tcm_link_free_state0hdlr, tcm_error_handler, tcm_error_handler}, // MSG_ID_TAF_LINK_FREE_IND = MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM
};


static const kal_uint16 mmi_check_tcm_arr
[MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM - MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM + 1] =
{
    sizeof(mmi_ext_pdp_activate_ind_struct),
    sizeof(tcm_pdp_activate_req_struct),
    sizeof(smreg_pdp_activate_ind_struct),
    sizeof(smreg_pdp_activate_cnf_struct),
    sizeof(smreg_pdp_activate_rej_struct),
    sizeof(smreg_pdp_activate_sec_cnf_struct),
    sizeof(smreg_pdp_activate_sec_rej_struct),
    sizeof(tcm_pdp_activate_rej_rsp_struct),
    sizeof(stack_timer_struct),
    sizeof(tcm_pdp_modify_req_struct),
    sizeof(smreg_pdp_modify_ind_struct),
    sizeof(smreg_pdp_modify_cnf_struct),
    sizeof(smreg_pdp_modify_rej_struct),
    sizeof(tcm_pdp_deactivate_req_struct),
    sizeof(tcm_pdp_reactivate_req_struct),
    sizeof(mmi_ext_pdp_deactivate_ind_struct),
    sizeof(smreg_pdp_deactivate_ind_struct),
    sizeof(smreg_pdp_deactivate_cnf_struct),
    sizeof(tcm_ratdm_config_cnf_struct),
    sizeof(tcm_ratdm_deconfig_cnf_struct),
    sizeof(mmi_link_free_ind_struct)
} ;


kal_bool tcm_check_msg( ilm_struct *ilm_ptr )
{
    kal_bool                       ret_val = KAL_TRUE;
    mmi_nsapi_cntxt_id_cast_struct *msg_ptr = NULL;

    //TCM_FN_ENTRY_LOG( MOD_MMI, MMI_FN_ENTER_MMI_CHECK_MSG_SUBOP);

#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(!( ((MSG_TAG_TCM_FIRST_PHASE_OUT_MSG <= ilm_ptr->msg_id) && (MSG_TAG_TCM_LAST_PHASE_OUT_MSG >= ilm_ptr->msg_id))));
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    if ( ilm_ptr->local_para_ptr != NULL )
    {

        /* Next check whether the message received has a local_para_ptr
         * not equal to NULL. In case if its NULL then the message is
         * corrupted and an error is logged.
         */

        if(  ilm_ptr->msg_id >= MSG_ID_TCM_CODE_BEGIN &&
                ilm_ptr->msg_id <= MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM )
        {

            /* Now switch on the msg_id field of the received message. In
             * each case check whether the size of the received message is
             * equal to what was expected. In case if its not then log an
             * error that the message is corrupted.
             */
            if ( ilm_ptr->local_para_ptr->msg_len == mmi_check_tcm_arr[ilm_ptr->msg_id - MSG_ID_TCM_CODE_BEGIN] )
            {
                if((ilm_ptr->msg_id >= MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM) &&
                        (ilm_ptr->msg_id <= MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM))
                {
                    switch(ilm_ptr->msg_id)
                    {

                    case MSG_ID_SMREG_PDP_ACTIVATE_IND :
                    {
                        // don't check these messages
                        break;
                    }

                    /* for all the messages that are received with nsapi as
                     * parameter check whether the nsapi field is not
                     * corrupted.
                     */
                    case MSG_ID_SMREG_PDP_ACTIVATE_CNF :
                    case MSG_ID_SMREG_PDP_ACTIVATE_REJ :
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF :
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ :
                    case MSG_ID_SMREG_PDP_MODIFY_IND :
                    case MSG_ID_SMREG_PDP_MODIFY_CNF :
                    case MSG_ID_SMREG_PDP_MODIFY_REJ :
                    {
                        msg_ptr =
                            (mmi_nsapi_cntxt_id_cast_struct *)
                            ilm_ptr->local_para_ptr;
                        /* Check whether the nsapi is corrupted or not */
                        if(!tcm_nsapi_check(msg_ptr->id))
                        {
                            ret_val = KAL_FALSE;
                        }
                        break;
                    }

                    /* for all the messages that are received with context_id as
                     * parameter check whether the context_id field is not
                     * corrupted.
                     */
                    case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND :
                    case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND :
                    case MSG_ID_TAF_LINK_FREE_IND :
                    case MSG_ID_TCM_PDP_ACTIVATE_REQ :
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP :
                    case MSG_ID_TCM_TIMER_EXPIRY :
                    case MSG_ID_TCM_PDP_MODIFY_REQ :
                    case MSG_ID_TCM_PDP_DEACTIVATE_REQ :
                    case MSG_ID_TCM_PDP_REACTIVATE_REQ :
                    {
                        if(MSG_ID_TCM_PDP_ACTIVATE_REQ == ilm_ptr->msg_id)
                        {
                            //kal_uint8 linked_context_id = 0;

                            tcm_pdp_activate_req_struct *local_ptr =
                                (tcm_pdp_activate_req_struct *)
                                ilm_ptr->local_para_ptr;

#ifdef __TCM_NEW_ARCH_DEBUG__
                            ASSERT(TCM_PDP_ACT_REQ_EXTRA_PARAMETER_ENUM_LIMIT > local_ptr->additional_para_type);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

#ifdef __APP_SECONDARY_PDP_SUPPORT__
#else // #ifdef __APP_SECONDARY_PDP_SUPPORT__
                            // if the __APP_SECONDARY_PDP_SUPPORT__ is not defined, the gprs_pf_num must be zero
                            ASSERT(local_ptr->gprs_pf_num == 0);
#endif // ~ #ifdef __APP_SECONDARY_PDP_SUPPORT__

#ifdef __TCM_NEW_ARCH_DEBUG__
#if ((defined(__UPS_SUPPORT__)) || (defined(__CMUX_SUPPORT__)) || defined(__TCM_UT__)) // only in 3G load we UT on TCM
#else // #if ( (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)) ) // only in 3G load we UT on TCM
                            ASSERT(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID != local_ptr->additional_para_type);
#endif // ~ #ifndef __NDIS_SUPPORT__
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

                        }
                        msg_ptr =
                            (mmi_nsapi_cntxt_id_cast_struct *)
                            ilm_ptr->local_para_ptr;
                        /* Check whether the context_id is corrupted or not */
                        if(!tcm_cntxt_id_check(msg_ptr->id))
                        {
                            ret_val = KAL_FALSE;
                        }
                        break;
                    }

                    case MSG_ID_SMREG_PDP_DEACTIVATE_IND :
                    case MSG_ID_SMREG_PDP_DEACTIVATE_CNF :
                    {
                        /* Related checking has been moved to tcm_main(). */
                        break ;
                    }

                    case MSG_ID_TCM_RATDM_CONFIG_CNF :
                    {
                        tcm_ratdm_config_cnf_struct *msg_ptr = NULL;
                        msg_ptr = (tcm_ratdm_config_cnf_struct *)
                                  ilm_ptr->local_para_ptr;

                        if(KAL_TRUE == msg_ptr->result)
                        {
                            /* Check whether the nsapi is corrupted or not */
                            if(!(tcm_nsapi_check(msg_ptr->nsapi)))
                            {
                                ret_val = KAL_FALSE;
#ifdef __TCM_NEW_ARCH_DEBUG__
                                ASSERT(0);
#endif // ~ __TCM_NEW_ARCH_DEBUG__
                            }

                            /* Check whether the context_id is corrupted or not */
                            if(!tcm_cntxt_id_check(msg_ptr->context_id))
                            {
                                ret_val = KAL_FALSE;
#ifdef __TCM_NEW_ARCH_DEBUG__
                                ASSERT(0);
#endif // ~ __TCM_NEW_ARCH_DEBUG__
                            }
                        }
                        break;
                    }

                    case MSG_ID_TCM_RATDM_DECONFIG_CNF :
                    {
                        tcm_ratdm_deconfig_cnf_struct *msg_ptr = NULL;
                        msg_ptr = (tcm_ratdm_deconfig_cnf_struct *)
                                  ilm_ptr->local_para_ptr;

#ifdef __TCM_NEW_ARCH_DEBUG__
                        if(
#ifdef PPP_NOT_PRESENT
                            (MOD_RATDM != msg_ptr->module_id)
#else
                            (MOD_PPP != msg_ptr->module_id)
#endif
#ifdef __UPS_SUPPORT__
                            && (MOD_UPS != msg_ptr->module_id)
#else
                            && (MOD_RATDM != msg_ptr->module_id )
#endif
#ifdef __CMUX_SUPPORT__
                            && (MOD_CMUX != msg_ptr->module_id)
#endif
                        )
                        {
                            ASSERT(0);
                        }
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

                        if(KAL_TRUE == msg_ptr->result)
                        {
                            /* Check whether the nsapi is corrupted or not */
                            if(!(tcm_nsapi_check(msg_ptr->nsapi)))
                            {
                                ret_val = KAL_FALSE;
#ifdef __TCM_NEW_ARCH_DEBUG__
                                ASSERT(0);
#endif // ~ __TCM_NEW_ARCH_DEBUG__
                            }

                            /* Check whether the context_id is corrupted or not */
                            if(!tcm_cntxt_id_check(msg_ptr->context_id))
                            {
                                ret_val = KAL_FALSE;
#ifdef __TCM_NEW_ARCH_DEBUG__
                                ASSERT(0);
#endif // ~ __TCM_NEW_ARCH_DEBUG__
                            }
                        }
                        break;
                    }
                    default :
                    {
                        /* Should not indicate an error here because the
                         * received message could be for the mobility FSM.
                         */
#ifndef __MTK_TARGET__
                        ASSERT(0);
#else // #ifndef __MTK_TARGET__
                        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_CHECK_MSG_ABNORMAL, ilm_ptr->msg_id);
#endif // ~ #ifndef __MTK_TARGET__
                        break;
                    }
                    }
                }
            }
            else
            {
                // the msg length is not correct
                ret_val = KAL_FALSE;
            }
        }
    }

    //TCM_FN_NORMAL_EXIT_LOG( MOD_MMI, MMI_FN_EXIT_MMI_CHECK_MSG_SUBOP);
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_CHECK_MSG_RETURN_VALUE, ret_val);
    return(ret_val);
}


/** Preserve pdp context by modifying max bitrates to zero. */
void tcm_preserve_ind_hdlr( ilm_struct *ilm_ptr )
{
    kal_uint8                   sib_id, i;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    smreg_pdp_preserve_ind_struct *msg_ptr = NULL;
    //peer_buff_struct   *peer_buff_ptr = NULL;

    msg_ptr = (smreg_pdp_preserve_ind_struct *)ilm_ptr->local_para_ptr;
    //peer_buff_ptr = ilm_ptr->peer_buff_ptr;

    for (i =0 ; i<(msg_ptr->no_of_nsapis) ; i++)
    {
        /* Get sib_id from nsapi */
        sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[i]);

        /* Check whether the context is active */
        if( (sib_id == 0xFF) ||
                (TCM_PTR(cntxt_flag)[sib_id] == TCM_CNTXT_INVALID) ||
                (TCM_PTR(sib_tab)[sib_id].main_state != TCM_CONTEXT_ACTIVE_STATE) )
        {
            kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
        }
        else
        {
            /* Get the session information for this context */
            si_db_ptr = tcm_get_sib_ptr( sib_id );
            si_db_ptr->neg_qos.max_bitrate_up_lnk = MAX_BIT_RATE_UPLINK_ZERO;
            si_db_ptr->neg_qos.max_bitrate_down_lnk = MAX_BIT_RATE_DOWNLINK_ZERO;
        }
    }

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

    return;
}


/** Reestablish pdp by modifying max bitrates to non-zero. */
void tcm_reestablish_ind_hdlr( ilm_struct *ilm_ptr )
{
    kal_uint8                 sib_id, i;
    SESSION_INFO_PTR          si_db_ptr = NULL;
    smreg_pdp_reestablish_ind_struct *msg_ptr = NULL;
    //peer_buff_struct   *peer_buff_ptr = NULL;

    msg_ptr = (smreg_pdp_reestablish_ind_struct *)ilm_ptr->local_para_ptr;
    //peer_buff_ptr = ilm_ptr->peer_buff_ptr;

    for (i =0 ; i<(msg_ptr->no_of_nsapis) ; i++)
    {
        /* Get sib_id from nsapi */
        sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[i]);

        /* Check whether the context is active */
        if( (sib_id == 0xFF) ||
                (TCM_PTR(cntxt_flag)[sib_id] == TCM_CNTXT_INVALID) ||
                (TCM_PTR(sib_tab)[sib_id].main_state != TCM_CONTEXT_ACTIVE_STATE) )
        {
            kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
        }
        else
        {
            si_db_ptr = tcm_get_sib_ptr( sib_id );
            si_db_ptr->mod_type = REQ_QOS_MOD;
            tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_MODIFY_REQ,
                                si_db_ptr,
                                (void *)NULL,
                                (void *)NULL );
        }
    }
    return;
}

#ifdef __HSDPA_SUPPORT__
void tcm_ratdm_ps_bearer_capability_ind_hdlr(ilm_struct * ilm_ptr)
{
    tcm_ratdm_ps_bearer_capability_ind_struct *msg_ptr = NULL;
    kal_uint8           index = 0;

    msg_ptr = (tcm_ratdm_ps_bearer_capability_ind_struct*)ilm_ptr->local_para_ptr;

    /* TCM updates bearer capabilities in its context and sends primtive to L4C.
     * Then, L4C uses callback function to get bearer capabilities for all contexts.
     */

    /* Poying: Update bearer capabilities in TCM context. */
    for(index = 0; index < msg_ptr->no_of_nsapis; index++)
    {
        kal_uint8  context_id = tcm_nsapi_to_cid(msg_ptr->nsapi_list[index]) ;

        if (context_id == TCM_INVALID_CONTEXT_ID)
        {
            kal_brief_trace( TRACE_WARNING, TCM_H_ICON_INVALID_CONTEXT_ID, context_id);
            continue ;
        }
        else
        {
            SESSION_INFO_PTR  sib_ptr = NULL ;

            sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, context_id) ) ;
            tcm_change_data_speed_state(sib_ptr, msg_ptr->capability[index]) ;
        }
    }

    /* Poying: Send primitive to L4C to trigger callback function. */
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_BEARER_CAPABILITY_IND, NULL, NULL);

#ifdef __MODEM_EM_MODE__  /* Poying: EM_MODE. */
    tcm_send_em_context_info() ;
#endif

    for(index = 0; index < TCM_TOT_CONTEXT; index++)
    {
        SESSION_INFO_PTR  sib_ptr = NULL ;

        sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, (index+1)) );
        kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_H_ICON_CONTEXT_ID_AND_BEARER_CAPABILITY, (index+1), sib_ptr->data_speed);
    }
}
#endif /* __HSDPA_SUPPORT__ */


void tcm_cntxt_data_fsm( ilm_struct *ilm_ptr )
{
    kal_uint8                      sib_id;
    SESSION_INFO_PTR               si_db_ptr = NULL;
    mmi_nsapi_cntxt_id_cast_struct *msg_ptr = NULL;

    TCM_FN_ENTRY_LOG( MOD_TCM, MMI_FN_ENTER_TCM_CNTXT_DATA_FSM_SUBOP);

    switch( ilm_ptr->msg_id )
    {
    case MSG_ID_SMREG_PDP_DEACTIVATE_IND :
    {
        smreg_pdp_deactivate_ind_struct *msg_ptr = NULL;

        msg_ptr = (smreg_pdp_deactivate_ind_struct *)ilm_ptr->local_para_ptr;

        if (msg_ptr->tot_valid_nsapi != 1)
        {
            DEBUG_ASSERT(0) ;
            msg_ptr->tot_valid_nsapi = 1 ;
        }

        sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[0]);

        // Ignore this message if NSAPI is invalid
        if(0xFF == sib_id)
            return;

        break;
    }
    case MSG_ID_SMREG_PDP_DEACTIVATE_CNF :
    {
        smreg_pdp_deactivate_cnf_struct *msg_ptr = NULL;

        msg_ptr = (smreg_pdp_deactivate_cnf_struct *)ilm_ptr->local_para_ptr;

        if (msg_ptr->tot_valid_nsapi != 1)
        {
            DEBUG_ASSERT(0) ;
            msg_ptr->tot_valid_nsapi = 1;
        }

        sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[0]);

        // Ignore this message if NSAPI is invalid
        if(0xFF == sib_id)
            return;

        break;
    }
    case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND :
    case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND :
    case MSG_ID_TAF_LINK_FREE_IND :
    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP :
    case MSG_ID_TCM_PDP_MODIFY_REQ :
    case MSG_ID_TCM_PDP_DEACTIVATE_REQ :
    case MSG_ID_TCM_PDP_ACTIVATE_REQ :
    {
        // Here all these messages will have context_id as parameters.
        msg_ptr = (mmi_nsapi_cntxt_id_cast_struct *)ilm_ptr->local_para_ptr;

        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->id);
        DEBUG_ASSERT(sib_id < TCM_TOT_CONTEXT);

        break;
    }
#ifdef __APP_SECONDARY_PDP_SUPPORT__
    case MSG_ID_TCM_PDP_REACTIVATE_REQ:
    {
        tcm_pdp_reactivate_req_struct *msg_ptr;

        msg_ptr = (tcm_pdp_reactivate_req_struct *)ilm_ptr->local_para_ptr;
        // Get the sib_id from the context id.
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
        // Ignore this message if NSAPI is invalid
        if(0xFF == sib_id)
            return;
        break;
    }
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */
    case MSG_ID_TCM_RATDM_CONFIG_CNF:
    {
        tcm_ratdm_config_cnf_struct * msg_ptr = (tcm_ratdm_config_cnf_struct *)ilm_ptr->local_para_ptr;
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
        if(0xFF == sib_id)
            return;
        break;
    }
    case MSG_ID_TCM_RATDM_DECONFIG_CNF:
    {
        tcm_ratdm_deconfig_cnf_struct * msg_ptr = (tcm_ratdm_deconfig_cnf_struct *)ilm_ptr->local_para_ptr;
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
        if(0xFF == sib_id)
            return;
        break;
    }
    default :
    {
        // All the other messages will have nsapi as parameters
        msg_ptr =
            (mmi_nsapi_cntxt_id_cast_struct *)ilm_ptr->local_para_ptr;

        // Get the sib_id from the extracted nsapi.
        sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->id);

        // Ignore this message if NSAPI is invalid
        if(0xFF == sib_id)
            return;

        break;
    }
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    if(si_db_ptr->is_sib_defined == TCM_SIB_IN_USE)
    {
        /* Go to the handler based on the current state and message */
        ASSERT(ilm_ptr->msg_id <= MSG_TAG_TCM_LAST_MSG_AFFECT_MAIN_FSM);

        tcm_record_rcvd_msg_and_current_sib_state(ilm_ptr->msg_id, si_db_ptr);

        ( *(tcm_cntxt_data_ft[ilm_ptr->msg_id - MSG_TAG_TCM_FIRST_MSG_AFFECT_MAIN_FSM][si_db_ptr->main_state]) )
        ( ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);

        tcm_change_state_according_to_happened_events(si_db_ptr, ilm_ptr);

        kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_ALL_STATE_TRACE,
                         si_db_ptr->context_id,
                         si_db_ptr->main_state,
                         si_db_ptr->sub_state,
                         si_db_ptr->data_plane_state );

    }
    else
    {
        kal_brief_trace(TRACE_WARNING, TCM_SIB_NOT_DEFINED);
    }

    TCM_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_CNTXT_DATA_FSM_SUBOP );

    return;
}


void tcm_record_rcvd_msg_and_current_sib_state(msg_type msg_id, SESSION_INFO_PTR si_db_ptr)
{
    kal_uint8 index;

#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(KAL_FALSE == tcm_ptr_g->record_sent_msg); // TODO: can remove this debug assert
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    // clear or set all context
    tcm_ptr_g->record_sent_msg = KAL_TRUE; // start to record sent messages
    tcm_ptr_g->rcvd_fsm_msg = msg_id; // set context
    tcm_ptr_g->main_state_when_rcv_fsm_msg = si_db_ptr->main_state; // set context
    tcm_ptr_g->sub_state_when_rcv_fsm_msg = si_db_ptr->sub_state; // set context
    tcm_ptr_g->data_plane_state_when_rcv_fsm_msg = si_db_ptr->data_plane_state; // set context
    for(index = 0; index < TCM_MAX_RECORDING_MSGS_NUM; index ++)
    {
        tcm_ptr_g->sent_fsm_msgs[index] = MSG_ID_INVALID_TYPE; // reset to default value
    }
    tcm_ptr_g->can_send_data_plane_config_req = KAL_FALSE;

    kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_RECORD_RCVD_MSG_AND_CURRENT_SIB_STATE,
                     si_db_ptr->context_id,
                     tcm_ptr_g->main_state_when_rcv_fsm_msg,
                     tcm_ptr_g->sub_state_when_rcv_fsm_msg,
                     tcm_ptr_g->data_plane_state_when_rcv_fsm_msg );

}


void tcm_change_state_according_to_happened_events(SESSION_INFO_PTR si_db_ptr, ilm_struct *ilm_ptr)
{
    kal_uint8 index;

    // Part 1: stop to recording sent msgs
    tcm_ptr_g->record_sent_msg = KAL_FALSE; // after processing fsm related msgs, clear the flag

    // Part 2: change state
    switch(tcm_ptr_g->main_state_when_rcv_fsm_msg)
    {
    case TCM_CONTEXT_INACTIVE_STATE:
    {
        switch(tcm_ptr_g->sub_state_when_rcv_fsm_msg)
        {
        case TCM_CONTEXT_INACTIVE_NULL_STATE:
        {
            {
                switch(tcm_ptr_g->rcvd_fsm_msg)
                {
                case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
                case MSG_ID_TCM_PDP_ACTIVATE_REQ:
                {
                    kal_bool has_sent_act_req = KAL_FALSE;
                    kal_bool has_sent_act_sec_req = KAL_FALSE;

                    has_sent_act_req = tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_ACTIVATE_REQ);
                    has_sent_act_sec_req = tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_ACTIVATE_SEC_REQ);

                    if((KAL_TRUE == has_sent_act_req) || (KAL_TRUE == has_sent_act_sec_req))
                    {
                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE);
                    }

                    break;
                }
                case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                case MSG_ID_TCM_PDP_MODIFY_REQ:
                    //case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                {
                    // do nothing
                    break;
                }
                case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                {
                    /* Poying: Clear TCM context. */
                    /* Check tcm_ext_deactivate_ind_state0n2hdlr () */
                    tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    break;
                }
                case MSG_ID_TCM_RATDM_CONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF, ilm_ptr);
                    break;
                }
                case MSG_ID_TCM_RATDM_DECONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF, ilm_ptr);
                    break;
                }
                case MSG_ID_TAF_LINK_FREE_IND:
                {
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);
                    break;
                }
                default:
                    /*
                    case MSG_ID_SMREG_PDP_ACTIVATE_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_REJ:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
                    case MSG_ID_TCM_TIMER_EXPIRY:
                    case MSG_ID_SMREG_PDP_MODIFY_IND:
                    case MSG_ID_SMREG_PDP_MODIFY_REJ:
                    case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                    case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_IND: // this is handled in main function
                    {
                        kal_bool has_sent_act_ind = KAL_FALSE;

                        has_sent_act_ind = tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TCM_PDP_ACTIVATE_IND);

                        if(KAL_TRUE == has_sent_act_ind)
                        {
                            tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_WAIT_AP_RSP_STATE);
                            tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);
                        }

                        break;
                    }
                    */
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0);
                    //break;
                }
                }
            }
            break;
        }

        case TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE:
        {
            {
                switch(tcm_ptr_g->rcvd_fsm_msg)
                {
                case MSG_ID_SMREG_PDP_ACTIVATE_CNF:
                case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                {
                    if(tcm_ptr_g->can_send_data_plane_config_req == KAL_TRUE)
                    {
                        tcm_ratdm_config_req_struct * local_para_ptr = (tcm_ratdm_config_req_struct *)
                                construct_local_para(sizeof(tcm_ratdm_config_req_struct), TD_RESET);

                        local_para_ptr->context_id = si_db_ptr->context_id;
                        local_para_ptr->nsapi = si_db_ptr->nsapi;
						
						tcm_activate_cnf_aux_proc(si_db_ptr);

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef PPP_NOT_PRESENT
/* under construction !*/
#else
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
#ifdef __UPS_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif  // ~ #ifdef __UPS_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #if 0

                        local_para_ptr->module_id = tcm_decide_app_module(si_db_ptr);

#if defined(__MASE__) && defined(__SMART_PHONE_MODEM__)
                        local_para_ptr->module_id = MOD_UPS;
#endif

                        si_db_ptr->nsapi_for_tcm_ratdm_deconfig_req_use = local_para_ptr->nsapi;
                        tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_CONFIG_REQ, (local_para_struct *)local_para_ptr, NULL);
                        tcm_ptr_g->can_send_data_plane_config_req = KAL_FALSE;
                        tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_CONFIG_REQ, ilm_ptr);

                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_WAITING_DATA_PLANE_CONFIG_CNF_STATE);
                    }

                    break;
                }
                case MSG_ID_SMREG_PDP_ACTIVATE_REJ:
                case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                {
                    if( (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TCM_PDP_ACTIVATE_REJ))
                            ||
                            (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_ACTIVATE_REJ_RSP))
                      )
                    {
                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);
                    }

                    /* Poying: Clear TCM context. */
                    if (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_ACTIVATE_REJ_RSP))
                    {
                        tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    }
                    break;
                }
                case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
                case MSG_ID_TCM_PDP_ACTIVATE_REQ:
                case MSG_ID_TCM_PDP_MODIFY_REQ:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                case MSG_ID_SMREG_PDP_MODIFY_REJ:
                case MSG_ID_TAF_LINK_FREE_IND:
                {
                    // do nothing
                    break;
                }
                case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                {
                    if(KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_DEACTIVATE_REQ))
                    {
                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE);
                    }
                    break;
                }
                case MSG_ID_TCM_RATDM_DECONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF, ilm_ptr);
                    break;
                }
                default:
                    /*
                    case MSG_ID_SMREG_PDP_ACTIVATE_IND:
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
                    case MSG_ID_TCM_TIMER_EXPIRY:
                    case MSG_ID_SMREG_PDP_MODIFY_IND:
                    case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                    case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                    case MSG_ID_TCM_RATDM_CONFIG_CNF:
                    */
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0);
                    //break;
                }
                }
            }

            break;
        }
        default:
        {
            TCM_INTERNAL_DEBUG_ASSERT(0);
            //break;
        }
        }
        break;
    }
    case TCM_CONTEXT_WAIT_AP_RSP_STATE:
    {

//            switch(tcm_ptr_g->sub_state_when_rcv_fsm_msg)
//            {
        {
            switch(tcm_ptr_g->rcvd_fsm_msg)
            {
            case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
            case MSG_ID_TCM_PDP_ACTIVATE_REQ:
            {
                if(KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_ACTIVATE_REQ))
                {
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE);
                }
                break;
            }
            case MSG_ID_TCM_TIMER_EXPIRY:
            case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
            case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
            {
                if(KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP))
                {
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);
                }
                break;
            }
            case MSG_ID_TCM_RATDM_DECONFIG_CNF:
            {
                tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF, ilm_ptr);
                break;
            }
            default:
                /*
                case MSG_ID_SMREG_PDP_ACTIVATE_IND:
                case MSG_ID_SMREG_PDP_ACTIVATE_CNF:
                case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                case MSG_ID_SMREG_PDP_ACTIVATE_REJ:
                case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                case MSG_ID_TCM_PDP_MODIFY_REQ:
                case MSG_ID_SMREG_PDP_MODIFY_IND:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                case MSG_ID_SMREG_PDP_MODIFY_REJ:
                case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                case MSG_ID_TCM_RATDM_CONFIG_CNF:
                case MSG_ID_TAF_LINK_FREE_IND:
                */
            {
                TCM_INTERNAL_DEBUG_ASSERT(0);
                //break;
            }
            }
        }

//            }
        break;
    }
    case TCM_CONTEXT_ACTIVE_STATE:
    {
        switch(tcm_ptr_g->sub_state_when_rcv_fsm_msg)
        {
        case TCM_CONTEXT_ACTIVE_WAITING_DATA_PLANE_CONFIG_CNF_STATE:
        {
            {
                switch(tcm_ptr_g->rcvd_fsm_msg)
                {

                case MSG_ID_SMREG_PDP_MODIFY_IND:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                case MSG_ID_SMREG_PDP_MODIFY_REJ:
                case MSG_ID_TAF_LINK_FREE_IND:
                {
                    // do nothing
                    break;
                }
                case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                {
                    if(KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_DEACTIVATE_REQ))
                    {
                        tcm_ratdm_deconfig_req_struct * local_para_ptr = (tcm_ratdm_deconfig_req_struct *)
                                construct_local_para(sizeof(tcm_ratdm_deconfig_req_struct), TD_RESET);

                        local_para_ptr->context_id = si_db_ptr->context_id;
                        if(TCM_INVALID_NSAPI != si_db_ptr->nsapi)
                        {
                            local_para_ptr->nsapi = si_db_ptr->nsapi;
                        }
                        else
                        {
                            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_NSAPI_ALREADY_FREED_USE_LOCAL_CONTEXT_VALUE);
                            local_para_ptr->nsapi = si_db_ptr->nsapi_for_tcm_ratdm_deconfig_req_use;
                        }

                        if(si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT)
                        {
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content); // MOD_CMUX or MOD_UPS
                            }
                            else
                            {
#ifdef PPP_NOT_PRESENT
                                local_para_ptr->module_id = MOD_RATDM; // PPP Task is not compiled, so need to inform RATDM not to send DL data to MOD_PPP
#else
                                local_para_ptr->module_id = MOD_PPP;
#endif
                            }
                        }
                        else
                        {
                            if(si_db_ptr->context_id > TCM_TOT_CONTEXT)
                            {
                                ASSERT(0);
                            }

                            /* Poying: MAUI_02869303. (usb_tethering) */
                            /* - For RNDIS, there may be another internal PDP context, MOD_UPS. */
#ifdef __UPS_SUPPORT__
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content);
                            }
                            else
#endif  // ~ #ifdef __UPS_SUPPORT__
                            {
                                local_para_ptr->module_id = MOD_RATDM ;
                            }
                        }

                        tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_DECONFIG_REQ, (local_para_struct *)local_para_ptr, NULL);
                        tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ, ilm_ptr);

                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE);
                    }
                    break;
                }
                case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                {
                    if(
                        (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TCM_PDP_DEACTIVATE_IND)) ||
                        (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ) )
                    )
                    {
                        tcm_ratdm_deconfig_req_struct * local_para_ptr = (tcm_ratdm_deconfig_req_struct *)
                                construct_local_para(sizeof(tcm_ratdm_deconfig_req_struct), TD_RESET);

                        local_para_ptr->context_id = si_db_ptr->context_id;
                        if(TCM_INVALID_NSAPI != si_db_ptr->nsapi)
                        {
                            local_para_ptr->nsapi = si_db_ptr->nsapi;
                        }
                        else
                        {
                            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_NSAPI_ALREADY_FREED_USE_LOCAL_CONTEXT_VALUE);
                            local_para_ptr->nsapi = si_db_ptr->nsapi_for_tcm_ratdm_deconfig_req_use;
                        }

                        if(si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT)
                        {
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content); // MOD_CMUX or MOD_UPS
                            }
                            else
                            {
#ifdef PPP_NOT_PRESENT
                                local_para_ptr->module_id = MOD_RATDM; // PPP Task is not compiled, so need to inform RATDM not to send DL data to MOD_PPP
#else
                                local_para_ptr->module_id = MOD_PPP;
#endif
                            }
                        }
                        else
                        {
                            if(si_db_ptr->context_id > TCM_TOT_CONTEXT)
                            {
                                ASSERT(0);
                            }
                            /* Poying: MAUI_02869303. (usb_tethering) */
                            /* - For RNDIS, there may be another internal PDP context, MOD_UPS. */
#ifdef __UPS_SUPPORT__
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content);
                            }
                            else
#endif  // ~ #ifdef __UPS_SUPPORT__
                            {
                                local_para_ptr->module_id = MOD_RATDM ;
                            }
                        }

                        tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_DECONFIG_REQ, (local_para_struct *)local_para_ptr, NULL);
                        tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ, ilm_ptr);

                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);

                    }

                    /* Poying: Clear TCM context. */
                    if (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ))
                    {
                        tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    }

                    break;
                }
                case MSG_ID_TCM_RATDM_CONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF, ilm_ptr);
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_DATA_STATE);
                    break;
                }
                default:
                    /*
                    case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
                    case MSG_ID_TCM_PDP_ACTIVATE_REQ:
                    case MSG_ID_SMREG_PDP_ACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_ACTIVATE_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_REJ:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
                    case MSG_ID_TCM_TIMER_EXPIRY:
                    case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                    case MSG_ID_TCM_RATDM_DECONFIG_CNF:
                    case MSG_ID_TCM_PDP_MODIFY_REQ:
                    case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                    */
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0);
                    //break;
                }
                }
            }

            break;
        }
        case TCM_CONTEXT_ACTIVE_DATA_STATE:
        {
            {
                switch(tcm_ptr_g->rcvd_fsm_msg)
                {
                case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
                case MSG_ID_TCM_PDP_ACTIVATE_REQ:
                case MSG_ID_TCM_PDP_MODIFY_REQ:
                case MSG_ID_SMREG_PDP_MODIFY_IND:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                case MSG_ID_SMREG_PDP_MODIFY_REJ:
                case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                case MSG_ID_TAF_LINK_FREE_IND: //MAUI_02303775
                {
                    // do nothing
                    break;
                }
                case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                {
                    if(KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_SMREG_PDP_DEACTIVATE_REQ))
                    {
                        tcm_ratdm_deconfig_req_struct * local_para_ptr = (tcm_ratdm_deconfig_req_struct *)
                                construct_local_para(sizeof(tcm_ratdm_deconfig_req_struct), TD_RESET);

                        local_para_ptr->context_id = si_db_ptr->context_id;
                        if(TCM_INVALID_NSAPI != si_db_ptr->nsapi)
                        {
                            local_para_ptr->nsapi = si_db_ptr->nsapi;
                        }
                        else
                        {
                            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_NSAPI_ALREADY_FREED_USE_LOCAL_CONTEXT_VALUE);
                            local_para_ptr->nsapi = si_db_ptr->nsapi_for_tcm_ratdm_deconfig_req_use;
                        }

                        if(si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT)
                        {
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content); // MOD_CMUX or MOD_UPS
                            }
                            else
                            {
#ifdef PPP_NOT_PRESENT
                                local_para_ptr->module_id = MOD_RATDM; // PPP Task is not compiled, so need to inform RATDM not to send DL data to MOD_PPP
#else
                                local_para_ptr->module_id = MOD_PPP;
#endif
                            }
                        }
                        else
                        {
                            if(si_db_ptr->context_id > TCM_TOT_CONTEXT)
                            {
                                ASSERT(0);
                            }
                            /* Poying: MAUI_02869303. (usb_tethering) */
                            /* - For RNDIS, there may be another internal PDP context, MOD_UPS. */
#ifdef __UPS_SUPPORT__
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content);
                            }
                            else
#endif  // ~ #ifdef __UPS_SUPPORT__
                            {
                                local_para_ptr->module_id = MOD_RATDM ;
                            }
                        }

                        tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_DECONFIG_REQ, (local_para_struct *)local_para_ptr, NULL);
                        tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ, ilm_ptr);

                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE);

                    }
                    break;
                }
                case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                {
                    if(
                        (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TCM_PDP_DEACTIVATE_IND))
                        ||
                        (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ))
                    )
                    {
                        tcm_ratdm_deconfig_req_struct * local_para_ptr = (tcm_ratdm_deconfig_req_struct *)
                                construct_local_para(sizeof(tcm_ratdm_deconfig_req_struct), TD_RESET);

                        local_para_ptr->context_id = si_db_ptr->context_id;
                        if(TCM_INVALID_NSAPI != si_db_ptr->nsapi)
                        {
                            local_para_ptr->nsapi = si_db_ptr->nsapi;
                        }
                        else
                        {
                            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_NSAPI_ALREADY_FREED_USE_LOCAL_CONTEXT_VALUE);
                            local_para_ptr->nsapi = si_db_ptr->nsapi_for_tcm_ratdm_deconfig_req_use;
                        }

                        if(si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT)
                        {
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content); // MOD_CMUX or MOD_UPS
                            }
                            else
                            {
#ifdef PPP_NOT_PRESENT
                                local_para_ptr->module_id = MOD_RATDM; // PPP Task is not compiled, so need to inform RATDM not to send DL data to MOD_PPP
#else
                                local_para_ptr->module_id = MOD_PPP;
#endif
                            }
                        }
                        else
                        {
                            if(si_db_ptr->context_id > TCM_TOT_CONTEXT)
                            {
                                ASSERT(0);
                            }
                            /* Poying: MAUI_02869303. (usb_tethering) */
                            /* - For RNDIS, there may be another internal PDP context, MOD_UPS. */
#ifdef __UPS_SUPPORT__
                            if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
                            {
                                local_para_ptr->module_id = (module_type)(si_db_ptr->additional_para_content);
                            }
                            else
#endif  // ~ #ifdef __UPS_SUPPORT__
                            {
                                local_para_ptr->module_id = MOD_RATDM ;
                            }
                        }

                        tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_DECONFIG_REQ, (local_para_struct *)local_para_ptr, NULL);
                        tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ, ilm_ptr);

                        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);

                    }

                    /* Poying: Clear TCM context. */
                    if ( (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP))
                            || (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ)) )
                    {
                        tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    }
                    break;
                }
                default:
                    /*
                    case MSG_ID_SMREG_PDP_ACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_ACTIVATE_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_REJ:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
                    case MSG_ID_TCM_TIMER_EXPIRY:
                    case MSG_ID_TCM_RATDM_CONFIG_CNF:
                    case MSG_ID_TCM_RATDM_DECONFIG_CNF:
                    */
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0);
                    //break;
                }
                }
            }

            break;
        }
        case TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE:
        {
            {
                switch(tcm_ptr_g->rcvd_fsm_msg)
                {

                case MSG_ID_TCM_PDP_ACTIVATE_REQ:
                case MSG_ID_SMREG_PDP_ACTIVATE_CNF: // MAUI_03149331
                case MSG_ID_SMREG_PDP_ACTIVATE_REJ: // MAUI_03149331
                case MSG_ID_TCM_PDP_MODIFY_REQ:
                case MSG_ID_SMREG_PDP_MODIFY_IND:
                case MSG_ID_SMREG_PDP_MODIFY_CNF:
                case MSG_ID_SMREG_PDP_MODIFY_REJ:
                case MSG_ID_SMREG_PDP_DEACTIVATE_IND:
                case MSG_ID_TAF_LINK_FREE_IND:
                {
                    // do nothing
                    break;
                }
                case MSG_ID_SMREG_PDP_DEACTIVATE_CNF:
                {
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);

                    /* Poying: Clear TCM context. */
                    if (KAL_TRUE == tcm_check_sent_msgs_contain_these_msgs(MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP))
                    {
                        tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    }

                    break;
                }
                case MSG_ID_TCM_RATDM_CONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF, ilm_ptr);
                    break;
                }
                case MSG_ID_TCM_RATDM_DECONFIG_CNF:
                {
                    tcm_data_plane_fsm_event_occur(si_db_ptr, TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF, ilm_ptr);
                    break;
                }
                default:
                    /*
                    case MSG_ID_TAF_EXT_PDP_ACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_ACTIVATE_IND:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_CNF:
                    case MSG_ID_SMREG_PDP_ACTIVATE_SEC_REJ:
                    case MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP:
                    case MSG_ID_TCM_TIMER_EXPIRY:
                    case MSG_ID_TCM_PDP_DEACTIVATE_REQ:
                    case MSG_ID_TCM_PDP_REACTIVATE_REQ:
                    case MSG_ID_TAF_EXT_PDP_DEACTIVATE_IND:
                    */
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0);
                    //break;
                }
                }
            }

            break;
        }
        default:
        {
            TCM_INTERNAL_DEBUG_ASSERT(0);
            //break;
        }
        }
        break;
    }
    default:
    {
        TCM_INTERNAL_DEBUG_ASSERT(0);
        //break;
    }

    }


    // Part 3: reset some parameter to default value
    for(index = 0; index < TCM_MAX_RECORDING_MSGS_NUM; index ++)
    {
        tcm_ptr_g->sent_fsm_msgs[index] = MSG_ID_INVALID_TYPE; // reset to default value
    }
}


module_type tcm_decide_app_module( SESSION_INFO_PTR si_db_ptr )
{
    ASSERT(NULL != si_db_ptr);

    if(si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT)
    {
        if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
        {
            return (module_type)(si_db_ptr->additional_para_content); // MOD_CMUX or MOD_UPS
        }
        else
        {
#ifdef PPP_NOT_PRESENT
            return MOD_RATDM; // PPP Task is not compiled, so need to inform RATDM not to send DL data to MOD_PPP
#else
            return MOD_PPP;
#endif
        }
    }
    else
    {
        if(si_db_ptr->context_id > TCM_TOT_CONTEXT)
        {
            ASSERT(0);
        }

        /* Poying: MAUI_02869303. (usb_tethering) */
        /* - For RNDIS, there may be another internal PDP context, MOD_UPS. */
#ifdef __UPS_SUPPORT__
        if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == si_db_ptr->additional_para_type)
        {
            return (module_type)(si_db_ptr->additional_para_content);
        }
        else
#endif  // ~ #ifdef __UPS_SUPPORT__
        {
            return MOD_RATDM ;
        }
    }
}


void tcm_data_plane_fsm_event_occur( SESSION_INFO_PTR si_db_ptr, tcm_data_plane_fsm_event_enum event, ilm_struct *ilm_ptr )
{
    switch(si_db_ptr->data_plane_state)
    {
    case TCM_DATA_PLANE_DECONFIGURED:
    {
#ifdef __TCM_NEW_ARCH_DEBUG__
        ASSERT((TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_CONFIG_REQ == event) || (TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF == event));
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
        if((TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_CONFIG_REQ == event))
        {
            tcm_change_tcm_context_data_plane_state_value(si_db_ptr, TCM_DATA_PLANE_CONFIGURING, ilm_ptr);
        }
    }
    break;
    case TCM_DATA_PLANE_CONFIGURING:
    {
        if(TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF == event)
        {
            tcm_change_tcm_context_data_plane_state_value(si_db_ptr, TCM_DATA_PLANE_CONFIGURED, ilm_ptr);
        }
        else if(TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ == event)
        {
            tcm_change_tcm_context_data_plane_state_value(si_db_ptr, TCM_DATA_PLANE_DECONFIGURING, ilm_ptr);
        }
        else
        {
            ASSERT(0);
        }

    }
    break;
    case TCM_DATA_PLANE_CONFIGURED:
    {
#ifdef __TCM_NEW_ARCH_DEBUG__
        ASSERT(TCM_DATA_PLANE_FSM_EVENT_SND_TCM_RATDM_DECONFIG_REQ == event);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
        tcm_change_tcm_context_data_plane_state_value(si_db_ptr, TCM_DATA_PLANE_DECONFIGURING, ilm_ptr);
    }
    break;
    case TCM_DATA_PLANE_DECONFIGURING:
    {
        if(TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_DECONFIG_CNF == event)
        {
            tcm_change_tcm_context_data_plane_state_value(si_db_ptr, TCM_DATA_PLANE_DECONFIGURED, ilm_ptr);
        }
        else if (TCM_DATA_PLANE_FSM_EVENT_RCV_TCM_RATDM_CONFIG_CNF == event)
        {
            kal_prompt_trace(MOD_TCM, "WARNING: receive RATDM_CONFIG_CNF in deconfiguring state, ignore it"); // TODO: remove kal_prompt_trace
        }
        else
        {
            ASSERT(0);
        }
    }
    break;
    default:
    {
        ASSERT(0);
    }
    break;

    }
}


void tcm_record_sent_fsm_msg( msg_type msg_id )
{

    kal_uint8 index = 0;
    kal_bool recorded = KAL_FALSE;
    kal_uint8 recorded_index = 0;

    switch(msg_id)
    {
    case MSG_ID_NVRAM_WRITE_REQ: // this msg does not affect TCM SIB FSM
    case MSG_ID_NVRAM_READ_REQ: // this msg does not affect TCM SIB FSM
    case MSG_ID_L4CTCM_PS_EVENT_REPORT_IND: // this msg does not affect TCM SIB FSM
    case MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_REQ: // this msg does not affect TCM SIB FSM
    case MSG_ID_TCM_RATDM_RESET_PS_STATISTICS_REQ: // this msg does not affect TCM SIB FSM
        return;
        // not recording the sent msg
    default:
        break;
        // recording the sent msg
    }

    for(index = 0; index < TCM_MAX_RECORDING_MSGS_NUM; index ++)
    {
        if(MSG_ID_INVALID_TYPE == tcm_ptr_g->sent_fsm_msgs[index])
        {
            // find a vacancy, use this vacancy
            tcm_ptr_g->sent_fsm_msgs[index] = msg_id;
            recorded = KAL_TRUE;
            recorded_index = index;
            break; // break this for loop
        }
    }

    if(KAL_TRUE == recorded)
    {
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_RECORD_SENT_FSM_MSG,
                        recorded_index, tcm_ptr_g->sent_fsm_msgs[recorded_index]);
    }
    else
    {
        DEBUG_ASSERT(0);
        kal_brief_trace(TRACE_ERROR, TCM_ERROR_NO_MEMORY_TO_STORE_ADDITIONAL_SENT_MSGS);
    }
}


kal_bool tcm_check_sent_msgs_contain_these_msgs( msg_type msg_to_be_checked )
{
    kal_uint8 index;
    for(index = 0; index < TCM_MAX_RECORDING_MSGS_NUM; index ++)
    {
        if(msg_to_be_checked == tcm_ptr_g->sent_fsm_msgs[index])
        {
            return KAL_TRUE; // find the msg we want
        }
    }

    return KAL_FALSE; // not find the msg we want
}


void tcm_error_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_ERROR_HANDLER);
    return;
}


void tcm_activate_ind_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    // kal_bool                      pdp_check_result = KAL_FALSE;
    kal_bool                      context_free = KAL_FALSE;
    ps_cause_enum                 rej_cause = INSUFF_RESOURCE;
    kal_uint8	  	           context_id = 0xff;
    kal_uint8                     sib_id;  /* Initialized later */
    SESSION_INFO_PTR              si_db_ptr = NULL;
    smreg_pdp_activate_ind_struct *msg_ptr = NULL;
    qos_struct original_req_qos, original_min_qos;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_IND_STATE0_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_activate_ind_struct *)local_para_ptr;

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_activate_ind( msg_ptr) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_ACTIVATE_IND_STATE0_HDLR_SUBOP );
        return;
    }

#ifndef __TCPIP__
    /* Carlson MAUI_01634669 MT6516 Smart Phone FTA 45.2.2-1 fail
         __TCPIP__ is off, should not use internal context, otherwise, L4C will not able to handle it */
    if (KAL_TRUE == tcm_is_test_sim())
    {
        kal_uint8 i =0;
        for(i=0; i<TCM_TOT_EXT_CONTEXT; i++)
        {
            if(TCM_CNTXT_INVALID == tcm_ptr_g->cntxt_flag[i])
            {
                context_id = i+1; // if cntxt_flag[0] is TCM_CNTXT_INVALID, context_id == 1, if cntxt_flag[1] is TCM_CNTXT_INVALID, context_id == 2, ...
                context_free= KAL_TRUE;
                kal_brief_trace(TRACE_INFO, TCM_INFO_TCPIP_COMPILE_OPTION_IS_OFF_USE_CONTEXT, context_id);
                break;
            }
        }
    }
#else
    /* erica : for 3G test case 16.2.1, MT PDP context needs to be deactivated from MO,
            so have to use external context id so AT+CGACT=0 can apply */
#ifdef __EXT_PDP_CONTEXT_ON__ // if the ext PDP support >= 1, the context id 1 belongs to external context id
    if (tcm_is_test_sim() == KAL_TRUE)
    {
        kal_uint8 i =0;
        for(i=0; i<TCM_TOT_EXT_CONTEXT; i++)
        {
            if(TCM_CNTXT_INVALID == tcm_ptr_g->cntxt_flag[i])
            {
                context_id = i+1; // if cntxt_flag[0] is TCM_CNTXT_INVALID, context_id == 1, if cntxt_flag[1] is TCM_CNTXT_INVALID, context_id == 2, ...
                context_free= KAL_TRUE;
                break;
            }
        }
    }
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__

    if(KAL_TRUE != context_free) // keep finding another context
    {
        /* Modified by: CH_Liang 2005.01.25
         * Description: Get free context id from L4C
         */
#ifdef __APP_SECONDARY_PDP_SUPPORT__
        context_free = l4c_find_free_pdp_context(&context_id, 0, 0);
#else
        context_free = l4c_find_free_pdp_context(&context_id, 0);
#endif
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */
    }
#endif

    if ( context_free == KAL_TRUE )
    {
        /* Modified by: CH_Liang 2005.01.25
          * Description: Get the sib_id from the context_id
          */
        sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID, context_id );
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

        ASSERT(sib_id < TCM_TOT_CONTEXT);

        /* Mark the context as valid */
        tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_VALID;

        /* Create a new Sib entry for this context. This call to create
         * sib will not return KAL_FALSE because this code segment will
         * get executed only if a free sib is available. The call to
         * check for a free nsapi ensures this.
         */

        si_db_ptr = tcm_get_sib_ptr( sib_id );

        // keep original qos
        kal_mem_cpy(&original_req_qos, &(si_db_ptr->req_qos), sizeof(qos_struct));
        kal_mem_cpy(&original_min_qos, &(si_db_ptr->min_qos), sizeof(qos_struct));

        tcm_create_sib( sib_id );

        // restore original qos
        kal_mem_cpy(&(si_db_ptr->req_qos), &original_req_qos, sizeof(qos_struct));
        kal_mem_cpy(&(si_db_ptr->min_qos), &original_min_qos, sizeof(qos_struct));

        /* Poying: The pdp_type checking is performed in the previous function: tcm_check_smreg_pdp_activate_ind(). */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

            if (si_db_ptr->data_plane_state == TCM_DATA_PLANE_DECONFIGURED)
            {
                /* If the type check is successful then go ahead with the
                 * network initiated context activation process.
                 */
                /* Update context_id */
                si_db_ptr->context_id = tcm_get_context_id_from_sib_id(sib_id);
                si_db_ptr->token_id = msg_ptr->token_id; /* Update token id */

                /* Modified by: CH_Liang 2005.01.25
                 * Description: update nsapi
                 */
                si_db_ptr->nsapi = TCM_INVALID_NSAPI;
                /* End of Modification, 2005.03.19. Reviewed by: Joseph */

                /* Update pdp address type */
                si_db_ptr->pdp_addr_type =
                    (pdp_addr_type_enum)msg_ptr->pdp_addr_type;

                /* Update pdp address length */
                si_db_ptr->pdp_addr_len =
                    (pdp_addr_len_enum)msg_ptr->pdp_addr_len;

                /* Store the pdp address */
                kal_mem_cpy( (kal_uint8 *)si_db_ptr->addr_val,
                             (kal_uint8 *)msg_ptr->pdp_addr,
                             msg_ptr->pdp_addr_len );

                /* Poying: Should set it as static address allocating. */
                si_db_ptr->addr_scheme = TCM_STATIC_ADDR ;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // #if 0

                /* Update the access point name information */
                si_db_ptr->apn_len = msg_ptr->apn_len;
                kal_mem_cpy( (kal_uint8 *)si_db_ptr->apn,
                             (kal_uint8 *)msg_ptr->access_name,
                             msg_ptr->apn_len );

                si_db_ptr->pcomp_algo = SND_NO_PCOMP;/* Default protocol
                                           * compression algorithm to
                                           * be use.
                                           */
                si_db_ptr->dcomp_algo = SND_NO_DCOMP;/* Default protocol
                                           * decompression algorithm
                                           * to be used.
                                           */
                si_db_ptr->initiated_by = NW_INITIATED; /* Context is network
                                                 * intitated.
                                                 */
                /* Send the activation indication message to ATCI. */
                tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_ACTIVATE_IND,
                                     si_db_ptr,
                                     (void *)&si_db_ptr->context_id );

                tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_WAIT_AP_RSP_STATE);
                tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);

                /* Start the timer to await the respone from ATCI */
                tcm_start_timer( si_db_ptr->context_id );

                /* Update the state of the context to awaiting TE respone */
                //si_db_ptr->main_state = TCM_CONTEXT_WAIT_AP_RSP_STATE;
                //tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_WAIT_AP_RSP_STATE); // do not set fsm in func hdlr
            }
            else
            {
                ASSERT(0) ;   /* Poying: Add to check unexpected conditions. */
            }
    }
    else
    {
        /* Could not find a free context. Reject the activation
         * indication.
         */
        sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID, context_id ); // Klockwork bug fix
        if(0xFF != sib_id) // Gemini Plus UT found bug ??
        {
            si_db_ptr = tcm_get_sib_ptr( sib_id );
        }

        /* The below checking has been moved to tcm_send_msg_to_sm(). */
        //ASSERT(si_db_ptr != NULL) ;

        tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
                            si_db_ptr,
                            (void *)local_para_ptr,
                            &rej_cause );
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_ACTIVATE_IND_STATE0_HDLR_SUBOP );
    return;
}


void tcm_timer_expiry_hdlr( void *param )
{
    tcm_event_info_struct   *tcm_event_info_ptr = NULL ;
    SESSION_INFO_PTR         si_db_ptr = NULL;
    kal_uint8                sib_id;
    kal_uint8                context_id ;

    tcm_event_info_ptr = (tcm_event_info_struct *) param ;
    context_id = tcm_event_info_ptr->context_id ;

    /* Get the sib_id from the extracted context_id. */
    sib_id = (kal_uint8)tcm_get_sib_id(GET_FROM_CONTEXTID, context_id);

    /* Poying: Handle the invalid timeout case (timer_indx is out-of-range).*/
    if (sib_id == 0xFF)
    {
        return ;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );


    if ( TCM_CONTEXT_WAIT_AP_RSP_STATE == si_db_ptr->main_state &&
            TCM_SIB_IN_USE == si_db_ptr->is_sib_defined )
    {
        tcm_timer_expiry_state1hdlr(context_id) ;

        tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
        tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_NULL_STATE);
    }
    else
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_INVALID_TIMER_EXPIRY);
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

        // tcm_error_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        tcm_stop_timer(context_id) ;
        return;
    }

    return;
}


void tcm_timer_expiry_state1hdlr( kal_uint8 context_id )
{
    kal_uint16              param[4];
    ps_cause_enum           rej_cause = UNSPECIFIED;
    SESSION_INFO_PTR        si_db_ptr = NULL;
    kal_uint8               sib_id;

    /* Get the sib_id from context_id. */
    sib_id = (kal_uint8)tcm_get_sib_id( GET_FROM_CONTEXTID, context_id );

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Send a context activation reject response to SM */
    tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
                        si_db_ptr,
                        (void *)NULL,
                        &rej_cause );

    /* Send a deactivation indication to ATCI */
    param[0] = UNSPECIFIED; /* Sending unspecified as cause for
                             * deactivation in the case of time out.
                             */
    param[1] = (kal_uint16)si_db_ptr->context_id;
    param[2] = 0;
    /* Modified by: CH_Liang 2005.01.10
     * Description: send activate REJ msg to PPP including src_id
     */
    param[3] = INVALID_SRC;
    /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

    tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                         si_db_ptr,
                         (void *)param );

    tcm_report_event_to_l4c(NW_CONTEXT_REJ_EVENT, si_db_ptr);

#if 0  /* mtk00714 marked old code */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    /* Terminate the context */
    if ( si_db_ptr->l2p != PPP )
    {
        tcm_terminate_context( sib_id );
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_TIMER_EXPIRY_STATE1_HDLR_SUBOP );
    return;
}


void tcm_ext_activate_ind_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __PS_DIALUP__
    kal_bool                        match_flag = KAL_FALSE;
    kal_uint8                       sib_id;  /* Initialized later */
    kal_bool                        term_flag = KAL_TRUE;
    SESSION_INFO_PTR                si_db_ptr = NULL;
    mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_EXT_ACTIVATE_IND_STATE0_HDLR_SUBOP );

    msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if( !tcm_check_mmi_ext_pdp_activate_ind(msg_ptr) )
    {
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE0_HDLR_SUBOP );

        //mmi_ext_pdp_activate_ind_struct_dealloc(msg_ptr);

        return;
    }

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                         */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr(sib_id );

    /* SM will take care of repeated context activation messages */
    /* Context is marked valid since the PDP startup procedure has
     * begun. Even if a reject is sent for this message, the context
     * will remain valid till the link free indication comes,
     * conveying the completion of the PDP startup procedure
     */

    /* mtk00714 w0633: AT definition */
    if ( ((si_db_ptr->context_type== PRIMARY_CONTEXT) && ((si_db_ptr->AT_definition & TCM_CGDCONT_DEFINED) ==0))
            ||((si_db_ptr->context_type== SECONDARY_CONTEXT) &&((si_db_ptr->AT_definition & TCM_CGDSCONT_DEFINED)==0))
            ||(si_db_ptr->data_plane_state != TCM_DATA_PLANE_DECONFIGURED))
    {
        kal_brief_trace(TRACE_WARNING, TCM_CGDCONT_NOT_DEFINED);
        tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                      msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                      msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                      msg_ptr->src_id );
        return;
    }

    if(tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_VALID)
    {
        /* Add 04.01.07 to avoid concurrent AT+CGACT=1,1(or WAP) and dail-up
         * We should reject PPP activate when this context has activated
         */

        /* The reson for the 3 is because the nsapi, protocol_length and
        * protocol option. Protocol option is to be send in new
        * interfaces
        */
        /* Modified by: CH_Liang 2005.01.10
         * Description: send activate REJ msg to PPP including src_id
         */
        tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                      msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                      msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                      msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        return;
    }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    /* the read was successful now match startup params */
    match_flag = tcm_match_pdpstartup_params ( local_para_ptr, si_db_ptr );

    if ( match_flag == KAL_TRUE )
    {
        /* Modified by: CH_Liang 2005.01.25
         * Description: allocate free nsapi to this context
         */
        if(tcm_alloc_nsapi(msg_ptr->context_id) == KAL_FALSE)
        {
            tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                          msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                          msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                          msg_ptr->src_id );

            //tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID;/* Fix bug, Mark the context as invalid. */

            return;
        }
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

        /* Mark the startup type as external */
        si_db_ptr->startup_type = TCM_EXTERNAL_STARTUP;
        tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_VALID;/* Mark the context as valid. */

#ifdef __REL8__
        /* IPv4 Address Allocation. */
        {

            if (tcm_ptr_g->tcm_skip_ipv4_alloc == KAL_FALSE && tcm_msq_check_if_use_r6_qos() == KAL_FALSE)
            {
                config_option_struct *config_option ;
                kal_uint8 index ;

                /* Append the IPv4AddrAlloc PCO to the tail. */
                config_option = msg_ptr->config_option ;
                index         = msg_ptr->config_option_len ;

                if (si_db_ptr->AT_definition & TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP)
                {
                    config_option[index].protocol_id = 0x000B ;  // IPv4 address allocated via DHCP
                }
                else
                {
                    config_option[index].protocol_id = 0x000A ;  // IPv4 address allocated via NAS signalling
                }

                config_option[index].protocol_config_len = 0 ;
                index++ ;

                /* Update the number of PCOs in total. */
                msg_ptr->config_option_len = index ;

                /* Check if it exceeds array boundary in smreg_pdp_activate_req_struct. */
                ASSERT(index <= MAX_NUM_CONFIG_OPTION_PACKETS) ;
            }
        }
#endif /* __REL8__ */


        /* Update the SIB with all the startup information that comes
         * along with the message.
         */
        tcm_update_sibfrom_startup_info( local_para_ptr, si_db_ptr );

        /* Continue with the activation auxillary procedure */
        tcm_activate_aux_proc( sib_id,
                               local_para_ptr,
                               &term_flag,
                               si_db_ptr );
    }
    else
    {
        /* The reson for the 3 is because the nsapi, protocol_length and
         * protocol option. Protocol option is to be send in new
         * interfaces
         */
        /* Modified by: CH_Liang 2005.01.10
         * Description: send activate REJ msg to PPP including src_id
          */
        tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                      msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                      msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                      msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        //tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID;/* Fix bug, Mark the context as invalid. */

        /* If the l2p type is PPP then we donot terminate the context.
         * We wait for link free message and then only will the context
         * be terminated.
         */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    }

    //mmi_ext_pdp_activate_ind_struct_dealloc(msg_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE0_HDLR_SUBOP );
    return;
#else /*__PS_DIALUP__*/
    ASSERT(0);
#endif /*~__PS_DIALUP__*/
}


// ONLY for TEST SIM purpose,that  it can use external context when NW requests activation
#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__))
void tcm_ext_activate_ind_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_bool                        match_flag = KAL_FALSE;
    kal_bool                        term_flag = KAL_TRUE;
    kal_uint8                       sib_id;  /* Initialized later */
    SESSION_INFO_PTR                si_db_ptr = NULL;
    mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_EXT_ACTIVATE_IND_STATE1_HDLR_SUBOP );

    msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_mmi_ext_pdp_activate_ind( msg_ptr) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE1_HDLR_SUBOP );

        //mmi_ext_pdp_activate_ind_struct_dealloc(msg_ptr);

        return;
    }

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                          */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);

    ASSERT(sib_id < TCM_TOT_EXT_CONTEXT);

    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    /* Context is marked valid since the PDP startup procedure has
     * begun. Even if a reject is sent for this message, the context
     * will remain valid till the link free indication comes,
     * conveying the completion of the PDP startup procedure.
     */
//    tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_VALID;

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* First check whether the context is network initiated. */
    if ( si_db_ptr->initiated_by == NW_INITIATED )
    {
        tcm_stop_timer( si_db_ptr->context_id );/* Stop the timer */

        /* Match the startup parameters that were recevied along with
         * the message.
         */
        match_flag = tcm_match_pdpstartup_params ( local_para_ptr, si_db_ptr );

        if (( match_flag == KAL_TRUE ) && (si_db_ptr->data_plane_state == TCM_DATA_PLANE_DECONFIGURED))
        {
            /* Modified by: CH_Liang 2005.01.25
             * Description: allocate free nsapi to this context
             */
            if ( tcm_alloc_nsapi(msg_ptr->context_id) == KAL_FALSE )
            {
                tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID;/* fix bug: Mark the context invalid */
                tcm_send_activate_rej_rsp(TCM_EXTERNAL_STARTUP, TCM_L4C_ACT_ALLOC_NSAPI_FAIL, local_para_ptr, sib_id);
                return;
            }
            /* End of Modification, 2005.03.19. Reviewed by: Joseph */

            /* If the startup parameters match then mark the context
             * activation as external and continue with the activation
             * procedure.
             */
            si_db_ptr->startup_type = TCM_EXTERNAL_STARTUP;

            /* Update the SIB with all the startup information that comes
             * along with the message.
             */
            tcm_update_sibfrom_startup_info( local_para_ptr, si_db_ptr );

            tcm_activate_aux_proc( sib_id,
                                   local_para_ptr,
                                   &term_flag,
                                   si_db_ptr );
        }
        else
        {
            /* Modified by: CH_Liang 2005.01.25
             * Description: send activation reject response to PPP and SM
             */
            tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID;/* fix bug: Mark the context invalid */
            tcm_send_activate_rej_rsp(TCM_EXTERNAL_STARTUP, TCM_L4C_ACT_UNEXPECTED_STATE, local_para_ptr, sib_id);
            return;
            /* End of Modification, 2005.03.19. Reviewed by: Joseph */
        }
    }
    else
    {
        /* This message cannot be received in this state. Only if the
         * context is network initiated, can this message be received.
         */
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
    }

    if ( term_flag == KAL_TRUE )
    {
        /* Update the context state to context inactive.*/
        //si_db_ptr->main_state = TCM_CONTEXT_INACTIVE_STATE;
        // tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE); // do not set fsm in func hdlr
    }

    //mmi_ext_pdp_activate_ind_struct_dealloc(msg_ptr);

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    //       ( MOD_TCM,
    //         MMI_FN_EXIT_TCM_EXT_ACTIVATE_IND_STATE1_HDLR_SUBOP );
    return;
}
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */


void tcm_ext_activate_ind_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __PS_DIALUP__
    mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;
    kal_uint8                       sib_id;  /* Initialized later */
    SESSION_INFO_PTR                si_db_ptr = NULL;

    msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

    /* Add 04.01.07 to avoid concurrent AT+CGACT=1,1 and dail-up
    * We should reject PPP activate when this context has activated
    */

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                          */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr(sib_id );

    /* The reson for the 3 is because the nsapi, protocol_length and
    * protocol option. Protocol option is to be send in new
    * interfaces
    */
    /* Modified by: CH_Liang 2005.01.10
     * Description: send activate REJ msg to PPP including src_id
     */
    tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                  msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                  msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                  msg_ptr->src_id );
    /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

    return;
#else
    ASSERT(0);
#endif /*~__PS_DIALUP__*/
}


#ifdef __SATCE__
kal_uint8 tcm_check_if_sim_satce_apn_is_valid(kal_uint8 apn_length, kal_uint8 *apn_array)
{
    kal_uint8 MAX_SATCE_APN_ARRAY_SIZE = 50;
    kal_uint8 array_index = 0;
    kal_bool apn_is_string_format = KAL_TRUE;
    kal_uint8 single_char;

    if(apn_length > MAX_SATCE_APN_ARRAY_SIZE)
    {
        kal_brief_trace(TRACE_WARNING, TCM_SATCE_INVALID_FORMAT_APN_1);
        return TCM_SATCE_APN_INVALID_FORMAT;
    }

    // now check if the APN is SPEC Format

    do //ex: 3cht2tw   apn_length == 7
    {
        if(apn_array[array_index] == 0)
        {
            // the length part cannot be zero that means the APN cannot look like this aaa..bbb (two '.' together)
            kal_brief_trace(TRACE_WARNING, TCM_SATCE_INVALID_FORMAT_APN_2);
            return TCM_SATCE_APN_INVALID_FORMAT;
        }

        array_index += apn_array[array_index];
        // first loop:     array_index from 0 to 3, now apn_array[array_index] == 't'
        // second loop: array_index from 4 to 6, now apn_array[array_index] == 'w'
        array_index ++;
        // first loop:         array_index from 3 to 4, now apn_array[array_index] == 2
        // second loop:     array_index from 6 to 7, now apn_array[array_index] == ??
    }
    while((array_index < MAX_SATCE_APN_ARRAY_SIZE)&&(array_index<apn_length));

    if(array_index == apn_length)
    {
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_SATCE_FOLLOW_SPEC_FORMAT);
        return TCM_SATCE_APN_SPEC_FORMAT;
    }

    // now check if the APN is string format
    if((apn_array[0] == '.') || (apn_array[(apn_length-1)] == '.'))
    {   // APN string format first char cannot be '.'    last char cannot be '.'
        apn_is_string_format = KAL_FALSE; // not follow string format
    }

    for(array_index = 0; array_index < apn_length; array_index++)
    {
        // possible APN string components:  A-Z and a-z and the hyphen (-) and the dot (.)
        single_char = apn_array[array_index];
        if(
            ((single_char >= 'A') && (single_char <= 'Z')) ||
            ((single_char >= 'a') && (single_char <= 'z')) ||
            ((single_char >= '0') && (single_char <= '9')) ||
            (single_char == '.') ||
            (single_char == '-')
        )
        {
            if(single_char == '.')
            {
                if((array_index+1)<apn_length) // next char does not > apn_length (no memory access out of bound)
                {
                    if(apn_array[(array_index+1)] == '.')
                    {
                        apn_is_string_format = KAL_FALSE; // not follow string format, because see two consecutive '.'
                    }
                }
            }
            // follow string format
        }
        else
        {
            apn_is_string_format = KAL_FALSE; // not follow string format
        }
    }

    if(KAL_TRUE == apn_is_string_format)
    {
        kal_brief_trace(TRACE_WARNING, TCM_SATCE_USE_STRING_FORMAT);
        return TCM_SATCE_APN_STRING_FORMAT;
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, TCM_SATCE_INVALID_FORMAT_APN_3);
        return TCM_SATCE_APN_INVALID_FORMAT;
    }

}
#endif /* __SATCE__ */


void tcm_activate_req_state0hdlr( local_para_struct *local_para_ptr,peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;  /* Initialized later */
    kal_bool                    term_flag = KAL_TRUE;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    tcm_pdp_activate_req_struct *msg_ptr = NULL;

#ifdef __REL8__
#define PCO_INCLUDE_IPV4_ADDR_ALLOC 1
#else  /* __REL8__ */
#define PCO_INCLUDE_IPV4_ADDR_ALLOC 0
#endif /* __REL8__ */

#if (defined(__IPV4V6__) || defined (__IPV6__))
#define PCO_WITH_REQ_IPV6_DNS 1
#else  /* (defined(__IPV4V6__) || defined (__IPV6__)) */
#define PCO_WITH_REQ_IPV6_DNS 0
#endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */

// for smart phone, we will use both PAP and CHAP (PAP consume 1 PCO, CHAP consume 2 PCO, IPCP consume 1 PCO)
#ifdef __SP_RIL_SUPPORT__
#define TCM_PCO_DEFAULT_NUM 4
#else  /* __SP_RIL_SUPPORT__ */
#define TCM_PCO_DEFAULT_NUM 3
#endif /* __SP_RIL_SUPPORT__ */

    /* Poying: Depending on compile options, PCO number may be 3 ~ 6. */
    config_option_struct config_option[TCM_PCO_DEFAULT_NUM + PCO_INCLUDE_IPV4_ADDR_ALLOC + PCO_WITH_REQ_IPV6_DNS] ;

    kal_uint8 param[2];
    kal_uint8 config_option_num = 0;
#ifdef __APP_SECONDARY_PDP_SUPPORT__
    kal_uint8	linked_sib_id = 0xff;
    SESSION_INFO_PTR            linked_sib_ptr = NULL;
    kal_uint8 linked_context_id = 0xff;
#endif

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_REQ_STATE0_HDLR_SUBOP );

    msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;

    /*erica 20051215  mark unused codes */
    //TCM_PTR(tcm_act_src_id) = msg_ptr->src_id; //Add 03.01.07

    /** From now on, TCM will not check the src_id from L4C anymore.
     *  L4C itself should guarantee the correctness of src_id usage.
     */

    /* Assert whether the message received from ATCI is not corrupted.
     * Some of the parameters will be passed through the session
     * information table. Those parameters are also asserted.
     */
//    tcm_check_tcm_pdp_activate_req( msg_ptr );

    /* Get sib_id from context_id.  */
    sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID,
                             msg_ptr->context_id);

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* mtk00714 w0633: AT definition */
    if ( ((si_db_ptr->context_type == PRIMARY_CONTEXT) && ((si_db_ptr->AT_definition & TCM_CGDCONT_DEFINED)==0))
            || ((si_db_ptr->context_type == SECONDARY_CONTEXT) &&((si_db_ptr->AT_definition & TCM_CGDSCONT_DEFINED)==0)) )
    {
        kal_brief_trace(TRACE_WARNING, TCM_CGDCONT_NOT_DEFINED);

        tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_CID_NOT_DEFINED) ;
        return;
    }

    if(si_db_ptr->data_plane_state != TCM_DATA_PLANE_DECONFIGURED)
    {
        tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_UNEXPECTED_STATE) ;
        return;
    }

    /* Modified by: CH_Liang 2005.01.25
     * Description: avoid concurrent AT+CGACT=1,1(or WAP) and dail-up
     */
    if(tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_VALID )
    {
        tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_CID_ALREADY_IN_USE) ;
        return;
    }
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

#if defined(__APP_SECONDARY_PDP_SUPPORT__) && defined(__TCPIP__) // if there is local MMI and loca streaming AP want to use secondary PDP
    if ( (TCM_TOT_EXT_CONTEXT <= msg_ptr->context_id)
            && (msg_ptr->additional_para_type == TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID)
            && (msg_ptr->gprs_pf_num > 0) ) // to activate secondary PDP context, we must confirm that there are packet filters from L4C
    {

        linked_context_id = l4ctcm_get_linked_context_id((kal_uint8)(msg_ptr->additional_para_content));

        if (linked_context_id != 0xff)
        {
            /* profile_id already existed for active pdp context,
            this is a secondary PDP context */
            linked_sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID, linked_context_id);
            linked_sib_ptr = tcm_get_sib_ptr( linked_sib_id );

            /* Poying: Fill-in fields for SEC PDP. */
            // si_db_ptr->context_type       = SECONDARY_CONTEXT ;
            si_db_ptr->primary_context_id = linked_context_id ;
        }
        else
        {
            ASSERT(0);
        }
    }
#endif /* defined(__APP_SECONDARY_PDP_SUPPORT__) && defined(__TCPIP__)  */

    /* Modified by: CH_Liang 2005.01.25
      * Description: allocate free nsapi and store additional parameter (data account id)
      */
    if(tcm_alloc_nsapi(msg_ptr->context_id) == KAL_FALSE)
    {
        tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID; //erica added: 2006.1.9

#ifdef __APP_SECONDARY_PDP_SUPPORT__ //mtk00714 streaming       
        if (linked_context_id != 0xff)
        {
            DEBUG_ASSERT(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID == msg_ptr->additional_para_type);

            tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_ALLOC_NSAPI_FAIL) ;
        }
        else
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */
        {
            tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_ALLOC_NSAPI_FAIL) ;
        }

        return;
    }

#ifdef __TCPIP__ // if there is local MMI
    //if(LMMI_SRC == msg_ptr->src_id && TCM_INTERNAL_APP == msg_ptr->app_src)
    if (msg_ptr->context_id > TCM_TOT_EXT_CONTEXT) // internal application
    {
#ifdef __SATCE__
        if (KAL_TRUE == msg_ptr->is_sate_account_info_valid)
        {
            /* mtk00938: SATE */
            kal_uint8 index = 0;
            kal_uint8 read_index = 0;
            kal_uint8 write_index = 0;
            kal_uint8 label_len = 0;
            kal_uint8 pass = 0;
            kal_uint8 check_apn_format_result;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
            kal_prompt_trace(MOD_TCM, "***Test SATCE***");
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

            /* APN */
            if (KAL_TRUE == msg_ptr->sate_account_info.is_apn_valid)
            {

                ASSERT(msg_ptr->sate_account_info.apn_length <= 50);

                check_apn_format_result = tcm_check_if_sim_satce_apn_is_valid(msg_ptr->sate_account_info.apn_length, msg_ptr->sate_account_info.apn);

                if(TCM_SATCE_APN_SPEC_FORMAT == check_apn_format_result)
                {
                    do
                    {
                        if (pass == 0)
                        {
                            pass++;
                        }
                        else
                        {
                            si_db_ptr->apn[write_index] = '.';
                            write_index++;
                        }
                        label_len = msg_ptr->sate_account_info.apn[read_index];
                        read_index++;

                        ASSERT((write_index+label_len) <= MAX_APN_LEN); // si_db_ptr->apn[] length is MAX_APN_LEN
                        ASSERT(label_len <= 50); // msg_ptr->sate_account_info.apn[] length is 50

                        kal_mem_cpy(
                            (kal_uint8*)(si_db_ptr->apn + write_index),
                            (kal_uint8*)(msg_ptr->sate_account_info.apn + read_index),
                            label_len);
                        read_index+=label_len;
                        write_index+=label_len;
                    } while(read_index < msg_ptr->sate_account_info.apn_length);
                    /* Append '\0' to the tail */
                    si_db_ptr->apn[write_index] = '\0';
                    si_db_ptr->apn_len = write_index;
                } else if(TCM_SATCE_APN_STRING_FORMAT == check_apn_format_result)
                {
                    kal_mem_cpy(
                        (kal_uint8*)(si_db_ptr->apn),
                        (kal_uint8*)(msg_ptr->sate_account_info.apn),
                        msg_ptr->sate_account_info.apn_length);
                    si_db_ptr->apn_len = msg_ptr->sate_account_info.apn_length;
                } else // TCM_SATCE_APN_INVALID_FORMAT == check_apn_format_result
                {
                    tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_UNKONW_APN) ;

                    return;
                }

            }
            else
            {
                si_db_ptr->apn_len = 0;
            }

            /* Username */
            if (KAL_TRUE == msg_ptr->sate_account_info.is_username_valid)
            {
                kal_mem_cpy((kal_uint8*)si_db_ptr->user_name, (kal_uint8*)msg_ptr->sate_account_info.username, msg_ptr->sate_account_info.no_username);
            }

            /* Password */
            if (KAL_TRUE == msg_ptr->sate_account_info.is_passwd_valid)
            {
                kal_mem_cpy((kal_uint8*)si_db_ptr->password, (kal_uint8*)msg_ptr->sate_account_info.passwd, msg_ptr->sate_account_info.no_passwd);
            }

            /* Local address */
            if (KAL_TRUE == msg_ptr->sate_account_info.is_local_addr_valid)
            {
                si_db_ptr->addr_scheme = TCM_STATIC_ADDR;
                si_db_ptr->pdp_addr_len = msg_ptr->sate_account_info.no_local_addr;
                /* Copy the pdp address value into the SIB */
                for (index = 0; index < si_db_ptr->pdp_addr_len ; index++)
                {
                    /* We can't use kal_mem_cpy here b'cos source and
                    * destination address types are different. */
                    si_db_ptr->addr_val[index] = msg_ptr->sate_account_info.local_addr[index];
                }
                if(si_db_ptr->pdp_addr_len == IPV4_ADDR_LEN)
                {
                    si_db_ptr->pdp_addr_type = IPV4_ADDR_TYPE;
                }
                else if(si_db_ptr->pdp_addr_len == IPV6_ADDR_LEN)
                {
                    si_db_ptr->pdp_addr_type = IPV6_ADDR_TYPE;
                }
                else
                {
                    DEBUG_ASSERT(0);

                    si_db_ptr->pdp_addr_type = IPV4_ADDR_TYPE; // fail safe
                }
            }
            else
            {
                si_db_ptr->addr_scheme = TCM_DYNAMIC_ADDR;
                si_db_ptr->pdp_addr_len = NULL_PDP_ADDR_LEN;
                si_db_ptr->pdp_addr_type = IPV4_ADDR_TYPE;
            }

            /* Fill Req QoS */
            si_db_ptr->req_qos.precedence_class = msg_ptr->sate_account_info.gprs_bearer.p_class;
            si_db_ptr->req_qos.delay_class = msg_ptr->sate_account_info.gprs_bearer.d_class;
            si_db_ptr->req_qos.reliability_class = msg_ptr->sate_account_info.gprs_bearer.r_class;
            si_db_ptr->req_qos.peak_throughput = msg_ptr->sate_account_info.gprs_bearer.peak_rate;
            si_db_ptr->req_qos.mean_throughput = msg_ptr->sate_account_info.gprs_bearer.mean_rate;
            //si_db_ptr->req_qos. = msg_ptr->sate_account_info.gprs_bearer.proto_type;

            /*
              * mtk01936: 2009.02.17 Modification Start
              * Must fill qos_length,
              * otherwise, the SM will memset 0 on req_qos in sm_tcm_activate_req_handler
              */
            si_db_ptr->req_qos.qos_length = SM_CORRECT_QOS_LEN;
            si_db_ptr->min_qos.qos_length = SM_CORRECT_QOS_LEN;
            tcm_qos_R98_to_R99( &(si_db_ptr->req_qos), si_db_ptr->pdp_addr_type, TCM_REQ_QOS); // extend to 11 Bytes R99 QoS
            //si_db_ptr->req_qos.qos_length = QOS_LEN;
            /*
              * mtk01936: 2009.02.17 Modification End
              */

        }
        else
#endif /* ~__SATCE__ */
        {
            /* Modified by: CH_Liang 2005.01.25
             * Description: gprs account is included in primitive
             */
            //si_db_ptr->name_length = msg_ptr->account_info.name_length;// Carlson: remove useless context
            //si_db_ptr->name_dcs = msg_ptr->account_info.name_dcs;// Carlson: remove useless context
            si_db_ptr->is_chap = msg_ptr->account_info.authentication_type;
            //kal_mem_cpy((kal_uint8*)si_db_ptr->name, (kal_uint8*)msg_ptr->account_info.name, 32);// Carlson: remove useless context
            kal_mem_cpy((kal_uint8*)si_db_ptr->user_name, (kal_uint8*)msg_ptr->account_info.user_name, INT_MAX_GPRS_USER_NAME_LEN);
            kal_mem_cpy((kal_uint8*)si_db_ptr->password, (kal_uint8*)msg_ptr->account_info.password, INT_MAX_GPRS_PASSWORD_LEN);
            kal_mem_cpy((kal_uint8*)si_db_ptr->dns, (kal_uint8*)msg_ptr->account_info.dns, IPV4_ADDR_LEN );
            kal_mem_cpy((kal_uint8*)si_db_ptr->dns2, (kal_uint8*)msg_ptr->account_info.sec_dns, IPV4_ADDR_LEN );
            kal_mem_cpy((kal_uint8*)si_db_ptr->apn, (kal_uint8*)msg_ptr->account_info.apn, INT_MAX_GPRS_APN_LEN);
            si_db_ptr->apn_len = msg_ptr->account_info.apn_length;
            si_db_ptr->pdp_addr_type = (pdp_addr_type_enum)msg_ptr->account_info.pdp_type;
            si_db_ptr->pdp_addr_len = (pdp_addr_len_enum)msg_ptr->account_info.pdp_addr_len;
            kal_mem_set((kal_uint8*)si_db_ptr->addr_val, (kal_uint32)0, IPV4V6_ADDR_LEN);
            if((NULL_PDP_ADDR_LEN != si_db_ptr->pdp_addr_len) && (PPP_ADDR_LEN != si_db_ptr->pdp_addr_len))
            {
                kal_mem_cpy((kal_uint8*)si_db_ptr->addr_val, (kal_uint8*)msg_ptr->account_info.pdp_addr_val, MAX_GPRS_IP_ADDR);

                /* Poying: Should set it as static address allocating. */
                si_db_ptr->addr_scheme = TCM_STATIC_ADDR ;
            }
#ifndef TCM_WAP_QOS_SETTING
            /* normal case: use the setting from WAP */
            kal_mem_cpy((kal_uint8*)&si_db_ptr->req_qos, (kal_uint8*)&(msg_ptr->qos_info.req_qos), sizeof(nvram_editor_qos_struct));
            kal_mem_cpy((kal_uint8*)&si_db_ptr->min_qos, (kal_uint8*)&(msg_ptr->qos_info.min_qos), sizeof(nvram_editor_qos_struct));
#else
            if (TCM_PTR(set_wap_qos) == KAL_FALSE)
            {
                /* normal case: use the setting from WAP */
                kal_mem_cpy((kal_uint8*)&si_db_ptr->req_qos, (kal_uint8*)&(msg_ptr->qos_info.req_qos), sizeof(nvram_editor_qos_struct));
                kal_mem_cpy((kal_uint8*)&si_db_ptr->min_qos, (kal_uint8*)&(msg_ptr->qos_info.min_qos), sizeof(nvram_editor_qos_struct));
            }
            else
            {
                kal_brief_trace(TRACE_WARNING, TCM_WAP_QOS_SETTING_APPLY_AT);
            }
            //else use the orginal setting set by +CGQREQ=4, <qos>....
#endif
        }

        if(msg_ptr->account_info.hcomp_algo < SND_PCOMP_TOTAL_NUM)
        {
            if(      (SND_NO_PCOMP == msg_ptr->account_info.hcomp_algo)
#ifdef __SND_HCOMP_RFC1144__
                     || (SND_RFC_1144 == msg_ptr->account_info.hcomp_algo)
#endif // ~ __SND_HCOMP_RFC1144__
              )
            {
                si_db_ptr->pcomp_algo = (snd_pcomp_algo_enum)msg_ptr->account_info.hcomp_algo;
            }
            else
            {
                si_db_ptr->pcomp_algo = SND_NO_PCOMP;
            }
        }
        else
        {
            si_db_ptr->pcomp_algo = SND_NO_PCOMP;
        }

        if(msg_ptr->account_info.dcomp_algo < SND_DCOMP_TOTAL_NUM)
        {
            if(      (SND_NO_DCOMP == msg_ptr->account_info.dcomp_algo)
#ifdef __SND_DCOMP_V42BIS__
/* under construction !*/
#endif // ~ __SND_DCOMP_V42BIS__
              )
            {
                si_db_ptr->dcomp_algo = (snd_dcomp_algo_enum)msg_ptr->account_info.dcomp_algo;
            }
            else
            {
                si_db_ptr->dcomp_algo = SND_NO_DCOMP;
            }
        }
        else
        {
            si_db_ptr->dcomp_algo = SND_NO_DCOMP;
        }
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */

        //if (tcm_ptr_g->wap_use_compression == 2)
        //si_db_ptr->pcomp_algo = SND_RFC_1144;
        //else if (tcm_ptr_g->wap_use_compression == 1)
        //si_db_ptr->dcomp_algo = SND_V42_BIS;
    }
#endif // ~ #ifdef __TCPIP__ // if there is local MMI

    //erica: only set the cntxt_flag to VALID if TCM won't reject L4C later.
    /* Mark the context as valid */
    tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_VALID;
#ifdef __APP_SECONDARY_PDP_SUPPORT__ //mtk00714 streaming
    si_db_ptr->src_id = msg_ptr->src_id;
    //si_db_ptr->app_src = msg_ptr->app_src;
#endif

    /* Update the startuptype to TCM_INTERNAL_STARTUP */
    si_db_ptr->startup_type = TCM_INTERNAL_STARTUP;

    //si_db_ptr->profile_id = msg_ptr->profile_id;
    tcm_change_additional_para_value(si_db_ptr, msg_ptr->additional_para_type, msg_ptr->additional_para_content);

    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    tcm_qos_extend(&(si_db_ptr->req_qos), si_db_ptr->pdp_addr_type, TCM_REQ_QOS);
    tcm_qos_extend(&(si_db_ptr->min_qos), si_db_ptr->pdp_addr_type, TCM_MIN_QOS);

#ifdef __APP_SECONDARY_PDP_SUPPORT__ //mtk00714 streaming       
    if (linked_context_id != 0xff)
    {
        kal_uint8 pf_index;
        l4c_tft_struct temp_tft_struct;

        /* update the linked TI and information */
        // si_db_ptr->context_type     = SECONDARY_CONTEXT;
        si_db_ptr->primary_context_id  = linked_sib_ptr->context_id;
        si_db_ptr->pdp_addr_len 	= linked_sib_ptr->pdp_addr_len;
        si_db_ptr->apn_len 		= linked_sib_ptr->apn_len;
        kal_mem_cpy((kal_uint8 *)si_db_ptr->addr_val, (kal_uint8 *)linked_sib_ptr->addr_val, MAX_PDP_ADDR_LEN);
        kal_mem_cpy((kal_uint8 *)si_db_ptr->apn, (kal_uint8 *)linked_sib_ptr->apn, MAX_APN_LEN);

        /* tft */
        tcm_update_tft(si_db_ptr, DELETE_PKT_FILTER_FROM_TFT);
        tcm_update_tft(si_db_ptr, DELETE_EXISTING_TFT);

        for (pf_index = 0; pf_index < msg_ptr->gprs_pf_num; pf_index ++)
        {
            temp_tft_struct.context_id = msg_ptr->context_id;
            temp_tft_struct.tot_pf_count = 1;
            kal_mem_cpy(&temp_tft_struct.pf[0], &msg_ptr->gprs_pf_info[pf_index], sizeof(l4c_pf_struct));
            l4ctcm_set_tft_info(&temp_tft_struct);
        }

        /* no config option for secondary pdp context */
        si_db_ptr->prot_option_len = 0;
        si_db_ptr->config_protocol = NULL;
    }
    else
#endif
    {
#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
        if(
            (PPP_ADDR_TYPE == si_db_ptr->pdp_addr_type)
            && (TCM_INTERNAL_STARTUP == si_db_ptr->startup_type)
        )
        {
            /*
              * mtk01936 2009.02.20, for PPP Type PDP Context,
              * if use AT+CGDCONT=1,"PPP","APN" and then AT+CGACT=1,1 to activate PDP
              * then the startup_type will be TCM_INTERNAL_STARTUP,
              * If this is AT command to activate PPP type PDP context (internal)
              * We will not send and protocol configuration options to SM in this circumstance
              *
              * note: if external (real dialup) PPP Type PDP Context, we may send protocol options to SM
              * (this may be wrong, but currently we do not block)
              */

            // do nothing, does not fill protocol configuration options
        }
        else
        {
#endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__
            /* erica 20060916: implement CHAP */
            tcm_fill_config_options( config_option,
                                     &config_option_num,
                                     si_db_ptr ) ;

            /* Check if it exceeds array boundary in smreg_pdp_activate_req_struct. */
            ASSERT(config_option_num <= MAX_NUM_CONFIG_OPTION_PACKETS) ;

            param[0] = config_option_num; /* # of config option */
            param[1] = 0; /* MMI_CONFIG_PROTOCOL_PPP */
            tcm_cpy_config_info_into_sib( si_db_ptr,
                                          (void *)param,
                                          (void *)config_option );

#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
        }
#endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__
    }

    /* Continue with the activation procedure */
    tcm_activate_aux_proc( sib_id,
                           local_para_ptr,
                           &term_flag,
                           si_db_ptr );

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_ACTIVATE_REQ_STATE0_HDLR_SUBOP );
    return;
}


void tcm_activate_req_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;  /* Initialized later */
    kal_bool                    term_flag = KAL_TRUE;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    tcm_pdp_activate_req_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_REQ_STATE1_HDLR_SUBOP );

    msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;

    /* Assert whether the message received from ATCI is not corrupted.
     * Some of the parameters will be passed through the session
     * information table. Those parameters are also asserted.
     */
//    tcm_check_tcm_pdp_activate_req( msg_ptr );

    /* Get sib_id from context_id.  */
    sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID,
                             msg_ptr->context_id);

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* First check whether the context is network initiated. */
    if( ( si_db_ptr->initiated_by == NW_INITIATED ) && (si_db_ptr->data_plane_state == TCM_DATA_PLANE_DECONFIGURED) )
    {
        tcm_stop_timer( si_db_ptr->context_id );/* Stop the timer */

        si_db_ptr->startup_type = TCM_INTERNAL_STARTUP;

        if(tcm_alloc_nsapi(msg_ptr->context_id) == KAL_FALSE)
        {
            tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID; //erica added: 2006.9.13
            tcm_send_activate_rej_rsp(TCM_INTERNAL_STARTUP, TCM_L4C_ACT_ALLOC_NSAPI_FAIL, local_para_ptr, sib_id);
            return;
        }

        tcm_change_additional_para_value(si_db_ptr, msg_ptr->additional_para_type, msg_ptr->additional_para_content);

        if (tcm_ptr_g->cntxt_flag[sib_id] != TCM_CNTXT_VALID)
        {
            DEBUG_ASSERT(0) ;
            tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_VALID;
        }

        si_db_ptr->src_id = msg_ptr->src_id; //Restore src_id, add 04.04.29

        tcm_qos_extend(&(si_db_ptr->req_qos), si_db_ptr->pdp_addr_type, TCM_REQ_QOS);
        tcm_qos_extend(&(si_db_ptr->min_qos), si_db_ptr->pdp_addr_type, TCM_MIN_QOS);

        tcm_activate_aux_proc( sib_id,
                               local_para_ptr,
                               &term_flag,
                               si_db_ptr );
    }
    else
    {
        /* Modified by: CH_Liang 2005.01.25
         * Description: send activation reject response to L4 and SM
         */
        tcm_send_activate_rej_rsp(TCM_INTERNAL_STARTUP, TCM_L4C_ACT_UNEXPECTED_STATE, local_para_ptr, sib_id);
        /* End of Modification, 2005.03.19. Reviewed by: Joseph */
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_ACTIVATE_REQ_STATE1_HDLR_SUBOP );
    return;
}


void tcm_activate_req_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    //kal_uint8                   sib_id;  /* Initialized later */
    tcm_pdp_activate_req_struct *msg_ptr = NULL;

    /* Add 04.01.07 to avoid concurrent AT+CGACT=1,1(or WAP) and dail-up
    * We should reject WAP activate when this context has activated
    */
    msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;

    /* Get sib_id from context_id.  */
    //sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID, msg_ptr->context_id);


    /*erica 20051215  mark unused codes */
    //TCM_PTR(tcm_act_src_id) = msg_ptr->src_id; //Add 03.01.07

    tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_CID_ALREADY_IN_USE) ;
}


void tcm_activate_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                     sib_id;  /* Initialized later */
    kal_uint8                     param[2];
    SESSION_INFO_PTR              si_db_ptr = NULL;
    smreg_pdp_activate_cnf_struct *msg_ptr = NULL;
    kal_uint8 i = 0, j = 0;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_activate_cnf_struct *)local_para_ptr;

    /* Get sib_id from nsapi. */
    sib_id = tcm_get_sib_id( GET_FROM_NSAPI, msg_ptr->nsapi );

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP );

        //smreg_pdp_activate_cnf_struct_dealloc(msg_ptr);
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_activate_cnf( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP_2 );
        //smreg_pdp_activate_cnf_struct_dealloc(msg_ptr);
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Check whether the context is primary */
    // if ( si_db_ptr->context_type == PRIMARY_CONTEXT )
    if ( tcm_check_context_prim_sec(sib_id, si_db_ptr) == PRIMARY_CONTEXT )
    {
        /* Poying: Note.
         * - TCM checks the match of pdp_addr_len and pdp_addr_type in PDP-ACT-accept by tcm_pdp_addr_ltcheck().
         *   The only exception which can pass the check is when pdp_addr_len = NULL_PDP_ADDR_LEN.
         */
        if ( ( msg_ptr->pdp_addr_len == IPV4_ADDR_LEN )
#ifdef __IPV6__
                || (msg_ptr->pdp_addr_len == IPV6_ADDR_LEN)
#endif /* __IPV6__ */
#ifdef __IPV4V6__
                || (msg_ptr->pdp_addr_len == IPV4V6_ADDR_LEN)
#endif /* __IPV4V6__ */
           )
        {
            si_db_ptr->pdp_addr_len = (pdp_addr_len_enum) msg_ptr->pdp_addr_len;
            kal_mem_cpy( (kal_uint8 *)si_db_ptr->addr_val,
                         (kal_uint8 *)msg_ptr->pdp_addr,
                         msg_ptr->pdp_addr_len );
            si_db_ptr->pdp_addr_type = (pdp_addr_type_enum) msg_ptr->pdp_addr_type;
        }
#if __PPP_TYPE_PDP_DIALUP_SUPPORT__
        else if (msg_ptr->pdp_addr_len == PPP_ADDR_LEN)
        {
            si_db_ptr->pdp_addr_len = PPP_ADDR_LEN ;
            si_db_ptr->pdp_addr_type = PPP_ADDR_TYPE ;
        }
#endif /* __PPP_TYPE_PDP_DIALUP_SUPPORT__ */
        else
        {

            /* Poying: For dynamic address allocating, NW shall give a valid pdp_addr_len.
             * - For static address allocating, NW may gives pdp_addr_len = NULL.
             *   In this case, we shall preserve the original settings on pdp-type and pdp-len in SIB.
             */
            if (si_db_ptr->addr_scheme == TCM_DYNAMIC_ADDR)
            {
                /* Poying: pdp_addr_len is invalid. For example,
                 * - 1. TCM does not support PPP-type PDP context, but NW gives it.
                 * - 2. TCM receives pdp_addr_len = NULL from NW's ACT-accept.
                 */
                kal_brief_trace(TRACE_WARNING, TCM_IPV6_RECV_INVALID_PDP_ADDR_LEN, msg_ptr->pdp_addr_type, msg_ptr->pdp_addr_len) ;

                si_db_ptr->pdp_addr_len = (pdp_addr_len_enum) NULL_PDP_ADDR_LEN ;
                si_db_ptr->pdp_addr_type = (pdp_addr_type_enum)msg_ptr->pdp_addr_type;
            }
        }


        /* Poying: Store cause2 from SM. */
#if (defined(__IPV4V6__) || defined (__IPV6__))
        si_db_ptr->pdp_act_cause_2_present = msg_ptr->cause_2_present ;
        si_db_ptr->pdp_act_cause_2 = msg_ptr->cause_2 ;
#endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */


        /* Store the negotiated qos and protocol config options in the
         * session information table.
         */
        kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                     (kal_uint8 *)&msg_ptr->qos_negotiated,
                     sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
        tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

        param[0] = (kal_uint8)msg_ptr->config_option_len;
        param[1] = msg_ptr->config_protocol;

        tcm_cpy_config_info_into_sib(
            si_db_ptr,
            (void *)param,
            (void *)msg_ptr->config_option
        );

        ASSERT(msg_ptr->config_option_len <= MAX_NUM_CONFIG_OPTION_PACKETS) ;

        for(i=0 ; i<msg_ptr->config_option_len ; i++)
        {
            config_option_struct *config_option_ptr = &(msg_ptr->config_option[i]) ;

            if (config_option_ptr->protocol_id == 0x8021)
            {
                j = 4;
                while(j < config_option_ptr->protocol_config_len)
                {
                    if(config_option_ptr->protocol_config[j] == 0x81)
                    {
                        kal_mem_cpy(si_db_ptr->dns, &(config_option_ptr->protocol_config[j+2]), 4);
                    }
                    else if(config_option_ptr->protocol_config[j] == 0x83)
                    {
                        kal_mem_cpy(si_db_ptr->dns2, &(config_option_ptr->protocol_config[j+2]), 4);
                    }

                    j = j + config_option_ptr->protocol_config[j+1];
                }
            }
#if (defined(__IPV4V6__) || defined (__IPV6__))
            else if(config_option_ptr->protocol_id == SM_PCO_CONTAINER_ID_DNS_SERVER_IPV6_ADDRESS)
            {
                /* Poying: Skip the PCO if the length of IPv6 DNS address is NOT valid. */
                if (config_option_ptr->protocol_config_len != IPV6_ADDR_LEN)
                {
                    kal_brief_trace(TRACE_WARNING, TCM_IPV6_RECV_INVALID_DNS_ADDR_LEN, config_option_ptr->protocol_config_len) ;
                    continue ;
                }

                /* Poying: Store it as the IPv6 DNS address if possible. */
                if (si_db_ptr->ipv6_dns1_present == KAL_FALSE)
                {
                    si_db_ptr->ipv6_dns1_present = KAL_TRUE ;
                    kal_mem_cpy(si_db_ptr->ipv6_dns1, &(config_option_ptr->protocol_config[0]), IPV6_ADDR_LEN);
                }
                else if (si_db_ptr->ipv6_dns2_present == KAL_FALSE)
                {
                    si_db_ptr->ipv6_dns2_present = KAL_TRUE ;
                    kal_mem_cpy(si_db_ptr->ipv6_dns2, &(config_option_ptr->protocol_config[0]), IPV6_ADDR_LEN);

                }
                else
                {
                    /* Poying: Both DNS slots are occupied. Ignore the third IPv6 DNS address in current design. */
                    kal_brief_trace(TRACE_WARNING, TCM_IPV6_RECV_MORE_THAN_TWO_DNS_ADDR) ;
                }
            }
#endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */

        }

        /* Continue with the context activation process */
        //tcm_activate_cnf_aux_proc( sib_id, si_db_ptr );
        tcm_ptr_g->can_send_data_plane_config_req = KAL_TRUE;

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

        /* 20051215 erica mark unused codes */
        /*
        // Reactivate all contexts that are secondary to this contexts.
        //tcm_react_sec_proc( sib_id, si_db_ptr );
        */
    }
    else
    {
        /* Log error that this is not a primary context. */
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_ACTIVATE_CNF_STATE0_HDLR_SUBOP );
    //smreg_pdp_activate_cnf_struct_dealloc(msg_ptr);

    return;
}


void tcm_activate_rej_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                     sib_id;  /* Initialized later */
    SESSION_INFO_PTR              si_db_ptr = NULL;
    smreg_pdp_activate_rej_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_activate_rej_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi);
    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected. */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG ( MOD_TCM, MMI_FN_EXIT_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_activate_rej( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG ( MOD_TCM, MMI_FN_EXIT_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP_2 );
        return;
    }

    /* Get the session information for this context. */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

#if (defined(__IPV4V6__) || defined(__IPV6__))
    si_db_ptr->is_rejected_by_nw = msg_ptr->is_rejected_by_nw ;
#endif /* (defined(__IPV4V6__) || defined(__IPV6__)) */
    si_db_ptr->cause             = msg_ptr->cause ;

    /* Check whether the context is a primary context. */
    // if ( si_db_ptr->context_type == PRIMARY_CONTEXT )
    if ( tcm_check_context_prim_sec(sib_id, si_db_ptr) == PRIMARY_CONTEXT )
    {
        tcm_activate_rej_aux_proc( sib_id,
                                   TCM_CONFIG_OPTION_FROM_MSG,
                                   msg_ptr->config_option_len,
                                   msg_ptr->config_option ) ;

#if 0//def __EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

        if (msg_ptr->cause == REACTIVATION_REQD)
        {
            tcm_report_event_to_l4c(NW_CONTEXT_REACT_EVENT, si_db_ptr);
        }
    }
    else
    {
        /* Log and error if the context is not a primary context. */
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
    }

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    //       ( MOD_TCM,
    //         MMI_FN_EXIT_TCM_ACTIVATE_REJ_STATE0_HDLR_SUBOP );

    return;
}


void tcm_sec_activate_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_uint8                         sib_id;  /* Initialized later */
    SESSION_INFO_PTR                  si_db_ptr = NULL;
    smreg_pdp_activate_sec_cnf_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_activate_sec_cnf_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi); /* Get sib_id
                                                         * from nsapi.
                                                         */

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_activate_sec_cnf( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP_2 );
        // return;
        // Fix bug, do not return here, we should accept the 2ndary PDP Cnf even the NW does not assign correct QoS
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Check if the context is a secondary context */
    // if ( si_db_ptr->context_type == SECONDARY_CONTEXT )
    if ( tcm_check_context_prim_sec(sib_id, si_db_ptr) == SECONDARY_CONTEXT )
    {
        /* Copy the negotiated Qos into the scratch */
        kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                     (kal_uint8 *)&msg_ptr->qos_negotiated,
                     sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
        tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

        /* Continue with the context activation procedure */
        //tcm_activate_cnf_aux_proc( sib_id, si_db_ptr );
        tcm_ptr_g->can_send_data_plane_config_req = KAL_TRUE;

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

    }
    else
    {
        /* Log an error if the context is not a secondary context */
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_SEC_ACTIVATE_CNF_STATE0_HDLR_SUBOP );
    return;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    ASSERT(0);
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_sec_activate_rej_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_uint8                         sib_id;  /* Initialized later */
    SESSION_INFO_PTR                  si_db_ptr = NULL;
    smreg_pdp_activate_sec_rej_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_activate_sec_rej_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi); /* Get sib_id
                                                         * from nsapi.
                                                         */

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected. */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_activate_sec_rej( msg_ptr) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP_2 );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    si_db_ptr->cause = msg_ptr->cause ;

    /* Check whether the context is a secondary context */
    // if ( si_db_ptr->context_type == SECONDARY_CONTEXT )
    if ( tcm_check_context_prim_sec(sib_id, si_db_ptr) == SECONDARY_CONTEXT )
    {
        /* Continue with the context rejection process */
        tcm_activate_rej_aux_proc( sib_id,
                                   TCM_CONFIG_OPTION_FROM_SIB,
                                   0,
                                   NULL ) ;   /* Poying: The PCO info can be simply retrieved from SIB. */

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

        if (msg_ptr->cause == REACTIVATION_REQD)
            tcm_report_event_to_l4c(NW_CONTEXT_REACT_EVENT, si_db_ptr);

    }
    else
    {
        /* Log an error if the context is not secondary */
        kal_brief_trace(TRACE_WARNING, TCM_CHECK_MSG_FAIL);
    }

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    //       ( MOD_TCM,
    //         MMI_FN_EXIT_TCM_SEC_ACTIVATE_REJ_STATE0_HDLR_SUBOP );
    return;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    ASSERT(0);
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}


void tcm_activate_rej_rsp_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                       sib_id;  /* Initialized later */
    ps_cause_enum                   rej_cause = UNSPECIFIED;
    SESSION_INFO_PTR                si_db_ptr = NULL;
    tcm_pdp_activate_rej_rsp_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_ACTIVATE_REJ_RSP_STATE1_HDLR_SUBOP );

    msg_ptr = (tcm_pdp_activate_rej_rsp_struct *)local_para_ptr;

    /* Get sib_id from context_id. */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_ACTIVATE_REJ_RSP_STATE1_HDLR_SUBOP );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Stop the timer */
    tcm_stop_timer( si_db_ptr->context_id );

    /* Send activation reject response message to SM */
    tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
                        si_db_ptr,
                        (void *)NULL,
                        &rej_cause );

    /* Terminate the context */
    tcm_terminate_context( sib_id );

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_ACTIVATE_REJ_RSP_STATE1_HDLR_SUBOP );
    return;
}


void tcm_modify_req_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                 sib_id;
    SESSION_INFO_PTR          si_db_ptr = NULL;
    tcm_pdp_modify_req_struct *msg_ptr = NULL;
    ps_cause_enum               cause;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_MODIFY_REQ_HDLR_SUBOP );

    msg_ptr = (tcm_pdp_modify_req_struct *)local_para_ptr;

    /* Get sib_id from context_id. */
    sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID, msg_ptr->context_id );

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_MODIFY_REQ_HDLR_SUBOP );

        cause = TCM_L4C_MOD_INVALID_PDP_CONTEXT;
        /* Send the rejection message to ATCI */
        /* Modified by: CH_Liang 2005.01.10
         * Description: send REJ msg with src_id specified in REQ msg.
         */
        tcm_send_modify_rej_to_l4c( msg_ptr->context_id,
                                    cause,
                                    msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
        return;
    }

    if (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO
            && si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
    {
        /* currently, the pdp context is being preserved */
        /* so REJ upper layer. */
        cause = TCM_L4C_MOD_PRESERVED_PDP_CONTEXT;
        tcm_send_modify_rej_to_l4c( msg_ptr->context_id,
                                    cause,
                                    msg_ptr->src_id );
        return;
    }

    /* Assert whether the message received from ATCI is not corrupted.
     * Some of the parameters will be passed through the session
     * information table. Those parameters are also asserted.
     */
    if(0 == tcm_check_tcm_pdp_modify_req( msg_ptr ))
    {
        cause = TCM_L4C_MOD_TYPE_OR_TFT_CHECK_FAIL;
        /* Send the rejection message to ATCI */
        /* Modified by: CH_Liang 2005.01.10
        * Description: send REJ msg with src_id specified in REQ msg.
        */
        tcm_send_modify_rej_to_l4c( msg_ptr->context_id,
                                    cause,
                                    msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        return;
    }

    /* Modified by: CH_Liang 2005.01.10
     * Description: Store the src_id in session info block for CNF/REJ msg
     *              when ready to send modify request.
     */

    si_db_ptr->src_id = msg_ptr->src_id;
    /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

    tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_MODIFY_REQ,
                        si_db_ptr,
                        (void *)NULL,
                        (void *)NULL );

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_MODIFY_REQ_HDLR_SUBOP );
    return;
}


void tcm_modify_ind_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    smreg_pdp_modify_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_MODIFY_IND_STATE2_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_modify_ind_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi);
    /* Check whether this message is expected */

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_MODIFY_IND_STATE2_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_modify_ind( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_MODIFY_IND_STATE2_HDLR_SUBOP_2 );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    if ( (msg_ptr->mod_type == NEG_QOS_MOD) ||
            (msg_ptr->mod_type == PDP_ADDR_NEG_QOS_MOD) )
    {
        /* Update the negotiated Qos */
        kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                     (kal_uint8 *)&msg_ptr->qos_negotiated,
                     sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
        tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

    }
// TODO: NW request for PDP address modification: need further discussion
#ifdef __TCM_UT__
#ifdef __PS_DIALUP__
    if( (msg_ptr->mod_type == PDP_ADDR_NEG_QOS_MOD) ||
            (msg_ptr->mod_type == PDP_ADDR_MOD) )
    {
        /* Update the pdpAddress */
        si_db_ptr->pdp_addr_len =
            (pdp_addr_len_enum) msg_ptr->pdp_addr_len;
        kal_mem_cpy( (kal_uint8 *)si_db_ptr->addr_val,
                     (kal_uint8 *)msg_ptr->pdp_addr,
                     msg_ptr->pdp_addr_len );
        tcm_send_msg_to_ppp( MSG_ID_TAF_EXT_UPDATE_PDP_ADDR_REQ,
                             si_db_ptr,
                             (void *)NULL );

        /* Statistics context modification from NW side
        stack_update_statistics( MMI_NUM_CONTEXT_MODIFIED_FROM_NW ); */
    }
#endif
#endif

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
    tcm_send_msg_to_l4c(MSG_ID_TCM_PDP_MODIFY_IND, si_db_ptr, NULL);
#endif // ~ #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_MODIFY_IND_STATE2_HDLR_SUBOP );
    return;
}


void tcm_modify_cnf_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    smreg_pdp_modify_cnf_struct *msg_ptr = NULL;
    kal_bool	need_notify = KAL_TRUE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                                    MMI_FN_ENTER_TCM_MODIFY_CNF_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_modify_cnf_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi);/* Get sib_id
                                                        * from nsapi.
                                                        */

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG ( MOD_TCM,
                MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_modify_cnf( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP_2 );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    if (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO
            && si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
    {
        /* the modification was not requested by upper layer */
        need_notify = KAL_FALSE;
    }

    switch ( msg_ptr->mod_type )
    {
    case REQ_QOS_MOD :
    {

#ifdef __APP_SECONDARY_PDP_SUPPORT__ //Ericsson IOT mtk00714 20080421
        if (tcm_ptr_g->secondary_preserve_counter == 1
                && (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO
                    && si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
           )
        {
            kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                         (kal_uint8 *)&msg_ptr->qos_mod_neg,
                         sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
            tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

            tcm_reactivate_cnf_aux_proc( sib_id, si_db_ptr );

            TCM_PTR(sib_tab)[sib_id].mod_type = 0;
            si_db_ptr->tft_opcode = NO_OP_TFT;

            /* mtk00938: Reset flag */
            tcm_ptr_g->secondary_preserve_counter = 0;
            TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP_3 );
            return;
        }
#endif /*~__APP_SECONDARY_PDP_SUPPORT__*/

        /* If the requested Qos is modified then the negotiated Qos
         * should be updated.
         */
        kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                     (kal_uint8 *)&msg_ptr->qos_mod_neg,
                     sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
        tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

        break;
    }

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    case TFT_MOD :
    {
        /* If tft modification is requested then the tft should be
         * updated.
         */
        tcm_update_tft( si_db_ptr, si_db_ptr->tft_opcode );
        break;
    }

    case TFT_REQ_QOS_MOD :
    {
        /* If tft modification is requested then the tft should be
         * updated.
         */
        tcm_update_tft( si_db_ptr, si_db_ptr->tft_opcode );
        /* If the requested Qos is modified then the negotiated Qos
         * should be updated.
         */
        kal_mem_cpy( (kal_uint8 *)&si_db_ptr->neg_qos,
                     (kal_uint8 *)&msg_ptr->qos_mod_neg,
                     sizeof(qos_struct) );
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
        tcm_print_qos_content(&(si_db_ptr->neg_qos), KAL_TRUE, si_db_ptr->context_id, TCM_NEG_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)

        break;
    }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

    default :
    {
        /* In the default case error is not logged because the
         * modfication could be for min Qos, in which case no updation
         * is required.
         */
        break;
    }
    } /* End switch */

    TCM_PTR(sib_tab)[sib_id].mod_type = (context_mod_type_enum)0; //03.01.17 Clear the flag

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    si_db_ptr->tft_opcode = NO_OP_TFT;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

    if (need_notify == KAL_FALSE)
    {
#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
        tcm_send_msg_to_l4c(MSG_ID_TCM_PDP_MODIFY_IND, si_db_ptr, NULL);
#endif // ~ #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__

        /* the modification is triggered by RAB reestablishment */
        /*don't send CNF to L4C */
        return;
    }

    /* Send a modification confirm message to ATCI */
    tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_MODIFY_CNF,
                         si_db_ptr,
                         (void *)NULL);

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                                          MMI_FN_EXIT_TCM_MODIFY_CNF_HDLR_SUBOP );
    return;
}


void tcm_modify_rej_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;
    ps_cause_enum               cause;
    SESSION_INFO_PTR            si_db_ptr = NULL;
    smreg_pdp_modify_rej_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                                    MMI_FN_ENTER_TCM_MODIFY_REJ_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_modify_rej_struct *)local_para_ptr;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi);/* Get sib_id
                                                        * from nsapi.
                                                        */

    ASSERT(sib_id < TCM_TOT_CONTEXT);

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM,
                                                MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP );
        return;
    }

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_smreg_pdp_modify_rej( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM,
                                                MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP_2 );
        return;
    }

    cause = (ps_cause_enum) msg_ptr->cause; /* Reject cause */

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

#ifdef __APP_SECONDARY_PDP_SUPPORT__ //Ericsson IOT mtk00938 20080428
    if (tcm_ptr_g->secondary_preserve_counter == 1
            && (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO
                && si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
       )
    {
        tcm_reactivate_cnf_aux_proc( sib_id, si_db_ptr );

        TCM_PTR(sib_tab)[sib_id].mod_type = 0;
        si_db_ptr->tft_opcode = NO_OP_TFT;

        /* mtk00938: Reset flag */
        tcm_ptr_g->secondary_preserve_counter = 0;
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP_3 );
        return;
    }
#endif /*~__APP_SECONDARY_PDP_SUPPORT__*/

    if (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO
            && si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
    {
        /* the modification was not requested by upper layer,
        	return here, dont have to notify upper-layer */
        TCM_PTR(sib_tab)[sib_id].mod_type = (context_mod_type_enum)0;
        return;
    }
    else
    {
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
        /* Delete the TFT which is under modification. */
        si_db_ptr->tft_under_mod.filter_list_ptr =
            tcm_free_list( si_db_ptr->tft_under_mod.filter_list_ptr );
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
        TCM_PTR(sib_tab)[sib_id].mod_type = (context_mod_type_enum)0; //03.01.17 Clear the flag
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
        si_db_ptr->tft_opcode = NO_OP_TFT;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

        /* Send the rejection message to ATCI */
        /* Modified by: CH_Liang 2005.01.10
         * Description: send REJ msg with src_id specified in session info.
         */
        tcm_send_modify_rej_to_l4c( si_db_ptr->context_id,
                                    cause,
                                    si_db_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */
    }
    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MODIFY_REJ_HDLR_SUBOP );
    return;
}


void tcm_deactivate_req_state0n2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                     sib_id;
    //teardown_enum                 tear_down_flag = NO_TEARDOWN;
    kal_uint16                    param1 = 0;
    kal_uint8                     param2 = 0;
    SESSION_INFO_PTR              si_db_ptr = NULL;
    tcm_pdp_deactivate_req_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_DEACTIVATE_REQ_STATE2_HDLR_SUBOP );

    msg_ptr = (tcm_pdp_deactivate_req_struct *)local_para_ptr;

    /* Get sib_id from context_id. */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

#if 0
#ifdef __TCM_NEW_ARCH_DEBUG__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
#endif

    /*erica 20051215  mark unused codes */
    //TCM_PTR(tcm_act_src_id) = msg_ptr->src_id; //Store L4C src_id for CNF msg, Add 03.01.07

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {

        /* Send CNF to L4C */
        /* Modified by: CH_Liang 2005.01.10
         * Description: send CNF msg with src_id specified in REQ msg.
         */
        tcm_send_deactivate_cnf_to_l4c( msg_ptr->context_id,
                                        msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_DEACTIVATE_REQ_STATE2_HDLR_SUBOP );
        return;
    }

    /* Dial up and activate WAP over GPRS(cid=1) failed, then deactivate */
    if(si_db_ptr->startup_type != TCM_INTERNAL_STARTUP)
    {
        /* this context can only have a internal deactivation */
        /* Send CNF to L4C */
        /* Modified by: CH_Liang 2005.01.10
        * Description: send CNF msg with src_id specified in REQ msg.
        */
        tcm_send_deactivate_cnf_to_l4c( msg_ptr->context_id,
                                        msg_ptr->src_id );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        return;
    }

    //Begin: erica dallas 20060505: for 2ndary PDP
    /*
    if ( si_db_ptr->context_type == PRIMARY_CONTEXT )
    {
      // If the context type is primary context then check whether the
      // teardown is needed.
      tcm_tear_down_needed( sib_id, &tear_down_flag, si_db_ptr );
    }
    */
    //End: erica dallas 20060505: for 2ndary PDP

    /* Modified by: CH_Liang 2005.01.10
     * Description: Store the src_id in session info block for CNF msg
     *              when ready to send deactivation request.
     */
    si_db_ptr->src_id = msg_ptr->src_id; //Restore src_id, add 04.04.29
    /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

    /* Send the deactivation request message to SM */
    //erica dallas 20060505: for 2ndary PDP
    param1 = (kal_uint16)REGULAR_DEACTIVATION;
    param2 = (kal_uint8)si_db_ptr->tear_down_flag;  // __REL8__: TEARDOWN_ALL will be set in tcm_activate_aux_proc().
    tcm_ptr_g->deact_cause[sib_id]= REGULAR_DEACTIVATION; //later use this to know who it initiates the deact

#ifdef __ACL_SUPPORT__ /* erica */
    if ((tcm_ptr_g->acl_cntxt.pending_activating_sib & (0x01 << sib_id)) != 0)
    {
        /* the activation is pending by ACL checking, so local deactivate */
        smreg_pdp_deactivate_cnf_struct local_ptr;
        local_ptr.cause = REGULAR_DEACTIVATION;
        local_ptr.tot_valid_nsapi = 1;
        local_ptr.nsapi_list[0] = si_db_ptr->nsapi;
        tcm_deactivate_cnf_hdlr((local_para_struct*)&local_ptr, NULL);

        /* clear pending flag */
        tcm_ptr_g->acl_cntxt.pending_activating_sib &= (~(0x01 << sib_id));
        return;
    }
    else
#endif
        tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_DEACTIVATE_REQ,
                            si_db_ptr,
                            (void *)&param1,
                            (void *)&param2);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_DEACTIVATE_REQ_STATE2_HDLR_SUBOP );
    return;
}


void tcm_ext_deactivate_ind_state0n2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __PS_DIALUP__
    kal_uint8                         sib_id;
    kal_uint16                        param[4];
    kal_uint16                        param1 = 0;
    kal_uint8                         param2 = 0;
    //teardown_enum                     tear_down_flag = NO_TEARDOWN;
    SESSION_INFO_PTR                  si_db_ptr = NULL;
    mmi_ext_pdp_deactivate_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_EXT_DEACTIVATE_IND_STATE0N2_HDLR_SUBOP );

    msg_ptr = (mmi_ext_pdp_deactivate_ind_struct *)local_para_ptr;

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                        */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    if(     (si_db_ptr->main_state == TCM_CONTEXT_INACTIVE_STATE)
            && (si_db_ptr->sub_state == TCM_CONTEXT_INACTIVE_NULL_STATE))
    {
        // race condition, when SM deactivate first but PPP want to deactivate at the same time
        // the TCM PDP context will become to INACTIVATE state, but will receive PPP's deactivate_ind
        // if this happens, just respond MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP to PPP, TCM do not need to send SMREG_PDP_DEACTIVATE_REQ to SM
        ilm_struct ilm ;
        mmi_ext_pdp_deactivate_ack_rsp_struct *sent_msg_ptr = NULL;

        ilm.msg_id = MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP;

        sent_msg_ptr = (mmi_ext_pdp_deactivate_ack_rsp_struct *)
                       construct_local_para (
                           sizeof(mmi_ext_pdp_deactivate_ack_rsp_struct), TD_DL);
        sent_msg_ptr->context_id = msg_ptr->context_id;
        sent_msg_ptr->src_id =  msg_ptr->src_id;

        ilm.local_para_ptr = (local_para_struct *)sent_msg_ptr;
        ilm.peer_buff_ptr = NULL;

        TCM_SEND_ILM( MOD_TCM, MOD_PPP, TCM_PPP_SAP, &ilm );

        /* Poying: Clear TCM context in tcm_change_state_according_to_happened_events(). */
    }
    else if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        /* A deactivate indication is received in this case because the
         * link could not be established for a ME initiated context
         * activation.
         */
        param[0] = (kal_uint16)STARTUP_FAILURE;
        param[1] = (kal_uint16)si_db_ptr->context_id;
        param[2] = 0;
        /* Modified by: CH_Liang 2005.01.10
         * Description:  fill up the src_id in parameters
         */
        param[3] = msg_ptr->src_id;
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                             si_db_ptr,
                             (void *)param );

#if 0 /* mtk00714 marked old code */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
        /* Terminate the context */
        tcm_terminate_context( sib_id );
    }
    else
    {
        if(!(si_db_ptr->startup_type == TCM_EXTERNAL_STARTUP))
        {
            DEBUG_ASSERT(0);
            //"err : this context can only have a external deactivation" );
            return;
        }

        //erica dallas 20060505: for 2ndary PDP
        /*
        if ( si_db_ptr->context_type == PRIMARY_CONTEXT )
        {
          // If the context type is primary context then check whether
           // the teardown is needed.
          tcm_tear_down_needed( sib_id, &tear_down_flag, si_db_ptr );
        }
        */
        //erica dallas 20060505

        /* Send the deactivation request message to SM */
        param1 = (kal_uint16)REGULAR_DEACTIVATION;
        param2 = (kal_uint8)si_db_ptr->tear_down_flag;  //erica dallas 20060505: for 2ndary PDP
        // __REL8__: TEARDOWN_ALL will be set in tcm_activate_aux_proc().
        tcm_ptr_g->deact_cause[sib_id]= REGULAR_DEACTIVATION; //later use this to know if it initiates DEACT
        /* Modified by: CH_Liang 2005.01.10
         * Description: Store the src_id in session info block for IND msg
         *                  when ready to send deactivation request .
         */
        si_db_ptr->src_id = msg_ptr->src_id; //Restore src_id, add 04.04.29
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

#ifdef __ACL_SUPPORT__ /* erica */
        if ((tcm_ptr_g->acl_cntxt.pending_activating_sib & (0x01 << sib_id)) != 0)
        {
            /* the activation is pending by ACL checking, so local deactivate */
            smreg_pdp_deactivate_cnf_struct local_ptr;
            local_ptr.cause = REGULAR_DEACTIVATION;
            local_ptr.tot_valid_nsapi = 1;
            local_ptr.nsapi_list[0] = si_db_ptr->nsapi;
            tcm_deactivate_cnf_hdlr((local_para_struct*)&local_ptr, NULL);

            /* clear pending flag */
            tcm_ptr_g->acl_cntxt.pending_activating_sib &= (~(0x01 << sib_id));
            return;
        }
        else
#endif
        {
#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
            if(KAL_TRUE == msg_ptr->local_deactivate_pdp)
            {
                tcm_send_local_deactivate_req_to_sm(si_db_ptr, param1, param2);
            }
            else
            {
#endif // ~ __LOCAL_DEACTIVATE_PDP_SUPPORT__
                tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_DEACTIVATE_REQ,
                                    si_db_ptr,
                                    (void *)&param1,
                                    (void *)&param2 );
#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
            }
#endif // ~ __LOCAL_DEACTIVATE_PDP_SUPPORT__
        }
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_EXT_DEACTIVATE_IND_STATE0N2_HDLR_SUBOP );
    return;
#else
    ASSERT(0);
#endif /*__PS_DIALUP__*/

}

// ONLY for TEST SIM purpose,that it can use external context when NW requests activation
#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__))
void tcm_ext_deactivate_ind_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                         sib_id;
    kal_uint16                         param[4];
    ps_cause_enum                     rej_cause = UNSPECIFIED;
    SESSION_INFO_PTR                  si_db_ptr = NULL;
    mmi_ext_pdp_deactivate_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_EXT_DEACTIVATE_IND_STATE1_HDLR_SUBOP );

    msg_ptr = (mmi_ext_pdp_deactivate_ind_struct *)local_para_ptr;

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                        */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */
#ifdef __MTK_TARGET__
    ASSERT(sib_id < TCM_TOT_EXT_CONTEXT);
#endif // ~ #ifdef __MTK_TARGET__

    /* Check whether this message is expected */
    if ( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_EXT_DEACTIVATE_IND_STATE1_HDLR_SUBOP );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Stop the timer */
    tcm_stop_timer( si_db_ptr->context_id );

    /* Send the activate reject response to SM and terminate the
     * context.
     */
    tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REJ_RSP,
                        si_db_ptr,
                        (void *)NULL,
                        &rej_cause );

    /* Send a deactivation indication message to ATCI, with cause to
     * be startup failure, because this message is received in SS1
     * state the only reason why this message is received is because
     * the link startup has failed.
     */
    param[0] = (kal_uint16)STARTUP_FAILURE;
    param[1] = si_db_ptr->context_id;
    param[2] = 0;

    /* Modified by: CH_Liang 2005.01.10
     * Description:  fill up the src_id in parameters
     */
    param[3] = msg_ptr->src_id;
    /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

    tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                         si_db_ptr,
                         (void *)param );

    tcm_report_event_to_l4c(ME_CONTEXT_DEACT_EVENT, si_db_ptr);

#if 0 /* mtk00714 marked old code */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    /* Terminate the context */
    tcm_terminate_context( sib_id );

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_EXT_DEACTIVATE_IND_STATE1_HDLR_SUBOP );
    return;
}
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */


void tcm_deactivate_ind_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint16                          context_id_list[4];
    smreg_pdp_deactivate_ind_struct     *msg_ptr = NULL;
    SESSION_INFO_PTR                    sib_ptr = NULL;
    kal_uint8                           sib_id;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_DEACTIVATE_IND_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_deactivate_ind_struct *)local_para_ptr;

    if (msg_ptr->tot_valid_nsapi != 1)
    {
        DEBUG_ASSERT(0) ;
        msg_ptr->tot_valid_nsapi = 1 ;
    }

    /* Check if the nsapi is valid or not. */
    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[0]) ;

    if ((sib_id == 0xFF) || (tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID))
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_DEACTIVATE_IND_HDLR_SUBOP );
        return;
    }

    if ( !tcm_check_smreg_pdp_deactivate_ind( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG ( MOD_TCM, MMI_FN_EXIT_TCM_DEACTIVATE_IND_HDLR_SUBOP_2 );
        return;
    }

    sib_ptr = tcm_get_sib_ptr(sib_id) ;

    if (msg_ptr->cause == REACTIVATION_REQD)
    {
        tcm_report_event_to_l4c(NW_CONTEXT_REACT_EVENT, sib_ptr);
    }
    else
    {
        tcm_report_event_to_l4c(NW_CONTEXT_DEACT_EVENT, sib_ptr);
    }


#ifdef __PS_DIALUP__
    if (sib_ptr->startup_type == TCM_EXTERNAL_STARTUP)
    {
        if (sib_ptr->l2p != PPP)
        {
            tcm_terminate_context( sib_id );
        }
        else
        {
            tcm_ptr_g->deact_cause[sib_id] = (ps_cause_enum)msg_ptr->cause;
        }

        context_id_list[0] = sib_ptr->context_id ;
        context_id_list[1] = 0 ;

        tcm_send_msg_to_ppp( MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ,
                             NULL,
                             (void *) context_id_list );
    }
    else
#endif /* __PS_DILAUP__ */
    {
        /* MO PDP-DEACT is ongoing. Just ignore the MT PDP-DEACT. */
        if ( sib_ptr->sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE )
        {
            return ;
        }

        tcm_terminate_context(sib_id) ;
    }


    if ( (sib_ptr->startup_type == TCM_INTERNAL_STARTUP)
#ifdef __PS_DIALUP__
            || (( sib_ptr->startup_type == TCM_EXTERNAL_STARTUP) && (sib_ptr->l2p != PPP))
#endif /* __PS_DIALUP__ */
       )
    {
        context_id_list[0] = msg_ptr->cause;
        context_id_list[1] = (kal_uint16)sib_ptr->context_id;
        context_id_list[2] = 0 ;
        context_id_list[3] = sib_ptr->src_id ;

        tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                             sib_ptr,
                             (void *)context_id_list );
    }

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_DEACTIVATE_IND_HDLR_SUBOP );
    return;
}


void tcm_deactivate_cnf_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    smreg_pdp_deactivate_cnf_struct     *msg_ptr = NULL;
    SESSION_INFO_PTR                    sib_ptr = NULL;
    kal_uint8                           sib_id;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_DEACTIVATE_CNF_HDLR_SUBOP );

    msg_ptr = (smreg_pdp_deactivate_cnf_struct *)local_para_ptr;

    if (msg_ptr->tot_valid_nsapi != 1)
    {
        DEBUG_ASSERT(0) ;
        msg_ptr->tot_valid_nsapi = 1 ;
    }

    /* Check if the nsapi is valid or not. */
    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi_list[0]) ;

    if ((sib_id == 0xFF) || (tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID))
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_DEACTIVATE_CNF_HDLR_SUBOP );
        return;
    }

    /* Actually, there's nothing to check in DEACT-CNF. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    sib_ptr = tcm_get_sib_ptr(sib_id) ;

#ifdef __PS_DIALUP__
    if (sib_ptr->startup_type == TCM_EXTERNAL_STARTUP)
    {

        if(sib_ptr->sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE)
        {
            tcm_send_msg_to_ppp( MSG_ID_TAF_EXT_PDP_DEACTIVATE_ACK_RSP,
                                 sib_ptr,
                                 (void *)NULL );
        }
        else
        {
            kal_uint8 nsapi_list[11];

            kal_mem_set(nsapi_list, 0, 11);
            nsapi_list[0] = sib_ptr->nsapi;

            tcm_send_msg_to_ppp( MSG_ID_TAF_EXT_PDP_DEACTIVATE_REQ,
                                 sib_ptr,
                                 (void *) nsapi_list );
        }

        if ( sib_ptr->l2p != PPP )
        {
            /* Incase of external context deactivation a deactivate
             * Indication message should be sent to ATCI so that ATCI
             * can reset the state information it had for this context
             * incase if the l2p type is not PPP.
             */
            kal_uint16  context_id_list[4] ;

            context_id_list[0] = msg_ptr->cause;
            context_id_list[1] = sib_ptr->context_id;
            context_id_list[2] = 0;
            context_id_list[3] = sib_ptr->src_id;

            tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                                 sib_ptr,
                                 (void *) context_id_list );

            tcm_terminate_context( sib_id );
        }
        else
        {
            tcm_ptr_g->deact_cause[sib_id] = (ps_cause_enum)msg_ptr->cause;
        }

    }
    else
#endif /* __PS_DIALUP__ */
    {

        if(sib_ptr->sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE)
        {
            tcm_send_deactivate_cnf_to_l4c( sib_ptr->context_id, sib_ptr->src_id );
        }
        else
        {
            smreg_pdp_deactivate_ind_struct *deact_ind_msg_ptr = NULL;
            deact_ind_msg_ptr = construct_local_para(sizeof(smreg_pdp_deactivate_ind_struct), TD_RESET);

            deact_ind_msg_ptr->tear_ind = NO_TEARDOWN;
            deact_ind_msg_ptr->cause = msg_ptr->cause;
            deact_ind_msg_ptr->tot_valid_nsapi = 1;
            deact_ind_msg_ptr->nsapi_list[0] = msg_ptr->nsapi_list[0];
            tcm_deactivate_ind_hdlr((local_para_struct *)deact_ind_msg_ptr, NULL);
            free_local_para((local_para_struct *)deact_ind_msg_ptr);
        }

        tcm_report_event_to_l4c(ME_CONTEXT_DEACT_EVENT, sib_ptr);

        tcm_terminate_context( sib_id );
    }

#if 0//def __MODEM_EM_MODE__ /* 20080715, EM_UPDATE_REQ modification */
/* under construction !*/
#endif

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    ( MOD_TCM,
      MMI_FN_EXIT_TCM_DEACTIVATE_CNF_HDLR_SUBOP );
    return;
}


void tcm_ratdm_config_cnf_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{

    kal_uint8 sib_id = 0;
    session_info_block_struct * si_db_ptr = NULL;
    tcm_ratdm_config_cnf_struct * local_ptr = (tcm_ratdm_config_cnf_struct *)local_para_ptr;

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_TCM_RATDM_CONFIG_CNF_STATE2_HDLR);

#ifdef __TCM_NEW_ARCH_DEBUG__
    if(KAL_FALSE == local_ptr->result)
    {
        ASSERT(0);
    }
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, local_ptr->context_id);
    si_db_ptr = tcm_get_sib_ptr(sib_id);

#ifdef __TCM_NEW_ARCH_DEBUG__
    if(sib_id == 0xFF)
    {
        ASSERT(0);
    }

    if(si_db_ptr->context_id != local_ptr->context_id)
    {
        ASSERT(0);
    }
    if(si_db_ptr->nsapi != local_ptr->nsapi)
    {
        ASSERT(0);
    }
    if(
#ifdef __UPS_SUPPORT__
        (local_ptr->module_id != MOD_UPS)
#else
        (local_ptr->module_id != MOD_RATDM)
#endif
#ifdef __CMUX_SUPPORT__
        && (local_ptr->module_id != MOD_CMUX)
#endif // ~ #ifdef __CMUX_SUPPORT__
#ifdef PPP_NOT_PRESENT
        && (local_ptr->module_id != MOD_RATDM)
#else
        && (local_ptr->module_id != MOD_PPP)
#endif
    )
    {
        ASSERT(0);
    }
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

   // tcm_activate_cnf_aux_proc( sib_id, si_db_ptr );
}


void tcm_ratdm_deconfig_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{

}


void tcm_ratdm_deconfig_cnf_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{

}


void tcm_ratdm_deconfig_cnf_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{

}


void tcm_link_free_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
#ifdef __EXT_PDP_CONTEXT_ON__
#ifdef __PS_DIALUP__
    kal_uint8                sib_id;
    kal_uint16                param[4];
    SESSION_INFO_PTR         si_db_ptr = NULL;
    mmi_link_free_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                                    MMI_FN_ENTER_TCM_LINK_FREE_STATE0_HDLR_SUBOP );

    msg_ptr = (mmi_link_free_ind_struct *)local_para_ptr;

    /* Modified by: CH_Liang 2005.01.25
     * Description: get sib_id from context_id
                                                         */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
    /* End of Modification, 2005.03.19. Reviewed by: Joseph */

    ASSERT(sib_id < TCM_TOT_EXT_CONTEXT);

    /* Poying: Clear context before TAF_LINK_FREE_IND. */
    /* Remove the checking since TCM has already cleared its context. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    /* Check whether the message is corrupted. If it is then log an
     * error and return.
     */
    if ( !tcm_check_mmi_link_free_ind( msg_ptr ) )
    {
        TCM_CONTROL_PLANE_FN_ABNORMAL_EXIT_LOG
        ( MOD_TCM,
          MMI_FN_EXIT_TCM_LINK_FREE_IND_STATE0_HDLR_SUBOP_2 );
        return;
    }

    /* Get the session information for this context */
    si_db_ptr = tcm_get_sib_ptr( sib_id );


    /* Poying: Clear context before TAF_LINK_FREE_IND.
     * - Note:
     *   1. TCM now just relays the content in LINK_FREE_IND from PPP to L4C.
     *   2. Content to use shall be set in the param variable (the si_db_ptr is dummy).
     */
    param[0] = msg_ptr->cause ;
    param[1] = msg_ptr->context_id;
    param[2] = 0; // end-of-list
    param[3] = 0; // src_id

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
#endif

    tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_DEACTIVATE_IND,
                         si_db_ptr,
                         (void *)param );

    /* Terminate the context */
    // tcm_terminate_context( sib_id );

    /* Poying: Clear context before TAF_LINK_FREE_IND. */
    /* Check ASSERTs here. */
    TCM_INTERNAL_DEBUG_ASSERT( tcm_ptr_g->cntxt_flag[sib_id] == TCM_CNTXT_INVALID ) ;

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
    //                 MMI_FN_EXIT_TCM_LINK_FREE_IND_STATE0_HDLR_SUBOP );
    return;
#endif //#ifdef __PS_DIALUP__
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}


void tcm_fill_config_options( void              *config_options,
                              kal_uint8         *config_option_num,
                              SESSION_INFO_PTR  si_db_ptr )
{
    kal_uint8   index = 0;
    kal_uint8   is_chap ;
    kal_uint8   i = 0;
    kal_uint8   *user_name ;
    kal_uint8   *password ;
    kal_uint32 username_len = 0 ;
    kal_uint32 password_len = 0 ;

    kal_uint8 ipcp_protocol_config[] = {0x01, 0x01, 0x00, 0x10,
                                        0x81, 0x06, 0x00, 0x00, 0x00, 0x00,
                                        0x83, 0x06, 0x00, 0x00, 0x00, 0x00
                                       }; //for IPCP

    config_option_struct * config_option = (config_option_struct *)config_options;

    is_chap = si_db_ptr->is_chap ;
    user_name = si_db_ptr->user_name ;
    password = si_db_ptr->password;

    /* Poying: 20110208.
     * - TCM expects that the given user_name and password both have NUL-terminators in the tail of strings;
     *   however, this requirement may NOT be guaranteed by upper layers.
     * - Hence, we need to handle the possible violation case inside TCM.
     */

    /* See if there is any NUL-terminator in the given user_name */
    for (i=0; i<INT_MAX_GPRS_USER_NAME_LEN; i++)
    {
        if (user_name[i] == '\0')
        {
            username_len = i ;
            break ;
        }
    }
    if (i == INT_MAX_GPRS_USER_NAME_LEN)
    {
        kal_brief_trace(TRACE_WARNING, TCM_USERNAME_STRING_WITHOUT_NUL_TERMINATOR);
        DEBUG_ASSERT(0) ;

        username_len = INT_MAX_GPRS_USER_NAME_LEN ;
    }

    /* See if there is any NUL-terminator in the given password */
    for (i=0; i<INT_MAX_GPRS_PASSWORD_LEN; i++)
    {
        if (password[i] == '\0')
        {
            password_len = i ;
            break ;
        }
    }
    if (i == INT_MAX_GPRS_PASSWORD_LEN)
    {
        kal_brief_trace(TRACE_WARNING, TCM_PASSWORD_STRING_WITHOUT_NUL_TERMINATOR);
        DEBUG_ASSERT(0) ;

        password_len = INT_MAX_GPRS_PASSWORD_LEN ;
    }


    //if (is_chap != 1)
    if ((is_chap == SM_GPRS_AUTHENTICATION_PAP)
            || (is_chap == SM_GPRS_AUTHENTICATION_PAP_CHAP)
            || (is_chap > SM_GPRS_AUTHENTICATION_MAX_VALID_ENUM_VALUE))
    {
        /* PAP */
        //if(0 < strlen((kal_char*)user_name))  //mtk00714 20070723
        {
            kal_brief_trace(TRACE_INFO, TCM_USE_PAP);
            /* Add username and password to config option 03.12.05 */
            config_option[index].protocol_id = 0xC023; /* PAP */

            i = 0;
            config_option[index].protocol_config[i++] = 0x01;
            config_option[index].protocol_config[i++] = 0x01;
            config_option[index].protocol_config[i++] = 0x00;
            i++; /* Bypass config option length first */

            /* Fill Username length and data */
            config_option[index].protocol_config[i++] = username_len;
            if (0 < username_len)
            {
                kal_mem_cpy(&config_option[index].protocol_config[i], user_name, username_len);
                i += username_len;
            }

            /* Fill Password length and data */
            config_option[index].protocol_config[i++] = password_len;
            if (0 < password_len)
            {
                kal_mem_cpy(&config_option[index].protocol_config[i], password, password_len);
                i += password_len;
            }

            /* Fill config option length */
            config_option[index].protocol_config[3] = config_option[index].protocol_config_len = i;
            index++;
        }
    }
    //else
    if ((is_chap == SM_GPRS_AUTHENTICATION_CHAP)
#ifdef __SP_RIL_SUPPORT__
            || (is_chap == SM_GPRS_AUTHENTICATION_PAP_CHAP)
#endif // ~ #ifdef __SP_RIL_SUPPORT__
       )
    {
        /* CHAP */
        if((0 < username_len) && (0 < password_len))
        {
            kal_uint8 id = 0x01;
#if 0
/* under construction !*/
#endif
#define MD5_SIGNATURE_SIZE 16   /* 16 bytes in a MD5 message digest */

#define __CONSTRUCT_CHAP_BLOCKS_WITHOUT_USERNAME_INFO__

#ifdef __CONSTRUCT_CHAP_BLOCKS_WITHOUT_USERNAME_INFO__  // poying: new
            kal_uint8 challenge_value[16];
#else
            kal_uint8 challenge_value[8];
#endif
            kal_char hash[MD5_SIGNATURE_SIZE];
            STCHE mdContext;

            /*
            kal_uint8 challenge_value[] = {0xDE, 0x5B, 0x56, 0x3B,
                   					    0x7D, 0x98, 0x95, 0xDF}; */

#if 0 //def __CONSTRUCT_CHAP_BLOCKS_WITHOUT_USERNAME_INFO__
/* under construction !*/
#endif /* __CONSTRUCT_CHAP_BLOCKS_WITHOUT_USERNAME_INFO__ */

            kal_brief_trace(TRACE_INFO, TCM_USE_CHAP);

            /* get challenge value randomly */
            for (i=0; i<sizeof(challenge_value); i++)
            {
                challenge_value[i] = (kal_uint8)rand();
            }

            /****** CHAP challange ********************************************/
            config_option[index].protocol_id = 0xC223; /* CHAP */

            i = 0;
            config_option[index].protocol_config[i++] = 0x01;  //challange
            config_option[index].protocol_config[i++] = id;  // ID
            config_option[index].protocol_config[i++] = 0x00;
            i++; /* Bypass config option length first */

            /* Fill value */
            config_option[index].protocol_config[i++] = sizeof(challenge_value); //value-size: 8
            kal_mem_cpy(&config_option[index].protocol_config[i], challenge_value, sizeof(challenge_value));
            i += sizeof(challenge_value);

#ifdef __CONSTRUCT_CHAP_BLOCKS_WITHOUT_USERNAME_INFO__
            {
                kal_char name_for_chap[] = "UMTS_CHAP_SRVR";  // 55 4D 54 53 5F 43 48 41 50 5F 53 52 56 52

                kal_mem_cpy(&config_option[index].protocol_config[i], name_for_chap, (sizeof(name_for_chap)-1)) ;  // "-1" since null-terminator is in tail.
                i += (sizeof(name_for_chap)-1) ;
            }
#else
            /* Fill Username */
            kal_mem_cpy(&config_option[index].protocol_config[i], user_name, username_len);
            i += username_len;
#endif

            /* Fill config option length */
            config_option[index].protocol_config[3] = config_option[index].protocol_config_len = i;
            index++;


            /****** CHAP response ********************************************/
            /* calculate hash */
#if 0 /* USE CHE_MD5 */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */
            che_init(&mdContext,CHE_MD5);
            che_process( &mdContext,
                         CHE_MD5,
                         CHE_MODE_NULL,
                         CHE_HASH,
                         (kal_uint8 *)&id,
                         (kal_uint8 *)hash,
                         1,
                         KAL_FALSE);
            che_process( &mdContext,
                         CHE_MD5,
                         CHE_MODE_NULL,
                         CHE_HASH,
                         (kal_uint8 *)password,
                         (kal_uint8 *)hash,
                         password_len,
                         KAL_FALSE);
            che_process( &mdContext,
                         CHE_MD5,
                         CHE_MODE_NULL,
                         CHE_HASH,
                         (kal_uint8 *)challenge_value,
                         (kal_uint8 *)hash,
                         sizeof(challenge_value),
                         KAL_TRUE);
            che_deinit( &mdContext);

            i = 0;
            config_option[index].protocol_id = 0xC223; /* CHAP */
            config_option[index].protocol_config[i++] = 0x02;  //response
            config_option[index].protocol_config[i++] = id;  // ID
            config_option[index].protocol_config[i++] = 0x00;
            i++; /* Bypass config option length first */

            /* Fill hash */
            config_option[index].protocol_config[i++] = MD5_SIGNATURE_SIZE; //value-size
            kal_mem_cpy(&config_option[index].protocol_config[i], hash, MD5_SIGNATURE_SIZE);
            i += MD5_SIGNATURE_SIZE;

            /* Fill Username */
            kal_mem_cpy(&config_option[index].protocol_config[i], user_name, username_len);
            i += username_len;

            /* Fill config option length */
            config_option[index].protocol_config[3] = config_option[index].protocol_config_len = i;
            index ++;

        }
    }

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if (defined(__IPV4V6__) || defined (__IPV6__))
    {
        pdp_addr_type_enum pdp_addr_type = si_db_ptr->pdp_addr_type ;

        /* Poying: Set IPCP for IPv4. */
        if ((pdp_addr_type == IPV4_ADDR_TYPE) || (pdp_addr_type == IPV4V6_ADDR_TYPE))
        {
            /* IPCP */
            config_option[index].protocol_id = 0x8021;
            config_option[index].protocol_config_len = sizeof(ipcp_protocol_config);
            kal_mem_cpy(config_option[index].protocol_config, ipcp_protocol_config, config_option[index].protocol_config_len);
            index++ ;
        }

        /* Poying: Set PCO for IPv6 DNS. */
        if ((pdp_addr_type == IPV6_ADDR_TYPE) || (pdp_addr_type == IPV4V6_ADDR_TYPE))
        {
            if (si_db_ptr->act_pdp_cntxt_req_ipv6_dns == TCM_ACTIVATE_PDP_NEED_REQUEST_IPV6_DNS)
            {
                config_option[index].protocol_id = 0x0003;
                config_option[index].protocol_config_len = 0;
                index++;
            }
        }
    }
#else  /* (defined(__IPV4V6__) || defined (__IPV6__)) */
    {
        /* IPCP */
        config_option[index].protocol_id = 0x8021;
        config_option[index].protocol_config_len = sizeof(ipcp_protocol_config);
        kal_mem_cpy(config_option[index].protocol_config, ipcp_protocol_config, config_option[index].protocol_config_len);
        index++ ;
    }
#endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */


#ifdef __REL8__
    if (tcm_ptr_g->tcm_skip_ipv4_alloc == KAL_FALSE && tcm_msq_check_if_use_r6_qos() == KAL_FALSE)
    {
        /* IPv4 Address Allocation. */
        if (si_db_ptr->AT_definition & TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP)
        {
            config_option[index].protocol_id = 0x000B ;  // IPv4 address allocated via DHCP
        }
        else
        {
            config_option[index].protocol_id = 0x000A ;  // IPv4 address allocated via NAS signalling
        }
        config_option[index].protocol_config_len = 0 ;

        index++ ;
    }
#endif /* __REL8__ */

    *config_option_num = index;

    return;
}


kal_bool tcm_activate_aux_proc( kal_uint8         sib_id,
                                local_para_struct *local_para_ptr,
                                kal_bool          *term_flag,
                                SESSION_INFO_PTR  si_db_ptr )
{
    pdp_context_type_enum cntxt_type;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                                    MMI_FN_ENTER_TCM_ACTIVATE_AUX_PROC_SUBOP );

    /* Determine the kind of activation request to be sent to SM */
    cntxt_type = tcm_check_context_prim_sec( sib_id, si_db_ptr );
    if ( cntxt_type == PRIMARY_CONTEXT )
    {
        /* Modified by: CH_Liang 2005.01.10
         * Description: Store the src_id in session info block for CNF/REJ msg
         *              when ready to send activate request.
         */
        tcm_store_activate_src( si_db_ptr, local_para_ptr );
        /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

        /* Send primary context activation request */
        // si_db_ptr->context_type = PRIMARY_CONTEXT;
        si_db_ptr->mod_type = (context_mod_type_enum)0; //erica,  mod_type should be clear.

#ifdef __REL8__
        /* Per 23.060, V8.12.0, Sec. 9.2.4.1,
         *  - If the MS deactivates the PDP context created by the PDP context Activation Procedure,
         *    the Teardown Ind shall be sent.
         */
        si_db_ptr->tear_down_flag = TEARDOWN_ALL ;
#endif /* __REL8__ */

#ifdef __ACL_SUPPORT__ /* erica */
        /* HERE! : Normal procedure on TARGET*/
#ifdef __GEMINI__
        if (usim_query_acl_type((sim_interface_enum)tcm_ptr_g->sim_interface) == USIM_ACL_SERVICE_ACTIVATED)
#else
        if (usim_query_acl_type( ) == USIM_ACL_SERVICE_ACTIVATED)
#endif
        {
            /* ACL service enabled, read EF_ACL from SIM */
            tcm_ptr_g->acl_cntxt.pending_activating_sib |= (0x01 << sib_id);

            switch(tcm_ptr_g->acl_cntxt.curr_action)
            {
            case TCM_ACL_IDLE:
            {
                tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_PDP_GET_FILE_INFO;
                tcm_send_file_info_req_to_sim (NULL);
                break;
            }
            case TCM_ACL_MMI_GET_FILE_INFO:
            {
                /* already reading ACL */
                tcm_ptr_g->acl_cntxt.curr_action |= TCM_ACL_PDP_GET_FILE_INFO;
                break;
            }
            case TCM_ACL_MMI_READ:
            {
                /* already reading ACL */
                tcm_ptr_g->acl_cntxt.curr_action |= TCM_ACL_PDP_READ;
                break;
            }
            case TCM_ACL_SET_MODE:
            case TCM_ACL_MMI_WRITE:
            {
                /* action conflict, need to do special handle after these action finishes */
                break;
            }
            }
        }
        else
#endif
        {
            /* ACL service not enabled, send actiavte_req directly */
            tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REQ,
                                si_db_ptr,
                                (void *)NULL,
                                (void *)NULL );
        }

        TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_ACTIVATE_AUX_PROC_SUBOP );
        return KAL_TRUE;
    }
    else
    {
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
        /* Incase if we have to send a secondary context activation
         * then first check whether the TFT is present.
         */
        if (
            (tcm_get_sib_ptr(tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->primary_context_id))->main_state == TCM_CONTEXT_ACTIVE_STATE) &&
            ((tcm_is_test_sim() == KAL_TRUE) //test sim don't check TFT for conformance tests
             ||  ((si_db_ptr->tft_under_mod.filter_list_ptr != NULL) // tft exists
                  ||  (tcm_check_without_tft(si_db_ptr->primary_context_id) == KAL_FALSE))) //primary has tft
        )
        {
            /* Modified by: CH_Liang 2005.01.10
             * Description: Store the src_id in session info block for CNF/REJ msg
             *              when ready to send activate request.
             */
            tcm_store_activate_src( si_db_ptr, local_para_ptr );
            /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

            /* If the tft is present then send the secondary context
             * activation request.
             */
            // si_db_ptr->context_type = SECONDARY_CONTEXT;
            tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_SEC_REQ,
                                si_db_ptr,
                                (void *)NULL,
                                (void *)NULL );

            /* Update the tft_in_use field for this SIB the the packet
             * filterlist present in tft_under_mod field of the SIB.
             */
            tcm_update_tft( si_db_ptr, CREATE_NEW_TFT );
            si_db_ptr->tft_opcode = NO_OP_TFT;
            si_db_ptr->mod_type = (context_mod_type_enum)0;
        }
        else
        {
            /* Reject the activation : R98 or TFT missing */
            if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
            {
                //kal_uint8 param[2];
                tcm_pdp_activate_req_struct *msg_ptr = NULL;

                /* Send context activation reject message */
                /* Modified by: CH_Liang 2005.01.25
                 * Description: send REJ msg with src_id and profile_id.
                 */
                msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;

                tcm_send_l4c_activate_rej(KAL_FALSE, msg_ptr, TCM_L4C_ACT_INVALID_SEC_ACTIVATION) ;

                /* Terminate the context */
                tcm_terminate_context( sib_id );
            }
#ifdef __PS_DIALUP__
            else
            {
                mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;

                /* Send context activation reject message */
                msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

                /* Modified by: CH_Liang 2005.01.10
                    * Description: send activate REJ msg to PPP including src_id
                    */
                tcm_send_activate_rej_to_ppp( si_db_ptr,  msg_ptr->context_id,
                                              msg_ptr->config_option_len, (void *)msg_ptr->config_option,
                                              msg_ptr->config_protocol, TCM_CONFIG_OPTION_FROM_MSG,
                                              msg_ptr->src_id );
                /* End of Modification, 2005.01.17. Reviewed by: Joseph Chen */

                if ( si_db_ptr->l2p != PPP )
                {
                    /* Terminate the context */
                    tcm_terminate_context( sib_id );
                    *term_flag = KAL_FALSE;
                }
            }
#endif
        }
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
        ASSERT(0);
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                                          MMI_FN_EXIT_TCM_ACTIVATE_AUX_PROC_SUBOP );

    return( KAL_TRUE );
}


pdp_context_type_enum tcm_check_context_prim_sec( kal_uint8        sib_id,
        SESSION_INFO_PTR si_db_ptr )
{
    tcm_sib_usage_enum    sib_free;
    kal_uint8             indx;
    SESSION_INFO_PTR      loc_si_db_ptr = NULL;
    pdp_context_type_enum cntxt_type = PRIMARY_CONTEXT;/* Default
                                                        * context type
                                                        * is primary.
                                                        */

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM, MMI_FN_ENTER_TCM_CHECK_CONTEXT_PRIM_SEC_SUBOP );

    if ( si_db_ptr->context_type != UNKNOWN_CONTEXT )
    {
        /* If ATCI determines whether a context is primary or secondary
         * then there is no need for TCM to do the same. ATCI should
         * also fill up the primarycontextId incase if the context type
         * is secondary.
         */
        if ( si_db_ptr->context_type == SECONDARY_CONTEXT ) //__APP_SECONDARY_PDP_SUPPORT__
        {
            /* ATCI should fill up the primary context_id field */
            ASSERT( tcm_cntxt_id_check(si_db_ptr->primary_context_id) ) ;

        }
        cntxt_type = si_db_ptr->context_type;
    }
    else
    {
        /* If the pdp_addr_len is NULL then its dynamic address, and the
         * context has to be primary.
         */
        if ( si_db_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN )
        {
            /* Set the primary context id for this context to its
             * context_id.
             */
            si_db_ptr->primary_context_id = si_db_ptr->context_id;
            cntxt_type = PRIMARY_CONTEXT;
        }
        else
        {
            for (indx = 0; indx < TCM_TOT_CONTEXT; indx++)
            {
                /* Check whether the SIB is currently in use */
                tcm_is_sib_free( indx, &sib_free );
                if ( (indx != sib_id) &&
                        (sib_free == TCM_SIB_IN_USE) &&
                        (tcm_ptr_g->cntxt_flag[indx] == TCM_CNTXT_VALID) )
                {
                    loc_si_db_ptr = tcm_get_sib_ptr(indx );

                    /* Check if the pdp address match, the state of the
                     * context is context active and the context type is
                     * primary. If the context is a primary context and the
                     * pdp address match and the apn is present in both the
                     * contexts then try to match the apn's.
                     */
                    if( (loc_si_db_ptr->context_type == PRIMARY_CONTEXT) &&
                            (tcm_string_cmp( si_db_ptr->addr_val,
                                             si_db_ptr->pdp_addr_len,
                                             loc_si_db_ptr->addr_val,
                                             loc_si_db_ptr->pdp_addr_len )
                             == KAL_TRUE) &&
                            (loc_si_db_ptr->main_state == TCM_CONTEXT_ACTIVE_STATE) &&
                            (si_db_ptr->apn_len != 0 &&
                             loc_si_db_ptr->apn_len != 0) )
                    {
                        if ( tcm_string_cmp( loc_si_db_ptr->apn,
                                             loc_si_db_ptr->apn_len,
                                             si_db_ptr->apn,
                                             si_db_ptr->apn_len ) == KAL_TRUE )
                        {
                            /* If the apn's are present in both and they match
                             * then this context is secondary.
                             */
                            break;
                        }
                    } else if ( (loc_si_db_ptr->context_type
                                 == PRIMARY_CONTEXT) &&
                                (tcm_string_cmp(si_db_ptr->addr_val,
                                                si_db_ptr->pdp_addr_len,
                                                loc_si_db_ptr->addr_val,
                                                loc_si_db_ptr->pdp_addr_len )
                                 == KAL_TRUE) &&
                                (loc_si_db_ptr->main_state
                                 == TCM_CONTEXT_ACTIVE_STATE) &&
                                (si_db_ptr->apn_len == 0 &&
                                 loc_si_db_ptr->apn_len == 0) )
                    {
                        /* Both APN are unspecified, hence the common default
                         * APN in HLR will anyway be the same.
                         */
                        break;
                    }
                }
            } /* end for */

            if ( indx < TCM_TOT_CONTEXT ) /* Surely a secondary context */
            {
                /* Set the primary context id for this context to context_id
                 * determined above.
                 */
                si_db_ptr->primary_context_id = loc_si_db_ptr->context_id;
                cntxt_type = SECONDARY_CONTEXT;
#ifndef __TURN_ON_GENERAL_SECONDARY_PDP__
                ASSERT(0);
#endif // ~ __TURN_ON_GENERAL_SECONDARY_PDP__
            }
            else
            {
                /* Now since indx > TCM_TOT_NSAPI the context type is a
                 * primary context. The primary context_id of this context
                 * is set to its own context_id.
                 */
                si_db_ptr->primary_context_id = si_db_ptr->context_id;
                cntxt_type = PRIMARY_CONTEXT;
            }
        }
    }

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    //       ( MOD_TCM,
    //         MMI_FN_EXIT_TCM_CHECK_CONTEXT_PRIM_SEC_SUBOP );

    return( cntxt_type );
}


void tcm_store_activate_src( SESSION_INFO_PTR  si_db_ptr,
                             local_para_struct *local_para_ptr )
{
    if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
    {
        tcm_pdp_activate_req_struct *msg_ptr = (tcm_pdp_activate_req_struct *)local_para_ptr;
        si_db_ptr->src_id = msg_ptr->src_id;
    }
    else
    {
        mmi_ext_pdp_activate_ind_struct *msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;
        si_db_ptr->src_id = msg_ptr->src_id;
    }

    return;
}


kal_bool tcm_string_cmp( kal_uint8 *str1,
                         kal_uint32 len1,
                         kal_uint8 *str2,
                         kal_uint32 len2 )
{
    kal_bool cmp_result = KAL_FALSE;

    /* First check whether the string lengths are equal. Incase if
     * they are not then conclude that the two strings are not same.
     */
    if (len2 == len1)
    {
        kal_uint32 indx1;

        for(indx1 = 0; indx1 < len1; indx1++)
        {
            /* Compare the corresponding positions. If they are not same
             * then the strings do not match.
             */
            if(*(str1 + indx1) != *(str2 + indx1))
            {
                break;
            }
        }
        /* If indx1 == len1 then the two strings match.
         */
        if(indx1 == len1)
        {
            cmp_result = KAL_TRUE;
        }
    }
    return(cmp_result);
}


kal_bool tcm_match_pdpstartup_params( local_para_struct *local_para_ptr,
                                      SESSION_INFO_PTR  si_db_ptr )
{
#ifdef __EXT_PDP_CONTEXT_ON__
    mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_MATCH_PDP_STARTUP_PARAMS_SUBOP );

    /* Make local copies of the parameters to be compared */
    msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

    /* Check whether protocol option is received as PPP or not.If we
     * received any thing other than PPP then send kal_false.We are supporting
     * only PPP */

    if (msg_ptr->config_protocol != MMI_CONFIG_PROTOCOL_PPP )
    {
        return KAL_FALSE;
    }

    /* Check if any of l2p_type in message and that stored in database
     * are null.
     */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    si_db_ptr->l2p = PPP; //by Danny


    /* Poying: Bypass the checking on pdp_type and pdp_len  if IPv6 is turned ON.
     * - If IPv6 is turned ON, the pdp_types configured by AT-command and requested by PPP-ACT-request may be different.
     * - In this case, TCM will directly use the pdp_type requested by PPP in tcm_update_sibfrom_startup_info().
     */
#if (!defined(__IPV4V6__) && !defined(__IPV6__))
    {
        kal_uint8                       pdp_type;
        kal_uint8                       pdp_addr_len;
        kal_uint8                       pdp_addr[MAX_PDP_ADDR_LEN];
        kal_bool                        match_result = KAL_FALSE;

        pdp_type = msg_ptr->pdp_type;
        pdp_addr_len = msg_ptr->pdp_addr_len;
        kal_mem_cpy( (kal_uint8 *)pdp_addr,
                     (kal_uint8 *)msg_ptr->pdp_addr,
                     msg_ptr->pdp_addr_len );

        /* Check if any of pdp_type in message and that stored in database
         * are null.
         */
        if ( (pdp_type == NULL_PDP_ADDR_TYPE) ||
                (si_db_ptr->pdp_addr_type == NULL_PDP_ADDR_TYPE) )
        {
            pdp_type = si_db_ptr->pdp_addr_type;
        }

        if (pdp_type == si_db_ptr->pdp_addr_type)
        {
            /* If they match then match the pdpAddress. Incase if any of the
             * pdp_addr are null then match is true.
             */
            if ( (pdp_addr_len == NULL_PDP_ADDR_LEN) ||
                    (si_db_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN) )
            {
                match_result = KAL_TRUE;
            }
            else
            {
                /* Else match the pdp_addr parameters */
                match_result = tcm_string_cmp( pdp_addr,
                                               pdp_addr_len,
                                               si_db_ptr->addr_val,
                                               si_db_ptr->pdp_addr_len );
            }
        }

        TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MATCH_PDP_STARTUP_PARAMS_SUBOP );
        return( match_result );
    }
#else
    {
        TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, MMI_FN_EXIT_TCM_MATCH_PDP_STARTUP_PARAMS_SUBOP );
        return KAL_TRUE ;
    }
#endif /* (defined(__IPV4V6__) || defined(__IPV6__)) */


#else  /* __EXT_PDP_CONTEXT_ON__ */
    return KAL_FALSE;
#endif /* __EXT_PDP_CONTEXT_ON__ */
}


void tcm_update_sibfrom_startup_info( local_para_struct *local_para_ptr,
                                      SESSION_INFO_PTR  si_db_ptr )
{
#ifdef __EXT_PDP_CONTEXT_ON__
    mmi_ext_pdp_activate_ind_struct *msg_ptr = NULL;
    kal_uint8 param[2];
    kal_uint8 max_pdp_addr_len ;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
    ( MOD_TCM,
      MMI_FN_ENTER_TCM_UPDATE_SIB_FROM_STARTUP_INFO_SUBOP );

    /** Define default types. */
#define DEF_ADDRTYPE          IPV4_ADDR_TYPE
#define DEF_L2P               PPP
#define DEF_PDPADDRLEN        NULL_PDP_ADDR_LEN

    msg_ptr = (mmi_ext_pdp_activate_ind_struct *)local_para_ptr;

    /* Poying: Comply with the size of addr_val in SIB. */
#ifdef __IPV4V6__
    max_pdp_addr_len = IPV4V6_ADDR_LEN ;
#else  /* __IPV4V6__ */
    max_pdp_addr_len = MAX_PDP_ADDR_LEN ;
#endif /* __IPV4V6__ */

    /* If layer 2 protocol entries in the database and message are
     * both not present then the default is used.
     */
    if ( (msg_ptr->l2p_type == NULL_L2P) &&
            (si_db_ptr->l2p == NULL_L2P) )
    {
        si_db_ptr->l2p = DEF_L2P;
    }
    else if ( si_db_ptr->l2p == NULL_L2P )
    {
        /* If the layer 2 protocol is not present in the database then
         * update it to the one received in the message.
         */
        si_db_ptr->l2p = (mmi_ltwoh_protocol_enum)msg_ptr->l2p_type;
    }

    if (si_db_ptr->context_type != SECONDARY_CONTEXT) //erica dallas 20060512
    {
        /* erica dallas 20060512: if Secondary, use Primary's PDP address,
            already set when using +CGDSCONT */

#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
        if (msg_ptr->pdp_type == PPP_ADDR_TYPE)
        {

            ASSERT(PPP_ADDR_TYPE == si_db_ptr->pdp_addr_type);
            ASSERT(PPP_ADDR_LEN == msg_ptr->pdp_addr_len);

            si_db_ptr->pdp_addr_len = PPP_ADDR_LEN;

            kal_mem_set( (kal_uint8 *)si_db_ptr->addr_val, (kal_uint32)0, max_pdp_addr_len );
        }
        else
#endif // ~ #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
            if ( (msg_ptr->pdp_type == NULL_PDP_ADDR_TYPE) &&
                    (si_db_ptr->pdp_addr_type == NULL_PDP_ADDR_TYPE) )
            {
                si_db_ptr->pdp_addr_type = DEF_ADDRTYPE;  // IPv4
            }
            else //if ( si_db_ptr->pdp_addr_type == NULL_PDP_ADDR_TYPE )
            {
                /* If the database entry for the pdptype is not present then the
                 * pdp_type received in the message is used.
                 */
                kal_brief_trace( TRACE_INFO, TCM_IPV6_REPLACE_PDP_TYPE_BY_PPP,
                                 si_db_ptr->pdp_addr_type, (pdp_addr_type_enum)msg_ptr->pdp_type ) ;

                si_db_ptr->pdp_addr_type = (pdp_addr_type_enum)msg_ptr->pdp_type;
            }

        /* If the pdpaddress entries are not present in both the message
         * and database then the default address is used.
         */
        /* Poying: Move the upper segment. */
#if 0 //(defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
            if (msg_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN) /*&&
         (si_db_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN) ) removed 03.05.05*/
            {
                si_db_ptr->pdp_addr_len = DEF_PDPADDRLEN;   // dynamic-address
                /* Here the default address is dynamic address. So we set the
                 * address field to all zeros.
                 */
                kal_mem_set( (kal_uint8 *)si_db_ptr->addr_val, (kal_uint32)0, max_pdp_addr_len );

            }
            else //if ( si_db_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN )
            {
                /* If the database entry for the pdpaddress is not present then
                 * the pdpaddress received in the message is used. This a static
                 * addressing scheme.
                 */
                kal_brief_trace( TRACE_INFO, TCM_IPV6_REPLACE_PDP_LEN_BY_PPP,
                                 si_db_ptr->pdp_addr_len, (pdp_addr_len_enum)msg_ptr->pdp_addr_len ) ;

                si_db_ptr->pdp_addr_len = (pdp_addr_len_enum)msg_ptr->pdp_addr_len;
                kal_mem_cpy( (kal_uint8 *)si_db_ptr->addr_val, (kal_uint8 *)msg_ptr->pdp_addr, (kal_uint32)msg_ptr->pdp_addr_len );

                /* Poying: Should set it as static address allocating. */
                si_db_ptr->addr_scheme = TCM_STATIC_ADDR ;
            }

    }//erica dallas 20060512

    /* Copy the protocol options into the session information */
    param[0] = (kal_uint8)msg_ptr->config_option_len;
    param[1] = msg_ptr->config_protocol;
    tcm_cpy_config_info_into_sib(
        si_db_ptr,
        (void *)param,
        (void *)msg_ptr->config_option
    );

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG
    //       ( MOD_TCM,
    //         MMI_FN_EXIT_TCM_UPDATE_SIB_FROM_STARTUP_INFO_SUBOP );


    /** Undefine default types. */
#undef DEF_ADDRTYPE
#undef DEF_L2P
#undef DEF_PDPADDRLEN

#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__

    return;
}


kal_bool tcm_activate_rej_aux_proc( kal_uint8                   sib_id,
                                    tcm_source_of_config_enum   config_source,
                                    kal_uint8                   config_option_len,
                                    config_option_struct        *config_option_ptr ) /* Poying: PCO is used for PPP. */
{
    SESSION_INFO_PTR    si_db_ptr = tcm_get_sib_ptr( sib_id );

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, MMI_FN_ENTER_TCM_ACTIVATE_REJ_AUX_PROC_SUBOP );


    /* Check the startup type */
    if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
    {
        /* Poying: The handling for pdp_addr_len is not reasonable. */
        // pdp_addr_len_enum pdp_addr_len;

        tcm_send_l4c_activate_rej(KAL_TRUE, si_db_ptr, si_db_ptr->cause) ;

        /* 04.04.19 tcm_terminate_context() will reset si_db_ptr->pdp_addr_len to
         * NULL_PDP_ADDR_LEN. If we have already set si_db_ptr->pdp_addr_len
         * to IPV4_ADDR_LEN, the value will be reset incorrectly. We play this
         * trick to restore the value
         */
        // pdp_addr_len = si_db_ptr->pdp_addr_len;
        tcm_terminate_context( sib_id );
        // si_db_ptr->pdp_addr_len = pdp_addr_len;

    }
    else  /* ( si_db_ptr->startup_type != TCM_INTERNAL_STARTUP ) */
    {
#ifdef __EXT_PDP_CONTEXT_ON__

#ifdef __PS_DIALUP__
        tcm_send_activate_rej_to_ppp( si_db_ptr,
                                      si_db_ptr->context_id,
                                      config_option_len,
                                      config_option_ptr,
                                      si_db_ptr->config_protocol,
                                      config_source,
                                      si_db_ptr->src_id );
        if ( si_db_ptr->l2p != PPP )
        {
            tcm_terminate_context( sib_id );
        }
        else
        {
            //si_db_ptr->main_state = TCM_CONTEXT_INACTIVE_STATE;
            //tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);// do not set fsm in func hdlr
        }
#endif /* __PS_DIALUP__ */

#else // #ifdef __EXT_PDP_CONTEXT_ON__
        ASSERT(0);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
    }

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
    //                 MMI_FN_EXIT_TCM_ACTIVATE_REJ_AUX_PROC_SUBOP );

    return( KAL_TRUE );
}


#ifdef __APP_SECONDARY_PDP_SUPPORT__
void tcm_reactivate_req_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr )
{
    kal_uint8                   sib_id;  /* Initialized later */
    tcm_pdp_reactivate_req_struct *msg_ptr = NULL;
    SESSION_INFO_PTR          si_db_ptr = NULL;

    msg_ptr = (tcm_pdp_reactivate_req_struct *)local_para_ptr;

    /* Get sib_id from context_id.  */
    sib_id = tcm_get_sib_id( GET_FROM_CONTEXTID,
                             msg_ptr->context_id);
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    if (si_db_ptr->neg_qos.max_bitrate_up_lnk == MAX_BIT_RATE_UPLINK_ZERO &&
            si_db_ptr->neg_qos.max_bitrate_down_lnk == MAX_BIT_RATE_DOWNLINK_ZERO)
    {
        si_db_ptr->mod_type = REQ_QOS_MOD;
        /* mtk00938: Set flag */
        tcm_ptr_g->secondary_preserve_counter = 1;
        tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_MODIFY_REQ,
                            si_db_ptr,
                            (void *)NULL,
                            (void *)NULL );
    }
    else
    {
        tcm_reactivate_cnf_aux_proc(sib_id, si_db_ptr);
    }

    return;
}


kal_bool tcm_reactivate_cnf_aux_proc( kal_uint8 sib_id,
                                      SESSION_INFO_PTR si_db_ptr )
{
    kal_brief_trace(TRACE_INFO, TCM_INFO_TCM_REACTIVATE_CNF_AUX_PROC_START);

    {
        /* If the mode of operation is normal then send the activate
         * confirm message.
         */
        if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
        {
            tcm_send_msg_to_l4c( MSG_ID_TCM_PDP_REACTIVATE_CNF,
                                 si_db_ptr,
                                 NULL); //(void *)&si_db_ptr->context_id );
#ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
            tcm_send_msg_to_l4c(MSG_ID_TCM_PDP_MODIFY_IND, si_db_ptr, NULL);
#endif // ~ #ifdef __GPRS_BEARER_REPORT_NEGOTIATED_QOS__
        }
        else
        {
            ASSERT(0);
        }

    }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #if 0

    kal_brief_trace(TRACE_INFO, TCM_INFO_TCM_REACTIVATE_CNF_AUX_PROC_FINISH);

    return( KAL_TRUE );
}
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */

