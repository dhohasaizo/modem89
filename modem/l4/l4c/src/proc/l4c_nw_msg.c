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
 * L4C_NW_MSG.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_NW_MSG_C
#ifdef __MOD_RAC__
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "ps_trace.h"
#include "kal_trace.h"
//#include "stack_ltlcom.h"
#include "drv_msgid.h"
#include "md_sap.h"
#include "l4_msgid.h"
//#include "mmi_msgid.h"
#ifdef __TCPIP__
#include "abm_msgid.h"
#endif

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"
//#include "custom_nvram_editor_data_item.h"

//#include "mcd_l4_common.h"
#include "event_info_utility.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"
#include "l4_trc.h"

//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"

//#include "l4_defs.h"

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"

#ifdef __MOD_SMU__
//#include "ps2sat_struct.h"
#endif 
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
#include "csmss_aux_msg_hdlr.h"
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_defs.h"
#include "smsal_l4c_funcs.h"
#endif /* __MOD_SMSAL__ */ 
#ifdef __TCPIP__
//#include "abm_soc_enums.h"
#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
#endif /* __TCPIP__ */ 
#include "l3_inc_enums.h"

#include "l3_inc_local.h"
#include "mcd_l3_inc_struct.h"
#include "mcd_mm_common_gen_struct.h"
#include "l3_inc_enums.h"

#include "l4crac_enums.h"
#include "l4crac_func.h"
#include "l4c2rac_struct.h"
#include "rac2l4c_struct.h"     /* rac header file */
//#include "smsal_l4c_enum.h"

#include "l4c_utility.h"

#include "l4c_nw_msg.h"
#include "l4c_nw_cmd.h"

//#include "l4a.h"
#include "csmcc_atfunc.h"
//#include "l4c2smu_struct.h"
#include "rmmi_rsp.h"
#include "lmmi_rsp.h"
#include "lmmi_ind.h"
#include "rmmi_ind.h"
#include "l4c_nw_cmd.h"
#include "l4c_cc_msg.h"
//#include "l4c2phb_enums.h"
#include "l4c2phb_struct.h"
//#include "event_info_trc.h"
#include "l4c_sim_cmd.h"
#ifdef __MOD_TCM__
#include "l4c2tcm_func.h"
#endif

#if defined(__PLMN_LIST_PREF_SUPPORT__) || defined(__DYNAMIC_HSPA_PREFERENCE__) //mtk02285, hspa_mmi
#include "as2l4c_struct.h"
#endif

//#include "syscomp_config.h"
#include "task_config.h"

#include "l4c_root.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"

#if !defined(__MMI_FMI__) && defined(__NBR_CELL_INFO__)
#include "l4c_msghdlr.h" //RHR for l4c_nbr_cell_info_reg_req_hdlr()
#endif
#ifdef __VSIM__
#include "ps_em_enum.h"
#endif

#ifdef __MBIM_SUPPORT__
#include "mbci_msg.h"
#include "mbci_ind.h"
#endif

#if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
#endif //MAUI_02258321, mtk02285

#include "l4c_eq_cmd.h"

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
#include "custom_l4_utility.h"
#endif

//extern kal_bool phb_reset(void);   
extern kal_bool l4crac_get_auto_attach(void);
extern kal_bool l4crac_set_auto_attach(kal_bool auto_attach, kal_bool is_pdp_activate);
extern kal_bool l4crac_update_auto_attach(kal_bool auto_attach);
extern kal_uint8 cm_max_retry_count(void);
//extern kal_uint8 custom_disable_query_cfu_status(void);
extern kal_uint8 pppl4c_get_error_type(void);

extern kal_uint8 custom_signal_strength_raw_to_csq_level(
              kal_uint8 rat, 
              kal_int32 rssi_in_qdbm, 
              kal_int32 RSCP_in_qdbm,
              kal_int32 EcN0_in_qdbm,
              kal_uint8 ber,
              kal_uint8 current_band); //rx_level
              
extern kal_uint8 custom_signal_strength_raw_to_ciev_signal_level(
              kal_uint8 rat, 
              kal_int32 rssi_in_qdbm, 
              kal_int32 RSCP_in_qdbm,
              kal_int32 EcN0_in_qdbm,
              kal_uint8 ber,
              kal_uint8 current_band); //hong_rx_level
              
extern rat_enum l4crac_get_irat_preference(void);

extern kal_bool l4crac_set_irat_preference(rat_enum preferred_rat);

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_clear_csq_ber_context()
 * DESCRIPTION
 *  for internal use of L4C NW
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_clear_csq_ber_context(void)

{
    kal_uint8 INVALID_CSQ = 99;

#if defined(__UMTS_RAT__) && defined(__UMTS_TDD128_MODE__) && defined(__OP01__) && defined(__MMI_FMI__) //MAUI_02973870, ALPS00056754, mtk02285
    l4c_rat_enum rat_setting = l4crac_get_rat_mode();

    /* CMCC TD customization */
	switch (rat_setting)
	{
        #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
        case L4C_RAT_UMTS:
			{
				INVALID_CSQ = 199;
			}
			break;			

        case L4C_RAT_GSM_UMTS:
			{
				//
				if (L4C_RAC_NO_CELL == l4crac_get_gsm_status()) 
				{
    				//no cell, depends on the last csq_level
					if (L4C_PTR->csq_level > 99)
					{
    					INVALID_CSQ = 199;
					}
					#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
					#endif
				}
				else
				{
				    //camp on some cell, depends on current rat
					if (L4C_RAT_UMTS == l4crac_get_current_rat())
					{
    					INVALID_CSQ = 199;					
					}
					#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
					#endif
				}					
			}
			break;			
	} /* end of switch */
#endif	


    L4C_PTR->csq_level = INVALID_CSQ;
    L4C_PTR->ber = 99;    
    L4C_PTR->rssi_in_qdbm = 1;
    L4C_PTR->RSCP_in_qdbm = 1;
    L4C_PTR->EcN0_in_qdbm = 1; 
}


/*****************************************************************************
 * FUNCTION
 l4c_nw_set_ps_configuration
 * DESCRIPTION
 *  for internal use of L4C NW
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_set_ps_configuration(void)
{

/* --- PLMN list preference ---  */
#ifdef __PLMN_LIST_PREF_SUPPORT__
    {
        l4cas_set_plmn_list_preference_req_struct *param_ptr1; 

        param_ptr1 = (l4cas_set_plmn_list_preference_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_plmn_list_preference_req_struct), TD_RESET);    
        param_ptr1->preference = l4crac_get_plmn_list_preference();

        msg_send5(l4c_current_mod_id, L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
            AS_L4C_SAP, MSG_ID_L4CAS_SET_PLMN_LIST_PREFERENCE_REQ, (local_para_struct*) param_ptr1);

    #ifdef __UMTS_RAT__
    #ifdef __GEMINI__
         if (l4c_current_mod_id == MOD_L4C)
    #endif
        {
            l4cas_set_plmn_list_preference_req_struct *param_ptr2; 

            param_ptr2 = (l4cas_set_plmn_list_preference_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_plmn_list_preference_req_struct), TD_RESET);
            param_ptr2->preference = l4crac_get_plmn_list_preference();

            msg_send5(l4c_current_mod_id, MOD_CSE, AS_L4C_SAP, 
                MSG_ID_L4CAS_SET_PLMN_LIST_PREFERENCE_REQ, (local_para_struct*) param_ptr2);
	    }
	#endif	
    }
#endif

/* --- CSG list auto search ---  */
#ifdef __CSG_SUPPORT__
    {
        l4cas_csg_auto_search_req_struct *param_ptr1; 

        param_ptr1 = (l4cas_csg_auto_search_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_csg_auto_search_req_struct), TD_RESET);    
        param_ptr1->is_enabled = l4crac_get_csg_auto_search_preference();

        msg_send5(l4c_current_mod_id, L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
               AS_L4C_SAP, MSG_ID_L4CAS_CSG_AUTO_SEARCH_REQ, (local_para_struct*) param_ptr1);

    #ifdef __UMTS_RAT__
    #ifdef __GEMINI__
        if (l4c_current_mod_id == MOD_L4C)
    #endif
        {
            l4cas_csg_auto_search_req_struct *param_ptr2; 

            param_ptr2 = (l4cas_csg_auto_search_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_csg_auto_search_req_struct), TD_RESET);
            param_ptr2->is_enabled = l4crac_get_csg_auto_search_preference();

            msg_send5(l4c_current_mod_id, MOD_CSCE, AS_L4C_SAP, 
                    MSG_ID_L4CAS_CSG_AUTO_SEARCH_REQ, (local_para_struct*) param_ptr2);
        }
    #endif	
    }
#endif

/* --- Neighboring cell info ---  */
#if !defined(__MMI_FMI__) && defined(__NBR_CELL_INFO__)
    l4c_nbr_cell_info_reg_req_hdlr(l4c_current_mod_id, NULL, NULL);
#endif

/* --- Monitor Peer PCH ---  */
#if defined(__GEMINI_MONITOR_PAGE_DURING_TRANSFER__)
    /* temp solution for setting to RSVA the Monitor Peer PCH setting stored in NVRAM 
       l4crac_get_peer_gprs_transfer_preference() returns KAL_TRUE means CALL_PREFER
    */
    l4c_nw_set_monitor_peer_pch_req(l4crac_get_peer_gprs_transfer_preference());
#endif

#if defined(__SYSSEL_SUPPORT__)
    if (nvram_external_read_data(NVRAM_EF_SYSSEL_SETTING_LID, 
                                 1 + (l4c_current_mod_id - MOD_L4C), 
                                 &(RMMI_PTR->syssel_band), 
                                 NVRAM_EF_SYSSEL_SETTING_SIZE) == KAL_FALSE)
    {
        RMMI_PTR->syssel_band = 0xff;
    }
#endif

/* --- Set AS Prefer RAT --- */
#if defined(__UMTS_FDD_PREFER__)
    {
        l4cas_set_prefer_rat_req_struct *param_ptr1; 

        param_ptr1 = (l4cas_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_prefer_rat_req_struct), TD_RESET);    
        param_ptr1->prefer_rat = (l4c_prefer_rat_enum)l4crac_get_irat_preference();

        msg_send5(l4c_current_mod_id, L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
            AS_L4C_SAP, MSG_ID_L4CAS_SET_PREFER_RAT_REQ, (local_para_struct*) param_ptr1);

    #ifdef __UMTS_RAT__
    #ifdef __GEMINI__
        if (l4c_current_mod_id == MOD_L4C)
    #endif
        {
            l4cas_set_prefer_rat_req_struct *param_ptr2; 

            param_ptr2 = (l4cas_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_prefer_rat_req_struct), TD_RESET);
            param_ptr2->prefer_rat = (l4c_prefer_rat_enum)l4crac_get_irat_preference();

            msg_send5(l4c_current_mod_id, MOD_CSCE, AS_L4C_SAP, 
                MSG_ID_L4CAS_SET_PREFER_RAT_REQ, (local_para_struct*) param_ptr2);
        }	
    #endif	
    }
#endif

}

/*****************************************************************************
 * FUNCTION
 *  l4crac_act_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_act_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

#ifdef __MANUAL_MODE_NW_SEL__
    kal_uint8 network_mode;

    network_mode = l4crac_get_sel_mode();
    l4c_nw_sel_mode_lind(network_mode);
    kal_trace(TRACE_INFO, INFO_SEND_SEL_IND);
#endif /* __MANUAL_MODE_NW_SEL__ */ 

#ifdef __GEMINI__
    l4c_nw_rac_activated_lind();
