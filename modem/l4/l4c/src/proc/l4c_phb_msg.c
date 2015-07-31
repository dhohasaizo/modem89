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
 * L4C_PHB_MSG.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_PHB_MSG_C
#ifdef __MOD_PHB__

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "ps2sat_struct.h"
#include "sim_common_enums.h"
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
//#include "l4c_ft.h"
#include "l4c_sendmsg.h"
#include "l4_trc.h"

#include "nvram_data_items.h"
#include "nvram_struct.h"
#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

//#include "mcd_l3_inc_struct.h"
#include "l3_inc_enums.h"

//#include "l4c_aux_struct.h"

#ifdef __MOD_CSM__
//#include "l4_defs.h"

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
#include "csmcc_common_enums.h"
//#include "csmcc_atfunc.h"

#include "csmcc_enums.h"
#endif /* __MOD_CSM__ */ 
#ifdef __MOD_SMSAL__
//#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"
#include "l4c2smsal_struct.h"

//#include "mcd_l4c2smsal_peer.h"
//#include "mcd_ps2sat_peer.h"

#endif /* __MOD_SMSAL__ */ 
#include "phb_defs.h"
//#include "l4c2phb_enums.h"
#include "l4c2phb_struct.h"
#include "phb_sap.h"

#include "l4c_utility.h"
//#include "l4c_ss_parse.h"
//#include "l4c2smu_struct.h"
//#include "keypad_sw.h"

//#include "abm_soc_enums.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"

#include "lmmi_ind.h"
#include "lmmi_rsp.h"

//#include "mcd.h"
//#include "abm_soc_enums.h"
//#include "abm2l4c_struct.h"
//#include "l4c2abm_struct.h"
#include "l4c2ppp_struct.h"
#include "l4crac_enums.h"
#include "l4c_nw_cmd.h"

#include "l4c_hz_utility.h"

#include "l4c2tcm_struct.h"
#include "l4crac_func.h"

#include "rmmi_ind.h"
#include "rmmi_rsp.h"
#include "rmmi_rspfmttr.h"
#include "l4c_phb_cmd.h"
#include "rmmi_utility.h"
#include "l4c_cc_msg.h"
#include "l4c_gprs_msg.h"
#include "l4c_sms_cmd.h"
#include "l4a.h"
//#include "mmi_msg_struct.h"

//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "drv_comm.h"
#include "dcl.h"
//#include "mmi_l3_enums.h"
//#include "stack_ltlcom.h"
//#include "common_nvram_editor_data_item.h"
//#include "l4c2uem_struct.h"

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "string.h"

#include "l4_msgid.h"
#include "ppp_msgid.h"
#include "sim_ps_msgid.h"
#include "nvram_msgid.h"

#if defined(__USB_TETHERING__)
#include "cbm_consts.h"
//#include "tcm_common_enums.h"
#endif //MAUI_02957973

#if defined(__MOD_TCM__) && defined(__IPV4V6__) && defined(__IPV6__)
#include "l4c2tcm_func.h"
#endif

#include "rmmi_sio.h"

extern kal_uint8 pppl4c_get_error_type(void);

extern kal_uint8 custom_get_dcd_value_for_data_state(void);
extern kal_uint8 custom_get_dcd_value_for_cmd_state(void);

#if defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__)
kal_bool custom_l4c_ndis_fdn_enable(void);
#endif


/*****************************************************************************
 * FUNCTION
 *  l4cphb_init_ln_cnf_hdlr
 * DESCRIPTION
 *  This function is used to handle MSG_ID_L4CPHB_INIT_LN_CNF message
 *  which means that the call log of PHB is reset.
 * Then, this function will select the next module to be initialized
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_init_ln_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_init_ln_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4cphb_init_ln_cnf_struct*) local_para_ptr;

    kal_brief_trace(TRACE_INFO, INFO_L4C_STARTUP,
              //L4C_PTR->cc_sub_state[LMMI_SRC],
              0, l4c_ptr->cc_current_action[LMMI_SRC2], l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);

    if (msg_ptr->result != PHB_ERRNO_SUCCESS)
    {

    }
    else
    {
    #ifdef __HOMEZONE_SUPPORT__
        l4c_hz_init();
    #else /* __HOMEZONE_SUPPORT__ */ 

    #ifndef _SMSAL_FIRST_


        l4c_phb_startup_begin_req();        

    #else /* _SMSAL_FIRST_ */ 
        // act smsal
        l4csmsal_init_req_struct *param_ptr;

        if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
        {
            return;
        }
        param_ptr = (l4csmsal_init_req_struct*)
            construct_local_para((kal_uint16) sizeof(l4csmsal_init_req_struct), TD_RESET);

        param_ptr->src_id = LMMI_SRC;
        param_ptr->is_sim_change = l4c_check_sim_status();
        param_ptr->init_type = SMSAL_NORMAL_INIT;
        l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_REQ, param_ptr, NULL, 0);
    #endif /* _SMSAL_FIRST_ */ 

    #endif /* __HOMEZONE_SUPPORT__ */ 
        l4c_phb_ln_ready_lind();
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_startup_cnf_hdlr
 * DESCRIPTION
 *  This function is used to handle the message MSG_ID_L4CPHB_STARTUP_CNF
 *  which means that MOD_PHB is initialited complete
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_startup_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_startup_cnf_struct *msg_ptr = NULL;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #ifdef WAP_SUPPORT
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
    #endif
    kal_uint8 temp_src; 

    msg_ptr = (l4cphb_startup_cnf_struct*) local_para_ptr;

    kal_brief_trace(TRACE_INFO, INFO_L4C_STARTUP,
              //L4C_PTR->cc_sub_state[LMMI_SRC],
              0, l4c_ptr->cc_current_action[LMMI_SRC2], l4c_ptr->smu_activated, L4C_COMM_PTR->rac_activated);
    if (msg_ptr->result != PHB_ERRNO_SUCCESS)
    {
        /* phb fail */
    }
    else
    {
        /**********************************************
        * if defined __PHB_STORAGE_BY_MMI__,
        * we should delay the init process of SMSAL
        * until we receive MSG_ID_MMI_PHB_INIT_RES_REQ from MMI
        ***********************************************/
    #ifndef _SMSAL_FIRST_
        // act smsal
        l4csmsal_init_req_struct *param_ptr;

        if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
        {
            return;
        }

	  /*  [MAUI_01710171], mtk02480
	    * 		Only send MSG_ID_L4CSMSAL_INIT_REQ with type=SMSAL_NORMAL_INIT once,
	    *		When SIM refresh or SIM Access profile on, do not send again.
	    */
        if (l4c_ptr->sms_init_sent == KAL_FALSE)
        {
            param_ptr = (l4csmsal_init_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4csmsal_init_req_struct), TD_RESET);

            param_ptr->src_id = LMMI_SRC;
            param_ptr->is_sim_change = l4c_check_sim_status();
            param_ptr->init_type = SMSAL_NORMAL_INIT;
            l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_INIT_REQ, param_ptr, NULL, 0);
            l4c_ptr->sms_init_sent = KAL_TRUE;

            /**********************************************
            * To support BT test case, 
            * we need to change the default value to SIM
            * When the SIM is inserted and verified
            * Note that this action will be done only once when power on
            ***********************************************/
            #ifndef EXTERNAL_MMI
            if ( is_sim_verified() )  
            {
                rmmi_ptr->phb_storage_type = RMMI_PHB_SM;
            }
            else
            {
                rmmi_ptr->phb_storage_type = RMMI_PHB_ME;
            }
            #else
/* under construction !*/
            #endif
            

        }

    #endif /* _SMSAL_FIRST_ */ 
    }
    /* WAP init */

#ifdef WAP_SUPPORT
    /* Johnny: SIM refresh may occur during PHB init, check MSG_ID_MMI_EQ_POWER_ON_IND is sent or not.
       Is msg_ptr->is_sim_refresh useless now? */
    if (msg_ptr->is_sim_refresh == KAL_FALSE || l4c_comm_ptr->wap_init_flag == KAL_FALSE)
    {
        //#ifndef __WIFI_SUPPORT__
    //#if (!defined (__WIFI_SUPPORT__)) && (!defined (__GEMINI__))
    //    if (l4c_ptr->smu_activated == L4C_SMU_ACTIVE)
    //#endif 
        {
            // if(l4c_current_mod_id == MOD_L4C)
            if (l4c_comm_ptr->wap_init_flag == KAL_FALSE)
            {
                l4c_send_msg_to_wap(MSG_ID_MMI_EQ_POWER_ON_IND, NULL);
                l4c_comm_ptr->wap_init_flag = KAL_TRUE;
            }
        }
    }
#endif /* WAP_SUPPORT */ 

    #if !defined(__PHB_STORAGE_BY_MMI__)
    l4c_ptr->phb_ready_flag = KAL_TRUE;
    #endif
    l4c_ptr->power_on_not_finish = KAL_FALSE;

    l4c_phb_startup_finish_lind(
        msg_ptr->adn_size,
        msg_ptr->phb_size,
        msg_ptr->adn_alpha_length,
        msg_ptr->fdn_alpha_length,
        msg_ptr->bdn_alpha_length,
        msg_ptr->msisdn_alpha_length, 
        msg_ptr->desc);

    temp_src = rmmi_ptr->current_src;
    rmmi_ptr->current_src = RMMI_UNSOLICITED;
    l4c_phb_startup_finish_rind(
        msg_ptr->adn_size,
        msg_ptr->phb_size,
        msg_ptr->adn_alpha_length,
        msg_ptr->fdn_alpha_length,
        msg_ptr->bdn_alpha_length,
        msg_ptr->msisdn_alpha_length,
        msg_ptr->email_length,
        msg_ptr->desc);
    rmmi_ptr->current_src = temp_src; 
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_search_more_entries
 * DESCRIPTION
 *  This funtion is used to output the search result and search more entries 
 *  using the PHB read message if needed
 * PARAMETERS
 *  result                [IN]    the searched result
 *  no_list               [IN]    the number of the returned search entries
 *  list                    [IN]    the returned search entreis
 *  src_id                [IN]    the source id of the action
 *  storage              [IN]    the searched storage type
 * RETURNS
 *  KAL_TRUE or KAL_FALSE to indicate if we search more entries using read message
 *****************************************************************************/

#ifdef __PHB_SORT_ENABLE__
static kal_bool l4cphb_search_more_entries(
        l4c_result_struct result,
        kal_uint16 no_list,
        l4c_phb_entry_struct *list, 
        kal_uint8 src_id, 
        kal_uint8 storage)
{
    // output searched entries
    l4c_phb_get_entry_rrsp(no_list, list);

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);

    // judge if we should continue read the following entreis
    if (no_list < PHB_MAX_PHB_ENTRIES)
    {
        l4c_phb_general_rrsp(&result);
    
        return KAL_FALSE;
    }
    else
    {    
        kal_uint8 phb_storage;
        
        if (storage != RMMI_PHB_ME)
        {
            phb_storage = rmmi_phb_get_sim_storage_by_current_module();
        }
        else
        {
            phb_storage = PHB_STORAGE_NVRAM;
        }    
        l4c_phb_read_req(src_id, 
                            PHB_PHONEBOOK, 
                            phb_storage, 
                            0,
                            (kal_uint16) 0xffff, 
                            list[no_list - 1].index + 1, 
                            PHB_MAX_PHB_ENTRIES, 
                            CPBF_EXE);

        return KAL_TRUE;
    }

   }
#endif

/*****************************************************************************
 * FUNCTION
 *  l4cphb_cnf_aux_hdlr
 * DESCRIPTION
 *  This function is auxiliary function which is used to get returned non-call_log entries from peer buffer
 *
 * PARAMETERS
 *  list                    [OUT]     output entries
 *  peer_buff_ptr      [IN]        the peer buffer
 *  cpbf_findtext      [IN]        the ending test - if the name of entry is different with this string, we should not return it
 * RETURNS
 *  the number of entreis
 *****************************************************************************/
