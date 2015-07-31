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
 * L4C_SS_PARSE.C
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_SS_PARSE_C
#include <string.h>
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"


#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 

#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l4_trc.h"

#include "csmcc_common_enums.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"


//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2smsal_struct.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"

#include "l4c2csm_ss_struct.h"

#include "l4c_cc_cmd.h"
#include "l4c_sim_cmd.h"

//#include "l4c2abm_struct.h"
#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "l4c2tcm_struct.h"
//#include "l4c2tcm_func.h"
//#include "l4c2abm_struct.h"
#include "l4c_gprs_cmd.h"
#endif /* __MOD_TCM__ */ 
#include "l4c_ss_parse.h"
#include "l4c_utility.h"
#include "l4crac_func.h"

#ifdef __MOD_PHB__
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2phb_enums.h"
#include "l4c2phb_struct.h"
#endif /* __MOD_PHB__ */ 

#include "l4c_ciss_cmd.h"
//#include "l4c_rspfmttr.h"
//#include "l4crac_enums.h"

//#include "smsal_l4c_enum.h"
#include "lmmi_rsp.h"

#include "csmcc_atfunc.h"
#include "csmcc_defs.h" //for CSMCC_INVALID_CALL_ID
#include "rmmi_rsp.h"
#include "rmmi_utility.h"

#include "custom_ecc.h"

#if !defined(__CMUX_MODEM_STATUS_SUPPORT__)
#include "drv_comm.h"
//#include "uart_sw.h"
#include "dcl.h"
#endif
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "rmmi_sio.h"
#include "l4_msgid.h"

#ifdef __MBIM_SUPPORT__
#include "mbci_utility.h"
#endif

extern void rmmi_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause);
extern kal_bool custom_short_string_as_call(kal_uint8 c1, kal_uint8 c2, kal_uint8 length);

extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);
#if defined(__CUSTOMIZED_IDLE_STRING_AS_CALL__)
extern kal_bool custom_idle_string_as_call(kal_uint8 *str, kal_uint8 length);
#endif

extern kal_bool custom_phb_xmgnt_approve_fdn (
        kal_uint8 *tel_number, /* BCD coding, include TON/NPI in the first byte */
        kal_uint8 num_length,
        kal_uint8 sim_id,
        l4c_operation_type_enum oper,
        kal_uint16 *cause);

extern kal_uint8 l4c_cc_ss_string_parsing(kal_uint8 *string_ptr, kal_uint8 length, kal_uint8 sim_interface, kal_bool is_in_call);


/*****************************************************************************
 * FUNCTION
 *  l4c_allow_ss_sim_operation
 * DESCRIPTION
 *  Return if the requested sim operation type is allowed
 * PARAMETERS
 *  type        [IN]        Security type
 * RETURNS
 *  kal_bool    if the requested sim operation type is allowed or not
 *****************************************************************************/