#ifndef __MMI_FMI__
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_nw_rac_activated_rind(); // for gemini modem
#endif
#endif 

    // PS feature configuration
    l4c_nw_set_ps_configuration();

    l4c_comm_ptr->rac_activated |= (0X01 << (l4c_current_mod_id - MOD_L4C));
    
    /* RAC revise */
    if ((is_rac_activated() == KAL_TRUE) && (l4c_comm_ptr->uem_activated == KAL_TRUE))
    {
    #ifdef __GEMINI__
        module_type temp_mod_id;
        
        temp_mod_id = l4c_current_mod_id;
        layer4_module_context_selection(MOD_L4C);
    #endif
        l4c_power_on_stage1_finished_ind();
    #ifdef __GEMINI__
        layer4_module_context_selection(temp_mod_id);
    #endif
    }
    
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_reg_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_reg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_reg_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};
    kal_uint8 gsm_state, gprs_state, service;
    kal_uint8 temp_src;
    kal_uint8 cell_support_egprs;
    kal_uint8 rat;

    msg_ptr = (l4crac_reg_cnf_struct*) local_para_ptr;

	//rx_level: reset csq_level & ber, when no cell coverage
    if (L4C_RAC_NO_CELL == msg_ptr->gsm_status)
    {
        l4c_nw_clear_csq_ber_context();
    }

    src_id = msg_ptr->src_id;

    plmn_convert_to_digit(& msg_ptr->cell_info.cell_info.plmn_id, (kal_uint8*) plmn);

    l4crac_get_attach_status(&gsm_state, &gprs_state, &service);

#ifndef __PS_SERVICE__
    gprs_state = REG_STATE_NOT_REGISTERED;
#endif 

    rat = msg_ptr->cell_info.rat;

    /* (msg_ptr->plmn_sel_mode == AUTOMATIC_MODE) || (msg_ptr->plmn_sel_mode == MANUAL_MODE) */
    cell_support_egprs = l4crac_get_egprs_status();
    l4c_nw_attach_lind(
        msg_ptr->gsm_status,
        (kal_uint8*) plmn,
        gsm_state,
        gprs_state,
        (l4c_gprs_status_enum)msg_ptr->gprs_status,
        rat,
        cell_support_egprs,
        (kal_uint8*) msg_ptr->cell_info.cell_info.la_code,
        msg_ptr->cell_info.cell_info.ra_code,
        (kal_uint16)msg_ptr->cell_info.cell_info.cell_id,
        msg_ptr->cause,
        msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
        l4crac_is_on_hplmn(),
        CS_PS_DOMAIN);

#ifdef __TCPIP__
    l4c_ps_abm_nw_attach_ind(
        msg_ptr->gsm_status,
        (kal_uint8*) plmn,
        gsm_state,
        gprs_state,
        (l4c_gprs_status_enum)msg_ptr->gprs_status,
        rat,
        cell_support_egprs,
        (kal_uint8*) msg_ptr->cell_info.cell_info.la_code);
#endif

    rmmi_ptr->cs_register_status.cause = msg_ptr->cause;

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_nw_reg_state_rind(
        (kal_uint8 *)msg_ptr->cell_info.cell_info.la_code, 
    #ifdef __REPORT_RAC__
        msg_ptr->cell_info.cell_info.ra_code,
    #endif
        msg_ptr->cell_info.cell_info.cell_id, 
        gsm_state, 
        gprs_state,
        rat,
        msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
        l4c_ptr->max_data_bearer_capa,
        CS_PS_DOMAIN);
    rmmi_ptr->current_src = temp_src;

#ifdef __MBIM_SUPPORT__
    l4c_nw_reg_state_mind(gsm_state, gprs_state, msg_ptr->cause);
#endif

    if ((l4c_ptr->first_camp_on == KAL_FALSE) && (gsm_state == REG_STATE_REGISTERED))
    {
    #if defined (__CPHS__) || defined (__REL4__)
        // call ciss function to send CFU ss
//        if(custom_disable_query_cfu_status() == KAL_FALSE)    
//        {                        
            csmss_cphs_start_hdlr();
//        }		
    #endif /* defined (__CPHS__) || defined (__REL4__) */ 
        smsal_normal_service_ind();
        l4c_ptr->first_camp_on = KAL_TRUE;
    }

    if (l4c_ptr->rac_current_action == RFON_ATTACH
        || l4c_check_user_action(L4C_RAC, src_id, SET_RAT_MODE_ATTACH) == KAL_TRUE
        || l4c_check_user_action(L4C_RAC, src_id, PWRON_ATTACH) == KAL_TRUE)
    {
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }
    else if (l4c_ptr->rac_current_action == COPS_EXE) // && msg_ptr->plmn_sel_mode == AUTOMATIC_MODE
    {
        /* AT+COPS=2 then AT+COPS=0, response OK here*/
        l4c_result_struct result;    	 
		 
        if (msg_ptr->gsm_status == L4C_RAC_ERROR)
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }

        if (src_id == LMMI_SRC)
        {
      	     l4c_nw_exe_cops_lrsp(result, msg_ptr->gsm_status, (kal_uint8 *)plmn, rat);
        }
        else if(src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            rmmi_ptr->current_src = src_id;
            l4c_nw_exe_cops_rrsp(result, msg_ptr->gsm_status, (kal_uint8*) plmn);
        }
		
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_ps_reg_cnf_hdlr
 * DESCRIPTION 
 *  This function is called when MSG_ID_L4CRAC_PS_REG_CNF is received
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_ps_reg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __MOD_TCM__
    l4crac_ps_reg_cnf_struct *msg_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 src_id;
    kal_uint8 gsm_state, gprs_state, service;
    kal_uint8 temp_src;
    kal_uint8 cell_support_egprs;
#if defined(__GSM_RAT__) || defined(__UMTS_RAT__)	
    plmn_id_rat_struct plmn;
#endif
    kal_uint32 cell_id;
    kal_uint8 lac[2];
#ifdef __REPORT_RAC__
    kal_uint8 rac;
