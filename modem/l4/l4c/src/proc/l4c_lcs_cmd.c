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
 * L4C_LCS_CMD.C
 *
 * Project:
 * --------
 *   MT6268
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#define L4C_LCS_CMD_C

#ifdef __MOD_CSM__
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "app_buff_alloc.h"
#include "l4_msgid.h"
#include "ulcs_msgid.h"
//#include "l4_ipc_msgid.h"
#include "ipc_msgsvc_msgid.h"

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
#endif /* __MOD_SMU__ */ 

//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_ft.h"

#ifdef __AGPS_CONTROL_PLANE__
//#include "applib2_asn_common.h" /* SSAGPS */
//#include "applib2_mtkasn_global.h" /* SSAGPS */
#include "ss_asn.h"
#include "l4c2csm_ss_lcs_struct.h"
#endif

//#include "l4c2csm_ss_struct.h"
//#include "l4c_aux_struct.h"
#include "l4c_utility.h"
//#include "l4c_lcs_cmd.h"
//#include "smsal_defs.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_l4c_defs.h"
//#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_structs.h"
//#include "smsal_cb.h"
//#include "l4c_ss_parse.h"
//#include "device.h"
//#include "l4c2abm_struct.h"
//#include "l4c2phb_enums.h"  
//#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"
//#include "l4_trc.h"
#include "l4_ipc_msg_struct.h"

#ifdef __UAGPS_CP_SUPPORT__
#include "l4c_uagps_cp_struct.h"
#endif
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "ps_public_struct.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

#include "as2l4c_struct.h"
#if defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__)
//#include "mmi_msgid.h"
#endif

#ifdef __AGPS_CONTROL_PLANE__
kal_bool l4c_ss_mtlr_begin_res_req(kal_uint8 src_id, L4C_SS_LocationNotificationRes *response, kal_uint8 ss_id)
{
    l4ccsm_ciss_mtlr_end_rsp_struct *param_ptr;
    SS2_LocationNotificationRes *res;

    param_ptr = (l4ccsm_ciss_mtlr_end_rsp_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_mtlr_end_rsp_struct), TD_RESET);
    param_ptr->ss_id = ss_id;
    param_ptr->src_id = src_id;
    res = (SS2_LocationNotificationRes*) &(param_ptr->ssLocationNotificationRes);
    res->validity = response->validity;
    if ((response->validity & L4C_SS_LocationNotificationRes_verificationResponse_valid) != KAL_FALSE)
    {
        res->verificationResponse = response->verificationResponse;
    }
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_MTLR_END_RSP, param_ptr);
    l4c_ss_mtlr_begin_res_lrsp(KAL_TRUE, ss_id);
    return KAL_TRUE;
}

kal_bool l4c_ss_aerq_begin_res_req(kal_uint8 src_id, kal_uint8 cause, kal_uint8 ss_id)
{
    l4ccsm_ciss_aerq_end_rsp_struct *param_ptr;

    param_ptr = (l4ccsm_ciss_aerq_end_rsp_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_aerq_end_rsp_struct), TD_RESET);
    param_ptr->ss_id = ss_id;
    param_ptr->src_id = src_id;
    param_ptr->cause_value = cause;
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_AERQ_END_RSP, param_ptr);
    l4c_ss_aerq_begin_res_lrsp(KAL_TRUE, ss_id);
    return KAL_TRUE;
}