kal_bool l4c_allow_ss_sim_operation(kal_uint8 type)
{
    sim_chv_info_struct chv_info;
    sim_chv_status_struct chv_status;

    l4c_sim_check_pin_status_req(&chv_info, &chv_status);
    switch (type)
    {
            // Karen, if pin1 is not enabled when the user tries to change pin1,
            // do not send request to SMU.
        case TYPE_CHV1:
            if (chv_info.is_chv1_enabled == KAL_FALSE)
            {
                return KAL_FALSE;
            }
        case TYPE_CHV2:
        case TYPE_UBCHV1:
        case TYPE_UBCHV2:
            break;
        default:
            ASSERT(0);
    }
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_string_parsing
 * DESCRIPTION
 *  This is l4c_ss_string_parsing function of L4C module.
 *  parse ss string from MMI and process according to its category
 * PARAMETERS
 *  src_id                  [IN]        MMI source of the initial request
 *  dcs                     [IN]        
 *  input                   [IN]        Ss string to be parsed
 *  length                  [IN]        Length of the ss string
 *  info                    [OUT]       Parsing result of the ss string
 *  call_type               [IN]        
 *  is_sim_operation        [IN]        
 *  als_type               [IN]  
 *  ecc_info               [IN]   
 * RETURNS
 *  kal_bool    if any other pending request exists from the src_id
 *****************************************************************************/
#ifndef __UCM_SUPPORT__
kal_bool l4c_ss_string_parsing(
            kal_uint8 src_id,
            kal_uint8 dcs,
            rmmi_string_struct *input,
            kal_uint8 length,
            l4c_ss_string_info_struct *info,
            kal_uint8 call_type,
            kal_bool is_sim_operation,
            kal_uint8 als_type,
            kal_uint8 ecc_info)
{
    kal_bool ss_op = KAL_TRUE;
    kal_uint8 addr_type = 0x81;
#if defined(__MOD_TCM__) && defined(__PS_DIALUP__)
    kal_bool format_valid = KAL_TRUE;
#endif 
    l4c_result_struct result;
    kal_uint8 call_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim

#if defined(__FWP_NC_LAI_INFO__)
    kal_uint8 celllock_call_str[MAX_DIGITS_USSD];
#endif 
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_STRING_PARSING_ENTRY);
    if ((input == NULL) || (info == NULL))
    {
        ASSERT(0);
    }


#if defined(__FWP_NC_LAI_INFO__)
    if (src_id == LMMI_SRC)
    {
        l4c_ptr->is_cell_lock_call = KAL_FALSE;
        kal_mem_set(celllock_call_str, 0, MAX_DIGITS_USSD);

        if (input->string_ptr[0] == 'D')        //if IP number is "D0001" 
        {
            l4c_ptr->is_cell_lock_call = KAL_TRUE;
            kal_brief_trace(TRACE_INFO, INFO_CELL_LOCK_CALL, l4c_ptr->is_cell_lock_call);

            kal_mem_cpy(celllock_call_str, &(input->string_ptr[1]), length - 1);
            input->string_ptr = celllock_call_str;
            length = length - 1;
        }
    }
#endif /* defined(__FWP_NC_LAI_INFO__) */ 
#ifdef __IP_NUMBER__
    kal_mem_set(l4c_comm_ptr->ip_string, 0, 21); /* reset ip_string */
#endif 

    ///// rmmi_skip_spaces (input); 
    ////   if ((length > 0) && (input->string_ptr[input->index] != 0)) //mtk01616_070605:support dcs UCS2
    if (length > 0|| src_id == LMMI_SRC) //MMI should guarntee length >0 ,unless for USSD null response
    {
    #if defined(__MOD_TCM__) && defined(__PS_DIALUP__)
        if (is_gprs_string(src_id, input, (kal_bool*) & format_valid) == KAL_TRUE)
        {
            /*
             * if(src_id == RMMI_SRC && RMM_PTR->command_allow == KAL_FALSE);
             * {
             * 
             * rmmi_result_code_fmttr (  RMMI_RCODE_ERROR,
             * RMMI_PTR->cmd_error_cause);
             * return KAL_FALSE;
             * }
             */
            //RMMI_PTR->is_gprs_data_dialing = KAL_TRUE; //mtk02285, 201003, 6251_ram
            info->opcode = GPRS_OPERATION;
            ss_op = KAL_FALSE;
        }
        else if (format_valid == KAL_TRUE)
        {
            // For windows dialer, only recognize "ERROR" but not "+CME ERROR: 100"
            kal_brief_trace(TRACE_WARNING, WARNING_GPRS_STRING_VALID_CMD_NOT_ALLOWED);
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return KAL_TRUE;
        }
    #endif /* defined(__MOD_TCM__) && defined(__PS_DIALUP__) */ 

        // The checking of sim operation string is moved to MMI now

        if (ss_op == KAL_TRUE)
        {
            // send to ss for parsing
            l4ccsm_ciss_ss_parse_req_struct *param_ptr;

        #ifdef __MOD_PHB__
            l4cphb_approve_req_struct *param1_ptr;
        #endif /* __MOD_PHB */
            kal_uint8 count;

            kal_uint8 opcode = INVALID_OPERATION;

#if 0 //MAUI_02884093 fdn revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
            l4c_construct_phb_approve_str(input->string_ptr, length); //MAUI_02884093 fdn revise
            
            /* Johnny:
               1. atd will never be a ss-string, atd may be sim-string/gprs-string/cc-string
               (ex. user can not use atd to reply ussd)
               2. l4c_ptr->ss_user == RMMI_SRC && l4c_ptr->ss_current_action == PARSE_SS_EXE will never happen */
            if(((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
#ifdef __MMI_FMI__
                && (l4c_is_test_sim() == KAL_FALSE)
#endif
				)
            {
                opcode = CC_OPERATION;
            }
            else
            {
#if !defined(__SS_OPERATION_SUPPORT__)
                opcode = l4c_cc_ss_string_parsing(input->string_ptr, length,(kal_uint8)(l4c_current_mod_id - MOD_L4C),l4ccsm_cc_get_in_call(&call_id));

                if (is_ss_cmd_conflict(src_id, PARSE_SS_EXE) == KAL_TRUE && opcode == SS_OPERATION)
                {
                    return KAL_FALSE;
                }
                /* Maui_sw SCR 7386 */

                if (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE)
                    //|| l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE) // comment by hogan 070213
                {
                    kal_bool return_value;

                    //mtk01616_070605
                    return_value = l4c_ss_exe_ussd_req(src_id, input->string_ptr, dcs, length);
                    if (return_value == KAL_TRUE)
                    {
                        info->opcode = SS_OPERATION;
                        result.flag = KAL_TRUE;
                        result.cause = L4C_NO_CAUSE;
                    }
                    else
                    {
                        info->opcode = INVALID_OPERATION;
                        result.flag = KAL_FALSE;
                        result.cause = L4C_NO_CAUSE;
                    }
                    if (src_id == LMMI_SRC)
                    {
                        l4c_ss_string_parsing_lrsp(result, info);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_ss_string_parsing_rrsp(result, info);       //will not print "ok"
                    }
                    return KAL_TRUE;    //because ss_current_action != L4C_NO_ACTION, will not print "ok"
                }
#else
                 opcode = CC_OPERATION;
#endif /* __SS_OPERATION_SUPPORT__ */
            }

            /* 040112 mtk00468 modify for handle if set MS to CG we can not allow CS service */
            if (l4crac_get_mobile_class() == 2) //class CG
            {
                return KAL_FALSE;
            }

        #if 1   //mtk00468 add 1129

            if (opcode == CC_OPERATION) //cc string
            {
                rmmi_string_struct temp;
                kal_uint8 dn_length;

                temp.index = 0;
                temp.string_ptr = input->string_ptr;

                /* PlutoMMI allows the dialing number up to 40 digits (not including '+')
                   we will remove '+' and fill the remain number into info->addr.number later 
                   boundary check here prevents exceeding the length of info->addr.number */
                if (input->string_ptr[0] == RMMI_CHAR_PLUS)
                {
                    dn_length = strlen((char*)input->string_ptr) - 1;
                    dn_length = (kal_uint8)strlen((char*)input->string_ptr) - 1;
                    dn_length = (kal_uint8)(strlen((char*)input->string_ptr) - 1);
                }
                else
                {
                    dn_length = strlen((char*)input->string_ptr);
                    dn_length = (kal_uint8)strlen((char*)input->string_ptr);
                    dn_length = (kal_uint8)(strlen((char*)input->string_ptr));
                }

                if ((src_id == LMMI_SRC) && (
                #ifdef __IP_NUMBER__
                    ((input->ip_string[0] != 0) && 
                    ((strlen((char*)input->ip_string) + dn_length) >= MAX_CC_ADDR_LEN)) ||
                #endif
                    (dn_length >= MAX_CC_ADDR_LEN)))
                {
                    info->opcode = INVALID_OPERATION;
                    result.flag = KAL_FALSE;
                    result.cause = CM_INVALID_NUMBER_FORMAT;
                    l4c_ss_string_parsing_lrsp(result, info);
                    return KAL_TRUE;
                }

            #ifdef __IP_NUMBER__
                if ((src_id == LMMI_SRC) && (input->ip_string[0] != 0))
                {                   
                    kal_mem_cpy(l4c_comm_ptr->ip_string, input->ip_string, 21);
                }
            #endif /* __IP_NUMBER__ */ 

            #if defined(__AUTO_CALL_REJECTION__)
                if( l4c_ptr->present_call_id != CSMCC_INVALID_CALL_ID) 
                {
                    /* To prevent MO callsetup when MT call not ack yet.See MAUI_01958965 */                
                    kal_brief_trace(TRACE_WARNING, WARNING_CALLSETUP_FAIL_DUE_TO_PRESENT_CALL); //mtk01616_091117
                    info->opcode = INVALID_OPERATION;
                }
                else
            #endif
                if (is_cc_string(src_id, &temp, info, call_type,als_type,ecc_info) == KAL_TRUE)
                {
                    info->opcode = CC_OPERATION;
                }
                else
                {
                    info->opcode = INVALID_OPERATION;
                }

                //if (l4c_ptr->retry_flag == KAL_FALSE)
                //{
                //031229 mtk00468 modify for SAT parse dont response to LMMI
                if (src_id == SAT_SRC)
                {
                    return KAL_TRUE;
                }
                if (info->opcode == INVALID_OPERATION)
                {
                    result.flag = KAL_FALSE;
                    result.cause = L4C_NO_CAUSE;

                    if (src_id == LMMI_SRC)
                    {
                        l4c_ss_string_parsing_lrsp(result, info);
                    }
                    else
                    {
                        //we should print "error" 1 time
                        //RMMI_PTR->current_src = src_id;
                        //l4c_ss_string_parsing_rrsp(result, &info);
                        //because ss_current_action == L4C_NO_ACTION, return KAL_TRUE will print "ok"
                        return KAL_FALSE;
                    }
                }
                //}
            }
            else        //ss string
            {
         #if !defined(__SS_OPERATION_SUPPORT__)       
                // mtk02508_090508: construct and save ss_parameter for later ss_parse_req to CSM
                l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_ss_parse_req_struct);
                l4c_ptr->ss_parameter.data = (l4ccsm_ciss_ss_parse_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ccsm_ciss_ss_parse_req_struct), TD_RESET);

                param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
                param_ptr->src_id = src_id;
                param_ptr->ton_npi = addr_type;
                param_ptr->length = length;
                param_ptr->change_phase_req = KAL_FALSE;
                param_ptr->ss_dcs = dcs;

                param_ptr->type_of_modification = SIMCALLCONTROL_NOMODIFY;  //mtk01616_070521
            #ifdef __CSMSS_EXPLICIT_SS_OPERATION__
                param_ptr->explicit_ss_op = CSMSS_IMPLICIT_OP; //MAUI_02553565
            #endif

                kal_mem_set(param_ptr->ss_string, 0, MAX_DIGITS_USSD);
                kal_mem_cpy(param_ptr->ss_string, input->string_ptr, length + 1);
                //mtk02508_090508 end
            
                l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
            #ifdef __MOD_PHB__
                {
                    param1_ptr = (l4cphb_approve_req_struct*)
                        construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

                    param1_ptr->src_id = src_id;
                    param1_ptr->is_retrieve = KAL_FALSE;

                    param1_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;

                    count = convert_to_bcd(
                                (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                                (kal_uint8*) & (param1_ptr->tel_number.addr_bcd[1]),
                                40);

                    param1_ptr->tel_number.addr_length = count + 1;
                    param1_ptr->approval_type = l4_custom_approval_type(L4C_SS_OPERATION,src_id);

                    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
                }
            #endif /* __MOD_PHB__ */ 
        #else
                return KAL_FALSE;
        #endif  /* __SS_OPERATION_SUPPORT__ */
            }

        #endif /* 1 */ 

            return KAL_TRUE;
        }
        else
        {
            result.flag = KAL_TRUE;
            result.cause = L4C_NO_CAUSE;

            if (src_id == LMMI_SRC)
            {
                l4c_ss_string_parsing_lrsp(result, info);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_string_parsing_rrsp(result, info);       //will not print "ok"
            }
            return KAL_TRUE;
        }
    }
    else
    {
        return KAL_FALSE;
    }
}

#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_string_parsing
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                  [IN]        
 *  dcs                     [IN]        
 *  input                   [IN]         
 *  length                  [IN]        
 *  info                    [OUT]         
 *  call_type               [IN]        
 *  is_sim_operation        [IN]        
 *  als_type                [IN]  
 *  ecc_info                [IN]  
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_ss_string_parsing(
            kal_uint8 src_id,
            kal_uint8 dcs,
            rmmi_string_struct *input,
            kal_uint8 length,
            l4c_ss_string_info_struct *info,
            kal_uint8 call_type,
            kal_bool is_sim_operation,
            kal_uint8 als_type,
            kal_uint8 ecc_info)
{
    kal_bool ss_op = KAL_TRUE;
    kal_bool format_valid = KAL_TRUE;
    l4c_result_struct result;
    kal_uint8 type;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
#ifdef __IP_NUMBER__
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
#endif
#if !defined(__SS_OPERATION_SUPPORT__)
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#if defined(__PHB_APPROVE_BY_MMI__)
    l4_addr_bcd_struct tel_number;
    kal_uint16 cause = CM_L4C_GEN_CAUSE;
#else
    l4cphb_approve_req_struct *param1_ptr;
    kal_uint8 count;
#endif
#endif /* !defined(__SS_OPERATION_SUPPORT__) */

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_STRING_PARSING_ENTRY);
    if ((input == NULL) || (info == NULL))
    {
        ASSERT(0);
    }

#ifdef __IP_NUMBER__
    kal_mem_set(l4c_comm_ptr->ip_string, NULL, 21);  /* reset ip_string */
#endif 

    ///// rmmi_skip_spaces (input);  
    ////   if ((length > 0) && (input->string_ptr[input->index] != 0)) //mtk01616_070605:support dcs UCS2
    if (length > 0|| src_id == LMMI_SRC) //MMI should guarntee length >0 ,unless for USSD null response
    {

#if 0 //MAUI_02006174
    #ifdef __MOD_TCM__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* __MOD_TCM__ */ 
#endif
        if (ss_op == KAL_TRUE)
        {
        #if !defined(__SS_OPERATION_SUPPORT__)
            // send to ss for parsing
            l4ccsm_ciss_ss_parse_req_struct *param_ptr;
            kal_uint8 i;
            kal_uint8 is_ecc;
            kal_uint8 count1;
            l4_addr_bcd_struct called_number;
            kal_uint8 call_id;
        #endif /* !__SS_OPERATION_SUPPORT__ */
            kal_uint8 opcode = INVALID_OPERATION;

#if 0 //MAUI_02884093 fdn revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
            l4c_construct_phb_approve_str(input->string_ptr, length); //MAUI_02884093 fdn revise

            /* Johnny:
               1. atd will never be a ss-string, atd may be sim-string/gprs-string/cc-string
               (ex. user can not use atd to reply ussd)
               2. l4c_ptr->ss_user == RMMI_SRC && l4c_ptr->ss_current_action == PARSE_SS_EXE will never happen */
            if(((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
#ifdef __MMI_FMI__
                && (l4c_is_test_sim() == KAL_FALSE)
#endif
				)
            {
                opcode = CC_OPERATION;
            }
            else
            {
#if !defined(__SS_OPERATION_SUPPORT__)
                opcode = l4c_cc_ss_string_parsing(input->string_ptr, length,(kal_uint8)(l4c_current_mod_id - MOD_L4C),l4ccsm_cc_get_in_call(&call_id));

                if (is_ss_cmd_conflict(src_id, PARSE_SS_EXE) == KAL_TRUE && opcode == SS_OPERATION)
                {
                    if (src_id == LMMI_SRC)
                    {
                        info->opcode = SS_OPERATION;
                        result.flag = KAL_FALSE;
                        result.cause = L4C_NO_CAUSE;
                        l4c_ss_string_parsing_lrsp(result, info);
                        return KAL_TRUE;
                    }
                    else
                    {
                        return KAL_FALSE;
                    }
                }
                /* Maui_sw SCR 7386 */

                if (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE)
                    //|| l4c_check_user_action(L4C_SS, src_id, USSN_FAC_IND) == KAL_TRUE) // comment by hogan 070213
                {
                    kal_bool return_value;

                    return_value = l4c_ss_exe_ussd_req(src_id, input->string_ptr, dcs, length);
                    if (return_value == KAL_TRUE)
                    {
                        info->opcode = SS_OPERATION;
                        result.flag = KAL_TRUE;
                        result.cause = L4C_NO_CAUSE;
                    }
                    else
                    {
                        info->opcode = INVALID_OPERATION;
                        result.flag = KAL_FALSE;
                        result.cause = L4C_NO_CAUSE;
                    }
                    //mtk01616_070707 only lrsp for UCM
                    if (src_id == LMMI_SRC)
                    {
                        l4c_ss_string_parsing_lrsp(result, info);
                    }
                    return KAL_TRUE;    //because ss_current_action != L4C_NO_ACTION, will not print "ok"
                }
#else
                 opcode = CC_OPERATION;
#endif /* __SS_OPERATION_SUPPORT__ */				

            }

            /* 040112 mtk00468 modify for handle if set MS to CG we can not allow CS service */
            if (l4crac_get_mobile_class() == 2) //class CG
            {
                if (src_id == LMMI_SRC)
                {
                    info->opcode = INVALID_OPERATION;
                    result.flag = KAL_FALSE;
                    result.cause = L4C_NO_CAUSE;
                    l4c_ss_string_parsing_lrsp(result, info);
                    return KAL_TRUE;
                }
                else
                {
                    return KAL_FALSE;
                }
            }

        #if 1   //mtk00468 add 1129

            if (opcode == CC_OPERATION) //cc string
            {
                rmmi_string_struct temp;
                kal_uint8 dn_length;

                temp.index = 0;
                temp.string_ptr = input->string_ptr;

                /* PlutoMMI allows the dialing number up to 40 digits (not including '+')
                   we will remove '+' and fill the remain number into info->addr.number later 
                   boundary check here prevents exceeding the length of info->addr.number */
                if (input->string_ptr[0] == RMMI_CHAR_PLUS)
                {
                    dn_length = strlen((char*)input->string_ptr) - 1;
                }
                else
                {
                    dn_length = strlen((char*)input->string_ptr);
                }

                if ((src_id == LMMI_SRC) && (
                #ifdef __IP_NUMBER__
                    ((input->ip_string[0] != NULL) && 
                    ((strlen((char*)input->ip_string) + dn_length) >= MAX_CC_ADDR_LEN)) ||
                #endif
                    (dn_length >= MAX_CC_ADDR_LEN)))
                {
                    info->opcode = INVALID_OPERATION;
                    result.flag = KAL_FALSE;
                    result.cause = CM_INVALID_NUMBER_FORMAT;
                    l4c_ss_string_parsing_lrsp(result, info);
                    return KAL_TRUE;
                }
			
            #ifdef __IP_NUMBER__
                if ((src_id == LMMI_SRC) && (input->ip_string[0] != NULL))
                {                   
                    kal_mem_cpy(l4c_comm_ptr->ip_string, input->ip_string, 21);
                }
            #endif /* __IP_NUMBER__ */ 

                if (is_cc_string(src_id, &temp, info, call_type,als_type,ecc_info) == KAL_TRUE)
                {
                    info->opcode = CC_OPERATION;
                }
                else
                {
                    info->opcode = INVALID_OPERATION;
                }

                //if (l4c_ptr->retry_flag == KAL_FALSE)
                //{
                //031229 mtk00468 modify for SAT parse dont response to LMMI
                if (src_id == SAT_SRC)
                {
                    return KAL_TRUE;
                }
                if (info->opcode == INVALID_OPERATION)
                {
                    result.flag = KAL_FALSE;
                    result.cause = L4C_NO_CAUSE;

                    if ((src_id == LMMI_SRC) || 
                        ((src_id >= RMMI_SRC) && (rmmi_ptr->is_ucm_action == KAL_TRUE))) //MAUI_02276334
                    {
                        l4c_ss_string_parsing_lrsp(result, info);
                    }
                    else
                    {
                        //we should print "error" 1 time
                        //RMMI_PTR->current_src = src_id;
                        //l4c_ss_string_parsing_rrsp(result, &info);
                        //because ss_current_action == L4C_NO_ACTION, return KAL_TRUE will print "ok"
                        return KAL_FALSE;
                    }
                }
                //}
            }
            else        //ss string
            {
            #if !defined(__SS_OPERATION_SUPPORT__)
            #if defined(__PHB_APPROVE_BY_MMI__)
                /* PHB approve by MMI via function call 
                   approve before constructing ss_parameter
                   if fail, retuen directly
                */
                tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
                tel_number.addr_length = 1 + convert_to_bcd(
                                        (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                                        (kal_uint8*) & (tel_number.addr_bcd[1]),
                                        40);
                
                if ((KAL_FALSE == custom_phb_xmgnt_approve_fdn((tel_number.addr_bcd), 
                                                                tel_number.addr_length,
                                                                (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                                L4C_SS_OPERATION,
                                                                &cause)) 
                   || (l4c_ptr->mmrr_ready_flag == KAL_FALSE))
                {
                    /* 1.FDN approve fail
                       2.mmrr_ready_flag = KAL_FALSE: means later we may receive MMRR_READY_IND when SS retry 
                       during PLMN search and cause COPS_EXE overwritten by PWRON_ATTACH
                    */
                    info->opcode = INVALID_OPERATION;
                    result.flag = KAL_FALSE;
                    result.cause = (cause == PHB_APPROVE_FDN_BLOCKED)? (PHB_CAUSE_FDN_BLOCKED) : (CM_L4C_GEN_CAUSE); //MAUI_02990419
                    if (src_id == LMMI_SRC)
                    {
                        l4c_ss_string_parsing_lrsp(result, info);
                        return KAL_TRUE; //return KAL_TRUE so L4A won't respond
                    }
                    /* for RMMI to print ERROR, but here is not reachable 
                       because SS interface for RMMI won't use l4c_ss_string_parsing()
                    */
                    return KAL_FALSE;
                }
            #else /* defined(__PHB_APPROVE_BY_MMI__) */ 
                param1_ptr = (l4cphb_approve_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

                param1_ptr->src_id = src_id;
                param1_ptr->is_retrieve = KAL_FALSE;

                param1_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;

                count = convert_to_bcd(
                            (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                            (kal_uint8*) & (param1_ptr->tel_number.addr_bcd[1]),
                            40);

                param1_ptr->tel_number.addr_length = count + 1;
                param1_ptr->approval_type = l4_custom_approval_type(L4C_SS_OPERATION,src_id);

                l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
            #endif /* !defined(__PHB_APPROVE_BY_MMI__) */

                //mtk02508_090508: construct and save ss_parameter for later ss_parse_req to CSM
                l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_ss_parse_req_struct);
                l4c_ptr->ss_parameter.data = (l4ccsm_ciss_ss_parse_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_ciss_ss_parse_req_struct), TD_RESET);

                param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
                param_ptr->src_id = src_id;
                param_ptr->ton_npi = 0x81;
                param_ptr->length = length;
                param_ptr->change_phase_req = KAL_FALSE;
                param_ptr->ss_dcs = dcs;

                param_ptr->type_of_modification = SIMCALLCONTROL_NOMODIFY;  //mtk01616_070521
            #ifdef __CSMSS_EXPLICIT_SS_OPERATION__
                param_ptr->explicit_ss_op = CSMSS_IMPLICIT_OP; //MAUI_02553565
            #endif

                kal_mem_set(param_ptr->ss_string, 0, MAX_DIGITS_USSD);
                kal_mem_cpy(param_ptr->ss_string, input->string_ptr, length + 1);
                //mtk02508_090508 end
                
                l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
            #if defined(__PHB_APPROVE_BY_MMI__)
                l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, param_ptr);
            #endif
            #else
                return KAL_FALSE;
            #endif  /* __SS_OPERATION_SUPPORT__ */
            }

        #endif /* 1 */ 

            return KAL_TRUE;
        }
        else
        {
            result.flag = KAL_TRUE;
            result.cause = L4C_NO_CAUSE;

            //mtk01616_070707: GPRS dialup don't have to lrsp 
            if (src_id == LMMI_SRC)
            {
                l4c_ss_string_parsing_lrsp(result, info);
            }
            return KAL_TRUE;
        }
    }
    else
    {
        return KAL_FALSE;
    }
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_operation_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  input               [IN]         
 *  dcs                 [IN]        
 *  length              [IN]    
 *  cf_number_length    [IN]    
 * RETURNS
 *  
 *****************************************************************************/
 kal_bool l4c_ss_operation_req(kal_uint8 src_id,
                               kal_uint8 *input,
                               kal_uint8 dcs,
                               kal_uint8 length,
                               kal_uint8 cf_number_length)
{
#if defined(__SS_OPERATION_SUPPORT__)
    l4ccsm_ciss_ss_parse_req_struct *param_ptr;
    kal_uint8 addr_type = 0x81;	
    l4c_result_struct result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#if defined(__PHB_APPROVE_BY_MMI__)
    l4_addr_bcd_struct tel_number;
    kal_uint16 cause = CM_L4C_GEN_CAUSE;
#else
    kal_uint8 count;
    l4cphb_approve_req_struct *param1_ptr;
#endif
	
    if (is_ss_cmd_conflict(src_id, PARSE_SS_EXE) == KAL_TRUE )
    {
        /* MAUI_02281977 LMMI recognizes result.flag as kal_bool type
           L4C shall return itself or L4A will return with l4c_result_enum
        */
        if (src_id == LMMI_SRC)
        {
            result.flag = KAL_FALSE;
            result.cause = L4C_NO_CAUSE;
            l4c_ss_operation_lrsp(result);
            return KAL_TRUE;
        }
        else
        {
            return KAL_FALSE;
        }
    }

    if (l4c_check_user_action(L4C_SS, src_id, USSR_FAC_IND) == KAL_TRUE)
    {
        kal_bool return_value;

        return_value = l4c_ss_exe_ussd_req(src_id, input, dcs, length);
        result.flag = return_value;
        result.cause = L4C_NO_CAUSE;

        if (src_id == LMMI_SRC)
        {
            l4c_ss_operation_lrsp(result);
        }

        return KAL_TRUE;    //because ss_current_action != L4C_NO_ACTION, will not print "ok"
    }


    /* 040112 mtk00468 modify for handle if set MS to CG we can not allow CS service */
    if (l4crac_get_mobile_class() == 2) //class CG
    {
        if (src_id == LMMI_SRC)
        {
            result.flag = KAL_FALSE;
            result.cause = L4C_NO_CAUSE;
            l4c_ss_operation_lrsp(result);
            return KAL_TRUE;
        }
        else
        {
            return KAL_FALSE;
        }
    }

#if 0 //MAUI_02884093 fdn revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
    l4c_construct_phb_approve_str(input, length); //MAUI_02884093 fdn revise

#if defined(__PHB_APPROVE_BY_MMI__)
    /* PHB approve by MMI via function call 
       approve before constructing ss_parameter
       if fail, retuen directly
    */
    tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
    tel_number.addr_length = 1 + convert_to_bcd(
                            (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                            (kal_uint8*) & (tel_number.addr_bcd[1]),
                            40);
    
    if ((KAL_FALSE == custom_phb_xmgnt_approve_fdn((tel_number.addr_bcd), 
                                                    tel_number.addr_length,
                                                    (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                    L4C_SS_OPERATION,
                                                    &cause)) 
       || (l4c_ptr->mmrr_ready_flag == KAL_FALSE))
    {
        /* 1.FDN approve fail
           2.mmrr_ready_flag = KAL_FALSE: means later we may receive MMRR_READY_IND when SS retry 
           during PLMN search and cause COPS_EXE overwritten by PWRON_ATTACH
        */
        result.flag = KAL_FALSE;
        result.cause = (cause == PHB_APPROVE_FDN_BLOCKED)? (PHB_CAUSE_FDN_BLOCKED) : (CM_L4C_GEN_CAUSE); //MAUI_02990419
        if (src_id == LMMI_SRC)
        {
            l4c_ss_operation_lrsp(result);
            return KAL_TRUE; //return KAL_TRUE so L4A won't respond
        }
        /* for RMMI to print ERROR, but here is not reachable 
           because SS interface for RMMI won't use l4c_ss_operation_req()
        */
        return KAL_FALSE;
    }
#else
    param1_ptr = (l4cphb_approve_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

    param1_ptr->src_id = src_id;
    param1_ptr->is_retrieve = KAL_FALSE;

    param1_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;

    count = convert_to_bcd(
            (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
            (kal_uint8*) & (param1_ptr->tel_number.addr_bcd[1]),
             40);

    param1_ptr->tel_number.addr_length = count + 1;
    param1_ptr->approval_type = l4_custom_approval_type(L4C_SS_OPERATION,src_id);

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
#endif /* defined(__PHB_APPROVE_BY_MMI__) */ 

    l4c_ptr->ss_parameter.length = sizeof(l4ccsm_ciss_ss_parse_req_struct);
    l4c_ptr->ss_parameter.data = (l4ccsm_ciss_ss_parse_req_struct*)
                                      construct_local_para((kal_uint16) sizeof(l4ccsm_ciss_ss_parse_req_struct), TD_RESET);

    param_ptr = (l4ccsm_ciss_ss_parse_req_struct*) l4c_ptr->ss_parameter.data;
    param_ptr->src_id = src_id;
    param_ptr->ton_npi = addr_type;
    param_ptr->length = length;
    param_ptr->change_phase_req = KAL_FALSE;
    param_ptr->ss_dcs = dcs;
    param_ptr->type_of_modification = SIMCALLCONTROL_NOMODIFY; 
    param_ptr->cf_number_length = cf_number_length;
#ifdef __CSMSS_EXPLICIT_SS_OPERATION__
    param_ptr->explicit_ss_op = CSMSS_IMPLICIT_OP; //MAUI_02553565
#endif

    kal_mem_set(param_ptr->ss_string, 0, MAX_DIGITS_USSD);
    kal_mem_cpy(param_ptr->ss_string, input, length + 1);
            
    l4c_set_user_action(L4C_SS, src_id, PARSE_SS_EXE);
    
#if defined(__PHB_APPROVE_BY_MMI__)
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, param_ptr);
#endif

    return KAL_TRUE;
#else /* !__SS_OPERATION_SUPPORT__ */
    return KAL_FALSE;
#endif
}


#ifdef __MOD_SMU__


/*****************************************************************************
 * FUNCTION
 *  is_sim_string
 * DESCRIPTION
 *  This is is_sim_string function of L4C module.
 *  check if the ss string is in SIM category
 * PARAMETERS
 *  src_id              [IN]        MMI source of the initial request
 *  input               [IN]        Ss string to be parsed
 *  format_valid        [?]         
 *  type                [?]         
 * RETURNS
 *  kal_bool    the ss string is sim category or not
 *****************************************************************************/
kal_bool is_sim_string(kal_uint8 src_id, rmmi_string_struct *input, kal_bool *format_valid, kal_uint8 *type)
{
    kal_bool result = KAL_FALSE;
    kal_uint8 ss_code[MAX_DIGITS_USSD];

    kal_brief_trace(TRACE_FUNC, FUNC_IS_SIM_STRING_ENTRY);
    kal_mem_set(ss_code, 0, MAX_DIGITS_USSD);   //mtk00758
    *format_valid = KAL_TRUE;   //intialize value
    
    if (input->string_ptr[input->index] == RMMI_CHAR_STAR)
    {
        input->index++;
        if (input->string_ptr[input->index] == RMMI_CHAR_STAR)
        {
            /* "**" */
            input->index++;
            result = get_string_before_star(input, ss_code, MAX_DIGITS_USSD);
            if (result == KAL_TRUE)
            {

                if ((strcmp((char*)ss_code, "04") == 0))
                {
                    *type = TYPE_CHV1;
                    result = setup_sim_struct(src_id, input, TYPE_CHV1, format_valid);
                }
                else if ((strcmp((char*)ss_code, "042") == 0))
                {
                    *type = TYPE_CHV2;
                    result = setup_sim_struct(src_id, input, TYPE_CHV2, format_valid);
                }
                else if ((strcmp((char*)ss_code, "05") == 0))
                {
                    *type = TYPE_UBCHV1;
                    result = setup_sim_struct(src_id, input, TYPE_UBCHV1, format_valid);
                }
                else if ((strcmp((char*)ss_code, "052") == 0))
                {
                    *type = TYPE_UBCHV2;
                    result = setup_sim_struct(src_id, input, TYPE_UBCHV2, format_valid);
                }
                else
                {
                    result = KAL_FALSE;
                }

            }
        }
    }

    if (result == KAL_FALSE)
    {
        input->index = 0;
    }
    return result;
}


/*****************************************************************************
 * FUNCTION
 *  setup_sim_struct
 * DESCRIPTION
 *  This is setup_sim_struct function of L4C module.
 *  extract info from the ss string to construct request
 *  to smu
 * PARAMETERS
 *  src_id              [IN]        MMI source of the initial request
 *  input               [IN]        Ss string to be parsed
 *  type                [IN]        Password type
 *  format_valid        [?]         
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool setup_sim_struct(kal_uint8 src_id, rmmi_string_struct *input, kal_uint8 type, kal_bool *format_valid)
{
    kal_bool result;
    kal_uint8 old_pw[9];
    kal_uint8 new_pw1[9];
    kal_uint8 new_pw2[9];
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_SETUP_SIM_STRUCT_ENTRY);
    if (type == TYPE_CHV1 || type == TYPE_CHV2)
    {
        kal_uint16 index = 0;

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) old_pw, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if (((input->index - 1) - index < 4) || ((input->index - 1) - index > 8))
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) new_pw1, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if (((input->index - 1) - index < 4) || ((input->index - 1) - index > 8))
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) new_pw2, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if (((input->index - 1) - index < 4) || ((input->index - 1) - index > 8))
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        if (input->string_ptr[input->index - 1] != RMMI_CHAR_POUND)
        {
            return KAL_FALSE;
        }

        if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
        {
            return KAL_FALSE;
        }

        if (strcmp((char*)new_pw1, (char*)new_pw2) != 0)
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }
        if (src_id >= RMMI_SRC && rmmi_ptr->command_allow == KAL_FALSE)
        {
            rmmi_ptr->current_src = src_id; //mtk02508_090109: check rmmi source
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmd_error_cause);
            return KAL_FALSE;
        }

        // Karen. this is a sim operation string; however, this sim operation is
        // not allowed. Do not send request to SMU and return here.
        if (l4c_allow_ss_sim_operation(type) == KAL_FALSE)
        {
            return KAL_TRUE;
        }

        result = l4c_smu_exe_change_password_req(
                    src_id,
                    type,
                    (kal_uint8*) old_pw,
                    (kal_uint8*) new_pw1,
                    (kal_uint8*) new_pw2);
    }
    else if (type == TYPE_UBCHV1 || type == TYPE_UBCHV2)
    {
        kal_uint16 index = 0;

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) old_pw, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if ((input->index - 1) - index != 8)
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) new_pw1, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if (((input->index - 1) - index < 4) || ((input->index - 1) - index > 8))
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        index = input->index;
        result = get_string_before_star(input, (kal_uint8*) new_pw2, 9);
        if (result == KAL_FALSE)
        {
            return KAL_FALSE;
        }
        if (((input->index - 1) - index < 4) || ((input->index - 1) - index > 8))
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        if (input->string_ptr[input->index - 1] != RMMI_CHAR_POUND)
        {
            return KAL_FALSE;
        }

        if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
        {
            return KAL_FALSE;
        }

        if (strcmp((char*)new_pw1, (char*)new_pw2) != 0)
        {
            *format_valid = KAL_FALSE;
            return KAL_FALSE;
        }

        result = l4c_smu_exe_verify_pin_req(src_id, type, (kal_uint8*) old_pw, (kal_uint8*) new_pw1);

        // Added because sim operation string could be input when power-on
        // Need to set this flag to true so that 
        // MSG_ID_MMI_SMU_PASSWORD_REQUIRED_IND can be sent.
        l4c_ptr->power_on_pin_check = KAL_TRUE; // karen
    }
    else
    {
        result = KAL_FALSE;
    }

    return result;
}

/*
 * result = get_string_before_star(input, (kal_uint8 *)old_pw);
 * if (result == KAL_FALSE)
 * return result;
 * 
 * result = get_string_before_star(input, (kal_uint8 *)new_pw1);
 * if (result == KAL_FALSE)
 * return result;
 * 
 * result = get_string_before_star(input, (kal_uint8 *)new_pw2);
 * if (result == KAL_FALSE)
 * return result;
 * 
 * if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
 * return KAL_FALSE;
 * if (strcmp ((char *)new_pw1, (char *)new_pw2) != 0)
 * return KAL_FALSE;
 * 
 * if (type == TYPE_CHV1 || type == TYPE_CHV2)
 * result = l4c_smu_exe_change_password_req (src_id, type,
 * (kal_uint8 *)old_pw,
 * (kal_uint8 *)new_pw1,
 * (kal_uint8 *)new_pw2);
 * else
 * result = l4c_smu_exe_verify_pin_req (src_id, type, 
 * (kal_uint8 *)old_pw, 
 * (kal_uint8 *)new_pw1);
 * return result;
 * }
 */
#endif /* __MOD_SMU__ */ 


/*****************************************************************************
 * FUNCTION
 *  short_string_as_call
 * DESCRIPTION
 *  This is short_string_as_call function of L4C module.
 *  check if the short string is intended to be treated as CC_OPERATION
 * PARAMETERS
 *  input       [IN]        Ss string to be parsed
 *  length      [IN]        Ss string length
 * RETURNS
 *  kal_bool    the ss string should be interpreted as CC_OPERATION
 *****************************************************************************/
kal_bool short_string_as_call(rmmi_string_struct *input, kal_uint8 length)
{

#ifdef __MEXICO_ECC__
    if ((length == 2) && (input->string_ptr[0] == '0') && (input->string_ptr[1] == '8'))
    {
        return KAL_TRUE;
    }
#endif /* __MEXICO_ECC__ */ 

#ifdef __RUSSIA_ECC__   /* 01, 02, 03 as ECC call */
    if ((length == 2) && (input->string_ptr[0] == '0') &&
        ((input->string_ptr[1] == '1') || (input->string_ptr[1] == '2') || (input->string_ptr[1] == '3')))
    {
        return KAL_TRUE;
    }
#endif /* __RUSSIA_ECC__ */ 

#ifdef __STAR_SHORT_STRING_AS_CALL__    /*  '*n' as call  */
    if ((length == 2) && (input->string_ptr[0] == '*') &&
        (input->string_ptr[1] >= RMMI_CHAR_0 && input->string_ptr[1] <= RMMI_CHAR_9))
    {
        return KAL_TRUE;
    }
#endif /* __STAR_SHORT_STRING_AS_CALL__ */ 

    if (custom_short_string_as_call(input->string_ptr[0], input->string_ptr[1], length) == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, INFO_CUSTOM_SHORT_STRING_AS_CALL_RETURN_TRUE);
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

#ifdef __MOD_TCM__

#ifdef __PS_DIALUP__
/*****************************************************************************
 * FUNCTION
 *  is_gprs_string
 * DESCRIPTION
 *  This is is_gprs_string function of L4C module.
 *  check if the ss string is in GPRS category
 * PARAMETERS
 *  src_id              [IN]        MMI source of the initial request
 *  input               [IN]        Ss string to be parsed
 *  format_valid        [?]         
 * RETURNS
 *  kal_bool    the ss string is gprs category or not
 *****************************************************************************/
kal_bool is_gprs_string(kal_uint8 src_id, rmmi_string_struct *input, kal_bool *format_valid)
{
    kal_bool result = KAL_FALSE;
    kal_uint8 ss_code[MAX_DIGITS_USSD];

    kal_brief_trace(TRACE_FUNC, FUNC_IS_GPRS_STRING_ENTRY);
    kal_mem_set(ss_code, 0, MAX_DIGITS_USSD);   //mtk00758
    *format_valid = KAL_FALSE;   //intialize value
    
    if (input->string_ptr[input->index] == RMMI_CHAR_STAR)
    {
        /* "*" */
        input->index++;
        result = get_string_before_star(input, ss_code, MAX_DIGITS_USSD);
        if (result == KAL_TRUE)
        {
            if ((strcmp((char*)ss_code, "98") == 0) || (strcmp((char*)ss_code, "99") == 0))
            {
                /* RMMI_2 and RMMI_3 is not allowed for data service */
                if ((src_id == LMMI_SRC)        //|| 
                    //(src_id == RMMI_2) ||
                    //(src_id == RMMI_3)
                    )
                {
                    result = KAL_FALSE;
                }
                else
                {
                    /* is_gprs_string return FALSE when 1. non-GPRS string 2. gprs string but cmd not allowed. we use this to distinguish */
                    *format_valid = KAL_TRUE;
                    if (strcmp((char*)ss_code, "99") == 0)
                    {
                        result = setup_pdp_act_struct(src_id, input, format_valid);
                    }
                    else if (strcmp((char*)ss_code, "98") == 0) //request packet domain IP service
                    {
                        result = setup_ip_pdp_act_struct(src_id, input, format_valid);
                    }
                }
            }
            else
            {
                result = KAL_FALSE;
            }
        }
    }

    if (result == KAL_FALSE)
    {
        input->index = 0;
    }
    return result;
}
#endif /* __PS_DIALUP__ */

/*****************************************************************************
 * FUNCTION
 *  setup_pdp_act_struct
 * DESCRIPTION
 *  This is setup_pdp_act_struct function of L4C module.
 *  extract info from the ss string to construct request
 *  to tcm. Format: ATD*99[**<L2P>[*<cid>]]# 
 * PARAMETERS
 *  src_id              [IN]        MMI source of the initial request
 *  input               [IN]        Ss string to be parsed
 *  format_valid        [?]         
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool setup_pdp_act_struct(kal_uint8 src_id, rmmi_string_struct *input, kal_bool *format_valid)    //mtk01616_080321
{
    kal_bool result;
    kal_uint8 cid, l2p;
    kal_uint32 call_address;
    kal_uint8 port;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_SETUP_PDP_ACT_STRUCT_ENTRY);
    result = get_uint32_before_star(input, (kal_uint32*) & call_address);
    if (result == KAL_TRUE) //we don't support <called_address> field
    {
        *format_valid = KAL_FALSE;
        return KAL_FALSE;
    }
    /* <L2P>=1 for PPP; if __NDIS_SUPPORT__ is defined, <L2P> can be 2 for WM_L2P */
    result = get_int_before_star(input, & l2p);
    if (result == KAL_FALSE)
    {
        l2p = 1;
    }
    result = get_int_before_star(input, & cid);
    if (result == KAL_FALSE)
    {
        cid = 1;
    }
	if (cid == 0 || cid > MAX_EXT_PDP_CONTEXT) //Klockwork
	{
        *format_valid = KAL_TRUE;
        return KAL_FALSE;	
	}
    if(input->string_ptr[input->index-1] != RMMI_CHAR_POUND)
    {
        *format_valid = KAL_FALSE;
        return KAL_FALSE;
    }
    if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        *format_valid = KAL_FALSE;
        return KAL_FALSE;
    }
    if (l4c_ptr->mmrr_ready_flag == KAL_FALSE) //DUMA00146453
    {
        *format_valid = KAL_TRUE; //MAUI_02127131, mtk02285
        return KAL_FALSE;
    }

    port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    
#if defined(__GEMINI__) && defined(__PS_DIALUP__)
{
    kal_uint8 i = 0;
	for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
    	module_type this_l4c = L4_MODULE(MOD_L4C, i);
        if (l4c_current_mod_id != this_l4c)
        {
		    if (l4c_search_all_src(this_l4c, CGDATA_EXE)
		     	|| (KAL_TRUE == l4c_ps_dialup_check_existence(i)) //L4CPPP_FB_2
		 	   ) 
		    {		        
		        kal_brief_trace(TRACE_GROUP_2, ATD_GPRS_DIALUP_ATTEMPT_BUT_FAIL, src_id, port);
		        return KAL_FALSE;
		    } 
        }
    }
}
#endif /* defined(__GEMINI__) && defined(__PS_DIALUP__) */

#ifdef __MBIM_SUPPORT__
    if (mbci_check_data_session_existence() == KAL_TRUE)
    {
        return KAL_FALSE;
    }
#endif

    /* mtk01616_081203: To handle contingous dilaup attempt, clear previous ath guard timer if exist */
    if(rmmi_ptr->ath_for_dialup == port)
    {
        rmmi_clear_ath_for_dialup_hdlr(); 
    }

#ifdef __MOD_PHB__
    //save number for later approve
    l4c_ptr->l4cphb_approve_req_string.type = 0x81;
    kal_mem_cpy(l4c_ptr->l4cphb_approve_req_string.number, input->string_ptr, MAX_CC_ADDR_LEN);
#endif /* __MOD_PHB__ */

    result = l4c_ps_exe_enter_data_state_req(src_id, l2p, cid, 0);
    if (result == KAL_FALSE)
    {
        kal_brief_trace(TRACE_GROUP_2, ATD_GPRS_DIALUP_ATTEMPT_BUT_FAIL, src_id, port);
        rmmi_start_ath_for_dialup_hdlr(port);
    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)           
        l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
    #else	    		
        kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());		
        RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
    #endif		
    }

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  setup_ip_pdp_act_struct
 * DESCRIPTION
 *  This is setup_ip_pdp_act_struct function of L4C module.
 *  extract info from the ss string to construct request
 *  to tcm. Format: ATD*98[*<cid>]#
 * PARAMETERS
 *  src_id              [IN]        MMI source of the initial request
 *  input               [IN]        Ss string to be parsed
 *  format_valid        [?]         
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool setup_ip_pdp_act_struct(kal_uint8 src_id, rmmi_string_struct *input, kal_bool *format_valid)
{
    kal_bool result;
    kal_uint8 cid;
    kal_uint8 port;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_SETUP_IP_PDP_ACT_STRUCT_ENTRY);
    result = get_int_before_star(input, & cid);
    if (result == KAL_FALSE)
    {
        cid = 1;
    }
	if (cid == 0 || cid > MAX_EXT_PDP_CONTEXT) //Klockwork
	{
        *format_valid = KAL_TRUE;
        return KAL_FALSE;	
	}	
    if(input->string_ptr[input->index-1] != RMMI_CHAR_POUND)
    {
        *format_valid = KAL_FALSE;
        return KAL_FALSE;
    }
    if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        *format_valid = KAL_FALSE;
        return KAL_FALSE;
    }
    if (l4c_ptr->mmrr_ready_flag == KAL_FALSE) //DUMA00146453
    {
        *format_valid = KAL_TRUE; //MAUI_02127131, mtk02285
        return KAL_FALSE;
    }

    port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
    
#if defined(__GEMINI__) && defined(__PS_DIALUP__)
{
    kal_uint8 i = 0;
	for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
    	module_type this_l4c = L4_MODULE(MOD_L4C, i);
        if (l4c_current_mod_id != this_l4c)
        {
		    if (l4c_search_all_src(this_l4c, CGDATA_EXE)
		     	|| (KAL_TRUE == l4c_ps_dialup_check_existence(i)) //L4CPPP_FB_2
		 	   ) 
		    {		        
		        kal_brief_trace(TRACE_GROUP_2, ATD_GPRS_DIALUP_ATTEMPT_BUT_FAIL, src_id, port);
		        return KAL_FALSE;
		    } 
        }
    }
}
#endif /* defined(__GEMINI__) && defined(__PS_DIALUP__) */

#ifdef __MBIM_SUPPORT__
    if (mbci_check_data_session_existence() == KAL_TRUE)
    {
        return KAL_FALSE;
    }
#endif

    /* mtk01616_081203: To handle contingous dilaup attempt, clear previous ath guard timer if exist */
    if(rmmi_ptr->ath_for_dialup == port)
    {
        rmmi_clear_ath_for_dialup_hdlr(); 
    }

#ifdef __MOD_PHB__
    //save number for later approve
    l4c_ptr->l4cphb_approve_req_string.type = 0x81;
    kal_mem_cpy(l4c_ptr->l4cphb_approve_req_string.number, input->string_ptr, MAX_CC_ADDR_LEN);
#endif /* __MOD_PHB__ */
	
    result = l4c_ps_exe_enter_data_state_req(src_id, TCM_PPP_L2P, cid, 0);
    if (result == KAL_FALSE)
    {
        kal_brief_trace(TRACE_GROUP_2, ATD_GPRS_DIALUP_ATTEMPT_BUT_FAIL, src_id, port);
        rmmi_start_ath_for_dialup_hdlr(port);
    #if defined(__CMUX_MODEM_STATUS_SUPPORT__)           
        l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
    #else	    		
        kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, port, custom_get_dcd_value_for_cmd_state());
        RMMI_UART_CtrlDCD((UART_PORT)port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);
    #endif		
    }

    return result;
}
#endif /* __MOD_TCM__ */ 

