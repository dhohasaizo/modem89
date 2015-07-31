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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	csmss_msg_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for handler of messages from L4C and SS.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define CSMSS_MSG_HDLR_C

#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"       	/* Task message communiction */
#include "ps2sim_struct.h"  // mtk01488
#include "sim_common_enums.h"
#include "l4c_common_enum.h"
#include "csmcc_common_enums.h"
#include "csmss_common_enums.h"
#include "l3_inc_enums.h"
#include "mcd.h"
#include "mcd_ss_parameters.h"       /* 3GPP 24.080 */
#include "mcd_ss_tcapmessages.h"     /* ITU-T Q.773 */
#include "mnss_struct.h"
#include "mcd_l4_common.h"
#include "l4c2csm_ss_struct.h"
#include "ps2sat_struct.h"
#include "sat_def.h"
#include "smsal_l4c_enum.h"
#include "smsal_cb.h"
#include "l4c_utility.h"
#include "nvram_struct.h"
#include "nvram_enums.h"
#include "nvram_data_items.h"
#include "csmss_context.h"
#include "csmss_aux_msg_hdlr.h"
#include "kal_trace.h"
#include "csm_trc.h"
#include "l4_msgid.h"
#include "sim_ps_msgid.h"
#include "nvram_msgid.h"
#include "ciss_msgid.h"
#include "ps_em_enum.h"

#ifdef _TST_CSMSS_
#include "tst_sap.h"
#endif

#include "kal_general_types.h" 
#include "ps_public_enum.h"    
#include "ps_public_struct.h"  

#ifdef __GEMINI_3G_SWITCH__
#include "ps_public_utility.h"
#endif

/* check compile option compatable */
#if defined (__Rel45_OVER_CPHS__)
#if !defined (__REL4__)
#error need to define (__REL4__) first
#endif
#endif //defined (__Rel45_OVER_CPHS__)

/* routine declarations */

kal_bool csmss_fsm(ilm_struct *ilm_ptr);
kal_bool csmss_startup_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_ss_parse_req_hdlr(local_para_struct *local_para_ptr);
#ifdef __SAT__
kal_bool csmss_ss_ctrl_cnf_hdlr(local_para_struct *local_para_ptr,
                                peer_buff_struct *peer_buff_ptr);
kal_bool csmss_ss_sat_file_change_ind_hdlr(local_para_struct *local_para_ptr,
                                peer_buff_struct *peer_buff_ptr);
#endif
kal_bool csmss_cf_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_cw_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_cb_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_emlpp_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_cli_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_ccbs_begin_req_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_pussr_begin_req_hdlr(local_para_struct *local_para_ptr);

kal_bool csmss_begin_ind_hdlr(local_para_struct *local_para_ptr);

kal_bool csmss_end_ind_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_cf_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr, kal_bool update_cfu_icon_only);
kal_bool csmss_cw_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_cb_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_emlpp_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_cli_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_ccbs_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_pussr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_ussr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
kal_bool csmss_ussn_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
#ifdef __SAT__
kal_bool csmss_sim_change_cnf_hdlr(void);
kal_bool csmss_sim_fail_cnf_hdlr(void);
#endif

kal_bool csmss_fac_ind_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_cb_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr);
kal_bool csmss_ussr_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr);
kal_bool csmss_ussn_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr);
kal_bool csmss_cb_fac_res_hdlr(kal_int8 call_id, GuidanceInfo *g_info);
kal_bool csmss_ussr_fac_res_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_ussn_fac_res_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_end_res_hdlr(local_para_struct *local_para_ptr);
void csmss_send_nvram_read_essp_req(void);

#if defined (__CPHS__) || defined (__REL4__)
kal_bool csmss_sim_file_info_cnf_hdlr(local_para_struct *local_para_ptr);
kal_bool csmss_sim_read_cnf_hdlr(     local_para_struct *local_para_ptr);
kal_bool csmss_sim_write_cnf_hdlr(    local_para_struct *local_para_ptr);

kal_bool csmss_nvram_read_cnf_hdlr( ilm_struct *ilm_ptr);
kal_bool csmss_nvram_write_cnf_hdlr(ilm_struct *ilm_ptr);

#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
extern kal_uint8 custom_cfu_store_ftn_in_efcfis(void);
extern ps_conf_test_mode_enum query_ps_conf_test_mode(void);
extern kal_uint32 query_ps_conf_test_profile_setting(void);
void csmss_update_cfu_req( cfu_flag_nvram_action_enum action, kal_uint8 line_id, l4_addr_bcd_struct *p_line1_ftn);
#else
void csmss_update_cfu_req( cfu_flag_nvram_action_enum action, kal_uint8 line_id);
#endif

void csmss_display_cfu_ind(cfu_flag_mmi_action_enum   action, kal_uint8 line_id);
#endif /* __CPHS__ || __REL4__ */

//MAUI_01977687
extern void csmss_send_l4c_startup_cnf(kal_uint8 result);

/* MAUI_01720570 if smu return SMU_SIM_NO_IMSI, need not report cfu to upper layer */
#ifdef __GEMINI__
extern kal_bool csmss_is_smu_sim_no_imsi(kal_uint8 simInterface);
#else
extern kal_bool csmss_is_smu_sim_no_imsi(void);
#endif

#ifdef _TST_CSMSS_
kal_bool csmss_tst_inject_hdlr(local_para_struct *local_para_ptr);
#endif

extern void ciss_component_dealloc(Component *comp);
//MAUI_02731384, [WW FT][MT6276][Germany-Dusseldorf][Tmobile-Eplus][Static Random]Fatal Error(c05,f3e00710) - CISS
//check SIM consistancy for single context
extern module_type ciss_cur_mod;

#ifdef __AGPS_CONTROL_PLANE__
extern kal_bool csmss_lcs_l4c_entry_func(ilm_struct *ilm_ptr);
extern kal_bool csmss_lcs_begin_ind_entry_func(kal_uint8 call_id, kal_uint32 lcs_op, kal_uint8 *src, kal_uint32 total_bits);
extern kal_bool csmss_lcs_fac_ind_entry_func(kal_uint8 call_id, kal_uint32 lcs_op, kal_uint8 *src, kal_uint32 total_bits);
extern kal_bool csmss_ss_lcs_aerp_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
extern kal_bool csmss_ss_lcs_molr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr);
#endif

void csmss_context_selection(kal_uint8 sim_interface)
{
    if(sim_interface<MAX_SIM_NUM){
        csmss_ptr_g = &csmss_g[sim_interface];
        csmss_cur_mod = sim_interface+MOD_CSM;
    }
    else{
        kal_trace(TRACE_ERROR, CSMSS_D, sim_interface);
    }
}

/*****************************************************************************
 * FUNCTION
 *  csmss_fsm
 * DESCRIPTION
 *  This funtion routes the message to the appoprite handler.
 *
 * PARAMETERS
 *  ilm_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_fsm(ilm_struct *ilm_ptr)
{
    kal_bool result = KAL_FALSE;
    /* Some of the messages doesn't have call_id so it wont support the multi
    calls. But CSM is coded for both single & multi calls so it requires
    call_id to associate the message with existing call. Here onwards
    call_id will be taken as 0 in absence of call_id field in any message.
     */

    if ((ilm_ptr->local_para_ptr == NULL)
     && (ilm_ptr->msg_id != MSG_ID_L4CCSM_CISS_STARTUP_REQ)
     && (ilm_ptr->msg_id != MSG_ID_L4CCSM_CISS_USSN_FAC_RES))
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_MSG_CORRUPTED_SUBOP);
        return KAL_FALSE;
    }


#ifdef __AGPS_CONTROL_PLANE__
    /*-----------------------------------
     * The message come from the L4C LCS
     *-----------------------------------*/
    if ((ilm_ptr->msg_id >= MSG_ID_L4CCSM_CISS_MTLR_END_RSP) &&
        (ilm_ptr->msg_id <= MSG_ID_L4CCSM_CISS_MOLR_END_REQ))
    {
        result = csmss_lcs_l4c_entry_func(ilm_ptr);
        return result;
    }
#endif


    switch (ilm_ptr->msg_id)
    {
    case MSG_ID_L4CCSM_CISS_STARTUP_REQ:
        result = csmss_startup_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_SS_PARSE_REQ:
        result = csmss_ss_parse_req_hdlr(ilm_ptr->local_para_ptr);
        break;

#ifdef __SAT__
    case MSG_ID_SAT_SS_CTRL_BY_SIM_CNF:
        result = csmss_ss_ctrl_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        break;

    case MSG_ID_SAT_FILE_CHANGE_IND:
        result = csmss_ss_sat_file_change_ind_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
        break;
#endif

#if 1
    case MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ:
        result = csmss_cf_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ:
        result = csmss_cw_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ:
        result = csmss_cb_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ:
        result = csmss_emlpp_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ:
        result = csmss_cli_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ:
        result = csmss_ccbs_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ:
        result = csmss_pussr_begin_req_hdlr(ilm_ptr->local_para_ptr);
        break;
#endif
    case MSG_ID_L4CCSM_CISS_USSR_FAC_RES:
        result = csmss_ussr_fac_res_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_USSN_FAC_RES:
        result = csmss_ussn_fac_res_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_END_RES:
        result = csmss_end_res_hdlr(ilm_ptr->local_para_ptr);
        break;


    case MSG_ID_MNSS_END_IND:
        result = csmss_end_ind_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_MNSS_FAC_IND:
        result = csmss_fac_ind_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_MNSS_BEGIN_IND:
        result = csmss_begin_ind_hdlr(ilm_ptr->local_para_ptr);
        break;


#if defined (__CPHS__) || defined (__REL4__)
    case MSG_ID_SIM_FILE_INFO_CNF:
        result = csmss_sim_file_info_cnf_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_SIM_READ_CNF:
        result = csmss_sim_read_cnf_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_SIM_WRITE_CNF:
        result = csmss_sim_write_cnf_hdlr(ilm_ptr->local_para_ptr);
        break;

    case MSG_ID_NVRAM_READ_CNF:
        result = csmss_nvram_read_cnf_hdlr(ilm_ptr);
        break;

    case MSG_ID_NVRAM_WRITE_CNF:
        result = csmss_nvram_write_cnf_hdlr(ilm_ptr);
        break;

#endif // __CPHS__ or __REL4__


#ifdef _TST_CSMSS_ /* inject test command from Catcher */
    case MSG_ID_TST_INJECT_STRING:
        result = csmss_tst_inject_hdlr(ilm_ptr->local_para_ptr);
        break;
#endif

    default:
        //         kal_brief_trace(TRACE_ERROR, CSMSS_ERR_UNEXPECTED_MESSAGE_SUBOP, ilm_ptr->msg_id);
        break;

    } /* End of the switch statement */

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_startup_req_hdlr
 * DESCRIPTION
 *  This procedure is invoked when received startup_req from l4c.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_startup_req_hdlr(local_para_struct *local_para_ptr)
{
    kal_bool result = KAL_FALSE;

    //   kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_startup_req_hdlr);

#if defined (__CPHS__) || defined (__REL4__)
    csmss_ptr_g->cfu_flag[0] = 0x55;
#endif
    csmss_send_nvram_read_essp_req();

#if (defined (__CPHS__) && !defined (__Rel45_OVER_CPHS__))
    csmss_send_sim_file_info_req(FILE_CF_FLAG_IDX, SIM_FILE_SIZE);
#elif defined(__REL4__)
    //[ALPS00350319]
    csmss_send_sim_file_info_req(FILE_CFIS_IDX, SIM_REC_SIZE);
#else
    csmss_send_l4c_startup_cnf(L4_SUCCESS);
#endif

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_parse_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ss_parse_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_ss_parse_req_struct *msg_ptr = NULL;
    csmss_string_struct *input;
    csmss_string_op_enum result = INVALID_OPERATION;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_parse_req_hdlr);

    msg_ptr = (l4ccsm_ciss_ss_parse_req_struct*)local_para_ptr;

    // [MAUI_03234680]
    // [SS][Change Feature] remove CFU assert andclear csmss_g_cf_number_length in abnormal case
    /* MAUI_01722785 add cf number interface */
    if (csmss_g_cf_number_length != 0)
    {
        csmss_g_cf_number_length = 0;

        csmss_send_ss_parse_cnf(msg_ptr->src_id, INVALID_OPERATION, msg_ptr
                               ->ss_string);
        return INVALID_OPERATION;
    }

    if (msg_ptr->type_of_modification != SIMCALLCONTROL_NOMODIFY)
        csmss_ptr_g->ss_ctrl_done = KAL_TRUE;
    else
        csmss_ptr_g->ss_ctrl_done = KAL_FALSE;

    csmss_ptr_g->type_of_modification = msg_ptr->type_of_modification;
    csmss_g_ussd_dcs = msg_ptr->ss_dcs;

    /* for ucs2, need to keep ussd length here */
    csmss_g_ussd_len = msg_ptr->length;

    csmss_g_cf_number_length = msg_ptr->cf_number_length;
    
    input = get_ctrl_buffer(sizeof(csmss_string_struct));
    input->index = 0;
    input->string_ptr = msg_ptr->ss_string;

    if (msg_ptr->change_phase_req == KAL_TRUE)
    {
        csmss_g_change_phase_req = KAL_TRUE;
    }
    else
    {
        csmss_g_change_phase_req = KAL_FALSE;
    }

    while (msg_ptr->ss_string[msg_ptr->length - 1] == 0)
    {
        msg_ptr->length--;
    }

    //[ALPS00006144]
    /* AT command can indicate the SS operation or not. Avoid to send USSD when we can not identify the SS operation. */
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
#if defined(__CSMSS_EXPLICIT_SS_OPERATION__)
    csmss_ptr_g->is_explicit_ss_op = msg_ptr->explicit_ss_op;
#endif

    result = is_ss_string(msg_ptr->src_id, msg_ptr->ton_npi, msg_ptr ->
                          length, input);

    if (result == SS_OPERATION)
    {
        /* SS operation invoked */
        //      char dbg[10];
        //      sprintf(dbg, "<---SS_OP");
        //      kal_print(dbg);
    }
    else if (result == CC_OPERATION)
    {
        /* send CSM_SS_PARSE_CNF to L4C with CC_OPERATION */
        //      char dbg[10];
        //      sprintf(dbg, "<---CC_OP");
        //      kal_print(dbg);
        csmss_send_ss_parse_cnf(msg_ptr->src_id, CC_OPERATION, msg_ptr ->
                                ss_string);
    }
    else
    {
        /* send CSM_SS_PARSE_CNF to L4C with INVALID_OPERATION */
        //      char dbg[10];
        //      sprintf(dbg, "<---IV_OP");
        //      kal_print(dbg);

        /* MAUI_01941791, shall reset cf length once the request is invalid */
        /* MAUI_01722785 add cf number interface */
        csmss_g_cf_number_length = 0;

        csmss_send_ss_parse_cnf(msg_ptr->src_id, INVALID_OPERATION, msg_ptr
                               ->ss_string);
    }

    free_ctrl_buffer(input);

    return (kal_bool)result;
}

#ifdef __SAT__
/*****************************************************************************
 * FUNCTION
 *  csmss_ss_ctrl_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives

 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ss_ctrl_cnf_hdlr(local_para_struct *local_para_ptr,
                                peer_buff_struct *peer_buff_ptr)
{
    sat_ss_ctrl_by_sim_cnf_struct *msg_ptr = NULL;
    csmss_string_struct *input;
    kal_uint8 *buff_ptr;
    kal_uint16 len = 0;
    kal_uint8 index = 0;
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 bcd_buff[MAX_DIGITS_USSD];
    kal_uint8 dig_buff[MAX_DIGITS_USSD];

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_ctrl_cnf_hdlr);

    csmss_ptr_g->ss_ctrl_done = KAL_TRUE; // ss->ss need not send control by sim again

    msg_ptr = (sat_ss_ctrl_by_sim_cnf_struct*)local_para_ptr;

    kal_mem_set(bcd_buff, 0, MAX_DIGITS_USSD);
    kal_mem_set(dig_buff, 0, MAX_DIGITS_USSD);

    if ((msg_ptr->res == SAT_NOT_ALLOWED) || (msg_ptr->res == SAT_SIM_ERROR)
        )
    {
        csmss_g_cf_number_length = 0;
        csmss_sim_fail_cnf_hdlr(); // always true;
    }
    else if ((msg_ptr->res == SAT_ALLOWED_NO_MODIFICATION) || (msg_ptr->res
             == SAT_ALLOWED_WITH_MODIFICATION))
    {
        if ((msg_ptr->res == SAT_ALLOWED_NO_MODIFICATION) ||
            ((msg_ptr->res == SAT_ALLOWED_WITH_MODIFICATION) && (msg_ptr->type == csmss_ptr_g->ori_ss_ctrl_type)))
        {
            if (msg_ptr->type == SAT_SEND_SS)
            {
                buff_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);

                kal_mem_cpy(bcd_buff, buff_ptr, len);

                bcd_buff[len] = 0xff;
                index = convert_to_digit_ext(bcd_buff + 1, dig_buff);
                //MAUI_03187382, handle "+" for CFU ctrl_by_sim
                if((index != csmss_g_ussd_len) && (csmss_g_cf_number_length > 0)) csmss_g_cf_number_length--;

                input = get_ctrl_buffer(sizeof(csmss_string_struct));
                input->index = 0;
                input->string_ptr = dig_buff;

                //         result = is_ss_string(L4_LMI, bcd_buff[0], index, input);
                result = is_ss_string(csmss_g_src_id, bcd_buff[0], index,
                                      input);

                free_ctrl_buffer(input);

                if (result != SS_OPERATION)
                {
                    return KAL_FALSE;
                }
            }
            else if (msg_ptr->type == SAT_SEND_USSD)
            {
                kal_uint8 lang_type;
                smsal_dcs_enum alphabet_type;
                smsal_msg_class_enum mclass;
                kal_bool is_compress;
                kal_bool is_reserved;
               
                buff_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);

                //bcd_buff[len] = '\0';
                //index = convert_to_digit(bcd_buff + 1, dig_buff);
                /* SIM may modify the dcs*/
                smsal_decode_cbsdcs(buff_ptr[0], &lang_type,
                        &alphabet_type, &mclass, &is_compress,
                        &is_reserved);

#ifdef __USSD_AUTO_REJECT__
                if (alphabet_type == SMSAL_RESERVED_DCS)
                {
                    alphabet_type = SMSAL_DEFAULT_DCS;
                }
