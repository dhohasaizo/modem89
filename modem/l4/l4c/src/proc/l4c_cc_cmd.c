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
 * L4C_CC_CMD.C
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_CC_CMD_C
#ifdef __MOD_CSM__

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

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
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
//#include "l4c_ft.h"

//#include "l4_defs.h"
//#include "l4c_aux_struct.h"
#include "l3_inc_enums.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"

#include "csmcc_atfunc.h"
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
//#include "l4c2csm_ss_struct.h"
#include "csmcc_defs.h"
#include "csmcc_common_enums.h"
#ifdef __MOD_UEM__
//#include "l4c2uem_struct.h"
#endif 
#ifdef __MOD_SMU__
#include "l4c2smu_struct.h"
#ifdef __AOC_SUPPORT__
#include "l4c_sim_cmd.h"
#endif
#endif 
#ifdef __MOD_PHB__
//#include "l4c2phb_enums.h"
#include "l4c2phb_struct.h"
#endif /* __MOD_PHB__ */ 
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
#endif 
//#include "l4c2abm_struct.h"
#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
#include "ppp_l4_enums.h"

//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_local.h"

//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "l4c2tcm_struct.h"
//#include "l4c2tcm_func.h"
//#include "l4c2abm_struct.h"
//#include "l4c_gprs_cmd.h"
#endif /* __MOD_TCM__ */ 

#include "l4c_utility.h"
//#include "keypad_sw.h"
#include "lmmi_ind.h"

#include "l4c_cc_cmd.h"
#include "ppp_l4_enums.h"
//#include "l4crac_enums.h"

#ifdef __CSD_FAX__
#include "csm_data_enums.h"
//#include "l4c2t30_enums.h"
#endif /* __CSD_FAX__ */ 

//#include "l4c_ss_parse.h"

//#include "csmcc_bc_types.h"
//#include "mncc_struct.h"
#include "csmcc_types.h"

//#include "l4c_ss_parse.h"
//#include "med_struct.h"
#include "l4a.h"
//#include "mmi_msg_struct.h"

#include "sat_def.h"

#include "rmmi_rsp.h"
#include "lmmi_rsp.h"
#include "rmmi_ind.h"
#include "rmmi_utility.h"
#include "rmmi_rspfmttr.h"
#include "l4c_cc_msg.h"
#include "l4_trc.h"   
//#include "rmmi_validator.h"
#include "rmmi_parser.h"
#include "csmcc_utility.h"

//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
//#include "uart_sw.h"
#include "dcl.h"
#include "l4c_nw_cmd.h"
#include "custom_ecc.h"
#include "l4crac_enums.h"

#include "l4_msgid.h"


extern kal_uint8 l4crac_get_nvram_rat_mode(void);

extern kal_bool l4ccsm_cc_get_hold_call(kal_uint8 *call_id);
extern kal_bool phb_is_sat_number_ecc(l4_addr_bcd_struct *tel_number);
extern kal_uint8 cm_max_retry_count(void);
extern kal_uint8 custom_wild_char(void);
extern kal_uint8 pppl4c_get_error_type(void);
#if defined(__TC01__)  && !defined(EXTERNAL_MMI) && defined(__RMMI_EXTEND_CUSTOM_CMD__) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __GEMINI__
extern void csmcc_context_selection(kal_uint8 sim_interface);
#endif

extern kal_bool custom_phb_xmgnt_approve_fdn (
        kal_uint8 *tel_number, /* BCD coding, include TON/NPI in the first byte */
        kal_uint8 num_length,
        kal_uint8 sim_id,
        l4c_operation_type_enum oper,
        kal_uint16 *cause);

extern kal_bool custom_fill_ecc_category(void);

#ifdef __SAT__
extern kal_uint8 custom_l4c_sat_ton_npi_transform(kal_uint8 raw_data);
#endif

#ifdef __MOD_SMU__
/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_reset_acm_req
 * DESCRIPTION
 *  This function is to reset acm
 * PARAMETERS
 *  src_id      [IN]            
 *  pin         [IN]             
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_exe_reset_acm_req(kal_uint8 src_id, kal_uint8 *pin)
{
#ifdef __AOC_SUPPORT__
    l4ccsm_cc_acm_reset_req_struct *param_ptr;

    if (is_cmd_conflict(src_id, CACM_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    if ((src_id == LMMI_SRC) || (pin == NULL))
    {
        param_ptr = (l4ccsm_cc_acm_reset_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_acm_reset_req_struct),
                                                        TD_RESET);

        param_ptr->src_id = src_id;

        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_ACM_RESET_REQ, param_ptr, NULL, 0);
    }
    else
    {
        l4csmu_security_req_struct *param_ptr;

	 if (is_smu_cmd_conflict(src_id, CACM_EXE) == KAL_TRUE)
	 {
        	return KAL_FALSE;	 
	 }

	 l4c_set_user_action(L4C_SMU, src_id, CACM_EXE);

        param_ptr = (l4csmu_security_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4csmu_security_req_struct),
                                                    TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->type = TYPE_CHV2;
        param_ptr->op = VERIFY;

        //count = convert_to_bcd(pin, (kal_uint8*)param_ptr->key1, 8);
        l4c_sim_pin_convert((kal_uint8*) param_ptr->key1, (kal_uint8*) pin);

        l4c_send_msg_to_smu(MSG_ID_L4CSMU_SECURITY_REQ, param_ptr);
    }

    L4C_PTR->cc_current_action[src_id] = CACM_EXE;

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_acm_max_req
 * DESCRIPTION
 *  This function is to set acmmax
 * PARAMETERS
 *  src_id      [IN]            
 *  pin         [IN]             
 *  val         [IN]            
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_set_acm_max_req(kal_uint8 src_id, kal_uint8 *pin, kal_uint32 val)
{
#ifdef __AOC_SUPPORT__
    l4ccsm_cc_acmmax_set_req_struct *param1_ptr;

    if (is_cmd_conflict(src_id, CAMM_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param1_ptr = (l4ccsm_cc_acmmax_set_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_acmmax_set_req_struct),
                                                        TD_RESET);

    param1_ptr->src_id = src_id;
    param1_ptr->acmmax = val;

    if ((src_id == LMMI_SRC) || (pin == NULL))
    {
        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ, param1_ptr, NULL, 0);
    }
    else
    {
        l4csmu_security_req_struct *param_ptr;

	 if (is_smu_cmd_conflict(src_id, CAMM_EXE) == KAL_TRUE)
	 {
        	return KAL_FALSE;	 
	 }

	 l4c_set_user_action(L4C_SMU, src_id, CAMM_EXE);
	 
        param_ptr = (l4csmu_security_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4csmu_security_req_struct),
                                                    TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->type = TYPE_CHV2;
        param_ptr->op = VERIFY;

        //count = convert_to_bcd(pin, (kal_uint8*)param_ptr->key1, 8);
        l4c_sim_pin_convert((kal_uint8*) param_ptr->key1, (kal_uint8*) pin);

        l4c_send_msg_to_smu(MSG_ID_L4CSMU_SECURITY_REQ, param_ptr);

        L4C_PTR->cc_parameter[src_id].length = sizeof(l4ccsm_cc_acmmax_set_req_struct);
        L4C_PTR->cc_parameter[src_id].data = param1_ptr;
    }

    L4C_PTR->cc_current_action[src_id] = CAMM_EXE;

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}

#endif /* __MOD_SMU__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_inter_working_func_req
 * DESCRIPTION
 *  This function to get iwf
 * PARAMETERS
 *  src_id      [IN]            
 *  iwf         [IN]             
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_get_inter_working_func_req(kal_uint8 src_id, kal_uint8 *iwf)
{
    kal_bool result;

    result = l4ccsm_cc_get_iwf(iwf);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_inter_working_func_req
 * DESCRIPTION
 *  This function is to set iwf
 * PARAMETERS
 *  src_id      [IN]            
 *  iwf         [IN]            
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_set_inter_working_func_req(kal_uint8 src_id, kal_uint8 iwf)
{
    kal_bool result;

    result = l4ccsm_cc_set_iwf(iwf);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_acm_value_req
 * DESCRIPTION
 *  This function is to get acm
 * PARAMETERS
 *  src_id      [IN]            
 *  acm         [IN/OUT]             
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_get_acm_value_req(kal_uint8 src_id, kal_uint32 *acm)
{
#ifdef __AOC_SUPPORT__
    kal_bool result;
    kal_uint32 acm_max;

    result = l4ccsm_cc_get_acm(acm, &acm_max);

    return result;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_acm_max_req
 * DESCRIPTION
 *  This function is to get acmmax
 * PARAMETERS
 *  src_id      [IN]            
 *  acm_max     [IN/OUT]             
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_get_acm_max_req(kal_uint8 src_id, kal_uint32 *acm_max)
{
#ifdef __AOC_SUPPORT__
    kal_bool result;
    kal_uint32 acm;

    result = l4ccsm_cc_get_acm(&acm, acm_max);

    return result;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_ccm_value_req
 * DESCRIPTION
 *  This function is to get ccm
 * PARAMETERS
 *  src_id      [IN]            
 *  ccm         [IN/OUT]             
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_get_ccm_value_req(kal_uint8 src_id, kal_uint32 *ccm)
{
#ifdef __AOC_SUPPORT__
    kal_bool result;

    result = l4ccsm_cc_get_ccm(0xff, ccm);

    return result;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_reset_ccm_req
 * DESCRIPTION
 *  This function is to reset ccm
 * PARAMETERS
 *  src_id    [IN]           
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_exe_reset_ccm_req(kal_uint8 src_id)
{
#if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__) && defined(__AOC_SUPPORT__)
    l4ccsm_cc_last_ccm_reset_req_struct *param_ptr = NULL;

    param_ptr = (l4ccsm_cc_last_ccm_reset_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4ccsm_cc_last_ccm_reset_req_struct),
                                                            TD_RESET);

    param_ptr->src_id = src_id;	

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_LAST_CCM_RESET_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_reset_ccm_req
 * DESCRIPTION
 *  This function is to reset ccm
 * PARAMETERS
 *  src_id    [IN]           
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
void l4c_cc_send_csm_call_abort_req(void)
{

    l4ccsm_cc_abort_call_req_struct *param_ptr = NULL;

    param_ptr = (l4ccsm_cc_abort_call_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4ccsm_cc_abort_call_req_struct),
                                                            TD_RESET);

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_ABORT_CALL_REQ, param_ptr, NULL, 0);

}



/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_bearer_service_req
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  src_id      [IN]            
 *  speed       [IN] csmcc_bearer_speed_enum           
 *  name        [IN] csmcc_bearer_name_enum           
 *  ce          [IN] csmcc_bearer_ce_enum           
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cc_set_bearer_service_req(kal_uint8 src_id, kal_uint8 speed, kal_uint8 name, kal_uint8 ce)
{
    kal_bool result;

    result = l4ccsm_cc_set_bearer_service_type(speed, name, ce);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_bearer_service_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  speed       [IN/OUT] csmcc_bearer_speed_enum        
 *  name        [IN/OUT] csmcc_bearer_name_enum        
 *  ce          [IN/OUT] csmcc_bearer_ce_enum        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_bearer_service_req(kal_uint8 src_id, kal_uint8 *speed, kal_uint8 *name, kal_uint8 *ce)
{
    kal_bool result;

    result = l4ccsm_cc_get_bearer_service_type(speed, name, ce);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_line_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  line        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_set_line_req(kal_uint8 src_id, kal_uint8 line)
{
    L4C_PTR->line_num = line;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_cug_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  index       [IN]    csmcc_cug_index_enum    
 *  mode        [IN]    csmcc_cug_temporary_mode_enum   
 *  info        [IN]    csmcc_cug_suppress_enum    
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_set_cug_params_req(kal_uint8 src_id, kal_uint8 index, kal_uint8 mode, kal_uint8 info)
{
    kal_bool result;

    result = l4ccsm_cc_set_cug_param(mode, index, info);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_cug_params_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  index       [IN/OUT] csmcc_cug_index_enum        
 *  mode        [IN/OUT] csmcc_cug_temporary_mode_enum        
 *  info        [IN/OUT] csmcc_cug_suppress_enum        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_cug_params_req(kal_uint8 src_id, kal_uint8 *index, kal_uint8 *mode, kal_uint8 *info)
{
    kal_bool result;

    result = l4ccsm_cc_get_cug_param(mode, index, info);

    return result;
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_chld_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  opcode      [IN]        
 *  call_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_chld_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 call_id)
{
    l4ccsm_cc_crss_req_struct *param_ptr;
    kal_uint8 action;
#if defined(__TCPIP_OVER_CSD__)
    kal_uint8 temp_call_id;
    kal_uint8 old_action;
#endif 
    kal_uint8 id;
    l4c_call_entry_struct call_entry;
    kal_uint8 mt_call_id;
    kal_bool ret_val;
    kal_uint8 pre_src, temp_src; //MAUI_02574001
#ifdef __CSD_FAX__
    kal_uint8 fclass_mode, serv_class;
#endif 
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#ifdef __CTM_SUPPPORT__
    /* Johnny: at should use CSMCC_REL_ACTIVE_AND_ACCEPT (chld=1) instead of CSMCC_HOLD_ACTIVE_AND_ACCEPT (chld=2) */
    if (l4c_ptr->is_ctm_connected == KAL_TRUE && src_id == RMMI_SRC
        && (opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT || opcode == CSMCC_ADD_HELD_CALL))
    {
        return KAL_FALSE;
    }
#endif /* __CTM_SUPPPORT__ */ 

    if (opcode == CSMCC_REL_HELD_OR_UDUB && l4c_ptr->cc_current_action[src_id] == CHLD_EXE)
    {
        if (src_id == LMMI_SRC)
        {
            l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
        }
        else
        {
            rmmi_ptr->current_src = src_id;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }
        return KAL_TRUE;
    }

    ret_val = l4ccsm_cc_get_mt_call(&mt_call_id);
    if (ret_val == KAL_TRUE)
    {
        l4ccsm_cc_get_call_info(mt_call_id, &call_entry, NULL);

         //mtk01616_080730: new crss op ACCEPT_WAITING might be used by MMI    
        if ((src_id == LMMI_SRC) && ((opcode == CSMCC_REL_ACTIVE_AND_ACCEPT) ||(opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING))
            && ((call_entry.call_type == CSMCC_DATA_CALL) || (call_entry.call_type == CSMCC_FAX_CALL)))
        {   /* LMMI can not anwer the DATA or FAX call */
            return KAL_FALSE;
        }
    #ifdef __CSD_FAX__      /* if the waiting call is fax call, checking if the service class, if can not be accpeted, return ERROR to AT+CHLD=1 */
        if ((call_entry.call_mode == ALT_FAX_FAX_CALL || call_entry.call_mode == SINGLE_FAX_CALL ||
             call_entry.call_mode == ALT_FAX_VOICE_CALL) && (call_entry.call_state == CLCC_CALL_WAITING) &&
            (opcode == CSMCC_REL_ACTIVE_AND_ACCEPT))
        {
            l4ccsm_cc_get_fclass_mode(&fclass_mode);
            serv_class = check_g3_service_class_code(fclass_mode);
            if (serv_class == G3_SERV_CLASS_0)
            {
                return KAL_FALSE;
            }
        }
    #endif /* __CSD_FAX__ */ 
    }

    switch (opcode)
    {
        case CSMCC_REL_ALL_EXCEPT_WAITING_CALL:
        case CSMCC_REL_ALL:
        case CSMCC_REL_SPECIFIC_CALL:
        case CSMCC_REL_SPECIFIC_ACTIVE_CALL:
        case CSMCC_REL_ACTIVE:
        case CSMCC_REL_HELD:
            action = ATH_EXE;
            rmmi_ptr->ring_count = 0;
            break;
        default:
            l4c_ptr->crss_opcode = opcode;
            action = CHLD_EXE;
            break;
    }
    if (is_cmd_conflict(src_id, action) == KAL_TRUE)
    {
        //mtk01616_090323: MMI shall not expect chld_rsp and shall not disconnect call mixed with other opcode
#if defined(__CONTINGOUS_CALL_DISCCONNECT_SUPPORT__)        
        if ((l4c_ptr->cc_current_action[src_id] == ATH_EXE) && (opcode == CSMCC_REL_SPECIFIC_CALL))
        {
            kal_brief_trace(TRACE_INFO, INFO_CONTINGOUS_CALL_DISC_REQUEST,call_id);            
        }
        else		
#endif	
        {
            if ((l4c_ptr->cc_current_action[src_id] == action) && (action == ATH_EXE))
            {
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
                }
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                }
                return KAL_TRUE;
            }
            else if ((src_id == L4C_SRC) && (action == ATH_EXE) && 
                (l4c_search_all_src_ext(l4c_current_mod_id, CHLD_EXE, &pre_src) == KAL_TRUE))
            {
                /* MAUI_02574001: SIM disconnect while other source is in CHLD_EXE
                    1.SIM disconnect will overwrite the CHLD_EXE
                    2.return fail to the CHLD_EXE source and reset its action
                */
                if (pre_src == LMMI_SRC)
                {
                    l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_CMD_CONFLICT,l4c_ptr->crss_opcode);
                }
                else
                {
                    temp_src = rmmi_ptr->current_src;
                    rmmi_ptr->current_src = pre_src;
                    l4c_general_rrsp(KAL_FALSE, SIM_FAILURE);
                    rmmi_ptr->current_src = temp_src;
                }
                l4c_ptr->cc_current_action[pre_src] = L4C_NO_ACTION;
            }
            else
            {
                //mtk01616_080720: prevent l4a return false result without opcode information
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_CMD_CONFLICT, opcode);
                    return KAL_TRUE;
                }
	            else
                {
                    return KAL_FALSE;
                }
            }
        }
    }

    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    if (action == ATH_EXE)
    {
    #if defined(__TCPIP_OVER_CSD__)
        if ((l4c_ptr->cc_current_action[src_id] == ABM_ACT)
            || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[src_id] == PPP_ACT))
        {
            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
        }
    #endif 

        /*mtk01616_090323: only some chld_req with ath action can clear retry */
        if((opcode == CSMCC_REL_ALL) || 
           (opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL) ||
           (opcode == CSMCC_REL_SPECIFIC_CALL && (call_id == l4c_ptr->mo_call_id)))
        {
			for (id = LMMI_SRC; id < RMMI_ALL; id++)
            {
                if (((l4c_ptr->retry_cc == KAL_TRUE) &&
                     (l4c_ptr->retry_src_id == id)) && 
                     ((l4c_ptr->cc_current_action[id] == ATD_EXE) 
                #ifdef __SAT__
                      || (l4c_ptr->cc_current_action[id] == SAT_ATD_EXE)
                #endif	
                #if defined(__TCPIP_OVER_CSD__)
                      || (l4c_ptr->cc_current_action[id] == ABM_ACT)
                      || (l4c_ptr->cc_current_action[id] == ABM_ACT_ECC)
                #endif 
                      || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                      || (l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT) //MAUI_02554068
                      )
                   )
                {
                    kal_bool need_crss = KAL_FALSE;                
					
                    /* check if there's some other call need to disconnect(ex:1A,1MO retry) or retry call is ongoing in CSM again       */
                    if(((opcode == CSMCC_REL_ALL || opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL) && (csmcc_is_any_call_exist()== KAL_TRUE))||
                       ((opcode == CSMCC_REL_SPECIFIC_CALL) && (call_id == l4c_ptr->mo_call_id) &&(l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)))
                    {
                        kal_brief_trace(TRACE_INFO,INFO_CHLD_CLEAR_RETRY,id,l4c_ptr->cc_current_action[id],KAL_TRUE);
                        need_crss = KAL_TRUE;
                    }
                    else
                    {
                        kal_brief_trace(TRACE_INFO,INFO_CHLD_CLEAR_RETRY,id,l4c_ptr->cc_current_action[id],KAL_FALSE);
                    }

                    /* L4C send proper cpi or update_call_state indication for the aborted MO call*/
                    if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
                    {
                        l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);
                    }

                #ifdef __RSAT__ //DUMA00132206
                    if (l4c_ptr->cc_current_action[id] == SAT_ATD_EXE)
                    {
                        //mtk00924: sat setup call should return terminal response by modem
                        sat_setup_call_res_struct *sat_param_ptr = (sat_setup_call_res_struct*) construct_local_para(
                                (kal_uint16) sizeof(sat_setup_call_res_struct), TD_RESET);

                        //for SAT call modem has to return terminal response here
                        kal_mem_set(sat_param_ptr->cmd_detail, 0, 5); //do not have to fill it, SIM module will fill this field
                        sat_param_ptr->res = SAT_USER_CLEAR_DOWN_CALL_BEFORE_CONNECTION_RELEASE;
                        sat_param_ptr->cause = L4C_NO_CAUSE; //STK only cares about cause when res=0x20, 0x21 or 0x39
                        l4c_sat_setup_call_res(sat_param_ptr);
                    }
                #endif /* __RSAT__ */

                    /* clear retry source's queued data and cc_action */
                    l4c_clear_cc_queued_msg(id);

                    if ((l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT) && (need_crss == KAL_FALSE))
                    {
                        /* if need crss == KAL_FALSE, we need to reset enhanced_ecc_id here
                           otherwise, this flag is used in later REL_IND handler to resume RAT
                        */
                        if (l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
                            || l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE) == KAL_TRUE)
                        {
                            l4c_ptr->cc_current_action[id] = ATD_ECC_CHANGE_RAT_ABORT;
                        }
                        else //after SET_RAT_MODE_ATTACH, resume from dereg
                        {
                            l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                            l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                        }
                        l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
                    }
                    else
                    //MAUI_02047707 don't clear here or we will lose the original action
                    if (!((need_crss == KAL_TRUE) && (id == src_id)))
                    {
                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                    }
					
                    /* NO CARRIER for original RMMI MO retry call in other source */	
                    if((id >= RMMI_SRC) && (id != src_id))
                    {
                        l4c_result_struct result;
                        kal_uint8 temp_src;		
					
                        result.flag = L4C_ERROR;               
                        temp_src = rmmi_ptr->current_src;
                        rmmi_ptr->current_src = id;
                        l4c_cc_exe_call_setup_rrsp(result, 0);
                        rmmi_ptr->current_src = temp_src;
                    }				
				
                    if(need_crss == KAL_FALSE)
                    {                
                        l4c_result_struct result;

                        result.flag = L4C_ERROR;
                        result.cause = CM_L4C_GEN_CAUSE;
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                        /* chld rsp for LMMI */
                        if(src_id == LMMI_SRC)
                        {
                            l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
                        }  
				
                        /* chld rsp for RMMI in cmd hdlr */
                        rmmi_ptr->current_src = src_id;
                        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);	

                        return KAL_TRUE;
                    }						
                } 		
            } /* end for */
        }
    #if 0 //MAUI_02445218 CHLD_REQ is for CC operation, don't abort SS
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
            #ifndef __MMI_FMI__ 
/* under construction !*/
            #else
/* under construction !*/
            #endif
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
        l4c_clear_cc_parameter(src_id);
	    l4c_cc_send_csm_call_abort_req();
        
        if ((l4c_ptr->cc_current_action[src_id] == ATD_APP)
    #if defined(__TCPIP_OVER_CSD__)
            || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_APP)
    #endif 
            )
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            if (src_id == LMMI_SRC)
            {
                l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            return KAL_TRUE;
        }
    }
