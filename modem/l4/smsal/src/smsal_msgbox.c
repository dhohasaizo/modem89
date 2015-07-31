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
 * smsal_msgbox.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to message box.
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

#include "smsal_l4c_enum.h"

/* SMS Peer Messsages */
#include "smsal_peer_struct.h"

/* SMS <--> SMSAL */

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_enums.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_storage.h"
#include "smsal_other_funcs.h"
#include "smsal_l4c_msgs.h"

/* SIM */
#include "ps2sim_struct.h"
#include "sim_common_enums.h"

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "custom_sms_config.h"

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"
#include "smsal_utils.h"
#undef  _FILE_CODE_
#define _FILE_CODE_ _SMSAL_MSG_STORAGE_C_


#ifndef __SMS_STORAGE_BY_MMI__

void smsal_reset_msg_box_entry(kal_uint16 id, kal_uint8 mode)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_mb_entry_struct *entry = (&(smsal_cntx_ptr->message_box[id]));

    if (mode == 0)                      /* Initialize */
    {
        entry->state = SMSAL_MB_ENTRY_INVALID;
        entry->storage_type = SMSAL_STORAGE_UNSPECIFIED;
        entry->record_no = SMSAL_INVALID_RECORD_NO;
    }
    else                                /* reset */
    {
        DECR_USED_MSG_NUM(entry->storage_type);
        DECR_MSGBOX_NUM(entry->status, entry->storage_type);
        entry->state = SMSAL_MB_ENTRY_FREE;
    }

    entry->mti = SMSAL_MTI_ILLEGAL;
    entry->status = SMSAL_INVALID_STATUS;
    entry->mb_type_ind = 0;

}                                       /* end of smsal_reset_msg_box_entry */

void smsal_init_msg_box()
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 i;

    smsal_cntx_ptr->sms_prefer_order = smsal_sms_prefer_order();

    smsal_cntx_ptr->msg_box_num = cm_sms_max_msg_num();

    smsal_cntx_ptr->message_box = (smsal_mb_entry_struct *) cm_sms_get_message_box((kal_uint8)(smsal_cur_mod-MOD_SMSAL));

    for (i = 0; i < SMSAL_MAX_MSG_NUM; i++)
        smsal_reset_msg_box_entry(i, SMSAL_MB_INIT);

    smsal_cntx_ptr->storage_num_info.is_me_full = 0;
}                                       /* end of smsal_init_msg_box */

kal_bool smsal_get_unused_mb_entry(kal_uint16 * entry_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 id;

    for (id = 0; id < SMSAL_MAX_MSG_NUM; id++)
    {
        if ((&(smsal_cntx_ptr->message_box[id]))->state == SMSAL_MB_ENTRY_INVALID)
            break;
    }

    if (id >= SMSAL_MAX_MSG_NUM)
        return KAL_FALSE;

    *entry_id = id;
    return KAL_TRUE;
}                                       /* end of smsal_get_unused_mb_entry */

kal_bool smsal_get_free_mb_entry(smsal_storage_enum storage_type, kal_uint16 *entry_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 id;

    for (id = 0; id < SMSAL_MAX_MSG_NUM; id++)
    {
        if ((&(smsal_cntx_ptr->message_box[id]))->state == SMSAL_MB_ENTRY_FREE &&
            (&(smsal_cntx_ptr->message_box[id]))->storage_type == storage_type)
            break;
    }

    if (id >= SMSAL_MAX_MSG_NUM)
        return KAL_FALSE;

    *entry_id = id;
    return KAL_TRUE;
}                                       /* end of smsal_get_free_mb_entry */

