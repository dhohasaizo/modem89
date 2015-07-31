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
 * RMMI_VALIDATOR_CTM.C
 *
 * Project:
 * --------
 *   MAUI
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
//#include <stdio.h>
//#include <string.h>
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

//#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#endif /* __MOD_SMU__ */ 
//#include "device.h"
//#include "csmss_common_enums.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_enums.h"

//#include "mcd_l4_common.h"
 
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_context.h"
//#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_msghdlr.h"
#include "kal_trace.h"
#include "l4_trc.h"
#include "atci_trc.h"

//#include "uart_sw.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
//#include "csmss_atfunc.h"
//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"

//#ifdef __MOD_CSM__
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c_ciss_cmd.h"
//#include "l4c2csm_ss_struct.h"
//#include "l4c_cc_cmd.h"
//#endif /* __MOD_CSM__ */ 

//#if defined (VM_SUPPORT)
//#include "med_struct.h"
//#endif 
//#ifdef __MOD_UEM__
//#include "device.h"
//#include "l4c2uem_struct.h"
//#include "uem_at_cmd.h"
//#include "custom_em.h"
//#include "l4c_eq_cmd.h"
//#endif /* __MOD_UEM__ */ 
//#ifdef __MOD_RAC__
//#include "l4crac_func.h"
//#include "l4c_nw_cmd.h"
//#include "l4crac_enums.h"
//#endif /* __MOD_RAC__ */ 
//#ifdef __MOD_PHB__
//#include "sim_common_enums.h"
//#include "l4c2phb_enums.h"
//#include "l4c2phb_struct.h"
//#include "phb_sap.h"
//#include "l4c_phb_cmd.h"
//#include "phb_defs.h"
//#include "phb_config.h"
//#endif /* __MOD_PHB__ */ 
//#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_defs.h"
//#include "smsal_l4c_funcs.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_defs.h"
//#include "l4c_sms_cmd.h"
//#endif /* __MOD_SMSAL__ */ 
//#ifdef __MOD_SMU__
//#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
//#include "l4c_sim_cmd.h"
//#endif /* __MOD_SMU__ */ 
//#ifdef __MOD_TCM__
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
//#endif /* __MOD_TCM__ */ 


//#include "l4c_utility.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_utility.h"
//#include "rmmi_rsp.h"
//#include "rmmi_validator.h"
//#include "nvram_data_items.h"
//#include "custom_hw_default.h"
//#include "l4c_table.h"
//#include "rmmi_parser.h"
//#include "resource_verno.h"     // for +EGMR read MMI resource version

//#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
//#include "l4c2t30_struct.h"
//#include "l4c_t30_cmd.h"
//#include "l4c2t30_enums.h"
//#endif /* __CSD_FAX__ */ 
//#include "rmmi_parser.h"
//#ifndef MED_NOT_PRESENT
//#include "med_global.h"
//#include "med_main.h"
//#endif /* MED_NOT_PRESENT */ 
//#ifdef __J2ME__
//#include "jam_msg_handler.h"
//#endif 

#if 0 //__CTM_SUPPORT__
/* under construction !*/
#endif 
//#include "l4c_sendmsg.h"

//#ifdef __CUST_NEW__
//#include "gpio_sw.h"
//#endif 

/* for data item NVRAM_EF_IMEI_IMEISV_LID move */
//#include "nvram_user_defs.h"
//#include "csmcc_defs.h"

//#include "keypad_sw.h"
//#include "l4c2smu_struct.h"
//#include "lmmi_ind.h"

//#include "csmcc_common_enums.h"

//#include "mncc_struct.h"
//#include "csmcc_bc_types.h"
//#include "csmcc_types.h"
//#include "custom_em.h"
//#include "L4c_ctm_cmd.h"
#include "layer4_context.h" //for rmmi_ptr_g
//#include "csmcc_utility.h"

//#include "sat_def.h"

//#include "uem_proc_cmd.h"

//#include "rmmi_msghdlr.h"

#ifdef __CTM_SUPPORT__
#if defined(__CTM_AT_CMD_SUPPORT__) 

