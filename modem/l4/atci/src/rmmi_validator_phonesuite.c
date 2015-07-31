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
 * RMMI_VALIDATOR_PHONESUITE.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for phonesuite used proprietary commad
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "device.h"
//#include "csmss_common_enums.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_enums.h"

//#include "mcd_l4_common.h"
 
//#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_msghdlr.h"
#include "l4_trc.h"
//#include "dcl.h"
#include "l4_defs.h"
#include "csmcc_atfunc.h"
#include "csmss_atfunc.h"
#include "l4c_aux_struct.h"
#include "l4c_ss_parse.h"
//#include "uart_sw.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
//#include "csmss_atfunc.h"
//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"
#include "atci_trc.h"

//#include "uart_sw.h"
#include "dcl.h"
#include "l4_defs.h"
#include "csmcc_atfunc.h"
#include "csmss_atfunc.h"
#include "l4c_aux_struct.h"
#include "l4c_ss_parse.h"

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
//#include "l4c_cc_cmd.h"
#endif /* __MOD_CSM__ */ 

#ifdef __MOD_UEM__
//#include "device.h"
//#include "l4c2uem_struct.h"
//#include "uem_at_cmd.h"
//#include "custom_em.h"
//#include "l4c_eq_cmd.h"
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
//#include "l4c2abm_struct.h"
//#include "l4c_gprs_cmd.h"
#endif /* __MOD_TCM__ */ 

//#include "l4c_utility.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_utility.h"
//#include "rmmi_rsp.h"
#include "rmmi_validator.h"
//#include "nvram_data_items.h"
//#include "l4c_table.h"
//#include "rmmi_parser.h"
//#include "resource_verno.h"     // for +EGMR read MMI resource version 

//#include "dt_common_enum.h"
//#include "l4c_sendmsg.h"

/* for data item NVRAM_EF_IMEI_IMEISV_LID move */
//#include "nvram_user_defs.h"
//#include "csmcc_defs.h"
//#include "keypad_sw.h"
//#include "l4c2smu_struct.h"
#include "lmmi_ind.h"
//#include "csmcc_common_enums.h"
//#include "mncc_struct.h"
//#include "csmcc_bc_types.h"
//#include "csmcc_types.h"
//#include "custom_em.h"
//#include "L4c_ctm_cmd.h"
//#include "Csm_data_enums.h"
//#include "csmcc_utility.h"
//#include "sat_def.h"
//#include "uem_proc_cmd.h"
//#include "rmmi_msghdlr.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "kal_public_api.h"
    
#if defined(__DT_SUPPORT__)


#if !defined(NEPTUNE_MMI)