#ifdef __MOD_CSM__


/*****************************************************************************
 * FUNCTION
 *  is_cc_string
 * DESCRIPTION
 *  This is is_gprs_string function of L4C module.
 *  check if the ss string is in CC category
 * PARAMETERS
 *  src_id          [IN]        MMI source of the initial request
 *  input           [IN]        Ss string to be parsed
 *  info            [OUT]       Parsing result of the ss string
 *  call_type       [IN]        
 *  als_type        [IN]      
 *  ecc_info        [IN]      
 * RETURNS
 *  kal_bool    the ss string is cc category or not
 *****************************************************************************/
kal_bool is_cc_string(
            kal_uint8 src_id,
            rmmi_string_struct *input,
            l4c_ss_string_info_struct *info,
            kal_uint8 call_type,
            kal_uint8 als_type,
            kal_uint8 ecc_info)
{
    kal_bool result = KAL_FALSE;
    kal_uint8 ss_code[MAX_DIGITS_USSD];
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_IS_CC_STRING_ENTRY);
    kal_mem_set(ss_code, 0, MAX_DIGITS_USSD);   //mtk00758

    info->clir_flag = l4c_ptr->clir_flag;   /* using L4C local variable with MMI set before */
    if (input->string_ptr[input->index] == RMMI_CHAR_STAR)
    {
        input->index++;
        result = get_string_before_star(input, ss_code, MAX_DIGITS_USSD);
        if ((result == KAL_TRUE) && (strcmp((char*)ss_code, "31") == 0) &&
            (input->string_ptr[input->index - 1] == RMMI_CHAR_POUND))
        {
            info->clir_flag = CLIR_SUPPRESS;
        }
        else
        {
            input->index = 0;
        }
    }
    else if (input->string_ptr[input->index] == RMMI_CHAR_POUND)
    {
        input->index++;
        result = get_string_before_star(input, ss_code, MAX_DIGITS_USSD);
        if ((result == KAL_TRUE) && (strcmp((char*)ss_code, "31") == 0) &&
            (input->string_ptr[input->index - 1] == RMMI_CHAR_POUND))
        {
            info->clir_flag = CLIR_INVOKE;
        }
        else
        {
            input->index = 0;
        }
    }
    else
    {
    }
    
    result = setup_number_struct(src_id, input, info);

    if (call_type == CSMCC_VOICE_CALL)
    {
        info->call_type = (l4c_ptr->line_num == 1) ? CSMCC_VOICE_CALL : CSMCC_AUX_VOICE_CALL;
    }
    else
    {
        info->call_type = call_type;
    }
    
    if (info->call_type == CSMCC_DATA_CALL)
    {
        if (l4c_ptr->disallow_gprs_and_csd)
        {
            kal_uint8 port =0;	// MAUI_01366951

	        port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
	        rmmi_start_ath_for_dialup_hdlr(port);			  
            kal_brief_trace(TRACE_INFO, INFO_DISALLOW_DIALUP_DUT_TO_CAMERA_RUNUNG, src_id);
            result = KAL_FALSE;
        }
    }

    if (result == KAL_FALSE)
    {
        input->index = 0;
        return KAL_FALSE;
    }

    //mtk01616_070903 : we should append IP number string first , then process it

    result = l4c_cc_exe_call_setup_req(src_id, info->addr, 0, info->call_type, info->clir_flag, info->cug_flag,als_type,ecc_info);
