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
 * L4C_LCS_MSG.C
 *
 * Project:
 * --------
 *   MT6268
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define L4C_LCS_MSG_C

#ifdef __MOD_CSM__
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "app_buff_alloc.h"


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
//#include "mcd_l3_inc_struct.h"
//#include "mcd_l3_inc_gprs_struct.h"
//#include "l3_inc_enums.h"
//#include "l3_inc_local.h"
#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_ft.h"
//#include "l4_trc.h"
//#include "l4c_sendmsg.h"
//#include "l4c2csm_ss_struct.h"

#ifdef __AGPS_CONTROL_PLANE__
//#include "applib2_asn_common.h" /* SSAGPS */
//#include "applib2_mtkasn_global.h" /* SSAGPS */
#include "ss_asn.h"
#include "l4c2csm_ss_lcs_struct.h"
#endif

//#include "l4c_aux_struct.h"
//#include "l4c_lcs_msg.h"


#ifdef __MOD_SMSAL__
//#include "l4c2smsal_struct.h"
//#include "smsal_l4c_enum.h"
#endif /* __MOD_SMSAL__ */ 

#ifdef __MOD_TCM__
//#include "mmi_l3_enums.h"
//#include "mmi_sm_enums.h"
//#include "ppp_l4_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "custom_nvram_editor_data_item.h"
//#include "l4c2abm_struct.h"
//#include "abm2l4c_struct.h"
//#include "l4c2tcm_struct.h"
#endif /* __MOD_TCM__ */ 

//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "nvram_struct.h"
//#include "nvram_user_defs.h"

//#include "l4c_ss_parse.h"
//#include "l4c_ciss_msg.h"
#include "l4c_utility.h"
//#include "l4c2phb_enums.h"   
//#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"
//#include "l4c_aux_struct.h"
//#include "l4c_ciss_cmd.h"
//#include "sat_def.h"
//#include "l4a.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
#include "lmmi_rsp.h"
#include "lmmi_ind.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"

#ifdef __AGPS_CONTROL_PLANE__
//mtk02508_agps begin
void l4ccsm_ciss_aerp_end_cnf_hdlr(local_para_struct *local_para_ptr, 
                                    peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_aerp_end_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;

    msg_ptr = (l4ccsm_ciss_aerp_end_cnf_struct*)local_para_ptr;

    if (msg_ptr->return_code != L4C_OK)
    {
        result = KAL_FALSE;
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            cause = msg_ptr->cause;
        }
        else
        {
            cause = L4C_NO_CAUSE;
        }
        l4c_ss_aerp_begin_lrsp(result, cause, msg_ptr->ss_id);
    }

    return;
}

void l4ccsm_ciss_molr_end_cnf_hdlr(local_para_struct *local_para_ptr,
                                    peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_molr_end_cnf_struct *msg_ptr = NULL;
    kal_bool result;
    kal_uint16 cause;

    msg_ptr = (l4ccsm_ciss_molr_end_cnf_struct*)local_para_ptr;
    
    if (msg_ptr->return_code != L4C_OK)
    {
        result = KAL_FALSE;
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            cause = msg_ptr->cause;
        }
        else
        {
            cause = L4C_NO_CAUSE;
        }
        l4c_ss_molr_begin_lrsp(result, cause, NULL, msg_ptr->ss_id);
    }

    return;
}

