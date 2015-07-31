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
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (kal_uint8 src_id, C){} 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * L4C_PHB_CMD.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ¡K.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_PHB_CMD_C
#ifdef __MOD_PHB__

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "l4_msgid.h"

//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"

//#include "mcd_l3_inc_struct.h"

#ifdef __MOD_SMU__
//#include "ps2sat_struct.h"
//#include "l4c2smu_struct.h"
#endif /* __MOD_SMU__ */ 
#include "l4c2phb_enums.h"
//#include "l4c_aux_struct.h"
#include "l4c2phb_struct.h"
#include "phb_sap.h"
#include "phb_defs.h"
#include "l4c_utility.h"
//#include "l4c_ft.h"
//#include "l4_defs.h"

//#include "mcd.h"

#include "l4c_utility.h"

//#include "l4c2smsal_struct.h"
//#include "l4c2csm_ss_struct.h"
//#include "csmcc_atfunc.h"
//#include "l4c_ss_parse.h"
#include "rmmi_rsp.h"
#include "l4_trc.h"

#include "l3_inc_enums.h"
//#include "smsal_l4c_defs.h"
//#include "smsal_l4c_funcs.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_defs.h"
#include "l4c_sms_cmd.h"
//#include "custom_mmi_default_value.h"
//#include "l4c2abm_struct.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "keypad_sw.h"
//#include "mcd_ps2sat_peer.h"
#include "lmmi_ind.h"
#include "lmmi_rsp.h"
#include "l4c_phb_cmd.h"

//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "common_nvram_editor_data_item.h"
#include "string.h"
//#include "l4c2uem_struct.h"

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "nvram_editor_data_item.h"
#include "nvram_data_items.h"

#include "rmmi_utility.h"

extern void l4cphb_read_response_handler(
    kal_uint8 src_id,
    l4c_phb_entry_struct *list, 
    kal_uint16 no_data, 
    l4c_result_struct *result,
    kal_uint8 phb_result);

extern kal_uint8 custom_sms_fdn_check_da_only(void);

extern kal_bool is_sim_verified(void);
extern void l4c_phb_get_type_info_lrsp(kal_uint8 type, 
				  kal_bool result, 
				  kal_uint16 max_num_length, 
				  kal_uint16 max_text_length, 
				  kal_uint16 num_of_used_rec, 
				  kal_uint16 num_of_tot_rec, 
				  kal_uint16 num_of_free_ext
);

extern void l4c_phb_get_ln_type_info_lrsp(kal_uint8 type, 
				  kal_bool result, 
				  kal_uint16 max_num_length, 
				  kal_uint16 max_text_length, 
				  kal_uint16 num_of_used_rec, 
				  kal_uint16 num_of_tot_rec, 
				  kal_uint16 num_of_free_ext
);



/*****************************************************************************
 * FUNCTION
 *  l4c_phb_startup_begin_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_STARTUP_REQ to MOD_PHB
 *  which will we called when initiating or reseting MOD_PHB
 *  
 * PARAMETERS
 *  none         
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_startup_begin_req()
{
    l4cphb_startup_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    // act phb
    if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
    {
        return KAL_FALSE;
    }
    else if( l4c_ptr->phb_current_action != L4C_NO_ACTION)
    {  
        /* mtk02514 ** MAUI_01558151 *** 090225 *************************
        * When we need to restart PHB, ex. Switching XDN, SIM blocked, SAP is connected , 
        * we should check if there is any action running.
        * If any, return "ERROR" and reset PHB user and action
        ***********************************************************/
        if(l4c_ptr->phb_user>=RMMI_SRC)
        {
            rmmi_ptr->current_src = l4c_ptr->phb_user;
            l4c_general_rrsp(KAL_FALSE, RMMI_ERR_UNKNOWN);
        }
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }
    
    param_ptr = (l4cphb_startup_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_startup_req_struct), TD_RESET);

    param_ptr->dn_type = l4csmu_get_dial_mode();

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_STARTUP_REQ, param_ptr, NULL);

    return KAL_TRUE;
}

#ifdef __PHB_SORT_ENABLE__
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_search_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_SEARCH_REQ to MOD_PHB
 * PARAMETERS
 *  src_id          [IN]        the requesting source id
 *  type            [IN]        the searched PHB type
 *  no_data       [IN]        searched entries to be piggyback at a time
 *  name           [IN]        searched text pattern of name
 *  pattern_tag  [IN]        used searching method
 *  action          [IN]        the action which active the searching activity
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if request is sent or not
 *****************************************************************************/