#endif

    msg_ptr = (l4crac_ps_reg_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    l4crac_get_attach_status(&gsm_state, &gprs_state, &service);

    cell_id = rmmi_ptr->ps_register_status.cell_id;
    lac[0] = (kal_uint8)(rmmi_ptr->ps_register_status.lac_value >> 8);
    lac[1] = (kal_uint8)(rmmi_ptr->ps_register_status.lac_value & 0x00ff);
#ifdef __REPORT_RAC__
    rac = rmmi_ptr->ps_register_status.rac_value;
#endif

    if (L4C_PTR->rac_current_action == CGATT_EXE)
    {
        if (L4C_PTR->rac_user == LMMI_SRC)
        {
            if (msg_ptr->gprs_status == GPRS_ATTACHED)
            {
                //result.flag = L4C_OK;
                //result.cause = L4C_NO_CAUSE;

                //we have to sync with LMMI
                /* modify by mtk00714 */
                cell_support_egprs = l4crac_get_egprs_status();
                l4c_ps_gprs_status_update_lind((l4c_gprs_status_enum)msg_ptr->gprs_status, cell_support_egprs
					, msg_ptr->cell_data_speed_support //l4crac_get_cell_data_speed_support()
					, L4C_PTR->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
            #ifdef __TCPIP__ /* ABM */
                l4c_abm_gprs_status_ind_helper(msg_ptr->gprs_status);
            #endif 

                l4c_nw_exe_att_lrsp(KAL_TRUE);
            }
            else
            {
                //result.flag = L4C_ERROR;
                //result.cause = L4C_GEN_CAUSE;
                l4c_nw_exe_att_lrsp(KAL_FALSE);
            }
        }
        else if (L4C_PTR->rac_user >= RMMI_SRC && L4C_PTR->rac_user < RMMI_ALL)
        {
            rmmi_ptr->current_src = src_id;
            if (gprs_state == REG_STATE_REGISTERED)
            {
                //we have to sync with LMMI
                /* modify by mtk00714 */
                cell_support_egprs = l4crac_get_egprs_status();
                l4c_ps_gprs_status_update_lind((l4c_gprs_status_enum)msg_ptr->gprs_status, cell_support_egprs
					, msg_ptr->cell_data_speed_support //l4crac_get_cell_data_speed_support()
					, L4C_PTR->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
            #ifdef __TCPIP__ /* ABM */
                l4c_abm_gprs_status_ind_helper(msg_ptr->gprs_status);
            #endif 

                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);       //need modify         
            }
            else
            {
                l4c_general_rrsp(KAL_FALSE, L4C_GEN_CAUSE);     //need modify         
            }
        }
    #ifdef __MBIM_SUPPORT__
        else if (L4C_PTR->rac_user >= MBCI_SRC && L4C_PTR->rac_user <= MBCI_SRC_END)
        {
            if (gprs_state == REG_STATE_REGISTERED)
            {
                l4c_nw_exe_att_mrsp(src_id, KAL_TRUE);
            }
            else
            {
                l4c_nw_exe_att_mrsp(src_id, KAL_FALSE);
            }
        }
    #endif

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
        /* Neptune is GPRS when needed, but detach will make CRTUGC70-44.2.1.1.9 fail */
        /*
         * mtk02126: Generally, we'll set to GPRS always while test.
         * However, Neptune can't set to GPRS always and we need to do special handing.
         * In the test sim case, we don't send MSG_ID_L4CRAC_DEREG_REQ to disable following PS attach attemp.
         */
    #ifndef __TCPIP__
        if (l4c_is_test_sim() == KAL_FALSE)
    #endif 
        {
            /* Johnny: when needed, gprs attach fail, gprs detach should be performed by L4C, not RAC */
            if ((l4crac_get_auto_attach() == KAL_FALSE) &&
                msg_ptr->gprs_status != GPRS_ATTACHED && gprs_state != REG_STATE_REGISTERED)
            {

                l4crac_dereg_req_struct *param_ptr;

                param_ptr = (l4crac_dereg_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4crac_dereg_req_struct), TD_RESET);

                param_ptr->src_id = 0;
                param_ptr->is_poweroff = 0;

                param_ptr->service = PS_SERVICE;
                l4c_send_msg_to_rac(MSG_ID_L4CRAC_DEREG_REQ, param_ptr);
                // hogan: 070209 add action CGATT_EXE for PS AUTO DETACH to prevent cmd conflict
                l4c_set_user_action(L4C_RAC, LMMI_SRC, CGATT_EXE);
            }
        }
    }
    else if (L4C_PTR->rac_current_action == SET_GPRS_CON_TYPE)
    {
        if (L4C_PTR->rac_user == LMMI_SRC)
        {
            if (msg_ptr->gprs_status == GPRS_ATTACHED)
            {
                //result.flag = L4C_OK;
                //result.cause = L4C_NO_CAUSE;

                //we have to sync with LMMI
                /* modify by mtk00714 */
                cell_support_egprs = l4crac_get_egprs_status();
                l4c_ps_gprs_status_update_lind((l4c_gprs_status_enum)msg_ptr->gprs_status, cell_support_egprs
					, msg_ptr->cell_data_speed_support //l4crac_get_cell_data_speed_support()
					, L4C_PTR->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
            #ifdef __TCPIP__ /* ABM */
                l4c_abm_gprs_status_ind_helper(msg_ptr->gprs_status);
            #endif 
            }
        }
        else    //L4C_PTR->rac_user != LMMI_SRC
        {
            //RMMI_PTR->current_src = L4C_PTR->rac_user;
            //l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);

        /* Johnny:
           if SET_GPRS_CON_TYPE command conflict with SET_GPRS_CON_TYPE,
           L4C will return TRUE instead of FALSE but pending the latest auto_attach
           and re-do it when clear SET_GPRS_CON_TYPE */
        if (L4C_PTR->pending_latest_auto_attach != L4C_GPRS_CONN_TYPE_UNKNOWN
            && L4C_PTR->pending_latest_auto_attach != l4crac_get_auto_attach())
        {
            kal_bool is_context_exist = KAL_FALSE;

            is_context_exist = check_pdp_context_exist_func();

            if (l4crac_set_auto_attach((kal_bool)L4C_PTR->pending_latest_auto_attach, is_context_exist) == KAL_TRUE)
            {
                l4c_set_user_action(L4C_RAC, LMMI_SRC, SET_GPRS_CON_TYPE);
            }
        }

        L4C_PTR->pending_latest_auto_attach = L4C_GPRS_CONN_TYPE_UNKNOWN;
    }

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
#if defined(__GSM_RAT__) || defined(__UMTS_RAT__)		
    l4crac_get_current_plmn(&plmn);
#endif
    l4c_nw_reg_state_rind(lac, 
#ifdef __REPORT_RAC__
                          rac, 
#endif
                          cell_id, 
                          gsm_state, 
                          gprs_state, 
#if defined(__GSM_RAT__) || defined(__UMTS_RAT__)
                          plmn.rat, 
#else
                          0,
#endif						
                          msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
                          L4C_PTR->max_data_bearer_capa,
                          PS_DOMAIN);
    rmmi_ptr->current_src = temp_src;
    
#endif /* __MOD_TCM__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_plmn_search_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_plmn_search_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_plmn_search_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id, gsm_state, gprs_state, service;
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};
    kal_uint8 temp_src;
    kal_uint8 rat;
    kal_uint8 cell_support_egprs;

    msg_ptr = (l4crac_plmn_search_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    plmn_convert_to_digit(& msg_ptr->cell_info.cell_info.plmn_id, (kal_uint8*) plmn);

    l4crac_get_attach_status(&gsm_state, &gprs_state, &service);
    cell_support_egprs = l4crac_get_egprs_status();
    l4c_nw_attach_lind(
        msg_ptr->gsm_status,
        (kal_uint8*) plmn,
        gsm_state,
        gprs_state,
        (l4c_gprs_status_enum)msg_ptr->gprs_status,
        msg_ptr->cell_info.rat,
        cell_support_egprs,
        (kal_uint8*) msg_ptr->cell_info.cell_info.la_code,
        msg_ptr->cell_info.cell_info.ra_code,
        (kal_uint16)msg_ptr->cell_info.cell_info.cell_id,
        msg_ptr->cause, 
        msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
        l4crac_is_on_hplmn(),
        CS_PS_DOMAIN); 
        
    #ifdef __TCPIP__
    l4c_ps_abm_nw_attach_ind(
        msg_ptr->gsm_status,
        (kal_uint8*) plmn,
        gsm_state,
        gprs_state,
        (l4c_gprs_status_enum)msg_ptr->gprs_status,
        msg_ptr->cell_info.rat,
        cell_support_egprs,
        (kal_uint8*) msg_ptr->cell_info.cell_info.la_code);
    #endif

    rmmi_ptr->cs_register_status.cause = msg_ptr->cause;

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_nw_reg_state_rind(
        (kal_uint8*) msg_ptr->cell_info.cell_info.la_code, 
    #ifdef __REPORT_RAC__
        msg_ptr->cell_info.cell_info.ra_code,
    #endif
        msg_ptr->cell_info.cell_info.cell_id, 
        gsm_state, 
        gprs_state, 
        msg_ptr->cell_info.rat,
        msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
        l4c_ptr->max_data_bearer_capa,
        CS_PS_DOMAIN);
    rmmi_ptr->current_src = temp_src;

    rat = msg_ptr->cell_info.rat;

    if ((l4c_ptr->rac_current_action == COPS_EXE))
    {
        if (msg_ptr->gsm_status == L4C_RAC_ERROR)
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;
        }
        else
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }

        if (src_id == LMMI_SRC)
        {
      	     l4c_nw_exe_cops_lrsp(result, msg_ptr->gsm_status, (kal_uint8 *)plmn, rat);
        }
        else if(src_id >= RMMI_SRC && src_id < RMMI_ALL)
        {
            rmmi_ptr->current_src = src_id;
#ifndef __UE_SIMULATOR__
            l4c_nw_exe_cops_rrsp(result, msg_ptr->gsm_status, (kal_uint8*) plmn);
#endif
        }
        /* MAUI_01626241, mtk02514, 090209 *********
         * when src_id==L4C_SRC 
         * we should not call l4c_nw_exe_cops_rrsp
         * because when retry, we will let src_id = L4C_SRC
         **************************************/
    #ifdef __MBIM_SUPPORT__
        else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
        {
            l4c_nw_exe_cops_mrsp(src_id, msg_ptr->gsm_status, msg_ptr->cause);
        }
    #endif

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
#ifdef __MOD_TCM__
        if (l4c_ptr->gprs_connection_timeout == KAL_TRUE)
        {
            l4c_ptr->gprs_connection_timeout = KAL_FALSE;
            l4c_nw_exe_gprs_connection_type();
        }
#endif //mtk02285, 201003, 6251_ram
        if ((msg_ptr->gsm_status == L4C_RAC_OK) && (l4c_ptr->first_camp_on == KAL_FALSE))
        {
        #ifdef __CPHS__
            // call ciss function to send CFU ss
//            if(custom_disable_query_cfu_status() == KAL_FALSE)    
//            {            
                csmss_cphs_start_hdlr();
//            }		
        #endif /* __CPHS__ */ 
            smsal_normal_service_ind();
            l4c_ptr->first_camp_on = KAL_TRUE;
        }

    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_dereg_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_dereg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_dereg_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint16 action;

//#if !defined(__MTK_3G_MRAT_ARCH__)
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};
//#endif 
#ifdef __MOD_TCM__
    kal_uint8 cell_support_egprs;
#endif 

    msg_ptr = (l4crac_dereg_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    action = l4c_ptr->rac_current_action;

    //rx_level: reset csq_level & ber, when no cell coverage
    if (L4C_RAC_NO_CELL == l4crac_get_gsm_status())
    {
        l4c_nw_clear_csq_ber_context();
    }

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __DYNAMIC_BAND_SEL__ 
/* under construction !*/
#endif
#ifdef __DYNAMIC_HSPA_PREFERENCE__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif

    result.flag = L4C_OK;
    result.cause = L4C_NO_CAUSE;

    switch (action)
    {
        case COPS_EXE:
        {
	        l4c_ptr->has_deregistered = KAL_TRUE;

            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_exe_cops_lrsp(result, L4C_RAC_OK, plmn, L4C_RAT_NONE);
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_nw_exe_cops_rrsp(result, L4C_RAC_OK, plmn);
            }
        #ifdef __MOD_TCM__
            if (l4c_ptr->gprs_connection_timeout == KAL_TRUE)
            {
                /* to prevent RAC cmd conflict in l4c_nw_exe_gprs_connection_type()
                */
                l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION); 
                l4c_ptr->gprs_connection_timeout = KAL_FALSE;
                l4c_nw_exe_gprs_connection_type();
            }
        #endif //mtk02285, 201003, 6251_ram
            break;
        }
        case CGATT_EXE:
        {
        #ifdef __MOD_TCM__
            cell_support_egprs = l4crac_get_egprs_status();
            l4c_ps_gprs_status_update_lind(L4C_GPRS_DETACHED, cell_support_egprs
				, l4crac_get_cell_data_speed_support()
				, l4c_ptr->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
        #ifdef __TCPIP__ /* ABM */
            l4c_abm_gprs_status_ind_helper(L4C_GPRS_DETACHED);
        #endif 
        #endif /* __MOD_TCM__ */ 
            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_exe_att_lrsp(KAL_TRUE);
            }
            else if (L4C_PTR->rac_user >= RMMI_SRC && L4C_PTR->rac_user < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_GEN_CAUSE);  //need modify
            }
        #ifdef __MBIM_SUPPORT__
            else if (L4C_PTR->rac_user >= MBCI_SRC && L4C_PTR->rac_user <= MBCI_SRC_END)
            {
                l4c_nw_exe_att_mrsp(src_id, KAL_TRUE);
            }
        #endif

            break;
        }
        case PWROFF_DETACH:
        {
	        l4c_ptr->has_deregistered = KAL_TRUE;
	 
        #ifdef __MOD_TCM__
            cell_support_egprs = l4crac_get_egprs_status();
            l4c_ps_gprs_status_update_lind(L4C_GPRS_DETACHED, cell_support_egprs
				, l4crac_get_cell_data_speed_support()
				, l4c_ptr->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
        #ifdef __TCPIP__ /* ABM */
            l4c_abm_gprs_status_ind_helper(L4C_GPRS_DETACHED);
        #endif 
        #endif /* __MOD_TCM__ */ 
            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_powroff_detach_lrsp(result);
            }
        #if defined(__GEMINI__)
            else if (l4c_ptr->rac_user == LMMI_SRC2)
            {
                //l4c_root_power_off_req(L4C_ROOT_PTR->root_src_id);
                l4c_nw_exe_rf_off_req(L4C_ROOT_PTR->root_src_id, action);
            }
        #endif
            else
            {
                l4c_nw_exe_rf_off_req(src_id, action);
            }
	    break;
        }
    #if 0 //def __DYNAMIC_BAND_SEL__ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif            
        case RFOFF_DETACH:
    #ifdef __DYNAMIC_BAND_SEL__
        case CBND_SET:
    #endif
    #ifdef __DYNAMIC_HSPA_PREFERENCE__
        case SET_HSPA_MODE:
    #endif
        {
	        l4c_ptr->has_deregistered = KAL_TRUE;
            l4c_nw_exe_rf_off_req(src_id, action);	
            return;
        }
        case SET_RAT_MODE_DETACH:
        {
            kal_uint8 id;
            
            if ((src_id == L4C_SRC) 
                && (l4c_search_all_src_ext(l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT, &id) == KAL_TRUE))
            {
                /* attach to the original RAT */
                l4crac_set_rat_mode_cnf_struct param_ptr;
                
                param_ptr.src_id = src_id;
                param_ptr.result = KAL_TRUE;
                l4c_set_user_action(L4C_RAC, src_id, SET_RAT_MODE);
                l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
                l4crac_set_rat_mode_cnf_hdlr((local_para_struct *)(&param_ptr), NULL);
            }
            else
            {
                l4crac_set_rat_mode_req_struct *param_ptr = (l4crac_set_rat_mode_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4crac_set_rat_mode_req_struct), TD_RESET);

            #if defined(__NAS_RAT_PREFER__) || defined(__UMTS_FDD_PREFER__)
                if (l4c_ptr->prefer_rat != (l4c_prefer_rat_enum)l4crac_get_irat_preference())
                {
                    // Set NAS prefer RAT
                #ifdef __NAS_RAT_PREFER__
                    l4crac_set_prefer_rat_req_struct *param_ptr;

                    param_ptr = (l4crac_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_set_prefer_rat_req_struct), TD_RESET);
                    param_ptr->src_id = src_id;
                    param_ptr->prefer_rat = (rat_enum)l4c_ptr->prefer_rat;
                    l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_PREFER_RAT_REQ, param_ptr);
                #endif

                    // Set AS prefer RAT
                #ifdef __UMTS_FDD_PREFER__
                    {
                        l4cas_set_prefer_rat_req_struct *param_ptr1; 
                
                        param_ptr1 = (l4cas_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_prefer_rat_req_struct), TD_RESET);    
                        param_ptr1->prefer_rat = l4c_ptr->prefer_rat;
                
                        msg_send5(l4c_current_mod_id, L4_MODULE(MOD_RRM, l4c_current_mod_id - MOD_L4C), 
                            AS_L4C_SAP, MSG_ID_L4CAS_SET_PREFER_RAT_REQ, (local_para_struct*) param_ptr1);
                
                    #ifdef __UMTS_RAT__
                    #ifdef __GEMINI__
                        if (l4c_current_mod_id == MOD_L4C)
                    #endif
                        {
                            l4cas_set_prefer_rat_req_struct *param_ptr2; 
                
                            param_ptr2 = (l4cas_set_prefer_rat_req_struct*)construct_local_para((kal_uint16) sizeof(l4cas_set_prefer_rat_req_struct), TD_RESET);
                            param_ptr2->prefer_rat = l4c_ptr->prefer_rat;

                            msg_send5(l4c_current_mod_id, MOD_CSCE, AS_L4C_SAP, 
                                MSG_ID_L4CAS_SET_PREFER_RAT_REQ, (local_para_struct*) param_ptr2);
                        }   
                    #endif
                    }
                #endif                        

                    // Set to RAC
                    l4crac_set_irat_preference(l4c_ptr->prefer_rat);
                }
            #endif

                param_ptr->src_id = src_id;
                param_ptr->rat_mode = l4c_ptr->rat_mode;
                if (src_id == L4C_SRC)
                {
                    param_ptr->save_to_nvram = KAL_FALSE;
                }
                else
                {
                    param_ptr->save_to_nvram = KAL_TRUE;
                }
                l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_RAT_MODE_REQ, param_ptr);
                l4c_set_user_action(L4C_RAC, src_id, SET_RAT_MODE);
            }
            return;
        }
        case SET_GPRS_CON_TYPE:
        {
        #ifdef __MOD_TCM__
            cell_support_egprs = l4crac_get_egprs_status();
            l4c_ps_gprs_status_update_lind(L4C_GPRS_DETACHED, cell_support_egprs
				, l4crac_get_cell_data_speed_support()
				, l4c_ptr->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
        #ifdef __TCPIP__ /* ABM */
            l4c_abm_gprs_status_ind_helper(L4C_GPRS_DETACHED);
        #endif 
        #endif /* __MOD_TCM__ */ 

            l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);

        #ifdef __MOD_TCM__
            /* Johnny:
               if SET_GPRS_CON_TYPE command conflict with SET_GPRS_CON_TYPE,
               L4C will return TRUE instead of FALSE but pending the latest auto_attach
               and re-do it when clear SET_GPRS_CON_TYPE */
            if (l4c_ptr->pending_latest_auto_attach != L4C_GPRS_CONN_TYPE_UNKNOWN
                && l4c_ptr->pending_latest_auto_attach != l4crac_get_auto_attach())
            {
                kal_bool is_context_exist = KAL_FALSE;

                is_context_exist = check_pdp_context_exist_func();

                if (l4crac_set_auto_attach((kal_bool)l4c_ptr->pending_latest_auto_attach, is_context_exist) == KAL_TRUE)
                {
                    l4c_set_user_action(L4C_RAC, LMMI_SRC, SET_GPRS_CON_TYPE);
                }
            }

            l4c_ptr->pending_latest_auto_attach = L4C_GPRS_CONN_TYPE_UNKNOWN;
        #endif /* __MOD_TCM__ */ 
            return;
        }
    #if defined(__OP01__)
        case SYS_CONFIG:
            l4c_nw_sysconfig_update(src_id);
            return;
    #endif
    #if defined(__SYSSEL_SUPPORT__)
        case SYS_SEL:
            l4c_nw_syssel_update(src_id);
            return;
    #endif
    }
    if ((l4c_check_user_action(L4C_RAC, src_id, PWROFF_DETACH) != KAL_TRUE) || (src_id == LMMI_SRC))
    {
        /* reset RAC action excluding DEREG_CNF from +EPOF */
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __MOD_TCM__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __TCPIP__ /* ABM */
/* under construction !*/
    #endif 
    #endif /* __MOD_TCM__ */ 
/* under construction !*/
#endif
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_plmn_list_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_plmn_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_plmn_list_cnf_struct *msg_ptr = NULL;
    l4c_rat_plmn_info_struct list[MAX_PLMN_LIST_LEN];
    l4c_result_struct result;
    kal_uint8 i;
    kal_uint8 src_id;

    msg_ptr = (l4crac_plmn_list_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->rac_current_action == COPS_TEST)
    {
        if (msg_ptr->response != L4C_RAC_ERROR)
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
            for (i = 0; i < msg_ptr->plmn_list.plmn_count; i++)
            {
                plmn_convert_to_digit(& (msg_ptr->plmn_list.plmn_id_rat[i].plmn_id), (kal_uint8*) list[i].plmn_id);

                list[i].rat = msg_ptr->plmn_list.plmn_id_rat[i].rat;

                list[i].status = msg_ptr->plmn_list.status[i];

                kal_mem_cpy(list[i].lac, msg_ptr->plmn_list.la_code[i], 2);
            }

            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_get_plmn_list_lrsp(result, msg_ptr->plmn_list.plmn_count, (l4c_rat_plmn_info_struct*) list, msg_ptr->num_of_hplmn);
            }
            else if (l4c_ptr->rac_user >= RMMI_SRC && l4c_ptr->rac_user < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_nw_get_plmn_list_rrsp(result, msg_ptr->plmn_list.plmn_count, (l4c_rat_plmn_info_struct*) list);    //need modify //mtk01616_070529
            }
        #ifdef __MBIM_SUPPORT__
            else if (l4c_ptr->rac_user >= MBCI_SRC && l4c_ptr->rac_user <= MBCI_SRC_END)
            {
                l4c_nw_get_plmn_list_mrsp(l4c_ptr->rac_user, KAL_TRUE, msg_ptr->plmn_list.plmn_count, (l4c_rat_plmn_info_struct*) list);
            }
        #endif
        }
        else
        {
            result.flag = L4C_ERROR;
            result.cause = msg_ptr->cause;
            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                l4c_nw_get_plmn_list_lrsp(result, 0, (l4c_rat_plmn_info_struct*) list, 0);
            }
            else if (l4c_ptr->rac_user >= RMMI_SRC && l4c_ptr->rac_user < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_nw_get_plmn_list_rrsp(result, 0, (l4c_rat_plmn_info_struct*) list);
            }
        #ifdef __MBIM_SUPPORT__
            else if (l4c_ptr->rac_user >= MBCI_SRC && l4c_ptr->rac_user <= MBCI_SRC_END)
            {
                l4c_nw_get_plmn_list_mrsp(l4c_ptr->rac_user, KAL_FALSE, 0, NULL);
            }
        #endif
        }
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    #ifdef __MOD_TCM__
        if (l4c_ptr->gprs_connection_timeout == KAL_TRUE)
        {
            l4c_ptr->gprs_connection_timeout = KAL_FALSE;
            l4c_nw_exe_gprs_connection_type();
        }
	#endif //mtk02285, 201003, 6251_ram
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_class_change_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_class_change_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_class_change_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4crac_class_change_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->rac_current_action == CGCLASS_SET)
    {
        if (msg_ptr->gsm_status == L4C_RAC_ERROR)
        {
            if (L4C_PTR->rac_user == LMMI_SRC)
            {
                //l4c_nw_set_class_lrsp(KAL_FALSE, L4C_GEN_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, L4C_GEN_CAUSE);
            }
        }
        else
        {
            if (L4C_PTR->rac_user == LMMI_SRC)
            {
                //l4c_nw_set_class_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }
#if defined(__OP01__)
    else if (L4C_PTR->rac_current_action == SYS_CONFIG)
    {
        l4c_nw_sysconfig_update(src_id);
    }
#endif
#if defined(__SYSSEL_SUPPORT__)
    else if (L4C_PTR->rac_current_action == SYS_SEL)
    {
        l4c_nw_syssel_update(src_id);
    }
#endif

    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_set_preferred_band_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_set_preferred_band_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_set_preferred_band_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4crac_set_preferred_band_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (l4c_ptr->rac_current_action == CBND_SET)
    {
    #if defined(__SYSSEL_SUPPORT__)
        if (l4c_ptr->nw_syssel != NULL)
        {
            /* band selection done by AT+SYSSEL */
            l4crac_dereg_req_struct *param_ptr;
            
        #ifdef __DYNAMIC_BAND_SEL__
            if (L4C_PTR->cfun_state == 1)
            {
                /* rf off has been performed */
                l4c_nw_syssel_update(src_id);
            }
            else
        #endif
            {
                param_ptr = (l4crac_dereg_req_struct*)construct_local_para((kal_uint16) sizeof(l4crac_dereg_req_struct), TD_RESET);
                param_ptr->src_id = src_id;
                param_ptr->is_poweroff = KAL_TRUE;
                param_ptr->service = CS_PS_DOMAIN;
                l4c_send_msg_to_rac(MSG_ID_L4CRAC_DEREG_REQ, param_ptr);
            }
            l4c_set_user_action(L4C_RAC, src_id, SYS_SEL);
            return;
        }
        else 
    #endif
    #ifdef __DYNAMIC_BAND_SEL__
        if (l4c_ptr->cfun_state == 1)
        {
            l4c_nw_exe_rf_on_req(src_id);
            l4c_set_user_action(L4C_RAC, src_id, CBND_SET);
        }
        else
    #endif
        {
            if (l4c_ptr->rac_user == LMMI_SRC)
            {
                if (msg_ptr->gsm_status == L4C_RAC_ERROR)
                {
                    l4c_nw_set_preferred_band_lrsp(KAL_FALSE, msg_ptr->gsm_status);
                }
                else
                {
                    l4c_nw_set_preferred_band_lrsp(KAL_TRUE, msg_ptr->gsm_status);
                }
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                if (msg_ptr->gsm_status == L4C_RAC_ERROR)
                {
                    l4c_general_rrsp(KAL_FALSE, msg_ptr->gsm_status);
                }
                else
                {
                    l4c_general_rrsp(KAL_TRUE, msg_ptr->gsm_status);		  
                }
            }

            l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
        #ifdef __MOD_TCM__
            if (l4c_ptr->gprs_connection_timeout == KAL_TRUE)
            {
                l4c_ptr->gprs_connection_timeout = KAL_FALSE;
                l4c_nw_exe_gprs_connection_type();
            }
        #endif
        }
    }
    else
    {
        // wrong msg error
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_rfoff_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_rfoff_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    //rx_level: reset csq_level & ber, when rfoff
    l4c_nw_clear_csq_ber_context();

    if (l4c_ptr->rac_current_action == RFOFF_DETACH)
    {    
        if (l4c_ptr->rac_user == LMMI_SRC)
        {
            l4c_nw_cfun_state_lrsp(KAL_TRUE);
        }
    #if defined(__GEMINI__)
        else if (l4c_ptr->rac_user == LMMI_SRC2)
        {
            l4c_root_sim_mode_switch_req(l4c_ptr->rac_user);
        }
    #endif
    #ifdef __MBIM_SUPPORT__
        else if (l4c_ptr->rac_user >= MBCI_SRC && l4c_ptr->rac_user <= MBCI_SRC_END)
        {
            l4c_nw_cfun_state_mrsp(l4c_ptr->rac_user, KAL_TRUE);                
        }
    #endif
        else
        {
            rmmi_ptr->current_src = l4c_ptr->rac_user;
	    #if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	    #endif
	            if((l4c_ptr->sim_poweroff == KAL_TRUE) || (l4c_ptr->cfun_state == 4))
	            {
                    l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                }
                else
                {
                    l4c_set_user_action(L4C_RAC, l4c_ptr->rac_user, RFOFF_SIM_POWEROFF);
                    return;
                }
	    #if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)				
/* under construction !*/
	    #endif //MAUI_02258321, mtk02285
        }

    #ifdef __MBIM_SUPPORT__
        l4c_nw_cfun_state_mind();
    #endif

        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
    }
    else if (l4c_ptr->rac_current_action == PWROFF_DETACH)
    {
        kal_uint8 rac_user = l4c_ptr->rac_user;
        
        /* LMMI will use MSG_ID_MMI_NW_PWROFF_DETACH_REQ and then MSG_ID_MMI_EQ_POWER_OFF_REQ 
           We keep MSG_ID_MMI_NW_PWROFF_DETACH_REQ only DEREG but not RF OFF
           But handle +EPOF to DEREG and RFOFF
        */
        l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
        if (rac_user >= RMMI_SRC)
        {
            l4c_eq_power_off_req(RMMI_SRC); //currently POWEROFF_EXE from AT is set to RMMI_SRC
        }
    #if defined(__GEMINI__)
        else if (rac_user == LMMI_SRC2)
        {
            l4c_root_power_off_req(L4C_ROOT_PTR->root_src_id);
        }
    #endif
    }
#ifdef __DYNAMIC_BAND_SEL__    
    else if (l4c_ptr->rac_current_action == CBND_SET)
    {
        l4c_send_msg_to_rac(MSG_ID_L4CRAC_SET_PREFERRED_BAND_REQ, l4c_ptr->parameter[l4c_ptr->rac_user].data);
        l4c_ptr->parameter[l4c_ptr->rac_user].length = 0;    
    }
#endif
#ifdef __DYNAMIC_HSPA_PREFERENCE__
    else if (l4c_ptr->rac_current_action == SET_HSPA_MODE)
    {
        l4cas_set_hspa_preference_req_struct* param_ptr = l4c_ptr->parameter[l4c_ptr->rac_user].data;

        l4crac_set_hspa_preference(param_ptr->hspa_preference);
        l4c_send_msg(MOD_USIME, MSG_ID_L4CAS_SET_HSPA_PREFERENCE_REQ, AS_L4C_SAP, param_ptr, NULL);
		l4c_ptr->parameter[l4c_ptr->rac_user].length = 0;
        l4c_nw_exe_rf_on_req(l4c_ptr->rac_user);
        l4c_set_user_action(L4C_RAC, l4c_ptr->rac_user, SET_HSPA_MODE);
        return;
    }
#endif

}


/*****************************************************************************
 * FUNCTION
 *  l4crac_reg_state_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_reg_state_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_reg_state_ind_struct *msg_ptr = NULL;
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};
    kal_uint8 rat;
    kal_uint8 cell_support_egprs;

    msg_ptr = (l4crac_reg_state_ind_struct*) local_para_ptr;

    rat = msg_ptr->cell_info.rat;

	//rx_level: reset csq_level & ber, when no cell coverage
    if (L4C_RAC_NO_CELL == msg_ptr->gsm_status)
    {
        l4c_nw_clear_csq_ber_context();   
    }

#ifndef __PS_SERVICE__
    msg_ptr->gprs_state = REG_STATE_NOT_REGISTERED;
#endif 
    //if (l4c_ptr->cc_state[RMMI_SRC] == L4C_COMMAND_STATE)
    {
        kal_uint8 temp_src;

        rmmi_ptr->cs_register_status.cause = msg_ptr->cause;

        temp_src = rmmi_ptr->current_src;
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_nw_reg_state_rind(
            (kal_uint8*) msg_ptr->cell_info.cell_info.la_code, 
        #ifdef __REPORT_RAC__
            msg_ptr->cell_info.cell_info.ra_code,
        #endif
            msg_ptr->cell_info.cell_info.cell_id, 
            msg_ptr->gsm_state, 
            msg_ptr->gprs_state, 
            rat,
            msg_ptr->cell_data_speed_support, //l4crac_get_cell_data_speed_support(),
            l4c_ptr->max_data_bearer_capa,
            msg_ptr->domain);
        rmmi_ptr->current_src = temp_src;
    }
    if (l4c_ptr->cc_state[LMMI_SRC] == L4C_COMMAND_STATE)
    {
        plmn_convert_to_digit(& msg_ptr->cell_info.cell_info.plmn_id, (kal_uint8*) plmn);
        cell_support_egprs = l4crac_get_egprs_status();
        l4c_nw_attach_lind(
            msg_ptr->gsm_status,
            (kal_uint8*) plmn,
            msg_ptr->gsm_state,
            msg_ptr->gprs_state,
            (l4c_gprs_status_enum)msg_ptr->gprs_status,
            rat,
            cell_support_egprs,
            (kal_uint8*) msg_ptr->cell_info.cell_info.la_code,
            msg_ptr->cell_info.cell_info.ra_code,
            (kal_uint16)msg_ptr->cell_info.cell_info.cell_id,
            msg_ptr->cause, l4crac_get_cell_data_speed_support(),
            l4crac_is_on_hplmn(),
            msg_ptr->domain); 
            
       #ifdef __TCPIP__
       l4c_ps_abm_nw_attach_ind(
           msg_ptr->gsm_status,
           (kal_uint8*) plmn,
           msg_ptr->gsm_state,
           msg_ptr->gprs_state,
           (l4c_gprs_status_enum)msg_ptr->gprs_status,
           rat,
           cell_support_egprs,
           (kal_uint8*) msg_ptr->cell_info.cell_info.la_code);
        #endif
    }

#ifdef __MBIM_SUPPORT__
    l4c_nw_reg_state_mind(msg_ptr->gsm_state, msg_ptr->gprs_state, msg_ptr->cause);
#endif

    if ((l4c_ptr->first_camp_on == KAL_FALSE) && (msg_ptr->gsm_state == REG_STATE_REGISTERED))
    {
    #ifdef __CPHS__
        // call ciss function to send CFU ss
//        if(custom_disable_query_cfu_status() == KAL_FALSE)    
//        {
            csmss_cphs_start_hdlr();
//        }		
    #endif /* __CPHS__ */ 
        smsal_normal_service_ind();
        l4c_ptr->first_camp_on = KAL_TRUE;
    }

    if (((msg_ptr->gsm_status == L4C_RAC_INVALID_SIM) || (msg_ptr->gprs_status == GPRS_INVALID_SIM))
        && (l4c_ptr->sim_detected == KAL_TRUE))
    {
        l4c_nw_invalid_sim_rind(msg_ptr->gsm_status, msg_ptr->gprs_status, msg_ptr->cause);
    }

    if (((l4c_ptr->retry_cc == KAL_TRUE) || (l4c_ptr->retry_ss == KAL_TRUE))
        &&((msg_ptr->gsm_status == L4C_RAC_OK) 
        ||(l4c_wait_limited_service()&&(msg_ptr->gsm_status == L4C_RAC_LIMITED_SERVICE)))
        && (l4c_ptr->event_id[3] != 0))
    {
        /* before retry timer timeout but NW allows to MO attempt 
           cancel retry timer and start MO attempt ASAP */
        kal_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[3]);
        evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[3]));
        l4c_ptr->event_id[3] = 0;
        l4c_retry_hdlr();
    }
    
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4crac_reg_cause_ind_hdlr
 * DESCRIPTION
 *  MSG_ID_L4CRAC_REG_CAUSE_IND
 *  - report the reg cause indication to MMI
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_reg_cause_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr) // __NW_REG_CAUSE_REPORT__ mtk02285 20090310
{
    #ifdef __NW_REG_CAUSE_REPORT__
    l4crac_reg_cause_ind_struct * msg_ptr = NULL;
    msg_ptr = (l4crac_reg_cause_ind_struct*) local_para_ptr;
    l4c_nw_reg_cause_lind(msg_ptr->domain, msg_ptr->cause); 
    #endif /* __NW_REG_CAUSE_REPORT__ */
}

 
/*****************************************************************************
 * FUNCTION
 *  l4crac_end_ps_data_session_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_end_ps_data_session_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    l4crac_end_ps_data_session_cnf_struct * msg_ptr = NULL;
    kal_uint8 src_id;
    kal_uint8 temp_src;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4crac_end_ps_data_session_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
   
    /* Parse the enum value from the l4crac_end_ps_data_session_cnf_struct if AP side needs modem to map enum values as SUCCESS or FAILED */
    /* In this case (i.e., SCRI_REQ_SENT or SCRI_NO_PS_DATA_SESSION), it means that the request is already sent to RRC => It can return SUCCESS to AP side */
    /* Check the src_id: If this request is sent by AP side instead of local MMI, it invokes the API l4c_nw_end_ps_data_session_rind */
    /* W10.52 Final version: AP sides wants the modem to report original enum value and not necessary to map enum value to SUCCESS or FAILED for AP side */

    if (src_id == LMMI_SRC)
    {
        l4c_nw_end_ps_data_session_lrsp(msg_ptr->result);
    }
	else if ((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
    {
        // TODO
    }

    if (src_id != L4C_SRC)
    {
        temp_src = RMMI_PTR->current_src;
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_nw_end_ps_data_session_rind(msg_ptr->src_id, msg_ptr->result);
        RMMI_PTR->current_src = temp_src;
    }
    else
    {
        /* the SCRI is triggered by L4C */
        if ((msg_ptr->result == SCRI_CS_SESSION_ONGOING) || 
            (msg_ptr->result == SCRI_PS_SIGNALLING_ONGOING) || 
            (msg_ptr->result == SCRI_REQ_NOT_SENT))
        {
            l4c_ptr->scri_has_sent = KAL_FALSE;
            if (msg_ptr->result == SCRI_REQ_NOT_SENT)
            {
                l4c_ptr->fd_retry_count++;
            }
        }
        else
        {
            l4c_ptr->fd_fop_received = KAL_FALSE;
            l4c_ptr->fd_timer_counter = 0;
        }
        
        if (l4c_ptr->need_resend == KAL_TRUE)
        {
            l4c_ptr->need_resend = KAL_FALSE;
        }
        else if (msg_ptr->result == SCRI_REQ_SENT)
        {
            l4c_ptr->need_resend = KAL_TRUE;
        }

        if ((msg_ptr->result == SCRI_REQ_SENT) || (l4c_ptr->fd_retry_count >= 5))
        {
            /* RRCE will enter power-saving mode, we can reduce monitor frequency */
            l4c_ptr->fd_monitor_tick = 100;
            if (l4c_ptr->fd_event != 0)
            {
                evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->fd_event));
                l4c_ptr->fd_event = evshed_set_event(l4c_ptr->event_scheduler_ptr,
                                         (kal_timer_func_ptr) l4c_fd_monitor_timeout_hdlr,
                                         NULL,
                                         l4c_ptr->fd_monitor_tick * KAL_TICKS_100_MSEC);
            }
        }
    }