#endif
                if ((is_compress == KAL_FALSE) && (alphabet_type == SMSAL_DEFAULT_DCS))
                {
                    csmss_gsm7_unpack((kal_uint8*)bcd_buff, (kal_uint8*)(buff_ptr+1), (kal_uint16)(len-1), (kal_uint16)0);
                    
                    if (((len-1) % 7 == 0) && (buff_ptr[len-1] & 0xfe) == 0x1A)
                    {
                        index = (kal_uint8)((len-1) * 8 / 7 - 1);
                    }
                    else
                    {
                        index = (kal_uint8)((len-1)  * 8 / 7); 							 
                    }
                }
                else
                {
                    kal_mem_cpy(bcd_buff, buff_ptr+1, len-1);
                    index = (kal_uint8)(len-1);
                }


                input = get_ctrl_buffer(sizeof(csmss_string_struct));
                input->index = 0;
                input->string_ptr = bcd_buff;

                //         result = is_ss_string(L4_LMI, bcd_buff[0], index, input);
                result = is_ss_string(csmss_g_src_id, 0x81, index,
                                      input);

                free_ctrl_buffer(input);

                if (result != SS_OPERATION)
                {
                    return KAL_FALSE;
                }
            
            }
        }
        else
        {
            csmss_g_cf_number_length = 0;
            csmss_sim_change_cnf_hdlr();
            /*
            if (msg_ptr->res == SAT_ALLOWED_WITH_MODIFICATION)
            {
                csmss_sim_change_cnf_hdlr();
            }
            // always true;
            else
            {
                csmss_sim_fail_cnf_hdlr();
            }
            // always true;
            */
        }
    }
    else
    {
        csmss_g_cf_number_length = 0;
        csmss_sim_fail_cnf_hdlr();
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_sat_file_change_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives

 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ss_sat_file_change_ind_hdlr(local_para_struct *local_para_ptr,
                                peer_buff_struct *peer_buff_ptr)
{
    sat_file_change_ind_struct *sat_file_chg_ind_ptr;

    sat_file_chg_ind_ptr = (sat_file_change_ind_struct*)local_para_ptr;

    if(sat_file_chg_ind_ptr->is_full_changed == KAL_TRUE)
    {
        /* if csmss_context_g.is_cfu_read == KAL_FALSE (startup procedure not finish),
           we do not need to read cfu in this handler */
#if defined (__CPHS__) || defined (__REL4__) //MAUI_01977687
        if (csmss_ptr_g->is_cfu_read == KAL_TRUE)
        {
#ifdef __CPHS__
            csmss_send_sim_file_info_req(FILE_CF_FLAG_IDX, SIM_FILE_SIZE);
#elif defined(__REL4__)
            //[ALPS00350319]
            csmss_send_sim_file_info_req(FILE_CFIS_IDX, SIM_REC_SIZE);
#endif
            csmss_ptr_g->is_sim_refresh = KAL_TRUE;
        }
#endif
    }
    else /* Johnny: only handle full change now */
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

#endif
#if 1
/*****************************************************************************
 * FUNCTION
 *  csmss_cf_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a call forwarding setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cf_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_cf_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cf_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_cf_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_call_forward_req(msg_ptr->src_id, msg_ptr ->
        op_code, msg_ptr->ss_code, msg_ptr->bs_code, msg_ptr ->
        no_reply_timer, msg_ptr->address, (kal_bool)(msg_ptr ->
        subaddress_flag), msg_ptr->subaddress);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cw_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a call waiting setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cw_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_cw_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cw_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_cw_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_call_wait_req(msg_ptr->src_id, msg_ptr->op_code,
                                        msg_ptr->bs_code);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cb_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a call barring setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cb_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_cb_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cb_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_cb_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_call_barring_req(msg_ptr->src_id, msg_ptr ->
        op_code, msg_ptr->ss_code, msg_ptr->bs_code, msg_ptr->old_pw,
        msg_ptr->new_pw1, msg_ptr->new_pw2);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_emlpp_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a emlpp setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_emlpp_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_emlpp_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_emlpp_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_emlpp_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_emlpp_req(msg_ptr->src_id, msg_ptr->op_code,
                                    msg_ptr->default_priority_level);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cli_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a cli setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cli_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_cli_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cli_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_cli_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_cli_req(msg_ptr->src_id, msg_ptr->ss_code)
        ;

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ccbs_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ccbs setup request message. This procedure performs
 *  some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ccbs_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_ccbs_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ccbs_begin_req_hdlr);

    msg_ptr = (l4ccsm_ciss_ccbs_begin_req_struct*)local_para_ptr;

    result = (kal_bool)csmss_ss_exe_ccbs_req(msg_ptr->src_id, msg_ptr->op_code,
                                   msg_ptr->ccbs_index);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_pussr_begin_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ProcessUnstructuredSS-Request setup request message. This procedure
 *  performs some checks on the received message and sends begin
 *  request message to CISS.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_pussr_begin_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_pussr_begin_req_struct *msg_ptr = NULL;
    kal_bool result = KAL_FALSE;
    kal_uint8 ussd_len = 0;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_pussr_begin_req_hdlr);

    csmss_ptr_g->ss_ctrl_done = KAL_FALSE;

    msg_ptr = (l4ccsm_ciss_pussr_begin_req_struct*)local_para_ptr;

    csmss_g_ussd_dcs = msg_ptr->ussd_dcs;

    if (msg_ptr->change_phase_req == KAL_TRUE)
    {
        csmss_g_change_phase_req = KAL_TRUE;
    }
    else
    {
        csmss_g_change_phase_req = KAL_FALSE;
    }

#if 1
    for (ussd_len = 0; ussd_len < MAX_DIGITS_USSD; ussd_len++)
    {
        if (msg_ptr->ussd_string[ussd_len] == 0)
        {
            break;
        }
    }
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if (ussd_len == 0)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_ALLOC_NULL_STRING);
        return KAL_TRUE;
    }

    if (csmss_g_change_phase_req == KAL_FALSE)
    {
        result = (kal_bool)csmss_ss_exe_ussd_req(msg_ptr->src_id, msg_ptr->ussd_string,
                                   ussd_len,  // msg_ptr->length
        (kal_uint8)SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST);
    }
    else
    {
        result = (kal_bool)csmss_ss_exe_ussd_req (msg_ptr->src_id,
                                       msg_ptr->ussd_string,
                                       ussd_len,
                                       SS_OP_PROCESSUNSTRUCTUREDSS_DATA);
    }

    return result;
}

#endif

void csmss_nw_data_error_handler(kal_uint32 return_error_code, kal_uint32 invoke_id, kal_uint8 call_id, kal_uint8 ti)
{
    mnss_end_req_struct *end_req_ptr = NULL;

    end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof(mnss_end_req_struct), TD_CTRL);

    end_req_ptr->causeP = KAL_TRUE;
    end_req_ptr->cause.cause_value = CM_NORMAL_CALL_CLR;
    end_req_ptr->cause.diagnostics_length = 0;

    if (return_error_code != 0)
    {
        kal_mem_set(&(end_req_ptr->facility), 0, sizeof(mnss_facility_struct));
        end_req_ptr->facility.num_of_components = 1;

        CSMSS_ALLOC_COMP(end_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(end_req_ptr->facility.component[0]->returnError, ReturnError)
        CSMSS_FILL_INVOKEID(end_req_ptr->facility.component[0]->returnError, invoke_id)
        CSMSS_FILL_ERROR(end_req_ptr->facility.component[0]->returnError,
                         return_error_code - CM_SS_ERR_START)
        CSMSS_FILL_PARAOPT(end_req_ptr->facility.component[0]->returnError, KAL_FALSE)

        end_req_ptr->ref_count = 1;
        end_req_ptr->call_id = call_id;
        end_req_ptr->ti = ti;
        end_req_ptr->facilityP = KAL_TRUE;
    }
    else
    {
        end_req_ptr->facilityP = KAL_FALSE;
    }

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

        //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
        //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
        //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
        //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
        //Therefore, we have to check the index before to clear context.
        //The same problem will also happen for facility response procedure.
        if(call_id<MMI_CS_MAX_CALLS){
            csmss_g_ciss_tab[call_id].state = CSMSS_NULL_STATE;
            csmss_free_call_id(call_id);		
        }
        else{
            kal_brief_trace(TRACE_INFO, CSMSS_D, call_id);
        }
}

kal_bool csmss_mcd_unpack(kal_uint16 struct_id, kal_uint32** struct_ptr, 
	mnss_end_ind_struct *end_ind_ptr, mnss_fac_ind_struct *fac_ind_ptr)
{
    kal_uint16 i = 512;
    kal_uint32 ret_val = 0;

    do
    {
        if (ret_val == MCD_ERROR)
        {
            free_ctrl_buffer(*struct_ptr);
        }

        /*
        switch(struct_id)
        {
            //end_ind
            case MCD_SS_INFO:
                (SS_Info*)*struct_ptr = (SS_Info*)get_ctrl_buffer(i);
                break;
            case MCD_INTERROGATESS_RES:
                (InterrogateSS_Res*)*struct_ptr = (InterrogateSS_Res*)get_ctrl_buffer(i);
                break;
            case MCD_PASSWORD:
                (Password*)*struct_ptr = (Password*)get_ctrl_buffer(i);
                break;
            case MCD_ERASECC_ENTRYRES:
                (EraseCC_EntryRes*)*struct_ptr = (EraseCC_EntryRes*)get_ctrl_buffer(i);
                break;    
            case MCD_USSD_RES:
                (USSD_Res*)*struct_ptr = (USSD_Res*)get_ctrl_buffer(i);
                break;
            case MCD_USSDIA5_STRING: 
                (USSDIA5_String*)*struct_ptr = (USSDIA5_String*)get_ctrl_buffer(i);
                break;
            //fac_ind
            case MCD_GUIDANCEINFO:
                (GuidanceInfo*)*struct_ptr = (GuidanceInfo*)get_ctrl_buffer(i);
                break;
            case MCD_USSD_ARG:
            	  (USSD_Arg*)*struct_ptr = (USSD_Arg*)get_ctrl_buffer(i);
                break;
        }
        */
        *struct_ptr = get_ctrl_buffer(i);
        
        if (end_ind_ptr != NULL)
        {
            ret_val = mcd_unpack(struct_id,
                            (kal_uint32*)*struct_ptr, i, (kal_uint32*)
                            end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameter, end_ind_ptr ->
                            facility.component[0]->returnResultLast ->
                            parameterLen *8);
        }
        if (fac_ind_ptr != NULL)
        {
            ret_val = mcd_unpack(struct_id, (kal_uint32*)*struct_ptr, i,
                                 (kal_uint32*)fac_ind_ptr ->
                                 facility.component[0]->invoke->parameter,
                                 fac_ind_ptr->facility.component[0]->invoke
                                ->parameterLen *8);
        }
	i = i * 2;
    }while(ret_val == MCD_ERROR && i <= 2048);

    if (ret_val == MCD_ERROR)
    {
        kal_uint32 return_error_code;

        if (struct_id == MCD_USSD_RES
         || struct_id == MCD_USSDIA5_STRING
         || struct_id == MCD_USSD_ARG)
        {
            return_error_code = CM_SS_ERR_UNKNOWNALPHABET;
        }
        else
        {
            return_error_code = 0;
        }

        /* MAUI_01958830 handle mcd unpack error */
        kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_MCD_UNPACK_ERROR,
                        struct_id,	
                        return_error_code);

        //ASSERT(ret_val != MCD_ERROR);
        free_ctrl_buffer(*struct_ptr);

        if (end_ind_ptr != NULL)
        {
            /* MAUI_00776026 [CSMSS][Fixbug] handle mcd unpack error for release complete */
            if (end_ind_ptr->facility.component[0]->invokeOpt)
            {
                csmss_nw_data_error_handler(return_error_code,
                    end_ind_ptr->facility.component[0]->invoke->invokeID->value,
                    end_ind_ptr->call_id, end_ind_ptr->ti);
            }

            if (end_ind_ptr->facility.component[0] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr->facility.component[0]);
            }
        }
        if (fac_ind_ptr != NULL)
        {
            csmss_nw_data_error_handler(return_error_code,
                fac_ind_ptr->facility.component[0]->invoke->invokeID->value,
                fac_ind_ptr->call_id, fac_ind_ptr->ti);

            if (fac_ind_ptr->facility.component[0] != NULL)
            {
                ciss_component_dealloc(fac_ind_ptr->facility.component[0]);
            }
        }
		
        return KAL_FALSE;
    }             

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_begin_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  begin indication message.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_begin_ind_hdlr(local_para_struct *local_para_ptr)
{
    mnss_begin_ind_struct *begin_ind_ptr = NULL;
    kal_int8 call_id;
    //kal_uint8 component_count;
    kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_begin_ind_hdlr);

    begin_ind_ptr = (mnss_begin_ind_struct*)local_para_ptr;
	
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    {
        kal_uint8 mt_ss_id = SS_ID_CISS_BASE;
#if defined(__CSMSS_CISS_USSD_SUPPORT_PARALLEL__)
        mt_ss_id = SS_ID_MT_BASE+begin_ind_ptr->ti;
#elif defined(__CSMSS_AGPS_SUPPORT_PARALLEL__)
        if (begin_ind_ptr->facility.num_of_components == 1)
        {
            if (begin_ind_ptr->facility.component[0]->invokeOpt)
            {
                if ((begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_LOCATIONNOTIFICATION) ||
                    (begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_AREA_EVENT_REQUEST) ||
                    (begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_AREA_EVENT_CANCELLATION))
                {
                    mt_ss_id = SS_ID_MT_BASE+begin_ind_ptr->ti;
                }
            }
        }
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        call_id = csmss_get_free_call_id(mt_ss_id); //SS_ID 0~7 : for MT SS
    }

    if (call_id ==  - 1)
    {
        mnss_end_req_struct *end_req_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        /* send RLC to peer : 9b 6a 1c 08 a3 06 02 01 01 02 01 48 */
        end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                       (mnss_end_req_struct), TD_CTRL);

        kal_mem_set(&(end_req_ptr->facility), 0, sizeof(mnss_facility_struct))
                    ;
        end_req_ptr->facility.num_of_components = 1;

        CSMSS_ALLOC_COMP(end_req_ptr->facility.component[0])
                         CSMSS_ALLOC_COMPSTRUCT(end_req_ptr ->
                         facility.component[0]->returnError, ReturnError)if
                         (begin_ind_ptr->facility.num_of_components == 1)
        {
            CSMSS_FILL_INVOKEID(end_req_ptr->facility.component[0] ->
                                returnError, begin_ind_ptr ->
                                facility.component[0]->invoke->invokeID ->
                                value)
        }
        CSMSS_FILL_ERROR(end_req_ptr->facility.component[0]->returnError,
                         CM_SS_ERR_USSD_BUSY - CM_SS_ERR_START)
                         CSMSS_FILL_PARAOPT(end_req_ptr ->
                         facility.component[0]->returnError, KAL_FALSE)

        end_req_ptr->ref_count = 1;
        end_req_ptr->call_id = call_id;
        end_req_ptr->ti = begin_ind_ptr->ti;
        end_req_ptr->causeP = KAL_FALSE;
        end_req_ptr->facilityP = KAL_TRUE;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

/*
        for (component_count = 0; component_count < begin_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (begin_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(begin_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (begin_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(begin_ind_ptr ->
                                   facility.component[0]);
        }

        return KAL_FALSE;
    }

    csmss_g_ciss_tab[call_id].ti = begin_ind_ptr->ti;

    if (begin_ind_ptr->facility.num_of_components == 1)
    {
        if (begin_ind_ptr->facility.component[0]->invokeOpt)
        {
            csmss_g_ciss_tab[call_id].invoke_id = begin_ind_ptr ->
                facility.component[0]->invoke->invokeID->value;

            if (begin_ind_ptr->facility.component[0]->invoke->localValue
                == SS_OP_UNSTRUCTUREDSS_REQUEST)
            {
                l4ccsm_ciss_ussr_begin_ind_struct *msg_ptr = NULL;

                msg_ptr = (l4ccsm_ciss_ussr_begin_ind_struct*)
                           construct_local_para(sizeof
                           (l4ccsm_ciss_ussr_begin_ind_struct), TD_CTRL);

                if ((begin_ind_ptr->facility.component[0]->invoke ->
                    parameterOpt == KAL_TRUE) && (begin_ind_ptr ->
                    facility.component[0]->invoke->parameterLen > 0))
                {
                    CSMSS_MCD_PUN_START(USSD_Arg, ussd_arg)

                    ussd_arg = (USSD_Arg*)get_ctrl_buffer(512);
                    ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      512, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);
                    if(ret_val == MCD_ERROR)
                    {
                        free_ctrl_buffer(ussd_arg);
                        ussd_arg = (USSD_Arg*)get_ctrl_buffer(1024);
                        ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      1024, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);
                    }
                    if(ret_val == MCD_ERROR)
                    {
                        free_ctrl_buffer(ussd_arg);
                        ussd_arg = (USSD_Arg*)get_ctrl_buffer(2048);
                        ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      2048, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);
                        //ASSERT(ret_val != MCD_ERROR)
                        
                        free_ctrl_buffer(ussd_arg);
                        csmss_nw_data_error_handler(CM_SS_ERR_UNKNOWNALPHABET,
                            begin_ind_ptr->facility.component[0]->invoke->invokeID->value,
 	                     call_id, begin_ind_ptr->ti);

                        if (begin_ind_ptr->facility.component[0] != NULL)
                        {
                            ciss_component_dealloc(begin_ind_ptr->facility.component[0]);
                        }
                        free_ctrl_buffer(msg_ptr);
                        return KAL_FALSE;
                    }                    

                    if (1)
                    {
                        kal_uint8 lang_type;
                        smsal_dcs_enum alphabet_type;
                        smsal_msg_class_enum mclass;
                        kal_bool is_compress;
                        kal_bool is_reserved;

                        smsal_decode_cbsdcs(ussd_arg->ussd_DataCodingScheme
                           ->octs[0], &lang_type, &alphabet_type, &mclass,
                            &is_compress, &is_reserved);

                        //msg_ptr->ussd_dcs = alphabet_type;
                        msg_ptr->ussd_dcs = ussd_arg->ussd_DataCodingScheme->octs[0];

                        if ((is_compress == KAL_FALSE) && (alphabet_type ==
                            SMSAL_DEFAULT_DCS))
                        {
                            if (ussd_arg->ussd_String->octsLen == 0 || ussd_arg->ussd_String->octs == NULL)
                            {
                                free_ctrl_buffer(ussd_arg);
                                csmss_nw_data_error_handler(CM_SS_ERR_UNKNOWNALPHABET,
                                    begin_ind_ptr->facility.component[0]->invoke->invokeID->value,
 	                             call_id, begin_ind_ptr->ti);

                                if (begin_ind_ptr->facility.component[0] != NULL)
                                {
                                    ciss_component_dealloc(begin_ind_ptr->facility.component[0]);
                                }
                                free_ctrl_buffer(msg_ptr);
                                return KAL_FALSE;
                            }
		 			
                            csmss_gsm7_unpack((kal_uint8*)msg_ptr ->
              ussd_string, (kal_uint8*)ussd_arg ->
              ussd_String->octs, (kal_uint16)ussd_arg ->
              ussd_String->octsLen, 0);

                            if (ussd_arg->ussd_String->octsLen % 7 == 0
                             && (ussd_arg ->ussd_String->octs[ussd_arg->ussd_String->octsLen - 1] & 0xfe) == 0x1A)
                            {
                                msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                    ussd_String->octsLen * 8 / 7 - 1;
                            }
                            else
                            {
                                msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                    ussd_String->octsLen * 8 / 7;                            	
                            }
                                    
                        }
                        else
                        {
                            kal_mem_cpy(msg_ptr->ussd_string, ussd_arg ->
                                        ussd_String->octs, ussd_arg ->
                                        ussd_String->octsLen);
                                        
                            msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                ussd_String->octsLen;                                        
                        }
                    }

                    /* keep in context */
                    kal_mem_cpy(csmss_g_ussd_string, ussd_arg ->
                                ussd_String->octs, ussd_arg->ussd_String ->
                                octsLen);
                    csmss_g_ussd_len = (kal_uint8)ussd_arg ->
                        ussd_String->octsLen;
                    csmss_g_ussd_dcs = ussd_arg ->
                        ussd_DataCodingScheme->octs[0];

                    free_ctrl_buffer(ussd_arg);
                }
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND,
                               msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].msg_id =
                    MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND;
                csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state =
                    CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_call_id = call_id;
            }
            else if (begin_ind_ptr->facility.component[0]->invoke ->
                     localValue == SS_OP_UNSTRUCTUREDSS_NOTIFY)
            {
                l4ccsm_ciss_ussn_begin_ind_struct *msg_ptr = NULL;

                msg_ptr = (l4ccsm_ciss_ussn_begin_ind_struct*)
                           construct_local_para(sizeof
                           (l4ccsm_ciss_ussn_begin_ind_struct), TD_CTRL);

                if ((begin_ind_ptr->facility.component[0]->invoke ->
                    parameterOpt == KAL_TRUE) && (begin_ind_ptr ->
                    facility.component[0]->invoke->parameterLen > 0))
                {
                    CSMSS_MCD_PUN_START(USSD_Arg, ussd_arg)
                    ussd_arg = (USSD_Arg*)get_ctrl_buffer(512);
                    ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      512, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);

                    if(ret_val == MCD_ERROR)
                    {
                        free_ctrl_buffer(ussd_arg);
                        ussd_arg = (USSD_Arg*)get_ctrl_buffer(1024);
                        ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      1024, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);
                    }                    
                    if(ret_val == MCD_ERROR)
                    {
                        free_ctrl_buffer(ussd_arg);
                        ussd_arg = (USSD_Arg*)get_ctrl_buffer(2048);
                        ret_val = mcd_unpack(MCD_USSD_ARG, (kal_uint32*)ussd_arg,
      2048, (kal_uint32*)begin_ind_ptr ->
      facility.component[0]->invoke->parameter,
      begin_ind_ptr->facility.component[0]->invoke ->
      parameterLen *8);
                        //ASSERT(ret_val != MCD_ERROR)
                        
                        free_ctrl_buffer(ussd_arg);
                        csmss_nw_data_error_handler(CM_SS_ERR_UNKNOWNALPHABET,
                            begin_ind_ptr->facility.component[0]->invoke->invokeID->value,
 	                     call_id, begin_ind_ptr->ti);

                        if (begin_ind_ptr->facility.component[0] != NULL)
                        {
                            ciss_component_dealloc(begin_ind_ptr->facility.component[0]);
                        }
                        free_ctrl_buffer(msg_ptr);
                        return KAL_FALSE;                        
                    } 
                    
                    if (1)
                    {
                        kal_uint8 lang_type;
                        smsal_dcs_enum alphabet_type;
                        smsal_msg_class_enum mclass;
                        kal_bool is_compress;
                        kal_bool is_reserved;

                        smsal_decode_cbsdcs(ussd_arg->ussd_DataCodingScheme
                           ->octs[0], &lang_type, &alphabet_type, &mclass,
                            &is_compress, &is_reserved);

                        //msg_ptr->ussd_dcs = alphabet_type;
                                          msg_ptr->ussd_dcs = ussd_arg->ussd_DataCodingScheme->octs[0];

                        if ((is_compress == KAL_FALSE) && (alphabet_type ==
                            SMSAL_DEFAULT_DCS))
                        {
                            if (ussd_arg->ussd_String->octsLen == 0 || ussd_arg->ussd_String->octs == NULL)
                            {
                                free_ctrl_buffer(ussd_arg);
                                csmss_nw_data_error_handler(CM_SS_ERR_UNKNOWNALPHABET,
                                    begin_ind_ptr->facility.component[0]->invoke->invokeID->value,
 	                             call_id, begin_ind_ptr->ti);

                                if (begin_ind_ptr->facility.component[0] != NULL)
                                {
                                    ciss_component_dealloc(begin_ind_ptr->facility.component[0]);
                                }
                                free_ctrl_buffer(msg_ptr);
                                return KAL_FALSE;
                            }
							
                            csmss_gsm7_unpack((kal_uint8*)msg_ptr ->
              ussd_string, (kal_uint8*)ussd_arg ->
              ussd_String->octs, (kal_uint16)ussd_arg ->
              ussd_String->octsLen, 0);
 
                            if (ussd_arg->ussd_String->octsLen % 7 == 0
                             && (ussd_arg ->ussd_String->octs[ussd_arg->ussd_String->octsLen - 1] & 0xfe) == 0x1A)
                            {
                            	msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                    ussd_String->octsLen * 8 / 7 - 1;
                            }
                            else
                            {
                            	msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                    ussd_String->octsLen * 8 / 7;                            	
                            }
                        }
                        else
                        {
                            kal_mem_cpy(msg_ptr->ussd_string, ussd_arg ->
                                        ussd_String->octs, ussd_arg ->
                                        ussd_String->octsLen);

                            msg_ptr->ussd_string_length = (kal_uint8) ussd_arg ->
                                ussd_String->octsLen;                                        
                        }
                    }

                    /* keep in context */
                    kal_mem_cpy(csmss_g_ussd_string, ussd_arg ->
                                ussd_String->octs, ussd_arg->ussd_String ->
                                octsLen);
                    csmss_g_ussd_len = (kal_uint8)ussd_arg ->
                        ussd_String->octsLen;
                    csmss_g_ussd_dcs = ussd_arg ->
                        ussd_DataCodingScheme->octs[0];

                    free_ctrl_buffer(ussd_arg);
                }
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND,
                               msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].msg_id =
                    MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND;
                csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state =
                    CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_call_id = call_id;

                /* Johnny */
#ifndef __USSD_AUTO_REJECT__
                /* if not support auto reject feature, csmss return the ussn by itself */
                /* if support auto reject feature, L4 will return this message */
                csmss_ussn_fac_res_hdlr(local_para_ptr);
#endif
            }

#ifdef __AGPS_CONTROL_PLANE__
            /*-----------------------------------
             * The message handle LCS from the CISS
             *-----------------------------------*/
            else if ((begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_LOCATIONNOTIFICATION) ||
                     (begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_AREA_EVENT_REQUEST) ||
                     (begin_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_LCS_AREA_EVENT_CANCELLATION))
            {
                ret_val = csmss_lcs_begin_ind_entry_func(call_id,
                                begin_ind_ptr->facility.component[0]->invoke ->localValue,
                                begin_ind_ptr->facility.component[0]->invoke->parameter,
                                (begin_ind_ptr->facility.component[0]->invoke->parameterLen)*8);

                if (ret_val == KAL_FALSE)
                {
                    mnss_end_req_struct *end_req_ptr = NULL;



                    /* send RLC to peer : 9b 6a 1c 08 a3 06 02 01 01 02 01 48 */
                    end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                                  (mnss_end_req_struct), TD_CTRL);

                    kal_mem_set(&(end_req_ptr->facility), 0, sizeof(mnss_facility_struct))
                               ;
                    end_req_ptr->facility.num_of_components = 1;

                    CSMSS_ALLOC_COMP(end_req_ptr->facility.component[0])
                                    CSMSS_ALLOC_COMPSTRUCT(end_req_ptr ->
                                    facility.component[0]->returnError, ReturnError)if
                                    (begin_ind_ptr->facility.num_of_components == 1)
                    {
                       CSMSS_FILL_INVOKEID(end_req_ptr->facility.component[0] ->
                                           returnError, begin_ind_ptr ->
                                           facility.component[0]->invoke->invokeID ->
                                           value)
                    }
                    CSMSS_FILL_ERROR(end_req_ptr->facility.component[0]->returnError,
                                    CM_SS_ERR_USSD_BUSY - CM_SS_ERR_START)
                                    CSMSS_FILL_PARAOPT(end_req_ptr ->
                                    facility.component[0]->returnError, KAL_FALSE)

                    end_req_ptr->ref_count = 1;
                    end_req_ptr->call_id = call_id;
                    end_req_ptr->ti = begin_ind_ptr->ti;
                    end_req_ptr->causeP = KAL_FALSE;
                    end_req_ptr->facilityP = KAL_TRUE;

                    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);


                    if (begin_ind_ptr->facility.component[0] != NULL)
                    {
                       ciss_component_dealloc(begin_ind_ptr ->
                                              facility.component[0]);
                    }
                }

                return ret_val;
            }
#endif
            else if(begin_ind_ptr->facility.component[0]->invoke ->
                     localValue == SS_OP_FORWARDCHECKSS_INDICATION)
            {
               mnss_end_req_struct *end_req_ptr;
               end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof(mnss_end_req_struct), TD_RESET);
               end_req_ptr->ref_count = 1;
               end_req_ptr->call_id = call_id;
               end_req_ptr->ti = begin_ind_ptr->ti;
               end_req_ptr->causeP = KAL_FALSE;
               end_req_ptr->facilityP = KAL_FALSE;
    
               csmss_g_ciss_tab[call_id].state = CSMSS_NULL_STATE;
               csmss_free_call_id(call_id);

               csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);
            }
            else
            {
                return KAL_FALSE;
            }
            // end of switch (begin_ind_ptr->facility.component[0]->invoke->localValue)
        } // end of if (begin_ind_ptr->facility.component[0]->invokeOpt)
    } // end of if (begin_ind_ptr->facility.num_of_components == 1)

