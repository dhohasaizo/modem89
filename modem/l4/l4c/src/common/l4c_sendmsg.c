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
 * L4C_SENDMSG.C
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
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_SENDMSG_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "drv_sap.h"
#include "md_sap.h"
#include "mw_sap.h"
#include "md_mw_sap.h"
#include "md_mmi_sap.h"
#include "svc_sap.h"
#include "md_drv_sap.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "sim_ps_msgid.h"
//#include "l4_ipc_msgid.h"
#include "ipc_msgsvc_msgid.h"
#if defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__)
//#include "mmi_msgid.h"
#endif

#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"
#include "csmcc_defs.h"
//#include "mcd_l4_common.h" 

#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4_trc.h"

#ifdef __MOD_CSM__
//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
//#include "l4c_aux_struct.h"
//#include "l4c2csm_ss_struct.h"
#endif /* __MOD_CSM__ */ 

#ifdef __MOD_SMU__
//#include "l4c2smu_struct.h"
#endif 
#ifdef __MOD_RAC__

//#include "l3_inc_enums.h"
//#include "l3_inc_local.h"
//#include "mcd_l3_inc_struct.h"
//#include "l4c2rac_struct.h"
#endif /* __MOD_RAC__ */ 
#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"   /* smsal */
//#include "mcd_l4c2smsal_peer.h"
//#include "smsal_l4c_defs.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_l4c_funcs.h"
#endif /* __MOD_SMSAL__ */ 
#ifdef __MOD_UEM__
//#include "l4c2uem_struct.h"
//#include "mcd_uem_peer.h"
#endif /* __MOD_UEM__ */ 
#ifdef __MOD_PHB__
//#include "l4c2phb_enums.h"      /* phb */
#include "l4c2phb_struct.h"
#include "phb_sap.h"
#endif /* __MOD_PHB__ */ 
#include "mcd.h"

//#include "csmcc_atfunc.h"
//#include "keypad_sw.h"
//#include "rmmi_ind.h"
//#include "l4c_utility.h"
#include "l4_event_info_trc.h"

//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "common_nvram_editor_data_item.h"
#include "event_info_utility.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
    
//agps_ipc
#if defined(__AGPS_CONTROL_PLANE__) || defined(__NBR_CELL_INFO__)
#if defined(__ANDROID_RIL_SUPPORT__)
#include "ipc_msgsvc_msgid.h"
#include "ipc_msgsvc.h"
#include "l4_ipc_msg_struct.h"
#endif
#endif
#include "l4c_sendmsg.h"
#include "rmmi_context.h"
#include "l4c_cc_cmd.h"
#include "rmmi_utility.h"

extern kal_uint8 cm_max_retry_count(void);
extern kal_bool csmcc_is_any_call_exist(void);


#ifdef __EXT_MODEM__
module_type custom_ext_modem_mod_id(void);
#endif

#ifdef __MOD_CSM__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_csm
 * DESCRIPTION
 *  This is l4c_send_msg_to_csm function of L4C module.
 *  send msg to csmcc module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer of the msg to be sent
 *  length          [IN]        Byte count of the peer buffer
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_csm(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr, kal_uint16 length)
{
    peer_buff_struct *pdu_ptr = NULL;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_CSM_ENTRY);

    /* First allocate a memory for an interlayer message structure */

    if (length != 0)
    {
        pdu_ptr = (peer_buff_struct*) construct_peer_buff(
                                        length,
                                        0,  /* no header */
                                        0,  /* no tail */
                                        TD_DL);

        pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(pdu_ptr, &len);
    }

    if (msg_name == MSG_ID_L4CCSM_CC_SAT_SETUP_REQ)
    {
        kal_mem_cpy(pdu_stream_ptr, buffer_ptr, length);
    }

    l4c_send_msg(L4_MODULE(MOD_CSM, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, CSM_L4C_SAP, param_ptr, pdu_ptr);
    
    return;
}
#endif /* __MOD_CSM__ */ 

#ifdef __MOD_CSM__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_csm_ciss
 * DESCRIPTION
 *  This is l4c_send_msg_to_ciss function of L4C module.
 *  send msg to csmss module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_csm_ciss(msg_type msg_name, void *param_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_CSM_CISS_ENTRY);



    l4c_send_msg(L4_MODULE(MOD_CSM, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, CSM_L4C_SAP, param_ptr, NULL);

    return;
}
#endif /* __MOD_CSM__ */ 

#ifdef __MOD_SMU__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_smu
 * DESCRIPTION
 *  This is l4c_send_msg_to_smu function of L4C module.
 *  send msg to smu module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_smu(msg_type msg_name, void *param_ptr)
{


    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_SMU_ENTRY);



    l4c_send_msg(L4_MODULE(MOD_SMU, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, SMU_L4C_SAP, param_ptr, NULL);

    return;
}
#endif /* __MOD_SMU__ */ 