#if defined(__TCPIP_OVER_CSD__)
    old_action = l4c_ptr->cc_current_action[src_id];
#endif
    if ((action != ATH_EXE)
#if defined(__TCPIP_OVER_CSD__)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[src_id] == PPP_ACT)
#endif 
        || (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC) || (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION))
    {
        l4c_ptr->cc_current_action[src_id] = action;
    }

    param_ptr = (l4ccsm_cc_crss_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4ccsm_cc_crss_req_struct),
                                                TD_RESET);

    param_ptr->src_id = src_id;

    if (call_id != CSMCC_INVALID_CALL_ID)
    {
        param_ptr->call_id_present = KAL_TRUE;
    }
    else
    {
        param_ptr->call_id_present = KAL_FALSE;
    }

    /*
     * for CSD call active, but one waitting call incoming, we have to
     * deactive ppp sucessful and then using the original message to cc
     * however, we need to check if the release call is CSD , otherwise
     * we should perform this message as usual
     */

 //mtk01616_080730: new crss op ACCEPT_HELD/WAITING/CCBS might be used by MMI    
#if defined(__TCPIP_OVER_CSD__)
    if ((opcode == CSMCC_REL_ACTIVE_AND_ACCEPT
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_HELD        
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_CCBS        
         || opcode == CSMCC_REL_SPECIFIC_CALL
         || opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL
         || opcode == CSMCC_REL_SPECIFIC_ACTIVE_CALL || opcode == CSMCC_REL_ACTIVE || opcode == CSMCC_REL_ALL))
    {
        l4c_call_entry_struct call_info;

        kal_bool temp_result = KAL_FALSE;

        /* Johnny: MMI send CHLD to L4C after DAIL_IND (MMI send ATH to L4C before it),
           L4C should call l4ccsm_cc_get_active_call() or l4ccsm_cc_get_in_call() to get correct call_id from CSM */
        temp_result = l4ccsm_cc_get_active_call(&temp_call_id);
        if (temp_result == KAL_FALSE)
        {
            temp_result = l4ccsm_cc_get_in_call(&temp_call_id);
        }

        if ((opcode == CSMCC_REL_SPECIFIC_CALL) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            temp_call_id = call_id;
            temp_result = KAL_TRUE;
        }

        if (temp_result == KAL_TRUE)
        {
            temp_result = l4ccsm_cc_get_call_info(temp_call_id, &call_info, NULL);

            if ((temp_result == KAL_TRUE) && (old_action != ABM_ACT && call_info.call_type == CSMCC_CSD_CALL))
            {
                l4c_ptr->cc_current_action[src_id] = CHLD_CSD_DEACT;

                l4c_ppp_csd_deactivate_helper(PPPE_MOBILE_DEACT);

                l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_crss_req_struct);
                l4c_ptr->cc_parameter[src_id].data = param_ptr;

                param_ptr->crss_req = opcode;
                param_ptr->call_id = call_id;

                return KAL_TRUE;
            }
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 

    param_ptr->call_id = call_id;
    param_ptr->crss_req = opcode;

#ifndef __MMI_FMI__
    l4c_cc_call_chld_lind(call_id, opcode);
#endif 

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CRSS_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_hangup_active_call_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_hangup_active_call_req(kal_uint8 src_id)
{
    kal_bool result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    if (is_cmd_conflict(src_id, CHUP_EXE) == KAL_TRUE)
    {
        /* mtk00714 : add error_cause for RMMI */
        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->cmee_err = RMMI_ERR_COMMAND_CONFLICT;
        }
        return KAL_FALSE;
    }
#if defined(__TCPIP_OVER_CSD__)
    if ((l4c_ptr->cc_current_action[src_id] == ABM_ACT) || (l4c_ptr->cc_current_action[src_id] == PPP_ACT))
    {
        l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
    }
#endif 
    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        /* mtk00714 : add error_cause for RMMI */
        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->cmee_err = OPERATION_NOT_ALLOWED_ERR;
        }
        return KAL_FALSE;
    }

    if ((l4c_ptr->retry_cc == KAL_TRUE)
        && ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
#if defined(__TCPIP_OVER_CSD__)
            || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT)
            || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC)
#endif 
        ))
    {
        // abort MO call
        l4c_clear_cc_queued_msg(src_id);
    }

    l4c_clear_cc_queued_msg(src_id);
    if ((l4c_ptr->cc_current_action[src_id] == ATD_APP)
#if defined(__TCPIP_OVER_CSD__)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC)
#endif 
        )
    {
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
	#if 0 //MAUI_01998659
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#endif
        {
            rmmi_ptr->current_src = src_id;
            l4c_cc_exe_hangup_active_call_rrsp();
        }
        return KAL_TRUE;
    }

    result = l4c_cc_exe_disc_aux_req(src_id);
    if (result == KAL_FALSE)
    {
        /* mtk00714 : add error_cause for RMMI */
        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->cmee_err = RMMI_ERR_UNKNOWN;
        }
        return KAL_FALSE;
    }
    else if (
#if defined(__TCPIP_OVER_CSD__)
                (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
                || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) ||
#endif 
                (l4c_ptr->cc_current_action[src_id] == ATD_EXE)
                || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
                || (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION))
    {
        l4c_ptr->cc_current_action[src_id] = CHUP_EXE;
    }

    return KAL_TRUE;
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_chld_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  opcode      [IN]        
 *  call_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_chld_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 call_id)
{
    l4ccsm_cc_crss_req_struct *param_ptr;
    kal_uint8 action;
#if defined(__TCPIP_OVER_CSD__)
    kal_uint8 temp_call_id;
    kal_uint8 old_action;
#endif 
    kal_uint8 id;
    l4c_call_entry_struct call_entry;
    kal_uint8 mt_call_id;
    kal_bool ret_val;
    kal_uint8 pre_src,temp_src; //MAUI_02574001
#ifdef __CSD_FAX__
    kal_uint8 fclass_mode, serv_class;
#endif
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

#ifdef __CTM_SUPPPORT__
    /* Johnny: at should use CSMCC_REL_ACTIVE_AND_ACCEPT (chld=1) instead of CSMCC_HOLD_ACTIVE_AND_ACCEPT (chld=2) */
    if (l4c_ptr->is_ctm_connected == KAL_TRUE && src_id == RMMI_SRC
        && (opcode == CSMCC_HOLD_ACTIVE_AND_ACCEPT || opcode == CSMCC_ADD_HELD_CALL))
    {
        return KAL_FALSE;
    }
#endif /* __CTM_SUPPPORT__ */ 

    if (opcode == CSMCC_REL_HELD_OR_UDUB && l4c_ptr->cc_current_action[src_id] == CHLD_EXE)
    {
        l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
        return KAL_TRUE;
    }

    ret_val = l4ccsm_cc_get_mt_call(&mt_call_id);
    if (ret_val == KAL_TRUE)
    {
        l4ccsm_cc_get_call_info(mt_call_id, &call_entry, NULL);

         //mtk01616_080730: new crss op ACCEPT_WAITING might be used by MMI    
        if ((src_id == LMMI_SRC) && ((opcode == CSMCC_REL_ACTIVE_AND_ACCEPT) || (opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING))            
            && ((call_entry.call_type == CSMCC_DATA_CALL) || (call_entry.call_type == CSMCC_FAX_CALL)))
        {   /* LMMI can not anwer the DATA or FAX call */
            return KAL_FALSE;
        }
    #ifdef __CSD_FAX__      /* if the waiting call is fax call, checking if the service class, if can not be accpeted, return ERROR to AT+CHLD=1 */
        if ((call_entry.call_mode == ALT_FAX_FAX_CALL || call_entry.call_mode == SINGLE_FAX_CALL ||
             call_entry.call_mode == ALT_FAX_VOICE_CALL) && (call_entry.call_state == CLCC_CALL_WAITING) &&
            (opcode == CSMCC_REL_ACTIVE_AND_ACCEPT))
        {
            l4ccsm_cc_get_fclass_mode(&fclass_mode);
            serv_class = check_g3_service_class_code(fclass_mode);
            if (serv_class == G3_SERV_CLASS_0)
            {
                return KAL_FALSE;
            }
        }
    #endif /* __CSD_FAX__ */ 
    }

    switch (opcode)
    {
        case CSMCC_REL_ALL_EXCEPT_WAITING_CALL:
        case CSMCC_REL_ALL:
        case CSMCC_REL_SPECIFIC_CALL:
        case CSMCC_REL_SPECIFIC_ACTIVE_CALL:
        case CSMCC_REL_ACTIVE:
        case CSMCC_REL_HELD:
            action = ATH_EXE;
            rmmi_reset_ring_count();
            break;
        default:
            l4c_ptr->crss_opcode = opcode;
            action = CHLD_EXE;
            break;
    }
    
    //MAUI_01801045
    if ((action == ATH_EXE) && (l4c_ptr->csd_call_end == KAL_TRUE))
    {
        kal_brief_trace(TRACE_INFO, INFO_L4C_LOCAL_DISCONNECT, l4c_ptr->csd_call_end);
        l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_LOCAL_DISCONNECT_CSD, opcode);
        return KAL_TRUE;
    }
    
    if (is_cmd_conflict(src_id, action) == KAL_TRUE)
    {
        //mtk01616_090323: MMI shall not expect chld_rsp and shall not disconnect call mixed with other opcode
#if defined(__CONTINGOUS_CALL_DISCCONNECT_SUPPORT__)        
        if ((l4c_ptr->cc_current_action[src_id] == ATH_EXE) && (opcode == CSMCC_REL_SPECIFIC_CALL))
        {
            kal_brief_trace(TRACE_INFO, INFO_CONTINGOUS_CALL_DISC_REQUEST,call_id);            
        }
        else		
#endif		
        if ((l4c_ptr->cc_current_action[src_id] == action) && (action == ATH_EXE))
        {
            l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
            return KAL_TRUE;
        }

        if ((l4c_ptr->cc_current_action[src_id] == CHLD_CSD_DEACT) && (action == ATH_EXE))
        {
            //reference CRid:628520
            kal_brief_trace(TRACE_INFO, INFO_UCM_END_CSD_CALL_DISC);
        }
        else if ((src_id == L4C_SRC) && (action == ATH_EXE) && 
            (l4c_search_all_src_ext(l4c_current_mod_id, CHLD_EXE, &pre_src) == KAL_TRUE))
        {
            /* MAUI_02574001: SIM disconnect while other source is in CHLD_EXE
               1.SIM disconnect will overwrite the CHLD_EXE
               2.return fail to the CHLD_EXE source and reset its action
            */
            l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_CMD_CONFLICT, l4c_ptr->crss_opcode);
            l4c_ptr->cc_current_action[pre_src] = L4C_NO_ACTION;
        }
        else
        {
            //mtk01616_080720: prevent l4a return false result without opcode information
            if (src_id != L4C_SRC) //MAUI_02574001
            {
                l4c_cc_exe_chld_lrsp(KAL_FALSE, L4C_CMD_CONFLICT, opcode);
            }
            return KAL_TRUE;
        }
    }

    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }
#if defined(__TCPIP_OVER_CSD__)
    old_action = l4c_ptr->cc_current_action[LMMI_SRC]; //MAUI_01812936 later used for checking MO CSD stage
