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
 * smsal_checks.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions for error checking.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#include "l4_msgid.h"

/* SMSAL <--> L4C */
#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"

#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"

/* SMS Peer Messages */
#include "smsal_peer_struct.h"

#include "l3_inc_enums.h"
#include "smsal_enums.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#include "smslib_def.h"
#endif

#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"
#include "smsal_checks.h"
#include "smsal_other_funcs.h"
#include "smsal_transport_proc.h"
#include "smsal_utils.h"

#include "custom_sms_config.h"

#include "phb_utils.h"                  /* CHARSET_ASCII, CHARSET_UCS2 */

#include "nvram_data_items.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"

#undef  _FILE_CODE_
#define _FILE_CODE_ _SMSAL_CHECKS_C_

#if !defined(__SMS_STORAGE_BY_MMI__)
kal_bool smsal_is_index_in_prefer_mem(kal_uint8 prefer_mem, kal_uint16 index)
{
#ifdef __SMS_ME_STORAGE__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool ret = KAL_TRUE;            /* reset */

    if (prefer_mem == SMSAL_SM_PREFER ||
        prefer_mem == SMSAL_ME_PREFER ||
        prefer_mem == SMSAL_MT)
    {
        /* SIM or ME */
        if (index >= (smsal_cntx_ptr->storage_num_info.sim_msg_num +
            smsal_cntx_ptr->storage_num_info.me_msg_num))
        {
            ret = KAL_FALSE;
        }
    }
    else if (prefer_mem == SMSAL_SM)
    {
        /* SIM only */
        if (smsal_sms_prefer_order() == SMSAL_SM_FIRST)
        {
            if (index >= smsal_cntx_ptr->storage_num_info.sim_msg_num)
            {
                ret = KAL_FALSE;
            }
        }
        else
        {
            if (index < smsal_cntx_ptr->storage_num_info.me_msg_num ||
                index >= (smsal_cntx_ptr->storage_num_info.sim_msg_num +
                          smsal_cntx_ptr->storage_num_info.me_msg_num))
            {
                ret = KAL_FALSE;
            }

        }
    }
    else
    {
        /* ME only */
        if (smsal_sms_prefer_order() == SMSAL_SM_FIRST)
        {
            if (index < smsal_cntx_ptr->storage_num_info.sim_msg_num ||
                index >= (smsal_cntx_ptr->storage_num_info.sim_msg_num +
                          smsal_cntx_ptr->storage_num_info.me_msg_num))
            {
                ret = KAL_FALSE;
            }
        }
        else
        {
            if (index >= smsal_cntx_ptr->storage_num_info.me_msg_num)
            {
                ret = KAL_FALSE;
            }
        }
    }
    return ret;
#else
    return KAL_TRUE;
#endif /* __SMS_ME_STORAGE__ */

}
#endif

/*****************************************************************************
* FUNCTION
*  smsal_l4c_msg_checks
* DESCRIPTION
*   This function checks the messages from L4C.
*
* PARAMETERS
*  a  IN       msg_type
*  b  IN       *msg_ptr, pointer to request
*  c  IN       *aux_info
*  d  IN/OUT   *error_cause
* RETURNS
*  KAL_TRUE:  no error
*  KAL_FALSE: error
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_l4c_msg_checks(msg_type               l4c_msg,
                              void                   *msg_ptr,
                              void                   *peer_buff_ptr,                              
                              smsal_error_cause_enum *error_cause
                              )
{
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#endif
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 id;
    kal_bool ret_val = KAL_TRUE;

    /* Check whether PENDING ACTION STRUCT is avaliable */
    if (smsal_is_pending_act_available(&id) == KAL_FALSE)
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    switch (l4c_msg)
    {
#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_WRITE_REQ:
        {
            l4csmsal_write_req_struct *write_req = (l4csmsal_write_req_struct *) msg_ptr;

            /* to replace the existent entry in storage */
            if (write_req->replace_index != SMSAL_INVALID_INDEX)
            {
                ret_val = smsal_is_index_valid(write_req->replace_index);
                if (ret_val == KAL_FALSE)
                {
                    *error_cause = INVALID_MEM_INDEX;
                    return ret_val;
                }
            }

            if (write_req->src_id >= RMMI_SRC &&
                SMSAL_PDU_MODE == smsal_get_msg_format(write_req->src_id) &&
                (write_req->status == SMSAL_REC_UNREAD ||
                 write_req->status == SMSAL_REC_READ))
            {
                /* 'unread' status (INBOX) */
                ret_val = smsal_deliver_pdu_check(write_req->message_len,
                                                  (peer_buff_struct *) peer_buff_ptr,
                                                  error_cause);
                return ret_val;
            }
            else if ((write_req->status != SMSAL_INVALID_STATUS) &&
                     (write_req->status != SMSAL_STO_UNSENT) &&
                     (write_req->status != SMSAL_STO_SENT) &&
                     (write_req->status != SMSAL_STO_DRAFT) &&
                     (write_req->status != SMSAL_REC_READ) &&
                     (write_req->status != SMSAL_REC_UNREAD) )/* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
            {
                *error_cause = INVALID_TEXT_MODE_PARA;  /* wrong status */
                return KAL_FALSE;
            }

            if( (write_req->status == SMSAL_REC_READ) ||
                (write_req->status == SMSAL_REC_UNREAD))
            {
                /* 'stored unsent' status */
                ret_val = smsal_check_receive_msg(write_req->src_id, write_req->message_len,
                                           (void *)&(write_req->hdr.mt_sms_hdr),
                                           peer_buff_ptr, error_cause);
            }
            else
            {
                /* 'stored unsent' status */
                ret_val = smsal_check_send_msg(write_req->src_id, write_req->message_len,
                                           SMSAL_SEND_MSG, (void *)&(write_req->hdr.mo_sms_hdr),
                                           peer_buff_ptr, error_cause);
            }
            break;
        }

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
        case MSG_ID_L4CSMSAL_WRITE_RAW_DATA_REQ:
        {
            l4csmsal_write_raw_data_req_struct *write_req = (l4csmsal_write_raw_data_req_struct *) msg_ptr;
            kal_uint8 *pdu_ptr;
            kal_uint16 pdu_len;
            #ifdef __SMS_ME_STORAGE__
            kal_uint16 sim_num, me_num;
            #endif

            if( write_req->storage_type != SMSAL_SM && write_req->storage_type != SMSAL_ME)
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_INVALID_STORAGE_TYPE;
            }
            else
            {
                pdu_ptr = (kal_uint8 *)get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

                if( pdu_ptr )
                {
                    if( pdu_len != SMSAL_SMS_LEN && pdu_len != SMSAL_SMS_ME_LEN)
                    {
                        ret_val = KAL_FALSE;
                        *error_cause = INVALID_REQ_PARAMETER;
                    }
                }
                else
                {
                    ret_val = KAL_FALSE;
                    *error_cause = INVALID_REQ_PARAMETER;
                }


            #ifdef __SMS_ME_STORAGE__
                ret_val = smsal_is_storage_available(write_req->storage_type, 1, &sim_num, &me_num);
                if (ret_val == KAL_FALSE)
                {
                    if ( write_req->storage_type == SMSAL_SM )
                        *error_cause = SIM_STORAGE_FULL;
                    else
                        *error_cause = SMS_ME_STORAGE_FULL;
                }
            #else
                SMSAL_ASSERT(write_req->storage_type == SMSAL_SM);
                ret_val = smsal_is_storage_available(1);
                if (ret_val == KAL_FALSE)
                {
                    *error_cause = SIM_STORAGE_FULL;
                }
            #endif
            
            }
            break;
        }
        
        case MSG_ID_L4CSMSAL_READ_RAW_DATA_REQ:
        {
            l4csmsal_read_raw_data_req_struct *read_req = (l4csmsal_read_raw_data_req_struct *) msg_ptr;

            /* check whether this index is valid or not */
            ret_val = smsal_is_index_valid(read_req->index);
            if (ret_val == KAL_FALSE)
            {
                *error_cause = INVALID_MEM_INDEX;
            }
            break;
        }