#ifdef __MOD_RAC__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_rac
 * DESCRIPTION
 *  This is l4c_send_msg_to_rac function of L4C module.
 *  send msg to rac module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_rac(msg_type msg_name, void *param_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_RAC_ENTRY);

    /* Prevent trigger NW related request to ps-modules in Modis*/
#if !defined(__MTK_TARGET__) && !defined(__UE_SIMULATOR__)
    if(msg_name != MSG_ID_L4CRAC_ACT_REQ && msg_name != MSG_ID_L4CRAC_SIM_STATUS_UPDATE_REQ)
    {
    #ifndef __RMMI_UT__    
        return;
	#endif //MAUI_01922673, mtk02285, 20091209
    }
#endif



    l4c_send_msg(L4_MODULE(MOD_RAC, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, RAC_L4C_SAP, param_ptr, NULL);

    return;
}
#endif /* __MOD_RAC__ */ 

#ifdef __MOD_SMSAL__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_smsal
 * DESCRIPTION
 *  This is l4c_send_msg_to_smsal function of L4C module.
 *  send msg to smsal module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer before pack
 *  length          [IN]        Byte count of the peer buffer
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_smsal(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr, kal_uint16 length)
{
    peer_buff_struct *peer_buff_ptr = NULL;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_SMSAL_ENTRY);


    if (buffer_ptr == NULL)
    {
    }
    else if (length > 0)
    {
        peer_buff_ptr = (peer_buff_struct*) construct_peer_buff(
                                                length,
                                                0,  /* no header */
                                                0,  /* no tail */
                                                TD_DL);

        pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(peer_buff_ptr, &len);


        kal_mem_cpy(pdu_stream_ptr, buffer_ptr, length);
    }

    l4c_send_msg(L4_MODULE(MOD_SMSAL, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, SMSAL_L4C_SAP, param_ptr, peer_buff_ptr);

    return;
}
#endif /* __MOD_SMSAL__ */ 

#ifdef __MOD_UEM__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_uem
 * DESCRIPTION
 *  This is l4c_send_msg_to_uem function of L4C module.
 *  send msg to uem module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer before pack
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_uem(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr)
{
#if 0 //eq_action_revise
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_UEM_ENTRY);


#if 0 //eq_action_revise no peer_buffer now
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

    l4c_send_msg(MOD_UEM, 
            msg_name, UEM_L4C_SAP, param_ptr, NULL);

    return;
}
#endif /* __MOD_UEM__ */ 

#ifdef __MOD_PHB__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_phb
 * DESCRIPTION
 *  This is l4c_send_msg_to_phb function of L4C module.
 *  send msg to phb module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_phb(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr)
{
    peer_buff_struct *peer_buff_ptr = NULL;
    kal_uint16 pdu_length;
    kal_uint8 *pdu_stream_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_PHB_ENTRY);


    if (buffer_ptr != NULL)
    {
        kal_uint16 count;
        kal_uint16 length;

        if (msg_name == MSG_ID_L4CPHB_WRITE_REQ)
        {
            count = ((l4cphb_phb_entry_array_struct*) buffer_ptr)->no_array;
            length = count * sizeof(phb_entry_struct);
            pdu_stream_ptr = l4cphb_alloc_peer_buf(&peer_buff_ptr, count);

            kal_mem_cpy(
                ((l4cphb_phb_entry_array_struct*) pdu_stream_ptr)->array,
                ((l4cphb_phb_entry_array_struct*) buffer_ptr)->array,
                length);
        }
        #if defined(__PHB_USIM_ADDITIONAL_SUPPORT__)   //mtk02514_usim
        else if (msg_name == MSG_ID_L4CPHB_WRITE_USIM_REQ)
        {
            peer_buff_ptr = construct_peer_buff(sizeof(l4c_phb_usim_field), 0, 0, TD_RESET);
            pdu_stream_ptr = (kal_uint8*) 
                    get_32bits_aligned_val(get_peer_buff_pdu(peer_buff_ptr, &pdu_length));

            kal_mem_cpy(pdu_stream_ptr, buffer_ptr, pdu_length);
        }
        #endif
    #if !defined(__PHB_NO_CALL_LOG__)
    /* because l4cphb_alloc_ln_peer_buf is wrapped */
        else if (msg_name == MSG_ID_L4CPHB_WRITE_LN_REQ)
        {
            count = ((l4cphb_phb_ln_entry_array_struct*) buffer_ptr)->no_array;
            length = count * sizeof(phb_ln_entry_struct);
            pdu_stream_ptr = l4cphb_alloc_ln_peer_buf(&peer_buff_ptr, count);

            kal_mem_cpy(
                ((l4cphb_phb_ln_entry_array_struct*) pdu_stream_ptr)->array,
                ((l4cphb_phb_ln_entry_array_struct*) buffer_ptr)->array,
                length);
        }
    #endif /* !defined(__PHB_NO_CALL_LOG__) */
    }



    l4c_send_msg(L4_MODULE(MOD_PHB, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, PHB_L4C_SAP, param_ptr, peer_buff_ptr);

    return;
}
#endif /* __MOD_PHB__ */ 