#endif /* __NO_PSDATA_SEND_SCRI__ */    
}


#if 0 //rx_level, mtk02285, remove old interface
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */

/* rx_level revision ------------------------------------------------------- */ 
/*****************************************************************************
 * FUNCTION
 *  l4cps_as_common_cell_power_level_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rat                 [IN]
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_as_common_cell_power_level_ind_hdlr(l4c_rat_enum rat, local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    kal_uint8 csq_level = 99;
    kal_uint8 ciev_signal_level = 0; //hong_rx_level
    kal_uint8 temp_src = RMMI_PTR->current_src;
    kal_int32 rssi_in_qdbm = 1;//Set initial value to Invalid -> '1'
    kal_int32 RSCP_in_qdbm = 1;
    kal_int32 EcN0_in_qdbm = 1;
	kal_uint8 ber = 99;
	kal_uint8 current_band = 0;

    /* 1. Prepare raw data */	
	if (rat == L4C_RAT_GSM)
	{
    	l4cps_gas_cell_power_level_ind_struct *msg_ptr = (l4cps_gas_cell_power_level_ind_struct*) local_para_ptr;
		rssi_in_qdbm = msg_ptr->rssi_in_qdbm;
		//RSCP_in_qdbm = 0; /* dummy */
		//EcN0_in_qdbm = 0; /* dummy */
		ber = msg_ptr->ber;
		current_band = msg_ptr->current_band;
	}