#ifdef __IP_NUMBER__
    kal_mem_set(l4c_comm_ptr->ip_string, 0, 21); /* reset ip_string */
#endif 
    return result;
}


/*****************************************************************************
 * FUNCTION
 *  setup_number_struct
 * DESCRIPTION
 *  This is setup_number_struct function of L4C module.
 *  extract info from the ss string to construct request
 *  to csmcc
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 *  input       [IN]        Ss string to be parsed
 *  info        [OUT]       Parsing result of the ss string
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool setup_number_struct(kal_uint8 src_id, rmmi_string_struct *input, l4c_ss_string_info_struct *info)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 indx = 0;
#ifdef __IP_NUMBER__
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR; //for slim
#endif
#ifdef __IP_NUMBER__
    kal_uint8 buff[MAX_CC_ADDR_LEN];
#endif 

    kal_brief_trace(TRACE_FUNC, FUNC_SETUP_NUMBER_STRUCT_ENTRY);

    rmmi_skip_spaces(input);
    if (input->string_ptr[input->index] == RMMI_CHAR_PLUS)
    {
        info->addr.type = 145;
        input->index++;
    }
    else
    {
        info->addr.type = L4C_PTR->cc_ton; //default is 129 if didn't change
    }
    
//mtk02508_090812 combine ip_string with number
#ifdef __IP_NUMBER__
    if ((src_id == LMMI_SRC) && (l4c_comm_ptr->ip_string[0] != 0))
    {
        //MAUI_01620436: IP number can contain '+'
        if (l4c_comm_ptr->ip_string[0] == RMMI_CHAR_PLUS)
        {
            info->addr.type = 145;
            strcpy((char*)buff, (char*)(&l4c_comm_ptr->ip_string[1]));
        }
        else
        {
            strcpy((char*)buff, (char*)l4c_comm_ptr->ip_string);
        }
        strcat((char*)buff, (char*)(input->string_ptr + input->index)); //shift the first '+' if exists
        kal_mem_cpy(input->string_ptr, buff, MAX_CC_ADDR_LEN);
        input->index = 0; //reset string index
    }
#endif /* __IP_NUMBER__ */

    while ((input->string_ptr[input->index] >= RMMI_CHAR_0 &&
            input->string_ptr[input->index] <= RMMI_CHAR_9) ||
            input->string_ptr[input->index] == rmmi_char_p ||
            input->string_ptr[input->index] == RMMI_CHAR_P ||
            input->string_ptr[input->index] == RMMI_CHAR_STAR || input->string_ptr[input->index] == RMMI_CHAR_POUND
            //     ||input->string_ptr[input->index] == RMMI_CHAR_PLUS
            || (l4c_check_auto_dtmf_modifier(input->string_ptr[input->index]) == KAL_TRUE)             
        )
    {
    #ifdef __SP_RIL_SUPPORT__
        /* ignore auto DTMF digits in CALL_SETUP */
        if (input->string_ptr[input->index] == rmmi_char_p ||
            input->string_ptr[input->index] == RMMI_CHAR_P ||
            (l4c_check_auto_dtmf_modifier(input->string_ptr[input->index]) == KAL_TRUE))
        {
            while (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
            {
                input->index++;
            }
            break;
        }
    #endif
        rmmi_skip_spaces(input);
        info->addr.number[indx] = input->string_ptr[input->index];
        indx++;
        input->index++;
        if (indx == (MAX_CC_ADDR_LEN - 1))
        {
            break;
        }
    }
    info->addr.number[indx] = RMMI_END_OF_STRING_CHAR;
    info->addr.length = indx;

    /* if (info->clir_flag == 0xff)
       info->clir_flag = CLIR_AUTO; */
    info->cug_flag = KAL_FALSE;

    while (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(input);
        switch (input->string_ptr[input->index])
        {
            case rmmi_char_i:
                info->clir_flag = CLIR_SUPPRESS;
                break;
            case RMMI_CHAR_I:
                info->clir_flag = CLIR_INVOKE;
                break;
            case rmmi_char_g:
            case RMMI_CHAR_G:
                info->cug_flag = KAL_TRUE;
                break;
            case RMMI_CHAR_PLUS:
                /* we allow + appears in the middle of the number but ignore all the following chars */
                while ((input->string_ptr[input->index + 1] >= RMMI_CHAR_0) &&
                        (input->string_ptr[input->index + 1] <= RMMI_CHAR_9))
                {
                    /* we will ignore 0 ~ 9 after the middle + */
                    input->index++;
                }
                break;
            default:
                ret_val = KAL_FALSE;
                L4C_PTR->ceer_report = 28; //CM_INVALID_NUMBER_FORMAT ALPS00071685
                break;
        }
        if (ret_val == KAL_FALSE)
        {
            input->index = 0;
            break;
        }
        input->index++;
    }
    return ret_val;
}
#endif /* __MOD_CSM__ */ 