#endif
            
        case MSG_ID_L4CSMSAL_READ_REQ:
        {
            smsal_mb_entry_struct *entry;
            kal_uint8 status;
            l4csmsal_read_req_struct *read_req = (l4csmsal_read_req_struct *) msg_ptr;

            if (read_req->req_type == EXACTLY_INDEXING)
            {
                /* check whether this index is valid or not */
                ret_val = smsal_is_index_valid(read_req->index);
                if (ret_val == KAL_FALSE)
                {
                    *error_cause = INVALID_MEM_INDEX;
                }
                else
                {
                    /* if this cmd come from AT, ensure this msg belong to mem1 */
                    if ((read_req->src_id >= RMMI_SRC) &&
                        smsal_is_index_in_prefer_mem(smsal_cntx_ptr->sms_parameter.rmi.prefer_mem1,
                                                     read_req->index) == KAL_FALSE)
                    {
                        *error_cause = INVALID_MEM_INDEX;
                        return KAL_FALSE;
                    }

                    entry = (&(smsal_cntx_ptr->message_box[read_req->index]));

                    if (entry->mti == SMSAL_MTI_UNSPECIFIED)
                    {
                        ret_val = KAL_FALSE;
                        *error_cause = SMSAL_NOT_SUPPORT_MSG_TYPE;
                    }
                }
            }
            else if (read_req->req_type == NEXT_INDEXING)
            {
                /* check whether status is valid or not */
                ret_val = smsal_get_int_status((smsal_status_enum) read_req->status, &status);
                if (ret_val == KAL_FALSE)
                    *error_cause = INVALID_REQ_PARAMETER;       /* wrong status */
                else
                {
                    if (read_req->index != SMSAL_INVALID_INDEX)
                    {
                        /* check whether this index is valid or not */
                        ret_val = smsal_is_index_valid(read_req->index);
                        if (ret_val == KAL_FALSE)
                            *error_cause = INVALID_MEM_INDEX;
                    }
                }
            }
            else
            {
                ret_val = KAL_FALSE;
                *error_cause = INVALID_REQ_PARAMETER;
            }
            break;
        }

        case MSG_ID_L4CSMSAL_DELETE_REQ:
        {
            l4csmsal_delete_req_struct *del_req = (l4csmsal_delete_req_struct *) msg_ptr;

            if (del_req->src_id >= RMMI_SRC)
            {
                if (del_req->del_flag > SMSAL_DEL_ALL_MSG)
                {
                    *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                    return KAL_FALSE;
                }
            }
            else
            {
                if (del_req->del_flag > SMSAL_DEL_BITMAP)
                {
                    *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                    return KAL_FALSE;
                }
            }

            /* check this index is valid or not */
            if (del_req->del_flag == SMSAL_DEL_INDEXED_MSG)
            {
                ret_val = smsal_is_index_valid(del_req->index);

                /* if this cmd come from AT, ensure this msg belong to mem1 */
                if (del_req->src_id >= RMMI_SRC && ret_val == KAL_TRUE)
                {
                    ret_val = smsal_is_index_in_prefer_mem(smsal_cntx_ptr->sms_parameter.rmi.prefer_mem1, del_req->index);
                }

                if (ret_val == KAL_FALSE)
                    *error_cause = INVALID_MEM_INDEX;
            }
            break;
        }
#endif //__SMS_STORAGE_BY_MMI__

        case MSG_ID_L4CSMSAL_SEND_REQ:
        {
            l4csmsal_send_req_struct *send_req = (l4csmsal_send_req_struct *) msg_ptr;

            if (smsal_para_ptr->rmi.service_info.mo == KAL_FALSE)
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_NO_MO_SERVICE;
            }
            else if (IS_FLAG_SET(ABORT_PENDING_FLAG) == KAL_TRUE)
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_NOT_READY;
            }
            else if (send_req->req_type > SMSAL_SEND_CMD)
            {
                ret_val = KAL_FALSE;
                *error_cause = INVALID_REQ_PARAMETER;
            }
            else if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE &&
                     IS_FLAG_SET(SMSAL_PARAM_FLAG) == KAL_FALSE)
            {
                *error_cause = SMSAL_NOT_READY;
                ret_val = KAL_FALSE;
            }
            else
            {
#ifndef __SMS_STORAGE_BY_MMI__
                /* check whether this REPLY index is valid or not */
                ret_val = smsal_check_reply_index(send_req->reply_index, error_cause);

                if (ret_val == KAL_TRUE)
                {
                    if (send_req->message_len > 0 && peer_buff_ptr == NULL)
                    {
                        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                        return KAL_FALSE;
                    }
                }
#endif
            }

#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__)
            if ((send_req->src_id >= RMMI_SRC) && 
                (send_req->msg_header.submit.da_tag == KAL_TRUE) &&
                (send_req->req_type == SMSAL_SEND_MSG))
            {
                if ( send_req->msg_header.submit.da.addr_length > SMSAL_ADDR_LEN )
                {
                    *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                    return KAL_FALSE;
                }
            }
#endif

            break;
        }