static kal_uint8 l4cphb_cnf_aux_hdlr(l4c_phb_entry_struct **list, peer_buff_struct *peer_buff_ptr)
{
    kal_uint16 no_array;
    kal_uint8 *pdu_ptr;
    l4cphb_phb_entry_array_struct *pdu_data;
    phb_entry_struct *array;
    kal_uint8 i = 0;
    convert_to_digit_enum convert_method;
    l4c_phb_entry_struct tmp_entry;


    if (peer_buff_ptr != NULL)            
    {
        //we just transmit no_array into this function because it is no use
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &no_array);    
        pdu_data = (l4cphb_phb_entry_array_struct*) get_32bits_aligned_val(pdu_ptr);

        #ifndef __MTK_TARGET__
        /* mtk02514 ****************************
        * The following code is used on MODIS.
        * On the other hand, we should modify the added 
        * length 8 if the beginning of array is changed
        *************************************/
        pdu_data->array = ((kal_uint8*)pdu_data) + 8;
        #endif

        // to decrease Stack Size, we reuse the buffer in the peer buffer
        *list = (l4c_phb_entry_struct*) pdu_ptr;
        no_array = pdu_data->no_array;
        array = pdu_data->array;
        for (i = 0; i < no_array; i++)
        {
            // to reuse the peer buffer, we store an entry into local structure first
            tmp_entry.storage = array[i].storage;
            tmp_entry.index = array[i].index;
            tmp_entry.record_index = array[i].record_index;
            tmp_entry.num_index = array[i].num_index; 
            tmp_entry.aas_id= array[i].aas_id;

            kal_mem_cpy(
                (kal_uint8*) & tmp_entry.alpha_id,
                (kal_uint8*) & array[i].alpha_id,
                sizeof(l4_name_struct));
            tmp_entry.alpha_id.name[tmp_entry.alpha_id.name_length] = 0;

            if (tmp_entry.storage != PHB_STORAGE_NVRAM)
            {
                convert_method = CONVERT_TO_DIGIT_WILD;
            }
            else
            {
                convert_method = CONVERT_TO_DIGIT_NORMAL;                
            }
            
            tmp_entry.tel.length = convert_to_general_digit(
                    (kal_uint8*) &array[i].tel_number.addr_bcd[1],
                    (kal_uint8*) tmp_entry.tel.number, 
                    convert_method);

            tmp_entry.tel.type = array[i].tel_number.addr_bcd[0];
            //support tel with "+" for read only
            if (tmp_entry.tel.length == 0 && tmp_entry.tel.type == 0x91)
            {
                tmp_entry.tel.length = 1;
            }
            tmp_entry.type = array[i].type;
            //tmp_entry. = pdu_data->array[i].cap_cnf_id;

            //copy the local structure to list which re-use the buffer in the peer buffer
            kal_mem_cpy( &(*list)[i], &tmp_entry, sizeof(l4c_phb_entry_struct));
        }
    }
    return i;
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_read_response_handler
 * DESCRIPTION
 *  This function is auxiliary function which is used to get returned non-call_log entries from peer buffer
 *
 * PARAMETERS
 *  list                    [OUT]     output entries
 *  peer_buff_ptr      [IN]        the peer buffer
 *  cpbf_findtext      [IN]        the ending test - if the name of entry is different with this string, we should not return it
 * RETURNS
 *  the number of entreis
 *****************************************************************************/
void l4cphb_read_response_handler(
    kal_uint8 src_id,
    l4c_phb_entry_struct *list, 
    kal_uint16 no_data, 
    l4c_result_struct *result,
    kal_uint8 phb_result)
{
    kal_uint8 type;
    phb_storage_enum storage;
    kal_uint16 phb_current_action;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    storage = l4c_phb_get_sim_storage_by_current_module();
    phb_current_action = l4c_ptr->phb_current_action;
    rmmi_ptr->current_src = src_id;
    if (rmmi_ptr->rmmi_atd_mem != RMMI_MEM_DIAL_NONE )
    {
        // handle ATD memory         
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
        if (phb_result != PHB_ERRNO_READ_EMPTY)
        {
            l4c_phb_atd_mem_dial(list[0].tel.number, list[0].tel.type); //MAUI_01614617
        }
        else
        {
            rmmi_ptr->rmmi_atd_mem = RMMI_MEM_DIAL_NONE;
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        }
        return;                                    
    }
    
    if (phb_current_action == CNUM_EXE)
    {
        l4c_phb_get_msisdn_rrsp(no_data, list);
    }
    #ifdef __OP01__
    else if (phb_current_action == SCPBR_EXE)
    {
        if (result->flag != L4C_ERROR && 
            (phb_result != PHB_ERRNO_READ_EMPTY || rmmi_ptr->scpbr_num_index != 0) ) 
        {

            if (rmmi_ptr->scpbr_num_index == 0) 
            {
                rmmi_ptr->scpbr_entry_found = KAL_TRUE;
                
                rmmi_header_rrsp("+SCPBR:");
                rmmi_int_space_rrsp(list[0].record_index);

                kal_mem_cpy(&rmmi_ptr->scpbr_alphaId, &list[0].alpha_id, sizeof(l4_name_struct));
            }

            rmmi_string_comma_rrsp((kal_char*) list[0].tel.number);
            rmmi_int_comma_rrsp(list[0].tel.type);

            l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
            if (rmmi_ptr->scpbr_num_index == 3)
            {
                rmmi_phb_alphaId_rrsp(&rmmi_ptr->scpbr_alphaId, RMMI_COMMA);
                rmmi_int_comma_rrsp(
                        rmmi_ptr->scpbr_alphaId.name_dcs == PHB_ASCII ? 0 : 1);

                l4c_ptr->route_thru_lmmi = KAL_TRUE;
                l4c_ptr->route_thru_lmmi_user = src_id;

                //read email
                l4c_mmi_read_additional_req_lind(
                        src_id, PHB_EMAIL, storage, 1, rmmi_ptr->cpbr_range[0]);
            }
            else 
            {
                rmmi_ptr->scpbr_num_index++;
                l4c_phb_get_entry_for_op01_req(
                        src_id, PHB_ANR, storage, 
                        rmmi_ptr->scpbr_num_index, rmmi_ptr->cpbr_range[0]);
            }
            return;
        }
    }
    #endif
    else if (result->flag != L4C_ERROR &&
        phb_result != PHB_ERRNO_READ_EMPTY)
    {
        #ifdef __AT_EPBUM_SUPPORT__
        if (phb_current_action == EPBUM_EXE)
        {
            l4c_phb_get_epbum_entry_rrsp(
                    list[0].type, 
                    list[0].record_index, 
                    list[0].num_index,
                    &list[0]);
        }
        else
        #endif
        {
            l4c_phb_get_entry_rrsp(no_data, list);
        }
    }

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);

    if ( (phb_current_action == CPBR_RANGE_EXE 
        || phb_current_action == CNUM_EXE || phb_current_action == SCPBR_EXE)
        && result->flag != L4C_ERROR)
    {
        /* Judge if we finish read PHB entries of the specified range */
        rmmi_ptr->cpbr_range[0]++;
        if (rmmi_ptr->cpbr_range[0] <= rmmi_ptr->cpbr_range[1])
        {
            if (phb_current_action == CPBR_RANGE_EXE || phb_current_action == SCPBR_EXE)
            {
                
                if ((rmmi_ptr->phb_storage_type == RMMI_PHB_SM) || (rmmi_ptr->phb_storage_type == RMMI_PHB_ME))
                {
                    type = PHB_PHONEBOOK;
                }
                else if (rmmi_ptr->phb_storage_type == RMMI_PHB_FD)
                {
                    type = PHB_FDN;                                 
                }
                else if (rmmi_ptr->phb_storage_type == RMMI_PHB_ON)
                {
                    type = PHB_MSISDN;
                }
                else
                    return;
            
                if (rmmi_ptr->phb_storage_type == RMMI_PHB_ME)
                {
                    storage = PHB_STORAGE_NVRAM;
                }
            
                #ifdef __OP01__
                if (phb_current_action == SCPBR_EXE)
                {
                    rmmi_ptr->scpbr_num_index = 0;
                    l4c_phb_get_entry_for_op01_req(src_id, type, storage, 0, rmmi_ptr->cpbr_range[0]);
                }
                else
                #endif
                {
                    l4c_phb_get_entry_by_range_req(src_id, type, storage, 0xffff, rmmi_ptr->cpbr_range[0], 1);
                }
            }
            else
            {
                l4c_phb_get_entry_by_index_req(src_id, PHB_MSISDN, storage, 0, 0xffff, rmmi_ptr->cpbr_range[0], 1);
            }
            return;
        }
        #ifdef __OP01__
        else if (phb_current_action == SCPBR_EXE && rmmi_ptr->scpbr_entry_found == KAL_FALSE)
        {
            result->flag = L4C_ERROR; 
            result->cause = RMMI_ERR_NO_FOUND; 
        }
        #endif
    }

    /* End of the read */
    l4c_phb_general_rrsp(result);       
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_read_cnf_hdlr
 * DESCRIPTION
 *  This function is used to handle the message MSG_ID_L4CPHB_READ_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_read_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_read_cnf_struct *msg_ptr = NULL;
    l4c_phb_entry_struct *list;
    l4c_result_struct result;
    kal_uint8 src_id;
    kal_uint8 i = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    msg_ptr = (l4cphb_read_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    rmmi_ptr->current_src = src_id;
    
    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_EMPTY);   

    /** mtk02514 **********************************
     * "clear L4C_PHB current action and user" must be after
     * we output the read data, since in the output function, 
     * we wll refer to the phb_current_action
     ********************************************/

    list = NULL;
    i = l4cphb_cnf_aux_hdlr(&list, peer_buff_ptr);

    if ( src_id == LMMI_SRC )
    {
        if(msg_ptr->result == PHB_ERRNO_READ_EMPTY)
        {
            result.flag = L4C_ERROR;
            result.cause = PHB_ERRNO_READ_EMPTY;
            //result.cause = msg_ptr->cause;
        }

        l4c_phb_get_entry_by_index_lrsp(result, i, list, msg_ptr->result);

        /*************************************
         * since we don't remember the LMMI state, 
         * we do not need to clear PHB action and user here
         *************************************/
    }
    else if (src_id >= RMMI_SRC)
    {
        /* mtk02514 * MAUI_01656724 * 090328 *****************************
        * we should not do any action when the phb_current_action is L4C_NO_ACTION
        * since it might output the additional OK or ERROR to the UART
        *************************************************************/
        if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
        {
            return;
        }
        /* AT+CPBR or AT+CNUM */
        #if !defined(__PHB_STORAGE_BY_MMI__)
        else if (l4c_ptr->phb_current_action != CPBF_EXE)
        {
            l4cphb_read_response_handler(src_id, list, i, &result, msg_ptr->result);
        }
        #endif
        #ifdef __PHB_SORT_ENABLE__
        /* add by mtk00714 , for AT+CPBF */
        else if (l4c_ptr->phb_current_action == CPBF_EXE)
        {
            kal_uint8 no_list;
            for (no_list=0; no_list<i; no_list++) 
            {
                if (rmmi_ptr->cpbf_findtext != NULL && 
                    strncmp((char*)list[no_list].alpha_id.name, 
                            (char*)rmmi_ptr->cpbf_findtext, 
                            strlen((char*)rmmi_ptr->cpbf_findtext)) != 0)
                {
                    break;
                }
            }

            /* mtk02514 ******************************
            * l4cphb_search_more_entries will judge if we need to 
            * continou search PHB entries. If not, we will clear PHB
            * action and user. At the same time, we will aslo 
            * output searched entries to the UART.
            ****************************************/
            l4cphb_search_more_entries(result, no_list, list, src_id, rmmi_ptr->phb_storage_type);
        }
        #endif
        /* End: add by mtk00714 , for AT+CPBF */
    }   
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_search_cnf_hdlr
 * DESCRIPTION
 *  This function is used to handle the message MSG_ID_L4CPHB_SEARCH_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_search_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_search_cnf_struct *msg_ptr;

    //kal_uint8                        cli_validity = 0;
    kal_uint8 src_id;    /* i : # of list entries */
    kal_uint8 action = L4C_NO_ACTION;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4cphb_search_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;
    if (l4c_ptr->sms_current_action[src_id] != L4C_NO_ACTION)
    {
        action = l4c_ptr->sms_current_action[src_id];
    }
    else if (l4c_ptr->phb_current_action != L4C_NO_ACTION)
    {
        action = l4c_ptr->phb_current_action;
    }

    if (1)
    {
        switch (action)
        {
            #ifdef __PHB_SORT_ENABLE__
            case CPBF_EXE:
            {
                l4c_phb_entry_struct *list, tmp_entry;
                l4c_result_struct result;
                kal_uint8 i = 0;

                kal_mem_set(&tmp_entry, 0, sizeof(l4c_phb_entry_struct) * 1);
                list = &tmp_entry;

                i = l4cphb_cnf_aux_hdlr(&list, peer_buff_ptr);
                l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_FAIL);

                if (src_id == LMMI_SRC)
                {
                    // now, there is no requerst from LMMI
                    //l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
                    //l4c_phb_get_entry_by_text_lrsp(result, i, list);
                }

                /* modify by mtk00714 , in order to read more than 15 entries for RMMI */
                else
                {
                    rmmi_ptr->current_src = src_id; 

                    /* mtk02514 ******************************
                    * l4cphb_search_more_entries will judge if we need to 
                    * continou search PHB entries. If not, we will clear PHB
                    * action and user. At the same time, we will aslo 
                    * output searched entries to the UART.
                    ****************************************/
                    l4cphb_search_more_entries(result, i, list, src_id, rmmi_ptr->phb_storage_type);
                }
                break;
            }
            #endif
            default:
            {
                /* error */
            }
        }
    }
    else
    {
        /* wrong msg error */
    }
    return;
}