/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmset_hdlr
 * DESCRIPTION
 *  to set CTM configuration
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmset_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;
    kal_uint16 CTM_status, CTM_interface;
    kal_bool is_turn_on;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMSET_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_READ_MODE:
        {
            ret_val = l4c_ctm_get_default_req(RMMI_SRC);
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

            CTM_status = (kal_uint16) rmmi_int_validator(source_string_ptr, RMMI_COMMA);
            if (CTM_status > 1)
            {
                break;
            }
            else if (CTM_status == 0)
            {
                is_turn_on = KAL_FALSE;
            }
            else
            {
                is_turn_on = KAL_TRUE;
            }

            CTM_interface = (kal_uint16) rmmi_int_validator(source_string_ptr, RMMI_PTR->s_reg.s3);     //direct, boudot, HCO, VCO
            if (CTM_interface > 3)
            {
                break;
            }

            ret_val = l4c_ctm_set_default_req(RMMI_SRC, is_turn_on, (kal_uint8) CTM_interface);
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
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmopen_hdlr
 * DESCRIPTION
 *  to open CTM service
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmopen_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 CTM_interface = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMOPEN_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {

        case RMMI_ACTIVE_MODE:
        {
            if (RMMI_PTR->is_ctm_turn_on == KAL_FALSE)
            {
                break;
            }

            //CTM_interface= (kal_uint8)rmmi_int_validator(source_string_ptr, RMMI_PTR->s_reg.s3);
            //if(CTM_interface > 1)
            //        break;

            ret_val = l4c_ctm_open_req(RMMI_SRC, CTM_interface);
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
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);

    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmclose_hdlr
 * DESCRIPTION
 *  to close CTM service
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmclose_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMCLOSE_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {

        case RMMI_ACTIVE_MODE:
        {
            if (RMMI_PTR->is_ctm_turn_on == KAL_FALSE)
            {
                break;
            }

            ret_val = l4c_ctm_close_req(RMMI_SRC);

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
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);

    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmconn_hdlr
 * DESCRIPTION
 *  to enquiry remote CTM device
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmconn_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMCONN_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {

        case RMMI_ACTIVE_MODE:
        {
            if (RMMI_PTR->is_ctm_turn_on == KAL_FALSE)
            {
                break;
            }

            ret_val = l4c_ctm_connect_req(RMMI_SRC);

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
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);

    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ctms_hdlr
 * DESCRIPTION
 *  to send CTM text
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctms_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;

    //      kal_uint8                 mode;
    kal_uint8 text_string[CTM_SEND_TEXT_CHAR_MAX_NUM + 1], result;
    kal_wchar ucs2_text_string[CTM_SEND_TEXT_CHAR_MAX_NUM + 1];
    kal_uint8 error_cause;
    kal_uint16 number_of_text = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMS_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {

        case RMMI_SET_OR_EXECUTE_MODE:
        {

            if (RMMI_PTR->is_ctm_turn_on == KAL_FALSE)
            {
                break;
            }

            result = rmmi_string_validator_ext(
                        &error_cause,
                        source_string_ptr,
                        RMMI_PTR->s_reg.s3, /* separator */
                        (CTM_SEND_TEXT_CHAR_MAX_NUM + 1),
                        text_string);

            if (result == RMMI_VALIDATOR_ERROR)
            {
                if (error_cause == RMMI_PARSE_TEXT_TOO_LONG)
                {
                    RMMI_PTR->cmee_err = TEXT_ERRSTRING_TOO_LONG_ERR;
                }
                else
                {
                    RMMI_PTR->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                }
                break;
            }

            number_of_text = strlen((char*)text_string);
            ascii_to_ucs2(text_string, ucs2_text_string);

            ret_val = l4c_ctm_send_text_req(RMMI_SRC, number_of_text, (kal_uint16*) ucs2_text_string);
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
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);

    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmcfg_hdlr
 * DESCRIPTION
 *  to enable CMUX
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmcfg_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;

    kal_uint8 string_length = 0;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 error_cause;

    kal_uint8 group, mode, value_mask = 0;
    kal_uint16 para1, para2, para3, para4, para5;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMCFG_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_SET_OR_EXECUTE_MODE:
        {

            mode = (kal_uint8) rmmi_int_validator(source_string_ptr, RMMI_COMMA);
            if (mode == 0)      //read
            {
                group = (kal_uint8) rmmi_int_validator(source_string_ptr, RMMI_COMMA);
                if (group > 4)  // just support for group0~group4
                {
                    RMMI_PTR->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
                else
                {
                    ret_val = l4c_ctm_get_config_req(group);
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
            else if (mode == 1) //set
            {
                group = (kal_uint8) rmmi_int_validator(source_string_ptr, RMMI_COMMA);
                if (group > 4)  // just support for group0~group4
                {
                    RMMI_PTR->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
                else
                {

                    para1 =
                        (kal_uint16) rmmi_signed_int_validator(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
                    if (error_cause == RMMI_PARSE_OK)
                    {
                        value_mask |= 0x01;
                    }
                    else if (error_cause == RMMI_PARSE_NOT_FOUND);
                    else
                    {
                        break;
                    }

                    para2 =
                        (kal_uint16) rmmi_signed_int_validator(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
                    if (error_cause == RMMI_PARSE_OK)
                    {
                        value_mask |= 0x02;
                    }
                    else if (error_cause == RMMI_PARSE_NOT_FOUND);
                    else
                    {
                        break;
                    }

                    para3 =
                        (kal_uint16) rmmi_signed_int_validator(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
                    if (error_cause == RMMI_PARSE_OK)
                    {
                        value_mask |= 0x04;
                    }
                    else if (error_cause == RMMI_PARSE_NOT_FOUND);
                    else
                    {
                        break;
                    }

                    para4 =
                        (kal_uint16) rmmi_signed_int_validator(&error_cause, source_string_ptr, (kal_uint8) RMMI_COMMA);
                    if (error_cause == RMMI_PARSE_OK)
                    {
                        value_mask |= 0x08;
                    }
                    else if (error_cause == RMMI_PARSE_NOT_FOUND);
                    else
                    {
                        break;
                    }

                    para5 = (kal_uint16) rmmi_signed_int_validator(&error_cause, source_string_ptr, RMMI_PTR->s_reg.s3);
                    if (error_cause == RMMI_PARSE_OK)
                    {
                        value_mask |= 0x10;
                    }
                    else if (error_cause == RMMI_PARSE_NOT_FOUND);
                    else
                    {
                        break;
                    }

                    ret_val = l4c_ctm_set_config_req(group, para1, para2, para3, para4, para5, value_mask);
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
            else        //mode >1
            {
                RMMI_PTR->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }
        }
        default:
        {
            /* unrecognized format of AT command line */
            RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}

#endif /* __CTM_AT_CMD_SUPPORT__ */


#if defined(__SP_RIL_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_ctmcall_hdlr
 * DESCRIPTION
 *  to set CTM call flag according to input <mode>
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ctmcall_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 mode = 0;
    kal_uint8 error_cause;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CTMCALL_HDLR_ENTRY);

    switch (source_string_ptr->cmd_mode)
    {

        case RMMI_SET_OR_EXECUTE_MODE:
        {
            /* parse <mode> */
            mode = (kal_uint8)rmmi_int_validator_range_check(&error_cause, 
                                                             source_string_ptr, 
                                                             rmmi_ptr->s_reg.s3, 
                                                             1);
	        if (error_cause != RMMI_PARSE_OK)
	        {
                break;
	        }
            else if (mode == 1)
            {
                l4ccsm_cc_set_ctm_status(KAL_TRUE);
            }
            else if (mode == 0)
            {
                l4ccsm_cc_set_ctm_status(KAL_FALSE);
            }
            ret_val = KAL_TRUE;
            break;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, NULL, 0);

    return;

}
#endif /* __SP_RIL_SUPPORT__ */
#endif /* __CTM_SUPPORT__ */ 