#ifdef __MOD_TCM__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_tcm
 * DESCRIPTION
 *  This is l4c_send_msg_to_tcm function of L4C module.
 *  send msg to tcm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_tcm(msg_type msg_name, void *param_ptr)
{


    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_TCM_ENTRY);


    l4c_send_msg(L4_MODULE(MOD_TCM, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, TCM_L4C_SAP, param_ptr, NULL);

    return;
}

#if defined(__MOD_TCM__) && defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_ratdm
 * DESCRIPTION
 *  
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_ratdm(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(L4_MODULE(MOD_RATDM, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, L4C_RATDM_SAP, param_ptr, NULL);

    return;
}
#endif /* defined(__MOD_TCM__) && defined(__EXT_PDP_CONTEXT_ON__) && defined(__PS_DIALUP__) && defined(__DIALUP_GPRS_COUNTER_SUPPORT__) */
#endif /* __MOD_TCM__ */ 

/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_ppp
 * DESCRIPTION
 *  This is l4c_send_msg_to_ppp function of L4C module.
 *  send msg to ppp module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_ppp(msg_type msg_name, void *param_ptr)
{


    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_PPP_ENTRY);

    l4c_send_msg(MOD_PPP, 
            msg_name, PPP_L4C_SAP, param_ptr, NULL);

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_abm
 * DESCRIPTION
 *  
 * PARAMETERS
 *  msg_name        [IN]        
 *  param_ptr       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_abm(msg_type msg_name, void *param_ptr)
{
#ifdef __TCPIP__
    //if(is_app_present(APP_WAP))
    {
 
        l4c_send_msg(MOD_ABM, 
            msg_name, L4C_ABM_SAP, param_ptr, NULL);

    }
#endif /* __TCPIP__ */ 
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_wap
 * DESCRIPTION
 *  030528 mtk00468 add for supportting WAP profile set and
 *  This is l4c_send_msg_to_wap function of L4C module.
 *  send msg to tcm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef WAP_SUPPORT
void l4c_send_msg_to_wap(msg_type msg_name, void *param_ptr)
{
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_WAP_ENTRY);
    l4c_send_msg(MOD_WAP, 
            msg_name, MMI_L4C_SAP, param_ptr, NULL);

    return;
}

#endif /* WAP_SUPPORT */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_nvm
 * DESCRIPTION
 *  This is l4c_send_msg_to_nvm function of L4C module.
 *  send msg to nvm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer of the msg to be sent
 *  length          [IN]        Byte count of the peer buffer
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_nvm(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr, kal_uint16 length)
{
    peer_buff_struct *pdu_ptr = NULL;
    kal_uint8 *pdu_stream_ptr = NULL;
    kal_uint16 len;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_NVM_ENTRY);

    if (length != 0)
    {        
        pdu_ptr = (peer_buff_struct*) construct_peer_buff(
                                        length,
                                        0,  /* no header */
                                        0,  /* no tail */
                                        TD_DL);

        pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(pdu_ptr, &len);
    }

    if (msg_name == MSG_ID_NVRAM_WRITE_REQ)
    {
        kal_mem_cpy(pdu_stream_ptr, buffer_ptr, length);
    }

    l4c_send_msg(MOD_NVRAM, 
            msg_name, PS_NVRAM_SAP, param_ptr, pdu_ptr);

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_sim
 * DESCRIPTION
 *  This is l4c_send_msg_to_sim function of L4C module.
 *  send msg to sim module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 *  buffer_ptr      [IN]        Peer buffer of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_sim(msg_type msg_name, void *param_ptr, kal_uint8 *buffer_ptr)
{
    peer_buff_struct *peer_buff_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_SIM_ENTRY);

#ifdef __SAT__
    if (buffer_ptr != NULL)
    {
        if (msg_name == MSG_ID_SAT_GET_INKEY_RES)
        {
            peer_buff_ptr = L4C_PACK(
                                sat_get_inkey_res_peer_struct_pack,
                                sat_get_inkey_res_peer_struct_bits,
                                MCD_SAT_GET_INKEY_RES_PEER_STRUCT,
                                buffer_ptr,
                                0,
                                0);
        }
        else if (msg_name == MSG_ID_SAT_GET_INPUT_RES)
        {
            peer_buff_ptr = L4C_PACK(
                                sat_get_input_res_peer_struct_pack,
                                sat_get_input_res_peer_struct_bits,
                                MCD_SAT_GET_INPUT_RES_PEER_STRUCT,
                                buffer_ptr,
                                0,
                                0);
        }

#ifdef __SATCE__
#ifdef EXTERNAL_MMI
/* under construction !*/
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
    }
#endif /* __SAT__ */ 

    l4c_send_msg(L4_MODULE(MOD_SIM, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, PS_SIM_SAP, param_ptr, peer_buff_ptr);

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_irda
 * DESCRIPTION
 *  030829 mtk00468 add for supportting IRDA feature
 *  This is l4c_send_msg_to_irda function of L4C module.
 *  send msg to tcm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __IRDA_SUPPORT__
void l4c_send_msg_to_irda(msg_type msg_name, void *param_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_IRDA_ENTRY);

    l4c_send_msg(MOD_IRCOMM, 
            msg_name, IRCOMM_APP_SAP, param_ptr, NULL);

    return;
}

#endif /* __IRDA_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_t30
 * DESCRIPTION
 *  2003.12 mtk00714 add for supportting Fax feature
 *  This is l4c_send_msg_to_t30 function of L4C module.
 *  send msg to T.30 module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __CSD_FAX__
void l4c_send_msg_to_t30(msg_type msg_name, void *param_ptr)
{

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SEND_MSG_TO_T30_ENTRY);


    l4c_send_msg(L4_MODULE(MOD_T30, (l4c_current_mod_id - MOD_L4C)), 
            msg_name, T30_L4C_SAP, param_ptr, NULL);

    return;
}