#endif
    if (action == ATH_EXE)
    {
    #if defined(__TCPIP_OVER_CSD__)
        if ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT)
            || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT))
        {
            l4c_call_entry_struct call_entry;
        
            if((opcode == CSMCC_REL_SPECIFIC_CALL) &&
               (l4ccsm_cc_get_call_info(call_id,&call_entry,NULL) == KAL_TRUE) &&
               (call_entry.call_type != CSMCC_CSD_CALL) &&
               (call_id != l4c_ptr->mo_call_id)) //MAUI_01816862 ABM_ACT_ECC shall notify MOD_ABM
            {
                /* MAUI_01830197: prevent mis send abm_disc_ind for non CSD call*/
            }
            else
            {				
                l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
            }
        }
    #endif /* __TCPIP_OVER_CSD__ */

        /*mtk01616_090323: only some chld_req with ath action can clear retry */
        if((opcode == CSMCC_REL_ALL) || 
           (opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL) ||
           (opcode == CSMCC_REL_SPECIFIC_CALL && (call_id == l4c_ptr->mo_call_id)))
        {
            for (id = LMMI_SRC; id < RMMI_ALL; id++)
            {
                if (((l4c_ptr->retry_cc == KAL_TRUE) &&
                     (l4c_ptr->retry_src_id == id)) && 
                     ((l4c_ptr->cc_current_action[id] == ATD_EXE) 
                #ifdef __SAT__
                      || (l4c_ptr->cc_current_action[id] == SAT_ATD_EXE)
                #endif	
                #if defined(__TCPIP_OVER_CSD__)
                      || (l4c_ptr->cc_current_action[id] == ABM_ACT)
                      || (l4c_ptr->cc_current_action[id] == ABM_ACT_ECC)
                #endif 
                      || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                      || (l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT) //MAUI_02554068
                      )
                   )
                {	
                    kal_bool need_crss = KAL_FALSE;                
									
                    /* check if there's some other call need to disconnect(ex:1A,1MO retry) or retry call is ongoing in CSM again. */
                    if(((opcode == CSMCC_REL_ALL || opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL) && (csmcc_is_any_call_exist()== KAL_TRUE))||
                       ((opcode == CSMCC_REL_SPECIFIC_CALL) && (call_id == l4c_ptr->mo_call_id) &&(l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)))
                    {
                        kal_brief_trace(TRACE_INFO,INFO_CHLD_CLEAR_RETRY,id,l4c_ptr->cc_current_action[id],KAL_TRUE);
                        need_crss = KAL_TRUE;
                    }
                    else
                    {
                        kal_brief_trace(TRACE_INFO,INFO_CHLD_CLEAR_RETRY,id,l4c_ptr->cc_current_action[id],KAL_FALSE);
                    }		

                    /* L4C send proper cpi or update_call_state indication for the aborted MO call */
                    if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
                    {
                        l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);
                    }

                #ifdef __RSAT__ //DUMA00132206
                    if (l4c_ptr->cc_current_action[id] == SAT_ATD_EXE)
                    {
                        //mtk00924: sat setup call should return terminal response by modem
                        sat_setup_call_res_struct *sat_param_ptr = (sat_setup_call_res_struct*) construct_local_para(
                                (kal_uint16) sizeof(sat_setup_call_res_struct), TD_RESET);

                        //for SAT call modem has to return terminal response here
                        kal_mem_set(sat_param_ptr->cmd_detail, 0, 5); //do not have to fill it, SIM module will fill this field
                        sat_param_ptr->res = SAT_USER_CLEAR_DOWN_CALL_BEFORE_CONNECTION_RELEASE;
                        sat_param_ptr->cause = L4C_NO_CAUSE; //STK only cares about cause when res=0x20, 0x21 or 0x39
                        l4c_sat_setup_call_res(sat_param_ptr);
                    }
                #endif /* __RSAT__ */

                    /* clear retry source's queued data and cc_action */
                    l4c_clear_cc_queued_msg(id);
                    if ((l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT) && (need_crss == KAL_FALSE))
                    {
                        /* if need crss == KAL_FALSE, we need to reset enhanced_ecc_id here
                           otherwise, this flag is used in later REL_IND handler to resume RAT
                        */
                        if (l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
                            || l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE) == KAL_TRUE)
                        {
                            l4c_ptr->cc_current_action[id] = ATD_ECC_CHANGE_RAT_ABORT;
                        }
                        else //after SET_RAT_MODE_ATTACH, resume from dereg
                        {
                            l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                            l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                        }
                        l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
                    }
                    else
                    {
                        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION; //MAUI_01812936
                    }

                    /* check if there's some other call need to disconnect(ex:1A,1MO retry) or retry call is ongoing in CSM again */                    					
                    if(need_crss == KAL_FALSE)
                    {
                        l4c_result_struct result;

                        result.flag = L4C_ERROR;
                        result.cause = CM_L4C_GEN_CAUSE;
                        l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                        /* chld rsp for LMMI and RMMI */
                        l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);			
                        return KAL_TRUE;
                    }		
				
                } 		
            } /* end for */
        }

    #if 0 //MAUI_02445218 CHLD_REQ is for CC operation, don't abort SS
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
        //MAUI_02047707 clear here due to the disc src_id is the same as the MO non-retry call src_id
        l4c_clear_cc_parameter(src_id);
	    l4c_cc_send_csm_call_abort_req();
        if ((l4c_ptr->cc_current_action[src_id] == ATD_APP)
    #if defined(__TCPIP_OVER_CSD__)
            || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_APP)
    #endif 
            )
        {
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            l4c_cc_exe_chld_lrsp(KAL_TRUE, L4C_NO_CAUSE, opcode);
            return KAL_TRUE;
        }
    }

    if ((action != ATH_EXE)
#if defined(__TCPIP_OVER_CSD__)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[src_id] == PPP_ACT)
#endif  
        || (l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC) || (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION))
    {
        l4c_ptr->cc_current_action[src_id] = action;
    }

    param_ptr = (l4ccsm_cc_crss_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4ccsm_cc_crss_req_struct),
                                                TD_RESET);

    param_ptr->src_id = src_id;

    if (call_id != CSMCC_INVALID_CALL_ID)
    {
        param_ptr->call_id_present = KAL_TRUE;
    }
    else
    {
        param_ptr->call_id_present = KAL_FALSE;
    }

    /*
     * for CSD call active, but one waitting call incoming, we have to
     * deactive ppp sucessful and then using the original message to cc
     * however, we need to check if the release call is CSD , otherwise
     * we should perform this message as usual
     */

 //mtk01616_080730: new crss op ACCEPT_HELD/WAITING/CCBS might be used by MMI    
