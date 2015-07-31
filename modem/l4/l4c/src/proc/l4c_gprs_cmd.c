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
 * L4C_GPRS_CMD.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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

#define L4C_GPRS_CMD_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_buff_alloc.h"
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "kal_non_specific_general_types.h"
#include "kal_trace.h"
//#include "ps_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "string.h"
#include "drv_comm.h"

#include "md_sap.h"
#include "l4_msgid.h"
#include "ppp_msgid.h"
#ifdef __TCPIP__
#include "abm_msgid.h"
#endif
#include "ratdm_msgid.h"
#include "nvram_msgid.h"

#ifdef __MOD_TCM__
#include "flc2_config.h"
#include "flc2_ent_functions.h"
#if 0
/* under construction !*/
#else
#include "ratdm_shaq_application_api.h"
#endif /* 0, mtk02285, 20120131, change for R8 RATDM */

//mtk01616_070707
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"

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

//#include "l4c_aux_struct.h"
//#include "l3_inc_enums.h"

//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_enums.h"
//#include "l3_inc_local.h"

//#include "l4crac_enums.h"
//#include "mmi_l3_enums.h"
#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "custom_nvram_editor_data_item.h"
#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
#include "l4c2tcm_struct.h"
#include "l4c2tcm_func.h"
#include "l4c2ppp_struct.h"
//#include "tcm2sm_struct.h"
//#include "ppp2tcm_struct.h"
//#include "gprs_flc_kal.h"
//#include "flc_api.h"    //erica FLC
#ifdef __MOD_CSM__
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
#endif /* __MOD_CSM__ */
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
#endif

#include "l4c2phb_struct.h" //MAUI_02956467
#include "rmmi_rspfmttr.h"
#include "l4c_utility.h"
//#include "l4c_nw_cmd.h"
//#ifdef __TCPIP__
#include "l4c2abm_struct.h"
//#endif /* __TCPIP__ */

#include "dcl.h"
//#include "flc_tunable_para.h"
#include "l4_trc.h"     //mtk00714 w0634

//mtk01616_070707
#include "rmmi_utility.h"
//#include "l4a.h"
#include "lmmi_rsp.h"

#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "rmmi_sio.h"

#if defined(__MOBILE_BROADBAND_PROVISION_CONTEXT__) || defined(__MEDIATEK_SMART_QOS__)
#include "nvram_struct.h"
#endif

#include "rmmi_rsp.h"

#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
#define MAX_PDU_LENGTH    1502 // 0x00, 0x21, then 1500 Bytes IP packet 
#else // __PPP_TYPE_PDP_DIALUP_SUPPORT__
#define MAX_PDU_LENGTH    1500
#endif // ~__PPP_TYPE_PDP_DIALUP_SUPPORT__


extern UART_PORT PS_UART_PORT;
extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);

//MAUI_02956467, temp api, should be replaced by MMI custom implementation ---
extern kal_bool custom_phb_xmgnt_approve_fdn(
    kal_uint8* tel_number, /* BCD coding, including type */
    kal_uint8 num_length,
    kal_uint8 sim_id,
    kal_uint8 oper, /* l4c_operation_type_enum */
    kal_uint16* cause);