/*****************************************************************************
 * FUNCTION
 *  l4cphb_approve_cnf_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_APPROVE_CNF 
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_approve_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_approve_cnf_struct *msg_ptr = NULL;
    //l4cphb_phb_entry_array_struct *pdu_data = NULL;
    
    l4c_result_struct result;
    kal_uint8 src_id, temp_src;
    l4c_ss_string_info_struct info;
    kal_uint8 call_type, status;
    l4_addr_bcd_struct called_number;
    
    l4ccsm_cc_call_setup_req_struct *cc_call_setup_req;
    l4ccsm_cc_emergency_call_setup_req_struct *cc_ecc_call_setup_req;
    l4cphb_approve_req_struct *approve_req;

    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_parameter_struct *cc_parameter;

    msg_ptr = (l4cphb_approve_cnf_struct*) local_para_ptr;

    temp_src = msg_ptr->src_id;
    src_id = msg_ptr->src_id;
    cc_parameter = &l4c_ptr->cc_parameter[src_id];

    if (msg_ptr->result != PHB_ERRNO_SUCCESS)
    {
        //PHB will fill the error cause to PHB_CAUSE_FDN_BLOCKED if msg_ptr->type = FDN
    	if (msg_ptr->type != PHB_FDN && msg_ptr->type != PHB_ECC)
	    {
    	    /* mtk01616_090116: PHB only fill in error cause when type = FDN or ECC 
    	       so fill in general cause here to prevent floating cause value */
	        msg_ptr->cause = CM_L4C_GEN_CAUSE; 
    	}	
    }
#ifndef __PHB_APPROVE_BY_MMI__
    if (l4c_ptr->cc_current_action[src_id] == ATD_APP)
    {
#if 0 //DUMA00144393
        #ifdef __UCM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
#endif

        if ((msg_ptr->result != PHB_ERRNO_SUCCESS))
        {
            /********************************
             * Approve Error !!!
             *********************************/               
            info.opcode = INVALID_OPERATION;
            result.flag = KAL_FALSE;
            result.cause = msg_ptr->cause;

            #ifdef __UCM_SUPPORT__
                l4c_ss_string_parsing_lrsp(result, &info);
            #else
                if (src_id >= RMMI_SRC)
                {
                    result.flag = L4C_ERROR;
                    l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                }

                if (src_id == LMMI_SRC)
                {
                    /*in non-UCM project, MMI need to konw whether it's CC or SS operation when FDN check fail*/
                    info.opcode = CC_OPERATION;
                    l4c_ss_string_parsing_lrsp(result, &info);
                }
                else
                {
                    l4c_ptr->ceer_report = msg_ptr->cause; //MAUI_02397275
                    rmmi_ptr->current_src = src_id;
                    l4c_ss_string_parsing_rrsp(result, &info);
                }
            #endif                

            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;

            l4c_clear_cc_queued_msg(src_id);

            l4c_ptr->mo_call_ecc_info = INFO_ECC_CHECK_BY_MODEM;//mtk01616_090804: reset ecc_info
        }
        else
        {
            /********************************
             * Approve Success !!!
             *********************************/

            cc_call_setup_req = (l4ccsm_cc_call_setup_req_struct*) cc_parameter->data;
            call_type = cc_call_setup_req->call_type;

            kal_mem_cpy(&called_number,&(cc_call_setup_req->called_number),sizeof(l4_addr_bcd_struct));

            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;

            //MAUI_02066657 data call is only approved by FDN, no ECC checking
            if ((msg_ptr->type == PHB_ECC) 
                || (L4C_PTR->mo_call_ecc_info == INFO_ECC_CALL)
                #if defined(__ECALL_SUPPORT__)
                || (L4C_PTR->mo_call_ecc_info == INFO_ECALL_MANUALLY_INITIATED)
                || (L4C_PTR->mo_call_ecc_info == INFO_ECALL_AUTOMATICALLY_INITIATED)
                #endif
                ) 
            {
                /*************************************
                * ECC call except data call
                *************************************/
 
                l4c_clear_cc_parameter(src_id);
                
                cc_parameter->length = sizeof(l4ccsm_cc_emergency_call_setup_req_struct);

                cc_parameter->data =
                    (l4ccsm_cc_emergency_call_setup_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_emergency_call_setup_req_struct), TD_RESET);

                cc_ecc_call_setup_req = (l4ccsm_cc_emergency_call_setup_req_struct*) cc_parameter->data;

                kal_mem_cpy(&(cc_ecc_call_setup_req->called_number),&called_number,sizeof(l4_addr_bcd_struct));
                cc_ecc_call_setup_req->src_id = temp_src;
                cc_ecc_call_setup_req->service_category = msg_ptr->esc;     //for R5 ECC category

                #if defined(__ECALL_SUPPORT__)
                if (L4C_PTR->mo_call_ecc_info == INFO_ECALL_MANUALLY_INITIATED)
                {
                    cc_ecc_call_setup_req->service_category |= CSMCC_CATEGORY_MANUALLY_INITIATED_ECALL;
                    cc_ecc_call_setup_req->is_ecall = KAL_TRUE;
                    cc_ecc_call_setup_req->ecall_type = ECALL_MANUALLY_INITIATED;
                    
                }
                else if (L4C_PTR->mo_call_ecc_info == INFO_ECALL_AUTOMATICALLY_INITIATED)
                {
                    cc_ecc_call_setup_req->service_category |= CSMCC_CATEGORY_AUTOMATICALLY_INITIATED_ECALL;
                    cc_ecc_call_setup_req->is_ecall = KAL_TRUE;
                    cc_ecc_call_setup_req->ecall_type = ECALL_AUTOMATICALLY_INITIATED;
                }
                #endif

                l4c_ptr->cc_current_action[src_id] = ATD_ECC;                
            }
            else
            {

                l4c_nw_get_attach_status_req(src_id, RAC_CS, &status);

                if ((l4c_ptr->mmrr_ready_flag == KAL_FALSE) || //DUMA00146453
                    (status != REG_STATE_REGISTERED && rmmi_ptr->cops_mode == 2))
                {
                    result.flag = L4C_ERROR;
                    result.cause = msg_ptr->cause;
                    l4c_clear_cc_queued_msg(src_id);
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                                        
                #ifdef __UCM_SUPPORT__
                    info.opcode = INVALID_OPERATION;
                    result.flag = KAL_FALSE;
                    result.cause = msg_ptr->cause;
                    l4c_ss_string_parsing_lrsp(result, &info);
                #else
                    rmmi_ptr->current_src = src_id;
                    l4c_cc_exe_call_setup_rrsp(result, 0);
                    l4c_cc_exe_call_setup_lrsp(result, 0, KAL_FALSE, 0); //MAUI_02526481
                #endif
                    
                    return;
                }
                else
                {
                    l4c_ptr->cc_current_action[src_id] = ATD_EXE;
                }
            }            

            l4c_ptr->mo_call_ecc_info = INFO_ECC_CHECK_BY_MODEM;//mtk01616_090804: reset ecc_info

            #ifdef __UCM_SUPPORT__
                //mtk01616_070707 : UCM will handle the response
            #else
                //mtk01616_070516: now always return OK for ATD at l4cphb_approve_cnf             
                //#ifdef __WINCE__//brad - add for ATD return 'OK' immediately
                if (src_id != LMMI_SRC)
                {
                    if (call_type != CSMCC_DATA_CALL)
                    {
                        //l4c_cc_exe_call_setup_rrsp(result, 0);
                        rmmi_ptr->current_src = src_id;
                        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
#if 0 //DUMA00144393
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
                }
            #endif
            //#endif /*__WINCE__*/

            if (call_type == CSMCC_DATA_CALL || call_type == CSMCC_FAX_CALL)	// [MAUI_01522511]
            {
                l4c_ptr->ongoing_csd_dialup = KAL_TRUE; //MAUI_02284187, mtk02285
            }
		      
            l4c_send_msg_hdlr(src_id, L4C_CALL_OPERATION);

            info.opcode = CC_OPERATION;
            result.flag = KAL_TRUE;
            result.cause = L4C_NO_CAUSE;

            #ifdef __UCM_SUPPORT__                                    
                //mtk01616_090324 : we won't print result code "OK" for data call
                l4c_ss_string_parsing_lrsp(result, &info);
            #else
                if (src_id == LMMI_SRC)
                {
                    l4c_ss_string_parsing_lrsp(result, &info);
                }
#if 0 //DUMA00144393
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
            #endif
        }
    }
    else if (l4c_ptr->cc_current_action[src_id] == ABM_ACT_APP)
    {
        if (msg_ptr->result != PHB_ERRNO_SUCCESS)
        {
            result.flag = L4C_ERROR;
            result.cause = msg_ptr->cause;
            //l4c_cc_call_abort_req_ind ();
            //response to LMMI
        #if defined(__TCPIP_OVER_CSD__) 
            l4c_cc_abm_setup_rsp_fail_helper(pppl4c_get_error_type());
        
        #endif 
            //response to LMMI
            l4c_cc_exe_call_dial_lrsp(msg_ptr->src_id, result.flag, result.cause, 0, KAL_FALSE, 0); //MAUI_01924242
            l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
            l4c_clear_cc_queued_msg(src_id);
        }
        else
        {

            if (msg_ptr->type == PHB_ECC)
            {
                cc_call_setup_req = (l4ccsm_cc_call_setup_req_struct*) cc_parameter->data;
                kal_mem_cpy(&called_number,&(cc_call_setup_req->called_number),sizeof(l4_addr_bcd_struct));

                l4c_clear_cc_parameter(src_id);

                cc_parameter->length = sizeof(l4ccsm_cc_emergency_call_setup_req_struct);

                cc_parameter->data =
                    (l4ccsm_cc_emergency_call_setup_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4ccsm_cc_emergency_call_setup_req_struct), TD_RESET);

                cc_ecc_call_setup_req = (l4ccsm_cc_emergency_call_setup_req_struct*) cc_parameter->data;

                kal_mem_cpy(&(cc_ecc_call_setup_req->called_number),&called_number,sizeof(l4_addr_bcd_struct));

                cc_ecc_call_setup_req->src_id = temp_src;
                cc_ecc_call_setup_req->service_category = msg_ptr->esc;     // for R5 ECC category

                l4c_ptr->cc_current_action[src_id] = ABM_ACT_ECC;

                l4c_send_msg_hdlr(src_id, L4C_CALL_OPERATION);
            }
            else
            {
                l4c_ptr->cc_current_action[src_id] = ABM_ACT;
                l4c_send_msg_hdlr(src_id, L4C_CALL_OPERATION);

            }

        }
    }