#if defined(__TCPIP_OVER_CSD__)
    if ((opcode == CSMCC_REL_ACTIVE_AND_ACCEPT
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_HELD        
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING
         || opcode == CSMCC_REL_ACTIVE_AND_ACCEPT_CCBS
         || opcode == CSMCC_REL_SPECIFIC_CALL
         || opcode == CSMCC_REL_ALL_EXCEPT_WAITING_CALL
         || opcode == CSMCC_REL_SPECIFIC_ACTIVE_CALL || opcode == CSMCC_REL_ACTIVE || opcode == CSMCC_REL_ALL))
    {
        l4c_call_entry_struct call_info;

        kal_bool temp_result = KAL_FALSE;

        /* Johnny: MMI send CHLD to L4C after DAIL_IND (MMI send ATH to L4C before it),
           L4C should call l4ccsm_cc_get_active_call() or l4ccsm_cc_get_in_call() to get correct call_id from CSM */
        temp_result = l4ccsm_cc_get_active_call(&temp_call_id);
        if (temp_result == KAL_FALSE)
        {
            temp_result = l4ccsm_cc_get_in_call(&temp_call_id);
        }

        if ((opcode == CSMCC_REL_SPECIFIC_CALL) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            temp_call_id = call_id;
            temp_result = KAL_TRUE;
        }

        if (temp_result == KAL_TRUE)
        {
            temp_result = l4ccsm_cc_get_call_info(temp_call_id, &call_info, NULL);

            if ((temp_result == KAL_TRUE) && (call_info.call_type == CSMCC_CSD_CALL))
            {
                /* Here, CSD stage may be ABM_ACT, PPP_ACT or L4C_NO_ACTION
                   ABM_ACT and PPP_ACT are already notified to MOD_ABM above */
                if (old_action == L4C_NO_ACTION)
                {
                    l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
                }
                /* exclude ABM_ACT && ABM_ACT_APP, but ABM_ACT_APP is return before */
                if (old_action != ABM_ACT)
                {
                    l4c_ptr->cc_current_action[src_id] = CHLD_CSD_DEACT;

                    if (src_id != LMMI_SRC)
                    {
                        /* MAUI_01810924: LMMI_SRC has CSD call and other src disconnect it
                           LMMI_SRC is in PPP_ACT or L4C_NO_ACTION 
                           we have to reset PPP_ACT here because no other CNF for LMMI later */
                        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
                    }
                    
                    l4c_ppp_csd_deactivate_helper(PPPE_MOBILE_DEACT);
                    l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_crss_req_struct);
                    l4c_ptr->cc_parameter[src_id].data = param_ptr;
                    param_ptr->crss_req = opcode;
                    param_ptr->call_id = call_id;

                    return KAL_TRUE;
                }
            }
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 

    param_ptr->call_id = call_id;
    param_ptr->crss_req = opcode;

#ifndef __MMI_FMI__
    l4c_cc_call_chld_lind(call_id, opcode);
#endif 

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CRSS_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_hangup_active_call_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_hangup_active_call_req(kal_uint8 src_id)
{
    //mtk01616_070707: With UCM , at+chup will behave like ath , we won't call this handler anymore
    return KAL_TRUE;
}
#endif /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_call_list_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  call_list       [IN/OUT]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_call_list_req(kal_uint8 src_id, l4c_call_list_struct *call_list)
{
    l4c_call_entry_struct call_entry;
    l4c_number_struct addr;
    kal_bool resp;
    kal_uint8 index = CSMCC_INVALID_CALL_ID, next_index;
    kal_uint8 count = 0;
#if defined(__GEMINI__) && defined(__BT_SUPPORT__)
    kal_uint8 which_sim;
#endif 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#if defined(__GEMINI__) && defined(__BT_SUPPORT__)
    if(src_id == RMMI_COMM_PTR->rmmi_hf_src) // if AT+CLCC come from HFP 
    {
        /*
            for GEMINI, BT HF clcc shall be able to list sim2...simN call
        */
        for (which_sim = 0; which_sim < L4_MAX_SIM_NUM; which_sim++)
        {
            module_type this_l4c = L4_MODULE(MOD_L4C, which_sim);
    		l4c_context_struct* this_l4c_ptr = get_l4c_ptr_by_mod(this_l4c);
            
            if (this_l4c_ptr->call_exist == KAL_TRUE)
            {
                kal_brief_trace(TRACE_INFO, INFO_SWITCH_CSM_CONTEXT, which_sim);
                csmcc_context_selection(which_sim);
            }
        }
    }
#endif

    while (1)
    {
        kal_mem_set(&call_entry, 0, sizeof(l4c_call_entry_struct));
        kal_mem_set(&addr, 0, sizeof(l4c_number_struct));

        resp = l4ccsm_cc_get_call_info(index, &call_entry, &next_index);
        if (resp == KAL_FALSE)
        {
            if (src_id == LMMI_SRC)
            {
                call_list->length = 0;
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_cc_get_call_list_rrsp(KAL_FALSE, KAL_TRUE, call_entry, addr);

            }
            return KAL_TRUE;
        }

        index = next_index;

        if (call_entry.number.addr_length != 0)
        {
            addr.type = call_entry.number.addr_bcd[0];
            addr.length = convert_to_digit((kal_uint8*) & (call_entry.number.addr_bcd[1]), (kal_uint8*) addr.number);

            if (addr.length >= MAX_CC_ADDR_LEN)
            {
                ASSERT(0);
            }
        }

        if (src_id == LMMI_SRC)
        {
            append_short_list(
                call_list,
                count,
                call_entry.call_id,
                call_entry.call_state,
                call_entry.mpty,
                (kal_uint8*) addr.number);
            count++;
            if (index == CSMCC_INVALID_CALL_ID)
            {
                break;
            }

        }
        else
        {
            if (index == CSMCC_INVALID_CALL_ID)
            {
                /* last_flag=1 */
                rmmi_ptr->current_src = src_id;
                l4c_cc_get_call_list_rrsp(KAL_TRUE, KAL_TRUE, call_entry, addr);
                break;
            }
            else
            {
                /* last_flag=0 */
                rmmi_ptr->current_src = src_id;
                l4c_cc_get_call_list_rrsp(KAL_TRUE, KAL_FALSE, call_entry, addr);
            }

        }
    }   /* end while 1 */

#if defined(__GEMINI__) && defined(__BT_SUPPORT__)
    if(src_id == RMMI_COMM_PTR->rmmi_hf_src) // if AT+CLCC come from HFP 
    {
        kal_brief_trace(TRACE_INFO, INFO_SWITCH_CSM_CONTEXT,SIM1);
        csmcc_context_selection(SIM1);
    }
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  append_short_list
 * DESCRIPTION
 *  
 * PARAMETERS
 *  output          [IN/OUT]         
 *  index           [IN]        
 *  call_id         [IN]        
 *  call_state      [IN]        
 *  mpty            [IN]        
 *  number          [IN]         
 * RETURNS
 *  void
 *****************************************************************************/
void append_short_list(
        l4c_call_list_struct *output,
        kal_uint8 index,
        kal_uint8
                       call_id,
        kal_uint8 call_state,
        kal_uint8 mpty,
        kal_uint8 *number)
{
    output->length = index + 1;
    output->list[index].call_id = call_id;
    output->list[index].call_state = call_state;
    output->list[index].mpty = mpty;
    kal_mem_cpy(output->list[index].number, number, MAX_CC_ADDR_LEN);

    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_call_capability
 * DESCRIPTION
 *  
 * PARAMETERS  
 *  capability        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
 kal_bool l4c_cc_set_call_capability(kal_uint32 capability)
{
   return l4ccsm_cc_set_call_capability(capability);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_call_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_set_call_mode_req(kal_uint8 src_id, kal_uint8 mode)
{
    kal_bool result;

    result = l4ccsm_cc_set_call_mode(mode);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_call_mode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN/OUT]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_call_mode_req(kal_uint8 src_id, kal_uint8 *mode)
{
    kal_bool result;

    result = l4ccsm_cc_get_call_mode(mode);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_phone_activity_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  act         [IN/OUT]    l4ccsm_phone_act_enum     
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_phone_activity_req(kal_uint8 src_id, kal_uint8 *act)
{
    kal_bool result;
    kal_uint8 call_id;

    result = l4ccsm_cc_get_active_call(&call_id);
    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        *act = PAS_CALL_IN_PROGRESS;
        return KAL_TRUE;
    }
    result = l4ccsm_cc_get_mt_call(&call_id);
    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        *act = PAS_CALL_RINGING;
        return KAL_TRUE;
    }
    if (L4C_PTR->cc_current_action[RMMI_SRC] != L4C_NO_ACTION)
    {
        *act = PAS_UNAVAILABLE;
        return KAL_TRUE;
    }
    else
    {
        *act = PAS_READY;
        return KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_single_num_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN]      csmcc_sns_mode_enum  
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_set_single_num_req(kal_uint8 src_id, kal_uint8 mode)
{
    kal_bool result;

    result = l4ccsm_cc_set_sns_mode(mode);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_single_num_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  mode        [IN/OUT]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_get_single_num_req(kal_uint8 src_id, kal_uint8 *mode)
{
    kal_bool result;

    result = l4ccsm_cc_get_sns_mode(mode);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_deflect_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  dest                [IN]        
 *  sub_addr_flag       [IN]        
 *  sub_dest            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_call_deflect_req(
            kal_uint8 src_id,
            l4c_number_struct dest,
            kal_bool sub_addr_flag,
            l4c_sub_addr_struct sub_dest)
{
    l4ccsm_cc_call_deflection_req_struct *param_ptr;
    kal_uint8 count;

    if (is_cmd_conflict(src_id, CTFR_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->cc_current_action[src_id] = CTFR_EXE;

    param_ptr = (l4ccsm_cc_call_deflection_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4ccsm_cc_call_deflection_req_struct),
                                                            TD_RESET);

    param_ptr->src_id = src_id;

    param_ptr->redirect_num.addr_bcd[0] = dest.type;

    count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->redirect_num.addr_bcd[1]), 40);

    param_ptr->redirect_num.addr_length = count + 1;

    param_ptr->redirect_sub_addr_present = sub_addr_flag;
    if (sub_addr_flag == KAL_TRUE)
    {
        param_ptr->redirect_sub_addr.sub_addr[0] = sub_dest.type;

        count = convert_to_bcd(
                    (kal_uint8*) sub_dest.number,
                    (kal_uint8*) & (param_ptr->redirect_sub_addr.sub_addr[1]),
                    20);

        param_ptr->redirect_sub_addr.sub_addr_len = count + 1;
    }

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_send_dtmf_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  digit       [IN]        
 *  call_id     [IN]        
 *  cmd         [IN] intended for RMMI to distinguish AT+VTS and AT+EVTS
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_send_dtmf_req(kal_uint8 src_id, kal_uint8 digit,kal_uint8 call_id,kal_uint32 cmd)
{
    l4ccsm_cc_start_dtmf_req_struct *param_ptr;
    l4ccsm_cc_stop_dtmf_req_struct *param1_ptr;
    kal_uint8 in_call_id;
    kal_bool result;

    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    //mtk01616_081119: if the call_id is not specified by application layer,then get cal_id from CSM
    if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1) ) //not a valid call_id
    {
        result = l4ccsm_cc_get_in_call(&in_call_id);

        if ((result == KAL_FALSE) || (in_call_id == CSMCC_INVALID_CALL_ID))
        {
            return KAL_FALSE;
        }

	    call_id = in_call_id;
    }

    //LMMI doesn't care VTS_EXE
#if defined(__VTS_LATE_RESPONSE__)
    if (src_id >= RMMI_SRC)
    {
        if (is_cmd_conflict(src_id, VTS_EXE) == KAL_TRUE)
        {
            return KAL_FALSE;
        }
        L4C_PTR->cc_current_action[src_id] = VTS_EXE;
        L4C_PTR->dtmf_call_id = call_id;
    }
#endif

    param_ptr = (l4ccsm_cc_start_dtmf_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_start_dtmf_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->call_id = call_id;
    param_ptr->tone = digit;

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_START_DTMF_REQ, param_ptr, NULL, 0);

    if (src_id >= RMMI_SRC && cmd == RMMI_CMD_ATVTS)
    {
        param1_ptr = (l4ccsm_cc_stop_dtmf_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_stop_dtmf_req_struct),
                                                        TD_RESET);

        param1_ptr->src_id = src_id;
        param1_ptr->call_id = call_id;
        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_STOP_DTMF_REQ, param1_ptr, NULL, 0);
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_stop_dtmf_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  call_id     [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_stop_dtmf_req(kal_uint8 src_id,kal_uint8 call_id)
{
    l4ccsm_cc_stop_dtmf_req_struct *param_ptr;
    kal_uint8 in_call_id;
    kal_bool result;

    //mtk01616_081119: if the call_id is not specified by application layer,then get cal_id from CSM
    if(!(call_id > 0 && call_id < CSMCC_MAX_CALL_NUM+1) ) //not a valid call_id
    {
        result = l4ccsm_cc_get_in_call(&in_call_id);

        if ((result == KAL_FALSE) || (in_call_id == CSMCC_INVALID_CALL_ID))
        {
            return KAL_FALSE;
        }

	call_id = in_call_id;
    }	

    param_ptr = (l4ccsm_cc_stop_dtmf_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_stop_dtmf_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->call_id = call_id;
    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_STOP_DTMF_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_start_auto_dtmf_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  digit       [IN]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_start_auto_dtmf_req(kal_uint8 src_id, kal_uint8 *digit)
{
    l4ccsm_cc_auto_dtmf_start_req_struct *param_ptr;
    kal_uint8 call_id;
    kal_bool result;

    result = l4ccsm_cc_get_active_call(&call_id);

    if ((result == KAL_FALSE) || (call_id == CSMCC_INVALID_CALL_ID))
    {
        return KAL_FALSE;
    }
    
    param_ptr = (l4ccsm_cc_auto_dtmf_start_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4ccsm_cc_auto_dtmf_start_req_struct),
                                                            TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->call_id = call_id;
    param_ptr->digit_count = convert_to_bcd(digit, param_ptr->dtmf_digit, MAX_CC_ADDR_BCD_LEN);

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_AUTO_DTMF_START_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_ata_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_ata_req(kal_uint8 src_id)
{
    CSMCC_PTR_G_TO_L
    kal_bool result;
    kal_uint8 call_id;
    l4c_call_entry_struct call_entry;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#ifdef __CSD_FAX__ 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
#endif 

#ifdef __CSD_FAX__
    kal_uint8 fclass_mode, serv_class;
    l4c_result_struct faxcall_result;
#endif /* __CSD_FAX__ */ 

    if (is_cmd_conflict(src_id, ATA_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    if (CSMCC_PTR->cur_non_l4c_req == CSMCC_ALERTING_REQ)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_ATA_NOT_ALLOW_BEFORE_SEND_SETUP_IND);
        /* mtk00924_060116: MMI excepts receiving ring_ind and then speech_ind, if not, turning on audio will act abnormally
           So, if cur_non_l4c_req == CSMCC_ALERTING_REQ, that means CSMCC does not send setup_ind to L4C, therefore, 
           MMI does not receive ring_ind */
        return KAL_FALSE;
    }

    result = l4ccsm_cc_get_mt_call(&call_id);

    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        l4ccsm_cc_call_accept_req_struct *param_ptr;

        l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

        if (src_id == LMMI_SRC && call_entry.call_type == CSMCC_DATA_CALL)
        {
            l4c_result_struct l4c_result;

            l4c_result.flag = L4C_ERROR;
            l4c_result.cause = CM_L4C_GEN_CAUSE;

            l4c_cc_exe_ata_lrsp(l4c_result, call_entry.call_mode);
            return KAL_TRUE;
        }

    #ifdef __CSD_FAX__  
        if ((call_entry.call_mode == ALT_FAX_FAX_CALL)
            || (call_entry.call_mode == SINGLE_FAX_CALL) || (call_entry.call_mode == ALT_FAX_VOICE_CALL))
        {
            l4ccsm_cc_get_fclass_mode(&fclass_mode);
            serv_class = check_g3_service_class_code(fclass_mode);
            if (serv_class == G3_SERV_CLASS_0)
            {
                faxcall_result.flag = L4C_ERROR;
                faxcall_result.cause = RMMI_ERR_UNKNOWN;
                if (src_id == LMMI_SRC)
                {
                    l4c_cc_exe_ata_lrsp(faxcall_result, call_entry.call_mode);
                    return KAL_TRUE;
                }
                else
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_cc_exe_call_accept_rrsp(faxcall_result, call_entry.call_mode);
                    return KAL_FALSE;
                }

            }
        }
    #endif /* __CSD_FAX__ */ 

        if (src_id >= RMMI_SRC)
        {
            l4c_cc_call_accept_req_ind(call_id);
        }

        if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
        {
            l4c_ptr->cc_current_action[src_id] = ATA_EXE;
        }

        param_ptr = (l4ccsm_cc_call_accept_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4ccsm_cc_call_accept_req_struct),
                                                            TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->call_id = call_id;
        param_ptr->connected_sub_addr_present = KAL_FALSE;

        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ, param_ptr, NULL, 0);

        return KAL_TRUE;
    }
    else
    {
        if (src_id == LMMI_SRC)
            /* only RMMI_SRC can dial data/fax call */
        {
            l4c_result_struct l4c_result;

            l4c_result.flag = L4C_ERROR;
            l4c_result.cause = CM_L4C_GEN_CAUSE;        //mtk01616_071212: for MMI to popup "Unable to connect"

            l4c_cc_exe_ata_lrsp(l4c_result, 0);
            return KAL_TRUE;
        }

        result = l4ccsm_cc_get_active_call(&call_id);

        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

            if ((call_entry.call_mode == ALT_DATA_VOICE_CALL)
                || (call_entry.call_mode == FOLLOW_VOICE_CALL) || (call_entry.call_mode == ALT_FAX_VOICE_CALL))
            {
                l4ccsm_cc_call_modify_req_struct *param_ptr;

                param_ptr = (l4ccsm_cc_call_modify_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_modify_req_struct), TD_RESET);

                param_ptr->src_id = src_id;
                param_ptr->call_id = call_id;

            #ifdef __CSD_FAX__      

                if (call_entry.call_mode == ALT_FAX_VOICE_CALL)
                {
                    param_ptr->modify_cmd = L4C_MODIFY_ATA;
                }
            #endif /* __CSD_FAX__ */ 

                if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
                {
                    l4c_ptr->cc_current_action[src_id] = ATA_EXE;
                }

                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ, param_ptr, NULL, 0);

                return KAL_TRUE;
            }
        }

        return KAL_FALSE;
    }
}
#else /* __UCM_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_ata_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_ata_req(kal_uint8 src_id)
{
    CSMCC_PTR_G_TO_L
    kal_bool result;
    kal_uint8 call_id;
    l4c_call_entry_struct call_entry;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

#ifdef __CSD_FAX__
    kal_uint8 fclass_mode, serv_class;
    l4c_result_struct faxcall_result;
#endif /* __CSD_FAX__ */ 

    if (is_cmd_conflict(src_id, ATA_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    if (CSMCC_PTR->cur_non_l4c_req == CSMCC_ALERTING_REQ)
    {
        kal_brief_trace(TRACE_WARNING, WARNING_ATA_NOT_ALLOW_BEFORE_SEND_SETUP_IND);
        /* mtk00924_060116: MMI excepts receiving ring_ind and then speech_ind, if not, turning on audio will act abnormally
           So, if cur_non_l4c_req == CSMCC_ALERTING_REQ, that means CSMCC does not send setup_ind to L4C, therefore, 
           MMI does not receive ring_ind */
        return KAL_FALSE;
    }

    result = l4ccsm_cc_get_mt_call(&call_id);

    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        l4ccsm_cc_call_accept_req_struct *param_ptr;

        l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

        if (src_id == LMMI_SRC && (call_entry.call_type == CSMCC_DATA_CALL || call_entry.call_type == CSMCC_FAX_CALL))
        {
            l4c_result_struct l4c_result;

            l4c_result.flag = L4C_ERROR;
            l4c_result.cause = CM_L4C_GEN_CAUSE;

            l4c_cc_exe_ata_lrsp(l4c_result, call_entry.call_mode);
            return KAL_TRUE;
        }

    #ifdef __CSD_FAX__      /* add by mtk00714 */
        //l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

        if ((call_entry.call_mode == ALT_FAX_FAX_CALL)
            || (call_entry.call_mode == SINGLE_FAX_CALL) || (call_entry.call_mode == ALT_FAX_VOICE_CALL))
        {
            l4ccsm_cc_get_fclass_mode(&fclass_mode);
            serv_class = check_g3_service_class_code(fclass_mode);
            if (serv_class == G3_SERV_CLASS_0)
            {
                faxcall_result.flag = L4C_ERROR;
                faxcall_result.cause = RMMI_ERR_UNKNOWN;
                l4c_cc_exe_ata_lrsp(faxcall_result, call_entry.call_mode);
            
                return KAL_TRUE;
            }
        }
    #endif /* __CSD_FAX__ */ 

        if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
        {
            l4c_ptr->cc_current_action[src_id] = ATA_EXE;
        }

        param_ptr = (l4ccsm_cc_call_accept_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4ccsm_cc_call_accept_req_struct),
                                                            TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->call_id = call_id;
        param_ptr->connected_sub_addr_present = KAL_FALSE;

        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ, param_ptr, NULL, 0);

        return KAL_TRUE;
    }
    else
    {
        result = l4ccsm_cc_get_active_call(&call_id);

         /* only RMMI_SRC can dial data/fax call */
        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID)
             && (src_id >= RMMI_SRC) && (src_id < RMMI_ALL)
        #if defined(__BT_SUPPORT__)           
             && (src_id!= RMMI_COMM_PTR->rmmi_hf_src)
        #endif             
             )
        {
            l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

            if ((call_entry.call_mode == ALT_DATA_VOICE_CALL)
                || (call_entry.call_mode == FOLLOW_VOICE_CALL) || (call_entry.call_mode == ALT_FAX_VOICE_CALL))
            {
                l4ccsm_cc_call_modify_req_struct *param_ptr;

                param_ptr = (l4ccsm_cc_call_modify_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_modify_req_struct), TD_RESET);

                param_ptr->src_id = src_id;
                param_ptr->call_id = call_id;

            #ifdef __CSD_FAX__      

                if (call_entry.call_mode == ALT_FAX_VOICE_CALL)
                {
                    param_ptr->modify_cmd = L4C_MODIFY_ATA;
                }
            #endif /* __CSD_FAX__ */ 

                if (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
                {
                    l4c_ptr->cc_current_action[src_id] = ATA_EXE;
                }

                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ, param_ptr, NULL, 0);

                return KAL_TRUE;
            }
        }
        else
        {
            l4c_result_struct l4c_result;

            l4c_result.flag = L4C_ERROR;
            l4c_result.cause = CM_L4C_GEN_CAUSE;        //mtk01616_071212: for MMI to popup "Unable to connect"
            
            l4c_cc_exe_ata_lrsp(l4c_result, 0);
            return KAL_TRUE;
        }

        return KAL_FALSE;
    }
}
#endif /* __UCM_SUPPORT__ */ 

#ifdef __PHB_APPROVE_BY_MMI__
/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_setup_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  dest                [IN]        
 *  redial_count        [IN]        
 *  call_type           [IN]        
 *  clir_flag           [IN]        
 *  cug_option          [IN]        
 *  als_type            [IN]       
 *  ecc_info            [IN]       
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_call_setup_req(
            kal_uint8 src_id,
            l4c_number_struct dest,
            kal_uint8 redial_count,
            kal_uint8 call_type,
            kal_uint8 clir_flag,
            kal_bool cug_option,
            kal_uint8 als_type,
            kal_uint8 ecc_info)
{
    l4ccsm_cc_call_setup_req_struct *param_ptr;
    kal_uint8 count, temp_src = src_id;
    kal_uint8 fail_src = INVALID_SRC;
    kal_uint8 i = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    l4c_result_struct result;
    l4c_ss_string_info_struct info;

    l4_addr_bcd_struct tel_number;
    kal_uint16 cause = CM_L4C_GEN_CAUSE;
    kal_uint8 status;
    kal_bool is_ecc = KAL_FALSE;
    kal_uint8 ecc_category;
    l4ccsm_cc_emergency_call_setup_req_struct *ecc_param_ptr;
#ifdef __ECALL_SUPPORT__
    kal_bool ecall_number_available = KAL_FALSE; 
    l4_addr_bcd_struct ecall_number; 
#endif 
    kal_bool l4c_ecc_setup_flag = KAL_FALSE; 
    kal_bool l4c_normal_setup_flag = KAL_FALSE; 

    //mtk01616_080428:to prevent wild character existing in dialed number

    for (i = 0; i < dest.length; i++)
    {
        if (dest.number[i] == custom_wild_char())
        {
            kal_brief_trace(TRACE_WARNING, WARNING_INVALID_NUMBER, dest.number[i]);
            fail_src = src_id;
        }
    }

    if (is_cmd_conflict(src_id, ATD_APP) == KAL_TRUE)
    {
        if ((src_id == LMMI_SRC)        //the source is mmi
    #ifdef __UCM_SUPPORT__
            || (src_id >= RMMI_SRC && src_id < RMMI_ALL) //the source is UCM
    #endif 
            )
        {
            fail_src = LMMI_SRC;
        }
        else
        {
            fail_src = RMMI_SRC;
        }
    }

    //mtk01616_080428: we have to response to MMI/WAP explictly instead of auto response fail by L4A
    if (fail_src == INVALID_SRC)
    {
        //no error 
    }
    else if (fail_src == LMMI_SRC)
    {
        /* Johnny: if ATD_APP is command conflict, L4C do not send msg to MMI by L4A,
           L4C will send MMI_SS_PARSING_STRING_RSP to MMI itself with cause = L4C_CMD_CONFLICT */
    #if defined(__MMI_FMI__)
        result.flag = KAL_FALSE;     // IF AUTO response fail by L4A , it will set result flag to L4C_ERROR !!
        result.cause = L4C_CMD_CONFLICT;
        info.opcode = INVALID_OPERATION;
        l4c_ss_string_parsing_lrsp(result, &info);
    #endif /* defined(__MMI_FMI__) */ 
        return KAL_TRUE;
    }
    else if (fail_src == RMMI_SRC)
    {
        return KAL_FALSE;
    }

    //mtk01616_070707: this should be handled by UCM 
#ifndef __UCM_SUPPORT__
    /* Begin mtk00714 : 20040409 */
    /* check currently there's no pending call in LMMI. eg. MO alerting or MT ringing */
    /* if there is, RMMI ATD is not allowed : otherwise 'unexpected error' might occur */
    if (src_id >= RMMI_SRC)
    {
        l4c_call_entry_struct call_entry;
        l4c_number_struct addr;
        kal_bool resp;
        kal_uint8 index = CSMCC_INVALID_CALL_ID, next_index;

        while (1)
        {
            kal_mem_set(&call_entry, 0, sizeof(l4c_call_entry_struct));
            kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
            resp = l4ccsm_cc_get_call_info(index, &call_entry, &next_index);
            if (resp == KAL_FALSE)
            {
                break;
            }
            if ((call_entry.call_state == CLCC_CALL_DIALING)
                || (call_entry.call_state == CLCC_CALL_ALERTING)
                || (call_entry.call_state == CLCC_CALL_INCOMING) || (call_entry.call_state == CLCC_CALL_WAITING))
            {
                kal_brief_trace(TRACE_WARNING, WARNING_MO_CALL_FAIL_DUE_TO_IN_CALL);				
                return KAL_FALSE;
            }
            if (next_index == CSMCC_INVALID_CALL_ID)
            {
                break;
            }
            else
            {
                index = next_index;
            }
        }
    }
    /* End mtk00714 */
#endif /* __UCM_SUPPORT__ */ 
    /* PHB approve by MMI via function call 
       approve before constructing cc_parameter
    */

    tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
    tel_number.addr_length = 1 + convert_to_bcd(
                            (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                            (kal_uint8*) & (tel_number.addr_bcd[1]),
                            40);

    /* check ECC first */
    if (call_type != CSMCC_DATA_CALL
#ifdef __ECALL_SUPPORT__
        && ecc_info != INFO_ECALL_MANUALLY_INITIATED
        && ecc_info != INFO_ECALL_AUTOMATICALLY_INITIATED
        && ecc_info != INFO_ECALL_RECONFIGURATION
        && ecc_info != INFO_ECALL_TEST
#endif 
        )
    {
        /* exclude data call which is not treated as ECC */
        is_ecc = ecc_custom_verify_emergency_number(
                        tel_number.addr_bcd, 
                        tel_number.addr_length, 
                        ECC_ENCODING_BCD, 
                        (ecc_call_type_enum)(ECC_SIM1_CALL + (l4c_current_mod_id - MOD_L4C)),
                        &ecc_category, NULL, NULL);
    }

    l4c_nw_get_attach_status_req(src_id, RAC_CS, &status);

    if (is_ecc == KAL_TRUE
#if defined(__ECALL_SUPPORT__)
        || ecc_info == INFO_ECALL_MANUALLY_INITIATED
        || ecc_info == INFO_ECALL_AUTOMATICALLY_INITIATED
#endif 
        || ecc_info == INFO_ECC_CALL)
    {

        l4c_ecc_setup_flag = KAL_TRUE; 
    }
    else if ((l4c_ptr->mmrr_ready_flag == KAL_TRUE)
        && ((status == REG_STATE_REGISTERED) 
        || (RMMI_PTR->cops_mode != 2)))
    {
#if defined(__ECALL_SUPPORT__)
        if (ecc_info == INFO_ECALL_TEST || ecc_info == INFO_ECALL_RECONFIGURATION)
        {
            ecall_number_available = l4c_get_ecall_number(&ecall_number,ecc_info); 
            if (ecall_number_available)
            {
                 l4c_normal_setup_flag = KAL_TRUE;
            }
            else
            {
                 l4c_normal_setup_flag = KAL_FALSE;
            }
        }
        else
#endif 
        if ((KAL_TRUE == custom_phb_xmgnt_approve_fdn(tel_number.addr_bcd, 
                                                tel_number.addr_length,
                                                (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                L4C_CALL_OPERATION,
                                                &cause)))
        { 
            l4c_normal_setup_flag = KAL_TRUE;   
        }
        else
        {
            kal_brief_trace(TRACE_WARNING,WARNING_PHB_APPROVE_FAIL,cause);
            l4c_normal_setup_flag = KAL_FALSE;
        }


    }
    else
    {
        l4c_normal_setup_flag = KAL_FALSE;
        l4c_ecc_setup_flag = KAL_FALSE; 
    }

    if (l4c_ecc_setup_flag == KAL_TRUE)
    {
        l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_emergency_call_setup_req_struct);

        l4c_ptr->cc_parameter[src_id].data = (l4ccsm_cc_emergency_call_setup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4ccsm_cc_emergency_call_setup_req_struct), TD_RESET);

        ecc_param_ptr = (l4ccsm_cc_emergency_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
        ecc_param_ptr->src_id = src_id;
        ecc_param_ptr->called_number.addr_bcd[0] = dest.type;
        count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (ecc_param_ptr->called_number.addr_bcd[1]), 40);
        ecc_param_ptr->called_number.addr_length = count + 1;
        l4c_ptr->cc_current_action[src_id] = ATD_ECC;   
#if defined(__ECALL_SUPPORT__)
        if (ecc_info == INFO_ECALL_MANUALLY_INITIATED)
        {
            ecc_param_ptr->service_category |= CSMCC_CATEGORY_MANUALLY_INITIATED_ECALL;
            ecc_param_ptr->is_ecall = KAL_TRUE; 
            ecc_param_ptr->ecall_type = ECALL_MANUALLY_INITIATED; 
        }
        else if (ecc_info == INFO_ECALL_AUTOMATICALLY_INITIATED)
        {
            ecc_param_ptr->service_category |= CSMCC_CATEGORY_AUTOMATICALLY_INITIATED_ECALL;
            ecc_param_ptr->is_ecall = KAL_TRUE; 
            ecc_param_ptr->ecall_type = ECALL_AUTOMATICALLY_INITIATED; 
        }
        else
#endif
        {
            ecc_param_ptr->service_category = ecc_category; //for R5 ECC category
        }
        
        l4c_ptr->mo_call_ecc_info = ecc_info;  
    }
    else if (l4c_normal_setup_flag == KAL_TRUE)
    {
         /* enter ATD_EXE directly */
        l4c_ptr->cc_current_action[src_id] = ATD_EXE;
        l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_call_setup_req_struct);
        l4c_ptr->cc_parameter[src_id].data = (l4ccsm_cc_call_setup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_setup_req_struct), TD_RESET);

        param_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
        param_ptr->src_id = temp_src;
        param_ptr->called_number.addr_bcd[0] = dest.type;
        count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->called_number.addr_bcd[1]), 40);
        param_ptr->called_number.addr_length = count + 1;