#endif /* __CSD_FAX__ */ 

#ifdef __CMUX_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_cmux
 * DESCRIPTION
 *  This is l4c_send_msg_to_tcm function of L4C module.
 *  send msg to tcm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_cmux(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(MOD_CMUX, 
            msg_name, DRIVER_PS_SAP, param_ptr, NULL);

    return;
}

#endif /* __CMUX_SUPPORT__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_tst_reader
 * DESCRIPTION
 *  This is l4c_send_msg_to_tst_reader function of L4C module.
 *  send msg to TST module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_tst_reader(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(MOD_TST_READER, 
            msg_name, DRIVER_PS_SAP, param_ptr, NULL);

    return;
}


#if !defined(__MTK_TARGET__) || defined(__RMMI_IO_LOGGING__) //RMMI_UT ---
typedef struct
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    kal_uint8 src_id;
    kal_uint8 port;
    kal_uint8 string[1024];
    kal_bool stuff;
} local_atci_ut_rmmi_input_string_struct2; // MSG_ID_ATCI_UT_RMMI_OUTPUT_STRING

void l4c_fake_rmmi_input_str_logging(rmmi_string_struct *source_string_ptr)
{      
    local_atci_ut_rmmi_input_string_struct2* rmmi_ut_input_str = 
        (local_atci_ut_rmmi_input_string_struct2*) construct_local_para(
            (kal_uint16) sizeof(local_atci_ut_rmmi_input_string_struct2), TD_RESET);
    rmmi_ut_input_str->src_id = source_string_ptr->src_id;
    rmmi_ut_input_str->port = rmmi_cid_2_port(rmmi_srcid_2_cid((kal_uint8)source_string_ptr->src_id));
    strncpy(rmmi_ut_input_str->string, source_string_ptr->string_ptr, 1024);

    msg_send6(rmmi_current_mod_id,l4c_current_mod_id,DRIVER_PS_SAP,MSG_ID_ATCI_UT_RMMI_INPUT_STRING,
              (local_para_struct*)rmmi_ut_input_str,NULL);
}

#endif //--- RMMI_UT

#ifdef __UE_SIMULATOR__
void l4c_send_msg_to_uegw(msg_type msg_name, void *param_ptr)
{
    msg_send6(MOD_L4C,MOD_UEGW_TASK,UEGW_L4C_SAP,msg_name,(local_para_struct*) param_ptr,NULL);

	return;
}
#endif

#ifdef __GEMINI__
/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_rsvas
 * DESCRIPTION
 *  This is l4c_send_msg_to_rsvas function of L4C module.
 *  send msg to RSVAS module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_rsvas(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(MOD_RSVAS, 
            msg_name, RSVAS_SAP, param_ptr, NULL);

    return;
}
#endif /* __GEMINI__ */ 

#ifdef __EXT_MODEM__


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_ext_modem
 * DESCRIPTION
 *  This is l4c_send_msg_to_ext_modem function of L4C module.
 *  send msg to tcm module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_ext_modem(msg_type msg_name, void *param_ptr)
{

    msg_send5(MOD_L4C, custom_ext_modem_mod_id(), 
            DT_L4C_SAP, msg_name, (local_para_struct*) param_ptr);

    return;
}

#endif /* __EXT_MODEM__ */ 

#if defined(__BT_SUPPORT__)
extern kal_uint8 BT_MODULE_ID;


/*****************************************************************************
 * FUNCTION
 *  rmmi_send_msg_to_bt
 * DESCRIPTION
 *  This is rmmi_send_msg_to_bt function of L4C module.
 *  send msg to BT module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_send_msg_to_bt(msg_type msg_name, void *param_ptr)
{

    msg_send5(rmmi_current_mod_id, MOD_BT, 
            DRIVER_PS_SAP, msg_name, (local_para_struct*) param_ptr);

    return;
}

#endif /* defined(__BT_SUPPORT__) */ 


