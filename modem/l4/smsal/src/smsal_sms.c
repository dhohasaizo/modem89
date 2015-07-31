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
 * smsal_sms.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions handling from messages form SMS module.
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
 *
 * removed!
 * removed!
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

#ifndef __SMSAL_XXX_C
#define __SMSAL_XXX_C
#endif

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_sap.h"
#include "l4_msgid.h"
#include "sms_msgid.h"

/* Task Management */
#include "task_config.h"


/* SMSAL <--> L4C */
#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"
#include "smsal_l4c_enum.h"

/* SMS Peer Messsages */
#include "smsal_peer_pun.h"
#include "smsal_peer_struct.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"
#include "sms2smsal_enum.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#include "smslib_def.h"
#include "smslib_enum.h"
#include "smslib_decode.h"
#include "smslib_others.h"
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_checks.h"
#include "smsal_transport_proc.h"
#include "smsal_sms.h"
#include "smsal_l4c_msgs.h"
#include "smsal_msg_proc.h"
#include "smsal_other_funcs.h"
#include "smsal_parameter.h"
#include "smsal_storage.h"
#include "smsal_utils.h"

#include "custom_sms_config.h"

/* SAT */
#if defined (__SAT__)
#include "sat_def.h"
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_defs.h"

/*****************************************************************************
* FUNCTION
*  smsal_sms_entry_func
* DESCRIPTION
*   This function is the entry function for messages come from SMS module.
*
* PARAMETERS
*  a  IN       *ilm_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_sms_entry_func(ilm_struct *ilm_ptr)
{
    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_SMS_DELIVER:
            smsal_deliver_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_SMS_STATUS_REPORT:
            smsal_status_report_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_SMS_SUBMIT_REPORT_ACK:
            smsal_submit_ack_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_SMS_SUBMIT_REPORT_NACK:
            smsal_submit_nack_handler(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_SMS_MEM_AVL_NOTIF_CNF:
            smsal_mem_avl_notif_cnf(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_SMS_SUBMIT_ABORT_CNF:
            smsal_submit_abort_cnf(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_SMS_MORE_MSG_SEND_IND:
            smsal_update_mms_mode_handler();
            break;

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

        default:
            /* LOG ERROR */
            break;
    }                                   /* switch (msg_id) */

}                                       /* end of smsal_l4c_entry_func */

void smsal_send_msg_to_sms(msg_type          msg_id,
                           local_para_struct *local_ptr,
                           peer_buff_struct  *peer_ptr)
{
#ifdef __GEMINI__
    if ((0 <= (smsal_cur_mod - MOD_SMSAL)) && ((smsal_cur_mod - MOD_SMSAL) < SMSAL_MAX_SIM_NUM))
    {    
        msg_send6(smsal_cur_mod, 
                  (module_type)(MOD_SMS + (smsal_cur_mod - MOD_SMSAL)), 
                  MNSMS_SAP, 
                  msg_id, 
                  local_ptr,
                  peer_ptr);
    }
#else
    {
        msg_send6(MOD_SMSAL, 
                  MOD_SMS, 
                  MNSMS_SAP, 
                  msg_id, 
                  local_ptr,
                  peer_ptr);
    }
#endif

#ifdef __GEMINI__
    if ((smsal_cur_mod < MOD_SMSAL) || (smsal_cur_mod >= MOD_SMSAL + SMSAL_MAX_SIM_NUM))
        SMSAL_ASSERT(KAL_FALSE);
#endif

}                                       /* end of smsal_send_msg_to_sms */

#ifdef __FIX_7BIT_EMPTY_CONTENT__
void smsal_mt_fix_7bit_empty_content(smsal_pdu_decode_struct *pdu_decode, kal_uint8 *pdu_ptr)
{
	kal_uint8 dcs_offset=0;
	kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MT_FIX_7BIT_EMPTY_CONTENT);
		
	if(pdu_decode->tpdu.mti == SMSAL_MTI_DELIVER)
	{
		//			fo   oalen oatype	  oa													pid 	
		dcs_offset = 1 + 1 + 1 + (pdu_decode->tpdu.data.deliver_tpdu.orig_addr[0]+1)/2 + 1;
		pdu_ptr[dcs_offset] = smsal_set_dcs(pdu_ptr[dcs_offset],SMSAL_UCS2);
		
		kal_brief_trace(TRACE_INFO, MT_7BIT_EMPTY_CONTENT, pdu_ptr[dcs_offset]);
		
		pdu_decode->tpdu.alphabet_type = SMSAL_UCS2;
		pdu_decode->tpdu.data.deliver_tpdu.dcs = pdu_ptr[dcs_offset];
	}
}
#endif

