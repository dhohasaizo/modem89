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
 *	csmcc_init.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *    This file is intends for init, reset, and de-init global 
 *    context in CSM(CC) module.
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define CSMCC_INIT_C

//#include "kal_release.h"      	/* Basic data type */

//#include "stack_common.h"  
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
//#include "ps2sat_struct.h"  /* Ripple SATCE */
//#include "sat_def.h"
#endif /* __SAT__ */

//#include "ps2sim_struct.h"
//#include "nvram_struct.h"
//#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
//#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "sim_common_enums.h"
//#include "nvram_enums.h"
//#include "l4_defs.h"
#include "csmcc_enums.h"
#include "csmcc_defs.h"
//#include "csmcc_bc_defs.h"
#include "csmcc_bc_types.h"

#ifdef __CSD_FAX__
//#include "csm_data_enums.h"
#endif

#include "csmcc_types.h"
#include "csmcc_utility.h"

//#include "kal_trace.h"
//#include "csm_trc.h"
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_active_module.h"
#include "kal_general_types.h"
//#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
//#include "kal_internal_api.h"

extern kal_uint32 custom_config_rlc_timer(void);

#ifdef __MTK_INTERNAL__
#ifdef __CSMCC_UT__
/* under construction !*/
#endif
#endif

extern void csmcc_context_selection(kal_uint8 sim_interface);

/*Declarations for Global variable*/
csmcc_context_struct *csmcc_ptr_g;
csmcc_context_struct csmcc_context_g[CSMCC_SIM_TOTAL];
csmcc_ctab_struct csmcc_ctab_g;
csmcc_ctab_struct *csmcc_ctab_ptr_g;
kal_uint32 csmcc_call_capability; //bit0 1:disable VT, 0: enable VT

#ifdef __GEMINI__
module_type csmcc_ctab_mod_id;
#endif