#ifdef __UAGPS_CP_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_uagps_cp
 * DESCRIPTION
 *  This is l4c_send_msg_to_uagps_cp function of L4C module.
 *  send msg to MOD_UAGPS_CP
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_uagps_cp(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(MOD_UAGPS_CP, 
            msg_name, UAGPS_CP_L4C_SAP, param_ptr, NULL);
    
    return;
}
#endif /* __UAGPS_CP_SUPPORT__ */ 


#ifdef __AGPS_CONTROL_PLANE__
/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_rrlp
 * DESCRIPTION
 *  This is l4c_send_msg_to_rrlp function of L4C module.
 *  send msg to MOD_RRLP
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_rrlp(msg_type msg_name, void *param_ptr)
{

    l4c_send_msg(MOD_RRLP, 
            msg_name, L4C_RRLP_SAP, param_ptr, NULL);
    
    return;
}
#endif /* __AGPS_CONTROL_PLANE__ */


/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg_to_meme
 * DESCRIPTION
 *  This is l4c_send_msg_to_meme function of l4 module.
 *  send msg to MEME module
 * PARAMETERS
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg_to_meme(msg_type msg_name, void *param_ptr)
{
#ifdef __UMTS_RAT__
    /* Send the message to the MEME module */
    l4c_send_msg(MOD_MEME, msg_name, AS_L4C_SAP, param_ptr, NULL);
#endif
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4c_send_queued_msg
 * DESCRIPTION
 *  This is l4c_send_queued_msg function of L4C module.
 *  send queued msg due to force search network
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 *  operation   [IN]        l4c_operation_type_enum, refer to MAUI_02626058
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_queued_msg(kal_uint8 src_id, kal_uint8 operation)
{
    #ifndef __UCM_SUPPORT__
    #if defined(__BT_SUPPORT__)	
    kal_uint8 voice_call = KAL_FALSE;
	#endif
	#endif
    l4ccsm_cc_call_setup_req_struct *msg_ptr;
    l4ccsm_cc_sat_setup_req_struct *msg_ptr1;
    l4ccsm_cc_emergency_call_setup_req_struct *msg_ptr2; //for_lv
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if ((l4c_ptr->cc_parameter[src_id].length == 0) && (l4c_ptr->ss_parameter.length == 0))
    {
        ASSERT(0);
    }

    //only CC or SS can be sent
    if ((operation == L4C_CALL_OPERATION) && (l4c_ptr->cc_current_action[src_id] != L4C_NO_ACTION)) //MAUI_02626058
    {
        switch (l4c_ptr->cc_current_action[src_id])
        {
            case ATD_EXE:
                msg_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (msg_ptr->call_type == CSMCC_VOICE_CALL || msg_ptr->call_type == CSMCC_AUX_VOICE_CALL)
                {
                    #ifndef __UCM_SUPPORT__
                    #if defined(__BT_SUPPORT__)	
                    voice_call = KAL_TRUE;
					#endif
					#endif
                }
                //for_lv
                if (l4c_ptr->retry_cc == KAL_TRUE)
                {
                    msg_ptr->l4c_retry = KAL_TRUE;
                }
                
                ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_NORMAL_CALL_ATTEMPT, MOD_L4C);
                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_SETUP_REQ, l4c_ptr->cc_parameter[src_id].data, NULL, 0);
                break;
            case ATD_ECC:
            case ATD_ECC_CHANGE_RAT: //MAUI_02554068
                //for_lv
                msg_ptr2 = (l4ccsm_cc_emergency_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (l4c_ptr->retry_cc == KAL_TRUE)
                {
                    msg_ptr2->l4c_retry = KAL_TRUE;
                }
                
                ps_event_trace(TRACE_GROUP_6, EVENT_INFO_GROUP6_ECC_CALL_ATTEMPT, MOD_L4C);		 	
                l4c_send_msg_to_csm(
                    MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ,
                    l4c_ptr->cc_parameter[src_id].data,
                    NULL,
                    0);
                #ifndef __UCM_SUPPORT__
                #if defined(__BT_SUPPORT__)	
                voice_call = KAL_TRUE;
				#endif
				#endif
                break;
            #if defined(__TCPIP_OVER_CSD__)
            case ABM_ACT:
                //for_lv
                msg_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (l4c_ptr->retry_cc == KAL_TRUE)
                {
                    msg_ptr->l4c_retry = KAL_TRUE;
                }
                
                l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_CALL_SETUP_REQ, l4c_ptr->cc_parameter[src_id].data, NULL, 0);
                break;
            case ABM_ACT_ECC:
                //for_lv
                msg_ptr2 = (l4ccsm_cc_emergency_call_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (l4c_ptr->retry_cc == KAL_TRUE)
                {
                    msg_ptr2->l4c_retry = KAL_TRUE;
                }
                
                l4c_send_msg_to_csm(
                    MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ,
                    l4c_ptr->cc_parameter[src_id].data,
                    NULL,
                    0);
                break;
            #endif 

            #ifdef __SAT__
            case SAT_ATD_EXE:
                msg_ptr1 = (l4ccsm_cc_sat_setup_req_struct*) l4c_ptr->cc_parameter[src_id].data;
                if (msg_ptr1->sat_call_type == CSMCC_VOICE_CALL || msg_ptr1->sat_call_type == CSMCC_AUX_VOICE_CALL)
                {
                    #ifndef __UCM_SUPPORT__
                    #if defined(__BT_SUPPORT__)  
                    voice_call = KAL_TRUE;
					#endif
					#endif
                }
                //for_lv
                if (l4c_ptr->retry_cc == KAL_TRUE)
                {
                    msg_ptr1->l4c_retry = KAL_TRUE;
                }
                
                l4c_send_msg_to_csm(
                    MSG_ID_L4CCSM_CC_SAT_SETUP_REQ,
                    l4c_ptr->cc_parameter[src_id].data,
                    (kal_uint8*) l4c_ptr->cc_peer_buf.data,
                    l4c_ptr->cc_peer_buf.length);
                break;
            #endif /* __SAT__ */ 
        }
        l4c_ptr->cc_retry_ongoing_flag = KAL_TRUE;

        //mtk01616_070707: UCM will handle +ciev response
    #ifndef __UCM_SUPPORT__
    #if defined(__BT_SUPPORT__)
    #ifdef __HF_V15__
        {
            kal_uint8 call_id;
            kal_bool hold;

            hold = l4ccsm_cc_get_hold_call(&call_id);
            if (hold == KAL_TRUE)
            {
                l4c_cc_handfree_rind(RMMI_CIND_CALLHELD, RMMI_CIND_HELD_ACTIVE_HOLD);
            }
        }
    #endif /* __HF_V15__ */ 
        if (voice_call == KAL_TRUE)
        {
            l4c_cc_handfree_rind(RMMI_CIND_CALLSETUP, RMMI_CIND_CSUP_OUTGOING);
        }
    #endif /* defined(__BT_SUPPORT__) */ 
    #endif /* __UCM_SUPPORT__ */ 

    }
    else if ((operation == L4C_SS_OPERATION) && (l4c_ptr->ss_user == src_id)) //MAUI_02626058
    {
        switch (l4c_ptr->ss_current_action)
        {
            case PARSE_SS_EXE:
        #ifdef __SAT__ 
            case SAT_USD_EXE:
        #endif //mtk02508_090218: sat_ussd use l4ccsm_ciss_ss_parse_req instead of l4ccsm_ciss_pussr_begin_req
                l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_SS_PARSE_REQ, l4c_ptr->ss_parameter.data);
                break;
            case CUSD_EXE:
                l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ, l4c_ptr->ss_parameter.data);
                break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_clear_ss_parameter
 * DESCRIPTION
 *  This is l4c_clear_ss_parameter function of L4C module.
 *  clear ss_parameter in L4C context
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_ss_parameter(kal_uint8 src_id)
{
    local_para_struct *local_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->ss_parameter.length > 0)
    {
        local_ptr = (local_para_struct*) l4c_ptr->ss_parameter.data;
        local_ptr->ref_count = 1;       /* make sure the reference count is 1 so that when 
                                           call free locl para that pare will be freed successfull */
        free_local_para(local_ptr);
        l4c_ptr->ss_parameter.length = 0;
        l4c_ptr->ss_parameter.data = NULL;
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_clear_cc_parameter
 * DESCRIPTION
 *  This is l4c_clear_cc_parameter function of L4C module.
 *  clear cc_parameter in L4C context
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_cc_parameter(kal_uint8 src_id)
{
    local_para_struct *local_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->cc_parameter[src_id].length > 0)
    {
        local_ptr = (local_para_struct*) l4c_ptr->cc_parameter[src_id].data;
        local_ptr->ref_count = 1;       /* make sure the reference count is 1 so that when 
                                           call free locl para that pare will be freed successfull */
        free_local_para(local_ptr);
        l4c_ptr->cc_parameter[src_id].length = 0;
        l4c_ptr->cc_parameter[src_id].data = NULL;
    }

#ifdef __SAT__
    if (l4c_ptr->cc_current_action[src_id] == SAT_ATD_EXE)
    {
        if (l4c_ptr->cc_peer_buf.length > 0)
        {
            free_ctrl_buffer(l4c_ptr->cc_peer_buf.data);
        }
        l4c_ptr->cc_peer_buf.data = NULL;
        l4c_ptr->cc_peer_buf.length = 0;
    }
#endif /* __SAT__ */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_clear_ss_queued_msg
 * DESCRIPTION
 *  This is l4c_clear_ss_queued_msg function of L4C module.
 *  clear queued ss msg due to user abort
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_ss_queued_msg(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim
    
    /* clear l4c context for retry wether it is test SIM or not  */
    l4c_clear_ss_parameter(src_id);

    //clean retry context only if ss is retry
    if ((l4c_ptr->retry_ss == KAL_TRUE) && (l4c_ptr->retry_src_id == src_id)) 
    {
        kal_brief_trace(TRACE_INFO, INFO_STOP_RETRY, l4c_ptr->ss_current_action);
        /* for now we only support one retry at a time (cc or ss), 
        so even_id[3] is shared by ss and cc retry */
        if (l4c_ptr->event_id[3] != 0)
        {
            kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[3]);
            evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[3]));
            l4c_ptr->event_id[3] = 0;
        }
        l4c_ptr->retry_ss = KAL_FALSE;
        l4c_ptr->retry_count = 0;
        l4c_ptr->max_retry_count = cm_max_retry_count();
        l4c_ptr->retry_src_id = INVALID_SRC;
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_clear_cc_queued_msg
 * DESCRIPTION
 *  This is l4c_clear_cc_queued_msg function of L4C module.
 *  clear queued msg due to user abort
 * PARAMETERS
 *  src_id      [IN]        MMI source of the initial request
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_cc_queued_msg(kal_uint8 src_id)
{
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    /* clear l4c context for retry wether it is test SIM or not  */
    l4c_clear_cc_parameter(src_id);
    
    l4c_ptr->mo_call_id = CSMCC_INVALID_CALL_ID;	

    if (!csmcc_is_any_call_exist())
    {
        l4c_cc_send_csm_call_abort_req();
    }
    if ((l4c_ptr->retry_cc == KAL_TRUE) && (l4c_ptr->retry_src_id == src_id))
    {
        kal_brief_trace(TRACE_INFO, INFO_STOP_RETRY, l4c_ptr->cc_current_action[src_id]);
        if (l4c_ptr->event_id[3] != 0)
        {
            kal_brief_trace(TRACE_INFO, INFO_CANCEL_EVENT, l4c_ptr->event_id[3]);
            evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[3]));
            l4c_ptr->event_id[3] = 0;
        }

        l4c_ptr->retry_cc = KAL_FALSE;    /* reset flag and count */
        l4c_ptr->retry_count = 0;
        l4c_ptr->max_retry_count = cm_max_retry_count();
        l4c_ptr->retry_src_id = INVALID_SRC;
    }
}