#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ:
        {

            l4csmsal_send_from_storage_req_struct *send_fr_req;

            send_fr_req = (l4csmsal_send_from_storage_req_struct *) msg_ptr;

            if (smsal_para_ptr->rmi.service_info.mo == KAL_FALSE)
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_NO_MO_SERVICE;
                return ret_val;
            }
            else if ((IS_FLAG_SET(ABORT_PENDING_FLAG) == KAL_TRUE) ||
                     (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE))
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_NOT_READY;
                return ret_val;
            }

            if (send_fr_req->da_tag == KAL_TRUE && send_fr_req->da.addr_length > SMSAL_ADDR_LEN)
            {
                *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                return KAL_FALSE;
            }

            /* check whether this index is valid or not */
            ret_val = smsal_is_index_valid(send_fr_req->index);
            if (ret_val == KAL_FALSE)
            {
                *error_cause = INVALID_MEM_INDEX;
            }
            else
            {
                /* if this cmd come from AT, ensure this msg belong to mem2 */
                if (send_fr_req->src_id >= RMMI_SRC)
                {
                    ret_val = smsal_is_index_in_prefer_mem(smsal_cntx_ptr->sms_parameter.rmi.prefer_mem2,
                                                           send_fr_req->index);
                    if (ret_val == KAL_FALSE)
                    {
                        *error_cause = INVALID_MEM_INDEX;
                        return ret_val;
                    }
                }

                /*
                 * the status of the short message shall be SENT/UNSENT,
                 * * ie, a MO message 
                 */
                if ((((&(smsal_cntx_ptr->message_box[send_fr_req->index]))->status & 0x0f) | SMSAL_STATUS_OUTBOX) !=
                    SMSAL_STATUS_OUTBOX)
                {
                    *error_cause = INVALID_REQ_PARAMETER;
                    ret_val = KAL_FALSE;
                }
                else
                {
                    /* check whether this reply index is valid or not */
                    ret_val = smsal_check_reply_index(send_fr_req->reply_index,
                                                      error_cause);
                }                       /* if status */
            }                           /* if index */

            break;
        }
#endif //__SMS_STORAGE_BY_MMI__

    #if defined (__SAT__)
        case MSG_ID_L4CSMSAL_SAT_SEND_REQ:
        {

            l4csmsal_sat_send_req_struct *sat_send_req;

            sat_send_req = (l4csmsal_sat_send_req_struct *) msg_ptr;

            if (smsal_para_ptr->rmi.service_info.mo == KAL_FALSE)
            {
                ret_val = KAL_FALSE;
                *error_cause = SMSAL_NO_MO_SERVICE;
            }
            else if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE &&
                     IS_FLAG_SET(SMSAL_PARAM_FLAG) == KAL_FALSE)
            {
                *error_cause = SMSAL_NOT_READY;
                ret_val = KAL_FALSE;
            }
            else if (sat_send_req->sc_addr.addr_length > SMSAL_ADDR_LEN)
            {
                *error_cause = SCA_UNKNOWN;
                ret_val = KAL_FALSE;
            }
            break;
        }
    #endif
        case MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ:
            ret_val = smsal_check_common_para(
                        (l4csmsal_set_common_para_req_struct *) msg_ptr,
                        error_cause);
            break;

        case MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ:
            ret_val = smsal_check_profile_para(
                        (l4csmsal_set_profile_para_req_struct *) msg_ptr,
                        error_cause);

            break;

#ifndef __SMS_STORAGE_BY_MMI__
        case MSG_ID_L4CSMSAL_COPY_MSG_REQ:
        {
            l4csmsal_copy_msg_req_struct *copy_req;

            copy_req = (l4csmsal_copy_msg_req_struct *) msg_ptr;

            ret_val = smsal_is_index_valid(copy_req->src_index);
            if (ret_val == KAL_FALSE)
            {
                *error_cause = INVALID_MEM_INDEX;
            }
            else
            {
                if (copy_req->dst_storage != SMSAL_SM
            #ifdef __SMS_ME_STORAGE__
                    && copy_req->dst_storage != SMSAL_ME
            #endif
                    )
                {
                    ret_val = KAL_FALSE;
                    *error_cause = SMSAL_INVALID_STORAGE_TYPE;
                }
                else
                {
                #ifdef __SMS_ME_STORAGE__
                    kal_uint16 sim_num, me_num;

                    ret_val = smsal_is_storage_available(copy_req->dst_storage, 1, &sim_num, &me_num);
                    if (ret_val == KAL_FALSE)
                    {
                        if (copy_req->dst_storage == SMSAL_SM)
                            *error_cause = SIM_STORAGE_FULL;
                        else
                            *error_cause = SMS_ME_STORAGE_FULL;
                    }
                #else
                    ASSERT(copy_req->dst_storage == SMSAL_SM);
                    ret_val = smsal_is_storage_available(1);
                    if (ret_val == KAL_FALSE)
                    {
                        *error_cause = SIM_STORAGE_FULL;
                    }
                #endif
                }

                if (ret_val == KAL_TRUE)
                {
                    if (copy_req->action != SMSAL_COPY_MSG &&
                        copy_req->action != SMSAL_MOVE_MSG)
                    {
                        ret_val = KAL_FALSE;
                        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
                    }
                }
            }
            break;
        }

        /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        case MSG_ID_L4CSMSAL_SET_STATUS_REQ:
        {
            l4csmsal_set_status_req_struct *set_status_req;

            set_status_req = (l4csmsal_set_status_req_struct *) msg_ptr;

            ret_val = smsal_is_index_valid(set_status_req->index);
            if (ret_val == KAL_FALSE)
            {
                *error_cause = INVALID_MEM_INDEX;
                return ret_val;
            }

            // check status MO-SMS
            if (set_status_req->new_status == SMSAL_STO_SENT  ||
                (set_status_req->new_status == SMSAL_STO_UNSENT || set_status_req->new_status == SMSAL_STO_DRAFT))
            {
                if ((((&(smsal_cntx_ptr->message_box[set_status_req->index]))->status & 0x0f) | SMSAL_STATUS_OUTBOX) != SMSAL_STATUS_OUTBOX)
                {
                    *error_cause = INVALID_REQ_PARAMETER;
                    ret_val = KAL_FALSE;
                    return ret_val;
                }
            }
            // check status MT-SMS
            else if (set_status_req->new_status == SMSAL_REC_UNREAD || set_status_req->new_status == SMSAL_REC_READ)
            {
                if ((((&(smsal_cntx_ptr->message_box[set_status_req->index]))->status & 0x0f) | SMSAL_STATUS_INBOX) != SMSAL_STATUS_INBOX)
                {
                    *error_cause = INVALID_REQ_PARAMETER;
                    ret_val = KAL_FALSE;
                    return ret_val;
                }
            }
            else
            {
                *error_cause = INVALID_REQ_PARAMETER;
                ret_val = KAL_FALSE;
                return ret_val;
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
#endif

            /* [MAUI_00817141]
             * allow SMSAL_STO_DRAFT and SMSAL_SM
             *
            if ((&(smsal_cntx_ptr->message_box[set_status_req->index]))->storage_type != SMSAL_ME)
            {
                *error_cause = SMSAL_INVALID_STORAGE_TYPE;
                ret_val = KAL_FALSE;
                return ret_val;
            }
             */
                         
            break;
        }
#endif //__SMS_STORAGE_BY_MMI__

        default:
            ret_val = KAL_FALSE;
            break;
    }                                   /* switch */

    return ret_val;
}                                       /* end of smsal_l4c_msg_checks */