#endif /* !defined(__PHB_APPROVE_BY_MMI__) */
#ifdef __MOD_TCM__
    else if (l4c_ptr->cc_current_action[temp_src] == CGDATA_EXE)    
    #ifdef __PHB_APPROVE_BY_MMI__
    {
        ASSERT(0); //MAUI_02956467, in this option, we should not receive l4cphb_approve_cnf
    }
    #else /* No __PHB_APPROVE_BY_MMI__ */
    {
        if (temp_src == WAP_SRC)
        {
        #ifdef __TCPIP__
            tcm_pdp_activate_req_struct *param_ptr;

            param_ptr = (tcm_pdp_activate_req_struct*) cc_parameter->data;

        #ifndef __GPRS_FDN_DISABLE__
            if (msg_ptr->result != PHB_ERRNO_SUCCESS)
            {

                //response to LMMI
            #ifdef __TCPIP__
            #ifdef __USB_TETHERING__
                if ((TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID == param_ptr->additional_para_type) &&
                    (MOD_UPS == param_ptr->additional_para_content))
                {
                    param_ptr->additional_para_content = CBM_USB_TR_PS_ACCT_ID; //USB TR'S Account ID is fixed
                }        
            #endif /* __USB_TETHERING__, MAUI_02957973 */            
                l4c_ps_abm_setup_rsp_fail_helper(PHB_L4C_ERROR, param_ptr->context_id, param_ptr->additional_para_content); // __HSPA_DATA_PATH_OPT__
            #endif 
                l4c_clear_cc_queued_msg(temp_src);
            }
            else
        #endif /* __GPRS_FDN_DISABLE__ */ 
            {
                l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, cc_parameter->data);

                if (cc_parameter->length > 0)
                {
                    cc_parameter->length = 0;
                    cc_parameter->data = NULL;
                }
            #if 0
/* under construction !*/
			#endif //MAUI_01922673, mtk02285, 20091208: un-necessary
            }
            l4c_ptr->cc_current_action[temp_src] = L4C_NO_ACTION;
        #endif /* __TCPIP__ */ 
        }
#if defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__)
        else if (sizeof(tcm_pdp_activate_req_struct) == l4c_ptr->cc_parameter[msg_ptr->src_id].length)
        {
#if defined(__IPV4V6__) && defined(__IPV6__)       
            tcm_pdp_activate_req_struct* act_msg_ptr = (tcm_pdp_activate_req_struct*)l4c_ptr->cc_parameter[msg_ptr->src_id].data;
            kal_uint8 cid = act_msg_ptr->context_id;
#endif            
            /* Use CC queued parameter length to identify what are we doing - PPP dialup or CGACT */
            if (sizeof(tcm_pdp_activate_req_struct) == sizeof(l4cppp_activate_req_struct))
            {
                ASSERT(0);
            }

            /* CGDATA_EXE action is only used to enter PHB approve procedure, clear it here */
            l4c_ptr->cc_current_action[temp_src] = L4C_NO_ACTION;

            /* Handle PHB approve result */
            if (((PHB_ERRNO_SUCCESS == msg_ptr->result) || (KAL_FALSE == custom_l4c_ndis_fdn_enable()))
#if defined(__IPV4V6__) && defined(__IPV6__)                 
                && (KAL_TRUE == l4c_gprs_ipv4v6_pdp_activate_req_helper(&(L4C_COMM_PTR->v4v6_act_ptr), cid, src_id, l4ctcm_get_pdp_addr_type(cid)))
#endif                
                )
            {                                 
                kal_brief_trace(TRACE_INFO, INFO_L4C_GPRS_NDIS_FDN_CHECK_RESULT_AND_ENABLE, msg_ptr->result, custom_l4c_ndis_fdn_enable());		
                /* Success: contiune to do PDP activation; CGACT_EXE was set in l4c_ps_exe_act_req() already */
                l4c_send_msg_to_tcm(MSG_ID_TCM_PDP_ACTIVATE_REQ, 
                    (tcm_pdp_activate_req_struct*)l4c_ptr->cc_parameter[msg_ptr->src_id].data);
                l4c_ptr->cc_parameter[msg_ptr->src_id].length = 0;
                l4c_ptr->cc_parameter[msg_ptr->src_id].data = NULL;
            }
            else
            {
                /* Failure: report ERROR with specific cause to TE; Clear CGACT_EXE and tcm_user here */
                rmmi_ptr->current_src = src_id;
                l4c_set_user_action(L4C_TCM, L4C_NO_USER, L4C_NO_ACTION);       
                rmmi_result_code_fmttr(RMMI_RCODE_ERROR, PHB_CAUSE_FDN_BLOCKED);
                l4c_clear_cc_parameter(temp_src);
                return;
            }
        }
#endif /* defined(__NDIS_FDN_ENABLE__) && defined(__NDIS_SUPPORT__) */
        else /* !WAP_SRC */
        {
        #if defined(__PS_DIALUP__)
            l4cppp_activate_req_struct *ppp_activate_req = (l4cppp_activate_req_struct*) cc_parameter->data;

        #ifndef __GPRS_FDN_DISABLE__
            if (msg_ptr->result != PHB_ERRNO_SUCCESS)
            {
                kal_uint8 port;

                rmmi_ptr->current_src = src_id;
            #ifdef __SP_RIL_SUPPORT__ //DUMA00135153
                if (msg_ptr->cause == PHB_CAUSE_FDN_BLOCKED)
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_ERROR, msg_ptr->cause);
                }
                else
            #endif /* __SP_RIL_SUPPORT__ */
                {
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
                }
                l4c_clear_cc_queued_msg(temp_src);
                l4c_ptr->cc_current_action[temp_src] = L4C_NO_ACTION;

                port = rmmi_cid_2_port(rmmi_srcid_2_cid(temp_src));								
                rmmi_start_ath_for_dialup_hdlr(port);
            /* 
             * mtk02126: for __CMUX_MODEM_STATUS_SUPPORT__ compiler option
             * We'll call l4c_ctrl_dcd_status to set control DCD according to customer's requirement.
             * We check __UCM_SUPPORT__ because the PS call status has to sync with UCM. 
             * We don't deal with that now.
             * Therefore it can't work with __UCM_SUPPORT__ concurrently.
             */
            #if defined(__CMUX_MODEM_STATUS_SUPPORT__)  && !defined(__UCM_SUPPORT__) //mtk02514_check
                l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
            #else	    		
                kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, ppp_activate_req->port, custom_get_dcd_value_for_cmd_state());		
                RMMI_UART_CtrlDCD((UART_PORT)ppp_activate_req->port, (IO_level)custom_get_dcd_value_for_cmd_state(), MOD_ATCI);			  
            #endif
            }
            else
        #endif /* __GPRS_FDN_DISABLE__ */ 
            {
                rmmi_ptr->current_src = src_id;

                if (l4c_ptr->disallow_gprs_and_csd)
                {
                    kal_uint8 port = rmmi_cid_2_port(rmmi_srcid_2_cid(src_id));
                    rmmi_start_ath_for_dialup_hdlr(port);	
            
                    kal_brief_trace(TRACE_INFO, INFO_DISALLOW_DIALUP_DUT_TO_CAMERA_RUNUNG, temp_src);
                    rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
                    l4c_clear_cc_queued_msg(temp_src);
                    l4c_ptr->cc_current_action[temp_src] = L4C_NO_ACTION;
                    return;
                }

                if (ppp_activate_req->pdp_type != PPP_ADDR_TYPE) //__IPV6__: for any type that does not require delayed "CONNECT"
                {                                                         

                /* 
                 * mtk02126: add "&& !defined(__RMMI_UT__)" for auto test
                 * In the auto test scenario, we'll use PC dialup software dialup from data port.
                 * However, PC sw only can recognize "CONNECT".
                 * Therefore, if __RMMI_UT__ is defined, we need to response CONNECT for auto test
                 */                   
                #if defined(__SP_RIL_SUPPORT__) && !defined(__RMMI_UT__)   
                    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE); // Only return "OK" to WM
                #else
                    rmmi_result_code_fmttr(RMMI_RCODE_CONNECT_PS, L4C_GEN_CAUSE); // MAUI_02386357, mtk02285, MAUI_02825172
                #endif                 				

                #if defined(__WM_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__)
                    if (RMMI_COMM_PTR->cmux_enable == KAL_TRUE)
                    {
                        // the cmd-originating channel's state & action are set at: l4c_ps_exe_enter_data_state_req()
                        // Clear the COMMAND channel's state & action now
                        l4c_ptr->cc_state[src_id] = L4C_COMMAND_STATE;
                        l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                    }
                    // Then redirect CGDATA_EXE action to the DATA channel
                    l4c_ptr->cc_state[ppp_activate_req->src_id] = L4C_ONLINE_DATA_GPRS_STATE;
                    l4c_ptr->cc_current_action[ppp_activate_req->src_id] = CGDATA_EXE;  
                #else
                    l4c_ptr->cc_state[src_id] = L4C_ONLINE_DATA_GPRS_STATE;
                    l4c_ptr->cc_current_action[src_id] = CGDATA_EXE;
                #endif /* defined(__SP_RIL_SUPPORT__) || defined(__CMUX_REDIRECT_DATA_CHANNEL__) */
				                                                       
                    rmmi_ptr->uart_in_data_mode = KAL_TRUE;

	                //Data Carrier Detect
	            #if !defined(__SP_RIL_SUPPORT__)
	            #if defined(__CMUX_MODEM_STATUS_SUPPORT__) && !defined(__UCM_SUPPORT__) //mtk02514_check
	                l4c_ctrl_dcd_status(src_id, MOD_ATCI);		
	            #else	    			
	                kal_brief_trace(TRACE_INFO, INFO_L4C_UART_CTRLDCD, ppp_activate_req->port, custom_get_dcd_value_for_data_state());		
	                RMMI_UART_CtrlDCD((UART_PORT)ppp_activate_req->port, (IO_level)custom_get_dcd_value_for_data_state(), MOD_ATCI);
	            #endif
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
				
#if defined(__MOD_L4A__) && defined(__MMI_FMI__)
                (
                    kal_uint8 cell_support_egprs;

                    cell_support_egprs = l4crac_get_egprs_status();
                    l4c_ps_gprs_status_update_lind(L4C_PDP_ATTEMPT_ACT, cell_support_egprs, 
    					l4crac_get_cell_data_speed_support(),
    					l4c_ptr->max_data_bearer_capa); //mtk02285, hspa_mmi_h2
				)
#endif                    
    	    #ifdef __TCPIP__ /* ABM */
	            l4c_abm_dialup_connecting_ind_helper(GPRS_BEARER_DIALUP, 0, ppp_activate_req->context_id); //connecting_by_te
        	#endif 

                //l4c_ptr->ongoing_csd_dialup = KAL_TRUE; //MAUI_02284187, mtk02285
                //L4CPPP_FB_2, L4CPPP_FB
                l4c_ps_dialup_set_port2cid(ppp_activate_req->port,ppp_activate_req->context_id);
                l4c_send_msg_to_ppp(MSG_ID_L4CPPP_ACTIVATE_REQ, ppp_activate_req);

                if (cc_parameter->length > 0)
                {
                    cc_parameter->length = 0;
                    cc_parameter->data = NULL;
                }
            }
        #endif /* __PS_DIALUP__ */
        }

        //L4C_PTR->is_fdn_gprs = KAL_FALSE;
    }  
    #endif /* __PHB_APPROVE_BY_MMI__ */
