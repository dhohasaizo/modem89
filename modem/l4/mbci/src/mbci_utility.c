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
 * Filename:
 * ---------
 *   mbci_utility.c
 *
 * Project:
 * --------
 *   MT6280
 *
 * Description:
 * ------------
 *   This file is intends for MBCI implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 * removed!
 * removed!
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

#include "stack_msgs.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "mbci_trc.h"
#include "mbci_struct.h"
#include "mbci_context.h"
#include "mbci_utility.h"
#include "l4_msgid.h"
#include "l4c_utility.h"
#include "l4c_context.h"
#include "l4c_sim_cmd.h"
#include "l4c_nw_cmd.h"
#include "l4c_gprs_cmd.h"
#include "l4c_sms_cmd.h"
#include "l4c_eq_cmd.h"
#include "l4c_common_enum.h"
#include "l4crac_enums.h"
#include "l4crac_func.h"
#include "l4c2tcm_func.h"
#include "l4_ps_api.h"
#include "smu_common_enums.h"
#include "custom_nvram_extra.h"
#include "rmmi_context.h"
#include "md_drv_sap.h"

#include "smsal_other_funcs.h"
#include "smsal_enums.h"

#include "nvram_editor_data_item.h"
#include "nvram_interface.h"

extern kal_bool rmmi_translate_oper_name(kal_uint8 format1, kal_uint8 *oper_str1, kal_uint8 format2, kal_uint8 *oper_str2);

