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
 * RMMI_UTILITY.C
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

#define RMMI_UTILITY_C

#include <stdio.h>
//#include <stdarg.h>
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "app_buff_alloc.h"     /* Declaration of buffer management API */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
#include "divider_public.h"
#include "kal_public_defs.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"


//#include "mcd_l4_common.h"
 
#include "rmmi_parser.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_table.h"
#include "l4_trc.h"
#include "atci_trc.h"

#include "uart_sw.h"
#include "dcl.h"
//#include "l4c_aux_struct.h"
//#include "l4c_rspfmttr.h"
//#include "sat_def.h"
//#include "sim_common_enums.h"

//#include "mcd_ss_parameters.h"  /* csm */
//#include "mcd_ss_tcapmessages.h"
 
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
//#include "l4c2smsal_struct.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"
 
#include "l4_defs.h"
//#include "csmcc_common_enums.h"
#include "rmmi_common_enum.h"
//#include "l4c2phb_enums.h"
//#include "csmcc_atfunc.h"
//#include "l4c_cc_cmd.h"

#include "mcd_l3_inc_struct.h" 

#ifdef __MOD_SMSAL__
#include "smsal_l4c_enum.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_defs.h"
#endif /* __MOD_SMSAL__ */ 

#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
#endif 
#ifdef __MOD_UEM__
#include "device.h"
//#include "l4c2uem_struct.h"
#endif /* __MOD_UEM__ */ 

//#include "L4c_ss_parse.h"
//#include "l4c_sim_cmd.h"
#if defined (VM_SUPPORT)
#include "med_struct.h"
#endif 
#include "l4c_eq_cmd.h"
#include "l4c_sms_cmd.h"

//#include "l4c_msghdlr.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_utility.h"
//#include "resource_audio.h"

#ifdef __CSD_FAX__
//#include "l4c2t30_enums.h"
#include "csm_data_enums.h"
#include "csmcc_enums.h"
#endif /* __CSD_FAX__ */ 
#include "l3_inc_enums.h"
#include "kbd_table.h"

#include "l4c_utility.h"
//#include "common_nvram_editor_data_item.h"
//#include "l4c2phb_enums.h" 
//#include "l4c2phb_struct.h"
#include "l4c_phb_cmd.h"

#include "rmmi_msghdlr.h"

//#include "phb_defs.h"       

//#include "kal_non_specific_general_types.h"
#include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "string.h"
//#include "kal_common_defs.h"
//#include "kal_release.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "cmux_vp_num.h"
#include "kal_internal_api.h"

#include "rmmi_root.h"
#include "rmmi_sio.h"
#include "rmmi_struct.h"
#include "rmmi_gas.h"
#include "customer_gas_command.h"

void toUpper(kal_uint8 *str);

extern UART_PORT PS_UART_PORT;
extern UART_baudrate PS_BAUDRATE;
extern kal_uint16 custom_ath_for_dialup_timer(void);
extern kal_bool l4_custom_is_supportted_cscs(kal_char* string);
extern kal_uint8* custom_check_keypad_code(kal_uint8 *key, kal_uint8 *keycode);
//extern module_type gas_mod_map_table[]; 



/*****************************************************************************
 * FUNCTION
 *  gas_search_mod_index
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It is used to search the index of the module id in the gas_mod_table.
 * PARAMETERS
 *  mod_id      [IN]        The quired module id
 * RETURNS
 *  kal_uint8              the index of the module id in the gas_mod_table
 *  If not found, --> GAS_MAX_MODULE_COUNT
 *****************************************************************************/
kal_uint8 gas_search_mod_index(module_type mod_id)
{
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_SEARCH_MOD_INDEX);

    for (i = 0; i < rmmi_gas_max_module_count(); i++)
    {
        if (gas_mod_map_table[i] == mod_id)
        {
            break;
        }
    }

    return i;
}

/*****************************************************************************
 * FUNCTION
 *  gas_send_ilm
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will be used to send messages to the queue of the destination module
 * PARAMETERS
 *  dest_id             [IN]        The destination module id
 *  msg_id              [IN]        The message id
 *  local_param_ptr     [IN]        The local parameter of the message
 *  peer_buf_ptr        [IN]        The peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void gas_send_ilm(module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_SEND_ILM);

    msg_send6(MOD_ATCI, dest_id, ATCI_SAP, msg_id, local_param_ptr, peer_buf_ptr);

}

/*****************************************************************************
 * FUNCTION
 *  gas_register_module
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will check if the module is registered to the gas_mod_table or not.
 *  It will register the module if the command is the first command for the module.
 * PARAMETERS
 *  mod_id      [IN]        The registered module id
 *  src_id      [IN]        The src_id where the input command come from.
 * RETURNS
 *  void
 *****************************************************************************/