/*****************************************************************************
* FUNCTION
*  smsal_sms_msg_checks
* DESCRIPTION
*   This function checks the messages from SMS.
*
* PARAMETERS
*  a  IN       msg_type
*  b  IN       *msg_ptr, pointer to request
*  c  IN       msg_id, eg, smi
*  d  IN/OUT   *aux_info, return for using later
* RETURNS
*  KAL_TRUE:  no error
*  KAL_FALSE: error
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_sms_msg_checks(msg_type      msg_type,
                              void          *msg_ptr, 
                              kal_uint8     msg_id,                              
                              kal_uint8     *aux_info
                             )
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 dummy;
    smsal_error_cause_enum failure_cause = UNSPECIFIED_TP_FCS;
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_deliver_peer_struct *deliver_ptr;
#else
    smsal_deliver_peer_struct *deliver_ptr;
#endif

    switch (msg_type)
    {
        case MSG_ID_SMS_DELIVER:
        {
            *aux_info = DELIVER_NORMAL_MT_MSG;

#if defined(__SMS_STORAGE_BY_MMI__)
            deliver_ptr = (smslib_deliver_peer_struct *) msg_ptr;
#else
            deliver_ptr = (smsal_deliver_peer_struct *) msg_ptr;
#endif

            smsal_pid_check(deliver_ptr->pid,
                            &failure_cause,
                            aux_info);

            ret_val = smsal_dcs_check(deliver_ptr->dcs, &failure_cause);
            
            break;
        }

        case MSG_ID_SMS_SUBMIT_REPORT_ACK:
        {

            smsal_submit_report_ack_peer_struct *submit_ack_ptr;

            submit_ack_ptr = (smsal_submit_report_ack_peer_struct *) msg_ptr;

            /* Check, what are the parameters present in tpdu */
            if ((submit_ack_ptr->params_p & SMSAL_PARAM_CHECK) ==
                SMSAL_PID_PRESENT)
            {
                /*
                 * Protocol Identifier is present, check for supported
                 * * Protocol Identifiers 
                 */
                ret_val = smsal_pid_check(submit_ack_ptr->pid, &failure_cause, &dummy);
            }

            if (((submit_ack_ptr->params_p & SMSAL_PARAM_CHECK) == SMSAL_DCS_PRESENT) &&
                (ret_val == KAL_TRUE))
            {
                /* Check for supported values of data coding scheme */
                ret_val = smsal_dcs_check(submit_ack_ptr->dcs, &failure_cause);
            }
            break;
        }

        case MSG_ID_SMS_SUBMIT_REPORT_NACK:
        {

            smsal_submit_report_nack_peer_struct *submit_nack_ptr;

            submit_nack_ptr = (smsal_submit_report_nack_peer_struct *) msg_ptr;

            /* Check what are the parameters present in tpdu */
            if ((submit_nack_ptr->params_p & SMSAL_PARAM_CHECK) == SMSAL_PID_PRESENT)
            {
                /*
                 * Protocol Identifier is present, check for supported
                 * * Protocol Identifiers 
                 */
                ret_val = smsal_pid_check(submit_nack_ptr->pid, &failure_cause, &dummy);
            }

            if (((submit_nack_ptr->params_p & SMSAL_PARAM_CHECK) == SMSAL_DCS_PRESENT) &&
                (ret_val == KAL_TRUE))
            {
                /* Check for supported values of data coding scheme */
                ret_val = smsal_dcs_check(submit_nack_ptr->dcs, &failure_cause);
            }
            break;
        }

        case MSG_ID_SMS_STATUS_REPORT:
        {

#if defined(__SMS_STORAGE_BY_MMI__)
            smslib_status_report_peer_struct *report_ptr;
            report_ptr = (smslib_status_report_peer_struct *) msg_ptr;
#else
            smsal_status_report_peer_struct *report_ptr;
            report_ptr = (smsal_status_report_peer_struct *) msg_ptr;
#endif

            /* Check what are the parameters present in tpdu */
            if ((report_ptr->params_p & SMSAL_PID_PRESENT) == SMSAL_PID_PRESENT)
            {
                /*
                 * Protocol Identifier is present, check for supported
                 * * Protocol Identifiers 
                 */
                ret_val = smsal_pid_check(report_ptr->pid, &failure_cause, &dummy);
            }

            if (((report_ptr->params_p & SMSAL_DCS_PRESENT) == SMSAL_DCS_PRESENT) &&
                (ret_val == KAL_TRUE))
            {
                /* Check for supported values of data coding scheme */
                ret_val = smsal_dcs_check(report_ptr->dcs, &failure_cause);

            }

            /* Process deliver_nack if parameters are not supported */
            if (ret_val == KAL_FALSE)
            {
                smsal_deliver_nack_post(msg_id, failure_cause, 0, 0, 0, 0, NULL);
            }

            break;
        }

        default:

            ret_val = KAL_FALSE;
            break;

    }

    return ret_val;
}                                       /* end of smsal_sms_msg_checks */


/*****************************************************************************
* FUNCTION
*  smsal_dcs_check
* DESCRIPTION
*   This function checks the data coding scheme.
*
* PARAMETERS
*  a  IN       dcs
*  b  IN/OUT   *fail_cause_ptr
* RETURNS
*  KAL_TRUE:  dcs is valid
*  KAL_FALSE: dcs is invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_dcs_check(kal_uint8 dcs, smsal_error_cause_enum *fail_cause_ptr)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 coding_group;

    if (dcs == 0)                       /* Default DCS */
        return KAL_TRUE;

    coding_group = dcs & 0xf0;

    /* bit7..bit4=1111: Data coding/message class */
    if ((dcs & SMSAL_DCS_CODING2) == SMSAL_DCS_CODING2)
    {
        /* Bit3 is reserved, shall equals to zero */
        if ((dcs & SMSAL_DCS_RESERVE_BIT) == SMSAL_DCS_RESERVE_BIT)
        {
            *fail_cause_ptr = UNSPECIFIED_TP_DCS;
            ret_val = KAL_FALSE;
        }
    }
    /* bit7..bit4=00xx: General Data coding indication */
    else if ((dcs & SMSAL_DCS_CODING1) == 0x00)
    {
        /* bit 3 and bit 2 are reserved */
        if ((dcs & SMSAL_DCS_ALPHABET_CHECK) == SMSAL_DCS_ALPHABET_CHECK)
        {
            *fail_cause_ptr = ALPHABET_NOT_SUPPORT;
            ret_val = KAL_FALSE;
        }
        else if ((dcs & SMSAL_DCS_COMPRESS_CHECK) == SMSAL_DCS_COMPRESS_CHECK)
        {
            /* Currently, not support compression */
            *fail_cause_ptr = ALPHABET_NOT_SUPPORT;
            ret_val = KAL_FALSE;
        }
    }
    else if ((coding_group & 0xc0) == 0x80)
    {
        *fail_cause_ptr = MSG_CLASS_NOT_SUPPORT;
        ret_val = KAL_FALSE;
    }
    else if ((coding_group == 0xc0) || (coding_group == 0xd0) || (coding_group == 0xe0))
    {
        /* Bit2 is reserved, shall equals to zero */
        if ((dcs & 0x04) == 0x04)
        {
            *fail_cause_ptr = UNSPECIFIED_TP_DCS;
            ret_val = KAL_FALSE;
        }
    }

    return ret_val;
}                                       /* end of dcs check */


