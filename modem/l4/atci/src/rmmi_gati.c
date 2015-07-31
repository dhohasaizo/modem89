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
 * RMMI_GATI.C
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

#define _RMMI_GATI_C_

#include "kal_public_api.h"        /* Basic data type */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

//#include "app_buff_alloc.h"     /* Declaration of buffer management API */
#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
#include "stack_timer.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"

#include "event_shed.h"

#ifdef __GATI_ENABLE__

#ifdef __MOD_SMU__
#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"
#include "csmcc_common_enums.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "rmmi_msghdlr.h"
#include "l4c_context.h"
#include "layer4_context.h"

#include "rmmi_gati.h"

#include "kal_trace.h"
#include "atci_trc.h"

extern kal_uint8 rmmi_cid_2_srcid(kal_uint8 cid);
extern kal_uint8 rmmi_srcid_2_cid(kal_uint8 src_id);
extern kal_uint8 rmmi_cid_2_port(kal_uint8 cid);
extern kal_uint8 rmmi_port_2_cid(kal_uint8 port);
extern kal_bool has_any_current_action(kal_uint8 src_id);
extern void toUpper(kal_uint8 *str);

/* Global Variable */
extern module_type gati_mod_table[];
extern kal_char *gati_cmd_table[];

/* add this global variable since we don't want do add a staff variable in the gati_data_req_struct
   which will be used in the gati_flush_buffer() */
static kal_bool temp_stuff;


/*****************************************************************************
 * FUNCTION
 *  gati_insert_data_to_buffer
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when there is a module outputting some data to the UART
 *  while another module switch the data mode into the binary mode.
 *  So the output data is invalid and need to buffer it
 * PARAMETERS
 *  data            [IN]        Data to be written to uart
 *  size            [IN]        Number of bytes to be write to uart
 *  src_id          [IN]        The src_id of the uart
 *  mod_id          [IN]        The mod_id of the requested module
 *  data_type       [IN]        The data type of the output data
 *  stuff           [IN]        Need to pad CR & LF in front and back of data or not
 * RETURNS
 *  kal_bool         If the insert data action is success or not
 *****************************************************************************/
kal_bool gati_insert_data_to_buffer(
            kal_uint8 *data,
            kal_uint16 size,
            kal_uint8 src_id,
            module_type mod_id,
            kal_uint8 data_type,
            kal_bool stuff)
{
    gati_buffer_struct *buffer_end, *temp_buffer;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_GATI_INSERT_DATA_TO_BUFFER);

    if (rmmi_ptr->gati_buffer_count >= GATI_MAX_BUFFER_COUNT)
    {
        kal_brief_trace(TRACE_GROUP_7, GATI_BUFFER_FULL);
        return KAL_FALSE;
    }

    if (size > MAX_DATA_QUEUE_LENGTH)
    {
        ASSERT(0);
    }

    buffer_end = &(rmmi_ptr->gati_buffer);
    while (buffer_end->next != NULL)
    {

        buffer_end = buffer_end->next;
    }

    temp_buffer = (gati_buffer_struct*) get_ctrl_buffer((kal_uint16) sizeof(gati_buffer_struct));
    temp_buffer->data_type = data_type;
    temp_buffer->length = size;
    temp_buffer->mod_id = mod_id;
    temp_buffer->src_id = src_id;
    temp_buffer->next = NULL;
    temp_buffer->stuff = stuff;
    temp_buffer->buffer = (kal_uint8*) get_ctrl_buffer(size);
    kal_mem_cpy(temp_buffer->buffer, data, size);

    buffer_end->next = temp_buffer;

    rmmi_ptr->gati_buffer_count++;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  gati_flush_buffer
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when a module switch the data mode from the binary mode to the command mode.
 *  It will check if there is any data in the gati_buffer. If any, output the data
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void gati_flush_buffer()
{
    gati_buffer_struct *temp_buffer;
    gati_data_req_struct *data_req;
    kal_bool is_any_ch_in_binary_mode=KAL_FALSE;
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_FLUSH_BUFFER);

    for (i=RMMI_SRC; i<RMMI_ALL;i++)
    {
        if(rmmi_ptr->gati_binary_mode_module[i] != MOD_NIL)
        {
            is_any_ch_in_binary_mode = KAL_TRUE;
            break;
        }
    }

    data_req = (gati_data_req_struct*) construct_local_para((kal_uint16) sizeof(gati_data_req_struct), TD_RESET);

    while (rmmi_ptr->gati_buffer.next != NULL)
    {
        temp_buffer = rmmi_ptr->gati_buffer.next;

        // here we wil make sure that the length is smaller than the size of data
        if (temp_buffer->length > MAX_DATA_QUEUE_LENGTH)
        {
            ASSERT(0);
        }

        if (is_any_ch_in_binary_mode && temp_buffer->src_id == RMMI_ALL &&
            (temp_buffer->data_type == GATI_OUTPUT_URC && RMMI_ALL == RMMI_UNSOLICITED ))
        {
            break;
        }

        rmmi_ptr->current_src = temp_buffer->src_id;
        kal_mem_cpy(data_req->data, temp_buffer->buffer, temp_buffer->length);
        data_req->data_type = temp_buffer->data_type;
        data_req->size = temp_buffer->length;
        /*
         * set temp_stuff, since the stuff is used for the data not sent through ATCI_APP_AT_DATA_REQ
         * The temp_stuff will be used in the gati_data_req_hdlr()
         */
        temp_stuff = temp_buffer->stuff;
        gati_data_req_hdlr((local_para_struct*) data_req, temp_buffer->mod_id);

        rmmi_ptr->gati_buffer.next = temp_buffer->next;
        rmmi_ptr->gati_buffer_count--;
        free_ctrl_buffer((local_para_struct*) temp_buffer->buffer);
        free_ctrl_buffer((local_para_struct*) temp_buffer);
    }

    free_local_para((local_para_struct*) data_req);
}