#endif /* __MOD_TCM__ */ 
#ifndef __PHB_APPROVE_BY_MMI__
    else if (l4c_ptr->phb_current_action == PHB_FDN_CHECK)
    {
        if (msg_ptr->result == PHB_ERRNO_SUCCESS)
        {       //no fdn exist we should approve the da
            if (l4c_ptr->sms_da_fdn_check == KAL_TRUE)
            {
                l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
                l4c_ptr->sms_da_fdn_check = KAL_FALSE;  //reset check value
                free_ctrl_buffer(l4c_ptr->sms_da_number);       //reset
                l4c_smsal_fdn_check_rsp(L4C_OK, CM_L4C_GEN_CAUSE);
                return;
            }
            else
            {   //da approve required
                //kal_uint8 count;

                approve_req = (l4cphb_approve_req_struct*)
                    construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

                approve_req->src_id = src_id;
                approve_req->is_retrieve = KAL_FALSE;
                approve_req->approval_type = l4_custom_approval_type(L4C_SMS_OPERATION,src_id);

                kal_mem_cpy(&(approve_req->tel_number), l4c_ptr->sms_da_number, sizeof(l4_addr_bcd_struct));
                l4c_ptr->sms_da_fdn_check = KAL_TRUE;   //set da cehck as true
                l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, approve_req, NULL);

                return;
            }
        }
        else
        {
            if (msg_ptr->type == PHB_FDN)
            {
                // sca is fdn so that we return directlly
                l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
                if (l4c_ptr->sms_da_fdn_check == KAL_TRUE)
                {
                    l4c_ptr->sms_da_fdn_check = KAL_FALSE;      //reset
                }

                l4c_smsal_fdn_check_rsp(L4C_ERROR, PHB_L4C_ERROR);
                free_ctrl_buffer(l4c_ptr->sms_da_number);
                return;
            }
            else
            {   //may be BDN we also need to check da
                //l4cphb_approve_req_struct  *param_ptr;
                //kal_uint8 count;

                if (l4c_ptr->sms_da_fdn_check == KAL_TRUE)
                {       //ever check sca and this is da but not fdn , we think it is OK
                    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
                    l4c_ptr->sms_da_fdn_check = KAL_FALSE;      //reset check value
                    free_ctrl_buffer(l4c_ptr->sms_da_number);
                    l4c_smsal_fdn_check_rsp(L4C_OK, CM_L4C_GEN_CAUSE);

                }
                else
                {       //check sca already and need to cehck da

                    //kal_uint8 count;
                    // l4c_number_struct da;

                    approve_req = (l4cphb_approve_req_struct*)
                        construct_local_para((kal_uint16) sizeof(l4cphb_approve_req_struct), TD_RESET);

                    approve_req->src_id = src_id;
                    approve_req->is_retrieve = KAL_FALSE;
                    approve_req->approval_type = l4_custom_approval_type(L4C_SMS_OPERATION,src_id);
                    //kal_mem_cpy((l4c_number_struct *),&(L4C_PTR->sms_da_number),sizeof(l4_number_struct));//save value into l4c context

                    kal_mem_cpy(&(approve_req->tel_number), l4c_ptr->sms_da_number, sizeof(l4_addr_bcd_struct));

                    l4c_ptr->sms_da_fdn_check = KAL_TRUE;       //set da cehck as true
                    l4c_send_msg_to_phb(MSG_ID_L4CPHB_APPROVE_REQ, approve_req, NULL);
                }
                return;
            }
        }

    }
#endif /* !defined(__PHB_APPROVE_BY_MMI__) */
#ifndef __PHB_APPROVE_BY_MMI__
    else if ((l4c_check_user_action(L4C_SS, src_id, PARSE_SS_EXE) == KAL_TRUE)
#ifdef __L4CPHB_SIM_ONLY_FEATURE__
         && (l4c_ptr->phb_current_action != PHB_NUMBER_CHECK)//maui_01947223
#endif
            )
    {
        if ((msg_ptr->result != PHB_ERRNO_SUCCESS) || (l4c_ptr->mmrr_ready_flag == KAL_FALSE))//DUMA00146453
        {
            info.opcode = INVALID_OPERATION;
            result.flag = KAL_FALSE;
            result.cause = msg_ptr->cause;
		    
            if (src_id == LMMI_SRC)
            {
                #if defined(__SS_OPERATION_SUPPORT__) 
                l4c_ss_operation_lrsp(result);
                #else
                /*in non-UCM project, MMI need to konw whether it's CC or SS operation when FDN check fail*/			             
                info.opcode = SS_OPERATION;			                            
                l4c_ss_string_parsing_lrsp(result, &info);
                #endif
            }
            else
            {
                rmmi_ptr->current_src = src_id;
                l4c_ss_string_parsing_rrsp(result, &info);
            }

            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);

            if (l4c_ptr->ss_parameter.data != NULL)
            {
                free_local_para(l4c_ptr->ss_parameter.data);
            }

        }
        else
        {
            #if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
            /* mtk02508_090304 check phb_approve_ussd flag and respond OK if KAL_TRUE
               we already return ERROR in rmmi_ecusd_hdlr if the syntax is incorrect.
               Otherwise we postpone the response till now by taking phb approvement 
               result into account.
               for now, ussd from at+cusd will NOT be approved by phb */
            if (l4c_ptr->phb_approve_ussd == KAL_TRUE)
            {
                rmmi_ptr->current_src = src_id;
                rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
            }
            #endif

            //l4c_send_queued_msg(src_id);
            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, l4c_ptr->ss_parameter.data);
        }
        //mtk00468 1129 clear saved message for ss string parse message
        if (l4c_ptr->ss_parameter.data != NULL)
        {
            l4c_ptr->ss_parameter.data = NULL;
            l4c_ptr->ss_parameter.length = 0;
        }
        
        return;
    }
    // mtk02508_090330: USSD from AT+CUSD shall perform FDN check
    else if ((src_id >= RMMI_SRC) && (l4c_check_user_action(L4C_SS, src_id, CUSD_EXE) == KAL_TRUE))
    {
        if (msg_ptr->result != PHB_ERRNO_SUCCESS)
        {
            rmmi_ptr->current_src = src_id;
            l4c_ps_general_rrsp(KAL_FALSE, L4C_NO_CAUSE); //return +CME ERROR: 100
            l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);

            l4c_clear_ss_parameter(src_id);
        }
        else
        {
            local_para_struct *local_para_ptr1;
            
            //mtk02508_090508 ss_parameter shall be held for later retry using
            local_para_ptr1 = (local_para_struct*) l4c_ptr->ss_parameter.data;
            if (local_para_ptr1->ref_count < 2)
            {
                hold_local_para((local_para_struct*) l4c_ptr->ss_parameter.data);
            }
            l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ, l4c_ptr->ss_parameter.data);

        #ifndef __MMI_FMI__
            //DUMA00209281 modem load: postpone AT+CUSD response till PHB approve result
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        #endif /* __MMI_FMI__ */
        }
        return;
    }
#endif /* !defined(__PHB_APPROVE_BY_MMI__) */
    #ifdef __L4CPHB_SIM_ONLY_FEATURE__
    else if (l4c_ptr->phb_current_action == PHB_NUMBER_CHECK)
    {
    	kal_bool result;
	kal_uint8 type;

	type = msg_ptr->type;
    	if (msg_ptr->result == PHB_ERRNO_SUCCESS) {
		result = KAL_TRUE;
    	}
       else {                      
	   	result = KAL_FALSE;
       }

       l4c_phb_number_check_lrsp(result, type);
   	l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
	return;
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
 *  l4cphb_setup_ln_entry
 * DESCRIPTION
 *  This function is auxiliary function which is used to get returned call_log entries from peer buffer
 *  
 * PARAMETERS
 *  list                    [OUT]     output entries
 *  peer_buff_ptr      [IN]        the peer buffer
 * RETURNS
 *  number of returned call_log entries
 *****************************************************************************/
static void l4cphb_setup_ln_entry(phb_ln_entry_struct *src, l4c_phb_ln_entry_struct *des)
{
    #if defined(__PHB_ACCESS_SIM_LN__) || !defined(__CLOG_STORAGE_BY_MMI__)

    des->alpha_id.name_length = src->name_length;
    des->alpha_id.name_dcs= src->name_dcs;                

    if (sizeof(des->alpha_id.name) < sizeof(src->name))
        kal_mem_cpy((kal_uint8*) &des->alpha_id.name, (kal_uint8*) src->name, sizeof(des->alpha_id.name));
    else
        kal_mem_cpy((kal_uint8*) &des->alpha_id.name, (kal_uint8*) src->name, sizeof(src->name));

    #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        des->address_type = src->addr_type;
        if (des->address_type == PHB_LN_VOIP)
        {
            kal_mem_cpy(
                (kal_uint8*) des->address.uri,
                src->addr_bcd,
                sizeof(src->addr_bcd));
        }
        else
        {
            des->address.tel.length = convert_to_digit(
                (kal_uint8*) & src->addr_bcd[1],
                (kal_uint8*) des->address.tel.number);
            des->address.tel.type = src->addr_bcd[0];
        }
    #else /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */
        des->tel.length = convert_to_digit(
            (kal_uint8*) & src->addr_bcd[1],
            (kal_uint8*) des->tel.number);
        des->tel.type = src->addr_bcd[0];
    #endif /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */
    kal_mem_cpy(&des->time, &src->time, sizeof(rtc_format_struct));
    des->call_duration = src->call_duration;
    des->count = src->count;
    
    #endif /* defined(__PHB_ACCESS_SIM_LN__) || !defined(__CLOG_STORAGE_BY_MMI__) */
    
}


#if !defined(__CLOG_STORAGE_BY_MMI__)
/*****************************************************************************
 * FUNCTION
 *  l4cphb_ln_cnf_aux_hdlr
 * DESCRIPTION
 *  This function is auxiliary function which is used to get returned call_log entries from peer buffer
 *  
 * PARAMETERS
 *  list                    [OUT]     output entries
 *  peer_buff_ptr      [IN]        the peer buffer
 * RETURNS
 *  number of returned call_log entries
 *****************************************************************************/
static kal_uint8 l4cphb_ln_cnf_aux_hdlr(l4c_phb_ln_entry_struct *list, peer_buff_struct *peer_buff_ptr, kal_uint8 max_no_list)
{


    l4cphb_phb_ln_entry_array_struct *pdu_data;
    kal_uint8 i = 0;

    if (peer_buff_ptr != NULL)
    {
        kal_uint16 packed_peer_buff_len;
        kal_uint8 *pdu_ptr;

        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);

        pdu_data = (l4cphb_phb_ln_entry_array_struct*) get_32bits_aligned_val(pdu_ptr);

        #ifndef __MTK_TARGET__
        /* mtk02514 ****************************
        * The following code is used on MODIS.
        * On the other hand, we should modify the added 
        * length 8 if the beginning of array is changed
        *************************************/
        pdu_data->array = ((kal_uint8*)pdu_data) + 8;
        #endif


        for (i = 0; i < pdu_data->no_array && i < max_no_list; i++)
        {
            l4cphb_setup_ln_entry(&pdu_data->array[i], &list[i]);
        }
    }
    
    return i;


}
#endif /* #if !defined(__CLOG_STORAGE_BY_MMI__) */

