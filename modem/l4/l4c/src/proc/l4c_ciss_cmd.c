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
 * L4C_CISS_CMD.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
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

#define L4C_CISS_CMD_C
#ifdef __MOD_CSM__
//#include "kal_non_specific_general_types.h"
#include "string.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h" //for get_ctrl_buffer
//#include "stack_timer.h"
//#include "event_shed.h"
#include "kal_trace.h"
//#include "ps_trace.h"
//#include "stack_ltlcom.h"
#include "l4_msgid.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l3_inc_enums.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"

//#include "mnss_struct.h"
#include "l4c2csm_ss_struct.h"
#include "csmss_aux_msg_hdlr.h"
//#include "l4c_aux_struct.h"
#include "l4c_utility.h"
#include "l4c_ciss_cmd.h"
//#include "smsal_defs.h"
#include "smsal_l4c_enum.h"
//#include "smsal_l4c_defs.h"
//#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_structs.h"
#include "smsal_cb.h"
#include "rmmi_utility.h"
//#include "csmcc_atfunc.h"
//#include "l4c_ss_parse.h"
//#include "device.h"
//#include "rmmi_rsp.h"
//#include "l4c2abm_struct.h"
//#include "l4c2phb_enums.h"  
#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"
#include "l4_trc.h"
#include "sat_def.h"
//#include "l4a.h"
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "l4c_sim_cmd.h"
#include "csmss_atfunc.h"
#ifdef __MBIM_SUPPORT__
#include "mbim_defs.h"
#endif

#ifdef __SAT__
extern kal_uint8 custom_l4c_sat_ton_npi_transform(kal_uint8 raw_data);
#endif

extern kal_bool custom_phb_xmgnt_approve_fdn (
        kal_uint8 *tel_number, /* BCD coding, include TON/NPI in the first byte */
        kal_uint8 num_length,
        kal_uint8 sim_id,
        l4c_operation_type_enum oper,
        kal_uint16 *cause);