flc2_pool_id_enum l4c_ps_get_flc_pool_id_for_act_test(kal_uint8 src_id, kal_uint8 cid)
{
    flc2_pool_id_enum pid = FLC2_INVALID_POOL_ID;

    if (src_id == LMMI_SRC)
    {
        if ((cid != TCM_EM_PDP_CID_1) && (cid != TCM_EM_PDP_CID_2))
        {
            return FLC2_INVALID_POOL_ID;
        }
    }
#if !defined(__TCPIP__) && !defined(__MULTIPLE_NDIS_SUPPORT__) && !defined(__IPV6__) //mtk02285, 20120416, IPV6_2_PDP
    else
    {
        if (cid > TCM_AT_PDP_CID)
        {
            return FLC2_INVALID_POOL_ID;
        }
    }
#endif

    switch (cid)
    {
#ifdef __TCPIP__
    case TCM_AT_PDP_CID:
        pid = FLC2_POOL_ID_SPDU_UL_1;
        break;
    case TCM_EM_PDP_CID_1:
        pid = FLC2_POOL_ID_SPDU_UL_2;
        break;
    case TCM_EM_PDP_CID_2:
        pid = FLC2_POOL_ID_SPDU_UL_3;
        break;
#else
#ifdef __MULTIPLE_NDIS_SUPPORT__
    case TCM_AT_PDP_CID:
        pid = FLC2_POOL_ID_NPDU_UL;
        break;
    case TCM_EM_PDP_CID_1:
        pid = FLC2_POOL_ID_NPDU_UL_01;
        break;
    case TCM_EM_PDP_CID_2:
        pid = FLC2_POOL_ID_NPDU_UL_02;
        break;
#elif defined(__PS_DIALUP__) || defined(__USB_TETHERING__)
#ifdef __IPV6__ //mtk02285, 20120416, IPV6_2_PDP
    case TCM_AT_PDP_CID:
        pid = FLC2_POOL_ID_NPDU_UL;
        break;

    case TCM_EM_PDP_CID_1:
        pid = FLC2_POOL_ID_NPDU_DL;
        break;
#else
    case TCM_AT_PDP_CID:
    case TCM_EM_PDP_CID_1:
        pid = FLC2_POOL_ID_NPDU_UL;
        break;
#endif
#endif
#endif /* __TCPIP__ */
    default:
        pid = FLC2_INVALID_POOL_ID;
        break;
    } /* end of switch */
    return pid;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_act_test_req
 * DESCRIPTION
 *  This function is called when MSG_ID_MMI_PS_ACT_TEST_REQ received.
 *  send MSG_ID_TCM_PDP_ACTIVATE_REQ/MSG_ID_TCM_PDP_DEACTIVATE_REQ
 *  to TCM to activate/deactivate PDP context.
 * PARAMETERS
 *  src_id      [IN]
 *  opcode      [IN]
 *  cid         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_act_test_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 cid)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    kal_uint32 allocated_size_for_ul = 0;
    flc2_pool_id_enum flc2_pool_id = FLC2_INVALID_POOL_ID;

    if (is_tcm_cmd_conflict(src_id, CGACT_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    if (opcode == TCM_PDP_ACTIVATE)
    {
        tcm_pdp_activate_req_struct *param_ptr;

        flc2_pool_id = l4c_ps_get_flc_pool_id_for_act_test(src_id, cid);

        if (flc2_pool_id != FLC2_INVALID_POOL_ID)
        {
            flc2_grow_pool(flc2_pool_id, 1660, &allocated_size_for_ul);
        }
        else
        {
            return KAL_FALSE;
        }

        /* erica: new EM */
        if (l4ctcm_get_pdp_type(cid) == SECONDARY_CONTEXT)
        {
            l4c_tft_struct tft;

            tft.context_id = cid;
            tft.tot_pf_count = 1;
            tft.pf[0].pfi = 1;
            tft.pf[0].epi = 1;

            tft.pf[0].src_addr_sb_net_mask_len = 8;
            tft.pf[0].src_addr_sb_net_mask[0] = 235;
            tft.pf[0].src_addr_sb_net_mask[1] = 235;
            tft.pf[0].src_addr_sb_net_mask[2] = 235;
            tft.pf[0].src_addr_sb_net_mask[3] = 235;
            tft.pf[0].src_addr_sb_net_mask[4] = 225;
            tft.pf[0].src_addr_sb_net_mask[5] = 225;
            tft.pf[0].src_addr_sb_net_mask[6] = 225;
            tft.pf[0].src_addr_sb_net_mask[7] = 225;

            tft.pf[0].prot_number_present = KAL_TRUE;
            tft.pf[0].prot_number_next_hdr = 17;
            tft.pf[0].dst_port_len = 2;
            tft.pf[0].dst_port_range[0] = 200;
            tft.pf[0].dst_port_range[1] = 300;
            tft.pf[0].src_port_len = 2;
            tft.pf[0].src_port_range[0] = 300;
            tft.pf[0].src_port_range[1] = 400;

            tft.pf[0].ipsec_spi_present = KAL_FALSE;
            tft.pf[0].tos_len = 0;
            tft.pf[0].tos_traffic_class_mask[0] = 0;
            tft.pf[0].tos_traffic_class_mask[1] = 0;
            tft.pf[0].flow_label_present = KAL_FALSE;

            l4ctcm_set_tft_info(&tft);
        }
        /* ~erica: new EM */

        param_ptr = (tcm_pdp_activate_req_struct*)
                    construct_local_para((kal_uint16) sizeof(tcm_pdp_activate_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->context_id = cid;
        //param_ptr->app_src = TCM_MMI_APP; // __HSPA_DATA_PATH_OPT__
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, param_ptr);
    }
    else
    {
        tcm_pdp_deactivate_req_struct *param_ptr;
        param_ptr = (tcm_pdp_deactivate_req_struct*)
                    construct_local_para((kal_uint16) sizeof(tcm_pdp_deactivate_req_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->context_id = cid;
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_DEACTIVATE_REQ, param_ptr);
    }
    l4c_set_user_action(L4C_TCM, src_id, CGACT_TEST);
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif /* __EXT_PDP_CONTEXT_ON__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_act_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_ACT_REQ and +CGACT.
 *  send MSG_ID_TCM_PDP_ACTIVATE_REQ/MSG_ID_TCM_PDP_DEACTIVATE_REQ
 *  to TCM to activate/deactivate PDP context.
 * PARAMETERS
 *  src_id      [IN]
 *  opcode      [IN]
 *  cid         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_uint16 l4c_ps_exe_act_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 cid)
{
#ifndef __EXT_PDP_CONTEXT_ON__
    return L4C_OPTION_CONFLICT;           // Reject Cause: #ifndef __EXT_PDP_CONTEXT_ON__
#else
    if (is_tcm_cmd_conflict(src_id, CGACT_EXE) == KAL_TRUE)
    {
#ifdef __SP_RIL_SUPPORT__
        if ((L4C_PTR->ext_pdp_activating[cid] == KAL_TRUE) && (opcode == TCM_PDP_DEACTIVATE))
        {
            /* Use "AT+CGACT=0,<cid>" to abort "AT+CGACT=1,<cid>", let it pass */
            /*
             * mtk02126
             * It's possible use one cmd channel to abort the pending CGACT in another cmd channel.
             * CGACT may take a long time to get response.
             * If we can't cancel it, the following cmd can't be processed.
             * That will cause serious problem such as ATA can't be processed.
             */
            kal_trace(TRACE_WARNING, WARNING_ABORT_PDP_ACTIVATION_WITH_CID, cid);
            /* 20091030 implementation note:                                                   */
            /*   UE does not check contiunous AT+CGACT=0,1 now                                 */
            /*   and TE shall not issue another AT+CGACT=0,1 before the last one is responded  */
        }
        else
#endif //mtk02285, DUMA00206863, abort_cgact_activation
        {
            return L4C_CMD_CONFLICT;   // Reject Cause: is_tcm_cmd_conflict, but NOT abort_cgact_activation
        }
    }

    if (opcode == TCM_PDP_ACTIVATE)
    {
        tcm_pdp_activate_req_struct *param_ptr;

        if ( (L4C_PTR->cc_current_action[src_id] == ABM_ACT_APP)
            || (L4C_PTR->cc_current_action[src_id] == ABM_ACT)
            || (L4C_PTR->cc_current_action[src_id] == ABM_ACT_ECC)
            || (L4C_PTR->cc_current_action[src_id] == ATD_APP)
            || (L4C_PTR->cc_current_action[src_id] == ATD_EXE)
            || (L4C_PTR->cc_current_action[src_id] == ATD_ECC)
            || (L4C_PTR->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT)
            || (L4C_PTR->cc_current_action[src_id] == ATD_ECC_CHANGE_RAT_ABORT)
            || (L4C_PTR->cc_current_action[src_id] == SAT_ATD_EXE)
            || (L4C_PTR->cc_current_action[src_id] == ATA_EXE)
            || (L4C_PTR->cc_current_action[src_id] == ATH_EXE)
            || (L4C_PTR->cc_current_action[src_id] == CAMM_EXE)
            || (L4C_PTR->cc_current_action[src_id] == CHLD_CSD_DEACT)        
            || (L4C_PTR->cc_current_action[src_id] == CHLD_EXE)      
            )
        {
            kal_trace(TRACE_WARNING, WARNING_TCM_CMD_CONFLICT_DUE_TO_PS_AND_CS_USE_SAME_CHANNEL);            
            return L4C_CMD_CONFLICT;
        }
    
        

        param_ptr = (tcm_pdp_activate_req_struct*)
                    construct_local_para((kal_uint16) sizeof(tcm_pdp_activate_req_struct), TD_RESET);

#ifdef __SP_RIL_SUPPORT__
        L4C_PTR->ext_pdp_activating[cid] = KAL_TRUE;
        L4C_PTR->ext_pdp_src_id[cid] = src_id;
        kal_trace(TRACE_WARNING, WARNING_ABORT_PDP_ACTIVATION_STATE,
                  cid, L4C_PTR->ext_pdp_activating[cid], L4C_PTR->ext_pdp_src_id[cid]);
#endif //mtk02285, DUMA00206863, abort_cgact_activation    

        param_ptr->src_id = src_id;
        param_ptr->context_id = cid;
        //param_ptr->app_src = TCM_MMI_APP; // __HSPA_DATA_PATH_OPT__
#if defined(__NDIS_SUPPORT__) // Revise from WM_RIL to NDIS_SUPPORT
        param_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
#if !defined(__UPS_SUPPORT__)
        param_ptr->additional_para_content = MOD_CMUX; // __HSPA_DATA_PATH_OPT__
#else
        param_ptr->additional_para_content = MOD_UPS; // __HSPA_DATA_PATH_OPT__
#endif
#endif

#if defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__)
        {
            l4cphb_approve_req_struct *param1_ptr = NULL;
            L4C_PTR->cc_parameter[src_id].length = sizeof(tcm_pdp_activate_req_struct);
            L4C_PTR->cc_parameter[src_id].data = param_ptr;

            param1_ptr = (l4cphb_approve_req_struct*) construct_local_para(
                             (kal_uint16) sizeof(l4cphb_approve_req_struct),TD_RESET);

            param1_ptr->src_id = src_id;
            param1_ptr->is_retrieve = KAL_TRUE;
            param1_ptr->tel_number.addr_bcd[0] = 0x81;
            param1_ptr->tel_number.addr_bcd[1] = 0x9A;
            param1_ptr->tel_number.addr_bcd[2] = 0xB9;
            param1_ptr->tel_number.addr_bcd[3] = 0xFF;
            param1_ptr->tel_number.addr_length = 3;
            param1_ptr->approval_type = l4_custom_approval_type(L4C_EXT_GPRS_OPERATION,src_id);
            l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
        }
#else
#if defined(__IPV4V6__) && defined(__IPV6__)
        if (KAL_FALSE ==
                l4c_gprs_ipv4v6_pdp_activate_req_helper(&(L4C_COMM_PTR->v4v6_act_ptr), cid, src_id, l4ctcm_get_pdp_addr_type(cid))) //L4CPPP_FB
        {
            L4C_PTR->cc_parameter[src_id].length = sizeof(tcm_pdp_activate_req_struct);
            L4C_PTR->cc_parameter[src_id].data = param_ptr;
            l4c_clear_cc_parameter(src_id);
            return L4C_CONTEXT_CONFLICT_V4V6FB_NOT_COMPLETED;   // Reject Cause: cgact 0/1 when ipv4v6 fb not completed
        }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, param_ptr);
#endif /* defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__) */
    }
    else
    {
        tcm_pdp_deactivate_req_struct *param_ptr;
        param_ptr = (tcm_pdp_deactivate_req_struct*)
                    construct_local_para((kal_uint16) sizeof(tcm_pdp_deactivate_req_struct), TD_RESET);
        param_ptr->src_id = src_id;
        param_ptr->context_id = cid;
#if defined(__NDIS_SUPPORT__) // Revise from WM_RIL to NDIS_SUPPORT
        param_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
#if !defined(__UPS_SUPPORT__)
        param_ptr->additional_para_content = MOD_CMUX; // __HSPA_DATA_PATH_OPT__
#else
        param_ptr->additional_para_content = MOD_UPS; // __HSPA_DATA_PATH_OPT__
#endif
#endif
#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
        param_ptr->local_deactivate_pdp = (TCM_PDP_DEACTIVATE_LOCAL == opcode)?(KAL_TRUE):(KAL_FALSE);
#endif

#if defined(__IPV4V6__) && defined(__IPV6__)
        if ((NULL != L4C_COMM_PTR->v4v6_act_ptr)
                && (KAL_TRUE == l4c_gprs_ipv4v6_check_cid_existence(L4C_COMM_PTR->v4v6_act_ptr,cid))
           )
        {
            L4C_PTR->cc_parameter[src_id].length = sizeof(tcm_pdp_deactivate_req_struct);
            L4C_PTR->cc_parameter[src_id].data = param_ptr;
            l4c_clear_cc_parameter(src_id);
            return L4C_CONTEXT_CONFLICT_V4V6FB_NOT_COMPLETED;     // Reject Cause: cgact 0/1 when ipv4v6 fb not completed
        }
#endif /* defined(__IPV4V6__) && defined(__IPV6__) */
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_DEACTIVATE_REQ, param_ptr);
    }

    if (cid <= MAX_EXT_PDP_CONTEXT)
    {
        l4c_set_user_action(L4C_TCM, src_id, CGACT_EXE);
#if defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__)
        if (opcode == TCM_PDP_ACTIVATE)
        {
            L4C_PTR->cc_current_action[src_id] = CGDATA_EXE; //Set CGDATA_EXE to enter l4cphb_approve_cnf_hdlr processing
        }
#endif
    } //MAUI_02338241, MT PDP activation also uses cid 4~6
    // we only need to set CGACT action for RMMI
    return KAL_TRUE;
