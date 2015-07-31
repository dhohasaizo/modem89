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
 *   mbci_cmd.c
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

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

#include "ps_public_enum.h"
#include "ps_em_enum.h"
#include "sim_public_enum.h"
#include "sim_ps_api.h"
#include "mbim_defs.h"
#include "mbci_init.h"
#include "mbci_struct.h"
#include "mbci_context.h"
#include "mbci_utility.h"
#include "mbci_trc.h"

#include "l4c_context.h"
#include "l4c_nw_cmd.h"
#include "l4c_eq_cmd.h"
#include "l4c_sim_cmd.h"
#include "l4c_gprs_cmd.h"
#include "l4c_sms_cmd.h"
#include "l4c_ciss_cmd.h"
#include "l4c_utility.h"
#include "device.h"
#include "rmmi_context.h"
#include "rmmi_utility.h"
#include "mmi_l3_enums.h"

#include "smsal_context.h"
#include "smsal_enums.h"
#include "smsal_l4c_enum.h"
#include "customer_ps_inc.h"
#include "l4c2tcm_func.h"

extern smsal_context_struct     *smsal_ptr_g;

extern MBCI_CID_FUNCTION const *mbci_cid_func_dispatch[MBIM_UUID_MAX];

extern kal_bool is_chv1_enabled();

extern kal_bool rmmi_translate_oper_name(
                    kal_uint8 format1,
                    kal_uint8 *oper_str1,
                    kal_uint8 format2,
                    kal_uint8 *oper_str2);