void l4ccsm_ciss_mtlr_begin_ind_hdlr(local_para_struct *local_para_ptr,
                                      peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_mtlr_begin_ind_struct *msg_ptr = NULL;
    SS2_LocationNotificationArg *arg_src;
    L4C_SS_LocationNotificationArg *arg_dest;
    
    msg_ptr = (l4ccsm_ciss_mtlr_begin_ind_struct*)local_para_ptr;
    arg_src = (SS2_LocationNotificationArg*) &(msg_ptr->ssLocationNotificationArg);
    arg_dest = (L4C_SS_LocationNotificationArg*) get_ctrl_buffer((kal_uint16)sizeof(L4C_SS_LocationNotificationArg));
    
    arg_dest->validity = arg_src->validity;

    /* Mandatory fields */
    arg_dest->notificationType = arg_src->notificationType;
    arg_dest->locationType.validity = arg_src->locationType.validity;
    arg_dest->locationType.locationEstimateType = arg_src->locationType.locationEstimateType;
    if ((arg_src->locationType.validity & SS2_LocationType_deferredLocationEventType_valid) != KAL_FALSE)
    {
        arg_dest->locationType.deferredLocationEventType.numBits = arg_src->locationType.deferredLocationEventType.numBits;
        kal_mem_cpy(arg_dest->locationType.deferredLocationEventType.stringData, 
                    arg_src->locationType.deferredLocationEventType.stringData, 
                    2);
    }
        
    /* Optional fields */
    if ((arg_src->validity & SS2_LocationNotificationArg_lcsClientExternalID_valid) != KAL_FALSE)
    {
        SS2_LCSClientExternalID *id_src = (SS2_LCSClientExternalID*) &(arg_src->lcsClientExternalID);
        L4C_SS_LCSClientExternalID *id_dest = (L4C_SS_LCSClientExternalID*) &(arg_dest->lcsClientExternalID);
        
        id_dest->validity = id_src->validity;
        if ((id_src->validity & SS2_LCSClientExternalID_externalAddress_valid) != KAL_FALSE)
        {
            id_dest->externalAddress.numOctets = id_src->externalAddress.numOctets;
            kal_mem_cpy(id_dest->externalAddress.stringData, 
                        id_src->externalAddress.stringData,
                        id_src->externalAddress.numOctets);
        }

        if ((id_src->validity & SS2_LCSClientExternalID_extensionContainer_valid) != KAL_FALSE)
        {
            ASSERT(0);
        }
    }
    
    if ((arg_src->validity & SS2_LocationNotificationArg_lcsClientName_valid) != KAL_FALSE)
    {
        SS2_LCSClientName *name_src = (SS2_LCSClientName*) &(arg_src->lcsClientName);
        L4C_SS_LCSClientName *name_dest = (L4C_SS_LCSClientName*) &(arg_dest->lcsClientName);

        name_dest->validity = name_src->validity;
        name_dest->dataCodingScheme.numOctets = name_src->dataCodingScheme.numOctets;
        kal_mem_cpy(name_dest->dataCodingScheme.stringData, 
                    name_src->dataCodingScheme.stringData, 
                    name_src->dataCodingScheme.numOctets);
        name_dest->nameString.numOctets = name_src->nameString.numOctets;
        kal_mem_cpy(name_dest->nameString.stringData, 
                    name_src->nameString.stringData, 
                    name_src->nameString.numOctets);
        if ((name_src->validity & SS2_LCSClientName_lcs_FormatIndicator_valid) != KAL_FALSE)
        {
            name_dest->lcs_FormatIndicator = name_src->lcs_FormatIndicator;
        }
    }
    
    if ((arg_src->validity & SS2_LocationNotificationArg_lcsRequestorID_valid) != KAL_FALSE)
    {
        L4C_SS_LCSRequestorID *id_dest = (L4C_SS_LCSRequestorID*) &(arg_dest->lcsRequestorID);
        SS2_LCSRequestorID *id_src = (SS2_LCSRequestorID*) &(arg_src->lcsRequestorID);

        id_dest->validity = id_src->validity;

        id_dest->dataCodingScheme.numOctets = id_src->dataCodingScheme.numOctets;
        kal_mem_cpy(id_dest->dataCodingScheme.stringData, 
                    id_src->dataCodingScheme.stringData, 
                    id_src->dataCodingScheme.numOctets);

        id_dest->requestorIDString.numOctets = id_src->requestorIDString.numOctets;
        kal_mem_cpy(id_dest->requestorIDString.stringData, 
                    id_src->requestorIDString.stringData, 
                    id_src->requestorIDString.numOctets);
        
        if ((id_src->validity & SS2_LCSRequestorID_lcs_FormatIndicator_valid) != KAL_FALSE)
        {
            id_dest->lcs_FormatIndicator = id_src->lcs_FormatIndicator;
        }
    }
    
    if ((arg_src->validity & SS2_LocationNotificationArg_lcsCodeword_valid) != KAL_FALSE)
    {
        arg_dest->lcsCodeword.dataCodingScheme.numOctets = arg_src->lcsCodeword.dataCodingScheme.numOctets;
        kal_mem_cpy(arg_dest->lcsCodeword.dataCodingScheme.stringData, 
                    arg_src->lcsCodeword.dataCodingScheme.stringData, 
                    arg_src->lcsCodeword.dataCodingScheme.numOctets);

        arg_dest->lcsCodeword.lcsCodewordString.numOctets = arg_src->lcsCodeword.lcsCodewordString.numOctets;
        kal_mem_cpy(arg_dest->lcsCodeword.lcsCodewordString.stringData, 
                    arg_src->lcsCodeword.lcsCodewordString.stringData, 
                    arg_src->lcsCodeword.lcsCodewordString.numOctets);
    }
    
    if ((arg_src->validity & SS2_LocationNotificationArg_lcsServiceTypeID_valid) != KAL_FALSE)
    {
        arg_dest->lcsServiceTypeID = arg_src->lcsServiceTypeID;
    }
    l4c_ss_mtlr_begin_lind(arg_dest, msg_ptr->ss_id);
    free_ctrl_buffer(arg_dest);
    return;
}