#endif /* __EXT_PDP_CONTEXT_ON__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_context_state_req
 * DESCRIPTION
 *  This function handles +CGACT to query state of PDP context.
 * PARAMETERS
 *  src_id          [IN]
 *  num             [?]
 *  state_list      [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_context_state_req(kal_uint8 src_id, kal_uint8 *num, kal_uint8 *state_list)
{
    kal_bool ret_val;

    if (is_tcm_cmd_conflict_basic(src_id, CGACT_EXE) == KAL_TRUE) //maui_01895693, mtk02285
    {
        return KAL_FALSE;
    }

    ret_val = l4ctcm_get_context_state(num, state_list);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_answer_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_ANSWER_REQ and +CGANS.
 *  Manual response to a network request for PDP context activation
 * PARAMETERS
 *  src_id      [IN]
 *  ans         [IN]
 *  l2p         [IN]
 *  cid         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_answer_req(kal_uint8 src_id, kal_uint8 ans, kal_uint8 l2p, kal_uint8 cid)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    if (is_tcm_cmd_conflict(LMMI_SRC, CGANS_EXE) == KAL_TRUE)
    {
        rmmi_ptr->cmee_err = RMMI_ERR_COMMAND_CONFLICT;
        return KAL_FALSE;
    }

    /* mtk00714 20040318: there was no MSG_ID_TCM_PDP_ACTIVATE_IND */
    if (l4c_ptr->parameter[LMMI_SRC].length == 0)
    {
        rmmi_ptr->cmee_err = NO_NW_SERVICE;
        return KAL_FALSE;
    }

    if (ans == TCM_ACCEPT_PDP_ACT)
    {
        if (src_id >= RMMI_SRC)
        {
            rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_NO_CAUSE); //MAUI_02386357, mtk02285, MAUI_02825172, MAUI_02956467
        }

        l4c_ps_exe_act_req(LMMI_SRC, TCM_PDP_ACTIVATE, *((kal_uint8*) l4c_ptr->parameter[LMMI_SRC].data + 0));
        /* if (src_id == LMMI_SRC)
           {
           }
           else
           {
           // external
           l4cppp_activate_req_struct *param_ptr;

           param_ptr = (l4cppp_activate_req_struct *)
           construct_local_para(
           (kal_uint16)sizeof(l4cppp_activate_req_struct),
           TD_RESET);

           if (l2p == TCM_PPP_L2P)
           {
           param_ptr->nsapi = 5;
           param_ptr->context_id = cid;
           l4c_send_msg_to_ppp ( MSG_ID_L4CPPP_ACTIVATE_REQ,
           param_ptr
           );
           }
           else
           {
           // error
           }
           } */
    }
    else
    {
        tcm_pdp_activate_rej_rsp_struct *param_ptr;

        param_ptr = (tcm_pdp_activate_rej_rsp_struct*)
                    construct_local_para((kal_uint16) sizeof(tcm_pdp_activate_rej_rsp_struct), TD_RESET);

        param_ptr->src_id = src_id;
        param_ptr->context_id = *((kal_uint8*) l4c_ptr->parameter[LMMI_SRC].data + 0);
        l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REJ_RSP, param_ptr);
    }

    if (l4c_ptr->parameter[LMMI_SRC].length != 0)
    {
        l4c_ptr->parameter[LMMI_SRC].length = 0;
        free_ctrl_buffer(l4c_ptr->parameter[LMMI_SRC].data);
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_auto_answer_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_AUTO_ANSWER_REQ and +CGAUTO.
 *  Automatic response to a network request for PDP context activation
 * PARAMETERS
 *  src_id      [IN]
 *  mode        [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_auto_answer_req(kal_uint8 src_id, kal_uint8 mode)
{

    if (is_tcm_cmd_conflict(LMMI_SRC, CGANS_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    L4C_PTR->tcm_auto_answer = (mode==0)?(KAL_FALSE):(KAL_TRUE);//rvct_warning, mtk02285

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_auto_answer_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_AUTO_ANSWER_REQ and +CGAUTO.
 *  Automatic response to a network request for PDP context activation
 * PARAMETERS
 *  src_id      [IN]
 *  mode        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_auto_answer_req(kal_uint8 src_id, kal_uint8 *mode)
{

    if (is_tcm_cmd_conflict_basic(LMMI_SRC, CGANS_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    *mode = L4C_PTR->tcm_auto_answer;

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_modify_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_MODIFY_REQ and +CGCMOD.
 *  PDP Context Modify
 * PARAMETERS
 *  src_id      [IN]
 *  cid         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_modify_req(kal_uint8 src_id, kal_uint8 cid)
{
#if !defined(__EXT_PDP_CONTEXT_ON__)
    return KAL_FALSE;
#else
    tcm_pdp_modify_req_struct *param_ptr;

    if (is_tcm_cmd_conflict(src_id, CGCMOD_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (tcm_pdp_modify_req_struct*)
                construct_local_para((kal_uint16) sizeof(tcm_pdp_modify_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = cid;
    l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_MODIFY_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, CGCMOD_EXE);
    return KAL_TRUE;
#endif /* defined(__EXT_PDP_CONTEXT_ON__) */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_dialup_disc_req
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_dialup_disc_req(l4c_source_id_enum cmd_src_id, kal_uint8 context_id, kal_bool local_deactivate_pdp)
{
#if defined(__PS_DIALUP__)
    l4cppp_deactivate_req_struct *param_ptr;

    param_ptr = (l4cppp_deactivate_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cppp_deactivate_req_struct), TD_RESET);

    L4C_PTR->disc_ppp_src_id = cmd_src_id;
    param_ptr->context_id = context_id;
    param_ptr->port = l4c_ps_dialup_get_port(context_id);
    param_ptr->src_id = rmmi_cid_2_srcid(rmmi_port_2_cid(param_ptr->port));

#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
    param_ptr->local_deactivate_pdp = local_deactivate_pdp;
#endif
    l4c_send_msg_to_ppp(MSG_ID_L4CPPP_DEACTIVATE_REQ, param_ptr);
#endif /* __PS_DIALUP__ */
} // L4CPPP_FB_2


#if 1 /* Deprecated, mtk02285, 2011-12-04 */
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_disc_ppp_dialup_req
 * DESCRIPTION
 *  mtk02126 MAUI_02532440 refine l4c_ps_disc_ppp_dialup_req
 *  1.This function is originally wrapped by !defined(__MMI_FMI__) || defined(__CBM_CONNECTION_MANAGER__)
 *    However, we want to use this function to handle plutgout indication while escape.
 *    Therefore, we need to remove the compiler option to support all cases
 *  2.We remove the source-id-finding code to l4c_ps_find_data_src_id()
 * PARAMETERS
 *  cmd_src_id  [IN] where is the disc command comes from
 *  data_src_id [IN] the src id to be deactivated.
 *  context_id	[IN]
 *  local_deactivate_pdp [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_disc_ppp_dialup_req(l4c_source_id_enum cmd_src_id, l4c_source_id_enum data_src_id, kal_uint8 context_id, kal_bool local_deactivate_pdp) // MAUI_01633844, mtk02285, 20090302~
{
#if defined(__PS_DIALUP__)
    l4cppp_deactivate_req_struct *param_ptr;

    param_ptr = (l4cppp_deactivate_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cppp_deactivate_req_struct), TD_RESET);

    L4C_PTR->disc_ppp_src_id = cmd_src_id;
    param_ptr->src_id = data_src_id;
    param_ptr->context_id = context_id; // the context id of the dialup that we want to disconnect
    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(data_src_id)); // the port of the dialup that we want to disconnect
#ifdef __LOCAL_DEACTIVATE_PDP_SUPPORT__
    param_ptr->local_deactivate_pdp = local_deactivate_pdp;
#endif
    l4c_send_msg_to_ppp(MSG_ID_L4CPPP_DEACTIVATE_REQ, param_ptr);
#endif /* __PS_DIALUP__ */
} // ~MAUI_01633844, mtk02285, 20090302
#endif /* Deprecated, mtk02285, 2011-12-04 */

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_gprs_data_counter_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ.
 * PARAMETERS
 *  counter_info        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_gprs_data_counter_req(l4c_gprs_statistics_info_struct *counter_info)
{
    l4ctcm_get_gprs_statistics_info(counter_info);
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_data_bearer_capability
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_uint8 l4c_ps_get_data_bearer_capability()
{
#ifdef __HSDPA_SUPPORT__
    kal_uint8 i = 0;
    kal_uint8 valid_contexts = 0;
    kal_uint8 max_capability = L4C_NONE_ACTIVATE;
    kal_uint8 context_id[TCM_TOT_CONTEXT];
    kal_uint8 bearer_capability[TCM_TOT_CONTEXT];
    kal_uint8 bc = L4C_NONE_ACTIVATE;

    l4ctcm_get_bearer_capability(&valid_contexts, context_id, bearer_capability);
    for (i=0; i<valid_contexts; i++)
    {
        bc = l4c_convert_data_speed_support_enum(bearer_capability[i]);
        if(bc > max_capability)
        {
            max_capability = bc;
        }
    }

    if (max_capability > custom_max_bearer_capability())
    {
        max_capability = custom_max_bearer_capability();
    }    
    return max_capability;
#else
    return L4C_NONE_ACTIVATE;
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_reset_gprs_data_counter_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_RESET_GPRS_DATA_COUNTER_REQ.
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_reset_gprs_data_counter_req(kal_uint8 src_id)
{

    if (is_tcm_cmd_conflict_basic(src_id, GPRS_COUNTER_RESET) == KAL_TRUE) //MAUI_02022135
    {
        return KAL_FALSE;
    }

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_REQ, NULL);
    l4c_set_user_action(L4C_TCM, src_id, GPRS_COUNTER_RESET);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_gprs_data_account_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_GPRS_DATA_ACCOUNT_REQ.
 * PARAMETERS
 *  src_id              [IN]
 *  gprs_account        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_gprs_data_account_req(kal_uint8 src_id,
        l4c_gprs_account_info_struct *gprs_account,
        kal_uint8 profile_type)
{
//#ifdef __TCPIP__
#if 0 //mtk02285, no more L4CABM_SET_GPRS_ACCOUNT_INFO_REQ, 10A_DA_Revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __TCPIP__ */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_gprs_data_account_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_GPRS_DATA_ACCOUNT_REQ.
 * PARAMETERS
 *  src_id          [IN]
 *  profile_id      [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_gprs_data_account_req(kal_uint8 src_id, kal_uint8 profile_id, kal_uint8 profile_type)
{
#ifdef __TCPIP__
    l4cabm_get_gprs_account_info_req_struct *param_ptr;

    param_ptr = (l4cabm_get_gprs_account_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cabm_get_gprs_account_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->profile_id = profile_id;
    param_ptr->profile_type = profile_type;
    l4c_send_msg_to_abm(MSG_ID_L4CABM_GET_GPRS_ACCOUNT_INFO_REQ, param_ptr);

#endif /* __TCPIP__ */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_definition_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_DEFINITION_REQ and +CGDCONT.
 *  Define PDP Context
 * PARAMETERS
 *  src_id      [IN]
 *  pdp         [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_definition_req(kal_uint8 src_id, l4c_prim_pdp_info_struct *pdp)
{
    l4ctcm_set_pri_pdp_info_req_struct *param_ptr;

    if (is_tcm_cmd_conflict_basic(src_id, CGDCONT_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_pri_pdp_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_pri_pdp_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = pdp->context_id;
    param_ptr->apn_length = pdp->apn_length;
    kal_mem_cpy(param_ptr->apn, pdp->apn, 100);
    param_ptr->dcomp_algo = pdp->dcomp_algo;
    param_ptr->hcomp_algo = pdp->hcomp_algo;
    param_ptr->pdp_type = pdp->pdp_type;
    param_ptr->pdp_addr_len = pdp->pdp_addr_len;
    kal_mem_cpy(param_ptr->addr_val, pdp->addr_val, 16);

#ifdef __REL8__
    param_ptr->ipv4addralloc = pdp->ipv4addralloc ;
#endif /* __REL8__ */

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, CGDCONT_EXE);

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_definition_list_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_DEFINITION_REQ and +CGDCONT.
 *  Define PDP Context
 * PARAMETERS
 *  src_id      [IN]
 *  info        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_definition_list_req(kal_uint8 src_id, l4c_prim_pdp_info_list_struct *info)
{
    kal_bool ret_val;

    if (is_tcm_cmd_conflict_basic(src_id, CGDCONT_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }
    ret_val = l4ctcm_get_pri_pdp_info(info);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_sec_definition_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_SEC_DEFINITION_REQ and +CGDSCONT.
 *  Define Secondary PDP Context
 * PARAMETERS
 *  src_id      [IN]
 *  pdp         [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_sec_definition_req(kal_uint8 src_id, l4c_sec_pdp_info_struct *pdp)
{
    l4ctcm_set_sec_pdp_info_req_struct *param_ptr;

    if (is_tcm_cmd_conflict(src_id, CGDSCONT_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_sec_pdp_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_sec_pdp_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = pdp->context_id;
    param_ptr->prim_context_id = pdp->prim_context_id;
    param_ptr->dcomp_algo = pdp->dcomp_algo;
    param_ptr->hcomp_algo = pdp->hcomp_algo;

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, CGDSCONT_EXE);
    return KAL_TRUE;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_sec_definition_list_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_SEC_DEFINITION_REQ and +CGDSCONT.
 *  Define Secondary PDP Context
 * PARAMETERS
 *  src_id      [IN]
 *  info        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_sec_definition_list_req(kal_uint8 src_id, l4c_sec_pdp_info_list_struct *info)
{
    kal_bool ret_val;

    if (is_tcm_cmd_conflict(src_id, CGDSCONT_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }
    ret_val = l4ctcm_get_sec_pdp_info(info);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_pdp_addr_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_PDP_ADDR_REQ and +CGPADDR.
 *  Show PDP address
 * PARAMETERS
 *  src_id      [IN]
 *  cid         [IN]
 *  addr        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_pdp_addr_req(kal_uint8 src_id, kal_uint8 cid, kal_uint8 *addr, kal_uint8 *length)
{
    kal_bool ret_val;

    if (is_tcm_cmd_conflict(src_id, L4C_NO_ACTION) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    ret_val = l4ctcm_get_pdp_addr(cid, length, addr);

    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_qos_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_QOS_REQ and +CGQREQ and +CGQMIN.
 *  Define Quality of Service Profile (Requested) and Quality of Service Profile (Minimum acceptable)
 * PARAMETERS
 *  src_id          [IN]
 *  qos_type        [IN]
 *  qos             [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_qos_req(kal_uint8 src_id, kal_uint8 qos_type, l4c_qos_struct *qos)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    l4ctcm_set_qos_info_req_struct *param_ptr;
    kal_uint8 action;

    action = (qos_type == ATCI_MIN_QOS) ? CGQMIN_EXE : CGQREQ_EXE;

    if (is_tcm_cmd_conflict_basic(src_id, action) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_qos_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_qos_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = qos->context_id;
    param_ptr->qos_type = qos->qos_type;
    param_ptr->delay_class = qos->delay_class;
    param_ptr->reliability_class = qos->reliability_class;
    param_ptr->peak_throughput = qos->peak_throughput;
    param_ptr->precedence_class = qos->precedence_class;
    param_ptr->mean_throughput = qos->mean_throughput;

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_QOS_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, action);
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_qos_req
 * DESCRIPTION
 *  This function handles +CGQREQ and +CGQMIN.
 *  Query Quality of Service Profile (Requested) and Quality of Service Profile (Minimum acceptable)
 * PARAMETERS
 *  src_id          [IN]
 *  qos_type        [IN]
 *  info            [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_qos_req(kal_uint8 src_id, kal_uint8 qos_type, l4c_qos_list_struct *info)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    kal_bool ret_val;

    if (is_tcm_cmd_conflict_basic(src_id, CGQREQ_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    ret_val = l4ctcm_get_qos_info((atci_qos_enum)qos_type, info);

    return ret_val;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_tft_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_TFT_REQ and +CGTFT.
 *  Traffic Flow Template
 *  This command allows the TE to specify a Packet Filter - PF for a Traffic Flow Template -
 *  TFT that is used in the GGSN for routing of down-link packets onto different QoS flows towards the TE.
 *  The concept is further described in the 3GPP TS 23.060
 * PARAMETERS
 *  src_id      [IN]
 *  tft         [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_tft_req(kal_uint8 src_id, l4c_tft_struct *tft)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    kal_bool ret_val;

    ret_val = l4ctcm_set_tft_info(tft);
    /*
     * l4ctcm_set_tft_info_req_struct *param_ptr;
     *
     * if (is_cmd_conflict(src_id, CGTFT_EXE) == KAL_TRUE)
     * {
     * return KAL_FALSE;
     * }
     *
     * L4C_PTR->cc_current_action[src_id]=CGTFT_EXE;
     *
     * param_ptr = (l4ctcm_set_tft_info_req_struct *)
     * construct_local_para(
     * (kal_uint16)sizeof(l4ctcm_set_tft_info_req_struct),
     * TD_RESET);
     *
     * param_ptr->src_id = src_id;
     * param_ptr->context_id = tft->context_id;
     * param_ptr->tot_pf_count = tft->tot_pf_count;
     * kal_mem_cpy (param_ptr->pf, &tft->pf[0], sizeof (l4c_pf_struct));
     *
     * l4c_send_msg_to_tcm ( MSG_ID_L4CTCM_SET_TFT_INFO_REQ,
     * param_ptr
     * );
     */
    return ret_val;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_tft_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_GET_TFT_REQ and +CGTFT.
 *  Traffic Flow Template
 *  This command allows the TE to specify a Packet Filter - PF for a Traffic Flow Template -
 *  TFT that is used in the GGSN for routing of down-link packets onto different QoS flows towards the TE.
 *  The concept is further described in the 3GPP TS 23.060
 * PARAMETERS
 *  src_id      [IN]
 *  info        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_tft_req(kal_uint8 src_id, l4c_tft_struct *info)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    kal_bool ret_val;

    ret_val = l4ctcm_get_tft_info(info);

    return ret_val;
#else
    return KAL_FALSE;
#endif
}


l4cppp_activate_req_struct* l4c_ps_construct_dialup_activate_req(kal_uint8 src_id, kal_uint8 cid)
{
    kal_uint8 index = 0;
    kal_uint8 data_src_id = src_id;
    kal_bool result = KAL_FALSE; // reset result to KAL_FALSE to check if we find valid index
    l4c_prim_pdp_info_list_struct info;
    l4cppp_activate_req_struct* param_ptr = (l4cppp_activate_req_struct*) (l4cppp_activate_req_struct*)
                                            construct_local_para((kal_uint16) sizeof(l4cppp_activate_req_struct), TD_RESET);

#if defined(__WM_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__)
    if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
    {
        data_src_id = RMMI_PTR->rmmi_data_channel_src;
    }
#endif /* defined(__SP_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__) */

    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(data_src_id));
    param_ptr->src_id = data_src_id;
    param_ptr->context_id = cid;
    l4ctcm_get_ppp_auth(cid, &param_ptr->is_chap);
    if (KAL_TRUE == l4ctcm_get_pri_pdp_info(&info))
    {
        for (index = 0; index < MAX_EXT_PDP_CONTEXT; index++)
        {
            if (info.prim_pdp_info[index].context_id == cid) // find the corresponding index
            {
                param_ptr->pdp_type = info.prim_pdp_info[index].pdp_type; //MAUI_01984814, Klockwork
                result = KAL_TRUE;
                break;
            }
        }
    } // MAUI_02543760 mtk02126 l4ctcm_get_pri_pdp_info() misuse problem temp solution

    // the context id is invalid
    if (!result)
    {
        free_local_para((local_para_struct*)param_ptr);
        return NULL;
    }
    else
    {
        return param_ptr;
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_enter_data_state_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_ENTER_DATA_STATE_REQ and +CGDATA.
 *  Enter data state
 *  The execution command causes the MT to perform whatever actions are necessary to establish
 *  communication between the TE and the network using one or more Packet Domain PDP types.
 *  This may include performing a PS attach and one or more PDP context activations.
 * PARAMETERS
 *  src_id      [IN]
 *  l2p         [IN]
 *  cid         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_enter_data_state_req(kal_uint8 src_id, kal_uint8 l2p, kal_uint8 cid, kal_uint8 chid)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

#if !defined(__MULTIPLE_PPP_DIALUP_SUPPORT__) //MAUI_01633844, mtk02285, 20090302: 20090302, NDIS will not set L4C_ONLINE_DATA_GPRS_STATE
    kal_uint8 id;
#endif

#ifdef __NDIS_SUPPORT__
    l4ctcm_enter_data_mode_req_struct *param2_ptr;
#endif

    if (is_cmd_conflict(src_id, CGDATA_EXE) == KAL_TRUE
            || l4c_check_user_action(L4C_RAC, LMMI_SRC, RFOFF_DETACH) == KAL_TRUE
            || l4c_check_user_action(L4C_RAC, LMMI_SRC, SET_RAT_MODE_DETACH) == KAL_TRUE
       )
    {
        kal_trace(TRACE_WARNING, WARNING_CGDATA_DPRS_DIALUP_IS_NOT_ALLOWED);
        return KAL_FALSE;
    }

#if !defined(__MULTIPLE_PPP_DIALUP_SUPPORT__) //MAUI_01633844, mtk02285, 20090302: NDIS will not set L4C_ONLINE_DATA_GPRS_STATE
    /* mtk02285, 20110321:
     [online data state note 2/2]
     L4C checks here, to prevent:
     1. multiple "UPS-USB" connections
     2. multiple "PPP-GPRS dialup" connections
     */
    //if any other port is in gprs data state, the new request is not allowed.
    for (id = LMMI_SRC; id < RMMI_ALL; id++)
    {
        if (l4c_ptr->cc_state[id] == L4C_ONLINE_DATA_GPRS_STATE)
        {
            if ((src_id >= RMMI_SRC) && (TCM_PPP_L2P == l2p)) //MAUI_02900475
            {
                rmmi_ptr->current_src = src_id; //MAUI_02956467
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
            }
            return KAL_FALSE;
        }
    }
#endif

    if (l2p == TCM_PPP_L2P)
    {
#ifndef __PS_DIALUP__
        return KAL_FALSE;
#else
#ifdef __PHB_APPROVE_BY_MMI__
        {
            kal_uint16 cause;
            l4_addr_bcd_struct tel_number;
            kal_uint8 port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

            tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
            tel_number.addr_length = 1 + convert_to_bcd((kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                                     (kal_uint8*) & (tel_number.addr_bcd[1]), MAX_CC_ADDR_LEN-1);

            rmmi_ptr->current_src = src_id;
            if (KAL_FALSE == custom_phb_xmgnt_approve_fdn(
                        (kal_uint8*)&(tel_number.addr_bcd[0]), tel_number.addr_length,
                        (kal_uint8)(l4c_current_mod_id - MOD_L4C), L4C_EXT_GPRS_OPERATION, &cause)
               )
            {
                kal_brief_trace(TRACE_WARNING, WARNING_PHB_APPROVE_BY_MMI_FAILURE, L4C_EXT_GPRS_OPERATION, cause);
                //mtk02285, 20110607, Note: FDN check failed,
                //                          1. MUST return KAL_TRUE in this case
                //                             - To keep the whole call path does not print any duplicate result code!!
                //                             - Call path#1: rmmi_atd_hdlr/ss_string_parsing/is_gprs_string/setup_pdp_act_struct/l4c_ps_exe_enter_data_state_req()
                //                             - Call path#2: rmmi_cgdata_hdlr/l4c_ps_exe_enter_data_state_req()
                //                          2. MUST print necessary result code by itself (i.e. DUMA00135153 for FDN ERROR, others for NO CARRIER)
                //                          3. MUST start ATH for dialup
                //                          4. NO NEED to Ctrl DCD Low, since it's not pulled high before
                //                          5. NO NEED to clear CC retry; NO NEED to clear action
                //                          6. MUST set PHB_FDN_CHECK action to bypass print OK in rmmi_basic_cmd_processor/cgdata_hdlr (see MAUI_02956467_CGDATA_APPROVE_FAIL)
                //l4c_clear_cc_queued_msg(temp_src);
                //L4C_PTR->cc_current_action[temp_src] = L4C_NO_ACTION;
#ifdef __SP_RIL_SUPPORT__ //DUMA00135153
                if (PHB_CAUSE_FDN_BLOCKED == cause)
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
                }
                else
#endif /* __SP_RIL_SUPPORT__ */
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
                }
                rmmi_start_ath_for_dialup_hdlr(port);
                l4c_ptr->cc_current_action[src_id] = PHB_FDN_CHECK; //MAUI_02956467_CGDATA_APPROVE_FAIL
                return KAL_TRUE;
            }
            else
            {
                l4cppp_activate_req_struct* ppp_activate_req = NULL;
                rmmi_ptr->current_src = src_id; //MAUI_02956467
                if (l4c_ptr->disallow_gprs_and_csd)
                {
                    rmmi_start_ath_for_dialup_hdlr(port);
                    kal_brief_trace(TRACE_INFO, INFO_DISALLOW_DIALUP_DUT_TO_CAMERA_RUNUNG, src_id);
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
                    //mtk02285, 20110607, Note: no need to clear CC retry; no need to clear action
                    //l4c_clear_cc_queued_msg(temp_src);
                    //l4c_ptr->cc_current_action[temp_src] = L4C_NO_ACTION;
                    return KAL_FALSE;
                }

                ppp_activate_req = l4c_ps_construct_dialup_activate_req(src_id, cid);
                if (NULL == ppp_activate_req)
                {
                    return KAL_FALSE;
                }

                if (ppp_activate_req->pdp_type != PPP_ADDR_TYPE) //__IPV6__: for any type that does not require delayed "CONNECT"
                {
                    /* mtk02126: add "&& !defined(__RMMI_UT__)" for auto test
                     * In the auto test scenario, we'll use PC dialup software dialup from data port.
                     * However, PC sw only can recognize "CONNECT".
                     * Therefore, if __RMMI_UT__ is defined, we need to response CONNECT for auto test
                     */
#if defined(__SP_RIL_SUPPORT__) && !defined(__RMMI_UT__)
                    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE); // Only return "OK" to WM
#else
                    rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_GEN_CAUSE); // MAUI_02386357, mtk02285, MAUI_02825172
#endif

                    // Set CGDATA_EXE action to the DATA channel
                    l4c_ptr->cc_state[ppp_activate_req->src_id] = L4C_ONLINE_DATA_GPRS_STATE;
                    l4c_ptr->cc_current_action[ppp_activate_req->src_id] = CGDATA_EXE;
                    rmmi_ptr->uart_in_data_mode = KAL_TRUE;

                    //Data Carrier Detect
#if defined(__CMUX_MODEM_STATUS_SUPPORT__) && !defined(__UCM_SUPPORT__) //mtk02514_check
                    l4c_ctrl_dcd_status(src_id, MOD_ATCI);
#else
                    kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, ppp_activate_req->port, custom_get_dcd_value_for_data_state());
                    RMMI_UART_CtrlDCD((UART_PORT)ppp_activate_req->port, (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);
#endif
                }
#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
                else if (ppp_activate_req->pdp_type == PPP_ADDR_TYPE)
                {
                    /* Do not change cc_state for PPP TYPE DIALUP at this time!
                       or rmmi_write_to_uart cannot PutBytes "CONNECT" to UART
                    */
#if defined(__WM_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__)
#error PPP_TYPE_PDP_DAILUP IS NOT SUPPORTED WITH DATA CHANNEL REDIRECTION
#else
                    l4c_ptr->cc_current_action[src_id] = CGDATA_EXE;
#endif /* defined(__SP_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__) */
                }
#endif //__PPP_TYPE_PDP_DIALUP_SUPPORT__

                l4c_ps_gprs_status_update_lind(L4C_PDP_ATTEMPT_ACT, l4crac_get_egprs_status(),
                                               l4crac_get_cell_data_speed_support(),
                                               l4c_ptr->max_data_bearer_capa); //mtk02285, hspa_mmi_h2
#ifdef __TCPIP__ /* ABM */
                l4c_abm_dialup_connecting_ind_helper(GPRS_BEARER_DIALUP, 0, ppp_activate_req->context_id); //connecting_by_te
#endif

                //L4C_PTR->cid_used_by_ppp = cid;
                l4c_ps_dialup_set_port2cid((kal_uint16)ppp_activate_req->port, cid);
                l4c_send_msg_to_ppp(MSG_ID_L4CPPP_ACTIVATE_REQ, ppp_activate_req);
            }
        }
#endif  /* __PHB_APPROVE_BY_MMI__ */
#ifndef __PHB_APPROVE_BY_MMI__
        {
            l4cphb_approve_req_struct *param1_ptr;
            kal_uint8 count;
            l4c_ptr->cc_parameter[src_id].length = sizeof(l4cppp_activate_req_struct);
            l4c_ptr->cc_parameter[src_id].data = l4c_ps_construct_dialup_activate_req(src_id, cid);

            // the context id is invalid
            if (NULL == (l4c_ptr->cc_parameter[src_id].data))
            {
                l4c_ptr->cc_parameter[src_id].length = 0;
                return KAL_FALSE;
            }
            else
            {
                l4c_ptr->cc_current_action[src_id] = CGDATA_EXE;
                param1_ptr = (l4cphb_approve_req_struct*) construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);
                param1_ptr->src_id = src_id;
                param1_ptr->is_retrieve = KAL_TRUE;
                param1_ptr->tel_number.addr_bcd[0] = l4c_ptr->l4cphb_approve_req_string.type;
                count = convert_to_bcd((kal_uint8*) l4c_ptr->l4cphb_approve_req_string.number,
                                       (kal_uint8*) & (param1_ptr->tel_number.addr_bcd[1]), MAX_CC_ADDR_LEN-1);
                param1_ptr->tel_number.addr_length = count + 1;
                param1_ptr->approval_type = l4_custom_approval_type(L4C_EXT_GPRS_OPERATION,src_id);
                l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, param1_ptr, NULL);
            }
        }
#endif /* __PHB_APPROVE_BY_MMI__ */
#endif /* __PS_DIALUP__ */
    }
#ifdef __NDIS_SUPPORT__
#ifndef __UPS_SUPPORT__
    else if (l2p == TCM_WM_L2P)
    {
        param2_ptr = (l4ctcm_enter_data_mode_req_struct*)
                     construct_local_para( (kal_uint16) sizeof (l4ctcm_enter_data_mode_req_struct),
                                           TD_RESET);

        param2_ptr->src_id = src_id;
        param2_ptr->context_id = cid;
        param2_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
        param2_ptr->additional_para_content = (kal_uint32) MOD_CMUX;
        l4c_send_msg_to_tcm( MSG_ID_L4CTCM_ENTER_DATA_MODE_REQ, param2_ptr );
    }
#else
    else if (l2p == TCM_UPS_L2P)
    {
        param2_ptr = (l4ctcm_enter_data_mode_req_struct*)
                     construct_local_para( (kal_uint16) sizeof (l4ctcm_enter_data_mode_req_struct),
                                           TD_RESET);

        param2_ptr->src_id = src_id;
        param2_ptr->context_id = cid;
        param2_ptr->additional_para_type = TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID;
        param2_ptr->additional_para_content = (kal_uint32) (MOD_UPS);
        param2_ptr->pdp_type = l4ctcm_get_pdp_addr_type(cid);
        param2_ptr->channel_id = chid;
        l4c_send_msg_to_tcm ( MSG_ID_L4CTCM_ENTER_DATA_MODE_REQ, param2_ptr);
    }
#endif
#endif /* __NDIS_SUPPORT__ */
    else
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif /* __EXT_PDP_CONTEXT_ON__ */
}

//mtk00714 w0635
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_send_data_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SEND_DATA_REQ and +CGSDATA.
 * PARAMETERS
 *  src_id      [IN]
 *  cid         [IN]
 *  size        [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_send_data_req(kal_uint8 src_id, kal_uint8 cid, kal_uint32 size)
{
    //ilm_struct *ilm_ptr = NULL; //MAUI_02956467
    ratdm_ps_data_req_struct *param_ptr;
    peer_buff_struct *peer_buff_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_len = 0;
    kal_uint32 size_left;
    kal_uint16 npdu_size;
    flc2_pool_id_enum pool_id = FLC2_INVALID_POOL_ID;
    kal_uint8 index;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    kal_uint8   npdu_sent_count=0;

    /* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
    peer_buff_struct *flc_buf_ptr = NULL;
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */

    if (size == 0)
    {
        return KAL_TRUE;
    }

    /* decide which flc pool should use */
    pool_id = l4c_ps_get_flc_pool_id_for_act_test(src_id, cid);
    if (pool_id == FLC2_INVALID_POOL_ID)
    {
        return KAL_FALSE;
    }
    kal_trace(TRACE_INFO, L4C_PS_EXE_SEND_DATA, cid, cid, pool_id, size, src_id);

    index = cid - TCM_AT_PDP_CID;
    /* TCM_AT_PDP_CID: index = 0 */
    /* TCM_EM_PDP_CID_1: index = 1 */
    /* TCM_EM_PDP_CID_2: index = 2 */
    /* trick for pass TCs *//* Simon051216 for EDGE TC 51.3.1.3 */
    if ((l4c_ptr->gprs_em_send_data_size[index] == 0) && (size == 1800))
    {
        size = 1840; /* Simon051216 for EDGE TC 51.3.1.3 */
    }

    /* start sending data */
    l4c_ptr->gprs_em_send_data_size[index] = size;
    l4c_ptr->gprs_em_send_data_srcid[index] = (l4c_source_id_enum) src_id; //MAUI_02956467
    size_left = size;

#if defined(__SP_RIL_SUPPORT__)
    flc2_reset_user_info( pool_id );
    flc2_config_user_info( pool_id, (void*)((kal_uint32)MOD_L4C));
#endif

    while (size_left > 0)
    {   
        if (size_left > MAX_PDU_LENGTH)
        {
            npdu_size = MAX_PDU_LENGTH;
        }
        else
        {
            npdu_size = size_left;      //the last NPDU packet
        }

        peer_buff_ptr = (peer_buff_struct*) flc2_get_peer_buff(pool_id, npdu_size, L3_UL_RESERVED_HEADER_SPACE, 0); 	/* SND_UL_CTRL_HEADER_LENGTH */ // __HSPA_DATA_PATH_OPT__

        if ((peer_buff_ptr == NULL) || npdu_sent_count==10) /* Also, take a break to avoid long while loop */
        {
            //cannot allocate peer buf, flc is suspend, start timer
            npdu_sent_count = 0;
            l4c_gprs_send_data_timer_hdlr();
            return KAL_TRUE;
        }

        /* send NPDU data */
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);
        fill_data((kal_uint8*) pdu_ptr, npdu_size);
        //param_ptr = (ps_data_req_struct*) construct_local_para((kal_uint16) sizeof(ps_data_req_struct), TD_RESET);
        param_ptr = (ratdm_ps_data_req_struct*) peer_buff_ptr;
        param_ptr->context_id = cid;
        param_ptr->pool_id = (kal_uint8) pool_id;


        msg_send6(l4c_current_mod_id, (module_type)(MOD_RATDM + (l4c_current_mod_id - MOD_L4C)),
                  L4C_RATDM_SAP, MSG_ID_PS_DATA_REQ, NULL, peer_buff_ptr);
        npdu_sent_count++;
        
        /* update the size_left */
        size_left -= npdu_size;
        l4c_ptr->gprs_em_send_data_size[index] -= npdu_size;

    } //end-of-while (size_left > 0)

    /* check if gprs_em_send_data_size is 0 */
    if (l4c_ptr->gprs_em_send_data_size[index] == 0)
    {
        if (src_id >= RMMI_SRC) // MAUI_01873896, mtk02285, allow other sources as well (proprietary, fixed at RMMI_SRC (WM FTA notice))
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        }
    }
    else
    {
        ASSERT(0);      //something wrong in this function, didn't send all requested data size
    }
    /*
     * For GPRS_FLC_UT MAUI_02419672 mtk02126
     * To free the queued flc buffer
     */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
    while(lcd_lqueue_is_empty(l4c_ptr->gprs_flc_queue) == KAL_FALSE)
    {
        flc_buf_ptr = lcd_lqueue_remove(l4c_ptr->gprs_flc_queue, NULL);
        flc2_free_peer_buff(pool_id, flc_buf_ptr);
    }
#endif /*~!defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__) */

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  fill_data
 * DESCRIPTION
 *  This function is called by l4c_ps_exe_send_data_req() to fill data in buffer.
 * PARAMETERS
 *  buff_ptr        [?]
 *  length          [IN]
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void fill_data(kal_uint8 *buff_ptr, kal_uint16 length)
{
    kal_uint8 pattern[] = "blahblah";
    kal_uint8 size = strlen((char*)pattern);

    while (length >= size)
    {
        length -= size;
        kal_mem_cpy(buff_ptr, pattern, size);
        buff_ptr += size;
    }
    kal_mem_cpy(buff_ptr, pattern, length);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_tcm_get_empty_gprs_prof_req
 * DESCRIPTION
 *  This function is just for L4c to provide MMI with get empty gprs profile
 *  number
 * PARAMETERS
 *  src_id          [IN]
 *  entry_num       [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_tcm_get_empty_gprs_prof_req(kal_uint8 src_id, kal_uint8 *entry_num)
{
    return l4ctcm_get_empty_gprs_prof(entry_num);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_tcm_set_ppp_auth_info_req
 * DESCRIPTION
 *  mtk00468 add 031015
 *  This function is for ppp auth info request
 *  number
 * PARAMETERS
 *  src_id          [IN]
 *  context_id      [IN]
 *  is_chap         [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_tcm_set_ppp_auth_info_req(kal_uint8 src_id, kal_uint8 context_id, kal_uint8 is_chap)
{
#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)
    l4ctcm_set_ppp_auth_info_req_struct *param_ptr;

    if (is_tcm_cmd_conflict(src_id, EGPAU_EXE) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_ppp_auth_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_ppp_auth_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = context_id;
    param_ptr->is_chap = is_chap;

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_PPP_AUTH_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, EGPAU_EXE);
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_gprs_resume_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_gprs_resume_req(kal_uint8 src_id)
{
    l4cppp_resume_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    rmmi_context_struct *rmmi_ptr = RMMI_PTR; //for slim

    param_ptr = (l4cppp_resume_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4cppp_resume_req_struct), TD_RESET);

    param_ptr->port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));

    rmmi_ptr->current_src = src_id;

#ifdef __ESCAPE_OK_ATO_CONNECT__
    rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_NO_CAUSE); //mtk02285, MAUI_02956467
#else
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif //__ESCAPE_OK_ATO_CONNECT__	

    l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_GPRS_STATE;
    rmmi_ptr->uart_in_data_mode = KAL_TRUE;
    kal_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, param_ptr->port, custom_get_dcd_value_for_data_state());
    RMMI_UART_CtrlDCD((UART_PORT)param_ptr->port, (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);	//rvct_warning, mtk02285
    l4c_ptr->cc_current_action[src_id] = ATO_EXE;   // mtk02126 MAUI_02420368
    l4c_send_msg_to_ppp(MSG_ID_L4CPPP_RESUME_REQ, param_ptr);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_eqos_req
 * DESCRIPTION
 *  This function handles MSG_ID_MMI_PS_SET_EQOS_REQ and +CGEQREQ and +CGEQMIN.
 *  Define 3G Quality of Service Profile (Requested) and 3G Quality of Service Profile (Minimum acceptable)
 * PARAMETERS
 *  src_id          [IN]
 *  qos_type        [IN]
 *  qos             [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_eqos_req(kal_uint8 src_id, kal_uint8 qos_type, l4c_eqos_struct *qos)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
#ifdef __R99__
    l4ctcm_set_eqos_info_req_struct *param_ptr;
    kal_uint8 action;

    action = (qos_type == ATCI_MIN_QOS) ? CGEQMIN_EXE : CGEQREQ_EXE;

    if (is_tcm_cmd_conflict_basic(src_id, action) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_eqos_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_eqos_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = qos->context_id;
    param_ptr->qos_type = qos->qos_type;
    param_ptr->traffic_class = qos->traffic_class;
    param_ptr->delivery_order = qos->delivery_order;
    param_ptr->delivery_of_err_sdu = qos->delivery_of_err_sdu;
    param_ptr->max_sdu_size = qos->max_sdu_size;
    param_ptr->max_bitrate_up_lnk = qos->max_bitrate_up_lnk;
    param_ptr->max_bitrate_down_lnk = qos->max_bitrate_down_lnk;
    param_ptr->residual_bit_err_rate = qos->residual_bit_err_rate;
    param_ptr->sdu_err_ratio = qos->sdu_err_ratio;
    param_ptr->transfer_delay = qos->transfer_delay;
    param_ptr->traffic_hndl_priority = qos->traffic_hndl_priority;
    param_ptr->guarntd_bit_rate_up_lnk = qos->guarntd_bit_rate_up_lnk;
    param_ptr->guarntd_bit_rate_down_lnk = qos->guarntd_bit_rate_down_lnk;
    param_ptr->ext_max_bitrate_down_lnk = qos->ext_max_bitrate_down_lnk; // QoS length increases to 16 bytes
    param_ptr->ext_guarntd_bit_rate_down_lnk = qos->ext_guarntd_bit_rate_down_lnk; // QoS length increases to 16 bytes
    param_ptr->ext_max_bitrate_up_lnk = qos->ext_max_bitrate_up_lnk; // QoS length increases to 16 bytes
    param_ptr->ext_guarntd_bit_rate_up_lnk = qos->ext_guarntd_bit_rate_up_lnk; // QoS length increases to 16 bytes
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_EQOS_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, action);
#endif /* __R99__ */
#endif /* defined(__EXT_PDP_CONTEXT_ON__) */
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_eqos_req
 * DESCRIPTION
 *  This function handles +CGEQREQ and +CGEQMIN.
 *  3G Query Quality of Service Profile (Requested) and Quality of Service Profile (Minimum acceptable)
 * PARAMETERS
 *  src_id          [IN]
 *  qos_type        [IN]
 *  info            [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_get_eqos_req(kal_uint8 src_id, kal_uint8 qos_type, l4c_eqos_list_struct *info)
{

    kal_bool ret_val = KAL_TRUE;
#if defined(__EXT_PDP_CONTEXT_ON__)
#ifdef __R99__
    if (is_tcm_cmd_conflict_basic(src_id, CGEQREQ_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    ret_val = l4ctcm_get_eqos_info((atci_qos_enum)qos_type, info);//rvct_warning, mtk02285
#endif /* __R99__ */
#endif /* __EXT_PDP_CONTEXT_ON__ */
    return ret_val;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_exe_undefine_req
 * DESCRIPTION
 *  This function is used to undefine PDP context of +CGDCONT, +CGDSCONT, +CGQREQ,
 *  +CGEQREQ, +CGQMIN, +CGEQMIN, +CGTFT
 * PARAMETERS
 *  src_id              [IN]
 *  cid                 [IN]
 *  undef_action        [IN]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_exe_undefine_req(kal_uint8 src_id, kal_uint8 cid, kal_uint16 undef_action)
{
#if defined(__EXT_PDP_CONTEXT_ON__)
    l4ctcm_undefine_pdp_info_req_struct *param_ptr;

    if (is_tcm_cmd_conflict_basic(src_id, CGUNDEF_EXE) == KAL_TRUE) //MAUI_02232041, mtk02285, 20100128
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_undefine_pdp_info_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_undefine_pdp_info_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->context_id = cid;
    param_ptr->undefine_action = undef_action;

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, CGUNDEF_EXE);
#endif /* __EXT_PDP_CONTEXT_ON__ */
    return KAL_TRUE;

}

#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__NDIS_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_config_option_req
 * DESCRIPTION
 *  This function is used to undefine PDP context of +CGDCONT, +CGDSCONT, +CGQREQ,
 *  +CGEQREQ, +CGQMIN, +CGEQMIN, +CGTFT
 * PARAMETERS
 *  src_id      [IN]
 *  prco        [?]
 * RETURNS
 *  the description of return value, if any.
 *****************************************************************************/
kal_bool l4c_ps_set_config_option_req(kal_uint8 src_id, l4ctcm_set_config_option_req_struct *request)
{
    l4ctcm_set_config_option_req_struct *param_ptr;
    l4c_config_option_struct* prco_ptr;

    param_ptr = (l4ctcm_set_config_option_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_config_option_req_struct), TD_RESET);
    prco_ptr = &(param_ptr->prco);

    param_ptr->src_id = src_id;
    prco_ptr->context_id = (request->prco).context_id;
    kal_mem_cpy(prco_ptr->user_name, (request->prco).user_name, MAX_GPRS_USER_NAME_LEN);
    kal_mem_cpy(prco_ptr->password, (request->prco).password, MAX_GPRS_PASSWORD_LEN);
    kal_mem_cpy(prco_ptr->pri_dns, (request->prco).pri_dns, 4);
    kal_mem_cpy(prco_ptr->sec_dns, (request->prco).sec_dns, 4);
    prco_ptr->is_chap = (request->prco).is_chap;
#if defined(__IPV6__)
    prco_ptr->act_pdp_cntxt_req_ipv6_dns = (request->prco).act_pdp_cntxt_req_ipv6_dns;
#endif
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_CONFIG_OPTION_REQ, param_ptr);
    //l4c_set_user_action(L4C_TCM, src_id, CGUNDEF_EXE);
    return KAL_TRUE;
}
#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__NDIS_SUPPORT__) */


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_acl_mode_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  src_id      [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_get_acl_mode_req(kal_uint8 src_id)
{
#ifdef __ACL_SUPPORT__
    l4c_ps_get_acl_mode_lrsp(KAL_TRUE, l4ctcm_get_acl_type());
#endif
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_leave_acl_menu_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_leave_acl_menu_req(void)
{
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_LEAVE_ACL_MENU_REQ, NULL);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_acl_mode_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  src_id      [IN]
 *  on_off      [IN]
 *  pin         [?]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_set_acl_mode_req(kal_uint8 src_id, kal_uint8 on_off, kal_uint8 *pin)
{
    l4ctcm_set_acl_mode_req_struct *param_ptr;

    param_ptr = (l4ctcm_set_acl_mode_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_acl_mode_req_struct), TD_RESET);
    param_ptr->on_off = on_off;
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_ACL_MODE_REQ, param_ptr);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_acl_entries_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  start_index             [IN]
 *  max_read_entries        [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_get_acl_entries_req(kal_uint16 start_index, kal_uint16 max_read_entries)
{
    l4ctcm_get_acl_entries_req_struct *param_ptr;

    param_ptr = (l4ctcm_get_acl_entries_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_get_acl_entries_req_struct), TD_RESET);
    param_ptr->start_index = start_index;
    param_ptr->max_read_entries = max_read_entries;
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_GET_ACL_ENTRIES_REQ, param_ptr);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_add_acl_entry_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  acl_entry       [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_add_acl_entry_req(l4c_tcm_acl_entry_struct acl_entry)
{
    l4ctcm_add_acl_entry_req_struct *param_ptr;

    param_ptr = (l4ctcm_add_acl_entry_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_add_acl_entry_req_struct), TD_RESET);
    kal_mem_cpy(&param_ptr->acl_entry, &acl_entry, sizeof(l4c_tcm_acl_entry_struct));
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_ADD_ACL_ENTRY_REQ, param_ptr);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_acl_entry_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  index           [IN]
 *  acl_entry       [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_set_acl_entry_req(kal_uint16 index, l4c_tcm_acl_entry_struct acl_entry)
{
    l4ctcm_set_acl_entry_req_struct *param_ptr;

    param_ptr = (l4ctcm_set_acl_entry_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_acl_entry_req_struct), TD_RESET);
    param_ptr->index = index;
    kal_mem_cpy(&param_ptr->acl_entry, &acl_entry, sizeof(l4c_tcm_acl_entry_struct));
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_ACL_ENTRY_REQ, param_ptr);
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_del_acl_entry_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  del_all         [IN]
 *  index           [IN]
 *  acl_entry       [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_bool l4c_ps_del_acl_entry_req(kal_bool del_all, kal_uint16 index, l4c_tcm_acl_entry_struct acl_entry)
{
    l4ctcm_del_acl_entry_req_struct *param_ptr;

    param_ptr = (l4ctcm_del_acl_entry_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_del_acl_entry_req_struct), TD_RESET);
    param_ptr->del_all = del_all;
    param_ptr->index = index;
    kal_mem_cpy(&param_ptr->acl_entry, &acl_entry, sizeof(l4c_tcm_acl_entry_struct));
    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_DEL_ACL_ENTRY_REQ, param_ptr);
    return KAL_TRUE;
}

/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
/*****************************************************************************
 * FUNCTION
 *  l4c_callback_peer_message_trap
 * DESCRIPTION
 *  This function is called by flc2_callback_peer_message_trap() to handle the flc buff
 *  That can avoid fatal error while free ilm trying to free flc2 buffer.
 * PARAMETERS
 *  ilm_ptr          [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_callback_peer_message_trap(ilm_struct *ilm_ptr)
{

    kal_bool ret;
    if (ilm_ptr->peer_buff_ptr != NULL)
    {
        ilm_ptr->peer_buff_ptr->ref_count = 1;
        /*
         * For GPRS_FLC_UT MAUI_02419672 mtk02126
         * We insert the buff into queue and free them in l4c_gprs_data_timeout_hdlr()
         * We don't free flow contrl buffer here
         * because we want the flow control buffer to be run out.
         * By this way, we can UT the code for get flow control buffer fail.
         */
        ret = lcd_lqueue_insert_at_rear(L4C_PTR->gprs_flc_queue, ilm_ptr->peer_buff_ptr);
        ASSERT(ret == KAL_TRUE);
        ilm_ptr->peer_buff_ptr = NULL;
    }
}
#endif //~#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)

#if 1  /* Deprecated, mtk02285, 2011-12-04 */
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_find_data_src_id
 * DESCRIPTION
 *  This function is added in MAUI_02532440 mtk02126 to find a source id with PDP context
 *  We assume there is at most one active PDP conetxt at the same time.
 * PARAMETERS
 *  Void
 * RETURNS
 *  the source id with valid PDP context
 *  if not found, return INVALID_SRC
 *****************************************************************************/
l4c_source_id_enum l4c_ps_find_data_src_id(void)
{
#if defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__)
    l4c_source_id_enum src_id = INVALID_SRC;

    if (RMMI_PTR->online_cmd_state == L4C_ONLINE_DATA_GPRS_STATE) //MAUI_01652672, mtk02285, 20090324
    {
        // Now we support +++ to escape data mode from GPRS dialup connection
        return RMMI_PTR->online_cmd_state_src_id;
    }
    for (src_id = RMMI_SRC; src_id < RMMI_ALL; src_id++)
    {
        if ((L4C_PTR->cc_current_action[src_id] == CGDATA_EXE)
                || (L4C_PTR->cc_state[src_id] == L4C_ONLINE_DATA_GPRS_STATE)) //MAUI_02124634, mtk02285, 20091207
        {
            return src_id;
        }
    }
#endif /* defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) */
    kal_trace(TRACE_WARNING, WARNING_NO_GPRS_DIALUP_CAN_BE_DICONNECTED);
    return INVALID_SRC;
}
#endif /* Deprecated, mtk02285, 2011-12-04 */

#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_provision_context_req
 * DESCRIPTION
 *  This function is to read ALL provision context entries from NVRAM
 * PARAMETERS
 *  *
 * RETURNS
 *  always KAL_TRUE
 *****************************************************************************/
kal_bool l4c_ps_get_provision_context_req(kal_uint8 src_id, kal_bool get_all)
{
    kal_uint16 action = (KAL_TRUE == get_all)?(MOBILE_BROADBAND_PROVISION_CONTEXT_GET_ALL):(MOBILE_BROADBAND_PROVISION_CONTEXT_GET);
    //Compose an NVRAM read request to read the 1st Provision Context entry and send it
    if(!is_eq_cmd_conflict(src_id, action))
    {
        nvram_read_req_struct* param_ptr = NULL;
        l4c_set_user_action(L4C_EQ, src_id, action); /* Reset in nvram_read_cnf_hdlr */
        param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(
                        src_id, NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, 1, 1); //para is for index; rec_amount is for record number within 1 operation
        l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_provision_context_req
 * DESCRIPTION
 *  This function is to write only 1 provision context entry into NVRAM
 * PARAMETERS
 *  kal_uint8 src_id
 * RETURNS
 *  If no EQ cmd conflict, then return KAL_TRUE. Otherwise, KAL_FALSE
 *****************************************************************************/
kal_bool l4c_ps_set_provision_context_req(
    kal_uint8 src_id,
    kal_uint8 entry_id,
    kal_uint32 pcid,
    kal_uint8 pctype,
    kal_uint8 *apn,
    kal_uint8 *username,
    kal_uint8 *passwd,
    kal_uint8 comp,
    kal_uint8 auth_type,
    kal_uint8 *plmn_in_digit,
    kal_uint16 status
)
{
    // Compose an NVRAM write request and send it
    if(!is_eq_cmd_conflict(src_id, MOBILE_BROADBAND_PROVISION_CONTEXT_SET))
    {
        nvram_write_req_struct *param_ptr = NULL;
        nvram_ef_mobile_broadband_provision_context_struct cntxt_entry;
        l4c_set_user_action(L4C_EQ, src_id, MOBILE_BROADBAND_PROVISION_CONTEXT_SET); /* Reset in nvram_write_cnf_hdlr */
        param_ptr = (nvram_write_req_struct *)l4c_construct_nvram_write_local_para(src_id,
                    NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID, entry_id); //para is for index, start from 1
        kal_mem_set(&cntxt_entry, 0, sizeof(cntxt_entry));
        cntxt_entry.context_id = pcid;
        if (1 == status)
        {
            cntxt_entry.context_type = pctype;
            kal_mem_cpy(&cntxt_entry.access_string, apn, sizeof(cntxt_entry.access_string));
            kal_mem_cpy(&cntxt_entry.user_name, username, sizeof(cntxt_entry.user_name));
            kal_mem_cpy(&cntxt_entry.pass_word, passwd, sizeof(cntxt_entry.pass_word));
            cntxt_entry.compression = comp;
            cntxt_entry.auth_type = auth_type;
            kal_mem_cpy(&cntxt_entry.plmn_in_digit, plmn_in_digit, sizeof(cntxt_entry.plmn_in_digit));
        }
        cntxt_entry.status = status;
        l4c_send_msg_to_nvm(MSG_ID_NVRAM_WRITE_REQ, param_ptr, (kal_uint8*)&cntxt_entry, sizeof(cntxt_entry));
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}
#endif /* __MOBILE_BROADBAND_PROVISION_CONTEXT__ */

#ifdef __MEDIATEK_SMART_QOS__
/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_msq_mode_req
 * DESCRIPTION
 *  This function is to read ALL provision context entries from NVRAM
 * PARAMETERS
 *  *
 * RETURNS
 *  always KAL_TRUE
 *****************************************************************************/
kal_bool l4c_ps_get_msq_mode_req(kal_uint8 src_id)
{
    kal_bool ret_val;
    kal_bool is_msq_on;

    ret_val = l4ctcm_get_msq_mode_info(&is_msq_on);
    rmmi_msqon_read_result_code_fmttr(src_id, is_msq_on);

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_get_msq_entry_req
 * DESCRIPTION
 *  This function is to read ALL provision context entries from NVRAM
 * PARAMETERS
 *  *
 * RETURNS
 *  always KAL_TRUE
 *****************************************************************************/
kal_bool l4c_ps_get_msq_entry_req(kal_uint8 src_id)
{
    kal_bool    ret_val;
    kal_uint8   i;
    nvram_ef_msq_list_struct *msq_list;
    nvram_ef_msq_entry_struct* msq_entry;

    ASSERT(sizeof(nvram_ef_msq_list_struct) < 2048);
    msq_list = (nvram_ef_msq_list_struct*) get_ctrl_buffer(sizeof(nvram_ef_msq_list_struct));

    ret_val = l4ctcm_get_msq_entry_info(msq_list);
    if (ret_val == KAL_TRUE)
    {
        for (i = 0; i < MSQ_MAX_ENTRY_COUNT; i++)
        {
            msq_entry = &(msq_list->msq_entry[i]);
            if (msq_entry->entry_id != 0)
            {
                rmmi_msq_read_result_code_fmttr(src_id, msq_entry);
            }
        }
    }
    free_ctrl_buffer(msq_list);

    return ret_val;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_provision_context_req
 * DESCRIPTION
 *  This function is to write only 1 provision context entry into NVRAM
 * PARAMETERS
 *  kal_uint8 src_id
 * RETURNS
 *  If no EQ cmd conflict, then return KAL_TRUE. Otherwise, KAL_FALSE
 *****************************************************************************/
kal_bool l4c_ps_set_msq_mode_req(
    kal_uint8  src_id,
    kal_uint8  on)
{
    l4ctcm_set_msq_mode_req_struct *param_ptr = NULL;

    if (is_tcm_cmd_conflict_basic(src_id, SMART_QOS_MODE_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_msq_mode_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_msq_mode_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->is_msq_on = on;

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_MSQ_MODE_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, SMART_QOS_MODE_SET);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_ps_set_provision_context_req
 * DESCRIPTION
 *  This function is to write only 1 provision context entry into NVRAM
 * PARAMETERS
 *  kal_uint8 src_id
 * RETURNS
 *  If no EQ cmd conflict, then return KAL_TRUE. Otherwise, KAL_FALSE
 *****************************************************************************/
kal_bool l4c_ps_set_msq_entry_req(
    kal_uint8  src_id,
    kal_uint8  id,
    kal_uint8  *plmn_in_digit,
    kal_uint8  nw_on,
    kal_uint8  sim_on)
{
    l4ctcm_set_msq_entry_req_struct *param_ptr = NULL;

    if (is_tcm_cmd_conflict_basic(src_id, SMART_QOS_ENTRY_SET) == KAL_TRUE)
    {
        return KAL_FALSE;
    }

    param_ptr = (l4ctcm_set_msq_entry_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4ctcm_set_msq_entry_req_struct), TD_RESET);

    param_ptr->src_id = src_id;
    param_ptr->entry.entry_id = id;
    param_ptr->entry.check_nw = nw_on;
    param_ptr->entry.check_sim = sim_on;
    kal_mem_cpy(&param_ptr->entry.plmn_id, plmn_in_digit, sizeof(param_ptr->entry.plmn_id));

    l4c_send_msg_to_tcm(MSG_ID_L4CTCM_SET_MSQ_ENTRY_REQ, param_ptr);
    l4c_set_user_action(L4C_TCM, src_id, SMART_QOS_ENTRY_SET);

    return KAL_TRUE;
}

#endif

#endif /* __MOD_TCM__ */