/*****************************************************************************
* FUNCTION
*  smsal_pid_check
* DESCRIPTION
*   This function checks the Protocol IDentifier.
*
* PARAMETERS
*  a  IN       pid
*  b  IN/OUT   *fail_cause_ptr
*  c  IN/OUT   *aux_info, useful for caller
* RETURNS
*  KAL_TRUE:  pid is valid
*  KAL_FALSE: pid is invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_pid_check(kal_uint8              pid, 
                         smsal_error_cause_enum *fail_cause_ptr,
                         kal_uint8              *aux_info)
{
    kal_bool ret_val = KAL_TRUE;

    if (pid != SMSAL_DEFAULT_PID)
    {
        /*
         * Check for reserved and SC specific use of 
         * * PID value 
         */
        if (((pid & SMSAL_PID_CHECK) == SMSAL_PID_CHECK) ||
            ((pid & SMSAL_PID_CHECK) == SMSAL_PID_RESERVED))
        {
            *fail_cause_ptr = UNSPECIFIED_PID_ERROR;
            ret_val = KAL_FALSE;
        }                               /* end of PID check */
        /* Mask the pid bits & check for telematics support */
        else if ((pid & SMSAL_PID_MASK) == SMSAL_TELEMATICS_CHECK)
        {

        }                               /* end of telematics check */
        /* otherwise either type0 or replace message type */
        else
        {
            /* Check for Type 0 message */
            if (pid == SMSAL_PID_TYPE_0)
            {
                *aux_info = DELIVER_TYPE_0;
            }
            /* Check for Replace Type */
            else if ((pid >= SMSAL_PID_REP_TYPE_1) && (pid <= SMSAL_PID_REP_TYPE_7))
            {
                *aux_info = DELIVER_REPLACE;
            }
            /*
             * Check for reserved values , EMS , return
             * * call messages, ANSI-136 R-DATA etc.. 
             */
            else if (pid == SMSAL_PID_RCM)
            {
                *aux_info = DELIVER_RETURN_CALL_MSG;
            }
            else if (pid == SMSAL_PID_ME_DE_PERSONAL)
            {
                *aux_info = DELIVER_ME_DE_PERSONAL;
            }
            else if (pid == SMSAL_PID_SIM_DOWNLOAD)
            {
                *aux_info = DELIVER_SIM_DATA_DOWNLOAD;
            }
            else if (pid == SMSAL_PID_ANSI_136_RDATA)
            {
                *aux_info = DELIVER_ANSI_136_RDATA;
            }
            else if (pid == SMSAL_PID_ME_DOWNLOAD)
            {
                *aux_info = DELIVER_ME_DATA_DOWNLOAD;
            }
        }                               /* end of outer else */
    }                                   /* end of check for default pid */

    return ret_val;
}                                       /* end of pid check */


/*****************************************************************************
* FUNCTION
*  smsal_fo_check
* DESCRIPTION
*   This function check the Fist Octet.
*
* PARAMETERS
*  a  IN       fo (first octet)
* RETURNS
*  KAL_TRUE:  fo is valid
*  KAL_FALSE: fo is invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_fo_check(kal_uint8 fo)
{
    /* Check Message Type Identifier */
    if ((fo & SMSAL_MTI_BITS) >= SMSAL_MTI_ILLEGAL)
        return KAL_FALSE;

    /* Check Validity Period , currently only relative format supported */
    if ((((fo & SMSAL_VPF_CHECK) >> 3) != SMSAL_VPF_NOT_PRESENT) &&
        (((fo & SMSAL_VPF_CHECK) >> 3) != SMSAL_VPF_RELATIVE))
        return KAL_FALSE;

    return KAL_TRUE;
}                                       /* end of smsal_fo_check */


/*****************************************************************************
* FUNCTION
*  smsal_bearer_check
* DESCRIPTION
*   This function check the bearer service selected by user.
*
* PARAMETERS
*  a  IN       bearer
* RETURNS
*  KAL_TRUE:  bearer is valid
*  KAL_FALSE: bearer is invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_bearer_check(kal_uint8 bearer)
{
#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)

    /* 
     * Class B 
     */
    if (bearer >= NUM_OF_SMS_SERVICE_MODE)
        return KAL_FALSE;

#elif defined(__CS_SERVICE__)

    /*
     * GSM only
     */
    if (bearer != SMS_GSM_ONLY)
        return KAL_FALSE;

#elif defined(__PS_SERVICE__)

    /*
     * GPRS only
     */
    if (bearer != SMS_GPRS_ONLY)
        return KAL_FALSE;

#else 
#error at least define either __CS_SERVICE__ or __PS_SERVICE__
#endif 
    return KAL_TRUE;
}                                       /* end of smsal_bearer_check */


/*****************************************************************************
* FUNCTION
*  smsal_prefer_mem_check
* DESCRIPTION
*   This function check the preferred memories.
*
* PARAMETERS
*  a  IN       prefer_mem 
* RETURNS
*  KAL_TRUE:  valid
*  KAL_FALSE: invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_prefer_mem_check(smsal_select_mem_struct *prefer_mem)
{
#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    if (((prefer_mem->mem1 == SMSAL_SM) ||
         (prefer_mem->mem1 == SMSAL_ME) ||
         (prefer_mem->mem1 == SMSAL_MT) ||
         (prefer_mem->mem1 == SMSAL_SM_PREFER) ||
         (prefer_mem->mem1 == SMSAL_ME_PREFER)) &&
        ((prefer_mem->mem2 == SMSAL_SM) ||
         (prefer_mem->mem2 == SMSAL_ME) ||
         (prefer_mem->mem2 == SMSAL_MT) ||
         (prefer_mem->mem2 == SMSAL_SM_PREFER) ||
         (prefer_mem->mem2 == SMSAL_ME_PREFER)) &&
        ((prefer_mem->mem3 == SMSAL_SM) ||
         (prefer_mem->mem3 == SMSAL_ME) ||
         (prefer_mem->mem3 == SMSAL_MT) ||
         (prefer_mem->mem3 == SMSAL_SM_PREFER) ||
         (prefer_mem->mem3 == SMSAL_ME_PREFER)))
        return KAL_TRUE;
    else
        return KAL_FALSE;
#else
    if ((prefer_mem->mem1 == SMSAL_SM || prefer_mem->mem1 == SMSAL_SM_PREFER) &&
        (prefer_mem->mem2 == SMSAL_SM || prefer_mem->mem2 == SMSAL_SM_PREFER) &&
        (prefer_mem->mem3 == SMSAL_SM || prefer_mem->mem3 == SMSAL_SM_PREFER))
        return KAL_TRUE;
    else
        return KAL_FALSE;
#endif

}                                       /* end of smsal_prefer_mem_check */