kal_bool l4c_ss_aerp_begin_req(kal_uint8 src_id, L4C_SS_LCS_AreaEventReportArg *aerp, kal_uint8 ss_id, kal_uint8 is_initial)
{
    l4ccsm_ciss_aerp_req_struct *param_ptr;
    SS2_LCS_AreaEventReportArg *aerp_arg;

    param_ptr = (l4ccsm_ciss_aerp_req_struct*)construct_local_para(
                    (kal_uint16)sizeof(l4ccsm_ciss_aerp_req_struct), TD_RESET);
    param_ptr->ss_id = ss_id;
    param_ptr->src_id = src_id;
    aerp_arg = (SS2_LCS_AreaEventReportArg*) &(param_ptr->ssLCSAreaEventReportArg);
    aerp_arg->validity = aerp->validity;

    /* Mandatory Fields */
    aerp_arg->referenceNumber.numOctets = aerp->referenceNumber.numOctets;
    kal_mem_cpy(aerp_arg->referenceNumber.stringData, 
                aerp->referenceNumber.stringData, 
                aerp->referenceNumber.numOctets);
        
    aerp_arg->h_gmlc_address.numOctets = aerp->h_gmlc_address.numOctets;
    kal_mem_cpy(aerp_arg->h_gmlc_address.stringData, 
                aerp->h_gmlc_address.stringData, 
                aerp->h_gmlc_address.numOctets);
    
    /* Optional Fields */
    if ((aerp->validity & L4C_SS_LCS_AreaEventReportArg_r_gmlc_address_valid) != KAL_FALSE)
    {
        aerp_arg->r_gmlc_address.numOctets = aerp->r_gmlc_address.numOctets;
        kal_mem_cpy(aerp_arg->r_gmlc_address.stringData, 
                    aerp->r_gmlc_address.stringData, 
                    aerp->r_gmlc_address.numOctets);
    }

    if (is_initial == KAL_TRUE)
    {
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_AERP_REQ, param_ptr);
    }
    else //if (is_initial == KAL_FALSE)
    {
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_AERP_FAC_RES, param_ptr);
    }
    return KAL_TRUE;
}