/*****************************************************************************
 * FUNCTION
 *  get_int_before_star
 * DESCRIPTION
 *  This is get_int_before_star function of L4C module.
 *  extract integer from the ss string before '*'
 * PARAMETERS
 *  input       [IN]        Ss string to be parsed
 *  number      [OUT]       Extracted integer
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool get_int_before_star(rmmi_string_struct *input, kal_uint8 *number)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint16 value = 0;
    kal_uint8 count = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_GET_INT_BEFORE_STAR_ENTRY);

    while (input->string_ptr[input->index] != RMMI_CHAR_STAR &&
           input->string_ptr[input->index] != RMMI_CHAR_POUND &&
           input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(input);
        if (input->string_ptr[input->index] >= RMMI_CHAR_0 && input->string_ptr[input->index] <= RMMI_CHAR_9)
        {
            value = value * 10 + (input->string_ptr[input->index]) - RMMI_CHAR_0;
            input->index++;
            count++;
            if (value > 255) //MAUI_02257093
            {
                ret_val = KAL_FALSE;
                break;
            }

        }
        else
        {
            ret_val = KAL_FALSE;
            break;
        }
    }

    if ((input->string_ptr[input->index] == RMMI_CHAR_POUND) &&
        (input->string_ptr[input->index + 1] != RMMI_END_OF_STRING_CHAR))
    {
        ret_val = KAL_FALSE;
        input->index = 0;
    }
    else
    {
        if ((input->string_ptr[input->index] == RMMI_CHAR_STAR) || (input->string_ptr[input->index] == RMMI_CHAR_POUND))
        {
            input->index++;
        }
        if (count == 0)
        {
            ret_val = KAL_FALSE;
        }
    }

    *number = (kal_uint8)value;
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  get_uint32_before_star
 * DESCRIPTION
 *  This is get_uint32_before_star function of L4C module.
 *  extract integer from the ss string before '*'
 * PARAMETERS
 *  input       [IN]        Ss string to be parsed
 *  number      [OUT]       Extracted integer
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool get_uint32_before_star(rmmi_string_struct *input, kal_uint32 *number)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint32 value = 0;
    kal_uint8 count = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_GET_UINT32_BEFORE_STAR_ENTRY);

    while (input->string_ptr[input->index] != RMMI_CHAR_STAR &&
           input->string_ptr[input->index] != RMMI_CHAR_POUND &&
           input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(input);
        if (input->string_ptr[input->index] >= RMMI_CHAR_0 && input->string_ptr[input->index] <= RMMI_CHAR_9)
        {
            value = value * 10 + (input->string_ptr[input->index]) - RMMI_CHAR_0;
            input->index++;
            count++;
            if (count >= 4)
            {
                ret_val = KAL_FALSE;
                break;
            }

        }
        else
        {
            ret_val = KAL_FALSE;
            break;
        }
    }
    if ((input->string_ptr[input->index] == RMMI_CHAR_STAR) || (input->string_ptr[input->index] == RMMI_CHAR_POUND))
    {
        input->index++;
    }
    if (count == 0)
    {
        ret_val = KAL_FALSE;
    }

    *number = value;
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  get_string_before_star
 * DESCRIPTION
 *  This is get_string_before_star function of L4C module.
 *  extract ascii string from the ss string before '*'
 * PARAMETERS
 *  input           [IN]        Ss string to be parsed
 *  string_ptr      [?]         
 *  number(?)       [OUT]       Extracted string
 * RETURNS
 *  kal_bool    extract info success or not
 *****************************************************************************/