void smsal_deliver_handler(local_para_struct *local_para_ptr,
                           peer_buff_struct  *peer_buff_ptr )
{
    smsal_pdu_decode_struct     *pdu_decode;
    sms_deliver_struct          *local_ptr;
    kal_uint8                   *pdu_ptr;
    kal_uint16                  pdu_len, valid_len = 0;
    kal_uint8                   user_raw_data_length;
    kal_uint8                   deliver_type;
    kal_bool                    free_flag = KAL_TRUE;
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_deliver_peer_struct  *deliver_struct;
    smslib_status_enum          smslib_status; 
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
#else
    smsal_deliver_peer_struct   *deliver_struct;
#endif

    local_ptr = (sms_deliver_struct *) local_para_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_DELIVER_HDLR);

    if( local_ptr->smi < 7 /* SMS_MAX_TL_SEG */ )
    {
        kal_brief_trace(TRACE_PEER, SMSAL_NW_TO_MS_PEER_MSG, SMSAL__DELIVER);
    }

    /*SMS is disabled. MT SMS cannot be received.*/ 
    if (custom_sms_is_disabled() == 1)
    {
        smsal_deliver_nack_post(local_ptr->smi, MEM_CAP_EXCEEDED, 0, 0, 0, 0, NULL);
        return;
    }

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

	if (pdu_len > SMSAL_DELIVER_PDU_MAX_LEN)
	{
		smsal_deliver_nack_post(local_ptr->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
		kal_brief_trace(TRACE_ERROR, SMSAL_ERROR_PDU_LEN, SMSAL_MTI_DELIVER, pdu_len);
        return;
	}

#if defined(__SMS_STORAGE_BY_MMI__)

    pdu_decode = (smslib_general_struct *)get_ctrl_buffer(sizeof(smslib_general_struct));
    kal_mem_set(pdu_decode, 0x00, sizeof(smslib_general_struct));
    // save SC
    kal_mem_cpy(&(pdu_decode->sca), &(local_ptr->sc_addr), sizeof(sms_addr_struct) );
    pdu_decode->sca.addr_bcd[pdu_decode->sca.addr_length] = 0xff;

    // for reset the MWIS value, smslib does not have this knowledge
    // the following are copied from smslib_reset_tpdu_decode_struct()
    kal_mem_cpy(&(pdu_decode->tpdu.msg_wait.mwis), &(smsal_para_ptr->mailbox.mwis[0]), sizeof(smslib_mwis_struct));
    
    smslib_status = smslib_decode_tpdu(pdu_ptr, pdu_len, pdu_decode);

    if (smslib_status != SMSLIB_STATUS_OK)
    {
        smsal_deliver_nack_post(local_ptr->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
        smslib_dealloc_sms_struct(pdu_decode);
        free_ctrl_buffer(pdu_decode);
        return;
    }

#else // __SMS_STORAGE_BY_MMI__

    pdu_decode = smsal_decode_mt_msg(NULL, local_ptr, pdu_ptr, pdu_len);

    if (pdu_decode == NULL)
    {
        smsal_deliver_nack_post(local_ptr->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
        return;
    }
    #ifdef __FIX_7BIT_EMPTY_CONTENT__
	if((pdu_decode->tpdu.alphabet_type == SMSAL_GSM7_BIT) && (pdu_decode->tpdu.msg_len == 0))
	{
		smsal_mt_fix_7bit_empty_content(pdu_decode, pdu_ptr);
	}
    #endif	//__FIX_7BIT_EMPTY_CONTENT__

#endif // __SMS_STORAGE_BY_MMI__

    deliver_struct = &(pdu_decode->tpdu.data.deliver_tpdu);

    /* [MAUI_02352739] About SMS issue 
        This is only happen in Morocco. Morocco NW will send SMS lost bytes, we need return NACK.
        After we send NACK, Morocco NW will resend correct SMS. 
        Otherwise Morocco will not resend if we return ACK*/
	/* [MAUI_02590240] When the MT SMS has header and no text, the unpack no_user_data can't be use.
	    Should use deliver_struct->user_data_len to calculate the really raw_data_length(user data part)*/
    user_raw_data_length = deliver_struct->no_user_data;

    if(deliver_struct->udh_p == KAL_TRUE &&
       smsal_is_len_in8bit(deliver_struct->dcs) == KAL_FALSE &&
       ((deliver_struct->user_data_len*7)/8) == pdu_decode->tpdu.udhl) //no text
    {
        user_raw_data_length = (deliver_struct->user_data_len*7)/8;
    }

    /* Error handling for length mismatch*/
    valid_len = user_raw_data_length + ( PART_OF_DELIVER_HEADER_LEN + (( deliver_struct->orig_addr[0] + 1 ) /2 ));
    if (pdu_len < valid_len)
    {
        smsal_deliver_nack_post(local_ptr->smi, UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        if( pdu_decode->tpdu.msg_wait.evmi.l4_status != 1 )
        {
            smsal_evm_free_evm((smsal_evmi_struct *)&(pdu_decode->tpdu.msg_wait.evmi));
        }
#endif

#if defined(__SMS_STORAGE_BY_MMI__)
        smslib_dealloc_sms_struct(pdu_decode);
#else
        smsal_deliver_peer_struct_dealloc(deliver_struct);
#endif // __SMS_STORAGE_BY_MMI__

        free_ctrl_buffer(pdu_decode);
        return;
    }
    else if ( pdu_len > valid_len ) 
    {        
        /* if there is redundant data in pdu, we should ignore the data in the tail*/        
        memset( pdu_ptr + valid_len, 0xff,  (pdu_len - valid_len) );
        //peer_buff_ptr->pdu_len = valid_len;
        
    }

    /* 
     * Check the contents of message.
     * NOTE that Reserved, obsolete, or unsupported PID or DCS 
     * shall store them exactly as received 
     */
    smsal_sms_msg_checks(MSG_ID_SMS_DELIVER, deliver_struct, local_ptr->smi, &deliver_type);

    switch (deliver_type)
    {

#ifndef __SMS_STORAGE_BY_MMI__
        /* 
         * Type 0 Message 
         */
        case DELIVER_TYPE_0:
            /* Send Deliver Ack to SC directly */
            smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
            break;

        /* 
         * Replace existing message 
         */
        case DELIVER_REPLACE:
        case DELIVER_RETURN_CALL_MSG:
            {
            #ifdef __SMS_DELAY_MTSMS_REPLACE_TYPE__
                if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
                {
                    if( smsal_msg_replace_pending_hdlr(local_para_ptr, peer_buff_ptr, pdu_decode) == KAL_FALSE )
                    {
                        smsal_deliver_nack_post(local_ptr->smi, CANNOT_REPLACE_MSG, 0, 0, 0, 0, NULL);
                        free_flag = KAL_TRUE;
                    }
                    else
                    {
                        free_flag = KAL_FALSE;
                    }
                }
                else
            #endif
                {
                    free_flag = smsal_msg_replace_hdlr(pdu_decode, peer_buff_ptr, local_ptr);
                }
            }
            break;
#endif

#ifdef __SMS_DEPERSONALIZATION__
        /* 
         * ME De-Personalization 
         */
        case DELIVER_ME_DE_PERSONAL:
#if defined(__SMS_SOFTBANK__)
            if(pdu_decode->tpdu.msg_class == SMSAL_CLASS1)
            {
                smsal_deliver_nack_post(local_ptr->smi, ERROR_IN_MS, 0, 0, 0, 0, NULL);
            }
			else
			{
			    if(smsal_dcs_to_mmi(deliver_struct->dcs)== SMSAL_8BIT_DCS)
			    {
			        smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
			    }
				else
				{				    
				    free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr); 
				}
			}
			break;
#else
            if( smsal_de_personalization_req(local_ptr->smi, pdu_decode) == KAL_FALSE )
            {
                free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr);
            }
            break;
#endif			
#endif

#if defined (__SAT__)
        /* 
         * SIM Data Download, ANSI-136 R-DATA
         */
        case DELIVER_SIM_DATA_DOWNLOAD:
        case DELIVER_ANSI_136_RDATA:

            if (smsal_sim_data_dl_hdlr(deliver_struct,
                                       peer_buff_ptr,
                                       &local_ptr->sc_addr,
                                       local_ptr->smi) == KAL_FALSE)
            {
                free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr);
            }
            break;
#endif

        /* 
         * Normal Mobile-Terminated Messages 
         */
        case DELIVER_NORMAL_MT_MSG:    /* the same for BOTH */
        default:
        {   
            free_flag = smsal_mt_msg_hdlr(pdu_decode, peer_buff_ptr, local_ptr);

            break;
        }
    }                                   /* switch */

    /*
     * In some cases, eg, store the new message, the action to free
     * * deliver_struct shall be postponed after receive storage confirm 
     */

    if (free_flag == KAL_TRUE)
    {
#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        if( pdu_decode->tpdu.msg_wait.evmi.l4_status != 1 )
        {
            smsal_evm_free_evm((smsal_evmi_struct *)&(pdu_decode->tpdu.msg_wait.evmi));
        }
#endif

#if defined(__SMS_STORAGE_BY_MMI__)
        smslib_dealloc_sms_struct(pdu_decode);
#else
        smsal_deliver_peer_struct_dealloc(deliver_struct);
#endif // __SMS_STORAGE_BY_MMI__

        free_ctrl_buffer(pdu_decode);
    }

    return;
}                                       /* end of smsal_deliver_handler */