kal_bool l4c_ss_aerp_end_req(kal_uint8 src_id, kal_uint8 cause, kal_uint8 ss_id)
{
    l4ccsm_ciss_aerp_end_req_struct *param_ptr;

    param_ptr = (l4ccsm_ciss_aerp_end_req_struct*)construct_local_para(
                  (kal_uint16)sizeof(l4ccsm_ciss_aerp_end_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->ss_id = ss_id;
    param_ptr->cause_value = cause;
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_AERP_END_REQ, param_ptr);
    l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    l4c_ss_aerp_end_lrsp(KAL_TRUE);

    return KAL_TRUE;
}

kal_bool l4c_ss_aecl_begin_res_req(kal_uint8 src_id, kal_uint8 cause, kal_uint8 ss_id)
{
    l4ccsm_ciss_aecl_end_rsp_struct *param_ptr;

    param_ptr = (l4ccsm_ciss_aecl_end_rsp_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_aecl_end_rsp_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->ss_id = ss_id;
    param_ptr->cause_value = cause;
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_AECL_END_RSP, param_ptr);
    l4c_ss_aecl_begin_res_lrsp(KAL_TRUE, ss_id);
    return KAL_TRUE;
}

kal_bool l4c_ss_molr_begin_req(kal_uint8 src_id, L4C_SS_LCS_MOLRArg *molr, kal_uint8 ss_id, kal_uint8 is_initial)
{
    l4ccsm_ciss_molr_req_struct *param_ptr;
    SS2_LCS_MOLRArg *molr_arg;
    SS2_LCS_QoS *qos;
    SS2_LCSClientExternalID *ext_id;

    param_ptr = (l4ccsm_ciss_molr_req_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_molr_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->ss_id = ss_id;
    molr_arg = (SS2_LCS_MOLRArg*) &(param_ptr->ssLCSMOLRArg);
    molr_arg->validity = molr->validity;

    /* Mandatory fields */
    molr_arg->molr_Type = molr->molr_Type;

    /* optional fields */
    if ((molr->validity & L4C_SS_LCS_MOLRArg_locationMethod_valid) != KAL_FALSE)
    {
        molr_arg->locationMethod = molr->locationMethod;
    }
        
    if ((molr->validity & L4C_SS_LCS_MOLRArg_lcs_QoS_valid) != KAL_FALSE)
    {
        qos = (SS2_LCS_QoS*) &(molr_arg->lcs_QoS);
        qos->validity = molr->lcs_QoS.validity;
        if ((molr->lcs_QoS.validity & L4C_SS_LCS_QoS_horizontal_accuracy_valid) != KAL_FALSE)
        {
            qos->horizontal_accuracy.numOctets = molr->lcs_QoS.horizontal_accuracy.numOctets;
            kal_mem_cpy(qos->horizontal_accuracy.stringData, 
                        molr->lcs_QoS.horizontal_accuracy.stringData, 
                        molr->lcs_QoS.horizontal_accuracy.numOctets);
        }

        if ((molr->lcs_QoS.validity & L4C_SS_LCS_QoS_verticalCoordinateRequest_valid) != KAL_FALSE)
        {
            qos->verticalCoordinateRequest = molr->lcs_QoS.verticalCoordinateRequest;
        }

        if ((molr->lcs_QoS.validity & L4C_SS_LCS_QoS_vertical_accuracy_valid) != KAL_FALSE)
        {
            qos->vertical_accuracy.numOctets = molr->lcs_QoS.vertical_accuracy.numOctets;
            kal_mem_cpy(qos->vertical_accuracy.stringData, 
                        molr->lcs_QoS.vertical_accuracy.stringData, 
                        molr->lcs_QoS.vertical_accuracy.numOctets);
        }

        if ((molr->lcs_QoS.validity & L4C_SS_LCS_QoS_responseTime_valid) != KAL_FALSE)
        {
            qos->responseTime.responseTimeCategory = molr->lcs_QoS.responseTime.responseTimeCategory;
        }

        if ((molr->lcs_QoS.validity & L4C_SS_LCS_QoS_extensionContainer_valid) != KAL_FALSE)
        {
            ASSERT(0);
        }
    }
        
    if ((molr->validity & L4C_SS_LCS_MOLRArg_lcsClientExternalID_valid) != KAL_FALSE)
    {
        L4C_SS_LCSClientExternalID *id_src = (L4C_SS_LCSClientExternalID*) &(molr->lcsClientExternalID);

        ext_id = (SS2_LCSClientExternalID*) &(molr_arg->lcsClientExternalID);
        ext_id->validity = id_src->validity;
        if ((id_src->validity & L4C_SS_LCSClientExternalID_externalAddress_valid) != KAL_FALSE)
        {
            ext_id->externalAddress.numOctets = id_src->externalAddress.numOctets;
            kal_mem_cpy(ext_id->externalAddress.stringData, 
                        id_src->externalAddress.stringData, 
                        id_src->externalAddress.numOctets);
        }
        if ((id_src->validity & L4C_SS_LCSClientExternalID_extensionContainer_valid) != KAL_FALSE)
        {
            ASSERT(0);
        }
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_mlc_Number_valid) != KAL_FALSE)
    {
        molr_arg->mlc_Number.numOctets = molr->mlc_Number.numOctets;
        kal_mem_cpy(molr_arg->mlc_Number.stringData, 
                    molr->mlc_Number.stringData, 
                    molr->mlc_Number.numOctets);
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_gpsAssistanceData_valid) != KAL_FALSE)
    {
        molr_arg->gpsAssistanceData.numOctets = molr->gpsAssistanceData.numOctets;
        kal_mem_cpy(molr_arg->gpsAssistanceData.stringData, 
                    molr->gpsAssistanceData.stringData, 
                    molr->gpsAssistanceData.numOctets);
    }
        
    if ((molr->validity & L4C_SS_LCS_MOLRArg_supportedGADShapes_valid) != KAL_FALSE)
    {
        molr_arg->supportedGADShapes.numBits = molr->supportedGADShapes.numBits;
        kal_mem_cpy(molr_arg->supportedGADShapes.stringData, 
                    molr->supportedGADShapes.stringData, 
                    2);
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_lcsServiceTypeID_valid) != KAL_FALSE)
    {
        molr_arg->lcsServiceTypeID = molr->lcsServiceTypeID;
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_ageOfLocationInfo_valid) != KAL_FALSE)
    {
        molr_arg->ageOfLocationInfo = molr->ageOfLocationInfo;
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_locationType_valid) != KAL_FALSE)
    {
        molr_arg->locationType.validity = molr->locationType.validity;
        molr_arg->locationType.locationEstimateType = molr->locationType.locationEstimateType;
        
        if ((molr->locationType.validity & L4C_SS_LocationType_deferredLocationEventType_valid) != KAL_FALSE)
        {
            kal_mem_cpy(&(molr_arg->locationType.deferredLocationEventType), 
                        &(molr->locationType.deferredLocationEventType),
                        sizeof(SS2_DeferredLocationEventType));
        }
    }

    if ((molr->validity & L4C_SS_LCS_MOLRArg_pseudonymIndicator_valid) != KAL_FALSE)
    {
        molr_arg->pseudonymIndicator = molr->pseudonymIndicator;
    }

    if (is_initial == KAL_TRUE)
    {
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_MOLR_REQ, param_ptr);
    }
    else //if (is_initial == KAL_FALSE)
    {
        l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_MOLR_FAC_RES, param_ptr);
    }
    return KAL_TRUE;
}