/*****************************************************************************
 * FUNCTION
 *  rmmi_evcard_hdlr
 * DESCRIPTION
 *  This is for writing optional field of PHB entry
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_evcard_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 string_length = 0;
    kal_uint16 index;
    kal_uint8 filepath[50];
    kal_uint8 inputFilename[100];
    kal_uint8 result;
    kal_uint8 mode, error_cause;
    rmmi_context_struct* rmmi_ptr = RMMI_PTR;

    kal_trace(TRACE_FUNC, FUNC_RMMI_EVCARD_HDLR_ENTRY);

    kal_mem_set(filepath, 0, sizeof(filepath));

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        { 
            l4c_eq_vcard_req_lind((kal_uint8) l4c_current_mod_id, 2, 1, NULL);
            return;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            mode = (kal_uint8) rmmi_int_validator_range_check(NULL,
                                                              source_string_ptr,
                                                              RMMI_COMMA,
                                                              1);

            if (mode == RMMI_VALIDATOR_ERROR)       //0=write, 1=read                                
            {
                break;
            }

            index = rmmi_int_validator_u16_check(&error_cause,
                                                 source_string_ptr,
                                                 RMMI_COMMA);

            if (error_cause != RMMI_PARSE_OK)
            {
                break;
            }

            if (mode == 0)      //write operation need <path>
            {
                result = rmmi_string_validator_ext(
                            &error_cause,
                            source_string_ptr,
                            rmmi_ptr->s_reg.s3,
                            100,
                            (kal_uint8*) inputFilename);

                if (result == RMMI_VALIDATOR_ERROR)
                {
                    rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
                check_hex_value_ext(inputFilename, (kal_uint8*) filepath);
                rmmi_byte_order_reverse((kal_uint8*) filepath, 50);
                l4c_eq_vcard_req_lind((kal_uint8) l4c_current_mod_id, mode, index, filepath);
                return;
            }
            else        //read operation need no <path>
            {
                l4c_eq_vcard_req_lind((kal_uint8) l4c_current_mod_id, mode, index, filepath);
                return;
            }
        }
        default:
            break;
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, buffer, string_length);
}


#endif


#ifdef __MMI_FMI__


#ifdef MMS_SUPPORT


/*****************************************************************************
 * FUNCTION
 *  rmmi_emmsfs_hdlr
 * DESCRIPTION
 *  This is rmmi function for PC suite to communicate with MMS application
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_emmsfs_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 string_length = 0;
    kal_uint8 const *rsp_str = NULL;

    kal_uint8 folder_id, mode;
    rmmi_context_struct* rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
	    #ifdef __MMS_MEMORY_CARD_STORAGE_SUPPORT__ 
            rsp_str = (kal_uint8 const*)"+EMMSFS: (1,2,4,8,64), (1-4)";     
	    #else
            rsp_str = (kal_uint8 const*)"+EMMSFS: (1,2,4,8,64), (1-2)";     
            #endif
            string_length = strlen((char*)rsp_str); /* type casting */
            ret_val = KAL_TRUE;
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            //hogan:070314 WAP will not init in USB_BOOT mode , we cannot send msg to WAP
            if (!(l4c_ptr->cfun_state == 1 || l4c_ptr->cfun_state == 4))
            {
                break;
            }

            folder_id = rmmi_int_validator_u8_check(NULL,
                                                    source_string_ptr,
                                                    (kal_uint8) RMMI_COMMA);
            if (!(folder_id == 1 || folder_id == 2 || folder_id == 4 || folder_id == 8 || folder_id == 64))     // valid value: 1,2,4,8,64 
            {
                rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }

            mode = (kal_uint8) rmmi_int_validator_range_check(NULL,
                                                              source_string_ptr,
                                                              (kal_uint8) rmmi_ptr->s_reg.s3,
                                                              4);
            if ((mode == RMMI_VALIDATOR_ERROR) || (mode == 0))
            {
                rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }

            ////RMMI_PTR->PCsuite_route_through_mmi = KAL_TRUE;
            l4a_mms_read_folder_status_wind(folder_id, mode);
            return;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_emmsexe_hdlr
 * DESCRIPTION
 *  This is rmmi function for PC suite to communicate with MMS application
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_emmsexe_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 string_length = 0;
    kal_uint8 const *rsp_str = NULL;

    kal_uint8 folder_id, op;
    kal_uint32 msg_id;
    kal_uint8 filepath[100];
    kal_uint8 inputFilename[200];
    kal_uint8 error_cause;
    kal_uint8 result;
    rmmi_context_struct* rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    switch (source_string_ptr->cmd_mode)
    {
    #ifdef __test_mode__
        case RMMI_TEST_MODE:
        {
            rsp_str = (kal_uint8 const*)"+EMMSEXE: (0,1)";  /* prepare the response string */
            string_length = strlen((char*)rsp_str);         /* type casting */
            ret_val = KAL_TRUE;
            break;
        }
    #endif /* __test_mode__ */ 
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            //hogan:070314 WAP will not init in USB_BOOT mode , we cannot send msg to WAP
            if (!(l4c_ptr->cfun_state == 1 || l4c_ptr->cfun_state == 4))
            {
                break;
            }

            op = (kal_uint8) rmmi_int_validator_range_check(NULL,
                                                            source_string_ptr,
                                                            (kal_uint8) RMMI_COMMA,
                                                            2);
            if (op == RMMI_VALIDATOR_ERROR)
            {
                rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }
            else if (op == 0)
            {
                folder_id = rmmi_int_validator_u8_check(&error_cause,
                                                        source_string_ptr,
                                                        (kal_uint8) RMMI_COMMA);
                if (folder_id == 1 || folder_id == 2 || folder_id == 4 || folder_id == 8 || folder_id == 64)
                {
                    l4a_mms_delete_msg_wind(0, folder_id);
                }
                else if (folder_id == 0)
                {
                    msg_id = rmmi_int_validator_u32_check(&error_cause,
                                                          source_string_ptr,
                                                          (kal_uint8) rmmi_ptr->s_reg.s3);
                    if(error_cause != RMMI_PARSE_OK)
                    {
                        rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                        break;
                    }

                    l4a_mms_delete_msg_wind(msg_id, folder_id);
                }
                else
                {
                    rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
            }
            else if(op ==1)
            {
                result = rmmi_string_validator_ext(
                            &error_cause,
                            source_string_ptr,
                            rmmi_ptr->s_reg.s3,
                            200,
                            (kal_uint8*) inputFilename);
                if (result == RMMI_VALIDATOR_ERROR)
                {
                    rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
                check_hex_value_ext(inputFilename, (kal_uint8*) filepath);
                rmmi_byte_order_reverse((kal_uint8*) filepath, 100);               
                l4a_mms_upload_msg_wind(filepath);
            }
            else if(op == 2)
            {
                folder_id = rmmi_int_validator_u8_check(&error_cause,
                                                        source_string_ptr,
                                                        (kal_uint8) RMMI_COMMA);
                if(folder_id == 0)
                {
                    msg_id = rmmi_int_validator_u32_check(&error_cause,
                                                          source_string_ptr,
                                                          (kal_uint8) rmmi_ptr->s_reg.s3);
                    if(error_cause != RMMI_PARSE_OK)
                    {
                        rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                        break;
                    }

                    l4a_mms_read_msg_path_wind(msg_id);                    
                }
                else
                {
                    rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
            }
            return;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, (kal_uint8*) rsp_str, string_length);
}


#endif /* MMS_SUPPORT */ 


/*****************************************************************************
 * FUNCTION
 *  rmmi_ejava_hdlr
 * DESCRIPTION
 *  This is rmmi function for PC suite to install java files
 * PARAMETERS
 *  source_string_ptr       [IN]        At cmd string
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ejava_hdlr(rmmi_string_struct *source_string_ptr)
{
    kal_bool ret_val = KAL_FALSE;
    rmmi_context_struct* rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;


#ifdef __J2ME__

    switch (source_string_ptr->cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            ret_val = KAL_TRUE;
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            kal_uint8 result, error_cause;
            kal_uint8 is_force;
            kal_wchar *jad_file_name = NULL;
            kal_wchar *jar_file_name = NULL;
            kal_wchar *temp_file_name = NULL;
            kal_uint16 filename_length;

	    //WAP will not init in USB_BOOT mode , we cannot send msg to WAP
            if (!(l4c_ptr->cfun_state == 1 || l4c_ptr->cfun_state == 4))
            {
                break;
            }

            is_force = (kal_uint8) rmmi_int_validator_range_check(NULL,
                                                                  source_string_ptr,
                                                                  (kal_uint8) RMMI_COMMA,
                                                                  1);
            if (is_force == RMMI_VALIDATOR_ERROR)
            {
                rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }

            temp_file_name = (kal_wchar*) get_ctrl_buffer(FS_MAX_PATH);
            result = rmmi_filename_validator(
                        rmmi_ptr->char_set,
                        source_string_ptr,
                        (kal_uint8) RMMI_COMMA,
                        (FS_MAX_PATH / 2),
                        temp_file_name,
                        &filename_length,
                        &error_cause);
            if (result != RMMI_VALIDATOR_ERROR)
            {
                jad_file_name = (kal_wchar*) get_ctrl_buffer(filename_length * sizeof(kal_wchar));
                kal_mem_cpy(jad_file_name, temp_file_name, (filename_length * sizeof(kal_wchar)));
                kal_mem_set(temp_file_name, 0, FS_MAX_PATH);
            }
            else
            {
                if ((error_cause == RMMI_PARSE_ERROR) || (error_cause == RMMI_PARSE_TEXT_TOO_LONG))
                {
                    if (temp_file_name != NULL)
                    {
                        free_ctrl_buffer(temp_file_name);
                    }
                    rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                    break;
                }
            }

            result = rmmi_filename_validator(
                        rmmi_ptr->char_set,
                        source_string_ptr,
                        (kal_uint8) rmmi_ptr->s_reg.s3,
                        (FS_MAX_PATH / 2),
                        temp_file_name,
                        &filename_length,
                        &error_cause);
            if (result != RMMI_VALIDATOR_ERROR)
            {
                jar_file_name = (kal_wchar*) get_ctrl_buffer(filename_length * sizeof(kal_wchar));
                kal_mem_cpy(jar_file_name, temp_file_name, (filename_length * sizeof(kal_wchar)));
                if (temp_file_name != NULL)
                {
                    free_ctrl_buffer(temp_file_name);
                }
            }
            else
            {
                if (temp_file_name != NULL)
                {
                    free_ctrl_buffer(temp_file_name);
                }
                if (jad_file_name != NULL)
                {
                    free_ctrl_buffer(jad_file_name);
                }

                rmmi_ptr->cmee_err = RMMI_ERR_SYNTEX_ERROR;
                break;
            }

            // send the local_install_req message
            l4c_mmi_java_local_install_req_lind((kal_bool)is_force, jad_file_name, jar_file_name);
            return;
        }
        default:
        {
            /* unrecognized format of AT command line */
            rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;
            break;
        }
    }
#endif /* __J2ME__ */ 
    rmmi_final_rsp_generator(source_string_ptr->src_id, ret_val, NULL, 0);
}


#endif /* __MMI_FMI__ */


#endif /* __DT_SUPPORT__ */