/*
    for (component_count = 0; component_count < begin_ind_ptr ->
         facility.num_of_components; component_count++)
    {
        if (begin_ind_ptr->facility.component[component_count] != NULL)
        //free_ctrl_buffer(begin_ind_ptr->facility.component[component_count]);
        {
            ciss_component_dealloc(begin_ind_ptr ->
                                   facility.component[component_count]);
        }

    }
*/
    if (begin_ind_ptr->facility.component[0] != NULL)
    //free_ctrl_buffer(begin_ind_ptr->facility.component[component_count]);
    {
         ciss_component_dealloc(begin_ind_ptr ->
                               facility.component[0]);
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_end_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  end indication message.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_end_ind_hdlr(local_para_struct *local_para_ptr)
{
    mnss_end_ind_struct *end_ind_ptr = NULL;
    kal_bool result = KAL_FALSE;
    kal_uint32 nw_return_opcode;

    end_ind_ptr = (mnss_end_ind_struct*)local_para_ptr;

    kal_brief_trace(TRACE_INFO, CSMSS_DDD, csmss_g_call_id, end_ind_ptr ->
              call_id, csmss_g_call_id_pool[end_ind_ptr->call_id]);

    /* MAUI_01722785 add cf number interface */
    csmss_g_cf_number_length = 0;

//MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
    if(end_ind_ptr->call_id >= MMI_CS_MAX_CALLS
     ||(csmss_g_ss_id_pool[end_ind_ptr->call_id] > SS_ID_MT_END &&  csmss_g_ss_id_pool[end_ind_ptr->call_id] < SS_ID_LCS_BASE)
     ||(csmss_g_ss_id_pool[end_ind_ptr->call_id] > SS_ID_LCS_END &&  csmss_g_ss_id_pool[end_ind_ptr->call_id] < SS_ID_CISS_BASE)
     ||(csmss_g_ss_id_pool[end_ind_ptr->call_id] > SS_ID_CISS_END)
     )
    {
        if (end_ind_ptr->facilityP == KAL_TRUE)
        {
            ciss_component_dealloc(end_ind_ptr->facility.component[0]);
        }		
        kal_brief_trace(TRACE_INFO, CSMSS_DDD, 128, end_ind_ptr->call_id, csmss_g_ss_id_pool[end_ind_ptr->call_id]);
        return KAL_FALSE;
    }
    else if (csmss_g_ciss_tab[end_ind_ptr->call_id].msg_id == MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ)
    {
        if(csmss_g_call_id == SS_ID_INVALID 
            || (end_ind_ptr->call_id != csmss_g_call_id)
            || (csmss_g_call_id_pool[end_ind_ptr->call_id] != KAL_TRUE)
        )
        {
            csmss_cf_end_cnf_hdlr(end_ind_ptr, KAL_TRUE);
            return KAL_FALSE;
        }
    }
    else if (csmss_g_call_id_pool[end_ind_ptr->call_id] != KAL_TRUE)
    {
        if (end_ind_ptr->facilityP == KAL_TRUE)
        {
            ciss_component_dealloc(end_ind_ptr ->facility.component[0]);
        }		
        return KAL_FALSE;
    }
#else
    if ((csmss_g_call_id == 0xff)
     || (end_ind_ptr->call_id != csmss_g_call_id)
     || (csmss_g_call_id_pool[end_ind_ptr->call_id] != KAL_TRUE))
    {
        if (csmss_g_ciss_tab[end_ind_ptr->call_id].msg_id == MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ)
        {
            csmss_cf_end_cnf_hdlr(end_ind_ptr, KAL_TRUE);
        }
        else
        {
            if (end_ind_ptr->facilityP == KAL_TRUE)
            {
                ciss_component_dealloc(end_ind_ptr ->
                    facility.component[0]);
            }		
        }
        return KAL_FALSE;
    }
#endif
    if ((end_ind_ptr->facilityP == KAL_TRUE) &&
        (end_ind_ptr->facility.component[0]->returnResultLastOpt == KAL_TRUE) &&
        (end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE) &&
        (end_ind_ptr->facility.component[0]->returnResultLast ->
                    localValueOpt == KAL_TRUE))
    {
        nw_return_opcode = end_ind_ptr ->facility.component[0]->returnResultLast->localValue;
        
        if (nw_return_opcode != csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code)
        {
            if ((csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code
                    == SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST) &&
                (nw_return_opcode == SS_OP_PROCESSUNSTRUCTUREDSS_DATA))
            {
                csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code
                    = SS_OP_PROCESSUNSTRUCTUREDSS_DATA;
            }
            else if ((csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code
                    == SS_OP_PROCESSUNSTRUCTUREDSS_DATA) &&
                     (nw_return_opcode == SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST))
            {
                csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code
                    = SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST;
            }
            else
            {
                return KAL_FALSE;
            }
        }
    }
    

    switch (csmss_g_ciss_tab[end_ind_ptr->call_id].msg_id)
    {
    case MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ:
        result = csmss_cf_end_cnf_hdlr(end_ind_ptr, KAL_FALSE);
        break;

    case MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ:
        result = csmss_cw_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ:
        result = csmss_cb_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ:
        result = csmss_emlpp_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ:
        result = csmss_cli_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ:
        result = csmss_ccbs_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ:
        result = csmss_pussr_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND:
        result = csmss_ussr_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND:
        result = csmss_ussn_end_cnf_hdlr(end_ind_ptr);
        break;
#ifdef __AGPS_CONTROL_PLANE__
    case MSG_ID_L4CCSM_CISS_AERP_REQ:
        result = csmss_ss_lcs_aerp_end_cnf_hdlr(end_ind_ptr);
        break;

    case MSG_ID_L4CCSM_CISS_MOLR_REQ:
        result = csmss_ss_lcs_molr_end_cnf_hdlr(end_ind_ptr);
        break;
#endif
    default:
        break;
    } // end switch

    csmss_g_ciss_tab[end_ind_ptr->call_id].state = CSMSS_NULL_STATE;
    csmss_free_call_id(end_ind_ptr->call_id);
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    csmss_g_call_id = SS_ID_INVALID;

// Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
    if (csmss_g_query_act_req == KAL_TRUE)
    {
        l4_addr_bcd_struct dummy_addr;
        dummy_addr.addr_length = 0;
        //only update need to query again
        csmss_ss_exe_call_forward_req((kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].src_id,
                                      (kal_uint8)SS_OP_INTERROGATESS,
                                      (kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].ss_code,
                                      (kal_uint8)INVALID_BS_CODE,
                                      (kal_uint8)0,
                                      dummy_addr, 
                                      KAL_FALSE,
                                      dummy_addr);
    }
    else
#endif
#ifdef __SS_ERASURE_BEFORE_REGISTER__
    if (csmss_g_erase_reg_req == KAL_TRUE)
    {
        l4_addr_bcd_struct dummy_addr;
        dummy_addr.addr_length = 0;
        //only update need to query again
        csmss_ss_exe_call_forward_req((kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].src_id,
                                      (kal_uint8)SS_OP_REGISTERSS,
                                      (kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].ss_code,
                                      (kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].bs_code,
                                      (kal_uint8)csmss_g_ciss_tab[end_ind_ptr->call_id].no_reply_timer,
                                      csmss_g_ciss_tab[end_ind_ptr->call_id].address, 
                                      KAL_FALSE,
                                      dummy_addr);
    }
    else
#endif
    {
        //MAUI_01988887
    }
    return result;
}


// Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
void 
forwarding_feature_list_handler(
    l4ccsm_ciss_cf_end_cnf_struct   *msg_ptr, 
    ForwardingFeatureList           *ffl, 
    kal_bool                        *need_query_act_cf_icon
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
    ,
    l4_addr_bcd_struct              *p_ftn_requested
#endif
)
{
    ForwardingFeature *ff;
    kal_uint8 bs_index = 0;

#if defined (__CPHS__) || defined (__REL4__) //MAUI_01977687
    /* Johnny: NW may return
    msg_ptr->forwarding_list[0].bs_code == L4_TELEPHONY, msg_ptr->forwarding_list[0].ss_status == 7
    msg_ptr->forwarding_list[1].bs_code == L4_ALL_TELESERVICES, msg_ptr->forwarding_list[1].ss_status == 6
    we should not clear CFU in this sceanrio */    
    kal_bool telephony_already_showed = KAL_FALSE;

    kal_bool line_already_showed[CSMCC_ALS_NONE] = {KAL_FALSE,KAL_FALSE,KAL_FALSE};
#endif

// Revise interrogate: 2.if no respones from NW, clear the line.
    kal_bool need_clr_line1 = KAL_FALSE;
    kal_bool need_clr_line2 = KAL_FALSE;
    //MAUI_03010164, [Call setting]The time shows incorrectly when divert if no answer
    //MCD buffer size is changed to fit spec. Therefore, the end value(0xff) is in excess of MCD buffer size.
    kal_uint8 forward_to_num[CSMSS_MAX_FTN_NUM];
    
    msg_ptr->bs_count = (kal_uint8)ffl->listLen;

#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
    /* the NW doesn't response our query, we should clear the CF icon */
    if (csmss_g_ciss_tab[0].bs_code == 0 ||
        csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
        csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
    {
        need_clr_line1 = KAL_TRUE;
        need_clr_line2 = KAL_TRUE;
    }
    else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
    {
        need_clr_line1 = KAL_TRUE;
    }
    else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
    {
        need_clr_line2 = KAL_TRUE;
    }
#endif

    for (bs_index = 0; bs_index < msg_ptr->bs_count; bs_index++)
    {
        /*******************************************
         * 3GPP TS 29.002 clause 17.7.4
         * ForwardingFeature ::= SEQUENCE {
         *      basicService                BasicServiceCode        OPTIONAL,
         *      ss-Status               [4] SS-Status               OPTIONAL,
         *      forwardedToNumber       [5] ISDN-AddressString      OPTIONAL,
         *      forwardedToSubaddress   [8] ISDN-SubaddressString   OPTIONAL,
         *      forwardingOptions       [6] ForwardingOptions       OPTIONAL,
         *      noReplyConditionTime    [7] NoReplyConditionTime    OPTIONAL,
         *      ...,
         *      longForwardedToNumber   [9] FTN-AddressString       OPTIONAL }
         *******************************************/
        ff = ffl->list[bs_index];

        /*******************************************
         *  basicService
         *******************************************/
        if (ff->basicServiceOpt == KAL_TRUE)
        {
            msg_ptr->forwarding_list[bs_index].bs_code =
                                       csmss_convert_bs_code_l4(ff->basicService);
        }

        /*******************************************
         *  ss-Status
         *******************************************/
        if (ff->ss_StatusOpt == KAL_TRUE)
        {
            msg_ptr->forwarding_list[bs_index].ss_status =
                                        ff->ss_Status->octs[0];
        }
        else if (msg_ptr->op_code == SS_OP_REGISTERSS) //ff->ss_StatusOpt == KAL_FALSE
        {
            /* Johnny: ffl->listLen (msg_ptr->bs_count) != 0 but ff->ss_StatusOpt == KAL_FALSE,
                       because SS_OP_REGISTERSS success, we should set ss_status to activation,
                       LMMI will display result according to ss_status */
            msg_ptr->forwarding_list[bs_index].ss_status = 0x01;
        }
        
        /*******************************************
         *  forwardedToNumber / longForwardedToNumber
         *******************************************/
        if (ff->forwardedToNumberOpt == KAL_TRUE)
        {
            //MAUI_03010164, [Call setting]The time shows incorrectly when divert if no answer
            //MCD buffer size is changed to fit spec. Therefore, the end value(0xff) is in excess of MCD buffer size.
            kal_mem_cpy(forward_to_num,(kal_uint8*)ff->forwardedToNumber->octs+1,ff->forwardedToNumber->octsLen-1);
            forward_to_num[ff->forwardedToNumber->octsLen-1] = 0xff;
			
            if ((kal_uint8)(ff->forwardedToNumber->octs[0]) == 0x91)
            {
                msg_ptr->forwarding_list[bs_index].address[0] = '+';
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr->forwarding_list[bs_index].address + 1);
            }
            else
            {
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr->forwarding_list[bs_index].address);
            }
        }
        else if (ff->longForwardedToNumberOpt == KAL_TRUE)
        {
            //MAUI_03010164, [Call setting]The time shows incorrectly when divert if no answer
            //MCD buffer size is changed to fit spec. Therefore, the end value(0xff) is in excess of MCD buffer size.
            kal_mem_cpy(forward_to_num,(kal_uint8*)ff->longForwardedToNumber->octs+1,ff->longForwardedToNumber->octsLen-1);
            forward_to_num[ff->longForwardedToNumber->octsLen-1] = 0xff;

            if ((kal_uint8)(ff->longForwardedToNumber->octs[0]) == 0x91)
            {
                msg_ptr->forwarding_list[bs_index].address[0] = '+';
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr->forwarding_list[bs_index].address + 1);
            }
            else
            {
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr->forwarding_list[bs_index].address);
            }
        }
        else
        {
            msg_ptr->forwarding_list[bs_index].address[0] = 0;
        }

        /*******************************************
         *  forwardedToSubaddress
         *******************************************/
        if (ff->forwardedToSubaddressOpt == KAL_TRUE)
        {
            //MAUI_03010164, [Call setting]The time shows incorrectly when divert if no answer
            //MCD buffer size is changed to fit spec. Therefore, the end value(0xff) is in excess of MCD buffer size.
            kal_mem_cpy(forward_to_num,(kal_uint8*)ff->forwardedToSubaddress->octs+1,ff->forwardedToSubaddress->octsLen-1);
            forward_to_num[ff->forwardedToSubaddress->octsLen-1] = 0xff;

            if ((kal_uint8)(ff->forwardedToSubaddress->octs[0]) == 0x91)
            {
                msg_ptr->forwarding_list[bs_index].subaddress[0] = '+';
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr->forwarding_list[bs_index].subaddress + 1);
            }
            else
            {
                convert_to_digit(forward_to_num,
                                            (kal_uint8*)msg_ptr ->forwarding_list[bs_index].subaddress);
            }
        }
        else
        {
            msg_ptr->forwarding_list[bs_index].subaddress[0] = 0;
        }

        /*******************************************
         *  noReplyConditionTime
         *******************************************/
        if (ff->noReplyConditionTimeOpt == KAL_TRUE)
        {
            msg_ptr->forwarding_list[bs_index].no_reply_timer = (kal_uint8)ff->noReplyConditionTime->value;
        }

#if defined (__CPHS__) || defined (__REL4__)
        /* =================================================
         * Update CFU icon(s) and the content of EF_CFIS 
         * ================================================= */
        if ((msg_ptr->ss_code == L4_CFU) || (msg_ptr->ss_code == L4_CFA))
        {
            kal_uint8 line_id = CSMCC_ALS_NONE;
            kal_uint8 bs_code;


            if (ff->basicServiceOpt == KAL_TRUE) //bs_code
            {
                bs_code = msg_ptr->forwarding_list[bs_index].bs_code;
            }
            else //ff->basicServiceOpt == KAL_FALSE //no bs_code
            {
                // Revise interrogate: 1.query again for active, because it uses context instead of NW's response.
                bs_code = csmss_g_ciss_tab[0].bs_code; //may be csmss_g_ciss_tab[0].bs_code == 0
                if (bs_code == 0
                    || bs_code == L4_ALL_TELESERVICES
                    || bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                {
                    bs_code = L4_TELEPHONY;

                    /* If we use context bs_code to decide CF icon, it may be error. */
                    #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                        *need_query_act_cf_icon = KAL_TRUE;
                    #endif
                }
            }

            if (bs_code == 0
                 || bs_code == L4_ALL_TELESERVICES
                 || bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
            {
                line_id = CSMCC_ALS_LINE1_2;
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                need_clr_line1 = KAL_FALSE;
                need_clr_line2 = KAL_FALSE;
#endif 
            }
            else if (bs_code == L4_TELEPHONY)
            {
                line_id = CSMCC_ALS_LINE1; 
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                need_clr_line1 = KAL_FALSE;
#endif 
            }   
            else if (bs_code == L4_AUXILIARY_TELEPHONY)
            {
                line_id = CSMCC_ALS_LINE2;
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                need_clr_line2 = KAL_FALSE;
#endif 
            }
            else
            {
                /* MAUI_00234506 [SS][Fixbug] clear line_id for each forwarding_feature_list */
                line_id = CSMCC_ALS_NONE; // clear for each loop  
            }


            if (line_id != CSMCC_ALS_NONE)
            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                l4_addr_bcd_struct     line1_ftn = {0,};   // For storing Line1's FTN into EF_CFIS
                l4_addr_bcd_struct  *p_line1_ftn = &line1_ftn;
                line1_ftn.addr_length   = 0;

                if (ff->forwardedToNumberOpt == KAL_TRUE)
                {
                    // 29.002: maxISDN-AddressLength INTEGER ::= 9   ff->forwardedToNumber->octsLen  shall be <= 9
                    // The size of line1_ftn.addr_bcd[] is 41.       41>9, but let's still do a sanity check, just in case.
                    line1_ftn.addr_length        = (ff->forwardedToNumber->octsLen < 41) ? ff->forwardedToNumber->octsLen : 41;
                    kal_mem_cpy(line1_ftn.addr_bcd, ff->forwardedToNumber->octs, line1_ftn.addr_length);
                }
                else if (ff->longForwardedToNumberOpt == KAL_TRUE)
                {
                    // 29.002: maxFTN-AddressLength INTEGER ::= 15   ff->longForwardedToNumber->octsLen  shall be <= 15
                    // The size of line1_ftn.addr_bcd[] is 41.       41>15, but let's still do a sanity check, just in case.
                    line1_ftn.addr_length        = (ff->longForwardedToNumber->octsLen < 41) ? ff->longForwardedToNumber->octsLen : 41;
                    kal_mem_cpy(line1_ftn.addr_bcd, ff->longForwardedToNumber->octs, line1_ftn.addr_length);
                }
                else
                {
                    // Since we don't have FTN or longFTN in this ForwardingFeature, take the FTN requested by L4C.
                    p_line1_ftn = p_ftn_requested;
                }
#endif

                if (msg_ptr->op_code == SS_OP_REGISTERSS || msg_ptr->op_code == SS_OP_ACTIVATESS)
                {
                    if (line_already_showed[line_id] == KAL_FALSE)
                    {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                        csmss_update_cfu_req( SET_CFU,  line_id, p_line1_ftn);
#else
                        csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                        csmss_display_cfu_ind(SHOW_CFU, line_id);

                        line_already_showed[line_id] = KAL_TRUE;
                        if (line_id == CSMCC_ALS_LINE1_2)
                        {
                            line_already_showed[CSMCC_ALS_LINE1] = KAL_TRUE;
                            line_already_showed[CSMCC_ALS_LINE2] = KAL_TRUE;
                        }
                    }
                }             
                else if (msg_ptr->op_code == SS_OP_ERASESS || msg_ptr->op_code == SS_OP_DEACTIVATESS)
                {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                    csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                    csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                    csmss_display_cfu_ind(HIDE_CFU, line_id);
                }
                else if (msg_ptr->op_code == SS_OP_INTERROGATESS)
                {
                    if ((ff->ss_StatusOpt == KAL_TRUE) &&
                           ((msg_ptr->forwarding_list[bs_index].ss_status & 0x01) == 0x01)) // when the Active bit is on
                    {
                        if (line_already_showed[line_id] == KAL_FALSE)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req( SET_CFU,  line_id, p_line1_ftn);
#else
                            csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                            csmss_display_cfu_ind(SHOW_CFU, line_id);

                            line_already_showed[line_id] = KAL_TRUE;
                            if (line_id == CSMCC_ALS_LINE1_2)
                            {
                                line_already_showed[CSMCC_ALS_LINE1] = KAL_TRUE;
                                line_already_showed[CSMCC_ALS_LINE2] = KAL_TRUE;
                            }
                        }
                
                        /* Johnny: NW may return
                        msg_ptr->forwarding_list[0].bs_code == L4_TELEPHONY, msg_ptr->forwarding_list[0].ss_status == 7
                        msg_ptr->forwarding_list[1].bs_code == L4_ALL_TELESERVICES, msg_ptr->forwarding_list[1].ss_status == 6
                        we should not clear CFU in this sceanrio */
                        if (ff->basicServiceOpt == KAL_TRUE && msg_ptr->forwarding_list[bs_index].bs_code == L4_TELEPHONY)
                        {
                            telephony_already_showed = KAL_TRUE;
                        }
                    }
                    else
                    {
                        if (telephony_already_showed == KAL_FALSE)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                            csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                            csmss_display_cfu_ind(HIDE_CFU, line_id);                 
                        }
                    }
                }

            } // end of if (line_id != CSMCC_ALS_NONE)

        } // end of if (msg_ptr->ss_code is L4_CFU or L4_CFA)

#endif  /* __CPHS__ || __REL4__ */

    } //end for


#if defined (__CPHS__) || defined (__REL4__) //MAUI_01977687
// Revise interrogate: 2.if no respones from NW, clear the line.
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
    /* MAUI_00239961 [SS][Revise] After query, only CFU and CFA need to update the status */
    if ((msg_ptr->op_code == SS_OP_INTERROGATESS)
		&& 
		((msg_ptr->ss_code == L4_CFU) || (msg_ptr->ss_code == L4_CFA)))
    {
        if (need_clr_line1 == KAL_TRUE)
        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
            csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE1, NULL);
#else
            csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE1);
#endif
            csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1);
        }

        if (need_clr_line2 == KAL_TRUE)
        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
            csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE2, NULL);
#else
            csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE2);
#endif
            csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE2);
        }
    }
#endif /* not __SS_NOT_INTERROGATE_ACTIVATESS__ */
#endif  /* __CPHS__ || __REL4__ */

}


void return_error_component_handler(ss_return_struct *ss_return_ptr, mnss_end_ind_struct *end_ind_ptr)
{
    //kal_uint32 invoke_id;

    //invoke_id = end_ind_ptr->facility.component[0]->returnError ->
        //invokeID->value;
#ifdef __SAT__
    ss_return_ptr->res = 0x34;
#endif
    if (end_ind_ptr->facility.component[0]->returnError ->
        localValueOpt == KAL_TRUE)
    {
        ss_return_ptr->cause_present = KAL_TRUE;
        ss_return_ptr->cause_value = CM_SS_ERR_START +(kal_uint16)
            end_ind_ptr->facility.component[0]->returnError ->
            localValue;
#ifdef __SAT__
        ss_return_ptr->size_of_additional_info = 1;
        ss_return_ptr->additional_info[0] = (kal_uint8)end_ind_ptr ->
            facility.component[0]->returnError->localValue;
#endif
    } /* end of error code are localvalue */
}