/*****************************************************************************
 * FUNCTION
 *  gati_ctrl_req_hdlr
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when receiving MSG_ID_GATI_CTRL_REQ
 *  and handle the control message
 * PARAMETERS
 *  local_para_ptr      [IN]        Gati_ctrl_req_struct
 *  mod_id              [IN]        The module id which send the message
 * RETURNS
 *  void
 *****************************************************************************/
void gati_ctrl_req_hdlr(local_para_struct *local_para_ptr, module_type mod_id)
{
    kal_uint8 index;
    gati_ctrl_req_struct *msg_ptr = (gati_ctrl_req_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_CTRL_REQ_HDLR);

    index = gati_search_mod_index(mod_id);
    if (index >= GATI_MAX_MODULE_COUNT)
    {
        return;
    }
    rmmi_ptr->gati_mod_src_table[index].control_flag = msg_ptr->control_flag;

    gati_send_ctrl_cnf(mod_id, KAL_TRUE, msg_ptr->control_flag);
}


/*****************************************************************************
 * FUNCTION
 *  gati_switch_mode_req_hdlr
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when receiving MSG_ID_GATI_SWITCH_MODE_REQ
 *  and handle the switch mode message
 * PARAMETERS
 *  local_para_ptr      [IN]        Gati_switch_mode_req_struct
 *  mod_id              [IN]        The module id which send the message
 * RETURNS
 *  void
 *****************************************************************************/
void gati_switch_mode_req_hdlr(local_para_struct *local_para_ptr, module_type mod_id)
{
    kal_uint8 index, src_id;
    kal_bool result;
    kal_uint8 mode;
    gati_switch_mode_req_struct *msg_ptr = (gati_switch_mode_req_struct*) local_para_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SWITCH_MODE_REQ_HDLR);

    index = gati_search_mod_index(mod_id);
    if (index >= GATI_MAX_MODULE_COUNT)
    {
        return;
    }
    src_id = rmmi_ptr->gati_mod_src_table[index].src_id;;

    result = KAL_FALSE;
    mode = rmmi_ptr->gati_binary_mode_module[src_id] == MOD_NIL ? GATI_CMD_MODE : GATI_BINARY_MODE;

    if (has_any_current_action(src_id) && msg_ptr->mode == GATI_BINARY_MODE)
    {
        /*
         * If there is any current action in active, do nothing and result=KAL_FALSE;
         */
        ;
    }
    else if (msg_ptr->mode == mode)
    {
        /*
         * If the requested mode and current mode is the same,
         * do nothing and result=KAL_FALSE
         */

        ;
    }
    else if (msg_ptr->mode == GATI_BINARY_MODE)
    {   /* request Command mode --> Binary mode */
        rmmi_ptr->gati_binary_mode_module[src_id] = mod_id;
        mode = GATI_BINARY_MODE;
        result = KAL_TRUE;
    }
    else if (msg_ptr->mode == GATI_CMD_MODE)
    {   /* request Binary mode --> Command mode */

        // check if the binary mode activated module is the same with the requested module
        if (rmmi_ptr->gati_binary_mode_module[src_id] == mod_id)
        {
            rmmi_ptr->gati_binary_mode_module[src_id] = MOD_NIL;

            /* check if there is any data waiting to be send in the buffer */
            if (rmmi_ptr->gati_buffer.next != NULL)
            {
                gati_flush_buffer();
            }

            mode = GATI_CMD_MODE;
            result = KAL_TRUE;
        }
    }

    gati_send_switch_mode_cnf(mod_id, result, mode);
}