#ifdef __TCPIP_OVER_CSD__
/*****************************************************************************
 * FUNCTION
 *  l4c_clear_csd_parameter
 * DESCRIPTION
 *  This is l4c_clear_csd_parameter function of L4C module.
 *  clear csd_parameter in L4C context
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_clear_csd_parameter(void)
{
    local_para_struct *local_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR; //for slim

    if (l4c_ptr->csd_parameter.length > 0)
    {
        local_ptr = (local_para_struct*) l4c_ptr->csd_parameter.data;
        local_ptr->ref_count = 1;
        free_local_para(local_ptr);
        l4c_ptr->csd_parameter.length = 0;
        l4c_ptr->csd_parameter.data = NULL;
    }
}
#endif


//agps_ipc begin
#if defined(__ANDROID_RIL_SUPPORT__)
void l4c_send_ilm_ipc(msg_type msg_name, void *param_ptr)
{
#if defined(__MTK_TARGET__)
    ipc_ilm_t *ilm_ptr = NULL;

    /* allocate and fill cross message structure */
    ilm_ptr = ipc_msgsvc_allocate_ilm(l4c_current_mod_id);
    ilm_ptr->src_mod_id = l4c_current_mod_id;
    ilm_ptr->dest_mod_id = APMOD_AGPS;
    ilm_ptr->msg_id = (kal_uint32)msg_name;
    ilm_ptr->peer_buff_ptr = NULL; /* no peer message */
    ilm_ptr->local_para_ptr = (local_para_struct*) param_ptr;
    ilm_ptr->sap_id = MMI_L4C_SAP;
    kal_brief_trace(TRACE_INFO, INFO_SEND_IPC_MSG, ilm_ptr->msg_id);
    if (ipc_msgsvc_send_ext_queue(ilm_ptr) == KAL_FALSE)
    {
        ASSERT(0);
    }