/*****************************************************************************
 * FUNCTION
 *  mbci_null_func
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_null_function(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_uuid_basic_connect_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_device_cap(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbim_device_caps_info_struct rsp;
            kal_uint16 infBuffSize = sizeof(rsp);
            kal_uint8 *infBuff = NULL;
            kal_uint8 imei[30], sw_id[30], hw_id[30];
            kal_wchar imei_str[30], sw_id_str[30], hw_id_str[30];

            rsp.DeviceType = 2;   // MBIMDeviceTypeRemovable
            rsp.CellularClass = MBIMCellularClassGsm;
            rsp.VoiceClass = 3;  // MBIMVoiceClassSimultaneousVoiceData
            rsp.SimClass = 2;    // MBIMSimClassSimRemovable
            rsp.DataClass = MBIMDataClassNone
                            #ifdef __PS_SERVICE__
                                | MBIMDataClassGPRS
                            #endif
                            #ifdef __EGPRS_MODE__
                                | MBIMDataClassEDGE
                            #endif
                            #ifdef __UMTS_RAT__
                                | MBIMDataClassUMTS
                            #endif
                            #ifdef __HSDPA_SUPPORT__
                                | MBIMDataClassHSDPA
                            #endif
                            #ifdef __HSUPA_SUPPORT__
                                | MBIMDataClassHSUPA
                            #endif
                                ;
            rsp.SmsCaps = 0x01 | 0x02; //  PDU Receive and Send
            rsp.ControlCaps = 0x01;  // Allow manual network selection
            rsp.MaxSessions = GPRS_MAX_PDP_SUPPORT;

            rsp.CustomDataClassOffset = 0; // Not Support
            rsp.CustomDataClassSize = 0;

            // IMEI, AT+CGSN, MAX:15
            rsp.DeviceIdOffset = infBuffSize;
            l4c_eq_get_equip_id_req(trans_ptr->src_id, 
                                    (mbci_current_mod_id == MOD_MBCI)? EQ_ME_SERIAL_NUMBER_ID:EQ_ME_SERIAL_NUMBER_SIM2_ID, 
                                    (kal_uint8*)imei);
            rsp.DeviceIdSize = mbci_ascii_to_utf16(imei, (kal_wchar*)imei_str);
            infBuffSize += MBCI_ALIGN_4(rsp.DeviceIdSize);
            MBCI_PROMPT_TRACE(MOD_MBCI, "DeviceIdSize:%d, align:%d, infBuffSize:%d", rsp.DeviceIdSize, MBCI_ALIGN_4(rsp.DeviceIdSize), infBuffSize);

            // SW version, AT+CGMR, MAX:30
            rsp.FirmwareInfoOffset = infBuffSize;
            l4c_eq_get_equip_id_req(trans_ptr->src_id, EQ_ME_REVISION_ID, (kal_uint8*) sw_id);
            rsp.FirmwareInfoSize = mbci_ascii_to_utf16(sw_id, (kal_wchar*)sw_id_str);
            infBuffSize += MBCI_ALIGN_4(rsp.FirmwareInfoSize);
            MBCI_PROMPT_TRACE(MOD_MBCI, "FirmwareInfoSize:%d, align:%d, infBuffSize:%d", rsp.FirmwareInfoSize, MBCI_ALIGN_4(rsp.FirmwareInfoSize), infBuffSize);

            // HW version, AT+CGMM, MAX:30
            rsp.HardwareInfoOffset = infBuffSize;
            l4c_eq_get_equip_id_req(trans_ptr->src_id, EQ_ME_MODEL_ID, (kal_uint8*) hw_id);
            rsp.HardwareInfoSize = mbci_ascii_to_utf16(hw_id, (kal_wchar*)hw_id_str);
            infBuffSize += MBCI_ALIGN_4(rsp.HardwareInfoSize);
            MBCI_PROMPT_TRACE(MOD_MBCI, "HardwareInfoSize:%d, align:%d, infBuffSize:%d", rsp.HardwareInfoSize, MBCI_ALIGN_4(rsp.HardwareInfoSize), infBuffSize);

            // Prepare CID response structure
            infBuff = (kal_uint8*)get_ctrl_buffer(infBuffSize);
            kal_mem_set(infBuff, 0x00, infBuffSize);

            // Copy Fixed field
            mbci_infBuff_cpy(infBuff, 0, sizeof(rsp), (void*)&rsp); 

            // Copy Variable field
            mbci_infBuff_cpy(infBuff, rsp.DeviceIdOffset, rsp.DeviceIdSize, imei_str);
            MBCI_PROMPT_TRACE(MOD_MBCI, "DeviceId: %s, DeviceIdSize:%d", imei, rsp.DeviceIdSize);

            mbci_infBuff_cpy(infBuff, rsp.FirmwareInfoOffset, rsp.FirmwareInfoSize, sw_id_str);
            MBCI_PROMPT_TRACE(MOD_MBCI, "sw_id: %s, FirmwareInfoSize:%d", sw_id, rsp.FirmwareInfoSize);

            mbci_infBuff_cpy(infBuff, rsp.HardwareInfoOffset, rsp.HardwareInfoSize, hw_id_str);
            MBCI_PROMPT_TRACE(MOD_MBCI, "hw_id: %s, HardwareInfoSize:%d", hw_id, rsp.HardwareInfoSize);

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
            free_ctrl_buffer(infBuff);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_subscriber_ready_status
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_subscriber_ready_status(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            kal_uint16 infBuffSize;
            kal_uint8 *infBuff = NULL;            
            kal_uint16 total_size = sizeof(mbim_subscriber_ready_info_struct) + sizeof(mbim_subscriber_ready_info_databuffer_struct);

            // Prepare CID response structure
            infBuff = (kal_uint8*)get_ctrl_buffer(total_size);
            infBuffSize = mbci_get_subscriber_ready_info(trans_ptr->src_id, infBuff, total_size);

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
            free_ctrl_buffer(infBuff);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_radio_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_radio_state(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;
    mbim_set_radio_state_struct *req = (mbim_set_radio_state_struct*)cid_strcut_ptr;
    mbim_radio_state_info_struct rsp;

    rsp.HwRadioState = 1; // HW state Always be On
    
    if (l4c_get_cfun_state() != 1)
    {
        rsp.SwRadioState = MBIMRadioOff;
    }
    else
    {
        rsp.SwRadioState = MBIMRadioOn;
    }

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            MBCI_PROMPT_TRACE(MOD_MBCI, "[Query] RadioState:%d", rsp.SwRadioState);
            status = MBIM_STATUS_SUCCESS;
            break;
        }
        case MBIM_COMMAND_SET:
        {
            kal_uint8 cfun;

            if (req->RadioState == MBIMRadioOn)
            {
                cfun = 1;
            }
            else
            {
                cfun = 4;
            }

            MBCI_PROMPT_TRACE(MOD_MBCI, "[Set] RadioState:%d -> %d", rsp.SwRadioState, req->RadioState);            

            if (cfun == l4c_get_cfun_state())
            {
                status = MBIM_STATUS_SUCCESS;
                break;
            }
            else if (l4c_nw_cfun_state_req(trans_ptr->src_id, cfun) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_BUSY;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_pin
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_pin(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_set_pin_struct *inf = (mbim_set_pin_struct*)cid_strcut_ptr;
    mbim_pin_info_struct p;
    mbim_status_code_enum status;

    status = mbci_get_pin_info(trans_ptr->src_id, &p);

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
            break;
        }
        case MBIM_COMMAND_SET:
        {
            kal_wchar Pin_UTF16[16], NewPin_UTF16[16];
            kal_uint8 Pin[17], NewPin[17];
            kal_bool ret_val = KAL_TRUE;

            mbci_parse_infBuff((kal_uint8*)inf, inf->PinOffset, inf->PinSize, Pin_UTF16, sizeof(kal_wchar)*16);
            mbci_utf16_to_ascii(Pin_UTF16, Pin, sizeof(kal_uint8)*17);

            mbci_parse_infBuff((kal_uint8*)inf, inf->NewPinOffset, inf->NewPinSize, NewPin_UTF16, sizeof(kal_wchar)*16);
            mbci_utf16_to_ascii(NewPin_UTF16, NewPin, sizeof(kal_uint8)*17);

            kal_brief_trace(TRACE_INFO, MBCI_PIN, inf->PinType, inf->PinOperation);
            MBCI_PROMPT_TRACE(MOD_MBCI, "PIN:%s newPIN:%s", Pin, NewPin);

            if (rmmi_is_number_string(Pin) != KAL_TRUE)
            {
                status = MBIM_STATUS_FAILURE;
                break;
            }

            switch(inf->PinOperation)
            {
                case MBIMPinOperationEnter:
                {
                    ret_val = l4c_smu_exe_verify_pin_req(trans_ptr->src_id, TYPE_UNSPECIFIED, (kal_uint8*)Pin, (kal_uint8*)NewPin);

                    if (ret_val == KAL_TRUE)
                    {
                        return;
                    }

                    ret_val = l4c_smu_exe_change_password_req(trans_ptr->src_id, TYPE_CHV1, Pin, Pin, Pin);

                    if (ret_val == KAL_TRUE)
                    {
                        return;
                    }
                    
                    status = MBIM_STATUS_FAILURE;
                    break;
                }
                case MBIMPinOperationEnable:
                case MBIMPinOperationDisable:
                {
                    sim_security_operation_enum mode;

                    // Not allow change PIN before PIN verfied
                    if (status != MBIM_STATUS_SUCCESS && status != MBIM_STATUS_BUSY) 
                    {
                        // Warning: Here is a workaround for Win8 HCK Pin test,
                        // It should not allow disable PIN when status is SIM_BUSY
                        break;
                    }
                    else if (p.PinType == MBIMPinTypePin1 || p.PinType == MBIMPinTypePuk1)
                    {
                        status = MBIM_STATUS_PIN_REQUIRED;
                        break;
                    }

                    if (inf->PinOperation == 1)
                    {
                        mode = ENABLE;
                    }
                    else
                    {
                        mode = DISABLE;
                    }

                    if (inf->PinType == MBIMPinTypePin1)
                    {
                        ret_val = l4c_smu_exe_lock_req(trans_ptr->src_id, mode, TYPE_CHV1, (kal_uint8*)Pin);

                        if (ret_val == KAL_TRUE)
                        {
                            return;
                        }

                        status = MBIM_STATUS_FAILURE;
                    }
                    else
                    {
                        status = MBIM_STATUS_NO_DEVICE_SUPPORT;
                    }
                    break;
                }
                case MBIMPinOperationChange:
                {
                    kal_uint8 type = 0;

                    // Not allow change PIN before PIN verfied
                    if (status != MBIM_STATUS_SUCCESS)
                    {
                        break;
                    }
                    else if (p.PinType == MBIMPinTypePin1 || p.PinType == MBIMPinTypePuk1)
                    {
                        status = MBIM_STATUS_PIN_REQUIRED;
                        break;
                    }
                    else if (is_chv1_enabled() != KAL_TRUE)
                    {
                        status = MBIM_STATUS_PIN_DISABLED;
                        break;
                    }

                    if (rmmi_is_number_string(NewPin)!=KAL_TRUE || strlen((char*)NewPin)<4 || strlen((char*)NewPin)>8)
                    {
                        status = MBIM_STATUS_FAILURE;
                        break;
                    }

                    if (inf->PinType == MBIMPinTypePin1)
                    {
                        type = TYPE_CHV1;
                    }
                    else if (inf->PinType == MBIMPinTypePin2)
                    {
                        type = TYPE_CHV2;
                    }
                    else
                    {
                        ret_val = KAL_FALSE;
                        status = MBIM_STATUS_NO_DEVICE_SUPPORT;
                        break;
                    }

                    ret_val = l4c_smu_exe_change_password_req(trans_ptr->src_id, type, Pin, NewPin, NewPin);

                    if (ret_val == KAL_TRUE)
                    {
                        return;
                    }
                    else
                    {
                        status = MBIM_STATUS_FAILURE;
                    }

                    break;
                }
                default:
                    break;
            }

            mbci_command_trans_rsp(ret_val, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }

}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_pin_list
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_pin_list(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_pin_list_info_struct p;
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    kal_bool ret_val = KAL_TRUE;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                status = MBIM_STATUS_SIM_NOT_INSERTED;
                break;                
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                status = MBIM_STATUS_BAD_SIM;
                break;   
            }

            // PIN1
            if (is_chv1_enabled() == KAL_TRUE)
            {
                p.PinDescPin1.PinMode = MBIMPinModeEnable;
            }
            else
            {
                p.PinDescPin1.PinMode = MBIMPinModeDisable;
            }
            
            p.PinDescPin1.PinFormat = MBIMPinFormatNumeric;
            p.PinDescPin1.PinLengthMax = 8;
            p.PinDescPin1.PinLengthMin = 4;

            // PIN2
            p.PinDescPin2.PinMode = MBIMPinModeDisable;
            p.PinDescPin2.PinFormat = MBIMPinFormatNumeric;
            p.PinDescPin2.PinLengthMax = 8;
            p.PinDescPin2.PinLengthMin = 4;

            // DeviceSimPin
            p.PinDescDeviceSimPin.PinMode = MBIMPinModeNotSupported;
            p.PinDescDeviceSimPin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescDeviceSimPin.PinLengthMax = 16;
            p.PinDescDeviceSimPin.PinLengthMin = 8;

            // DeviceFirstSimPin
            p.PinDescDeviceFirstSimPin.PinMode = MBIMPinModeNotSupported;
            p.PinDescDeviceFirstSimPin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescDeviceFirstSimPin.PinLengthMax = 16;
            p.PinDescDeviceFirstSimPin.PinLengthMin = 8;

            // NetworkPin
            p.PinDescNetworkPin.PinMode = MBIMPinModeEnable;
            p.PinDescNetworkPin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescNetworkPin.PinLengthMax = 16;
            p.PinDescNetworkPin.PinLengthMin = 8;

            // NetworkSubsetPin
            p.PinDescNetworkSubsetPin.PinMode = MBIMPinModeEnable;
            p.PinDescNetworkSubsetPin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescNetworkSubsetPin.PinLengthMax = 16;
            p.PinDescNetworkSubsetPin.PinLengthMin = 8;

            // ServiceProviderPin
            p.PinDescServiceProviderPin.PinMode = MBIMPinModeEnable;
            p.PinDescServiceProviderPin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescServiceProviderPin.PinLengthMax = 16;
            p.PinDescServiceProviderPin.PinLengthMin = 8;

            // CorporatePin
            p.PinDescCorporatePin.PinMode = MBIMPinModeEnable;
            p.PinDescCorporatePin.PinFormat = MBIMPinFormatNumeric;
            p.PinDescCorporatePin.PinLengthMax = 16;
            p.PinDescCorporatePin.PinLengthMin = 8;

            // SubsidyLock
            p.PinDescSubsidyLock.PinMode = MBIMPinModeEnable;
            p.PinDescSubsidyLock.PinFormat = MBIMPinFormatNumeric;
            p.PinDescSubsidyLock.PinLengthMax = 16;
            p.PinDescSubsidyLock.PinLengthMin = 8;

            // Custom
            p.PinDescCustom.PinMode = MBIMPinModeNotSupported;
            p.PinDescCustom.PinFormat = MBIMPinFormatNumeric;
            p.PinDescCustom.PinLengthMax = 16;
            p.PinDescCustom.PinLengthMin = 8;

            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(ret_val, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_home_provider
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_home_provider(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 mcc_mnc[7], oper_name[20];

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                mbci_command_trans_rsp(ret_val, MBIM_STATUS_SIM_NOT_INSERTED, trans_ptr, 0, NULL);
                break;
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                mbci_command_trans_rsp(ret_val, MBIM_STATUS_BAD_SIM, trans_ptr, 0, NULL);
                break;
            }

            mbci_get_home_provider(mcc_mnc);

            infBuffSize = sizeof(mbim_provider_struct) + 64;
            // 64 byte reserved for DataBuffer

            // Prepare CID response structure
            infBuff = (kal_uint8*)get_ctrl_buffer(infBuffSize);
            kal_mem_set(infBuff, 0x00, infBuffSize);            

            rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, mcc_mnc, RMMI_PLMN_LONG_ALPHA, oper_name);

            mbci_pack_provider(0,
                        infBuff,
                        mcc_mnc,
                        MBIM_PROVIDER_STATE_HOME,
                        oper_name,
                        MBIMCellularClassGsm, 0, 0);
         
            mbci_command_trans_rsp(ret_val, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
            free_ctrl_buffer(infBuff);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_preferred_provider
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_preferred_provider(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            kal_uint32 ElementCount = 0;

            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SIM_NOT_INSERTED, trans_ptr, 0, NULL);
                break;
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_BAD_SIM, trans_ptr, 0, NULL);
                break;
            }

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(ElementCount), (kal_uint8*)&ElementCount);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_visible_provider
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_visible_provider(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
//    mbim_visible_providers_req_struct *in = (mbim_visible_providers_req_struct*)cid_strcut_ptr;
    kal_bool ret_val = KAL_TRUE;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                status = MBIM_STATUS_SIM_NOT_INSERTED;
                break;                
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                status = MBIM_STATUS_BAD_SIM;
                break;   
            }

            if (l4c_get_cfun_state() != 1)
            {
                status = MBIM_STATUS_RADIO_POWER_OFF;
                break;
            }

            if (check_pdp_context_exist_func())
            {
                status = MBIM_STATUS_BUSY;
                break;
            }

            if (l4c_nw_get_plmn_list_req(trans_ptr->src_id) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_READ_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(ret_val, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_register_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_register_state(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_set_registration_state_struct *inf = (mbim_set_registration_state_struct*)cid_strcut_ptr;
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            infBuff = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_registration_state_info_struct) + 64);
            // 64 byte reserve for ProviderId and ProviderName

            infBuffSize = mbci_get_registration_state_info(trans_ptr->src_id, (kal_uint8*)infBuff);

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
            free_ctrl_buffer(infBuff);
            return;
        }
        case MBIM_COMMAND_SET:
        {
            kal_wchar oper_utf16[6];
            kal_uint8 mode;
            kal_uint8 prefer_rat = 0;

            if (inf->RegisterAction == MBIMRegisterActionAutomatic)
            {
                mode = AUTO_SELECT;
            }
            else if (inf->RegisterAction == MBIMRegisterActionManual)
            {
                mode = MANUAL_SEL;

                if (inf->ProviderIdSize > 0)
                {
                    mbci_parse_infBuff((kal_uint8*)inf, inf->ProviderIdOffset, inf->ProviderIdSize, oper_utf16, sizeof(kal_wchar)*6);
                    mbci_utf16_to_ascii(oper_utf16, MBCI_PTR->request_oper, sizeof(kal_uint8)*7);
                    MBCI_PROMPT_TRACE(MOD_MBCI, "Manual select: %s", MBCI_PTR->request_oper);
                }
            }
            else
            {
                status = MBIM_STATUS_INVALID_PARAMETERS;
                break;
            }

            kal_brief_trace(TRACE_INFO, MBCI_SET_REGISTER, inf->RegisterAction, inf->DataClass);

            if (check_pdp_context_exist_func())
            {
                status = MBIM_STATUS_BUSY;
                break;
            }

            if (l4c_nw_set_sel_mode_req(trans_ptr->src_id, (mode==AUTO_SELECT)? AUTOMATIC_MODE:MANUAL_MODE) == KAL_TRUE)
            {
                if (l4c_nw_exe_cops_req(trans_ptr->src_id, mode, MBCI_PTR->request_oper, L4C_RAT_NONE, 0xFFFF, prefer_rat) == KAL_TRUE)
                {
                    return;
                }
            }
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_packet_service
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_packet_service(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_set_packet_service_struct *inf = (mbim_set_packet_service_struct*)cid_strcut_ptr;
    kal_uint8 *infBuff = NULL;
    kal_uint16 infBuffSize = 0;
    mbim_packet_service_info_struct rsp;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            infBuffSize = mbci_get_packet_service_info(trans_ptr->src_id, (kal_uint8*)&rsp);
            infBuff = (kal_uint8*)&rsp;
            status = MBIM_STATUS_SUCCESS;
            break;
        }
        case MBIM_COMMAND_SET:
        {
            kal_uint8 opcode;

            if (l4c_get_cfun_state() != 1)
            {
                status = MBIM_STATUS_RADIO_POWER_OFF;
                break;
            }

            if (inf->PacketServiceAction == MBIMPacketServiceActionAttach)
            {
                opcode = RAC_ATTACH;
            }
            else
            {
                opcode = RAC_DETACH;
            }

            if (l4c_nw_exe_att_req(trans_ptr->src_id, RAC_PS, opcode, KAL_FALSE) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_BUSY;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, infBuff);
}


/*****************************************************************************
 * FUNCTION
 *  mbci_cid_signal_state
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_signal_state(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_set_signal_state_struct *req = (mbim_set_signal_state_struct*)cid_strcut_ptr;
    mbim_signal_state_info_struct rsp;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbci_get_signal_state_info(trans_ptr->src_id, (kal_uint8*)&rsp);
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
            break;
        }
        case MBIM_COMMAND_SET:
        {
            MBCI_PROMPT_TRACE(MOD_MBCI, "[Set Signal] Interval:%u RssiThreshold:%u ErrorRateThreshold:%u", req->SignalStrengthInterval, req->RssiThreshold, req->ErrorRateThreshold);

            mbci_ptr->SignalStrengthDisable = KAL_FALSE;

            if (req->SignalStrengthInterval == MBIM_RSSI_DISABLE)
            {
                mbci_ptr->SignalStrengthDisable = KAL_TRUE;
            }
            else if (req->SignalStrengthInterval != MBIM_RSSI_DEFAULT)
            {
                mbci_ptr->SignalStrengthInterval = req->SignalStrengthInterval;
            }
            else
            {
                mbci_ptr->SignalStrengthInterval = 30; // Set to default
            }

            mbci_ptr->RssiThreshold = req->RssiThreshold;
            mbci_ptr->ErrorRateThreshold = req->ErrorRateThreshold;

            mbci_get_signal_state_info(trans_ptr->src_id, (kal_uint8*)&rsp);
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_connect
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_connect(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbim_connect_info_struct rsp;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbim_connect_info_struct *req = (mbim_connect_info_struct*)cid_strcut_ptr;

            MBCI_PROMPT_TRACE(MOD_MBCI, "[Query] SessionId:%d", req->SessionId);

            if (mbci_ptr->loopback_mode)
            {
                rsp.SessionId = mbci_ptr->loopback_SessionId;
                rsp.ActivationState = MBIMActivationStateActivated;
                rsp.VoiceCallState = MBIMVoiceCallStateNone;
                rsp.IPType = mbci_ptr->loopback_IPType;
                kal_mem_cpy(rsp.ContextType, mbci_ptr->loopback_ContextType, 16);
                rsp.NwError = 0;

                infBuffSize = sizeof(mbim_connect_info_struct);
            }
            else
            {
                infBuffSize = mbci_get_connect_info(trans_ptr->src_id, (kal_uint8*)&rsp, req->SessionId);
            }

            status = MBIM_STATUS_SUCCESS;
            infBuff = (kal_uint8*)&rsp;
            break;
        }
        case MBIM_COMMAND_SET:
        {
            mbim_set_connect_struct *req = (mbim_set_connect_struct*)cid_strcut_ptr;
            kal_wchar AccessString_utf16[100],UserName_utf16[255],Password_utf16[255];
            kal_uint8 AccessString[100];
            l4c_prim_pdp_info_struct pdp;

            kal_brief_trace(TRACE_INFO, MBCI_CONNECT_INFO, req->SessionId, req->ActivationCommand, req->IPType);

            // Session ID shoud among 0 ~ (MaxSessions-1)
            if (req->SessionId >= GPRS_MAX_PDP_SUPPORT)
            {
                status = MBIM_STATUS_FAILURE;
                MBCI_PROMPT_TRACE(MOD_MBCI, "Warning: SessionId:%d GPRS_MAX_PDP_SUPPORT:%d", req->SessionId, GPRS_MAX_PDP_SUPPORT);
                break;
            }

            if (req->ActivationCommand == MBIMActivationCommandDeactivate)
            {
                if (mbci_ptr->loopback_mode)
                {
                    if (req->SessionId != mbci_ptr->loopback_SessionId)
                    {
                        status = MBIM_STATUS_CONTEXT_NOT_ACTIVATED;
                    }
                    else
                    {
                        mbci_update_loopback_mode(KAL_FALSE);

                        rsp.SessionId = mbci_ptr->loopback_SessionId;
                        rsp.ActivationState = MBIMActivationStateDeactivated;
                        rsp.VoiceCallState = MBIMVoiceCallStateNone;
                        rsp.IPType = mbci_ptr->loopback_IPType;
                        kal_mem_cpy(rsp.ContextType, mbci_ptr->loopback_ContextType, 16);
                        rsp.NwError = 0;
                        
                        infBuffSize = sizeof(mbim_connect_info_struct);
                        status = MBIM_STATUS_SUCCESS;
                        infBuff = (kal_uint8*)&rsp;
                    }

                    break;
                }

                if (mbci_ptr->session[req->SessionId].primary_cid != INVALID_PDP_CONTEXT_ID)
                {
                    pdp.context_id = mbci_ptr->session[req->SessionId].primary_cid;
                }
                else if (mbci_ptr->session[req->SessionId].secondary_cid != INVALID_PDP_CONTEXT_ID)
                {
                    pdp.context_id = mbci_ptr->session[req->SessionId].secondary_cid;
                }
                else
                {
                    status = MBIM_STATUS_CONTEXT_NOT_ACTIVATED;
                    break;
                }

                if (l4c_ps_exe_act_req(trans_ptr->src_id, TCM_PDP_DEACTIVATE, pdp.context_id) == KAL_TRUE)
                {
                    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)get_ctrl_buffer(sizeof(mbci_set_connect_param_struct));

                    // Store set parameter
                    param->SessionId = req->SessionId;

                    trans_ptr->parameter = (void*)param;
                    return;
                }
            }
            else
            {
                // If PPP dialup has connected, not allow connect MBIM
                if (l4c_ps_dialup_check_existence(MBCI_CURRENT_SIM) == KAL_TRUE)
                {
                    status = MBIM_STATUS_FAILURE;
                    break;
                }

                // APN
                if (req->AccessStringSize > 0)
                {
                    mbci_parse_infBuff((kal_uint8*)req, req->AccessStringOffset, req->AccessStringSize, AccessString_utf16, sizeof(kal_wchar)*100);
                    pdp.apn_length = mbci_utf16_to_ascii(AccessString_utf16, AccessString, sizeof(kal_uint8)*100);
                }
                else
                {
                    AccessString[0] = '\0';
                    pdp.apn_length = 0;
                }

                kal_mem_set((void*)pdp.apn, 0x00, MAX_APN_LEN);

                if (pdp.apn_length > 0)
                {
                    kal_mem_cpy((void*)pdp.apn, (void*)AccessString, pdp.apn_length);
                }

                MBCI_PROMPT_TRACE(MOD_MBCI, "APN: %s", AccessString);

                // Enter loopback mode
                if (strcmp((char *)AccessString, "loopback") == 0)
                {
                    mbci_update_loopback_mode(KAL_TRUE);

                    mbci_ptr->loopback_SessionId = req->SessionId;
                    mbci_ptr->loopback_IPType = req->IPType;
                    kal_mem_cpy(mbci_ptr->loopback_ContextType, (void*)req->ContextType, 16);

                    rsp.SessionId = mbci_ptr->loopback_SessionId;
                    rsp.ActivationState = MBIMActivationStateActivated;
                    rsp.VoiceCallState = MBIMVoiceCallStateNone;
                    rsp.IPType = mbci_ptr->loopback_IPType;
                    kal_mem_cpy(rsp.ContextType, mbci_ptr->loopback_ContextType, 16);
                    rsp.NwError = 0;

                    infBuffSize = sizeof(mbim_connect_info_struct);
                    status = MBIM_STATUS_SUCCESS;
                    infBuff = (kal_uint8*)&rsp;
                    break;
                }

                if (mbci_ptr->loopback_mode)
                {
                    status = MBIM_STATUS_MAX_ACTIVATED_CONTEXTS;
                    break;
                }

                // Get avaliable context id
                pdp.context_id = mbci_get_available_pdp_cid();

                if (l4c_get_cfun_state() != 1)
                {
                    status = MBIM_STATUS_RADIO_POWER_OFF;
                    break;
                }

                if (mbci_ptr->gsm_state != REG_STATE_REGISTERED)
                {
                    status = MBIM_STATUS_NOT_REGISTERED;
                    break;
                }

                if (mbci_ptr->gprs_state != REG_STATE_REGISTERED)
                {
                    status = MBIM_STATUS_PACKET_SERVICE_DETACHED;
                    break;
                }

                if ((mbci_ptr->session[req->SessionId].primary_cid != INVALID_PDP_CONTEXT_ID) 
                    || (mbci_ptr->session[req->SessionId].secondary_cid != INVALID_PDP_CONTEXT_ID))
                {
                    infBuffSize = mbci_get_connect_info(trans_ptr->src_id, (kal_uint8*)&rsp, req->SessionId);
                    status = MBIM_STATUS_SUCCESS;
                    infBuff = (kal_uint8*)&rsp;
                    break;
                }

                if (pdp.context_id == INVALID_PDP_CONTEXT_ID)
                {
                    status = MBIM_STATUS_MAX_ACTIVATED_CONTEXTS;
                    break;
                }

                if (req->AccessStringOffset != 0 && req->AccessStringSize == 0)
                {
                    status = MBIM_STATUS_INVALID_ACCESS_STRING;
                    break;
                }

                mbci_ptr->session[req->SessionId].primary_cid = INVALID_PDP_CONTEXT_ID;
                mbci_ptr->session[req->SessionId].secondary_cid= INVALID_PDP_CONTEXT_ID;

                switch(req->IPType)
                {
                    case MBIMContextIPTypeIPv4:
                        pdp.pdp_type = IPV4_ADDR_TYPE;
                        break;
                    case MBIMContextIPTypeIPv6:
                        pdp.pdp_type = IPV6_ADDR_TYPE;
                        break;
                    case MBIMContextIPTypeDefault:
                    case MBIMContextIPTypeIPv4v6:
                    case MBIMContextIPTypeIPIPv4AndIPv6:
                        pdp.pdp_type = IPV4V6_ADDR_TYPE;
                        break;
                }

                pdp.pdp_addr_len = NULL_PDP_ADDR_LEN;
                pdp.dcomp_algo = 0;
                pdp.hcomp_algo = 0;
                pdp.ipv4addralloc = 0;

                if (req->AuthProtocol >= MBIMAuthProtocolMsChapV2)
                {
                    status = MBIM_STATUS_NO_DEVICE_SUPPORT;
                    break;
                }

                if (l4c_ps_set_definition_req(trans_ptr->src_id, &pdp) == KAL_TRUE)
                {
                    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)get_ctrl_buffer(sizeof(mbci_set_connect_param_struct));

                    // Store set parameter
                    param->context_id = pdp.context_id;
                    param->SessionId = req->SessionId;

                    if (req->AuthProtocol == MBIMAuthProtocolPap)
                    {
                        param->AuthProtocol = SM_GPRS_AUTHENTICATION_PAP;
                    }
                    else if (req->AuthProtocol == MBIMAuthProtocolChap)
                    {
                        param->AuthProtocol = SM_GPRS_AUTHENTICATION_CHAP;
                    }
                    else
                    {
                        param->AuthProtocol = SM_GPRS_AUTHENTICATION_NONE;
                    }

                    if (req->UserNameSize > 0)
                    {
                        mbci_parse_infBuff((kal_uint8*)req, req->UserNameOffset, req->UserNameSize, UserName_utf16, sizeof(kal_wchar)*255);
                        mbci_utf16_to_ascii(UserName_utf16, param->UserName, sizeof(kal_uint8)*255);
                    }
                    else
                    {
                        param->UserName[0] = '\0';
                    }

                    if (req->PasswordSize > 0)
                    {
                        mbci_parse_infBuff((kal_uint8*)req, req->PasswordOffset, req->PasswordSize, Password_utf16, sizeof(kal_wchar)*255);
                        mbci_utf16_to_ascii(Password_utf16, param->Password, sizeof(kal_uint8)*255);
                    }
                    else
                    {
                        param->Password[0] = '\0';
                    }


                    MBCI_PROMPT_TRACE(MOD_MBCI, "Username:%s Password:%s", param->UserName, param->Password);
                    trans_ptr->parameter = (void*)param;
                    return;
                }

            }
            
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, infBuff);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_provisioned_contexts
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_provisioned_contexts(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            kal_uint32 count;
            kal_uint16 infBuffSize = 0;
            kal_uint8 *p;

            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SIM_NOT_INSERTED, trans_ptr, 0, NULL);
                break;
            }

            count = mbci_query_provisioned_context_num();
            p = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_provisioned_contexts_info_struct)+sizeof(mbim_context_struct)*count);
            infBuffSize = mbci_get_provisioned_context_info(trans_ptr->src_id, p, count);

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, p);
            free_ctrl_buffer(p);
            break;
        }
        case MBIM_COMMAND_SET:
        {
            mbim_set_provisioned_context_struct *inf = (mbim_set_provisioned_context_struct*)cid_strcut_ptr;
            kal_wchar AccessString_utf16[100], UserName_utf16[255], Password_utf16[255], ProvdierId_utf16[6];
            kal_uint8 AccessString[100], UserName[255], Password[255], ProvdierId[6];
            kal_uint32 ContextId;
            mbim_context_type_enum context_type;

            ContextId = inf->ContextId;
            
            if (ContextId == MBIM_CONTEXT_ID_APPEND)
            {
                ContextId = mbci_get_available_provisioned_context_id();
            }

            MBCI_PROMPT_TRACE(MOD_MBCI,"[Set] prov cntxt id: %d", ContextId);

            // ContextID only support 1~10
            if (ContextId == 0 || ContextId > NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL)
            {
                mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_WRITE_FAILURE, trans_ptr, 0, NULL);
                return;
            }

            context_type = mbci_context_type_str_to_id(inf->ContextType);

            // APN            
            if (inf->AccssStringSize > 0)
            {
                mbci_parse_infBuff((kal_uint8*)inf, inf->AccssStringOffset, inf->AccssStringSize, AccessString_utf16, sizeof(kal_wchar)*100);
                mbci_utf16_to_ascii(AccessString_utf16, AccessString, sizeof(kal_uint8)*100);
            }
            else
            {
                AccessString[0] = '\0';
            }

            // UserName
            if (inf->UserNameSize > 0)
            {
                mbci_parse_infBuff((kal_uint8*)inf, inf->UserNmeOffset, inf->UserNameSize, UserName_utf16, sizeof(kal_wchar)*255);
                mbci_utf16_to_ascii(UserName_utf16, UserName, sizeof(kal_uint8)*255);
            }
            else
            {
                UserName[0] = '\0';
            }

            // Password
            if (inf->PasswordSize > 0)
            {
                mbci_parse_infBuff((kal_uint8*)inf, inf->PasswordOffset, inf->PasswordSize, Password_utf16, sizeof(kal_wchar)*255);
                mbci_utf16_to_ascii(Password_utf16, Password, sizeof(kal_uint8)*255);
            }
            else
            {
                Password[0] = '\0';
            }

            // PLMN id
            if (inf->ProviderIdSize > 0)
            {
                mbci_parse_infBuff((kal_uint8*)inf, inf->ProviderIdOffset, inf->ProviderIdSize, ProvdierId_utf16, sizeof(kal_wchar)*6);
                mbci_utf16_to_ascii(ProvdierId_utf16, ProvdierId, sizeof(kal_uint8)*6);
            }
            else
            {
                ProvdierId[0] = '\0';
            }

            MBCI_PROMPT_TRACE(MOD_MBCI,"[Set] prov cntxt: %d %d %s %s %s", ContextId, context_type, AccessString, UserName, Password);
            MBCI_PROMPT_TRACE(MOD_MBCI,"[Set] prov cntxt: %d %d %s", inf->Compression, inf->AuthProtocol, ProvdierId);

            if (l4c_ps_set_provision_context_req(trans_ptr->src_id,
                                            ContextId,
                                            ContextId,
                                            context_type,
                                            AccessString,
                                            UserName,
                                            Password,
                                            inf->Compression,
                                            inf->AuthProtocol,
                                            ProvdierId, 
                                            1) == KAL_TRUE)
            {
                return;
            }

            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_WRITE_FAILURE, trans_ptr, 0, NULL);
            break;
        }
        default:
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
            break;
    }   
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_ip_configuration
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_ip_configuration(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbim_ip_configuration_struct rsp;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbim_ip_configuration_struct *req = (mbim_ip_configuration_struct*)cid_strcut_ptr;

            if (MBCI_PTR->loopback_mode)
            {
                kal_mem_set((void*)&rsp, 0x00, sizeof(rsp));
                rsp.SessionId = req->SessionId;
                //rsp.IPv4ConfigurationAvaliable = 0x08;
                //rsp.IPv6ConfigurationAvaliable = 0x08;
                //rsp.IPv4Mtu = 1500;
                //rsp.IPv6Mtu = 1500;

                infBuffSize = sizeof(rsp);
                status = MBIM_STATUS_SUCCESS;
                infBuff = (kal_uint8*)&rsp;
                break;
            }

            infBuffSize = mbci_get_ip_configuration(trans_ptr->src_id, (kal_uint8*)&rsp, req->SessionId);

            status = MBIM_STATUS_SUCCESS;
            infBuff = (kal_uint8*)&rsp;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, infBuff);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_device_service
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_device_service(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    mbim_device_service_info_struct rsp;
    MBIM_OL_PAIR_LIST *RefList;
    mbim_device_service_element_struct *ds;
    kal_uint32 i,j;
    kal_uint8 uuid_max = MBIM_UUID_MAX;
//    kal_uint8 uuid_max = 2;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            kal_mem_set((void*)&rsp, 0x00, sizeof(rsp));

            rsp.DeviceServiceCount = uuid_max;
            rsp.MaxDssSessions = 0;

            for (i=MBIM_UUID_BASIC_CONNECT; i<uuid_max; i++)
            {
                kal_uint32 max_cid = 0;

                RefList = &(rsp.DeviceServiceRefList[i]);
                ds = &(rsp.DeviceService[i]);

                RefList->offset = 4 + 4 + sizeof(MBIM_OL_PAIR_LIST)*uuid_max + sizeof(mbim_device_service_element_struct)*i;
                RefList->size = sizeof(mbim_device_service_element_struct);

                kal_mem_cpy((void*)(ds->DeviceServiceId), (void*)mbci_uuid_id_to_str((mbim_uuid_enum)i), 16);
                ds->DssPayload = 0;
                ds->MaxDssInstances = 0;
                ds->CidCount = 0;

                max_cid = mbci_get_max_cid_by_uuid(i);

                for (j=1; j<max_cid; j++)
                {
                    if (mbci_cid_func_dispatch[i][j] != MBCI_NULL_FUNC)
                    {
                        ds->Cid[ds->CidCount] = j;
                        ds->CidCount++;
                    }
                }

                MBCI_PROMPT_TRACE(MOD_MBCI,"UUID:%d, CidCount:%d, CidMAX:%d", i, ds->CidCount, max_cid);
            }

            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_device_service_subscribe_list
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_device_service_subscribe_list(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_device_service_subscribe_list_struct *inf = (mbim_device_service_subscribe_list_struct*)cid_strcut_ptr;
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 i,j;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_SET:
        {
            MBIM_OL_PAIR_LIST *DeviceServiceSubscribeRefList = (MBIM_OL_PAIR_LIST*)(cid_strcut_ptr + 4);//inf->DeviceServiceSubscribeRefList;
            mbim_event_entry_struct *event_entry;

            for (i=0; i<inf->ElementCount; i++)
            {
                mbim_uuid_enum uuid;
                kal_uint32 *cid;
                kal_uint32 max_cid;

                event_entry = (mbim_event_entry_struct*)(cid_strcut_ptr + DeviceServiceSubscribeRefList[i].offset);
                uuid = mbci_uuid_str_to_id(event_entry->DeviceServiceId);

                if (uuid == MBIM_UUID_UNKNOW)
                {
                    continue;
                }

                if (event_entry->CidCount == 0)
                {
                    kal_mem_set((void*)(mbci_ptr->device_service_subscribe_list[uuid]), 0x01, MBIM_CID_BASIC_CONNECT_MAX);
                }
                else
                {
                    kal_mem_set((void*)&(mbci_ptr->device_service_subscribe_list[uuid]), 0x00, MBIM_CID_BASIC_CONNECT_MAX);

                    max_cid = mbci_get_max_cid_by_uuid(uuid);

                    for (j=0; j<event_entry->CidCount; j++)
                    {
                        cid = (kal_uint32*)((kal_uint8*)event_entry + 20);

                        if (cid[j] < max_cid)
                        {
                            mbci_ptr->device_service_subscribe_list[uuid][cid[j]] = 1;
                        }
                    }
                }
            }
            break;
        }
        default:
            break;
    }

    for (i=MBIM_UUID_BASIC_CONNECT; i<MBIM_UUID_MAX; i++)
    {
        kal_uint32 max_cid = mbci_get_max_cid_by_uuid(i);

        for (j=1; j<max_cid ;j++)
        {
            if (mbci_ptr->device_service_subscribe_list[i][j] >= 1)
            {
                MBCI_PROMPT_TRACE(MOD_MBCI, "Subscribe [UUID]:%d [CID]:%d", i, j);
            }
        }
    }

    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, cid_strcut_len, cid_strcut_ptr);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_packet_statistic
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_packet_statistic(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    // This CID should be handle by UPS
    DEBUG_ASSERT(0);
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_packet_filters
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_packet_filters(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    // This CID should be handle by UPS
    DEBUG_ASSERT(0);
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_network_idle_hint
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_network_idle_hint(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    mbim_network_idle_hint_struct *inf = (mbim_network_idle_hint_struct*)cid_strcut_ptr;
    mbim_network_idle_hint_struct p;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            break;
        }
        case MBIM_COMMAND_SET:
        {
            if (inf->NetworkIdleHintState == MBIMNetworkIdleHintDisabled)
            {
                L4C_COMM_PTR->ps_conf_test_profile |= GENERAL_BIT_FOR_DISABLE_SCRI_AND_FD;
            }
            else
            {
                L4C_COMM_PTR->ps_conf_test_profile &= (~GENERAL_BIT_FOR_DISABLE_SCRI_AND_FD);
            }

            break;
        }
        default:
            break;
    }

    if (L4C_COMM_PTR->ps_conf_test_profile & GENERAL_BIT_FOR_DISABLE_SCRI_AND_FD)
    {
        p.NetworkIdleHintState = MBIMNetworkIdleHintDisabled;
    }
    else
    {
        p.NetworkIdleHintState = MBIMNetworkIdleHintEnable;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_emergency_mode
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_emergency_mode(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    mbim_emergency_mode_info_struct rsp;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            rsp.EmergencyMode = MBIMEmergencyModeOff;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_multicarrier_providers
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_multicarrier_providers(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
}

MBCI_CID_FUNCTION const mbci_cid_basic_connect_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_DEVICE_CAPS, mbci_cid_device_cap),
    MBCI_CID_FUNC(MBIM_CID_SUBSCRIBER_READY_STATUS, mbci_cid_subscriber_ready_status),
    MBCI_CID_FUNC(MBIM_CID_RADIO_STATE, mbci_cid_radio_state),
    MBCI_CID_FUNC(MBIM_CID_PIN, mbci_cid_pin),
    MBCI_CID_FUNC(MBIM_CID_PIN_LIST, mbci_cid_pin_list),        
    MBCI_CID_FUNC(MBIM_CID_HOME_PROVIDER, mbci_cid_home_provider),
    MBCI_CID_FUNC(MBIM_CID_PREFERRED_PROVIDER, mbci_cid_preferred_provider),
    MBCI_CID_FUNC(MBIM_CID_VISIBLE_PROVIDER, mbci_cid_visible_provider),        
    MBCI_CID_FUNC(MBIM_CID_REGISTER_STATE, mbci_cid_register_state),
    MBCI_CID_FUNC(MBIM_CID_PACKET_SERVICE, mbci_cid_packet_service),
    MBCI_CID_FUNC(MBIM_CID_SIGNAL_STATE, mbci_cid_signal_state),        
    MBCI_CID_FUNC(MBIM_CID_CONNECT, mbci_cid_connect),
    MBCI_CID_FUNC(MBIM_CID_PROVISIONED_CONTEXTS, mbci_cid_provisioned_contexts),
    MBCI_CID_FUNC(MBIM_CID_SEVICE_ACTIVATION, MBCI_NULL_FUNC),        
    MBCI_CID_FUNC(MBIM_CID_IP_CONFIGURATION, mbci_cid_ip_configuration),
    MBCI_CID_FUNC(MBIM_CID_DEVICE_SERVICE, mbci_cid_device_service),
    MBCI_CID_FUNC(MBIM_CID_RESERVE_17, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_RESERVE_18, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_DEVICE_SERVICE_SUBSCRIBE_LIST, mbci_cid_device_service_subscribe_list),
    MBCI_CID_FUNC(MBIM_CID_PACKET_STATISTIC, mbci_cid_packet_statistic),   // UPS handle this 
    MBCI_CID_FUNC(MBIM_CID_NETWORK_IDLE_HINT, mbci_cid_network_idle_hint),
    MBCI_CID_FUNC(MBIM_CID_EMERGENCY_MODE, mbci_cid_emergency_mode),
    MBCI_CID_FUNC(MBIM_CID_IP_PACKET_FILTERS, mbci_cid_packet_filters),
    MBCI_CID_FUNC(MBIM_CID_MULTICARRIER_PROVIDERS, mbci_cid_multicarrier_providers),
};


/*****************************************************************************
 * FUNCTION
 *  mbci_cid_sms_configuration
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
void mbci_cid_sms_configuration(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbim_set_sms_configuration_struct *inf = (mbim_set_sms_configuration_struct*)cid_strcut_ptr;
    mbim_sms_configuration_info_struct rsp;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                status = MBIM_STATUS_SIM_NOT_INSERTED;
                break;
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                status = MBIM_STATUS_BAD_SIM;
                break;
            }

            infBuffSize = mbci_get_sms_configuration_info(trans_ptr->src_id, (kal_uint8*)&rsp, sizeof(rsp));
            infBuff = (kal_uint8*)&rsp;
            status = MBIM_STATUS_SUCCESS;
            break;
        }
        case MBIM_COMMAND_SET:
        {
            l4c_number_struct sca;
            kal_wchar ScAddress_utf16[21];
            kal_uint8 temp_num[21];
            kal_uint8 len;

            l4c_sms_set_msg_ind_mode_req(trans_ptr->src_id, 3, 1, 2, 1); // Temp for DTM test, force set to PDU mode for MT SMS  
            l4c_sms_set_msg_format_req(trans_ptr->src_id, SMSAL_PDU_MODE); // Temp for DTM test, force set to PDU mode for MT SMS

            if (inf->Format != MBIMSmsFormatPdu)
            {
                status = MBIM_STATUS_SMS_FORMAT_NOT_SUPPORTED;
                break;
            }

            if (inf->ScAddressOffset != 0 && inf->ScAddressSize != 0)
            {
                mbci_parse_infBuff((kal_uint8*)inf, inf->ScAddressOffset, inf->ScAddressSize, (void*)ScAddress_utf16, sizeof(kal_wchar)*21);
                mbci_utf16_to_ascii(ScAddress_utf16, sca.number, sizeof(kal_uint8)*MAX_CC_ADDR_LEN);

                sca.type = 129; // 0x81

                if (sca.number[0] == '+')
                {
                    len = strlen((char*)sca.number);
                    kal_mem_cpy((kal_uint8*) temp_num, (kal_uint8*) & sca.number[1], len - 1);
                    kal_mem_cpy((kal_uint8*) sca.number, (kal_uint8*) temp_num, len - 1);
                    sca.number[len - 1] = 0;
                    sca.type = 145; // 0x91
                }

                if (!(rmmi_is_number_string(sca.number)))
                {
                    status = MBIM_STATUS_SMS_UNKNOWN_SMSC_ADDRESS;
                    break;
                }
                sca.length = strlen((char*)sca.number);

                // Update ScAddress
                l4c_sms_set_rmmi_sc_addr_req(trans_ptr->src_id, sca);
            }

            l4c_sms_exe_save_settings_req(trans_ptr->src_id, SMSAL_PROFILE_1);

            return;
            //infBuffSize = mbci_get_sms_configuration_info(trans_ptr->src_id, (kal_uint8*)&rsp, sizeof(rsp));
            //infBuff = (kal_uint8*)&rsp;
            //status = MBIM_STATUS_SUCCESS;
            //break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, infBuff);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_sms_read
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_sms_read(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            mbim_sms_read_req_struct *p = (mbim_sms_read_req_struct*)cid_strcut_ptr;
            kal_uint16 index = p->MessageIndex - 1;

            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                status = MBIM_STATUS_SIM_NOT_INSERTED;
                break;                
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                status = MBIM_STATUS_BAD_SIM;
                break;   
            }

            if (p->SmsFormat != MBIMSmsFormatPdu)
            {
                status = MBIM_STATUS_SMS_FORMAT_NOT_SUPPORTED;
                break;
            }

            if (p->Flag == MBIMSmsFlagIndex)
            {
                mbim_sms_configuration_info_struct info;

                mbci_get_sms_configuration_info(trans_ptr->src_id, (kal_uint8*)&info, sizeof(info));

                MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS idx: %d", p->MessageIndex);

                if (p->MessageIndex > info.MaxMessages)
                {
                    status = MBIM_STATUS_INVALID_MEMORY_INDEX;
                    break;
                }

                if (l4c_sms_exe_read_msg_req(trans_ptr->src_id, index, KAL_TRUE) == KAL_TRUE)
                {
                    return;
                }
            }
            else
            {
                smsal_status_enum sms_flag;
                kal_uint8 sms_status;
                kal_uint32 ElementCount = 0;
                kal_uint32 i;

                switch (p->Flag)
                {
                    case MBIMSmsFlagAll:
                        sms_flag = SMSAL_ALL;
                        sms_status = SMSAL_STATUS_ALL;
                        MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS all");
                        break;
                    case MBIMSmsFlagNew:
                        sms_flag = SMSAL_REC_UNREAD;
                        sms_status = SMSAL_STATUS_UNREAD;
                        MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS new");
                        break;
                    case MBIMSmsFlagOld:
                        sms_flag = SMSAL_REC_READ;
                        sms_status = SMSAL_STATUS_READ;
                        MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS old");
                        break;
                    case MBIMSmsFlagSent:
                        sms_flag = SMSAL_STO_SENT;
                        sms_status = SMSAL_STATUS_SENT;
                        MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS sent");
                        break;
                    case MBIMSmsFlagDraft:
                        sms_flag = SMSAL_STO_UNSENT;
                        sms_status = SMSAL_STATUS_UNSENT;
                        MBCI_PROMPT_TRACE(MOD_MBCI, "Read SMS draft/unsent");
                        break;
                    default:
                        sms_flag = SMSAL_ALL;
                        sms_status = SMSAL_STATUS_ALL;
                        break;
                }

                // Always read SM+ME message
                smsal_ptr_g->sms_parameter.rmi.prefer_mem1 = SMSAL_MT;
                smsal_ptr_g->sms_parameter.rmi.prefer_mem2 = SMSAL_MT;
                smsal_ptr_g->sms_parameter.rmi.prefer_mem3 = SMSAL_MT;

                for (i=0; i<CM_SMS_MAX_MSG_NUM; i++)
                {
                    if (sms_flag == SMSAL_ALL)
                    {
                        if ((smsal_ptr_g->message_box[i].state == SMSAL_MB_ENTRY_VALID ))
                            //&& (smsal_ptr_g->message_box[i].storage_type == smsal_ptr_g->sms_parameter.rmi.prefer_mem1))
                        {
                            ElementCount++;
                        }
                    }
                    else if ((smsal_ptr_g->message_box[i].status == sms_status) 
                            && (smsal_ptr_g->message_box[i].state == SMSAL_MB_ENTRY_VALID))
                            //&& (smsal_ptr_g->message_box[i].storage_type == smsal_ptr_g->sms_parameter.rmi.prefer_mem1))
                    {
                        ElementCount++;
                    }
                }

                if (ElementCount == 0)
                {
                    mbim_sms_read_info_struct rsp;

                    rsp.Format = MBIMSmsFormatPdu;
                    rsp.ElementCount = 0;
                    MBCI_PROMPT_TRACE(MOD_MBCI, "Read %d SMS", rsp.ElementCount);
                    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
                    return;
                }

                if (l4c_sms_exe_read_msg_list_req(trans_ptr->src_id, KAL_TRUE, sms_flag, 0, 0) == KAL_TRUE)
                {
                    kal_uint16 infBuffSize;
                    mbim_sms_read_info_struct *p;
                    MBIM_OL_PAIR_LIST *SmsRefList;
                    kal_uint32 i;

                    infBuffSize = sizeof(mbim_sms_read_info_struct) + 
                        (sizeof(MBIM_OL_PAIR_LIST) + sizeof(mbim_sms_pdu_record_struct))*ElementCount;

                    // The buffer will be free when release transaction
                    trans_ptr->parameter = (void*)get_ctrl_buffer(infBuffSize);


                    p = (mbim_sms_read_info_struct*)trans_ptr->parameter;
                    p->Format = MBIMSmsFormatPdu;
                    p->ElementCount = 0; // Will be added when read from l4csmsal

                    for (i=0; i < ElementCount; i++)
                    {
                        SmsRefList = (MBIM_OL_PAIR_LIST*)((kal_uint8*)(trans_ptr->parameter) + sizeof(mbim_sms_read_info_struct) + sizeof(MBIM_OL_PAIR_LIST)*i);
                        SmsRefList->offset = sizeof(mbim_sms_read_info_struct) + sizeof(MBIM_OL_PAIR_LIST)*(ElementCount) + sizeof(mbim_sms_pdu_record_struct)*i;
                        SmsRefList->size = sizeof(mbim_sms_pdu_record_struct);
                    }

                    MBCI_PROMPT_TRACE(MOD_MBCI, "Going to Read %d SMS", ElementCount);
                    return;
                }
            }

            status = MBIM_STATUS_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_sms_send
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_sms_send(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_SET:
        {
            mbim_sms_send_struct *p = (mbim_sms_send_struct*)cid_strcut_ptr;
            mbim_sms_send_pdu_struct *pdu_p = (mbim_sms_send_pdu_struct*)(cid_strcut_ptr + 4);
            kal_uint8 *pdu;
            kal_uint16 length;

            if (l4c_get_cfun_state() != 1)
            {
                status = MBIM_STATUS_RADIO_POWER_OFF;
                break;
            }

            if (p->SmsFormat != MBIMSmsFormatPdu)
            {
                status = MBIM_STATUS_SMS_FORMAT_NOT_SUPPORTED;
                break;
            }

            l4c_sms_set_msg_ind_mode_req(trans_ptr->src_id, 3, 1, 2, 1); // Temp for DTM test, force set to PDU mode for MT SMS  
            l4c_sms_set_msg_format_req(trans_ptr->src_id, SMSAL_PDU_MODE); // Temp for DTM test, force set to PDU mode for MT SMS
            smsal_ptr_g->sms_parameter.rmi.prefer_mem1 = SMSAL_MT;
            smsal_ptr_g->sms_parameter.rmi.prefer_mem2 = SMSAL_MT;
            smsal_ptr_g->sms_parameter.rmi.prefer_mem3 = SMSAL_MT;

            //pdu = (kal_uint8*)(pdu_p + (pdu_p->PduDataOffset));
            pdu = (kal_uint8*)(cid_strcut_ptr + 12);
            length = pdu_p->PduDataSize;

            if (l4c_sms_exe_post_pdu_req(trans_ptr->src_id, SMSAL_INVALID_INDEX, 0, trans_ptr->src_id, 0, 0, length, pdu) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_sms_delete
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_sms_delete(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_SET:
        {
            mbim_set_sms_delete_struct *p = (mbim_set_sms_delete_struct*)cid_strcut_ptr;
            kal_uint16 index = p->MessageIndex - 1;
            kal_uint8 del_flag;

            smsal_ptr_g->sms_parameter.rmi.prefer_mem1 = SMSAL_MT;
            smsal_ptr_g->sms_parameter.rmi.prefer_mem2 = SMSAL_MT;
            smsal_ptr_g->sms_parameter.rmi.prefer_mem3 = SMSAL_MT;

            if (p->Flag == MBIMSmsFlagIndex)
            {
                del_flag = 0;
                MBCI_PROMPT_TRACE(MOD_MBCI, "Delete SMS idx: %d", p->MessageIndex);
            }
            else if (p->Flag == MBIMSmsFlagOld)
            {
                del_flag = 1;
                MBCI_PROMPT_TRACE(MOD_MBCI, "Delete SMS old idx: %d", p->MessageIndex);
            }
            else if (p->Flag == MBIMSmsFlagAll)
            {
                del_flag = 4;
                MBCI_PROMPT_TRACE(MOD_MBCI, "Delete SMS all");
            }
            else
            {
                status = MBIM_STATUS_FILTER_NOT_SUPPORTED;
                break;
            }

            if (l4c_sms_exe_delete_msg_req(trans_ptr->src_id, del_flag, index, NULL) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_message_store_status
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_message_store_status(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_QUERY:
        {
            if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateSimNotInserted)
            {
                status = MBIM_STATUS_SIM_NOT_INSERTED;
                break;                
            }
            else if (mbci_get_subscriber_ready_state() == MBIMSubscriberReadyStateBadSim)
            {
                status = MBIM_STATUS_BAD_SIM;
                break;   
            }

            if (l4c_sms_exe_read_msg_list_req(trans_ptr->src_id, KAL_TRUE, SMSAL_REC_UNREAD, 0, 0) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

MBCI_CID_FUNCTION const mbci_cid_sms_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_SMS_CONFIGURATION, mbci_cid_sms_configuration),
    MBCI_CID_FUNC(MBIM_CID_SMS_READ, mbci_cid_sms_read),
    MBCI_CID_FUNC(MBIM_CID_SMS_SEND, mbci_cid_sms_send),
    MBCI_CID_FUNC(MBIM_CID_SMS_DELETE, mbci_cid_sms_delete),
    MBCI_CID_FUNC(MBIM_CID_SMS_MESSAGE_STORE_STATUS, mbci_cid_message_store_status),
};

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_ussd_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_ussd_hdlr(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    switch (trans_ptr->command_type)
    {
        case MBIM_COMMAND_SET:
        {
            mbim_set_ussd_struct *inf = (mbim_set_ussd_struct*)cid_strcut_ptr;

            if (mbci_ptr->gsm_state != REG_STATE_REGISTERED)
            {
                status = MBIM_STATUS_NOT_REGISTERED;
                break;
            }

            if (l4c_ss_exe_ussd_req_ext(trans_ptr->src_id, 
                                        inf->USSDAction, 
                                        (kal_uint8*)(cid_strcut_ptr + inf->USSDPayloadOffset), 
                                        inf->USSDDataCodingScheme, 
                                        inf->USSDPayloadLength) == KAL_TRUE)
            {
                return;
            }

            status = MBIM_STATUS_FAILURE;
            break;
        }
        default:
            break;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}


MBCI_CID_FUNCTION const mbci_cid_ussd_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_USSD, mbci_cid_ussd_hdlr),
};


MBCI_CID_FUNCTION const mbci_cid_phonebook_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_PHONEBOOK_CONFIGURATION, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_PHONEBOOK_READ, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_PHONEBOOK_DELETE, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_PHONEBOOK_WRITE, MBCI_NULL_FUNC),
};

MBCI_CID_FUNCTION const mbci_cid_stk_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_STK_PAC, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_STK_TERMINAL_RESPONSE, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_STK_ENVELOPE, MBCI_NULL_FUNC),
};

MBCI_CID_FUNCTION const mbci_cid_auth_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_AKA_AUTH, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_AKAP_AUTH, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_SIM_AUTH, MBCI_NULL_FUNC),
};

MBCI_CID_FUNCTION const mbci_cid_dss_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_DSS_CONNECT, MBCI_NULL_FUNC),
};

/*****************************************************************************
 * FUNCTION
 *  mbci_cid_ms_hostshutdown
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_ms_hostshutdown(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, 0, NULL);
}

MBCI_CID_FUNCTION const mbci_cid_ms_hostshutdown_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_MS_HOSTSHUTDOWN, mbci_cid_ms_hostshutdown),
};


/* ------------------------------------------------------------
 * CID_VENDOR_CMD is left for cutomizaiton by customer
 * Step1. Define specific type of VendorCmd for VendorCmdType
 * Step2. Define structure of VebdorCmd according to VendorCmdType
 * 
  -------------------------------------------------------------*/