/*****************************************************************************
 * FUNCTION
 *  gati_search_mod_index
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It is used to search the index of the module id in the gati_mod_src_table.
 * PARAMETERS
 *  mod_id      [IN]        The quired module id
 * RETURNS
 *  kal_uint8              the index of the module id in the gati_mod_src_table
 *  If not found, --> GATI_MAX_MODULE_COUNT
 *****************************************************************************/
kal_uint8 gati_search_mod_index(module_type mod_id)
{
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEARCH_MOD_INDEX);

    for (i = 0; i < GATI_MAX_MODULE_COUNT; i++)
    {
        if (rmmi_ptr->gati_mod_src_table[i].mod_id == mod_id)
        {
            break;
        }
    }

    return i;
}


/*****************************************************************************
 * FUNCTION
 *  gati_data_req_hdlr
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when receiving MSG_ID_GATI_DATA_REQ
 *  and handle the data request message and output the data to the appropriate uart port
 * PARAMETERS
 *  local_para_ptr      [IN]        Gati_data_req_struct
 *  mod_id              [IN]        The module id which send the message
 * RETURNS
 *  void
 *****************************************************************************/
void gati_data_req_hdlr(local_para_struct *local_para_ptr, module_type mod_id)
{
    gati_data_req_struct *msg_ptr = (gati_data_req_struct*) local_para_ptr;
    kal_uint8 src_id, index;
    kal_uint16 actual_write;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_DATA_REQ_HDLR);

    if (msg_ptr->data_type == GATI_NOT_GATI_DATA)
    {
        /* here we will set the RMMI->current_src in the function gati_flush_buffer
           since we asume that this code block should be entered only when cleaning gati_buffer */
        kal_brief_trace(TRACE_GROUP_7, GATI_OUTPUT_NON_GATI_DATA);
        rmmi_write_to_uart(msg_ptr->data, msg_ptr->size, temp_stuff);
        return;
    }

    // find the source id
    index = gati_search_mod_index(mod_id);
    if (index >= GATI_MAX_MODULE_COUNT)
    {
        return;
    }
    src_id = rmmi_ptr->gati_mod_src_table[index].src_id;

    if (rmmi_ptr->gati_binary_mode_module[src_id] != MOD_NIL && rmmi_ptr->gati_binary_mode_module[src_id] != mod_id)
    {
        /*
         * buffer the data since the channel of the src_id is in the binary mode
         * and the owner is not the requested module
         */
        if (gati_insert_data_to_buffer(
                msg_ptr->data,
                msg_ptr->size,
                src_id,
                mod_id,
                msg_ptr->data_type,
                KAL_FALSE) == KAL_FALSE)
        {
            gati_send_data_cnf(index, 0);
        }
        return;
    }

    // set up the current source id
    switch (msg_ptr->data_type)
    {
        case GATI_OUTPUT_NORMAL:
        case GATI_OUTPUT_INTEGRITY:
            rmmi_ptr->current_src = src_id;
            break;
        case GATI_OUTPUT_URC:
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            break;
        default:
            return;
    }

    // Used to check the data type in the rmmi_uart_write_data
    rmmi_ptr->gati_data_type = msg_ptr->data_type;
    // Used in the binary mode to check if the caller of rmmi_write_to_uart is the the module which activates binary mode
    rmmi_ptr->gati_write_allow_flag = KAL_TRUE;

    // gati_actual_write will be computed and update in the rmmi_uart_write_data
    rmmi_ptr->gati_actual_write = 0;
    rmmi_write_to_uart(msg_ptr->data, msg_ptr->size, KAL_FALSE);
    actual_write = rmmi_ptr->gati_actual_write;

    // do write confirm flow control
    gati_send_data_cnf(index, actual_write);

    // check if this module need rtw flow control
    if ((rmmi_ptr->gati_mod_src_table[index].control_flag & GATI_FLOWCTRL_RTW) &&
        (msg_ptr->data_type != GATI_OUTPUT_URC) && (actual_write < msg_ptr->size)
        && actual_write != MAX_DATA_QUEUE_LENGTH)
    {
        kal_brief_trace(TRACE_GROUP_7, GATI_NEED_SEND_RTW_IND);
        rmmi_ptr->gati_mod_src_table[index].wait_rtw_ind = KAL_TRUE;
    }

    // clear the flag
    rmmi_ptr->gati_write_allow_flag = KAL_FALSE;
    rmmi_ptr->gati_data_type = GATI_OUTPUT_NORMAL;

}


