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
 * RMMI_VALIDATOR_DATA.C
 *
 * Project:
 * --------
 *   MAUI
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include <stdio.h>
#include <string.h>
//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
//#include "stack_config.h"
#include "kal_trace.h"
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
#include "device.h"
//#include "csmss_common_enums.h"


//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_enums.h"

//#include "mcd_l4_common.h"
 
//#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_msghdlr.h"
#include "l4_trc.h"
#include "atci_trc.h"

//#include "uart_sw.h"
#include "dcl.h"
//#include "l4_defs.h"
#include "csmcc_atfunc.h"
//#include "csmss_atfunc.h"
//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"

#ifdef __MOD_CSM__
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c_ciss_cmd.h"
//#include "l4c2csm_ss_struct.h"
#include "l4c_cc_cmd.h"
#endif /* __MOD_CSM__ */ 

#if defined (VM_SUPPORT)
//#include "med_struct.h"
#endif 
#ifdef __MOD_UEM__
#include "device.h"
//#include "l4c2uem_struct.h"
//#include "uem_at_cmd.h"
//#include "custom_em.h"
#include "l4c_eq_cmd.h"
#endif /* __MOD_UEM__ */ 
#ifdef __MOD_RAC__
//#include "l4crac_func.h"
//#include "l4c_nw_cmd.h"
//#include "l4crac_enums.h"
#endif /* __MOD_RAC__ */ 
#ifdef __MOD_PHB__
//#include "sim_common_enums.h"
//#include "l4c2phb_enums.h"
//#include "l4c2phb_struct.h"
//#include "phb_sap.h"
//#include "l4c_phb_cmd.h"
//#include "phb_defs.h"
//#include "phb_config.h"
#endif /* __MOD_PHB__ */ 
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_defs.h"
//#include "smsal_l4c_funcs.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_defs.h"
//#include "l4c_sms_cmd.h"
#endif /* __MOD_SMSAL__ */ 
#ifdef __MOD_SMU__
//#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
//#include "l4c_sim_cmd.h"
#endif /* __MOD_SMU__ */ 
#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
//#include "l4c2tcm_struct.h"
//#include "l4c2tcm_func.h"
//#ifdef __TCPIP__
//#include "l4c2abm_struct.h"
//#endif /* __TCPIP__ */
//#include "l4c_gprs_cmd.h"
#endif /* __MOD_TCM__ */ 
#ifdef __MODEM_EM_MODE__
//#include "em_struct.h"
//#include "l4c_em.h"
//#include "lmmi_rsp.h"
#endif /* __MODEM_EM_MODE__ */ 

//#include "l4c_utility.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_utility.h"
//#include "rmmi_rsp.h"
//#include "rmmi_validator.h"
//#include "nvram_data_items.h"
//#include "custom_hw_default.h"
//#include "l4c_table.h"
#include "rmmi_parser.h"
//#include "resource_verno.h"     // for +EGMR read MMI resource version

#ifdef __CSD_FAX__
#include "csm_data_enums.h"
#include "l4c2t30_struct.h"
#include "l4c_t30_cmd.h"
//#include "l4c2t30_enums.h"
#endif /* __CSD_FAX__ */ 
#include "rmmi_parser.h"
#ifndef MED_NOT_PRESENT
//#include "med_global.h"
//#include "med_main.h"
#endif /* MED_NOT_PRESENT */ 
//#ifdef __J2ME__
//#include "jam_msg_handler.h"
//#endif 

#ifdef __CTM_SUPPORT__
//#include "med_struct.h"
#endif 
//#include "l4c_sendmsg.h"

#ifdef __CUST_NEW__
//#include "gpio_sw.h"
#endif 

/* for data item NVRAM_EF_IMEI_IMEISV_LID move */
//#include "nvram_user_defs.h"
#include "csmcc_defs.h"

//#include "keypad_sw.h"
//#include "l4c2smu_struct.h"
//#include "lmmi_ind.h"

//#include "csmcc_common_enums.h"

//#include "mncc_struct.h"
//#include "csmcc_bc_types.h"
//#include "csmcc_types.h"
//#include "custom_em.h"
//#include "L4c_ctm_cmd.h"
//#include "csmcc_utility.h"

//#include "sat_def.h"

//#include "uem_proc_cmd.h"

#include "rmmi_msghdlr.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "csmcc_enums.h"

extern UART_PORT PS_UART_PORT;

#if !defined(__ULC_AT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_fclass_hdlr
 * DESCRIPTION
 *  This function do not need to be blocked when SIM is not inserted
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fclass_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 mode;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCLASS_HDLR_ENTRY);
    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            ret_val = l4ccsm_cc_test_fclass_mode(&rsp_str);
            string_length = strlen((char*)rsp_str);
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
            ret_val = l4ccsm_cc_get_fclass_mode(&mode);

            if (ret_val == KAL_TRUE)
            {
                if ((mode == 0) || (mode == 1) || (mode == 2))
                {
                    rmmi_ptr->arg_list[0] = (void*)&mode;
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);

                    rsp_str = &buffer[0];
                }
                else if (mode == 10)
                {
                    kal_sprintf((kal_char*) buffer, "1.0");
                    rsp_str = &buffer[0];
                    string_length = strlen((char*)rsp_str);
                }
                else if (mode == 20)
                {
                    kal_sprintf((kal_char*) buffer, "2.0");
                    rsp_str = &buffer[0];
                    string_length = strlen((char*)rsp_str);
                }

            }
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 temp_index = source_string_ptr->index;
            kal_uint8 decimal;

            mode = (kal_uint8) rmmi_int_validator(
                                source_string_ptr,
                                rmmi_ptr->s_reg.s3 /* separator */ );

            /* might be the case +FCLASS=1.0 or 2.0 */
            if (mode == RMMI_VALIDATOR_ERROR)
            {
                source_string_ptr->index = temp_index;
                mode = (kal_uint8) rmmi_int_validator(source_string_ptr, RMMI_CHAR_DOT);
                if ((mode == 1) || (mode == 2))
                {
                    decimal = (kal_uint8) rmmi_int_validator(source_string_ptr, rmmi_ptr->s_reg.s3);
                    if (decimal == 0)
                    {
                        mode = mode * 10;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }

            ret_val = l4ccsm_cc_set_fclass_mode(mode);
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */

    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


#if !defined(__SLIM_AT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_csns_hdlr
 * DESCRIPTION
 *  selects the bearer or teleservice to be used
 *  when mobile terminated single numbering scheme call is established.
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_csns_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 mode;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_CSNS_HDLR_ENTRY);
    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            ret_val = l4ccsm_cc_test_sns_mode(&rsp_str);
            string_length = strlen((char*)rsp_str);
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
            ret_val = l4c_cc_get_single_num_req(source_string_ptr->src_id, &mode);
            if (ret_val == KAL_FALSE)
            {
                break;
            }

            rmmi_ptr->arg_list[0] = (void*)&mode;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSNS: %d", rmmi_ptr->arg_list, 1);
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            mode = (kal_uint8) rmmi_int_validator_ext(
                                &error_cause,
                                source_string_ptr,
                                rmmi_ptr->s_reg.s3 /* separator */ );
            if (mode == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    mode = 0;
                }
                else
                {
                    break;
                }
            }

            ret_val = l4c_cc_set_single_num_req(source_string_ptr->src_id, mode);
            if (ret_val == KAL_FALSE)
            {
                rmmi_ptr->cmee_err = RMMI_ERR_UNKNOWN;
            }

            break;
        }
        default:
            break;
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) buffer, string_length);
    return;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  rmmi_cbst_hdlr
 * DESCRIPTION
 *  select bearer service type
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cbst_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 speed, name, ce;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_CBST_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            ret_val = l4ccsm_cc_test_bearer_service_type(&rsp_str);
            if (ret_val == KAL_TRUE)
            {
                string_length = strlen((char*)rsp_str);
            }
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
            ret_val = l4c_cc_get_bearer_service_req(source_string_ptr->src_id, &speed, &name, &ce);
            if (ret_val == KAL_FALSE)
            {
                break;
            }
            rmmi_ptr->arg_list[0] = (void*)&speed;
            rmmi_ptr->arg_list[1] = (void*)&name;
            rmmi_ptr->arg_list[2] = (void*)&ce;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CBST: %d, %d, %d", rmmi_ptr->arg_list, 3);
            rsp_str = &buffer[0];
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            /* Get the speed from the command line and validate it */
            speed = (kal_uint8) rmmi_int_validator_ext(
                                    &error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_COMMA /* separator */ );

            /* error if it's not in a valid range (0 - 83 ) */
            if (speed == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    speed = 0;
                }
                else
                {
                    break;
                }
            }

            /* Next, get the name type from command line, and validate it         */
            name = (kal_uint8) rmmi_int_validator_ext(
                                &error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA /* delimiter */ );
            if (name == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    name = 0;
                }
                else
                {
                    break;
                }
            }

            /* Finally, get the connection element from command line,
               and validate it */
            ce = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, rmmi_ptr->s_reg.s3);
            if (ce == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    ce = 1;
                }
                else
                {
                    break;
                }
            }
            ret_val = l4c_cc_set_bearer_service_req(source_string_ptr->src_id, speed, name, ce);

            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->rmmi_current_profile.rmmi_cbst.speed = speed;
                rmmi_ptr->rmmi_current_profile.rmmi_cbst.name = name;
                rmmi_ptr->rmmi_current_profile.rmmi_cbst.ce = ce;
            }

            break;

        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */

    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