/*************************************************************************
* FUNCTION                                                            
*	csmcc_context_selection
* DESCRIPTION                                                           
*  This function is used to select mapping context from SIM1 and SIM2
*
* CALLS  
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_context_selection(kal_uint8 sim_interface)
{
	csmcc_ptr_g = &csmcc_context_g[sim_interface];
	return;
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_data_bc_param
* DESCRIPTION                                                           
*    This function is used to reset data bearer capability parameters.
*
* CALLS  
*	csmcc_reset_data_bc_param(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_data_bc_param(void)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_data_bc_param_struct *data_bc_ptr;
   
   data_bc_ptr = &(CSMCC_PTR->data_bc_param);
   
   data_bc_ptr->sync = CSMCC_SYNC_DATA;
   data_bc_ptr->ce = CSMCC_TRANSPARENT;
   data_bc_ptr->itc = CSMCC_ITC_SPEECH;
   data_bc_ptr->other_itc = CSMCC_ITC_RDI;
   data_bc_ptr->ur = CSMCC_UR_0_3_K;
   data_bc_ptr->fnur = CSMCC_FNUR_NM;
   data_bc_ptr->ra = CSMCC_RA_NONE;
   data_bc_ptr->other_ra = CSMCC_RA_V120;
   data_bc_ptr->mt = CSMCC_MT_NONE;
   data_bc_ptr->other_mt = CSMCC_OTHER_MT_NONE;
   /* v.120 parameters relates rate ra and other_ra */
   /* rlp parameters relates ce */
   data_bc_ptr->data_compression_param.dir = CSMCC_NO_COMPRESSION;
   data_bc_ptr->nsb = CSMCC_1_STOP_BIT;
   data_bc_ptr->ndb = CSMCC_8_DATA_BIT;
   data_bc_ptr->parity = CSMCC_PARITY_NONE;
   
} /* end of csmcc_reset_data_bc_param */

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_sat_bearer_description
* DESCRIPTION                                                           
*    This function is used to reset sat bearer description to default setting.
*    
* CALLS  
*	csmcc_reset_sat_bearer_description(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_sat_bearer_description(void)
{
   CSMCC_PTR_G_TO_L
   CSMCC_PTR->sat_prof.sat_cbst.speed = CSMCC_AUTOBAUDING;
   CSMCC_PTR->sat_prof.sat_cbst.service_name = CSMCC_DATA_ASYNC;
   CSMCC_PTR->sat_prof.sat_cbst.ce = CSMCC_NON_TRANSPARENT;
   
} /* end of csmcc_reset_sat_bearer_description */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_sat_prof
* DESCRIPTION                                                           
*    This function is used to set sat default account parameters.
*    This function should be removed to customer folder if it  
*    need to be customization.
* CALLS  
*	csmcc_reset_sat_prof(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_sat_prof(void)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_sat_profile_struct   *sat_prof_ptr;
   int i;
   
   sat_prof_ptr = &(CSMCC_PTR->sat_prof);

   //mtk01602: this data was copy from csd first account
   sat_prof_ptr->addr.addr_length = 0x04;
   sat_prof_ptr->addr.addr_bcd[0] = 0x81;
   sat_prof_ptr->addr.addr_bcd[1] = 0x71;
   sat_prof_ptr->addr.addr_bcd[2] = 0x62;
   sat_prof_ptr->addr.addr_bcd[3] = 0xf6;
#ifdef __SUBADDR_SUPPORT__
   sat_prof_ptr->subaddr.sub_addr_len = 0x00;
#endif
   for(i = 0; i < CSD_USER_ID_LEN; i++)
   {
     sat_prof_ptr->user_id[i] = 0x00;
   }
   for(i = 0; i < CSD_USER_PWD_LEN; i++)
   {
     sat_prof_ptr->user_pwd[i] = 0x00;
   }
   
   csmcc_reset_sat_bearer_description();
   
   for(i = 0; i < SAT_LOCAL_ADDR_LEN; i++)
   {
     sat_prof_ptr->local_addr[i] = 0x00;
   }   
} /* end of csmcc_reset_sat_prof */

#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_nego_bc
* DESCRIPTION                                                           
*    This function is used to reset bearer capability data structure used by
*    negotiation.
*
* CALLS  
*	csmcc_reset_nego_bc(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_nego_bc(void)
{
   CSMCC_PTR_G_TO_L
   CSMCC_PTR->nego_bc.bc1_present = KAL_FALSE;
   kal_mem_set((void*)&(CSMCC_PTR->nego_bc.bc1),
               0,
               sizeof(csmcc_bc_struct));
               
   CSMCC_PTR->nego_bc.bc2_present = KAL_FALSE;
   kal_mem_set((void*)&(CSMCC_PTR->nego_bc.bc2),
               0,
               sizeof(csmcc_bc_struct));
                  
   CSMCC_PTR->nego_bc.repeat_present = KAL_FALSE;
   
//MAUI_01966467
#ifdef __REL6__
   /*[MAUI_01712442]CC R6 change request*/
   CSMCC_PTR->umts_only_service = KAL_FALSE;
#endif
   
} /* end of csmcc_reset_nego_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_bc
* DESCRIPTION                                                           
*    This function is used to reset data bearer capability parameters and 
*    bearer capability data structure used by negotiation.
*
* CALLS  
*	csmcc_reset_bc(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_bc(void)
{   
   csmcc_reset_nego_bc();

} /* end of csmcc_reset_bc */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_at_param
* DESCRIPTION                                                           
*    This function is used to set default value of parameters set by 
*    AT command.
*
* CALLS  
*	csmcc_reset_at_param(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_at_param(void)
{
   CSMCC_PTR_G_TO_L
   csmcc_at_param_struct *at_param_ptr = &(CSMCC_PTR->at_param);
   
   /* +CSTA defaut setting */
   at_param_ptr->addr_type = CSMCC_DEFAULT_ADDR_TYPE;
   
   /* +CMOD defaut setting */
   at_param_ptr->call_mode = CSMCC_SINGLE_MODE;
   
   /* +CBST default setting */
   at_param_ptr->bearer_service_type.bearer_speed = CSMCC_AUTOBAUDING;
   at_param_ptr->bearer_service_type.bearer_name = CSMCC_DATA_ASYNC;
   at_param_ptr->bearer_service_type.bearer_ce = CSMCC_NON_TRANSPARENT;
   
   /* +CSNS default setting */
   at_param_ptr->sns_mode = CSMCC_SNS_VOICE;
   
   /* +DS default setting */
   at_param_ptr->data_compression_param.dir = CSMCC_NO_COMPRESSION;
   at_param_ptr->data_compression_param.negotiation = CSMCC_NO_DISC_IF_NO_NEGOTIATION;
   at_param_ptr->data_compression_param.max_dict = 512;
   at_param_ptr->data_compression_param.max_string = 6;
   
   /* +ICF default setting */
   at_param_ptr->cf_param.cf_format = CSMCC_CF_8_DATA_1_STOP;
   at_param_ptr->cf_param.cf_parity = CSMCC_CF_PARITY_SPACE;
   
   /* +CV120 default setting */
   at_param_ptr->v120_param.v120_rah = CSMCC_RAH_INCLUDED;
   at_param_ptr->v120_param.v120_mfm = CSMCC_MULTI_FRAME_EST_SUPPORT;
   at_param_ptr->v120_param.v120_mode = CSMCC_PROTOCOL_SENSITIVE_MODE;
   at_param_ptr->v120_param.v120_llineg = CSMCC_LLI_NEG_NOT_ALLOWED;
   at_param_ptr->v120_param.v120_assign = CSMCC_DEFAULT_ASSIGNEE;
   at_param_ptr->v120_param.v120_negtype = CSMCC_LOGICAL_LINK_ZERO;
   
   /* +CRLP default setting */
   at_param_ptr->rlp_param.rlp_iws = 61;
   at_param_ptr->rlp_param.rlp_mws = 61;
   at_param_ptr->rlp_param.rlp_T1 = 48; /* use T1 related to 4.8k */
   at_param_ptr->rlp_param.rlp_N2 = 6; 
   at_param_ptr->rlp_param.rlp_ver = 0; /* version 0 */
   at_param_ptr->rlp_param.rlp_T4 = 0; /* useless */
   
   /* +CAOC default setting */
   at_param_ptr->aoc_mode = CSMCC_ACTIVEATE_CCM_REPORTING;
   
   /* +CCUG default setting */
   at_param_ptr->cug_param.cug_temporary_mode = CSMCC_DISABLE_CUG_TEMPORARY_MODE;
   at_param_ptr->cug_param.cug_index = CSMCC_CUG_NO_INDEX;
   at_param_ptr->cug_param.cug_suppress = CSMCC_CUG_NO_SUPPRESS_INFO;
   
   /* +FCLASS default setting */
   at_param_ptr->fclass_mode = CSMCC_DATA;

} /* csmcc_reset_at_param */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset_context
* DESCRIPTION                                                           
*   This procedure is used to reset context used in CSM(CC) module.
*
* CALLS  
*	csmcc_reset_context(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reset_context(void)
{
   CSMCC_PTR_G_TO_L
   
   /* reset AT command parameter setting */
   csmcc_reset_at_param();

   /* reset bearer capability related parameters */
   csmcc_reset_bc();
   csmcc_reset_data_bc_param();
   csmcc_call_capability = 0;
                        
   CSMCC_PTR->call_reest = KAL_FALSE;
   CSMCC_PTR->channel_info = CSMCC_NO_TCH;
   CSMCC_PTR->attach_status = CSMCC_DETACH;      
   CSMCC_PTR->cur_req = CSMCC_NO_REQ;
   CSMCC_PTR->req_src_id = CSMCC_INVALID_SRC_ID;
   CSMCC_PTR->req_call_id = CSMCC_INVALID_CALL_ID; 
   /*Cosine: 20080503, [MAUI_00682453]*/
   CSMCC_PTR->prev_req = CSMCC_NO_REQ;
   CSMCC_PTR->sat_file_change_req = KAL_FALSE; /* ALPS00439699 */
   CSMCC_PTR->starup_sim_read_req = KAL_FALSE; 
   CSMCC_PTR->prev_req_src_id = CSMCC_INVALID_SRC_ID;
   CSMCC_PTR->prev_req_call_id = CSMCC_INVALID_CALL_ID; 
   CSMCC_PTR->cur_non_l4c_req = CSMCC_NO_REQ;
   CSMCC_PTR->cur_non_l4c_req_call_id = CSMCC_INVALID_CALL_ID;
   CSMCC_PTR->aux_req = CSMCC_NO_REQ;
   CSMCC_PTR->startup_req = CSMCC_NO_REQ;
   CSMCC_PTR->aux_req_call_id = CSMCC_INVALID_CALL_ID; 
   CSMCC_PTR->is_aux_req_processed = KAL_FALSE;  
   CSMCC_PTR->crss_req = CSMCC_INVALID_CRSS_TYPE; /*mtk01602, 070718: initial crss_req should be invalid_type*/
   CSMCC_PTR->default_call_priority = 0; /* no priority level is subscribed */
   CSMCC_PTR->auto_answer_priority_level = 0; /* disable all priority level */
   CSMCC_PTR->inv_id_count = 0;
#ifdef __AOC_SUPPORT__
   CSMCC_PTR->acm_valid = KAL_FALSE;
   CSMCC_PTR->acm = 0;
   CSMCC_PTR->pre_acm = 0;
   CSMCC_PTR->acmmax = 0;
   CSMCC_PTR->acmmax_update_temp = 0;
   CSMCC_PTR->last_ccm = 0xffffffff;   
   CSMCC_PTR->update_acm_flag = KAL_FALSE;
#endif /*__AOC_SUPPORT__*/
   /* according to v.25ter, comma dial modifier encountered
      in dial string of D command (default is 2 seconds) */
   CSMCC_PTR->pause_duration = 3*KAL_TICKS_1_SEC;   

   CSMCC_PTR->is_sat_dtmf = KAL_FALSE;
   CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;

   CSMCC_PTR->rlc_duration = custom_config_rlc_timer()*KAL_TICKS_1_SEC;
   CSMCC_PTR->mscap.speech_version = 0;
   CSMCC_PTR->mscap.data_cap = 0;
   CSMCC_PTR->mscap.acc = 0;
   CSMCC_PTR->rscd_P = KAL_FALSE;   
   
//MAUI_01966467

   CSMCC_PTR->rat_mode = RAT_NONE;

   #ifdef __REL4__
   /*[MAUI_01640820] set default value of speech codecs as 0*/
   CSMCC_PTR->mscap.speech_version_byte2 = 0;
   CSMCC_PTR->mscap.umts_supported_speech = 0;
   CSMCC_PTR->mscap.umts_supported_speech_byte2 = 0;

       #ifdef __REL6__
           /*[MAUI_01712442]CC R6 change request*/ 
           CSMCC_PTR->umts_only_service = KAL_FALSE;
       #endif /*__REL6__*/
   #endif /*__REL4__*/


   CSMCC_PTR->size_of_ccp_temp = 0;    /*Michael: add for SAT retry*/
   CSMCC_PTR->is_tch = KAL_FALSE;  /*mtk00924 add 041210 for ECPI*/
   CSMCC_PTR->is_ibt = KAL_FALSE;  /*mtk00924 add 041210 for ECPI*/
   CSMCC_PTR->ctm_status = CSMCC_CTM_NOT_SUPPORT;
   CSMCC_PTR->activate_data_call_id = 0xff;
   CSMCC_PTR->iwf = CSMCC_ITC_3_1_K_AUDIO; /*3.1 khz audio or UDI*/
   CSMCC_PTR->activate_data_call_ce = CSMCC_INVALID_BEARER_CE;  /* MAUI_01789039 */
#ifdef __AOC_SUPPORT__
   CSMCC_PTR->cdur_present = KAL_FALSE;
   CSMCC_PTR->cdur = 0;
   CSMCC_PTR->updated_cdur_present = KAL_FALSE;
   CSMCC_PTR->updated_cdur = 0;
#endif /*__AOC_SUPPORT__*/
#ifdef __CNAP_SUPPORT__
   CSMCC_PTR->cnap_info.callingName_present = KAL_FALSE;
#endif

   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   csmcc_reset_sat_prof();
   #endif
   CSMCC_PTR->prof_type = CSMCC_CSD_PROF;
#ifdef __AUTO_CALL_REJECTION__
   CSMCC_PTR->seq_num = 0; //MAUI_01964704
#endif
#ifdef __AOC_SUPPORT__
   CSMCC_PTR->acm_before_write_sim =0;
#endif 
   CSMCC_PTR->csmcc_emergency_call_id = CSMCC_INVALID_CALL_ID; 
#if defined(__ECALL_SUPPORT__)
   CSMCC_PTR->csmcc_ecall_id = CSMCC_INVALID_CALL_ID;
   CSMCC_PTR->ecall_type = ECALL_DISABLE;
#endif
   CSMCC_PTR->dup_sim_file_change_req = KAL_FALSE;//ALPS00437346
} /* end of csmcc_reset_context */

#ifndef  __MTK_TARGET__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_reset
* DESCRIPTION                                                           
*   This procedure is used to reset CSM(CC) module.
*
* CALLS  
*	csmcc_reset(void)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_reset( void )
{
   csmcc_context_struct *csmcc_ptr_l;
   kal_uint8       index = 0;
   kal_uint8       csmcc_mod_id =0; 
   kal_uint8       call_index=0;
   csmcc_timer_struct *timer_ptr;

   /* reset call_pool & call table */
   SET_CALL_STATUS(0, CSMCC_CALL_UNUSED)   
   for (index = 1; index < CSMCC_MAX_CALL_NUM+1; index ++)
   {
      SET_CALL_STATUS(index, CSMCC_CALL_FREE)
      csmcc_reset_call_context(index);
   }

#ifdef __GEMINI__
   csmcc_ctab_mod_id = 0;
#endif 

   for (csmcc_mod_id=0;csmcc_mod_id<CSMCC_SIM_TOTAL;csmcc_mod_id++)
   {
       csmcc_context_selection(csmcc_mod_id);
       csmcc_ptr_l=csmcc_ptr_g;
       /* stop timer for all calls */
       for (index=0;index<CSMCC_GTIMER_NUM;index++)
       {
				   timer_ptr = &(CSMCC_PTR->csmcc_timer_pool[index]);
				   kal_trace(TRACE_INFO, 
				   		        CSMCC_TRACE_TIMER_STATUS,
				   			    timer_ptr->call_id,
				   			    timer_ptr->event_id,
				   			    timer_ptr->timer_duration);
				
				   if(timer_ptr->event_id != NULL)
				   {
				       evshed_cancel_event(CSMCC_PTR->csmcc_timer.evshed_ptr,
				   				 &(timer_ptr->event_id));
				       timer_ptr->event_id = NULL;
				   }	
				     
		   }
		   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
		   {
		      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
		         continue;
		         
		      if (GET_CALL_STATE(call_index) != CSMCC_CALL_IDLE)
		      {
		           csmcc_stop_rlc_timer(call_index);
		      }
		   }
       csmcc_reset_context();
   }

#if (defined(__CSMCC_UT__) && defined(__MTK_INTERNAL__))
/* under construction !*/
#endif

   return KAL_TRUE;
   
} /* end of csmcc_reset */
#endif
/*************************************************************************
* FUNCTION                                                            
*	csmcc_init_timer
* DESCRIPTION                                                           
*    This function is used to initiate timer.
*
* CALLS  
*	csmcc_init_timer(void)
*
* PARAMETERS
*
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_init_timer(void)
{
  CSMCC_PTR_G_TO_L
  CSMCC_PTR->csmcc_timer.evshed_ptr = 
      evshed_create("csmcc_base_timer",CSMCC_MOD_ID,0,0);

} /* end of csmcc_init_timer */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_init
* DESCRIPTION                                                           
*   This procedure is used to init context in CSM(CC) module.
*
* CALLS  
*	csmcc_init(void)
* PARAMETERS
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_init( void )
{
#ifdef __GEMINI__
   csmcc_context_struct *csmcc_ptr_l;
#endif 
   kal_uint8   index   = 0 ;
   kal_uint8   csmcc_mod_id=0; 
    

   csmcc_ctab_ptr_g = &csmcc_ctab_g;

   SET_CALL_STATUS(0, CSMCC_CALL_UNUSED)
   
   /*reset context related to call table */
   for (index = 1; index < CSMCC_MAX_CALL_NUM+1; index ++)
   {
      /* reset call_pool & call table */
      SET_CALL_STATUS(index, CSMCC_CALL_FREE)
      csmcc_reset_call_context(index);

      /* init dtmf digit ptr to NULL */
      CALL_DATA(index,dtmf.digit) = NULL;
      CALL_DATA(index, local_para_ptr) = NULL;
   }
   /*reset context not related to call table */
   for (csmcc_mod_id=0; csmcc_mod_id<CSMCC_SIM_TOTAL; csmcc_mod_id++)
   {
       //stack_set_active_module_id( my_index, MOD_CSM+csmcc_mod_id );
       kal_set_active_module_id(MOD_CSM+csmcc_mod_id );
       csmcc_context_selection(csmcc_mod_id);
#ifdef __GEMINI__
       csmcc_ptr_l=csmcc_ptr_g;
#endif 
       CSMCC_PTR->csmcc_sim_interface = csmcc_mod_id ; 
       csmcc_reset_context();
       csmcc_init_timer();
   }

   #ifdef __GEMINI__
   csmcc_ctab_mod_id = 0;
   #endif
   
   return KAL_TRUE;
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_deinit
* DESCRIPTION                                                           
*    This function is used to de-init global context in CSM(CC) module
*
* CALLS  
*	csmcc_deinit(void)
*
* PARAMETERS
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_deinit( void )
{
    /* TBD: Write the ACM into SIM */
    
    //stack_deinit_timer(&(CSMCC_PTR->csmcc_timer.timer));          
    
    return KAL_TRUE;
    
}   /* end of csmcc_deinit */