/*****************************************************************************
 * FUNCTION
 *  l4cphb_write_ln_cnf_hdlr
 * DESCRIPTION
 *  This function is used to handle the message MSG_ID_L4CPHB_WRITE_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_write_ln_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    #if !defined(__CLOG_STORAGE_BY_MMI__)
    
    l4cphb_write_ln_cnf_struct *msg_ptr = NULL;

    l4c_phb_ln_entry_struct list;

    l4c_result_struct result;
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    msg_ptr = (l4cphb_write_ln_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    kal_mem_set(&list, 0, sizeof(l4c_phb_ln_entry_struct) * 1);

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_FAIL);    

    l4cphb_ln_cnf_aux_hdlr(&list, peer_buff_ptr, 1);
    if (src_id == LMMI_SRC)
    {
        /* mtk02514 * 091106 * MAUI_02029205 ***********
        * For the filed total, it means totol entries in the call log
        * not total entries transmitted to the MMI
        * MMI needs it to display number of total entries
        ******************************************/
        l4c_phb_exe_write_ln_entry_lrsp(result, msg_ptr->total, list, msg_ptr->type);   
    }
    else
    {
        /* mtk02514 * MAUI_01656724 * 090328 *****************************
        * we should not do any action when the phb_current_action is L4C_NO_ACTION
        * since it might output the additional OK or ERROR to the UART
        *************************************************************/
        if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
        {
            return;
        }

        rmmi_ptr->current_src = src_id;

        #if defined(__AT_EPBW_SUPPORT__)
        if (src_id >= RMMI_SRC && rmmi_ptr->phb_is_epbw == KAL_TRUE && result.flag == L4C_OK)
        {
            l4c_phb_update_entry_rrsp(1);
        }
        rmmi_ptr->phb_is_epbw = KAL_FALSE;
        #endif


        #if defined (__MMI_FMI__) && !defined(NEPTUNE_MMI)
        if (result.flag == L4C_OK)
        {
            kal_uint8 action;
            l4c_phb_entry_struct update_list[1];

            /* mtk02514 *********************************
             * update_list now is unused, so we mark the following statment
             ******************************************/
            kal_mem_set(update_list, 0xff, 1 * sizeof(l4c_phb_entry_struct));

            if (rmmi_ptr->phb_storage_type == RMMI_PHB_LD || rmmi_ptr->phb_storage_type == RMMI_PHB_DC)
            {
                action = L4C_PHB_WRITE_LND;
            }
            else if (rmmi_ptr->phb_storage_type == RMMI_PHB_MC)
            {
                action = L4C_PHB_WRITE_LNM;
            }
            else if (rmmi_ptr->phb_storage_type == RMMI_PHB_RC)
            {
                action = L4C_PHB_WRITE_LNR;
            }
            else
            {
                action = L4C_PHB_UPDATE_NONE;
            }

           
            /* mtk00924_060327: no_list is the total field in cnf form PHB */
	     l4c_ptr->route_thru_lmmi = KAL_TRUE;
	     l4c_ptr->route_thru_lmmi_user= src_id;
            l4c_phb_update_lind(
                action,
                0xffff /* old_index */ ,
                0xffff /* sim_used */ ,
                0xffff /* nvram_used */ ,
                msg_ptr->total /* no_list */ ,
                update_list);
            return;
        }
        #endif /* defined (__MMI_FMI__) */ 
        
        l4c_phb_general_rrsp(&result);

        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }

    #endif
    
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_read_ln_cnf_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_READ_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_read_ln_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    #if !defined(__CLOG_STORAGE_BY_MMI__)
    l4cphb_read_ln_cnf_struct *msg_ptr = NULL;
    l4c_phb_ln_entry_struct *list;

    l4c_result_struct result;
    kal_uint8 src_id, i = 0;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4cphb_read_ln_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;


    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_FAIL);         

#if (MAX_PHB_LN_ENTRY > 10)
    list = get_ctrl_buffer( sizeof(l4c_phb_ln_entry_struct) * PHB_MAX_LN_ENTRIES );
    kal_mem_set(list, 0, sizeof(l4c_phb_ln_entry_struct) * PHB_MAX_LN_ENTRIES);
    i = l4cphb_ln_cnf_aux_hdlr(list, peer_buff_ptr, PHB_MAX_LN_ENTRIES);
#else 
    list = get_ctrl_buffer( sizeof(l4c_phb_ln_entry_struct) * PHB_MAX_LNM_ENTRIES );
    kal_mem_set(list, 0, sizeof(l4c_phb_ln_entry_struct) * PHB_MAX_LNM_ENTRIES);
    i = l4cphb_ln_cnf_aux_hdlr(list, peer_buff_ptr, PHB_MAX_LNM_ENTRIES);