#ifdef CSD_SUPPORT
/*****************************************************************************
 * FUNCTION
 *  rmmi_cmod_hdlr
 * DESCRIPTION
 *  Set command selects the call mode of further dialling commands
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cmod_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 mode;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_CMOD_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            ret_val = l4ccsm_cc_test_call_mode(&rsp_str);
            string_length = strlen((char*)rsp_str);
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
            ret_val = l4c_cc_get_call_mode_req(source_string_ptr->src_id, &mode);
            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->arg_list[0] = (void*)&mode;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CMOD: %d", rmmi_ptr->arg_list, 1);
                rsp_str = &buffer[0];

            }
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            mode = (kal_uint8) rmmi_int_validator_ext(
                                &error_cause,
                                source_string_ptr,
                                rmmi_ptr->s_reg.s3 /* separator */ );

            if (mode == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    mode = 0;
                }
                else
                {
                    break;
                }
            }
            ret_val = l4c_cc_set_call_mode_req(source_string_ptr->src_id, mode);
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_crlp_hdlr
 * DESCRIPTION
 *  set Radio link layer parameters
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_crlp_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 iws, mws, n2, ver, t4;
    kal_uint8 temp_iws, temp_mws, temp_n2, temp_ver, temp_t4;
    kal_uint16 t1, temp_t1;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_CRLP_HDLR_ENTRY);
    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
    #endif /* __test_mode__ */
        case RMMI_READ_MODE:
        {
            ret_val = l4ccsm_cc_get_rlp_param(&iws, &mws, &t1, &n2, &ver, &t4);
            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->arg_list[0] = (void*)&iws;
                rmmi_ptr->arg_list[1] = (void*)&mws;
                rmmi_ptr->arg_list[2] = (void*)&t1;
                rmmi_ptr->arg_list[3] = (void*)&n2;
                rmmi_ptr->arg_list[4] = (void*)&ver;
//MAUI_01899819                rmmi_ptr->arg_list[5] = (void*)&t4;
                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CRLP: %d, %d, %u, %d, %d", //%d",
                                    rmmi_ptr->arg_list,
                                    5); //6);
                rsp_str = &buffer[0];

            }
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            l4ccsm_cc_get_rlp_param(&iws, &mws, &t1, &n2, &ver, &t4);

            /* get iws */
            temp_iws = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (temp_iws != RMMI_VALIDATOR_ERROR)
            {
                iws = temp_iws;
            }
            else        //(temp_iws == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause != RMMI_PARSE_NOT_FOUND)
                {
                    break;
                }
            }

            /* get mws */
            temp_mws = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (temp_mws != RMMI_VALIDATOR_ERROR)
            {
                mws = temp_mws;
            }
            else        //(temp_mws == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause != RMMI_PARSE_NOT_FOUND)
                {
                    break;
                }
            }

            /* get t1 */
            temp_t1 = (kal_uint16) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_OK)
            {
                t1 = temp_t1;
            }
            else if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }

            /* get n2 */
            temp_n2 = (kal_uint8) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_OK)
            {
                n2 = temp_n2;
            }
            else if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }

            /* get ver */
            temp_ver = (kal_uint8) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_COMMA);
            if (temp_ver != RMMI_VALIDATOR_ERROR)
            {
                ver = temp_ver;
            }
            else        //(temp_ver == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause != RMMI_PARSE_NOT_FOUND)
                {
                    break;
                }
            }

            /* get t4 */
            temp_t4 = (kal_uint8) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    rmmi_ptr->s_reg.s3 /* separator */ );
            if (temp_t4 != RMMI_VALIDATOR_ERROR)
            {
                t4 = temp_t4;
            }
            else        //(temp_t4 == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause != RMMI_PARSE_NOT_FOUND)
                {
                    break;
                }
            }

            ret_val = l4ccsm_cc_set_rlp_param(iws, mws, (kal_uint8) t1, n2, ver, t4);

            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->rmmi_current_profile.rmmi_crlp.iws = iws;
                rmmi_ptr->rmmi_current_profile.rmmi_crlp.mws = mws;
                rmmi_ptr->rmmi_current_profile.rmmi_crlp.T1 = t1;
                rmmi_ptr->rmmi_current_profile.rmmi_crlp.N2 = n2;

            }
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_icf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_icf_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 format, parity;
    kal_uint8 error_cause;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_ICF_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_READ_MODE:
        {
            ret_val = l4ccsm_cc_get_char_framing(&format, &parity);

            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->arg_list[0] = (void*)&format;
                rmmi_ptr->arg_list[1] = (void*)&parity;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+ICF: %d, %d", rmmi_ptr->arg_list, 2);
                rsp_str = &buffer[0];
            }
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 temp_format, temp_parity;
            UART_CONFIG_T dcb;

            l4ccsm_cc_get_char_framing(&temp_format, &temp_parity);

            format = (kal_uint8) rmmi_int_validator_range_check(&error_cause, 
                                                                source_string_ptr, 
                                                                (kal_uint8) RMMI_COMMA,
                                                                6); //csmcc_cf_format_enum
            if (error_cause == RMMI_VALIDATOR_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                format = temp_format;
            }

            parity = (kal_uint8) rmmi_int_validator_range_check(&error_cause, 
                                                                source_string_ptr, 
                                                                rmmi_ptr->s_reg.s3, /* separator */
                                                                3); //csmcc_cf_parity_enum

            if (error_cause == RMMI_VALIDATOR_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                parity = temp_parity;
            }
            
            ret_val = l4ccsm_cc_set_char_framing(format, parity);

            /* Set DCB config to UART driver
               Translate to UART_BITS_PER_CHAR_T, UART_STOP_BITS_T, and UART_PARITY_T 
            */
            if (ret_val == KAL_TRUE)
            {
                RMMI_UART_ReadDCBConfig(PS_UART_PORT, &dcb, rmmi_current_mod_id);

                /* get get char framing format, refer to csmcc_get_cf_format() */
                switch(format)
                {
                    case CSMCC_CF_8_DATA_2_STOP:
                        dcb.u1StopBits = SB_2;
                        dcb.u1DataBits = LEN_8;
                        break;
                    case CSMCC_CF_8_DATA_1_PARITY_1_STOP:
                    case CSMCC_CF_8_DATA_1_STOP:
                        dcb.u1StopBits = SB_1;
                        dcb.u1DataBits = LEN_8;
                        break;
                    case CSMCC_CF_7_DATA_2_STOP:
                        dcb.u1StopBits = SB_2;
                        dcb.u1DataBits = LEN_7;
                        break;
                    case CSMCC_CF_7_DATA_1_PARITY_1_STOP:
                    case CSMCC_CF_7_DATA_1_STOP:
                        dcb.u1StopBits = SB_1;
                        dcb.u1DataBits = LEN_7;
                        break;
                    default:
                        dcb.u1StopBits = SB_1;
                        dcb.u1DataBits = LEN_8;
                     break;
                } /* switch(format) */

                /* get parity, refer to csmcc_get_cf_parity() */
                if ((format == CSMCC_CF_8_DATA_2_STOP) || 
                    (format == CSMCC_CF_8_DATA_1_STOP) ||
                    (format == CSMCC_CF_7_DATA_2_STOP) ||
                    (format == CSMCC_CF_7_DATA_1_STOP))
                {
                    dcb.u1Parity = PA_NONE;
                }
                else
                {
                    switch (parity)
                    {
                        case CSMCC_CF_PARITY_ODD:
                            dcb.u1Parity = PA_ODD;
                            break;
                        case CSMCC_CF_PARITY_EVEN:
                            dcb.u1Parity = PA_EVEN;
                            break;
                        case CSMCC_CF_PARITY_MARK:
                            dcb.u1Parity = PA_MARK;
                            break;
                        case CSMCC_CF_PARITY_SPACE:
                            dcb.u1Parity = PA_SPACE;
                            break;
                        default:
                            /* unchanged */
                            break;
                    }
                }
                
                RMMI_UART_SetDCBConfig(PS_UART_PORT, &dcb, rmmi_current_mod_id);
            }
            
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ds_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_string_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ds_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 dir, neg, max_str;
    kal_uint16 max_dict;
    kal_uint32 max_str_for_set;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_DS_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            ret_val = l4ccsm_cc_test_data_compression_param(&rsp_str);
            string_length = strlen((char*)rsp_str);
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
            ret_val = l4ccsm_cc_get_data_compression_mode(&dir, &neg, &max_dict, &max_str);

            if (ret_val == KAL_TRUE)
            {
                rmmi_ptr->arg_list[0] = (void*)&dir;
                rmmi_ptr->arg_list[1] = (void*)&neg;
                rmmi_ptr->arg_list[2] = (void*)&max_dict;
                rmmi_ptr->arg_list[3] = (void*)&max_str;
                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+DS: %d, %d, %u, %d",
                                    rmmi_ptr->arg_list,
                                    4);
                rsp_str = &buffer[0];
            }
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 temp_dir, temp_neg, temp_max_str;
            kal_uint16 temp_max_dict;
            kal_uint8 error_cause;
            kal_uint32 temp2_dir, temp2_neg;

            // using the get current value if option field no input
            l4ccsm_cc_get_data_compression_mode(&temp_dir, &temp_neg, &temp_max_dict, &temp_max_str);

            temp2_dir = rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (temp2_dir == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    temp2_dir = 0;      //default and only allow value
                }
                else
                {
                    break;
                }
            }
            else if (temp2_dir > 0)
            {
                break;
            }

            temp2_neg = rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (temp2_neg == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    temp2_neg = temp_neg;
                }
                else
                {
                    break;
                }
            }
            else if (temp2_neg > 1)     //out of range ERROR should report
            {
                break;
            }

            max_dict = (kal_uint16) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (max_dict == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    max_dict = temp_max_dict;
                }
                else
                {
                    break;
                }
            }
            else if (max_dict < 512 || max_dict > 4096) //out of range ERROR should report
            {
                break;
            }

            max_str_for_set = rmmi_int_validator_ext(
                                &error_cause,
                                source_string_ptr,
                                rmmi_ptr->s_reg.s3 /* separator */ );

            if (max_str_for_set == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_NOT_FOUND)
                {
                    max_str_for_set = temp_max_str;
                }
                else
                {
                    break;
                }
            }
            else if (max_str_for_set < 6 || max_str_for_set > 250)      //out of range ERROR should report
            {
                break;
            }

            ret_val = l4ccsm_cc_set_data_compression_param
                ((kal_uint8) temp2_dir, (kal_uint8) temp2_neg, max_dict, (kal_uint8) max_str_for_set);
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_dr_hdlr
 * DESCRIPTION
 *  used to enable/disable data compression report
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_dr_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 mode;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_READ_MODE:
        {
            kal_sprintf((char*)buffer, "+DR: 0");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            //rmmi_write_to_uart((kal_uint8 *)rsp_str, string_length, KAL_TRUE);
            //rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            //return;
            ret_val = KAL_TRUE;
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            mode = rmmi_int_validator_u8_check(&error_cause,source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);

            if (error_cause != RMMI_PARSE_OK)
            {
                ret_val = KAL_FALSE;            					
                break;
            }
            if (mode != 0)
            {
                break;
            }

            ret_val = KAL_TRUE;
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            break;
        }
    }   /* end of the switch */
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}
#endif /* CSD_SUPPORT */ 