#else
    free_local_para((local_para_struct*) param_ptr);
#endif
}

#if defined(__AGPS_CONTROL_PLANE__) 

void l4c_ss_mtlr_begin_res_lrsp_ipc(kal_bool result, kal_uint8 ss_id)
{
    mmi_ss_mtlr_begin_res_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_mtlr_begin_res_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->ss_id = ss_id;

    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_MTLR_BEGIN_RES_RSP, param_ptr);
}


void l4c_ss_aerq_begin_res_lrsp_ipc(kal_bool result, kal_uint8 ss_id)
{
    mmi_ss_aerq_begin_res_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aerq_begin_res_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->ss_id = ss_id;

    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AERQ_BEGIN_RES_RSP, param_ptr);
}


void l4c_ss_aerp_begin_lrsp_ipc(kal_bool result, kal_uint16 cause, kal_uint8 ss_id)
{
    
    mmi_ss_aerp_begin_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aerp_begin_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->cause = cause;
    param_ptr->ss_id = ss_id;
    
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AERP_BEGIN_RSP, param_ptr);
    
    return;
}


void l4c_ss_aerp_end_lrsp_ipc(kal_bool result)
{
    
    mmi_ss_aerp_end_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aerp_end_rsp_struct), TD_RESET);

    param_ptr->result = result;
    
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AERP_END_RSP, param_ptr);
    
    return;
}