#ifdef __ECALL_SUPPORT__
        if (ecall_number_available == KAL_TRUE)
        {
            kal_mem_cpy(&(param_ptr->called_number),&ecall_number,sizeof(l4_addr_bcd_struct));
            param_ptr->is_ecall = KAL_TRUE; 
            if (ecc_info == INFO_ECALL_TEST)
            {
                param_ptr->ecall_type = ECALL_TEST; 
            }
            else
            {
                param_ptr->ecall_type = ECALL_RECONFIGURATION; 
            }
        }
        
#endif 
        param_ptr->called_sub_addr_present = KAL_FALSE; /* sub_addr not present */
        param_ptr->cug_info = cug_option;
        param_ptr->is_cell_lock_call = KAL_FALSE;
        param_ptr->als_type = als_type;	
#if defined(__FWP_NC_LAI_INFO__)
        if (src_id == LMMI_SRC)
        {
            kal_brief_trace(TRACE_INFO, INFO_CELL_LOCK_CALL, l4c_ptr->is_cell_lock_call);
            param_ptr->is_cell_lock_call = l4c_ptr->is_cell_lock_call;
            l4c_ptr->is_cell_lock_call = KAL_FALSE; //reset
        }
#endif /* defined(__FWP_NC_LAI_INFO__) */ 

        if (clir_flag == CLIR_AUTO)
        {
            param_ptr->clir_info_present = KAL_FALSE;
        }
        else 
        {
            param_ptr->clir_info_present = KAL_TRUE;
            param_ptr->clir_info = clir_flag;
        }
        param_ptr->call_type = call_type;
        param_ptr->redial = redial_count;        
        l4c_ptr->mo_call_ecc_info = ecc_info;  

    }
    else
    {
        /* 0.NOT ECC (normal call)
           1.FDN approve fail
           2.mmrr_ready_flag = KAL_FALSE: means later we may receive MMRR_READY_IND when SS retry 
             during PLMN search and cause COPS_EXE overwritten by PWRON_ATTACH
           3.status != REG_STATE_REGISTERED && rmmi_ptr->cops_mode == 2: means 
        */
        info.opcode = INVALID_OPERATION;
        result.flag = KAL_FALSE; //MMI takes result.flag in MMI_SS_PARSING_STRING_RSP as kal_bool
        result.cause = (cause == PHB_APPROVE_FDN_BLOCKED)? (PHB_CAUSE_FDN_BLOCKED) : (CM_L4C_GEN_CAUSE); //MAUI_02990419

    #ifdef __UCM_SUPPORT__
        /* only need respond to UCM */
        l4c_ss_string_parsing_lrsp(result, &info);
    #else
        if (src_id == LMMI_SRC)
        {
            l4c_ss_string_parsing_lrsp(result, &info);
        }
        else if (src_id >= RMMI_SRC)
        {
            l4c_ptr->ceer_report = cause; //MAUI_02397275
            return KAL_FALSE; //respond in rmmi_basic_cmd_processor()
        }
    #endif
        return KAL_TRUE; //prevent L4A from responding

    }
    
#ifndef __UCM_SUPPORT__
    if (src_id >= RMMI_SRC)
    {
        /* notify LMMI */
        /* Johnny: l4c_ptr->l4cphb_approve_req_string is the original whole string (include +, *31#, #31#...) */
        l4c_cc_call_setup_req_ind(
            *(l4c_number_struct*) (&(l4c_ptr->l4cphb_approve_req_string)),
            call_type,
            clir_flag,
            cug_option);
    }
#endif /* !__UCM_SUPPORT__ */
    
    if (call_type == CSMCC_DATA_CALL || call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
    {
        l4c_ptr->ongoing_csd_dialup = KAL_TRUE; //MAUI_02284187, mtk02285
    }
    
    l4c_send_msg_hdlr(src_id, L4C_CALL_OPERATION);
    
    info.opcode = CC_OPERATION;
    result.flag = KAL_TRUE;
    result.cause = L4C_NO_CAUSE;
#ifdef __UCM_SUPPORT__
    l4c_ss_string_parsing_lrsp(result, &info);
#else
    if (src_id == LMMI_SRC)
    {
        l4c_ss_string_parsing_lrsp(result, &info);
    }
    else if ((src_id >= RMMI_SRC && src_id < RMMI_ALL) && (call_type != CSMCC_DATA_CALL))
    {
        /* 1.Print "CONNECT" for data call in l4ccsm_cc_csd_est_ind_hdlr
           2.no need to set RMMI_PTR->current_src = src_id, because ATD uses function call to here 
        */
        kal_uint8 cid;
        
        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        cid = rmmi_srcid_2_cid(src_id);
        RMMI_COMM_PTR->isAtdAction_flag |= (0x01 << cid);
    }
#endif /* __UCM_SUPPORT__ */
    return KAL_TRUE;
}

#else /* !__PHB_APPROVE_BY_MMI__*/
/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_setup_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  dest                [IN]        
 *  redial_count        [IN]        
 *  call_type           [IN]        
 *  clir_flag           [IN]        
 *  cug_option          [IN]        
 *  als_type            [IN]       
 *  ecc_info            [IN]       
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_call_setup_req(
            kal_uint8 src_id,
            l4c_number_struct dest,
            kal_uint8 redial_count,
            kal_uint8 call_type,
            kal_uint8 clir_flag,
            kal_bool cug_option,
            kal_uint8 als_type,
            kal_uint8 ecc_info)
{
    l4ccsm_cc_call_setup_req_struct *param_ptr;
    kal_uint8 count, temp_src = src_id;
    kal_uint8 fail_src = INVALID_SRC;
    kal_uint8 i = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
#if defined(__MMI_FMI__)
    l4c_result_struct result;
    l4c_ss_string_info_struct info;
#endif 
    l4cphb_approve_req_struct *param1_ptr;
#if defined(__ECALL_SUPPORT__)
    l4_addr_bcd_struct ecall_number;
    kal_bool ecall_number_flag = KAL_FALSE; 
#endif 


    //mtk01616_080428:to prevent wild character existing in dialed number

    for (i = 0; i < dest.length; i++)
    {
        if (dest.number[i] == custom_wild_char())
        {
            kal_brief_trace(TRACE_WARNING, WARNING_INVALID_NUMBER, dest.number[i]);
            fail_src = src_id;
        }
    }

#if defined(__ECALL_SUPPORT__)
        /*************************************
        * read Ecall number first 
        *************************************/

    if ((ecc_info == INFO_ECALL_TEST)
        ||(ecc_info == INFO_ECALL_RECONFIGURATION))
    {
        if (KAL_TRUE == l4c_get_ecall_number(&ecall_number,ecc_info))
        {
             ecall_number_flag = KAL_TRUE;
        }
    }
#endif

    if ((is_cmd_conflict(src_id, ATD_APP) == KAL_TRUE)
#if defined(__ECALL_SUPPORT__)
        ||(((ecc_info == INFO_ECALL_TEST)
        ||(ecc_info == INFO_ECALL_RECONFIGURATION))
        &&(KAL_FALSE == ecall_number_flag))
#endif 
        )
    {
        if ((src_id == LMMI_SRC)        //the source is mmi
    #ifdef __UCM_SUPPORT__
            || (src_id >= RMMI_SRC && src_id < RMMI_ALL) //the source is UCM
    #endif 
            )
        {
            fail_src = LMMI_SRC;
        }
        else
        {
            fail_src = RMMI_SRC;
        }
    }

    //mtk01616_080428: we have to response to MMI/WAP explictly instead of auto response fail by L4A
    if (fail_src == INVALID_SRC)
    {
        //no error 
    }
    else if (fail_src == LMMI_SRC)
    {
        /* Johnny: if ATD_APP is command conflict, L4C do not send msg to MMI by L4A,
           L4C will send MMI_SS_PARSING_STRING_RSP to MMI itself with cause = L4C_CMD_CONFLICT */
    #if defined(__MMI_FMI__)
        result.flag = KAL_FALSE;     // IF AUTO response fail by L4A , it will set result flag to L4C_ERROR !!
        result.cause = L4C_CMD_CONFLICT;
        info.opcode = INVALID_OPERATION;
        l4c_ss_string_parsing_lrsp(result, &info);
    #endif /* defined(__MMI_FMI__) */ 
        return KAL_TRUE;
    }
    else if (fail_src == RMMI_SRC)
    {
        return KAL_FALSE;
    }

    //mtk01616_070707: this should be handled by UCM 
#ifndef __UCM_SUPPORT__
    /* Begin mtk00714 : 20040409 */
    /* check currently there's no pending call in LMMI. eg. MO alerting or MT ringing */
    /* if there is, RMMI ATD is not allowed : otherwise 'unexpected error' might occur */
    if (src_id >= RMMI_SRC)
    {
        l4c_call_entry_struct call_entry;
        l4c_number_struct addr;
        kal_bool resp;
        kal_uint8 index = CSMCC_INVALID_CALL_ID, next_index;

        while (1)
        {
            kal_mem_set(&call_entry, 0, sizeof(l4c_call_entry_struct));
            kal_mem_set(&addr, 0, sizeof(l4c_number_struct));
            resp = l4ccsm_cc_get_call_info(index, &call_entry, &next_index);
            if (resp == KAL_FALSE)
            {
                break;
            }
            if ((call_entry.call_state == CLCC_CALL_DIALING)
                || (call_entry.call_state == CLCC_CALL_ALERTING)
                || (call_entry.call_state == CLCC_CALL_INCOMING) || (call_entry.call_state == CLCC_CALL_WAITING))
            {
                kal_brief_trace(TRACE_WARNING, WARNING_MO_CALL_FAIL_DUE_TO_IN_CALL);				
                return KAL_FALSE;
            }
            if (next_index == CSMCC_INVALID_CALL_ID)
            {
                break;
            }
            else
            {
                index = next_index;
            }
        }
    }
    /* End mtk00714 */
#endif /* __UCM_SUPPORT__ */ 

    {
        l4c_ptr->cc_current_action[src_id] = ATD_APP;
        l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_call_setup_req_struct);
        l4c_ptr->cc_parameter[src_id].data = (l4ccsm_cc_call_setup_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4ccsm_cc_call_setup_req_struct), TD_RESET);

        param_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
        param_ptr->src_id = temp_src;
        param_ptr->called_number.addr_bcd[0] = dest.type;
        count = convert_to_bcd((kal_uint8*) dest.number, (kal_uint8*) & (param_ptr->called_number.addr_bcd[1]), 40);
        param_ptr->called_number.addr_length = count + 1;
#ifdef __ECALL_SUPPORT__
        if (ecall_number_flag == KAL_TRUE)
        {
            kal_mem_cpy(&(param_ptr->called_number),&ecall_number,sizeof(l4_addr_bcd_struct));
            param_ptr->is_ecall = KAL_TRUE; 
            if (ecc_info == INFO_ECALL_TEST)
            {
                param_ptr->ecall_type = ECALL_TEST;
            }
            else
            {
                param_ptr->ecall_type = ECALL_RECONFIGURATION;
            }
        }
#endif 
        param_ptr->called_sub_addr_present = KAL_FALSE; /* sub_addr not present */
        param_ptr->cug_info = cug_option;
        param_ptr->is_cell_lock_call = KAL_FALSE;
        param_ptr->als_type = als_type;	
    }
 
    {
    #if defined(__FWP_NC_LAI_INFO__)
        if (src_id == LMMI_SRC)
        {
            kal_brief_trace(TRACE_INFO, INFO_CELL_LOCK_CALL, l4c_ptr->is_cell_lock_call);
            param_ptr->is_cell_lock_call = l4c_ptr->is_cell_lock_call;
            l4c_ptr->is_cell_lock_call = KAL_FALSE; //reset
        }
    #endif /* defined(__FWP_NC_LAI_INFO__) */ 

        if (clir_flag == CLIR_AUTO)
        {
            param_ptr->clir_info_present = KAL_FALSE;
        }
        else 
        {
            param_ptr->clir_info_present = KAL_TRUE;
            param_ptr->clir_info = clir_flag;
        }
        param_ptr->call_type = call_type;
        param_ptr->redial = redial_count;
    }
    
#ifndef __UCM_SUPPORT__
    if (src_id >= RMMI_SRC)
    {
        /* notify LMMI */
        /* Johnny: l4c_ptr->l4cphb_approve_req_string is the original whole string (include +, *31#, #31#...) */
        l4c_cc_call_setup_req_ind(
            *(l4c_number_struct*) (&(l4c_ptr->l4cphb_approve_req_string)),
            call_type,
            clir_flag,
            cug_option);
    }