/*****************************************************************************
 * FUNCTION
 *  gati_data_rsp_hdlr
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used when receiving MSG_ID_GATI_DATA_RSP
 *  and handle the data response message to enable the read from the UART
 * PARAMETERS
 *  mod_id      [IN]        The module id which send the message
 * RETURNS
 *  void
 *****************************************************************************/
void gati_data_rsp_hdlr(module_type mod_id)
{
    kal_uint8 i;
    kal_uint8 src_id;
    kal_uint16 mask;
    kal_uint8 cid, port;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_DATA_RSP_HDLR);

    i = gati_search_mod_index(mod_id);
    if (i >= GATI_MAX_MODULE_COUNT)
    {
        return;
    }
    src_id = rmmi_ptr->gati_mod_src_table[i].src_id;

    mask = 0x01 << src_id;
    if (rmmi_ptr->gati_stop_read_data_from_uart & mask)
    {
        rmmi_ptr->gati_stop_read_data_from_uart ^= mask;

        /* 
         *  if receiving RTR indication from the UART during stopping receiving from UART,
         *  read the data from the UART
         */
        if (rmmi_ptr->gati_pending_rtr_ind & mask)
        {
            rmmi_ptr->gati_pending_rtr_ind ^= mask;

            cid = rmmi_srcid_2_cid(src_id);
            port = rmmi_cid_2_port(cid);
            rmmi_read_from_uart(port);
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  gati_register_module
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will check if the module is registered to the gati_mod_src_table or not.
 *  It will register the module if the command is the first command for the module.
 * PARAMETERS
 *  mod_id      [IN]        The registered module id
 *  src_id      [IN]        The src_id where the input command come from.
 * RETURNS
 *  void
 *****************************************************************************/
void gati_register_module(module_type mod_id, kal_uint8 src_id)
{
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_REGISTER_MODULE);

    // search to find if the module have already been initialed 
    i = gati_search_mod_index(mod_id);
    if (i != GATI_MAX_MODULE_COUNT)
    {
        return;
    }

    // find a empty entry
    for (i = 0; i < GATI_MAX_MODULE_COUNT; i++)
    {
        if (rmmi_ptr->gati_mod_src_table[i].mod_id == MOD_NIL)
        {
            rmmi_ptr->gati_mod_src_table[i].mod_id = mod_id;
            rmmi_ptr->gati_mod_src_table[i].src_id = src_id;
            rmmi_ptr->gati_mod_src_table[i].control_flag =
                GATI_FLOWCTRL_RTW | GATI_FLOWCTRL_SUSPEND_READ_FROM_UART | GATI_FLOWCTRL_WRITE_CONFRIM;
            rmmi_ptr->gati_mod_src_table[i].wait_rtw_ind = KAL_FALSE;
            return;
        }
    }

    kal_brief_trace(TRACE_GROUP_7, GATI_REGISTER_FAIL);
}


/*****************************************************************************
 * FUNCTION
 *  gati_suspend_read_from_uart
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to check if the module enables the suspend flow
 *  If it is, it will set the gati_stop_read_data_from_uart flag
 *  so that ATCI will stop reading data from the UART for the src_id
 * PARAMETERS
 *  mod_id      [IN]        The module id where the data is requested to send to
 *  src_id      [IN]        The source id where the data come from.
 * RETURNS
 *  void
 *****************************************************************************/
void gati_suspend_read_from_uart(module_type mod_id, kal_uint8 src_id)
{
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SUSPEND_READ_FROM_UART);

    for (i = 0; i < GATI_MAX_MODULE_COUNT; i++)
    {
        if ((rmmi_ptr->gati_mod_src_table[i].mod_id == mod_id) &&
            (rmmi_ptr->gati_mod_src_table[i].control_flag & GATI_FLOWCTRL_SUSPEND_READ_FROM_UART))
        {
            rmmi_ptr->gati_stop_read_data_from_uart |= 0x01 << src_id;
            return;
        }
    }
}