#ifdef __UMTS_RAT__	
	else if (rat == L4C_RAT_UMTS)
	{
	    l4cps_uas_cell_power_level_ind_struct *msg_ptr = (l4cps_uas_cell_power_level_ind_struct*) local_para_ptr;
		rssi_in_qdbm = msg_ptr->rssi_in_qdbm;
		RSCP_in_qdbm = msg_ptr->RSCP_in_qdbm;
		EcN0_in_qdbm = msg_ptr->EcN0_in_qdbm;
		ber = msg_ptr->ber;
		//current_band = 0; /* dummy */
	}
#endif /* __UMTS_RAT__ */
	else
	{
	    ASSERT(0);
	}

    /* 2. Indication Report to LMMI and RMMI */
    l4c_nw_rx_level_lind(rat, rssi_in_qdbm, RSCP_in_qdbm, EcN0_in_qdbm, ber, current_band);
    csq_level = 
		custom_signal_strength_raw_to_csq_level(rat, rssi_in_qdbm, RSCP_in_qdbm, EcN0_in_qdbm, ber, current_band);	    
    ciev_signal_level = 
        custom_signal_strength_raw_to_ciev_signal_level(rat, rssi_in_qdbm, RSCP_in_qdbm, EcN0_in_qdbm, ber, current_band); //hong_rx_level
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_nw_rx_level_rind(ciev_signal_level);

    if ((csq_level != L4C_PTR->csq_level) 
        || (ber != L4C_PTR->ber)
        || (rssi_in_qdbm != L4C_PTR->rssi_in_qdbm)
        || ((rat == L4C_RAT_UMTS) && ((RSCP_in_qdbm != L4C_PTR->RSCP_in_qdbm) || (EcN0_in_qdbm != L4C_PTR->EcN0_in_qdbm)))
       )
    {
    	l4c_nw_signal_quality_rind(csq_level, ber, rssi_in_qdbm, RSCP_in_qdbm, EcN0_in_qdbm, rat);
    }
    RMMI_PTR->current_src = temp_src;