void l4c_ss_aecl_begin_res_lrsp_ipc(kal_bool result, kal_uint8 ss_id)
{
    mmi_ss_aecl_begin_res_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aecl_begin_res_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->ss_id = ss_id;

    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AECL_BEGIN_RES_RSP, param_ptr);
}


void l4c_ss_molr_begin_lrsp_ipc(kal_bool result, kal_uint16 cause, L4C_SS_LCS_MOLRRes *molr_res, kal_uint8 ss_id)
{
    mmi_ss_molr_begin_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_molr_begin_rsp_struct), TD_RESET);

    param_ptr->result = result;
    param_ptr->cause = cause;
    param_ptr->ss_id = ss_id;
    if (molr_res)
    {
        param_ptr->molr_res = *molr_res;
    }
    
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_MOLR_BEGIN_RSP, param_ptr);
}


void l4c_ss_molr_end_lrsp_ipc(kal_bool result)
{
    mmi_ss_molr_end_rsp_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_molr_end_rsp_struct), TD_RESET);

    param_ptr->result = result;
    
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_MOLR_END_RSP, param_ptr);
}


void l4c_ss_mtlr_begin_lind_ipc(L4C_SS_LocationNotificationArg *notification, kal_uint8 ss_id)
{
    mmi_ss_mtlr_begin_ind_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_mtlr_begin_ind_struct), TD_RESET);

    param_ptr->notification = *notification;
    param_ptr->ss_id = ss_id;
    
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_MTLR_BEGIN_IND, param_ptr);
}


void l4c_ss_aerq_begin_lind_ipc(L4C_SS_LCS_AreaEventRequestArg *aerq, kal_uint8 ss_id)
{
    mmi_ss_aerq_begin_ind_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aerq_begin_ind_struct), TD_RESET);

    param_ptr->aerq = *aerq;
    param_ptr->ss_id = ss_id;

    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AERQ_BEGIN_IND, param_ptr);
}


void l4c_ss_aecl_begin_lind_ipc(L4C_SS_LCS_AreaEventCancellationArg *aecl, kal_uint8 ss_id)
{
    mmi_ss_aecl_begin_ind_struct *param_ptr = construct_local_para(
        (kal_uint16)sizeof(mmi_ss_aecl_begin_ind_struct), TD_RESET);

    param_ptr->aecl = *aecl;
    param_ptr->ss_id = ss_id;

    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_SS_AECL_BEGIN_IND, param_ptr);
}


void l4c_agps_reset_positioning_lind_ipc(void) 
{
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_AGPS_RESET_POSITIONING_IND, NULL);
}


void l4c_agps_cp_start_lind_ipc(void)
{
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_AGPS_CP_START_IND, NULL);
}

void l4c_agps_cp_end_lind_ipc(void)
{
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_AGPS_CP_END_IND, NULL);
}


#ifdef __UAGPS_CP_SUPPORT__
void l4c_agps_new_key_needed_lind_ipc(void)
{
    /* Send the message to the module in AP */
    l4c_send_ilm_ipc(IPC_MSG_ID_MMI_AGPS_NEW_KEY_NEEDED_IND, NULL);
}
#endif /* __UAGPS_CP_SUPPORT__ */
#endif /* defined(__AGPS_CONTROL_PLANE__) */
#endif /* defined(__ANDROID_RIL_SUPPORT__) */
//agps_ipc end

/*****************************************************************************
 * FUNCTION
 *  l4c_send_msg
 * DESCRIPTION
 *  This is a general send message functions to other modules
 * PARAMETERS
 *
 *  msg_name        [IN]        Msg id to be sent
 *  param_ptr       [IN]        Local parameter of the msg to be sent
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_send_msg(module_type dest, msg_type msg_name, sap_type sap, void *local_ptr, void *peer_ptr)
{

    msg_send6(l4c_current_mod_id,  dest, sap, msg_name, (local_para_struct *)local_ptr, (peer_buff_struct *) peer_ptr);
    return;

}