void smsal_submit_nack_handler(local_para_struct * local_para_ptr,
                               peer_buff_struct  * peer_buff_ptr)
{
    smsal_submit_report_nack_peer_struct submit_nack_struct;
    sms_submit_report_nack_struct *local_ptr;
    kal_uint8 dummy;
    kal_uint8 *pdu_ptr;
    kal_uint16 cause;
    kal_uint16 pdu_len;
    peer_buff_struct *local_peer_buff_ptr;

#if defined (__SAT__)
    /* default error is MS */
    kal_uint8 sat_res_code = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
    kal_uint8 sat_cause = SAT_NO_SPECIFIC_CAUSE;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SUBMIT_NACK_HDLR);
    kal_brief_trace(TRACE_PEER, SMSAL_NW_TO_MS_PEER_MSG, SMSAL__SUBMIT_REPORT);

    local_ptr = (sms_submit_report_nack_struct *) local_para_ptr;
    local_peer_buff_ptr = peer_buff_ptr;

    /* error occurred in MS */
    cause = local_ptr->err_info.error_cause;

    if (peer_buff_ptr == NULL)
    {
        /* indicate that scts is invalid */
        kal_mem_set((void *)submit_nack_struct.scts, 0, 7);
        submit_nack_struct.user_data = NULL;
    }
    else
    {
        /* receive RP-ERROR */
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        smsal_submit_report_nack_peer_struct_alloc(&submit_nack_struct);

        /* Unpack the pdu to access contents of message report */
        smsal_submit_report_nack_peer_struct_unpack(&submit_nack_struct,
                                                    pdu_ptr,
                                                    0,
                                                    pdu_len,
                                                    NULL );

        /* 
         * if any following condition meet, this UDH is invalid:               
         *  UDHL > no. bytes of user data - 1
         */
        if (*(submit_nack_struct.user_data) > (submit_nack_struct.no_user_data - 1))
        {
            /* invalid UDH, set message to null */
            submit_nack_struct.udh_p = KAL_FALSE;
            kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_UDH_ERROR, SMSAL_MTI_SUBMIT_REPORT, *(submit_nack_struct.user_data));
        }
        
        /* Check the contents of message and functionalities supported */
        if (smsal_sms_msg_checks(MSG_ID_SMS_SUBMIT_REPORT_NACK,
                                 &submit_nack_struct,
                                 local_ptr->smi,
                                 &dummy) == KAL_FALSE)
        {
            smsal_submit_report_nack_peer_struct_dealloc(&submit_nack_struct);

            /* modify by Robert 2004.1.31 */
            /* For SCR 593, when sending MO SMS and receiving RP-ERROR with "WRONG"  */
            /* TPDU SUBMIT-REPORT. If "return" here without notifing MMI, MMI would stop at */
            /* sending screen.                                                            */

            /* return; */
            local_peer_buff_ptr = NULL;

        }
    }                                   /* peer_buff_ptr == NULL */

