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
 * RMMI_ROOT.C
 *
 * Project:
 * --------
 *   ALL
 *
 * Description:
 * ------------
 *   This file is intends for ATCI Root.
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
 *
 *
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

#define RMMI_ROOT_C

//#include "kal_non_specific_general_types.h"    
#include "kal_general_types.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"    
#include "l4c_root.h"
#include "rmmi_context.h"
#include "rmmi_parser.h" //for rmmi_cmd_id_enum
#include "l4c_utility.h"
#include "l4c_context.h"
#include "layer4_context.h"

#include "rmmi_utility.h"
#include "rmmi_root.h"
#include "kal_trace.h"
#include "atci_trc.h"
#include "kal_public_api.h"

#if defined(__L4C_GEMINI_BT_HF__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_root_bt_hf_cmd_hdlr
 * DESCRIPTION
 *  To perform BT HF commands from other SIM but not SIM1
 *  This function is called by rmmi_cmd_processor of ATCI and check if the 
 *  command needs to be execued by orther ATCI_X
 *  Refer to AT_HandsfreeCmds defined in btprofiles\add-ins\at\at_hf.c
 *
 * PARAMETERS
 *  source_string_ptr   [IN]  whole source string
 *  which_sim           [OUT] the command shall be executed in
 * RETURNS
 *  KAL_TRUE if command needs to be performed by other SIM; KAL_FALSE if not
 *****************************************************************************/
kal_bool rmmi_root_bt_hf_cmd_hdlr(rmmi_string_struct *source_string_ptr, kal_uint8 *which_sim)
{
    switch (source_string_ptr->cmd_index)
    {
        case RMMI_CMD_ATD:
        {
            *which_sim = l4c_get_bt_hf_atd_action(); //RMMI_UCM_ATD ~ RMMI_UCM_ATD_4
            if (*which_sim != SIM1)
            {
                return KAL_TRUE;
            }
            break;
        }
        case RMMI_CMD_ATA:
        case RMMI_CMD_ATH:
        case RMMI_CMD_ATCHLD:
        case RMMI_CMD_ATVTS:
        {
            if ((l4c_root_check_call_exist(which_sim) == KAL_TRUE) //some call exist
                && (*which_sim != SIM1)) //the call isn't in current sim
            {
                return KAL_TRUE;
            }
            break;
        }
        case RMMI_CMD_ATBLDN:
        {
            if (L4C_ROOT_PTR->last_dialed_sim != SIM1)
            {
                *which_sim = L4C_ROOT_PTR->last_dialed_sim;
                return KAL_TRUE;
            }
            break;
        }
        default:
            break;
    }
    return KAL_FALSE;
}
#endif /* defined(__L4C_GEMINI_BT_HF__) */

void rmmi_root_select_context(kal_uint8 port)
{
#ifdef __GEMINI__
    kal_uint8 cid;

    cid = rmmi_port_2_cid(port);
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
    {
        kal_brief_trace(TRACE_INFO, INFO_RMMI_INVALID_PORT, port);
        return;
    }

    kal_brief_trace(TRACE_INFO, INFO_RMMI_SELECT_CONTEXT, cid, RMMI_COMM_PTR->rmmi_uart_owner[cid]);
    
    // update active module ID
    kal_set_active_module_id((module_type)(MOD_ATCI + RMMI_COMM_PTR->rmmi_uart_owner[cid]));

    // select context
    layer4_module_context_selection(MOD_ATCI + RMMI_COMM_PTR->rmmi_uart_owner[cid]);
    
#endif
}

kal_bool rmmi_root_is_uart_owner(kal_uint8 cid)
{
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
        return KAL_FALSE;

    #ifdef __GEMINI__
    return (kal_bool) (rmmi_current_mod_id == (RMMI_COMM_PTR->rmmi_uart_owner[cid] + MOD_ATCI));
    #else
    return (kal_bool) (rmmi_current_mod_id == MOD_ATCI);
    #endif
}

void rmmi_root_set_uart_owner_by_srcid(kal_uint8 src_id, sim_interface_enum simid)
{
#ifdef __GEMINI__
    kal_uint8 cid;
    cid = rmmi_srcid_2_cid(src_id);
    rmmi_root_set_uart_owner(cid, simid);
#endif
}

void rmmi_root_set_uart_owner(kal_uint8 cid, sim_interface_enum simid)
{
#ifdef __GEMINI__
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
        return;
    RMMI_COMM_PTR->rmmi_uart_owner[cid] = simid;
#endif
}

sim_interface_enum rmmi_root_get_uart_owner_by_srcid(kal_uint8 src_id)
{
    kal_uint8 cid;

    cid = rmmi_srcid_2_cid(src_id);
    
    return rmmi_root_get_uart_owner(cid);;
}

sim_interface_enum rmmi_root_get_uart_owner(kal_uint8 cid)
{
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
        return 0xff;

#ifdef __GEMINI__
    return RMMI_COMM_PTR->rmmi_uart_owner[cid];
#else
    return SIM1;
#endif
}


void rmmi_root_plugin_uart(kal_uint8 port)
{
    kal_uint8 cid;

    cid = rmmi_port_2_cid(port);
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
    {
        // not exist, find a new source/port mapping
        for (cid=0; cid<RMMI_MAX_CHANNEL_NUMBER; cid++)
        {
            if (RMMI_COMM_PTR->port[cid] == uart_port_null && RMMI_COMM_PTR->source[cid] == INVALID_SRC)
            {
                RMMI_COMM_PTR->port[cid] = port;
                RMMI_COMM_PTR->source[cid] = RMMI_SRC+cid;
                break;
            }
        }
        if (cid == RMMI_MAX_CHANNEL_NUMBER)
        {
            kal_brief_trace(TRACE_ERROR, ERROR_RMMI_ROOT_FIND_SRC_PORT_MAPPING);
            return;
        }
    }
    else
    {
        // exist
    }

    kal_brief_trace(TRACE_INFO, INFO_RMMI_UART_PLUGIN, RMMI_SRC+cid, cid, port);

#ifdef __GEMINI__
    rmmi_root_set_uart_owner(cid, RMMI_COMM_PTR->sim_uart_setting);
#endif

    RMMI_COMM_PTR->uart_stop_send_flag &= ~(0x01 << cid);
    RMMI_COMM_PTR->uart_plugout &= ~(0x01 << cid);
   
}

void rmmi_root_plugout_uart(kal_uint8 port)
{
    kal_uint8 cid;

    cid = rmmi_port_2_cid(port);
    if (cid >= RMMI_MAX_CHANNEL_NUMBER)
    {
        kal_brief_trace(TRACE_INFO, INFO_RMMI_INVALID_PORT, port);
        return;
    }
    kal_brief_trace(TRACE_INFO, INFO_RMMI_UART_PLUGOUT, RMMI_SRC+cid, cid, port);

    RMMI_COMM_PTR->port[cid] = uart_port_null;
    RMMI_COMM_PTR->source[cid] = INVALID_SRC;

    //clear context
    rmmi_clear_uart_queue(cid);
}