#endif 



    if (i > 0 && l4c_ptr->last_number_seq == 1)
    {
        #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed( &list[0].address.tel, msg_ptr->type, list[0].address_type);
        #else 
        l4c_phb_set_last_number_dialed( &list[0].tel, msg_ptr->type, 0);
        #endif 
    }

    if (src_id == LMMI_SRC)
    {
        l4c_phb_exe_read_ln_entry_lrsp(result, i, msg_ptr->type, (kal_uint8) msg_ptr->more_data, list);
        free_ctrl_buffer(list);
    }
    else
    {
        /* mtk02514 * MAUI_01656724 * 090328 *****************************
        * we should not do any action when the phb_current_action is L4C_NO_ACTION
        * since it might output the additional OK or ERROR to the UART
        *************************************************************/
        if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
        {
            free_ctrl_buffer(list);
            return;
        }

        rmmi_ptr->current_src = src_id;
        l4c_phb_read_ln_entry_rrsp(i, rmmi_ptr->cpbr_ln_base_index, list);
        free_ctrl_buffer(list);

        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);

        #ifdef __PHB_STORAGE_LA__
        if (rmmi_ptr->phb_storage_type == RMMI_PHB_LA)
            rmmi_ptr->cpbr_ln_base_index += i;        
        else
        #endif /* __PHB_STORAGE_LA__ */
            rmmi_ptr->cpbr_ln_base_index += PHB_MAX_LN_ENTRIES;
        
        if( (msg_ptr->more_data || rmmi_ptr->phb_storage_type == RMMI_PHB_LA)
              && rmmi_ptr->cpbr_ln_base_index <= rmmi_ptr->cpbr_range[1] && result.flag==L4C_OK)
        {
            #ifdef __PHB_STORAGE_LA__
            if(msg_ptr->more_data == KAL_FALSE)
            {
                if(rmmi_ptr->phb_storage_type == RMMI_PHB_LA)
                {
                    l4c_ptr->last_number_seq = 0;   // this value will be add to 1 in the later codes
                    switch(msg_ptr->type)
                    {
                        case PHB_LND:
                        {
                            msg_ptr->type = PHB_LNM;
                            break;
                        }
                        case PHB_LNM:
                        {
                            msg_ptr->type = PHB_LNR;
                            break;
                        }                                                    
                        case PHB_LNR:
                        {
                            msg_ptr->type = PHB_LN_NONE;       // no need to read call log anymore
                        }                            
                        default:
                            break;
                    }
                }
            }
            if (msg_ptr->type != PHB_LN_NONE)
            #endif /* __PHB_STORAGE_LA__ */
            {
                l4c_phb_exe_read_ln_entry_req(src_id, msg_ptr->type, ++(l4c_ptr->last_number_seq) );
                return;
            }
        }

        l4c_phb_general_rrsp(&result);
    }

    #endif /* #if !defined(__CLOG_STORAGE_BY_MMI__) */
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_delete_ln_cnf_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_DELETE_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_delete_ln_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    #if !defined(__CLOG_STORAGE_BY_MMI__)
    
    l4cphb_write_ln_cnf_struct *msg_ptr = NULL;

    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    l4c_phb_ln_entry_struct list;

    l4c_result_struct result;
    kal_uint8 src_id, i;

    msg_ptr = (l4cphb_write_ln_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    kal_mem_set(&list, 0, sizeof(l4c_phb_ln_entry_struct) * 1);

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_FAIL);    

    i = l4cphb_ln_cnf_aux_hdlr(&list, peer_buff_ptr, 1);

    //mtk01616 070413 clear ATDL number ,when no LND exist
    if (i == 0)
    {
        kal_mem_set(rmmi_ptr->last_number_dialed, 0x00, MAX_CC_ADDR_LEN);
    }

    if (src_id == LMMI_SRC)
    {
        l4c_phb_exe_delete_ln_entry_lrsp(result, i /* , list */ );
    }
    else
    {
        /* mtk02514 * MAUI_01656724 * 090328 *****************************
        * we should not do any action when the phb_current_action is L4C_NO_ACTION
        * since it might output the additional OK or ERROR to the UART
        *************************************************************/
        if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
        {
            return;
        }

        rmmi_ptr->current_src = src_id;

        /*** mtk02514 * 090804 * MAUI_01933133 *********************
        * The following code is used to output index when deleting using AT+EPBW
        * But since it is no use now, we just comment it
        *******************************************************/
        #if 0
        #if defined(__AT_EPBW_SUPPORT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
        #endif

        #if defined (__MMI_FMI__) && !defined(NEPTUNE_MMI)
        if (result.flag == L4C_OK)
        {
            kal_uint8 action;
            l4c_phb_entry_struct update_list[1];
            /* mtk02514 *********************************
             * update_list now is unused, so we mark the following statment
             ******************************************/
            kal_mem_set(update_list, 0xff, 1 * sizeof(l4c_phb_entry_struct));

            if (rmmi_ptr->phb_storage_type == RMMI_PHB_LD || rmmi_ptr->phb_storage_type == RMMI_PHB_DC)
            {
                action = L4C_PHB_DELETE_LND;
            }
            else if (rmmi_ptr->phb_storage_type == RMMI_PHB_MC)
            {
                action = L4C_PHB_DELETE_LNM;
            }
            else if (rmmi_ptr->phb_storage_type == RMMI_PHB_RC)
            {
                action = L4C_PHB_DELETE_LNR;
            }
            else
            {
                action = L4C_PHB_UPDATE_NONE;
            }

            
            l4c_ptr->route_thru_lmmi = KAL_TRUE;
            l4c_ptr->route_thru_lmmi_user= src_id;
            l4c_phb_update_lind(
                action,
                0xffff /* old_index */ ,
                0xffff /* sim_used */ ,
                0xffff /* nvram_used */ ,
                0xffff /* no_list */ ,
                update_list);

            return;
        }
        /******************************************************
        * because L4C has higher priority than MMI, if AT write phb continually,
        * MMI external queue will be full.
        * l4c send phb update indication to MMI and
        * wait MMI PHB response mmi_at_general_res_req(true) to print "OK"
        * AT can write next phb after "OK" 
        ******************************************************/
        #endif /* defined (__MMI_FMI__) */ 

        l4c_phb_general_rrsp(&result);        
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }

    #endif /* #if !defined(__CLOG_STORAGE_BY_MMI__) */
    
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_write_cnf_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_WRITE_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_write_cnf_struct *msg_ptr = NULL;
    l4c_phb_entry_struct *list;
    l4c_result_struct result;
    kal_uint8 temp_src, src_id, i = 0;

    l4c_context_struct *l4c_ptr = L4C_PTR;
    #if !defined(__PHB_STORAGE_BY_MMI__)        
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    msg_ptr = (l4cphb_write_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    temp_src = src_id;

    /* mtk02514 * MAUI_01656724 * 090328 *****************************
    * we should not do any action when the phb_current_action is L4C_NO_ACTION
    * since it might output the additional OK or ERROR to the UART
    *************************************************************/
    if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
    {
        return;
    }

    if (src_id == WAP_SRC)
    {
        src_id = LMMI_SRC;
    }

    /* if (L4C_PTR->cc_current_action[src_id] == CPBW_EXE) */
    {
        l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_FAIL);            

        list = NULL;
        i = l4cphb_cnf_aux_hdlr(&list, peer_buff_ptr);

        #if defined(__AT_EPBW_SUPPORT__)
        if (src_id >= RMMI_SRC && rmmi_ptr->phb_is_epbw == KAL_TRUE && i > 0 
            && result.flag == L4C_OK && list != NULL)
        {
            rmmi_ptr->current_src = src_id;
            l4c_phb_update_entry_rrsp(list[0].record_index);
        }
        rmmi_ptr->phb_is_epbw = KAL_FALSE;
        #endif

        //#if defined(__PHB_STORAGE_BY_MMI__)
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
        #endif

        #if !defined(__PHB_STORAGE_BY_MMI__)        
        #if defined (__MMI_FMI__) && !defined(NEPTUNE_MMI)
        /* inform MMI with phb update indication */
        if ((src_id >= RMMI_SRC || temp_src == WAP_SRC) && (result.flag == L4C_OK) &&
            rmmi_ptr->is_cpbw_phb_fdn == KAL_FALSE)
        {

            l4c_phb_entry_struct update_list[1];
            l4cphb_file_info_struct sim_adn_info, nvram_adn_info;
            kal_uint8 storage;

            storage = l4c_phb_get_sim_storage_by_current_module();
            l4c_phb_get_file_info(PHB_PHONEBOOK, storage, &sim_adn_info, 1);
            l4c_phb_get_file_info(PHB_PHONEBOOK, PHB_STORAGE_NVRAM, &nvram_adn_info, 1); 

            if (list != NULL)
                kal_mem_cpy(update_list, list, 1 * sizeof(l4c_phb_entry_struct));
            else
                kal_mem_set(update_list, 0, 1 * sizeof(l4c_phb_entry_struct));

            l4c_phb_update_lind(
                (l4c_phb_update_enum) L4C_PHB_UPDATE,
                msg_ptr->old_index,
                sim_adn_info.total_num - sim_adn_info.free_num,
                nvram_adn_info.total_num - nvram_adn_info.free_num,  
                i,
                update_list);
        

            l4c_ptr->route_thru_lmmi = KAL_TRUE;
            l4c_ptr->route_thru_lmmi_user= src_id;
            return; //because L4C has higher priority than MMI, if AT write phb continually,

            //MMI external queue will be full.
            //l4c send phb update indication to MMI and
            //wait MMI PHB response mmi_at_general_res_req(true) to print "OK"
            //AT can write next phb after "OK"
        }
        #endif /* defined (__MMI_FMI__) */ 

        rmmi_ptr->is_cpbw_phb_fdn = KAL_FALSE;

        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->current_src = src_id;

                /* mtk02514 * MAUI_01660003 * 090402 *********************
                * When PHB return the cause PHB_CAUSE_CAPACITY_EXCEEDED, 
                * there are two meaning: one is the accessed storage is really full, 
                * the other is that FDN is enable and ADN can't be accessed
                *
                * For WinMo, they have no idea if the PHB_CAUSE_CAPACITY_EXCEEDED
                * is occured due to FDN enable or not. So we help to check this situation.
                * If we find out the cause PHB_CAUSE_CAPACITY_EXCEEDED in the FDN mode, 
                * we will change the cause to RMMI_ERR_UNKNOWN. 
                *
                * Although there might be a situation that we can access ADN in the FDN mode
                * and the ADN is really full. In this situation, we still return unknow error cause, 
                * But we think that it is ok to do that
                *****************************************************/
                #ifdef __WM_RIL_SUPPORT__
                if (result.cause == PHB_CAUSE_CAPACITY_EXCEEDED)
                {
                    kal_uint8 dn_type = l4csmu_get_dial_mode();

                    if ((dn_type == TYPE_FDN || dn_type == TYPE_FDN_BDN) && rmmi_ptr->phb_storage_type == RMMI_PHB_SM)
                    {
                        result.cause = RMMI_ERR_UNKNOWN;
                    }
                }
                #endif

                l4c_phb_general_rrsp(&result);
        }
        else
        #endif /* !defined(__PHB_STORAGE_BY_MMI__)  */
        if (temp_src == WAP_SRC)    /* send rsp to WAP */
        {
            #if defined(__NONE_USED_L4MMI_MESSAGE__)
            l4c_phb_exe_write_entry_wrsp(result, i, list);
            #endif
        }
        else if (src_id == LMMI_SRC)
        {
            l4c_phb_exe_write_entry_lrsp(result, i, list);
        }
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_delete_cnf_hdlr
 * DESCRIPTION
 *  this fucntion is used to handle the message MSG_ID_L4CPHB_DELETE_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_delete_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_delete_cnf_struct *msg_ptr = NULL;
    l4c_phb_entry_struct *list;
    l4c_result_struct result;
    kal_uint8 i = 0;

    l4c_context_struct *l4c_ptr = L4C_PTR;
    #if !defined(__PHB_STORAGE_BY_MMI__)        
    kal_uint8 src_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    msg_ptr = (l4cphb_delete_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    #else
    msg_ptr = (l4cphb_delete_cnf_struct*) local_para_ptr;
    #endif
    


    /* mtk02514 * MAUI_01656724 * 090328 *****************************
    * we should not do any action when the phb_current_action is L4C_NO_ACTION
    * since it might output the additional OK or ERROR to the UART
    *************************************************************/
    if(l4c_ptr->phb_current_action == L4C_NO_ACTION)
    {
        return;
    }


    /* if (L4C_PTR->cc_current_action[src_id] == CPBD_EXE) */
    {
        l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_DELETE_EMPTY); 

        list  = NULL;
        i = l4cphb_cnf_aux_hdlr(&list, peer_buff_ptr);        
        if (peer_buff_ptr == NULL) 
        {
            //hogan: 070226 when no_list = 0xff , total =0xffff for is the case of deleting all phb entry 
            if (msg_ptr->total == 0xFFFF)
            {
                i = 0xFF;
            }
        }   
        
        /*** mtk02514 * 090804 * MAUI_01933133 *********************
        * The following code is used to output index when deleting using AT+EPBW
        * But since it is no use now, we just comment it
        *******************************************************/
        #if 0
        #if defined(__SP_RIL_SUPPORT__) || defined(__AT_EPBW_SUPPORT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
        #endif

        //#if defined(__PHB_STORAGE_BY_MMI__)
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
        #endif

        #if !defined(__PHB_STORAGE_BY_MMI__)        
        #if defined (__MMI_FMI__) && !defined(NEPTUNE_MMI)
        /* sync with LMMI if AT delete one entry */
        if ((src_id >= RMMI_SRC) && (result.flag == L4C_OK))
        {
            l4c_phb_entry_struct update_list[1];
            l4cphb_file_info_struct sim_adn_info, nvram_adn_info;
            kal_uint8 storage;

            storage = l4c_phb_get_sim_storage_by_current_module();
            l4c_phb_get_file_info(PHB_PHONEBOOK, storage, &sim_adn_info, 1);
            l4c_phb_get_file_info(PHB_PHONEBOOK, PHB_STORAGE_NVRAM, &nvram_adn_info, 1); 

            if (list != NULL)
                kal_mem_cpy(update_list, list, 1 * sizeof(l4c_phb_entry_struct));
            else
                kal_mem_set(update_list, 0, 1 * sizeof(l4c_phb_entry_struct));
            update_list[0].record_index = rmmi_ptr->phb_del_index;
            update_list[0].storage = rmmi_ptr->phb_del_storage;

            l4c_phb_update_lind(
                (l4c_phb_update_enum) L4C_PHB_DELETE,
                msg_ptr->old_index,
                sim_adn_info.total_num - sim_adn_info.free_num,
                nvram_adn_info.total_num - nvram_adn_info.free_num, 
                i,
                update_list);
            rmmi_ptr->phb_del_index = 0;
            rmmi_ptr->phb_del_storage = 0xff;

	     l4c_ptr->route_thru_lmmi = KAL_TRUE;
	     l4c_ptr->route_thru_lmmi_user= src_id;
            return;     //because L4C has higher priority than MMI, if AT write phb continually,
            //MMI external queue will be full.
            //l4c send phb update indication to MMI and
            //wait MMI PHB response mmi_at_general_res_req(true) to print "OK"
            //AT can write next phb after "OK"

        }
        #endif /* defined (__MMI_FMI__) */ 

        /* lrsp or rrsp */
        if (src_id >= RMMI_SRC)
        {
            rmmi_ptr->current_src = src_id;
            l4c_phb_general_rrsp(&result);
        }
        else
        #endif /* !defined(__PHB_STORAGE_BY_MMI__)  */
        if (l4c_ptr->phb_current_action == CPBW_EXE)
        {
            l4c_phb_exe_write_entry_lrsp(result, i, list);
        }
        else
        {
            msg_ptr->old_index = msg_ptr->total==0xffff ? 0xffff : msg_ptr->old_index;
            l4c_phb_exe_delete_entry_lrsp(result, i, list, msg_ptr->old_index, msg_ptr->type);
        }
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_sync_cnf_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_SYNC_CNF
 *  which is used to request power-off after syncing the call logs between SIM and NVRAM
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_sync_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    #ifndef __MMI_FMI__
    if (l4c_ptr->phb_current_action == SYNC_LN) 
    {  
        rmmi_ptr->current_src = l4c_ptr->phb_user;
        l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
        
        l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
    }
    else
    #endif
    {
        if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE || l4c_ptr->cc_current_action[RMMI_SRC] == POWEROFF_EXE)
        {

            if (l4c_ptr->cfun_state != 0 && (l4c_comm_ptr->poweron_mode == POWER_ON_KEYPAD || l4c_comm_ptr->poweron_mode == POWER_ON_EXCEPTION))
            {
                l4c_send_msg_to_sim(MSG_ID_SIM_POWEROFF_REQ, NULL, NULL);
                l4c_ptr->sim_poweroff = KAL_FALSE;
            }
            else
            {
                l4c_ptr->sim_poweroff = KAL_TRUE;
            }

            l4c_ptr->cfun_state = 0;
            l4c_ptr->smu_activated = L4C_SMU_INACTIVE;
            l4c_ptr->mmrr_ready_flag = KAL_FALSE;
            l4c_ptr->sub_modules_ready = KAL_FALSE;

            if (l4c_current_mod_id == MOD_L4C)
            {
                nvram_read_req_struct *param_ptr;
                kal_uint8             access_id;

                if (l4c_ptr->cc_current_action[LMMI_SRC] == POWEROFF_EXE)
                {
                    access_id = LMMI_SRC;
                }
                else
                {
                    access_id = RMMI_SRC;
                }

                param_ptr = (nvram_read_req_struct*)l4c_construct_nvram_read_local_para(access_id,
                                                                                        NVRAM_EF_SYS_STATISTICS_LID,
                                                                                        1,
                                                                                        1);          

                l4c_sim_poweroff_timer_hdlr();

                l4c_send_msg_to_nvm(MSG_ID_NVRAM_READ_REQ, param_ptr, NULL, 0);
           }
        }
    }
}

// Karen: Optimization, to reduce 2k control buffer