kal_bool l4c_ss_molr_end_req(kal_uint8 src_id, kal_uint8 cause, kal_uint8 ss_id)
{
    l4ccsm_ciss_molr_end_req_struct *param_ptr;

    param_ptr = (l4ccsm_ciss_molr_end_req_struct*)construct_local_para(
                     (kal_uint16)sizeof(l4ccsm_ciss_molr_end_req_struct), TD_RESET);
    param_ptr->src_id = src_id;
    param_ptr->ss_id = ss_id;
    param_ptr->cause_value = cause;
    l4c_send_msg_to_csm_ciss(MSG_ID_L4CCSM_CISS_MOLR_END_REQ, param_ptr);
    l4c_set_user_action(L4C_SS, L4C_NO_USER, L4C_NO_ACTION);
    l4c_ss_molr_end_lrsp(KAL_TRUE);
    
    return KAL_TRUE;
}

void l4c_agps_cp_enable_disable_req(kal_uint8 src_id, kal_uint8 enable)
{
#ifdef __UAGPS_CP_SUPPORT__
    l4c_uagps_cp_agps_enable_disable_req_struct *param_ptr;

    param_ptr = (l4c_uagps_cp_agps_enable_disable_req_struct*) construct_local_para(
                    (kal_uint16)sizeof(l4c_uagps_cp_agps_enable_disable_req_struct), TD_RESET);

    param_ptr->enable = (kal_bool)enable;
    l4c_send_msg_to_uagps_cp(MSG_ID_L4C_UAGPS_CP_AGPS_ENABLE_DISABLE_REQ, param_ptr);
#endif /* __UAGPS_CP_SUPPORT__ */
    return;
}

void l4c_agps_cp_key_update_req(kal_uint8 src_id, 
                                kal_uint8 *sib15_current_deciphering_key, 
                                kal_uint8 *sib15_next_deciphering_key, 
                                kal_uint8 sib15_ciphering_key_flag)
{
#ifdef __UAGPS_CP_SUPPORT__
    l4c_uagps_cp_agps_key_update_req_struct *param_ptr;

    param_ptr = (l4c_uagps_cp_agps_key_update_req_struct*) construct_local_para(
                    (kal_uint16)sizeof(l4c_uagps_cp_agps_key_update_req_struct), TD_RESET);

    param_ptr->sib15_ciphering_key_flag = sib15_ciphering_key_flag;
    kal_mem_cpy(param_ptr->sib15_current_deciphering_key,
                sib15_current_deciphering_key,
                7);
    kal_mem_cpy(param_ptr->sib15_next_deciphering_key,
                sib15_next_deciphering_key,
                7);
    l4c_send_msg_to_uagps_cp(MSG_ID_L4C_UAGPS_CP_AGPS_KEY_UPDATE_REQ, param_ptr);
#endif /* __UAGPS_CP_SUPPORT__ */
    return;
}


void l4c_agps_cp_abort_req(kal_uint8 src_id, kal_uint8 is_abort_molr) //MAUI_02601131
{
    l4c_lcsp_agps_cp_abort_req_struct *param_ptr;

    param_ptr = (l4c_lcsp_agps_cp_abort_req_struct*) construct_local_para(
                (kal_uint16)sizeof(l4c_lcsp_agps_cp_abort_req_struct), TD_RESET);

    param_ptr->is_abort_molr = (kal_bool)is_abort_molr;
    switch (L4C_COMM_PTR->agps_cp_active_module)
    {
    #if defined(__UAGPS_CP_SUPPORT__)
        case MOD_UAGPS_CP:
            l4c_send_msg_to_uagps_cp(MSG_ID_L4C_LCSP_AGPS_CP_ABORT_REQ, param_ptr);
            break;
    #endif
        case MOD_RRLP:
            l4c_send_msg_to_rrlp(MSG_ID_L4C_LCSP_AGPS_CP_ABORT_REQ, param_ptr);
            break;
        default:
            free_local_para((local_para_struct*)param_ptr);
            return;
    }
    L4C_COMM_PTR->agps_cp_active_module = MOD_NIL; //reset l4c context

    return;
}