void reject_component_handler(ss_return_struct *ss_return_ptr, mnss_end_ind_struct *end_ind_ptr)
{
    //kal_uint32 invoke_id;
    
#ifdef __SAT__
    ss_return_ptr->res = 0x34; //SS Return Error
    ss_return_ptr->size_of_additional_info = 1;
    ss_return_ptr->additional_info[0] = 0; //No specific cause can be given
#endif
    if (end_ind_ptr->facility.component[0]->reject->derivableOpt
        == KAL_TRUE)
    {
        //invoke_id = end_ind_ptr->facility.component[0]->reject ->
            //derivable->value;
    }

    ss_return_ptr->cause_present = KAL_TRUE;

    if (end_ind_ptr->facility.component[0]->reject ->
        generalProblemOpt == KAL_TRUE)
    {
        ss_return_ptr->cause_value = CM_SS_GENERALPROBLEM_START +
            (kal_uint16)end_ind_ptr->facility.component[0]->reject ->
            generalProblem->value;
    }
    else if (end_ind_ptr->facility.component[0]->reject ->
             invokeProblemOpt == KAL_TRUE)
    {
        ss_return_ptr->cause_value = CM_SS_INVOKEPROBLEM_START +
            (kal_uint16)end_ind_ptr->facility.component[0]->reject ->
            invokeProblem->value;
    }
    else if (end_ind_ptr->facility.component[0]->reject ->
             returnResultProblemOpt == KAL_TRUE)
    {
        ss_return_ptr->cause_value =
            CM_SS_RETURNRESULTPROBLEM_START + (kal_uint16)end_ind_ptr ->
            facility.component[0]->reject->returnResultProblem ->
            value;
    }
    else if (end_ind_ptr->facility.component[0]->reject ->
             returnErrorProblemOpt == KAL_TRUE)
    {
        ss_return_ptr->cause_value =
            CM_SS_RETURNERRORPROBLEM_START + (kal_uint16)end_ind_ptr ->
            facility.component[0]->reject->returnErrorProblem ->
            value;
    }
    else
    {
        ss_return_ptr->cause_present = KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  csmss_cf_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  call forwarding end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cf_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr, kal_bool update_cfu_icon_only)
{
    l4ccsm_ciss_cf_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    ForwardingFeatureList *ffl;
    //ForwardingFeature *ff;
    BasicServiceGroupList *bsgl;
    BasicServiceCode *bsg;
    kal_uint8 bs_index = 0;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

#if defined (__CPHS__) || defined (__REL4__) //MAUI_01977687
    kal_uint8 line_id = CSMCC_ALS_NONE;
    kal_bool line_already_showed[CSMCC_ALS_NONE] = {KAL_FALSE,KAL_FALSE,KAL_FALSE};
#endif
// Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
    kal_bool need_query_act_cf_icon = KAL_FALSE;
    kal_bool need_clr_line1 = KAL_FALSE;
    kal_bool need_clr_line2 = KAL_FALSE;

#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
    l4_addr_bcd_struct  *p_ftn_requested    = &csmss_g_ciss_tab[end_ind_ptr->call_id].address;
#endif
    
    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cf_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_cf_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cf_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    msg_ptr->ss_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].ss_code;
    msg_ptr->bs_count = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
	
    kal_mem_set(msg_ptr->forwarding_list, 0, 13 *sizeof
                (forwarding_list_struct));
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_SUCCESS;
            //invoke_id = end_ind_ptr->facility.component[0] ->
                //returnResultLast->invokeID->value;

            if ((end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE) && (end_ind_ptr->facility.component[0]
               ->returnResultLast->localValueOpt == KAL_TRUE))
            {
                msg_ptr->op_code = (kal_uint8)end_ind_ptr->facility.component[0] ->
                    returnResultLast->localValue;
#ifdef __SAT__
                msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                    end_ind_ptr->facility.component[0]->returnResultLast ->
                    parameterLen + 1;
                msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                    facility.component[0]->returnResultLast->localValue;
                if (msg_ptr->ss_return.size_of_additional_info > 1)
                {
                    kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                end_ind_ptr->facility.component[0] ->
                                returnResultLast->parameter, msg_ptr ->
                                ss_return.size_of_additional_info - 1);
                }
#endif
                switch (msg_ptr->op_code)
                {
                case SS_OP_REGISTERSS:
                case SS_OP_ERASESS:
                case SS_OP_ACTIVATESS:
                case SS_OP_DEACTIVATESS:

                    if (end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen > 0)
                    {
                        CSMSS_MCD_PUN_START(SS_Info, ss_info)
                        if (csmss_mcd_unpack(MCD_SS_INFO, (kal_uint32**)&(ss_info), end_ind_ptr, NULL) == KAL_FALSE)
                        {
                            /* MAUI_01958830 handle mcd unpack error */
                            // prevent free again.
                            end_ind_ptr->facility.component[0] = NULL;
                            msg_ptr->return_code = L4_FAIL;
                            break;
                        }

                        msg_ptr->ss_return.para_present = KAL_TRUE;

                        if (ss_info->forwardingInfoOpt == KAL_TRUE)
                        {
                            if (ss_info->forwardingInfo->ss_CodeOpt ==
                                KAL_TRUE)
                            {
                                msg_ptr->ss_code = (kal_uint8)
                                    csmss_convert_ss_code_l4((ss_code_enum)
                                    (ss_info->forwardingInfo->ss_Code ->
                                    octs[0]));
                            }

                            ffl = ss_info->forwardingInfo ->
                                forwardingFeatureList;
                            // Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            forwarding_feature_list_handler(msg_ptr, ffl, &need_query_act_cf_icon, p_ftn_requested);
#else
                            forwarding_feature_list_handler(msg_ptr, ffl, &need_query_act_cf_icon);
#endif
                        }
                        else if (ss_info->callBarringInfoOpt == KAL_TRUE){}
                        else if (ss_info->ss_DataOpt == KAL_TRUE)
                        {
                            if (ss_info->ss_Data->ss_CodeOpt == KAL_TRUE)
                            {
                                msg_ptr->ss_code = (kal_uint8)
                                    csmss_convert_ss_code_l4((ss_code_enum)
                                    (ss_info->ss_Data->ss_Code->octs[0]));
                            }

                            if (ss_info->ss_Data->ss_StatusOpt == KAL_TRUE)
                            {
                                /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)
                                msg_ptr->bs_count = 1;
#endif                                
                                msg_ptr->forwarding_list[0].ss_status =
                                    ss_info->ss_Data->ss_Status->octs[0];
                            }

                            if (ss_info->ss_Data->basicServiceGroupListOpt
                                == KAL_TRUE)
                            {
                                bsgl = ss_info->ss_Data ->
                                    basicServiceGroupList;
                                msg_ptr->bs_count = (kal_uint8)bsgl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    bsg = bsgl->list[bs_index];

                                    msg_ptr ->
                                        forwarding_list[bs_index].bs_code =
                                        csmss_convert_bs_code_l4(bsg);

                                    if (ss_info->ss_Data->ss_StatusOpt ==
                                        KAL_TRUE)
                                    {
                                        msg_ptr ->
                                            forwarding_list[bs_index].ss_status
                                            = ss_info->ss_Data->ss_Status
                                           ->octs[0];
                                    }

#if defined (__CPHS__) || defined (__REL4__)
                                    if ((msg_ptr->ss_code == L4_CFU) ||
                                        (msg_ptr->ss_code == L4_CFA))
                                    {
                                        if (msg_ptr->forwarding_list[bs_index].bs_code == L4_ALL_TELESERVICES)
                                        {
                                            line_id = CSMCC_ALS_LINE1_2; 
                                        }
                                        else if (msg_ptr->forwarding_list[bs_index].bs_code == L4_TELEPHONY)
                                        {
                                            line_id = CSMCC_ALS_LINE1; 
                                        }   
                                        else if (msg_ptr->forwarding_list[bs_index].bs_code == L4_AUXILIARY_TELEPHONY)
                                        {
                                            line_id = CSMCC_ALS_LINE2;                
                                        }                                    
                                        
                                        if (line_id != CSMCC_ALS_NONE)
                                        {
                                            if ((ss_info->ss_Data ->
                                                ss_StatusOpt == KAL_TRUE) && (
                                                (msg_ptr ->
                                                forwarding_list[bs_index].ss_status &0x01) == 0x01))
                                            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                                csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                                                csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                                                csmss_display_cfu_ind(SHOW_CFU, line_id);
                                            }
                                            else
                                            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                                csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                                                csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                                                csmss_display_cfu_ind(HIDE_CFU, line_id);
                                            }
                                        }
                                    }
#endif  /* __CPHS__ || __REL4__ */
                                }
                            }
                            else
                            {
#if defined (__CPHS__) || defined (__REL4__)
                                if (msg_ptr->ss_code == L4_CFU || msg_ptr->ss_code == L4_CFA)
                                {
                                    //no msg_ptr->forwarding_list[bs_index].bs_code
                                    if (csmss_g_ciss_tab[0].bs_code == 0 ||
                                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                                    {
                                        //line_id = CSMCC_ALS_LINE1_2;
                                        // Revise interrogate: 1.query again for active
                                        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                            need_query_act_cf_icon = KAL_TRUE;
                                        #endif
                                        /* default display line1 */
                                        line_id = CSMCC_ALS_LINE1;
                                    }
                                    else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                                    {
                                        line_id = CSMCC_ALS_LINE1;                
                                    }
                                    else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                                    {
                                        line_id = CSMCC_ALS_LINE2;                 
                                    } 

                                    if (line_id != CSMCC_ALS_NONE)
                                    {                                                
                                        if (msg_ptr->op_code == SS_OP_REGISTERSS ||
                                            msg_ptr->op_code == SS_OP_ACTIVATESS)
                                        {
                                            if ((ss_info->ss_Data->ss_StatusOpt == KAL_TRUE) && 
                                               ((msg_ptr->forwarding_list[0].ss_status &0x01) == 0x01))
                                            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                                csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                                                csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                                                csmss_display_cfu_ind(SHOW_CFU, line_id);
                                             }
                                        }
                                        else if (msg_ptr->op_code == SS_OP_ERASESS ||
                                                    msg_ptr->op_code == SS_OP_DEACTIVATESS)
                                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                            csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                                            csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                                            csmss_display_cfu_ind(HIDE_CFU, line_id);
                                        }
                                    }
                                }
#endif  /* __CPHS__ || __REL4__ */
                            }

                        }

                        free_ctrl_buffer(ss_info);
                    }
                    else //prepaid card, end_ind_ptr->returnResultLast->parameterLen == 0
                    {
                        if ((msg_ptr->op_code == SS_OP_REGISTERSS) ||
                            (msg_ptr->op_code == SS_OP_ACTIVATESS))
                        {
                            /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                            
                            msg_ptr->bs_count = 1;
#endif                            
                            msg_ptr->forwarding_list[bs_index].ss_status = 0x01;
                            /* case SS_OP_ERASESS and SS_OP_DEACTIVATESS will be regarded as non-active */
                        }
#if defined (__CPHS__) || defined (__REL4__)
                        if (msg_ptr->ss_code == L4_CFU || msg_ptr->ss_code == L4_CFA)
                        {
                            //no msg_ptr->forwarding_list[bs_index].bs_code
                            if (csmss_g_ciss_tab[0].bs_code == 0 ||
                             csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                             csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                            {
                                //line_id = CSMCC_ALS_LINE1_2;
                                // Revise interrogate: 1.query again for active
                                #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                    need_query_act_cf_icon = KAL_TRUE;
                                #endif
                                /* default display line1 */
                                line_id = CSMCC_ALS_LINE1;
                            }
                            else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                            {
                                line_id = CSMCC_ALS_LINE1;                
                            }
                            else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                            {
                                line_id = CSMCC_ALS_LINE2;                 
                            } 

                            if (line_id != CSMCC_ALS_NONE)                                                            
                            {
                                if (msg_ptr->op_code == SS_OP_REGISTERSS ||
                                     msg_ptr->op_code == SS_OP_ACTIVATESS)
                                {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                    csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                                    csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                                    csmss_display_cfu_ind(SHOW_CFU, line_id);
                                }
                                else if (msg_ptr->op_code == SS_OP_ERASESS ||
                                            msg_ptr->op_code == SS_OP_DEACTIVATESS)
                                {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                    csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                                    csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                                    csmss_display_cfu_ind(HIDE_CFU, line_id);
                                }
                            }
                        }
#endif  /* __CPHS__ || __REL4__ */
                    }

                    break;

                case SS_OP_INTERROGATESS:

                    if (end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen > 0)
                    {
                        CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                        if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                        {
                            /* MAUI_01958830 handle mcd unpack error */
                            // prevent free again.
                            end_ind_ptr->facility.component[0] = NULL;
                            msg_ptr->return_code = L4_FAIL;
                            break;
                        }
                        
                        msg_ptr->ss_return.para_present = KAL_TRUE;

                        if (inter_res->ss_StatusOpt == KAL_TRUE)
                        {
                            msg_ptr->bs_count = 0;
                            msg_ptr->forwarding_list[0].ss_status = inter_res
                               ->ss_Status->octs[0];
#if defined (__CPHS__) || defined (__REL4__)
                            if (msg_ptr->ss_code == L4_CFU || msg_ptr->ss_code == L4_CFA)
                            {
                                //no msg_ptr->forwarding_list[bs_index].bs_code
                                if (csmss_g_ciss_tab[0].bs_code == 0 ||
                                 csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                                 csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                                {
                                    //line_id = CSMCC_ALS_LINE1_2;
                                    // Revise interrogate: 1.query again for active
                                    //#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                    //    need_query_act_cf_icon = KAL_TRUE;
                                    //#endif
                                    /* if query still doesn't give the status, default display line1 only */
                                    line_id = CSMCC_ALS_LINE1;
                                }
                                else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                                {
                                    line_id = CSMCC_ALS_LINE1;                
                                }
                                else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                                {
                                    line_id = CSMCC_ALS_LINE2;                 
                                } 

                                if (line_id != CSMCC_ALS_NONE)                                                            
                                {                                                        
                                    if ((msg_ptr->forwarding_list[0].ss_status & 0x01) == 0x01)
                                    // activated
                                    {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                        csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                                        csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                                        csmss_display_cfu_ind(SHOW_CFU, line_id);
                                    }
                                    else
                                    // deactivated
                                    {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                        csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                                        csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                                        csmss_display_cfu_ind(HIDE_CFU, line_id);
                                    }
                                }
                            }
#endif  /* __CPHS__ || __REL4__ */
                        }
                        else if (inter_res->basicServiceGroupListOpt ==
                                 KAL_TRUE)
                        {
                        // Revise interrogate: 2.if no respones from NW, clear the line.
                        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                            /* the NW doesn't response our query, we should clear the CF icon */
                            if (csmss_g_ciss_tab[0].bs_code == 0 ||
                                csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                                csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                            {
                                need_clr_line1 = KAL_TRUE;
                                need_clr_line2 = KAL_TRUE;
                            }
                            else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                            {
                                need_clr_line1 = KAL_TRUE;
                            }
                            else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                            {
                                need_clr_line2 = KAL_TRUE;
                            }
                        #endif

                            bsgl = inter_res->basicServiceGroupList;
                            msg_ptr->bs_count = (kal_uint8)bsgl->listLen;

                            for (bs_index = 0; bs_index < msg_ptr->bs_count;
                                 bs_index++)
                            {
                                bsg = bsgl->list[bs_index];

                                msg_ptr->forwarding_list[bs_index].bs_code =
                                    csmss_convert_bs_code_l4(bsg);

                                msg_ptr->forwarding_list[bs_index].ss_status
                                    = 0x01;

#if defined (__CPHS__) || defined (__REL4__)
                                if ((msg_ptr->ss_code == L4_CFU) || (msg_ptr
                                   ->ss_code == L4_CFA))
                                {
                                    if (msg_ptr->forwarding_list[bs_index].bs_code == L4_ALL_TELESERVICES)
                                    {
                                        line_id = CSMCC_ALS_LINE1_2;
                                    #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                        need_clr_line1 = KAL_FALSE;
                                        need_clr_line2 = KAL_FALSE;
                                    #endif    
                                    }
                                    else if (msg_ptr->forwarding_list[bs_index].bs_code == L4_TELEPHONY)
                                    {
                                        line_id = CSMCC_ALS_LINE1;
                                    #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                        need_clr_line1 = KAL_FALSE;
                                    #endif   
                                    }   
                                    else if (msg_ptr->forwarding_list[bs_index].bs_code == L4_AUXILIARY_TELEPHONY)
                                    {
                                        line_id = CSMCC_ALS_LINE2;
                                    #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                                        need_clr_line2 = KAL_FALSE;
                                    #endif  
                                    }
                                                                        
                                    if (line_id != CSMCC_ALS_NONE)
                                    {
                                        if (line_already_showed[line_id] == KAL_FALSE)
                                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                            csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                                            csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                                            csmss_display_cfu_ind(SHOW_CFU, line_id);
                                            line_already_showed[line_id] = KAL_TRUE;
                                            if (line_id == CSMCC_ALS_LINE1_2)
                                            {
                                                line_already_showed[CSMCC_ALS_LINE1] = KAL_TRUE;
                                                line_already_showed[CSMCC_ALS_LINE2] = KAL_TRUE;
                                            }
                                        }
                                    }
                                }
#endif  /* __CPHS__ || __REL4__ */
                                msg_ptr->forwarding_list[bs_index].address[0]
                                    = 0;
                                msg_ptr ->
                                    forwarding_list[bs_index].subaddress[0] = 0;
                            }
#if defined (__CPHS__) || defined (__REL4__) //MAUI_01977687
                            // Revise interrogate: 2.if no respones from NW, clear the line.
                            if (need_clr_line1 == KAL_TRUE)
                            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE1, NULL);
#else
                                csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE1);
#endif
                                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1);
                            }
                            if (need_clr_line2 == KAL_TRUE)
                            {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                                csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE2, NULL);
#else
                                csmss_update_cfu_req(CLEAR_CFU, CSMCC_ALS_LINE2);
#endif
                                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE2);
                            }
#endif  /* __CPHS__ || __REL4__ */
                        }
                        else if (inter_res->forwardingFeatureListOpt ==
                                 KAL_TRUE)
                        {
                            ffl = inter_res->forwardingFeatureList;
                            // Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            forwarding_feature_list_handler(msg_ptr, ffl, &need_query_act_cf_icon, p_ftn_requested);
#else
                            forwarding_feature_list_handler(msg_ptr, ffl, &need_query_act_cf_icon);
#endif
                        }
                        else if (inter_res->genericServiceInfoOpt == KAL_TRUE)
                                 {}

                        free_ctrl_buffer(inter_res);
                    }
                    else
                    {
                        /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                        
                        msg_ptr->bs_count = 1;
#endif 
                        msg_ptr->forwarding_list[0].ss_status = 0x01;
                    }

                    break;
                    
                default:
                    break;
                } /* switch on msg_ptr->op_code */
            }
            else
            {
                if ((msg_ptr->op_code == SS_OP_REGISTERSS) ||
                     (msg_ptr->op_code == SS_OP_ACTIVATESS) ||
                     (msg_ptr->op_code == SS_OP_INTERROGATESS))
                {
                    /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                    
                    msg_ptr->bs_count = 1;
#endif                     
                    msg_ptr->forwarding_list[0].ss_status = 0x01;
                }
#if defined (__CPHS__) || defined (__REL4__)
                if (msg_ptr->ss_code == L4_CFU || msg_ptr->ss_code == L4_CFA)
                {
                    //no msg_ptr->forwarding_list[bs_index].bs_code
                    if (csmss_g_ciss_tab[0].bs_code == 0 ||
                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                    {
                        // Revise interrogate: 1.query again for active
                        //line_id = CSMCC_ALS_LINE1_2;
                        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                            need_query_act_cf_icon = KAL_TRUE;
                        #endif
                        line_id = CSMCC_ALS_LINE1;
                    }
                    else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                    {
                        line_id = CSMCC_ALS_LINE1;                
                    }
                    else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                    {
                        line_id = CSMCC_ALS_LINE2;                 
                    } 

                    if (line_id != CSMCC_ALS_NONE)     
                    {                                           
                        if (msg_ptr->op_code == SS_OP_REGISTERSS ||
                             msg_ptr->op_code == SS_OP_ACTIVATESS ||
                             msg_ptr->op_code == SS_OP_INTERROGATESS)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                            csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                            csmss_display_cfu_ind(SHOW_CFU, line_id);
                        }
                        else if (msg_ptr->op_code == SS_OP_ERASESS ||
                    	               msg_ptr->op_code == SS_OP_DEACTIVATESS)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                            csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                            csmss_display_cfu_ind(HIDE_CFU, line_id);
                        }
                    }
                }
#endif  /* __CPHS__ || __REL4__ */
            }
        }
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
            if (end_ind_ptr->facility.component[0]->reject ->
                     returnResultProblemOpt == KAL_TRUE)
            {
                msg_ptr->return_code = L4_SUCCESS;
#if defined (__CPHS__) || defined (__REL4__)
                if (msg_ptr->ss_code == L4_CFU || msg_ptr->ss_code == L4_CFA)
                {
                    //no msg_ptr->forwarding_list[bs_index].bs_code
                    if (csmss_g_ciss_tab[0].bs_code == 0 ||
                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES ||
                     csmss_g_ciss_tab[0].bs_code == L4_ALL_TELESERVICES_EXCEPT_SMS)
                    {
                        // Revise interrogate: 1.query again for active
                        //line_id = CSMCC_ALS_LINE1_2;
                        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                            need_query_act_cf_icon = KAL_TRUE;
                        #endif
                        line_id = CSMCC_ALS_LINE1;
                    }
                    else if (csmss_g_ciss_tab[0].bs_code == L4_TELEPHONY)
                    {
                        line_id = CSMCC_ALS_LINE1;                
                    }
                    else if (csmss_g_ciss_tab[0].bs_code == L4_AUXILIARY_TELEPHONY)
                    {
                        line_id = CSMCC_ALS_LINE2;                 
                    } 

                    if (line_id != CSMCC_ALS_NONE)     
                    {                                    
                        if (msg_ptr->op_code == SS_OP_REGISTERSS ||
                            msg_ptr->op_code == SS_OP_ACTIVATESS)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req( SET_CFU,  line_id, p_ftn_requested);
#else
                            csmss_update_cfu_req( SET_CFU,  line_id);
#endif
                            csmss_display_cfu_ind(SHOW_CFU, line_id);
                        }
                        else if (msg_ptr->op_code == SS_OP_ERASESS ||
                    	               msg_ptr->op_code == SS_OP_DEACTIVATESS)
                        {
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
                            csmss_update_cfu_req(CLEAR_CFU, line_id, NULL);
#else
                            csmss_update_cfu_req(CLEAR_CFU, line_id);
#endif
                            csmss_display_cfu_ind(HIDE_CFU, line_id);
                        }
                    }
                }
#endif  /* __CPHS__ || __REL4__ */
            }
            else if (end_ind_ptr->facility.component[0]->reject ->
                     invokeProblemOpt == KAL_TRUE)
            {
            /* from ciss_wfn_timer_expiry_hdlr */
#if defined (__CPHS__) || defined (__REL4__)
#ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
                if ((msg_ptr->op_code == SS_OP_ACTIVATESS) &&
                    (csmss_g_query_act_req == KAL_TRUE))
                {
                    csmss_g_query_act_req = KAL_FALSE;
                    free_local_para((local_para_struct *)msg_ptr);
                    csmss_g_msg_ptr = NULL;
                }
#endif
#endif
#ifdef __SS_ERASURE_BEFORE_REGISTER__
                if ((msg_ptr->op_code == SS_OP_ERASESS) &&
                    (csmss_g_erase_reg_req == KAL_TRUE))
                {
                    csmss_g_erase_reg_req = KAL_FALSE;
                    free_local_para((local_para_struct *)msg_ptr);
                }
#endif
            }
        }

/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }
    } /* end if facilityP */

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
			msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    if (update_cfu_icon_only == KAL_TRUE)
    {
        free_local_para((local_para_struct *)msg_ptr);
    }
    else
    {
        // Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
            if ((need_query_act_cf_icon == KAL_TRUE) &&
                /* MAUI_01573469 [CSMSS][Revise] query again for ACTIVATESS, DEACTIVATESS, ERASESS */
                ((msg_ptr->op_code == SS_OP_ACTIVATESS)||(msg_ptr->op_code == SS_OP_DEACTIVATESS)||(msg_ptr->op_code == SS_OP_ERASESS)) &&
                (is_test_sim(CSMSS_SIM_ID) == KAL_FALSE) &&
                (csmss_g_query_act_req == KAL_FALSE))
            {
                //keep ori cf return
                csmss_g_msg_ptr = (kal_uint8 *)msg_ptr;
                csmss_g_query_act_req = KAL_TRUE;
                //only update need to query again
                //csmss_ss_exe_call_forward_req(msg_ptr->src_id, SS_OP_INTERROGATESS, msg_ptr->ss_code, 0, 0, dummy_addr, KAL_FALSE, dummy_addr);
            }
            else if ((msg_ptr->op_code == SS_OP_INTERROGATESS) &&
                     (csmss_g_query_act_req == KAL_TRUE))
            {
                csmss_g_query_act_req = KAL_FALSE;
                free_local_para((local_para_struct *)msg_ptr);
                msg_ptr = (l4ccsm_ciss_cf_end_cnf_struct *)csmss_g_msg_ptr;
                csmss_g_msg_ptr = NULL;

                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CF_END_CNF, msg_ptr, NULL);
            }
            else
        #endif
        #ifdef __SS_ERASURE_BEFORE_REGISTER__
            if ((msg_ptr->op_code == SS_OP_ERASESS) &&
                (is_test_sim(CSMSS_SIM_ID) == KAL_FALSE) &&
                (csmss_g_erase_reg_req == KAL_TRUE))
            {
                // keep erase_reg_req true for register to prevent recursive
                //csmss_g_erase_reg_req = KAL_TRUE;
                free_local_para((local_para_struct *)msg_ptr);
            }
            else if ((msg_ptr->op_code == SS_OP_REGISTERSS) &&
                     (csmss_g_erase_reg_req == KAL_TRUE))
            {
                csmss_g_erase_reg_req = KAL_FALSE;
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CF_END_CNF, msg_ptr, NULL);
            }
            else
        #endif
            {
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CF_END_CNF, msg_ptr, NULL);
            }
    }

#ifndef __SS_ERASURE_BEFORE_REGISTER__
    csmss_g_ciss_tab[0].bs_code = 0;
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cw_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  call waiting end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cw_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_cw_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    ForwardingFeatureList *ffl;
    ForwardingFeature *ff;
    BasicServiceGroupList *bsl;
    BasicServiceCode *bsc;
    kal_uint8 bs_index = 0;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cw_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_cw_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cw_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    msg_ptr->bs_count = 0;
    msg_ptr->ss_status = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    kal_mem_set(msg_ptr->bs_code, 0, 13);
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_SUCCESS;
            //invoke_id = end_ind_ptr->facility.component[0] ->
                //returnResultLast->invokeID->value;

            if (end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE)
            {
                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    localValueOpt == KAL_TRUE)
                {
                    msg_ptr->op_code = (kal_uint8)end_ind_ptr->facility.component[0]
                       ->returnResultLast->localValue;
#ifdef __SAT__
                    msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                        end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen + 1;
                    msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                        facility.component[0]->returnResultLast->localValue;
                    if (msg_ptr->ss_return.size_of_additional_info > 1)
                    {
                        kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                    end_ind_ptr->facility.component[0] ->
                                    returnResultLast->parameter, msg_ptr ->
                                    ss_return.size_of_additional_info - 1);
                    }