#ifdef __REL4__
/*****************************************************************************
* FUNCTION
*  smsal_mbi_check
* DESCRIPTION
*   This function check the mbi
*
* PARAMETERS
*  a  IN       mbi
* RETURNS
*  KAL_TRUE:  valid
*  KAL_FALSE: invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_mbi_check(smsal_mbi_struct *mbi)
{
    kal_int8 id;

    #if defined (__REL4__) || defined(__CPHS__)
    #if defined (__REL4__) && defined(__CPHS__)
    if ((IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE) ||
        (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE))
    #elif defined (__REL4__)
    if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
    #elif defined(__CPHS__)
    if (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE)
    #endif
    {
        for (id = 0; id < NUM_OF_MSG_WAITING_TYPE; id++)
        {
            if ((mbi->mbi_id[id] != 0xff) &&
                (mbi->mbi_id[id] >= (smsal_para_ptr_g->mailbox.rec_num)))
                return KAL_FALSE;
        }
    }
    else
    #endif
    {
        #ifdef __GEMINI__
        for (id = 0; id < NUM_OF_MSG_WAITING_TYPE; id++)
        {
            if ((mbi->mbi_id[id] != 0xff) &&
                (mbi->mbi_id[id] >= (NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL/SMSAL_MAX_SIM_NUM)))
                return KAL_FALSE;
        }
        #else
        for (id = 0; id < NUM_OF_MSG_WAITING_TYPE; id++)
        {
            if ((mbi->mbi_id[id] != 0xff) &&
                (mbi->mbi_id[id] >= (NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL)))
                return KAL_FALSE;
        }
        #endif
    }

    return KAL_TRUE;
}                                       /* end of smsal_mbi_check */
#endif
/*****************************************************************************
* FUNCTION
*  smsal_check_common_para
* DESCRIPTION
*   This function is a wrap function for checking parameters.
*
* PARAMETERS
*  a  IN       type, indicate which parameter is needed to check.
*  b  IN       data, contain the parameter
* RETURNS
*  KAL_TRUE:  parameter is valid
*  KAL_FALSE: parameter is invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_check_common_para(l4csmsal_set_common_para_req_struct *set_req,
                                 smsal_error_cause_enum *error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool set_line = KAL_FALSE;

    if (set_req->para_ind == 0)
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_FO) == SMSAL_COM_PARA_FO)
    {
        if (smsal_fo_check(set_req->fo) == KAL_FALSE)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_BEARER) == SMSAL_COM_PARA_BEARER)
    {
        if (smsal_bearer_check(set_req->bearer_serivce) == KAL_FALSE)
        {
            *error_cause = SMSAL_INVALID_BEARER;
            return KAL_FALSE;
        }
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_PREFER_MEM) == SMSAL_COM_PARA_PREFER_MEM)
    {
        if (smsal_prefer_mem_check(&(set_req->prefer_mem)) == KAL_FALSE)
        {
            *error_cause = SMSAL_INVALID_STORAGE_TYPE;
            return KAL_FALSE;
        }
    }

    if ((set_req->para_ind & SMSAL_COM_PARA_MAILBOX_ADDR) == SMSAL_COM_PARA_MAILBOX_ADDR)
    {
        set_line = KAL_TRUE;
    }

#ifdef __CB__
    if ((set_req->para_ind & SMSAL_COM_PARA_ALL_CB_LANG) == SMSAL_COM_PARA_ALL_CB_LANG)
    {
        if (set_req->is_all_language_on != KAL_TRUE &&
            set_req->is_all_language_on != KAL_FALSE)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }
#endif

    if ((set_req->para_ind & SMSAL_COM_PARA_RESTORE_PROFILE) ==
        SMSAL_COM_PARA_RESTORE_PROFILE)
    {
        if (set_req->dest_no >= smsal_cntx_ptr->sms_parameter.profile.max_profile_num)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

#if defined(__REL4__)
    if ((set_req->para_ind & SMSAL_COM_PARA_MBI_NUM) ==
        SMSAL_COM_PARA_MBI_NUM)
    {
        if (smsal_mbi_check(&(set_req->mbi)) == KAL_FALSE)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }
#endif

    if (set_line == KAL_TRUE)
    {
        if (set_req->dest_no >= SMSAL_MAX_MAILBOX_NUM)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}


kal_bool smsal_check_profile_para(l4csmsal_set_profile_para_req_struct *set_req,
                                  smsal_error_cause_enum *error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 dummy2;
    smsal_error_cause_enum dummy1;
    kal_bool set_profile = KAL_FALSE;

    if (set_req->para_ind == 0)
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    if ((set_req->para_ind & SMSAL_PARA_PID) == SMSAL_PARA_PID)
    {
        if (smsal_pid_check(set_req->pid, &dummy1, &dummy2) == KAL_FALSE)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
        set_profile = KAL_TRUE;
    }

    if ((set_req->para_ind & SMSAL_PARA_DCS) == SMSAL_PARA_DCS)
    {
        set_profile = KAL_TRUE;
        if (smsal_dcs_check(set_req->dcs, &dummy1) == KAL_FALSE)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    if ((set_req->para_ind & SMSAL_PARA_SCA) == SMSAL_PARA_SCA)
    {
        set_profile = KAL_TRUE;
        if (set_req->sca.addr_length > SMSAL_ADDR_LEN)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    if ((set_req->para_ind & SMSAL_PARA_VP) == SMSAL_PARA_VP)
    {
        /* add checking */
        set_profile = KAL_TRUE;
    }

    if ((set_req->para_ind & SMSAL_PARA_PROFILE_NAME) == SMSAL_PARA_PROFILE_NAME)
    {
        set_profile = KAL_TRUE;
        if (set_req->profile_name.name_dcs != CHARSET_ASCII &&
            set_req->profile_name.name_dcs != CHARSET_UCS2)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    if ((set_profile == KAL_TRUE) ||
        (set_req->para_ind & SMSAL_PARA_SAVE_PROFILE) == SMSAL_PARA_SAVE_PROFILE)
    {
        if (set_req->profile_no >= smsal_cntx_ptr->sms_parameter.profile.max_profile_num)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}


#ifndef __SMS_STORAGE_BY_MMI__
kal_bool smsal_check_reply_index(kal_uint16             reply_index,
                                 smsal_error_cause_enum *error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool ret_val = KAL_TRUE;

    /* check whether this REPLY index is valid or not */
    if (reply_index != SMSAL_INVALID_INDEX)
    {
        ret_val = smsal_is_index_valid(reply_index);
        if (ret_val == KAL_FALSE)
        {
            *error_cause = INVALID_MEM_INDEX;
        }
        else
        {
            /*
             * the status of message indicated by reply_index shall 
             * * INBOX 
             */
            if ((((&(smsal_cntx_ptr->message_box[reply_index]))->status & 0x0f) | SMSAL_STATUS_INBOX) !=
                SMSAL_STATUS_INBOX)
            {
                *error_cause = INVALID_REQ_PARAMETER;
                ret_val = KAL_FALSE;
            }
        }
    }
    return ret_val;
}                                       /* end of smsal_check_reply_index */
#endif //__SMS_STORAGE_BY_MMI__

kal_bool smsal_send_msg_req_struct_check(smsal_send_msg_req_hdr_struct *send_msg_ptr,
                                         kal_uint16                    message_len,
                                         smsal_error_cause_enum        *error_cause)
{
    kal_uint8 max_msg_len = SMSAL_ONE_MSG_LEN;  /* 160 */
    kal_uint8 dummy_byte;

    /* check pid if present */
    if ((send_msg_ptr->para_ind & 0x02))
    {
        if (smsal_pid_check(send_msg_ptr->pid, error_cause, &dummy_byte) == KAL_FALSE)
            return KAL_FALSE;
    }

    /* check destination address */
    if ((send_msg_ptr->da_tag == KAL_TRUE) &&
        (send_msg_ptr->da.addr_length > SMSAL_ADDR_LEN))
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    /* check sca if present */
    if ((send_msg_ptr->para_ind & 0x08) &&
        (send_msg_ptr->sc_addr.addr_length > SMSAL_ADDR_LEN))
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    /* check dcs */
    if (smsal_dcs_check(send_msg_ptr->dcs, error_cause) == KAL_FALSE)
        return KAL_FALSE;

    if (smsal_is_len_in8bit(send_msg_ptr->dcs) == KAL_TRUE)
    {
        max_msg_len = SMSAL_ONE_MSG_OCTET;      /* 140 */
    }

    /*
     * Check length:
     * user data length and user data header length if UDHI is set 
     */
    if (message_len > max_msg_len)
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    return KAL_TRUE;

}                                       /* end of smsal_send_msg_req_struct_check */

#if !defined(__SMS_STORAGE_BY_MMI__)
kal_bool smsal_recv_msg_req_struct_check(smsal_receive_msg_hdr_struct *recv_msg_ptr,
                                         kal_uint16                   message_len,
                                         smsal_error_cause_enum       *error_cause)
{
    kal_uint8 max_msg_len = SMSAL_ONE_MSG_LEN;  /* 160 */

    /* check pid */
    // no need

    /* check destination address */
    if ( recv_msg_ptr->oa.addr_length > SMSAL_ADDR_LEN )
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    /* check sca if present */
    if ( recv_msg_ptr->sc_addr.addr_length > SMSAL_ADDR_LEN )
    {
        *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
        return KAL_FALSE;
    }

    /* check dcs */
    if (smsal_dcs_check(recv_msg_ptr->dcs, error_cause) == KAL_FALSE)
        return KAL_FALSE;

    if (smsal_is_len_in8bit(recv_msg_ptr->dcs) == KAL_TRUE)
    {
        max_msg_len = SMSAL_ONE_MSG_OCTET;      /* 140 */
    }

    /*
     * Check length:
     * user data length and user data header length if UDHI is set 
     */
    if (message_len > max_msg_len)
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    return KAL_TRUE;

}                                       /* end of smsal_send_msg_req_struct_check */
#endif

/*****************************************************************************
* FUNCTION
*  smsal_deliver_pdu_check
* DESCRIPTION
*   This function checks the SMS-DELIVER PDU.
*
* PARAMETERS
*  a  IN       message_len, <length> defined in 127.005
*  b  IN       pdu_len
*  c  IN       *pdu_ptr
*  d  IN/OUT   error_cause, used as return
* RETURNS
*  KAL_TRUE: pdu is correct.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_deliver_pdu_check(kal_uint16             message_len,
                                 peer_buff_struct       *peer_buff_ptr,
                                 smsal_error_cause_enum *error_cause)
{
    kal_uint8 off = 0;                  /* offset */
    kal_uint16 pdu_len;
    kal_uint8 *pdu_ptr;
    kal_uint8 dcs;
    kal_uint8 udl, user_data_len;

    *error_cause = INVALID_PDU_MODE_PARA;
    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    /* check length */
    if (message_len > SMSAL_MAX_TPDU_SIZE || pdu_len > SMSAL_MAX_TPDU_SIZE)
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    if (pdu_len == 0)
        return KAL_FALSE;

    /* check sca */
    if (*pdu_ptr > SMSAL_ADDR_LEN)
        return KAL_FALSE;

    off += (1 + *pdu_ptr);              /* move to head of TPDU (skip sca_len, sca) */

    /* check this pdu is SMS-DELIVER or not */
    if (((*(pdu_ptr + off) & SMSAL_MTI_BITS) != SMSAL_MTI_DELIVER) && ((*(pdu_ptr + off) & SMSAL_MTI_BITS) != SMSAL_MTI_UNSPECIFIED))
    {
        return KAL_FALSE;
    }

    off += 1;                           /* move to oa, (skip fo ) */

    /* check oa */
    if (*(pdu_ptr + off) > (SMSAL_ADDR_LEN - 1) * 2)
    {
        return KAL_FALSE;
    }

    off += ((*(pdu_ptr + off) + 1) / 2 + 2);    /* skip addr_len, addr digits & addr type */
    off++;                              /* skip pid, move to dcs */

    /* check dcs */
    dcs = *(pdu_ptr + off);
    off += (1 + 7);                     /* skip dcs, move to uhl */

    /* udl */
    udl = *(pdu_ptr + off);

    /* move to user data */
    off++;

    user_data_len = (kal_uint8) smsal_msg_len_in_octet(dcs, udl);

    if (user_data_len > SMSAL_ONE_MSG_OCTET || (user_data_len != (pdu_len - off)))
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    return KAL_TRUE;

}                                       /* end of smsal_deliver_pdu_check */