/*****************************************************************************
 * FUNCTION
 *  mbci_cid_mtk_vendor_cmd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
void mbci_cid_mtk_vendor_cmd(mbci_transaction_struct *trans_ptr, kal_uint32 cid_strcut_len, kal_uint8 *cid_strcut_ptr)
{
    mbim_mtk_vendor_cmd_info_struct rsp;

    rsp.VendorCmdType = MBIM_MTK_VENDOR_CMD_TYPE_NONE;
    rsp.VendorCmdOffset = 0;
    rsp.VendorCmdSize = 0;

    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

MBCI_CID_FUNCTION const mbci_cid_mtk_vendor_cmd_ft[] = 
{
    MBCI_CID_FUNC(MBIM_CID_RESERVE_0, MBCI_NULL_FUNC),
    MBCI_CID_FUNC(MBIM_CID_MTK_VENDOR_CMD, mbci_cid_mtk_vendor_cmd),
};


/*****************************************************************************
 * FUNCTION
 *  mbci_open
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_open(kal_uint32 tid)
{
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 i,j;

    if (MBCI_PTR->state != MBCI_STATE_CLOSE)
    {
        mbci_command_rsp(KAL_FALSE, MBIM_STATUS_FAILURE, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
    }
    else
    {
        MBCI_PTR->state = MBCI_STATE_OPEN;
        mbci_command_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
    }

    // Turn on all standard INDICATE_STATUS (defined by spec)
    for (i=MBIM_UUID_BASIC_CONNECT; i<=MBIM_UUID_DSS; i++)
    {
        kal_uint32 max_cid = mbci_get_max_cid_by_uuid(i);

        for (j=1; j<max_cid; j++)
        {
            mbci_ptr->device_service_subscribe_list[i][j] = 1;
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  mbci_close
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_close(kal_uint32 tid)
{
    mbci_transaction_struct *trans_ptr;
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 i;

    if (mbci_ptr->state != MBCI_STATE_OPEN)
    {
        mbci_command_rsp(KAL_FALSE, MBIM_STATUS_FAILURE, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
        return;
    }

    if (l4c_get_cfun_state() != 1)
    {
        mbci_ptr->state = MBCI_STATE_CLOSE;
        mbci_command_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
        return;
    }

    //mbci_command_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
    //MBCI_PTR->state = MBCI_STATE_CLOSE;

    // Get a transaction 
    trans_ptr = mbci_setup_transaction(tid);

    if (trans_ptr == NULL) // No avaliable transaction
    {
        mbci_command_rsp(KAL_FALSE, MBIM_STATUS_BUSY, 0, MBIM_UUID_UNKNOW, 0, NULL, tid);
        return;
    }

    // Clear context
    mbci_init_context();

    mbci_ptr->state = MBCI_STATE_CLOSING;

    trans_ptr->op = MBIM_OP_CLOSE;
    trans_ptr->uuid = MBIM_UUID_UNKNOW;
    trans_ptr->cid = 0;

    /* -- Deactivate all Session/PDP -- */
    trans_ptr->parameter = (void*)get_ctrl_buffer(sizeof(mbci_set_connect_param_struct));

    for (i=0; i < GPRS_MAX_PDP_SUPPORT; i++)
    {
        if (mbci_deactivate_session(trans_ptr->src_id, i) == KAL_TRUE)
        {
            return;
        }
    }

    // Has deactivate all Sessions
    mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, 0, NULL);
    mbci_ptr->state = MBCI_STATE_CLOSE;
    /* -- Deactivate all Session/PDP done -- */

    /* -- Turn off Radio -- */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

}

