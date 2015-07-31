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
 * Filename:
 * ---------
 *	rac_trc.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for trace messages.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifndef _RAC_TRC_H
#define _RAC_TRC_H

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"

#define RAC_FN_ENTRY_LOG(A) kal_trace(TRACE_FUNC,A);
#define RAC_FN_EXIT_LOG(A)  NULL

#define RAC_ERROR_LOG(S,A) kal_trace(TRACE_ERROR,S,A)

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
#include "rac_trc_gen.h"
#endif /* TST Trace Defintion */
#endif

BEGIN_TRACE_MAP(MOD_RAC)

/* RAC_INFO */
TRC_MSG(RAC_INFO_BEFORE_MAIN,"[RAC] RAC info before main: current_action: %Mrac_action_enum, mm_state: %Mrac_mm_state_enum, gmm_state: %Mrac_gmm_state_enum")
TRC_MSG(RAC_INFO, "[RAC] RAC info: current_action: %Mrac_action_enum, mm_state: %Mrac_mm_state_enum, gmm_state: %Mrac_gmm_state_enum")
TRC_MSG(RAC_MULTI_BAND,"[RAC]Multiband debug message : band : %x, %x, %x, %x, other : %d")
TRC_MSG(RAC_INFO_GET_SEL_MOD,"RAC get NW sel mode = %d") 
TRC_MSG(RAC_INFO_TST_INJECT_CMD_STRING,"rac_atoi(&tst_inject->string[0])=%d, \n Inject command Reference=%d") 
TRC_MSG(RAC_ABNORMAL_ASSERT, "rac_abnormal_assert") 
TRC_MSG(RAC_CHANGE_MS_CLASS, "MS class change from %Mms_mobile_class_enum to %Mms_mobile_class_enum")
TRC_MSG(RAC_RECEIVE_DETACH_IND, "TB_reg=%Mmm_user_regn_type_enum, TB_dereg=%Mmm_user_regn_type_enum, detach type=%Mmm_user_regn_type_enum, detach cause=%Mmm_cause_enum")
TRC_MSG(RAC_ACTIVATING_IGNORE, "[RAC] RAC warnning: ignore the request due to rac is activating")

/* RAC_FN - send message */
TRC_MSG(RAC_FN_rac_handle_class_change,"RAC_FN_rac_handle_class_change")


TRC_MSG(RAC_CURRENT_ACTION,"RAC current action: %Mrac_action_enum")
TRC_MSG(UNEXPECTED_MESSAGE,"Unexpected message for RAC in state: %d")
TRC_MSG(PLMN_LIST_FLAG_ERROR,"RAC PLMN LIST flag inconsistent: %d")
TRC_MSG(RAC_RECV_PS_DETACH_WHEN_PLMN_SEL,"RAC recv PS Detach when PLMN SEL(ignore):%d, %d")
TRC_MSG(RAC_L4C_GET_ATTACH_STATUS,"[RAC]gsm_state:%Mreg_state_enum,gsm_status:%Ml4c_rac_response_enum,gprs_state:%Mreg_state_enum,gprs_status:%Ml4c_rac_gprs_status_enum")
TRC_MSG(RAC_GET_STATE_STATUS_INFO,"[RAC]gsm_state:%Mreg_state_enum,gsm_status:%Ml4c_rac_response_enum,gprs_state:%Mreg_state_enum,gprs_status:%Ml4c_rac_gprs_status_enum")
TRC_MSG(RAC_NVRAM_WRITE_COUNT,"[RAC]nvram_write_counter:%d, when:%d")
TRC_MSG(RAC_PLMN_LIST_SEL_OR_BAND_X_WHEN_OTHER_ACTIONS,"[RAC]PLMN List,Sel,Band Change when rac_action:%Mrac_action_enum")
TRC_MSG(RAC_NOT_SEND_ATTACH_REQ_WHEN_RECV_PS_REG_REQ,"[RAC]Not send Attach Req to GMM gprs_state:%Mreg_state_enum,gprs_status:%Ml4c_rac_gprs_status_enum")
TRC_MSG(RAC_SAME_SEND_REG_IND,"[RAC]Same rac_send_reg_ind. Not send to L4C")
TRC_MSG(RAC_SEND_ATTACH_UNEXPECTEDLY, "[RAC]Send ATTACH, while gsm_state:%Mreg_state_enum, gprs_state:%Mreg_state_enum")

TRC_MSG(SAT_LOCATION_INFO_MM_STATUS,"[RAC][SAT] location info mm_status: %Msat_mm_status_enum")
TRC_MSG(SAT_EQUAL_LAST_LOCATION_INFO,"[RAC][SAT] equal last location info : %d")

TRC_MSG(RAC_RECEIVE_MM_SAME_LAI_IMSI_ATTACHING,"[RAC] receive attach cause MM_SAME_LAI_IMSI_ATTACHING ")
TRC_MSG(RAC_AUTO_ATTACH,"[RAC] l4crac_set_auto_attach_setting(): original = %d, new = %d")

TRC_MSG(RAC_START_TIMER, "[RAC] rac_start_timer_hdlr: %Mrac_timer_id_enum")
TRC_MSG(RAC_CANCEL_TIMER, "[RAC] rac_cancel_timer: %Mrac_timer_id_enum")
TRC_MSG(RAC_TIMEOUT, "[RAC] %Mrac_timer_id_enum expiry when current action is %Mrac_action_enum")


#ifdef __MONITOR_PAGE_DURING_TRANSFER__
TRC_MSG(RAC_GPRS_TRANSFER_PREFERENCE, "[RAC] gprs_transfer_preference = %Mgprs_transfer_preference_enum")
#endif

#ifdef __PLMN_LIST_PREF_SUPPORT__
TRC_MSG(RAC_PLMN_LIST_PREFERENCE, "[RAC] plmn_list_preference = %Mplmn_list_preference_enum")
#endif

#ifdef __HSPA_PREFERENCE_SETTING__
TRC_MSG(RAC_HSPA_PREFERENCE, "[RAC] hspa_preference = %Mhspa_preference_enum")
#endif

#ifdef __DYNAMIC_ROAMING_SUPPORT__
TRC_MSG(RAC_ROAMING_SUPPORT_SETTING, "[RAC] is_supporting_roaming: %Mkal_bool")
#endif

TRC_MSG(RAC_INTERNATIONAL_ROAMING_SUPPORT_SETTING, "[RAC] disable_international_roaming_support: %Mkal_bool")
TRC_MSG(RAC_NATIONAL_ROAMING_SUPPORT_SETTING, "[RAC] disable_national_roaming_support: %Mkal_bool")
TRC_MSG(RAC_DISABLE_HPPLMN_SEARCH_SETTING, "[RAC] disable_hhplmn_search_support: %Mkal_bool")
TRC_MSG(RAC_ROAMING_BROKER_SETTING, "[RAC] roaming_broker_support: %Mkal_bool")


#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
TRC_MSG(RAC_PEER_GPRS_TRANSFER_PREFERENCE, "[RAC] peer_gprs_transfer_preference = %Mkal_bool")
#endif

TRC_MSG(RAC_NASRAT_PREFERENCE, "[RAC] NAS prefer rat: %Mrat_enum")

TRC_MSG(RAC_IRAT_PREFERENCE, "[RAC] AS prefer rat: %Mrat_enum")

#ifdef __CSG_SUPPORT__
TRC_MSG(RAC_CSG_AUTO_SEARCH_PREFERENCE, "[RAC] csg_auto_search_preferenc = %Mkal_bool")
#endif /* __CSG_SUPPORT__ */

END_TRACE_MAP(MOD_RAC)

#endif