void l4ccsm_ciss_aerq_begin_ind_hdlr(local_para_struct *local_para_ptr,
                                     peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_aerq_begin_ind_struct *msg_ptr = NULL;
    SS2_LCS_AreaEventRequestArg *aerq_src;
    L4C_SS_LCS_AreaEventRequestArg *aerq_dest;
    L4C_SS_AreaEventInfo *info_dest;
    SS2_AreaEventInfo *info_src;
    SS2_Area *element_src;
    L4C_SS_Area *element_dest;
    kal_uint8 i;

    msg_ptr = (l4ccsm_ciss_aerq_begin_ind_struct*)local_para_ptr;
    aerq_src = (SS2_LCS_AreaEventRequestArg*) &(msg_ptr->ssLCSAreaEventRequestArg);
    aerq_dest = (L4C_SS_LCS_AreaEventRequestArg*) get_ctrl_buffer((kal_uint16)sizeof(L4C_SS_LCS_AreaEventRequestArg));
    
    aerq_dest->validity = aerq_src->validity;
    
    /* Mandatory fields */
    aerq_dest->referenceNumber.numOctets = aerq_src->referenceNumber.numOctets;
    kal_mem_cpy(aerq_dest->referenceNumber.stringData, 
                aerq_src->referenceNumber.stringData, 
                aerq_src->referenceNumber.numOctets);
    
    aerq_dest->h_gmlc_address.numOctets = aerq_src->h_gmlc_address.numOctets;
    kal_mem_cpy(aerq_dest->h_gmlc_address.stringData, 
                aerq_src->h_gmlc_address.stringData, 
                aerq_src->h_gmlc_address.numOctets);

    aerq_dest->deferredLocationEventType.numBits = aerq_src->deferredLocationEventType.numBits;
    kal_mem_cpy(aerq_dest->deferredLocationEventType.stringData, 
                aerq_src->deferredLocationEventType.stringData, 
                2);

    info_dest = (L4C_SS_AreaEventInfo*) &(aerq_dest->areaEventInfo);
    info_src = (SS2_AreaEventInfo*) &(aerq_src->areaEventInfo);
    info_dest->validity = info_src->validity;
    info_dest->areaDefinition.areaList.numElements = info_src->areaDefinition.areaList.numElements;
    for (i = 0; i < info_src->areaDefinition.areaList.numElements; i++)
    {
            element_src = (SS2_Area*) &(info_src->areaDefinition.areaList.element[i]);
            element_dest = (L4C_SS_Area*) &(info_dest->areaDefinition.areaList.element[i]);
            element_dest->areaType = element_src->areaType;
            element_dest->areaIdentification.numOctets = element_src->areaIdentification.numOctets;
            kal_mem_cpy(element_dest->areaIdentification.stringData, 
                        element_src->areaIdentification.stringData, 
                        element_src->areaIdentification.numOctets);
    }
        
    if ((info_src->validity & SS2_AreaEventInfo_occurrenceInfo_valid) != KAL_FALSE)
    {
        info_dest->occurrenceInfo = info_src->occurrenceInfo;
    }

    if ((info_src->validity & SS2_AreaEventInfo_intervalTime_valid) != KAL_FALSE)
    {
        info_dest->intervalTime = info_src->intervalTime;
    }

    /* Optional fields */
    if ((aerq_src->validity & SS2_LCS_AreaEventRequestArg_r_gmlc_address_valid) != KAL_FALSE)
    {
        aerq_dest->r_gmlc_address.numOctets = aerq_src->r_gmlc_address.numOctets;
        kal_mem_cpy(aerq_dest->r_gmlc_address.stringData, 
                    aerq_src->r_gmlc_address.stringData, 
                    aerq_src->r_gmlc_address.numOctets);
    }
    l4c_ss_aerq_begin_lind(aerq_dest, msg_ptr->ss_id);
    free_ctrl_buffer(aerq_dest);
    return;
}

void l4ccsm_ciss_aerp_fac_ind_hdlr(local_para_struct *local_para_ptr,
                                   peer_buff_struct *peer_buff_ptr)
{
    kal_bool result;
    kal_uint16 cause;
    
    l4ccsm_ciss_aerp_fac_ind_struct *msg_ptr = NULL;

    msg_ptr = (l4ccsm_ciss_aerp_fac_ind_struct*)local_para_ptr;
    result = KAL_TRUE;
    cause = L4C_NO_CAUSE;
    l4c_ss_aerp_begin_lrsp(result, cause, msg_ptr->ss_id);
    return;
}