#ifdef __FIX_7BIT_EMPTY_CONTENT__
/*****************************************************************************
* FUNCTION
*  smsal_init_fix_7bit_empty_content
* DESCRIPTION
*   This function change 7bit code which have no user data  into ucs2 ,
*   when do stk operation with Gemplus shenzhouxing sim card , if there are sms which is 7bit code and have no user data,
*   this will lead sim card become damage.
*
* PARAMETERS
*  a  IN       sms_pdu
*  b  IN       data[]
*  c   IN       entry 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/

void smsal_init_fix_7bit_empty_content(smsal_pdu_decode_struct *sms_pdu,
                                                 kal_uint8 *data,
                                                 smsal_mb_entry_struct *entry)
{
	kal_uint8 dcs_offset=0;
	
	kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_INIT_FIX_7BIT_EMPTY_CONTENT);
	
	switch(sms_pdu->tpdu.mti)
	{
		case SMSAL_MTI_DELIVER:
					 // status	sclen sc									 fo   oalen oatype	  oa																			 pid
			dcs_offset = 1 + 1 + sms_pdu->sca.addr_length + 1 + 1 + 1 + (sms_pdu->tpdu.data.deliver_tpdu.orig_addr[0]+1)/2 + 1 ;
			break;
		case SMSAL_MTI_SUBMIT:						 // 	fo	 mr    dalen datype   da																			  pid
			dcs_offset = 1 + 1 + sms_pdu->sca.addr_length + 1 + 1 + 1 + 1 + (sms_pdu->tpdu.data.submit_tpdu.dest_addr[0]+1)/2 +1 ;
			break;
		default:
			break;
	 }
	
	 if((sms_pdu->tpdu.mti == SMSAL_MTI_DELIVER) || (sms_pdu->tpdu.mti == SMSAL_MTI_SUBMIT))
	 {
		 data[dcs_offset] = smsal_set_dcs(data[dcs_offset],SMSAL_UCS2);
		 sms_pdu->tpdu.alphabet_type = SMSAL_UCS2;
		 if(sms_pdu->tpdu.mti == SMSAL_MTI_DELIVER)
		 	sms_pdu->tpdu.data.deliver_tpdu.dcs = data[dcs_offset];
		 else
		 	sms_pdu->tpdu.data.submit_tpdu.dcs = data[dcs_offset];
		 
		 kal_brief_trace(TRACE_INFO, INIT_7BIT_EMPTY_CONTENT, data[dcs_offset]);

		 smsal_write_short_msg(SMSAL_MAX_PENDING_ACT,SMSAL_SM,entry->record_no,data,NULL,SMSAL_SMS_LEN);
	 }
}
#endif
/*****************************************************************************
* FUNCTION
*  smsal_decode_msg_into_msgbox
* DESCRIPTION
*   This function decodes the short message read from SIM/NVM,
*   update the entry of message box.
*
* PARAMETERS
*  a  IN       data[]
*
*    Octet:  0         1        X       X+1       Y                       175
*            +--------+---------+-------+-----------------------------------+
*            | Status | SCA LEN | TOSCA |   SCA   |          TPDU           |
*            +--------+---------+-------+-----------------------------------+
*
*  b  IN       length (must equals to 176)
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_decode_msg_into_msgbox(kal_uint16                      entry_id,
                                      smsal_read_file_aux_info_struct *aux_info,
                                      smsal_storage_enum              storage_type,
                                      kal_uint8                       *data, 
                                      kal_uint16                      length)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 scts[7];

    kal_bool ret_val = KAL_TRUE;
    smsal_pdu_decode_struct sms_pdu;
    smsal_mb_entry_struct *entry = (&(smsal_cntx_ptr->message_box[entry_id]));

    entry->record_no = aux_info->record_no;
    entry->storage_type = storage_type; /* Save the storage type */

    kal_mem_set(scts, 0xff, 7);

    if (length == SMSAL_SMS_ME_LEN)
    {
        kal_mem_cpy(scts, data + SMSAL_SMS_LEN, 7);
        length = SMSAL_SMS_LEN;
    }

    /* read status */
    if ((data[0] & 0x01) == 0x01)       /* message is used */
    {
        /* Save the message status */
        switch (data[0] & 0x07)
        {
            case SMSAL_UNSENT_MSG:     /* MO, unsent */
                entry->status = SMSAL_STATUS_UNSENT;

                /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
                /* draft message */
                if ((data[0] & SMSAL_DRAFT_MSG) == SMSAL_DRAFT_MSG)
                    entry->status |= SMSAL_STATUS_DRAFT;
                
                break;

            case SMSAL_SENT_NO_SRR:    /* MO, sent */
                entry->status = SMSAL_STATUS_SENT;

                /* status report is requested, but not (yet) received */
                if ((data[0] & SMSAL_SENT_SRR_NOT_RECV) == SMSAL_SENT_SRR_NOT_RECV)
                    entry->status |= SMSAL_STATUS_SRR_NOT_RECV;
                /* else if((data[0] & SMSAL_SENT_SRR_RECV_NOT_STO ) == SMSAL_SENT_SRR_RECV_NOT_STO ) */
                /*    entry->status |= SMSAL_STATUS_SRR_RECV_NOT_STO ;                               */
                /* else if((data[0] & SMSAL_SENT_SRR_RECV_STO ) == SMSAL_SENT_SRR_RECV_STO )         */
                /*    entry->status |= SMSAL_STATUS_SRR_RECV_STO ;                                   */
                /*                                                                                   */
                break;

            case SMSAL_READ_MSG:       /* MT, read */
                entry->status = SMSAL_STATUS_READ;
                break;

            case SMSAL_UNREAD_MSG:     /* MT, unread */
                entry->status = SMSAL_STATUS_UNREAD;
                break;

            default:
                ret_val = KAL_FALSE;
                break;
        }                               /* switch */

        if (ret_val == KAL_TRUE)
        {

            ret_val = smsal_decode_sms_pdu(&data[1], (kal_uint8) (length - 1), &sms_pdu);
        #ifdef __FIX_7BIT_EMPTY_CONTENT__
            if((storage_type == SMSAL_SM) 
				&& (ret_val == KAL_TRUE) 
				&& (sms_pdu.tpdu.alphabet_type == SMSAL_GSM7_BIT) 
				&& (sms_pdu.tpdu.msg_len == 0))
            {
                smsal_init_fix_7bit_empty_content(&sms_pdu, data, entry);
            }
		#endif  //__FIX_7BIT_EMPTY_CONTENT__

            /*
             * Nokia store status report in EFsms, 
             * * we do not support this approach, 
             * * thus only DELIVER or SUBMIT be handled 
             */
            if (ret_val == KAL_TRUE)
            {
                entry->state = SMSAL_MB_ENTRY_VALID;

                INCR_USED_MSG_NUM(storage_type);        /* increment the no. of used msg */
                INCR_MSGBOX_NUM(entry->status, storage_type);

                /*
                 * only the short message whose message type is DELIVER or SUBMIT              
                 * * we update this message into message box 
                 */
                if ((sms_pdu.tpdu.mti == SMSAL_MTI_DELIVER) ||
                    (sms_pdu.tpdu.mti == SMSAL_MTI_SUBMIT) ||
                    (sms_pdu.tpdu.mti == SMSAL_MTI_STATUS_REPORT))
                {

                    smsal_update_msgbox_from_tpdu(entry, &(sms_pdu.tpdu));

                #ifndef EMPTY_MMI
                    smsal_startup_read_msg_ind(&sms_pdu,
                                               entry_id,
                                               entry->status,
                                               &aux_info->msg_box_seq_num,
                                               scts);
                #endif

                    /* free the unpacked structure for TPDU */
                    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
                }
                else
                {
                    /* COMMAND, STATUS-REPORT, RESERVED MTI */
                    entry->mti = sms_pdu.tpdu.mti;
                }

            }                           /* decode sms pdu success */
        }                               /* wether 1st byte (status) is correst */
    }
    else
    {
        /*
         * the msg box entry is allocated but corresponding record of EF
         * * is unused, thus this entry can be used to store message later 
         */
        entry->state = SMSAL_MB_ENTRY_FREE;

    }                                   /* if (msg is used) */

    /* 
     * In the test case 34.2.5.3 in Cetecom,
     * there is an invalid SMS record with "01 ff ff .... ff" will cause
     * SMSAL to reset this record, however, 
     * this reset cause the test cause failed 
     */
    if (ret_val == KAL_FALSE)
    {
        if (KAL_FALSE == is_test_sim(SMSAL_SIM_ID))
        {
            /*
             * abnormal case, the data may be corrupted,
             * * reset the message to a unused message 
             */
            kal_brief_trace(TRACE_WARNING, SMSAL_EFSMS_CORRUPT, storage_type, aux_info->record_no);

            smsal_reset_short_msg(SMSAL_MAX_PENDING_ACT, storage_type, aux_info->record_no);
            entry->state = SMSAL_MB_ENTRY_FREE;
        }
        else
        {
            INCR_USED_MSG_NUM(storage_type);    /* increment the no. of used msg */
        }                               /* TEST SIM detect */
    }

    return KAL_TRUE;
}                                       /* end of smsal_decode_msg_into_msgbox */