#ifdef __SAT__
    switch (local_ptr->err_info.error_type)
    {
        case SMS_ERR_TYPE_RP_ERROR:
            sat_res_code = SAT_SMS_RP_ERROR;
            sat_cause = (kal_uint8) local_ptr->err_info.error_cause;
            break;
        case SMS_ERR_TYPE_CP_ERROR:
        case SMS_ERR_TYPE_NW_ERROR:
            sat_res_code = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            break;
        default:
            break;
    }
#endif

    smsal_update_submit_report(L4C_ERROR,
                               local_ptr->smi,
                               submit_nack_struct.udh_p,
                               submit_nack_struct.user_data,
                               submit_nack_struct.scts,
                               cause,
#ifdef __SAT__
                               sat_res_code,
                               sat_cause,
#endif
                               local_peer_buff_ptr);

    if (peer_buff_ptr != NULL)
        smsal_submit_report_nack_peer_struct_dealloc(&submit_nack_struct);

}                                       /* end of smsal_submit_nack_handler */


void smsal_submit_ack_handler(local_para_struct *local_para_ptr,
                              peer_buff_struct  *peer_buff_ptr )
{
    smsal_submit_report_ack_peer_struct submit_ack_struct;
    sms_submit_report_ack_struct *local_ptr;
    kal_uint8 dummy;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    peer_buff_struct *local_peer_buff_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SUBMIT_ACK_HDLR);
    kal_brief_trace(TRACE_PEER, SMSAL_NW_TO_MS_PEER_MSG, SMSAL__SUBMIT_REPORT);

    local_ptr = (sms_submit_report_ack_struct *) local_para_ptr;
    local_peer_buff_ptr = peer_buff_ptr;

    if (peer_buff_ptr == NULL)
    {
        /* indicate that scts is invalid */
        kal_mem_set((void *)submit_ack_struct.scts, 0, 7);
        submit_ack_struct.user_data = NULL;
    }
    else
    {
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        smsal_submit_report_ack_peer_struct_alloc(&submit_ack_struct);

        /* Unpack the pdu to access contents of message report */
        smsal_submit_report_ack_peer_struct_unpack(&submit_ack_struct,
      	                                           pdu_ptr,
                                                   0,
                                                   pdu_len,
                                                   NULL );

        /*
         * if any following condition meet, this UDH is invalid:               
         *  UDHL > no. bytes of user data - 1
         */
        if (*(submit_ack_struct.user_data) > (submit_ack_struct.no_user_data - 1))
        {
            /* invalid UDH, set message to null */
            submit_ack_struct.udh_p = KAL_FALSE;
            kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_UDH_ERROR, SMSAL_MTI_SUBMIT_REPORT, *(submit_ack_struct.user_data));
        }

        /* Check the contents of message and functionalities supported */
   	    if (smsal_sms_msg_checks(MSG_ID_SMS_SUBMIT_REPORT_ACK,
                                 &submit_ack_struct,
               	                 local_ptr->smi,
            	                 &dummy) == KAL_FALSE)
        {
            smsal_submit_report_ack_peer_struct_dealloc(&submit_ack_struct);

            /* modify by Robert 2004.1.31 */
            /* For SCR 593, when sending MO SMS and receiving RP-ACK with "WRONG"  */
            /* TPDU SUBMIT-REPORT. If "return" here without notifing MMI, MMI would stop at */
            /* sending screen.                                                            */

            /* return; */
            local_peer_buff_ptr = NULL;
        }
    }                                   /* peer_buff_ptr == NULL */

    smsal_update_submit_report(L4C_OK,                                 
                               local_ptr->smi,
                               submit_ack_struct.udh_p,
                               submit_ack_struct.user_data,
                               submit_ack_struct.scts,
                               0, /* ignore cause */
#ifdef __SAT__
                               SAT_CMD_PERFORMED_SUCCESSFULLY,
                               0,       /* ignore sat_cause */
#endif
                               local_peer_buff_ptr);

    if (peer_buff_ptr != NULL)
    {
        smsal_submit_report_ack_peer_struct_dealloc(&submit_ack_struct);
    }

}                                       /* end of smsal_submit_ack_handler */