#ifdef __CSD_FAX__
/*****************************************************************************
 * FUNCTION
 *  rmmi_fax_support_check
 * DESCRIPTION
 *  We only support FAX AT command under certain AT+FCLASS setting.
 *  This function is used to do the check.
 * PARAMETERS
 *  type       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool rmmi_fax_support_check(kal_uint8 type)
{
    kal_uint8 fclass_mode;
    kal_uint8 serv_class;
	
    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    if(((type & RMMI_SERV_CLASS_0 ) && (serv_class == G3_SERV_CLASS_0))||
       ((type & RMMI_SERV_CLASS_1 ) && (serv_class == G3_SERV_CLASS_1))||      
       ((type & RMMI_SERV_CLASS_1_0 ) && (serv_class == G3_SERV_CLASS_1_0))||       
       ((type & RMMI_SERV_CLASS_2 ) && (serv_class == G3_SERV_CLASS_2))||       
       ((type & RMMI_SERV_CLASS_2_0 ) && (serv_class == G3_SERV_CLASS_2_0)))
    {   
        return KAL_TRUE;
    }	
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, OPERATION_NOT_ALLOWED_ERR);
        return KAL_FALSE;	
    }
		    
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_fmi_hdlr
 * DESCRIPTION
 *  +FMI request DCE manufacturer identification (same as +GMI)
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fmi_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 eq_id[UEM_EQUIP_ID_LEN];
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    kal_uint8 equip_type;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_FMI_HDLR_ENTRY);

    /* mtk00924 20050222 for __test_mode__ modification */
    /* if(source_string_ptr->cmd_mode==RMMI_TEST_MODE)
       {
       rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
       return;
       }
       else */ if (source_string_ptr->cmd_mode != RMMI_READ_MODE)
    {
        /* unrecognized format of AT command line */
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        return;
    }

    if(source_string_ptr->cmd_index == RMMI_CMD_ATFMI)
    {
        equip_type = EQ_ME_MANUFACTURE_ID;
    }		
    else if(source_string_ptr->cmd_index == RMMI_CMD_ATFMM)
    {
        equip_type = EQ_ME_MODEL_ID;
    }		
    else
    {
        equip_type = EQ_ME_REVISION_ID;
    }		
	
    ret_val = l4c_eq_get_equip_id_req(source_string_ptr->src_id, equip_type, (kal_uint8*) eq_id);

    if (ret_val == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)eq_id;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%s", rmmi_ptr->arg_list, 1);
        rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        return;
    }
    rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpr_hdlr
 * DESCRIPTION
 *  +FPR sets the Port rate between DCE-DTE (same as +IPR)
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpr_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    kal_uint32 rate = 0;
    kal_uint8 value;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPR_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "0,1,2,4,8,10,18");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            ret_val = KAL_TRUE;
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_READ_MODE:
        {
        #ifdef UART_ENABLE
            UART_CONFIG_T dcb;

            #if defined(__CMUX_SUPPORT__)
                /* MAUI_02281302 avoid to call uart function when CMUX enable */
                if(RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
                {
                    break;
                }
            #endif

            RMMI_UART_ReadDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI);
            rate = (kal_uint32) dcb.u4Baud;
        #endif /* UART_ENABLE */ 

            if (rate == 2400)
            {
                value = 1;
            }
            else if (rate == 4800)
            {
                value = 2;
            }
            else if (rate == 9600)
            {
                value = 4;
            }
            else if (rate == 19200)
            {
                value = 8;
            }
            else if (rate == 38400)
            {
                value = 10;
            }
            else if (rate == 57600)
            {
                value = 18;
            }
            else
            {
                value = 0;
            }

            rmmi_ptr->arg_list[0] = (void*)&value;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+FPR: %d", rmmi_ptr->arg_list, 1);
            rsp_str = &buffer[0];
            ret_val = KAL_TRUE;
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = rmmi_int_validator(
                        source_string_ptr,
                        rmmi_ptr->s_reg.s3 /* separator */ );
            if (value == 1)
            {
                rate = 2400;
            }
            else if (value == 2)
            {
                rate = 4800;
            }
            else if (value == 4)
            {
                rate = 9600;
            }
            else if (value == 8)
            {
                rate = 19200;
            }
            else if (value == 10)
            {
                rate = 38400;
            }
            else if (value == 18)
            {
                rate = 57600;
            }
            else if (value != 0)
            {
                ret_val = KAL_FALSE;
                break;
            }

        #ifdef UART_ENABLE
            {
                UART_CONFIG_T dcb;

                #if defined(__CMUX_SUPPORT__)
                    /* MAUI_02281302 avoid to call uart function when CMUX enable */
                    if(RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
                    {
                        break;
                    }
                #endif
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

                RMMI_UART_ReadDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI);
                dcb.u4Baud = rate;
                RMMI_UART_SetDCBConfig(PS_UART_PORT, &dcb, MOD_ATCI);
            }
        #else
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        #endif /* UART_ENABLE */ 

            return;
        }

        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }   /* end of the switch */

    if (ret_val == KAL_TRUE)
    {
        rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdt_hdlr
 * DESCRIPTION
 *  +FDT command requests DCE to transmit a Phase C page
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdt_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode;
    kal_uint8 serv_class;
    kal_uint8 df, vr, wd, ln;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 const *rsp_str = NULL;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDT_HDLR_ENTRY);

    /* only support when +FCLASS=2 or 2.0 */
    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {

            if ((serv_class == G3_SERV_CLASS_0) || (serv_class == G3_SERV_CLASS_2))
            {
                kal_sprintf((kal_char*) buffer, "(0-3),(0,1),(0-4),(0-2)");
                rsp_str = &buffer[0];
                string_length = strlen((char*)rsp_str);
                rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            }
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_ACTIVE_MODE:
        {
            if(rmmi_fax_support_check(RMMI_SERV_CLASS_2|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
                return;

            ret_val = l4c_t30_fdt_tx_msg_req(
                        source_string_ptr->src_id,
                        source_string_ptr->cmd_mode,
                        serv_class,
                        0,
                        0,
                        0,
                        0);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            if (serv_class != G3_SERV_CLASS_2)  /* only +FCLASS=2 has set mode */
            {
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, OPERATION_NOT_ALLOWED_ERR);
                return;
            }
            df = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (df >= 4)
            {
                break;
            }

            vr = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (vr >= 2)
            {
                break;
            }

            wd = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (wd >= 5)
            {
                break;
            }

            ln = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (ln >= 3)
            {
                break;
            }

            ret_val = l4c_t30_fdt_tx_msg_req
                (source_string_ptr->src_id, source_string_ptr->cmd_mode, serv_class, df, vr, wd, ln);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }   /* end of the switch */

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdr_hdlr
 * DESCRIPTION
 *  +FDR command initiates transition to Phase C data reception
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdr_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDR_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_ACTIVE_MODE:
        {
            if(rmmi_fax_support_check(RMMI_SERV_CLASS_2|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
                return;

            ret_val = l4c_t30_fdr_rx_msg_req(source_string_ptr->src_id);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fip_hdlr
 * DESCRIPTION
 *  +FIP command causes DCE to initialize all Service Class 2 Facsimile parameters
 *  to the default setting
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fip_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FIP_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_ACTIVE_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIP,
                        RMMI_SET_OR_EXECUTE_MODE,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value != 0)
            {
                break;
            }

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fks_hdlr
 * DESCRIPTION
 *  +FKS command (class 2.0) causes the DCE to terminate the session
 *  in an orderly manner.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fks_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_trace(TRACE_FUNC, FUNC_RMMI_FKS_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_ACTIVE_MODE:
        {
            if(rmmi_fax_support_check(RMMI_SERV_CLASS_2_0) == KAL_FALSE)
                return;
			
            //remove ath usage in UCM project, for DATA call there can be only one call, therefore we use CHLD release all 
            l4c_cc_exe_chld_req(source_string_ptr->src_id, CSMCC_REL_ALL, CSMCC_INVALID_CALL_ID);
            return;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fk_hdlr
 * DESCRIPTION
 *  +FK command (class 2) causes the DCE to terminate the session
 *  in an orderly manner.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fk_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_trace(TRACE_FUNC, FUNC_RMMI_FK_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_ACTIVE_MODE:
        {
            if(rmmi_fax_support_check(RMMI_SERV_CLASS_2) == KAL_FALSE)
                return;
			
            //remove ath usage in UCM project, for DATA call there can be only one call, therefore we use CHLD release all 
            l4c_cc_exe_chld_req(source_string_ptr->src_id, CSMCC_REL_ALL, CSMCC_INVALID_CALL_ID);
            return;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fet_hdlr
 * DESCRIPTION
 *  +FET command release the post-page message to remote side.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fet_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 ppr;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 const *rsp_str = NULL;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FET_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "(0-2,4-6)");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            ppr = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if ((ppr > 6) || (ppr == 3))    /* valid value is (0-2,4-6) */
            {
                break;
            }

            ret_val = l4c_t30_fet_tx_ppm_req(source_string_ptr->src_id, ppr);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ftm_hdlr
 * DESCRIPTION
 *  +FTM command causes the DCE to transmit data using the modulation selected.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ftm_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 mod;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FTM_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "(24,48,72,96)");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }

            mod = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if ((mod == 24) || (mod == 48) || (mod == 72) || (mod == 96))
            {
                ret_val = l4c_t30_ftm_tx_msg_req(source_string_ptr->src_id, mod);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_frm_hdlr
 * DESCRIPTION
 *  +FRM command causes the DCE to enter receive mode using the modulation selected.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_frm_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 mod;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FRM_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;			

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "(24,48,72,96)");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }
            mod = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if ((mod == 24) || (mod == 48) || (mod == 72) || (mod == 96))
            {
                ret_val = l4c_t30_frm_rx_msg_req(source_string_ptr->src_id, mod);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fth_hdlr
 * DESCRIPTION
 *  +FTH command causes DCE to transmit data framed in HDLC protocol
 *  using modulation selected.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fth_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 mod;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FTH_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;			

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "3");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }
            mod = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (mod == 3)   /* only 3 is supported */
            {
                ret_val = l4c_t30_fth_tx_bcs_req(source_string_ptr->src_id, mod);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_frh_hdlr
 * DESCRIPTION
 *  +FRH command causes the DCE to receive HDLC framed data
 *  using the modulation selected.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_frh_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint8 mod;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FRH_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "3");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }
            mod = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (mod == 3)   /* only <mod>=3 is supported */
            {
                ret_val = l4c_t30_frh_rx_bcs_req(source_string_ptr->src_id, mod);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fts_hdlr
 * DESCRIPTION
 *  +FTS command cause the DCE to stop any transmission.
 *  the DCE then waits for the specified amount of time, and then send OK to DTE
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fts_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint16 time;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FTS_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;			

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "(0-255)");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }
            time = (kal_uint16) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_PTR->s_reg.s3);
            /* time: ( 0-255 ) */
            if ((error_cause == RMMI_PARSE_ERROR) || (error_cause == RMMI_PARSE_NOT_FOUND) || (time > 255))
            {
                break;
            }
            else
            {
                ret_val = l4c_t30_fts_tx_silence_req(source_string_ptr->src_id, (kal_uint8) time);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_frs_hdlr
 * DESCRIPTION
 *  +FRS command cause the DCE to listen, and to report back an OK result code
 *  when silence has been present on the line for the amount of time
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_frs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length;
    kal_uint16 time;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FRS_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_1|RMMI_SERV_CLASS_1_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            kal_sprintf((kal_char*) buffer, "(0-255)");
            rsp_str = &buffer[0];
            string_length = strlen((char*)rsp_str);
            rmmi_write_to_uart((kal_uint8*) rsp_str, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            if (serv_class == G3_SERV_CLASS_0)  /* exec cmd not allowed when +FCLASS=0 */
            {
                break;
            }
            time = (kal_uint16) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_PTR->s_reg.s3);
            /* time: ( 0-255 ) */
            if ((error_cause == RMMI_PARSE_ERROR) || (error_cause == RMMI_PARSE_NOT_FOUND) || (time > 255))
            {
                break;
            }
            else
            {
                ret_val = l4c_t30_frs_rx_silence_req(source_string_ptr->src_id, (kal_uint8) time);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fcc_hdlr
 * DESCRIPTION
 *  +FCC command allows DTE to sense and control the capabilities of the facsimile DCE.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fcc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vr, br, wd, ln, df, ec, bf, st, jp;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCC_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            t30_rw_param.session_param.VR.is_present = KAL_TRUE;
            t30_rw_param.session_param.BR.is_present = KAL_TRUE;
            t30_rw_param.session_param.WD.is_present = KAL_TRUE;
            t30_rw_param.session_param.LN.is_present = KAL_TRUE;
            t30_rw_param.session_param.DF.is_present = KAL_TRUE;
            t30_rw_param.session_param.EC.is_present = KAL_TRUE;
            t30_rw_param.session_param.BF.is_present = KAL_TRUE;
            t30_rw_param.session_param.ST.is_present = KAL_TRUE;
            t30_rw_param.session_param.JP.is_present = KAL_TRUE;

            /* get vr */
            vr = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)        //parse ERROR
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)       // omitted, use default value
                /* vr=1; */
            {
                t30_rw_param.session_param.VR.is_present = KAL_FALSE;
            }
            else if (vr > 1)    //invalid setting value
            {
                break;
            }
            /* get br */
            br = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* br=3; */
            {
                t30_rw_param.session_param.BR.is_present = KAL_FALSE;
            }
            else if (br > 5)
            {
                break;
            }
            /* get wd */
            wd = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* wd=0; */
            {
                t30_rw_param.session_param.WD.is_present = KAL_FALSE;
            }
            else if (wd > 4)
            {
                break;
            }
            /* get ln */
            ln = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ln=0; */
            {
                t30_rw_param.session_param.LN.is_present = KAL_FALSE;
            }
            else if (ln > 2)
            {
                break;
            }
            /* get df */
            df = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* df=0;  */
            {
                t30_rw_param.session_param.DF.is_present = KAL_FALSE;
            }
            else if (df > 3)
            {
                break;
            }
            /* get ec */
            ec = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ec=0; */
            {
                t30_rw_param.session_param.EC.is_present = KAL_FALSE;
            }
            else if (ec != 0)
            {
                break;
            }
            /* get bf */
            bf = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* bf=0; */
            {
                t30_rw_param.session_param.BF.is_present = KAL_FALSE;
            }
            else if (bf != 0)
            {
                break;
            }
            /* get st */
            st = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* st=0; */
            {
                t30_rw_param.session_param.ST.is_present = KAL_FALSE;
            }
            else if (st > 7)
            {
                break;
            }
            /* get jp */
            jp = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* jp=0; */
            {
                t30_rw_param.session_param.JP.is_present = KAL_FALSE;
            }
            else if (jp != 0)
            {
                break;
            }

            t30_rw_param.session_param.BF.para_value = bf;
            t30_rw_param.session_param.BR.para_value = br;
            t30_rw_param.session_param.DF.para_value = df;
            t30_rw_param.session_param.EC.para_value = ec;
            t30_rw_param.session_param.LN.para_value = ln;
            t30_rw_param.session_param.ST.para_value = st;
            t30_rw_param.session_param.VR.para_value = vr;
            t30_rw_param.session_param.WD.para_value = wd;
            t30_rw_param.session_param.JP.para_value = jp;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdcc_hdlr
 * DESCRIPTION
 *  +FDCC command is same as +FCC but for +FCLASS = 2 and lacks JP parameter.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdcc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vr, br, wd, ln, df, ec, bf, st;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDCC_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDCC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            t30_rw_param.session_param.VR.is_present = KAL_TRUE;
            t30_rw_param.session_param.BR.is_present = KAL_TRUE;
            t30_rw_param.session_param.WD.is_present = KAL_TRUE;
            t30_rw_param.session_param.LN.is_present = KAL_TRUE;
            t30_rw_param.session_param.DF.is_present = KAL_TRUE;
            t30_rw_param.session_param.EC.is_present = KAL_TRUE;
            t30_rw_param.session_param.BF.is_present = KAL_TRUE;
            t30_rw_param.session_param.ST.is_present = KAL_TRUE;
            t30_rw_param.session_param.JP.is_present = KAL_FALSE;

            /* get vr */
            vr = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)        //parse ERROR
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)       // omitted, use default value
                /* vr=1; */
            {
                t30_rw_param.session_param.VR.is_present = KAL_FALSE;
            }
            else if (vr > 1)    //invalid setting value
            {
                break;
            }
            /* get br */
            br = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* br=3; */
            {
                t30_rw_param.session_param.BR.is_present = KAL_FALSE;
            }
            else if (br > 5)
            {
                break;
            }
            /* get wd */
            wd = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* wd=0; */
            {
                t30_rw_param.session_param.WD.is_present = KAL_FALSE;
            }
            else if (wd > 4)
            {
                break;
            }
            /* get ln */
            ln = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ln=0; */
            {
                t30_rw_param.session_param.LN.is_present = KAL_FALSE;
            }
            else if (ln > 2)
            {
                break;
            }
            /* get df */
            df = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* df=0;  */
            {
                t30_rw_param.session_param.DF.is_present = KAL_FALSE;
            }
            else if (df > 3)
            {
                break;
            }
            /* get ec */
            ec = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ec=0; */
            {
                t30_rw_param.session_param.EC.is_present = KAL_FALSE;
            }
            else if (ec != 0)
            {
                break;
            }
            /* get bf */
            bf = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* bf=0; */
            {
                t30_rw_param.session_param.BF.is_present = KAL_FALSE;
            }
            else if (bf != 0)
            {
                break;
            }
            /* get st */
            st = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_PTR->s_reg.s3);

            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* st=0; */
            {
                t30_rw_param.session_param.ST.is_present = KAL_FALSE;
            }
            else if (st > 7)
            {
                break;
            }

            t30_rw_param.session_param.BF.para_value = bf;
            t30_rw_param.session_param.BR.para_value = br;
            t30_rw_param.session_param.DF.para_value = df;
            t30_rw_param.session_param.EC.para_value = ec;
            t30_rw_param.session_param.LN.para_value = ln;
            t30_rw_param.session_param.ST.para_value = st;
            t30_rw_param.session_param.VR.para_value = vr;
            t30_rw_param.session_param.WD.para_value = wd;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDCC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fis_hdlr
 * DESCRIPTION
 *  +FIS command (class 2.0) allows the DTE to sense and constrain the capabilities
 *  used for current session. the DCE uses +FIS to generate DIS or DTC
 *  messages directly, and uses +FIS and received DIS messages to
 *  generate DCS message
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fis_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vr, br, wd, ln, df, ec, bf, st, jp;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FIS_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);

            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            t30_rw_param.session_param.VR.is_present = KAL_TRUE;
            t30_rw_param.session_param.BR.is_present = KAL_TRUE;
            t30_rw_param.session_param.WD.is_present = KAL_TRUE;
            t30_rw_param.session_param.LN.is_present = KAL_TRUE;
            t30_rw_param.session_param.DF.is_present = KAL_TRUE;
            t30_rw_param.session_param.EC.is_present = KAL_TRUE;
            t30_rw_param.session_param.BF.is_present = KAL_TRUE;
            t30_rw_param.session_param.ST.is_present = KAL_TRUE;
            t30_rw_param.session_param.JP.is_present = KAL_TRUE;

            /* get vr */
            vr = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)        //parse ERROR
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)       // omitted, use default value
                /* vr=1; */
            {
                t30_rw_param.session_param.BR.is_present = KAL_FALSE;
            }
            else if (vr > 1)    //invalid setting value
            {
                break;
            }
            /* get br */
            br = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* br=3; */
            {
                t30_rw_param.session_param.BR.is_present = KAL_FALSE;
            }
            else if (br > 5)
            {
                break;
            }
            /* get wd */
            wd = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* wd=0; */
            {
                t30_rw_param.session_param.WD.is_present = KAL_FALSE;
            }
            else if (wd > 4)
            {
                break;
            }
            /* get ln */
            ln = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ln=0; */
            {
                t30_rw_param.session_param.LN.is_present = KAL_FALSE;
            }
            else if (ln > 2)
            {
                break;
            }
            /* get df */
            df = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* df=0;  */
            {
                t30_rw_param.session_param.DF.is_present = KAL_FALSE;
            }
            else if (df > 3)
            {
                break;
            }
            /* get ec */
            ec = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ec=0; */
            {
                t30_rw_param.session_param.EC.is_present = KAL_FALSE;
            }
            else if (ec != 0)
            {
                break;
            }
            /* get bf */
            bf = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* bf=0; */
            {
                t30_rw_param.session_param.BF.is_present = KAL_FALSE;
            }
            else if (bf != 0)
            {
                break;
            }
            /* get st */
            st = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* st=0; */
            {
                t30_rw_param.session_param.ST.is_present = KAL_FALSE;
            }
            else if (st > 7)
            {
                break;
            }
            /* get jp */
            jp = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* jp=0; */
            {
                t30_rw_param.session_param.JP.is_present = KAL_FALSE;
            }
            else if (jp != 0)
            {
                break;
            }

            t30_rw_param.session_param.BF.para_value = bf;
            t30_rw_param.session_param.BR.para_value = br;
            t30_rw_param.session_param.DF.para_value = df;
            t30_rw_param.session_param.EC.para_value = ec;
            t30_rw_param.session_param.LN.para_value = ln;
            t30_rw_param.session_param.ST.para_value = st;
            t30_rw_param.session_param.VR.para_value = vr;
            t30_rw_param.session_param.WD.para_value = wd;
            t30_rw_param.session_param.JP.para_value = jp;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdis_hdlr
 * DESCRIPTION
 *  +FDIS (class 2) command is essentially the same as +FIS
 *  except it lacs JP subparameter.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdis_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vr, br, wd, ln, df, ec, bf, st;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDIS_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|G3_SERV_CLASS_2) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDIS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);

            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            t30_rw_param.session_param.VR.is_present = KAL_TRUE;
            t30_rw_param.session_param.BR.is_present = KAL_TRUE;
            t30_rw_param.session_param.WD.is_present = KAL_TRUE;
            t30_rw_param.session_param.LN.is_present = KAL_TRUE;
            t30_rw_param.session_param.DF.is_present = KAL_TRUE;
            t30_rw_param.session_param.EC.is_present = KAL_TRUE;
            t30_rw_param.session_param.BF.is_present = KAL_TRUE;
            t30_rw_param.session_param.ST.is_present = KAL_TRUE;
            t30_rw_param.session_param.JP.is_present = KAL_FALSE;

            /* get vr */
            vr = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)        //parse ERROR
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)       // omitted, use default value
                /* vr=1; */
            {
                t30_rw_param.session_param.VR.is_present = KAL_FALSE;
            }
            else if (vr > 1)    //invalid setting value
            {
                break;
            }
            /* get br */
            br = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* br=3; */
            {
                t30_rw_param.session_param.BR.is_present = KAL_FALSE;
            }
            else if (br > 5)
            {
                break;
            }
            /* get wd */
            wd = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* wd=0; */
            {
                t30_rw_param.session_param.WD.is_present = KAL_FALSE;
            }
            else if (wd > 4)
            {
                break;
            }
            /* get ln */
            ln = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ln=0; */
            {
                t30_rw_param.session_param.LN.is_present = KAL_FALSE;
            }
            else if (ln > 2)
            {
                break;
            }
            /* get df */
            df = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* df=0;   */
            {
                t30_rw_param.session_param.DF.is_present = KAL_FALSE;
            }
            else if (df > 3)
            {
                break;
            }
            /* get ec */
            ec = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* ec=0; */
            {
                t30_rw_param.session_param.EC.is_present = KAL_FALSE;
            }
            else if (ec != 0)
            {
                break;
            }
            /* get bf */
            bf = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* bf=0; */
            {
                t30_rw_param.session_param.BF.is_present = KAL_FALSE;
            }
            else if (bf != 0)
            {
                break;
            }
            /* get st */
            st = (kal_uint16) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_ERROR)
            {
                break;
            }
            else if (error_cause == RMMI_PARSE_NOT_FOUND)
                /* st=0; */
            {
                t30_rw_param.session_param.ST.is_present = KAL_FALSE;
            }
            else if (st > 7)
            {
                break;
            }

            t30_rw_param.session_param.BF.para_value = bf;
            t30_rw_param.session_param.BR.para_value = br;
            t30_rw_param.session_param.DF.para_value = df;
            t30_rw_param.session_param.EC.para_value = ec;
            t30_rw_param.session_param.LN.para_value = ln;
            t30_rw_param.session_param.ST.para_value = st;
            t30_rw_param.session_param.VR.para_value = vr;
            t30_rw_param.session_param.WD.para_value = wd;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDIS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fcs_hdlr
 * DESCRIPTION
 *  +FCS (class 2.0) command reads the negotiated T30 parameters for current session
 *  a transmitting DCE generates DCS,  a receiveing DCE gets DCS from remote station.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fcs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCS_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;			

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdcs_hdlr
 * DESCRIPTION
 *  +FDCS (class 2) command ris essentially the same as +FCS
 *  except it lacs JP subparameter.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdcs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDCS_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDCS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fli_hdlr
 * DESCRIPTION
 *  +FLI (class 2.0) command
 *  The DCE shall send the corresponding ID frame if  +FLI is not a null string,
 *  +FLI is used for CSI or TSI;
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fli_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLI_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLI,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        21,
                        (kal_uint8*) string /* 20 + 1(null char) */ );

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLI,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);

            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_flid_hdlr
 * DESCRIPTION
 *  +FLID (class 2) command
 *  The DCE shall send the corresponding ID frame if +FLID is not a null string,
 *  +FLID is used for CSI or TSI;
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_flid_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLID_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLID,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        21,
                        (kal_uint8*) string /* 20 + 1(null char) */ );

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLID,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpi_hdlr
 * DESCRIPTION
 *  +FPI (class 2.0) command
 *  The DCE shall send the corresponding ID frame if +FPI is not a null string,
 *  +FPI is used for CIG
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpi_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLI_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPI,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        21,
                        (kal_uint8*) string /* 20 + 1(null char) */ );

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPI,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);

            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fcig_hdlr
 * DESCRIPTION
 *  +FPI (class 2.0) command
 *  The DCE shall send the corresponding ID frame if +FCIG is not a null string,
 *  +FCIG is used for CIG
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fcig_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLI_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCIG,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        21,
                        (kal_uint8*) string /* 20 + 1(null char) */ );

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCIG,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_flp_hdlr
 * DESCRIPTION
 *  +FLP (class 2.0) command indicate that the DTE has a document ready for polling or not
 *  ( for MT call and want to send a document )
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_flp_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)
            {
                break;
            }

            t30_rw_param.enable_polled = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_flpl_hdlr
 * DESCRIPTION
 *  +FLPL (class 2) command  indicate that the DTE has a document ready for polling
 *  (MT call and want to send a document) , same as +FLP
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_flpl_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLPL_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLPL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)
            {
                break;
            }

            t30_rw_param.enable_polled = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLPL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fsp_hdlr
 * DESCRIPTION
 *  +FSP (class 2.0) command indicates that DTE can receive a polled documment
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fsp_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FSP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.enable_polling = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fspl_hdlr
 * DESCRIPTION
 *  +FSPL (class 2) command indicates that DTE can receive a polled documment
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fspl_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FSP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSPL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.enable_polling = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSPL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fnr_hdlr
 * DESCRIPTION
 *  +FNR (class 2.0) is used to control the reporting msgs generated during T.30
 *  Phase B negotiations. four switches used for four types of reports.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fnr_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 rpr, tpr, idr, nsr;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FNR_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFNR,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            /* get <rpr>, might be optional */
            rpr = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.report_param.rpr.is_present = KAL_FALSE;
            }
            else if (rpr > 1)   //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.report_param.rpr.para_value = rpr;
                t30_rw_param.report_param.rpr.is_present = KAL_TRUE;
            }

            /* get <tpr>, might be optional */
            tpr = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);

            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.report_param.tpr.is_present = KAL_FALSE;
            }
            else if (tpr > 1)   //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.report_param.tpr.para_value = tpr;
                t30_rw_param.report_param.tpr.is_present = KAL_TRUE;
            }

            /* get <idr>, might be optional */
            idr = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.report_param.idr.is_present = KAL_FALSE;
            }
            else if (idr > 1)   //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.report_param.idr.para_value = idr;
                t30_rw_param.report_param.idr.is_present = KAL_TRUE;
            }

            /* get <nsr>, might be optional */
            nsr = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.report_param.nsr.is_present = KAL_FALSE;
            }
            else if (nsr > 1)   //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.report_param.nsr.para_value = nsr;
                t30_rw_param.report_param.nsr.is_present = KAL_TRUE;
            }

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFNR,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fie_hdlr
 * DESCRIPTION
 *  +FIE (class 2.0) indicates the Procedure Interrupt is accepted or ignored.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fie_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FIE_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIE,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.PI_enable = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIE,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fps_hdlr
 * DESCRIPTION
 *  +FPS (class 2.0) command contains a value representing the post page response,
 *  including copy quality and related end-of-pate status .
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fps_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 ppr;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPS_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            ppr = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (ppr > 5)
            {
                break;
            }

            t30_rw_param.page_status = ppr;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpts_hdlr
 * DESCRIPTION
 *  +FPTS (class 2) command contains a value representing the porst page response,
 *  including copy quality and related end-of-pate status .
 *  Same as +FPS.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpts_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 ppr;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPTS_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPTS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            ppr = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (ppr > 5)
            {
                break;
            }

            t30_rw_param.page_status = ppr;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPTS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_frq_hdlr
 * DESCRIPTION
 *  +FRQ (class 2.0) is used to make the "Copy Quality OK" decision.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_frq_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 pgl, cbl;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FRQ_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFRQ,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            pgl = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (pgl != 0)       //invalid setting value
            {
                break;
            }

            cbl = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (cbl != 0)
            {
                break;
            }

            t30_rw_param.recv_quality_thresd.pgl.para_value = pgl;
            t30_rw_param.recv_quality_thresd.pgl.is_present = KAL_TRUE;
            t30_rw_param.recv_quality_thresd.cbl.para_value = cbl;
            t30_rw_param.recv_quality_thresd.cbl.is_present = KAL_TRUE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFRQ,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbadlin_hdlr
 * DESCRIPTION
 *  +FBADLIN (class 2) is used to make the "Copy Quality OK" decision.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbadlin_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 pgl;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBADLIN_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBADLIN,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            pgl = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (pgl != 0)
            {
                break;
            }

            t30_rw_param.recv_quality_thresd.pgl.para_value = pgl;
            t30_rw_param.recv_quality_thresd.pgl.is_present = KAL_TRUE;
            t30_rw_param.recv_quality_thresd.cbl.is_present = KAL_FALSE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBADLIN,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbadmul_hdlr
 * DESCRIPTION
 *  +FBADMUL (class 2) is used to make the "Copy Quality OK" decision.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbadmul_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 cbl;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBADMUL_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBADMUL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            cbl = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (cbl != 0)
            {
                break;
            }

            t30_rw_param.recv_quality_thresd.cbl.para_value = cbl;
            t30_rw_param.recv_quality_thresd.cbl.is_present = KAL_TRUE;
            t30_rw_param.recv_quality_thresd.pgl.is_present = KAL_FALSE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBADMUL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fcq_hdlr
 * DESCRIPTION
 *  +FCQ (class 2, 2.0 ) controls copy quality checking and correction by a facimile DCE
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fcq_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 rq, tq;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCQ_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCQ,
                        source_string_ptr->cmd_mode,
                        serv_class,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            rq = (kal_uint8) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_COMMA);

            if (rq == RMMI_VALIDATOR_ERROR)
            {
                break;  //Parse Error         
            }
            else if (rq != 0)
            {
                break;  //invalid setting value
            }
            else
            {
                t30_rw_param.copy_quality.rq.is_present = KAL_TRUE;
                t30_rw_param.copy_quality.rq.para_value = rq;
            }

            tq = (kal_uint8) rmmi_int_validator_ext(
                                (kal_uint8*) & error_cause,
                                source_string_ptr,
                                (kal_uint8) RMMI_PTR->s_reg.s3);

            if ((tq == RMMI_VALIDATOR_ERROR) && (error_cause == RMMI_PARSE_NOT_FOUND))  /* when +FCLASS=2, +FCQ=<rq> */
            {
                t30_rw_param.copy_quality.tq.is_present = KAL_FALSE;
                ret_val = l4c_t30_rw_param_req(
                            source_string_ptr->src_id,
                            RMMI_CMD_ATFCQ,
                            source_string_ptr->cmd_mode,
                            G3_SERV_CLASS_2,
                            &t30_rw_param);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else if (tq == 0)   //only support 0
            {
                t30_rw_param.copy_quality.tq.is_present = KAL_TRUE;
                t30_rw_param.copy_quality.tq.para_value = tq;
                ret_val = l4c_t30_rw_param_req(
                            source_string_ptr->src_id,
                            RMMI_CMD_ATFCQ,
                            source_string_ptr->cmd_mode,
                            G3_SERV_CLASS_2_0,
                            &t30_rw_param);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;  //Parse Error or invalid settings
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fit_hdlr
 * DESCRIPTION
 *  +FIT (class 2.0) profide an inactivity time that allows the DCE to break
 *  away from an unsuccessful connection attempt at any stage of a facsimile.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fit_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 action;
    kal_uint16 time;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FIT_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIT,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            time = (kal_uint16) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_COMMA);

            if (error_cause != RMMI_PARSE_OK)
            {
                break;
            }
            else if (time > 255)
            {
                break;
            }

            action = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (action != 0)    //invalid setting value
            {
                break;
            }

            t30_rw_param.inactivity_timer.time = time;
            t30_rw_param.inactivity_timer.action = action;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFIT,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpp_hdlr
 * DESCRIPTION
 *  +FPP (class 2.0) indicate that DCE-to-DTE Packet Protocol is enable or disable.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpp_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value != 0)     //invalid setting value
            {
                break;
            }

            t30_rw_param.packet_protocol = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbo_hdlr
 * DESCRIPTION
 *  +FBO (class 2.0) controls the mapping between PSTN facimile data and the DTE-DCE link
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbo_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBO_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	
				

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBO,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 3)      //invalid setting value
            {
                break;
            }

            t30_rw_param.data_bit_order = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBO,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbor_hdlr
 * DESCRIPTION
 *  +FBOR (class 2) controls the mapping between PSTN facimile data and the DTE-DCE link
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbor_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBOR_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBOR,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 3)      //invalid setting value
            {
                break;
            }

            t30_rw_param.data_bit_order = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBOR,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fea_hdlr
 * DESCRIPTION
 *  +FEA (class 2.0) enables octet-alignment of EOL markers in received T.4 data streams
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fea_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FEA_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;				

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFEA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.EOL_align = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFEA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_frel_hdlr
 * DESCRIPTION
 *  +FREL (class 2) enables octet-alignment of EOL markers in received T.4 data streams
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_frel_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FREL_HDLR_ENTRY);

    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	
				
    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFREL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.EOL_align = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFREL,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fns_hdlr
 * DESCRIPTION
 *  +FNS (class 2.0) command
 *  The DCE shall send the corresponding non-standard facilities frame
 *  if +FNS is not a null string.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fns_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FNS_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFNS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 octet_string[91];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        91,
                        (kal_uint8*) octet_string);

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)octet_string);
            kal_mem_cpy((kal_uint8*) t30_str_param.nsf_string, (kal_uint8*) octet_string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFNS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fcr_hdlr
 * DESCRIPTION
 *  +FCR (class 2.0, 2 ) command indicates that can the DCE receive message data.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fcr_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 fclass_mode, serv_class;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCR_HDLR_ENTRY);

    l4ccsm_cc_get_fclass_mode(&fclass_mode);
    serv_class = check_g3_service_class_code(fclass_mode);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;					

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCR,
                        source_string_ptr->cmd_mode,
                        serv_class,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.cap_to_receive = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCR,
                        source_string_ptr->cmd_mode,
                        serv_class,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbu_hdlr
 * DESCRIPTION
 *  +FBU (class 2.0) indicates that HDLC frame reporting function is diable or enable
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbu_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBU_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBU,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.HDLC_report = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBU,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbug_hdlr
 * DESCRIPTION
 *  +FBU (class 2) indicates that HDLC frame reporting function is diable or enable
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbug_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBUG_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBUG,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.HDLC_report = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBUG,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fap_hdlr
 * DESCRIPTION
 *  +FAP (class 2.0) indicates its willingness to accept three 20-digit numeric strings
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fap_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 sub, sep, pwd;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FAP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFAP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            sub = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (sub > 1)        //invalid setting value
            {
                break;
            }

            sep = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (sep > 1)        //invalid setting value
            {
                break;
            }

            pwd = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (pwd > 1)        //invalid setting value
            {
                break;
            }

            t30_rw_param.add_poll_cap.sub.is_present = KAL_TRUE;
            t30_rw_param.add_poll_cap.sep.is_present = KAL_TRUE;
            t30_rw_param.add_poll_cap.pwd.is_present = KAL_TRUE;

            t30_rw_param.add_poll_cap.sub.para_value = sub;
            t30_rw_param.add_poll_cap.sep.para_value = sep;
            t30_rw_param.add_poll_cap.pwd.para_value = pwd;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFAP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fsa_hdlr
 * DESCRIPTION
 *  +FSA (class 2.0) = <destination subaddress string>
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fsa_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FSA_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3,     /* separator */
                        21,
                        (kal_uint8*) string);   /* 20 + 1(null char) */

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFSA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpa_hdlr
 * DESCRIPTION
 *  +FPA (class 2.0) = <selective polling address string>
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpa_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPA_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3,     /* separator */
                        21,
                        (kal_uint8*) string);   /* 20 + 1(null char) */

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPA,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fpw_hdlr
 * DESCRIPTION
 *  +FPW (class 2.0) = <Password String>
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fpw_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_str_param_struct t30_str_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPW_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPW,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 string[21];
            kal_uint8 length;

            result = rmmi_string_validator(
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3,     /* separator */
                        21,
                        (kal_uint8*) string);   /* 20 + 1(null char) */

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            length = strlen((char*)string);
            kal_mem_cpy((kal_uint8*) t30_str_param.string, (kal_uint8*) string, length);

            ret_val = l4c_t30_rw_str_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPW,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_str_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fct_hdlr
 * DESCRIPTION
 *  +FCT (class 2.0)determines how long the DCE will wait for a command after having
 *  transmitted all available Phace C data.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fct_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FCT_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCT,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result;
            kal_uint8 str[3];   //"00"-"ff"
            kal_uint8 error_cause = RMMI_PARSE_OK;

            result = rmmi_hex_validator_ext(
                        (kal_uint8*) & error_cause,
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        3,
                        (kal_uint8*) str);

            if (result == RMMI_VALIDATOR_ERROR)
            {
                break;
            }

            if (RMMI_IS_NUMBER(str[0]))
            {
                value = str[0] - RMMI_CHAR_0;
            }
            else
            {
                value = (str[0] - RMMI_CHAR_A) + 10;
            }

            if (strlen((char*)str) == 2)
            {
                if (RMMI_IS_NUMBER(str[1]))
                {
                    value = (value << 4) + (str[1] - RMMI_CHAR_0);
                }
                else
                {
                    value = (value << 4) + ((str[1] - RMMI_CHAR_A) + 10);
                }
            }
            t30_rw_param.phase_C_timeout = value;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFCT,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fphcto_hdlr
 * DESCRIPTION
 *  +FPHCTO (class 2)determines how long the DCE will wait for a command after having
 *  transmitted all available Phace C data.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fphcto_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FPHCTO_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPHCTO,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause = RMMI_PARSE_OK;

            value = (kal_uint16) rmmi_int_validator_ext(
                                    (kal_uint8*) & error_cause,
                                    source_string_ptr,
                                    (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_ERROR)        //Parse Error
            {
                break;
            }
            else if (value > 255)       //invalid setting value
            {
                break;
            }

            t30_rw_param.phase_C_timeout = value;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFPHCTO,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fhs_hdlr
 * DESCRIPTION
 *  +FHS (class 2.0) indicates the cause of a hangup.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fhs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FHS_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFHS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }

    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fms_hdlr
 * DESCRIPTION
 *  +FMS (class 2.0) limits the lowest negotiable speed for a session.
 *  The parameter is useful for limiting the cost of a transmission,
 *  by requiring a minimum transmission speed.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fms_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FMS_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;            		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFMS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.min_speed = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFMS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fminsp_hdlr
 * DESCRIPTION
 *  +FMINSP (class 2) limits the lowest negotiable speed for a session.
 *  The parameter is useful for limiting the cost of a transmission,
 *  by requiring a minimum transmission speed.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fminsp_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FMINSP_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFMINSP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value > 1)      //invalid setting value
            {
                break;
            }

            t30_rw_param.min_speed = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFMINSP,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fry_hdlr
 * DESCRIPTION
 *  +FRY (class 2.0) .
 *  In Error Correcting Mode(ECM) the transmitting DCE will try to send a partial page
 *  four times. We don't support ECM in Maui.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fry_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 value;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FRY_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFRY,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            value = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (value != 0)     //invalid setting value
            {
                break;
            }

            t30_rw_param.CTC_retry_val = value;
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFRY,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fbs_hdlr
 * DESCRIPTION
 *  +FBS (class 2.0) .
 *  allows DCE to report the size of the DCE's data buffers. The values shall be in hexadecimal
 *  and represent the buffer size in octets.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fbs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FBS_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            return;
        }
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFBS,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ffc_hdlr
 * DESCRIPTION
 *  +FFC (class 2.0) .
 *  determins the DCE response to mismatches between Phase C data delivered after
 *  the +FDT command and the data format parameters negotiated for facismile session.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ffc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vrc, dfc, lnc, wdc;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FFC_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2_0) == KAL_FALSE)
        return;		

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 error_cause;

            /* get <vrc> , might be optional */
            vrc = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.data_format_conver.vrc.is_present = KAL_FALSE;
            }
            else if (vrc != 0)  //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.data_format_conver.vrc.is_present = KAL_TRUE;
                t30_rw_param.data_format_conver.vrc.para_value = vrc;
            }

            /* get <dfc> , might be optional */
            dfc = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.data_format_conver.dfc.is_present = KAL_FALSE;
            }
            else if (dfc != 0)  //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.data_format_conver.dfc.is_present = KAL_TRUE;
                t30_rw_param.data_format_conver.dfc.para_value = dfc;
            }

            /* get <lnc> , might be optional */
            lnc = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.data_format_conver.lnc.is_present = KAL_FALSE;
            }
            else if (lnc != 0)  //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.data_format_conver.lnc.is_present = KAL_TRUE;
                t30_rw_param.data_format_conver.lnc.para_value = lnc;
            }

            /* get <wdc> , might be optional */
            wdc = (kal_uint8) rmmi_int_validator_ext(&error_cause, source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (error_cause == RMMI_PARSE_NOT_FOUND)
            {
                t30_rw_param.data_format_conver.wdc.is_present = KAL_FALSE;
            }
            else if (wdc != 0)  //invalid setting value
            {
                break;
            }
            else
            {
                t30_rw_param.data_format_conver.wdc.is_present = KAL_TRUE;
                t30_rw_param.data_format_conver.wdc.para_value = wdc;
            }

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2_0,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fvrfc_hdlr
 * DESCRIPTION
 *  +FVRFC (class 2) .
 *  determins the DCE response to mismatches between Phase C data delivered after
 *  the +FDT command and the data format parameters negotiated for facismile session.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fvrfc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 vrc;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FVRFC_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;	

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFVRFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            vrc = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (vrc != 0)       //invalid setting value
            {
                break;
            }

            t30_rw_param.data_format_conver.vrc.is_present = KAL_TRUE;
            t30_rw_param.data_format_conver.vrc.para_value = vrc;

            t30_rw_param.data_format_conver.dfc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.lnc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.wdc.is_present = KAL_FALSE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFVRFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fdffc_hdlr
 * DESCRIPTION
 *  +FDFFC (class 2) .
 *  determins the DCE response to mismatches between Phase C data delivered after
 *  the +FDT command and the data format parameters negotiated for facismile session.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fdffc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 dfc;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FDFFC_HDLR_ENTRY);
		
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDFFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            dfc = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (dfc != 0)       //invalid setting value
            {
                break;
            }

            t30_rw_param.data_format_conver.dfc.is_present = KAL_TRUE;
            t30_rw_param.data_format_conver.dfc.para_value = dfc;

            t30_rw_param.data_format_conver.vrc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.lnc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.wdc.is_present = KAL_FALSE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFDFFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_flnfc_hdlr
 * DESCRIPTION
 *  +FLNFC (class 2) .
 *  determins the DCE response to mismatches between Phase C data delivered after
 *  the +FDT command and the data format parameters negotiated for facismile session.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_flnfc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 lnc;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FLNFC_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;			

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        case RMMI_READ_MODE:
        {
            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLNFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            lnc = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
            if (lnc != 0)       //invalid setting value
            {
                break;
            }

            t30_rw_param.data_format_conver.lnc.is_present = KAL_TRUE;
            t30_rw_param.data_format_conver.lnc.para_value = lnc;

            t30_rw_param.data_format_conver.vrc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.dfc.is_present = KAL_FALSE;
            t30_rw_param.data_format_conver.wdc.is_present = KAL_FALSE;

            ret_val = l4c_t30_rw_param_req(
                        source_string_ptr->src_id,
                        RMMI_CMD_ATFLNFC,
                        source_string_ptr->cmd_mode,
                        G3_SERV_CLASS_2,
                        &t30_rw_param);
            if (ret_val == KAL_TRUE)
            {
                return;
            }
            else
            {
                break;
            }

        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
            return;
        }
    }
    if (ret_val == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_fwdfc_hdlr
 * DESCRIPTION
 *  +FWDFC (class 2) .
 *  determins the DCE response to mismatches between Phase C data delivered after
 *  the +FDT command and the data format parameters negotiated for facismile session.
 *  Add by mtk00714.
 * PARAMETERS
 *  source_string_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_fwdfc_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 wdc;
    t30_rw_param_struct t30_rw_param;

    kal_trace(TRACE_FUNC, FUNC_RMMI_FWDFC_HDLR_ENTRY);
	
    if(rmmi_fax_support_check(RMMI_SERV_CLASS_0|RMMI_SERV_CLASS_2) == KAL_FALSE)
        return;			
    {
        switch (source_string_ptr->cmd_mode)
        {
            case RMMI_TEST_MODE:
            case RMMI_READ_MODE:
            {
                ret_val = l4c_t30_rw_param_req(
                            source_string_ptr->src_id,
                            RMMI_CMD_ATFWDFC,
                            source_string_ptr->cmd_mode,
                            G3_SERV_CLASS_2,
                            &t30_rw_param);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            case RMMI_SET_OR_EXECUTE_MODE:
            {
                wdc = (kal_uint8) rmmi_int_validator(source_string_ptr, (kal_uint8) RMMI_PTR->s_reg.s3);
                if (wdc != 0)   //invalid setting value
                {
                    break;
                }

                t30_rw_param.data_format_conver.wdc.is_present = KAL_TRUE;
                t30_rw_param.data_format_conver.wdc.para_value = wdc;
                t30_rw_param.data_format_conver.vrc.is_present = KAL_FALSE;
                t30_rw_param.data_format_conver.dfc.is_present = KAL_FALSE;
                t30_rw_param.data_format_conver.lnc.is_present = KAL_FALSE;

                ret_val = l4c_t30_rw_param_req(
                            source_string_ptr->src_id,
                            RMMI_CMD_ATFWDFC,
                            source_string_ptr->cmd_mode,
                            G3_SERV_CLASS_2,
                            &t30_rw_param);
                if (ret_val == KAL_TRUE)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            default:
            {
                /* unrecognized format of AT command line */
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
                return;
            }
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, NULL, 0);
}

#endif /* __CSD_FAX__ */ 
#endif /* !defined(__ULC_AT__) */