/*****************************************************************************
 * FUNCTION
 *  mbci_get_max_cid_by_uuid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 mbci_get_max_cid_by_uuid(kal_uint32 uuid)
{
    kal_uint32 max_cid = 0;

    switch (uuid)
    {
        case MBIM_UUID_BASIC_CONNECT: max_cid = MBIM_CID_BASIC_CONNECT_MAX; break;
        case MBIM_UUID_SMS: max_cid = MBIM_CID_SMS_MAX; break;
        case MBIM_UUID_USSD: max_cid = MBIM_CID_USSD_MAX; break;
        case MBIM_UUID_PHONEBOOK: max_cid = MBIM_CID_PHONEBOOK_MAX; break;
        case MBIM_UUID_STK: max_cid = MBIM_CID_STK_MAX; break;
        case MBIM_UUID_AUTH: max_cid = MBIM_CID_AUTH_MAX; break;
        case MBIM_UUID_DSS: max_cid = MBIM_CID_DSS_MAX; break;
        case MBIM_UUID_MS_HOSTSHUTDOWN: max_cid = MBIM_CID_MS_HOSTSHUTDOWN_MAX; break;
        case MBIM_UUID_MTK_VENDOR_CMD: max_cid = MBIM_CID_MTK_VENDOR_CMD_MAX; break;
        default: break;
    }

    return max_cid;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_uuid_map
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
mbim_uuid_enum mbci_uuid_str_to_id(kal_uint8 *uuid_str)
{
    kal_uint32 i;

    for (i=0; i<MBIM_UUID_MAX; i++)
    {
        if (kal_mem_cmp((void*)uuid_str, (void*)mbim_uuid_tbl[i], 16) == 0)
        {
            return (mbim_uuid_enum)i;
        }
    }

    return MBIM_UUID_UNKNOW;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_uuid_map
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint8 *mbci_uuid_id_to_str(mbim_uuid_enum i)
{
    return (kal_uint8*)(mbim_uuid_tbl[i]);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_context_type_str_to_id
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
mbim_context_type_enum mbci_context_type_str_to_id(kal_uint8 *context_type_str)
{
    kal_uint32 i;

    for (i=0; i<MBIM_CONTEXT_TYPE_MAX; i++)
    {
        if (kal_mem_cmp((void*)context_type_str, (void*)mbim_context_type_tbl[i], 16) == 0)
        {
            return (mbim_context_type_enum)i;
        }
    }

    return MBIM_CONTEXT_TYPE_UNKNOW;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_context_type_id_to_str
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint8 *mbci_context_type_id_to_str(mbim_context_type_enum i)
{
    return (kal_uint8*)(mbim_context_type_tbl[i]);
}


/*****************************************************************************
 * FUNCTION
 *  mbci_setup_transaction
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void *mbci_setup_transaction(kal_uint32 tid)
{
    kal_uint32 i;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    // Should not handle same transaction before previous transaction been complete
    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].tid == tid)
        {
            DEBUG_ASSERT(0);
            return NULL;
        }
    }

    //  Find avaliable transaction
    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].tid == 0)
        {
            mbci_ptr->transaction[i].tid = tid;
            mbci_ptr->transaction[i].src_id = MBCI_SRC + i;
            return &(mbci_ptr->transaction[i]);
        }
    }

    // No avaliable transaction
    return NULL;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_trans_by_src
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void *mbci_get_trans_by_src(kal_uint16 src_id)
{
    kal_uint32 i;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].src_id == src_id)
        {
            return &(mbci_ptr->transaction[i]);
        }
    }

    return NULL;
}


/*****************************************************************************
 * FUNCTION
 *  mbci_release_transaction
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void mbci_release_transaction(kal_uint32 tid)
{
    kal_uint32 i;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].tid == tid)
        {
            if (mbci_ptr->transaction[i].parameter != NULL)
            {
                free_ctrl_buffer(mbci_ptr->transaction[i].parameter);
                mbci_ptr->transaction[i].parameter = NULL;
            }

            mbci_ptr->transaction[i].tid = 0;
            return;
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_send_msg
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_send_msg(module_type dest, msg_type msg_name, sap_type sap, void *local_ptr, void *peer_ptr)
{
    msg_send6(mbci_current_mod_id, dest, sap, msg_name, (local_para_struct*)local_ptr, (peer_buff_struct*)peer_ptr);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_command_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_status_ind(kal_uint32 cid,
                        mbim_uuid_enum mbim_uuid,
                        kal_uint32 infBuffSize,
                        kal_uint8 *infBuff)
{
    ups_mbci_status_ind_struct *param_ptr = NULL;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_length = 0;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    if (mbci_ptr->state != MBCI_STATE_OPEN)
    {
        kal_brief_trace(TRACE_WARNING, MBCI_NOT_OPEN);
        return;
    }

    if (mbci_ptr->device_service_subscribe_list[mbim_uuid][cid] == 0)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "[No Subscribe] UUID:%d CID:%d", mbim_uuid, cid);
        return;
    }

    param_ptr = (ups_mbci_status_ind_struct*)construct_local_para((kal_uint16) sizeof(ups_mbci_status_ind_struct), TD_RESET);

    param_ptr->cid = cid;

    if (mbim_uuid != MBIM_UUID_UNKNOW)
    {
        kal_mem_cpy((void*)param_ptr->uuid, (void*)mbci_uuid_id_to_str(mbim_uuid), sizeof(param_ptr->uuid));
    }

    if (infBuffSize > 0 && infBuff != NULL)
    {
        peer_buf_ptr = construct_peer_buff(infBuffSize, 44, 0, TD_RESET); // Reserve 40 byte header for MOD_UPS_HIGH
        pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
        kal_mem_cpy((void*)pdu_ptr, (void*)infBuff, infBuffSize);

        param_ptr->information_buffer_len = infBuffSize;
    }

    mbci_send_msg(MOD_UPS_HIGH, MSG_ID_UPS_MBCI_STATUS_IND, CMUX_SAP, param_ptr, peer_buf_ptr);
    //mbci_send_msg(MOD_MBCI, MSG_ID_UPS_MBCI_STATUS_IND, L4C_CMUX_SAP, param_ptr, peer_buf_ptr);
    mbci_check_uuid_cid_supported(mbim_uuid, 3, cid, 0, 99);
}


/*****************************************************************************
 * FUNCTION
 *  mbci_command_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_command_rsp(kal_uint8 result, 
                                mbim_status_code_enum status,
                                kal_uint32 cid,
                                mbim_uuid_enum mbim_uuid,
                                kal_uint32 infBuffSize,
                                kal_uint8 *infBuff,
                                kal_uint32 tid)
{
    ups_mbci_command_rsp_struct *param_ptr = NULL;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_length = 0;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        kal_brief_trace(TRACE_WARNING, MBCI_NOT_OPEN);
        return;
    }

    param_ptr = (ups_mbci_command_rsp_struct*)construct_local_para((kal_uint16) sizeof(ups_mbci_command_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->status = status;
    param_ptr->transaction_id = tid;
    param_ptr->cid = cid;

    if (mbim_uuid != MBIM_UUID_UNKNOW)
    {
        kal_mem_cpy((void*)param_ptr->uuid, (void*)mbci_uuid_id_to_str(mbim_uuid), sizeof(param_ptr->uuid));
    }

    if (infBuffSize > 0 && infBuff != NULL)
    {
        peer_buf_ptr = construct_peer_buff(infBuffSize, 48, 0, TD_RESET); // Reserve 48 byte header for MOD_UPS_HIGH
        pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
        kal_mem_cpy((void*)pdu_ptr, (void*)infBuff, infBuffSize);

        param_ptr->information_buffer_len = infBuffSize;
    }

    mbci_send_msg(MOD_UPS_HIGH, MSG_ID_UPS_MBCI_COMMAND_RSP, CMUX_SAP, param_ptr, peer_buf_ptr);
    //mbci_send_msg(MOD_MBCI, MSG_ID_UPS_MBCI_COMMAND_RSP, L4C_CMUX_SAP, param_ptr, peer_buf_ptr);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_command_trans_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_command_trans_rsp(kal_uint8 result, 
                                mbim_status_code_enum status,
                                mbci_transaction_struct *trans_ptr,
                                kal_uint32 infBuffSize,
                                kal_uint8 *infBuff)
{
    if (trans_ptr->op != MBIM_OP_ERROR_CANCEL)
    {
        mbci_command_rsp(result, status, trans_ptr->cid, trans_ptr->uuid, infBuffSize, infBuff, trans_ptr->tid);
    }
    else
    {
        // The transaction was cancelled by host
        kal_brief_trace(TRACE_WARNING, MBCI_ERROR_CANCEL, trans_ptr->tid);
    }

    mbci_check_uuid_cid_supported(trans_ptr->uuid, 2, trans_ptr->cid, trans_ptr->tid, trans_ptr->src_id);
    mbci_release_transaction(trans_ptr->tid);
}


/*****************************************************************************
 * FUNCTION
 *  mbci_release_transaction
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_check_uuid_cid_supported(mbim_uuid_enum mbim_uuid, kal_uint8 type, kal_uint32 cid, kal_uint32 tid, kal_uint8 src_id)
{
    // [type]
    // 0: Command Query
    // 1: Command Set
    // 2: Command Response
    // 3: Status Indication

    switch (mbim_uuid)
    {
        case MBIM_UUID_BASIC_CONNECT:
            kal_brief_trace(TRACE_INFO, MBCI_BASIC_CONNECT_CID, type, cid, tid, src_id);
            return (MBIM_CID_BASIC_CONNECT_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_SMS:
            kal_brief_trace(TRACE_INFO, MBCI_SMS_CID, type, cid, tid, src_id);
            return (MBIM_CID_SMS_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_USSD:
            kal_brief_trace(TRACE_INFO, MBCI_USSD_CID, type, cid, tid, src_id);
            return (MBIM_CID_USSD_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_PHONEBOOK:
            kal_brief_trace(TRACE_INFO, MBCI_PHONEBOOK_CID, type, cid, tid, src_id);
            return (MBIM_CID_PHONEBOOK_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_STK:
            kal_brief_trace(TRACE_INFO, MBCI_STK_CID, type, cid, tid, src_id);
            return (MBIM_CID_STK_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_AUTH:
            kal_brief_trace(TRACE_INFO, MBCI_AUTH_CID, type, cid, tid, src_id);
            return (MBIM_CID_AUTH_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_DSS:
            kal_brief_trace(TRACE_INFO, MBCI_DSS_CID, type, cid, tid, src_id);
            return (MBIM_CID_DSS_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_MS_HOSTSHUTDOWN:
            kal_brief_trace(TRACE_INFO, MBCI_MS_HOSTSHUTDOWN_CID, type, cid, tid, src_id);
            return (MBIM_CID_MS_HOSTSHUTDOWN_MAX > cid)?KAL_TRUE:KAL_FALSE;
        case MBIM_UUID_MTK_VENDOR_CMD:
            kal_brief_trace(TRACE_INFO, MBCI_MTK_VENDOR_CMD_CID, type, cid, tid, src_id);
            return (MBIM_CID_MTK_VENDOR_CMD_MAX > cid)?KAL_TRUE:KAL_FALSE;
        default:
            kal_brief_trace(TRACE_WARNING, MBCI_UNKNOW_UUID_CID, mbim_uuid, cid);
            return KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_infBuff_cpy
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_infBuff_cpy(kal_uint8 *to, kal_uint32 offset, kal_uint32 length, void *from)
{
    if (length != 0)
    {
        kal_mem_cpy((void*)(to + offset), from, length);
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_parse_infBuff
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_parse_infBuff(kal_uint8 *from, kal_uint32 offset, kal_uint32 length, void *to, kal_uint32 max_length)
{
    kal_mem_set((void*)to, 0x00, max_length);

    if (offset != 0 && length != 0)
    {
        kal_mem_cpy((void*)to, (void*)(from + offset), length);
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_ascii_to_utf16
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_ascii_to_utf16(kal_uint8 *src, kal_wchar *dest)
{
    //ascii_to_ucs2(src, dest);

    kal_uint16 index = 0;

    while (src[index] != RMMI_END_OF_STRING_CHAR)
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = 0;

    return index << 1;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_utf16_to_ascii
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_utf16_to_ascii(kal_wchar *ucs2_src, kal_uint8 *ascii_dest, kal_uint32 max_length)
{
    //ucs2_to_ascii (src, dest);

    kal_uint16 i = 0;
    kal_uint16 j = 0;

    kal_mem_set((void*)ascii_dest, 0x00, max_length);

    while (!(ucs2_src[i] == 0)) //while not end of UCS2 string
    {
        if ((ucs2_src[i] >> 8) != 0)    // the first byte is not 0x00, cannot convert to ASCII
        {
            ascii_dest[j] = '\0';
            break;
            //ascii_dest[j] = (kal_uint8) ucs2_src[i];
            //j++;
            //ascii_dest[j] = (ucs2_src[i] >> 8);
        }
        else    //0x00YZ, so convert dest to
        {
            ascii_dest[j] = (kal_uint8) ucs2_src[i];
        }
        i++;
        j++;
    }
    ascii_dest[j] = '\0';

    return j;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_subscriber_ready_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
mbim_subscriber_ready_state_enum mbci_get_subscriber_ready_state()
{
    mbim_subscriber_ready_state_enum ReadyState;
    smu_pending_password_id_enum type;
    kal_bool ret_val;

    ret_val = l4c_smu_get_pin_type_req(MBCI_SRC, (kal_uint8*) &type);

    if (ret_val != KAL_TRUE)
    {
        if (L4C_PTR->sim_error_cause == SIM_NO_INSERTED)
        {
            ReadyState = MBIMSubscriberReadyStateSimNotInserted;
        }
        else
        {
           ReadyState = MBIMSubscriberReadyStateFailure;
        }
    }
    else if (L4C_PTR->sim_poweroff == KAL_TRUE)
    {
        ReadyState = MBIMSubscriberReadyStateNotActivated;
    }
    else
    {
        switch(type)
        {
            case ID_READY:
                ReadyState = MBIMSubscriberReadyStateInitialized;
                break;
            case ID_SIM_BLOCKED:
                ReadyState = MBIMSubscriberReadyStateBadSim;
                break;
            case ID_SIM_BUSY:
                ReadyState = MBIMSubscriberReadyStateNotInitialized;
                break;
            default:
                ReadyState = MBIMSubscriberReadyStateDeviceLocked;
                break;
        }
    }

    return ReadyState;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_subscriber_ready_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_subscriber_ready_info(kal_uint8 src_id, kal_uint8 *infBuff, kal_uint16 infBuffSize)
{
    mbim_subscriber_ready_info_struct *p = (mbim_subscriber_ready_info_struct*)infBuff;
    kal_uint8 imsi[15], iccid[21];
    kal_wchar imsi_utf16[15], iccid_utf16[21], msisdn[2][41];
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 i;

    kal_mem_set((void*)infBuff, 0, infBuffSize);

    // Check SIM status
    p->ReadyState = mbci_get_subscriber_ready_state();

    kal_brief_trace(TRACE_STATE, MBCI_READY_STATE, p->ReadyState);

    // IMSI
    if (p->ReadyState == MBIMSubscriberReadyStateInitialized)
    {
        p->SubscriberIdOffset = sizeof(mbim_subscriber_ready_info_struct);
        l4c_smu_get_imsi_req(src_id, (kal_uint8*)imsi);
        p->SubscriberIdSize = mbci_ascii_to_utf16(&imsi[1], (kal_wchar*)imsi_utf16);
    }
    else
    {
        p->SubscriberIdOffset = 0;
        p->SubscriberIdSize = 0;
    }

    // ICCID
    if (p->ReadyState == MBIMSubscriberReadyStateSimNotInserted || p->ReadyState == MBIMSubscriberReadyStateNotActivated)
    {
        p->SimIccIdOffset = 0;
        p->SimIccIdSize = 0;
    }
    else
    {
        p->SimIccIdOffset = sizeof(mbim_subscriber_ready_info_struct) + 32;
        l4c_smu_get_iccid_req(src_id, (kal_uint8*)iccid);
        p->SimIccIdSize = mbci_ascii_to_utf16(iccid, (kal_wchar*)iccid_utf16);
    }

    // MBIM_UNIQUE_ID_FLAG
    p->ReadyInfo = 0; 

    // Copy IMSI
    if (p->SubscriberIdSize > 0)
    {
        mbci_infBuff_cpy(infBuff, p->SubscriberIdOffset, p->SubscriberIdSize, imsi_utf16);
        MBCI_PROMPT_TRACE(MOD_MBCI, "imsi:%s, SubscriberIdOffset:%d, SubscriberIdSize:%d", imsi, p->SubscriberIdOffset,p->SubscriberIdSize);
    }

    // Copy ICCID
    if (p->SimIccIdSize > 0)
    {
        mbci_infBuff_cpy(infBuff, p->SimIccIdOffset, p->SimIccIdSize, iccid_utf16);
        MBCI_PROMPT_TRACE(MOD_MBCI, "iccid:%s, SimIccIdOffset:%d, SimIccIdSize:%d", iccid, p->SimIccIdOffset, p->SimIccIdSize);
    }

    // Check number of MSISDN
    if (p->ReadyState != MBIMSubscriberReadyStateInitialized)
    {
        p->ElementCount = 0;
    }
    else
    {
        for (i=0; i<mbci_ptr->no_msisdn; i++)
        {
            if (mbci_ptr->msisdn[i].digit_size > 0)
            {
                kal_uint8 idx = p->ElementCount;

                p->TelephoneNumbersRefList[idx].offset = sizeof(mbim_subscriber_ready_info_struct) + 32 + 40 + 32*idx;
                p->TelephoneNumbersRefList[idx].size = mbci_ascii_to_utf16((kal_uint8*)(mbci_ptr->msisdn[i].digit), (kal_wchar*)(&msisdn[i]));                

                if (p->TelephoneNumbersRefList[idx].size > 30)
                {
                    p->TelephoneNumbersRefList[idx].size = 30; // should not exceed 15 digits
                }

                mbci_infBuff_cpy(infBuff, p->TelephoneNumbersRefList[idx].offset, p->TelephoneNumbersRefList[idx].size, (void*)(&msisdn[i]));
                MBCI_PROMPT_TRACE(MOD_MBCI, "msisdn[%d]: %s, offset:%d, size:%d", i, mbci_ptr->msisdn[i].digit, p->TelephoneNumbersRefList[idx].offset, p->TelephoneNumbersRefList[idx].size);

                p->ElementCount++;   
            }
        }
    }

    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_pin_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
mbim_status_code_enum mbci_get_pin_info(kal_uint8 src_id, mbim_pin_info_struct *pin_info)
{
    smu_pending_password_id_enum type;
    sim_chv_info_struct chv_info;
    sim_chv_status_struct chv_status;
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    kal_bool ret_val;
    kal_uint8 retry_count = 0;

    pin_info->PinType = MBIMPinTypeNone;
    pin_info->PinState = 0;
    pin_info->RemainAttempts = 0;

    ret_val = l4c_smu_get_pin_type_req(src_id, (kal_uint8*) &type);

    ret_val = l4c_sim_check_pin_status_req(&chv_info, &chv_status);

    if (ret_val != KAL_TRUE)
    {
        status = MBIM_STATUS_SIM_NOT_INSERTED;
    }
    else
    {
        pin_info->PinState = 1; // Locked

        switch(type)
        {
            case ID_READY:
                pin_info->PinType = MBIMPinTypeNone;
                pin_info->PinState = 0; // unLocked
                break;
            case ID_SIM_PIN1:
                pin_info->PinType = MBIMPinTypePin1;
                pin_info->RemainAttempts = chv_info.chv1_count;
                break;
            case ID_SIM_PUK1:
                pin_info->PinType = MBIMPinTypePuk1;
                pin_info->RemainAttempts = chv_info.ubchv1_count;
                break;

            case ID_PH_NET_PIN:
                sml_Status(SML_CAT_N, NULL, &retry_count, NULL, NULL, NULL, NULL, MBCI_CURRENT_SIM);
                pin_info->PinType = MBIMPinTypeNetworkPin;
                pin_info->RemainAttempts = retry_count;
                break;
            case ID_PH_NETSUB_PIN:
                sml_Status(SML_CAT_NS, NULL, &retry_count, NULL, NULL, NULL, NULL, MBCI_CURRENT_SIM);
                pin_info->PinType = MBIMPinTypeNetworkSubsetPin;
                pin_info->RemainAttempts = retry_count;
                break;
            case ID_PH_SP_PIN:
                sml_Status(SML_CAT_SP, NULL, &retry_count, NULL, NULL, NULL, NULL, MBCI_CURRENT_SIM);
                pin_info->PinType = MBIMPinTypeServiceProviderPin;
                pin_info->RemainAttempts = retry_count;
                break;
            case ID_PH_CORP_PIN:
                sml_Status(SML_CAT_C, NULL, &retry_count, NULL, NULL, NULL, NULL, MBCI_CURRENT_SIM);
                pin_info->PinType = MBIMPinTypeCorporatePin;
                pin_info->RemainAttempts = retry_count;
                break;
            case ID_PH_FSIM_PIN:
                sml_Status(SML_CAT_SIM, NULL, &retry_count, NULL, NULL, NULL, NULL, MBCI_CURRENT_SIM);
                pin_info->PinType = MBIMPinTypeSubsidyLock;
                pin_info->RemainAttempts = retry_count;
                break;

            case ID_PH_NET_PUK:
                pin_info->PinType = MBIMPinTypeNetworkPuk;
                break;
            case ID_PH_NETSUB_PUK:
                pin_info->PinType = MBIMPinTypeNetworkSubsetPuk;
                break;
            case ID_PH_SP_PUK:
                pin_info->PinType = MBIMPinTypeServiceProviderPuk;
                break;
            case ID_PH_CORP_PUK:
                pin_info->PinType = MBIMPinTypeCorporatePuk;
                break;
            case ID_PH_FSIM_PUK:
                pin_info->PinType = MBIMPinTypeSubsidyLock;
                break;

            case ID_SIM_BLOCKED:
                status = MBIM_STATUS_BAD_SIM;
                break;

            case ID_SIM_BUSY:
                status = MBIM_STATUS_BUSY;
                break;
            default:
                break;
        }

        MBCI_PROMPT_TRACE(MOD_MBCI, "PIN type:%d , Status:%d", pin_info->PinType, status);
    }

    return status;
}


/*****************************************************************************
 * FUNCTION
 *  mbci_pack_provider
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_pack_provider(kal_uint32 offset,
                        kal_uint8 *infBuff, 
                        kal_uint8 *ProviderId,
                        kal_uint32 ProviderState, 
                        kal_uint8 *ProviderName,
                        kal_uint32 CellularClass, 
                        kal_uint32 Rssi, 
                        kal_uint32 ErrorRate)
{
    mbim_provider_struct *Provider = (mbim_provider_struct*)infBuff;
    kal_uint16 infBuffSize = sizeof(mbim_provider_struct);
    kal_wchar ProviderId_utf16[6], ProviderName_utf16[20];

    Provider->ProviderIdOffset = infBuffSize; // local offset
    Provider->ProviderIdSize = mbci_ascii_to_utf16(ProviderId, ProviderId_utf16);
    infBuffSize += MBCI_ALIGN_4(Provider->ProviderIdSize);
    mbci_infBuff_cpy(infBuff, Provider->ProviderIdOffset, Provider->ProviderIdSize, (void*)ProviderId_utf16);
    Provider->ProviderIdOffset += offset; //  global offset

    MBCI_PROMPT_TRACE(MOD_MBCI, "ProviderId: %s, offset:%d", ProviderId, Provider->ProviderIdOffset);
    MBCI_PROMPT_TRACE(MOD_MBCI, "ProviderIdSize:%d, align:%d, infBuffSize:%d", Provider->ProviderIdSize, MBCI_ALIGN_4(Provider->ProviderIdSize), infBuffSize);

    Provider->ProviderState = ProviderState;

    Provider->ProviderNameOffset = infBuffSize; // local offset
    Provider->ProviderNameSize = mbci_ascii_to_utf16(ProviderName, ProviderName_utf16);
    infBuffSize += MBCI_ALIGN_4(Provider->ProviderNameSize);
    mbci_infBuff_cpy(infBuff, Provider->ProviderNameOffset, Provider->ProviderNameSize, (void*)ProviderName_utf16);
    Provider->ProviderNameOffset += offset; // global offset

    MBCI_PROMPT_TRACE(MOD_MBCI, "ProviderName: %s, offset:%d", ProviderName, Provider->ProviderNameOffset);
    MBCI_PROMPT_TRACE(MOD_MBCI, "ProviderNameSize:%d, align:%d, infBuffSize:%d", Provider->ProviderNameSize, MBCI_ALIGN_4(Provider->ProviderNameSize), infBuffSize);

    Provider->CellularClass = CellularClass;
    Provider->Rssi = Rssi;
    Provider->ErrorRate = ErrorRate;

    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_ps_bearer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 mbci_get_ps_bearer(kal_bool highest)
{
    data_speed_support_enum cell_data_speed;
    l4c_data_bearer_capablility_enum bearer_capability;
    kal_uint32  AvailableDataClasses = MBIMDataClassNone;

    cell_data_speed = l4crac_get_cell_data_speed_support();
    bearer_capability = (l4c_data_bearer_capablility_enum)l4c_ps_get_data_bearer_capability();

    // Highest: only return Highest data class, except HSPA which should be (MBIMDataClassHSUPA | MBIMDataClassHSDPA)

    MBCI_PROMPT_TRACE(MOD_MBCI, "cell_data_speed:%x , bearer_capability:%x", cell_data_speed, bearer_capability);

    if (cell_data_speed & HSDPA_SUPPORT || bearer_capability >= L4C_HSDPA_CAPABILITY)
    {
        AvailableDataClasses |= MBIMDataClassHSDPA;
    }

    if (cell_data_speed & HSUPA_SUPPORT || bearer_capability >= L4C_HSUPA_CAPABILITY)
    {
        AvailableDataClasses |= MBIMDataClassHSUPA;
    }

    if (highest && (AvailableDataClasses != MBIMDataClassNone))
    { 
        return AvailableDataClasses;
    }

    if (cell_data_speed & UMTS_SUPPORT || bearer_capability >= L4C_UMTS_CAPABILITY)
    {
        AvailableDataClasses |= MBIMDataClassUMTS;
        if (highest) return AvailableDataClasses;
    }

    if (cell_data_speed & EDGE_SUPPORT || bearer_capability >= L4C_EDGE_CAPABILITY)
    {
        AvailableDataClasses |= MBIMDataClassEDGE;
        if (highest) return AvailableDataClasses;
    }

    if (cell_data_speed & GPRS_SUPPORT || bearer_capability >= L4C_GPRS_CAPABILITY)
    {
        AvailableDataClasses |= MBIMDataClassGPRS;
        if (highest) return AvailableDataClasses;
    }

    return AvailableDataClasses;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_registration_state_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_registration_state_info(kal_uint8 src_id, kal_uint8 *infBuff)
{
    kal_uint8 status;
    kal_uint8 mode;
    kal_uint8 oper[7], oper_name[20];
    kal_wchar oper_utf16[7], oper_name_utf16[20];
    mbim_registration_state_info_struct *p = (mbim_registration_state_info_struct*)infBuff;
    kal_uint16 infBuffSize = sizeof(mbim_registration_state_info_struct);

    if (infBuff != NULL)
    {
        kal_mem_set((void*)infBuff, 0, sizeof(mbim_registration_state_info_struct));
    }
    else
    {
        DEBUG_ASSERT(0);
        return 0;
    }
    
    l4c_nw_get_sel_mode_req(src_id, &mode);
    l4c_nw_get_attach_status_req(src_id, RAC_CS, &status);

    p->NwError = MBCI_PTR->NwError;

    if (mode == AUTO_SELECT)
    {
        p->RegisterMode = MBIMRegisterModeAutomatic;
    }
    else
    {
        p->RegisterMode = MBIMRegisterModeManual;
    }

    p->CurrentCellulrClass = MBIMCellularClassGsm;
    p->RoamingTextOffset = 0;
    p->RoamingTextSize = 0;
    p->RegistrationFlag = MBIM_REGISTRATION_PACKET_SERVICE_AUTOMATIC_ATTACH;

    if (status != REG_STATE_REGISTERED)
    {
        switch(status)
        {
            case REG_STATE_NOT_REGISTERED:
            case REG_STATE_SEARCHING:
                p->RegisterState = MBIMRegisterStateSearching;
                break;

            case REG_STATE_REG_DENIED:
                p->RegisterState = MBIMRegisterStateDenied;
                break;

            case REG_STATE_NOT_ACTIVE:
            case REG_STATE_UNKNOWN:
            default:
                p->RegisterState = MBIMRegisterStateDeregistered;
                break;
        }

        p->AvaliableDataClasses = MBIMDataClassNone;

        if (p->RegisterMode == MBIMRegisterModeAutomatic)
        {
            p->ProviderIdOffset = 0;
            p->ProviderIdSize = 0;
            p->ProviderNameOffset = 0;
            p->ProviderNameSize = 0;
        }
        else
        {
            p->ProviderIdOffset = infBuffSize;
            p->ProviderIdSize = mbci_ascii_to_utf16(MBCI_PTR->request_oper, oper_utf16);
            infBuffSize += MBCI_ALIGN_4(p->ProviderIdSize);
            mbci_infBuff_cpy(infBuff, p->ProviderIdOffset, p->ProviderIdSize, (void*)oper_utf16);
            
            rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, MBCI_PTR->request_oper, RMMI_PLMN_LONG_ALPHA, oper_name);
            
            p->ProviderNameOffset = infBuffSize;
            p->ProviderNameSize = mbci_ascii_to_utf16(oper_name, oper_name_utf16);
            infBuffSize += MBCI_ALIGN_4(p->ProviderNameSize);
            mbci_infBuff_cpy(infBuff, p->ProviderNameOffset, p->ProviderNameSize, (void*)oper_name_utf16);
        }
    }
    else
    {
        l4c_nw_get_current_oper_req(src_id, (kal_uint8*)oper);

        if (RMMI_PTR->cs_register_status.state == RMMI_REG_STATE_ROAMING)
        {
            p->RegisterState = MBIMRegisterStateRoaming;
        }
        else
        {
            p->RegisterState = MBIMRegisterStateHome;
        }

        p->AvaliableDataClasses = mbci_get_ps_bearer(KAL_FALSE);
      
        p->ProviderIdOffset = infBuffSize;
        p->ProviderIdSize = mbci_ascii_to_utf16(oper, oper_utf16);
        infBuffSize += MBCI_ALIGN_4(p->ProviderIdSize);
        mbci_infBuff_cpy(infBuff, p->ProviderIdOffset, p->ProviderIdSize, (void*)oper_utf16);

        rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, oper, RMMI_PLMN_LONG_ALPHA, oper_name);

        p->ProviderNameOffset = infBuffSize;
        p->ProviderNameSize = mbci_ascii_to_utf16(oper_name, oper_name_utf16);
        infBuffSize += MBCI_ALIGN_4(p->ProviderNameSize);
        mbci_infBuff_cpy(infBuff, p->ProviderNameOffset, p->ProviderNameSize, (void*)oper_name_utf16);
    }

    kal_brief_trace(TRACE_STATE, MBCI_REG_STATE, p->RegisterState, p->RegisterMode);

    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_packet_service_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_packet_service_info(kal_uint8 src_id, kal_uint8 *infBuff)
{
    mbim_packet_service_info_struct *p = (mbim_packet_service_info_struct*)infBuff;
    kal_uint16 infBuffSize = 28; //sizeof(mbim_packet_service_info_struct);
    kal_uint8 gprs_status;
    kal_uint8 mode;
    kal_uint64 UplinkSpeed = 0;
    kal_uint64 DownlinkSpeed = 0;

    if (infBuff != NULL)
    {
        kal_mem_set((void*)infBuff, 0, sizeof(mbim_packet_service_info_struct));
    }
    else
    {
        DEBUG_ASSERT(0);
        return 0;
    }

    p->NwError = MBCI_PTR->NwError;

    l4c_nw_get_sel_mode_req(src_id, &mode);
    l4c_nw_get_attach_status_req(src_id, RAC_PS, &gprs_status);

    if (gprs_status == REG_STATE_REGISTERED)
    {
        p->PacketServiceState = MBIMPacketServiceStateAttached;
        p->HighestAvaliableDataClasses = mbci_get_ps_bearer(KAL_TRUE);
    }
    else
    {
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
        {
            p->PacketServiceState = MBIMPacketServiceStateDetached;
        }

        p->HighestAvaliableDataClasses = MBIMDataClassNone;
    }

    switch(p->HighestAvaliableDataClasses)
    {
        case MBIMDataClassHSDPA:
        case MBIMDataClassHSUPA:
        case (MBIMDataClassHSDPA | MBIMDataClassHSUPA):
            UplinkSpeed = 11500000;
            DownlinkSpeed = 42000000;
            break;
        case MBIMDataClassUMTS:
            UplinkSpeed = 2100000;
            DownlinkSpeed = 7200000;
            break;
        case MBIMDataClassEDGE:
        case MBIMDataClassGPRS:
            UplinkSpeed = 180000;
            DownlinkSpeed = 384000;
            break;
        default:
            UplinkSpeed = 0;
            DownlinkSpeed = 0;
            break;
    }

    // Use memcpy to avoid padding
    kal_mem_cpy((void*)(infBuff + 12), (void*)&UplinkSpeed, sizeof(kal_uint64));
    kal_mem_cpy((void*)(infBuff + 20), (void*)&DownlinkSpeed, sizeof(kal_uint64));
    
    kal_brief_trace(TRACE_STATE, MBCI_PACKET_SERVICE_STATE, p->PacketServiceState, p->HighestAvaliableDataClasses);
    MBCI_PROMPT_TRACE(MOD_MBCI, "DL:%u", DownlinkSpeed);
    MBCI_PROMPT_TRACE(MOD_MBCI, "UL:%u", UplinkSpeed);
    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_signal_state_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_signal_state_info(kal_uint8 src_id, kal_uint8 *infBuff)
{
    mbim_signal_state_info_struct *p = (mbim_signal_state_info_struct*)infBuff;
    kal_uint16 infBuffSize = sizeof(mbim_signal_state_info_struct);
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint8 gsm_state;

    l4c_nw_get_attach_status_req(src_id, RAC_CS, &gsm_state);

    if (gsm_state != REG_STATE_REGISTERED || mbci_ptr->gsm_state != REG_STATE_REGISTERED)
    {
        p->Rssi = 99;
        p->ErrorRate= 99;
    }
    else
    {
        p->Rssi = mbci_ptr->Rssi;
        p->ErrorRate= mbci_ptr->ErrorRate;
    }

    if (mbci_ptr->SignalStrengthDisable == KAL_TRUE)
    {
        p->SignalStrengthInterval = MBIM_RSSI_DISABLE;
    }
    else
    {
        p->SignalStrengthInterval = mbci_ptr->SignalStrengthInterval;
    }

    p->RssiThreshold = mbci_ptr->RssiThreshold;
    p->ErrorRateThreshold = mbci_ptr->ErrorRateThreshold;

    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_check_data_session_existence
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_check_data_session_existence()
{
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 i;

    for (i=0; i<GPRS_MAX_PDP_SUPPORT; i++)
    {
        if ((mbci_ptr->session[i].primary_cid != INVALID_PDP_CONTEXT_ID) || (mbci_ptr->session[i].secondary_cid != INVALID_PDP_CONTEXT_ID))
        {
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_check_session_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void mbci_check_session_state(kal_uint32 SessionId, kal_uint32 *ActivationState, kal_uint32 *IPType)
{
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint8 state_list[TCM_TOT_CONTEXT][2];
    l4c_prim_pdp_info_list_struct *pdp_list;
    kal_uint8 primary_cid, secondary_cid;
    kal_uint8 i,num;

    primary_cid = mbci_ptr->session[SessionId].primary_cid;
    secondary_cid = mbci_ptr->session[SessionId].secondary_cid;

    *ActivationState = MBIMActivationStateDeactivated;

    //l4c_ps_get_context_state_req(MBCI_SRC, &num, (kal_uint8*)state_list);

    l4ctcm_get_context_state(&num, (kal_uint8*)state_list);

    for (i=0; i<num; i++)
    {
        if ((state_list[i][0] == primary_cid) || (state_list[i][0] == secondary_cid))
        {
            if (state_list[i][1] == 1)
            {
                *ActivationState = MBIMActivationStateActivated;
            }
        }
    }

    *IPType = MBIMContextIPTypeDefault;

    if (*ActivationState == MBIMActivationStateActivated)
    {
        kal_bool v4_existed = KAL_FALSE;
        kal_bool v6_existed = KAL_FALSE;

        pdp_list = (l4c_prim_pdp_info_list_struct*)get_ctrl_buffer(sizeof(l4c_prim_pdp_info_list_struct));
        //l4c_ps_get_definition_list_req(MBCI_SRC, pdp_list);
        l4ctcm_get_pri_pdp_info(pdp_list);

        for (i=0; i<pdp_list->length; i++)
        {
            if ((pdp_list->prim_pdp_info[i].context_id == primary_cid) || (pdp_list->prim_pdp_info[i].context_id == secondary_cid))
            {
                if (pdp_list->prim_pdp_info[i].pdp_type == IPV4_ADDR_TYPE)
                {
                    v4_existed = KAL_TRUE;
                }
                else if (pdp_list->prim_pdp_info[i].pdp_type == IPV6_ADDR_TYPE)
                {
                    v6_existed = KAL_TRUE;
                }
                else if (pdp_list->prim_pdp_info[i].pdp_type == IPV4V6_ADDR_TYPE)
                {
                    v4_existed = KAL_TRUE;
                    v6_existed = KAL_TRUE;
                }                
            }
        }

        if (v4_existed && v6_existed)
        {
            *IPType = MBIMContextIPTypeIPv4v6;
        }
        else if (v4_existed)
        {
            *IPType = MBIMContextIPTypeIPv4;
        }
        else if (v6_existed)
        {
            *IPType = MBIMContextIPTypeIPv6;
        }

        free_ctrl_buffer(pdp_list);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_deactivate_session
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_deactivate_session(kal_uint8 src_id, kal_uint32 SessionId)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint8 de_cid = INVALID_PDP_CONTEXT_ID;

    if (mbci_ptr->session[SessionId].primary_cid != INVALID_PDP_CONTEXT_ID)
    {
        de_cid = mbci_ptr->session[SessionId].primary_cid;
    }
    else if (mbci_ptr->session[SessionId].secondary_cid != INVALID_PDP_CONTEXT_ID)
    {
        de_cid = mbci_ptr->session[SessionId].secondary_cid;
    }
    else
    {
        return KAL_FALSE;
    }

    param->SessionId = SessionId;

    return (l4c_ps_exe_act_req(src_id, TCM_PDP_DEACTIVATE, de_cid) == KAL_TRUE)? KAL_TRUE : KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_connect_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_connect_info(kal_uint8 src_id, kal_uint8 *infBuff, kal_uint32 SessionId)
{
    mbim_connect_info_struct *p = (mbim_connect_info_struct*)infBuff;
    kal_uint16 infBuffSize = sizeof(mbim_connect_info_struct);
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    // Session ID shoud among 0 ~ (MaxSessions-1)
    if (SessionId >= GPRS_MAX_PDP_SUPPORT)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "Warning: SessionId:%d GPRS_MAX_PDP_SUPPORT:%d", SessionId, GPRS_MAX_PDP_SUPPORT);
        return 0;
    }

    p->SessionId = SessionId;

    mbci_check_session_state(SessionId, &(p->ActivationState), &(p->IPType));

    if (l4c_cc_check_call_exist(src_id) == KAL_TRUE)
    {
        p->VoiceCallState = MBIMVoiceCallStateInProgress;
    }
    else
    {
        p->VoiceCallState = MBIMVoiceCallStateNone;
    }    

    kal_mem_cpy((void*)(p->ContextType), (void*)mbim_context_type_tbl[MBIM_CONTEXT_TYPE_INTERNET], 16);

    p->NwError = mbci_ptr->NwError;

    kal_brief_trace(TRACE_STATE, MBCI_CONNECT_STATE, p->SessionId, p->ActivationState, p->IPType);

    return infBuffSize;    
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_available_pdp_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint8 mbci_get_available_pdp_cid()
{
    kal_uint32 i = 2;
    kal_uint8 new_cid = INVALID_PDP_CONTEXT_ID;        
    
    while (i <= GPRS_MAX_PDP_SUPPORT)
    {
        if (KAL_FALSE == l4ctcm_check_is_context_valid(i)) //find not-in-use cid, it should be NOT VALID
        {
            new_cid = i;
            break;
        }
        else
        {
            i++;
        }
    }

    return new_cid; //0 <-> INVALID_PDP_CONTEXT_ID
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_available_provisioned_context_id
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 mbci_get_available_provisioned_context_id()
{
    nvram_ef_mobile_broadband_provision_context_struct prov_cntxt;
    kal_uint32 i;

    for (i=1; i<=10; i++) // Max: 10 records
    {
        nvram_external_read_data(NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, i, (kal_uint8*)&prov_cntxt, NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_SIZE);

        if (prov_cntxt.status == 0)
        {
            break;
        }
    }

    return i;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_home_provider
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_bool mbci_get_home_provider(kal_uint8 *mcc_mnc)
{
    kal_uint8 imsi[15];

    if (l4c_smu_get_imsi_req(MBCI_SRC, (kal_uint8*)imsi) != KAL_TRUE)
    {
        return KAL_FALSE;
    }

    if (sim_query_mnc_num(MBCI_CURRENT_SIM) == 3)
    {
        kal_mem_cpy((void*)mcc_mnc, (void*)(&imsi[1]), 6);
        mcc_mnc[6] = '\0';
    }
    else
    {
        kal_mem_cpy((void*)mcc_mnc, (void*)(&imsi[1]), 5);
        mcc_mnc[5] = '\0';
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_query_provisioned_context_num
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint8 mbci_query_provisioned_context_num(void)
{
    nvram_ef_mobile_broadband_provision_context_struct *prov_cntxt = (nvram_ef_mobile_broadband_provision_context_struct*)get_ctrl_buffer(sizeof(nvram_ef_mobile_broadband_provision_context_struct));
    kal_uint8 ElementCount = 0;
    kal_uint32 i;
    kal_uint8 mcc_mnc[7];

    mbci_get_home_provider(mcc_mnc);

    for (i=0; i<NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL; i++) // Max: 10 records
    {
        nvram_external_read_data(NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, i+1, (kal_uint8*)prov_cntxt, NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_SIZE);

        // If SIM inserted, only response Home provider APN
        if (0 != strcmp((char*)(prov_cntxt->plmn_in_digit), (char*)mcc_mnc))
        {
            continue;
        }

        if (prov_cntxt->status == 1)
        {
            ElementCount++;
        }
    }

    free_ctrl_buffer(prov_cntxt);

    return ElementCount;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_provisioned_context_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_provisioned_context_info(kal_uint8 src_id, kal_uint8 *infBuff, kal_uint32 ElementCount)
{
    mbim_provisioned_contexts_info_struct *p = (mbim_provisioned_contexts_info_struct*)infBuff;
    kal_uint32 i, count=0;
    kal_uint8 mcc_mnc[7];
    kal_wchar AccessString_utf16[100], UserName_utf16[32], Passsword_utf16[32];
    nvram_ef_mobile_broadband_provision_context_struct *prov_cntxt = (nvram_ef_mobile_broadband_provision_context_struct*)get_ctrl_buffer(sizeof(nvram_ef_mobile_broadband_provision_context_struct));

    // Note: caller should allocate buffer for infBuff with size= sizeof(mbim_provisioned_contexts_info_struct)+sizeof(mbim_context_struct)*ElementCount
    
    p->ElementCount = ElementCount;

    mbci_get_home_provider(mcc_mnc);

    for (i=0; i<NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL; i++) // 10 Record in NVRAM
    {
        MBIM_OL_PAIR_LIST *RefList;
        mbim_context_struct *mbim_context;

        nvram_external_read_data(NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, i+1, (kal_uint8*)prov_cntxt, NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_SIZE);

        // If SIM inserted, only response Home provider APN
        if (0 != strcmp((char*)(prov_cntxt->plmn_in_digit), (char*)mcc_mnc))
        {
            continue;
        }

        if (prov_cntxt->status == 1)
        {
            RefList = &(p->ProvisionedContextRefList[count]);

            RefList->offset = sizeof(mbim_provisioned_contexts_info_struct) + sizeof(mbim_context_struct)*count;
            RefList->size = sizeof(mbim_context_struct);

            mbim_context = (mbim_context_struct*)(infBuff + RefList->offset);

            mbim_context->ContextId = prov_cntxt->context_id;

            if (prov_cntxt->context_type < MBIM_CONTEXT_TYPE_MAX)
            {
                kal_mem_cpy((void*)mbim_context->ContextType, (void*)mbci_context_type_id_to_str((mbim_context_type_enum)(prov_cntxt->context_type)), sizeof(mbim_context->ContextType));
            }
            else
            {
                DEBUG_ASSERT(0);
            }

            // APN
            mbim_context->AccssStringOffset = 52;
            mbim_context->AccssStringSize = mbci_ascii_to_utf16((kal_uint8*)(prov_cntxt->access_string), (kal_wchar*)AccessString_utf16);
            mbci_infBuff_cpy((kal_uint8*)mbim_context, mbim_context->AccssStringOffset, mbim_context->AccssStringSize, (void*)AccessString_utf16);
            MBCI_PROMPT_TRACE(MOD_MBCI, "[%d] APN:%s, offset:%d, size:%d", mbim_context->ContextId, prov_cntxt->access_string, mbim_context->AccssStringOffset, mbim_context->AccssStringSize);

            // Username
            mbim_context->UserNmeOffset = mbim_context->AccssStringOffset + mbim_context->AccssStringSize;
            mbim_context->UserNameSize = mbci_ascii_to_utf16((kal_uint8*)(prov_cntxt->user_name), (kal_wchar*)UserName_utf16);
            mbci_infBuff_cpy((kal_uint8*)mbim_context, mbim_context->UserNmeOffset, mbim_context->UserNameSize, (void*)UserName_utf16);
            MBCI_PROMPT_TRACE(MOD_MBCI, "UserName:%s, offset:%d, size:%d", prov_cntxt->user_name, mbim_context->UserNmeOffset, mbim_context->UserNameSize);

            // Password
            mbim_context->PasswordOffset = mbim_context->UserNmeOffset + mbim_context->UserNameSize;
            mbim_context->PasswordSize= mbci_ascii_to_utf16((kal_uint8*)(prov_cntxt->pass_word), (kal_wchar*)Passsword_utf16);
            mbci_infBuff_cpy((kal_uint8*)mbim_context, mbim_context->PasswordOffset, mbim_context->PasswordSize, (void*)Passsword_utf16);
            MBCI_PROMPT_TRACE(MOD_MBCI, "Password:%s, offset:%d, size:%d", prov_cntxt->pass_word, mbim_context->PasswordOffset, mbim_context->PasswordSize);

            mbim_context->Compression = prov_cntxt->compression;
            mbim_context->AuthProtocol = prov_cntxt->auth_type;

            count++;
        }
    }

    free_ctrl_buffer(prov_cntxt);

    if (count != ElementCount)
    {
        DEBUG_ASSERT(0);
    }

    return sizeof(mbim_provisioned_contexts_info_struct) + sizeof(mbim_context_struct)*count;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_translate_ip_addr_to_gateway_addr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 mbci_translate_ip_addr_to_gateway_addr(kal_uint8 ip_type, kal_uint8 *ip_addr, kal_uint8 *gw_addr)
{
    kal_uint32 OnLinkPrefixLength;

    if (ip_type == IPV4_ADDR_LEN) // IPv4
    {
        kal_uint8 mA;
        kal_uint8 mB;
        kal_uint8 netmask = 0xff;
        kal_uint32 i;

        OnLinkPrefixLength = 32;

        if (ip_addr[3] == 0x00 || ip_addr[3] == 0xff)
        {
            mA = (ip_addr[3]==0x00)?(0x01):(0x00);

            gw_addr[3] = 0x01;
            
            for (i=0; i<8; i++)
            {
                if (((ip_addr[2]>>i) & 0x01) == mA)
                {
                    netmask = netmask << (1 + i);
                    OnLinkPrefixLength = OnLinkPrefixLength - (1 + i) - 8;
            
                    gw_addr[2] = (ip_addr[2] & netmask);
            
                    kal_mem_cpy((void*)&gw_addr[0], (void*)&ip_addr[0], IPV4_ADDR_LEN - 2);
                    break;
                }                
            }
        }
        else //if (ip_addr[3] != 0x00 && ip_addr[3] != 0xff)
        {
            mA = 0x01;
            mB = 0x02;

            for (i=0; i<7; i++)
            {
                if ((((ip_addr[3]>>i) & 0x03) == mA) || (((ip_addr[3]>>i) & 0x03) == mB))
                {
                    netmask = netmask << (2 + i);
                    OnLinkPrefixLength = OnLinkPrefixLength - (2 + i);

                    gw_addr[3] = (ip_addr[3] & netmask) + 1;

                    if (gw_addr[3] == ip_addr[3])
                    {
                        gw_addr[3] += 1;
                    }

                    kal_mem_cpy((void*)&gw_addr[0], (void*)&ip_addr[0], IPV4_ADDR_LEN - 1);
                    break;
                }
            }
        }
    }
    else // IPv6
    {
        OnLinkPrefixLength = 128;
        kal_mem_cpy((void*)gw_addr, (void*)ip_addr, IPV6_ADDR_LEN);
    }

    MBCI_PROMPT_TRACE(MOD_MBCI, "[IP] %d.%d.%d.%d  [Len] %d", ip_addr[0], ip_addr[1], ip_addr[2], ip_addr[3], OnLinkPrefixLength);
    MBCI_PROMPT_TRACE(MOD_MBCI, "[GW] %d.%d.%d.%d", gw_addr[0], gw_addr[1], gw_addr[2], gw_addr[3]);

    return OnLinkPrefixLength;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_ip_addr_by_cid
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void mbci_get_ip_addr_by_cid(mbim_ip_configuration_struct *p, kal_uint8 cid)
{
    mbim_ipv4_element_struct ipv4_element;
    mbim_ipv6_element_struct ipv6_element;
    kal_uint8 addr_len = 0;
    kal_uint8 addr[IPV4V6_ADDR_LEN];
    kal_uint8 gw_addr[IPV4V6_ADDR_LEN];
    l4c_eqos_list_struct eqos_list;
    l4c_config_option_list_struct option_list;
    kal_uint32 i;

    if (cid == INVALID_PDP_CONTEXT_ID)
    {
        return;
    }

    //l4c_ps_get_pdp_addr_req(MBCI_SRC, cid, addr, &addr_len);
    l4ctcm_get_pdp_addr(cid, &addr_len, addr);

    // IP address
    // 0x0b => 8 + 2 + 1 => bit3/bit1/bit0 
    if (IPV4V6_ADDR_LEN == addr_len)
    {
        p->IPv4ConfigurationAvaliable |= 0x0b;
        p->IPv6ConfigurationAvaliable |= 0x0b;

        p->IPv4AddressCount += 1;
        p->IPv6AddressCount += 1;

        kal_mem_cpy((void*)&(ipv4_element.IPv4Address), (void*)addr, IPV4_ADDR_LEN); // IPv4 Address
        ipv4_element.OnLinkPrefixLength = mbci_translate_ip_addr_to_gateway_addr(IPV4_ADDR_LEN, addr, gw_addr);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv4AddressOffset, sizeof(ipv4_element), (void*)&ipv4_element);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv4GatewayOffset, IPV4_ADDR_LEN, (void*)gw_addr); // IPv4 Gateway

        ipv6_element.OnLinkPrefixLength = 128; // 16 byte
        kal_mem_cpy((void*)&(ipv6_element.IPv6Address), (void*)(addr + IPV4_ADDR_LEN), IPV6_ADDR_LEN);  // IPv6 Address
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv6AddressOffset, sizeof(ipv6_element), (void*)&ipv6_element);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv6GatewayOffset, IPV6_ADDR_LEN, (void*)&(ipv6_element.IPv6Address)); // IPv6 Gateway
    }
    else if (IPV4_ADDR_LEN == addr_len)
    {
        p->IPv4ConfigurationAvaliable |= 0x0b;
        p->IPv4AddressCount += 1;

        kal_mem_cpy((void*)&(ipv4_element.IPv4Address), (void*)addr, IPV4_ADDR_LEN); // IPv4 Address
        ipv4_element.OnLinkPrefixLength = mbci_translate_ip_addr_to_gateway_addr(IPV4_ADDR_LEN, addr, gw_addr);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv4AddressOffset, sizeof(ipv4_element), (void*)&ipv4_element);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv4GatewayOffset, IPV4_ADDR_LEN, (void*)gw_addr); // IPv4 Gateway
    }
    else if (IPV6_ADDR_LEN == addr_len)
    {
        p->IPv6ConfigurationAvaliable |= 0x0b;
        p->IPv6AddressCount += 1;

        ipv6_element.OnLinkPrefixLength = 128; // 16 byte
        kal_mem_cpy((void*)&(ipv6_element.IPv6Address), (void*)addr, IPV6_ADDR_LEN);  // IPv6 Address

        mbci_infBuff_cpy((kal_uint8*)p, p->IPv6AddressOffset, sizeof(ipv6_element), (void*)&ipv6_element);
        mbci_infBuff_cpy((kal_uint8*)p, p->IPv6GatewayOffset, IPV6_ADDR_LEN, (void*)&(ipv6_element.IPv6Address)); // IPv6 Gateway
    }

    // MTU
    //if (l4c_ps_get_eqos_req(MBCI_SRC, ATCI_NEG_QOS, &eqos_list) == KAL_TRUE)
    if (l4ctcm_get_eqos_info(ATCI_NEG_QOS, &eqos_list) == KAL_TRUE)
    {
        for (i=0; i<eqos_list.length; i++)
        {
            if ((eqos_list.qos_info[i].context_id == cid))
            {
                kal_uint16 sdu_size;

                l4ctcm_decode_sdu_size((kal_uint16)eqos_list.qos_info[i].max_sdu_size, &sdu_size);

                if (p->IPv4Mtu == 0)
                {
                    p->IPv4Mtu = sdu_size;
                }

                if (p->IPv6Mtu == 0)
                {
                    p->IPv6Mtu = sdu_size;
                }
                break;
            }
        }    
    }

    // DNS
    if (l4ctcm_get_config_option_info(&option_list) == KAL_TRUE)
    {
        for (i = 0; i < TCM_TOT_EXT_CONTEXT; i++)
        {
            if (option_list.config_option_info[i].context_id == cid)
            {
                if (p->IPv4DnsServerCount == 0)
                {
                    p->IPv4ConfigurationAvaliable |= 0x04; // bit2
                    p->IPv4DnsServerCount += 1;
                    mbci_infBuff_cpy((kal_uint8*)p, p->IPv4DnsServerOffset, IPV4_ADDR_LEN, (void*)(option_list.config_option_info[i].pri_dns)); // IPv4 DNS
                }

                if (p->IPv6DnsServerCount == 0)
                {
                    if (option_list.config_option_info[i].ipv6_dns1_present == KAL_TRUE)
                    {
                        p->IPv6ConfigurationAvaliable |= 0x04;
                        p->IPv6DnsServerCount += 1;
                        mbci_infBuff_cpy((kal_uint8*)p, p->IPv6DnsServerOffset, IPV6_ADDR_LEN, (void*)(option_list.config_option_info[i].ipv6_dns1)); // IPv6 DNSs
                    }
                }
                break;
            }
        }
    }


    if (p->IPv4AddressCount > 0)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "IPv4 addr: %d.%d.%d.%d", 
            ipv4_element.IPv4Address.IPv4Address[0], 
            ipv4_element.IPv4Address.IPv4Address[1], 
            ipv4_element.IPv4Address.IPv4Address[2], 
            ipv4_element.IPv4Address.IPv4Address[3]);
    }

    if (p->IPv6AddressCount > 0)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "IPv6 addr: %x %x:%x %x:%x %x:%x %x:%x %x:%x %x:%x %x:%x %x", 
            ipv6_element.IPv6Address.IPv6Address[0], 
            ipv6_element.IPv6Address.IPv6Address[1], 
            ipv6_element.IPv6Address.IPv6Address[2], 
            ipv6_element.IPv6Address.IPv6Address[3],
            ipv6_element.IPv6Address.IPv6Address[4], 
            ipv6_element.IPv6Address.IPv6Address[5], 
            ipv6_element.IPv6Address.IPv6Address[6], 
            ipv6_element.IPv6Address.IPv6Address[7],
            ipv6_element.IPv6Address.IPv6Address[8], 
            ipv6_element.IPv6Address.IPv6Address[9], 
            ipv6_element.IPv6Address.IPv6Address[10], 
            ipv6_element.IPv6Address.IPv6Address[11],
            ipv6_element.IPv6Address.IPv6Address[12], 
            ipv6_element.IPv6Address.IPv6Address[13], 
            ipv6_element.IPv6Address.IPv6Address[14],
            ipv6_element.IPv6Address.IPv6Address[15]);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_ip_configuration
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_ip_configuration(kal_uint8 src_id, kal_uint8 *infBuff, kal_uint32 SessionId)
{
    mbim_ip_configuration_struct *p = (mbim_ip_configuration_struct*)infBuff;
    kal_uint16 infBuffSize = sizeof(mbim_ip_configuration_struct);
    kal_uint8 primary_cid, secondary_cid;

    // Session ID shoud among 0 ~ (MaxSessions-1)
    if (SessionId >= GPRS_MAX_PDP_SUPPORT)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "Warning: SessionId:%d GPRS_MAX_PDP_SUPPORT:%d", SessionId, GPRS_MAX_PDP_SUPPORT);
        return 0;
    }

    kal_mem_set((void*)infBuff, 0, infBuffSize);    

    p->SessionId = SessionId;

    p->IPv4AddressOffset = 60;
    p->IPv6AddressOffset = 60 + 8;
    p->IPv4GatewayOffset = 60 + 8 + 20;
    p->IPv6GatewayOffset = 60 + 8 + 20 + 4;
    p->IPv4DnsServerOffset = 60 + 8 + 20 + 4 + 16;
    p->IPv6DnsServerOffset = 60 + 8 + 20 + 4 + 16 + 4;

    primary_cid = MBCI_PTR->session[SessionId].primary_cid;
    secondary_cid = MBCI_PTR->session[SessionId].secondary_cid;

    mbci_get_ip_addr_by_cid(p, primary_cid);
    mbci_get_ip_addr_by_cid(p, secondary_cid);    

    MBCI_PROMPT_TRACE(MOD_MBCI, "[IP] SessionID:%d, V4:%d, V6:%d", p->SessionId, p->IPv4ConfigurationAvaliable, p->IPv6ConfigurationAvaliable);
    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_get_sms_configuration_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint16 mbci_get_sms_configuration_info(kal_uint8 src_id, kal_uint8 *infBuff, kal_uint16 infBuffSize)
{
    mbim_sms_configuration_info_struct *p = (mbim_sms_configuration_info_struct*)infBuff;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4c_number_struct sca;
    //smsal_prefer_storage_struct mem;

    kal_mem_set((void*)infBuff, 0, infBuffSize);

    if (l4c_ptr->sms_ready_flag != KAL_TRUE)
    {
        p->SmsStorageState = MBIMSmsStorageNotInitialized;
    }
    else
    {
        p->SmsStorageState = MBIMSmsStorageInitialized;
    }

    p->Format = MBIMSmsFormatPdu;

    //l4c_sms_get_preferred_mem_req(src_id, &mem);
    //p->MaxMessages = mem.total3;
    p->MaxMessages = smsal_get_storage_info(STORAGE_TOTAL, SMSAL_MT);

    p->CdmaShortMessageSize = 0;

    l4c_sms_get_sc_addr_req(src_id, SMSAL_PROFILE_NONE, &sca);

    if (sca.length == 0)
    {
        p->ScAddressOffset = 0;
        p->ScAddressSize = 0;
    }
    else
    {
        kal_uint8 ScAddress[21];
        kal_wchar ScAddress_utf16[21];

        p->ScAddressOffset = 24;

        if(sca.type == 145) // with '+'
        {
            ScAddress[0] = '+';
            kal_mem_cpy((void*)&ScAddress[1], (void*)sca.number, 20);
        }
        else
        {
            kal_mem_cpy((void*)&ScAddress[0], (void*)sca.number, 20);
        }
        ScAddress[20] = '\0';

        p->ScAddressSize = mbci_ascii_to_utf16(ScAddress, ScAddress_utf16);

        mbci_infBuff_cpy(infBuff, p->ScAddressOffset, p->ScAddressSize, (void*)ScAddress_utf16);
        MBCI_PROMPT_TRACE(MOD_MBCI, "SMS MaxMessages:%d, ScAddress:%s", p->MaxMessages, ScAddress);
    }

    return infBuffSize;
}

/*****************************************************************************
 * FUNCTION
 *  mbci_update_loopback_mode
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_update_loopback_mode(kal_bool enter_loopback_mode)
{
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    if (enter_loopback_mode)
    {
        mbci_ptr->loopback_mode = KAL_TRUE;
        msg_send6(mbci_current_mod_id, MOD_UPS_HIGH, CMUX_SAP, MSG_ID_UPS_MBCI_LOOPBACK_START_IND, NULL, NULL);
        l4c_em_sleep_mode_req(KAL_FALSE); // Disable sleep mode for Win8 HCK loopback Throughput test
    }
    else
    {
        mbci_ptr->loopback_mode = KAL_FALSE;
        msg_send6(mbci_current_mod_id, MOD_UPS_HIGH, CMUX_SAP, MSG_ID_UPS_MBCI_LOOPBACK_STOP_IND, NULL, NULL);
        l4c_em_sleep_mode_req(KAL_TRUE);
    }
}