#ifdef __MBIM_SUPPORT__
    l4c_nw_rx_level_mind(csq_level, ber);
#endif

    /* 3. Store in L4C Context */
    L4C_PTR->csq_level = csq_level;
    L4C_PTR->ber = ber;
    L4C_PTR->rssi_in_qdbm = rssi_in_qdbm;
    L4C_PTR->RSCP_in_qdbm = RSCP_in_qdbm;
    L4C_PTR->EcN0_in_qdbm = EcN0_in_qdbm;
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4cps_gas_cell_power_level_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_gas_cell_power_level_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cps_as_common_cell_power_level_ind_hdlr(L4C_RAT_GSM, local_para_ptr, peer_buff_ptr);
}

#ifdef __UMTS_RAT__
/*****************************************************************************
 * FUNCTION
 *  l4cps_uas_cell_power_level_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4cps_uas_cell_power_level_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cps_as_common_cell_power_level_ind_hdlr(L4C_RAT_UMTS, local_para_ptr, peer_buff_ptr);
}
#endif /* __UMTS_RAT__ */

/* ------------------------------------------------------- rx_level revision */ 

/*****************************************************************************
 * FUNCTION
 *  l4crac_nw_info_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_nw_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_nw_info_ind_struct *msg_ptr = NULL;	
    kal_uint8 full_nw_name_dcs = 0;
    kal_bool full_nw_name_add_ci = KAL_FALSE;
    kal_uint8 full_nw_name[MAX_NW_NAME_LEN];
    kal_uint8 short_nw_name_dcs = 0;
    kal_bool short_nw_name_add_ci = KAL_FALSE;
    kal_uint8 short_nw_name[MAX_NW_NAME_LEN];
    kal_uint8 plmn[7] = {RMMI_END_OF_STRING_CHAR};  

    /* refer to TS 24.008 section 10.5.3.5a Network Name for the full_nw_name and short_nw_name */
    msg_ptr = (l4crac_nw_info_ind_struct*) local_para_ptr;

    if (msg_ptr->full_nw_nameP == KAL_TRUE)
    {
        kal_mem_set(full_nw_name, 0x00, MAX_NW_NAME_LEN);

        if (((msg_ptr->full_nw_name[0] & 0x70) >> 4) == 0)
        {
            full_nw_name_dcs = SMSAL_DEFAULT_DCS;
        }
        else if (((msg_ptr->full_nw_name[0] & 0x70) >> 4) == 1)
        {
            full_nw_name_dcs = SMSAL_UCS2_DCS;
        }
        else
        {
            full_nw_name_dcs = SMSAL_RESERVED_DCS;
        }

        full_nw_name_add_ci = (kal_bool) ((msg_ptr->full_nw_name[0] & 0x08) >> 3);

        msg_ptr->full_nw_name_len = msg_ptr->full_nw_name_len - 1;

        if (msg_ptr->full_nw_name_len >= MAX_NW_NAME_LEN)
        {
            msg_ptr->full_nw_name_len = MAX_NW_NAME_LEN - 1;
        }

        if (msg_ptr->full_nw_name_len != 0) /* Johnny: empty string */
        {
            if (full_nw_name_dcs == SMSAL_DEFAULT_DCS)
            {
                csmss_gsm7_unpack(
                    (kal_uint8*) full_nw_name,
                    (kal_uint8*) & (msg_ptr->full_nw_name[1]),
                    (kal_uint16) msg_ptr->full_nw_name_len,
                    0);

                if ((msg_ptr->full_nw_name_len % 7 == 0)
                    && ((msg_ptr->full_nw_name[0] & 0x07) == 0x07))
                {
                    msg_ptr->full_nw_name_len = (kal_uint8) msg_ptr->full_nw_name_len * 8 / 7 - 1;
                }
                else
                {
                    msg_ptr->full_nw_name_len = (kal_uint8) msg_ptr->full_nw_name_len * 8 / 7;
                }
            }
            else					
            {
                kal_mem_cpy(full_nw_name, (kal_uint8*) & (msg_ptr->full_nw_name[1]), msg_ptr->full_nw_name_len);
            }
        }
    }

    if (msg_ptr->short_nw_nameP == KAL_TRUE)
    {
        kal_mem_set(short_nw_name, 0x00, MAX_NW_NAME_LEN);

        if (((msg_ptr->short_nw_name[0] & 0x70) >> 4) == 0)
        {
            short_nw_name_dcs = SMSAL_DEFAULT_DCS;
        }
        else if (((msg_ptr->short_nw_name[0] & 0x70) >> 4) == 1)
        {
            short_nw_name_dcs = SMSAL_UCS2_DCS;
        }
        else
        {
            short_nw_name_dcs = SMSAL_RESERVED_DCS;
        }

        short_nw_name_add_ci = (kal_bool) ((msg_ptr->short_nw_name[0] & 0x08) >> 3);

        msg_ptr->short_nw_name_len = msg_ptr->short_nw_name_len - 1;

        if (msg_ptr->short_nw_name_len >= MAX_NW_NAME_LEN)
        {
            msg_ptr->short_nw_name_len = MAX_NW_NAME_LEN - 1;
        }

        if (msg_ptr->short_nw_name_len != 0)    /* Johnny: empty string */
        {
            if (short_nw_name_dcs == SMSAL_DEFAULT_DCS)
            {
                csmss_gsm7_unpack(
                    (kal_uint8*) short_nw_name,
                    (kal_uint8*) & (msg_ptr->short_nw_name[1]),
                    (kal_uint16) msg_ptr->short_nw_name_len,
                    0);

                if ((msg_ptr->short_nw_name_len % 7 == 0)
                    && ((msg_ptr->short_nw_name[0] & 0x07) == 0x07))
                {
                    msg_ptr->short_nw_name_len = (kal_uint8) msg_ptr->short_nw_name_len * 8 / 7 - 1;
                }
                else
                {
                    msg_ptr->short_nw_name_len = (kal_uint8) msg_ptr->short_nw_name_len * 8 / 7;
                }
            }
            else
            {
                kal_mem_cpy(short_nw_name, (kal_uint8*) & (msg_ptr->short_nw_name[1]), msg_ptr->short_nw_name_len);
            }
        }
    }

    plmn_convert_to_digit(& msg_ptr->plmn_id, (kal_uint8*) plmn);

    if (L4C_PTR->cc_state[RMMI_SRC] == L4C_COMMAND_STATE)
    {
        kal_uint8 temp_src;

        temp_src = RMMI_PTR->current_src;
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        if (msg_ptr->nw_time_zoneP)	
        {
            l4c_nw_time_zone_rind(msg_ptr->nw_time_zone,
                                  msg_ptr->nw_day_light_saving_timeP,
                                  msg_ptr->nw_day_light_saving_time);
        }
        if (msg_ptr->nw_time_zone_timeP)
        {
            l4c_nw_nitz_rind(msg_ptr->nw_time_zone_time.year,
                             msg_ptr->nw_time_zone_time.month,
                             msg_ptr->nw_time_zone_time.day,
                             msg_ptr->nw_time_zone_time.hour,
                             msg_ptr->nw_time_zone_time.min,
                             msg_ptr->nw_time_zone_time.sec,
                             msg_ptr->nw_time_zone_time.time_zone,
                             msg_ptr->nw_day_light_saving_timeP,
                             msg_ptr->nw_day_light_saving_time);
        }
        if (((msg_ptr->full_nw_nameP == KAL_TRUE) && (msg_ptr->full_nw_name_len > 0)) 
            || ((msg_ptr->short_nw_nameP == KAL_TRUE) && (msg_ptr->short_nw_name_len > 0)))
        {	 
            l4c_nw_oper_name_rind(plmn,
                                  msg_ptr->full_nw_nameP,
                                  full_nw_name_dcs,
                                  full_nw_name, 
                                  msg_ptr->full_nw_name_len, 
                                  msg_ptr->short_nw_nameP,
                                  short_nw_name_dcs,
                                  short_nw_name,
                                  msg_ptr->short_nw_name_len);
        }
        RMMI_PTR->current_src = temp_src;
    }
	
    if (L4C_PTR->cc_state[LMMI_SRC] == L4C_COMMAND_STATE)
    {

        l4c_nw_time_zone_time_struct nw_time_zone_time;

        kal_mem_cpy(&nw_time_zone_time, &(msg_ptr->nw_time_zone_time), sizeof(l4c_nw_time_zone_time_struct));

        l4c_nw_time_zone_lind(msg_ptr->full_nw_nameP,
                              full_nw_name_dcs,
                              full_nw_name_add_ci,
                              msg_ptr->full_nw_name_len,
                              full_nw_name,
                              msg_ptr->short_nw_nameP,
                              short_nw_name_dcs,
                              short_nw_name_add_ci,
                              msg_ptr->short_nw_name_len,
                              short_nw_name, 
                              msg_ptr->nw_time_zoneP, 
                              msg_ptr->nw_time_zone, 
                              msg_ptr->nw_time_zone_timeP,
                              nw_time_zone_time,
                              msg_ptr->lsa_idP,
                              msg_ptr->lsa_id_len,
                              msg_ptr->lsa_id, 
				  msg_ptr->nw_day_light_saving_timeP, 
				  msg_ptr->nw_day_light_saving_time,
                              (kal_uint8*) plmn);  
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_cipher_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_cipher_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_cipher_ind_struct *msg_ptr = NULL;

    msg_ptr = (l4crac_cipher_ind_struct*) local_para_ptr;
    l4c_sim_cipher_lind((kal_bool)l4csmu_get_cipher_ind_status(), msg_ptr->is_gsm_conn_exist, msg_ptr->gsm_cipher_cond, msg_ptr->gprs_cipher_cond);       //gmmreg_cipher_ind_enum

#if !defined(__MMI_FMI__)
    l4c_sim_cipher_rind((kal_bool)l4csmu_get_cipher_ind_status(), msg_ptr->is_gsm_conn_exist, msg_ptr->gsm_cipher_cond, msg_ptr->gprs_cipher_cond);       //gmmreg_cipher_ind_enum
#endif

    /* Johnny: L4C will save cipher_ind_msg additionally and send it to MMI after CALL_RING_IND */
    L4C_PTR->cipher_ind_msg.is_gsm_conn_exist = msg_ptr->is_gsm_conn_exist;
    L4C_PTR->cipher_ind_msg.gsm_cipher_cond = msg_ptr->gsm_cipher_cond;
    L4C_PTR->cipher_ind_msg.gprs_cipher_cond = msg_ptr->gprs_cipher_cond;

    return;
}