/*****************************************************************************
* FUNCTION
*  smsal_submit_pdu_check
* DESCRIPTION
*   This function checks the SMS-SUBMIT PDU.
*
* PARAMETERS
*  a  IN       message_len, <length> defined in 127.005
*  b  IN       pdu_len
*  c  IN       *pdu_ptr
*  d  IN/OUT   error_cause, used as return
* RETURNS
*  KAL_TRUE: pdu is correct.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_submit_pdu_check(kal_uint16             message_len,
                                kal_uint16             pdu_len,
                                kal_uint8              *pdu_ptr,
                                smsal_error_cause_enum *error_cause)
{
    kal_uint8 dummy_byte;
    kal_uint8 off = 0;                  /* offset */
    kal_uint8 dcs;
    kal_uint8 fo;
    kal_uint8 udl, user_data_len;

    *error_cause = INVALID_PDU_MODE_PARA;

    /* check length */
    if (message_len > SMSAL_MAX_TPDU_SIZE || pdu_len > SMSAL_MAX_TPDU_SIZE)
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    if (pdu_len == 0)
        return KAL_FALSE;

    /* check sca */
    if (*pdu_ptr > SMSAL_ADDR_LEN)
        return KAL_FALSE;

    off += (1 + *pdu_ptr);              /* move to head of TPDU (skip sca_len, sca) */

    /* check this pdu is SMS-SUBMIT or not */
    if ((*(pdu_ptr + off) & SMSAL_MTI_BITS) != SMSAL_MTI_SUBMIT)
    {
        return KAL_FALSE;
    }

    fo = *(pdu_ptr + off);
    /* check fo */
    if (smsal_fo_check(fo) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    off += 2;                           /* move to da, (skip fo and msg_ref) */

    /* check da */
    if (*(pdu_ptr + off) > (SMSAL_ADDR_LEN - 1) * 2)
    {
        return KAL_FALSE;
    }

    off += ((*(pdu_ptr + off) + 1) / 2 + 2);    /* skip addr_len, addr digits & addr type */

    /* check pid */
    if (smsal_pid_check(*(pdu_ptr + off), error_cause, &dummy_byte) == KAL_FALSE)
        return KAL_FALSE;

    off++;                              /* move to dcs */

    /* check dcs */
    dcs = *(pdu_ptr + off);
    if (smsal_dcs_check(dcs, error_cause) == KAL_FALSE)
        return KAL_FALSE;

    /* move to udl */
    if (((fo & SMSAL_VPF_CHECK) >> 3) == SMSAL_VPF_RELATIVE)
        off += 2;                       /* VP is relative format (1 byte) */
    else
        off++;                          /* VP not present */

    /* udl */
    udl = *(pdu_ptr + off);

    /* move to user data */
    off++;

    user_data_len = (kal_uint8) smsal_msg_len_in_octet(dcs, udl);

    if (user_data_len > SMSAL_ONE_MSG_OCTET || (user_data_len != (pdu_len - off)))
    {
        *error_cause = MSG_LEN_EXCEEDED;
        return KAL_FALSE;
    }

    return KAL_TRUE;

}                                       /* end of smsal_submit_pdu_check */