void smsal_update_msgbox_from_tpdu(smsal_mb_entry_struct    *entry_ptr,
                                   smsal_tpdu_decode_struct *tpdu_decode)
{

    ASSERT((entry_ptr != NULL) && (tpdu_decode != NULL));

    switch (tpdu_decode->mti)
    {
        case SMSAL_MTI_DELIVER:
        {
            smsal_deliver_peer_struct *deliver_ptr;

            entry_ptr->mti = SMSAL_MTI_DELIVER;
            deliver_ptr = &tpdu_decode->data.deliver_tpdu;

            /* Save special type of message info into msg box  */

            if ((tpdu_decode->fo & SMSAL_FO_RP_BITS) == SMSAL_FO_RP_BITS)
            {
                entry_ptr->mb_type_ind |= SMSAL_MB_TYPE_REPLY_PATH;
            }

            if ((deliver_ptr->pid >= SMSAL_PID_REP_TYPE_1) &&
                (deliver_ptr->pid <= SMSAL_PID_REP_TYPE_7))
            {
                entry_ptr->mb_type_ind |= SMSAL_MB_TYPE_REPLACE_MSG;
            }
            else if (deliver_ptr->pid == SMSAL_PID_RCM)
                entry_ptr->mb_type_ind |= SMSAL_MB_TYPE_RCM;

            break;
        }

        case SMSAL_MTI_SUBMIT:
        {
            entry_ptr->mti = SMSAL_MTI_SUBMIT;
            break;
        }

        case SMSAL_MTI_STATUS_REPORT:
        {
            entry_ptr->mti = SMSAL_MTI_STATUS_REPORT;
            break;
        }

        default:
            return;
    }                                   /* switch (mti) */

}                                       /* end of smsal_update_msgbox_from_tpdu */