#endif
                    switch (msg_ptr->op_code)
                    {
                    case SS_OP_ACTIVATESS:
                    case SS_OP_DEACTIVATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(SS_Info, ss_info)
                            if (csmss_mcd_unpack(MCD_SS_INFO, (kal_uint32**)&(ss_info), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }

                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (ss_info->forwardingInfoOpt == KAL_TRUE)
                            {
                                ffl = ss_info->forwardingInfo ->
                                    forwardingFeatureList;
                                msg_ptr->bs_count = (kal_uint8)ffl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    ff = ffl->list[bs_index];

                                    if (ff->basicServiceOpt == KAL_TRUE)
                                    {
                                        msg_ptr->bs_code[bs_index] =
                                            csmss_convert_bs_code_l4(ff ->
                                            basicService);
                                    }

                                    if (ff->ss_StatusOpt == KAL_TRUE)
                                    {
                                        msg_ptr->ss_status = ff->ss_Status
                                           ->octs[0];
                                    }
                                }
                            }
                            else if (ss_info->callBarringInfoOpt == KAL_TRUE)
                                     {}
                            else if (ss_info->ss_DataOpt == KAL_TRUE)
                            {
                                if (ss_info->ss_Data->ss_StatusOpt ==
                                    KAL_TRUE)
                                {
                                    msg_ptr->bs_count = 0;
                                    msg_ptr->ss_status = ss_info->ss_Data
                                       ->ss_Status->octs[0];
                                }

                                if (ss_info->ss_Data ->
                                    basicServiceGroupListOpt == KAL_TRUE)
                                {
                                    bsl = ss_info->ss_Data ->
                                        basicServiceGroupList;
                                    msg_ptr->bs_count = (kal_uint8)bsl->listLen;

                                    for (bs_index = 0; bs_index < msg_ptr ->
                                        bs_count; bs_index++)
                                    {
                                        bsc = bsl->list[bs_index];

                                        msg_ptr->bs_code[bs_index] =
                                            csmss_convert_bs_code_l4(bsc);
                                    }

                                    if ((msg_ptr->bs_count > 0) && (msg_ptr
                                       ->op_code == SS_OP_ACTIVATESS))
                                    {
                                        msg_ptr->ss_status = 0x01;
                                    }
                                }
                            }

                            free_ctrl_buffer(ss_info);
                        }
                        else
                        {
                            if (msg_ptr->op_code == SS_OP_ACTIVATESS)
                            {
                                msg_ptr->ss_status = 0x01;
                            }
                        }

                        break;

                    case SS_OP_INTERROGATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                            if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }

                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (inter_res->ss_StatusOpt == KAL_TRUE)
                            {
                                msg_ptr->bs_count = 0;
                                msg_ptr->ss_status = inter_res->ss_Status
                                   ->octs[0];
                            }
                            else if (inter_res->basicServiceGroupListOpt ==
                                     KAL_TRUE)
                            {
                                bsl = inter_res->basicServiceGroupList;
                                msg_ptr->bs_count = (kal_uint8)bsl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    bsc = bsl->list[bs_index];

                                    msg_ptr->bs_code[bs_index] =
                                        csmss_convert_bs_code_l4(bsc);
                                }

                                if (msg_ptr->bs_count > 0)
                                {
                                    msg_ptr->ss_status = 0x01;
                                }
                            }
                            else if (inter_res->forwardingFeatureListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->genericServiceInfoOpt ==
                                     KAL_TRUE)
                            {
                                msg_ptr->bs_count = 0;
                                msg_ptr->ss_status = inter_res ->
                                    genericServiceInfo->ss_Status->octs[0];
                            }

                            free_ctrl_buffer(inter_res);
                        }
                        else
                        {
                            msg_ptr->ss_status = 0x01;
                        }

                        break;

                    default:
                        break;
                    } /* end switch op code */
                }
                else
                {
                    if ((msg_ptr->op_code == SS_OP_ACTIVATESS) || (msg_ptr ->
                        op_code == SS_OP_INTERROGATESS))
                    {
                        msg_ptr->ss_status = 0x01;
                    }
                }
            }
            else
            {
                if ((msg_ptr->op_code == SS_OP_ACTIVATESS) || (msg_ptr ->
                    op_code == SS_OP_INTERROGATESS))
                {
                    msg_ptr->ss_status = 0x01;
                }
            }
        }
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }

/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }
    } /* end if facilityP */

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CW_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cb_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  call barring end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cb_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_cb_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    CallBarringFeatureList *cbl;
    CallBarringFeature *cbf;
    BasicServiceGroupList *bsl;
    BasicServiceCode *bsc;
    ForwardingFeatureList *ffl;
    ForwardingFeature *ff;
    kal_uint8 bs_index = 0;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cb_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_cb_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cb_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    msg_ptr->ss_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].ss_code;
    msg_ptr->bs_count = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    kal_mem_set(msg_ptr->barring_list, 0, 13 *sizeof(barring_list_struct));
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_SUCCESS;
            //invoke_id = end_ind_ptr->facility.component[0] ->
                //returnResultLast->invokeID->value;

            if (end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE)
            {
                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    localValueOpt == KAL_TRUE)
                {
                    msg_ptr->op_code = (kal_uint8)end_ind_ptr->facility.component[0]
                       ->returnResultLast->localValue;
#ifdef __SAT__
                    msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                        end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen + 1;
                    msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                        facility.component[0]->returnResultLast->localValue;
                    if (msg_ptr->ss_return.size_of_additional_info > 1)
                    {
                        kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                    end_ind_ptr->facility.component[0] ->
                                    returnResultLast->parameter, msg_ptr ->
                                    ss_return.size_of_additional_info - 1);
                    }
#endif
                    switch (msg_ptr->op_code)
                    {
                    case SS_OP_ACTIVATESS:
                    case SS_OP_DEACTIVATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(SS_Info, ss_info)
                            if (csmss_mcd_unpack(MCD_SS_INFO, (kal_uint32**)&(ss_info), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                            
                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (ss_info->forwardingInfoOpt == KAL_TRUE)
                            {
                                ffl = ss_info->forwardingInfo ->
                                    forwardingFeatureList;
                                msg_ptr->bs_count = (kal_uint8)ffl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    ff = ffl->list[bs_index];

                                    if (ff->basicServiceOpt == KAL_TRUE)
                                    {
                                        msg_ptr ->
                                            barring_list[bs_index].bs_code =
                                            csmss_convert_bs_code_l4(ff ->
                                            basicService);
                                    }

                                    if (ff->ss_StatusOpt == KAL_TRUE)
                                    {
                                        msg_ptr ->
                                            barring_list[bs_index].ss_status =
                                            ff->ss_Status->octs[0];
                                        // 20031130, cover network's problem if rr(sta=0x04) in Activation
                                        if (msg_ptr->op_code ==
                                            SS_OP_ACTIVATESS)
                                        {
                                            msg_ptr ->
                                                barring_list[bs_index].ss_status |= 0x01;
                                        }
                                    }
                                    else
                                    {
                                        if (msg_ptr->op_code ==
                                            SS_OP_ACTIVATESS)
                                        {
                                            msg_ptr ->
                                                barring_list[bs_index].ss_status = 0x01;
                                        }
                                    }
                                }
                            }
                            else if (ss_info->callBarringInfoOpt == KAL_TRUE)
                            {
                                if (ss_info->callBarringInfo->ss_CodeOpt ==
                                    KAL_TRUE)
                                {
                                    msg_ptr->ss_code = (kal_uint8)
                                        csmss_convert_ss_code_l4((ss_code_enum)
                                        (ss_info->callBarringInfo->ss_Code
                                       ->octs[0]));
                                }

                                cbl = ss_info->callBarringInfo ->
                                    callBarringFeatureList;
                                msg_ptr->bs_count = (kal_uint8)cbl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    cbf = cbl->list[bs_index];

                                    if (cbf->basicServiceOpt == KAL_TRUE)
                                    {
                                        msg_ptr ->
                                            barring_list[bs_index].bs_code =
                                            csmss_convert_bs_code_l4(cbf ->
                                            basicService);
                                    }

                                    if (cbf->ss_StatusOpt == KAL_TRUE)
                                    {
                                        msg_ptr ->
                                            barring_list[bs_index].ss_status =
                                            cbf->ss_Status->octs[0];
                                        // 20031130, cover network's problem if rr(sta=0x04) in Activation
                                        if (msg_ptr->op_code ==
                                            SS_OP_ACTIVATESS)
                                        {
                                            msg_ptr ->
                                                barring_list[bs_index].ss_status |= 0x01;
                                        }
                                    }
                                    else
                                    {
                                        if (msg_ptr->op_code ==
                                            SS_OP_ACTIVATESS)
                                        {
                                            msg_ptr ->
                                                barring_list[bs_index].ss_status = 0x01;
                                        }
                                    }
                                }
                            }
                            else if (ss_info->ss_DataOpt == KAL_TRUE){}

                            free_ctrl_buffer(ss_info);
                        }
                        else
                        {
                            if (msg_ptr->op_code == SS_OP_ACTIVATESS)
                            {
                                /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
                                /* 24.088 2.3
                                If the request did not include a BasicServiceCode, and the activation was successful for all basic services,
                                the network may send an empty return result to the MS 
                                */
#if !defined(WISDOM_MMI)                                
                                msg_ptr->bs_count = 1;
#endif                                    
                                msg_ptr->barring_list[0].ss_status = 0x01;
                            }
                        }

                        break;

                    case SS_OP_INTERROGATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                            if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }

                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (inter_res->ss_StatusOpt == KAL_TRUE)
                            {
                                /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                                
                                msg_ptr->bs_count = 1;
#endif                                    
                                msg_ptr->barring_list[0].ss_status =
                                    inter_res->ss_Status->octs[0];
                            }
                            else if (inter_res->basicServiceGroupListOpt ==
                                     KAL_TRUE)
                            {
                                bsl = inter_res->basicServiceGroupList;
                                msg_ptr->bs_count = (kal_uint8)bsl->listLen;

                                for (bs_index = 0; bs_index < msg_ptr ->
                                     bs_count; bs_index++)
                                {
                                    bsc = bsl->list[bs_index];
                                    msg_ptr->barring_list[bs_index].bs_code =
                                        csmss_convert_bs_code_l4(bsc);
                                    msg_ptr->barring_list[bs_index].ss_status
                                        = 0x01;
                                }
                            }
                            else if (inter_res->forwardingFeatureListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->genericServiceInfoOpt ==
                                     KAL_TRUE){}

                            free_ctrl_buffer(inter_res);
                        }
                        else
                        {
                            /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
                            /* 24.088 2.3
                            If the request did not include a BasicServiceCode, and the activation was successful for all basic services,
                            the network may send an empty return result to the MS 
                            */
#if !defined(WISDOM_MMI)                            
                            msg_ptr->bs_count = 1;
#endif                            
                            msg_ptr->barring_list[0].ss_status = 0x01;
                        }

                        break;

                    case SS_OP_REGISTERPASSWORD:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(Password, pw_res)
                            if (csmss_mcd_unpack(MCD_PASSWORD, (kal_uint32**)&(pw_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                        
                            free_ctrl_buffer(pw_res);

                            msg_ptr->ss_return.para_present = KAL_TRUE;
                        }

                        //                     msg_ptr->password = pw_res.octs;

                        break;

                    default:
                        break;
                    } /* switch op code*/
                }
                else
                {
                    if ((msg_ptr->op_code == SS_OP_ACTIVATESS) || (msg_ptr ->
                        op_code == SS_OP_INTERROGATESS))
                    {
                        /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                        
                        msg_ptr->bs_count = 1;
#endif                        
                        msg_ptr->barring_list[0].ss_status = 0x01;
                    }
                }
            }
            else
            {
                if ((msg_ptr->op_code == SS_OP_ACTIVATESS) || (msg_ptr ->
                    op_code == SS_OP_INTERROGATESS))
                {
                    /* MAUI_01942537 [WISDOM][CSMSS][L4C] revise Call Barring / Call Forwarding SS status */
#if !defined(WISDOM_MMI)                    
                    msg_ptr->bs_count = 1;
#endif                    
                    msg_ptr->barring_list[0].ss_status = 0x01;
                }
            }
        }
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }

/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }        
    } /* end if facilityP */

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CB_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_emlpp_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  emlpp end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_emlpp_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_emlpp_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_emlpp_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_emlpp_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_emlpp_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    msg_ptr->ss_status = 0;
    msg_ptr->default_priority_level = 0;
    msg_ptr->maximum_priority_level = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_SUCCESS;
            //invoke_id = end_ind_ptr->facility.component[0] ->
                //returnResultLast->invokeID->value;

            if (end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE)
            {
                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    localValueOpt == KAL_TRUE)
                {
                    msg_ptr->op_code = (kal_uint8)end_ind_ptr->facility.component[0]
                       ->returnResultLast->localValue;
#ifdef __SAT__
                    msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                        end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen + 1;
                    msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                        facility.component[0]->returnResultLast->localValue;
                    if (msg_ptr->ss_return.size_of_additional_info > 1)
                    {
                        kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                    end_ind_ptr->facility.component[0] ->
                                    returnResultLast->parameter, msg_ptr ->
                                    ss_return.size_of_additional_info - 1);
                    }
#endif
                    switch (msg_ptr->op_code)
                    {
                    case SS_OP_REGISTERSS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(SS_Info, ss_info)
                            if (csmss_mcd_unpack(MCD_SS_INFO, (kal_uint32**)&(ss_info), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                            
                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (ss_info->forwardingInfoOpt == KAL_TRUE){}
                            else if (ss_info->callBarringInfoOpt == KAL_TRUE)
                                     {}
                            else if (ss_info->ss_DataOpt == KAL_TRUE)
                            {
                                if (ss_info->ss_Data->defaultPriorityOpt ==
                                    KAL_TRUE)
                                {
                                    msg_ptr->default_priority_level = (kal_uint8)ss_info
                                       ->ss_Data->defaultPriority->value;
                                    csmss_ptr_g->default_priority_level =
                                        (kal_uint8)ss_info->ss_Data->defaultPriority
                                       ->value;
                                }
                            }

                            free_ctrl_buffer(ss_info);
                        }

                        break;

                    case SS_OP_INTERROGATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                            if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }

                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (inter_res->ss_StatusOpt == KAL_TRUE){}
                            else if (inter_res->basicServiceGroupListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->forwardingFeatureListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->genericServiceInfoOpt ==
                                     KAL_TRUE)
                            {
                                msg_ptr->ss_status = inter_res ->
                                    genericServiceInfo->ss_Status->octs[0];

                                if (inter_res->genericServiceInfo ->
                                    maximumEntitledPriorityOpt == KAL_TRUE)
                                {
                                    msg_ptr->maximum_priority_level =
                                        (kal_uint8)inter_res->genericServiceInfo ->
                                        maximumEntitledPriority->value;
                                }

                                if (inter_res->genericServiceInfo ->
                                    defaultPriorityOpt == KAL_TRUE)
                                {
                                    msg_ptr->default_priority_level =
                                        (kal_uint8)inter_res->genericServiceInfo ->
                                        defaultPriority->value;
                                }
                            }

                            free_ctrl_buffer(inter_res);
                        }

                        break;

                    default:
                        break;
                    } /* end switch op code */
                }
            }
        }
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }

/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }        
    } /* end if facilityP */

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_EMLPP_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cli_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  cli end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cli_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_cli_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cli_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_cli_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cli_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->ss_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].ss_code;
    msg_ptr->ss_status = 0;
    msg_ptr->clir_option = 3;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_init_ss_return(&(msg_ptr->ss_return));

    do {
        if (end_ind_ptr->facilityP == KAL_TRUE)
        {
            if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
            else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                     KAL_TRUE)
            {
                msg_ptr->return_code = L4_SUCCESS;
                //invoke_id = end_ind_ptr->facility.component[0] ->
                    //returnResultLast->invokeID->value;

                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    resultOpt == KAL_TRUE)
                {
                    if (end_ind_ptr->facility.component[0]->returnResultLast ->
                        localValueOpt == KAL_TRUE)
                    {
                        //               msg_ptr->op_code = end_ind_ptr->facility.component[0]->returnResultLast->localValue;
#ifdef __SAT__
                        msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                            end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen + 1;
                        msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                            facility.component[0]->returnResultLast->localValue;
                        if (msg_ptr->ss_return.size_of_additional_info > 1)
                        {
                            kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                        end_ind_ptr->facility.component[0] ->
                                        returnResultLast->parameter, msg_ptr ->
                                        ss_return.size_of_additional_info - 1);
                        }
#endif

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                            if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                            
                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (inter_res->ss_StatusOpt == KAL_TRUE)
                            {
                                msg_ptr->ss_status = inter_res->ss_Status ->
                                    octs[0];
                            }
                            else if (inter_res->basicServiceGroupListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->forwardingFeatureListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->genericServiceInfoOpt == KAL_TRUE)
                            {
                                msg_ptr->ss_status = inter_res ->
                                    genericServiceInfo->ss_Status->octs[0];

                                if (inter_res->genericServiceInfo ->
                                    cliRestrictionOptionOpt == KAL_TRUE)
                                {
                                    msg_ptr->clir_option = (kal_uint8)inter_res ->
                                        genericServiceInfo->cliRestrictionOption
                                       ->value;
                                }
                                else
                                {
                                    msg_ptr->clir_option = 3; // invalid
                                }
                            }

                            free_ctrl_buffer(inter_res);
                        }
                        else
                        {
                            msg_ptr->ss_status = 0x01;
                        }
                    }
                }
            }
            else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                     KAL_TRUE)
            {
                msg_ptr->return_code = L4_FAIL;
                return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
            }
            else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
            {
                msg_ptr->return_code = L4_FAIL;
                reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
            }

    /*
            for (component_count = 0; component_count < end_ind_ptr ->
                 facility.num_of_components; component_count++)
            {
                if (end_ind_ptr->facility.component[component_count] != NULL)
                {
                    ciss_component_dealloc(end_ind_ptr ->
                                           facility.component[component_count]);
                }
            }
    */

            if (end_ind_ptr->facility.component[0] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[0]);
            }        
        } /* end if facilityP */
    } while(0);

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CLI_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ccbs_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ccbs end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ccbs_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_ccbs_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    CCBS_FeatureList *ccbsl;
    CCBS_Feature *ccbsf;
    kal_uint8 bs_index = 0;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;
    kal_uint8 ss_status = 0; /* Johnny: temp solution, improper interface in CSM <-> L4C <-> MMI */

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ccbs_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_ccbs_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ccbs_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    kal_mem_set(msg_ptr->ccbs_list, 0, 5 *sizeof(ccbs_list_struct));
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_SUCCESS;
            //invoke_id = end_ind_ptr->facility.component[0] ->
                //returnResultLast->invokeID->value;

            if (end_ind_ptr->facility.component[0]->returnResultLast ->
                resultOpt == KAL_TRUE)
            {
                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    localValueOpt == KAL_TRUE)
                {
                    msg_ptr->op_code = (kal_uint8)end_ind_ptr->facility.component[0]
                       ->returnResultLast->localValue;
#ifdef __SAT__
                    msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                        end_ind_ptr->facility.component[0] ->
                        returnResultLast->parameterLen + 1;
                    msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                        facility.component[0]->returnResultLast->localValue;
                    if (msg_ptr->ss_return.size_of_additional_info > 1)
                    {
                        kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                    end_ind_ptr->facility.component[0] ->
                                    returnResultLast->parameter, msg_ptr ->
                                    ss_return.size_of_additional_info - 1);
                    }
#endif
                    switch (msg_ptr->op_code)
                    {
                    case SS_OP_INTERROGATESS:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(InterrogateSS_Res, inter_res)
                            if (csmss_mcd_unpack(MCD_INTERROGATESS_RES, (kal_uint32**)&(inter_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                            
                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (inter_res->ss_StatusOpt == KAL_TRUE){}
                            else if (inter_res->basicServiceGroupListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->forwardingFeatureListOpt ==
                                     KAL_TRUE){}
                            else if (inter_res->genericServiceInfoOpt ==
                                     KAL_TRUE)
                            {
                                /* Johnny: temp solution, improper interface in CSM <-> L4C <-> MMI */
                                ss_status = inter_res->genericServiceInfo->ss_Status->octs[0];
                                                            
                                if (inter_res->genericServiceInfo ->
                                    ccbs_FeatureListOpt == KAL_TRUE)
                                {
                                    ccbsl = inter_res->genericServiceInfo ->
                                        ccbs_FeatureList;
                                    msg_ptr->ccbs_count = (kal_uint8)ccbsl->listLen;

                                    for (bs_index = 0; bs_index < msg_ptr ->
                                        ccbs_count; bs_index++)
                                    {
                                        /* Johnny: temp solution, improper interface in CSM <-> L4C <-> MMI */
                                        msg_ptr->ccbs_list[bs_index].ss_status = ss_status; 
                                                                            
                                        ccbsf = ccbsl->list[bs_index];

                                        if (ccbsf->b_subscriberNumberOpt ==
                                            KAL_TRUE)
                                        {
                                            kal_mem_cpy(msg_ptr ->
                                                ccbs_list[bs_index].address.addr_bcd, ccbsf->b_subscriberNumber->octs, ccbsf->b_subscriberNumber->octsLen);
                                            msg_ptr ->
                                                ccbs_list[bs_index].address.addr_length = (kal_uint8)(ccbsf->b_subscriberNumber->octsLen);
                                        }

                                        if (ccbsf->b_subscriberSubaddressOpt
                                            == KAL_TRUE)
                                        {
                                            kal_mem_cpy(msg_ptr ->
                                                ccbs_list[bs_index].subaddress.addr_bcd, ccbsf->b_subscriberSubaddress->octs, ccbsf->b_subscriberSubaddress->octsLen);
                                            msg_ptr ->
                                                ccbs_list[bs_index].subaddress.addr_length = (kal_uint8)(ccbsf->b_subscriberSubaddress->octsLen);
                                        }

                                        if (ccbsf->basicServiceGroupOpt ==
                                            KAL_TRUE)
                                        {
                                            msg_ptr ->
                                                ccbs_list[bs_index].bs_code =
                                                csmss_convert_bs_code_l4((BasicServiceCode *)ccbsf
                                               ->basicServiceGroup);
                                        }
                                    }
                                    // end for
                                }
                                // end ccbsfOpt
                            }
                            // end inter_res

                            free_ctrl_buffer(inter_res);
                        }
                        else
                        {
                            msg_ptr->ccbs_list[bs_index].ss_status = 0x01;
                        }

                        break;

                    case SS_OP_ERASECCENTRY:

                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 0)
                        {
                            CSMSS_MCD_PUN_START(EraseCC_EntryRes, erasecc_res)
                            if (csmss_mcd_unpack(MCD_ERASECC_ENTRYRES, (kal_uint32**)&(erasecc_res), end_ind_ptr, NULL) == KAL_FALSE)
                            {
                                /* MAUI_01958830 handle mcd unpack error */
                                // prevent free again.
                                end_ind_ptr->facility.component[0] = NULL;
                                msg_ptr->return_code = L4_FAIL;
                                break;
                            }
                            
                            msg_ptr->ss_return.para_present = KAL_TRUE;

                            if (erasecc_res->ss_StatusOpt == KAL_TRUE)
                            {
                                msg_ptr->ccbs_list[bs_index].ss_status =
                                    erasecc_res->ss_Status->octs[0];
                            }

                            free_ctrl_buffer(erasecc_res);
                        }

                        break;

                    default:
                        break;
                    } /* end switch op code */
                }
            }
        }
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                 KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            msg_ptr->return_code = L4_FAIL;
            reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
        }

/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }
    } /* end if facilityP */

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CCBS_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_pussr_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ProcessUnstructuredSS-Request end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_pussr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_pussr_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_pussr_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_pussr_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_pussr_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->
        call_id].op_code;
    msg_ptr->ussd_dcs = csmss_g_ussd_dcs;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    kal_mem_set(msg_ptr->ussd_string, 0, MAX_DIGITS_USSD);
    csmss_init_ss_return(&(msg_ptr->ss_return));

#ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
#endif

    do {
        if (end_ind_ptr->facilityP == KAL_TRUE)
        {
            if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
            else if (end_ind_ptr->facility.component[0]->returnResultLastOpt ==
                     KAL_TRUE)
            {
                msg_ptr->return_code = L4_SUCCESS;

                #ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
                #endif

                //invoke_id = end_ind_ptr->facility.component[0] ->
                    //returnResultLast->invokeID->value;

                /* Johnny: if parameterLen <= 7, unpack with mcd will assert!
                1. parameterLen == 5: 02 01 3b [30 03 04 01 0f]
                2. parameterLen == 7: 02 01 3b [30 05 04 01 0f 04 00] */
                if (end_ind_ptr->facility.component[0]->returnResultLast->parameterLen <= 7)
                {
                    #ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
                    #endif

                    msg_ptr->ussd_dcs = 0;
                    //SMSAL_DEFAULT_DCS, SMSAL_8BIT_DCS, SMSAL_UCS2_DCS
                    /* MAUI_00598447 [SS][Revise] Use default string for parameterLen ==0 in Return Result */
                    if ((end_ind_ptr->facility.component[0]->returnResultLast->parameterLen == 0) ||
                        (end_ind_ptr->facility.component[0]->returnResultLast->parameterLen == 5) ||
                        (end_ind_ptr->facility.component[0]->returnResultLast->parameterLen == 7))
                    {
                        /* the notify string will be added and displayed by MMI */
                        msg_ptr->ussd_string_length = 0;
                    }
                    else if (is_test_sim(CSMSS_SIM_ID) == KAL_TRUE)
                    {
                        kal_mem_cpy(msg_ptr->ussd_string,
                                "processUSS-Data sent!", 21);
                        msg_ptr->ussd_string[21] = 0;
                        msg_ptr->ussd_string_length = 21;
                    }
                    else
                    {
                        msg_ptr->return_code = L4_FAIL;

                        msg_ptr->ss_return.cause_present = KAL_FALSE;
#ifdef __SAT__
                        msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
                        msg_ptr->ss_return.size_of_additional_info = 1;
                        msg_ptr->ss_return.additional_info[0] = 0;                    
#endif
                        msg_ptr->ussd_string_length = 0;                	
                    }
                }

                if (end_ind_ptr->facility.component[0]->returnResultLast ->
                    resultOpt == KAL_TRUE)
                {
                    if (end_ind_ptr->facility.component[0]->returnResultLast ->
                        localValueOpt == KAL_TRUE)
                    {
#ifdef __SAT__
                        msg_ptr->ss_return.size_of_additional_info = (kal_uint8)
                            end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen + 1;
                        msg_ptr->ss_return.additional_info[0] = (kal_uint8)end_ind_ptr ->
                            facility.component[0]->returnResultLast->localValue;
                        if (msg_ptr->ss_return.size_of_additional_info > 1)
                        {
                            kal_mem_cpy(msg_ptr->ss_return.additional_info + 1,
                                        end_ind_ptr->facility.component[0] ->
                                        returnResultLast->parameter, msg_ptr ->
                                        ss_return.size_of_additional_info - 1);
                        }
#endif
                        /* Johnny: if parameterLen <= 7, unpack with mcd will assert!
                        1. parameterLen == 5: 02 01 3b [30 03 04 01 0f]
                        2. parameterLen == 7: 02 01 3b [30 05 04 01 0f 04 00] */
                        if (end_ind_ptr->facility.component[0] ->
                            returnResultLast->parameterLen > 7)
                        {
                            /* althought parameterLen>7, the ussd-string len maybe 0 */ 
                            if (end_ind_ptr->facility.component[0]->returnResultLast->parameter[6] == 0)
                            {
                                /* the notify string will be added and displayed by MMI */
                                msg_ptr->ussd_string_length = 0;
                            }
                            else if (msg_ptr->op_code ==
                                     SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST)
                            {
                                CSMSS_MCD_PUN_START(USSD_Res, ussd_res)
                                if (csmss_mcd_unpack(MCD_USSD_RES, (kal_uint32**)&(ussd_res), end_ind_ptr, NULL) == KAL_FALSE)
                                {
                                    /* MAUI_01958830 handle mcd unpack error */
                                    // prevent free again.
                                    end_ind_ptr->facility.component[0] = NULL;
                                    msg_ptr->return_code = L4_FAIL;
                                    break;
                                }
                                
                                msg_ptr->ss_return.para_present = KAL_TRUE;

                                {
                                    kal_uint8 lang_type;
                                    smsal_dcs_enum alphabet_type;
                                    smsal_msg_class_enum mclass;
                                    kal_bool is_compress;
                                    kal_bool is_reserved;

                                    smsal_decode_cbsdcs(ussd_res ->
                                        ussd_DataCodingScheme->octs[0],
                                        &lang_type, &alphabet_type, &mclass,
                                        &is_compress, &is_reserved);

                                    kal_brief_trace(TRACE_INFO, CSMSS_D, alphabet_type);

                                    //msg_ptr->ussd_dcs = alphabet_type;
                                              msg_ptr->ussd_dcs = ussd_res->ussd_DataCodingScheme->octs[0];

                                    if ((is_compress == KAL_FALSE) &&
                                        (alphabet_type == SMSAL_DEFAULT_DCS))
                                    {
                                        csmss_gsm7_unpack((kal_uint8*)msg_ptr ->
                                              ussd_string, (kal_uint8*)ussd_res ->
                                              ussd_String->octs, (kal_uint16)
                                              ussd_res->ussd_String->octsLen, 0);
                  
                                        if (ussd_res->ussd_String->octsLen % 7 == 0
                                         && (ussd_res ->ussd_String->octs[ussd_res->ussd_String->octsLen - 1] & 0xfe) == 0x1A)                                    
                                        {
                                            msg_ptr->ussd_string_length = (kal_uint8) ussd_res->ussd_String->octsLen * 8 / 7 - 1;              
                                        }
                                        else
                                        {
                                        	msg_ptr->ussd_string_length = (kal_uint8) ussd_res->ussd_String->octsLen * 8 / 7;      
                                        }
                                    }
                                    else
                                    {
                                        kal_mem_cpy(msg_ptr->ussd_string,
                                            ussd_res->ussd_String->octs,
                                            ussd_res->ussd_String->octsLen);
                                            
                                        msg_ptr->ussd_string_length = (kal_uint8) ussd_res->ussd_String->octsLen;                                        
                                    }
                                }

                                free_ctrl_buffer(ussd_res);
                            }
                            else if (msg_ptr->op_code ==
                                     SS_OP_PROCESSUNSTRUCTUREDSS_DATA)
                            {
                                CSMSS_MCD_PUN_START(USSDIA5_String, ussd_ia5)
                                if (csmss_mcd_unpack(MCD_USSDIA5_STRING, (kal_uint32**)&(ussd_ia5), end_ind_ptr, NULL) == KAL_FALSE)
                                {
                                    /* MAUI_01958830 handle mcd unpack error */
                                    // prevent free again.
                                    end_ind_ptr->facility.component[0] = NULL;
                                    msg_ptr->return_code = L4_FAIL;
                                    break;
                                }
                                
                                msg_ptr->ss_return.para_present = KAL_TRUE;
                                msg_ptr->ussd_dcs = SMSAL_8BIT_DCS;

                                kal_mem_cpy(msg_ptr->ussd_string, ussd_ia5 ->
                                            octs, ussd_ia5->octsLen);

                                msg_ptr->ussd_string_length = (kal_uint8) ussd_ia5->octsLen;

                                free_ctrl_buffer(ussd_ia5);
                            }
                        }
                    }
                }
            }
            else if (end_ind_ptr->facility.component[0]->returnErrorOpt ==
                     KAL_TRUE)
            {
                #ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
                #endif

                msg_ptr->return_code = L4_FAIL;
                return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
#ifdef __SAT__
                msg_ptr->ss_return.res = 0x37; // USSD Return error
                msg_ptr->ussd_string_length = 0;
#endif 
            }
            else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
            {
                #ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
                #endif

                msg_ptr->return_code = L4_FAIL;
                reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
#ifdef __SAT__
                msg_ptr->ss_return.res = 0x37; // USSD Return error
                msg_ptr->ussd_string_length = 0;
#endif             
            }

    /*
            for (component_count = 0; component_count < end_ind_ptr ->
                 facility.num_of_components; component_count++)
            {
                if (end_ind_ptr->facility.component[component_count] != NULL)
                {
                    ciss_component_dealloc(end_ind_ptr ->
                                           facility.component[component_count]);
                }
            }
    */

            if (end_ind_ptr->facility.component[0] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[0]);
            }        
        } /* end if facilityP */
    } while (0);

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        if ((end_ind_ptr->cause.cause_value != CM_NORMAL_CALL_CLR) &&
            (end_ind_ptr->facilityP != KAL_TRUE))
        {
            msg_ptr->return_code = L4_FAIL;
            msg_ptr->ss_return.cause_present = KAL_TRUE;
            msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
#ifdef __SAT__
            msg_ptr->ss_return.res = 0x21; //Network currently unable to process command
            msg_ptr->ss_return.size_of_additional_info = 1;
            msg_ptr->ss_return.additional_info[0] = 0;
#endif
        }
    } /* end if causeP */

    kal_brief_trace(TRACE_INFO, CSMSS_DDD, csmss_g_change_phase_req, msg_ptr
             ->return_code, msg_ptr->ss_return.cause_value);

/* MAUI_01988887 */

    if ((msg_ptr->return_code == L4_FAIL) && (msg_ptr ->
        ss_return.cause_present == KAL_TRUE) && ((msg_ptr ->
        ss_return.cause_value == CM_SS_INVOKEPROBLEM_UNRECOGNIZEDOPERATION) ||
        (msg_ptr->ss_return.cause_value == CM_FACILITY_REJECT)) &&
        (csmss_g_change_phase_req == KAL_FALSE))
    {
        msg_ptr->change_phase_ind = KAL_TRUE;
        kal_mem_cpy(msg_ptr->ussd_string, csmss_g_ussd_string,
                    csmss_g_ussd_len);
        msg_ptr->ussd_string[csmss_g_ussd_len] = 0;
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_PUSSR_END_CNF, msg_ptr, NULL)
                       ;
    }
    else
    {
        /* if NW release complete only contain pd ti two byte */
        if ((end_ind_ptr->facilityP == KAL_FALSE) && (end_ind_ptr->causeP == KAL_FALSE))
            msg_ptr->return_code = L4_SUCCESS;
            
        msg_ptr->change_phase_ind = KAL_FALSE;
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_PUSSR_END_CNF, msg_ptr, NULL)
                       ;
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussr_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ussr end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_ussr_end_cnf_struct *msg_ptr = NULL;
    //kal_uint8 component_count;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussr_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_ussr_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ussr_end_cnf_struct), TD_CTRL);

    msg_ptr->return_code = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->causeP == KAL_TRUE && end_ind_ptr->cause.cause_value != CM_NORMAL_CALL_CLR)
    {
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
    } /* end if causeP */
    else
    {
        msg_ptr->ss_return.cause_present = KAL_FALSE;
    }

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }
    }

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSR_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussn_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ussn end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussn_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_ussn_end_cnf_struct *msg_ptr = NULL;
    //kal_uint8 component_count;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussn_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_ussn_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ussn_end_cnf_struct), TD_CTRL);

    msg_ptr->return_code = 0;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];
#endif// __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_init_ss_return(&(msg_ptr->ss_return));

    if (end_ind_ptr->causeP == KAL_TRUE && end_ind_ptr->cause.cause_value != CM_NORMAL_CALL_CLR)
    {
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_return.cause_present = KAL_TRUE;
        msg_ptr->ss_return.cause_value = end_ind_ptr->cause.cause_value;
    } /* end if causeP */
    else
    {
        msg_ptr->ss_return.cause_present = KAL_FALSE;
    }

    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
/*
        for (component_count = 0; component_count < end_ind_ptr ->
             facility.num_of_components; component_count++)
        {
            if (end_ind_ptr->facility.component[component_count] != NULL)
            {
                ciss_component_dealloc(end_ind_ptr ->
                                       facility.component[component_count]);
            }
        }
*/      

        if (end_ind_ptr->facility.component[0] != NULL)
        {
            ciss_component_dealloc(end_ind_ptr ->
                                   facility.component[0]);
        }        
    }

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSN_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}

#ifdef __SAT__
/*****************************************************************************
 * FUNCTION
 *  csmss_sim_change_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ussn end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_sim_change_cnf_hdlr(void)
{
    l4ccsm_ciss_sim_end_cnf_struct *msg_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_sim_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_sim_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_sim_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_src_id; //L4_LMI; // not L4_SAT
    msg_ptr->return_code = L4_CHANGE;

    msg_ptr->ss_return.res = 0x05; /* Johnny: SAT_CMD_PERFORMED_BUT_MODIFIED_CC_BY_SIM */
    msg_ptr->ss_return.size_of_additional_info = 0;
    //msg_ptr->ss_return.additional_info[0] = 0x00;

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_SIM_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_sim_fail_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  ussn end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_sim_fail_cnf_hdlr(void)
{
    l4ccsm_ciss_sim_end_cnf_struct *msg_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_sim_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_sim_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_sim_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_src_id; //L4_LMI; // not L4_SAT
    msg_ptr->return_code = L4_FAIL;

    msg_ptr->ss_return.res = 0x39;
    //Interaction with call control by SIM or MO short message control by SIM, permanent problem
    msg_ptr->ss_return.size_of_additional_info = 1;
    msg_ptr->ss_return.additional_info[0] = 0x01; //Action not allowed

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_SIM_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}

#endif

/*****************************************************************************
 * FUNCTION
 *  csmss_fac_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  facility indication message.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_fac_ind_hdlr(local_para_struct *local_para_ptr)
{
    mnss_fac_ind_struct *fac_ind_ptr = NULL;
    kal_bool result = KAL_FALSE;

    fac_ind_ptr = (mnss_fac_ind_struct*)local_para_ptr;

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    csmss_g_call_id = fac_ind_ptr->call_id;

    if (fac_ind_ptr->facility.num_of_components == 1)
    {
        switch (csmss_g_ciss_tab[fac_ind_ptr->call_id].msg_id)
        {
        case MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ:
            result = csmss_cb_fac_ind_hdlr(fac_ind_ptr);
            break;

            case MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ:
            {
                /* MAUI_00028765 [SS][Dubai FT] PUSSR may return USSN - Reply option coming on Balance information Screen */
                if (fac_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_UNSTRUCTUREDSS_NOTIFY)
                {
                    csmss_g_ciss_tab[fac_ind_ptr->call_id].ti = fac_ind_ptr->ti;
                    /* MAUI_01231961 SS][Revise] USSD wrong label in softkey - shall keep original op code */
                    //csmss_g_ciss_tab[fac_ind_ptr->call_id].op_code = SS_OP_UNSTRUCTUREDSS_NOTIFY;
                    result = csmss_ussn_fac_ind_hdlr(fac_ind_ptr);
                
                }
                else
                {
                    result = csmss_ussr_fac_ind_hdlr(fac_ind_ptr);
                }
            }
            break;
            
        case MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND:
        case MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND:
            {
            	/* Johnny:
            	   some NW will send USSN (FACILITY) to us in the USSR transaction:
            	   ex1.
            	   1. USSR_BEGIN_IND (REGISTER)
            	   2. USSR_FAC_RES (FACILITY)
            	   3. USSN_FAC_IND (FACILITY) 
            	   4. USSN_FAC_RES (FACILITY)
            	   5. USSN_END_CNF (RELEASE COMPLETE)
            	   in 3., we should update the correct csmss_g_ciss_tab[fac_ind_ptr->call_id].msg_id
            	   so that in 5., we can send the correct END_CNF to L4C
            	   ex2.
            	   1. USSR_BEGIN_IND (REGISTER)
            	   2. USSR_FAC_RES (FACILITY)
            	   3. USSN_FAC_IND (FACILITY) 
            	   4. USSN_FAC_RES (FACILITY)
            	   5. USSR_FAC_IND (FACILITY)            	   
            	   6. USSR_FAC_RES (FACILITY)
            	   7. USSR_END_CNF (RELEASE COMPLETE) */
                if (fac_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_UNSTRUCTUREDSS_REQUEST)
                {
                    result = csmss_ussr_fac_ind_hdlr(fac_ind_ptr);      
                    csmss_g_ciss_tab[fac_ind_ptr->call_id].msg_id = MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND;      
                }
                else if (fac_ind_ptr->facility.component[0]->invoke ->localValue == SS_OP_UNSTRUCTUREDSS_NOTIFY)
                {
                    result = csmss_ussn_fac_ind_hdlr(fac_ind_ptr);
                    csmss_g_ciss_tab[fac_ind_ptr->call_id].msg_id = MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND;      
                }
                else
                {
                    if (csmss_g_ciss_tab[fac_ind_ptr->call_id].msg_id == MSG_ID_L4CCSM_CISS_USSR_BEGIN_IND)
                    {
                        result = csmss_ussr_fac_ind_hdlr(fac_ind_ptr);                 	
                    }
                    else
                    {
                        result = csmss_ussn_fac_ind_hdlr(fac_ind_ptr);             	
                    }
                }
            }
            break;

#ifdef __AGPS_CONTROL_PLANE__
        //case MSG_ID_L4CCSM_CISS_AERP_FAC_IND:
        case MSG_ID_L4CCSM_CISS_AERP_REQ:
        case MSG_ID_L4CCSM_CISS_AERP_FAC_RES:
        //case MSG_ID_L4CCSM_CISS_MOLR_FAC_IND:                
        case MSG_ID_L4CCSM_CISS_MOLR_REQ:
        case MSG_ID_L4CCSM_CISS_MOLR_FAC_RES:
            {
                csmss_g_ciss_tab[fac_ind_ptr->call_id].ti = fac_ind_ptr->ti;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif        
                result = csmss_lcs_fac_ind_entry_func(fac_ind_ptr->call_id,
                            csmss_g_ciss_tab[fac_ind_ptr->call_id].op_code,
                            fac_ind_ptr->facility.component[0]->returnResultLast->parameter,
                            (fac_ind_ptr->facility.component[0]->returnResultLast->parameterLen)*8);
            }
            break;
#endif

        default:
            break;
        }
    }

    //   csmss_g_ciss_tab[ fac_ind_ptr->call_id ].msg_id  = INVALID_MSG_TYPE;
    csmss_g_ciss_tab[fac_ind_ptr->call_id].state = CSMSS_WAIT_FOR_SUB_STATE;

    //   csmss_free_call_id(fac_ind_ptr->call_id);

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cb_fac_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  call barring facility indication message.
 *
 * PARAMETERS
 *  fac_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cb_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr)
{
    kal_int8 call_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cb_fac_ind_hdlr);

    call_id = fac_ind_ptr->call_id;
    csmss_g_ciss_tab[call_id].ti = fac_ind_ptr->ti;

    /* check for if call_id is active */
    if (fac_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE)
    {
        csmss_g_ciss_tab[call_id].invoke_id = fac_ind_ptr ->
            facility.component[0]->invoke->invokeID->value;

        if ((fac_ind_ptr->facility.component[0]->invoke->parameterOpt ==
            KAL_TRUE) && (fac_ind_ptr->facility.component[0]->invoke ->
            parameterLen > 0))
        {
            CSMSS_MCD_PUN_START(GuidanceInfo, g_info)
            if (csmss_mcd_unpack(MCD_GUIDANCEINFO, (kal_uint32**)&(g_info), NULL, fac_ind_ptr) == KAL_FALSE)
            {
                /* MAUI_01958830 handle mcd unpack error */
                l4ccsm_ciss_cb_end_cnf_struct *msg_ptr = NULL;

                // prevent free again.
                mnss_end_req_struct *end_req_ptr = NULL;
                end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                               (mnss_end_req_struct), TD_CTRL);

                kal_mem_set(&(end_req_ptr->cause), 0, sizeof(mnss_cause_struct));

                end_req_ptr->ref_count = 1;
                end_req_ptr->call_id = csmss_g_call_id;
                //   end_req_ptr->ti = csmss_g_ciss_tab[ end_req_ptr->call_id ].ti;
                end_req_ptr->causeP = KAL_TRUE;
                end_req_ptr->cause.cause_value = CM_SS_ERR_UNEXPECTEDDATAVALUE-CM_SS_ERR_START;//36
                end_req_ptr->cause.diagnostics_length = 0;
                end_req_ptr->facilityP = KAL_FALSE;

                csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

                fac_ind_ptr->facility.component[0] = NULL;
                msg_ptr = (l4ccsm_ciss_cb_end_cnf_struct*)construct_local_para(sizeof
                           (l4ccsm_ciss_cb_end_cnf_struct), TD_CTRL);

                msg_ptr->src_id = csmss_g_ciss_tab[call_id].src_id;
                msg_ptr->return_code = L4_FAIL;
                msg_ptr->op_code = csmss_g_ciss_tab[call_id].op_code;
                msg_ptr->ss_code = csmss_g_ciss_tab[call_id].ss_code;
                msg_ptr->bs_count = 0;
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
	         msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
                kal_mem_set(msg_ptr->barring_list, 0, 13 *sizeof(barring_list_struct));
                csmss_init_ss_return(&(msg_ptr->ss_return));

                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CB_END_CNF, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].state = CSMSS_NULL_STATE;
                csmss_free_call_id(call_id);

                return KAL_FALSE;
            }
            
            csmss_cb_fac_res_hdlr(call_id, g_info);

            free_ctrl_buffer(g_info);
        }
    }

