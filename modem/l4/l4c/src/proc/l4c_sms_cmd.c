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
 * L4C_SMS_CMD.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
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

#define L4C_SMS_CMD_C
#ifdef __MOD_SMSAL__

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stack_ltlcom.h"
#include "kal_public_api.h"
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "drv_msgid.h"
#include "md_sap.h"
#include "l4_msgid.h"
//#include "mmi_msgid.h"
#include "nvram_msgid.h" 

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__) 
//#include "smslib.h"
#endif

#include "l3_inc_enums.h"
#include "smsal_l4c_enum.h"
#include "smsal_l4c_defs.h"
#include "l4c2smsal_struct.h"

//#include "mcd_l4c2smsal_peer.h"

#include "smsal_l4c_funcs.h"

#include "l4c_utility.h"

#include "l4c_sms_cmd.h"

//#include "mcd.h"

#include "l4a.h"
//#include "mmi_msg_struct.h"

#include "lmmi_rsp.h"
#include "lmmi_ind.h"
#include "rmmi_rspfmttr.h"

#include "l4_trc.h"

#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"
//#include "smsal_structs.h" 
#include "rmmi_rsp.h"
//#include "smsal_enums.h"
#include "smsal_other_funcs.h"
#include "smsal_msg_proc.h"

#include "rmmi_ind.h"
#include "rmmi_utility.h"
#include "smsal_utils.h"

//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "smsal_defs.h"
#include "smslib_def.h"
#include "smslib_decode.h"
#include "smslib_enum.h"
#include "smslib_others.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
        
#include "as2l4c_struct.h"
#include "nvram_struct.h"
        