//mtk01616_070905: for R5 ECC category


/*****************************************************************************
 * FUNCTION
 *  l4crac_nw_ecc_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_nw_ecc_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __REL5__
    l4crac_nw_ecc_ind_struct *msg_ptr = NULL;
    l4cphb_update_nw_ecc_req_struct *param_ptr;
    l4c_rac_ecc_number_struct ecc_list[16];

    msg_ptr = (l4crac_nw_ecc_ind_struct*) local_para_ptr;
    param_ptr = (l4cphb_update_nw_ecc_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4cphb_update_nw_ecc_req_struct), TD_RESET);

    param_ptr->no_ecc = msg_ptr->no_ecc;
    kal_mem_cpy(
        (rac_ecc_number_struct*) param_ptr->ecc_list,
        (rac_ecc_number_struct*) msg_ptr->ecc_list,
        sizeof(rac_ecc_number_struct) * 16);

    l4c_send_msg_to_phb(MSG_ID_L4CPHB_UPDATE_NW_ECC_REQ, param_ptr, NULL);

    kal_mem_cpy(ecc_list, msg_ptr->ecc_list, sizeof(l4c_rac_ecc_number_struct) * 16);
    l4c_nw_update_ecc_lind(msg_ptr->no_ecc, ecc_list);
#endif /* __REL5__ */ 
    return;
}

void l4crac_set_roaming_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__DYNAMIC_ROAMING_SUPPORT__)
    l4crac_set_roaming_mode_cnf_struct *param_ptr = (l4crac_set_roaming_mode_cnf_struct*) local_para_ptr;

    if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, SYS_CONFIG) == KAL_TRUE)
    {
        l4c_nw_sysconfig_update(param_ptr->src_id);
    }
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4crac_set_rat_mode_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_set_rat_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4crac_set_rat_mode_cnf_struct *param_ptr;
    l4crac_reg_req_struct *param_ptr1;
#ifdef __MOD_TCM__    
    kal_uint8 cell_support_egprs;
#endif
    kal_uint8 rat;

    kal_uint8 id;
//MAUI_02601013    l4crac_dereg_cnf_struct dereg_cnf_param;


    param_ptr = (l4crac_set_rat_mode_cnf_struct*) local_para_ptr;

    //rx_level: reset csq_level & ber, when set rat mode success
    if (param_ptr->result)
    {
        l4c_nw_clear_csq_ber_context();
    }

    if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, SET_RAT_MODE) == KAL_TRUE)
    {
        if (l4c_ptr->rac_user == LMMI_SRC)
        {
            l4c_nw_set_rat_mode_lrsp(param_ptr->result);
        }
	    else if ((l4c_ptr->rac_user >= RMMI_SRC) && (l4c_ptr->rac_user < RMMI_ALL)) //MAUI_02554068
	    {
 	        rmmi_ptr->current_src = param_ptr->src_id;	 
	        l4c_general_rrsp(param_ptr->result, L4C_NO_CAUSE);
	    }
#if 0 //MAUI_02601013 AS expects REG_REQ after SET_RAT_MODE_CNF
    #ifdef __ECC_RETRY_ENHANCEMENT__ //MAUI_02554068
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif
        {
            l4c_set_user_action(L4C_RAC, param_ptr->src_id, SET_RAT_MODE_ATTACH);
        }
    }
#ifdef __DYNAMIC_BAND_SEL__
    else if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, CBND_SET) == KAL_TRUE)
    {
        if (l4c_ptr->rac_user == LMMI_SRC)
        {
            l4c_nw_set_preferred_band_lrsp(KAL_TRUE, L4C_RAC_OK);
        }
	    else
        {
            rmmi_ptr->current_src = param_ptr->src_id; 
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }       

        l4c_set_user_action(L4C_RAC, param_ptr->src_id, RFON_ATTACH);    
    }
#endif
#ifdef __DYNAMIC_HSPA_PREFERENCE__ 
    else if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, SET_HSPA_MODE) == KAL_TRUE)
    {
        if (param_ptr->src_id == LMMI_SRC)
        {
            l4c_nw_set_hspa_mode_lrsp(KAL_TRUE);
        }
        else if ((param_ptr->src_id >= RMMI_SRC) && (param_ptr->src_id < RMMI_ALL))
        {
            rmmi_ptr->current_src = param_ptr->src_id;
            l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        }

        l4c_set_user_action(L4C_RAC, param_ptr->src_id, RFON_ATTACH);
    }
#endif
    else if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, PWRON_SET_RAT_MODE) == KAL_TRUE)
    {
    #ifdef __VSIM__
        if ((query_ps_conf_test_mode()==PS_CONF_TEST_FACTORY) && (query_ps_conf_test_profile_setting() & FACTORY_MODEM_VIRTUAL_SIM_ON_BIT_FOR_L4C))
        {
            l4c_sim_vsim_req(L4C_SRC, KAL_TRUE);
        }
    #endif
        l4c_set_user_action(L4C_RAC, param_ptr->src_id, PWRON_ATTACH);
    }
    else if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, RFON_SET_RAT_MODE) == KAL_TRUE)
    {
        if (l4c_ptr->rac_user == LMMI_SRC)
        {
            l4c_nw_cfun_state_lrsp(KAL_TRUE);
        }
    #if defined(__GEMINI__)
        else if (l4c_ptr->rac_user == LMMI_SRC2)
        {
            l4c_root_sim_mode_switch_req(param_ptr->src_id);
        }
    #endif     
    #ifdef __MBIM_SUPPORT__
        else if (l4c_ptr->rac_user >= MBCI_SRC && l4c_ptr->rac_user <= MBCI_SRC_END)
        {
            l4c_nw_cfun_state_mrsp(param_ptr->src_id, KAL_TRUE);                
        }
    #endif
	    else
        {
	        rmmi_ptr->current_src = param_ptr->src_id; 
	    #if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	    #endif
	            l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);
	    #if defined(__TC01__) && defined(__RMMI_EXTEND_CUSTOM_CMD__)				
/* under construction !*/
	    #endif //MAUI_02258321, mtk02285
        }       

    #ifdef __MBIM_SUPPORT__
        l4c_nw_cfun_state_mind();
    #endif

        l4c_set_user_action(L4C_RAC, param_ptr->src_id, RFON_ATTACH);
    }
    else        //SET_RAT_MODE/PWRON_SET_RAT_MODE/RFON_SET_RAT_MODE is overwritten by PWROFF_DETACH/RFOFF_DETACH/SET_RAT_MODE_DETACH
#if defined(__OP01__)
    if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, SYS_CONFIG) == KAL_TRUE)
    {
        l4c_nw_sysconfig_update(param_ptr->src_id);
        return;
    }
    else
#endif
#if defined(__SYSSEL_SUPPORT__)
    if (l4c_check_user_action(L4C_RAC, param_ptr->src_id, SYS_SEL) == KAL_TRUE)
    {
        l4c_nw_syssel_update(param_ptr->src_id);
        return;
    }
    else
#endif
    {
        /* Johnny:
           power off detach should be handled specially during set rat mode:
           1. do not send L4CRAC_DEREG_REQ to RAC and set rac_current_action
           2. treat L4CRAC_SET_RAT_MODE_CNF as L4CRAC_DEREG_CNF */

        l4c_result_struct result;

        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;

        switch (l4c_ptr->rac_current_action)
        {
            case PWROFF_DETACH:
            {
            #ifdef __MOD_TCM__
                cell_support_egprs = l4crac_get_egprs_status();
                l4c_ps_gprs_status_update_lind(L4C_GPRS_DETACHED, cell_support_egprs
					, l4crac_get_cell_data_speed_support()
					, l4c_ptr->max_data_bearer_capa);//mtk02285, hspa_mmi_h2
            #ifdef __TCPIP__ /* ABM */
                l4c_abm_gprs_status_ind_helper(L4C_GPRS_DETACHED);
            #endif 
            #endif /* __MOD_TCM__ */ 
                if (l4c_ptr->rac_user == LMMI_SRC)
                {
                    l4c_nw_powroff_detach_lrsp(result);
                    l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
                }
            #if defined(__GEMINI__)
                else if (l4c_ptr->rac_user == LMMI_SRC2)
                {
                    l4c_nw_exe_rf_off_req(L4C_ROOT_PTR->root_src_id, PWROFF_DETACH);
                }
            #endif          
                else
                {
                    /* power-off SIM after RF OFF
                    rmmi_ptr->current_src = l4c_ptr->rac_user;
                    l4c_nw_powroff_detach_rrsp(result);
                    */
                    l4c_nw_exe_rf_off_req(l4c_ptr->rac_user, PWROFF_DETACH);
                }				
                return; //[MAUI_01299991] : lexel, do not reg network
            }
            case RFOFF_DETACH:
            {
                l4c_nw_exe_rf_off_req(l4c_ptr->rac_user, RFOFF_DETACH);
                return;
            }
        }
    }

#ifdef __MOD_TCM__  // mtk02126 wrap pending_latest_auto_attach in __MOD_TCM__ MAUI_02420439
    // Update RAC context about the auto attach setting.
    // If the setting is GPRS always, RAC will do GPRS attach during registration procedure.
    if (l4c_ptr->pending_latest_auto_attach != L4C_GPRS_CONN_TYPE_UNKNOWN
        && l4c_ptr->pending_latest_auto_attach != l4crac_get_auto_attach())
    {
        l4crac_update_auto_attach((kal_bool)l4c_ptr->pending_latest_auto_attach);
	    l4c_ptr->pending_latest_auto_attach = L4C_GPRS_CONN_TYPE_UNKNOWN;
    }
#endif /* ~__MOD_TCM__ */     

#if defined(__ENS_RAT_BALANCING__) && defined(__UMTS_RAT__)
    if ((l4c_ptr->mmrr_ready_flag == KAL_TRUE) && 
        ((l4c_ptr->rac_current_action == PWRON_ATTACH) || (l4c_ptr->rac_current_action == RFON_ATTACH)))
    {
        l4c_rat_enum rat_mode = l4c_nw_check_ef_rat_mode();

        if (rat_mode != l4crac_get_rat_mode())
        {
            l4c_nw_set_rat_mode_req(L4C_SRC, rat_mode);
            return;
        }
    }