/*****************************************************************************
* FUNCTION
*  smsal_check_send_msg
* DESCRIPTION
*   This function checks the message length exceeds maximum supported length
*   or not.
*
* PARAMETERS
*
* RETURNS
*  KAL_TRUE  : ok
*  KAL_FALSE : occurred error
* GLOBALS AFFECTED
*****************************************************************************/
kal_bool smsal_check_send_msg(kal_uint8               src_id,
                              kal_uint16              message_len,
                              smsal_send_type_enum    sms_msg_type,
                              void                    *msg_ptr,
                              peer_buff_struct        *peer_buff_ptr,
                              smsal_error_cause_enum  *error_cause)
{      
    kal_bool ret_val = KAL_TRUE;/*reset*/

    if (smsal_get_msg_format(src_id) == SMSAL_TEXT_MODE)
    {
        if (message_len > 0 && peer_buff_ptr == NULL)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }

        if (sms_msg_type == SMSAL_SEND_MSG)
        {
            /* SUBMIT */
            smsal_send_msg_req_hdr_struct *send_msg_ptr;

            send_msg_ptr = (smsal_send_msg_req_hdr_struct *) msg_ptr;

            if (smsal_send_msg_req_struct_check(send_msg_ptr, message_len, error_cause) ==
                KAL_FALSE)
            {
                ret_val = KAL_FALSE;
            }
        }
        else
        {
            /* COMMAND */
            
            /*smsal_command_msg_hdr_struct *cmd_msg_ptr;

            cmd_msg_ptr = (smsal_command_msg_hdr_struct *) msg_ptr;*/

        }
    }
    else
    {
        if (sms_msg_type == SMSAL_SEND_MSG)
        {
            /* SUBMIT */
            kal_uint16 pdu_len;
            kal_uint8 *pdu_ptr;

            pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

            ret_val = smsal_submit_pdu_check(message_len, pdu_len, pdu_ptr, error_cause);
        }
        else
        {
            /* COMMAND */

        }

    }                                   /* if (msg_format) */

    return ret_val;

}                                       /* end of smsal_check_send_msg */


#if !defined(__SMS_STORAGE_BY_MMI__)
/*****************************************************************************
* FUNCTION
*  smsal_check_receive_msg
* DESCRIPTION
*   This function checks the message length exceeds maximum supported length
*   or not.
*
* PARAMETERS
*
* RETURNS
*  KAL_TRUE  : ok
*  KAL_FALSE : occurred error
* GLOBALS AFFECTED
*****************************************************************************/
kal_bool smsal_check_receive_msg(kal_uint8               src_id,
                                 kal_uint16              message_len,
                                 void                    *msg_ptr,
                                 peer_buff_struct        *peer_buff_ptr,
                                 smsal_error_cause_enum  *error_cause)
{      
    kal_bool ret_val = KAL_TRUE;/*reset*/
    smsal_receive_msg_hdr_struct *recv_msg_ptr;

    if (smsal_get_msg_format(src_id) == SMSAL_TEXT_MODE)
    {
        if (message_len > 0 && peer_buff_ptr == NULL)
        {
            *error_cause = SMSAL_UNSPECIFIED_ERROR_CAUSE;
            return KAL_FALSE;
        }

        /* DELIVER */
        recv_msg_ptr = (smsal_receive_msg_hdr_struct *) msg_ptr;

        if (smsal_recv_msg_req_struct_check(recv_msg_ptr, message_len, error_cause) ==
            KAL_FALSE)
        {
            ret_val = KAL_FALSE;
        }
    }
    else
    {
        //there is no such case
        ret_val = KAL_FALSE;
    }

    return ret_val;

}                                       /* end of smsal_check_receive_msg */
#endif
