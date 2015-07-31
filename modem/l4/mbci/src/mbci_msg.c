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
 *   mbci_msg.c
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

#include "kal_general_types.h"
#include "kal_trace.h"

#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "mbim_defs.h"
#include "mbci_context.h"
#include "mbci_utility.h"
#include "mbci_trc.h"
#include "l4c_utility.h"
#include "l4c_gprs_cmd.h"
#include "l4c_nw_cmd.h"
#include "l4crac_enums.h"
#include "l4c2tcm_struct.h"
#include "rmmi_common_enum.h"

extern kal_bool rmmi_translate_oper_name(kal_uint8 format1, kal_uint8 *oper_str1, kal_uint8 format2, kal_uint8 *oper_str2);

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_cfun_state_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_cfun_state_mrsp(kal_uint16 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_radio_state_info_struct rsp;

    rsp.HwRadioState = MBIMRadioOn; // HW state Always be On

    if (l4c_get_cfun_state() != 1)
    {
        rsp.SwRadioState = MBIMRadioOff;
    }
    else
    {
        rsp.SwRadioState = MBIMRadioOn;
    }

    MBCI_PROMPT_TRACE(MOD_MBCI, "[Set done] RadioState:%d", rsp.SwRadioState); 

    if (trans_ptr->op == MBIM_OP_CLOSE)
    {
        MBCI_PTR->state = MBCI_STATE_CLOSE;
        mbci_command_trans_rsp(result, MBIM_STATUS_SUCCESS, trans_ptr, 0, NULL);
    }
    else
    {
        mbci_command_trans_rsp(result, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_general_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_general_mrsp(kal_uint16 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_pin_info_struct p;
    mbim_status_code_enum status;

    if (result != KAL_TRUE)
    {
        mbci_get_pin_info(trans_ptr->src_id, &p);
        status = MBIM_STATUS_FAILURE;
    }
    else
    {
        p.PinType = MBIMPinTypeNone;
        p.PinState = 0;
        p.RemainAttempts = 0;
        status = MBIM_STATUS_SUCCESS;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_smu_exe_lock_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_exe_lock_mrsp(kal_uint16 src_id, kal_bool result, sim_chv_info_struct chv_info, smu_security_type_enum type)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_pin_info_struct p;
    mbim_status_code_enum status;

    if (result == KAL_TRUE)
    {
        p.PinType = 0;
        p.PinState = 0;
        p.RemainAttempts = 0;
        status = MBIM_STATUS_SUCCESS;
    }
    else
    {
        if (type == TYPE_CHV1)
        {
            p.PinType = MBIMPinTypePin1;
            p.PinState = 0;
            p.RemainAttempts = chv_info.chv1_count;
        }
        else if (type == TYPE_UBCHV1 || type == TYPE_SIM_CARD_BLOCKED)
        {
            p.PinType = MBIMPinTypePuk1;
            p.PinState = 1;
            p.RemainAttempts = chv_info.ubchv1_count;
        }
        
        status = MBIM_STATUS_FAILURE;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_smu_exe_change_password_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_exe_change_password_mrsp(kal_uint16 src_id, kal_bool result, kal_uint8 type, sim_chv_info_struct chv_info)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_pin_info_struct p;
    mbim_status_code_enum status;

    if (result == KAL_TRUE)
    {
        p.PinType = 0;
        p.PinState = 0;
        p.RemainAttempts = 0;
        status = MBIM_STATUS_SUCCESS;
    }
    else
    {
        if (type == TYPE_CHV1)
        {
            p.PinType = MBIMPinTypePin1;
            p.PinState = 0;
            p.RemainAttempts = chv_info.chv1_count;
        }
        else if (type == TYPE_UBCHV1 || type == TYPE_SIM_CARD_BLOCKED)
        {
            p.PinType = MBIMPinTypePuk1;
            p.PinState = 1;
            p.RemainAttempts = chv_info.ubchv1_count;
        }

        status = MBIM_STATUS_FAILURE;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_get_plmn_list_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_get_plmn_list_mrsp(kal_uint16 src_id, kal_bool result, kal_uint8 plmn_count, l4c_rat_plmn_info_struct *plmn_list)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);

    if (result == KAL_TRUE && plmn_count > 0)
    {
        kal_uint32 ElementCount = plmn_count;
        MBIM_OL_PAIR_LIST *ProvidersRefList;
        kal_uint16 infBuffSize, DataBufferOffset;
        kal_uint8 *infBuff = NULL;
        kal_uint32 i;
        
        DataBufferOffset = sizeof(kal_uint32) + sizeof(MBIM_OL_PAIR_LIST)*ElementCount;
        infBuffSize = sizeof(kal_uint32) + (sizeof(MBIM_OL_PAIR_LIST) + sizeof(mbim_provider_struct) + 64)*ElementCount;
        // 64 byte is reserve for each Provider

        // Prepare CID response structure
        infBuff = (kal_uint8*)get_ctrl_buffer(infBuffSize);
        kal_mem_set(infBuff, 0x00, infBuffSize);

        mbci_infBuff_cpy(infBuff, 0, sizeof(kal_uint32), &ElementCount);

        ProvidersRefList = (MBIM_OL_PAIR_LIST*)(infBuff + 4);

        for (i=0; i<ElementCount; i++)
        {
            kal_uint8 ProviderName[20];
            kal_uint32 offset;
            kal_uint32 state = MBIM_PROVIDER_STATE_VISIBLE;

            rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, plmn_list[i].plmn_id, RMMI_PLMN_LONG_ALPHA, ProviderName);

            offset = DataBufferOffset + (sizeof(mbim_provider_struct) + 64)*i;

            if (plmn_list[i].status == L4C_COPS_FORBIDDEN)
            {
                state |= MBIM_PROVIDER_STATE_FORBIDDEN;
            }
            else if (plmn_list[i].status == L4C_COPS_CURRENT)
            {
                kal_bool is_home_plmn;

                state |= MBIM_PROVIDER_STATE_REGISTERED;

                l4c_nw_get_romaing_status_req(MBCI_SRC, &is_home_plmn);

                if (is_home_plmn)
                {
                    state |= MBIM_PROVIDER_STATE_HOME;
                }
            }

            ProvidersRefList[i].offset = offset;
            ProvidersRefList[i].size = mbci_pack_provider(0,
                                                (kal_uint8*)(infBuff + offset),
                                                plmn_list[i].plmn_id,
                                                state,
                                                ProviderName,
                                                MBIMCellularClassGsm, 0, 0);
        }

        MBCI_PROMPT_TRACE(MOD_MBCI, "[VISIBLE] %d provider", ElementCount);
        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
        free_ctrl_buffer(infBuff);
    }
    else
    {
        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_READ_FAILURE, trans_ptr, 0, NULL);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_exe_cops_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_exe_cops_mrsp(kal_uint8 src_id, l4c_rac_response_enum gsm_status, kal_uint32 cause)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    kal_uint16 infBuffSize = 0;
    kal_uint8 *infBuff = NULL;
    mbim_status_code_enum status;

    infBuff = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_registration_state_info_struct) + 64);
    // 64 byte reserve for ProviderId and ProviderName

    MBCI_PTR->NwError = cause;

    infBuffSize = mbci_get_registration_state_info(trans_ptr->src_id, (kal_uint8*)infBuff);

    if (gsm_status == L4C_RAC_OK)
    {
        status = MBIM_STATUS_SUCCESS;
        MBCI_PTR->gsm_state = REG_STATE_REGISTERED;
    }
    else
    {
        mbim_registration_state_info_struct *p = (mbim_registration_state_info_struct*)infBuff;

        if (p->RegisterMode == MBIMRegisterModeManual)
        {
            status = MBIM_STATUS_PROVIDER_NOT_VISIBLE;
            p->RegisterState = MBIMRegisterStateDeregistered;

			kal_brief_trace(TRACE_STATE, MBCI_REG_STATE, p->RegisterState, p->RegisterMode);
        }
        else
        {
            if (gsm_status == L4C_RAC_INVALID_SIM)
            {
                status = MBIM_STATUS_SERVICE_NOT_ACTIVATED;
            }
            else
            {
                status = MBIM_STATUS_SUCCESS; // For Auto Registration, always response success
            }
        }
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, infBuff);
    free_ctrl_buffer(infBuff);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_exe_att_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_exe_att_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    kal_uint16 infBuffSize = 0;
    mbim_packet_service_info_struct rsp;
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;

    infBuffSize = mbci_get_packet_service_info(trans_ptr->src_id, (kal_uint8*)&rsp);

    if (rsp.PacketServiceState != MBIMPacketServiceStateAttached)
    {
        rsp.PacketServiceState = MBIMPacketServiceStateDetached;

        // PS attach fail
        if (result != KAL_TRUE)
        {
            status = MBIM_STATUS_FAILURE;
        }

        kal_brief_trace(TRACE_STATE, MBCI_PACKET_SERVICE_STATE, rsp.PacketServiceState, rsp.HighestAvaliableDataClasses);
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, (kal_uint8*)&rsp);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_deact_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_exe_deact_mrsp(kal_uint8 src_id, kal_bool result, kal_uint8 cid)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);
    mbim_connect_info_struct rsp;
    mbim_status_code_enum status;
    mbci_context_struct *mbci_ptr = MBCI_PTR;
    kal_uint32 SessionId = param->SessionId;
    kal_uint32 i;

    // Clear deactivated context id
    if (mbci_ptr->session[SessionId].primary_cid == cid)
    {
        mbci_ptr->session[SessionId].primary_cid = INVALID_PDP_CONTEXT_ID;
    }

    if (mbci_ptr->session[SessionId].secondary_cid == cid)
    {
        mbci_ptr->session[SessionId].secondary_cid = INVALID_PDP_CONTEXT_ID;
    }

    // Check if other context still activated, deactive them if existed
    if (mbci_deactivate_session(src_id, SessionId) == KAL_TRUE)
    {
        return;
    }

    // Has deactivate all PDP context owned by SessionId

    if (result == KAL_TRUE)
    {
        status = MBIM_STATUS_SUCCESS;
    }
    else
    {
        status = MBIM_STATUS_FAILURE;
    }

    if (trans_ptr->op == MBIM_OP_CLOSE)
    {
        for (i=0; i<GPRS_MAX_PDP_SUPPORT; i++)
        {
            if (mbci_deactivate_session(src_id, i) == KAL_TRUE)
            {
                return;
            }
        }

        // Has deactivate all Sessions
        mbci_command_trans_rsp(result, status, trans_ptr, 0, NULL);
        MBCI_PTR->state = MBCI_STATE_CLOSE;
    }
    else
	{
		mbci_get_connect_info(src_id, (kal_uint8*)&rsp, SessionId);
		mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
	}
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_definition_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_set_definition_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);
    mbim_connect_info_struct p;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    if (result == KAL_TRUE)
    {
        l4ctcm_set_config_option_req_struct prco_req;

        kal_mem_set((void*)&prco_req, 0, sizeof(l4ctcm_set_config_option_req_struct));

        prco_req.prco.context_id = param->context_id;
        kal_mem_cpy(prco_req.prco.user_name, param->UserName, strlen((kal_char*)param->UserName));
        kal_mem_cpy(prco_req.prco.password, param->Password, strlen((kal_char*)param->Password));
        prco_req.prco.is_chap = param->AuthProtocol;

        if (l4c_ps_set_config_option_req(src_id, &prco_req) == KAL_TRUE)
        {
            return;
        }
    }

    mbci_get_connect_info(src_id, (kal_uint8*)&p, param->SessionId);
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_config_option_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_set_config_option_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);
    mbim_connect_info_struct p;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    if (result == KAL_TRUE)
    {
        if (l4c_ps_exe_act_req(src_id, TCM_PDP_ACTIVATE, param->context_id) == KAL_TRUE)
        {
            return;
        }
    }

    mbci_get_connect_info(src_id, (kal_uint8*)&p, param->SessionId);
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_act_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_exe_act_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbci_set_connect_param_struct *param = (mbci_set_connect_param_struct*)(trans_ptr->parameter);
    mbim_connect_info_struct p;
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

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
#endif

    if (result == KAL_TRUE)
    {
        status = MBIM_STATUS_SUCCESS;
    }
    else
    {
        status = MBIM_STATUS_FAILURE;
    }

    mbci_get_connect_info(src_id, (kal_uint8*)&p, param->SessionId);
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(p), (kal_uint8*)&p);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_enter_data_state_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_exe_enter_data_state_mrsp(kal_uint8 src_id, kal_bool result)
{
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
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_provision_context_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_set_provision_context_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    kal_uint32 count;
    kal_uint16 infBuffSize = 0;
    kal_uint8 *p;
    mbim_status_code_enum status;

    if (result != KAL_TRUE)
    {
        status = MBIM_STATUS_WRITE_FAILURE;
    }
    else
    {
        status = MBIM_STATUS_SUCCESS;
    }

    count = mbci_query_provisioned_context_num();
    p = (kal_uint8*)get_ctrl_buffer(sizeof(mbim_provisioned_contexts_info_struct)+sizeof(mbim_context_struct)*count);
    infBuffSize = mbci_get_provisioned_context_info(trans_ptr->src_id, p, count);
    
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, infBuffSize, p);
    free_ctrl_buffer(p);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_profile_params_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_set_profile_params_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_status_code_enum status;
    mbim_sms_configuration_info_struct rsp;

    if (result != KAL_TRUE)
    {
        status = MBIM_STATUS_FAILURE;
    }
    else
    {
        status = MBIM_STATUS_SUCCESS;
    }

    mbci_get_sms_configuration_info(src_id, (kal_uint8*)&rsp, sizeof(rsp));
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_post_msg_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_post_msg_mrsp(kal_uint8 src_id, kal_bool result, kal_uint8 MessageRefernce)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;
    mbim_sms_send_info_struct rsp;

    if (result != KAL_TRUE)
    {
        status = MBIM_STATUS_FAILURE;
    }
    else
    {
        status = MBIM_STATUS_SUCCESS;
    }

    rsp.MessageReference = MessageRefernce;
    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);   
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_delete_msg_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_delete_msg_mrsp(kal_uint8 src_id, kal_bool result)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_status_code_enum status = MBIM_STATUS_FAILURE;

    if (result != KAL_TRUE)
    {
        status = MBIM_STATUS_FAILURE;
    }
    else
    {
        status = MBIM_STATUS_SUCCESS;
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, 0, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_list_pdu_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_list_pdu_mrsp(kal_uint8 src_id, kal_bool result,
                                                kal_uint16 index,
                                                kal_uint16 next_index,
                                                kal_uint8 status,
                                                peer_buff_struct *data)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);

    if (trans_ptr->cid == MBIM_CID_SMS_MESSAGE_STORE_STATUS)
    {
        mbim_sms_status_info_struct rsp;

        if (index != SMSAL_INVALID_INDEX && next_index != SMSAL_INVALID_INDEX)
        {
            // Read next unread SMS
            return;
        }
        else if (index == SMSAL_INVALID_INDEX && next_index == SMSAL_INVALID_INDEX)
        {
            // No unread SMS
            rsp.Flag = MBIM_SMS_FLAG_NONE;
            rsp.MessageIndex = 0;
        }
        else if (next_index == SMSAL_INVALID_INDEX)
        {
            // Report latest unread SMS index
            rsp.Flag = MBIM_SMS_FLAG_NEW_MESSAGE;
            rsp.MessageIndex = index + 1;
        }

        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
    }
    else if (trans_ptr->cid == MBIM_CID_SMS_READ)
    {
        mbim_sms_read_info_struct rsp;

        if (index == SMSAL_INVALID_INDEX && next_index == SMSAL_INVALID_INDEX)
        {
            // No SMS need to report
            rsp.Format = MBIMSmsFormatPdu;
            rsp.ElementCount = 0;
            mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
        }
        else
        {
            mbim_sms_read_info_struct *rsp;
            MBIM_OL_PAIR_LIST *SmsRefList;
            mbim_sms_pdu_record_struct *pdu;
            kal_uint8 *infBuff = (kal_uint8*)(trans_ptr->parameter);
            kal_uint8 *pdu_stream_ptr;
            kal_uint16 len;
            kal_uint8 shift_to_pdu = 0;
            kal_uint32 i;

            pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(data, &len);

            rsp = (mbim_sms_read_info_struct*)infBuff;

            rsp->Format = MBIMSmsFormatPdu;

            i = rsp->ElementCount;

            SmsRefList = (MBIM_OL_PAIR_LIST*)((kal_uint8*)(trans_ptr->parameter) + sizeof(mbim_sms_read_info_struct) + sizeof(MBIM_OL_PAIR_LIST)*i);

            pdu = (mbim_sms_pdu_record_struct*)(infBuff + SmsRefList->offset);
            pdu->MessageIndex = index + 1;

            if (status == SMSAL_REC_UNREAD)
                pdu->MessageStatus = MBIMSmsStatusNew;
            else if (status == SMSAL_REC_READ)
                pdu->MessageStatus = MBIMSmsStatusOld;
            else if (status == SMSAL_STO_UNSENT || status == SMSAL_STO_DRAFT)
                pdu->MessageStatus = MBIMSmsStatusDraft;
            else if (status == SMSAL_STO_SENT)
                pdu->MessageStatus = MBIMSmsStatusSent;

            pdu->PduDataOffset = 16;

            //shift_to_pdu = ((kal_uint8*)(pdu_stream_ptr))[0] + 1; // shift to real TPDU defined in 23.040
            
            if (len <= 183)
            {
                pdu->PduDataSize = len - shift_to_pdu;
            }
            else
            {
                DEBUG_ASSERT(0);
                pdu->PduDataSize = 183 - shift_to_pdu;
            }
            
            kal_mem_cpy((void*)pdu->DataBuffer, (void*)(pdu_stream_ptr + shift_to_pdu), pdu->PduDataSize);

            rsp->ElementCount += 1; // Read 1 message complete

            // Read last SMS done
            if (next_index == SMSAL_INVALID_INDEX)
            {
                kal_uint16 infBuffSize;

                infBuffSize = sizeof(mbim_sms_read_info_struct) + 
                        (sizeof(MBIM_OL_PAIR_LIST) + sizeof(mbim_sms_pdu_record_struct))*(rsp->ElementCount);

                MBCI_PROMPT_TRACE(MOD_MBCI, "Read %d SMS complete", rsp->ElementCount);
                mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
            }
        }
    }
    else
    {
        DEBUG_ASSERT(0);
        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_FAILURE, trans_ptr, 0, NULL);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_pdu_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_pdu_mrsp(kal_uint8 src_id, kal_bool result,
                                            kal_uint16 index,
                                            kal_uint8 status,
                                            peer_buff_struct *data)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);

    if (result != KAL_TRUE)
    {
        mbim_sms_read_info_struct rsp;

        // No SMS need to report
        rsp.Format = MBIMSmsFormatPdu;
        rsp.ElementCount = 0;
        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
    }
    else
    {
        kal_uint16 infBuffSize = 0;
        kal_uint8 *infBuff = NULL;
        mbim_sms_read_info_struct rsp;
        MBIM_OL_PAIR_LIST SmsRefList;
        mbim_sms_pdu_record_struct pdu;
        kal_uint8 *pdu_stream_ptr;
        kal_uint16 len;
        kal_uint8 shift_to_pdu = 0;

        pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(data, &len);

        infBuffSize = sizeof(rsp) + sizeof(SmsRefList) + sizeof(pdu);
        infBuff = (kal_uint8*)get_ctrl_buffer(infBuffSize);

        rsp.Format = MBIMSmsFormatPdu;
        rsp.ElementCount = 1;
        
        SmsRefList.offset = sizeof(rsp) + sizeof(SmsRefList);
        SmsRefList.size = sizeof(pdu);
        
        pdu.MessageIndex = index + 1;

        if (status == SMSAL_REC_UNREAD)
            pdu.MessageStatus = MBIMSmsStatusNew;
        else if (status == SMSAL_REC_READ)
            pdu.MessageStatus = MBIMSmsStatusOld;
        else if (status == SMSAL_STO_UNSENT || status == SMSAL_STO_DRAFT)
            pdu.MessageStatus = MBIMSmsStatusDraft;
        else if (status == SMSAL_STO_SENT)
            pdu.MessageStatus = MBIMSmsStatusSent;

        pdu.PduDataOffset = 16;

        //shift_to_pdu = ((kal_uint8*)(pdu_stream_ptr))[0] + 1; // shift to real TPDU defined in 23.040

        if (len <= 183)
        {
            pdu.PduDataSize = len - shift_to_pdu;
        }
        else
        {
            DEBUG_ASSERT(0);
            pdu.PduDataSize = 183 - shift_to_pdu;
        }

        kal_mem_cpy((void*)(pdu.DataBuffer), (void*)(pdu_stream_ptr + shift_to_pdu), pdu.PduDataSize);
    
        // Copy to infBuff
        mbci_infBuff_cpy(infBuff, 0, sizeof(rsp), (void*)&rsp);
        mbci_infBuff_cpy(infBuff, sizeof(rsp), sizeof(SmsRefList), (void*)&SmsRefList); 
        mbci_infBuff_cpy(infBuff, sizeof(rsp) + sizeof(SmsRefList), sizeof(pdu), (void*)&pdu);

        MBCI_PROMPT_TRACE(MOD_MBCI, "Read %d SMS", rsp.ElementCount);
        mbci_command_trans_rsp(KAL_TRUE, MBIM_STATUS_SUCCESS, trans_ptr, infBuffSize, infBuff);
        free_ctrl_buffer(infBuff);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ss_ussd_mrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_ussd_mrsp(kal_uint16 src_id, kal_uint8 dcs, mbim_ussd_response_enum response, kal_uint8 *ussd_string, kal_uint8 ussd_string_length)
{
    mbci_transaction_struct *trans_ptr = (mbci_transaction_struct*)mbci_get_trans_by_src(src_id);
    mbim_status_code_enum status = MBIM_STATUS_SUCCESS;
    mbim_ussd_info_struct rsp;

    rsp.USSDResponse = response;
    rsp.USSDSessionState = MBIMUSSDExistingSession;
    rsp.USSDDataCodingScheme = dcs;
    rsp.USSDPayloadOffset = 20;
    rsp.USSDPayloadLength = ussd_string_length;

    if (ussd_string != NULL && ussd_string_length != 0)
    {
        kal_mem_cpy((void*)rsp.DataBuffer, (void*)ussd_string, ussd_string_length);
    }

    mbci_command_trans_rsp(KAL_TRUE, status, trans_ptr, sizeof(rsp), (kal_uint8*)&rsp);
}