void smsal_status_report_handler(local_para_struct *local_para_ptr,
                                 peer_buff_struct  *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_general_struct smslib_general_temp;
#else
    smsal_pdu_decode_struct pdu_decode_temp;
#endif
    smsal_status_report_peer_struct status_rep_struct;
    sms_status_report_struct *local_ptr;
    smsal_msg_waiting_struct msg_wait;
    kal_uint8 dummy;
    kal_uint8 *pdu_ptr;
    kal_uint8 dest_id = SMSAL_TO_LMI;
    kal_uint16 pdu_len;
    kal_uint8 cnmi_id;

    local_ptr = (sms_status_report_struct *) local_para_ptr;

    /*SMS is disabled. Send ACK to the network and do not notify MMI*/
    if(custom_sms_is_disabled() == 1)
    {
        smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
        return;
    }
	
    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);
    //msg_wait.is_msg_wait = KAL_FALSE;
    kal_mem_set(&msg_wait, 0, sizeof(smsal_msg_waiting_struct));

    smsal_status_report_peer_struct_alloc(&status_rep_struct);

    smsal_status_report_peer_struct_unpack(&status_rep_struct, pdu_ptr, 0, pdu_len, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_STATUS_REPORT_HDLR, status_rep_struct.msg_ref);
    kal_brief_trace(TRACE_PEER, SMSAL_NW_TO_MS_PEER_MSG, SMSAL__STATUS_REPORT);

    /* Check the contents of message */
    if (smsal_sms_msg_checks(MSG_ID_SMS_STATUS_REPORT,
                             (void*)&status_rep_struct,
                             local_ptr->smi,
                             &dummy) == KAL_FALSE)
    {
        smsal_status_report_peer_struct_dealloc(&status_rep_struct);
        return;
    }

    /* Check for user data header field */
    if (status_rep_struct.udh_p == KAL_TRUE)
    {
        msg_wait.need_store = KAL_FALSE;
        msg_wait.mwis = smsal_para_ptr->mailbox.mwis[0];

        /* 
         * if any following condition meet, this UDH is invalid:               
         *  UDHL > no. bytes of user data - 1
         */
        if (*(status_rep_struct.user_data) <= (status_rep_struct.no_user_data - 1))
        {
#if defined(__SMS_STORAGE_BY_MMI__)
            smslib_decode_udh(status_rep_struct.user_data, NULL, (smslib_msg_waiting_struct *)&msg_wait, NULL);
            if (msg_wait.is_msg_wait == KAL_TRUE)
            {
                kal_mem_cpy(&(smslib_general_temp.tpdu.data.report_tpdu),&(status_rep_struct),sizeof(smslib_status_report_peer_struct));
                kal_mem_cpy(&(smslib_general_temp.tpdu.msg_wait),&msg_wait,sizeof(smslib_msg_waiting_struct));
                smslib_general_temp.tpdu.mti = SMSLIB_MTI_STATUS_REPORT;
                smslib_message_waiting_handler(&smslib_general_temp);
                kal_mem_cpy(&msg_wait,&(smslib_general_temp.tpdu.msg_wait),sizeof(smslib_msg_waiting_struct));
            }
#else
            smsal_decode_udh(status_rep_struct.user_data, NULL, &msg_wait, NULL);
            if (msg_wait.is_msg_wait == KAL_TRUE)
            {
                kal_mem_cpy(&(pdu_decode_temp.tpdu.data.report_tpdu),&(status_rep_struct),sizeof(smsal_status_report_peer_struct));
                kal_mem_cpy(&(pdu_decode_temp.tpdu.msg_wait),&msg_wait,sizeof(smsal_msg_waiting_struct));
                pdu_decode_temp.tpdu.mti = SMSAL_MTI_STATUS_REPORT;
                smsal_message_waiting_handler(&pdu_decode_temp);
                kal_mem_cpy(&msg_wait,&(pdu_decode_temp.tpdu.msg_wait),sizeof(smsal_msg_waiting_struct));
            }
#endif
        }
        else
        {
            /* invalid UDH, set message to null */
            status_rep_struct.udh_p = KAL_FALSE;
            kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_UDH_ERROR, SMSAL_MTI_STATUS_REPORT, *(status_rep_struct.user_data));
        }
        
    }

    if ((smsal_para_ptr->rmi.nmi_para.ds != 1) ||
        (smsal_para_ptr->rmi.service_mode == SMSAL_SERVICE0))
    {
        /* send sms_deliver_ack to SC */
        smsal_deliver_ack_post(local_ptr->smi, 0, 0, 0, 0, NULL);
    }
    else
    {
        cnmi_id = smsal_get_free_cnmi_id();

        /* Start a timer to wait +CNMA from RMI */
        if ( cnmi_id != SMSAL_INVALID_CNMI_ID )
        {
            smsal_cntx_ptr->cnmi[cnmi_id].is_used = KAL_TRUE;
            smsal_cntx_ptr->cnmi[cnmi_id].smi = local_ptr->smi;
            smsal_cntx_ptr->cnmi[cnmi_id].sent_report = KAL_FALSE;
            smsal_start_timer(SMSAL_CNMA_TIMER, cnmi_id, SMSAL_CNMA_TIMEOUT_TICK);
        }
    }

    if (smsal_para_ptr->rmi.nmi_para.ds == 1)
        dest_id = SMSAL_TO_RMI;

    /* Otherwise send the message to MMI (or RMI) front end */
    /* MAUI_00748299 [SMSAL][Revise] Add SC in status report */
    smsal_status_report_ind(&status_rep_struct, peer_buff_ptr, dest_id, &local_ptr->sc_addr);