//agps_ipc begin
#if defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__)
void l4c_agps_ipc_dispatch(ilm_struct *ilm_ptr)
{
    local_para_struct *local_para_ptr = ilm_ptr->local_para_ptr;
    
    switch (ilm_ptr->msg_id)
    {
        case IPC_MSG_ID_MMI_SS_MTLR_BEGIN_RES_REQ:
            l4c_ss_mtlr_begin_res_req(LMMI_SRC, 
                &(((mmi_ss_mtlr_begin_res_req_struct*)local_para_ptr)->response), 
                ((mmi_ss_mtlr_begin_res_req_struct*)local_para_ptr)->ss_id);
            break;
        case IPC_MSG_ID_MMI_SS_AERQ_BEGIN_RES_REQ:
            l4c_ss_aerq_begin_res_req(LMMI_SRC,
                ((mmi_ss_aerq_begin_res_req_struct*)local_para_ptr)->cause,
                ((mmi_ss_aerq_begin_res_req_struct*)local_para_ptr)->ss_id);
            break;
        case IPC_MSG_ID_MMI_SS_AERP_BEGIN_REQ:
            l4c_ss_aerp_begin_req(LMMI_SRC,
                &(((mmi_ss_aerp_begin_req_struct*)local_para_ptr)->aerp),
                ((mmi_ss_aerp_begin_req_struct*)local_para_ptr)->ss_id,
                ((mmi_ss_aerp_begin_req_struct*)local_para_ptr)->is_initial);
            break;
        case IPC_MSG_ID_MMI_SS_AERP_END_REQ:
            l4c_ss_aerp_end_req(LMMI_SRC, 
                ((mmi_ss_aerp_end_req_struct*)local_para_ptr)->cause, 
                ((mmi_ss_aerp_end_req_struct*)local_para_ptr)->ss_id);
            break;
        case IPC_MSG_ID_MMI_SS_AECL_BEGIN_RES_REQ:
            l4c_ss_aecl_begin_res_req(LMMI_SRC, 
                ((mmi_ss_aecl_begin_res_req_struct*)local_para_ptr)->cause, 
                ((mmi_ss_aecl_begin_res_req_struct*)local_para_ptr)->ss_id);
            break;
        case IPC_MSG_ID_MMI_SS_MOLR_BEGIN_REQ:
            l4c_ss_molr_begin_req(LMMI_SRC, 
                &(((mmi_ss_molr_begin_req_struct*)local_para_ptr)->molr), 
                ((mmi_ss_molr_begin_req_struct*)local_para_ptr)->ss_id, 
                ((mmi_ss_molr_begin_req_struct*)local_para_ptr)->is_initial);
            break;
        case IPC_MSG_ID_MMI_SS_MOLR_END_REQ:
            l4c_ss_molr_end_req(LMMI_SRC, 
                ((mmi_ss_molr_end_req_struct*)local_para_ptr)->cause, 
                ((mmi_ss_molr_end_req_struct*)local_para_ptr)->ss_id);
            break;
        case IPC_MSG_ID_MMI_AGPS_ENABLE_DISABLE_REQ:
            l4c_agps_cp_enable_disable_req(LMMI_SRC, 
                ((mmi_agps_enable_disable_req_struct*)local_para_ptr)->enable);
            break;
        case IPC_MSG_ID_MMI_AGPS_KEY_UPDATE_REQ:
            l4c_agps_cp_key_update_req(LMMI_SRC, 
                ((mmi_agps_key_update_req_struct*)local_para_ptr)->sib15_current_deciphering_key, 
                ((mmi_agps_key_update_req_struct*)local_para_ptr)->sib15_next_deciphering_key, 
                ((mmi_agps_key_update_req_struct*)local_para_ptr)->sib15_ciphering_key_flag);
            break;
        case IPC_MSG_ID_MMI_AGPS_CP_ABORT_REQ:
            l4c_agps_cp_abort_req(LMMI_SRC, 
                ((mmi_agps_cp_abort_req_struct*)local_para_ptr)->is_abort_molr);
            break;
    }
}
#endif /* defined(__AGPS_CONTROL_PLANE__) && defined(__ANDROID_RIL_SUPPORT__) */
//agps_ipc end

#endif /* __AGPS_CONTROL_PLANE__ */
#endif /* __MOD_CSM__ */ 