static kal_bool l4c_phb_search_req(
        kal_uint8 src_id, 
        kal_uint8 type, 
        kal_uint16 no_data, 
        l4_name_struct *name,
        kal_uint8 pattern_tag, 
        kal_uint16 action)
{
    l4cphb_search_req_struct *param_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (is_phb_cmd_conflict(src_id, action) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    /**************************************
    * We will use cpbf_findtext to find out the the wanted
    * search result, so we remember it here
    ***************************************/
    if (pattern_tag == PHB_BYNAME_EXACT)
    {
        strncpy((char*)rmmi_ptr->cpbf_findtext, (char*)name->name, sizeof(rmmi_ptr->cpbf_findtext)-1);
    }

    param_ptr = (l4cphb_search_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_search_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->total = no_data;
    param_ptr->pattern_tag = pattern_tag;

    kal_mem_cpy(
        (l4_name_struct*) & param_ptr->pattern_value.alpha_id,
        (l4_name_struct*) name,
        sizeof(l4_name_struct));

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_SEARCH_REQ, param_ptr, NULL);

    l4c_set_user_action(L4C_PHB, src_id, action);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_entry_by_prefix_text_req
 * DESCRIPTION
 *  This function is used to search PHB entries using the method PHB_BYNAME_EXACT
 *  where the functino is called only by RMMI
 *
 * PARAMETERS
 *  src_id          [IN]        the requesting source id
 *  type            [IN]        the searched PHB type
 *  no_data       [IN]        searched entries to be piggyback at a time
 *  name           [IN]        searched text pattern of name
 *
 * RETURNS
 *  KAL_TRUE or KAL_FLASE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_get_entry_by_prefix_text_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint16 no_data,
            l4_name_struct *name)
{
    /********************************
    * Now,  This function is called only by RMMI
    ********************************/

    return l4c_phb_search_req(src_id, type, no_data, name, PHB_BYNAME_EXACT, CPBF_EXE);
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_sms_fdn_check_req
 * DESCRIPTION
 *  this function is used to check if the addresses of service center (sc) and destination address (da)
 *  is allowed to use by sending MSG_ID_L4CPHB_APPROVE_REQ
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  sc_addr   [IN]        the address of service center
 *  da          [IN]        the address of destination 
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_phb_sms_fdn_check_req(kal_uint8 src_id, l4_addr_bcd_struct sc_addr, l4_addr_bcd_struct da)
{
    l4cphb_approve_req_struct *param_ptr;
    l4_addr_bcd_struct *tmp_addr;
    l4c_context_struct *l4c_ptr = L4C_PTR;


    if (is_phb_cmd_conflict(src_id, PHB_FDN_CHECK) == KAL_TRUE)
    {
    	l4c_smsal_fdn_check_rsp(L4C_ERROR, PHB_L4C_ERROR);
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_approve_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->is_retrieve = KAL_FALSE;
    param_ptr->approval_type = l4_custom_approval_type(L4C_SMS_OPERATION,src_id);

     /******************************
     * sca: service center address
     * da: destination address
     ******************************/

    //mtk01616_080909: According to spec 22.101 A.25 , both sca and da addr shall be checked
    if(custom_sms_fdn_check_da_only() == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, INFO_SMS_FDN_CHECK_DA_ADDRESS);
        tmp_addr = &da;
        l4c_ptr->sms_da_fdn_check = KAL_TRUE;       //set this flag to ignore the second check
    }
    else
    {
        tmp_addr = &sc_addr;
    }
    kal_mem_cpy(&(param_ptr->tel_number), tmp_addr, sizeof(l4_addr_bcd_struct));
    l4c_ptr->sms_da_number = get_ctrl_buffer(sizeof(l4_addr_bcd_struct));
    kal_mem_cpy(l4c_ptr->sms_da_number, &da, sizeof(l4_addr_bcd_struct));       //save value into l4c context

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param_ptr, NULL);

    l4c_set_user_action(L4C_PHB, src_id, PHB_FDN_CHECK);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_read_req
 * DESCRIPTION
 *  this function is used to send MSG_ID_L4CPHB_READ_REQ to MOD_PHB to read PHB entries
 *  
 * PARAMETERS
 *  src_id              [IN]        the requested source id
 *  type                [IN]        the PHB type
 *  storage            [IN]        the PHB storage
 *  index               [IN]        the beginning index of PHB maintain by the MOD_PHB
 *  record_index     [IN]        the beginning index of PHB which indicate the the index in the SIM
 *  no_data           [IN]        the number of data to be read
 *  action              [IN]        the action which active this request
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_read_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 storage,
            kal_uint8 num_index,
            kal_uint16 index,
            kal_uint16 record_index,
            kal_uint16 no_data, 
            l4c_action_enum action)
{
    l4cphb_read_req_struct *param_ptr;
    #if defined(__PHB_STORAGE_BY_MMI__)
    l4c_context_struct *l4c_ptr = L4C_PTR;
    #endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if ((src_id >= RMMI_SRC) && (is_phb_cmd_conflict(src_id, action) == KAL_TRUE))
    {
        // only check conflict action for RMMI
        rmmi_ptr->cmee_err = RMMI_ERR_COMMAND_CONFLICT;
        return KAL_FALSE;
    }


    #if defined(__PHB_STORAGE_BY_MMI__)
    if (src_id >= RMMI_SRC)
    {       
        /* MAUI_01799679 * mtk02514 * 20091118 **********
        * AT and MMI might want to access an entry in the SIM card at the same time.
        * If MMI PHB handle the request from MMI first, it will send a 
        * request to L4C and return ERROR directly for the request from AT.
        * In this situation, we can't differentiate if the action is from AT or MMI
        * 
        * Since we need to limit that we should not allow to execute next command
        * before we finish this one while we can't do this using PHB action
        * we use route_thru_lmmi to do it
        *******************************************/    

        l4c_ptr->route_thru_lmmi = KAL_TRUE;
        l4c_ptr->route_thru_lmmi_user = src_id;
        l4c_mmi_read_phb_req_lind(src_id, type, storage, record_index, num_index);  
    }
    else
    #endif
    {
    param_ptr = (l4cphb_read_req_struct*) construct_local_para((kal_uint16) sizeof(l4cphb_read_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->total = no_data;
    param_ptr->storage = storage;
    param_ptr->num_index = num_index;
    param_ptr->index = index;                           //sorted index in PHB
    param_ptr->record_index = record_index;     //physical index in SIM or ME

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_READ_REQ, param_ptr, NULL);
    }

    if (src_id >= RMMI_SRC)
    {
        // don't keep phb read action for LMMI
        l4c_set_user_action(L4C_PHB, src_id, action);
    }
    
    return KAL_TRUE;

}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_entry_by_index_req
 * DESCRIPTION
 *  this function is used to read PHB entries from LMMI or AT+CNUM
 *  
 * PARAMETERS
 *  src_id              [IN]        the requested source id
 *  type                [IN]        the PHB type
 *  storage             [IN]       the PHB storeage
 *  num_index        [IN]        the index of the number : 1:ADN, 1+X: X-th ANR
 *  index               [IN]        the beginning index of PHB maintain by the MOD_PHB
 *  record_index     [IN]        the beginning index of PHB which indicate the the index in the SIM
 *  no_data           [IN]        the number of data to be read
 *
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_get_entry_by_index_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 storage,
            kal_uint8 num_index,    
            kal_uint16 index,
            kal_uint16 record_index,
            kal_uint16 no_data)
{
    l4c_action_enum action;

    if (type == PHB_MSISDN)
    {
        action = CNUM_EXE;
    }
    else
    {
        action = CPBR_EXE;
    }
    return l4c_phb_read_req(src_id, type, storage, num_index, index, record_index, no_data, action);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_entry_by_range_req
 * DESCRIPTION
 *  this function is used to read PHB entries from RMMI, said AT+CPBR
 *  
 * PARAMETERS
 *  src_id              [IN]        the requested source id
 *  type                [IN]        the PHB type
 *  storage             [IN]       the PHB storeage
 *  index               [IN]        the beginning index of PHB maintain by the MOD_PHB
 *  record_index     [IN]        the beginning index of PHB which indicate the the index in the SIM
 *  no_data           [IN]        the number of data to be read
 *
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_get_entry_by_range_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 storage,
            kal_uint16 index,
            kal_uint16 record_index,
            kal_uint16 no_data)
{
    return l4c_phb_read_req(src_id, type, storage, 0, index, record_index, no_data, CPBR_RANGE_EXE);
}

#ifdef __OP01__
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_entry_for_op01_req
 * DESCRIPTION
 *  this function is used to read PHB entries with usim data from RMMI, said AT^SCPBR
 *  
 * PARAMETERS
 *  src_id              [IN]        the requested source id
 *  type                [IN]        the PHB type
 *  storage             [IN]       the PHB storeage
 *  num_index        [IN]        the PHB num index which indicate ADN or 1-ANR, 2-ANR, ...
 *  record_index     [IN]        the beginning index of PHB which indicate the the index in the SIM
 *
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_get_entry_for_op01_req(
            kal_uint8 src_id,
            kal_uint8 type,
            phb_storage_enum storage,
            kal_uint8 num_index,
            kal_uint16 record_index)
{//mtk02514_plutommi_usim
    return l4c_phb_read_req(
            src_id, type, storage,
            num_index, 0xffff, record_index, 1, SCPBR_EXE);
}
#endif

/* 20041215: mtk00714 add for +CPBS, +CPBR */


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_storage_info
 * DESCRIPTION
 *  this function is used to get the PHB information for specific RMMI storage
 *  
 * PARAMETERS
 *  src_id             [IN]        the requested source id
 *  rmmi_storage   [IN]        the requested RMMI storage
 *  used               [OUT]     the used entries of the RMMI storage
 *  total               [OUT]     the total entries of the RMMI sotrage
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is success or not
 *****************************************************************************/
kal_bool l4c_phb_get_storage_info(kal_uint8 src_id, kal_uint8 rmmi_storage, kal_uint16 *used, kal_uint16 *total)
{
    l4cphb_file_info_struct file_info;
    phb_storage_enum storage;
    kal_uint8 type=PHB_NONE;
    #if defined(__PHB_STORAGE_BY_MMI__)
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    #endif
    #if defined(__CLOG_STORAGE_BY_MMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    storage = l4c_phb_get_sim_storage_by_current_module();

    switch (rmmi_storage)
    {
        case RMMI_PHB_SM:
            type = PHB_PHONEBOOK;                    
            break;
        case RMMI_PHB_ME:
            #if defined(__PHB_STORAGE_BY_MMI__)
            *total = rmmi_comm_ptr->phb_me_total;
            *used = rmmi_comm_ptr->phb_me_used;
            #else
            type = PHB_PHONEBOOK;     
            storage = PHB_STORAGE_NVRAM;
            #endif
            break;
            
    #if defined(__CLOG_STORAGE_BY_MMI__)
        case RMMI_PHB_LD:  
        case RMMI_PHB_DC:
            *total = rmmi_ptr->phb_ln_total[PHB_LND];
            *used = rmmi_ptr->phb_ln_used[PHB_LND];
            break;
        case RMMI_PHB_MC:
            *total = rmmi_ptr->phb_ln_total[PHB_LNM];
            *used = rmmi_ptr->phb_ln_used[PHB_LNM];
            break;
        case RMMI_PHB_RC:
            *total = rmmi_ptr->phb_ln_total[PHB_LNR];
            *used = rmmi_ptr->phb_ln_used[PHB_LNR];
            break;
            
        #ifdef __PHB_STORAGE_LA__ 
        case RMMI_PHB_LA:
            *total = rmmi_ptr->phb_ln_total[PHB_LND] + 
                rmmi_ptr->phb_ln_total[PHB_LNM] + 
                rmmi_ptr->phb_ln_total[PHB_LNR];
            *used =  rmmi_ptr->phb_ln_used[PHB_LND] +
                rmmi_ptr->phb_ln_used[PHB_LNM] +
                rmmi_ptr->phb_ln_used[PHB_LNR];
            break;
        #endif /* __PHB_STORAGE_LA__ */
        
    #else 
        case RMMI_PHB_LD:   
        case RMMI_PHB_DC:
        case RMMI_PHB_MC:
        case RMMI_PHB_RC:
            *total = PHB_MAX_LNR_ENTRIES;
            *used = 0;
            break;
        
        #ifdef __PHB_STORAGE_LA__ 
        case RMMI_PHB_LA:
            *total = PHB_MAX_LNR_ENTRIES + PHB_MAX_LND_ENTRIES + PHB_MAX_LNM_ENTRIES;
            *used =  0;
            break;
        #endif /* __PHB_STORAGE_LA__ */
    #endif  /* __CLOG_STORAGE_BY_MMI__ */
        
        case RMMI_PHB_FD:
            type = PHB_FDN;            
            break;

        case RMMI_PHB_EN:
            type = PHB_ECC;         
            break;
    
        case RMMI_PHB_ON:
            type = PHB_MSISDN;            
            break;
            
        default:
            *total = 0;
            *used = 0;
    }

    if( type != PHB_NONE)
    {
        if ( !l4c_phb_get_file_info(type, storage, &file_info, 1) ) 
            return KAL_FALSE;
        *total = file_info.total_num;
        *used = file_info.total_num - file_info.free_num;
    }
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_type_info
 * DESCRIPTION
 *  this function is used to get the information of specified SIM PHB file type
 * PARAMETERS
 *  type      [IN]        the requested file type
 *  file_info  [OUT]     the queried information
 *  occurrence [IN]    the index of the EF file, 1st, 2nd, ... 
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is success or not
 *****************************************************************************/
kal_bool l4c_phb_get_type_info(
            kal_uint8 type, 
            l4cphb_file_info_struct* file_info, 
            kal_uint8 occurrence)
{
    phb_storage_enum storage = l4c_phb_get_sim_storage_by_current_module();

    return l4c_phb_get_file_info(type, storage, file_info, occurrence); 
}

#ifdef __CANCEL_LOCK_POWERON__           
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_init_me_phb_req
 * DESCRIPTION
 *  this function is used to send MSG_ID_L4CPHB_INIT_ME_PHB_REQ
 *  to initial the ME PHB, which will be called if user skip the input of SIM PIN
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  init_type  [IN]        the intial type, which inidcates initiating type (ADN or call log)
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is success or not
 *****************************************************************************/
kal_bool l4c_phb_init_me_phb_req(kal_uint8 src_id,kal_uint8 init_type)
{
    l4cphb_init_me_phb_req_struct *param_ptr;

    param_ptr = (l4cphb_init_me_phb_req_struct*) construct_local_para((kal_uint16) sizeof(l4cphb_init_me_phb_req_struct), TD_RESET);

    if(init_type == TYPE_PHB_SMS_PARAM_ONLY_INIT)
    {
        l4c_send_msg_to_phb(MSG_ID_L4CPHB_INIT_ME_LN_REQ, NULL, NULL);
    }
    else if(init_type == TYPE_PHB_NORMAL_INIT)
    {
        param_ptr->dn_type = l4csmu_get_dial_mode(); //the value is always TYPE_NONE when SIM not verified
        l4c_send_msg_to_phb(MSG_ID_L4CPHB_INIT_ME_PHB_REQ,param_ptr, NULL);
    }    

    return KAL_TRUE;
}
#endif /* __CANCEL_LOCK_POWERON__ */        
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_setup_ln_entry
 * DESCRIPTION
 *  this function is used to send MSG_ID_L4CPHB_INIT_ME_PHB_REQ
 *  to initial the ME PHB, which will be called if user skip the input of SIM PIN
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  init_type  [IN]        the intial type, which inidcates initiating type (ADN or call log)
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is success or not
 *****************************************************************************/
static void l4c_phb_setup_ln_entry(l4c_phb_ln_entry_struct *src, phb_ln_entry_struct *des)
{
    #if !defined(__CLOG_STORAGE_BY_MMI__) || defined(__PHB_ACCESS_SIM_LN__)
    
    des->name_length = src->alpha_id.name_length;
    des->name_dcs = src->alpha_id.name_dcs;
    kal_mem_cpy((kal_uint8*) & des->name, &src->alpha_id.name, sizeof(des->name));
    if (des->name_length > (PHB_LN_NAME_SIZE-2)) 
    {
        des->name_length = PHB_LN_NAME_SIZE-2;
        des->name[PHB_LN_NAME_SIZE-1] = '\0';
        des->name[PHB_LN_NAME_SIZE-2] = '\0';
    }

    /****************************
     * addr_bcd[0] is type of number (TON)
     ****************************/
#if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
    des->addr_type = src->address_type;
    if (src->address_type == PHB_LN_VOIP)
    {
        des->addr_length = strlen((char*)src->address.uri);
        kal_mem_cpy(
            (kal_uint8*) des->addr_bcd,
            (kal_uint8*) src->address.uri,
            sizeof(des->addr_bcd));
    }
    else
    {
        des->addr_length = convert_to_bcd(
                                        (kal_uint8*) src->address.tel.number,
                                        (kal_uint8*) & (des->addr_bcd[1]),
                                        40) + 1;
        des->addr_bcd[0] = src->address.tel.type;
    }
#else /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */
    des->addr_length = convert_to_bcd((kal_uint8*) src->tel.number, (kal_uint8*) & (des->addr_bcd[1]), 40) + 1;    
    des->addr_bcd[0] = src->tel.type;
#endif /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */

    des->count = src->count;
    des->call_duration = src->call_duration;
    kal_mem_cpy(&des->time, &src->time, sizeof(rtc_format_struct));

    #endif /* !defined(__CLOG_STORAGE_BY_MMI__) || defined(__PHB_ACCESS_SIM_LN__) */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_exe_read_ln_entry_req
 * DESCRIPTION
 * this function is used to send MSG_ID_L4CPHB_READ_LN_REQ to read call log from MOD_PHB
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the requested call log type
 *  seq_id      [IN]        the sequence id which indicates the memory block of call log
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_exe_read_ln_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 seq_id)
{
    #ifndef __CLOG_STORAGE_BY_MMI__
    l4cphb_read_ln_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (is_phb_cmd_conflict(src_id, CPBR_LN) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_read_ln_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_read_ln_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->seq_id = seq_id;

    l4c_ptr->last_number_seq = seq_id;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_READ_LN_REQ, param_ptr, NULL);

    if (src_id != LMMI_SRC)
    {
        l4c_set_user_action(L4C_PHB, src_id, CPBR_LN);
    }

    #endif /* #ifndef __CLOG_STORAGE_BY_MMI__ */

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_exe_delete_ln_entry_req
 * DESCRIPTION
 * this function is used to delete the call log entry from MOD_PHB
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the deletion call log type
 *  index       [IN]        the index of the entry to be deleted. If the index is 0xff, it means delete_all
 *  no_data     [IN]      the number of entries to be piggybacked
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_exe_delete_ln_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 index, kal_uint8 no_data)
{
    #ifndef __CLOG_STORAGE_BY_MMI__
    
    l4cphb_delete_ln_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBD_LN) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_delete_ln_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_delete_ln_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->total = no_data;
    param_ptr->index = index;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_DELETE_LN_REQ, param_ptr, NULL);

    if (src_id != LMMI_SRC)
    {
        l4c_set_user_action(L4C_PHB, src_id, CPBD_LN);
    }

    #endif /* #ifndef __CLOG_STORAGE_BY_MMI__ */

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_exe_write_ln_entry_req
 * DESCRIPTION
 *  this function is used to send MSG_ID_L4CPHB_WRITE_LN_REQ to write a call log entry to PHB
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the written call log type
 *  no_data    [IN]       number of data to be piggybacked
 *  index       [IN]        the written index of call log entries
 *  entry       [IN]        the entry to be written 
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_exe_write_ln_entry_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 no_data,
            kal_uint8 index,
            l4c_phb_ln_entry_struct *entry)
{
    #ifndef __CLOG_STORAGE_BY_MMI__
    
    l4cphb_write_ln_req_struct *param_ptr;
    l4cphb_phb_ln_entry_array_struct param1;
    phb_ln_entry_struct *temp_entry;

    if (is_phb_cmd_conflict(src_id, CPBW_LN) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_write_ln_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_write_ln_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->total = no_data;
    param_ptr->index = index;

    //mtk00758 - atdL last number dialed

    #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed( &entry->address.tel, type, entry->address_type);
    #else 
        l4c_phb_set_last_number_dialed( &entry->tel, type, 0);
    #endif 

    param1.no_array = 1;

    if ((kal_uint16) (sizeof(phb_ln_entry_struct) * param1.no_array) >= 2048)
    {
        ASSERT(0);
    }

    param1.array = (phb_ln_entry_struct*)
        get_ctrl_buffer((kal_uint16) (sizeof(phb_ln_entry_struct) * param1.no_array));

    temp_entry = &param1.array[0];
    temp_entry->name_length = entry->alpha_id.name_length;
    temp_entry->name_dcs = entry->alpha_id.name_dcs;
    kal_mem_cpy((kal_uint8*) & temp_entry->name, &entry->alpha_id.name, sizeof(temp_entry->name));

    l4c_phb_setup_ln_entry(entry, temp_entry);

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_WRITE_LN_REQ, param_ptr, (kal_uint8*) &param1);

    free_ctrl_buffer(param1.array);

    if (src_id != LMMI_SRC)
    {
        l4c_set_user_action(L4C_PHB, src_id, CPBW_LN);
    }

    #endif /* #ifndef __CLOG_STORAGE_BY_MMI__ */

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_exe_write_entry_req
 * DESCRIPTION
 *  This function is ued to send MSG_ID_L4CPHB_WRITE_REQ to MOD_PHB to write an entry to the indicated PHB type
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the written type
 *  no_data   [IN]       the number of data to be piggybacked
 *  list          [IN]        the data to be written
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_exe_write_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint16 no_data, l4c_phb_entry_struct *list)
{
    l4cphb_write_req_struct *write_param_ptr;
    l4cphb_delete_req_struct *delete_param_ptr;
    l4cphb_phb_entry_array_struct param1;
    kal_uint8 temp_src = src_id;
    phb_entry_struct *temp_entry;
    convert_to_bcd_enum convert_method;
    #if defined(__PHB_STORAGE_BY_MMI__)
    l4c_context_struct *l4c_ptr = L4C_PTR;
    #endif

    /*
     *    2004.10.12 Wilson
     *    This is a ADN update operation for local MMI.
     *    LMMI will not keep L4 PHB index, so translate it here
     *
     *    PHB_PHBONEBOOK is ADN
     */
    if ((src_id == LMMI_SRC) && (type == PHB_PHONEBOOK) && (list->record_index < 0xffff))
    {
        list->index = l4cphb_get_index_by_location(PHB_PHONEBOOK, list->storage, list->record_index);
    }

    if (src_id == WAP_SRC)
    {
        src_id = LMMI_SRC;
    }
    
    if (is_phb_cmd_conflict(src_id, CPBW_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    #if defined(__PHB_STORAGE_BY_MMI__)
    /* MAUI_01799679 * mtk02514 * 20091118 **********
    * AT and MMI might want to access an entry in the SIM card at the same time.
    * If MMI PHB handle the request from MMI first, it will send a 
    * request to L4C and return ERROR directly for the request from AT.
    * In this situation, we can't differentiate if the action is from AT or MMI
    * 
    * Since we need to limit that we should not allow to execute next command
    * before we finish this one while we can't do this using PHB action
    * we use route_thru_lmmi to do it
    *******************************************/    
    if (src_id >= RMMI_SRC)
    {
        list->type = type;
        l4c_ptr->route_thru_lmmi = KAL_TRUE;
        l4c_ptr->route_thru_lmmi_user = src_id;
        l4c_mmi_write_phb_req_lind(src_id, (*list) );
        return KAL_TRUE;
    }
    #endif

    l4c_set_user_action(L4C_PHB, src_id, CPBW_EXE);

    if (list->alpha_id.name_length == 0 && 
        list->tel.length == 0 &&
        list->tel.type != PHB_INTER_NUM &&
        type == PHB_ANR)
    {
        delete_param_ptr = (l4cphb_delete_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cphb_delete_req_struct), TD_RESET);

        delete_param_ptr->src_id = src_id;
        delete_param_ptr->type = type;
        delete_param_ptr->index = list->index;
        delete_param_ptr->num_index = list->num_index;
        delete_param_ptr->storage = list->storage;
        delete_param_ptr->total = 1;
        delete_param_ptr->total_piggyback = no_data;
        delete_param_ptr->record_index = list->record_index;

        l4c_send_msg_to_phb(MSG_ID_L4CPHB_DELETE_REQ, delete_param_ptr, NULL);

        return KAL_TRUE;
    }
    write_param_ptr = (l4cphb_write_req_struct*) construct_local_para((kal_uint16) sizeof(l4cphb_write_req_struct), TD_RESET);

    write_param_ptr->src_id = temp_src;
    write_param_ptr->type = type;
    write_param_ptr->total = no_data;


    param1.no_array = 1;

    if ((kal_uint16) (sizeof(phb_entry_struct) * param1.no_array) >= 2048)
    {
        ASSERT(0);
    }

    param1.array = (phb_entry_struct*) get_ctrl_buffer((kal_uint16) (sizeof(phb_entry_struct) * param1.no_array));
    temp_entry = &param1.array[0];

    temp_entry->index = list->index;
    temp_entry->record_index = list->record_index;
    temp_entry->storage = list->storage;
    temp_entry->num_index = list->num_index;
    temp_entry->aas_id = list->aas_id;
    kal_mem_cpy((kal_uint8*) &temp_entry->alpha_id, &list->alpha_id, sizeof(l4_name_struct));

    #ifndef __SP_RIL_SUPPORT__
    if (type != PHB_FDN && type != PHB_BDN)
    {
        convert_method = CONVERT_TO_BCD_NORMAL;       
    }
    else
    #endif
    {
        //mtk01616_080428: wild character might be inputed when FDN
        convert_method = CONVERT_TO_BCD_WILD;               
    }

    l4c_phb_set_tel_number(&temp_entry->tel_number, &list->tel, convert_method);    
    temp_entry->cap_cnf_id = 0xFF;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_WRITE_REQ, write_param_ptr, (kal_uint8*) &param1);

    free_ctrl_buffer(param1.array);    

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_exe_delete_entry_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_DELETE_REQ to MOD_PHB to delete PHB entries in the indicated type
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the indicated PHB type
 *  index       [IN]        the index of entry to be deleted
 *  num_index  [IN]      the index of the number, 1: ADN, 1+X: X-th ANR
 *  no_data     [IN]      the number of data to be piggybacked
 *  storage     [IN]       the indicated PHB storage
 *  del_all     [IN]         delete all entries if the type is PHB_PHONEBOOK
 *  
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_exe_delete_entry_req(
            kal_uint8 src_id,
            kal_uint8 type,
            kal_uint8 num_index,
            kal_uint16 index,
            kal_uint8 no_data,
            kal_uint8 storage,
            kal_bool del_all, 
            kal_uint16 record_index)
{
    l4cphb_delete_req_struct *param_ptr;
    kal_uint16 new_index;
    #if defined(__PHB_STORAGE_BY_MMI__)
    l4c_context_struct *l4c_ptr = L4C_PTR;
    #endif

    if (is_phb_cmd_conflict(src_id, CPBD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    #if defined(__PHB_STORAGE_BY_MMI__)
    /* MAUI_01799679 * mtk02514 * 20091118 **********
    * AT and MMI might want to access an entry in the SIM card at the same time.
    * If MMI PHB handle the request from MMI first, it will send a 
    * request to L4C and return ERROR directly for the request from AT.
    * In this situation, we can't differentiate if the action is from AT or MMI
    * 
    * Since we need to limit that we should not allow to execute next command
    * before we finish this one while we can't do this using PHB action
    * we use route_thru_lmmi to do it
    *******************************************/    
    if (src_id >= RMMI_SRC)
    {
        l4c_ptr->route_thru_lmmi = KAL_TRUE;
        l4c_ptr->route_thru_lmmi_user = src_id;
        l4c_mmi_delete_phb_req_lind(src_id, type, storage, record_index, 0);    
        return KAL_TRUE;
    }
    #endif

    l4c_set_user_action(L4C_PHB, src_id, CPBD_EXE);

    /*
     *  For ADN record, because not sort in L4 PHB, so it will pass "record_index" and "storage" as parameter.
     *  So need to translate to L4 PHB sorted index here.
     *  Note: For ADN (PHB_PHONEBOOK  type only.)
     */
    if (type == PHB_PHONEBOOK && del_all == KAL_TRUE)
    {
        new_index = 1;
    }
    else
    {
        new_index = index;
    }

    param_ptr = (l4cphb_delete_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_delete_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->type = type;
    param_ptr->index = new_index;
    param_ptr->num_index = num_index;
    param_ptr->storage = storage;
    param_ptr->total = (del_all == KAL_TRUE) ? 0xffff : 1;
    param_ptr->total_piggyback = no_data;
    param_ptr->record_index = record_index;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_DELETE_REQ, param_ptr, NULL);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_startup_read_next_req
 * DESCRIPTION
 *  This function is sued to send MSG_ID_L4CPHB_STARTUP_READ_NEXT_REQ to MOD_PHB
 *  to inform MOD_PHB that it is OK to continously initiate the MOD_PHB for next PHB type
 *  
 * PARAMETERS
 *  access_id       [IN]        the access id of PHB control block
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_startup_read_next_req(kal_uint8 access_id)
{

    l4cphb_startup_read_next_req_struct *param_ptr;

    param_ptr = (l4cphb_startup_read_next_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_startup_read_next_req_struct), TD_RESET);

    param_ptr->access_id = access_id;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_STARTUP_READ_NEXT_REQ, param_ptr, NULL);

    return KAL_TRUE;
}

/* To reset phb state */


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_update
 * DESCRIPTION
 *  This function is used to stop the action in the L4CPHB
 *  which will be called when SIM file is changed
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_update()
{
    l4c_result_struct result;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    /* mtk02514_090106 ***************************************************
	  *  This function will output to the L4C_PTR->phb_user
	  *  This is because when sim file changed, this function will be called.
	  *  If there is any active AT command, we should return "ERROR" to them
    *********************************************************************/

    if (l4c_ptr->phb_user >= RMMI_SRC && l4c_ptr->phb_user < RMMI_ALL)
    {   //return error
        result.flag = L4C_ERROR;
        result.cause = 0;       //no cause
        rmmi_ptr->current_src = l4c_ptr->phb_user;
        l4c_phb_general_rrsp(&result);

        #if defined(__PHB_STORAGE_BY_MMI__)
        l4c_ptr->route_thru_lmmi = KAL_FALSE;
        l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;
        #endif
    }
    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_type_info_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  type                [IN]        
 *    
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_phb_get_type_info_req (kal_uint8 type, kal_uint8 occurrence)
{
    kal_bool result;
    l4cphb_file_info_struct info;

    // call PHB get type info function
    result = (kal_bool) l4c_phb_get_type_info(type, &info, occurrence); 

    l4c_phb_get_type_info_lrsp(
	type,
	result,
	info.max_num_len*2,
	info.max_name_len,
	info.total_num - info.free_num,
	info.total_num,
	info.ext_free_num
    );
	
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_number_check_req
 * DESCRIPTION
 *  
 * PARAMETERS
 * src_id		       [IN]
 * number             [IN]
 * approval_type   [IN]
 *    
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_phb_number_check_req (
	              kal_uint8 src_id,
	              l4c_number_struct *ascii_number,
	              kal_uint8 approval_type)
{
	#ifdef __L4CPHB_SIM_ONLY_FEATURE__
	kal_int8 count;
	l4cphb_approve_req_struct *param_ptr;

	// do we need to set action?
	if (is_phb_cmd_conflict(src_id, PHB_NUMBER_CHECK) == KAL_TRUE)
		return KAL_FALSE;

	param_ptr = (l4cphb_approve_req_struct*)
		construct_local_para( (kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);
	param_ptr->src_id = src_id;
	param_ptr->is_retrieve = KAL_FALSE;	
	param_ptr->approval_type = approval_type;  
	param_ptr->tel_number.addr_bcd[0] = ascii_number->type;
	count = convert_to_bcd(
                                (kal_uint8*) ascii_number->number,
                                (kal_uint8*) &(param_ptr->tel_number.addr_bcd[1]),
                                40);
	param_ptr->tel_number.addr_length=count+1;

	l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param_ptr, NULL);   

	l4c_set_user_action(L4C_PHB, src_id, PHB_NUMBER_CHECK);
	#endif /* __L4CPHB_SIM_ONLY_FEATURE__ */
	return KAL_TRUE;

}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_fdn_get_name_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_FDN_GET_NAME_REQ to the PHB
 *  
 * PARAMETERS
 * src_id		       [IN]     the requested source id
 * number             [IN]     the tel number used to search FDN
 *    
 * RETURNS
 *   KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_fdn_get_name_req (
	              kal_uint8 src_id,
	              l4c_number_struct *number)
{
    #ifdef __PHB_FDN_GET_NAME__
    
    l4cphb_fdn_get_name_req_struct *param_ptr;


    param_ptr = (l4cphb_fdn_get_name_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_fdn_get_name_req_struct), TD_RESET);
    param_ptr->src_id = src_id;    

    l4c_phb_set_tel_number(&param_ptr->number, number, CONVERT_TO_BCD_WILD);    

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_FDN_GET_NAME_REQ, param_ptr, NULL);   
    

    #endif /* #ifdef __PHB_FDN_GET_NAME__ */
    return KAL_TRUE;

}

void l4c_mmi_read_phb_res_req(kal_uint8 phb_src, l4c_result_struct *result, l4c_phb_entry_struct *entry, kal_uint8 phb_result)
{
    #if defined(__PHB_STORAGE_BY_MMI__)
    l4c_context_struct *l4c_ptr = L4C_PTR;

    // for FDN and MSISDN
    if (entry->tel.length == 0 && 
        entry->tel.type != 0x91 && 
        entry->alpha_id.name_length == 0 && 
        (entry->type == PHB_FDN || entry->type == PHB_MSISDN) )
    {
        phb_result = PHB_ERRNO_READ_EMPTY;
        result->flag = L4C_OK;
    }
    // for SIM ADN and ME ADN
    else if (result->flag == L4C_ERROR && 
        result->cause == PHB_ERRNO_READ_EMPTY)
    {
        phb_result = PHB_ERRNO_READ_EMPTY;
        result->flag = L4C_OK;
    }

    /* MAUI_01799679 * mtk02514 * 20091118 **********
    * AT and MMI might want to access an entry in the SIM card at the same time.
    * If MMI PHB handle the request from MMI first, it will send a 
    * request to L4C and return ERROR directly for the request from AT.
    * In this situation, we can't differentiate if the action is from AT or MMI
    * 
    * Since we need to limit that we should not allow to execute next command
    * before we finish this one while we can't do this using PHB action
    * we use route_thru_lmmi to do it
    *******************************************/    
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;

    l4cphb_read_response_handler(phb_src, entry, 1, result, phb_result);
    #endif
}

void l4c_mmi_write_phb_res_req(kal_uint8 phb_src, l4c_result_struct *result, kal_uint16 record_index, kal_uint8 num_index)
{
    #if defined(__PHB_STORAGE_BY_MMI__)
    /* MAUI_01799679 * mtk02514 * 20091118 **********
    * AT and MMI might want to access an entry in the SIM card at the same time.
    * If MMI PHB handle the request from MMI first, it will send a 
    * request to L4C and return ERROR directly for the request from AT.
    * In this situation, we can't differentiate if the action is from AT or MMI
    * 
    * Since we need to limit that we should not allow to execute next command
    * before we finish this one while we can't do this using PHB action
    * we use route_thru_lmmi to do it
    *******************************************/    
    
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;
    
    #ifdef __OP01__
    if (rmmi_ptr->scpbw_entry_ptr != NULL)
    {
        /* 
        * When writing an unsupportted USIM PHB EF file,
        * MMI will return result->flag = L4C_ERROR and result->cause = PHB_CAUSE_NOT_SUPPORT.
        * In this case, we should continously write the next USIM PHB EF file for AT^SCPBW
        */
        if (result->flag == L4C_ERROR && result->cause != PHB_CAUSE_NOT_SUPPORT) 
        {
            free_ctrl_buffer(rmmi_ptr->scpbw_entry_ptr);
            rmmi_ptr->scpbw_entry_ptr = NULL;
        }
        else 
        {
            
            if (num_index <3) 
            {
                l4c_phb_entry_struct entry;
                kal_mem_cpy(&entry, &rmmi_ptr->scpbw_entry_ptr->entry, sizeof(l4c_phb_entry_struct));
                kal_mem_cpy(&entry.tel, &rmmi_ptr->scpbw_entry_ptr->num[num_index], sizeof(l4c_number_struct));
                entry.record_index = record_index;
                entry.aas_id = ++num_index;
                entry.num_index = num_index;  
        
                l4c_phb_exe_write_entry_req(phb_src, PHB_ANR, 1, &entry);
            }
            else
            {
                l4c_phb_usim_entry entry;
                kal_mem_cpy(&entry.field.email, &rmmi_ptr->scpbw_entry_ptr->email, sizeof(phb_email_struct));
                entry.field.email.adn_record_index = record_index;
                l4c_mmi_write_additional_req_lind(
                        phb_src, PHB_EMAIL, 
                        (phb_storage_enum) rmmi_ptr->scpbw_entry_ptr->entry.storage, 
                        1, record_index, &entry);
                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = phb_src;
            }        
            return;
        }
    }
    #endif
    rmmi_ptr->current_src = phb_src;
    l4c_phb_general_rrsp(result);

    #endif
}

void l4c_mmi_delete_phb_res_req(kal_uint8 phb_src, l4c_result_struct *result, kal_uint16 record_index, kal_uint8 num_index)
{
    #if defined(__PHB_STORAGE_BY_MMI__)
    /* MAUI_01799679 * mtk02514 * 20091118 **********
    * AT and MMI might want to access an entry in the SIM card at the same time.
    * If MMI PHB handle the request from MMI first, it will send a 
    * request to L4C and return ERROR directly for the request from AT.
    * In this situation, we can't differentiate if the action is from AT or MMI
    * 
    * Since we need to limit that we should not allow to execute next command
    * before we finish this one while we can't do this using PHB action
    * we use route_thru_lmmi to do it
    *******************************************/    
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    rmmi_ptr->current_src = phb_src;
    l4c_phb_general_rrsp(result);

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;
    
    #endif
}

void l4c_mmi_phb_init_res_req(
        kal_uint8 type, 
        kal_uint8 storage, 
        kal_uint16 total, 
        kal_uint16 used, 
        kal_uint16 free, 
        kal_uint16 max_name_len, 
        kal_uint16 max_num_len,
        kal_uint16 max_mail_len)
{
    /***********************************
    * Actually, we should judge if the type is PHB_PHONEBOOK
    * and the storage is PHB_STORAGE_NVRAM. If true, set the following variables
    * But, Since we only need to save ME information
    * we just ignore the judgment currently.
    * If needed in the future, we should add the judgement
    ***********************************/
    #if defined(__PHB_STORAGE_BY_MMI__)
    kal_uint8 sim_id;
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;

    rmmi_comm_ptr->phb_me_total = total;
    rmmi_comm_ptr->phb_me_used = used;
    rmmi_comm_ptr->phb_me_free = free;
    rmmi_comm_ptr->phb_me_max_name_len = max_name_len;
    rmmi_comm_ptr->phb_me_max_num_len = max_num_len;
    rmmi_comm_ptr->phb_me_max_email_len = max_mail_len;


    for (sim_id=0; sim_id<L4_MAX_SIM_NUM; sim_id++)
    {    
        l4c_cntxt_g[sim_id].phb_ready_flag = KAL_TRUE;
    }

    #endif /*__PHB_STORAGE_BY_MMI__*/
}

void l4c_mmi_phb_update_status_res_req(
        kal_uint8 type, 
        kal_uint8 storage, 
        kal_uint16 total, 
        kal_uint16 used, 
        kal_uint16 free)
{
    /***********************************
    * Actually, we should judge if the type is PHB_PHONEBOOK
    * and the storage is PHB_STORAGE_NVRAM. If true, set the following variables
    * But, Since we only need to save ME information
    * we just ignore the judgment currently.
    * If needed in the future, we should add the judgement
    ***********************************/
    #if defined(__PHB_STORAGE_BY_MMI__)
    rmmi_common_context_struct *rmmi_comm_ptr = RMMI_COMM_PTR;
    
    rmmi_comm_ptr->phb_me_total = total;
    rmmi_comm_ptr->phb_me_used = used;
    rmmi_comm_ptr->phb_me_free = free;

    #endif
}

void l4c_mmi_read_clog_res_req(
        kal_uint8 phb_src, 
        l4c_result_struct *result, 
        kal_uint8 type, 
        kal_uint16 index, 
        l4c_phb_ln_entry_struct *entry)
{
    #ifdef __CLOG_STORAGE_BY_MMI__
    
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    // MMI should update last number by themselvs 
    // instead of using the following statments
    // since MMI would not use our interface to read call log
    /*if (index == 1)
    {
        #if defined(__VOIP__) || defined(__3G_VIDEO_CALL__)
        l4c_phb_set_last_number_dialed( entry->address.tel, type, entry->address_type);
        #else 
        l4c_phb_set_last_number_dialed( entry->tel, type, 0);
        #endif 
    }*/
        
    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;;


    rmmi_ptr->current_src = phb_src;
    if (result->flag == L4C_OK)
    {
        l4c_phb_read_ln_entry_rrsp(1, rmmi_ptr->cpbr_ln_base_index, entry);
    }
    rmmi_ptr->cpbr_ln_base_index++;

    // set result->flag as L4C_OK if the error cause is PHB_ERRNO_READ_EMPTY
    // this means that the entry is empty
    if (result->flag==L4C_ERROR && result->cause==PHB_ERRNO_READ_EMPTY)
    {
        result->flag = L4C_OK;
    }

    if (result->flag==L4C_OK && rmmi_ptr->cpbr_ln_base_index <= rmmi_ptr->cpbr_range[1])
    {
        #ifdef __PHB_STORAGE_LA__
        if (rmmi_ptr->phb_storage_type == RMMI_PHB_LA && index >= rmmi_ptr->phb_ln_total[type])
        {
            index = 0xffff;
            switch(type)
            {
                case PHB_LND:
                    type = PHB_LNM;
                    break;
                case PHB_LNM:
                    type = PHB_LNR;
                    break;
                case PHB_LNR:
                    type = PHB_LN_NONE;
                    break;
            }
        }
        #endif

        if (type != PHB_LN_NONE)
        {
            l4c_mmi_read_clog_entry_req(phb_src, type, index+1);
            return;
        }
    }
    l4c_phb_general_rrsp(result);
    
    #endif
}

void l4c_mmi_write_clog_res_req(
        kal_uint8 phb_src, 
        l4c_result_struct *result, 
        kal_uint16 index)
{
    #ifdef __CLOG_STORAGE_BY_MMI__
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->current_src = phb_src;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;;

    l4c_phb_general_rrsp(result);
    #endif
}

void l4c_mmi_delete_clog_res_req(
        kal_uint8 phb_src, 
        l4c_result_struct *result, 
        kal_uint16 index)
{
    #ifdef __CLOG_STORAGE_BY_MMI__
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->current_src = phb_src;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;;

    l4c_phb_general_rrsp(result);
    #endif
}

void l4c_mmi_clog_update_status_res_req(
        kal_uint8 type,  
        kal_uint16 total, 
        kal_uint16 used, 
        kal_uint16 free, 
        kal_bool with_first_entry,
        l4c_phb_ln_entry_struct *first_entry)
{
    #ifdef __CLOG_STORAGE_BY_MMI__
    l4c_number_struct empty_number;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->phb_ln_total[type] = total;
    rmmi_ptr->phb_ln_used[type] = used;
    rmmi_ptr->phb_ln_free[type] = free;

    if (type == PHB_LND && with_first_entry)
    {
        #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed(&first_entry->address.tel, type, first_entry->address_type);
        #else 
        l4c_phb_set_last_number_dialed(&first_entry->tel, type, 0);
        #endif
    }
    else if (type == PHB_LND && used == 0) 
    {
        kal_mem_set(&empty_number, 0, sizeof(l4c_number_struct));
        
        #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed(&empty_number, type, first_entry->address_type);
        #else 
        l4c_phb_set_last_number_dialed(&empty_number, type, 0);
        #endif
    }
    #endif /* __CLOG_STORAGE_BY_MMI__ */
}

#ifdef __CLOG_STORAGE_BY_MMI__
/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_read_clog_entry_req
 * DESCRIPTION
 * this function is used to send MSG_ID_L4C_MMI_READ_CLOG_REQ_IND to read call log from MOD_MMI
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the requested call log type
 *  seq_id      [IN]        the sequence id which indicates the memory block of call log
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_mmi_read_clog_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint16 index)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;

    l4c_mmi_read_clog_req_lind(src_id, type, index);

    l4c_ptr->route_thru_lmmi = KAL_TRUE;
    l4c_ptr->route_thru_lmmi_user = src_id;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_write_clog_entry_req
 * DESCRIPTION
 * this function is used to send MSG_ID_L4C_MMI_WRITE_CLOG_REQ_IND to read call log from MOD_MMI
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the written type
 *  list          [IN]        the data to be written
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_mmi_write_clog_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint16 index, l4c_phb_ln_entry_struct *entry)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;

    l4c_mmi_write_clog_req_lind(src_id, type, index, entry);

    l4c_ptr->route_thru_lmmi = KAL_TRUE;
    l4c_ptr->route_thru_lmmi_user = src_id;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_delete_clog_entry_req
 * DESCRIPTION
 * this function is used to send MSG_ID_L4C_MMI_DELETE_CLOG_REQ_IND to read call log from MOD_MMI
 *  
 * PARAMETERS
 *  src_id      [IN]        the requested source id
 *  type        [IN]        the written type
 *  list          [IN]        the data to be written
 * RETURNS
 *  KAL_TRUE or KAL_FALSE : if the request is sent or not
 *****************************************************************************/