void gas_register_module(module_type mod_id)
{
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_REGISTER_MODULE);

    // search to find if the module have already been initialed 
    i = gas_search_mod_index(mod_id);
    if (i != rmmi_gas_max_module_count())
    {
        return;
    }

    // find a empty entry
    for (i = 0; i < rmmi_gas_max_module_count(); i++)
    {
        if (gas_mod_map_table[i] == MOD_NIL)
        {
            gas_mod_map_table[i] = mod_id;
            return;
        }
    }

}



/*****************************************************************************
 * FUNCTION
 *  gas_search_command
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will be used to judge if the command is a GAS command
 * PARAMETERS
 *  cmd_string      [IN]        The AT command string
 * RETURNS
 *  module_type               return the module id which the command is used for
 *****************************************************************************/
kal_bool gas_search_command(kal_uint8 *cmd_string, module_type *module)
{    
    kal_uint8 i=0;
    //kal_uint8 ch, j;
    kal_uint8 cmd_len, prefix_len;
    kal_brief_trace(TRACE_FUNC, FUNC_GAS_SEARCH_COMMAND);
    cmd_len = strlen((kal_char*) cmd_string);
    //to upper
    toUpper((kal_uint8*) cmd_string);


    for (i=0; i<rmmi_gas_max_module_count();i++)
    {
        prefix_len = strlen(gas_cmd_table[i]);
        if (cmd_len>prefix_len)
        {
            if (strncmp((kal_char*) cmd_string, gas_cmd_table[i], prefix_len) == 0)
            {
                *module = gas_mod_table[i];
                return KAL_TRUE; 
                
            }
        }
        
    }

    return KAL_FALSE; 

}


/*****************************************************************************
 * FUNCTION
 *  gas_send_data_ind
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will be used to send MSG_ID_GAS_DATA_IND message with requested data to the module
 * PARAMETERS
 *  mod_id          [IN]        The module id where the data is requested to send to
 *  data_string     [IN]        The data
 *  data_size       [IN]        The length of the data
 * RETURNS
 *  void
 *****************************************************************************/
void gas_send_data_ind(module_type mod_id, kal_uint8 *data_string, kal_uint16 data_size)
{
    gas_data_ind_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_SEND_DATA_IND);

    ASSERT(data_size <= MAX_DATA_QUEUE_LENGTH);

    param_ptr = (gas_data_ind_struct*) construct_local_para((kal_uint16) sizeof(gas_data_ind_struct), TD_RESET);
    param_ptr->buf_size = MAX_DATA_QUEUE_LENGTH;
    param_ptr->size = data_size;
    param_ptr->src_id = rmmi_ptr->current_src; 

    kal_mem_cpy(param_ptr->data, data_string, data_size);

    gas_send_ilm(mod_id, MSG_ID_GAS_DATA_IND, param_ptr, NULL);
}



/*****************************************************************************
 * FUNCTION
 *  gas_command_hdlr
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will be used to handle the proprietary AT command which is made using GAS
 *  and send the command data to the appropriate module
 * PARAMETERS
 *  cmd_string      [IN]        The AT command string
 *  full_string     [IN]        The AT command data string
 * RETURNS
 *  kal_bool               If the command is a GAS  command
 *****************************************************************************/
kal_bool gas_command_hdlr(kal_uint8 * cmd_string,kal_uint8 * full_string)
{
    module_type mod_id = MOD_NIL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_COMMAND_HDLR);

    if (strlen((kal_char*) full_string) > 2048)
    {
        ASSERT(0);
    }

    if (KAL_TRUE == gas_search_command(cmd_string,&mod_id))
    {
        gas_register_module(mod_id);    //reigster command
        gas_send_data_ind(mod_id, full_string, strlen((kal_char*) full_string));
        return KAL_TRUE;
    }
    return KAL_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  gas_data_req_hdlr
 * DESCRIPTION
 *  This is a GAS function of RMMI module.
 *  It will be used when receiving MSG_ID_GAS_DATA_REQ
 *  and handle the data request message and output the data to the appropriate uart port
 * PARAMETERS
 *  local_para_ptr      [IN]        gas_data_req_struct
 *  mod_id              [IN]        The module id which send the message
 * RETURNS
 *  void
 *****************************************************************************/
void gas_data_req_hdlr(local_para_struct *local_para_ptr, module_type mod_id)
{
    gas_data_req_struct *msg_ptr = (gas_data_req_struct*) local_para_ptr;
    kal_uint8 index,temp_src;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GAS_DATA_REQ_HDLR);

    // set up the current source id
    temp_src =rmmi_ptr->current_src; 
    
    switch (msg_ptr->data_type)
    {
        case GAS_OUTPUT_NORMAL:
            // find the source id
            index = gas_search_mod_index(mod_id);
            if (index >= rmmi_gas_max_module_count())
            {
                return;
            }
            else
            {
                rmmi_ptr->current_src = msg_ptr->src_id;
            }
            break;
        case GAS_OUTPUT_URC:
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            break;
        default:
            return;
    }

    rmmi_write_to_uart(msg_ptr->data, msg_ptr->size, KAL_FALSE);
    
    rmmi_ptr->current_src = temp_src;
    
}