/**************************************************
* The following function is utility function to send messages *
***************************************************/


/*****************************************************************************
 * FUNCTION
 *  gati_send_ilm
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to send messages to the queue of the destination module
 * PARAMETERS
 *  dest_id             [IN]        The destination module id
 *  msg_id              [IN]        The message id
 *  local_param_ptr     [IN]        The local parameter of the message
 *  peer_buf_ptr        [IN]        The peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_ilm(module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_ILM);

    msg_send6(MOD_ATCI, dest_id, ATCI_SAP, msg_id, local_param_ptr, peer_buf_ptr);

}


/*****************************************************************************
 * FUNCTION
 *  gati_send_data_ind
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to send MSG_ID_GATI_DATA_IND message with requested data to the module
 * PARAMETERS
 *  mod_id          [IN]        The module id where the data is requested to send to
 *  data_string     [IN]        The data
 *  data_size       [IN]        The length of the data
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_data_ind(module_type mod_id, kal_uint8 *data_string, kal_uint16 data_size)
{
    gati_data_ind_struct *param_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_DATA_IND);

    ASSERT(data_size <= MAX_DATA_QUEUE_LENGTH);

    param_ptr = (gati_data_ind_struct*) construct_local_para((kal_uint16) sizeof(gati_data_ind_struct), TD_RESET);
    param_ptr->buf_size = MAX_DATA_QUEUE_LENGTH;
    param_ptr->size = data_size;

    kal_mem_cpy(param_ptr->data, data_string, data_size);

    gati_send_ilm(mod_id, MSG_ID_GATI_DATA_IND, param_ptr, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  gati_send_rtw_ind
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to send MSG_ID_GATI_RTW_IND message
 *  to let the module knows when it can send the data which is not sent in the previously request
 * PARAMETERS
 *  src_id          [IN]        The src_id which is ready to write
 *  buf_size        [IN]        The space of the buffer of the src_id
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_rtw_ind(kal_uint8 src_id, kal_uint16 buf_size)
{
    kal_uint8 i;
    gati_rtw_ind_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_RTW_IND);

    for (i = 0; i < GATI_MAX_MODULE_COUNT; i++)
    {
        if (rmmi_ptr->gati_mod_src_table[i].wait_rtw_ind == KAL_TRUE &&
            rmmi_ptr->gati_mod_src_table[i].src_id == src_id)
        {
            // send RTW message to the module
            param_ptr = (gati_rtw_ind_struct*)
                construct_local_para((kal_uint16) sizeof(gati_rtw_ind_struct), TD_RESET);
            param_ptr->buf_size = buf_size;

            gati_send_ilm(rmmi_ptr->gati_mod_src_table[i].mod_id, MSG_ID_GATI_RTW_IND, param_ptr, NULL);
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  gati_send_data_cnf
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to check if the module enables the write confirm flow control
 *  If it is, it will send the confirm message
 * PARAMETERS
 *  index               [IN]        The index of the module id in the gati_mod_src_table
 *  actual_write        [IN]        The actual written length of the requested data
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_data_cnf(kal_uint8 index, kal_uint16 actual_write)
{
    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_DATA_CNF);
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_ptr->gati_mod_src_table[index].control_flag & GATI_FLOWCTRL_WRITE_CONFRIM)
    {
        gati_data_cnf_struct *param_ptr = (gati_data_cnf_struct*)
            construct_local_para((kal_uint16) sizeof(gati_data_cnf_struct), TD_RESET);
        param_ptr->actual_write = actual_write;
        gati_send_ilm(rmmi_ptr->gati_mod_src_table[index].mod_id, MSG_ID_GATI_DATA_CNF, param_ptr, NULL);
    }
}


/*****************************************************************************
 * FUNCTION
 *  gati_send_ctrl_cnf
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It is used to send MSG_ID_GATI_CTRL_CNF
 * PARAMETERS
 *  mod_id              [IN]        The destination module id of the confirm message
 *  result              [IN]        If the control action is success or not
 *  control_flag        [IN]        The current flag
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_ctrl_cnf(module_type mod_id, kal_bool result, kal_uint8 control_flag)
{
    gati_ctrl_cnf_struct *param_ptr = (gati_ctrl_cnf_struct*)
        construct_local_para((kal_uint16) sizeof(gati_ctrl_cnf_struct), TD_RESET);

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_CTRL_CNF);

    param_ptr->control_flag = control_flag;
    param_ptr->result = result;
    gati_send_ilm(mod_id, MSG_ID_GATI_CTRL_CNF, param_ptr, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  gati_send_switch_mode_cnf
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It is used to send MSG_ID_GATI_SWITCH_MODE_CNF
 * PARAMETERS
 *  mod_id      [IN]        The destination module id of the confirm message
 *  result      [IN]        If the switch action is success or not
 *  mode        [IN]        The current command mode
 * RETURNS
 *  void
 *****************************************************************************/