#endif

    param_ptr1 = (l4crac_reg_req_struct*) construct_local_para((kal_uint16) sizeof(l4crac_reg_req_struct), TD_RESET);
    param_ptr1->src_id = param_ptr->src_id;
    
    /* MAUI_02554068: mmrr_ready_flag is not set or ECC change RAT retry shall search any */
    if ((param_ptr->src_id == L4C_SRC) && 
        ((l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == ATD_ECC_CHANGE_RAT) ||
        //MAUI_02601013 AS expects REG_REQ after SET_RAT_MODE_CNF
        (l4c_search_all_src_ext(l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT, &id) == KAL_TRUE)))
    {
        param_ptr1->search_type = MMI_SEARCH_ANY;
    }
    else
    if (l4c_ptr->mmrr_ready_flag == KAL_FALSE)
    {
        param_ptr1->search_type = MMI_SEARCH_ANY;
    }
    else
    {
        l4c_ptr->has_deregistered = KAL_FALSE;
        param_ptr1->search_type = MMI_SEARCH_NORMAL;
    }
    l4c_send_msg_to_rac(MSG_ID_L4CRAC_REG_REQ, param_ptr1);

    //MAUI_02554068: start retry timer to guard REG duration
    if ((param_ptr->src_id == L4C_SRC) && 
        (l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == ATD_ECC_CHANGE_RAT))
    {
        l4c_start_retry_timer_hdlr(l4c_ptr->retry_src_id);
    }
    else if ((param_ptr->src_id == L4C_SRC) && 
        (l4c_search_all_src_ext(l4c_current_mod_id, ATD_ECC_CHANGE_RAT_ABORT, &id) == KAL_TRUE))
    {
        //MAUI_02601013 L4C sends dummy REG_REQ above and starts to resume here
        l4c_nw_set_rat_mode_req(L4C_SRC, l4crac_get_nvram_rat_mode());
        l4c_ptr->cc_current_action[id] = L4C_NO_ACTION;
    }

    /*[MAUI_01712431]CC R6 change request*/
    if (param_ptr->result == KAL_TRUE)
    {
        rat = l4crac_get_rat_mode();
        l4ccsm_cc_set_rat_mode(rat);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_plmn_list_stop_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_plmn_list_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_plmn_list_stop_cnf_struct *param_ptr;

    param_ptr = (l4crac_plmn_list_stop_cnf_struct*) local_para_ptr;

    if (param_ptr->src_id == LMMI_SRC)
    {
        l4c_nw_abort_plmn_list_lrsp(KAL_TRUE);
    }

    //mtk01616_070910: in MONZA , there is plmn_list_stop_cnf , we clear action right after receiving the cnf
    l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
#ifdef __MOD_TCM__
    if (L4C_PTR->gprs_connection_timeout == KAL_TRUE)
    {
        if (l4c_nw_exe_gprs_connection_type() == KAL_TRUE)
	    L4C_PTR->gprs_connection_timeout = KAL_FALSE;
    }
#endif //mtk02285, 201003, 6251_ram	
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_set_prefer_rat_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_set_prefer_rat_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_set_prefer_rat_cnf_struct *param_ptr;

    param_ptr = (l4crac_set_prefer_rat_cnf_struct*) local_para_ptr;

#if defined(__OP01__)
    if (L4C_PTR->rac_current_action == SYS_CONFIG)
    {
        l4c_nw_sysconfig_update(param_ptr->src_id);
    }
    else
#endif
#if defined(__SYSSEL_SUPPORT__)
    if (L4C_PTR->rac_current_action == SYS_SEL)
    {
        l4c_nw_syssel_update(param_ptr->src_id);
    }
    else
#endif
    {
        if (param_ptr->src_id == LMMI_SRC)
        {
            l4c_nw_set_prefer_rat_lrsp(param_ptr->result);
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4crac_csg_list_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_csg_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__CSG_SUPPORT__)
    l4crac_csg_list_cnf_struct *msg_ptr = (l4crac_csg_list_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = msg_ptr->src_id;

    if (l4c_check_user_action(L4C_RAC, msg_ptr->src_id, CSG_TEST) == KAL_TRUE)
    {
        if (msg_ptr->response == L4C_RAC_OK)
        {
            if (src_id == LMMI_SRC)
            {
                // TODO
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                RMMI_PTR->current_src = src_id ;
                l4c_nw_get_csg_list_rrsp(KAL_TRUE, msg_ptr->csg_list.plmn_count, msg_ptr->csg_list.available_plmn_csg);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                // TODO
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                RMMI_PTR->current_src = src_id ;
                l4c_ps_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
    }

    l4c_free_csg_list(&(msg_ptr->csg_list));

    l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4crac_csg_list_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_csg_list_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__CSG_SUPPORT__)
    l4crac_csg_list_stop_cnf_struct *param_ptr = (l4crac_csg_list_stop_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = param_ptr->src_id;

    if (src_id == LMMI_SRC)
    {
        // TODO
    }
    else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
        RMMI_PTR->current_src = src_id; 
        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
    }

    l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
#endif
}

#ifdef __GEMINI__


/*****************************************************************************
 * FUNCTION
 *  l4crac_search_normal_finish_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_search_normal_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    //if(l4c_current_mod_id == MOD_L4C)
    //   l4c_power_on_dual_sim(L4C_RAC_SEARCH, 0, 0, KAL_FALSE,0);
    l4c_nw_search_normal_finish_lind();
#ifndef __MMI_FMI__
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_nw_search_normal_finish_rind(); // gemini modem
#endif
}
#endif /* __GEMINI__ */ 

#ifdef __GEMINI__


/*****************************************************************************
 * FUNCTION
 *  l4crac_mmrr_service_status_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_mmrr_service_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_mmrr_service_status_ind_struct *param_ptr;

    param_ptr = (l4crac_mmrr_service_status_ind_struct*) local_para_ptr;
    l4c_nw_mmrr_service_status_lind(param_ptr->service_status);
    l4c_nw_mmrr_service_status_rind((kal_uint8)param_ptr->service_status);
}
#endif /* __GEMINI__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4crac_ps_event_report_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_ps_event_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if !defined(__SLIM_AT__) // at+cgerep is wrapped by SLIM
    l4crac_ps_event_report_ind_struct *param_ptr;
    kal_uint8 pdp_addr;
    kal_uint8 temp_src;

    param_ptr = (l4crac_ps_event_report_ind_struct*) local_para_ptr;

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_nw_gprs_event_report_rind(param_ptr->event_id, 0, 0, 0, &pdp_addr);
    RMMI_PTR->current_src = temp_src;
#endif /* #if !defined(__SLIM_AT__) */	
}

#ifdef __TCPIP__
void l4c_ps_abm_nw_attach_ind(kal_uint8  status,kal_uint8* plmn,kal_uint8  gsm_state,
		kal_uint8  gprs_state,l4c_gprs_status_enum  gprs_status,kal_uint8  rat,kal_uint8  cell_support_egprs,kal_uint8*  lac) 
{
    l4c_ps_abm_nw_attach_ind_struct *param_ptr;
	
    param_ptr = (l4c_ps_abm_nw_attach_ind_struct*)
        construct_local_para((kal_uint16) sizeof(l4c_ps_abm_nw_attach_ind_struct), TD_RESET);

    param_ptr->status = status;
    kal_mem_cpy(param_ptr->plmn, plmn, MAX_PLMN_LEN + 1);
    param_ptr->gsm_state = gsm_state;
    param_ptr->gprs_state = gprs_state;
    param_ptr->gprs_status = gprs_status;
    param_ptr->rat = rat;
    param_ptr->cell_support_egprs = cell_support_egprs;
    kal_mem_cpy(param_ptr->lac, lac, 2);

    l4c_send_msg_to_abm(MSG_ID_L4C_PS_ABM_NW_ATTACH_IND, param_ptr);
}
#endif


#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
/*****************************************************************************
 * FUNCTION
 *  l4crac_end_ps_data_session_ind_hdlr
 * DESCRIPTION
 *  When attach request without Follow-On Request, but NW replies Follow-On 
 *  Proceed and causes CMCC TD power consumption issue. MM sends this message 
 *  to trigger L4C send SCRI to enter low power mode. Refer to MOLY00000133
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_end_ps_data_session_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
    kal_uint8 temp_src = RMMI_PTR->current_src;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    if (L4C_PTR->fast_dormancy_mode == 0)
    {
        RMMI_PTR->current_src = RMMI_UNSOLICITED;
        l4c_nw_end_ps_data_session_rind(INVALID_SRC, SCRI_REQ_IND); //report +ESCRI: 6
        RMMI_PTR->current_src = temp_src;
    }
    else
    {
        /* 1. when R8 FD monitor procedure is going on, ignore this message
         * 2. when R8 FD monitor procedure is stopped, send 
         */
        if (l4c_ptr->fd_event == 0)
        {
            l4c_nw_end_ps_data_session_req(L4C_SRC, KAL_TRUE);
        }
        
        l4c_ptr->fd_fop_received = KAL_TRUE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_rrce_pch_txrx_ind_hdlr
 * DESCRIPTION
 *  RRCE notify L4C there is TX/RX event happened. L4C shall reset monitor slot.
 *  RX: NW page UE
 *  TX: UMAC informs RRCE to do Cell Update
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_rrce_pch_txrx_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    kal_uint8 normal_tick = custom_get_fd_monitor_slot();

    if ((l4c_ptr->fast_dormancy_mode == 1) && 
        (l4c_ptr->fd_event != 0) &&
        (l4c_ptr->fd_monitor_tick != normal_tick))
    {
       /* the pdp statistics is change. reset monitor slot and keep monitoring */
           l4c_ptr->fd_monitor_tick = normal_tick;

           evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->fd_event));
           l4c_ptr->fd_event = evshed_set_event(l4c_ptr->event_scheduler_ptr,
                                    (kal_timer_func_ptr) l4c_fd_monitor_timeout_hdlr,
                                    NULL,
                                    l4c_ptr->fd_monitor_tick * KAL_TICKS_100_MSEC);
    }
}
#endif /* defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__) */


#if defined(__REPORT_AVAILABLE_PLMN__)
/*****************************************************************************
 * FUNCTION
 *  l4crac_plmn_list_ind_hdlr
 * DESCRIPTION
 *  handler function for MSG_ID_L4CRAC_PLMN_LIST_IND. MM sends this message
 *  to notify upper layer the current available PLMN list.
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_plmn_list_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
    kal_uint8 i;
    l4c_rat_plmn_info_struct list[MAX_PLMN_LIST_LEN]; //status and lac is not used currently
    l4crac_plmn_list_ind_struct *msg_ptr = (l4crac_plmn_list_ind_struct*)local_para_ptr;

    for (i = 0; ((i < msg_ptr->plmn_list.plmn_count) && (i < MAX_PLMN_LIST_LEN)) ; i++)
    {
        plmn_convert_to_digit(&(msg_ptr->plmn_list.plmn_id_rat[i].plmn_id), (kal_uint8*)(list[i].plmn_id));
    }
    
    l4c_nw_plmn_list_rind(i, list);
}
#endif /* defined(__REPORT_AVAILABLE_PLMN__) */


#if defined(__2STAGE_NW_SELECTION__)
/*****************************************************************************
 * FUNCTION
 *  l4crac_suspend_status_ind_hdlr
 * DESCRIPTION
 *  handler function for MSG_ID_L4CRAC_SUSPEND_STATUS_IND. RAC sends this message
 *  to notify upper layer the network selection is suspend.
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_suspend_status_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
    l4crac_suspend_status_ind_struct *msg_ptr = (l4crac_suspend_status_ind_struct*)local_para_ptr;

    l4c_nw_modem_suspend_rind(msg_ptr->susp_id);
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_susp_resu_update_cnf_hdlr
 * DESCRIPTION
 *  handler function for MSG_ID_L4CRAC_SUSP_RESU_UPDATE_CNF. RAC sends this message
 *  to confirm the MSG_ID_L4CRAC_SUSP_RESU_UPDATE_REQ.
 * PARAMETERS
 *  local_para_ptr      [IN]     
 *  peer_buff_ptr       [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_susp_resu_update_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr)
{
    l4crac_susp_resu_update_cnf_struct *msg_ptr = (l4crac_susp_resu_update_cnf_struct*)local_para_ptr;
    kal_bool result = (msg_ptr->result == SUSP_RESU_OK)? (KAL_TRUE) : (KAL_FALSE);
    l4c_source_id_enum src_id = msg_ptr->src_id;
    
    if ((src_id >= RMMI_SRC) && (src_id < RMMI_ALL))
    {
        RMMI_PTR->current_src = src_id; 
        l4c_general_rrsp(result, L4C_NO_CAUSE);
    }
}
#endif /* defined(__2STAGE_NW_SELECTION__) */

#endif /* __MOD_RAC__ */ 