/*****************************************************************************
* FUNCTION
*  smsal_update_msgbox_for_report
* DESCRIPTION
*   This function updates message box upon receiving the status report.
*
* PARAMETERS
*  a  IN          rep_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_update_msgbox_for_report(smsal_status_report_peer_struct *rep_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint16 i;
    smsal_mb_entry_struct *entry;
    smsal_status_report_aux_info_struct *aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_UPDATE_MSGBOX_REPORT);

    /*
     * If this status report is for SMS-COMMAND, skip the operation for
     * * updating message box, because in this phase, SMS-COMMAND is not
     * * stored in storage 
     */
    if (rep_ptr->status_rep_type == 1)
        return;

    /*
     * Find the previously submitted message which requested a status report 
     * match conditions:
     * 1) message reference
     * 2) TP-RA
     */
    for (i = 0; i < SMSAL_MAX_MSG_NUM; i++)
    {
        entry = (&(smsal_cntx_ptr->message_box[i]));
        if ((entry->state == SMSAL_MB_ENTRY_VALID) &&
            ((entry->status & SMSAL_STATUS_SRR_NOT_RECV) == SMSAL_STATUS_SRR_NOT_RECV))
        {

            if (smsal_get_pending_act_id(&id) == KAL_FALSE)
                return;

            (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_STATUS_REPORT;
            aux_info = (smsal_status_report_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_status_report_aux_info_struct));

            (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

            aux_info->msg_ref = rep_ptr->msg_ref;
            aux_info->status = rep_ptr->status;
            aux_info->index = i;
            sms_tpdu_addr2_sms_tp_addr(rep_ptr->rcpnt_addr, &aux_info->rcpnt_addr);

            smsal_read_short_msg(id, entry->storage_type, entry->record_no);

            break;                      /* leave for loop */

        }                               /* status match ? */
    }                                   /* for */

}                                       /* end of smsal_update_msgbox_for_report */