kal_bool get_string_before_star(rmmi_string_struct *input, kal_uint8 *string_ptr, kal_uint8 max_length)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 count = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_GET_STRING_BEFORE_STAR_ENTRY);

    while (input->string_ptr[input->index] != RMMI_CHAR_STAR &&
           input->string_ptr[input->index] != RMMI_CHAR_POUND &&
           input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(input);
        if (input->string_ptr[input->index] >= RMMI_CHAR_0 && input->string_ptr[input->index] <= RMMI_CHAR_9)

        {
            *((kal_uint8*) string_ptr + count) = input->string_ptr[input->index];
            input->index++;
            count++;
            if (count >= max_length) //we have already written max_length digits
            {
                ret_val = KAL_FALSE;
                break;
            }
        }
        else
        {
            ret_val = KAL_FALSE;
            break;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        input->index = 0;
    }
    else
    {
        if ((input->string_ptr[input->index] == RMMI_CHAR_POUND) &&
            (input->string_ptr[input->index + 1] != RMMI_END_OF_STRING_CHAR) && (strcmp((char*)string_ptr, "31") != 0))
        {
            ret_val = KAL_FALSE;
            input->index = 0;
        }
        else
        {
            *((kal_uint8*) string_ptr + count) = RMMI_END_OF_STRING_CHAR;
            
            if ((input->string_ptr[input->index] == RMMI_CHAR_STAR) || (input->string_ptr[input->index] == RMMI_CHAR_POUND))
            {
                input->index++;
            }
        }
    }

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  get_dn_before_star
 * DESCRIPTION
 *  
 * PARAMETERS
 *  input           [?]     
 *  string_ptr      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool get_dn_before_star(rmmi_string_struct *input, kal_uint8 *string_ptr)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 count = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_GET_DN_BEFORE_STAR_ENTRY);

    while (input->string_ptr[input->index] != RMMI_CHAR_STAR &&
           input->string_ptr[input->index] != RMMI_CHAR_POUND &&
           input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        rmmi_skip_spaces(input);
        if ((input->string_ptr[input->index] >= RMMI_CHAR_0 &&
             input->string_ptr[input->index] <= RMMI_CHAR_9) ||
            (input->string_ptr[input->index] == rmmi_char_p) ||
            (input->string_ptr[input->index] == RMMI_CHAR_P) ||
            (l4c_check_auto_dtmf_modifier(input->string_ptr[input->index]) == KAL_TRUE))
        {
            *((kal_uint8*) string_ptr + count) = input->string_ptr[input->index];
            input->index++;
            count++;
            /* 081203 MTK02508 : MAUI_01342805 */
            if (count >= MAX_CC_ADDR_LEN)
            {
                ret_val = KAL_FALSE;
                break;
            }
        }
        else
        {
            ret_val = KAL_FALSE;
            break;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        input->index = 0;
    }
    else
    {
        if ((input->string_ptr[input->index] == RMMI_CHAR_POUND) &&
            (input->string_ptr[input->index + 1] != RMMI_END_OF_STRING_CHAR))
        {
            ret_val = KAL_FALSE;
            input->index = 0;
        }
        else
        {
            *((kal_uint8*) string_ptr + count) = RMMI_END_OF_STRING_CHAR;
            input->index++;
        }
    }

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  get_dn_by_length
 * DESCRIPTION
 *  
 * PARAMETERS
 *  input           [?]     
 *  string_ptr      [?]     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool get_dn_by_length(rmmi_string_struct *input, kal_uint8 *string_ptr, kal_uint8 dn_length)
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint8 count = 0;
    kal_uint8 length = dn_length;
//    kal_trace(TRACE_FUNC, FUNC_GET_STRING_BEFORE_STAR_ENTRY);

    while (length > 0)// &&
           //input->string_ptr[input->index] != RMMI_CHAR_POUND &&
           //input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
    {
        //rmmi_skip_spaces(input);
        while( input->string_ptr[input->index] == RMMI_SPACE )
        {
            input->index++;
            length--;
        }

        if ((input->string_ptr[input->index] >= RMMI_CHAR_0 &&
             input->string_ptr[input->index] <= RMMI_CHAR_9) ||
            (input->string_ptr[input->index] == RMMI_CHAR_POUND) ||
            (input->string_ptr[input->index] == rmmi_char_p) ||
            (input->string_ptr[input->index] == RMMI_CHAR_P) ||
            (input->string_ptr[input->index] == RMMI_CHAR_STAR) ||
            (l4c_check_auto_dtmf_modifier(input->string_ptr[input->index]) == KAL_TRUE))
        {
            *((kal_uint8*) string_ptr + count) = input->string_ptr[input->index];
            input->index++;
            length--;
            count++;
            /* 081203 MTK02508 : MAUI_01342805 */
            if (count >= MAX_CC_ADDR_LEN)
            {
                ret_val = KAL_FALSE;
                break;
            }
        }
        else
        {
            ret_val = KAL_FALSE;
            break;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        input->index = 0;
    }
    else
    {
        //if ((input->string_ptr[input->index] == RMMI_CHAR_POUND) &&
        //    (input->string_ptr[input->index + 1] != RMMI_END_OF_STRING_CHAR))
        //{
        //    ret_val = KAL_FALSE;
        //    input->index = 0;
        //}
        //else 
        if (length != 0)
        {
            ASSERT(0);//for ut
            ret_val = KAL_FALSE;
            input->index = 0;
        }
        else
        {
            *((kal_uint8*) string_ptr + count) = RMMI_END_OF_STRING_CHAR;
            if (input->string_ptr[input->index] != RMMI_END_OF_STRING_CHAR)
            {
                input->index++;
            }
        }
    }

    return ret_val;
}