kal_bool l4c_mmi_delete_clog_entry_req(kal_uint8 src_id, kal_uint8 type, kal_uint16 index)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    l4c_mmi_delete_clog_req_lind(src_id, type, index);

    l4c_ptr->route_thru_lmmi = KAL_TRUE;
    l4c_ptr->route_thru_lmmi_user = src_id;

    return KAL_TRUE;
}

#endif /* __CLOG_STORAGE_BY_MMI__ */


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_read_sim_ln_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_READ_SIM_LN_REQ to the PHB
 *  
 * PARAMETERS
 * src_id		       [IN]     the requested source id
 * type                 [IN]     the type of call log, refer to phb_ln_type_enum
 * record_index      [IN]     the index of the record
 *    
 * RETURNS
 *   KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_read_sim_ln_req(kal_uint8 src_id, kal_uint8 type, kal_uint16 record_index)
{
    #ifdef __PHB_ACCESS_SIM_LN__
    l4cphb_read_sim_ln_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBR_SIM_LN) == KAL_TRUE)
        return KAL_FALSE;

    param_ptr = (l4cphb_read_sim_ln_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_read_sim_ln_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    param_ptr->record_index = record_index;
    param_ptr->type = type;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_READ_SIM_LN_REQ, param_ptr, NULL);   

    /*******************
    * as normal operation to the LN
    * we don't set user action here
    ********************/
    //l4c_set_user_action(L4C_PHB, src_id, CPBR_SIM_LN);
    #endif
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_write_sim_ln_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_WRITE_SIM_LN_REQ to the PHB
 *  
 * PARAMETERS
 * src_id		       [IN]     the requested source id
 * type                 [IN]     the type of call log, refer to phb_ln_type_enum
 * entry                [IN]     the call log data to be written
 *    
 * RETURNS
 *   KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_write_sim_ln_req(kal_uint8 src_id, kal_uint8 type, l4c_phb_ln_entry_struct  *entry)
{
    #ifdef __PHB_ACCESS_SIM_LN__
    l4cphb_write_sim_ln_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBW_SIM_LN) == KAL_TRUE)
        return KAL_FALSE;

    param_ptr = (l4cphb_write_sim_ln_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_write_sim_ln_req_struct), TD_RESET);
    
    param_ptr->src_id = src_id;    
    param_ptr->type = type;

    #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed( &entry->address.tel, param_ptr->type, entry->address_type);
    #else 
        l4c_phb_set_last_number_dialed( &entry->tel, param_ptr->type, 0);
    #endif 

    l4c_phb_setup_ln_entry(entry, &param_ptr->entry);    

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_WRITE_SIM_LN_REQ, param_ptr, NULL);   

    /*************************
    * as normal operation to the LN
    * we don't set user action here
    *************************/
    //l4c_set_user_action(L4C_PHB, src_id, CPBW_SIM_LN);

    #endif 
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_delete_sim_ln_req
 * DESCRIPTION
 *  This function is used to send MSG_ID_L4CPHB_DELETE_SIM_LN_REQ to the PHB
 *  
 * PARAMETERS
 * src_id		       [IN]     the requested source id
 * type                 [IN]     the type of call log, refer to phb_ln_type_enum
 *    
 * RETURNS
 *   KAL_TRUE or KAL_FALSE : the request is sent or not
 *****************************************************************************/