void gati_send_switch_mode_cnf(module_type mod_id, kal_bool result, kal_uint8 mode)
{
    gati_switch_mode_cnf_struct *param_ptr;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEND_SWITCH_MODE_CNF);

    param_ptr = (gati_switch_mode_cnf_struct*)
        construct_local_para((kal_uint16) sizeof(gati_switch_mode_cnf_struct), TD_RESET);
    param_ptr->result = result;
    param_ptr->mode = mode;

    gati_send_ilm(mod_id, MSG_ID_GATI_SWITCH_MODE_CNF, param_ptr, NULL);
}

/******************************************
* Following functions are utility functions for users.       *
******************************************/


/*****************************************************************************
 * FUNCTION
 *  gati_command_hdlr
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to handle the proprietary AT command which is made using GATI
 *  and send the command data to the appropriate module
 * PARAMETERS
 *  cmd_string      [IN]        The AT command string
 *  full_string     [IN]        The AT command data string
 * RETURNS
 *  kal_bool               If the command is a GATI command
 *****************************************************************************/
kal_bool gati_command_hdlr(kal_uint8 *cmd_string, kal_uint8 *full_string)
{
    kal_uint8 mod_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    /*
     * we assume that this function will be called only by custom_command_hdlr().
     * RMMI_PTR->current_src will be set in  the rmmi_cmd_processor()
     */

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_COMMAND_HDLR);

    if (strlen((kal_char*) full_string) > 2048)
    {
        ASSERT(0);
    }

    if ((mod_id = gati_search_command(cmd_string)) != MOD_NIL)
    {
        gati_register_module(mod_id, rmmi_ptr->current_src);    //reigster command
        gati_suspend_read_from_uart(mod_id, rmmi_ptr->current_src);
        gati_send_data_ind(mod_id, full_string, strlen((kal_char*) full_string));
        return KAL_TRUE;
    }
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  gati_search_command
 * DESCRIPTION
 *  This is a GATI function of RMMI module.
 *  It will be used to judge if the command is a GATI command
 * PARAMETERS
 *  cmd_string      [IN]        The AT command string
 * RETURNS
 *  module_type               return the module id which the command is used for
 *****************************************************************************/
module_type gati_search_command(kal_uint8 *cmd_string)
{    
    kal_uint8 i;

    //kal_uint8 ch, j;
    kal_uint8 cmd_len, prefix_len;

    kal_brief_trace(TRACE_FUNC, FUNC_GATI_SEARCH_COMMAND);

    cmd_len = strlen((kal_char*) cmd_string);

    //to upper
    toUpper((kal_uint8*) cmd_string);

    i=0;
    while(gati_mod_table[i] != MOD_NIL)
    {
        prefix_len = strlen(gati_cmd_table[i]);

        if (prefix_len > cmd_len)
        {
            continue;
        }

        if (strncmp((kal_char*) cmd_string, gati_cmd_table[i], prefix_len) == 0)
        {
            return gati_mod_table[i];
        }

        i++;        
    }

    return MOD_NIL;

}

#endif /* __GATI_ENABLE__ */ 