/*****************************************************************************
* FUNCTION
*  smsal_update_msgbox_for_report_cnf
* DESCRIPTION
*   This function updates status byte (1st byte) in sotrage for
*   received the status report.
*
* PARAMETERS
*  a  IN          id, access_id
*  b  IN          local_para_ptr
*  c  IN          peer_buff_ptr
*  d  IN          is_from_sim
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_update_msgbox_for_report_cnf(kal_uint8         id,
                                        ilm_struct        *ilm_ptr,
                                        kal_bool          is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 retval;
    kal_uint16 pdu_len;
    kal_uint16 index;
    kal_uint8 *pdu_ptr;
    sim_read_cnf_struct *read_cnf;
    smsal_pdu_decode_struct sms_pdu;
    smsal_submit_peer_struct *submit_ptr;
    smsal_status_report_aux_info_struct *aux_info;

    kal_uint8 scts[7];

    kal_mem_set(scts, 0xff, 7);

    kal_brief_trace(TRACE_INFO, INFO_SMSAL_UPDATE_STATUS_FOR_RCV_STATUS_REP);

    aux_info = ((smsal_status_report_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info);
    index = aux_info->index;

    if (is_from_sim == KAL_TRUE)
    {
        read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        pdu_ptr = read_cnf->data;
        pdu_len = read_cnf->length;
    }
    else
    {
        pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &pdu_len);

        if (pdu_len == SMSAL_SMS_ME_LEN)
        {
            kal_mem_cpy(scts, pdu_ptr + SMSAL_SMS_LEN, 7);
            pdu_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr, SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len););
            pdu_len = SMSAL_SMS_LEN;
        }
    }

    /* Decode SMS PDU (SCA + TPDU) */
    retval = smsal_decode_sms_pdu(pdu_ptr + 1, (kal_uint8) (pdu_len - 1), &sms_pdu);

    if (retval == KAL_TRUE)
    {
        submit_ptr = &sms_pdu.tpdu.data.submit_tpdu;

        if ((submit_ptr->msg_ref == aux_info->msg_ref) &&
            (smsal_tp_addr_cmp(&aux_info->rcpnt_addr, submit_ptr->dest_addr) == KAL_TRUE))
        {

            /* update status byte : in context & storage */
            *pdu_ptr = SMSAL_SENT_SRR_RECV_NOT_STO;
            (&(smsal_cntx_ptr->message_box[index]))->status &= (~SMSAL_STATUS_SRR_NOT_RECV);

            smsal_write_short_msg(SMSAL_MAX_PENDING_ACT,        /* ignore storage cnf */
                                  (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                                  (&(smsal_cntx_ptr->message_box[index]))->record_no,
                                  pdu_ptr,
                                  scts,
                                  (kal_uint8) pdu_len);
            smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
            smsal_free_pending_act(id);

            return;
        }
    }

    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

    for (index = aux_info->index + 1; index < SMSAL_MAX_MSG_NUM; index++)
    {
        if (((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_VALID) &&
            (((&(smsal_cntx_ptr->message_box[index]))->status & SMSAL_STATUS_SRR_NOT_RECV) == SMSAL_STATUS_SRR_NOT_RECV))
            break;
    }

    if (index >= SMSAL_MAX_MSG_NUM)
    {
        /* Not found; */
        smsal_free_pending_act(id);
    }
    else
    {
        aux_info->index = index;
        smsal_read_short_msg(id,
                             (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                             (&(smsal_cntx_ptr->message_box[index]))->record_no);

    }

}                                       /* end of smsal_update_msgbox_for_report_cnf */


#endif //__SMS_STORAGE_BY_MMI__