/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_emlpp_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  opcode          [IN]     op_code_enum   
 *  priority        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_emlpp_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 priority)
{
    l4ccsm_ciss_emlpp_begin_req_struct *param_ptr;

    if (is_ss_cmd_conflict(src_id, CAEMLPP_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SS, src_id, CAEMLPP_EXE);

    param_ptr = (l4ccsm_ciss_emlpp_begin_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_ciss_emlpp_begin_req_struct),
                                                        TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = opcode;
    param_ptr->default_priority_level = priority;

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ, param_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_repeat_CCFC_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  mode                [IN]      op_code_enum  
 *  reason              [IN]      ss_code_enum  
 *  classx              [IN]      bs_code_enum  
 *  timer               [IN]        
 *  dest                [IN]        
 *  sub_addr_flag       [IN]        
 *  sub_dest            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_repeat_CCFC_req(
            kal_uint8 src_id,
            kal_uint8 mode,
            kal_uint8 reason,
            kal_uint8 classx,
            kal_uint8 timer,
            l4c_number_struct dest,
            kal_bool sub_addr_flag,
            l4c_sub_addr_struct sub_dest)
{
    kal_uint8 bs_code;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    switch (reason)
    {
        case 0:
            //0:unconditional
            reason = L4_CFU;
            break;
        case 1:
            // 1: busy
            reason = L4_CFB;
            break;
        case 2:
            //  2: no reply
            reason = L4_CFNRY;
            break;
        case 3:
            // 3: not reachable
            reason = L4_CFNRC;
            break;
        case 4:
            // 4: all call forwarding
            reason = L4_CFA;
            break;
        case 5:
            // 5: all conditional call forwarding
        default:
            reason = L4_CFC;
    }

    switch (mode)
    {
        case 0:
            mode = SS_OP_DEACTIVATESS;
            break;
        case 1:
            mode = SS_OP_ACTIVATESS;
            break;
        case 2:
            mode = SS_OP_INTERROGATESS;
            break;
        case 3:
            mode = SS_OP_REGISTERSS;
            break;
        case 4:
        default:
            mode = SS_OP_ERASESS;
    }

    /* Single class : normal CCFC_EXE.
       the reason that it is not done with combi classes is because that
       combi classes always return OK even some class's response
       was L4C_ERROR returned by CISS */
    if ((classx == 0) || (classx == 1) || (classx == 2) || (classx == 4) || 
        (classx == 8) || (classx == 16) || (classx == 32))
    {
        if (is_ss_cmd_conflict(src_id, CCFC_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->ccfc_current_class = classx;
        bs_code = check_bscode_L4enum(classx);

        l4c_set_user_action(L4C_SS, src_id, CCFC_EXE);

        return l4c_ss_exe_call_forward_req(src_id, mode, reason, bs_code, timer, dest, sub_addr_flag, sub_dest);
    }
    /* combination class : need extra effort CCFC_REPEAT */
    else
    {
        if (is_ss_cmd_conflict(src_id, CCFC_REPEAT) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->ccfc_result = KAL_FALSE;
        rmmi_ptr->ccfc_combi_classx = classx;
        // each bit is for each classx. (TS or BS)
        // 1: we need to make req for this bs_code
        // 0: ignored
        //stores req parameter information
        rmmi_ptr->ccfc_req_param.reason = reason;
        rmmi_ptr->ccfc_req_param.mode = mode;
        rmmi_ptr->ccfc_req_param.timer = timer;
        rmmi_ptr->ccfc_req_param.sub_addr_flag = sub_addr_flag;
        kal_mem_cpy(rmmi_ptr->ccfc_req_param.dest_buffer, &dest, sizeof(l4c_number_struct));
        kal_mem_cpy(rmmi_ptr->ccfc_req_param.sub_dest_buffer, &sub_dest, sizeof(l4c_sub_addr_struct));

        if ((classx & 0x01) != 0)
            // bit 8 : classx = 1 : voice
        {
            bs_code = L4_TELEPHONY;
            rmmi_ptr->ccfc_current_class = 1;
        }
        else if ((classx & 0x02) != 0)
            // bit 7 : classx = 2 : data
        {
            bs_code = L4_ALL_BEARER_SERVICES;
            rmmi_ptr->ccfc_current_class = 2;
        }
        else if ((classx & 0x04) != 0)
            // bit 6 : classx = 4 : fax
        {
            bs_code = L4_FACSIMILE_SERVICES;
            rmmi_ptr->ccfc_current_class = 4;
        }
        else if ((classx & 0x08) != 0)
            // bit 5 : classx = 8 : SMS
        {
            bs_code = L4_SHORT_MESSAGE_SERVICES;
            rmmi_ptr->ccfc_current_class = 8;
        }
        else if ((classx & 0x10) != 0)
            // bit 4 : classx = 16 : data circuit sync
        {
            bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
            rmmi_ptr->ccfc_current_class = 16;
        }
        else if ((classx & 0x20) != 0)
            // bit 3 : classx = 32 : data circuit async
        {
            bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
            rmmi_ptr->ccfc_current_class = 32;
        }
        else
        {
            return KAL_FALSE;
        }

        l4c_set_user_action(L4C_SS, src_id, CCFC_REPEAT);

        return l4c_ss_exe_call_forward_req(src_id, mode, reason, bs_code, timer, dest, sub_addr_flag, sub_dest);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_forward_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  opcode              [IN]   op_code_enum     
 *  type                [IN]   ss_code_enum     
 *  bs_code             [IN]   bs_code_enum     
 *  timer               [IN]        
 *  dest                [IN]        
 *  sub_addr_flag       [IN]        
 *  sub_dest            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_call_forward_req(
            kal_uint8 src_id,
            kal_uint8 opcode,
            kal_uint8 type,
            kal_uint8 bs_code,
            kal_uint8 timer,
            l4c_number_struct dest,
            kal_bool sub_addr_flag,
            l4c_sub_addr_struct sub_dest)
{
    l4ccsm_ciss_cf_begin_req_struct *param_ptr;
    kal_uint8 count;

    if (src_id < RMMI_SRC)

        //RMMI_SRC : already current_action: CCFC_REPEAT(combi classx) or CCFC_EXE(single class)
    {
        if (is_ss_cmd_conflict(src_id, CCFC_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        l4c_set_user_action(L4C_SS, src_id, CCFC_EXE);
    }

    param_ptr = (l4ccsm_ciss_cf_begin_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_cf_begin_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = opcode;
    param_ptr->ss_code = type;
    param_ptr->bs_code = bs_code;
    param_ptr->no_reply_timer = timer;
    param_ptr->address.addr_bcd[0] = dest.type;
    count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->address.addr_bcd[1]), 40);
    param_ptr->address.addr_length = count + 1;
    param_ptr->subaddress_flag = sub_addr_flag;
    if (sub_addr_flag == KAL_TRUE)
    {
        param_ptr->subaddress.addr_bcd[0] = sub_dest.type;
        count = convert_to_bcd((kal_uint8*) sub_dest.number, (kal_uint8*) & (param_ptr->subaddress.addr_bcd[1]), 40);
        param_ptr->subaddress.addr_length = count + 1;
    }

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ, param_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_repeat_CCWA_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]     op_code_enum   
 *  classx      [IN]     bs_code_enum   
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_repeat_CCWA_req(kal_uint8 src_id, kal_uint8 mode, kal_uint8 classx)
{
    kal_uint8 bs_code;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    /*
     * switch (mode)
     * {
     * case 0:
     * mode = SS_OP_DEACTIVATESS;
     * break;
     * case 1:
     * mode = SS_OP_ACTIVATESS;
     * break;
     * case 2:
     * mode = SS_OP_INTERROGATESS;
     * break;
     * case 3:
     * mode = SS_OP_REGISTERSS;
     * break;
     * case 4:
     * default:
     * mode = SS_OP_ERASESS;
     * }
     */

    /* Single class : normal CCWA_EXE.
       the reason that it is not done with combi classes is because that
       combi classes always return OK even some class's response
       was L4C_ERROR returned by CISS */
    if (((classx == 1) || (classx == 2) || (classx == 4) || 
         (classx == 8) || (classx == 16) || (classx == 32)) || mode == SS_OP_INTERROGATESS)
    {
        if (is_ss_cmd_conflict(src_id, CCWA_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->ccwa_current_class = classx;
        bs_code = check_bscode_L4enum(classx);

        l4c_set_user_action(L4C_SS, src_id, CCWA_EXE);

        if (mode == SS_OP_INTERROGATESS)
        {
            bs_code = 0;
        }

        return l4c_ss_exe_call_wait_req(src_id, mode, bs_code);
    }
    /* combination class : need extra effort CCFC_REPEAT */
    else
    {
        if (is_ss_cmd_conflict(src_id, CCWA_REPEAT) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->ccwa_result = KAL_FALSE;
        rmmi_ptr->ccwa_combi_classx = classx;
        // each bit is for each classx. (TS or BS)
        // 1: we need to make req for this bs_code
        // 0: ignored
        //stores req parameter information
        rmmi_ptr->ccwa_req_param.mode = mode;

        if ((classx & 0x01) != 0)
            // bit 8 : classx = 1 : voice
        {
            bs_code = L4_TELEPHONY;
            rmmi_ptr->ccwa_current_class = 1;
        }
        else if ((classx & 0x02) != 0)
            // bit 7 : classx = 2 : data
        {
            bs_code = L4_ALL_BEARER_SERVICES;
            rmmi_ptr->ccwa_current_class = 2;
        }
        else if ((classx & 0x04) != 0)
            // bit 6 : classx = 4 : fax
        {
            bs_code = L4_FACSIMILE_SERVICES;
            rmmi_ptr->ccwa_current_class = 4;
        }
        else if ((classx & 0x08) != 0)
            // bit 5 : classx = 8 : SMS
        {
            bs_code = L4_SHORT_MESSAGE_SERVICES;
            rmmi_ptr->ccwa_current_class = 8;
        }
        else if ((classx & 0x10) != 0)
            // bit 4 : classx = 16 : data circuit sync
        {
            bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
            rmmi_ptr->ccwa_current_class = 16;
        }
        else if ((classx & 0x20) != 0)
            // bit 3 : classx = 32 : data circuit async
        {
            bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
            rmmi_ptr->ccwa_current_class = 32;
        }
        else
        {
            return KAL_FALSE;
        }

        l4c_set_user_action(L4C_SS, src_id, CCWA_REPEAT);

        return l4c_ss_exe_call_wait_req(src_id, mode, bs_code);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_wait_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  opcode      [IN]   op_code_enum     
 *  bs_code     [IN]   bs_code_enum     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_call_wait_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 bs_code)
{
    l4ccsm_ciss_cw_begin_req_struct *param_ptr;

    if (src_id < RMMI_SRC)
        //RMMI_SRC : already current_action: CCWA_REPEAT(combi classx) or CCWA_EXE(single class)
    {
        if (is_ss_cmd_conflict(src_id, CCWA_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        l4c_set_user_action(L4C_SS, src_id, CCWA_EXE);
    }

    param_ptr = (l4ccsm_ciss_cw_begin_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_cw_begin_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = opcode;
    param_ptr->bs_code = bs_code;

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ, param_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_interrogate_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  type        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_interrogate_req(kal_uint8 src_id, kal_uint8 type)
{
    if (is_ss_cmd_conflict(src_id, ITRG_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SS, src_id, ITRG_EXE);

    switch (type)
    {
        case L4_CLIP:
        case L4_CLIR:
        case L4_COLP:
        case L4_COLR:
        case L4_CNAP:
        case L4_CDIP:
        {
            l4ccsm_ciss_cli_begin_req_struct *param_ptr;

            param_ptr = (l4ccsm_ciss_cli_begin_req_struct*) construct_local_para
                ((kal_uint16) sizeof(l4ccsm_ciss_cli_begin_req_struct), TD_RESET);

            param_ptr->src_id = src_id;
            param_ptr->ss_code = type;

            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ, param_ptr);
            break;
        }

        default:
            return KAL_FALSE;
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_repeat_CLCK_SS_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]     op_code_enum   
 *  reason      [IN]     ss_code_enum   
 *  classx      [IN]     bs_code_enum   
 *  passwd      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_repeat_CLCK_SS_req(
            kal_uint8 src_id,
            kal_uint8 mode,
            kal_uint8 reason,
            kal_uint8 classx,
            kal_uint8 *passwd)
{
#if !defined(__SLIM_AT__)
    kal_uint8 bs_code;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    /*
     * switch (mode)
     * {
     * case 0:
     * mode = SS_OP_DEACTIVATESS;
     * break;
     * case 1:
     * mode = SS_OP_ACTIVATESS;
     * break;
     * case 2:
     * mode = SS_OP_INTERROGATESS;
     * break;
     * case 3:
     * mode = SS_OP_REGISTERSS;
     * break;
     * case 4:
     * default:
     * mode = SS_OP_ERASESS;
     * }
     */

    /* Single class : normal CLCK_SS_EXE.
       the reason that it is not done with combi classes is because that
       combi classes always return OK even some class's response
       was L4C_ERROR returned by CISS */
    if (((classx == 1) || (classx == 2) || (classx == 4) || 
         (classx == 8) || (classx == 16) || (classx == 32)) || mode == SS_OP_INTERROGATESS)
    {
        if (is_ss_cmd_conflict(src_id, CLCK_SS_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->clck_ss_current_class = classx;
        bs_code = check_bscode_L4enum(classx);

        l4c_set_user_action(L4C_SS, src_id, CLCK_SS_EXE);

        if (mode == SS_OP_INTERROGATESS)
        {
            bs_code = 0;
        }

        return l4c_ss_exe_call_barring_req(src_id, mode, reason, bs_code, passwd);
    }
    /* combination class : need extra effort CCFC_REPEAT */
    else
    {
        if (is_ss_cmd_conflict(src_id, CLCK_SS_REPEAT) == KAL_TRUE)
        {
            return KAL_FALSE;
        }

        rmmi_ptr->clck_ss_result = KAL_FALSE;
        rmmi_ptr->clck_ss_combi_classx = classx;
        // each bit is for each classx. (TS or BS)
        // 1: we need to make req for this bs_code
        // 0: ignored
        //stores req parameter information
        rmmi_ptr->clck_ss_req_param.reason = reason;
        rmmi_ptr->clck_ss_req_param.mode = mode;
        kal_mem_cpy(rmmi_ptr->clck_ss_req_param.passwd, passwd, 4);

        if ((classx & 0x01) != 0)
            // bit 8 : classx = 1 : voice
        {
            bs_code = L4_TELEPHONY;
            rmmi_ptr->clck_ss_current_class = 1;
        }
        else if ((classx & 0x02) != 0)
            // bit 7 : classx = 2 : data
        {
            bs_code = L4_ALL_BEARER_SERVICES;
            rmmi_ptr->clck_ss_current_class = 2;
        }
        else if ((classx & 0x04) != 0)
            // bit 6 : classx = 4 : fax
        {
            bs_code = L4_FACSIMILE_SERVICES;
            rmmi_ptr->clck_ss_current_class = 4;
        }
        else if ((classx & 0x08) != 0)
            // bit 5 : classx = 8 : SMS
        {
            bs_code = L4_SHORT_MESSAGE_SERVICES;
            rmmi_ptr->clck_ss_current_class = 8;
        }
        else if ((classx & 0x10) != 0)
            // bit 4 : classx = 16 : data circuit sync
        {
            bs_code = L4_ALL_DATA_CIRCUIT_SYNC;
            rmmi_ptr->clck_ss_current_class = 16;
        }
        else if ((classx & 0x20) != 0)
            // bit 3 : classx = 32 : data circuit async
        {
            bs_code = L4_ALL_DATA_CIRCUIT_ASYNC;
            rmmi_ptr->clck_ss_current_class = 32;
        }
    #if defined(__SP_RIL_SUPPORT__)
        else if (classx == 0)
        {
            if (reason == L4_BOIC)
            {
                bs_code = 0;
                rmmi_ptr->clck_ss_current_class = 0;
            }
            else
            {
                return KAL_FALSE;
            }
        }
    #endif /* __SP_RIL_SUPPORT__ */ 
        else
        {
            return KAL_FALSE;
        }

        l4c_set_user_action(L4C_SS, src_id, CLCK_SS_REPEAT);

        return l4c_ss_exe_call_barring_req(src_id, mode, reason, bs_code, passwd);
    }
#endif /* !defined(__SLIM_AT__)*/ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_barring_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  opcode      [IN]     op_code_enum   
 *  type        [IN]     ss_code_enum   
 *  bs_code     [IN]        
 *  passwd      [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_call_barring_req(
            kal_uint8 src_id,
            kal_uint8 opcode,
            kal_uint8 type,
            kal_uint8 bs_code,
            kal_uint8 *passwd)
{
    l4ccsm_ciss_cb_begin_req_struct *param_ptr;
    
    if (src_id < RMMI_SRC)
        //RMMI_SRC : already current_action: CLCK_SS_REPEAT(combi classx) or CLCK_SS_EXE(single class)
    {
        if (is_ss_cmd_conflict(src_id, CLCK_SS_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
        l4c_set_user_action(L4C_SS, src_id, CLCK_SS_EXE);
    }

    param_ptr = (l4ccsm_ciss_cb_begin_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_cb_begin_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = opcode;
    param_ptr->ss_code = type;
    param_ptr->bs_code = bs_code;

    /* mtk02508 MAUI_01323798: passwd is a pointer to an array retrieved in rmmi_clck_hdlr
       if user didn't enter passwd, passwd[0] is set to 0 */
    kal_mem_cpy(param_ptr->old_pw, passwd, 4);

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ, param_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_get_priority_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  priority        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_get_priority_status_req(kal_uint8 src_id, kal_uint8 *priority)
{
    *priority = csmss_get_default_priority_level();

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_set_clir_flag_req
 * DESCRIPTION
 *  This is l4c_ss_set_clir_flag_req function handler for provide MMI set L4C local variable.
 *  mtk00468 add on 06/26
 * PARAMETERS
 *  src_id                      [IN]        
 *  clir_flag                   [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_ss_set_clir_flag_req(kal_uint8 src_id, kal_uint8 clir_flag)
{

    L4C_PTR->clir_flag = clir_flag;
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_change_password_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  type        [IN]      ss_code_enum  
 *  old         [IN]         
 *  new1        [IN]         
 *  new2        [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_change_password_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 *old,
            kal_uint8 *new1,
            kal_uint8 *new2)
{
    l4ccsm_ciss_cb_begin_req_struct *param_ptr;

    if (is_ss_cmd_conflict(src_id, CPWD_SS_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SS, src_id, CPWD_SS_EXE);

    param_ptr = (l4ccsm_ciss_cb_begin_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_cb_begin_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = SS_OP_REGISTERPASSWORD;
    param_ptr->ss_code = type;

    kal_mem_cpy(param_ptr->old_pw, old, 4);
    kal_mem_cpy(param_ptr->new_pw1, new1, 4);
    kal_mem_cpy(param_ptr->new_pw2, new2, 4);

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ, param_ptr);

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
 *  l4c_ss_exe_ussd_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  str         [IN]         
 *  dcs         [IN]        
 *  length      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_ussd_req(kal_uint8 src_id, kal_uint8 *str, kal_uint8 dcs, kal_uint8 length)
{
    l4ccsm_ciss_pussr_begin_req_struct *param_ptr;
    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;
#if defined(__WM_RIL_SUPPORT__) || !defined(__CUSD_UNICODE_INPUT_SUPPORT__)
    kal_uint8 temp_char_set;
#endif
    kal_uint16 ussd_len = (kal_uint16)(strlen((char*)str)); //MAUI_02397378
    local_para_struct *local_para_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    if (is_ss_cmd_conflict(src_id, CUSD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    smsal_decode_cbsdcs(dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);

    //dcs = UCS2 can only be used when USSR
    if (alphabet_type == SMSAL_UCS2_DCS && (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_FALSE))
    {
        kal_brief_trace(TRACE_WARNING, WARNING_USSD_USED_USSR_STAGE);
        return KAL_FALSE;
    }
    
    //mtk02508_090330 save for later use after successful PHB approve
    l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_pussr_begin_req_struct); //MAUI_02354954
    l4c_ptr->ss_parameter.data = (l4ccsm_ciss_pussr_begin_req_struct*) construct_local_para(
                                                                              (kal_uint16) sizeof (l4ccsm_ciss_pussr_begin_req_struct),
                                                                              TD_RESET);
    param_ptr = (l4ccsm_ciss_pussr_begin_req_struct*)l4c_ptr->ss_parameter.data;

    param_ptr->src_id = src_id;
    param_ptr->ussd_dcs = dcs;

#if defined(__CUSD_UNICODE_INPUT_SUPPORT__)
    if(rmmi_ptr->char_set == RMMI_CHSET_UCS2 && ((alphabet_type == SMSAL_DEFAULT_DCS)
    #ifdef __ANDROID_RIL_SUPPORT__
        /* ALPS00001942 Android uses CSCS="UCS2" and dcs=0x48
           if input ussd string is all ASCII, modem helps to translate dcs to 0x0f
        */
        || (alphabet_type == SMSAL_UCS2_DCS)
    #endif
      ))
    {
        kal_uint8 ascii_str[MAX_DIGITS_USSD*2]; //temporarily save ascii HEX string
		kal_uint8 ascii_raw_str[MAX_DIGITS_USSD];
        kal_bool pure_ascii = KAL_FALSE;

	    kal_mem_set(ascii_str, 0, MAX_DIGITS_USSD*2);
		kal_mem_set(ascii_raw_str, 0, MAX_DIGITS_USSD);
		pure_ascii = string_is_pure_ascii(str, ascii_str, RMMI_CHSET_UCS2);
        kal_brief_trace(TRACE_INFO, INFO_PURE_ASCII, pure_ascii);
        if(pure_ascii == KAL_TRUE)
	    {
	        /* if USSD string are all ASCII characters, L4C will help to translate the UCS2 HEX string
	           from AT+ECUSD/CUSD to unpacked GSM7bit string and send to CSM. In addition, change the 
	           dcs to 0xf(gsm7bit) for network.
	           Use check_dcs_toGsm7bit() to translate ascii_str to unpacked GSM7bit string
                1. translate HEX string to ASCII string, RMMI_PTR->char_set = RMMI_CHSET_UCS2
                2. translate ASCII string to unpacked GSM7bit string, RMMI_PTR->char_set = RMMI_CHSET_IRA
            */
            // current rmmi_ptr->char_set = RMMI_CHSET_UCS2
            ussd_len = check_dcs_toGsm7bit(ascii_str, ascii_raw_str);
            
	        rmmi_ptr->char_set = RMMI_CHSET_IRA; //used for rmmi_check_ussd_length
            if (rmmi_check_ussd_length(ussd_len, ascii_raw_str) == KAL_FALSE)
            {
                free_local_para((local_para_struct*)param_ptr);
                l4c_ptr->ss_parameter.length = 0;
                l4c_ptr->ss_parameter.data = NULL;
                return KAL_FALSE;
            }
            
            ussd_len = check_dcs_toGsm7bit(ascii_raw_str, param_ptr->ussd_string);
            rmmi_ptr->char_set = RMMI_CHSET_UCS2; //reset +CSCS setting
        #ifdef __ANDROID_RIL_SUPPORT__
            param_ptr->ussd_dcs = 0x0f;
        #endif
	    }
    #if defined(__ANDROID_RIL_SUPPORT__)
        else
        {
            if (rmmi_check_ussd_length(ussd_len, str) == KAL_FALSE)
            {
                free_local_para((local_para_struct *)param_ptr);
                l4c_ptr->ss_parameter.length = 0;
                l4c_ptr->ss_parameter.data = NULL;
                return KAL_FALSE;
            }
            ussd_len = check_dcs_toGsm7bit(str, param_ptr->ussd_string);
        }
    #elif defined(__WM_RIL_SUPPORT__)
        /* WM RIL sets CSCS=UCS2 at the beginning but when it doesn't input dcs,
           it means the input ussd string is in IRA format 
           i.e. it won't input GSM7bit format HEX string */
        else
        {
            temp_char_set = rmmi_ptr->char_set;
            rmmi_ptr->char_set = RMMI_CHSET_IRA;
            if (rmmi_check_ussd_length(ussd_len, str) == KAL_FALSE)
            {
                free_local_para((local_para_struct*)param_ptr);
                l4c_ptr->ss_parameter.length = 0;
                l4c_ptr->ss_parameter.data = NULL;
                return KAL_FALSE;
            }
            ussd_len = check_dcs_toGsm7bit(str, param_ptr->ussd_string);
            rmmi_ptr->char_set = temp_char_set;
        }
    #endif
    }
    else
    {
        if (rmmi_check_ussd_length(ussd_len, str) == KAL_FALSE)
        {
            free_local_para((local_para_struct*)param_ptr);
            l4c_ptr->ss_parameter.length = 0;
            l4c_ptr->ss_parameter.data = NULL;
            return KAL_FALSE;
        }
        ussd_len = check_dcs_toGsm7bit(str, param_ptr->ussd_string);
    }
#else
    if ((src_id == LMMI_SRC) && (alphabet_type != SMSAL_DEFAULT_DCS))
    {
        //for LMMI input other then GSM 7 bit coding, L4C just copy it to CSM
        kal_mem_cpy(param_ptr->ussd_string, str, MAX_DIGITS_USSD);
        ussd_len = length;
    }
    else //if no support for unicode input, we only expected IRA input
    {
        temp_char_set = rmmi_ptr->char_set;
        rmmi_ptr->char_set = RMMI_CHSET_IRA;
        if (rmmi_check_ussd_length(ussd_len, str) == KAL_FALSE)
        {
            free_local_para((local_para_struct*)param_ptr);
            l4c_ptr->ss_parameter.length = 0;
            l4c_ptr->ss_parameter.data = NULL;
            return KAL_FALSE;
        }
        ussd_len = check_dcs_toGsm7bit(str, param_ptr->ussd_string);
        rmmi_ptr->char_set = temp_char_set;
    }
#endif /* __CUSD_UNICODE_INPUT_SUPPORT__ */

    param_ptr->ussd_string_length = (kal_uint8)ussd_len; //DUMA00158731
    param_ptr->change_phase_req = KAL_FALSE;

    if (l4c_check_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION) == KAL_TRUE)
    {
    #if defined(__PHB_APPROVE_BY_MMI__)
        l4_addr_bcd_struct tel_number;
        kal_uint16 cause = CM_L4C_GEN_CAUSE;
    #else
        l4cphb_approve_req_struct *phb_app_param_ptr; //mtk02508_090330 for FDN check
    #endif

        l4c_set_user_action(L4C_SS, src_id, CUSD_EXE);

        //mtk02508_090330 for FDN check
        l4c_construct_phb_approve_str(param_ptr->ussd_string, param_ptr->ussd_string_length); //MAUI_02884093
        
    #if defined(__PHB_APPROVE_BY_MMI__)
        /* PHB approve by MMI via function call */
        tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
        tel_number.addr_length = 1 + convert_to_bcd(
                                (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                                (kal_uint8*) & (tel_number.addr_bcd[1]),
                                40);
    
        if (KAL_FALSE == custom_phb_xmgnt_approve_fdn((tel_number.addr_bcd), 
                                                    tel_number.addr_length,
                                                    (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                    L4C_SS_OPERATION,
                                                    &cause))
        {
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
            l4c_clear_ss_parameter(src_id);
            return KAL_FALSE;
        }
        else
        {
            //mtk02508_090508: hold ss_parameter for later change phase retry if needed
            hold_local_para((local_para_struct*) l4c_ptr->ss_parameter.data);
            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ, l4c_ptr->ss_parameter.data);
            
        #ifndef __MMI_FMI__
            //DUMA00209281 modem load: postpone AT+CUSD response till PHB approve result
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        #endif /* __MMI_FMI__ */
        }
    #else /* !defined(__PHB_APPROVE_BY_MMI__) */
        phb_app_param_ptr = (l4cphb_approve_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

        phb_app_param_ptr->src_id = src_id;
        phb_app_param_ptr->is_retrieve = KAL_FALSE;

        phb_app_param_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;

        phb_app_param_ptr->tel_number.addr_length = 1 + convert_to_bcd(
                    (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                    (kal_uint8*) & (phb_app_param_ptr->tel_number.addr_bcd[1]), MAX_CC_ADDR_LEN-1);

        phb_app_param_ptr->approval_type = l4_custom_approval_type(L4C_SS_OPERATION,src_id);

        l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, phb_app_param_ptr, NULL);
    #endif
    }
    else if (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_SS, src_id, CUSD_EXE);
        //mtk02508_090619: hold ss_parameter for later change phase retry if needed
        local_para_ptr = (local_para_struct*) l4c_ptr->ss_parameter.data;
        if (local_para_ptr->ref_count < 2)
        {
            hold_local_para((local_para_struct*) l4c_ptr->ss_parameter.data);
        }
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_USSR_FAC_RES, param_ptr);
    }
    else if (l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_SS, src_id, CUSD_EXE);
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_USSN_FAC_RES, NULL);
    }
    else
    {
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
        return KAL_FALSE;
    }
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_ussd_req_ext
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  str         [IN]         
 *  dcs         [IN]        
 *  length      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_ussd_req_ext(kal_uint8 src_id, 
                                 kal_uint8 action, 
                                 kal_uint8 *str, 
                                 kal_uint8 dcs, 
                                 kal_uint8 length)
{
#ifdef __MBIM_SUPPORT__
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if ((is_ss_cmd_conflict(src_id, CUSD_EXE) == KAL_TRUE) || (length > MAX_DIGITS_USSD))
    {
        return KAL_FALSE;
    }
    else if ((action == MBIMUSSDInitiate) || (action == MBIMUSSDContinue))
    {
        l4ccsm_ciss_pussr_begin_req_struct *param_ptr;
    
        l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_pussr_begin_req_struct);
        l4c_ptr->ss_parameter.data = (l4ccsm_ciss_pussr_begin_req_struct*)construct_local_para(
                                      (kal_uint16) sizeof (l4ccsm_ciss_pussr_begin_req_struct),
                                      TD_RESET);
        param_ptr = (l4ccsm_ciss_pussr_begin_req_struct*)l4c_ptr->ss_parameter.data;
        param_ptr->src_id = src_id;
        param_ptr->ussd_dcs = dcs;
        param_ptr->ussd_string_length = length;
        param_ptr->change_phase_req = KAL_FALSE;
        kal_mem_cpy(param_ptr->ussd_string, str, length);
        hold_local_para((local_para_struct*) l4c_ptr->ss_parameter.data);
        l4c_set_user_action(L4C_SS, src_id, CUSD_EXE);

        if (action == MBIMUSSDInitiate)
        {
            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ, param_ptr);
        }
        else if (action == MBIMUSSDContinue)
        {
            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_USSR_FAC_RES, param_ptr);
        }
    }
    else if ((action == MBIMUSSDCancel) && 
        ((l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
        || (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE)
        || (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE)
        || (l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)))
    {
        l4ccsm_ciss_end_res_struct *param_ptr;

        l4c_clear_ss_queued_msg(L4C_PTR->ss_user);
        param_ptr = (l4ccsm_ciss_end_res_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_end_res_struct),
                                                    TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->cause_value = CM_NORMAL_CALL_CLR;
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_END_RES, param_ptr);
        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    {
        return KAL_FALSE;
    }
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_ccbs_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  opcode      [IN]        
 *  index       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_ccbs_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 index)
{
    l4ccsm_ciss_ccbs_begin_req_struct *param_ptr;

    if (is_ss_cmd_conflict(src_id, CCBS_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_set_user_action(L4C_SS, src_id, CCBS_EXE);

    param_ptr = (l4ccsm_ciss_ccbs_begin_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_ciss_ccbs_begin_req_struct),
                                                        TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->op_code = opcode;
    param_ptr->ccbs_index = index;

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ, param_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_abort_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_abort_req(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE
#ifdef __SAT__
        || l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE
#endif 
        || l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE
        || l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE)
    {
        l4ccsm_ciss_end_res_struct *param_ptr;

        l4c_clear_ss_queued_msg(L4C_PTR->ss_user);
        param_ptr = (l4ccsm_ciss_end_res_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_ciss_end_res_struct),
                                                    TD_RESET);

        param_ptr->src_id = src_id;
        //param_ptr->cause_value = CM_PROTOCOL_ERR_UNSPECIFIED;
        param_ptr->cause_value = CM_NORMAL_CALL_CLR;

        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_END_RES, param_ptr);

    #ifdef __SAT__
        //mtk01616 070329 , if SAT USSR is aborted . we should send stage1_rsp additionally , then MMI will send terminal response
        if (l4c_ptr->sat_ussr_flag != SAT_USSR_NONE //ALPS00029231 
            || l4c_check_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE) == KAL_TRUE 
            || l4c_check_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
        {
            kal_uint8 res = 0x14;       //Refer to spec 11.14 section 6.4.12 , ME should reply with SAT_USSD_SS_TRANSACTION_TERMINATION_BY_USER (0x14)
            kal_uint8 length = 1;
            kal_uint8 addition_info[255];

            addition_info[0] = 0;       //No specific cause can be given

            l4c_sat_send_ussd_lrsp(res, length, addition_info);

        #ifdef __RSAT__
            {
                sat_send_ussd_res_struct *terminal_rsp = (sat_send_ussd_res_struct*)
                    construct_local_para((kal_uint16) sizeof(sat_send_ussd_res_struct),TD_RESET);

                kal_mem_set(terminal_rsp->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
                terminal_rsp->res = SAT_USSD_SS_TRANSACTION_TERMINATION_BY_USER;
                terminal_rsp->size_of_additional_info = 0;
                if (l4c_ptr->sat_ussr_flag == SAT_SS_USSR)
                {
                    l4c_sat_send_ss_res((sat_send_ss_res_struct*) terminal_rsp);
                }
                else
                {
                    l4c_sat_send_ussd_res(terminal_rsp);
                }
            }
        #endif /* __RSAT__ */
            kal_brief_trace(TRACE_INFO, INFO_CLEAR_SAT_USSR_FLAG);
            l4c_ptr->sat_ussr_flag = SAT_USSR_NONE; //ALPS00029231
        }
    #endif /* __SAT__ */ 

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_ack_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id  [IN]
 *  cause	[IN]    36: dcs not supported
 *                  71: nuknown alphabet
 *                  72: ME busy
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_exe_ack_req (kal_uint8 src_id,kal_uint8 cause)
{
#ifdef __USSD_AUTO_REJECT__
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    //MMI can display, CSMSS response to NW until MMI ACK , cause 0 means normal
    if(l4c_ptr->ss_current_action == USSN_FAC_IND && cause == 0)
    {   
        l4c_clear_ss_queued_msg(l4c_ptr->ss_user);

        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_USSN_FAC_RES, NULL);

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    //MMI cannot display
    else if ( l4c_ptr->ss_current_action ==  USSR_FAC_IND 
	  || (l4c_ptr->ss_current_action == USSN_FAC_IND && cause != 0))
    {
        l4ccsm_ciss_end_res_struct *param_ptr;

        l4c_clear_ss_queued_msg(l4c_ptr->ss_user);
        param_ptr = (l4ccsm_ciss_end_res_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_end_res_struct), TD_RESET);

        param_ptr->src_id = src_id;
 	    param_ptr->cause_value = cause;

        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_END_RES, param_ptr);
        
    #ifdef __SAT__
        if (l4c_ptr->sat_ussr_flag != SAT_USSR_NONE)
        {
            kal_uint8 res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            kal_uint8 length = 1;
            kal_uint8 addition_info[255];

            /* addition_info = 0x01 for "Screen is busy"
               TODO: shall fill addition_info[0] according to the cause
            */
            addition_info[0] = 0x01;
            l4c_sat_send_ussd_lrsp(res, length, addition_info);
        #ifdef __RSAT__
            {
                sat_send_ussd_res_struct *terminal_rsp = (sat_send_ussd_res_struct*)
                    construct_local_para((kal_uint16) sizeof(sat_send_ussd_res_struct),TD_RESET);
    
                kal_mem_set(terminal_rsp->cmd_detail, 0, 5);   /* do not have to fill it, SIM module will fill this field */
                terminal_rsp->res = res;
                terminal_rsp->size_of_additional_info = 0;
                if (l4c_ptr->sat_ussr_flag == SAT_SS_USSR)
                {
                    l4c_sat_send_ss_res((sat_send_ss_res_struct*) terminal_rsp);
                }
                else
                {
                    l4c_sat_send_ussd_res(terminal_rsp);
                }
            }
        #endif /* __RSAT__ */
            kal_brief_trace(TRACE_INFO, INFO_CLEAR_SAT_USSR_FLAG);
            l4c_ptr->sat_ussr_flag = SAT_USSR_NONE; //ALPS00029231
        }
    #endif /* __SAT__ */

        l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    }
    
#endif /* __USSD_AUTO_REJECT__ */	
    return KAL_TRUE;
}


#ifdef __SAT__
 //mtk01616 070410 : sat_ussd use l4ccsm_ciss_ss_parse_req instead of l4ccsm_ciss_pussr_begin_req
/*****************************************************************************
 * FUNCTION
 *  l4c_sat_send_ussd_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_ptr       [IN]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sat_send_ussd_req(kal_uint8 input[MAX_DIGITS_USSD],
	                           kal_uint8 dcs,
	                           kal_uint8 length,
	                           kal_uint8 type_of_modification)
{
    l4ccsm_ciss_ss_parse_req_struct *local_ptr;
    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;
    
    if (is_ss_cmd_conflict(SAT_SRC, SAT_USD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    local_ptr = (l4ccsm_ciss_ss_parse_req_struct *) construct_local_para(
                                        (kal_uint16)sizeof(l4ccsm_ciss_ss_parse_req_struct),
                                        TD_RESET);

    smsal_decode_cbsdcs(dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);               

	kal_brief_trace(TRACE_INFO, INFO_ALPHABET_TYPE, alphabet_type);

    // ss_parse_req didn't expect SAT ussd string in 7bit pack format
	if (alphabet_type == SMSAL_DEFAULT_DCS)
    {
        csmss_gsm7_unpack((kal_uint8*)local_ptr->ss_string, (kal_uint8*)input, (kal_uint16)length, 0);

        if (length % 7 == 0 && (input[length-1] & 0xfe) == 0x1A)
        {
            length = (kal_uint8)length * 8 / 7 - 1;
        }
        else
        {
            length = (kal_uint8)length  * 8 / 7;								
        }
    }
	else
    {
		kal_mem_cpy(local_ptr->ss_string, input, length);
	}
	
	local_ptr->ton_npi = 0x81;
	local_ptr->src_id = SAT_SRC;
	local_ptr->ss_dcs = dcs;
	local_ptr->ss_string[length] = 0;
	local_ptr->ss_string[length+1] = 0;
    local_ptr->length = length;
    local_ptr->change_phase_req = KAL_FALSE;
    local_ptr->type_of_modification = type_of_modification;
#ifdef __CSMSS_EXPLICIT_SS_OPERATION__
    local_ptr->explicit_ss_op = CSMSS_IMPLICIT_OP; //MAUI_02553565
#endif
    l4c_set_user_action(L4C_SS, SAT_SRC, SAT_USD_EXE);

    //mtk01616 070410 : sat_ussd use l4ccsm_ciss_ss_parse_req instead of l4ccsm_ciss_pussr_begin_req
    ////l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ, local_ptr);
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, local_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_send_ss_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_ptr       [IN]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sat_send_ss_req(kal_uint8 input[MAX_DIGITS_USSD],
	                         kal_uint8 dcs, //the caller will fill this field to 0x01 but not used now
	                         kal_uint8 length,
	                         kal_uint8 type_of_modification)
{
    kal_uint8 addr_type = 0x81;
    rmmi_string_struct temp;
    kal_uint8 len;
    l4ccsm_ciss_ss_parse_req_struct *local_ptr;

    if (is_ss_cmd_conflict(SAT_SRC, PARSE_SS_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    local_ptr = (l4ccsm_ciss_ss_parse_req_struct*) construct_local_para(
                                         (kal_uint16) sizeof(l4ccsm_ciss_ss_parse_req_struct),
                                         TD_RESET);
    if ((kal_uint16) (2 * length) >= 2048)
    {
        ASSERT(0);
    }
    input[length] = 0xff;
    addr_type = custom_l4c_sat_ton_npi_transform(input[0]); //MAUI_02660770
    temp.string_ptr = (kal_uint8*) get_ctrl_buffer((kal_uint16) (2 * length));
    len = convert_to_digit_ext(input + 1, temp.string_ptr);
    local_ptr->src_id = SAT_SRC;
    local_ptr->ton_npi = addr_type;
    local_ptr->length = len;
    local_ptr->change_phase_req = KAL_FALSE;
    local_ptr->ss_dcs = 0x0f;   //MAUI_01744519 STK didn't bring dcs of ss string
#ifdef __CSMSS_EXPLICIT_SS_OPERATION__
    local_ptr->explicit_ss_op = CSMSS_IMPLICIT_OP; //MAUI_02553565
#endif
    kal_mem_set(local_ptr->ss_string, 0, MAX_DIGITS_USSD);
    kal_mem_cpy(local_ptr->ss_string, temp.string_ptr, len + 1);
    local_ptr->type_of_modification = type_of_modification;

    free_ctrl_buffer(temp.string_ptr);

    l4c_set_user_action(L4C_SS, SAT_SRC, PARSE_SS_EXE);

    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, local_ptr);

    return KAL_TRUE;
}
#endif /* __SAT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_essp_req
 * DESCRIPTION
 *  Set SS cfu query settings.
 * PARAMETERS
 *  mode       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool l4c_em_set_essp_req(kal_uint32 mode)
{
    l4ccsm_ss_set_essp_mode(mode);
    
    return KAL_TRUE;
}
/*****************************************************************************
 * FUNCTION
 *  l4c_em_get_essp_req
 * DESCRIPTION
 *  Get SS cfu query settings.
 * PARAMETERS
 *  void        [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_uint32 l4c_em_get_essp_req(void)
{
    return l4ccsm_ss_get_essp_mode();
}

#endif /* __MOD_CSM__ */ 

