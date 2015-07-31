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
 * L4C_T30_CMD.C
 *
 * Project:
 * --------
 *   MT6205
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

#define L4C_T30_CMD_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "data_msgid.h"

#ifdef __CSD_FAX__

//#include "nvram_editor_data_item.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"
//#include "csmcc_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"

//#include "mcd_l3_inc_struct.h"

#ifdef __MOD_SMU__
//#include "l4c2smu_struct.h"
#endif 
//#include "l4c_aux_struct.h" 
#include "l4c_utility.h"
//#include "l4c_ft.h"

//#include "mcd.h"

#include "l4c2t30_struct.h"
#include "l4c2t30_enums.h"
#include "csm_data_enums.h"

//#include "csmcc_atfunc.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
//#include "csmcc_defs.h"
#include "rmmi_parser.h"

//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "kal_public_api.h"


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_fdt_tx_msg_req
 * DESCRIPTION
 *  This function formats L4C_T30_TX_MSG_REQ ( for AT+FDT )
 * PARAMETERS
 *  src_id          [IN]        
 *  cmd_mode        [IN]        
 *  serv_class      [IN]        
 *  df              [IN]        
 *  vr              [IN]        
 *  wd              [IN]        
 *  ln              [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_fdt_tx_msg_req(
            kal_uint8 src_id,
            kal_uint8 cmd_mode,
            kal_uint8 serv_class,
            kal_uint8 df,
            kal_uint8 vr,
            kal_uint8 wd,
            kal_uint8 ln)
{
    l4c_t30_tx_msg_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * 
     * if (is_cmd_conflict(src_id, FDT_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_tx_msg_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4c_t30_tx_msg_req_struct),
                                                TD_RESET);

    param_ptr->mod_value = NULL;    /* NULL in class 2 or 2.0 */

    if (cmd_mode == RMMI_ACTIVE_MODE)
    {
        param_ptr->fdt_subparam.DF.is_present = KAL_FALSE;
        param_ptr->fdt_subparam.VR.is_present = KAL_FALSE;
        param_ptr->fdt_subparam.WD.is_present = KAL_FALSE;
        param_ptr->fdt_subparam.LN.is_present = KAL_FALSE;
    }
    else if (serv_class == G3_SERV_CLASS_2) /* only class 2 has RMMI_SET_MODE  */
    {
        param_ptr->fdt_subparam.DF.is_present = KAL_TRUE;
        param_ptr->fdt_subparam.VR.is_present = KAL_TRUE;
        param_ptr->fdt_subparam.WD.is_present = KAL_TRUE;
        param_ptr->fdt_subparam.LN.is_present = KAL_TRUE;

        param_ptr->fdt_subparam.DF.para_value = df;
        param_ptr->fdt_subparam.VR.para_value = vr;
        param_ptr->fdt_subparam.WD.para_value = wd;
        param_ptr->fdt_subparam.LN.para_value = ln;
    }
    else
    {
        return KAL_FALSE;
    }

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TX_MSG_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FDT_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_fdr_rx_msg_req
 * DESCRIPTION
 *  This function formats L4C_T30_RX_MSG_REQ ( for AT+FDR )
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_fdr_rx_msg_req(kal_uint8 src_id)
{
    l4c_t30_rx_msg_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * if (is_cmd_conflict(src_id, FDR_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_rx_msg_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_rx_msg_req_struct), TD_RESET);

    param_ptr->mod_value = NULL;    /* NULL in class 2 or 2.0 */
    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RX_MSG_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FDR_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_ftm_tx_msg_req
 * DESCRIPTION
 *  This function formats L4C_T30_TX_MSG_REQ ( for AT+FTM )
 * PARAMETERS
 *  src_id      [IN]        
 *  mod         [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_ftm_tx_msg_req(kal_uint8 src_id, kal_uint8 mod)
{
    l4c_t30_tx_msg_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * if (is_cmd_conflict(src_id, FTM_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_tx_msg_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_tx_msg_req_struct), TD_RESET);

    param_ptr->mod_value = mod; /* valid in class 1 */
    //param_ptr-> = NULL;       /* fdt_subparam is no need for class 1 */

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TX_MSG_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FTM_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_frm_rx_msg_req
 * DESCRIPTION
 *  This function formats L4C_T30_RX_MSG_REQ ( for AT+FRM )
 * PARAMETERS
 *  src_id      [IN]        
 *  mod         [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_frm_rx_msg_req(kal_uint8 src_id, kal_uint8 mod)
{
    l4c_t30_rx_msg_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * 
     * if (is_cmd_conflict(src_id, FRM_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_rx_msg_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_rx_msg_req_struct), TD_RESET);

    param_ptr->mod_value = mod;         /* valid in class 1 */
    //param_ptr->fdt_subparam = NULL;   /* no need for class 1 */

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RX_MSG_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FRM_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_fth_tx_bcs_req
 * DESCRIPTION
 *  This function formats L4C_T30_TX_BCS_REQ ( for AT+FTH )
 * PARAMETERS
 *  src_id      [IN]        
 *  mod         [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_fth_tx_bcs_req(kal_uint8 src_id, kal_uint8 mod)
{
    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * 
     * if (is_cmd_conflict(src_id, FTH_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TX_BCS_REQ, NULL);

    L4C_PTR->cc_current_action[src_id] = FTH_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_frh_rx_bcs_req
 * DESCRIPTION
 *  This function formats L4C_T30_RX_BCS_REQ ( for AT+FRH )
 * PARAMETERS
 *  src_id      [IN]        
 *  mod         [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_frh_rx_bcs_req(kal_uint8 src_id, kal_uint8 mod)
{
    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * 
     * if (is_cmd_conflict(src_id, FRH_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RX_BCS_REQ, NULL);

    L4C_PTR->cc_current_action[src_id] = FRH_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_fts_tx_silence_req
 * DESCRIPTION
 *  This function formats L4C_T30_TX_SILENCE_REQ ( for AT+FTS )
 * PARAMETERS
 *  src_id      [IN]        
 *  time        [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_fts_tx_silence_req(kal_uint8 src_id, kal_uint8 time)
{
    l4c_t30_tx_silence_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * if (is_cmd_conflict(src_id, FTS_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */

    param_ptr = (l4c_t30_tx_silence_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_tx_silence_req_struct), TD_RESET);

    param_ptr->silence_time = time;

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TX_SILENCE_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FTS_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_frs_rx_silence_req
 * DESCRIPTION
 *  This function formats L4C_T30_RX_SILENCE_REQ ( for AT+FRS )
 * PARAMETERS
 *  src_id      [IN]        
 *  time        [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_frs_rx_silence_req(kal_uint8 src_id, kal_uint8 time)
{
    l4c_t30_rx_silence_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * if (is_cmd_conflict(src_id, FRS_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_rx_silence_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_rx_silence_req_struct), TD_RESET);

    param_ptr->silence_time = time;

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RX_SILENCE_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FRS_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_fet_tx_ppm_req
 * DESCRIPTION
 *  This function formats L4C_T30_TX_PPM_REQ ( for AT+FET )
 * PARAMETERS
 *  src_id      [IN]        
 *  ppr         [IN]        
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_fet_tx_ppm_req(kal_uint8 src_id, kal_uint8 ppr)
{
    l4c_t30_tx_ppm_req_struct *param_ptr;

    //kal_uint8  call_id;
    //kal_bool   ret_val;
    //l4c_call_entry_struct call_entry;

    /* must check it's in a fax call first , if not, return FALSE */
    /*
     * ret_val = l4ccsm_cc_get_active_call(&call_id);
     * if ((ret_val == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * l4ccsm_cc_get_call_info (call_id, &call_entry, NULL);
     * 
     * if (call_entry.call_type != CSMCC_FAX_CALL)
     * return KAL_FALSE;
     * }
     * else return KAL_FALSE;
     * 
     * if (is_cmd_conflict(src_id, FRS_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     */
    param_ptr = (l4c_t30_tx_ppm_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_tx_ppm_req_struct), TD_RESET);

    param_ptr->page_status = ppr;

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_TX_PPM_REQ, param_ptr);

    L4C_PTR->cc_current_action[src_id] = FET_EXE;
    L4C_PTR->fax_src_id = src_id;

    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_rw_param_req
 * DESCRIPTION
 *  This function formats L4C_T30_RW_PARAM_REQ
 * PARAMETERS
 *  src_id              [IN]        
 *  cmd_code            [IN]        
 *  cmd_mode            [IN]        
 *  serv_class          [IN]        
 *  t30_rw_param        [?]         
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_rw_param_req(
            kal_uint8 src_id,
            kal_uint8 cmd_code,
            kal_uint8 cmd_mode,
            kal_uint8 serv_class,
            t30_rw_param_struct *t30_rw_param)
{
    l4c_t30_rw_param_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    param_ptr = (l4c_t30_rw_param_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_rw_param_req_struct), TD_RESET);

    switch (cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            param_ptr->action = ACTION_TEST;
            break;
        }
        case RMMI_READ_MODE:
        {
            param_ptr->action = ACTION_QUERY;
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            param_ptr->action = ACTION_SET;
            kal_mem_cpy(
                (kal_uint8*) & param_ptr->t30_rw_param,
                (kal_uint8*) t30_rw_param,
                sizeof(t30_rw_param_struct));
            break;
        }
        default:
            return KAL_FALSE;
    }

    param_ptr->serv_class = serv_class;

    switch (cmd_code)
    {

        case RMMI_CMD_ATFIP:
        {

            if (is_cmd_conflict(src_id, FIP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FIP_INIT_PARA;
            l4c_ptr->cc_current_action[src_id] = FIP_EXE;
            break;
        }
        case RMMI_CMD_ATFET:
        {

            if (is_cmd_conflict(src_id, FET_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FET_POST_CMD;
            l4c_ptr->cc_current_action[src_id] = FET_EXE;
            break;
        }
        case RMMI_CMD_ATFCC:
        {

            if (is_cmd_conflict(src_id, FCC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCC_DCE_CAP;
            l4c_ptr->cc_current_action[src_id] = FCC_EXE;
            break;
        }
        case RMMI_CMD_ATFDCC:
        {

            if (is_cmd_conflict(src_id, FDCC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCC_DCE_CAP;
            l4c_ptr->cc_current_action[src_id] = FDCC_EXE;
            break;
        }
        case RMMI_CMD_ATFIS:
        {

            if (is_cmd_conflict(src_id, FIS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FIS_NEG_CAP;
            l4c_ptr->cc_current_action[src_id] = FIS_EXE;
            break;
        }
        case RMMI_CMD_ATFDIS:
        {

            if (is_cmd_conflict(src_id, FDIS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FIS_NEG_CAP;
            l4c_ptr->cc_current_action[src_id] = FDIS_EXE;
            break;
        }
        case RMMI_CMD_ATFCS:
        {

            if (is_cmd_conflict(src_id, FCS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCS_CURRENT_CAP;
            l4c_ptr->cc_current_action[src_id] = FCS_EXE;
            break;
        }
        case RMMI_CMD_ATFDCS:
        {
            if (is_cmd_conflict(src_id, FDCS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCS_CURRENT_CAP;
            l4c_ptr->cc_current_action[src_id] = FDCS_EXE;
            break;
        }
        case RMMI_CMD_ATFLP:
        {
            if (is_cmd_conflict(src_id, FLP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FLP_DOC_AVAIL;
            l4c_ptr->cc_current_action[src_id] = FLP_EXE;
            break;
        }
        case RMMI_CMD_ATFLPL:
        {
            if (is_cmd_conflict(src_id, FLPL_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FLP_DOC_AVAIL;
            l4c_ptr->cc_current_action[src_id] = FLPL_EXE;
            break;
        }
        case RMMI_CMD_ATFSP:
        {
            if (is_cmd_conflict(src_id, FSP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FSP_POLL_ENABLE;
            l4c_ptr->cc_current_action[src_id] = FSP_EXE;
            break;
        }
        case RMMI_CMD_ATFSPL:
        {
            if (is_cmd_conflict(src_id, FSPL_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FSP_POLL_ENABLE;
            l4c_ptr->cc_current_action[src_id] = FSPL_EXE;
            break;
        }
        case RMMI_CMD_ATFNR:
        {
            if (is_cmd_conflict(src_id, FNR_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FNR_REPORT_PARAM;
            l4c_ptr->cc_current_action[src_id] = FNR_EXE;
            break;
        }
        case RMMI_CMD_ATFIE:
        {
            if (is_cmd_conflict(src_id, FIE_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FIE_PI_ENABLE;
            l4c_ptr->cc_current_action[src_id] = FIE_EXE;
            break;
        }
        case RMMI_CMD_ATFPS:
        {
            if (is_cmd_conflict(src_id, FPS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FPS_PAGE_STATUS;
            l4c_ptr->cc_current_action[src_id] = FPS_EXE;
            break;
        }
        case RMMI_CMD_ATFPTS:
        {
            if (is_cmd_conflict(src_id, FPTS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FPS_PAGE_STATUS;
            l4c_ptr->cc_current_action[src_id] = FPTS_EXE;
            break;
        }
        case RMMI_CMD_ATFRQ:
        {
            if (is_cmd_conflict(src_id, FRQ_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FRQ_RECV_Q_THRESD;
            l4c_ptr->cc_current_action[src_id] = FRQ_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2_0;
            break;
        }
        case RMMI_CMD_ATFBADLIN:
        {
            if (is_cmd_conflict(src_id, FBADLIN_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FRQ_RECV_Q_THRESD;
            l4c_ptr->cc_current_action[src_id] = FBADLIN_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFBADMUL:
        {
            if (is_cmd_conflict(src_id, FBADMUL_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FRQ_RECV_Q_THRESD;
            l4c_ptr->cc_current_action[src_id] = FBADMUL_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFCQ:
        {
            if (is_cmd_conflict(src_id, FCQ_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCQ_COPY_QUALITY;
            l4c_ptr->cc_current_action[src_id] = FCQ_EXE;

            if (param_ptr->serv_class == G3_SERV_CLASS_0)
            {
                param_ptr->serv_class = G3_SERV_CLASS_2;
            }

            break;
        }
        case RMMI_CMD_ATFIT:
        {
            if (is_cmd_conflict(src_id, FIT_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FIT_INACT_TO;
            l4c_ptr->cc_current_action[src_id] = FIT_EXE;
            break;
        }
        case RMMI_CMD_ATFPP:
        {
            if (is_cmd_conflict(src_id, FPP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FPP_PKT_PROCO;
            l4c_ptr->cc_current_action[src_id] = FPP_EXE;
            break;
        }
        case RMMI_CMD_ATFBO:
        {
            if (is_cmd_conflict(src_id, FBO_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FBO_BIT_ORDER;
            l4c_ptr->cc_current_action[src_id] = FBO_EXE;
            break;
        }
        case RMMI_CMD_ATFBOR:
        {
            if (is_cmd_conflict(src_id, FBOR_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FBO_BIT_ORDER;
            l4c_ptr->cc_current_action[src_id] = FBOR_EXE;
            break;
        }
        case RMMI_CMD_ATFEA:
        {
            if (is_cmd_conflict(src_id, FEA_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FEA_EOL_ALIGN;
            l4c_ptr->cc_current_action[src_id] = FEA_EXE;
            break;
        }
        case RMMI_CMD_ATFREL:
        {
            if (is_cmd_conflict(src_id, FREL_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FEA_EOL_ALIGN;
            l4c_ptr->cc_current_action[src_id] = FREL_EXE;
            break;
        }
        case RMMI_CMD_ATFCR:
        {
            if (is_cmd_conflict(src_id, FCR_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCR_RECV_CAP;
            l4c_ptr->cc_current_action[src_id] = FCR_EXE;
            break;
        }
        case RMMI_CMD_ATFBU:
        {
            if (is_cmd_conflict(src_id, FBU_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FBU_HDLC_REPORT;
            l4c_ptr->cc_current_action[src_id] = FBU_EXE;
            break;
        }
        case RMMI_CMD_ATFBUG:
        {
            if (is_cmd_conflict(src_id, FBUG_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FBU_HDLC_REPORT;
            l4c_ptr->cc_current_action[src_id] = FBUG_EXE;
            break;
        }
        case RMMI_CMD_ATFAP:
        {
            if (is_cmd_conflict(src_id, FAP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FAP_ADD_POLL_CAP;
            l4c_ptr->cc_current_action[src_id] = FAP_EXE;
            break;
        }
        case RMMI_CMD_ATFCT:
        {
            if (is_cmd_conflict(src_id, FCT_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCT_PHC_TO;
            l4c_ptr->cc_current_action[src_id] = FCT_EXE;
            break;
        }
        case RMMI_CMD_ATFPHCTO:
        {
            if (is_cmd_conflict(src_id, FPHCTO_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FCT_PHC_TO;
            l4c_ptr->cc_current_action[src_id] = FPHCTO_EXE;
            break;
        }
        case RMMI_CMD_ATFHS:
        {
            if (is_cmd_conflict(src_id, FHS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FHS_HANG_CODE;
            l4c_ptr->cc_current_action[src_id] = FHS_EXE;
            break;
        }
        case RMMI_CMD_ATFMS:
        {
            if (is_cmd_conflict(src_id, FMS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FMS_MIN_SPEED;
            l4c_ptr->cc_current_action[src_id] = FMS_EXE;
            break;
        }
        case RMMI_CMD_ATFMINSP:
        {
            if (is_cmd_conflict(src_id, FMINSP_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FMS_MIN_SPEED;
            l4c_ptr->cc_current_action[src_id] = FMINSP_EXE;
            break;
        }
        case RMMI_CMD_ATFRY:
        {
            if (is_cmd_conflict(src_id, FRY_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FRY_CTC_RETRY;
            l4c_ptr->cc_current_action[src_id] = FRY_EXE;
            break;
        }
        case RMMI_CMD_ATFBS:
        {
            if (is_cmd_conflict(src_id, FBS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FBS_BUFF_SIZE;
            l4c_ptr->cc_current_action[src_id] = FBS_EXE;
            break;
        }
        case RMMI_CMD_ATFFC:
        {
            if (is_cmd_conflict(src_id, FFC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FFC_FORMAT_CONV;
            l4c_ptr->cc_current_action[src_id] = FFC_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2_0;
            break;
        }
        case RMMI_CMD_ATFVRFC:
        {
            if (is_cmd_conflict(src_id, FVRFC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FFC_FORMAT_CONV;
            l4c_ptr->cc_current_action[src_id] = FVRFC_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFDFFC:
        {
            if (is_cmd_conflict(src_id, FDFFC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FFC_FORMAT_CONV;
            l4c_ptr->cc_current_action[src_id] = FDFFC_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFLNFC:
        {
            if (is_cmd_conflict(src_id, FLNFC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FFC_FORMAT_CONV;
            l4c_ptr->cc_current_action[src_id] = FLNFC_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFWDFC:
        {
            if (is_cmd_conflict(src_id, FWDFC_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_param = FFC_FORMAT_CONV;
            l4c_ptr->cc_current_action[src_id] = FWDFC_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        default:
            return KAL_FALSE;
    }

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RW_PARAM_REQ, param_ptr);
    l4c_ptr->fax_src_id = src_id;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_rw_str_param_req
 * DESCRIPTION
 *  This function formats L4C_T30_RW_STR_PARAM_REQ
 * PARAMETERS
 *  src_id              [IN]        
 *  cmd_code            [IN]        
 *  cmd_mode            [IN]        
 *  serv_class          [IN]        
 *  t30_str_param       [?]         
 * RETURNS
 *  if success, return KAL_TRUE
 *****************************************************************************/
kal_bool l4c_t30_rw_str_param_req(
            kal_uint8 src_id,
            kal_uint8 cmd_code,
            kal_uint8 cmd_mode,
            kal_uint8 serv_class,
            t30_str_param_struct *t30_str_param)
{
    l4c_t30_rw_str_param_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    param_ptr = (l4c_t30_rw_str_param_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_t30_rw_str_param_req_struct), TD_RESET);

    switch (cmd_mode)
    {
        case RMMI_TEST_MODE:
        {
            param_ptr->action = ACTION_TEST;
            break;
        }
        case RMMI_READ_MODE:
        {
            param_ptr->action = ACTION_QUERY;
            break;
        }
        case RMMI_SET_OR_EXECUTE_MODE:
        {
            param_ptr->action = ACTION_SET;
            kal_mem_cpy(
                (kal_uint8*) & param_ptr->t30_str_param,
                (kal_uint8*) t30_str_param,
                sizeof(t30_str_param_struct));
            break;

        }
        default:
            return KAL_FALSE;
    }

    param_ptr->serv_class = G3_SERV_CLASS_2_0;

    switch (cmd_code)
    {
        case RMMI_CMD_ATFLI:
        {
            if (is_cmd_conflict(src_id, FLI_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FLI_LOCAL_ID;
            l4c_ptr->cc_current_action[src_id] = FLI_EXE;
            break;
        }
        case RMMI_CMD_ATFLID:
        {
            if (is_cmd_conflict(src_id, FLID_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FLI_LOCAL_ID;
            l4c_ptr->cc_current_action[src_id] = FLID_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFPI:
        {
            if (is_cmd_conflict(src_id, FPI_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FPI_LOCAL_ID;;
            l4c_ptr->cc_current_action[src_id] = FPI_EXE;
            break;
        }
        case RMMI_CMD_ATFCIG:
        {
            if (is_cmd_conflict(src_id, FCIG_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FPI_LOCAL_ID;;
            l4c_ptr->cc_current_action[src_id] = FCIG_EXE;
            param_ptr->serv_class = G3_SERV_CLASS_2;
            break;
        }
        case RMMI_CMD_ATFNS:
        {
            if (is_cmd_conflict(src_id, FNS_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FNS_NON_STAND;
            l4c_ptr->cc_current_action[src_id] = FNS_EXE;
            break;
        }
        case RMMI_CMD_ATFSA:
        {
            if (is_cmd_conflict(src_id, FSA_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FSA_SUB_ADD;
            l4c_ptr->cc_current_action[src_id] = FSA_EXE;
            break;
        }
        case RMMI_CMD_ATFPA:
        {
            if (is_cmd_conflict(src_id, FPA_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FPA_SEL_ADD;
            l4c_ptr->cc_current_action[src_id] = FPA_EXE;
            break;
        }
        case RMMI_CMD_ATFPW:
        {
            if (is_cmd_conflict(src_id, FPW_EXE) == KAL_TRUE)
            {
                return KAL_FALSE;
            }
            param_ptr->rw_str_param = FPW_PWD;
            l4c_ptr->cc_current_action[src_id] = FPW_EXE;
            break;
        }
        default:
            return KAL_FALSE;
    }

    l4c_send_msg_to_t30(MSG_ID_L4C_T30_RW_STR_PARAM_REQ, param_ptr);
    l4c_ptr->fax_src_id = src_id;

    return KAL_TRUE;
}

#endif /* __CSD_FAX__ */ 