#endif /* !__UCM_SUPPORT__ */
    

    param1_ptr = (l4cphb_approve_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4cphb_approve_req_struct),
                                                TD_RESET);

    param1_ptr->src_id = temp_src;
    param1_ptr->is_retrieve = KAL_TRUE;

    /* mtk00888: use l4c_ptr->l4cphb_approve_req_string */
    param1_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;

    count = convert_to_bcd(
                    (kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                    (kal_uint8*) & (param1_ptr->tel_number.addr_bcd[1]),
                    40);

    param1_ptr->tel_number.addr_length = count + 1;


    if (call_type == CSMCC_DATA_CALL)
    {
        param1_ptr->approval_type = APPROVAL_TYPE_FDN_ONLY; //MAUI_02066657
    }
    else
    {
    #ifdef __ATD_EXPLICIT_ECC__
        if (ecc_info == INFO_ECC_CALL) //MAUI_02378474 RIL wants to dial ECC
        {
            //ALPS00477424, let MOD_PHB to fill in service category
            //ALPS00849830, use custom function to switch the approve type
            param1_ptr->approval_type = ((custom_fill_ecc_category()!=KAL_FALSE)? APPROVAL_TYPE_ECC_ONLY : APPROVAL_TYPE_NONE) ;
        }
        else //ECC and FDN check by Modem
    #endif
    #ifdef __ECALL_SUPPORT__
        if ((ecc_info >= INFO_ECALL_TEST)
            && (ecc_info <= INFO_ECALL_AUTOMATICALLY_INITIATED))
        {
            param1_ptr->approval_type = APPROVAL_TYPE_NONE;
        }
        else //ECC and FDN check by Modem
    #endif
        {
            param1_ptr->approval_type = l4_custom_approval_type(L4C_CALL_OPERATION,src_id);
        }
    }
    l4c_ptr->mo_call_ecc_info = ecc_info;  
    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);

    return KAL_TRUE;
}

#endif /*__PHB_APPROVE_BY_MMI__*/
/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_modify_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_call_modify_req(kal_uint8 src_id)
{
    l4ccsm_cc_call_modify_req_struct *param_ptr;
    l4c_call_entry_struct call_entry;
    kal_uint8 call_id;
    kal_bool result;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_cmd_conflict(src_id, CMOD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    result = l4ccsm_cc_get_active_call(&call_id);

    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

        if ((call_entry.call_mode == ALT_DATA_VOICE_CALL) || (call_entry.call_mode == FOLLOW_VOICE_CALL) || (call_entry.call_mode == ALT_FAX_VOICE_CALL) || (call_entry.call_mode == ALT_DATA_DATA_CALL))       // __REL5__: should let it pass 
        {
            l4c_ptr->cc_current_action[src_id] = CMOD_EXE;

            param_ptr = (l4ccsm_cc_call_modify_req_struct*) construct_local_para
                ((kal_uint16) sizeof(l4ccsm_cc_call_modify_req_struct), TD_RESET);

            param_ptr->src_id = src_id;
            param_ptr->call_id = call_id;
            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ, param_ptr, NULL, 0);

            return KAL_TRUE;
        }
        //#ifdef __CSD_FAX__ 
        else if ((call_entry.call_mode == ALT_FAX_VOICE_CALL) || (call_entry.call_mode == ALT_FAX_FAX_CALL))
        {
            l4c_ptr->cc_current_action[src_id] = CMOD_EXE;

            param_ptr = (l4ccsm_cc_call_modify_req_struct*) construct_local_para
                ((kal_uint16) sizeof(l4ccsm_cc_call_modify_req_struct), TD_RESET);

            param_ptr->src_id = src_id;
            param_ptr->call_id = call_id;
            if (call_entry.call_mode == ALT_FAX_VOICE_CALL)
                // voice->fax
            {
                param_ptr->modify_cmd = L4C_MODIFY_ATD;
            }   //this is come from ATD
            else
                // fax->voice
            {
                param_ptr->modify_cmd = L4C_MODIFY_CMD_NONE;
            }   //this is come from Procedure Interrupt

            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ, param_ptr, NULL, 0);

            return KAL_TRUE;
        }
        //#endif
        else
        {
            return KAL_FALSE;
        }
    }
    else
    {
        return KAL_FALSE;
    }
}

#ifndef __UCM_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_ath_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  op_code     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_ath_req(kal_uint8 src_id, l4c_ath_req_enum op_code)
{
    kal_bool result;
    kal_uint8 call_id;
    kal_uint8 disc_flag = KAL_FALSE;
    l4c_call_entry_struct call_entry;
    kal_uint8 id = LMMI_SRC;
    kal_uint8 cid;//DUMA00144393
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim
    
    cid = rmmi_srcid_2_cid(src_id);

    if (is_cmd_conflict(src_id, ATH_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    rmmi_ptr->ring_count = 0;

#if defined(__TCPIP_OVER_CSD__)
    // if(src_id == RMMI_SRC)
    // {
    /* mtk00468 modify 040416 for CSD and ATH race condition */
    if (src_id == LMMI_SRC)
    {
        result = l4ccsm_cc_get_active_call(&call_id);
        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);
            if (call_entry.call_type == CSMCC_CSD_CALL)
            {
                l4c_ptr->csd_end_connect_race_flag = KAL_TRUE;
                l4c_cc_exe_chld_req(src_id, CSMCC_REL_ALL, call_id);
                return KAL_TRUE;
            }

        }

    }

    /* Johnny: src_id of ABM_ACT/PPP_ACT/ABM_ACT_ECC must be LMMI_SRC
       and ATH from RMMI_SRC should handle ABM_ACT/PPP_ACT/ABM_ACT_ECC in LMMI_SRC */
    if ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT)
        || (l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT) || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC))
    {
        if (src_id == LMMI_SRC)
            // if(l4c_ptr->ps_abm_act != KAL_TRUE)  /*WAP over CSD, send L4C_CC_ABM_DISC_IND*/
        {
            l4c_cc_abm_disc_ind_helper(CM_L4C_CC_CALL_ABORT);
        }
    }
#endif /* __TCPIP_OVER_CSD__ */ 
    /* check if call owner matches src_id */
    if (is_proper_owner(src_id) == KAL_FALSE)
    {
        return KAL_FALSE;
    }

    //abort SAT MO call
    //ATH is issued by LMMI_SRC
#ifdef __SAT__
    if (l4c_ptr->cc_current_action[SAT_SRC] == SAT_ATD_EXE)
    {
        /* L4C send proper cpi or update_call_state indication for the aborted MO call */
        if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE && l4c_ptr->retry_cc == KAL_TRUE)
        {
            l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);		
        }					                    
	
        l4c_clear_cc_queued_msg(SAT_SRC);
        l4c_ptr->cc_current_action[SAT_SRC] = L4C_NO_ACTION;
    }
#endif /* __SAT__ */ 

    if ((l4c_ptr->retry_cc == KAL_TRUE)
        && ((l4c_ptr->cc_current_action[src_id] == ATD_EXE) || (l4c_ptr->cc_current_action[src_id] == ATD_ECC)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT) //MAUI_02554068
        ))
    {
        // abort MO call
        //mtk00468 add action check for ABM and PPP cause we have CSD retry
        //handler so that we got to free timer and L4C context

        // Since LMMI specifies to hang up MO or MT call, we should clear
        // the retry only when LMMI wants to hang up the MO call.

        /* L4C send proper cpi or update_call_state indication for the aborted MO call */
        if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
        {
            l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);		
        }	

        if (src_id != LMMI_SRC)
        {
            l4c_clear_cc_queued_msg(src_id);
        }
        else if (op_code == L4C_DISCONNECT_MO)
        {
            l4c_clear_cc_queued_msg(src_id);
        }

        /* mtk01616 : RMMI ATH must inform LMMI as well */
        if (src_id >= RMMI_SRC)
        {
            l4c_result_struct result;

            result.flag = L4C_ERROR;
            result.cause = CM_L4C_GEN_CAUSE;
            l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
        }
    }

    /* Johnny: src_id of ABM_ACT/PPP_ACT/ABM_ACT_ECC must be LMMI_SRC
       and ATH from RMMI_SRC should handle ABM_ACT/PPP_ACT/ABM_ACT_ECC in LMMI_SRC */
#if defined(__TCPIP_OVER_CSD__)
    if ((l4c_ptr->retry_cc == KAL_TRUE)
        && ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT) || (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC)))
    {
        /* L4C send proper cpi or update_call_state indication for the aborted MO call */
        if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
        {
            l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);		
        }

        l4c_clear_cc_queued_msg(LMMI_SRC);
    }
#endif /* __TCPIP_OVER_CSD__ */ 

    /* LMMI/RMMI ATH req should able to clear RMMI/LMMI retry. */
    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if ((l4c_ptr->retry_cc == KAL_TRUE)
            && (l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
            && ((l4c_ptr->cc_current_action[id] == ATD_EXE)
                || (l4c_ptr->cc_current_action[id] == ATD_ECC)
                || (l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT) //MAUI_02554068
                ) && (id != src_id))
            /* if src_id = LMMI, it means LMMI ATH want to clean RMMI retry */
        {
            /* current_action[id] is ATD_EXE or ATD_ECC */
            l4c_result_struct result;

            result.flag = L4C_ERROR;

            /* L4C send proper cpi or update_call_state indication for the aborted MO call */
            if(l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE)
            {
                l4c_update_retry_call_state_ind(l4c_ptr->mo_call_id,l4c_ptr->retry_src_id);		
            }	 

            l4c_clear_cc_queued_msg(id);

            if (l4c_ptr->cc_current_action[id] == ATD_ECC_CHANGE_RAT)
            {
                if (l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
                    || l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE) == KAL_TRUE)
                {
                    l4c_ptr->cc_current_action[id] = ATD_ECC_CHANGE_RAT_ABORT;
                }
                else //after SET_RAT_MODE_ATTACH, resume from dereg
                {
                    l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                    l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                }
                l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
            }
            else
            {
                l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
            }

            if (src_id == LMMI_SRC)
            {
                //l4c_cc_exe_call_setup_lrsp(result, 0);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_cc_exe_call_setup_rrsp(result, 0);
            }
            if (src_id < RMMI_SRC)
                /* by mtk00714, RMMI: OK will be print later in
                   rmmi_basic_cmd_processor() */
            {   /* mtk00924: LMMI abort MO call of RMMI, L4C gives no carrier to TE */
                kal_uint8 temp_src;
                
                temp_src = rmmi_ptr->current_src;			
                rmmi_ptr->current_src = id;               
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_ERR_UNKNOWN);
                rmmi_ptr->current_src = temp_src;		

                l4c_cc_exe_ath_lrsp();

            }

            return KAL_TRUE;
        }
    }

    /* before phb_approve_cnf, clean both rmmi and lmmi action and state */
    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        //MAUI_02739579 clear CC parameter for non retry MO call
        if ((l4c_ptr->cc_current_action[id] == ATD_APP)
            || (l4c_ptr->cc_current_action[id] == ATD_EXE)
            || (l4c_ptr->cc_current_action[id] == ATD_ECC)
        #if defined(__TCPIP_OVER_CSD__)
            || (l4c_ptr->cc_current_action[id] == ABM_ACT_APP)
            || (l4c_ptr->cc_current_action[id] == ABM_ACT)
            || (l4c_ptr->cc_current_action[id] == ABM_ACT_ECC)
        #endif
            )
        {
            l4c_clear_cc_parameter(id);
			l4c_cc_send_csm_call_abort_req();
        }
        
        if ((l4c_ptr->cc_current_action[id] == ATD_APP)
    #if defined(__TCPIP_OVER_CSD__)
            || (l4c_ptr->cc_current_action[id] == ABM_ACT_APP)
    #endif 
            )
        {
            l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
            if (src_id == LMMI_SRC) //ATH_REQ from LMMI
            {
                l4c_cc_exe_ath_lrsp();
                
                if (id >= RMMI_SRC) //LMMI disc MO from RMMI
                {
                    kal_uint8 temp_src;
                    
                    temp_src = rmmi_ptr->current_src;
                    rmmi_ptr->current_src = id;
                    l4c_cc_call_release_rind(0, CM_NORMAL_CALL_CLR);
                    rmmi_ptr->current_src = temp_src;
                }
            }
            else //ATH from RMMI: OK will be print later in rmmi_basic_cmd_processor()
            {   
                //DUMA00144393 ATD abort by any char, no need to send DISC_REQ, reset isAtdAbort_flag here
                if (RMMI_COMM_PTR->isAtdAbort_flag & (0x01 << cid))
                {
                    kal_brief_trace(TRACE_INFO, INFO_ATH_REQ_ATD_ABORT);
                    RMMI_COMM_PTR->isAtdAbort_flag &= ~(0x01 << cid);
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_NO_ERR);
                }
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
            }

            /* DUMA00144393: MO from RMMI must inform LMMI as well */
            if (id >= RMMI_SRC)
            {
                l4c_result_struct result;

                result.flag = L4C_ERROR;
                result.cause = CM_L4C_GEN_CAUSE;
                l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
            }

            return KAL_TRUE; //DUMA00144393: no furtur action
        }
    }
    
    if ((l4c_ptr->cc_current_action[LMMI_SRC] == ATD_EXE) || (l4c_ptr->cc_current_action[LMMI_SRC] == ATD_ECC))
    {
        if (src_id >= RMMI_SRC)
        {
            l4c_result_struct result;
            kal_uint8 call_id;
            kal_bool ret_val;

            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
            ret_val = l4ccsm_cc_get_outgoing_call(&call_id);
            if ((ret_val == KAL_FALSE) || (call_id == CSMCC_INVALID_CALL_ID))
            {
                kal_brief_trace(TRACE_WARNING, WARNING_L4C_ERROR_OUTGOING_CALL_FAIL);
            }

            kal_brief_trace(TRACE_INFO, INFO_UPDATE_MMI_CALL_ID, call_id);
            l4c_cc_exe_call_setup_lrsp(result, call_id, KAL_FALSE, 0); //MAUI_02526481
        }
    }

    /* Johnny: src_id of ABM_ACT/PPP_ACT/ABM_ACT_ECC must be LMMI_SRC
       and ATH from RMMI_SRC should handle ABM_ACT/PPP_ACT/ABM_ACT_ECC in LMMI_SRC */
#if defined(__TCPIP_OVER_CSD__)
    if ((l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT) ||
        (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[LMMI_SRC] == PPP_ACT))
    {
        l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
    }