void l4ccsm_ciss_aecl_begin_ind_hdlr(local_para_struct *local_para_ptr,
                                     peer_buff_struct *peer_buff_ptr)
{
    l4ccsm_ciss_aecl_begin_ind_struct *msg_ptr = NULL;
    SS2_LCS_AreaEventCancellationArg * aecl_src;
    L4C_SS_LCS_AreaEventCancellationArg *aecl_dest;
    
    msg_ptr = (l4ccsm_ciss_aecl_begin_ind_struct*)local_para_ptr;
    aecl_src = (SS2_LCS_AreaEventCancellationArg*) &(msg_ptr->ssLCSAreaEventCancellationArg);
    aecl_dest = (L4C_SS_LCS_AreaEventCancellationArg*) get_ctrl_buffer(
                (kal_uint16) sizeof(L4C_SS_LCS_AreaEventCancellationArg));
    
    aecl_dest->referenceNumber.numOctets = aecl_src->referenceNumber.numOctets;
    kal_mem_cpy(aecl_dest->referenceNumber.stringData, 
                aecl_src->referenceNumber.stringData, 
                aecl_src->referenceNumber.numOctets);

    aecl_dest->h_gmlc_address.numOctets = aecl_src->h_gmlc_address.numOctets;
    kal_mem_cpy(aecl_dest->h_gmlc_address.stringData, 
                aecl_src->h_gmlc_address.stringData, 
                aecl_src->h_gmlc_address.numOctets);
    l4c_ss_aecl_begin_lind(aecl_dest, msg_ptr->ss_id);
    free_ctrl_buffer(aecl_dest);
    return;
}

void l4ccsm_ciss_molr_fac_ind_hdlr(local_para_struct *local_para_ptr,
                                   peer_buff_struct * peer_buff_ptr)
{
    l4ccsm_ciss_molr_fac_ind_struct *msg_ptr = NULL;
    SS2_LCS_MOLRRes *molr_src;
    L4C_SS_LCS_MOLRRes *molr_dest;
    kal_bool result;
    kal_uint16 cause;

    msg_ptr = (l4ccsm_ciss_molr_fac_ind_struct*)local_para_ptr;
    molr_src = (SS2_LCS_MOLRRes*) &(msg_ptr->ssLCSMOLRRes);
    molr_dest = (L4C_SS_LCS_MOLRRes*) get_ctrl_buffer((kal_uint16) sizeof(L4C_SS_LCS_MOLRRes));
    
    molr_dest->validity = molr_src->validity;
    
    /* Optional fields */
    if ((molr_src->validity & SS2_LCS_MOLRRes_locationEstimate_valid) != KAL_FALSE)
    {
        molr_dest->locationEstimate.numOctets = molr_src->locationEstimate.numOctets;
        kal_mem_cpy(molr_dest->locationEstimate.stringData, 
                    molr_src->locationEstimate.stringData, 
                    molr_src->locationEstimate.numOctets);
    }

    if ((molr_src->validity& SS2_LCS_MOLRRes_decipheringKeys_valid) != KAL_FALSE)
    {
        molr_dest->decipheringKeys.numOctets = molr_src->decipheringKeys.numOctets;
        kal_mem_cpy(molr_dest->decipheringKeys.stringData, 
                    molr_src->decipheringKeys.stringData, 
                    molr_src->decipheringKeys.numOctets);
    }

    if ((molr_src->validity & SS2_LCS_MOLRRes_add_LocationEstimate_valid) != KAL_FALSE)
    {
        molr_dest->add_LocationEstimate.numOctets = molr_src->add_LocationEstimate.numOctets;
        kal_mem_cpy(molr_dest->add_LocationEstimate.stringData, 
                    molr_src->add_LocationEstimate.stringData, 
                    molr_src->add_LocationEstimate.numOctets);
    }
    result = KAL_TRUE;
    cause = L4C_NO_CAUSE;
    l4c_ss_molr_begin_lrsp(result, cause, molr_dest, msg_ptr->ss_id);
    free_ctrl_buffer(molr_dest);
    return;
}


void l4c_lcsp_agps_cp_start_ind_hdlr(module_type src_id)
{
    L4C_COMM_PTR->agps_cp_active_module = src_id;
    l4c_agps_cp_start_lind();
}

void l4c_lcsp_agps_cp_end_ind_hdlr(module_type src_id)
{
    L4C_COMM_PTR->agps_cp_active_module = MOD_NIL;
    l4c_agps_cp_end_lind();
}

#ifdef __UAGPS_CP_SUPPORT__
void l4c_uagps_cp_agps_new_key_needed_ind_hdlr(void)
{
    l4c_agps_new_key_needed_lind();
}
#endif

#endif /* __AGPS_CONTROL_PLANE__ */
//mtk02508_agps end

#endif /* __MOD_CSM__ */ 