#ifndef __SMS_STORAGE_BY_MMI__
    /* Update message box */
    smsal_update_msgbox_for_report(&status_rep_struct);
#endif

    smsal_status_report_peer_struct_dealloc(&status_rep_struct);

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#else
    if (msg_wait.is_msg_wait != 0)
    {
        kal_uint8 i = 0;

        for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
        {
            if (msg_wait.ind_flag[i] == KAL_TRUE)
            {
                smsal_msg_waiting_ind(msg_wait.line_no,
                                      #ifdef __REL4__
                                      //smsal_para_ptr_g->common.selected_msp,
                                      msg_wait.msp,
                                      #endif
                                      i,
                                      &msg_wait,
                                      KAL_FALSE);
            }
        }
        
#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        if( msg_wait.type_of_info & SMSAL_MSG_WAIT_UDH_EVM )
        {
            smsal_evm_ind(&msg_wait);
        }
#endif
        
        smsal_update_mwis(msg_wait.msp, msg_wait.line_no, &msg_wait.mwis);
    }

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
    smsal_evm_free_evm(&msg_wait.evmi);
#endif

    return;
#endif  // __SMS_STORAGE_BY_MMI__ WISDOM_MMI
}                                       /* end of smsal_status_report_handler */

void smsal_mem_avl_notif_cnf(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SMMA_CNF,
              ((sms_mem_avl_notif_cnf_struct *) local_para_ptr)->result);

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MEM_AVIL))
        {
            smsal_free_pending_act(id);
            break;
        }
    }

    /* Clear the 'Exceeded Flag' */
    if (IS_FLAG_SET(SMSAL_SIM_SMSS_FLAG) == KAL_TRUE)
    {
        smsal_clrexdflag();
    }
    // MAUI_01748085 only one storage updated and send no-matter SIM reject
    /* MAUI_01629973 [SMSAL][Revise] use nvram backup smss and update sim at best effort */
    else
    {
        CLR_FLAGS(MEM_EXD_FLAG);
        smsal_cntx_ptr->smma.pending_smma = KAL_FALSE;
        smsal_set_common_change_to_nvram(SMSAL_MAX_PENDING_ACT);
    }

}                                       /* end of smsal_mem_avl_notif_cnf */