/*
    for (component_count = 0; component_count < fac_ind_ptr ->
         facility.num_of_components; component_count++)
    {
        if (fac_ind_ptr->facility.component[component_count] != NULL)
        {
            ciss_component_dealloc(fac_ind_ptr ->
                                   facility.component[component_count]);
        }
    }
*/

    if (fac_ind_ptr->facility.component[0] != NULL)
    {
        ciss_component_dealloc(fac_ind_ptr ->
                               facility.component[0]);
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussr_fac_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  UnstructuredSS-Request facility indication message.
 *
 * PARAMETERS
 *  fac_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussr_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr)
{
    l4ccsm_ciss_ussr_fac_ind_struct *msg_ptr = NULL;
    kal_int8 call_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussr_fac_ind_hdlr);

    msg_ptr = (l4ccsm_ciss_ussr_fac_ind_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ussr_fac_ind_struct), TD_CTRL);

    call_id = fac_ind_ptr->call_id;

    if (call_id != csmss_g_call_id)
    {
        return KAL_FALSE;
    }

    csmss_g_ciss_tab[call_id].ti = fac_ind_ptr->ti;

    /* check for if call_id is active */
    if (fac_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE)
    {
        csmss_g_ciss_tab[call_id].invoke_id = fac_ind_ptr ->
            facility.component[0]->invoke->invokeID->value;

        if ((fac_ind_ptr->facility.component[0]->invoke->parameterOpt ==
            KAL_TRUE) && (fac_ind_ptr->facility.component[0]->invoke ->
            parameterLen > 0))
        {
            CSMSS_MCD_PUN_START(USSD_Arg, ussd_arg)
            if (csmss_mcd_unpack(MCD_USSD_ARG, (kal_uint32**)&(ussd_arg), NULL, fac_ind_ptr) == KAL_FALSE)
            {
                /* MAUI_01958830 handle mcd unpack error */
                l4ccsm_ciss_ussr_end_cnf_struct *msg_ptr = NULL;

                mnss_end_req_struct *end_req_ptr = NULL;
                end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                               (mnss_end_req_struct), TD_CTRL);

                kal_mem_set(&(end_req_ptr->cause), 0, sizeof(mnss_cause_struct));

                end_req_ptr->ref_count = 1;
                end_req_ptr->call_id = csmss_g_call_id;
                //   end_req_ptr->ti = csmss_g_ciss_tab[ end_req_ptr->call_id ].ti;
                end_req_ptr->causeP = KAL_TRUE;
                end_req_ptr->cause.cause_value = CM_SS_ERR_UNEXPECTEDDATAVALUE-CM_SS_ERR_START;//36
                end_req_ptr->cause.diagnostics_length = 0;
                end_req_ptr->facilityP = KAL_FALSE;

                csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);


                msg_ptr = (l4ccsm_ciss_ussr_end_cnf_struct*)construct_local_para(sizeof
                           (l4ccsm_ciss_ussr_end_cnf_struct), TD_CTRL);

                msg_ptr->return_code = 0;
                csmss_init_ss_return(&(msg_ptr->ss_return));
                msg_ptr->ss_return.cause_present = KAL_FALSE;
                msg_ptr->src_id = csmss_g_ciss_tab[call_id].src_id;

                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSR_END_CNF, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].state = CSMSS_NULL_STATE;
                csmss_free_call_id(call_id);

                return KAL_FALSE;
            }
            
            {
                kal_uint8 lang_type;
                smsal_dcs_enum alphabet_type;
                smsal_msg_class_enum mclass;
                kal_bool is_compress;
                kal_bool is_reserved;

                /*  MAUI_00457855 [SS][Fixbug][Shenyang FT] handle null ussd_String for ussr_fac_ind
                    if ussd len == 0, smsal_decode_cbsdcs will assert!
                    9b 3a 0f a1 0d 02 01 02 02 01 3c 30 05 04 01 0f [04 00]
                */
                if ((kal_uint16)ussd_arg->ussd_String->octsLen == 0)
                {
                        kal_mem_set(msg_ptr->ussd_string, 0, sizeof(msg_ptr ->ussd_string));
                        msg_ptr->ussd_string_length = 0;
                        msg_ptr->ussd_dcs = ussd_arg->ussd_DataCodingScheme->octs[0];
                }
                else
                {
                    smsal_decode_cbsdcs(ussd_arg->ussd_DataCodingScheme ->
                                        octs[0], &lang_type, &alphabet_type,
                                        &mclass, &is_compress, &is_reserved);

                    //msg_ptr->ussd_dcs = alphabet_type;
                                              msg_ptr->ussd_dcs = ussd_arg->ussd_DataCodingScheme->octs[0];

                    if ((is_compress == KAL_FALSE) && (alphabet_type ==
                        SMSAL_DEFAULT_DCS))
                    {
                        csmss_gsm7_unpack((kal_uint8*)msg_ptr->ussd_string,
                                          (kal_uint8*)ussd_arg->ussd_String ->
                                          octs, (kal_uint16)ussd_arg->ussd_String
                                         ->octsLen, 0);

                        if (ussd_arg->ussd_String->octsLen % 7 == 0
                         && (ussd_arg ->ussd_String->octs[ussd_arg->ussd_String->octsLen - 1] & 0xfe) == 0x1A)                    
                        {
                            msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String->octsLen * 8 / 7 - 1;
                        }
                        else
                        {
                        	msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String->octsLen * 8 / 7;
                        }
                    }
                    else
                    {
                        kal_mem_set(msg_ptr->ussd_string, 0, sizeof(msg_ptr ->
                                    ussd_string));
                        kal_mem_cpy(msg_ptr->ussd_string, ussd_arg->ussd_String
                                   ->octs, ussd_arg->ussd_String->octsLen);
                                   
                        msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String->octsLen;                               
                    }
                }
            }

            /* keep in context */
            kal_mem_cpy(csmss_g_ussd_string, ussd_arg->ussd_String ->
                        octs, ussd_arg->ussd_String->octsLen);
            csmss_g_ussd_len = (kal_uint8)ussd_arg->ussd_String ->
                                        octsLen;
            csmss_g_ussd_dcs = ussd_arg->ussd_DataCodingScheme ->
                octs[0];

            free_ctrl_buffer(ussd_arg);
        }
    }

/*
    for (component_count = 0; component_count < fac_ind_ptr ->
         facility.num_of_components; component_count++)
    {
        if (fac_ind_ptr->facility.component[component_count] != NULL)
        {
            ciss_component_dealloc(fac_ind_ptr ->
                                   facility.component[component_count]);
        }
    }
*/

    if (fac_ind_ptr->facility.component[0] != NULL)
    {
        ciss_component_dealloc(fac_ind_ptr ->
                               facility.component[0]);
    }

    msg_ptr->src_id = csmss_g_ciss_tab[fac_ind_ptr->call_id].src_id;

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSR_FAC_IND, msg_ptr, NULL);
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussn_fac_ind_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  UnstructuredSS-Notify facility indication message.
 *
 * PARAMETERS
 *  fac_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussn_fac_ind_hdlr(mnss_fac_ind_struct *fac_ind_ptr)
{
    l4ccsm_ciss_ussn_fac_ind_struct *msg_ptr = NULL;
    kal_int8 call_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussn_fac_ind_hdlr);

    msg_ptr = (l4ccsm_ciss_ussr_fac_ind_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ussr_fac_ind_struct), TD_CTRL);

    call_id = fac_ind_ptr->call_id;

    /* check for if call_id is active */
    if (fac_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE)
    {
        csmss_g_ciss_tab[call_id].invoke_id = fac_ind_ptr ->
            facility.component[0]->invoke->invokeID->value;

        if ((fac_ind_ptr->facility.component[0]->invoke->parameterOpt ==
            KAL_TRUE) && (fac_ind_ptr->facility.component[0]->invoke ->
            parameterLen > 0))
        {
            CSMSS_MCD_PUN_START(USSD_Arg, ussd_arg)
            if (csmss_mcd_unpack(MCD_USSD_ARG, (kal_uint32**)&(ussd_arg), NULL, fac_ind_ptr) == KAL_FALSE)
            {
                /* MAUI_01958830 handle mcd unpack error */
                l4ccsm_ciss_ussn_end_cnf_struct *msg_ptr = NULL;

                mnss_end_req_struct *end_req_ptr = NULL;
                end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                               (mnss_end_req_struct), TD_CTRL);

                kal_mem_set(&(end_req_ptr->cause), 0, sizeof(mnss_cause_struct));

                end_req_ptr->ref_count = 1;
                end_req_ptr->call_id = csmss_g_call_id;
                //   end_req_ptr->ti = csmss_g_ciss_tab[ end_req_ptr->call_id ].ti;
                end_req_ptr->causeP = KAL_TRUE;
                end_req_ptr->cause.cause_value = CM_SS_ERR_UNEXPECTEDDATAVALUE-CM_SS_ERR_START;//36
                end_req_ptr->cause.diagnostics_length = 0;
                end_req_ptr->facilityP = KAL_FALSE;

                csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

                //kal_uint8 component_count;
                msg_ptr = (l4ccsm_ciss_ussn_end_cnf_struct*)construct_local_para(sizeof
                           (l4ccsm_ciss_ussn_end_cnf_struct), TD_CTRL);

                msg_ptr->return_code = 0;
                csmss_init_ss_return(&(msg_ptr->ss_return));
                msg_ptr->ss_return.cause_present = KAL_FALSE;
                msg_ptr->src_id = csmss_g_ciss_tab[call_id].src_id;

                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSN_END_CNF, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].state = CSMSS_NULL_STATE;
                csmss_free_call_id(call_id);

                return KAL_FALSE;
            }

            {
                kal_uint8 lang_type;
                smsal_dcs_enum alphabet_type;
                smsal_msg_class_enum mclass;
                kal_bool is_compress;
                kal_bool is_reserved;

                smsal_decode_cbsdcs(ussd_arg->ussd_DataCodingScheme ->
                                    octs[0], &lang_type, &alphabet_type,
                                    &mclass, &is_compress, &is_reserved);

                //msg_ptr->ussd_dcs = alphabet_type;
                                          msg_ptr->ussd_dcs = ussd_arg->ussd_DataCodingScheme->octs[0];

                if ((is_compress == KAL_FALSE) && (alphabet_type ==
                    SMSAL_DEFAULT_DCS))
                {
                    csmss_gsm7_unpack((kal_uint8*)msg_ptr->ussd_string,
                                      (kal_uint8*)ussd_arg->ussd_String ->
                                      octs, (kal_uint16)ussd_arg->ussd_String
                                     ->octsLen, 0);

                    if (ussd_arg->ussd_String->octsLen % 7 == 0
                     && (ussd_arg ->ussd_String->octs[ussd_arg->ussd_String->octsLen - 1] & 0xfe) == 0x1A)
                    {
                        msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String ->
                                        octsLen * 8 / 7 - 1;
                    }
                    else
                    {
                        msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String ->
                                        octsLen * 8 / 7;                    	
                    }
                }
                else
                {
                    kal_mem_cpy(msg_ptr->ussd_string, ussd_arg->ussd_String
                               ->octs, ussd_arg->ussd_String->octsLen);
                               
                    msg_ptr->ussd_string_length = (kal_uint8) ussd_arg->ussd_String ->
                                        octsLen;                               
                }
            }

            /* keep in context */
            kal_mem_cpy(csmss_g_ussd_string, ussd_arg->ussd_String ->
                        octs, ussd_arg->ussd_String->octsLen);
            csmss_g_ussd_len = (kal_uint8)ussd_arg->ussd_String ->
                                        octsLen;
            csmss_g_ussd_dcs = ussd_arg->ussd_DataCodingScheme ->
                octs[0];

            free_ctrl_buffer(ussd_arg);
        }
    }

/*
    for (component_count = 0; component_count < fac_ind_ptr ->
         facility.num_of_components; component_count++)
    {
        if (fac_ind_ptr->facility.component[component_count] != NULL)
        {
            ciss_component_dealloc(fac_ind_ptr ->
                                   facility.component[component_count]);
        }
    }
*/
	
    if (fac_ind_ptr->facility.component[0] != NULL)
    {
        ciss_component_dealloc(fac_ind_ptr ->
                               facility.component[0]);
    }

    msg_ptr->src_id = csmss_g_ciss_tab[fac_ind_ptr->call_id].src_id;

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSN_FAC_IND, msg_ptr, NULL);
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;

#ifndef __USSD_AUTO_REJECT__
    /* if not support auto reject feature, csmss return the ussn by itself */
    /* if support auto reject feature, L4 will return this message */
    csmss_ussn_fac_res_hdlr(NULL);
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_cb_fac_res_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  call barring facility response message.
 *
 * PARAMETERS
 *  call_id  IN
 *  g_info IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_cb_fac_res_hdlr(kal_int8 call_id, GuidanceInfo *g_info)
{
    mnss_fac_req_struct *fac_req_ptr = NULL;
    //kal_int32                 comp_param_len;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_cb_fac_res_hdlr);

    fac_req_ptr = (mnss_fac_req_struct*)construct_local_para(sizeof
                   (mnss_fac_req_struct), TD_CTRL);

    kal_mem_set(&(fac_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    fac_req_ptr->facility.num_of_components = 1;

    if ((g_info->value == 0) || (g_info->value == 1) || (g_info->value ==
        2))

    // GuidanceInfo_ENTERPW, GuidanceInfo_ENTERNEWPW, GuidanceInfo_ENTERNEWPW_AGAIN,
    {
        CSMSS_ALLOC_COMP(fac_req_ptr->facility.component[0])
                         CSMSS_ALLOC_COMPSTRUCT(fac_req_ptr ->
                         facility.component[0]->returnResultLast,
                         ReturnResult)CSMSS_FILL_INVOKEID(fac_req_ptr ->
                         facility.component[0]->returnResultLast,
                         csmss_g_ciss_tab[call_id].invoke_id)
                         CSMSS_FILL_RESULTOPT(fac_req_ptr ->
                         facility.component[0]->returnResultLast, KAL_TRUE)
                         CSMSS_FILL_OPCODE(fac_req_ptr->facility.component[0]
                        ->returnResultLast, SS_OP_GETPASSWORD)

        if (1)
        {
            CSMSS_ALLOC_PW(pw_res)

            if (g_info->value == 0)
            //GuidanceInfo_ENTERPW
            {
                kal_mem_cpy(pw_res->octs, csmss_g_old_pw, 4);
            }
            else if (g_info->value == 1)
            //GuidanceInfo_ENTERNEWPW
            {
                kal_mem_cpy(pw_res->octs, csmss_g_new_pw1, 4);
            }
            else if (g_info->value == 2)
            //GuidanceInfo_ENTERNEWPW_AGAIN
            {
                kal_mem_cpy(pw_res->octs, csmss_g_new_pw2, 4);
            }

            csmss_pack(MCD_PASSWORD, (kal_uint8*)pw_res, fac_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_PASSWORD, fac_req_ptr->facility.component[0]->returnResultLast, pw_res)
            CSMSS_DEALLOC_PW(pw_res)
        }

        //CSMSS_FILL_PARA(fac_req_ptr->facility.component[0]->returnResultLast)
    }

    fac_req_ptr->call_id = call_id;
    fac_req_ptr->ti = csmss_g_ciss_tab[call_id].ti;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_FAC_REQ, fac_req_ptr, NULL);

    //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
    //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
    //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
    //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
    //Therefore, we have to check the index before to clear context.
    //The same problem will also happen for facility response procedure.
    if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    }
    else{
        kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
    }
    // csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussr_fac_res_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  UnstructuredSS-Request facility response message.
 *
 * PARAMETERS
 *  local_para_ptr IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussr_fac_res_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_ussr_fac_res_struct *msg_ptr = NULL;
    mnss_fac_req_struct *fac_req_ptr = NULL;

    //kal_int32                         comp_param_len;
    kal_uint8 ussd_len = 0;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussr_fac_res_hdlr);

    msg_ptr = (l4ccsm_ciss_ussr_fac_res_struct*)local_para_ptr;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    if (msg_ptr->ussd_string_length == 0)
    {
#if 0
/* under construction !*/
/* under construction !*/
#else
        ussd_len = 0;
#endif
    }
    else if(msg_ptr->ussd_string_length <= MAX_DIGITS_USSD)
    {
        ussd_len = msg_ptr->ussd_string_length;
    }
    else
    {
        //ussd_len = MAX_DIGITS_USSD;
        return KAL_TRUE;
    }

    fac_req_ptr = (mnss_fac_req_struct*)construct_local_para(sizeof
                   (mnss_fac_req_struct), TD_CTRL);

    kal_mem_set(&(fac_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    fac_req_ptr->facility.num_of_components = 1;
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);
#else
    csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE);
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
    csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;

    CSMSS_ALLOC_COMP(fac_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(fac_req_ptr ->
                     facility.component[0]->returnResultLast, ReturnResult)
                     CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]
                    ->returnResultLast,
                     csmss_g_ciss_tab[csmss_g_call_id].invoke_id)
    if (ussd_len != 0)
    {
        CSMSS_FILL_RESULTOPT(fac_req_ptr->facility.component[0]->returnResultLast, KAL_TRUE)
        CSMSS_FILL_OPCODE(fac_req_ptr->facility.component[0]->returnResultLast, SS_OP_UNSTRUCTUREDSS_REQUEST)
    }

    csmss_g_ussd_dcs = msg_ptr->ussd_dcs;

    if (ussd_len != 0)
    {
        CSMSS_MCD_VAR_START(USSD_Res, ussd_res)CSMSS_ALLOC_USSD_DCS(ussd_res->ussd_DataCodingScheme)
        {
            kal_uint8 lang_type;
            smsal_dcs_enum alphabet_type;
            smsal_msg_class_enum mclass;
            kal_bool is_compress;
            kal_bool is_reserved;

            smsal_decode_cbsdcs(csmss_g_ussd_dcs, &lang_type,
                                &alphabet_type, &mclass, &is_compress,
                                &is_reserved);

#ifdef __USSD_AUTO_REJECT__
            if (alphabet_type == SMSAL_RESERVED_DCS)
            {
                alphabet_type = SMSAL_DEFAULT_DCS;
            }
#endif

            if ((is_compress == KAL_FALSE) && (alphabet_type ==
                SMSAL_DEFAULT_DCS))
            {
                CSMSS_ALLOC_USSD_STRING(ussd_res->ussd_String, (kal_uint16)
                                        (ussd_len - ussd_len / 8))

                csmss_gsm7_pack((kal_uint8*)ussd_res->ussd_String->octs,
                                msg_ptr->ussd_string, ussd_len, 0);
            }
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
#endif
            else
            {
                CSMSS_ALLOC_USSD_STRING(ussd_res->ussd_String, (kal_uint16)
                                        ussd_len)

                kal_mem_cpy(ussd_res->ussd_String->octs, msg_ptr ->
                            ussd_string, ussd_len);
            }
        }

        csmss_pack(MCD_USSD_RES, (kal_uint8*)ussd_res, fac_req_ptr ->
                   facility.component[0]);

        //CSMSS_PACK(MCD_USSD_RES, fac_req_ptr->facility.component[0]->returnResultLast, ussd_res)
        CSMSS_DEALLOC_USSD_DCS(ussd_res->ussd_DataCodingScheme)
                               CSMSS_DEALLOC_USSD_STRING(ussd_res ->
                               ussd_String)CSMSS_MCD_VAR_END(ussd_res)
    }

    //CSMSS_FILL_PARA(fac_req_ptr->facility.component[0]->returnResultLast)

    fac_req_ptr->call_id = csmss_g_call_id;
    fac_req_ptr->ti = csmss_g_ciss_tab[fac_req_ptr->call_id].ti;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_FAC_REQ, fac_req_ptr, NULL);

    //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
    //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
    //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
    //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
    //Therefore, we have to check the index before to clear context.
    //The same problem will also happen for facility response procedure.
    if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[csmss_g_call_id].state =
        CSMSS_WAIT_FOR_NW_STATE;
    }
    else{
        kal_brief_trace(TRACE_INFO, CSMSS_D,csmss_g_call_id);
    }
    // csmss_g_ciss_tab[csmss_g_call_id].state =
    //     CSMSS_WAIT_FOR_NW_STATE;
    //   csmss_free_call_id(csmss_g_call_id);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_ussn_fac_res_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  UnstructuredSS-Notify facility response message.
 *
 * PARAMETERS
 *  local_para_ptr IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ussn_fac_res_hdlr(local_para_struct *local_para_ptr)
{
    mnss_fac_req_struct *fac_req_ptr = NULL;
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    l4ccsm_ciss_ussn_fac_res_struct *msg_ptr = NULL;
    msg_ptr = (l4ccsm_ciss_ussn_fac_res_struct*)local_para_ptr;
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__


    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ussn_fac_res_hdlr);

    fac_req_ptr = (mnss_fac_req_struct*)construct_local_para(sizeof
                   (mnss_fac_req_struct), TD_CTRL);

    kal_mem_set(&(fac_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    fac_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(fac_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(fac_req_ptr ->
                     facility.component[0]->returnResultLast, ReturnResult)
                     CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]
                    ->returnResultLast,
                     csmss_g_ciss_tab[csmss_g_call_id].invoke_id)CSMSS_FILL_RESULTOPT(fac_req_ptr->facility.component[0]->returnResultLast, KAL_FALSE)
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);
    //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
    csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;
#else
    csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE);
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__

    fac_req_ptr->call_id = csmss_g_call_id;
    fac_req_ptr->ti = csmss_g_ciss_tab[fac_req_ptr->call_id].ti;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_FAC_REQ, fac_req_ptr, NULL);

    //   Component_dealloc (&(fac_req_ptr->facility.component[0]));

    //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
    //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
    //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
    //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
    //Therefore, we have to check the index before to clear context.
    //The same problem will also happen for facility response procedure.
    if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[csmss_g_call_id].state =
        CSMSS_WAIT_FOR_NW_STATE;
    }
    else{
        kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
    }
    // csmss_g_ciss_tab[csmss_g_call_id].state =
    //    CSMSS_WAIT_FOR_NW_STATE;
    //   csmss_free_call_id(csmss_g_call_id);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_end_res_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  end response message.
 *
 * PARAMETERS
 *  local_para_ptr IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_end_res_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_end_res_struct *msg_ptr = NULL;
    mnss_end_req_struct *end_req_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_end_res_hdlr);
	
    //MAUI_02731384, [WW FT][MT6276][Germany-Dusseldorf][Tmobile-Eplus][Static Random]Fatal Error(c05,f3e00710) - CISS
    //check SIM consistancy for single context
    if((csmss_cur_mod-MOD_CSM) != (ciss_cur_mod-MOD_CISS)){
		return KAL_FALSE;
    }
	
    msg_ptr = (l4ccsm_ciss_end_res_struct*)local_para_ptr;

    end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                   (mnss_end_req_struct), TD_CTRL);

    kal_mem_set(&(end_req_ptr->cause), 0, sizeof(mnss_cause_struct));

#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);
#else
    csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE); 
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
    csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;

    end_req_ptr->ref_count = 1;
    end_req_ptr->call_id = csmss_g_call_id;
    //   end_req_ptr->ti = csmss_g_ciss_tab[ end_req_ptr->call_id ].ti;
    end_req_ptr->causeP = KAL_TRUE;
    end_req_ptr->cause.cause_value = msg_ptr->cause_value;
    end_req_ptr->cause.diagnostics_length = 0;
    end_req_ptr->facilityP = KAL_FALSE;

    /* MAUI_01722785 add cf number interface */
    csmss_g_cf_number_length = 0;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

    #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
    if (csmss_g_query_act_req == KAL_TRUE)
    {
        csmss_g_query_act_req = KAL_FALSE;
        free_local_para((local_para_struct *)csmss_g_msg_ptr);
        csmss_g_msg_ptr = NULL;
    }
    #endif
    #ifdef __SS_ERASURE_BEFORE_REGISTER__
    if (csmss_g_erase_reg_req == KAL_TRUE)
    {
        csmss_g_erase_reg_req = KAL_FALSE;
    }
    #endif

    //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
    //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
    //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
    //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
    //Therefore, we have to check the index before to clear context.
    //The same problem will also happen for facility response procedure.
    if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[csmss_g_call_id].state = CSMSS_NULL_STATE;
        csmss_free_call_id(csmss_g_call_id);
    }
    else{
        kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
    }

    return KAL_TRUE;
}


#if defined (__CPHS__) || defined (__REL4__)
/***********************************************************************
 * FUNCTION
 *	csmss_send_nvram_read_req
 * DESCRIPTION
 *  This procedure is used to send request to NVRAM to get the NVRAM_EF_CFU_FLAG_LID
 *  for Call Divert Icon display. This function only used for csmss_sim_file_info_cnf_hdlr()
 *  in the csmss startup procedure.
 * PARAMETERS
 *  	void
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 ************************************************************************/
void csmss_send_nvram_read_req(void)
{
    nvram_read_req_struct *nvram_read_req_ptr = NULL;
    nvram_read_req_ptr = (nvram_read_req_struct*)construct_local_para(sizeof
                          (nvram_read_req_struct), TD_UL);

    nvram_read_req_ptr->file_idx = NVRAM_EF_CFU_FLAG_LID;
    nvram_read_req_ptr->access_id = L4_CPHS;
    #ifdef __GEMINI_3G_SWITCH__
    nvram_read_req_ptr->para = (kal_uint16)l4c_gemini_get_actual_sim_id(csmss_cur_mod-MOD_CSM)+1;
    #else
    nvram_read_req_ptr->para = csmss_cur_mod-MOD_CSM+1;
    #endif
    csmss_send_ilm(MOD_NVRAM, MSG_ID_NVRAM_READ_REQ, nvram_read_req_ptr, NULL);
}

/***********************************************************************
 * FUNCTION
 *	csmss_send_nvram_read_essp_req
 * DESCRIPTION
 *  This procedure is used to send request to NVRAM to get the NVRAM_EF_CSM_ESSP_LID
 * PARAMETERS
 *  	void
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 ************************************************************************/
void csmss_send_nvram_read_essp_req(void)
{
    nvram_read_req_struct *nvram_read_req_ptr = NULL;
    nvram_read_req_ptr = (nvram_read_req_struct*)construct_local_para(sizeof
                          (nvram_read_req_struct), TD_UL);

    nvram_read_req_ptr->file_idx = NVRAM_EF_CSM_ESSP_LID;
    nvram_read_req_ptr->para = 1;
    csmss_send_ilm(MOD_NVRAM, MSG_ID_NVRAM_READ_REQ, nvram_read_req_ptr, NULL);
}

/*************************************************************************
 * FUNCTION
 *	csmss_send_nvram_write_req
 * DESCRIPTION
 *	This procedure is used only for saving the CFU_FLAG to NVRAM
 * PARAMETERS
 *	void
 * RESULTS
 *	void
 * GLOBALS AFFECTED
 *
 **************************************************************************/
