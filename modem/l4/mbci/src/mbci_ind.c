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
 *   mbci_ind.c
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

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "l4c_common_enum.h"
#include "l4c_utility.h"
#include "l4c_gprs_cmd.h"
#include "smsal_l4c_enum.h"
#include "mbim_defs.h"
#include "mbci_context.h"
#include "mbci_utility.h"

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_status_update_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 * 
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_status_update_mind()
{
    kal_uint16 infBuffSize;
    kal_uint8 *infBuff = NULL;            

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    infBuff = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_subscriber_ready_info_struct) + sizeof(mbim_subscriber_ready_info_databuffer_struct));   
    infBuffSize = mbci_get_subscriber_ready_info(MBCI_SRC, infBuff, sizeof(mbim_subscriber_ready_info_struct) + sizeof(mbim_subscriber_ready_info_databuffer_struct));

    mbci_status_ind(MBIM_CID_SUBSCRIBER_READY_STATUS, MBIM_UUID_BASIC_CONNECT, infBuffSize, infBuff);
    free_ctrl_buffer(infBuff);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cphs_mmi_info_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cphs_mmi_info_mind(kal_uint8 no_msisdn, l4csmu_addr_struct *msisdn)
{
    if (no_msisdn > 2)
    {
        //DEBUG_ASSERT(0);
        no_msisdn = 2;
    }

    MBCI_PTR->no_msisdn = no_msisdn;
    kal_mem_cpy((void*)MBCI_PTR->msisdn, (void*)msisdn, sizeof(l4csmu_addr_struct)*no_msisdn);

    l4c_sim_status_update_mind();
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_cfun_state_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_cfun_state_mind()
{
    mbim_radio_state_info_struct ind;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    ind.HwRadioState = MBIMRadioOn; // HW state Always be On

    if (l4c_get_cfun_state() != 1)
    {
        ind.SwRadioState = MBIMRadioOff;
    }
    else
    {
        ind.SwRadioState = MBIMRadioOn;
    }

    mbci_status_ind(MBIM_CID_RADIO_STATE, MBIM_UUID_BASIC_CONNECT, sizeof(ind), (kal_uint8*)&ind);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_reg_state_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_reg_state_mind(kal_uint8 gsm_state, kal_uint8 gprs_state, kal_uint32 cause)
{
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    mbci_ptr->NwError = cause;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    // CS registration state
    if (mbci_ptr->gsm_state != gsm_state)
    {
        infBuff = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_registration_state_info_struct) + 64);  // 64 byte reserve for ProviderId and ProviderName
        infBuffSize = mbci_get_registration_state_info(MBCI_SRC, (kal_uint8*)infBuff);
        mbci_status_ind(MBIM_CID_REGISTER_STATE, MBIM_UUID_BASIC_CONNECT, infBuffSize, infBuff);
        free_ctrl_buffer(infBuff);
    }

    // PS packet service state
    if (mbci_ptr->gprs_state != gprs_state)
    {
        infBuff = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_packet_service_info_struct));
        infBuffSize = mbci_get_packet_service_info(MBCI_SRC, (kal_uint8*)infBuff);
        mbci_status_ind(MBIM_CID_PACKET_SERVICE, MBIM_UUID_BASIC_CONNECT, infBuffSize, infBuff);
        free_ctrl_buffer(infBuff);
    }

    mbci_ptr->gsm_state = gsm_state;
    mbci_ptr->gprs_state = gprs_state;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_rx_level_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_rx_level_mind(kal_uint8 Rssi, kal_uint8 ErrorRate)
{
    mbim_signal_state_info_struct ind;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    //MBCI_PROMPT_TRACE(MOD_MBCI, "mbci_ptr->Rssi:%d , new Rssi:%d, diff:%d", mbci_ptr->Rssi, Rssi, MBCI_ABS(mbci_ptr->Rssi - Rssi));
    //MBCI_PROMPT_TRACE(MOD_MBCI, "mbci_ptr->ErrorRate:%d , new ErrorRate:%d, diff:%d", mbci_ptr->ErrorRate, ErrorRate, MBCI_ABS(mbci_ptr->ErrorRate - ErrorRate));

    //if (mbci_ptr->SignalStrengthInterval == 0 && mbci_ptr->RssiThreshold == 0 && mbci_ptr->ErrorRateThreshold == 0)
    if (MBCI_PTR->SignalStrengthDisable == KAL_TRUE)
    {
        MBCI_PROMPT_TRACE(MOD_MBCI, "RSSI Disable");
        return;
    }

    if ((MBCI_ABS(mbci_ptr->Rssi - Rssi) >= mbci_ptr->RssiThreshold)
        || (MBCI_ABS(mbci_ptr->ErrorRate - ErrorRate) >= mbci_ptr->ErrorRateThreshold))
    {
        mbci_ptr->Rssi = Rssi;
        mbci_ptr->ErrorRate = ErrorRate;

        mbci_get_signal_state_info(MBCI_SRC, (kal_uint8*)&ind);
        MBCI_PROMPT_TRACE(MOD_MBCI, "Rssi:%d , ErrorRate:%d", ind.Rssi, ind.ErrorRate);
        mbci_status_ind(MBIM_CID_SIGNAL_STATE, MBIM_UUID_BASIC_CONNECT, sizeof(ind), (kal_uint8*)&ind);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_gprs_event_report_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_gprs_event_report_mind(kal_uint8 event_id, kal_uint8 src_id, kal_uint8 context_id)
{
    mbim_connect_info_struct ind;
    kal_uint32 SessionId = 0;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    if (event_id == ME_PDN_ACT_EVENT && src_id != L4C_SRC)
    {
        if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
        {
            mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
            mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);

            SessionId = param->SessionId;

            MBCI_PROMPT_TRACE(MOD_MBCI, "PDP Activate SessionId:%d, cid:%d", SessionId, context_id);

            if (mbci_ptr->session[SessionId].primary_cid == INVALID_PDP_CONTEXT_ID)
            {
                mbci_ptr->session[SessionId].primary_cid = context_id;
            }
            else if (mbci_ptr->session[SessionId].secondary_cid == INVALID_PDP_CONTEXT_ID)
            {
                mbci_ptr->session[SessionId].secondary_cid = context_id;
            }
            else
            {
                DEBUG_ASSERT(0);
            }
        }
        else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            if (mbci_ptr->session[SessionId].primary_cid == INVALID_PDP_CONTEXT_ID)
            {
                mbci_ptr->session[SessionId].primary_cid = context_id;
            }
            else if (mbci_ptr->session[SessionId].secondary_cid == INVALID_PDP_CONTEXT_ID)
            {
                mbci_ptr->session[SessionId].secondary_cid = context_id;
            }

            mbci_get_connect_info(MBCI_SRC, (kal_uint8*)&ind, SessionId);
            mbci_status_ind(MBIM_CID_CONNECT, MBIM_UUID_BASIC_CONNECT, sizeof(ind), (kal_uint8*)&ind);
            return;
        }
        
        l4c_ps_exe_enter_data_state_req(src_id, TCM_UPS_L2P, context_id, SessionId+1);
    }
    else if (event_id == NW_DETACH_EVENT
            || event_id == ME_DETACH_EVENT
            || event_id == NW_CONTEXT_DEACT_EVENT
            || event_id == ME_CONTEXT_DEACT_EVENT)
    {
        kal_uint8 i; 

        for (i=0; i<GPRS_MAX_PDP_SUPPORT; i++)
        {
            if (mbci_ptr->session[i].primary_cid == context_id)
            {
                mbci_ptr->session[i].primary_cid = INVALID_PDP_CONTEXT_ID;
                SessionId = i;
            }

            if (mbci_ptr->session[i].secondary_cid == context_id)
            {
                mbci_ptr->session[i].secondary_cid = INVALID_PDP_CONTEXT_ID;
                SessionId = i;
            }
        }

        MBCI_PROMPT_TRACE(MOD_MBCI, "PDP Deactivate SessionId:%d, cid:%d", SessionId, context_id);
    }

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    // Indicate Status only sent for unsolicited indication
    if (src_id == L4C_SRC)
    {
        mbci_get_connect_info(MBCI_SRC, (kal_uint8*)&ind, SessionId);
        mbci_status_ind(MBIM_CID_CONNECT, MBIM_UUID_BASIC_CONNECT, sizeof(ind), (kal_uint8*)&ind);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_gprs_status_update_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_gprs_status_update_mind()
{
    mbim_packet_service_info_struct ind;
    kal_uint16 infBuffSize = 0;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    infBuffSize = mbci_get_packet_service_info(MBCI_SRC, (kal_uint8*)&ind);
    mbci_status_ind(MBIM_CID_PACKET_SERVICE, MBIM_UUID_BASIC_CONNECT, infBuffSize, (kal_uint8*)&ind);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_ready_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_ready_mind()
{
    mbim_sms_configuration_info_struct ind;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    mbci_get_sms_configuration_info(MBCI_SRC, (kal_uint8*)&ind, sizeof(ind));
    mbci_status_ind(MBIM_CID_SMS_CONFIGURATION, MBIM_UUID_SMS, sizeof(ind), (kal_uint8*)&ind);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_new_msg_index_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_new_msg_index_mind(kal_uint16 index)
{
    mbim_sms_status_info_struct ind;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    ind.Flag = MBIM_SMS_FLAG_NEW_MESSAGE;
    ind.MessageIndex = index + 1;

    MBCI_PROMPT_TRACE(MOD_MBCI, "New SMS idx: %d", ind.MessageIndex);
    mbci_status_ind(MBIM_CID_SMS_MESSAGE_STORE_STATUS, MBIM_UUID_SMS, sizeof(ind), (kal_uint8*)&ind);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_mem_full_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_mem_full_mind(kal_uint8 type)
{
    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    if (type == SMSAL_MEM_FULL_NORMAL)
    {
        mbim_sms_status_info_struct ind;
        ind.Flag = MBIM_SMS_FLAG_MESSAGE_STORE_FULL;
        ind.MessageIndex = 0;

        mbci_status_ind(MBIM_CID_SMS_MESSAGE_STORE_STATUS, MBIM_UUID_SMS, sizeof(ind), (kal_uint8*)&ind);    
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_new_msg_pdu_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_new_msg_pdu_mind(kal_uint8 mti, void *data, kal_uint16 packed_peer_buff_len)
{
    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    if (mti == SMSAL_MTI_DELIVER)
    {
        kal_uint16 infBuffSize = 0;
        kal_uint8 *infBuff = NULL;
        mbim_sms_read_info_struct ind;
        MBIM_OL_PAIR_LIST SmsRefList;
        mbim_sms_pdu_record_struct pdu;

        infBuffSize = sizeof(ind) + sizeof(SmsRefList) + sizeof(pdu);
        infBuff = (kal_uint8*)get_ctrl_buffer(infBuffSize);

        ind.Format = MBIMSmsFormatPdu;
        ind.ElementCount = 1;

        SmsRefList.offset = sizeof(ind);
        SmsRefList.size = sizeof(pdu);

        pdu.MessageIndex = MBIM_MESSAGE_INDEX_NONE;
        pdu.MessageStatus = MBIMSmsStatusNew;
        pdu.PduDataOffset = 16;

        if (packed_peer_buff_len <= 183)
        {
            pdu.PduDataSize = packed_peer_buff_len;
        }
        else
        {
            DEBUG_ASSERT(0);
            pdu.PduDataSize = 183;
        }
        
        kal_mem_cpy((void*)pdu.DataBuffer, data, pdu.PduDataSize);

        // Copy to infBuff
        mbci_infBuff_cpy(infBuff, 0, sizeof(ind), (void*)&ind);
        mbci_infBuff_cpy(infBuff, sizeof(ind), sizeof(SmsRefList), (void*)&SmsRefList); 
        mbci_infBuff_cpy(infBuff, sizeof(ind) + sizeof(SmsRefList), sizeof(pdu), (void*)&pdu);         

        mbci_status_ind(MBIM_CID_SMS_READ, MBIM_UUID_SMS, infBuffSize, infBuff);
        free_ctrl_buffer(infBuff);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ss_ussd_mind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_ussd_mind(kal_uint8 dcs, mbim_ussd_response_enum response, kal_uint8 *ussd_string, kal_uint8 ussd_string_length)
{
    mbim_ussd_info_struct ind;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        return;
    }

    ind.USSDResponse = response;
    ind.USSDSessionState = MBIMUSSDNewSession;
    ind.USSDDataCodingScheme = dcs;
    ind.USSDPayloadOffset = 20;
    ind.USSDPayloadLength = ussd_string_length;

    if (ussd_string != NULL && ussd_string_length != 0)
    {
        kal_mem_cpy((void*)ind.DataBuffer, (void*)ussd_string, ussd_string_length);
    }

    mbci_status_ind(MBIM_CID_USSD, MBIM_UUID_USSD, sizeof(ind), (kal_uint8*)&ind);
}