/*****************************************************************************
 * FUNCTION
 *  mbci_error_cancel
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_error_cancel(kal_uint32 tid)
{
    kal_uint32 i;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].tid == tid)
        {
            mbci_ptr->transaction[i].op = MBIM_OP_ERROR_CANCEL;
            break;
        }
    }
}

/*****************************************************************************
 * 
 *  CID function table dispatcher
 *  
 *****************************************************************************/
MBCI_CID_FUNCTION const *mbci_cid_func_dispatch[MBIM_UUID_MAX] = 
{
    mbci_cid_basic_connect_ft,
    mbci_cid_sms_ft,
    mbci_cid_ussd_ft,
    mbci_cid_phonebook_ft,
    mbci_cid_stk_ft,
    mbci_cid_auth_ft,
    mbci_cid_dss_ft,
    mbci_cid_ms_hostshutdown_ft,
    mbci_cid_mtk_vendor_cmd_ft
};

/*****************************************************************************
 * FUNCTION
 *  mbci_command_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_command_cid_interpret(
                mbim_op_enum op,
                kal_uint8 *uuid_str,
                kal_uint32 cid,
                kal_uint32 command_type,
                kal_uint32 tid,
                kal_uint32 cid_strcut_len,
                kal_uint8 *cid_strcut_ptr)
{
    mbci_transaction_struct *trans_ptr;

    if (MBCI_PTR->state != MBCI_STATE_OPEN)
    {
        mbci_command_rsp(KAL_FALSE, MBIM_STATUS_FAILURE, cid, mbci_uuid_str_to_id(uuid_str), 0, NULL, tid);
        return;
    }

    // Get a transaction 
    trans_ptr = mbci_setup_transaction(tid);

    if (trans_ptr == NULL) // No avaliable transaction
    {
        mbci_command_rsp(KAL_FALSE, MBIM_STATUS_BUSY, cid, mbci_uuid_str_to_id(uuid_str), 0, NULL, tid);
        return;
    }

    trans_ptr->op = op;
    trans_ptr->uuid = mbci_uuid_str_to_id(uuid_str);
    trans_ptr->cid = cid;
    trans_ptr->command_type = command_type;

    // Check UUID/CID supported
    if (mbci_check_uuid_cid_supported(trans_ptr->uuid, command_type, trans_ptr->cid, trans_ptr->tid, trans_ptr->src_id) != KAL_TRUE)
    {
        mbci_command_trans_rsp(KAL_FALSE, MBIM_STATUS_NO_DEVICE_SUPPORT, trans_ptr, 0, NULL);
        return;
    }

    // Dispatch UUID/CID
    (*(mbci_cid_func_dispatch[trans_ptr->uuid][trans_ptr->cid]))(trans_ptr, cid_strcut_len, cid_strcut_ptr);

}

/*****************************************************************************
 * FUNCTION
 *  mbci_commnad_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_command_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    ups_mbci_command_req_struct *msg_ptr = (ups_mbci_command_req_struct*) local_para_ptr;

    switch (msg_ptr->op)
    {
        case MBIM_OP_OPEN:
            mbci_open(msg_ptr->transaction_id);
            break;
        case MBIM_OP_CLOSE:
            mbci_close(msg_ptr->transaction_id);
            break;
        case MBIM_OP_ERROR_CANCEL:
            mbci_error_cancel(msg_ptr->transaction_id);
            break;
        case MBIM_OP_COMMAND:
        {
            kal_uint16 pdu_len = 0;
            kal_uint8 *pdu_ptr = NULL;

            if (peer_buff_ptr != NULL)
            {
                pdu_ptr = get_peer_buff_pdu(peer_buff_ptr,&pdu_len);

                if (msg_ptr->information_buffer_len != pdu_len)
                {
                    DEBUG_ASSERT(0);
                }
            }

            mbci_command_cid_interpret(
                msg_ptr->op,
                msg_ptr->uuid,
                msg_ptr->cid,
                msg_ptr->command_type,
                msg_ptr->transaction_id,
                pdu_len,
                pdu_ptr);
            break;            
        }
        default:
            DEBUG_ASSERT(0);
            mbci_command_rsp(KAL_FALSE, MBIM_STATUS_FAILURE, 0, MBIM_UUID_UNKNOW, 0, NULL, msg_ptr->transaction_id);
            break;
    }

}