void csmss_send_nvram_write_req(void)
{
    nvram_write_req_struct *nvram_write_req_ptr = NULL;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_length = 0;

    nvram_write_req_ptr = (nvram_write_req_struct*)construct_local_para(sizeof
                           (nvram_write_req_struct), TD_CTRL);
    nvram_write_req_ptr->file_idx = NVRAM_EF_CFU_FLAG_LID;
    #ifdef __GEMINI_3G_SWITCH__
    nvram_write_req_ptr->para = (kal_uint16)l4c_gemini_get_actual_sim_id(csmss_cur_mod-MOD_CSM)+1;
    #else
    nvram_write_req_ptr->para = (kal_uint16)(csmss_cur_mod-MOD_CSM+1);
    #endif
    nvram_write_req_ptr->access_id = L4_CPHS;

    /* Construct peer buffer */
    peer_buf_ptr = construct_peer_buff(sizeof(csmss_ptr_g->cfu_flag), 0, 0,
                                       TD_CTRL);
    pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);

    /* Now copy the data to write into peer buffer */
    kal_mem_cpy((void*)pdu_ptr, (void*)(csmss_ptr_g->cfu_flag), pdu_length);

    csmss_send_ilm(MOD_NVRAM, MSG_ID_NVRAM_WRITE_REQ, nvram_write_req_ptr,
                   peer_buf_ptr);

}

/*************************************************************************
 * FUNCTION
 *	csmss_send_nvram_write_essp_req
 * DESCRIPTION
 *	This procedure is used only for saving the CFU query setting to NVRAM
 * PARAMETERS
 *	void
 * RESULTS
 *	void
 * GLOBALS AFFECTED
 *
 **************************************************************************/
void csmss_send_nvram_write_essp_req(void)
{
    nvram_write_req_struct *nvram_write_req_ptr = NULL;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_length = 0;

    nvram_write_req_ptr = (nvram_write_req_struct*)construct_local_para(sizeof
                           (nvram_write_req_struct), TD_CTRL);
    nvram_write_req_ptr->file_idx = NVRAM_EF_CSM_ESSP_LID;

    nvram_write_req_ptr->para = 1;

    /* Construct peer buffer */
    peer_buf_ptr = construct_peer_buff(1, 0, 0, TD_CTRL);
    pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
    pdu_ptr[0] = (kal_uint8) csmss_essp;

    csmss_send_ilm(MOD_NVRAM, MSG_ID_NVRAM_WRITE_REQ, nvram_write_req_ptr,
                   peer_buf_ptr);

}

/************************************************************************
 * FUNCTION
 * 	csmss_nvram_read_cnf_hdlr
 * DESCRIPTION
 *  This procedure is used ONLY to process NVRAM_EF_CFU_FLAG_LID for Call Divert Icon display.
 *  This CFU Flag in NVRAM only used for FILE_CF_FLAG_IDX does not exist or corrupt
 * PARAMETERS
 * 	ilm_ptr		IN	
 * RETURNS
 *  	kal_bool
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_bool csmss_nvram_read_cnf_hdlr(ilm_struct *ilm_ptr)
{
    nvram_read_cnf_struct *nvram_read_cnf_ptr = NULL;
    kal_uint16 nvram_read_cnf_len = 0;
    kal_uint8 *pdu_ptr = NULL;
    kal_bool csmss_is_sim_replaced = KAL_FALSE;

    nvram_read_cnf_ptr = (nvram_read_cnf_struct*)get_local_para_ptr(ilm_ptr ->
                          local_para_ptr, &nvram_read_cnf_len);

    if (nvram_read_cnf_ptr->file_idx == NVRAM_EF_CSM_ESSP_LID)
    {
            if (nvram_read_cnf_ptr->result == NVRAM_IO_ERRNO_OK)
            {
                pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &nvram_read_cnf_len);
                if (pdu_ptr[0]<3)
                {
                    csmss_essp=pdu_ptr[0];
                }                                     
            }
    }
    else if (nvram_read_cnf_ptr->file_idx == NVRAM_EF_CFU_FLAG_LID)
    {
        /* still need to check is_sim_replaced, since sim may be error */
        csmss_is_sim_replaced = csmss_is_smu_sim_replaced(CSMSS_SIM_ID);
        if (csmss_is_sim_replaced == KAL_FALSE)
        {
            if (nvram_read_cnf_ptr->result == NVRAM_IO_ERRNO_OK)
            {
                pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr,
                                      &nvram_read_cnf_len);

            #if defined (__REL4__)
                if (csmss_ptr_g->is_cfu_read != KAL_TRUE)
            #endif
                {
                    if ((pdu_ptr[0] == 0x55) || (pdu_ptr[0] == 0x5a) || (pdu_ptr[0]
                        == 0xa5) || (pdu_ptr[0] == 0xaa))
                    {
                        kal_mem_cpy((void*)(csmss_ptr_g->cfu_flag), (void*)
                                    pdu_ptr, sizeof(csmss_ptr_g->cfu_flag));
                    }
                    else
                    {
                        csmss_ptr_g->cfu_flag[0] = 0x55;
                        // restore to default! need to query NW?
                        csmss_ptr_g->cfu_flag[1] = 0x55;
                        csmss_send_nvram_write_req();
                    }
                }
            #if defined (__REL4__)
                else
                {
                    /* alreay update line1, use NVM update the line2 */
                    if ((pdu_ptr[0] == 0xa5) || (pdu_ptr[0] == 0xaa))
                    {
                        csmss_ptr_g->cfu_flag[0] &= 0x0f;
                        csmss_ptr_g->cfu_flag[0] |= 0xa0;
                    }
                }
            #endif

                csmss_send_l4c_startup_cnf(L4_SUCCESS);
                csmss_ptr_g->is_cfu_read = KAL_TRUE;
            }
            else
            {
                csmss_send_l4c_startup_cnf(L4_FAIL);
            }
        }
        else
        /* restore to default value while sim is replaced */
        {
            csmss_ptr_g->cfu_flag[0] = 0x55;
            // restore to default! need to query NW?
            csmss_ptr_g->cfu_flag[1] = 0x55;
            csmss_ptr_g->is_cfu_read = KAL_TRUE;
            csmss_send_nvram_write_req();
            csmss_send_l4c_startup_cnf(L4_SUCCESS);
        }

        /* we display/clear CFU icon according to CSMSS context after CSMSS startup whether SIM is replaced or not,
           if SIM is replaced, we will interrogate CFU after camp on,
           if there is no sim or blocked sim inserted, shall not indicate it to upper layer */
        /* MAUI_01720570 if smu return SMU_SIM_NO_IMSI, need not report cfu to upper layer */
        if ((KAL_TRUE == csmss_ptr_g->is_cfu_read) && (KAL_FALSE == csmss_is_smu_sim_no_imsi(CSMSS_SIM_ID)))
        {
            if (csmss_ptr_g->cfu_flag[0] == 0xaa)
            {
                csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE1_2);            
            }
            else if ((csmss_ptr_g->cfu_flag[0] &0x0f) == 0x0a)
            {
        	    csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE1);
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE2);        	    
            }
            else if ((csmss_ptr_g->cfu_flag[0] &0xf0) == 0xa0)
            {
                csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE2);            
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1);                
            }
            else
            {
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1_2);            
            }
        }

        if (csmss_ptr_g->is_camp_on == KAL_TRUE)
        {
            csmss_cphs_start_hdlr();
        }

    }

    return KAL_TRUE;
}

/*************************************************************************
 * FUNCTION
 *       csmss_nvram_write_cnf_hdlr
 * DESCRIPTION
 *  This procedure is used ONLY to process the writing NVRAM file
 *  NVRAM_EF_CFU_FLAG_LID but do nothing.
 *
 * PARAMETERS
 *       ilm_ptr    IN
 * RETURNS
 *       kal_bool
 * GLOBALS AFFECTED
 *
 **************************************************************************/
kal_bool csmss_nvram_write_cnf_hdlr(ilm_struct *ilm_ptr)
{
    nvram_write_cnf_struct *nvram_write_cnf_ptr = NULL;
    kal_uint16 nvram_write_cnf_len = 0;

    nvram_write_cnf_ptr = (nvram_write_cnf_struct*)get_local_para_ptr(ilm_ptr
                          ->local_para_ptr, &nvram_write_cnf_len);
    if (nvram_write_cnf_ptr->file_idx == NVRAM_EF_CFU_FLAG_LID)
    {
        return KAL_TRUE;
    }
    return KAL_TRUE;
}

/*************************************************************************
 * FUNCTION
 *	csmss_sim_file_info_cnf_hdlr
 * DESCRIPTION
 *  This procedure is used to process SIM file info confirmation. If success,
 *  continuely read next EF needed to be read.
 *
 * PARAMETERS
 *	local_para_ptr 	IN	first variable, used as input
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_bool csmss_sim_file_info_cnf_hdlr(local_para_struct *local_para_ptr)
{
    sim_file_info_cnf_struct *sim_file_info_cnf_ptr;

    sim_file_info_cnf_ptr = (sim_file_info_cnf_struct*)local_para_ptr;

#if defined (__CPHS__)
    if (sim_file_info_cnf_ptr->file_idx == FILE_CF_FLAG_IDX)
    {
        if (sim_file_info_cnf_ptr->result == SIM_CMD_SUCCESS)
        {
            kal_uint16 file_size;

            file_size = sim_file_info_cnf_ptr->length;

            if ((file_size > 0) && (file_size < 3))
            {
                csmss_ptr_g->cfu_flag_len = file_size;
                csmss_send_sim_read_req(FILE_CF_FLAG_IDX, file_size);
            }
            else
            {
                #if defined (__REL4__)
                    //[ALPS00350319]
                    csmss_send_sim_file_info_req(FILE_CFIS_IDX, SIM_REC_SIZE);
                #else
                    //If SIM file not exist then read nvram
                    csmss_send_nvram_read_req();
                #endif
            }
        }
        else
        {
            #if defined (__REL4__)
                //[ALPS00350319]
                csmss_send_sim_file_info_req(FILE_CFIS_IDX, SIM_REC_SIZE);
            #else
                //If SIM file not exist then read nvram
                csmss_send_nvram_read_req();
            #endif
        }
    }
#endif

#if defined (__REL4__)
    if (sim_file_info_cnf_ptr->file_idx == FILE_CFIS_IDX)
    {
        if (sim_file_info_cnf_ptr->result == SIM_CMD_SUCCESS)
        {
            kal_uint16 rec_length;
            
            //rec_length = ((kal_uint8) sim_file_info_cnf_ptr->file_size)/((kal_uint8) sim_file_info_cnf_ptr->num_of_rec);
            //[ALPS00350319]
            rec_length = (kal_uint8) sim_file_info_cnf_ptr->length;

            if ((rec_length>1) && (rec_length< 17))
            {
                csmss_ptr_g->cfis_record_len = rec_length;
                csmss_send_sim_read_req(FILE_CFIS_IDX, rec_length);
            }
            else
            {
                //If SIM file not exist then read nvram
                csmss_send_nvram_read_req();
            }
        }
        else
        {
            //If SIM file not exist then read nvram
            csmss_send_nvram_read_req();
        }
    }

#endif
    return KAL_TRUE;
} /* end of csmss_sim_file_info_cnf_hdlr */

/*************************************************************************
 * FUNCTION
 *	csmss_sim_read_cnf_hdlr
 * DESCRIPTION
 *   This procedure is used to process SIM read confirmation. If success,
 *   continuely read next EF needed to be read.
 *
 * PARAMETERS
 *	local_para_ptr 	IN	first variable, used as input
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_bool csmss_sim_read_cnf_hdlr(local_para_struct *local_para_ptr)
{
    sim_read_cnf_struct *sim_read_cnf_ptr;
    kal_uint16 file_size;
    kal_bool csmss_is_sim_replaced = KAL_FALSE;

    sim_read_cnf_ptr = (sim_read_cnf_struct*)local_para_ptr;

#if defined (__CPHS__)
    if (sim_read_cnf_ptr->file_idx == FILE_CF_FLAG_IDX)
    {
        csmss_is_sim_replaced = csmss_is_smu_sim_replaced(CSMSS_SIM_ID);

        csmss_ptr_g->cfu_flag[0] = 0x55;

        if (sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
        {
            file_size = sim_read_cnf_ptr->length;

            if (file_size == csmss_ptr_g->cfu_flag_len)
            {
                if ((sim_read_cnf_ptr->data[0] == 0x55) || (sim_read_cnf_ptr
                   ->data[0] == 0x5a) || (sim_read_cnf_ptr->data[0] == 0xa5)
                    || (sim_read_cnf_ptr->data[0] == 0xaa))
                {
                    csmss_ptr_g->cfu_flag[0] = sim_read_cnf_ptr->data[0];
                }
#if !defined (__Rel45_OVER_CPHS__)
                else
                {
                    kal_uint8 data_ptr[1];
                    data_ptr[0] = 0x55;
                    csmss_ptr_g->cfu_flag[0] = 0x55;
                    csmss_send_sim_write_req(FILE_CF_FLAG_IDX, 1, data_ptr);
                }
                csmss_send_l4c_startup_cnf(L4_SUCCESS);

                if (csmss_is_sim_replaced == KAL_TRUE)
                {
                    csmss_send_nvram_write_req();
                }

                csmss_ptr_g->is_cfu_read = KAL_TRUE;
            }
            else
            {
                csmss_send_l4c_startup_cnf(L4_FAIL);
            }
        }
        else
        {
            csmss_send_l4c_startup_cnf(L4_FAIL);
        }
#else //!defined (__Rel45_OVER_CPHS__)
            } //if (file_size == csmss_context_g.cfu_flag_len)
        } //if (sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)

        //[ALPS00350319]
        csmss_send_sim_file_info_req(FILE_CFIS_IDX, SIM_REC_SIZE);

#endif //!defined (__Rel45_OVER_CPHS__)
    } //if (sim_read_cnf_ptr->file_idx == FILE_CF_FLAG_IDX)
#endif //(__CPHS__)

#if defined (__REL4__)
    if (sim_read_cnf_ptr->file_idx == FILE_CFIS_IDX)
    {
        csmss_is_sim_replaced = csmss_is_smu_sim_replaced(CSMSS_SIM_ID);
        if (sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
        {
            file_size = sim_read_cnf_ptr->length;

            if (file_size == csmss_ptr_g->cfis_record_len)
            {
                kal_uint8 data_ptr[1];

                // keee msp number
                csmss_ptr_g->msp_num[0] = sim_read_cnf_ptr->data[0];
                // check if voice is on
                if ((sim_read_cnf_ptr->data[1] & 0x01) == 0x01)
                {
                    csmss_ptr_g->cfu_flag[0] &= 0xf0;
                    csmss_ptr_g->cfu_flag[0] |= 0x0a;
                    data_ptr[0] = csmss_ptr_g->cfu_flag[0];

                    #if defined (__CPHS__)
                        // update cphs file, keep the line2 unchanged
                        csmss_send_sim_write_req(FILE_CF_FLAG_IDX, 1, data_ptr);
                    #endif
                }
                else
                {
                    data_ptr[0] = 0x55;
                    csmss_ptr_g->cfu_flag[0] = 0x55;
                    #if defined (__CPHS__)
                        // update cphs file
                        csmss_send_sim_write_req(FILE_CF_FLAG_IDX, 1, data_ptr);
                    #endif
                }

                csmss_ptr_g->is_cfu_read = KAL_TRUE;
                
                if (csmss_is_sim_replaced == KAL_TRUE)
                {
                    csmss_send_l4c_startup_cnf(L4_SUCCESS);
                    csmss_send_nvram_write_req();
                }
                else
                {
                    /* read nvram, since line2 can't be stored in FILE_CFIS_IDX */
                    csmss_send_nvram_read_req();
                    return KAL_TRUE;                
                }
            }
            else
            {
                csmss_send_l4c_startup_cnf(L4_FAIL);
            }
        }
        else
        {
            csmss_send_l4c_startup_cnf(L4_FAIL);
        }
    }
#endif


#if (defined (__CPHS__) && !defined (__Rel45_OVER_CPHS__)) || defined (__REL4__)
        /* 
           we display/clear CFU icon according to CSMSS context after CSMSS startup whether SIM is replaced or not,
           if SIM is replaced, we will interrogate CFU after camp on */
        if (KAL_TRUE == csmss_ptr_g->is_cfu_read)
        {
            if (csmss_ptr_g->cfu_flag[0] == 0xaa)
            {
                csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE1_2);            
            }
            else if ((csmss_ptr_g->cfu_flag[0] &0x0f) == 0x0a)
            {
                csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE1);
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE2);
            }
            else if ((csmss_ptr_g->cfu_flag[0] &0xf0) == 0xa0)
            {
                csmss_display_cfu_ind(SHOW_CFU, CSMCC_ALS_LINE2);
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1);
            }
            else
            {
                csmss_display_cfu_ind(HIDE_CFU, CSMCC_ALS_LINE1_2);
            }
        }

        if (csmss_ptr_g->is_camp_on == KAL_TRUE)
        {
            csmss_cphs_start_hdlr();
        } //johnnyjohnny: move out

#endif
    return KAL_TRUE;
} /* end of csmss_sim_read_cnf_hdlr */

/*************************************************************************
 * FUNCTION
 *	csmss_sim_write_cnf_hdlr
 * DESCRIPTION
 *   This procedure is used to process SIM write confirmation. If success,
 *   continuely read next EF needed to be read.
 *
 * PARAMETERS
 *	local_para_ptr 	IN	first variable, used as input
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_bool csmss_sim_write_cnf_hdlr(local_para_struct *local_para_ptr)
{
    sim_write_cnf_struct *sim_write_cnf_ptr;

    sim_write_cnf_ptr = (sim_write_cnf_struct*)local_para_ptr;

    switch (sim_write_cnf_ptr->file_idx)
    {
    case FILE_CF_FLAG_IDX:
        break;

    default:
        break;
    }

    return KAL_TRUE;
} /* end of csmss_sim_write_cnf_hdlr */


void 
csmss_update_cfu_req(
    cfu_flag_nvram_action_enum  action, 
    kal_uint8                   line_id
#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
    , 
    l4_addr_bcd_struct          *p_line1_ftn
#endif
)
{
    //kal_uint8 line_id = csmcc_get_line_id();

    if (action == CLEAR_CFU)
    {
        if (CSMCC_ALS_LINE1 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0xf0;
            csmss_ptr_g->cfu_flag[0] |= 0x05;
        }
        else if (CSMCC_ALS_LINE2 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0x0f;
            csmss_ptr_g->cfu_flag[0] |= 0x50;
        }
        else if (CSMCC_ALS_LINE1_2 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0x00;
            csmss_ptr_g->cfu_flag[0] |= 0x55;
        }
    }
    else if (action == SET_CFU)
    {
        if (CSMCC_ALS_LINE1 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0xf0;
            csmss_ptr_g->cfu_flag[0] |= 0x0a;
        }
        else if (CSMCC_ALS_LINE2 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0x0f;
            csmss_ptr_g->cfu_flag[0] |= 0xa0;
        }
        else if (CSMCC_ALS_LINE1_2 == line_id)
        {
            csmss_ptr_g->cfu_flag[0] &= 0x00;
            csmss_ptr_g->cfu_flag[0] |= 0xaa;
        }        
    }

#if defined (__CPHS__)
    csmss_send_sim_write_req(FILE_CF_FLAG_IDX, 1, csmss_ptr_g->cfu_flag);
#endif

    csmss_send_nvram_write_req();

#if defined (__REL4__)
    if ((CSMCC_ALS_LINE1 == line_id) ||
        (CSMCC_ALS_LINE1_2 == line_id))
    {
        //           EF_CFIS's Record format:
        // data_ptr  Byte
        // [ 0]       1      MSP number
        // [ 1]       2      CFU indicator status
        // [ 2]       3      Length of BCD number (TON_NPI + Dialling Number)   (0xFF, if unused)
        // [ 3]       4      TON_NPI                                            (0xFF, if unused)
        // [ 4~13]    5~14   Dialling Number                                    (Padding with 0xFF)
        // [14]      15      Extended Capability Configuration Parameters       (0xFF, if unused)
        // [15]      16      Extension 7 Record Identifier                      (0xFF, if unused)
        kal_uint8 data_ptr[16];
        kal_mem_set(data_ptr, 0xFF, 16);

        // MSP number:
        data_ptr[0] = csmss_ptr_g->msp_num[0];

        // CFU indicator status:    b8  b7  b6  b5  b4  b3  b2  b1
        //                          0   0   0   Bea SMS Dat Fax Tel
        if (action == CLEAR_CFU) {
            data_ptr[1] = 0x00;     // TODO: update only the bit of Telephony
        }
        else {
            data_ptr[1] = 0x01;
        }

#ifdef __CFU_FTN_IN_EFCFIS__
        if( (custom_cfu_store_ftn_in_efcfis() == KAL_TRUE) ||
            ((query_ps_conf_test_mode() == PS_CONF_TEST_OPERATOR) &&
            (query_ps_conf_test_profile_setting() == OPERATOR_TEST_ATNT)))
        {
            if ((p_line1_ftn != NULL) && (p_line1_ftn->addr_length > 0))
            {
                // Length of BCD number:  (Max=11, ref 3GPP TS 31.102 clause 4.4.2.3 (EF_ADN))
                data_ptr[2] = (p_line1_ftn->addr_length < 11) ? p_line1_ftn->addr_length : 11;

                // TON_NPI & Dialling Number:   (Max 11 bytes)
                kal_mem_cpy(&data_ptr[3], p_line1_ftn->addr_bcd, data_ptr[2]);
                                    // TODO: store the rest of the FTN into EF_ext7
            }
        }
#endif // __CFU_FTN_IN_EFCFIS__

        csmss_send_sim_write_req(FILE_CFIS_IDX, 16, data_ptr);
    }
#endif // __REL4__

    return;
}



void csmss_display_cfu_ind(cfu_flag_mmi_action_enum action, kal_uint8 line_id)
{
    if (line_id == CSMCC_ALS_LINE1 || line_id == CSMCC_ALS_LINE1_2)
    {
        l4ccsm_cphs_display_cfu_ind_struct *msg_ptr;

        msg_ptr = (l4ccsm_cphs_display_cfu_ind_struct*)construct_local_para(sizeof
                   (l4ccsm_cphs_display_cfu_ind_struct), TD_CTRL);

        msg_ptr->src_id = 0; //LMMI_SRC
        msg_ptr->action = action; // HIDE_CFU:0, SHOW_CFU:1
        msg_ptr->line_num = CSMCC_ALS_LINE1; //csmcc_get_line_id(); // LINE_1: 0, LINE_2: 1

        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CPHS_DISPLAY_CFU_IND, msg_ptr, NULL);
    }
    
    if (line_id == CSMCC_ALS_LINE2 || line_id == CSMCC_ALS_LINE1_2)
    {
        l4ccsm_cphs_display_cfu_ind_struct *msg_ptr;

        msg_ptr = (l4ccsm_cphs_display_cfu_ind_struct*)construct_local_para(sizeof
                   (l4ccsm_cphs_display_cfu_ind_struct), TD_CTRL);

        msg_ptr->src_id = 0; //LMMI_SRC
        msg_ptr->action = action; // HIDE_CFU:0, SHOW_CFU:1
        msg_ptr->line_num = CSMCC_ALS_LINE2; //csmcc_get_line_id(); // LINE_1: 0, LINE_2: 1

        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CPHS_DISPLAY_CFU_IND, msg_ptr, NULL);    
    }
    
    return ;
}

#endif /* __CPHS__ || __REL4__ */



#ifdef _TST_CSMSS_
kal_bool csmss_tst_inject_hdlr(local_para_struct *local_para_ptr)
{
    tst_module_string_inject_struct *tst_ptr = NULL;

    tst_ptr = (tst_module_string_inject_struct*)local_para_ptr;

    switch (tst_ptr->index)
    {
        /* generate "waiting message ind"
         *
         * len  : length of ussd string, please greater than 0 and less than 9
         *
         */
    case 0:
        // MT-SS simulation
        {
            l4ccsm_ciss_ussn_begin_ind_struct *msg_ptr = NULL;
            kal_uint8 len = (kal_uint8)(tst_ptr->string[0] - '0');

            msg_ptr = (l4ccsm_ciss_ussn_begin_ind_struct*)construct_local_para
                       (sizeof(l4ccsm_ciss_ussn_begin_ind_struct), TD_CTRL);

            msg_ptr->src_id = 1;

            msg_ptr->ussd_dcs = 0;

            kal_mem_cpy(msg_ptr->ussd_string, &(tst_ptr->string[2]), len);
            msg_ptr->ussd_string[len] = 0;

            csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_USSN_BEGIN_IND, msg_ptr,
                           NULL);
        }
        break;
    default:
        break;
    }

    return KAL_TRUE;
}

#endif