/*****************************************************************************
 * FUNCTION
 *  l4cphb_startup_read_ind_hdlr
 * DESCRIPTION
 *  this function is used to handle the mesasge MSG_ID_L4CPHB_STARTUP_READ_IND
 *  which is used to return the PHB entries to LMMI when initiating the MOD_PHB
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_startup_read_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#if defined(__MMI_FMI__)
    l4cphb_startup_read_ind_struct *read_ind;
    mmi_phb_startup_read_ind_struct *param = construct_local_para(sizeof(mmi_phb_startup_read_ind_struct), TD_RESET);
    l4c_phb_entries_struct *phb_entries = param->phb_entries;
    int i;

    read_ind = (l4cphb_startup_read_ind_struct*) local_para_ptr;
    phb_entries->num_of_entry = read_ind->num_of_entry;
    for (i = 0; i < phb_entries->num_of_entry; i++)
    {
        phb_entries->phb_entry[i].index = read_ind->phb_entry[i].index;
        phb_entries->phb_entry[i].type = read_ind->phb_entry[i].type;
        phb_entries->phb_entry[i].storage = read_ind->phb_entry[i].storage;
        phb_entries->phb_entry[i].record_index = read_ind->phb_entry[i].record_index;

        kal_mem_cpy(&phb_entries->phb_entry[i].alpha_id, &read_ind->phb_entry[i].alpha_id, sizeof(l4_name_struct));
        kal_mem_cpy(&phb_entries->phb_entry[i].tel, &read_ind->phb_entry[i].tel_number, sizeof(l4_addr_bcd_struct));
    }
    param->access_id = read_ind->access_id;

    l4a_sendmsg_ilm(l4c_current_mod_id, MOD_MMI, MSG_ID_MMI_PHB_STARTUP_READ_IND, param);
#endif /* defined(__MMI_FMI__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_startup_begin_ind_hdlr
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_STARTUP_BEGIN_IND  
 *  which indicate the LMMI that the PHB initiation begins
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_startup_begin_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{   
    l4cphb_startup_begin_ind_struct *begin_ind;      //mtk02514_plutommi_usim
    kal_uint8 temp_src; 

    begin_ind = (l4cphb_startup_begin_ind_struct*) local_para_ptr;

    if (begin_ind == NULL)
        l4c_phb_startup_begin_lind(NULL);
    else
        l4c_phb_startup_begin_lind(begin_ind->desc);

    L4C_PTR->phb_ready_flag = KAL_FALSE;    

    temp_src = RMMI_PTR->current_src;   
    RMMI_PTR->current_src = RMMI_UNSOLICITED;
    l4c_phb_startup_begin_rind();
    RMMI_PTR->current_src = temp_src;
    
}


#ifdef __CANCEL_LOCK_POWERON__    
/*****************************************************************************
 * FUNCTION
 *  l4cphb_init_me_ln_cnf_hdlr
 * DESCRIPTION
 * this function is used to handle the message MSG_ID_L4CPHB_INIT_ME_LN_CNF
 * which will be used when the user cancel the input of the SIM PIN and init the MOD_PHB
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_init_me_ln_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_init_me_ln_cnf_struct *msg_ptr = NULL;

    msg_ptr = (l4cphb_init_ln_cnf_struct*) local_para_ptr;

    if (msg_ptr->result != PHB_ERRNO_SUCCESS)
    {
        /* phb fail */
    }
    else
    {
        l4c_phb_ln_ready_lind();
        l4c_eq_cancel_lock_poweron_lrsp(KAL_TRUE,L4C_NO_CAUSE);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4cphb_init_me_phb_cnf_hdlr
 * DESCRIPTION
 * this function is used to handle the message MSG_ID_L4CPHB_INIT_ME_PHB_CNF
 * which will be used when the user cancel the input of the SIM PIN and init the MOD_PHB
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 * RETURNS
 *  void
 *****************************************************************************/
void l4cphb_init_me_phb_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_init_me_phb_cnf_struct *msg_ptr = NULL;
    kal_uint8 temp_src;	
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    msg_ptr = (l4cphb_init_me_phb_cnf_struct*) local_para_ptr;

    if (msg_ptr->result != PHB_ERRNO_SUCCESS)
    {
        /* phb fail */
    }
    else
    {
        l4c_ptr->phb_ready_flag = KAL_TRUE;

        l4c_phb_startup_finish_lind(
            msg_ptr->adn_size,
            msg_ptr->phb_size,
            msg_ptr->adn_alpha_length,
            msg_ptr->fdn_alpha_length,
            msg_ptr->bdn_alpha_length,
            msg_ptr->msisdn_alpha_length, 
            msg_ptr->desc);

        temp_src = rmmi_ptr->current_src;   
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        l4c_phb_startup_finish_rind(
            msg_ptr->adn_size,
            msg_ptr->phb_size,
            msg_ptr->adn_alpha_length,
            msg_ptr->fdn_alpha_length,
            msg_ptr->bdn_alpha_length,
            msg_ptr->msisdn_alpha_length,
            msg_ptr->email_length,
            msg_ptr->desc);
        rmmi_ptr->current_src = temp_src; 

        l4c_eq_cancel_lock_poweron_lrsp(KAL_TRUE,L4C_NO_CAUSE);
    }    
    return;
}
#endif /* __CANCEL_LOCK_POWERON__ */


void l4cphb_read_usim_cnf_hdlr (local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    l4cphb_read_usim_cnf_struct*msg_ptr =  
            (l4cphb_read_usim_cnf_struct*) local_para_ptr;
    l4c_result_struct result;
    kal_uint16 packed_peer_buff_len;
    kal_uint8 *pdu_ptr;
    l4c_phb_usim_entry *entry;
    #ifdef __AT_EPBUM_SUPPORT__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_READ_EMPTY);


    if (peer_buff_ptr != NULL && msg_ptr->result != PHB_ERRNO_READ_EMPTY)
    {
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);
        entry = (l4c_phb_usim_entry*) get_32bits_aligned_val(pdu_ptr);

    }
    else 
    {
        entry = NULL;
    }

    #ifdef __AT_EPBUM_SUPPORT__
    if (msg_ptr->src_id >= RMMI_SRC)
    {
        rmmi_ptr->current_src = msg_ptr->src_id;
        if (result.flag == L4C_OK && entry != NULL)
        {
            l4c_phb_get_epbum_entry_rrsp(
                    msg_ptr->type, 
                    msg_ptr->record_index, 
                    msg_ptr->occurrence,
                    entry);
        }
        l4c_phb_general_rrsp(&result);
    }
    else
    #endif
    {
        l4c_phb_read_usim_lrsp(
                &result, 
                msg_ptr->type, 
                msg_ptr->occurrence, 
                msg_ptr->record_index, 
                entry);
    }

    //l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
#endif
}

void l4cphb_write_usim_cnf_hdlr (local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    l4cphb_write_usim_cnf_struct*msg_ptr =  
            (l4cphb_write_usim_cnf_struct*) local_para_ptr;
    l4c_result_struct result;
    l4c_phb_usim_entry *entry = NULL;
    kal_uint16 packed_peer_buff_len;
    kal_uint8 *pdu_ptr;
    #ifdef __AT_EPBUM_SUPPORT__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    if (peer_buff_ptr != NULL)
    {
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);
        entry = (l4c_phb_usim_entry*) get_32bits_aligned_val(pdu_ptr);
    }

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_SUCCESS);

    #ifdef __AT_EPBUM_SUPPORT__
    if (msg_ptr->src_id >= RMMI_SRC)
    {
        rmmi_ptr->current_src = msg_ptr->src_id;
        l4c_phb_general_rrsp(&result);
    }
    else
    #endif
    {
        l4c_phb_write_usim_lrsp(
                &result, 
                msg_ptr->type, 
                msg_ptr->occurrence, 
                msg_ptr->record_index,
                entry);
    }

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
#endif
}

void l4cphb_delete_usim_cnf_hdlr (local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    l4cphb_delete_usim_cnf_struct*msg_ptr =  
            (l4cphb_delete_usim_cnf_struct*) local_para_ptr;
    l4c_result_struct result;
    #ifdef __AT_EPBUM_SUPPORT__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_DELETE_EMPTY);

    #ifdef __AT_EPBUM_SUPPORT__
    if (msg_ptr->src_id >= RMMI_SRC)
    {
        rmmi_ptr->current_src = msg_ptr->src_id;
        l4c_phb_general_rrsp(&result);
    }
    else
    #endif
    {
        l4c_phb_delete_usim_lrsp(
                &result, 
                msg_ptr->type, 
                msg_ptr->occurrence, 
                msg_ptr->record_index);
    }
    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
#endif
}

void l4cphb_check_write_usim_entry_cnf_hdlr (local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __PHB_USIM_ADDITIONAL_SUPPORT__

    l4cphb_check_write_usim_entry_cnf_struct *msg_ptr =  
            (l4cphb_check_write_usim_entry_cnf_struct*) local_para_ptr;

    l4c_result_struct result;

    result.flag = L4C_OK;
    result.cause = msg_ptr->result;

    l4c_phb_check_write_usim_entry_lrsp(
            &result, 
            msg_ptr->occurrence, 
            msg_ptr->record_index);

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
#endif /* __PHB_USIM_ADDITIONAL_SUPPORT__ */     
}






/*****************************************************************************
 * FUNCTION
 *  l4cphb_fdn_get_name_cnf
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_FDN_GET_NAME_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 *    
 * RETURNS
 *   void
 *****************************************************************************/
void l4cphb_fdn_get_name_cnf (local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    #ifdef __PHB_FDN_GET_NAME__
    kal_uint8 src_id;
    l4cphb_fdn_get_name_cnf_struct *msg_ptr;
    l4c_result_struct result;
    l4_name_struct alpha_id;
    
    msg_ptr = (l4cphb_fdn_get_name_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;
    
    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_SUCCESS);       

    kal_mem_cpy(
        (kal_uint8*) &alpha_id,
        (kal_uint8*) &msg_ptr->alpha_id,
        sizeof(l4_name_struct));
    alpha_id.name[msg_ptr->alpha_id.name_length] = 0;

    l4c_phb_fdn_get_name_lrsp(result, alpha_id);


    #endif /* #ifdef __PHB_FDN_GET_NAME__ */
}

#ifdef __PHB_ACCESS_SIM_LN__
/*****************************************************************************
 * FUNCTION
 *  l4cphb_read_sim_ln_cnf
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_READ_SIM_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 *    
 * RETURNS
 *   void
 *****************************************************************************/
void l4cphb_read_sim_ln_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_read_sim_ln_cnf_struct *msg_ptr =  
            (l4cphb_read_sim_ln_cnf_struct*) local_para_ptr;
    l4c_phb_ln_entry_struct entry;
    l4c_result_struct result;

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_SUCCESS);         

    l4cphb_setup_ln_entry(&msg_ptr->entry, &entry);

    if (msg_ptr->record_index == 1)
    {
    #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
        l4c_phb_set_last_number_dialed( &entry.address.tel, msg_ptr->type, entry.address_type);
    #else 
        l4c_phb_set_last_number_dialed( &entry.tel, msg_ptr->type, 0);
    #endif 
    }


    l4c_phb_read_sim_ln_lrsp(result, entry);

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_write_sim_ln_cnf
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_WRITE_SIM_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 *    
 * RETURNS
 *   void
 *****************************************************************************/
void l4cphb_write_sim_ln_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_write_sim_ln_cnf_struct *msg_ptr =  
            (l4cphb_write_sim_ln_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_SUCCESS);         

    l4c_phb_write_sim_ln_lrsp(result, msg_ptr->type);

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);
}

/*****************************************************************************
 * FUNCTION
 *  l4cphb_delete_sim_ln_cnf
 * DESCRIPTION
 *  this function is used to handle the message MSG_ID_L4CPHB_DELETE_SIM_LN_CNF
 *  
 * PARAMETERS
 *  local_para_ptr      [IN]     the  local paramters of the message
 *  peer_buff_ptr       [IN]     the peer buffer of the message
 *    
 * RETURNS
 *   void
 *****************************************************************************/
void l4cphb_delete_sim_ln_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cphb_delete_sim_ln_cnf_struct *msg_ptr =  
            (l4cphb_delete_sim_ln_cnf_struct*) local_para_ptr;
    l4c_result_struct result;

    l4c_phb_set_result_code(msg_ptr->result, msg_ptr->cause, &result, PHB_ERRNO_SUCCESS);         

    l4c_phb_delete_sim_ln_lrsp(result, msg_ptr->type);

    l4c_set_user_action(L4C_PHB, L4C_NO_USER, L4C_NO_ACTION);

}

#endif /*__PHB_ACCESS_SIM_LN__*/

#endif /* __MOD_PHB__ */ 