#endif

    if ((l4c_ptr->cc_current_action[src_id] == ATA_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_EXE)
        || (l4c_ptr->cc_current_action[src_id] == ATD_ECC) 
        || (l4c_ptr->cc_current_action[src_id] == L4C_NO_ACTION)
        || ((l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT) 
        && (l4c_ptr->cc_retry_ongoing_flag == KAL_TRUE)) //MAUI_02554068
        )
    {
        l4c_ptr->cc_current_action[src_id] = ATH_EXE;
    }

    result = l4ccsm_cc_get_mt_call(&call_id);   /* MT call state : CSMCC_CALL_INIT */

    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        disc_flag = KAL_TRUE;
    }
    else
    {
        result = l4ccsm_cc_get_outgoing_call(&call_id);
        if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
        {
            disc_flag = KAL_TRUE;
        }
        else
        {
            result = l4ccsm_cc_get_in_call(&call_id);
            if (result == KAL_FALSE)    //find hold call
            {
                result = l4ccsm_cc_get_hold_call(&call_id);
            }

            if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
            {
                if (src_id != RMMI_SRC)
                    /* only RMMI_SRC can dial data/fax call */
                {
                    disc_flag = KAL_TRUE;
                }
                else
                {
                    l4ccsm_cc_get_call_info(call_id, &call_entry, NULL);

                    if (call_entry.call_mode == ALT_DATA_DATA_CALL)
                    {
                        l4ccsm_cc_call_modify_req_struct *param_ptr;

                        param_ptr = (l4ccsm_cc_call_modify_req_struct*) construct_local_para
                            ((kal_uint16) sizeof(l4ccsm_cc_call_modify_req_struct), TD_RESET);

                        param_ptr->src_id = src_id;
                        param_ptr->call_id = call_id;
                        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ, param_ptr, NULL, 0);
                    }
                    else
                    {
                        if (call_entry.call_type == CSMCC_CSD_CALL)
                        {
                            return KAL_FALSE;
                        }
                        /* WAP over CSD existed, RMMI ATH can't hand up this call */
                        else
                        {
                            disc_flag = KAL_TRUE;
                        }
                    }
                }
            }
            else
            {
                /* no call exist */
                if (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
                {
                    if (l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
                        || l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE) == KAL_TRUE)
                    {
                        l4c_ptr->cc_current_action[src_id] = ATD_ECC_CHANGE_RAT_ABORT;
                    }
                    else //after SET_RAT_MODE_ATTACH, resume from dereg
                    {
                        l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                    }
                    l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
                }
                else
                {
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                }

                //DUMA00144393 no need to send DISC_REQ, so reset isAtdAbort_flag here
                if (RMMI_COMM_PTR->isAtdAbort_flag & (0x01 << cid))
                {
                    kal_brief_trace(TRACE_INFO, INFO_ATH_REQ_ATD_ABORT);
                    RMMI_COMM_PTR->isAtdAbort_flag &= ~(0x01 << cid);
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_NO_ERR);
                }
                /* by mtk00714, RMMI: OK will be print later in rmmi_basic_cmd_processor() */
                else if (src_id < RMMI_SRC)//DUMA00144393
                {
                    l4c_cc_exe_ath_lrsp();
                }

                kal_brief_trace(TRACE_INFO, INFO_ATH_NO_CALL_HANGUP);		  
                return KAL_TRUE;

            }

        }

    }

    if (disc_flag == KAL_TRUE)
    {
        kal_bool is_mo_call_exist;
        kal_uint8 mo_call_id;

        is_mo_call_exist = l4ccsm_cc_get_outgoing_call(&mo_call_id);

        if (op_code != L4C_DISCONNECT_MO || is_mo_call_exist == KAL_TRUE)
        {
            l4ccsm_cc_call_disc_req_struct *param_ptr;

            param_ptr = (l4ccsm_cc_call_disc_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct),
                                                            TD_RESET);

            param_ptr->src_id = src_id;
            if (is_mo_call_exist == KAL_TRUE)
            {
                param_ptr->call_id = mo_call_id;
            }
            else
            {
                param_ptr->call_id = call_id;
            }
            l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
        }
        else
        {
            /* abort MO and MO not exist, retry timer is not expired, queue in l4c context */
            if (l4c_ptr->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
            {
                if (l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
                    || l4c_check_user_action(L4C_RAC, L4C_SRC, SET_RAT_MODE) == KAL_TRUE)
                {
                    l4c_ptr->cc_current_action[src_id] = ATD_ECC_CHANGE_RAT_ABORT;
                }
                else //after SET_RAT_MODE_ATTACH, resume from dereg
                {
                    l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                }
                    l4c_ptr->enhanced_ecc_id = CSMCC_INVALID_CALL_ID;
            }
            else
            {
                l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            }

            if (src_id < RMMI_SRC)
                /* by mtk00714, RMMI: OK will be print later in rmmi_basic_cmd_processor() */
            {
                l4c_cc_exe_ath_lrsp();
            }
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}
#endif /* __UCM_SUPPORT__ */ 

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
#if defined(__TCPIP_OVER_CSD__)
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
#endif /* __TCPIP_OVER_CSD__ */ 
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
#if defined(__TCPIP_OVER_CSD__)
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
            #if defined(__NONE_USED_L4MMI_MESSAGE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
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
    #if defined(__TCPIP_OVER_CSD__) 
/* under construction !*/
    #endif 
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
            #if defined(__NONE_USED_L4MMI_MESSAGE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__TCPIP_OVER_CSD__) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
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
                #if defined(__NONE_USED_L4MMI_MESSAGE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
                #endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #if defined(__NONE_USED_L4MMI_MESSAGE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* remove ath handling in  __UCM_SUPPORT__*/ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_disc_aux_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_exe_disc_aux_req(kal_uint8 src_id)
{
    kal_bool result;
    kal_uint8 call_id;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

#if defined(__TCPIP_OVER_CSD__) 
    if ((l4c_ptr->cc_current_action[src_id] == PPP_ACT)
        || (l4c_ptr->cc_current_action[src_id] == ABM_DISC)
        || (l4c_ptr->cc_current_action[src_id] == ABM_DEACT)
        || (l4c_ptr->cc_current_action[src_id] == ABM_ACT_ECC) || (l4c_ptr->cc_current_action[src_id] == ABM_ACT))
    {
        l4c_result_struct res;

        result = l4ccsm_cc_get_in_call(&call_id);

        if (l4c_ptr->cc_current_action[src_id] == ABM_ACT)
        {
            // abort MO call
            l4c_clear_cc_queued_msg(src_id);
            if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
            {
                //mtk01616_070818: MMI will receive call_rel_ind with call_id ,to prevent confusing , response a dial_ind with this call_id first
                res.flag = L4C_OK;
                res.cause = L4C_NO_CAUSE;
                l4c_cc_exe_call_setup_lrsp(res, call_id, KAL_FALSE, 0); //MAUI_02526481
            }
        }
    }
    else
#endif 
    {
        result = l4ccsm_cc_get_active_call(&call_id);
    }

    if ((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
    {
        l4ccsm_cc_call_disc_req_struct *param_ptr;

        param_ptr = (l4ccsm_cc_call_disc_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_call_disc_req_struct),
                                                        TD_RESET);
        param_ptr->src_id = src_id;
        param_ptr->call_id = call_id;

    #ifdef __UCM_SUPPORT__
        l4c_ptr->csd_call_end = KAL_TRUE; //MAUI_01801045
        kal_brief_trace(TRACE_INFO, INFO_L4C_LOCAL_DISCONNECT, l4c_ptr->csd_call_end);
    #endif

        l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_DISC_REQ, param_ptr, NULL, 0);
        return KAL_TRUE;
    }
    else
    {   //if there is no call exist, set action to L4C_NO_ACTION
        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
        return KAL_FALSE;
    }
}

#ifdef __SAT__


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_call_setup_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_ptr       [IN]         
 *  peer_ptr        [IN]         
 *  length          [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sat_call_setup_req(l4ccsm_cc_sat_setup_req_struct *local_ptr, kal_uint8 *peer_ptr, kal_uint8 length)
{

    l4ccsm_cc_sat_setup_req_struct *msg_ptr = NULL;
    l4ccsm_cc_sat_setup_req_struct *param_ptr = NULL;
    kal_uint8 src_id;
    l4_addr_bcd_struct called_number;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (is_cmd_conflict(SAT_SRC, SAT_ATD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    l4c_ptr->cc_current_action[SAT_SRC] = SAT_ATD_EXE;

#if 0 //MAUI_02637141
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

    msg_ptr = (l4ccsm_cc_sat_setup_req_struct*) local_ptr;
    src_id = msg_ptr->src_id;

    /* local pram */
    l4c_ptr->cc_parameter[src_id].length = sizeof(l4ccsm_cc_sat_setup_req_struct);

    l4c_ptr->cc_parameter[src_id].data = (l4ccsm_cc_sat_setup_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4ccsm_cc_sat_setup_req_struct), TD_RESET);

    param_ptr = (l4ccsm_cc_sat_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
    param_ptr->src_id = msg_ptr->src_id;
    param_ptr->sat_call_type = msg_ptr->sat_call_type;
    param_ptr->called_sub_addr_present = msg_ptr->called_sub_addr_present;
    kal_mem_cpy(&param_ptr->called_sub_addr, &msg_ptr->called_sub_addr, sizeof(l4ccsm_cc_sub_addr_struct));
    param_ptr->ccp_present = msg_ptr->ccp_present;
    kal_mem_cpy(param_ptr->ccp, msg_ptr->ccp, MAX_SAT_SIZE_OF_CCP);
    param_ptr->size_of_ccp = msg_ptr->size_of_ccp;
    param_ptr->type_of_modification = msg_ptr->type_of_modification; 
    param_ptr->l4c_retry = msg_ptr->l4c_retry;
    //mtk01616_090417: apply clir option for sat callsetup
    if (L4C_PTR->clir_flag == CLIR_AUTO)
    {
        param_ptr->clir_info_present = KAL_FALSE;
    }
    else
    {
        param_ptr->clir_info_present = KAL_TRUE;
        param_ptr->clir_info = L4C_PTR->clir_flag;
    }

    // peer_ptr is the addr in SAT_CALL_SETUP_STAGE1_REQ , already in bcd format!!      
    kal_mem_set(&called_number, 0, sizeof(l4_addr_bcd_struct));
    kal_mem_cpy(called_number.addr_bcd, peer_ptr, length);
    called_number.addr_length = length;

    param_ptr->is_emergency_call = ecc_custom_verify_emergency_number(
                                    called_number.addr_bcd, 
                                    called_number.addr_length, 
                                    ECC_ENCODING_BCD, 
                                    ECC_SAT_CALL,
                                    NULL, NULL, NULL);

    /* mtk01616_100223: we need to check if the time elapsed since the first call set-up attempt has exceeded the redial duration */
    if((l4c_ptr->sat_redial_flag == KAL_TRUE) && (l4c_ptr->sat_redial_duration!=0))
    {
        //sat_redial_duration =0 means duration field is not present , we only check redial duration if it's present
        l4c_start_sat_redial_duration_timer_hdlr();
    }
	
    /* peer buffer */
    l4c_ptr->cc_peer_buf.length = length;
    if (length > 0)
    {
        peer_ptr[0] = custom_l4c_sat_ton_npi_transform(peer_ptr[0]); //MAUI_02959082
        l4c_ptr->cc_peer_buf.data = get_ctrl_buffer(length + 1); //MAUI_02543184 add one byte for 0xff
        kal_mem_cpy(l4c_ptr->cc_peer_buf.data, peer_ptr, length);
        ((kal_uint8*)(l4c_ptr->cc_peer_buf.data))[length] = 0xff; //MAUI_02543184
    }

    l4c_send_msg_hdlr(src_id, L4C_CALL_OPERATION);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_send_dtmf_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  dtmf_digit      [IN]         
 *  no_digit        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sat_send_dtmf_req(kal_uint8 src_id, kal_uint8 *dtmf_digit, kal_uint8 no_digit)
{
    l4ccsm_cc_sat_send_dtmf_req_struct *param_ptr;

    if (no_digit > 20)
    {
        ASSERT(0);
    }

    param_ptr = (l4ccsm_cc_sat_send_dtmf_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4ccsm_cc_sat_send_dtmf_req_struct),
                                                        TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->no_dtmf = no_digit;
    kal_mem_cpy(param_ptr->dtmf, dtmf_digit, no_digit);

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sat_abort_dtmf_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_sat_abort_dtmf_req(kal_uint8 src_id)
{
    l4ccsm_cc_sat_abort_dtmf_req_struct *param_ptr;

    param_ptr = (l4ccsm_cc_sat_abort_dtmf_req_struct*) construct_local_para(
                                                        (kal_uint16) sizeof (l4ccsm_cc_sat_abort_dtmf_req_struct),
                                                        TD_RESET);

    param_ptr->src_id = src_id;

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_SAT_ABORT_DTMF_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}

#endif /* __SAT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_cphs_update_als_req
 * DESCRIPTION
 *  This function is just for L4c to provide MMI with get CSD profile
 * PARAMETERS
 *  src_id      [IN]            
 *  line_id     [IN]            
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_cphs_update_als_req(kal_uint8 src_id, kal_uint8 line_id)
{

    l4ccsm_cc_update_als_req_struct *param_ptr;

    /*
     * kal_uint8 call_id;
     * kal_bool result;
     * l4c_call_entry_struct call_info;
     * kal_uint8 next_call_id;
     */

    if (is_cmd_conflict(src_id, CPHS_ALS_UPDATE) == KAL_TRUE)
    {
        l4c_cphs_update_als_lrsp(KAL_FALSE, L4C_CMD_CONFLICT);
        return KAL_FALSE;
    }
    /*
     * result = l4ccsm_cc_get_in_call(&call_id);//reject update if any in_all or active call exist
     * while((result == KAL_TRUE) && (call_id != CSMCC_INVALID_CALL_ID))
     * {
     * 
     * result = l4ccsm_cc_get_call_info(call_id, &call_info, &next_call_id);
     * if(result == KAL_TRUE && call_info.call_orig == CLCC_MO_CALL)
     * return KAL_FALSE;
     * call_id = next_call_id;
     * }
     */
    L4C_PTR->cc_current_action[src_id] = CPHS_ALS_UPDATE;

    param_ptr = (l4ccsm_cc_update_als_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_update_als_req_struct),
                                                    TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->line_id = line_id;

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_UPDATE_ALS_REQ, param_ptr, NULL, 0);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_rel_comp_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  call_id     [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_cc_rel_comp_req(kal_uint8 src_id, kal_uint8 call_id)
{
    l4ccsm_cc_rel_comp_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    param_ptr = (l4ccsm_cc_rel_comp_req_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_rel_comp_req_struct),
                                                    TD_RESET);

    param_ptr->call_id = call_id;

    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_REL_COMP_REQ, param_ptr, NULL, 0);

    l4c_ptr->retry_cc = KAL_FALSE;
    l4c_ptr->retry_count = 0;
    l4c_ptr->max_retry_count = cm_max_retry_count();

    return KAL_TRUE;
}

#ifdef __VOIP__


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_voip_at_call_ctrl_approve_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  action          [IN]        
 *  string_ptr      [IN]         
 *  node_ptr        [IN]         
 *  err_id          [IN]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_voip_at_call_ctrl_approve_req(
        kal_uint8 result,
        kal_uint8 action,
        void *string_ptr,
        void *node_ptr,
        void *err_id)
{
    kal_bool ret = KAL_TRUE;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;	
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    kal_brief_trace(TRACE_INFO, INFO_CLEAR_ROUTE_THRU_LMMI);

    if (result == KAL_TRUE)
    {
        rmmi_ptr->cm_cmd_approve = KAL_TRUE;
        switch (action)
        {
            case RMMI_CM_ATA:
                ret = rmmi_ata_hdlr(
                        (rmmi_string_struct*) rmmi_ptr->string_ptr,
                        (rmmi_multiple_basic_cmd_struct*) rmmi_ptr->node_ptr,
                        (rmmi_err_id_enum*) rmmi_ptr->id);
                break;
            case RMMI_CM_ATD:
                ret = rmmi_atd_hdlr(
                        (rmmi_string_struct*) rmmi_ptr->string_ptr,
                        (rmmi_multiple_basic_cmd_struct*) rmmi_ptr->node_ptr,
                        (rmmi_err_id_enum*) rmmi_ptr->id);
                break;
            case RMMI_CM_ATH:
                ret = rmmi_ath_hdlr(
                        (rmmi_string_struct*) rmmi_ptr->string_ptr,
                        (rmmi_multiple_basic_cmd_struct*) rmmi_ptr->node_ptr,
                        (rmmi_err_id_enum*) rmmi_ptr->id);
                if (*(rmmi_err_id_enum*) (rmmi_ptr->id) == RMMI_ERR_NO_CALL_DISC)
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
                }
                break;
            case RMMI_CM_CHLD:
                rmmi_chld_hdlr((rmmi_string_struct*) rmmi_ptr->string_ptr);
                break;
            case RMMI_CM_BLDN:
            #ifdef __BT_SUPPORT__
                rmmi_bldn_hdlr((rmmi_string_struct*) rmmi_ptr->string_ptr);
            #endif 
                break;
        }

        if (ret == KAL_FALSE)
        {
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        }

    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);

    }

    if (rmmi_ptr->string_ptr != NULL && ((rmmi_string_struct*) rmmi_ptr->string_ptr)->string_ptr != NULL)
    {
        free_ctrl_buffer(((rmmi_string_struct*) rmmi_ptr->string_ptr)->string_ptr);
        ((rmmi_string_struct*) rmmi_ptr->string_ptr)->string_ptr = NULL;
    }

    if (rmmi_ptr->string_ptr != NULL)
    {
        free_ctrl_buffer(rmmi_ptr->string_ptr);
        rmmi_ptr->string_ptr = NULL;
    }

    if (rmmi_ptr->node_ptr != NULL)
    {
        free_ctrl_buffer(rmmi_ptr->node_ptr);
        rmmi_ptr->node_ptr = NULL;
    }

    if (rmmi_ptr->id != NULL)
    {
        free_ctrl_buffer(rmmi_ptr->id);
        rmmi_ptr->id = NULL;
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4c_set_current_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  action      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_set_current_action(kal_uint8 src_id, kal_uint16 action)
{
    L4C_PTR->cc_current_action[src_id] = action;
}
#endif /* __VOIP__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_ucm_at_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_id       [IN]        
 *  result          [IN]        
 *  cause           [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_ucm_at_res_req(kal_uint8 source_id, kal_uint8 result, kal_uint8 cause)
{
#ifdef __UCM_SUPPORT__
    kal_uint8 i;
    kal_uint8 cid; //MAUI_02166851
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(L4C_CCSS_TRC, L4C_MMI_UCM_AT_RES_REQ, source_id, result, cause);

#if defined(__TC01__) && !defined(EXTERNAL_MMI) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    l4c_ptr->route_thru_lmmi = KAL_FALSE;
    rmmi_ptr->current_src = l4c_ptr->route_thru_lmmi_user;	
    l4c_ptr->route_thru_lmmi_user = INVALID_SRC;
    kal_brief_trace(TRACE_INFO, INFO_CLEAR_ROUTE_THRU_LMMI);

    for (i = LMMI_SRC; i < MAX_SOURCE_NUM; i++)
    {
        if (l4c_ptr->cc_current_action[i] != L4C_NO_ACTION)
        {
            kal_brief_trace(TRACE_STATE, STATE_L4C_CC_ACTION, i, l4c_ptr->cc_state[i], l4c_ptr->cc_current_action[i]);
        }
    }

    if (result == KAL_FALSE)
    {
        cid = rmmi_srcid_2_cid(source_id);
        if (RMMI_COMM_PTR->isAtdAbort_flag & (0x1 << cid))
        {
            kal_brief_trace(TRACE_INFO, INFO_ATH_REQ_ATD_ABORT);
            RMMI_COMM_PTR->isAtdAbort_flag &= ~(0x01 << cid);
            return;
        }
        
        if (rmmi_ptr->is_ucm_action == KAL_TRUE)
        {
            rmmi_ptr->is_ucm_action = KAL_FALSE;
            kal_brief_trace(TRACE_STATE, STATE_CLEAR_IS_UCM_ACTION);
        }

        #if defined(__BT_SUPPORT__) 
        if ((source_id == RMMI_COMM_PTR->rmmi_hf_src) && (rmmi_ptr->send_ciev_callheld == KAL_TRUE))
        {
            rmmi_ptr->send_ciev_callheld = KAL_FALSE;
        }
        #endif

        rmmi_ptr->current_src = source_id;

        switch (cause)
        {
            case RMMI_UCM_CAUSE_NO_CALL_TO_HANGUP:
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
                break;

            case RMMI_UCM_CAUSE_ATD_DATA_NOT_ALLOWED://MAUI_02634907
            {
                kal_uint8 port = uart_port_null;
                port = rmmi_cid_2_port(cid);

                rmmi_start_ath_for_dialup_hdlr(port); //to ignore following ATH from PC in 5 seconds
                
                //don't break here to print below "NO CARRIER"
            }
            case RMMI_UCM_CAUSE_ATA_NOT_ALLOWED:
            case RMMI_UCM_CAUSE_NO_CALL_TO_ANSWER:
            case RMMI_UCM_CAUSE_ATD_NOT_ALLOWED:
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_ERR_UNSPECIFIED);
                break;

            case RMMI_UCM_CAUSE_INVALID_CALLID:
                rmmi_ptr->cmee_err = RMMI_ERR_INVALID_INDEX;
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);
                break;

            case RMMI_UCM_CAUSE_ATH_NOT_ALLOWED:
            case RMMI_UCM_CAUSE_CHLD_NOT_ALLOWED:
            case RMMI_UCM_CAUSE_NO_CALL_TO_HOLD:
            case RMMI_UCM_CAUSE_NO_CALL_TO_REL:
            case RMMI_UCM_CAUSE_NO_CALL_TO_ECT:
            case RMMI_UCM_CAUSE_NO_CALL_TO_CONFERENCE:
                rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);
                break;

            default:
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
                break;
        }       //end switch
    }
#endif 	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_ucm_rcode_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_id       [IN]        
 *  type            [IN]        
 *  call_id         [IN]        
 *  call_type       [IN]        
 *  number          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_ucm_rcode_req(
        kal_uint8 source_id,
        kal_uint8 type,
        kal_uint8 call_id,
        kal_uint8 call_type,
        l4c_number_struct number)
{
#ifdef __UCM_SUPPORT__
    l4c_sub_addr_struct sub_addr;
    kal_uint8 name;
    kal_uint8 temp_src;
    kal_uint8 cid;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(L4C_CCSS_TRC, L4C_MMI_UCM_RCODE_REQ, source_id, type, call_id);

#if defined(__TC01__)  && !defined(EXTERNAL_MMI) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
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

    if (rmmi_ptr->is_ucm_action == KAL_TRUE)
    {
        rmmi_ptr->is_ucm_action = KAL_FALSE;
        kal_brief_trace(TRACE_STATE, STATE_CLEAR_IS_UCM_ACTION);
    }

    /* MAUI_02016224 UCM will separate compound action
       L4C helps to prevent send +CIEV before receiving GENERAL_RCODE_REQ */
    if (rmmi_ptr->is_compound_action == KAL_TRUE)
    {
        rmmi_ptr->is_compound_action = KAL_FALSE;
    }
    
    switch (type)
    {
        case RMMI_UCM_RCODE_OK:
            // ATS0 auto answer , we don't need to response OK/ERROR
            if (rmmi_ptr->ats0_auto_answer == KAL_TRUE)
            {
                rmmi_ptr->ats0_auto_answer = KAL_FALSE;
                return;
            }
            rmmi_ptr->current_src = source_id;
            cid = rmmi_srcid_2_cid(source_id);
            if (RMMI_COMM_PTR->isAtdAbort_flag & (0x1 << cid))
            {
                kal_brief_trace(TRACE_INFO, INFO_ATH_REQ_ATD_ABORT);
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, RMMI_NO_ERR);
                RMMI_COMM_PTR->isAtdAbort_flag &= ~(0x01 << cid);
            }
            else
            {
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            }
            break;

        case RMMI_UCM_RCODE_CONNECT:
            break;

        case RMMI_UCM_RCODE_RING:
        #ifdef __RMMI_UART_CURRENT_SIM_SUPPORT__
            /* 
                MAUI_02833893: If this compile option is defined, RMMI controls gemini modem by parsing +CURSIM.
                UCM sends RING to all SIM for solving BT HF non-SIM1 MT call problem. But this would confuse RMMI 
                so L4C filters here.
            */
            if (l4c_ptr->mt_call_incoming == KAL_FALSE)
            {
                break;
            }
        #endif
            temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
            //mtk01616_070707 : only voice should send RING URC to BT device
        #ifdef __BT_SUPPORT__
            if ((call_type != CSMCC_VOICE_CALL) && (call_type != CSMCC_AUX_VOICE_CALL) && (call_type != CSMCC_VIDEO_CALL))
            {
                rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
            }
        #endif /* __BT_SUPPORT__ */ 

            kal_mem_set(&sub_addr, 0, sizeof(l4c_sub_addr_struct));

            //we don't support <alpha>  now                        
            l4c_cc_call_ring_rind(call_id, &number, &sub_addr, &name, rmmi_ptr->clip_info.cli_validity, call_type);

        #ifdef __BT_SUPPORT__
            rmmi_ptr->except_src = INVALID_SRC;
        #endif 
            rmmi_ptr->current_src = temp_src;					
            break;

        case RMMI_UCM_RCODE_NO_CARRIER:
            // ATS0 auto answer , we don't need to response OK/ NO CARRIER
            if (rmmi_ptr->ats0_auto_answer == KAL_TRUE)
            {
                rmmi_ptr->ats0_auto_answer = KAL_FALSE;
                return;
            }

            //Reference l4ccsm_cc_call_rel_ind_hdlr , it won't print "NO CARRIER" when ATH,CHLD
            if (l4c_ptr->cc_current_action[source_id] != CHLD_EXE && l4c_ptr->cc_current_action[source_id] != ATH_EXE)
            {
	            temp_src = rmmi_ptr->current_src;
                rmmi_ptr->current_src = source_id;
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);    // L4C_GEN_CAUSE!?
                rmmi_ptr->current_src = temp_src;	
            }
            else
            {
                kal_brief_trace(TRACE_INFO, INFO_NOT_PRINT_NO_CARRIER);
            }
            break;

        case RMMI_UCM_RCODE_ERROR:
            rmmi_ptr->current_src = source_id;	
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);
            break;

        case RMMI_UCM_RCODE_CCWA:
	    temp_src = rmmi_ptr->current_src;
            rmmi_ptr->current_src = RMMI_UNSOLICITED;
        #ifdef __BT_SUPPORT__
            if ((call_type != CSMCC_VOICE_CALL) && (call_type != CSMCC_AUX_VOICE_CALL) && (call_type != CSMCC_VIDEO_CALL))
            {
                rmmi_ptr->except_src = RMMI_COMM_PTR->rmmi_hf_src;
            }
        #endif /* __BT_SUPPORT__ */ 

            kal_mem_set(&sub_addr, 0, sizeof(l4c_sub_addr_struct));

            //we don't support <alpha> , <cli_validity> now
            l4c_cc_call_wait_rind(call_id, &number, call_type, &name, rmmi_ptr->clip_info.cli_validity);

        #ifdef __BT_SUPPORT__
            rmmi_ptr->except_src = INVALID_SRC;
        #endif 
            rmmi_ptr->current_src = temp_src;			
            break;

        default:
            break;
    }
    return;
#endif 	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_mmi_ucm_hf_ciev_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ind_type        [IN]        
 *  event           [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_mmi_ucm_hf_ciev_req(kal_uint8 ind_type, kal_uint8 event)
{
#ifdef __UCM_SUPPORT__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    kal_brief_trace(L4C_CCSS_TRC, L4C_MMI_UCM_HF_CIEV_REQ, ind_type, event);

#if defined (__BT_SUPPORT__)
    /* MAUI_02016224 UCM will separate compound action
       L4C helps to prevent send +CIEV before receiving GENERAL_RCODE_REQ */
    if (rmmi_ptr->is_compound_action == KAL_TRUE)
    {
        return;
    }
    
    l4c_cc_handfree_rind(ind_type, event);
#else /* defined (__BT_SUPPORT__) */ 
    if (ind_type == RMMI_CIND_CALL)
    {
        rmmi_ptr->indicators.call = event;
    }
    else if (ind_type == RMMI_CIND_CALLSETUP)
    {
        rmmi_ptr->indicators.callsetup = event;
    }
#endif /* defined (__BT_SUPPORT__) */ 
#endif 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_data_call_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  source_id       [IN]        
 *  result          [IN]        
 *  cause           [IN]  
 *  opcode          [IN]   
 *  call_type       [IN]    
 *  number          [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_data_call_res_req(kal_uint8 source_id, 
                              kal_uint8 result, 
                              kal_uint8 cause,
                              kal_uint8 opcode,                              
                              kal_uint8 call_type,
                              l4c_number_struct number)
{
#ifdef __UCM_SUPPORT__
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    l4_addr_bcd_struct tel_number;
#if defined(__PHB_APPROVE_BY_MMI__)
    kal_uint16 phb_cause = CM_L4C_GEN_CAUSE;
    kal_bool is_ecc = KAL_FALSE;
    kal_uint8 ecc_category;
    l4ccsm_cc_emergency_call_setup_req_struct *ecc_param_ptr;
#else
    l4cphb_approve_req_struct *param_ptr;
#endif

    if (result == KAL_TRUE)
    {
        // MO CSD callsetup
        if((opcode == CALL_DIAL) &&
           (l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_APP && call_type == CSMCC_CSD_CALL))
        {
            tel_number.addr_bcd[0] = number.type;
            tel_number.addr_length = 1 + convert_to_bcd(
                                            (kal_uint8*) number.number,
                                            (kal_uint8*) &(tel_number.addr_bcd[1]),
                                            40);

        #if defined(__PHB_APPROVE_BY_MMI__)
            /* 
               PHB approve by MMI via function call
               check ECC first
            */
            is_ecc = ecc_custom_verify_emergency_number(
                            tel_number.addr_bcd, 
                            tel_number.addr_length, 
                            ECC_ENCODING_BCD, 
                            (ecc_call_type_enum)(ECC_SIM1_CALL + (l4c_current_mod_id - MOD_L4C)),
                            &ecc_category, NULL, NULL);
            
            if (is_ecc == KAL_TRUE)
            {
                /* free original normal call setup parameter and reconstruct ECC setup parameter */
                l4c_clear_cc_parameter(LMMI_SRC);
                l4c_ptr->cc_parameter[LMMI_SRC].length = sizeof(l4ccsm_cc_emergency_call_setup_req_struct);

                l4c_ptr->cc_parameter[LMMI_SRC].data = (l4ccsm_cc_emergency_call_setup_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_emergency_call_setup_req_struct), TD_RESET);

                ecc_param_ptr = (l4ccsm_cc_emergency_call_setup_req_struct*) l4c_ptr->cc_parameter[LMMI_SRC].data;
                ecc_param_ptr->src_id = LMMI_SRC;
                kal_mem_cpy(&(ecc_param_ptr->called_number), &tel_number, sizeof(l4_addr_bcd_struct));
                ecc_param_ptr->service_category = ecc_category; //for R5 ECC category
                l4c_ptr->cc_current_action[LMMI_SRC] = ABM_ACT_ECC;                
            }
            else if (KAL_FALSE == custom_phb_xmgnt_approve_fdn(tel_number.addr_bcd, 
                                                               tel_number.addr_length,
                                                               (kal_uint8)(l4c_current_mod_id - MOD_L4C),
                                                               L4C_CALL_OPERATION,
                                                               &phb_cause))
            {
                /* approve fail */
            #if defined(__TCPIP_OVER_CSD__)
                l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
            #endif
                //response to LMMI
                l4c_cc_exe_call_dial_lrsp(LMMI_SRC, 
                                  L4C_ERROR, 
                                  (phb_cause==PHB_APPROVE_FDN_BLOCKED)?(PHB_CAUSE_FDN_BLOCKED):(CM_L4C_GEN_CAUSE), //MAUI_02990419
                                  0, 
                                  KAL_FALSE, 
                                  0); //MAUI_01924242
                l4c_ptr->cc_current_action[LMMI_SRC] = L4C_NO_ACTION;
                l4c_clear_cc_queued_msg(LMMI_SRC);
                return;
            }
            else
            {
                /* normal CSD call */
                l4c_ptr->cc_current_action[LMMI_SRC] = ABM_ACT;
            }
            l4c_send_msg_hdlr(LMMI_SRC, L4C_CALL_OPERATION);
        #else /* !defined(__PHB_APPROVE_BY_MMI__) */
            param_ptr = (l4cphb_approve_req_struct*) construct_local_para(
                                                (kal_uint16) sizeof(l4cphb_approve_req_struct),
                                                TD_RESET);

            param_ptr->src_id = source_id;
            param_ptr->is_retrieve = KAL_FALSE;
            param_ptr->approval_type = l4_custom_approval_type(L4C_CSD_OPERATION,LMMI_SRC);
            kal_mem_cpy(&(param_ptr->tel_number), &tel_number, sizeof(l4_addr_bcd_struct));

            l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param_ptr, NULL);
        #endif /* defined(__PHB_APPROVE_BY_MMI__) */
        }
        else
        {
            //error or atd is aborted by any character or aborted due to mt call,etc.
        }
    }
    else
    {
        if(l4c_ptr->cc_current_action[LMMI_SRC] == ABM_ACT_APP)
        {
        #if defined(__TCPIP_OVER_CSD__)
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());       
        #endif		
		
            l4c_clear_cc_queued_msg(source_id);
		
            l4c_ptr->cc_current_action[source_id] = L4C_NO_ACTION;
        }
		else
        {
            //error or atd is aborted by any character
        }
    }		
#endif 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_call_present_res_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  is_mt_call_allowed        [IN]      
 *  call_id		      [IN]        
 *  seq_num                   [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_call_present_res_req(kal_uint8 is_mt_call_allowed,kal_uint8 call_id,kal_uint8 seq_num)
{
#ifdef __AUTO_CALL_REJECTION__
    l4ccsm_cc_call_present_rsp_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    kal_brief_trace(TRACE_INFO,INFO_MT_CALL_APPROVAL,l4c_ptr->mt_call_approval);
    param_ptr = (l4ccsm_cc_call_present_rsp_struct*) construct_local_para(
                                                    (kal_uint16) sizeof(l4ccsm_cc_call_present_rsp_struct),
                                                    TD_RESET);
    param_ptr->call_id = call_id;	
    param_ptr->seq_num = seq_num;
    l4c_ptr->present_call_id = CSMCC_INVALID_CALL_ID; 

    if(is_mt_call_allowed == MT_CALL_APPROVAL_ENABLE) 
    {
        kal_brief_trace(TRACE_INFO, INFO_ENABLE_MT_CALL_APPROVAL);
        l4c_ptr->mt_call_approval = MT_CALL_APPROVAL_ENABLE;
        free_local_para((local_para_struct *)param_ptr);
        return;	
    }
    else if(is_mt_call_allowed == MT_CALL_APPROVAL_DISABLE)
    {
        l4c_ptr->mt_call_approval = MT_CALL_APPROVAL_DISABLE;
        free_local_para((local_para_struct *)param_ptr);
        return;
    }	

    if(l4c_ptr->mt_call_approval == MT_CALL_APPROVAL_ENABLE)
    {
        if(is_mt_call_allowed == MT_CALL_REJECT)
        {
            param_ptr->is_mt_call_allowed = KAL_FALSE;
        }
        else
        {
            param_ptr->is_mt_call_allowed = KAL_TRUE;
        }
    }
    else
    {   
        free_local_para((local_para_struct *)param_ptr);
        return;
    }	
	
    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP, param_ptr, NULL, 0);
	
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_cpi_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode        [IN]      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_cpi_req(kal_uint32 mode)
{
    L4C_COMM_PTR->cpi_mode = mode; /* l4c_cpi_report_mode_enum */   
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_ton_req
 * DESCRIPTION
 *  This is l4c_cc_set_ton_req function for MMI to set L4C context cc_ton.
 *  cc_ton is used to fill the type of number for further SETUP request to CSM.
 *  Refers to TS 24.008 10.5.4.7 the octet 3 of Called party BCD number IE.
 *  The value of this context is between 128 to 255
 *
 * PARAMETERS
 *  ton_type    [IN]        
 * RETURNS
 *  KAL_TRUE if success, else KAL_FALSE
 *****************************************************************************/
kal_bool l4c_cc_set_ton_req(kal_uint8 ton_type)
{
    if (ton_type < 128)
    {
        return KAL_FALSE;
    }
    L4C_PTR->cc_ton = ton_type;
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_ton_req
 * DESCRIPTION
 *  This is l4c_cc_get_ton_req function for MMI to get L4C context cc_ton.
 *
 * PARAMETERS
 *  ton_type    [OUT]
 * RETURNS
 *  always KAL_TRUE for success
 *****************************************************************************/
kal_bool l4c_cc_get_ton_req(kal_uint8 *ton_type)
{
    *ton_type = L4C_PTR->cc_ton;
    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_set_evdlcall_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode    [OUT]
 * RETURNS
 *  always KAL_TRUE for success
 *****************************************************************************/
kal_bool l4c_cc_set_evdlcall_mode_req(kal_uint8 mode)
{
    L4C_PTR->evdl_mode = mode;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_evdlcall_mode_req
 * DESCRIPTION
 *  
 *
 * PARAMETERS
 *  mode    [OUT]
 * RETURNS
 *  always KAL_TRUE for success
 *****************************************************************************/
kal_bool l4c_cc_get_evdlcall_mode_req(kal_uint8 *mode)
{
    *mode = L4C_PTR->evdl_mode;

    return KAL_TRUE;
}


#if defined(__CTM_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_set_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mode        [IN]    kal_bool to indicate whether CTM call is supporeted
 * RETURNS
 *  NONE
 *****************************************************************************/
void l4c_ctm_set_status_req(kal_uint8 mode)
{
    l4ccsm_cc_set_ctm_status(mode);
    return;
}
#endif /* __CTM_SUPPORT__ */

#endif /* __MOD_CSM__ */ 