kal_bool l4c_phb_delete_sim_ln_req(kal_uint8 src_id, kal_uint8 type)
{
    #ifdef __PHB_ACCESS_SIM_LN__
    l4cphb_delete_sim_ln_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBD_SIM_LN) == KAL_TRUE)
        return KAL_FALSE;

    param_ptr = (l4cphb_delete_sim_ln_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_delete_sim_ln_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    param_ptr->type = type;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_DELETE_SIM_LN_REQ, param_ptr, NULL);   

    /*******************
    * as normal operation to the LN
    * we don't set user action here
    ********************/
    //l4c_set_user_action(L4C_PHB, src_id, CPBD_SIM_LN);
    #endif
    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_ln_type_info_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  type                [IN]        
 *    
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_phb_get_ln_type_info_req (kal_uint8 type, kal_uint8 storage)
{
    #ifdef __PHB_ACCESS_SIM_LN__
    phb_errno_enum result;
    l4cphb_file_info_struct info;

    // call PHB get type info function
    result = l4c_phb_get_ln_file_info(type, (phb_storage_enum)storage, &info);

    l4c_phb_get_ln_type_info_lrsp(
        type,
        (kal_bool) result,
        info.max_num_len*2,
        info.max_name_len,
        info.total_num - info.free_num,
        info.total_num,
        info.ext_free_num
    );
	
    #endif /* __PHB_ACCESS_SIM_LN__ */
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_read_usim_req
 * DESCRIPTION
 *  this function is used to send primitive to L4PHB to read usim PHB additional file data
 * PARAMETERS
 *  src_id              [IN]        
 *  type                [IN]          PHB EF type
 *  occurrence       [IN]          index of EF files
 *  record_index     [IN]          index of entries in the EF file
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
kal_bool l4c_phb_read_usim_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 occurrence, kal_uint16 record_index)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__
    l4cphb_read_usim_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBR_EXE) == KAL_TRUE)
    {
        l4c_result_struct result;
        result.flag = L4C_ERROR;
        l4c_phb_read_usim_lrsp(&result, type, occurrence, record_index, NULL);
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_read_usim_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_read_usim_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    param_ptr->type = (phb_type_enum)type;
    param_ptr->record_index = record_index;
    param_ptr->occurrence = occurrence;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_READ_USIM_REQ, param_ptr, NULL);   

    /*******************
    * as normal read operation of PHB
    * we don't set user action here
    ********************/
    //l4c_set_user_action(L4C_PHB, src_id, CPBR_EXE);
    #endif
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_write_usim_req
 * DESCRIPTION
 *  this function is used to send primitive to L4PHB to write usim PHB additional file data
 * PARAMETERS
 *  src_id              [IN]        
 *  type                [IN]          PHB EF type
 *  occurrence       [IN]          index of EF files
 *  record_index     [IN]          index of entries in the EF file
 *  entry               [IN]          the data to be written
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
kal_bool l4c_phb_write_usim_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 occurrence, kal_uint16 record_index, l4c_phb_usim_entry *entry)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__
    l4cphb_write_usim_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBW_EXE) == KAL_TRUE)
    {
        l4c_result_struct result;
        result.flag = L4C_ERROR;
        l4c_phb_write_usim_lrsp(&result, type, occurrence, record_index, NULL);
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_write_usim_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_write_usim_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    param_ptr->type = (phb_type_enum)type;
    param_ptr->record_index = record_index;
    param_ptr->occurrence = occurrence;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_WRITE_USIM_REQ, param_ptr, (kal_uint8 *)&entry->field);   

    l4c_set_user_action(L4C_PHB, src_id, CPBW_EXE);
    #endif
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_delete_usim_req
 * DESCRIPTION
 *  this function is used to send primitive to L4PHB to delete usim PHB additional file data
 * PARAMETERS
 *  src_id              [IN]        
 *  type                [IN]          PHB EF type
 *  occurrence       [IN]          index of EF files
 *  record_index     [IN]          index of entries in the EF file
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
kal_bool l4c_phb_delete_usim_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 occurrence, kal_uint16 record_index)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__
    l4cphb_delete_usim_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBD_EXE) == KAL_TRUE)
    {
        l4c_result_struct result;
        result.flag = L4C_ERROR;
        l4c_phb_delete_usim_lrsp(&result, type, occurrence, record_index);
        return KAL_FALSE;
    }

    param_ptr = (l4cphb_delete_usim_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_delete_usim_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    param_ptr->type = (phb_type_enum)type;
    param_ptr->record_index = record_index;
    param_ptr->occurrence = occurrence;

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_DELETE_USIM_REQ, param_ptr, NULL);   
    
    l4c_set_user_action(L4C_PHB, src_id, CPBD_EXE);
    #endif
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_check_write_usim_entry_req
 * DESCRIPTION
 *  this function is used to send primitive to L4PHB to check if 
 *  we could write the specified EF files or not
 * PARAMETERS
 *  src_id              [IN]        
 *  file_bitmap        [IN]         specified EF files
 *  record_index     [IN]          index of ADN entry
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
kal_bool l4c_phb_check_write_usim_entry_req(
        kal_uint8 src_id,
        kal_uint8 file_bitmap[PHB_TYPE_TOTAL],
        kal_uint16 record_index)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__
    l4cphb_check_write_usim_entry_req_struct *param_ptr;

    if (is_phb_cmd_conflict(src_id, CPBW_USIM_CHECK) == KAL_TRUE)
        return KAL_FALSE;

    param_ptr = (l4cphb_check_write_usim_entry_req_struct*)
        construct_local_para( (kal_uint16) sizeof(l4cphb_check_write_usim_entry_req_struct), TD_RESET);

    param_ptr->src_id = src_id;    
    kal_mem_cpy(param_ptr->file_bitmap, file_bitmap, PHB_TYPE_TOTAL);
    param_ptr->record_index = record_index;
    

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_CHECK_WRITE_USIM_ENTRY_REQ, param_ptr, NULL);   
    
    l4c_set_user_action(L4C_PHB, src_id, CPBW_USIM_CHECK);

    #endif

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_read_additional_res_req
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_MMI_L4C_READ_ADDITIONAL_RES_REQ
 * PARAMETERS
 *  phb_src            [IN]        the AT source
 *  result               [IN]         
 *  type                [IN]         PHB type
 *  storage            [IN]         PHB storage
 *  occurrence       [IN]         index of EF files
 *  record_index     [IN]         index of entries in the EF file
 *  entry               [IN]         read data
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
void l4c_mmi_read_additional_res_req(
            kal_uint8 phb_src,
            l4c_result_struct *result,
            phb_type_enum type,
            phb_storage_enum storage,
            kal_uint8 occurrence,
            kal_uint16 record_index,
            l4c_phb_usim_entry *entry)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    #ifdef __OP01__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 buffer[PHB_MAX_EMAIL_LENGTH];

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;

    if (type == PHB_EMAIL)
    {
        //entry->field.email.email_address[entry->field.email.email_length] = '\0';
        rmmi_gsm7bit_to_IRA(
                entry->field.email.email_address, buffer, 
                entry->field.email.email_length, PHB_MAX_EMAIL_LENGTH);
        rmmi_tail_string_comma_rrsp((kal_char*)buffer);

        rmmi_ptr->cpbr_range[0]++;
        if (rmmi_ptr->cpbr_range[0] <= rmmi_ptr->cpbr_range[1]) 
        {
            rmmi_ptr->scpbr_num_index = 0; //mtk02514_revise
            l4c_phb_get_entry_for_op01_req(
                    phb_src, PHB_PHONEBOOK, storage, 0, rmmi_ptr->cpbr_range[0]);
            return;
        }

        result->flag = L4C_OK;
        l4c_phb_general_rrsp(result);
    }
    else
    {// for debug only
        kal_trace(TRACE_WARNING, WARNING_L4C_ERROR);
    }
    #endif

    #endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_write_additional_res_req
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_MMI_L4C_WRITE_ADDITIONAL_RES_REQ
 * PARAMETERS
 *  phb_src            [IN]        the AT source
 *  result               [IN]         
 *  type                [IN]         PHB type
 *  storage            [IN]         PHB storage
 *  occurrence       [IN]         index of EF files
 *  record_index     [IN]         index of entries in the EF file
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
void l4c_mmi_write_additional_res_req(
            kal_uint8 phb_src,
            l4c_result_struct *result,
            phb_type_enum type,
            phb_storage_enum storage,
            kal_uint8 occurrence,
            kal_uint16 record_index)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    #ifdef __OP01__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = phb_src;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;

    l4c_phb_general_rrsp(result);

    #endif
    #endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_delete_additional_res_req
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_MMI_L4C_DELETE_ADDITIONAL_RES_REQ
 * PARAMETERS
 *  phb_src            [IN]        the AT source
 *  result               [IN]         
 *  type                [IN]         PHB type
 *  storage            [IN]         PHB storage
 *  occurrence       [IN]         index of EF files
 *  record_index     [IN]         index of entries in the EF file
 * RETURNS
 *  KAL_TRUE or KAL_FALSE
 *****************************************************************************/
void l4c_mmi_delete_additional_res_req(
            kal_uint8 phb_src,
            l4c_result_struct *result,
            phb_type_enum type,
            phb_storage_enum storage,
            kal_uint8 occurrence,
            kal_uint16 record_index)
{
    #ifdef __PHB_USIM_ADDITIONAL_SUPPORT__
    #ifdef __OP01__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    rmmi_ptr->current_src = phb_src;

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    l4c_ptr->route_thru_lmmi_user = L4C_NO_USER;;

    l4c_phb_general_rrsp(result);

    #endif
    #endif

}

#endif /* __MOD_PHB__ */ 