extern kal_uint16 smsal_force_at_cmgf_mode_set(kal_uint8 msg_format);

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_profile_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  para_ind            [IN]        
 *  profile_no          [IN]        
 *  pid                 [IN]        
 *  dcs                 [IN]        
 *  vp                  [IN]        
 *  sc_addr             [IN]        
 *  profile_name        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_profile_params_req(
            kal_uint8 src_id,
            kal_uint16 para_ind,
            kal_uint8 profile_no,
            kal_uint8 pid,
            kal_uint8 dcs,
            kal_uint8 vp,
            l4c_number_struct sc_addr,
            l4_name_struct profile_name)
{
    l4csmsal_set_profile_para_req_struct *param_ptr;
    kal_uint8 count;
#if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    l4c_context_struct *l4c_ptr = L4C_PTR;
#endif

    if (is_sms_cmd_conflict(src_id, CSMP_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4csmsal_set_profile_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_profile_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = para_ind;
    param_ptr->profile_no = profile_no;
    param_ptr->pid = pid;
    param_ptr->dcs = dcs;
    param_ptr->vp = vp;

    //if (profile_name != NULL)
    kal_mem_cpy(&param_ptr->profile_name, &profile_name, sizeof(l4_name_struct));

    param_ptr->sca.addr_bcd[0] = sc_addr.type;

    count = convert_to_bcd((kal_uint8*) sc_addr.number, (kal_uint8*) & (param_ptr->sca.addr_bcd[1]), 40);

    param_ptr->sca.addr_length = count + 1;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ, param_ptr, NULL, 0);

    #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    {
    	if (l4c_ptr->sms_current_action[src_id] != CMGS_PDU_EXE)
    	{
               l4c_set_user_action(L4C_SMS, src_id, CSMP_SET);
    	}
    }
    #else
    {
        l4c_set_user_action(L4C_SMS, src_id, CSMP_SET);
    }
    #endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_profile_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  profile_no          [IN]        
 *  pid                 [?]         
 *  dcs                 [?]         
 *  vp                  [?]         
 *  sc_addr             [?]         
 *  profile_name        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_get_profile_params_req(
            kal_uint8 src_id,
            kal_uint8 profile_no,
            kal_uint8 *pid,
            kal_uint8 *dcs,
            kal_uint8 *vp,
            l4c_number_struct *sc_addr,
            l4_name_struct *profile_name)
{
    //smsal_profile_params_query(profile_no, pid, dcs, vp, sc_addr, profile_name);
    kal_uint8 fo;

    smsal_csmp_query(profile_no, &fo, vp, pid, dcs);
    l4c_sms_get_sc_addr_req(LMMI_SRC, profile_no, sc_addr);
    if (profile_name != NULL)
    {
        smsal_get_profile_name(profile_no, profile_name);
    }

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_common_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  para_ind            [IN]        
 *  fo                  [IN]        
 *  bearer_service      [IN]        
 *  status_report       [IN]        
 *  reply_path          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_common_params_req(
            kal_uint8 src_id,
            kal_uint16 para_ind,
            kal_uint8 fo,
            kal_uint8 bearer_service,
            kal_uint8 status_report,
            kal_uint8 reply_path)
{
    l4csmsal_set_common_para_req_struct *param_ptr;
#if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI)
    l4c_context_struct *l4c_ptr = L4C_PTR;
#endif

    //kal_uint8 count;

    if (is_sms_cmd_conflict(src_id, CSMP_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = para_ind;
    param_ptr->fo = fo;
    param_ptr->bearer_serivce = bearer_service;
    param_ptr->status_report = status_report;
    param_ptr->reply_path = reply_path;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);

    #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    {
    	if (l4c_ptr->sms_current_action[src_id] != CMGS_PDU_EXE)
    	{
            l4c_set_user_action(L4C_SMS, src_id, CSMP_SET);
    	}
    }
    #else
    {
        l4c_set_user_action(L4C_SMS, src_id, CSMP_SET);
    }
    #endif
	
    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_common_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  fo                  [?]         
 *  bearer_service      [?]         
 *  status_report       [?]         
 *  reply_path          [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_get_common_params_req(
            kal_uint8 src_id,
            kal_uint8 *fo,
            kal_uint8 *bearer_service,
            kal_uint8 *status_report,
            kal_uint8 *reply_path)
{
    smsal_get_common_para(fo, bearer_service, reply_path, status_report);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_startup_read_next_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_startup_read_next_req(kal_uint8 src_id)
{
#ifndef __SMS_STORAGE_BY_MMI__
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_STARTUP_READ_NEXT_REQ, NULL, NULL, 0);
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_bearer_service_req
 * DESCRIPTION
 *  This function is called by rmmi_cgsms_hdlr() and L4A MSG_ID_MMI_SMS_SET_BEARER_SERVICE_REQ
 *  and  Send MSG_ID_L4CSMSAL_SET_PARAMETER_REQ to MOD SMSAL
 *  to specify the service or service preference that the MT will use to send MO SMS messages.
 * PARAMETERS
 *  src_id      [IN]        
 *  bearer      [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_bearer_service_req(kal_uint8 src_id, kal_uint8 bearer)
{
    l4csmsal_set_common_para_req_struct *param_ptr;

    if (is_sms_cmd_conflict(src_id, CGSMS_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CGSMS_SET);
    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = SMSAL_COM_PARA_BEARER;
    param_ptr->bearer_serivce = bearer;
    /*
     * 27.007 +CGSMS
     * 0 Packet Domain
     * 1 circuit switched
     * 2 Packet Domain preferred (use circuit switched if GPRS not available)
     * 3 circuit switched preferred (use Packet Domain if circuit switched not available)
     */
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_bearer_service_req
 * DESCRIPTION
 *  This function is called by rmmi_cgsms_hdlr() and L4A MSG_ID_MMI_SMS_GET_BEARER_SERVICE_REQ
 *  and call smsal_cgsms_query() to returns the currently selected service or service preference.
 * PARAMETERS
 *  src_id      [IN]        
 *  bearer      [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_bearer_service_req(kal_uint8 src_id, kal_uint8 *bearer)
{
    smsal_cgsms_query(bearer);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_post_command_req
 * DESCRIPTION
 *  In text mode, this function is called by rmmi_cmgc_hdlr() and L4A MSG_ID_MMI_SMS_SEND_COMMAND_REQ
 *  to send a command message from a TE to the network (SMS-COMMAND).
 * PARAMETERS
 *  src_id      [IN]        
 *  fo          [IN]        
 *  ct          [IN]        
 *  mn          [IN]        
 *  pid         [IN]        
 *  dest        [IN]        
 *  length      [IN]        
 *  cmd         [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_post_command_req(
            kal_uint8 src_id,
            kal_uint8 fo,
            kal_uint8 ct,
            kal_uint8 mn,
            kal_uint8 pid,
            l4c_number_struct dest,
            kal_uint8 length,
            kal_uint8 *cmd)
{
    l4csmsal_send_req_struct *param_ptr;
    smsal_command_msg_hdr_struct *param1;
    kal_uint8 dn_type;

    if (is_sms_cmd_conflict(src_id, CMGC_EXE) == KAL_TRUE)
    {
        if (src_id <= LMMI_SRC2)
        {
            l4c_sms_exe_post_command_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE, 0, NULL, src_id);
            return KAL_TRUE;    
        }
        else
        {
            return KAL_FALSE;   
        }  
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGC_EXE);
    param_ptr = (l4csmsal_send_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_send_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->req_type = SMSAL_SEND_CMD;
    param_ptr->reply_index = SMSAL_INVALID_INDEX;
    param_ptr->message_len = length;

    param1 = (smsal_command_msg_hdr_struct*) get_ctrl_buffer(sizeof(smsal_command_msg_hdr_struct));

    param1->fo = fo;
    param1->ct = ct;
    param1->mn = mn;
    param1->da.addr_bcd[0] = dest.type;

    param1->da.addr_length = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param1->da.addr_bcd[1]), 40) + 1;

    param1->pid = pid;
    param1->no_msg_data = length;

    kal_mem_cpy(&(param_ptr->msg_header.command), param1, sizeof(smsal_command_msg_hdr_struct));

    dn_type = l4csmu_get_dial_mode();
    if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
    {
        param_ptr->fdn_check = KAL_TRUE;
    }
    else
    {
        param_ptr->fdn_check = KAL_FALSE;
    }

    if (src_id <= LMMI_SRC2)
    {
    	#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#elif defined(__SMS_STORAGE_BY_MMI__)
	{
		// won't call this function
		//param_ptr->seq_num = seq_num;
	}
	#else
	{
		param_ptr->seq_num = 0;
	}
	#endif
    }
    else 
    {
    	param_ptr->seq_num = 1;
    }
	   
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_REQ, param_ptr, (kal_uint8*) cmd, length);

    free_ctrl_buffer(param1);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_post_command_pdu_req
 * DESCRIPTION
 *  In pdu mode, this function is called by rmmi_cmgc_hdlr()
 *  to send a command message from a TE to the network (SMS-COMMAND).
 * PARAMETERS
 *  src_id          [IN]        
 *  data_len        [IN]        
 *  length          [IN]        
 *  pdu             [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_post_command_pdu_req(kal_uint8 src_id, kal_uint16 data_len, kal_uint16 length, kal_uint8 *pdu)
{
    l4csmsal_send_req_struct *param_ptr;
    kal_uint8 dn_type;

    if (is_sms_cmd_conflict(src_id, CMGC_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGC_EXE);
    param_ptr = (l4csmsal_send_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_send_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->req_type = SMSAL_SEND_CMD;
    param_ptr->message_len = data_len;
    param_ptr->reply_index = SMSAL_INVALID_INDEX;
    dn_type = l4csmu_get_dial_mode();
    if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
    {
        param_ptr->fdn_check = KAL_TRUE;
    }
    else
    {
        param_ptr->fdn_check = KAL_FALSE;
    }

    if (src_id <= LMMI_SRC2)
    {
    	#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#elif defined(__SMS_STORAGE_BY_MMI__)
	{
		// won't call this function
		//param_ptr->seq_num = seq_num;
	}
	#else
	{
		param_ptr->seq_num = 0;
	}
	#endif
    }
    else 
    {
    	param_ptr->seq_num = 1;
    }
	   
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_REQ, param_ptr, pdu, length);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_delete_msg_req
 * DESCRIPTION
 *  This function is called by rmmi_cmgd_hdlr() and L4A MSG_ID_MMI_SMS_DEL_MSG_REQ
 *  to delete message from preferred message storage location <index>.
 * PARAMETERS
 *  src_id                      [IN]        
 *  del_flag                    [IN]        
 *  index                       [IN]        
 *  del_bitmap                  [IN]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_delete_msg_req(
            kal_uint8 src_id,
            kal_uint8 del_flag,
            kal_uint16 index,
            kal_uint8 *del_bitmap)
{
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI)
/* under construction !*/
#endif

    if (is_sms_cmd_conflict(src_id, CMGD_EXE) == KAL_TRUE)
    {
    	#ifndef __SMS_STORAGE_BY_MMI__
        if (src_id <= LMMI_SRC2)
        {
    	    l4c_sms_exe_delete_msg_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE,del_flag, index, 0,del_bitmap, src_id);
            return KAL_TRUE;
        }
        else
        #endif
	    {
            return KAL_FALSE;   
        }
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGD_EXE);

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
    #elif defined(__SMS_STORAGE_BY_MMI__)
    {
        smsal_prefer_storage_struct mem;
		
        l4c_sms_get_preferred_mem_req(src_id, &mem);
        if (mem.mem1 == SMSAL_SM_PREFER)
        {
            mem.mem1 = SMSAL_SM;
        }
        else if (mem.mem1 == SMSAL_ME_PREFER)
        {
            mem.mem1 = SMSAL_ME;
        }

        l4c_sms_atcmd_cmgd_lind(src_id, mem.mem1, index, del_flag);
    }
    #else
    {
        l4csmsal_delete_req_struct *param_ptr;

        param_ptr = (l4csmsal_delete_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_delete_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->index = index;
        param_ptr->del_flag = del_flag;     //smsal_del_flag_enum
        if (del_bitmap != NULL)
        {
            kal_mem_cpy(param_ptr->msg_bitmap, del_bitmap, 480);
        }

        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_DELETE_REQ, param_ptr, NULL, 0);
    }
    #endif
	
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_msg_format_req
 * DESCRIPTION
 *  This function is called by rmmi_cmgf_hdlr() and L4A MSG_ID_MMI_SMS_SET_FORMAT_REQ
 *  to set text or pdu mode.
 *  0 PDU mode (default when implemented)
 *  1 text mode
 * PARAMETERS
 *  src_id      [IN]        
 *  format      [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_msg_format_req(kal_uint8 src_id, kal_uint8 format)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 result;

    result = smsal_cmgf_set(format);

    if (result == SMSAL_NO_ERROR)
    {
        ret_val = KAL_TRUE;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_msg_format_req
 * DESCRIPTION
 *  This function is called by rmmi_cmgf_hdlr() and L4A MSG_ID_MMI_SMS_GET_FORMAT_REQ
 *  and call smsal_cmgf_query to return text or pdu mode.
 *  0 PDU mode (default when implemented)
 *  1 text mode
 * PARAMETERS
 *  src_id      [IN]        
 *  format      [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_msg_format_req(kal_uint8 src_id, kal_uint8 *format)
{
    smsal_cmgf_query(format);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_list_req
 * DESCRIPTION
 *  This function is called by L4A MSG_ID_MMI_SMS_GET_MSG_LIST_REQ
 *  and call smsal_get_inbox_list and smsal_get_outbox_list to get the list.
 *  Then, sends MSG_ID_MMI_SMS_GET_MSG_LIST_RSP back to LMMI.
 *  This function is also called by rmmi_cmgl_hdlr() and sends MSG_ID_L4CSMSAL_READ_REQ
 *  to MOD SMSAL.
 * PARAMETERS
 *  src_id              [IN]        
 *  change_status       [IN]        
 *  status              [IN]        
 *  start_index         [IN]        
 *  no_msg              [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_read_msg_list_req(
            kal_uint8 src_id,
            kal_uint8 change_status,//change status or not
            kal_uint8 status,//smsal_status_enum
            kal_uint16 start_index,
            kal_uint8 no_msg)
{
#if defined(__SMS_STORAGE_BY_MMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR;


    if (is_sms_cmd_conflict(src_id, CMGL_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    #ifndef __SMS_STORAGE_BY_MMI__
    {
        if (status == SMSAL_INVALID_STATUS)
        {
            return KAL_FALSE;
        }

        if (src_id == LMMI_SRC)
        {
            smsal_outbox_list_struct *outbox = NULL;
            smsal_inbox_list_struct *inbox = NULL;

            if (status == SMSAL_INBOX_PARTIAL)
            {
                inbox = smsal_get_inbox_list(start_index, no_msg);
            }
            else if (status == SMSAL_OUTBOX_PARTIAL)
            {
                outbox = smsal_get_outbox_list(start_index, no_msg);
            }

            l4c_sms_exe_read_msg_list_lrsp(*inbox, *outbox);
            if (inbox != NULL)
            {
                free_ctrl_buffer(inbox);    //allocate from SMSAL
            }
            if (outbox != NULL)
            {
                free_ctrl_buffer(outbox);
            }

            return KAL_TRUE;
        }
    }
    #endif

    l4c_set_user_action(L4C_SMS, src_id, CMGL_EXE);

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
/* under construction !*/
    #elif defined(__SMS_STORAGE_BY_MMI__)
    {
        smsal_prefer_storage_struct mem;
		
        l4c_sms_get_preferred_mem_req(src_id, &mem); 
        if (mem.mem1 == SMSAL_SM_PREFER)
        {
            mem.mem1 = SMSAL_SM;
        }
        else if (mem.mem1 == SMSAL_ME_PREFER)
        {
            mem.mem1 = SMSAL_ME;
        }
					
		l4c_sms_atcmd_cmgl_lind(src_id, mem.mem1, status, rmmi_ptr->esmss_mode);
    }   
    #else
    {
        l4csmsal_read_req_struct *param_ptr;

        param_ptr = (l4csmsal_read_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_read_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->req_type = NEXT_INDEXING;
        param_ptr->status = status;
        param_ptr->change_status = change_status;
        param_ptr->index = SMSAL_INVALID_INDEX;

        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, param_ptr, NULL, 0);
        l4c_ptr->parameter[src_id].length = sizeof(l4csmsal_read_req_struct);
        l4c_ptr->parameter[src_id].data = (l4csmsal_read_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_read_req_struct), TD_RESET);
        /* This is for next GMGL reading */
        kal_mem_cpy(l4c_ptr->parameter[src_id].data, param_ptr, sizeof(l4csmsal_read_req_struct));
    }
    #endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_send_from_storage_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  index               [IN]        
 *  addr_present        [IN]        
 *  da                  [IN]        
 *  profile_no_tag      [IN]        
 *  profile_no          [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_send_from_storage_req(
            kal_uint8 src_id,
            kal_uint16 index,
            kal_bool addr_present,
            l4c_number_struct da,
            kal_uint8 profile_no_tag,
            kal_uint8 profile_no)
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
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                      [IN]        
 *  new_status                  [IN]        
 *  index                       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_status_req(kal_uint8 src_id, kal_uint8 new_status, kal_uint16 index)
{
    l4csmsal_set_status_req_struct *param_ptr;

    if (is_sms_cmd_conflict(src_id, CMST_SET) == KAL_TRUE)
    {
    	l4c_sms_set_status_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE, index, src_id);
        return KAL_TRUE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CMST_SET);

    param_ptr = (l4csmsal_set_status_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_status_req_struct), TD_RESET);

    param_ptr->index = index;
    param_ptr->new_status = new_status;
    param_ptr->src_id = src_id;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_STATUS_REQ, param_ptr, NULL, 0);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_req
 * DESCRIPTION
 *  This function is called by rmmi_cmgr_hdlr() and L4A MSG_ID_MMI_SMS_GET_MSG_REQ
 *  and sends  MSG_ID_L4CSMSAL_READ_REQ to MOD SMSAL.
 * PARAMETERS
 *  src_id              [IN]        
 *  index               [IN]        
 *  change_status       [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_read_msg_req(kal_uint8 src_id, kal_uint16 index, kal_bool change_status)
{
#if defined(__SMS_STORAGE_BY_MMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif

#ifdef __SMS_STORAGE_BY_MMI__ 
     if (is_sms_cmd_conflict(src_id, CMGR_EXE) == KAL_TRUE)
     {
	     return KAL_FALSE;   
     }
     l4c_set_user_action(L4C_SMS, src_id, CMGR_EXE);
#else
    if (src_id != LMMI_SRC)
    {
        if (is_sms_cmd_conflict(src_id, CMGR_EXE) == KAL_TRUE)
        //return KAL_FALSE; //L4A will send MSG_ID_MMI_SMS_GET_MSG_RSP (result = KAL_FALSE) to MMI
        {
            if(src_id <= LMMI_SRC2)
            {
                #if defined(__MMI_FMI__)
                mmi_sms_get_msg_rsp_struct *p = (mmi_sms_get_msg_rsp_struct*) construct_local_para(
                                                                            (kal_uint16) (sizeof (mmi_sms_get_msg_rsp_struct)),
                                                                            0);
                p->result = KAL_FALSE;
                p->cause = CM_L4C_GEN_CAUSE;
                p->source_id = src_id;//mtk01616_081021
                l4a_sendmsg_ilm(MOD_L4C, MOD_MMI, MSG_ID_MMI_SMS_GET_MSG_RSP, p);
                #endif /* defined(__MMI_FMI__) */ 
                return KAL_TRUE;
            }
            else
            {
                return KAL_FALSE;   
            }
        }
        l4c_set_user_action(L4C_SMS, src_id, CMGR_EXE);
    }
#endif

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
/* under construction !*/
#elif defined(__SMS_STORAGE_BY_MMI__)
{
    smsal_prefer_storage_struct mem;

    l4c_sms_get_preferred_mem_req(src_id, &mem);		
    if (mem.mem1 == SMSAL_SM_PREFER)
    {
        mem.mem1 = SMSAL_SM;
    }
    else if (mem.mem1 == SMSAL_ME_PREFER)
    {
        mem.mem1 = SMSAL_ME;
    }

	l4c_sms_atcmd_cmgr_lind(src_id, mem.mem1, index, rmmi_ptr->esmss_mode); 
}   
#else
{
    l4csmsal_read_req_struct *param_ptr;
    param_ptr = (l4csmsal_read_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_read_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->req_type = EXACTLY_INDEXING;
    param_ptr->index = index;
    param_ptr->change_status = change_status;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, param_ptr, NULL, 0);
}
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_post_msg_req
 * DESCRIPTION
 *  In text mode, this function is called by rmmi_cmgs_hdlr() and L4A MSG_ID_MMI_SMS_SEND_MSG_REQ
 *  and sends  MSG_ID_L4CSMSAL_SEND_REQ to MOD SMSAL.
 * PARAMETERS
 *  src_id          [IN]        
 *  profile         [IN]        
 *  reply_index     [IN]        
 *  dest            [IN]        
 *  para            [IN]        
 *  sca             [IN]        
 *  vp              [IN]        
 *  pid             [IN]        
 *  udhi            [IN]        
 *  dcs             [IN]        
 *  length          [IN]        
 *  msg             [IN]         
 *  seq_num         [IN]        
 *  mms_mode        [IN]        
 *  tp_srr		   [IN]        	
 *  tp_rp            [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_post_msg_req(
            kal_uint8 src_id,
            kal_uint8 profile,
            kal_uint16 reply_index,
            l4c_number_struct dest,
            kal_uint16 para,
            l4c_number_struct sca,
            kal_uint8 vp,
            smsal_pid_enum pid,
            kal_uint8 udhi,
            smsal_dcs_enum dcs,
            kal_uint16 length,
            kal_uint8 *msg,
            kal_uint8 seq_num,
            kal_uint8 mms_mode,
            kal_uint8 tp_srr,
            kal_uint8 tp_rp)
{
    l4csmsal_send_req_struct *param_ptr;
    kal_uint8 dn_type;
#ifdef __GEMINI__
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (is_sms_cmd_conflict(src_id, CMGS_EXE) == KAL_TRUE)
    {
        smsal_concat_struct concat_info;
        kal_mem_set(&concat_info,0,sizeof(smsal_concat_struct));		 
        #ifndef __SMS_STORAGE_BY_MMI__
        if(src_id <= LMMI_SRC2)
        {		 
            l4c_sms_exe_post_msg_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE, 0, NULL, seq_num, concat_info, src_id);
            return KAL_TRUE;    
        }
        else
        #endif
        {
            return KAL_FALSE;   
        }
    }

#ifdef __GEMINI__
    if (l4c_comm_ptr->during_sim_mode_switch)
    {
        smsal_concat_struct concat_info;
        kal_mem_set(&concat_info,0,sizeof(smsal_concat_struct));
        #ifndef __SMS_STORAGE_BY_MMI__
        if(src_id <= LMMI_SRC2)
        {
            l4c_sms_exe_post_msg_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE, 0, NULL, seq_num, concat_info, src_id);
            return KAL_TRUE;    
        }
        else
        #endif
        {
            return KAL_FALSE;   
        }
    }
#endif /* __GEMINI__ */ 

    l4c_set_user_action(L4C_SMS, src_id, CMGS_EXE);

    param_ptr = (l4csmsal_send_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_send_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->req_type = SMSAL_SEND_MSG;

    #ifndef __SMS_STORAGE_BY_MMI__
    if (src_id <= LMMI_SRC2)
    {
		param_ptr->seq_num = 0;
    }
    else 
    #endif
    {
    	param_ptr->seq_num = 1;
    }

    param_ptr->reply_index = reply_index;
    param_ptr->message_len = length;
    #ifndef __SMS_STORAGE_BY_MMI__
    if (src_id <= LMMI_SRC2)
    {
        param_ptr->msg_header.submit.profile_no_tag = KAL_TRUE;
    }
    else
    #endif
    {
        param_ptr->msg_header.submit.profile_no_tag = KAL_FALSE;
    }

    param_ptr->msg_header.submit.profile_no = profile;
    param_ptr->msg_header.submit.para_ind = para;
    param_ptr->msg_header.submit.pid = pid;
    param_ptr->msg_header.submit.dcs = dcs;
    param_ptr->msg_header.submit.vp = vp;
    param_ptr->msg_header.submit.udhi = udhi;
    param_ptr->msg_header.submit.tp_srr = tp_srr;
    param_ptr->msg_header.submit.tp_rp = tp_rp;
    param_ptr->msg_header.submit.da_tag = KAL_TRUE;

    param_ptr->msg_header.submit.da.addr_bcd[0] = dest.type;
    param_ptr->msg_header.submit.da.addr_length = convert_to_bcd(
                                                    (kal_uint8*) dest.number,
                                                    (kal_uint8*) & (param_ptr->msg_header.submit.da.addr_bcd[1]),
                                                    40) + 1;

    param_ptr->msg_header.submit.sc_addr.addr_bcd[0] = sca.type;
    param_ptr->msg_header.submit.sc_addr.addr_length = convert_to_bcd(
                                                        (kal_uint8*) sca.number,
                                                        (kal_uint8*) & (param_ptr->msg_header.submit.sc_addr.addr_bcd[1]),
                                                        40) + 1;

    l4c_ptr->sms_num[src_id]++;

    dn_type = l4csmu_get_dial_mode();
    if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
    {
        param_ptr->fdn_check = KAL_TRUE;
    }
    else
    {
        param_ptr->fdn_check = KAL_FALSE;
    }

    param_ptr->mms_mode = mms_mode;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_REQ, param_ptr, msg, length);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_post_pdu_req
 * DESCRIPTION
 *  In pdu mode, this function is called by rmmi_cmgs_hdlr()
 *  and sends  MSG_ID_L4CSMSAL_SEND_REQ to MOD SMSAL.
 * PARAMETERS
 *  src_id          [IN]        
 *  reply_index     [IN]        
 *  data_len        [IN]        
 *  length          [IN]        
 *  pdu             [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_post_pdu_req(
            kal_uint8 src_id,
            kal_uint16 reply_index,
            kal_uint16 data_len,
            kal_uint8 source_id,
            kal_uint8 seq_num,
            kal_uint8 mms_mode,
            kal_uint16 length,//pdu length
            kal_uint8 *pdu)
{
    l4csmsal_send_req_struct *param_ptr;
#if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI)
    l4c_context_struct *l4c_ptr = L4C_PTR;
#endif

    if (is_sms_cmd_conflict(src_id, CMGS_PDU_EXE) == KAL_TRUE)
    {
        if (source_id <= LMMI_SRC2)
        {
            l4c_sms_send_pdu_msg_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE, source_id, 0, seq_num);
            return KAL_TRUE;    
        }
        else
        {
            return KAL_FALSE;   
        }  
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGS_PDU_EXE);

    #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI)
    {
    	l4c_ptr->sms_num[src_id]++;
    }
    #endif

    param_ptr = construct_local_para((kal_uint16) sizeof(l4csmsal_send_req_struct), TD_RESET);

    param_ptr->req_type = SMSAL_SEND_MSG;
    param_ptr->message_len = length;    //mtk00924 2005_0426 : pass the whole PDU length
    param_ptr->reply_index = reply_index;

    #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #elif defined(__SMS_STORAGE_BY_MMI__)
    {
        kal_uint8 dn_type;
        if (src_id <= LMMI_SRC2)
        {
    	    param_ptr->src_id = source_id;
        }
        else
        {
    	    param_ptr->src_id = src_id;
        }  
        param_ptr->mms_mode = mms_mode;
        param_ptr->seq_num = seq_num;

        dn_type = l4csmu_get_dial_mode();
        if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
        {
            param_ptr->fdn_check = KAL_TRUE;
        }
        else
        {
            param_ptr->fdn_check = KAL_FALSE;
        }

        param_ptr->msg_header.submit.da_tag = KAL_FALSE;
    }   
    #else
    {
        kal_uint8 dn_type;

        param_ptr->src_id = src_id;

        dn_type = l4csmu_get_dial_mode();
        if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
        {
            param_ptr->fdn_check = KAL_TRUE;
        }
        else
        {
            param_ptr->fdn_check = KAL_FALSE;
        }
    }
    #endif

    if (src_id <= LMMI_SRC2)
    {
        #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #elif defined(__SMS_STORAGE_BY_MMI__)
        {
            param_ptr->seq_num = seq_num;
        }
        #else
        {
            param_ptr->seq_num = 0;
        }
        #endif
    }
    else 
    {
    	param_ptr->seq_num = 1;
    }

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_REQ, param_ptr, pdu, length);    //mtk00924 2005_0418 : pass the whole PDU data including SC

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_write_msg_req
 * DESCRIPTION
 *  In text mode, this function is called by rmmi_cmgw_hdlr() and L4A MSG_ID_MMI_SMS_SET_MSG_REQ
 *  and sends  MSG_ID_L4CSMSAL_WRITE_REQ to MOD SMSAL.
 * PARAMETERS
 *  src_id      [IN]        
 *  profile     [IN]        
 *  status      [IN]        
 *  dest        [IN]        
 *  para        [IN]        
 *  sca         [IN]        
 *  scts        [?]         
 *  vp          [IN]        
 *  pid         [IN]        
 *  udhi        [IN]        
 *  dcs         [IN]        
 *  index       [IN]        
 *  length      [IN]        
 *  msg         [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_write_msg_req(
            kal_uint8 src_id,
            kal_uint8 profile,
            kal_uint8 status,
            l4c_number_struct dest,
            kal_uint16 para,
            l4c_number_struct sca,
            kal_uint8 *scts,
            kal_uint8 vp,
            kal_uint8 pid,
            kal_uint8 udhi,
            kal_uint8 dcs,
            kal_uint16 index,
            kal_uint16 length,
            kal_uint8 *msg,
            kal_uint8 tp_srr,
            kal_uint8 tp_mms,
            kal_uint8 tp_rp,
            kal_uint8 tp_sri)
{
    l4csmsal_write_req_struct *param_ptr;
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
#endif
    
    if (is_sms_cmd_conflict(src_id, CMGW_EXE) == KAL_TRUE)
    {
        #ifndef __SMS_STORAGE_BY_MMI__
        if (src_id <= LMMI_SRC2)
        {
            l4c_sms_exe_write_msg_lrsp(KAL_FALSE, CM_L4C_GEN_CAUSE,index,status,0,src_id);
            return KAL_TRUE;
        }
        else
        #endif
        {
            return KAL_FALSE;   
        }	
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGW_EXE);

    param_ptr = (l4csmsal_write_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_write_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->status = status;
    param_ptr->message_len = length;
    param_ptr->replace_index = index;

    #ifndef __SMS_STORAGE_BY_MMI__
    if (status == SMSAL_STO_UNSENT || status == SMSAL_STO_SENT|| status == SMSAL_STO_DRAFT)
    #endif
    {
        kal_mem_cpy(&(param_ptr->scts[0]), scts, 7);

        #ifndef __SMS_STORAGE_BY_MMI__
        if (src_id <= LMMI_SRC2)
        {
        	param_ptr->hdr.mo_sms_hdr.profile_no_tag = KAL_TRUE;
        }
        else
        #endif
        {
        	param_ptr->hdr.mo_sms_hdr.profile_no_tag = KAL_FALSE;
        }

        param_ptr->hdr.mo_sms_hdr.profile_no = profile;
        param_ptr->hdr.mo_sms_hdr.para_ind = para;
        param_ptr->hdr.mo_sms_hdr.pid = pid;
        param_ptr->hdr.mo_sms_hdr.dcs = dcs;
        param_ptr->hdr.mo_sms_hdr.vp = vp;
        param_ptr->hdr.mo_sms_hdr.udhi = udhi;
        param_ptr->hdr.mo_sms_hdr.da_tag = KAL_TRUE;

        param_ptr->hdr.mo_sms_hdr.da.addr_bcd[0] = dest.type;
        if((dest.type & 0xf0) == 0xd0)
        {
            if (dest.length > 40)
                dest.length = 40;
            
            param_ptr->hdr.mo_sms_hdr.da.addr_length = dest.length + 1;
            kal_mem_cpy(&(param_ptr->hdr.mo_sms_hdr.da.addr_bcd[1]), 
                        &(dest.number[0]), 
                        dest.length);
        }
        else
        {
            param_ptr->hdr.mo_sms_hdr.da.addr_length = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->hdr.mo_sms_hdr.da.addr_bcd[1]), 40) + 1;
        }
        
        param_ptr->hdr.mo_sms_hdr.sc_addr.addr_bcd[0] = sca.type;
        param_ptr->hdr.mo_sms_hdr.sc_addr.addr_length = convert_to_bcd((kal_uint8*) sca.number, (kal_uint8*) & (param_ptr->hdr.mo_sms_hdr.sc_addr.addr_bcd[1]), 40) + 1;

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
        #elif defined(__SMS_STORAGE_BY_MMI__)
        {
            kal_uint8 msg_format;
            kal_uint8 data[SMSAL_SMS_LEN];
            smsal_prefer_storage_struct mem;
			
            smsal_cmgf_query(&msg_format);
            l4c_sms_get_preferred_mem_req(src_id, &mem);
       	     
            /* check destination address */
            if ((param_ptr->hdr.mo_sms_hdr.da_tag == KAL_TRUE) &&
                (param_ptr->hdr.mo_sms_hdr.da.addr_length > SMSAL_ADDR_LEN))
            {
                free_local_para((local_para_struct *) param_ptr);
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                return KAL_FALSE;
		    }
				
            kal_mem_set(data, 0xff, SMSAL_SMS_LEN);     /* reset */
		
            smsal_construct_msg_to_storage(data,
                                           param_ptr,
                                           param_ptr->message_len,
                                           (kal_uint8 *) msg);
            param_ptr->message_len = 175;
		
            if (mem.mem2 == SMSAL_SM_PREFER)
            {
                mem.mem2 = SMSAL_SM;
            }
            else if (mem.mem2 == SMSAL_ME_PREFER)
            {
                mem.mem2 = SMSAL_ME;
            }
		
            l4c_sms_atcmd_cmgw_lind(src_id, mem.mem2, param_ptr->status, param_ptr->message_len, data+1);

            free_local_para((local_para_struct *) param_ptr);
        }   
        #else
        {
            l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_WRITE_REQ, param_ptr, msg, length);
        }
        #endif
    }
    #ifndef __SMS_STORAGE_BY_MMI__
    else if (status == SMSAL_REC_UNREAD ||status == SMSAL_REC_READ)
    {
        kal_mem_cpy(&(param_ptr->hdr.mt_sms_hdr.tp_scts[0]), scts, 7);
		   
        param_ptr->hdr.mt_sms_hdr.para_ind = para;
        param_ptr->hdr.mt_sms_hdr.tp_mms = tp_mms;
        param_ptr->hdr.mt_sms_hdr.tp_rp = tp_rp;
        param_ptr->hdr.mt_sms_hdr.tp_mms = tp_mms;
        param_ptr->hdr.mt_sms_hdr.tp_udhi = udhi;
        param_ptr->hdr.mt_sms_hdr.tp_sri= tp_sri;
        param_ptr->hdr.mt_sms_hdr.pid = pid;
        param_ptr->hdr.mt_sms_hdr.dcs = dcs;

        param_ptr->hdr.mt_sms_hdr.oa.addr_bcd[0] = dest.type;
        if((dest.type & 0xf0) == 0xd0)
        {
            if (dest.length > 40)
                dest.length = 40;

            param_ptr->hdr.mt_sms_hdr.oa.addr_length = dest.length + 1;
            kal_mem_cpy(&(param_ptr->hdr.mt_sms_hdr.oa.addr_bcd[1]), 
                        &(dest.number[0]), 
                        dest.length);
        }
        else
        {
            param_ptr->hdr.mt_sms_hdr.oa.addr_length = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->hdr.mt_sms_hdr.oa.addr_bcd[1]), 40) + 1;
        }

        param_ptr->hdr.mt_sms_hdr.sc_addr.addr_bcd[0] = sca.type;
        param_ptr->hdr.mt_sms_hdr.sc_addr.addr_length = convert_to_bcd((kal_uint8*) sca.number, (kal_uint8*) & (param_ptr->hdr.mt_sms_hdr.sc_addr.addr_bcd[1]), 40) + 1;
        
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_WRITE_REQ, param_ptr, msg, length);
    }
    #endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_write_pdu_req
 * DESCRIPTION
 *  In text mode, this function is called by rmmi_cmgw_hdlr()
 *  and sends  MSG_ID_L4CSMSAL_WRITE_REQ to MOD SMSAL.
 * PARAMETERS
 *  src_id          [IN]        
 *  status          [IN]        
 *  data_len        [IN]        
 *  length          [IN]        
 *  pdu             [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_write_pdu_req(
            kal_uint8 src_id,
            kal_uint8 status,
            kal_uint16 data_len,
            kal_uint16 length,
            kal_uint8 *pdu)
{
    l4csmsal_write_req_struct *param_ptr;
#if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
#endif

    if (is_sms_cmd_conflict(src_id, CMGW_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CMGW_EXE);

    param_ptr = (l4csmsal_write_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_write_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->status = status;
    param_ptr->message_len = length;    //mtk00924 2005_0426 : pass the whole PDU length

    kal_mem_set(&(param_ptr->scts[0]), 0xff, 7);
    param_ptr->replace_index = 0xffff;

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #elif defined(__SMS_STORAGE_BY_MMI__)
    {
        kal_uint8 msg_format;
        kal_uint8 data[SMSAL_SMS_LEN];
        kal_uint8 retval;
        smslib_general_struct general_sms_pdu;
        smsal_prefer_storage_struct mem;
		
        smsal_cmgf_query(&msg_format);
		
        l4c_sms_get_preferred_mem_req(src_id, &mem);

        kal_mem_cpy(data+1, (kal_uint8 *) pdu, param_ptr->message_len);

        retval = smslib_decode_pdu(data+1, param_ptr->message_len, &general_sms_pdu);

        if(retval != SMSLIB_STATUS_OK)
        {
            //rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, SMSAL_UNSPECIFIED_ERROR_CAUSE, KAL_TRUE);
            free_local_para((local_para_struct *) param_ptr);
            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
            smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
            return KAL_FALSE;
        }

        smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);

        if (mem.mem2 == SMSAL_SM_PREFER)
        {
            mem.mem2 = SMSAL_SM;
        }
        else if (mem.mem2 == SMSAL_ME_PREFER)
        {
            mem.mem2 = SMSAL_ME;
        }

        l4c_sms_atcmd_cmgw_lind(src_id, mem.mem2, param_ptr->status, param_ptr->message_len, data+1);

        free_local_para((local_para_struct *) param_ptr);
    }
    #else
    {
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_WRITE_REQ, param_ptr, pdu, length);
    }
    #endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_more_req
 * DESCRIPTION
 *  This function is called by rmmi_cmms_hdlr() and L4A MSG_ID_MMI_SMS_SET_MORE_REQ
 *  and calls smsal_cmms_set().
 *  Set command controls the continuity of SMS relay protocol link.
 *  When feature is enabled (and supported by network) multiple messages can be sent much faster as link is kept open.
 *  0 disable
 *  1,2 1 keep enabl (see 07.05 +CMMS)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_more_req(kal_uint8 src_id, kal_uint8 mode)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 result;

    result = smsal_cmms_set(mode);

    if (result == SMSAL_NO_ERROR)
    {
        ret_val = KAL_TRUE;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_more_req
 * DESCRIPTION
 *  This function is called by rmmi_cmms_hdlr() and L4A MSG_ID_MMI_GMS_SET_MORE_REQ
 *  and calls smsal_cmms_query().
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_more_req(kal_uint8 src_id, kal_uint8 *mode)
{
    smsal_cmms_query(mode);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_storage_post_req
 * DESCRIPTION
 *  This function is called by rmmi_cmss_hdlr() and L4A MSG_ID_MMI_SMS_SEND_STORAGE_MSG_REQ
 *  and calls l4c_retry_hdlr() -> l4c_send_queued_msg() to send MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ
 *  +CMSS is to send message with location value <index> from message storage <mem2> to the network
 * PARAMETERS
 *  src_id              [IN]        
 *  index               [IN]        
 *  reply_index         [IN]        
 *  addr_present        [IN]        
 *  dest                [IN]        
 *  profile_no_tag      [IN]        
 *  profile_no          [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_storage_post_req(
            kal_uint8 src_id,
            kal_uint16 index,
            kal_uint16 reply_index,
            kal_bool addr_present,
            l4c_number_struct dest,
            kal_uint8 profile_no_tag,
            kal_uint8 profile_no)
{
#if defined(__SMS_STORAGE_BY_MMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif

    if (is_sms_cmd_conflict(src_id, CMSS_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CMSS_EXE);

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
/* under construction !*/
    #elif defined(__SMS_STORAGE_BY_MMI__)
    {		
        smsal_prefer_storage_struct mem;
        kal_uint8 count;

        l4c_sms_get_preferred_mem_req(src_id, &mem);
        if (mem.mem2 == SMSAL_SM_PREFER)
        {
            mem.mem2 = SMSAL_SM;
        }
        else if (mem.mem2 == SMSAL_ME_PREFER)
        {
            mem.mem2 = SMSAL_ME;
        }

        rmmi_ptr->cmss_da_tag = addr_present;
        if (addr_present)
        {
            rmmi_ptr->cmss_da.addr_bcd[0] = dest.type;

            count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (rmmi_ptr->cmss_da.addr_bcd[1]), 40);

            rmmi_ptr->cmss_da.addr_length = count + 1;
        }
	   
	l4c_sms_atcmd_cmgr_lind(src_id, mem.mem2, index, rmmi_ptr->esmss_mode); 
    }
    #else
    {
        l4csmsal_send_from_storage_req_struct *param_ptr;
        kal_uint8 count;
        kal_uint8 dn_type;
	
        param_ptr = (l4csmsal_send_from_storage_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_send_from_storage_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->index = index;
        param_ptr->reply_index = reply_index;
        param_ptr->da_tag = addr_present;
        param_ptr->profile_no_tag = profile_no_tag;
        param_ptr->profile_no = profile_no;

        if (addr_present)
        {
            param_ptr->da.addr_bcd[0] = dest.type;

            count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->da.addr_bcd[1]), 40);

            param_ptr->da.addr_length = count + 1;
        }

        dn_type = l4csmu_get_dial_mode();
        if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
        {
            param_ptr->fdn_check = KAL_TRUE;
        }
        else
        {
            param_ptr->fdn_check = KAL_FALSE;
        }

        if (src_id <= LMMI_SRC2)
        {
            #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #elif defined(__SMS_STORAGE_BY_MMI__)
            {
                // won't call this function
            }
            #else
            {
                param_ptr->seq_num = 0;
            }
            #endif
        }
        else 
        {
    	    param_ptr->seq_num = 1;
        }
	
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_FROM_STORAGE_REQ, param_ptr, NULL, 0);
    }
    #endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_msg_ind_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_cnmi_hdlr() and L4A MSG_ID_MMI_SMS_SET_REPORT_MODE_REQ
 *  and calls smsal_cnmi_set(). +CNMI (New Message Indications to TE)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 *  mt          [IN]        
 *  bm          [IN]        
 *  ds          [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_msg_ind_mode_req(kal_uint8 src_id, kal_uint8 mode, kal_uint8 mt, kal_uint8 bm, kal_uint8 ds)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 result;
    smsal_mt_msg_route_struct info;

    if (is_sms_cmd_conflict(src_id, CNMI_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    info.mode = mode;
    info.mt = mt;
    info.bm = bm;
    info.ds = ds;

    result = smsal_cnmi_set(info);

    if (result == SMSAL_NO_ERROR)
    {
        ret_val = KAL_TRUE;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_msg_ind_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_cnmi_hdlr() and L4A MSG_ID_MMI_SMS_GET_REPORT_MODE_REQ
 *  and calls smsal_cnmi_query(). +CNMI (New Message Indications to TE)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [?]         
 *  mt          [?]         
 *  bm          [?]         
 *  ds          [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_msg_ind_mode_req(
            kal_uint8 src_id,
            kal_uint8 *mode,
            kal_uint8 *mt,
            kal_uint8 *bm,
            kal_uint8 *ds)
{
    smsal_mt_msg_route_struct info;

    smsal_cnmi_query(&info);

    *mode = info.mode;
    *mt = info.mt;
    *bm = info.bm;
    *ds = info.ds;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_send_ack_req
 * DESCRIPTION
 *  This function is called by rmmi_cnma_hdlr() and L4A MSG_ID_MMI_SMS_SEND_ACK_REQ
 *  and calls smsal_cnma_exe(). New Message Acknowledgement to ME/TA (+CNMA)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 *  length      [IN]        
 *  ack         [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_exe_send_ack_req(kal_uint8 src_id, kal_uint8 mode, kal_uint16 length, kal_uint8 *ack)
{
    kal_bool ret_val = KAL_FALSE;
    peer_buff_struct *pdu_ptr = NULL;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 result;
    kal_uint16 len;

    if (length > 0)
    {
        if (length >= 2048)
        {
            ASSERT(0);
        }

        pdu_ptr = (peer_buff_struct*) construct_peer_buff(
                                        length,
                                        0,  /* no header */
                                        0,  /* no tail */
                                        TD_DL);
        pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(pdu_ptr, &len);
        kal_mem_cpy(pdu_stream_ptr, ack, length);
    }

    result = smsal_cnma_exe(src_id, mode, pdu_ptr);
    if (result == SMSAL_NO_ERROR)
    {
        ret_val = KAL_TRUE;
    }

    free_peer_buff(pdu_ptr);	
    
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_preferred_mem_req
 * DESCRIPTION
 *  This function is called by rmmi_cpms_hdlr() and L4A MSG_ID_MMI_SMS_SET_PREFERRED_STORAGE_REQ
 *  and sends MSG_ID_L4CSMSAL_SET_PARAMETER_REQ. Preferred Message Storage (+CPMS)
 * PARAMETERS
 *  src_id      [IN]        
 *  mem1        [IN]        
 *  mem2        [IN]        
 *  mem3        [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_preferred_mem_req(kal_uint8 src_id, kal_uint8 mem1, kal_uint8 mem2, kal_uint8 mem3)
{

    l4csmsal_set_common_para_req_struct *param_ptr;
    kal_uint16 para_ind = 0;

    if (is_sms_cmd_conflict(src_id, CPMS_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SMS, src_id, CPMS_SET);

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = para_ind | SMSAL_COM_PARA_PREFER_MEM;
    param_ptr->prefer_mem.mem1 = mem1;
    param_ptr->prefer_mem.mem2 = mem2;
    param_ptr->prefer_mem.mem3 = mem3;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_preferred_mem_req
 * DESCRIPTION
 *  This function is called by rmmi_cpms_hdlr() and L4A MSG_ID_MMI_SMS_GET_PREFERRED_STORAGE_REQ
 *  and calls smsal_cpms_query().
 * PARAMETERS
 *  src_id      [IN]        
 *  info        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_preferred_mem_req(kal_uint8 src_id, smsal_prefer_storage_struct *info)
{
    smsal_prefer_storage_struct *mem = NULL;

    mem = info;
    smsal_cpms_query(info);
    smsal_cpms_query(mem);
}

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
 * FUNCTION
 *  l4c_smsal_eqsi_query
 * DESCRIPTION
 *  This function get index range of memory storage
 * PARAMETERS
 *  src_id      [IN]        
 *  info        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_smsal_eqsi_query(rmmi_smsal_storage_enum  mem,
                          kal_uint16 	    *beg_index,
                          kal_uint16	    *end_index,
                          kal_uint16          *used)
{
    kal_bool ret_val;
    ret_val = smsal_eqsi_query(mem,
                          beg_index,
                          end_index,
                          used);
    return ret_val;
}
#endif

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

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_sc_addr_req
 * DESCRIPTION
 *  This function is called by rmmi_csca_hdlr() and L4A MSG_ID_MMI_SMS_GET_SC_ADDR_REQ
 *  and calls smsal_csca_query().
 * PARAMETERS
 *  src_id          [IN]        
 *  profile_no      [IN]        
 *  sc_addr         [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_sc_addr_req(kal_uint8 src_id, kal_uint8 profile_no, l4c_number_struct *sc_addr)
{
    l4_addr_bcd_struct sca;

    kal_mem_set(sc_addr, 0, sizeof(l4c_number_struct));

    smsal_csca_query(&sca, profile_no);
    if (sca.addr_length > 0)
    {
        sc_addr->type = sca.addr_bcd[0];

        sc_addr->length = convert_to_digit((kal_uint8*) & (sca.addr_bcd[1]), (kal_uint8*) sc_addr->number);
    }
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

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_post_params_req
 * DESCRIPTION
 *  This function is called by rmmi_csmp_hdlr() and L4A MSG_ID_MMI_SMS_GET_POST_PARAMS_REQ
 *  and calls smsal_csmp_query.
 * PARAMETERS
 *  src_id              [IN]        
 *  profile_no          [IN]        
 *  fo                  [?]         
 *  pid                 [?]         
 *  dcs                 [?]         
 *  vp                  [?]         
 *  profile_name        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_post_params_req(
            kal_uint8 src_id,
            kal_uint8 profile_no,
            kal_uint8 *fo,
            kal_uint8 *pid,
            kal_uint8 *dcs,
            kal_uint8 *vp,
            l4_name_struct *profile_name)
{
    smsal_csmp_query(profile_no, fo, vp, pid, dcs);
    if (profile_name != NULL)
    {
        smsal_get_profile_name(profile_no, profile_name);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_service_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_csms_hdlr() and L4A MSG_ID_MMI_SMS_SET_SERVICE_MODE_REQ
 *  and calls smsal_csms_set(). Select Message Service (+CSMS)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_service_mode_req(kal_uint8 src_id, kal_uint8 mode)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 result;

    result = smsal_csms_set(mode);

    if (result == SMSAL_NO_ERROR)
    {
        ret_val = KAL_TRUE;
    }
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_service_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_csms_hdlr() and L4A MSG_ID_MMI_SMS_GET_SERVICE_MODE_REQ
 *  and calls smsal_csms_query(). Select Message Service (+CSMS)
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [?]         
 *  info        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_get_service_mode_req(kal_uint8 src_id, kal_uint8 *mode, smsal_service_mode_struct *info)
{
    smsal_csms_query(mode, info);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_no_msgs_req
 * DESCRIPTION
 *  This function is called by rmmi_csmn_hdlr() and L4A MSG_ID_MMI_SMS_GET_MSG_NUM_REQ
 *  and calls smsal_get_msgbox_num() to get number of messages in inbox/outbox. (+CSMN)
 * PARAMETERS
 *  src_id                  [IN]        
 *  is_sim_card_change      [?]         
 *  in_sim_no               [?]         
 *  in_me_no                [?]         
 *  out_sim_no              [?]         
 *  out_me_no               [?]         
 *  unread_msg_num          [?]         
 *  total_sim_num           [?]         
 *  total_me_num            [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_get_no_msgs_req(
            kal_uint8 src_id,
            kal_bool *is_sim_card_change,
            kal_uint16 *in_sim_no,
            kal_uint16 *in_me_no,
            kal_uint16 *out_sim_no,
            kal_uint16 *out_me_no,
            kal_uint16 *unread_msg_num,
            kal_uint16 *total_sim_num,
            kal_uint16 *total_me_num)
{
    return smsal_get_msgbox_num(
            NULL,
            is_sim_card_change,
            in_sim_no,
            in_me_no,
            out_sim_no,
            out_me_no,
            unread_msg_num,
            total_sim_num,
            total_me_num);

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_no_profiles_req
 * DESCRIPTION
 *  This function is called by rmmi_cmpi_hdlr() and L4A MSG_ID_MMI_SMS_GET_PROFILE_NUM_REQ
 *  and calls smsal_get_profile_info(). (+CMPI)
 * PARAMETERS
 *  src_id          [IN]        
 *  profile_no      [?]         
 *  name_len        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_get_no_profiles_req(kal_uint8 src_id, kal_uint8 *profile_no, kal_uint8 *name_len)
{
    smsal_get_profile_info(profile_no, name_len);
    return KAL_TRUE;
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

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_rmmi_sc_addr_req
 * DESCRIPTION
 *  This function is called by rmmi_csca_hdlr() to change Service Centre Address (+CSCA)
 *  mtk00714 add on 2004/06/14
 * PARAMETERS
 *  src_id      [IN]        
 *  sc_addr     [IN]        
 * RETURNS
 *****************************************************************************/
void l4c_sms_set_rmmi_sc_addr_req(kal_uint8 src_id, l4c_number_struct sc_addr)
{
    l4_addr_bcd_struct sca;
    kal_uint8 count;

    sca.addr_bcd[0] = sc_addr.type;
    count = convert_to_bcd((kal_uint8*) sc_addr.number, (kal_uint8*) & (sca.addr_bcd[1]), 40);
    sca.addr_length = count + 1;
    smsal_csca_set(sca);

    //always set csca successfully
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
    #endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_rmmi_post_params_req
 * DESCRIPTION
 *  This function is called by rmmi_csmp_hdlr() and set Text Mode Parameters +CSMP
 *  mtk00714 add on 2004/06/14
 * PARAMETERS
 *  src_id          [IN]        
 *  profile_no      [IN]        
 *  para_ind        [IN]        
 *  fo              [IN]        
 *  pid             [IN]        
 *  dcs             [IN]        
 *  vp              [IN]        
 * RETURNS
 *****************************************************************************/
kal_bool l4c_sms_set_rmmi_post_params_req(
            kal_uint8 src_id,
            kal_uint8 profile_no,//dummy
            kal_uint16 para_ind,
            kal_uint8 fo,
            kal_uint8 pid,
            kal_uint8 dcs,
            kal_uint8 vp)
{
    kal_uint16 ret_val;

    ret_val = smsal_csmp_set(profile_no, (kal_uint8) para_ind, fo, vp, pid, dcs);
    if (ret_val == SMSAL_NO_ERROR)
    {
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
        #elif defined(__SMS_STORAGE_BY_MMI__)
        {
            #ifndef __MMI_FMI__
            l4csmsal_set_common_para_req_struct *param_ptr;
            param_ptr = (l4csmsal_set_common_para_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

            param_ptr->para_ind = (SMSAL_COM_PARA_STATUS_REP | SMSAL_COM_PARA_REPLY_PATH);
            if (fo & 0x20) 
            {
    	        param_ptr->status_report = KAL_TRUE;
            }
            else
            {
                param_ptr->status_report = KAL_FALSE;
            }
            if (fo & 0x80) 
            {
                param_ptr->reply_path = KAL_TRUE;
            }
            else
            {
                param_ptr->reply_path = KAL_FALSE;
            }  
            l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);
            #endif
        }
        #else
        {
            #ifndef __MMI_FMI__
            l4csmsal_set_common_para_req_struct *param_ptr;
            param_ptr = (l4csmsal_set_common_para_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

            param_ptr->para_ind = (SMSAL_COM_PARA_STATUS_REP | SMSAL_COM_PARA_REPLY_PATH);
            if (fo & 0x20) 
            {
                param_ptr->status_report = KAL_TRUE;
            }
            else
            {
                param_ptr->status_report = KAL_FALSE;
            }
            if (fo & 0x80) 
            {
                param_ptr->reply_path = KAL_TRUE;
            }
            else
            {
                param_ptr->reply_path = KAL_FALSE;
            }  
            l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);
            #endif
        }
        #endif

        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_save_settings_req
 * DESCRIPTION
 *  This function is called by rmmi_csas_hdlr() to save settings +CSAS
 *  mtk00714 add on 2004/06/14
 * PARAMETERS
 *  src_id          [IN]        
 *  profile_id      [IN]        
 * RETURNS
 *****************************************************************************/
void l4c_sms_exe_save_settings_req(kal_uint8 src_id, kal_uint8 profile_id)
{
    l4csmsal_set_profile_para_req_struct *param_ptr;

    param_ptr = (l4csmsal_set_profile_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_profile_para_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->profile_no = profile_id;
    param_ptr->para_ind = SMSAL_PARA_SAVE_PROFILE;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_PROFILE_PARA_REQ, param_ptr, NULL, 0);

    l4c_set_user_action(L4C_SMS, src_id, CSAS_SET);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_restore_settings_req
 * DESCRIPTION
 *  This function is called by rmmi_cres_hdlr() to restore settings +CRES
 *  mtk00714 add on 2004/06/14
 * PARAMETERS
 *  src_id          [IN]        
 *  profile_id      [IN]        
 * RETURNS
 *****************************************************************************/
void l4c_sms_exe_restore_settings_req(kal_uint8 src_id, kal_uint8 profile_id)
{
    l4csmsal_set_common_para_req_struct *param_ptr;

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->dest_no = profile_id;
    param_ptr->para_ind = SMSAL_COM_PARA_RESTORE_PROFILE;
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_abort_req
 * DESCRIPTION
 *  This function is called by rmmi_csma_hdlr() and L4A MSG_ID_MMI_SMS_ABORT_REQ
 *  and sends MSG_ID_L4CSMSAL_SEND_ABORT. (send sms abort +CSMA)
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_sms_exe_abort_req(kal_uint8 src_id, kal_uint8 seq_num)
{
    l4csmsal_send_abort_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    //mtk01616_081117: only one abort request at a time is allowed in smsal
    if ((l4c_ptr->sms_abort_ongoing == KAL_FALSE) &&
    (
        #ifndef __SMS_STORAGE_BY_MMI__ 
        (l4c_ptr->sms_current_action[src_id] == CMSS_EXE) || 
        #endif
        (l4c_ptr->sms_current_action[src_id] == CMGS_EXE) ||
        (l4c_ptr->sms_current_action[src_id] == CMGS_PDU_EXE) ||
        (l4c_ptr->sms_current_action[SAT_SRC] == SAT_CMGS_EXE)))
    {
        // send abort req to smsal
        param_ptr = (l4csmsal_send_abort_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_send_abort_struct), TD_RESET);

        param_ptr->src_id = src_id;
        l4c_ptr->sms_abort_ongoing = KAL_TRUE;
	 	
        #ifdef __MMI_FMI__  
        if (src_id <= LMMI_SRC2)
	    {	
            #if defined(__SMS_STORAGE_BY_MMI__) && defined(WISDOM_MMI) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #elif defined(__SMS_STORAGE_BY_MMI__)
            {
                param_ptr->seq_num = seq_num;
            }
            #else
            {
                param_ptr->seq_num = 0;
            }
            #endif
}
	    else 
	    {
	    	param_ptr->seq_num = seq_num;
	    }
        #else
            param_ptr->seq_num = seq_num;
        #endif
	
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_ABORT, param_ptr, NULL, 0);

        #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI)
        {
            if (l4c_ptr->sms_num[src_id] > 0)
            {            	
                l4c_ptr->sms_num[src_id]--;
            }

            if (l4c_ptr->sms_num[src_id] == 0)
            {	
                    if (src_id <= LMMI_SRC2) 
                    {
                        l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);         
                    }
                    else
                    {
                        if (seq_num == 2) 
                        {
                            l4c_set_user_action(L4C_SMS, SAT_SRC, L4C_NO_ACTION); 
                        }
                        else
                        {                
                            l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                        }
                    }              
             }	
        }
        #else
        {
            l4c_ptr->sms_num[src_id] = 0;

            if (src_id <= LMMI_SRC2) 
            {
                l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);         
            }
            else
            {
                if (seq_num == 2) 
                {
                    l4c_set_user_action(L4C_SMS, SAT_SRC, L4C_NO_ACTION); 
                }
                else
                {                
                    l4c_set_user_action(L4C_SMS, src_id, L4C_NO_ACTION);
                }
            }   
        }
        #endif

        l4c_sms_send_abort_start_lind();
        l4c_sms_exe_abort_lrsp(KAL_TRUE, src_id, seq_num);
        return;
    }

    l4c_sms_send_abort_start_lind();
    l4c_sms_send_abort_finish_lind(KAL_TRUE, L4C_NO_CAUSE,src_id, seq_num);
    l4c_sms_exe_abort_lrsp(KAL_FALSE, src_id, seq_num);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_send_smma_req
 * DESCRIPTION
 *  To send L4CSMSAL_SEND_SMMA_REQ
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *****************************************************************************/
kal_bool l4c_sms_exe_send_smma_req(kal_uint8 src_id)
{
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_SMMA_REQ, NULL, NULL, 0);
    l4c_sms_exe_send_smma_lrsp(KAL_TRUE, src_id);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_set_msg_waiting_req
 * DESCRIPTION
 *  To send L4CSMSAL_SET_MSG_WAITING_REQ
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *****************************************************************************/
kal_bool l4c_sms_exe_set_msg_waiting_req(kal_uint8 src_id,kal_uint8  line_no,kal_uint8  waiting_num,kal_uint8  ind_type)
{
    l4csmsal_set_msg_waiting_req_struct *param_ptr;

    param_ptr = (l4csmsal_set_msg_waiting_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_msg_waiting_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->line_no = line_no;
    param_ptr->waiting_num = waiting_num;	
    param_ptr->ind_type = ind_type;
	
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_MSG_WAITING_REQ, param_ptr, NULL, 0);
    return KAL_TRUE;
}

#ifdef __CB__


/*****************************************************************************
 * FUNCTION
 *  l4c_cb_subscribe_req
 * DESCRIPTION
 *  This function is called by l4csmsal_cb_update_cnf_hdlr() and L4A MSG_ID_MMI_CB_SUBSCRIBE_REQ
 *  and sends MSG_ID_L4CSMSAL_SET_PARAMETER_REQ.
 * PARAMETERS
 *  src_id      [IN]        
 *  on_off      [IN]        
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cb_subscribe_req(kal_uint8 src_id, kal_uint8 on_off)
{
    l4csmsal_set_common_para_req_struct *param_ptr;

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = SMSAL_COM_PARA_CBCH_REQ;
    param_ptr->cbch_req = on_off;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_cb_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_cscb_hdlr() and L4A MSG_ID_MMI_SMS_GET_CB_MODE_REQ
 *  and calls smsal_cb_get_status. Select Cell Broadcast Message Types (+CSCB)
 * PARAMETERS
 *  src_id              [IN]        
 *  mode                [?]         
 *  total_mid_num       [?]         
 *  total_mir_num       [?]         
 *  total_dcs_num       [?]         
 *  info                [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_get_cb_mode_req(
            kal_uint8 src_id,
            kal_uint8 *mode,
            kal_uint8 *total_mid_num,
            kal_uint8 *total_mir_num,
            kal_uint8 *total_dcs_num,
            l4c_cb_info_struct *info)
{
#ifdef __CB__
    //kal_uint8 temp;

    smsal_cb_get_status(mode, total_mid_num, total_mir_num, total_dcs_num, info);
    /* if (temp == 0)
      mode = 1;
     else if (temp == 1)
      mode = 0; */
#if defined(__SP_RIL_SUPPORT__)
    if (*total_dcs_num == 0)
    {
        *total_dcs_num = 1;
        info->dcs_mask[0] = KAL_TRUE;
        info->dcs[0] = 0x0080;
    }
#endif /* __SP_RIL_SUPPORT__ */ 
    return KAL_TRUE;
#else /* __CB__ */ 
    return KAL_FALSE;
#endif /* __CB__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_cb_mode_req
 * DESCRIPTION
 *  This function is called by rmmi_cscb_hdlr() and L4A MSG_ID_MMI_SMS_SET_CB_MODE_REQ
 *  and sends MSG_ID_L4CSMSAL_CB_UPDATE_REQ. Select Cell Broadcast Message Types (+CSCB)
 * PARAMETERS
 *  src_id      [IN]        
 *  info        [?]         
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sms_set_cb_mode_req(kal_uint8 src_id, l4c_cb_info_struct *info)
{
    l4csmsal_cb_update_req_struct *param_ptr;
    kal_uint8 i ; 
#if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    l4c_context_struct *l4c_ptr = L4C_PTR;
#endif

    if (is_sms_cmd_conflict(src_id, CBMI_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4csmsal_cb_update_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_cb_update_req_struct), TD_RESET);

    param_ptr->para_ind = info->para_ind;
    param_ptr->src_id = src_id;
    param_ptr->is_all_language_on = info->is_all_language_on;
    kal_mem_cpy(param_ptr->mi, info->mid, SMSAL_MMI_CBMI_MAX_ENTRY * 2);
    kal_mem_cpy(param_ptr->dcs, info->dcs, SMSAL_CB_MAX_ENTRY * 2);

    for(i=0 ; i<SMSAL_MMI_CBMI_MAX_ENTRY ; i++)      // (kal_bool != kal_uint8)
    {
        param_ptr->mi_mask[i] = info->mid_mask[i];
    }

    for(i=0 ; i<SMSAL_CB_MAX_ENTRY ; i++)
    {
        param_ptr->dcs_mask[i] = info->dcs_mask[i];
        param_ptr->mir_mask[i] = info->mir_mask[i];
    }

    kal_mem_cpy(param_ptr->mir, info->mir, SMSAL_CB_MAX_ENTRY * 4);

#if defined(__GEMINI__) && defined(__ETWS_SUPPORT__) 
    param_ptr->set_type = info->set_type;
#else
    param_ptr->set_type = L4C_NORMAL_CB_UPDATE;
#endif
    
    //kal_prompt_trace(l4c_current_mod_id, "$$$ set_type to SMSAL = %d", param_ptr->set_type);

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_CB_UPDATE_REQ, param_ptr, NULL, 0);

    /* MAUI_02456921 * mtk02514 ***********
    * It is possible that MMI send SMS and set CB setting at the same time.
    * So in this case, sms_current_action would not be emptry
    * and we should not set the action here
    ************************************/
    #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 
    if (l4c_ptr->sms_current_action[src_id] == L4C_NO_ACTION)
    #endif
    {
        l4c_set_user_action(L4C_SMS, src_id, CBMI_SET);
    }
    return KAL_TRUE;
}
#endif /* __CB__ */ 

#ifdef __SAT__


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_send_sms_req
 * DESCRIPTION
 *  This function handles SAT related SMS procedure
 *  and sends MSG_ID_L4CSMSAL_SAT_SEND_REQ.
 * PARAMETERS
 *  local_ptr       [?]     
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_sat_send_sms_req(l4csmsal_sat_send_req_struct *local_ptr)
{
    if (is_sms_cmd_conflict(SAT_SRC, SAT_CMGS_EXE) == KAL_TRUE)
    {
    	if (local_ptr->src_id <= LMMI_SRC2)
    	{
            /* Johnny: res = 0x20 (ME currently unable to process command), cause = 0x00 (No specific cause can be given) */
            l4c_sat_send_sms_lrsp(0x20, 0x00);
            free_local_para((local_para_struct*) local_ptr);    /* Johnny: avoid memory leak */
            return KAL_TRUE; 
        }
	    else
	    {
            free_local_para((local_para_struct*) local_ptr);    /* Chinte: avoid memory leak */
            return KAL_FALSE;
        }
    }

    if (local_ptr->src_id <= LMMI_SRC2) 
    {
        // do nothing
    }
    else
    {
        local_ptr->seq_num = 2; 
    }
    
    #ifndef __RSAT__
    	local_ptr->src_id = SAT_SRC;
    #endif
	
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SAT_SEND_REQ, local_ptr, NULL, 0);

    l4c_set_user_action(L4C_SMS, SAT_SRC, SAT_CMGS_EXE);
    return KAL_TRUE;
}
#endif /* __SAT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_mailbox_addr_req
 * DESCRIPTION
 *  This function is used to set mailbox address.
 * PARAMETERS
 *  src_id          [IN]        
 *  mailbox_num     [IN]        
 *  num_addr        [IN]        
 *  name            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_mailbox_addr_req(
            kal_uint8 src_id,
            kal_uint8 mailbox_num,
            l4c_number_struct num_addr,
            l4_name_struct name)
{

    kal_uint8 dummy_mailbox_no;
    kal_uint8 max_num_length;
    smsal_mailbox_addr_struct mailbox_addr[SMSAL_MAX_MAILBOX_NUM];  
    l4csmsal_set_common_para_req_struct *param_ptr;

    kal_uint8 dummy_alpha_length;

    if (mailbox_num >= SMSAL_MAX_MAILBOX_NUM)    /* number of mailbox shoud be < SMSAL_MAX_MAILBOX_NUM */
    {
        return KAL_FALSE;
    }

    smsal_get_mailbox_addr(&dummy_mailbox_no, &dummy_alpha_length, &max_num_length, mailbox_addr);

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->dest_no = mailbox_num;
    param_ptr->para_ind = SMSAL_COM_PARA_MAILBOX_ADDR;
    param_ptr->mailbox_addr.addr.addr_bcd[0] = num_addr.type;

    param_ptr->mailbox_addr.addr.addr_length = convert_to_bcd(
                                                (kal_uint8*) num_addr.number,
                                                (kal_uint8*) & (param_ptr->mailbox_addr.addr.addr_bcd[1]),
                                                40) + 1;
    kal_mem_cpy((kal_uint8*) & (param_ptr->mailbox_addr.name), (kal_uint8*) & (name), sizeof(l4_name_struct));
    param_ptr->mailbox_addr.capability_id = mailbox_addr[mailbox_num].capability_id;
    param_ptr->mailbox_addr.extension_id = mailbox_addr[mailbox_num].extension_id;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);

    l4c_set_user_action(L4C_SMS, src_id, MAILBOX_SET);
    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_mailbox_addr_req
 * DESCRIPTION
 *  030613 tommy add for get mailbox info
 *  This function is used to get mailbox address.
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_get_mailbox_addr_req(kal_uint8 src_id)
{
    //mtk01616_071001: GET mailbox through message based flow
    l4csmsal_get_mailbox_num_req_struct *param_ptr;

    param_ptr = (l4csmsal_get_mailbox_num_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_get_mailbox_num_req_struct), TD_RESET);

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_GET_MAILBOX_NUM_REQ, param_ptr, NULL, 0);

    l4c_set_user_action(L4C_SMS, src_id, MAILBOX_GET);
    return KAL_TRUE;
}

// R4/R5 SMS


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_mbi_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  msp_no      [IN]        
 *  mbi         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_mbi_req(kal_uint8 src_id, kal_uint8 msp_no, smsal_mbi_struct mbi)
{
#ifdef __REL4__
    l4csmsal_set_common_para_req_struct *param_ptr;

    param_ptr = (l4csmsal_set_common_para_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_set_common_para_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->para_ind = SMSAL_COM_PARA_MBI_NUM;
    param_ptr->msp_no = msp_no;

    kal_mem_cpy((kal_uint8*) & (param_ptr->mbi), (kal_uint8*) & (mbi), sizeof(smsal_mbi_struct));

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SET_COMMON_PARA_REQ, param_ptr, NULL, 0);

    l4c_set_user_action(L4C_SMS, src_id, MBI_SET);
#endif /* __REL4__ */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_mbi_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  msp_num     [?]         
 *  mbi         [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_get_mbi_req(kal_uint8 src_id, kal_uint8 *msp_num, smsal_mbi_struct *mbi)
{
#ifdef __REL4__
    smsal_get_mbi(msp_num, mbi);
#endif 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_set_msp_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  msp_no      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_set_msp_req(kal_uint8 src_id, kal_uint8 msp_no)
{
#ifdef __REL4__
    kal_uint16 ret_val;

    ret_val = smsal_set_selected_msp(msp_no);

    if (ret_val != SMSAL_NO_ERROR)
    {
        return KAL_FALSE;
    }
#endif /* __REL4__ */ 
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_msp_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  msp_no      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_get_msp_req(kal_uint8 src_id, kal_uint8 *msp_no)
{
#ifdef __REL4__
    smsal_get_selected_msp(msp_no);
#endif 
    return KAL_TRUE;
}


#ifdef __CANCEL_LOCK_POWERON__           
/*****************************************************************************
 * FUNCTION
 *  l4c_smsal_init_me_sms_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  init_type  [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_smsal_init_me_sms_req(kal_uint8 src_id,kal_uint8 init_type)
{
    l4csmsal_init_me_sms_req_struct *param_ptr;

    param_ptr = (l4csmsal_init_me_sms_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_init_me_sms_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->init_type = init_type;
    param_ptr->is_sim_change = l4c_check_sim_status();
    
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_ME_SMS_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}
#endif /* __CANCEL_LOCK_POWERON__ */         


/*****************************************************************************
 * FUNCTION
 *  l4c_smsal_read_raw_data_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  src_id              [IN]       
 *  index               [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_smsal_read_raw_data_req(kal_uint8 src_id, kal_uint16 index)
{
#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__ 
    l4csmsal_read_raw_data_req_struct *param_ptr;

    param_ptr = (l4csmsal_read_raw_data_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_read_raw_data_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->index = index;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_RAW_DATA_REQ, param_ptr, NULL, 0);
 
 #endif
 
    return KAL_TRUE;	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smsal_write_raw_data_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  src_id          [IN]    
 *  storage_type    [IN]    
 *  data_len        [IN]          
 *  data         	[IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_smsal_write_raw_data_req(kal_uint8 src_id, kal_uint8 storage_type,kal_uint16 data_len,kal_uint8 *data)
{
#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__ 
    l4csmsal_write_raw_data_req_struct *param_ptr;
  
    param_ptr = (l4csmsal_write_raw_data_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_write_raw_data_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->storage_type = storage_type;
	
    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_WRITE_RAW_DATA_REQ, param_ptr, data, data_len);

#endif

    return KAL_TRUE;	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_reg_port_num_req
 * DESCRIPTION
 *  040312 mtk00468 add for get mailbox info
 *  This function is used to WMA for reg-dereg port number
 * PARAMETERS
 *  src_id              [IN]        
 *  enable              [IN]        
 *  port_num            [IN]        
 *  mod_id              [IN]        
 *  cause               [?]         
 *  ret_port_num        [?]         
 *  ret_mod_id          [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_reg_port_num_req(
            kal_uint8 src_id,
            kal_bool enable,
            kal_uint32 port_num,
            kal_uint16 mod_id,
            kal_uint16 *cause,
            kal_uint32 *ret_port_num,
            kal_uint16 *ret_mod_id,
            kal_uint8 *ret_source_id)
{
    *ret_port_num = port_num;
    *ret_mod_id = mod_id;
    *ret_source_id = src_id;	
    return smsal_reg_port_num((kal_uint8) enable, cause, port_num, mod_id);

}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_copy_msg_req
 * DESCRIPTION
 *  This function is used to copy message betwenn NVRAM and SIM
 * PARAMETERS
 *  src_id          [IN]        
 *  action          [IN]        
 *  dst_storage     [IN]        
 *  src_index       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sms_copy_msg_req(kal_uint8 src_id, kal_uint8 action, kal_uint8 dst_storage, kal_uint16 src_index)
{
#ifndef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_copy_msg_req_struct *param_ptr;

    param_ptr = (l4csmsal_copy_msg_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_copy_msg_req_struct), TD_RESET);
    param_ptr->action = action;
    param_ptr->dst_storage = dst_storage;
    param_ptr->src_index = src_index;

    l4c_set_user_action(L4C_SMS, src_id, CMGW_COPY);

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_COPY_MSG_REQ, param_ptr, NULL, 0);
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smsal_fdn_check_rsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smsal_fdn_check_rsp(kal_uint8 result, kal_uint16 cause)
{
    l4csmsal_fdn_check_rsp_struct *param_ptr;

    param_ptr = (l4csmsal_fdn_check_rsp_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_fdn_check_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->cause = cause;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_FDN_CHECK_RSP, param_ptr, NULL, 0);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_sync_msg_res_req
 * DESCRIPTION
 *  MMI sent the message to inform L4C the previous action is successful or fail
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_sync_msg_res_req(kal_bool result)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

#ifndef __SMS_STORAGE_BY_MMI__
    if (l4c_ptr->sms_current_action[l4c_ptr->route_thru_lmmi_user] == CMGL_EXE)
    {
              l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_READ_REQ, (void*)(l4c_ptr->parameter[l4c_ptr->route_thru_lmmi_user].data), NULL, 0);
    }
    else
    {
        if (l4c_ptr->route_thru_lmmi == KAL_TRUE)
        {
           rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;
	
           if (result == KAL_TRUE)
           {
               rmmi_result_code_fmttr(RMMI_RCODE_OK, 0);
           }
           else
           {
               rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
           }

           l4c_ptr->route_thru_lmmi = KAL_FALSE;
        }
     }
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_usm_general_rcode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_usm_general_rcode_req(
		kal_uint8 src_id,
		rmmi_usm_atcmd_enum atcmd_type,
		kal_uint32 atcmd_index,
		rmmi_usm_message_stat_enum tag_type,
		kal_bool iscomplete,
		kal_uint8 pdu_length,
		kal_uint8 *pdu,
		l4c_usm_cnmi_struct cnmi_parameter,
		l4c_usm_cmss_struct cmss_struct,
		kal_uint8 result,
		kal_uint16 cause)
{
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
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_sync_msg_storage_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_sync_msg_storage_req(
		kal_uint8 src_id,
		kal_uint32 sm_max_num, 
		kal_uint32 sm_current_num, 
		kal_uint32 me_max_num, 
		kal_uint32 me_current_num, 
		kal_uint32 sr_max_num, 
		kal_uint32 sr_current_num)
{
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
 *  l4c_sms_send_deliver_report_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_send_deliver_report_req(kal_uint8 src_id, kal_uint8 result, kal_uint32 error_cause, kal_uint8 mem, kal_uint32 index, kal_uint8 uid, kal_uint8 msg_class, kal_bool is_msg_wait, kal_uint8 msg_wait_store) 
{
#ifdef __SMS_STORAGE_BY_MMI__ 
    l4csmsal_send_deliver_report_req_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    param_ptr = (l4csmsal_send_deliver_report_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_send_deliver_report_req_struct), TD_RESET);

    #ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #else 
    {
        kal_uint8 mode, mt, bm, ds, temp_src;
        smsal_concat_struct concat_info; 
	
        l4c_sms_get_msg_ind_mode_req(src_id, &mode, &mt, &bm, &ds);

        /*msg_class : 
                0 class 0
                1 class 1
                2 class 2
                3 class 3
                4 no class
            msg_wait_store :
                0 message waiting indication group discard
                1 message waiting indication group store*/      
        if (mt == 1) //+CMTI
        {
            temp_src = rmmi_ptr->current_src;        
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            l4c_sms_new_msg_index_rind(index, mem, &concat_info);
            rmmi_ptr->current_src = temp_src;  
        }
        else if (mt == 2)
        {
            if (msg_class == 2 || (is_msg_wait == KAL_TRUE && msg_wait_store == 1))
            {
                temp_src = rmmi_ptr->current_src;        
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
                l4c_sms_new_msg_index_rind(index, mem, &concat_info);
                rmmi_ptr->current_src = temp_src; 
            }
        }
        else if (mt == 3)
        {
            if (msg_class == 0 || msg_class == 1 || msg_class == 2 || msg_class == 4 ||
                (is_msg_wait == KAL_TRUE && msg_wait_store == 0) ||
                (is_msg_wait == KAL_TRUE && msg_wait_store == 1))
            {
                temp_src = rmmi_ptr->current_src;        
                rmmi_ptr->current_src = RMMI_UNSOLICITED;
                l4c_sms_new_msg_index_rind(index, mem, &concat_info);
                rmmi_ptr->current_src = temp_src; 
            }
        }

        param_ptr->uid = uid;
    }
    #endif

    switch(result)
    {
        case KAL_TRUE:
        {
            param_ptr->result = KAL_TRUE;
        }
        break;

        default:
        {
            param_ptr->result = KAL_FALSE;
            param_ptr->error_cause = error_cause;
        }
        break;
    }

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_DELIVER_REPORT_REQ, param_ptr, NULL, 0);  
#endif

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_startup_read_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_startup_read_res_req(kal_uint8 src_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    kal_uint8 temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    	l4c_ptr->sms_ready_flag = KAL_TRUE;
    	temp_src = rmmi_ptr->current_src;
    	rmmi_ptr->current_src = RMMI_UNSOLICITED;
    	l4c_sms_ready_rind(L4C_OK);
    	rmmi_ptr->current_src = temp_src;

	l4c_sms_get_mem_status_lind(src_id);
		
    	//if (msg_ptr->result == L4C_ERROR)
    	//{

    	//}
    	//else
    	//{
    	#ifdef __MOD_PHB__
    	#ifdef _SMSAL_FIRST_

        l4c_phb_startup_begin_req();

    	#endif /* _SMSAL_FIRST_ */ 
    	#endif /* __MOD_PHB__ */ 
    	//}
}
#endif

	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_get_mem_status_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_get_mem_status_res_req(kal_uint8 src_id,kal_uint32 sim_max_num,kal_uint32 sim_current_num,kal_uint32 me_max_num,kal_uint32 me_current_num,kal_uint32 sr_max_num,kal_uint32 sr_current_num,kal_uint8 source_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    l4csmsal_sync_msg_storage_req_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    param_ptr = (l4csmsal_sync_msg_storage_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_sync_msg_storage_req_struct), TD_RESET);

    param_ptr->me_current_num = me_current_num;
    param_ptr->me_max_num = me_max_num;
	param_ptr->sm_current_num = sim_current_num;
	param_ptr->sm_max_num = sim_max_num;
	param_ptr->sr_current_num = sr_current_num;
	param_ptr->sr_max_num = sr_max_num;

	rmmi_ptr->current_src = source_id;

	if (rmmi_ptr->cpms_query == KAL_TRUE) //print cpms query command
	{
        smsal_prefer_storage_struct mem;
        kal_bool ret_val = KAL_FALSE;
        kal_uint8 mem1_str[5], mem2_str[5], mem3_str[5];
        kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
        kal_uint16 string_length = 0;
        kal_uint8 const *rsp_str = NULL;
        kal_uint32 mt_max_num;
        kal_uint32 mt_current_num;
			
        l4c_sms_get_preferred_mem_req(source_id, &mem);

        check_sms_storage_name(mem.mem1, mem1_str);
        check_sms_storage_name(mem.mem2, mem2_str);
        check_sms_storage_name(mem.mem3, mem3_str);

        mt_current_num = sim_current_num + me_current_num;
        mt_max_num = sim_max_num + me_max_num;
		 
        rmmi_ptr->arg_list[0] = (void*)mem1_str;
        rmmi_ptr->arg_list[3] = (void*)mem2_str;
        rmmi_ptr->arg_list[6] = (void*)mem3_str;

        if (mem.mem1 == SMSAL_SM ||mem.mem1 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[1] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[2] = (void*)&sim_max_num;
        }
        else if (mem.mem1 == SMSAL_ME ||mem.mem1 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[1] = (void*)&me_current_num;
            rmmi_ptr->arg_list[2] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[1] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[2] = (void*)&mt_max_num;
        }

        if (mem.mem2 == SMSAL_SM ||mem.mem2 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[4] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[5] = (void*)&sim_max_num;
        }
        else if (mem.mem2 == SMSAL_ME ||mem.mem2 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[4] = (void*)&me_current_num;
            rmmi_ptr->arg_list[5] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[4] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[5] = (void*)&mt_max_num;
        }

        if (mem.mem3 == SMSAL_SM ||mem.mem3 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[7] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[8] = (void*)&sim_max_num;
        }
        else if (mem.mem3 == SMSAL_ME ||mem.mem3 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[7] = (void*)&me_current_num;
            rmmi_ptr->arg_list[8] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[7] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[8] = (void*)&mt_max_num;
        }

        string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CPMS: \"%s\", %u, %u, \"%s\", %u, %u, \"%s\", %u, %u",
                                    rmmi_ptr->arg_list,
                                    9);
        rsp_str = &buffer[0];
        ret_val = KAL_TRUE;
        rmmi_sms_final_rsp_generator(source_id, ret_val, (kal_uint8*) rsp_str, string_length);

        rmmi_ptr->cpms_query = KAL_FALSE;
    }
	
	if (rmmi_ptr->cpms_set == KAL_TRUE) //print cpms set command
	{
        smsal_prefer_storage_struct mem;
        kal_bool ret_val = KAL_FALSE;
        kal_uint8 mem1_str[5], mem2_str[5], mem3_str[5];
        kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
        kal_uint16 string_length = 0;
        kal_uint8 const *rsp_str = NULL;
        kal_uint32 mt_max_num;
        kal_uint32 mt_current_num;
			
        l4c_sms_get_preferred_mem_req(source_id, &mem);

        check_sms_storage_name(mem.mem1, mem1_str);
        check_sms_storage_name(mem.mem2, mem2_str);
        check_sms_storage_name(mem.mem3, mem3_str);

        mt_current_num = sim_current_num + me_current_num;
        mt_max_num = sim_max_num + me_max_num;
		 
        if (mem.mem1 == SMSAL_SM ||mem.mem1 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[0] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[1] = (void*)&sim_max_num;
        }
        else if (mem.mem1 == SMSAL_ME ||mem.mem1 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[0] = (void*)&me_current_num;
            rmmi_ptr->arg_list[1] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[0] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[1] = (void*)&mt_max_num;
        }

        if (mem.mem2 == SMSAL_SM ||mem.mem2 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[2] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[3] = (void*)&sim_max_num;
        }
        else if (mem.mem2 == SMSAL_ME ||mem.mem2 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[2] = (void*)&me_current_num;
            rmmi_ptr->arg_list[3] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[2] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[3] = (void*)&mt_max_num;
        }

        if (mem.mem3 == SMSAL_SM ||mem.mem3 == SMSAL_SM_PREFER)
        {
            rmmi_ptr->arg_list[4] = (void*)&sim_current_num;
            rmmi_ptr->arg_list[5] = (void*)&sim_max_num;
        }
        else if (mem.mem3 == SMSAL_ME ||mem.mem3 == SMSAL_ME_PREFER)
        {
            rmmi_ptr->arg_list[4] = (void*)&me_current_num;
            rmmi_ptr->arg_list[5] = (void*)&me_max_num;
        }
        else
        {
            rmmi_ptr->arg_list[4] = (void*)&mt_current_num;
            rmmi_ptr->arg_list[5] = (void*)&mt_max_num;
        }

        string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CPMS: %u, %u, %u, %u, %u, %u",
                                    rmmi_ptr->arg_list,
                                    6);
        rsp_str = &buffer[0];
        ret_val = KAL_TRUE;

        rmmi_sms_final_rsp_generator(source_id, ret_val, (kal_uint8*) rsp_str, string_length);

        rmmi_ptr->cpms_set = KAL_FALSE;
    }

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SYNC_MSG_STORAGE_REQ, param_ptr, NULL, 0);
}
#endif

	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_mem_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_mem_status_req(kal_uint8 src_id,kal_uint8 mem_status)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    l4csmsal_sync_msg_storage_req_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    	param_ptr = (l4csmsal_sync_msg_storage_req_struct*)
        	construct_local_para((kal_uint16) sizeof(l4csmsal_sync_msg_storage_req_struct), TD_RESET);

	if (mem_status == 0)//available
	{
    		param_ptr->me_current_num = 0;
    		param_ptr->me_max_num = 200;
		param_ptr->sm_current_num = 0;
		param_ptr->sm_max_num = 30;

		rmmi_ptr->indicators.smsfull = 0; 
	}
	else //mem_status = 1, full
	{
    		param_ptr->me_current_num = 200;
    		param_ptr->me_max_num = 200;
		param_ptr->sm_current_num = 30;
		param_ptr->sm_max_num = 30;

		rmmi_ptr->indicators.smsfull = 1;
	}

    	l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SYNC_MSG_STORAGE_REQ, param_ptr, NULL, 0);
}
#endif

	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_atcmd_cmgr_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_atcmd_cmgr_res_req(kal_uint8 src_id,kal_uint8 result,kal_uint16 cause,kal_uint8 source_id,kal_uint8 mem, kal_uint32 index, kal_uint8 stat, kal_uint16 pdu_length, kal_uint8 *pdu)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
	/*if (L4C_PTR->route_thru_lmmi == KAL_TRUE)
	{
        	RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user;
    	}
	src_id = RMMI_PTR->current_src;*/
	
	rmmi_ptr->current_src = source_id;
	
	if (l4c_ptr->sms_current_action[source_id] == CMGR_EXE)
	{
		kal_uint8 retval = KAL_FALSE;
		smslib_general_struct general_sms_pdu;
		l4csmsal_read_cnf_struct *l4c_read_cnf;
		kal_uint8 msg_format;
		peer_buff_struct *peer_buff_ptr = NULL;
		kal_uint16 data_len;
		kal_uint8 *data_ptr;
		l4_name_struct list;
		
    		if (rmmi_ptr->is_emgr == KAL_FALSE) //We don't support draft of AT+CMGR
    		{
			if (stat == SMSAL_STO_DRAFT)
			{
				stat = SMSAL_STO_UNSENT;
			}
    		}
	
		if (result == KAL_FALSE)
    		{
			l4c_sms_general_rrsp((kal_bool)result, cause);
			l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			rmmi_ptr->is_emgr = KAL_FALSE; 
			return KAL_FALSE;
		}
		// Decode SMS PDU (SCA + TPDU) 
    		retval = smslib_decode_pdu(pdu, pdu_length, &general_sms_pdu);
		if (retval != SMSLIB_STATUS_OK)
    		{
			l4c_sms_general_rrsp(KAL_FALSE, SMSAL_UNSPECIFIED_ERROR_CAUSE);  
			l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			rmmi_ptr->is_emgr = KAL_FALSE; 
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
			return KAL_FALSE;
		}	

		l4c_read_cnf = (l4csmsal_read_cnf_struct *)
                    		construct_local_para(sizeof(l4csmsal_read_cnf_struct), TD_CTRL); 
					
		l4c_read_cnf->status = stat;
		l4c_read_cnf->mti = general_sms_pdu.tpdu.mti;

		smsal_cmgf_query(&msg_format);

		if (msg_format == SMSAL_PDU_MODE)
    		{       
    			if (general_sms_pdu.pdu_len == 2)
		 	{		
				rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, INVALID_MEM_INDEX, KAL_TRUE);
			}
			else
			{
        			peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(general_sms_pdu.pdu_len, 0, 0, TD_CTRL);

				data_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &data_len);
        			kal_mem_cpy(data_ptr, pdu, general_sms_pdu.pdu_len);
							
        			l4c_sms_exe_read_msg_pdu_rrsp(stat, peer_buff_ptr);
			}
						
			free_local_para((local_para_struct *) l4c_read_cnf);
			free_peer_buff(peer_buff_ptr);	
                	l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
    		}
    		else //msg_format = SMSAL_TEXT_MODE
    		{     
    			if (general_sms_pdu.pdu_len == 2)
		 	{	
				rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, INVALID_MEM_INDEX, KAL_TRUE);
			}
			else
			{   	
				//smslib_general_struct general_sms_pdu;
				smslib_status_enum smslib_get_msg_content_result;
				
    				l4c_read_cnf->rmi_use_hex = smsal_check_rmi_use_hex(source_id, &general_sms_pdu);

				//kal_mem_cpy(&general_sms_pdu.sca, &general_sms_pdu.sca, sizeof(sms_addr_struct));
				//kal_mem_cpy(&general_sms_pdu.tpdu, &general_sms_pdu.tpdu, sizeof(smsal_tpdu_decode_struct));
				//kal_mem_cpy(&general_sms_pdu.pdu_len, &general_sms_pdu.pdu_len, sizeof(kal_uint8));
				//kal_mem_cpy(&general_sms_pdu.tpdu_len, &general_sms_pdu.tpdu_len, sizeof(kal_uint8));
	
                            smslib_get_msg_content_result = smslib_get_msg_content(l4c_read_cnf->rmi_use_hex, &general_sms_pdu, NULL);

				if (smslib_get_msg_content_result != SMSLIB_STATUS_OK)
    				{
					l4c_sms_general_rrsp(KAL_FALSE, SMSAL_UNSPECIFIED_ERROR_CAUSE);  
					l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
					free_local_para((local_para_struct *) l4c_read_cnf);
					smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
					rmmi_ptr->is_emgr = KAL_FALSE; 
					return KAL_FALSE;
				}
					
				kal_mem_set(&list, 0, sizeof(l4_name_struct));

                    if (l4c_read_cnf->mti == SMSAL_MTI_DELIVER)
                    {
            			/* in some abnormal cases, we change udhi to FALSE */
            			if (general_sms_pdu.tpdu.data.deliver_tpdu.udh_p == KAL_FALSE)
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);  /* clear udhi bit */
            			else
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) | 0x40);  /* set udhi bit */
            			if ((general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0] != 0) &&
                			(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1] & 0xf0) == 0xd0)
            			{
                			l4c_read_cnf->msg_header.deliver.oa.addr_length = ((general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0]*4)/7)+1;
                			smsal_gsm7_unpack((kal_uint8 *)&(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[2]),
                                  &l4c_read_cnf->msg_header.deliver.oa.addr_bcd[1],
                                  (kal_uint16)l4c_read_cnf->msg_header.deliver.oa.addr_length,
                                  (kal_uint16)0);
                			l4c_read_cnf->msg_header.deliver.oa.addr_bcd[0] = general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1];
            			}
            			else
            			{
                			l4c_read_cnf->msg_header.deliver.oa.addr_length = TP_ADDR2_L4_ADDR_LEN(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0]);
                			kal_mem_cpy(l4c_read_cnf->msg_header.deliver.oa.addr_bcd, 
                            		&general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1],
                            	l4c_read_cnf->msg_header.deliver.oa.addr_length);
            			}
                        	if (l4c_read_cnf->msg_header.deliver.oa.addr_length > 40)
	                     {
		                  return KAL_FALSE;
	                     }
			       l4c_read_cnf->msg_header.deliver.oa.addr_bcd[l4c_read_cnf->msg_header.deliver.oa.addr_length] = 0xff;
            			sms_rp_addr2_l4_addr((sms_addr_struct *)(&general_sms_pdu.sca), &(l4c_read_cnf->msg_header.deliver.sca));
            			l4c_read_cnf->msg_header.deliver.pid = general_sms_pdu.tpdu.data.deliver_tpdu.pid;
            			l4c_read_cnf->msg_header.deliver.ori_dcs = general_sms_pdu.tpdu.data.deliver_tpdu.dcs;/* for RMI */
				
            			l4c_read_cnf->msg_header.deliver.dcs = smsal_dcs_to_mmi(general_sms_pdu.tpdu.data.deliver_tpdu.dcs);/* for LMI */
            			kal_mem_cpy(l4c_read_cnf->msg_header.deliver.scts, general_sms_pdu.tpdu.data.deliver_tpdu.scts, 7);
			       if ((general_sms_pdu.tpdu.data.deliver_tpdu.udh_p == KAL_TRUE) && (general_sms_pdu.tpdu.udhl == 0))
            			{
                			/* clear udhi bit */
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);
            			}
                    	}
			else if (l4c_read_cnf->mti == SMSAL_MTI_SUBMIT)
                    	{
                    		if (general_sms_pdu.tpdu.data.submit_tpdu.udh_p == KAL_FALSE)
                			l4c_read_cnf->msg_header.submit.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);   /* clear udhi bit */
            			else
                			l4c_read_cnf->msg_header.submit.fo = ((general_sms_pdu.tpdu.fo) | 0x40);   /* set udhi bit */
				if ((general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0] != 0) &&
                			(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1] & 0xf0) == 0xd0)
            			{
                			l4c_read_cnf->msg_header.submit.da.addr_length = ((general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0]*4)/7)+1;
                			smsal_gsm7_unpack((kal_uint8 *)&(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[2]),
                                  						&l4c_read_cnf->msg_header.submit.da.addr_bcd[1],
                                  						(kal_uint16)l4c_read_cnf->msg_header.submit.da.addr_length,
                                  						(kal_uint16)0);
                			l4c_read_cnf->msg_header.submit.da.addr_bcd[0] = general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1];
            			}
            			else
            			{
                			l4c_read_cnf->msg_header.submit.da.addr_length = TP_ADDR2_L4_ADDR_LEN(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0]);
                			kal_mem_cpy(l4c_read_cnf->msg_header.submit.da.addr_bcd,
                            				&general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1],
                            				l4c_read_cnf->msg_header.submit.da.addr_length);
            			}

                        	if (l4c_read_cnf->msg_header.submit.da.addr_length > 40)
	                     {
		                  return KAL_FALSE; 
	                     }
            			l4c_read_cnf->msg_header.submit.da.addr_bcd[l4c_read_cnf->msg_header.submit.da.addr_length] = 0xff;

            			sms_rp_addr2_l4_addr((sms_addr_struct *)(&general_sms_pdu.sca), &(l4c_read_cnf->msg_header.submit.sca));

            			l4c_read_cnf->msg_header.submit.pid = general_sms_pdu.tpdu.data.submit_tpdu.pid;
            			l4c_read_cnf->msg_header.submit.vp = *(general_sms_pdu.tpdu.data.submit_tpdu.validity_period);
            			l4c_read_cnf->msg_header.submit.ori_dcs = general_sms_pdu.tpdu.data.submit_tpdu.dcs;      /* for RMI */
            			l4c_read_cnf->msg_header.submit.dcs = smsal_dcs_to_mmi(general_sms_pdu.tpdu.data.submit_tpdu.dcs); 
			}
				   
    				l4c_sms_exe_read_msg_rrsp(KAL_TRUE,
                    						CM_L4C_GEN_CAUSE,
                    						general_sms_pdu.forMMI_UserData_length,
                    						l4c_read_cnf->mti,
                    						l4c_read_cnf->status,
                    						l4c_read_cnf->rmi_use_hex,
                    						list,
                    						&(l4c_read_cnf->msg_header),
                    						general_sms_pdu.forMMI_UserData); 
               	}

                     free_local_para((local_para_struct *) l4c_read_cnf);					
                     l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
    		}				  

		rmmi_ptr->is_emgr = KAL_FALSE; 
	}
		
	if (l4c_ptr->sms_current_action[source_id] == CMSS_EXE)
	{
		l4csmsal_send_req_struct *param_ptr;
		kal_uint8 mode;
		smslib_general_struct general_sms_pdu;
    		kal_uint8 dn_type;

		if (result == KAL_FALSE)
		{
    			l4c_sms_general_rrsp((kal_bool)result, cause);
    			l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION); 
        		return KAL_FALSE;
		}

		param_ptr = construct_local_para((kal_uint16) sizeof(l4csmsal_send_req_struct), TD_RESET);

		smslib_decode_pdu(pdu, pdu_length, &general_sms_pdu);
		if (general_sms_pdu.pdu_len>176)
		{
			general_sms_pdu.pdu_len = 176;
		}
				
    		param_ptr->src_id = source_id;
    		param_ptr->req_type = SMSAL_SEND_MSG;
    		param_ptr->message_len = general_sms_pdu.pdu_len;    
    		param_ptr->reply_index = SMSAL_INVALID_INDEX;
		    param_ptr->fdn_check = KAL_FALSE;
		
            l4c_sms_get_more_req(source_id, &mode);
		    param_ptr->mms_mode = mode;
    		param_ptr->seq_num = 1;

    		dn_type = l4csmu_get_dial_mode();
    		if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN))
    		{
        		param_ptr->fdn_check = KAL_TRUE;
    		}
    		else
    		{
        		param_ptr->fdn_check = KAL_FALSE;
    		}
			
		smsal_force_at_cmgf_mode_set(SMSAL_PDU_MODE);
		smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);

             #if defined(__SMS_STORAGE_BY_MMI__) && !defined(WISDOM_MMI) 		
              param_ptr->msg_header.submit.da_tag = rmmi_ptr->cmss_da_tag;
              kal_mem_cpy(&(param_ptr->msg_header.submit.da), &(rmmi_ptr->cmss_da), sizeof(l4_addr_bcd_struct));	
             #endif	   	   
    		l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_SEND_REQ, param_ptr, pdu, param_ptr->message_len);
	}

	//L4C_PTR->route_thru_lmmi = KAL_FALSE;
}
#endif
	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_atcmd_cmgl_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_atcmd_cmgl_res_req(kal_uint8 src_id,kal_uint8 mem, kal_uint32 index, kal_uint8 stat, kal_uint16 pdu_length, kal_uint8 *pdu, kal_uint8 result,kal_uint16 cause, kal_uint8 is_complete, kal_uint8 source_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
	/*if (L4C_PTR->route_thru_lmmi == KAL_TRUE)
{
        	RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user;
    	}
	src_id = RMMI_PTR->current_src;*/
	
	rmmi_ptr->current_src = source_id;

	if (is_complete == KAL_TRUE) 
	{
		l4c_sms_general_rrsp((kal_bool)result, cause);      
        	l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);		
	}
	else
	{
	   if (result == KAL_FALSE)
	   {
		kal_brief_trace(TRACE_ERROR, ERROR_CMGL_NOT_END_BUT_ERROR);
	   }
	   else
	   {
		kal_uint8 retval = KAL_FALSE;
		smslib_general_struct general_sms_pdu;
		l4csmsal_read_cnf_struct *l4c_read_cnf;
		kal_uint8 msg_format;
		peer_buff_struct *peer_buff_ptr = NULL;
		kal_uint16 data_len;
		kal_uint8 *data_ptr;
		l4_name_struct list;

		// Decode SMS PDU (SCA + TPDU) 
    		retval = smslib_decode_pdu(pdu, pdu_length, &general_sms_pdu);

		if (retval != SMSLIB_STATUS_OK)
    		{
			l4c_sms_general_rrsp(KAL_FALSE, SMSAL_UNSPECIFIED_ERROR_CAUSE);  
			l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
			return KAL_FALSE;
		}	

		l4c_read_cnf = (l4csmsal_read_cnf_struct *)
                    			construct_local_para(sizeof(l4csmsal_read_cnf_struct), TD_CTRL); 
   		
		l4c_read_cnf->status = stat;
		l4c_read_cnf->index = index;
		l4c_read_cnf->mti = general_sms_pdu.tpdu.mti;
		
		smsal_cmgf_query(&msg_format);
				
		if (msg_format == SMSAL_PDU_MODE)
    		{       				
    			if (general_sms_pdu.pdu_len== 2)
		 	{		
				//rmmi_result_code_fmttr(RMMI_RCODE_ERROR, INVALID_MEM_INDEX);
			}
			else
			{
        			peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(general_sms_pdu.pdu_len, 0, 0, TD_CTRL);

				data_ptr = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &data_len);
        			kal_mem_cpy(data_ptr, pdu, general_sms_pdu.pdu_len);

				// message length: TPDU in octets (SCA is not couted in)
        			l4c_read_cnf->message_len = general_sms_pdu.tpdu_len;
		 					
				l4c_sms_exe_read_msg_list_pdu_rrsp(l4c_read_cnf->status,
                    									l4c_read_cnf->index+1, 
                    									peer_buff_ptr,
                    									l4c_read_cnf->message_len);
              	}

			free_local_para((local_para_struct *) l4c_read_cnf);		
			free_peer_buff(peer_buff_ptr);		
			//l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
    		}
    		else //msg_format = SMSAL_TEXT_MODE
    		{        			
    			if (general_sms_pdu.pdu_len == 2)
		 	{	
				//rmmi_result_code_fmttr(RMMI_RCODE_ERROR, INVALID_MEM_INDEX);
			}
			else
			{        
				//smslib_general_struct general_sms_pdu;
				smslib_status_enum smslib_get_msg_content_result;
							
           			l4c_read_cnf->rmi_use_hex = smsal_check_rmi_use_hex(source_id, &general_sms_pdu);

				//kal_mem_cpy(&general_sms_pdu.sca, &general_sms_pdu.sca, sizeof(sms_addr_struct));
				//kal_mem_cpy(&general_sms_pdu.tpdu, &general_sms_pdu.tpdu, sizeof(smsal_tpdu_decode_struct));
				//kal_mem_cpy(&general_sms_pdu.pdu_len, &general_sms_pdu.pdu_len, sizeof(kal_uint8));
				//kal_mem_cpy(&general_sms_pdu.tpdu_len, &general_sms_pdu.tpdu_len, sizeof(kal_uint8));
	
                            smslib_get_msg_content_result = smslib_get_msg_content(l4c_read_cnf->rmi_use_hex, &general_sms_pdu, NULL);
				                                        
				if (smslib_get_msg_content_result != SMSLIB_STATUS_OK)
    				{
					l4c_sms_general_rrsp(KAL_FALSE, SMSAL_UNSPECIFIED_ERROR_CAUSE);  
					l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
					free_local_para((local_para_struct *) l4c_read_cnf);
					smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
					return KAL_FALSE;
				}
							
				kal_mem_set(&list, 0, sizeof(l4_name_struct));

                    	if (l4c_read_cnf->mti == SMSAL_MTI_DELIVER)
		     	{
				/* in some abnormal cases, we change udhi to FALSE */
            			if (general_sms_pdu.tpdu.data.deliver_tpdu.udh_p == KAL_FALSE)
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);  /* clear udhi bit */
            			else
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) | 0x40);  /* set udhi bit */
            			if ((general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0] != 0) &&
                			(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1] & 0xf0) == 0xd0)
            			{
                			l4c_read_cnf->msg_header.deliver.oa.addr_length = ((general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0]*4)/7)+1;
                			smsal_gsm7_unpack((kal_uint8 *)&(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[2]),
                                  &l4c_read_cnf->msg_header.deliver.oa.addr_bcd[1],
                                  (kal_uint16)l4c_read_cnf->msg_header.deliver.oa.addr_length,
                                  (kal_uint16)0);
                			l4c_read_cnf->msg_header.deliver.oa.addr_bcd[0] = general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1];
            			}
            			else
            			{
                			l4c_read_cnf->msg_header.deliver.oa.addr_length = TP_ADDR2_L4_ADDR_LEN(general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[0]);
                			kal_mem_cpy(l4c_read_cnf->msg_header.deliver.oa.addr_bcd, 
                            		&general_sms_pdu.tpdu.data.deliver_tpdu.orig_addr[1],
                            	l4c_read_cnf->msg_header.deliver.oa.addr_length);
            			}

                        	if (l4c_read_cnf->msg_header.deliver.oa.addr_length > 40)
	                     {
		                  return KAL_FALSE;
	                     }
			       l4c_read_cnf->msg_header.deliver.oa.addr_bcd[l4c_read_cnf->msg_header.deliver.oa.addr_length] = 0xff;
            			sms_rp_addr2_l4_addr((sms_addr_struct *)(&general_sms_pdu.sca), &(l4c_read_cnf->msg_header.deliver.sca));
            			l4c_read_cnf->msg_header.deliver.pid = general_sms_pdu.tpdu.data.deliver_tpdu.pid;
            			l4c_read_cnf->msg_header.deliver.ori_dcs = general_sms_pdu.tpdu.data.deliver_tpdu.dcs;/* for RMI */
				
            			l4c_read_cnf->msg_header.deliver.dcs = smsal_dcs_to_mmi(general_sms_pdu.tpdu.data.deliver_tpdu.dcs);/* for LMI */
            			kal_mem_cpy(l4c_read_cnf->msg_header.deliver.scts, general_sms_pdu.tpdu.data.deliver_tpdu.scts, 7);
			       if ((general_sms_pdu.tpdu.data.deliver_tpdu.udh_p == KAL_TRUE) && (general_sms_pdu.tpdu.udhl == 0))
            			{
                			/* clear udhi bit */
                			l4c_read_cnf->msg_header.deliver.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);
            			}
			}
			else if (l4c_read_cnf->mti == SMSAL_MTI_SUBMIT)
			{
                    		if (general_sms_pdu.tpdu.data.submit_tpdu.udh_p == KAL_FALSE)
                			l4c_read_cnf->msg_header.submit.fo = ((general_sms_pdu.tpdu.fo) & 0xbf);   /* clear udhi bit */
            			else
                			l4c_read_cnf->msg_header.submit.fo = ((general_sms_pdu.tpdu.fo) | 0x40);   /* set udhi bit */
				if ((general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0] != 0) &&
                			(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1] & 0xf0) == 0xd0)
            			{
                			l4c_read_cnf->msg_header.submit.da.addr_length = ((general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0]*4)/7)+1;
                			smsal_gsm7_unpack((kal_uint8 *)&(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[2]),
                                  						&l4c_read_cnf->msg_header.submit.da.addr_bcd[1],
                                  						(kal_uint16)l4c_read_cnf->msg_header.submit.da.addr_length,
                                  						(kal_uint16)0);
                			l4c_read_cnf->msg_header.submit.da.addr_bcd[0] = general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1];
            			}
            			else
            			{
                			l4c_read_cnf->msg_header.submit.da.addr_length = TP_ADDR2_L4_ADDR_LEN(general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[0]);
                			kal_mem_cpy(l4c_read_cnf->msg_header.submit.da.addr_bcd,
                            				&general_sms_pdu.tpdu.data.submit_tpdu.dest_addr[1],
                            				l4c_read_cnf->msg_header.submit.da.addr_length);
            			}

                        	if (l4c_read_cnf->msg_header.submit.da.addr_length > 40)
	                     {
		                  return KAL_FALSE; 
	                     }
            			l4c_read_cnf->msg_header.submit.da.addr_bcd[l4c_read_cnf->msg_header.submit.da.addr_length] = 0xff;

            			sms_rp_addr2_l4_addr((sms_addr_struct *)(&general_sms_pdu.sca), &(l4c_read_cnf->msg_header.submit.sca));

            			l4c_read_cnf->msg_header.submit.pid = general_sms_pdu.tpdu.data.submit_tpdu.pid;
            			l4c_read_cnf->msg_header.submit.vp = *(general_sms_pdu.tpdu.data.submit_tpdu.validity_period);
            			l4c_read_cnf->msg_header.submit.ori_dcs = general_sms_pdu.tpdu.data.submit_tpdu.dcs;      /* for RMI */
            			l4c_read_cnf->msg_header.submit.dcs = smsal_dcs_to_mmi(general_sms_pdu.tpdu.data.submit_tpdu.dcs); 
			}
							
				l4c_sms_exe_read_msg_list_rrsp(KAL_TRUE,
                								CM_L4C_GEN_CAUSE,
                								general_sms_pdu.forMMI_UserData_length,
                								l4c_read_cnf->mti,
                								l4c_read_cnf->status,
                								l4c_read_cnf->index, 
                								l4c_read_cnf->rmi_use_hex,
                								list,
                								&(l4c_read_cnf->msg_header),
                								general_sms_pdu.forMMI_UserData); 
			}

			free_local_para((local_para_struct *) l4c_read_cnf);
			//l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
			smslib_free_tpdu_decode_struct(&general_sms_pdu.tpdu);
    		}				    		
	    }
      }

      //L4C_PTR->route_thru_lmmi = KAL_FALSE;
}
#endif
	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_atcmd_cmgd_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_atcmd_cmgd_res_req(kal_uint8 src_id,kal_uint8 result, kal_uint16 cause, kal_uint8 source_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

	 /*if (L4C_PTR->route_thru_lmmi == KAL_TRUE)
{
        	RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user;
    	 }
	 src_id = RMMI_PTR->current_src;*/
	 
      	 rmmi_ptr->current_src = source_id;

        l4c_sms_general_rrsp((kal_bool)result, cause);      
        l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);

	//L4C_PTR->route_thru_lmmi = KAL_FALSE;
}
#endif
	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_atcmd_cmgw_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_atcmd_cmgw_res_req(kal_uint8 src_id,kal_uint32 index, kal_uint8 result, kal_uint16 cause, kal_uint8 source_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

	/*if (L4C_PTR->route_thru_lmmi == KAL_TRUE)
{
        	RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user;
    	}
	src_id = RMMI_PTR->current_src;*/
	 
	rmmi_ptr->current_src = source_id;

       l4c_sms_exe_write_msg_rrsp((kal_bool)result, cause, index);    
       l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);

	//L4C_PTR->route_thru_lmmi = KAL_FALSE;
}
#endif
	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_atcmd_eqsi_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_sms_atcmd_eqsi_res_req(kal_uint8 src_id,kal_uint8 mem, kal_uint32 begin, kal_uint32 end, kal_uint32 used, kal_uint8 source_id)
{
#if defined(__SMS_STORAGE_BY_MMI__) 
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
        kal_uint16 string_length = 0;
        kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
        kal_uint8 const *rsp_str = NULL;
        kal_bool ret_val = KAL_FALSE;
		
	rmmi_ptr->current_src = source_id;

	if (l4c_ptr->sms_current_action[source_id] == EQSI_EXE)
	{
		kal_uint8 mem_str[2];

   		/*if (L4C_PTR->route_thru_lmmi == KAL_TRUE)
    		{
        		RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user;
    		}
    		src_id = RMMI_PTR->current_src;*/
	
		rmmi_ptr->current_src = source_id;

		//begin++;
		//end++;
		check_sms_mem_name(mem, (kal_uint8*)mem_str);

		begin = begin+1;//mmi index strat from 0
		end = end+1;//mmi index strat from 0
		
		rmmi_ptr->arg_list[0] = (void*)&mem_str;
       	        rmmi_ptr->arg_list[1] = (void*)&begin;
       	        rmmi_ptr->arg_list[2] = (void*)&end;
		rmmi_ptr->arg_list[3] = (void*)&used;

       	        string_length = rmmi_fast_string_print(
                                   buffer,
                                   (kal_uint8*) "+EQSI: %s, %u, %u, %u",
                                   rmmi_ptr->arg_list,
                                   4);

       	        rsp_str = &buffer[0];

		ret_val = KAL_TRUE;
		//L4C_PTR->route_thru_lmmi = KAL_FALSE;

		rmmi_sms_final_rsp_generator(source_id, ret_val, (kal_uint8*) rsp_str, string_length);

		l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
	}

	if (l4c_ptr->sms_current_action[source_id] == CMGD_TEST_EXE)
	{
		begin = begin+1;//mmi index strat from 0
		end = end+1;//mmi index strat from 0
		
       	        rmmi_ptr->arg_list[0] = (void*)&begin;
       	        rmmi_ptr->arg_list[1] = (void*)&end;
		
       	        string_length = rmmi_fast_string_print(
                                   buffer,
                                   (kal_uint8*) "+CMGD: (%e-%e), (0-4)",
                                   rmmi_ptr->arg_list,
                                   2);
		
       	        rsp_str = &buffer[0];
		
		ret_val = KAL_TRUE;
		
		rmmi_sms_final_rsp_generator(source_id, ret_val, (kal_uint8*) rsp_str, string_length);

		l4c_set_user_action(L4C_SMS, source_id, L4C_NO_ACTION);
	}
}
#endif
    	return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sms_etws_setting_req
 * DESCRIPTION
 *  this function is used to set ETWS related setting
 * PARAMETERS
 *  is_etws_needed                 [IN]     KAL_FALSE = ETWS off, KAL_TRUE = ETWS on 
 *  is_etws_security_needed     [IN]     KAL_FALSE = ETWS security off, KAL_TRUE = ETWS security on
 *  is_etws_testing_on             [IN]     KAL_FALSE = don't send test purpose ETWS to MMI, KAL_TRUE= send test purpose ETWS to MMI
 *  write_to_nvram                  [IN]     KAL_TRUE, write setting into NVRAM
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
kal_bool l4c_sms_etws_setting_req(kal_uint8 src_id, kal_bool is_etws_needed, kal_bool is_etws_security_needed, kal_bool is_etws_testing_on, kal_bool write_to_nvram)
{
#if defined(__ETWS_SUPPORT__)

    kal_uint8 i;
    l4cas_etws_setting_req_struct *gas_param_ptr;
    nvram_write_req_struct *param_ptr;
    nvram_ef_etws_setting_struct buf_ptr;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

    /****************************************
    * Here, we assume that MSG_ID_L4CAS_ETWS_SETTING_REQ 
    * is always successful so that we would not wait for the resposne
    * from MOD_RRM or MOD_RRCE
    *****************************************/

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        gas_param_ptr = (l4cas_etws_setting_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4cas_etws_setting_req_struct), TD_RESET);

        gas_param_ptr->is_etws_needed = is_etws_needed;
        gas_param_ptr->is_etws_security_needed = is_etws_security_needed;
        gas_param_ptr->is_etws_testing_on = is_etws_testing_on;

        l4c_send_msg(
                MOD_RRM+i, 
                MSG_ID_L4CAS_ETWS_SETTING_REQ, 
                AS_L4C_SAP,
                gas_param_ptr, 
                NULL);
    }

    #if defined(__UMTS_RAT__)
    {
        l4cas_etws_setting_req_struct *uas_param_ptr;

        uas_param_ptr = (l4cas_etws_setting_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cas_etws_setting_req_struct), TD_RESET);

        uas_param_ptr->is_etws_needed = is_etws_needed;
        uas_param_ptr->is_etws_security_needed = is_etws_security_needed;
        uas_param_ptr->is_etws_testing_on = is_etws_testing_on;

        l4c_send_msg(
                MOD_RRCE, 
                MSG_ID_L4CAS_ETWS_SETTING_REQ, 
                AS_L4C_SAP,
                uas_param_ptr, 
                NULL);
    }
    #endif /* __UMTS_RAT__ */

    l4c_comm_ptr->etws_setting = 0;
    if (is_etws_needed)
        l4c_comm_ptr->etws_setting |= RMMI_ETWS_IS_NEEDED;
    if (is_etws_security_needed)
        l4c_comm_ptr->etws_setting |= RMMI_ETWS_IS_SECURITY_NEEDED;
    if (is_etws_testing_on)
        l4c_comm_ptr->etws_setting |= RMMI_ETWS_IS_TESTING_ON;
    
    if (write_to_nvram)
    {
        param_ptr = (nvram_write_req_struct*) construct_local_para((kal_uint16) sizeof(nvram_write_req_struct), TD_RESET);

        param_ptr->file_idx = NVRAM_EF_ETWS_SETTING_LID;
        param_ptr->para = 1;
        param_ptr->access_id = src_id;

        buf_ptr.etws_setting = l4c_comm_ptr->etws_setting;

        l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, (kal_uint8 *)&buf_ptr, sizeof(nvram_ef_etws_setting_struct));
    }
#endif /*__ETWS_SUPPORT__*/
    return KAL_TRUE;
}


#endif /* __MOD_SMSAL__ */ 