void smsal_send_mem_avl_notif_abort(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sms_mem_avl_notif_struct *local_ptr;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MEM_AVIL))
        {
            break;
        }
    }

    if (id < SMSAL_MAX_PENDING_ACT)
    {
        local_ptr = (sms_mem_avl_notif_struct *)
                     construct_local_para(sizeof(sms_mem_avl_notif_struct), TD_CTRL);

        local_ptr->mr = ((smsal_pending_send_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;

        local_ptr->req_type = SMS_SMMA_ABORT;

        smsal_send_msg_to_sms(MSG_ID_SMS_MEM_AVL_NOTIF, (local_para_struct *) local_ptr, NULL);
    }
}

void smsal_send_mem_avl_notif_req(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_pending_send_struct *aux_info;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if (((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE) &&
            ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MEM_AVIL))
        {
            /* pending MEM_AVIL. */
            return;
        }
    }

    if (KAL_FALSE == smsal_get_pending_act_id(&id))
        return;

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_SEND_MEM_AVIL;
    aux_info = (smsal_pending_send_struct *)
                get_ctrl_buffer(sizeof(smsal_pending_send_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    smsal_get_msg_ref_hdlr(id, &aux_info->msg_ref);

    return;
}

void smsal_mem_avl_get_msg_ref_cnf(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sms_mem_avl_notif_struct *local_ptr;

    local_ptr = (sms_mem_avl_notif_struct *)
                 construct_local_para(sizeof(sms_mem_avl_notif_struct), TD_CTRL);

    local_ptr->mr = ((smsal_pending_send_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;
    local_ptr->src_id = LMMI_SRC;
    local_ptr->req_type = SMS_SMMA_REQ;

    smsal_send_msg_to_sms(MSG_ID_SMS_MEM_AVL_NOTIF, (local_para_struct *) local_ptr, NULL);

}                                       /* end of smsal_mem_avl_get_msg_ref_cnf */

void smsal_prefer_sms_bearer_change(void)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_service_req_struct *local_ptr;

    local_ptr = (sms_service_req_struct *)
                 construct_local_para(sizeof(sms_service_req_struct), TD_CTRL);

    local_ptr->service = smsal_para_ptr->common.bearer_service;

    smsal_send_msg_to_sms(MSG_ID_SMS_SERVICE_REQ, (local_para_struct *) local_ptr, NULL);

}                                       /* end of smsal_prefer_sms_bearer_change */

void smsal_submit_abort_cnf(local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 i;
    sms_submit_abort_cnf_struct *local_ptr= (sms_submit_abort_cnf_struct *)local_para_ptr;

    if (IS_FLAG_SET(ABORT_PENDING_FLAG) == KAL_TRUE)
    {
        l4csmsal_send_abort_cnf_struct *abort_cnf;

        abort_cnf = (l4csmsal_send_abort_cnf_struct *) construct_local_para
            (sizeof(l4csmsal_send_abort_cnf_struct), TD_CTRL);

        abort_cnf->src_id = smsal_ptr_g->send_abort.src_id;//LMMI_SRC;
        abort_cnf->seq_num = smsal_ptr_g->send_abort.seq_num;
        
        if(local_ptr->result == KAL_TRUE)
            abort_cnf->result = L4C_OK;
        else
            abort_cnf->result = L4C_ERROR;

        abort_cnf->error_cause = 0;

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_ABORT_CNF, 
                              (local_para_struct *) abort_cnf,
                              NULL);

        CLR_FLAGS(ABORT_PENDING_FLAG);

        // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
        for(i=0 ; i<SMSAL_MAX_PENDING_ACT ; i++)
        {
            // check the status if sent request to SMS and abort MO-SMS
            if ( smsal_cntx_ptr->pending_act[i].in_use == KAL_TRUE &&
                 ((&(smsal_cntx_ptr->pending_act[i]))->action_status & 0x03) == 0x03 )
            {
                smsal_free_pending_act(i);
            }
        }
    }

    return;
}                                       /* end of smsal_submit_abort_cnf */

void smsal_update_mms_mode_handler(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (smsal_cntx_ptr->sms_parameter.rmi.mms == SMSAL_MMS_ENABLE_UNTIL_TIMEOUT)
        smsal_cntx_ptr->sms_parameter.rmi.mms = SMSAL_MMS_DISABLE;
}

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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


