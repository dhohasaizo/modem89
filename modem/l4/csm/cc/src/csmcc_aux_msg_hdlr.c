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
 *	csmcc_aux_msg_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for helping functions for message handlers.
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
 * removed!
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define CSMCC_AUX_MSG_HDLR_C

//#include "kal_release.h"      	/* Basic data type */
#include "md_sap.h"
#include "drv_msgid.h"
#include "svc_sap.h"
#include "md_mw_sap.h"
#include "sim_ps_msgid.h"
#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "cc_msgid.h"

//#include "stack_common.h"  
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "syscomp_config.h"
#include "task_config.h"      	/* Task creation */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */

#include "mcd_ss_parameters.h"
#include "mcd_ss_tcapmessages.h"
#include "mcd_l4_common.h"
#include "mcd.h"
//#include "app_buff_alloc.h"

#include "ps2sat_struct.h"  
#include "ps2sim_struct.h"
#include "nvram_struct.h"
//#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
#include "mncc_struct.h"

#include "l3_inc_enums.h"
#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
//#include "l4c_common_enum.h"
#include "csmss_common_enums.h"
#include "sim_common_enums.h"
#include "nvram_enums.h"
#include "l4_defs.h"
#include "csmcc_defs.h"
//#include "csmcc_bc_defs.h"
#include "csmcc_bc_types.h"

#ifdef __SAT__
#include "cc2sat_struct.h"
#include "sat_def.h"
#endif /* __SAT__ */

#ifdef __CPHS__
#include "nvram_data_items.h"
//__CUSTPACK_MULTIBIN Cylen BEGIN
//#include "nvram_user_defs.h" //NVRAM_EF_ALS_LINE_ID_LID
//#include "custom_nvram_editor_data_item.h"//nvram_ef_als_line_id_struct
//__CUSTPACK_MULTIBIN Cylen END
#include "nvram_editor_data_item.h"
#endif

#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)
//#include "csm_data_enums.h"
//#include "rr_mpal_interface.h"

#ifdef __CSD_T__
//#include "csm2tdt_struct.h"
#endif

#ifdef __CSD_NT__
//#include "data_xid_struct.h"
//#include "csm2l2r_struct.h"
#endif

#endif /* __CSD_T__ || __CSD_NT__ || __CSD_FAX__*/

#include "csmcc_types.h"
#include "csmcc_utility.h"
#include "csmcc_bc_func.h"
#include "csmcc_facility_proc.h"

#include "kal_trace.h"
#include "csm_trc.h"
//#include "cc_defs.h"

//[Cosine TBD] CNAP
//#include "l4c_aux_struct.h"
//#include "smsal_defs.h"
#include "smsal_l4c_enum.h"
//#include "smsal_l4c_defs.h"
//#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"

//#include "l4c2csm_ss_struct.h"
#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "l4c2smsal_struct.h"
//#include "smsal_structs.h"
#include "smsal_cb.h"
//#include "csmss_context.h"
#include "csmss_aux_msg_hdlr.h"
#include "csmcc_aux_msg_hdlr.h" /* MAUI_01315252, update call state */
#include "l4_event_info_trc.h"
//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "event_info_utility.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
//#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "ps_public_utility.h"

extern void cc_ss_comp_new(Component **comp, 
                 kal_uint8 comp_type, 
                 kal_uint32 inv_id,
                 kal_uint8 *parameter,
                 kal_uint8 parameterLen);

extern kal_uint8 cc_ss_arg_pack(kal_uint16 msgid,
                         kal_uint8 *pun_buff,
                         kal_uint16 pun_buff_len,
                         kal_uint8 *parameter);

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_ilm
* DESCRIPTION                                                           
*   This procedure is used to send ILM from CSM
*
* CALLS  
*	csmcc_send_ilm(void *local_para_ptr,
*                      msg_type ilm_id,
*                      kal_uint8 dst_id)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*	ilm_id	 	IN	second variable, used as input
*       dst_id          IN      third variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_send_ilm(void *local_para_ptr, msg_type ilm_id, module_type dst_id, peer_buff_struct *peer_buff)
{
   CSMCC_PTR_G_TO_L
   sap_type sap_id;

   switch (dst_id) {
      case MOD_CC:
         sap_id = MNCC_SAP;
         dst_id = MOD_CC+CSMCC_PTR->csmcc_sim_interface;
         break;
      case MOD_L4C:
         sap_id = CSM_L4C_SAP;
         dst_id = MOD_L4C+CSMCC_PTR->csmcc_sim_interface;
         break;
      case MOD_SIM:
         sap_id = PS_SIM_SAP;
         dst_id = MOD_SIM+CSMCC_PTR->csmcc_sim_interface;
         break;
      case MOD_NVRAM:
         sap_id = PS_NVRAM_SAP;
         break;
      case MOD_TDT:
         sap_id = CSM_TDT_SAP;
         dst_id = MOD_TDT+CSMCC_PTR->csmcc_sim_interface;
         break;
      case MOD_L2R:
         sap_id = CSM_L2R_SAP;
         dst_id = MOD_L2R+CSMCC_PTR->csmcc_sim_interface;
         break;    
   #ifdef __CSD_FAX__
      case MOD_T30:
         sap_id = CSM_T30_SAP;
         dst_id = MOD_T30+CSMCC_PTR->csmcc_sim_interface;
         break;
   #endif
   #ifdef __VIDEO_CALL_SUPPORT__
      case MOD_VT:
         sap_id = CSM_VT_SAP;
         break;
   #endif   
     default:
       /* invalid value */
       return;
   } /* switch (dst_id) */
 
   msg_send6(CSMCC_MOD_ID,dst_id,sap_id,ilm_id,(local_para_struct *)local_para_ptr,(peer_buff_struct *)peer_buff);
  
} /* end of csmcc_send_ilm */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_read_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM read request to SIM task.
*
* CALLS  
*	csmcc_send_sim_read_req(kal_uint8 file_idx, kal_uint8 file_len)
*
* PARAMETERS
*	file_idx	IN	first variable, used as input
*	file_len	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_read_req(kal_uint8 file_idx,
                                        kal_uint8 file_len)
{
   sim_read_req_struct *sim_read_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(sim_read_req_ptr, 
                              sim_read_req_struct)
   
   /* FILE_ACM_IDX need to read latest update record */
   if (file_idx == FILE_ACM_IDX)
   {
      sim_read_req_ptr->para = 1;
   }
   
   sim_read_req_ptr->file_idx = file_idx;
   sim_read_req_ptr->length = file_len;

   csmcc_send_ilm(sim_read_req_ptr,
                  MSG_ID_SIM_READ_REQ,
                  MOD_SIM,
                  NULL);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_sim_read_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_startup_cnf
* DESCRIPTION                                                           
*   This procedure is used to send CSM CC startup confirmation to L4C.
*
* CALLS  
*	csmcc_send_l4c_startup_cnf(kal_uint8 response, kal_uint16 cause, kal_uint8 init_type)
*
* PARAMETERS
*	result	IN	first variable, used as input
*  cause    IN second variable, used as input
*  init_type  IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_startup_cnf(kal_uint8 response, kal_uint16 cause, kal_uint8 init_type)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_startup_cnf_struct *startup_cnf_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(startup_cnf_ptr, 
                              l4ccsm_cc_startup_cnf_struct)

   startup_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   startup_cnf_ptr->init_type = init_type;
   startup_cnf_ptr->response = response;
   startup_cnf_ptr->cause = cause;

   csmcc_send_ilm(startup_cnf_ptr,
                  MSG_ID_L4CCSM_CC_STARTUP_CNF,
                  MOD_L4C,
                  NULL);

   if (init_type == L4CCSM_CC_STARTUP_NVRAM)
   {
      csmcc_reset_cur_req(CSMCC_STARTUP_REQ); /* MAUI_01747506 separte startup to SIM and NVRAM */
   }

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_startup_cnf */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_nvram_read_req
* DESCRIPTION                                                           
*   This procedure is used to send NVRAM read request to NVRAM task.
*
* CALLS  
*	csmcc_send_nvram_read_req(nvram_lid_enum file_idx)
*
* PARAMETERS
*	file_idx	IN	first variable, used as input
*       para            IN      second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_nvram_read_req(nvram_lid_enum file_idx, kal_uint16 para)
{
   CSMCC_PTR_G_TO_L
   nvram_read_req_struct *nvram_read_req_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(nvram_read_req_ptr,
                              nvram_read_req_struct)

   /* nvram_read_req_ptr->para can not be 0, so fill 1 */
   if( file_idx == NVRAM_EF_ALS_LINE_ID_LID)
   {
#ifdef __GEMINI_3G_SWITCH__
       nvram_read_req_ptr->para = para + (kal_uint16)l4c_gemini_get_actual_sim_id(CSMCC_PTR->csmcc_sim_interface) ;
#else  
       nvram_read_req_ptr->para = para + (kal_uint16)CSMCC_PTR->csmcc_sim_interface ;
#endif
   }
   else 
   {
       nvram_read_req_ptr->para = para;
   }
   nvram_read_req_ptr->file_idx = file_idx;

   csmcc_send_ilm(nvram_read_req_ptr,
                  MSG_ID_NVRAM_READ_REQ,
                  MOD_NVRAM,
                  NULL);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_nvram_read_req */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);
* DESCRIPTION                                                           
*   This procedure is used to send ACM and ACMMax update request to CC.
*
* CALLS  
*	csmcc_send_cc_acm_update_req(kal_uint32 acmmax, kal_uint32 acm)
*
* PARAMETERS
*	acmmax	IN	first variable, used as input
*  acm      IN second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_acm_update_req(kal_uint32 acmmax,
                                         kal_uint32 acm)
{
   mncc_acm_update_req_struct *acm_update_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(acm_update_req_ptr, 
                              mncc_acm_update_req_struct)   

   acm_update_req_ptr->acmmax = acmmax;
   acm_update_req_ptr->acm = acm;
   
   csmcc_send_ilm(acm_update_req_ptr,
                  MSG_ID_MNCC_ACM_UPDATE_REQ,
                  MOD_CC, 
                  NULL);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_acm_update_req */
#endif /*__AOC_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_write_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM write request to SIM.
*
* CALLS  
*	csmcc_send_sim_write_req(kal_uint8 file_idx,
*                           kal_uint8 *data_ptr,
*                           kal_uint8 file_len)
*
* PARAMETERS
*	file_idx    IN	first variable, used as input
*  data_ptr    IN second variable, used as input
*  file_len    IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_write_req(kal_uint8 file_idx,
                                     kal_uint8 *data_ptr,
                                     kal_uint8 file_len)
{
   sim_write_req_struct *sim_write_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(sim_write_req_ptr, 
                              sim_write_req_struct)   

   sim_write_req_ptr->file_idx = file_idx;
   sim_write_req_ptr->length = file_len;

   /* the data written to sim begin sixth byte, because
      the first 5 bytes are headers */
   kal_mem_cpy(sim_write_req_ptr->data+5,
               data_ptr,
               file_len);

   csmcc_send_ilm(sim_write_req_ptr,
                  MSG_ID_SIM_WRITE_REQ,
                  MOD_SIM,
                  NULL);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_sim_write_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_increase_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM increase request to SIM.
*
* CALLS  
*	csmcc_send_sim_increase_req(kal_uint8 file_idx,
*                              kal_uint8 *data_ptr,
*                              kal_uint8 file_len)
*
* PARAMETERS
*	file_idx    IN	first variable, used as input
*  data_ptr    IN second variable, used as input
*  file_len    IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_increase_req(kal_uint8 file_idx,
                                        kal_uint8 *data_ptr,
                                        kal_uint8 file_len)
{
   sim_increase_req_struct *sim_incr_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(sim_incr_req_ptr, 
                              sim_increase_req_struct)   

   sim_incr_req_ptr->file_idx = file_idx;
   sim_incr_req_ptr->data_len = file_len;
   kal_mem_cpy(sim_incr_req_ptr->data,
               data_ptr,
               file_len);

   csmcc_send_ilm(sim_incr_req_ptr,
                  MSG_ID_SIM_INCREASE_REQ,
                  MOD_SIM,
                  NULL);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_sim_increase_req */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_acm_reset_cnf
* DESCRIPTION                                                           
*   This procedure is used to send ACM reset confirmation to L4C.
*
* CALLS  
*	csmcc_send_l4c_acm_reset_cnf(kal_uint8 src_id, 
*                               kal_uint8 response, 
*                               kal_uint16 cause)
*
* PARAMETERS
*  src_id      IN first variable, used as input
*	response    IN	second variable, used as input
*  caise       IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_acm_reset_cnf(kal_uint8 src_id, 
                                         kal_uint8 response,
                                         kal_uint16 cause)
{
   l4ccsm_cc_acm_reset_cnf_struct *acm_reset_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(acm_reset_cnf_ptr, 
                              l4ccsm_cc_acm_reset_cnf_struct)   

   acm_reset_cnf_ptr->src_id = src_id;
   acm_reset_cnf_ptr->response = response;
   acm_reset_cnf_ptr->cause = cause;

   csmcc_send_ilm(acm_reset_cnf_ptr,
                  MSG_ID_L4CCSM_CC_ACM_RESET_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(CSMCC_ACM_RESET_REQ);                  

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_acm_reset_cnf */

#endif /* __AOC_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_acmmax_set_cnf
* DESCRIPTION                                                           
*   This procedure is used to send ACMMax set confirmation to L4C.
*
* CALLS  
*	csmcc_send_l4c_acmmax_set_cnf(kal_uint8 src_id, 
*                                kal_uint8 response,
*                                kal_uint16 cause)
*
* PARAMETERS
*  src_id      IN first variable, used as input
*	response    IN	second variable, used as input
*  cause       IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_acmmax_set_cnf(kal_uint8 src_id, 
                                          kal_uint8 response,
                                          kal_uint16 cause)
{
   l4ccsm_cc_acmmax_set_cnf_struct *acmmax_set_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(acmmax_set_cnf_ptr, 
                              l4ccsm_cc_acmmax_set_cnf_struct)   

   acmmax_set_cnf_ptr->src_id = src_id;
   acmmax_set_cnf_ptr->response = response;
   acmmax_set_cnf_ptr->cause = cause;

   csmcc_send_ilm(acmmax_set_cnf_ptr,
                  MSG_ID_L4CCSM_CC_ACMMAX_SET_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(CSMCC_ACMMAX_SET_REQ);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_acmmax_set_cnf */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_setup_fail
* DESCRIPTION                                                           
*   This procedure is used to send setup failure to L4C to 
*   response setup request.
*
* CALLS  
*	csmcc_send_l4c_setup_fail(kal_uint8 src_id, kal_uint8 call_type,
*                            kal_uint16 cuse)
* PARAMETERS
*	src_id 	IN	first variable, used as input
*  call_type IN second variable, used as input
*	cause 	IN	third variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_setup_fail(kal_uint8 src_id, 
                                      kal_uint8 call_type, 
                                      kal_uint16 cause,
                                      kal_uint8  terminal_res,
                                      kal_uint8  add_res,
                                      kal_uint8 diagnostic)
{
#if (defined(__GEMINI__)&&(defined(__TCPIP_OVER_CSD__) && defined(__SATCE__)||defined(__CSD_FAX__)))
   CSMCC_PTR_G_TO_L
#endif 
   /* local var declare */
   l4ccsm_cc_call_setup_cnf_struct *call_setup_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_setup_cnf_ptr, 
                              l4ccsm_cc_call_setup_cnf_struct)   
      
   call_setup_cnf_ptr->src_id = src_id;
   call_setup_cnf_ptr->response = CSMCC_FAILURE;
   call_setup_cnf_ptr->call_type = call_type;
   
   if(cause != CSMCC_NO_CAUSE)
   {
      call_setup_cnf_ptr->cause_present = KAL_TRUE;
      call_setup_cnf_ptr->cause = cause;
   }
   if(diagnostic != 0) 
   {
      call_setup_cnf_ptr->is_diagnostic_present = KAL_TRUE;
      call_setup_cnf_ptr->diagnostic = diagnostic;
   }
   #ifdef __CSD_FAX__
   if (call_type == CSMCC_FAX_CALL)
   {
      CSMCC_PTR->at_param.fclass_mode = CSMCC_DATA;
   }
   #endif
   
   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   
   if (call_type == CSMCC_SAT_DATA_CALL)
   {
      kal_uint8 speed, service_name;

      //mtk01602, 070606: add for sending terminal response to SIM
      call_setup_cnf_ptr->terminal_res = terminal_res;
      call_setup_cnf_ptr->add_res = add_res;
      
      if (cause == CSMCC_CMD_NOT_ALLOW
         ||cause == CM_ACM_EXCEEDED
         ||cause == CSMCC_BC_FILL_FAIL)
      {
         /* Not nego with NW, return cbst value sent from SAT directly. */
         call_setup_cnf_ptr->sat_cbst = CSMCC_PTR->sat_prof.sat_cbst;
      }
      else
      {
         csmcc_compose_cbst_speed(&speed);
         csmcc_compose_cbst_name(&service_name);

         /* If can't get valid value, just return the value sent from SAT. */
         if (speed == CSMCC_INVALID_SPEED )
         {
            speed = CSMCC_PTR->sat_prof.sat_cbst.speed;
         }
         
         if (service_name == CSMCC_INVALID_BEARER_NAME)
         {
            service_name = CSMCC_PTR->sat_prof.sat_cbst.service_name;
         }     
      
         call_setup_cnf_ptr->sat_cbst.speed = speed;
         call_setup_cnf_ptr->sat_cbst.service_name = service_name;   
         call_setup_cnf_ptr->sat_cbst.ce = CSMCC_PTR->data_bc_param.ce;
      }
   }  
   #endif
   
   csmcc_send_ilm(call_setup_cnf_ptr,
                  MSG_ID_L4CCSM_CC_CALL_SETUP_CNF,
                  MOD_L4C,
                  NULL);
   
   csmcc_reset_cur_req(CSMCC_CALL_SETUP_REQ);
   /*Cosine: 20080503, [MAUI_00682453]*/
   csmcc_reset_prev_req(CSMCC_CALL_SETUP_REQ);
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_setup_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_emergency_setup_fail
* DESCRIPTION                                                           
*   This procedure is used to send emergency setup failure to L4C to 
*   response emergency call setup request.
*
* CALLS  
*	csmcc_send_l4c_emergency_setup_fail(kal_uint8 src_id,
*                                           kal_uint16 cause)
* PARAMETERS
*	src_id 	IN	first variable, used as input
*	cause 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_emergency_setup_fail(kal_uint8 src_id,  
                                                     kal_uint16 cause)
{
   /* local var declare */
   l4ccsm_cc_emergency_call_setup_cnf_struct *emergency_setup_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(emergency_setup_cnf_ptr, 
                              l4ccsm_cc_emergency_call_setup_cnf_struct)   
                                 
   emergency_setup_cnf_ptr->src_id = src_id;
   emergency_setup_cnf_ptr->response = CSMCC_FAILURE;
   emergency_setup_cnf_ptr->call_type = CSMCC_VOICE_CALL;
   
   if(cause != CSMCC_NO_CAUSE)
   {
      emergency_setup_cnf_ptr->cause_present = KAL_TRUE;
      emergency_setup_cnf_ptr->cause = cause;
   }
   
   csmcc_send_ilm(emergency_setup_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_CNF,
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_EMERGENCY_CALL_SETUP_REQ);
   
   /* MAUI_01617512 */
   csmcc_reset_prev_req(CSMCC_EMERGENCY_CALL_SETUP_REQ);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_emergency_setup_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_setup_succ
* DESCRIPTION                                                           
*   This procedure is used to send setup success to L4C to 
*   response setup request.
*
* CALLS  
*	csmcc_send_l4c_setup_succ(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_setup_succ(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_call_setup_cnf_struct *call_setup_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_setup_cnf_ptr, 
                              l4ccsm_cc_call_setup_cnf_struct)      
                              
   call_setup_cnf_ptr->call_id_present = KAL_TRUE;   
   call_setup_cnf_ptr->call_id = call_id;
   call_setup_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   call_setup_cnf_ptr->call_type = GET_CALL_TYPE(call_id);
   call_setup_cnf_ptr->response = CSMCC_SUCCESS;
   call_setup_cnf_ptr->is_diagnostic_present= KAL_FALSE;
   
   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))

   if (GET_CALL_TYPE(call_id) == CSMCC_SAT_DATA_CALL)
   {
      kal_uint8 speed, service_name;

      //mtk01602, 070606: add for sending terminal response to SIM
      call_setup_cnf_ptr->terminal_res = SAT_CMD_PERFORMED_SUCCESSFULLY;
      call_setup_cnf_ptr->add_res = SAT_NO_SPECIFIC_CAUSE;
      
      csmcc_compose_cbst_speed(&speed);
      csmcc_compose_cbst_name(&service_name);

      /* If can't get valid value, just return the value sent from SAT. */
      if (speed == CSMCC_INVALID_SPEED )
      {
         speed = CSMCC_PTR->sat_prof.sat_cbst.speed;
      }
      
      if (service_name == CSMCC_INVALID_BEARER_NAME)
      {
         service_name = CSMCC_PTR->sat_prof.sat_cbst.service_name;
      }
      
      call_setup_cnf_ptr->sat_cbst.speed = speed;
      call_setup_cnf_ptr->sat_cbst.service_name = service_name;   
      call_setup_cnf_ptr->sat_cbst.ce = CSMCC_PTR->data_bc_param.ce;
   }  
   #endif
   
   csmcc_send_ilm(call_setup_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_SETUP_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_CALL_SETUP_REQ); 
   /*Cosine: 20080503, [MAUI_00682453]*/
   csmcc_reset_prev_req(CSMCC_CALL_SETUP_REQ);
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_setup_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_emergency_setup_succ
* DESCRIPTION                                                           
*   This procedure is used to send emergency call setup success to L4C to 
*   response setup request.
*
* CALLS  
*	csmcc_send_l4c_emergency_setup_succ(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_emergency_setup_succ(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_emergency_call_setup_cnf_struct *emergency_setup_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(emergency_setup_cnf_ptr, 
                              l4ccsm_cc_emergency_call_setup_cnf_struct)   
                                 
   emergency_setup_cnf_ptr->call_id_present = KAL_TRUE;
   emergency_setup_cnf_ptr->call_id = call_id;
   emergency_setup_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   emergency_setup_cnf_ptr->response = CSMCC_SUCCESS;
   emergency_setup_cnf_ptr->call_type = CSMCC_VOICE_CALL;
   
   csmcc_send_ilm(emergency_setup_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_EMERGENCY_CALL_SETUP_REQ);
   
   /* MAUI_01617512 */
   csmcc_reset_prev_req(CSMCC_EMERGENCY_CALL_SETUP_REQ);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_emergency_setup_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_disc_fail
* DESCRIPTION                                                           
*   This procedure is used to send disconnect failure to L4C to response 
*   disconnect request.
*
* CALLS  
*	csmcc_send_l4c_disc_fail(kal_uint8 src_id, kal_uint8 call_id)
* PARAMETERS
*	src_id	 	IN	first variable, used as input
*	call_id 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_disc_fail(kal_uint8 src_id, kal_uint8 call_id)
{
   l4ccsm_cc_call_disc_cnf_struct *call_disc_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_disc_cnf_ptr, 
                              l4ccsm_cc_call_disc_cnf_struct) 
                                             
   call_disc_cnf_ptr->call_id = call_id;
   call_disc_cnf_ptr->src_id = src_id;
   call_disc_cnf_ptr->response = CSMCC_FAILURE;
   call_disc_cnf_ptr->call_type = GET_CALL_TYPE(call_id);
   
   csmcc_send_ilm(call_disc_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DISC_CNF, 
                  MOD_L4C,
                  NULL);
   
   csmcc_reset_cur_req(CSMCC_CALL_DISC_REQ);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_disc_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_disc_succ
* DESCRIPTION                                                           
*   This procedure is used to send disconnect success to L4C to response 
*   disconnect request.
*
* CALLS  
*	csmcc_send_l4c_disc_succ(kal_uint8 call_id)
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_disc_succ(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_call_disc_cnf_struct *call_disc_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_disc_cnf_ptr, 
                              l4ccsm_cc_call_disc_cnf_struct) 
                                             
   call_disc_cnf_ptr->call_id = call_id;
   call_disc_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   call_disc_cnf_ptr->response = CSMCC_SUCCESS;
   #ifdef __AOC_SUPPORT__
   call_disc_cnf_ptr->ccm = CALL_DATA(call_id, ccm_per_call);
   #endif 
   call_disc_cnf_ptr->call_type = GET_CALL_TYPE(call_id);
   
   csmcc_send_ilm(call_disc_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DISC_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_CALL_DISC_REQ);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_disc_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_rel_req
* DESCRIPTION                                                           
*   This procedure is used to send release request to CC.
*
* CALLS  
*	csmcc_send_cc_rel_req(kal_uint8 call_id, kal_uint16 cause)
* PARAMETERS
*	call_id 	IN	first variable, used as input
*       cause           IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_rel_req(kal_uint8 call_id, kal_uint16 cause)
{
   CSMCC_PTR_G_TO_L
   mncc_rel_req_struct *rel_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(rel_req_ptr, 
                              mncc_rel_req_struct) 
      
   rel_req_ptr->call_id = call_id;
   rel_req_ptr->ti = CALL_DATA(call_id,ti);
   /*mtk01602, [MAUI_00589022]*/
   rel_req_ptr->causeP = KAL_FALSE;
   rel_req_ptr->cause.cause_value = cause;  

   csmcc_start_rlc_timer(call_id, CSMCC_PTR->rlc_duration);
    
   csmcc_send_ilm(rel_req_ptr, 
                  MSG_ID_MNCC_REL_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_rel_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_ccbs_activate_req
* DESCRIPTION                                                           
*   This procedure is used to send release request with access register CC
*   entry to CC (ccbs activation).
*
* CALLS  
*	csmcc_send_cc_ccbs_activate_req(kal_uint8 call_id)
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_ccbs_activate_req(kal_uint8 call_id) 
{
   CSMCC_PTR_G_TO_L
   mncc_rel_req_struct *rel_req_ptr;
   Component *comp_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(rel_req_ptr, 
                              mncc_rel_req_struct) 
      
   rel_req_ptr->call_id = call_id;
   rel_req_ptr->ti = CALL_DATA(call_id,ti);
   /*mtk01602, [MAUI_00589022]*/
   rel_req_ptr->causeP = KAL_TRUE;
   rel_req_ptr->cause.cause_value = CM_NORMAL_CALL_CLR;
   
   rel_req_ptr->facilityP = KAL_TRUE;
   rel_req_ptr->facility.num_of_components = 1;

   cc_ss_comp_new(&(rel_req_ptr->facility.component[0]), 
               SS_COMP_INV, 
               CSMCC_PTR->inv_id_count,
               NULL, 0);   
               
   comp_ptr = rel_req_ptr->facility.component[0];               
   comp_ptr->invoke->localValueOpt = KAL_TRUE;
   comp_ptr->invoke->localValue = SS_OP_ACCESSREGISTERCCENTRY;

   /* update inv info */
   CALL_DATA(call_id,inv_info.used) = KAL_TRUE;
   CALL_DATA(call_id,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
   CALL_DATA(call_id,inv_info.opcode) = SS_OP_ACCESSREGISTERCCENTRY;
   
   /* increase inv id count (<= 127) */
   CSMCC_PTR->inv_id_count = (CSMCC_PTR->inv_id_count+1)&0x7f;
   //CSMCC_PTR->inv_id_count++;
      
   csmcc_send_ilm(rel_req_ptr, 
                  MSG_ID_MNCC_REL_REQ, 
                  MOD_CC,
                  NULL);
      
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_ccbs_activate_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_disc_req
* DESCRIPTION                                                           
*   This procedure is used to send disconnect request to CC.
*
* CALLS  
*	csmcc_send_cc_disc_req(kal_uint8 call_id, kal_uint16 cause)
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	cause	 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_disc_req(kal_uint8 call_id, kal_uint16 cause)
{
   CSMCC_PTR_G_TO_L
   mncc_disc_req_struct *disc_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(disc_req_ptr, 
                              mncc_disc_req_struct) 
   
   disc_req_ptr->call_id = call_id;
   disc_req_ptr->ti = CALL_DATA(call_id,ti);  
   disc_req_ptr->cause.cause_value = cause;

   csmcc_start_rlc_timer(call_id, CSMCC_PTR->rlc_duration);

   csmcc_send_ilm(disc_req_ptr, 
                  MSG_ID_MNCC_DISC_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_disc_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_attach_ind
* DESCRIPTION                                                           
*   This procedure is used to inform L4C to attach user connection.
*
* CALLS  
*	csmcc_send_l4c_attach_ind(kal_uint8 channel_mode)
* PARAMETERS
*	channel_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_attach_ind(kal_uint8 channel_mode, kal_bool irho)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_attach_ind_struct *attach_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(attach_ind_ptr, 
                              l4ccsm_cc_attach_ind_struct) 
                  
   attach_ind_ptr->channel_mode = channel_mode;
   attach_ind_ptr->rat = CSMCC_PTR->rat;
   attach_ind_ptr->irho_speech_on_off = irho;
   csmcc_send_ilm(attach_ind_ptr, 
                  MSG_ID_L4CCSM_CC_ATTACH_IND,
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_attach_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_detach_ind
* DESCRIPTION                                                           
*   This procedure is used to inform L4C to detach user connection.
*
* CALLS  
*	csmcc_send_l4c_detach_ind(void)
* PARAMETERS
*	channel_mode	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_detach_ind(kal_bool irho)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_detach_ind_struct *detach_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(detach_ind_ptr, 
                              l4ccsm_cc_detach_ind_struct)      
   detach_ind_ptr->rat = CSMCC_PTR->rat;
   detach_ind_ptr->irho_speech_on_off = irho;     
   csmcc_send_ilm(detach_ind_ptr, 
                  MSG_ID_L4CCSM_CC_DETACH_IND,
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_detach_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_disc_ind
* DESCRIPTION                                                           
*   This procedure is used to send disconnect indication to L4C
*
* CALLS  
*	csmcc_send_l4c_disc_ind(mncc_disc_ind_struct *disc_ind_ptr)
* PARAMETERS
*	disc_ind_ptr	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_disc_ind(mncc_disc_ind_struct *disc_ind_ptr)
                                          
{
   kal_uint8 call_id;
   l4ccsm_cc_call_disc_ind_struct *call_disc_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_disc_ind_ptr, 
                              l4ccsm_cc_call_disc_ind_struct) 
   
   call_id = disc_ind_ptr->call_id;
      
   call_disc_ind_ptr->call_id = call_id;
   
   /* this is an indication, so source id in call context is used */
   call_disc_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   call_disc_ind_ptr->call_type = GET_CALL_TYPE(call_id);
      
   if(disc_ind_ptr->ccbs_allowedP == KAL_TRUE)
   {
      call_disc_ind_ptr->ccbs_possible_present = KAL_TRUE;
      
      call_disc_ind_ptr->ccbs_possible = 
                     disc_ind_ptr->ccbs_allowed.CCBS_possible;
   }
   
   call_disc_ind_ptr->cause = disc_ind_ptr->cause.cause_value;
   
   if (disc_ind_ptr->cause.diagnostics_length > 0)
   {
       call_disc_ind_ptr->is_diagnostic_present = KAL_TRUE;
       call_disc_ind_ptr->diagnostic = disc_ind_ptr->cause.diagnostics[0];
   }
   
   csmcc_send_ilm(call_disc_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DISC_IND, 
                  MOD_L4C,
                  NULL);
                     
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_disc_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_simple_disc_ind
* DESCRIPTION                                                           
*   This procedure is used to send disconnect indication to L4C only with cause
*
* CALLS  
*	csmcc_send_l4c_simple_disc_ind(kal_uint8 call_id, kal_uint16 cause ,kal_uint8 diagnostic)
* PARAMETERS
*	call_id	IN	first variable, used as input
*  cause_value IN second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_simple_disc_ind(kal_uint8 call_id, kal_uint16 cause, kal_uint8 diagnostic)     
{
   l4ccsm_cc_call_disc_ind_struct *call_disc_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_disc_ind_ptr, 
                              l4ccsm_cc_call_disc_ind_struct) 
   
   call_disc_ind_ptr->call_id = call_id;
   
   /* this is an indication, so source id in call context is used */
   call_disc_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   call_disc_ind_ptr->call_type = GET_CALL_TYPE(call_id);         
   call_disc_ind_ptr->cause = cause;
   
   if (diagnostic != 0)
   {
       call_disc_ind_ptr->is_diagnostic_present = KAL_TRUE; 
       call_disc_ind_ptr->diagnostic = diagnostic;
   }

   
   
   csmcc_send_ilm(call_disc_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DISC_IND, 
                  MOD_L4C,
                  NULL);
                     
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_simple_disc_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_rel_ind
* DESCRIPTION                                                           
*   This procedure is used to send call release indication to L4C
*
* CALLS  
*	csmcc_send_l4c_rel_ind(kal_uint8 call_id,
*                              kal_uint16 cause, kal_uint8 diagnostic)
* PARAMETERS
*	call_id		IN	first variable, used as input
*	cause		IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_rel_ind(kal_uint8 call_id,
                                        kal_uint16 cause,
                                        kal_uint8 diagnostic)
                                          
{
   l4ccsm_cc_call_rel_ind_struct *call_rel_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_rel_ind_ptr, 
                              l4ccsm_cc_call_rel_ind_struct) 
                  
   call_rel_ind_ptr->call_id = call_id;
   
   /* this is indication, so source id in call context is used */
   call_rel_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   call_rel_ind_ptr->call_type = GET_CALL_TYPE(call_id);
   #ifdef __AOC_SUPPORT__
   call_rel_ind_ptr->ccm = CALL_DATA(call_id, ccm_per_call);
   #endif
   
   if(cause != CSMCC_NO_CAUSE)
   {
      call_rel_ind_ptr->cause_present = KAL_TRUE;
      call_rel_ind_ptr->cause = cause;
   }
   if (diagnostic != 0)
   {
      call_rel_ind_ptr->is_diagnostic_present = KAL_TRUE; 
      call_rel_ind_ptr->diagnostic = diagnostic;
   }
   
   csmcc_send_ilm(call_rel_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_REL_IND, 
                  MOD_L4C,
                  NULL);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_rel_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_cug_info_pack
* DESCRIPTION                                                           
*   This procedure is used to pack cug information into facility in case
*   of sending MO call setup request to CC.
*
* CALLS  
*	csmcc_cug_info_pack(mncc_facility_struct *fac_ptr,
*                           csmcc_cug_param_struct *cug_info_ptr)
*
* PARAMETERS
*	*fac_ptr	OUT	first variable, used as out
*       *cug_info_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_cug_info_pack(mncc_facility_struct *fac_ptr,
                                     csmcc_cug_param_struct *cug_param_ptr)
{
   CSMCC_PTR_G_TO_L
   ForwardCUG_InfoArg *cuga_ptr;
   Component* comp_ptr;
   kal_uint8 packed_len;
   kal_uint8 *pun_buff;
   
   if(cug_param_ptr->cug_index == CSMCC_CUG_NO_INDEX
      && cug_param_ptr->cug_suppress == CSMCC_CUG_NO_SUPPRESS_INFO)
   {
      return CSMCC_ERROR;
   }

   cuga_ptr = (ForwardCUG_InfoArg*)get_ctrl_buffer(256);
   mcd_pseudo_alloc(MCD_FORWARDCUG_INFOARG, (kal_uint32*)cuga_ptr, 256);

   if(cug_param_ptr->cug_index == CSMCC_CUG_NO_INDEX)
   {
      cuga_ptr->cug_IndexOpt = KAL_FALSE;
   }
   else
   {
      cuga_ptr->cug_IndexOpt = KAL_TRUE;
      cuga_ptr->cug_Index->value = cug_param_ptr->cug_index;
   }
      
   switch(cug_param_ptr->cug_suppress)
   {
      case CSMCC_CUG_NO_SUPPRESS_INFO:
         cuga_ptr->suppressPrefCUGOpt = KAL_FALSE;
         cuga_ptr->suppressOAOpt = KAL_FALSE;
         break;
      case CSMCC_CUG_SUPPRESS_OA:
         cuga_ptr->suppressPrefCUGOpt = KAL_FALSE;
         cuga_ptr->suppressOAOpt = KAL_TRUE;
         break;         
      case CSMCC_CUG_SUPPRESS_PREF_CUG:
         cuga_ptr->suppressPrefCUGOpt = KAL_TRUE;
         cuga_ptr->suppressOAOpt = KAL_FALSE;
         break;         
      case CSMCC_CUG_SUPPRESS_OA_AND_PREF_CUG:
         cuga_ptr->suppressPrefCUGOpt = KAL_TRUE;
         cuga_ptr->suppressOAOpt = KAL_TRUE;
         break;         
   }

   pun_buff = get_ctrl_buffer(256);   
   packed_len = cc_ss_arg_pack(MCD_FORWARDCUG_INFOARG, pun_buff,
                               256, (kal_uint8*)cuga_ptr);
   
   fac_ptr->num_of_components = 1;
   
   cc_ss_comp_new(&(fac_ptr->component[0]), SS_COMP_INV, 
                  CSMCC_PTR->inv_id_count, (kal_uint8*)pun_buff, packed_len);
               
   comp_ptr = fac_ptr->component[0];               
   comp_ptr->invoke->localValueOpt = KAL_TRUE;
   comp_ptr->invoke->localValue = SS_OP_FORWARDCUG_INFO;
   
   free_ctrl_buffer(cuga_ptr);
   free_ctrl_buffer(pun_buff);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_cug_info_pack */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_setup_req
* DESCRIPTION                                                           
*   This procedure is used to send call setup request to CC.
*
* CALLS  
*	csmcc_send_cc_setup_req(kal_uint8 call_id) 
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*   clir_info   IN  second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_setup_req(kal_uint8 call_id)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_setup_req_struct *setup_req_ptr;
   csmcc_call_context_struct *call_context_ptr;
   call_context_ptr = &(CALL_ENTRY(call_id));

   CSMCC_CONSTRUCT_LOCAL_PARA(setup_req_ptr, 
                              mncc_setup_req_struct)
   
   /* mtk01602, 070610: TS 22.024 v5.0.0 Sec. 4.2.1, CCM shall hold the value 
      of the last call AOC, until the initiation of an outgoing call or acceptance 
      of an incoming call, at which point it shall be reset to zero.*/
#ifdef __AOC_SUPPORT__
   if(csmcc_is_the_only_call(call_id) == KAL_TRUE)	
    	CSMCC_PTR->last_ccm = 0;   
#endif/*__AOC_SUPPORT__*/ 
   /* call id */
   setup_req_ptr->call_id = call_id;   
#ifdef __EMLPP_SUPPORT__   
   /* call priority */
   setup_req_ptr->call_priority = call_context_ptr->call_priority;
#endif 
   if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
   {
       setup_req_ptr->is_emergency_call = KAL_TRUE;
   }

#if defined(__ECALL_SUPPORT__)
    if (call_id == CSMCC_PTR->csmcc_ecall_id)
    {
        setup_req_ptr->is_ecall = KAL_TRUE;
        setup_req_ptr->ecall_type = CSMCC_PTR->ecall_type;
    }
#endif

   /* clir suppression or invocation */
   switch(call_context_ptr->clir_info)
   {
      case CSMCC_INVALID_CLIR_INFO:
         setup_req_ptr->clir_suppression = CSMCC_KAL_U_ZERO;
         setup_req_ptr->clir_invocation = CSMCC_KAL_U_ZERO;
         break;
      case CSMCC_CLIR_INVOCATION:
         setup_req_ptr->clir_suppression = CSMCC_KAL_U_ZERO;
         setup_req_ptr->clir_invocation = CSMCC_KAL_U_ONE;
         break;
      case CSMCC_CLIR_SUPPRESSION:
         setup_req_ptr->clir_suppression = CSMCC_KAL_U_ONE;
         setup_req_ptr->clir_invocation = CSMCC_KAL_U_ZERO;
         break;
      default:
         /* invalid value range */
         break;
   }
   
   /* BC1 */
   setup_req_ptr->bc1P = KAL_TRUE;
   csmcc_form_peer_bc(&(setup_req_ptr->bc1), 
                      &(CSMCC_PTR->nego_bc.bc1));
                      
   /* LLC1 if ITC of BC1 is UDI */
   if(CSMCC_PTR->nego_bc.bc1.itc == CSMCC_ITC_UDI)
   {
      csmcc_llc_struct llc;
      kal_mem_set(&llc, 0, sizeof(csmcc_llc_struct));
      
      setup_req_ptr->llc1P = KAL_TRUE;
#ifdef __VIDEO_CALL_SUPPORT__
      if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)      
	    csmcc_fill_video_call_llc(&llc, &(CSMCC_PTR->nego_bc.bc1));      	
      else	
#endif /*__VIDEO_CALL_SUPPORT__*/		
      csmcc_fill_llc(&llc, &(CSMCC_PTR->nego_bc.bc1));
      csmcc_form_peer_llc(&(setup_req_ptr->llc1), &llc);
   }                            

   /* BC2 */
   if(CSMCC_PTR->nego_bc.bc2_present == KAL_TRUE)
   {
      setup_req_ptr->bc2P = KAL_TRUE;

      csmcc_form_peer_bc(&(setup_req_ptr->bc2), 
                         &(CSMCC_PTR->nego_bc.bc2));
                         
      /* LLC1 if ITC of BC2 is UDI */
      if(CSMCC_PTR->nego_bc.bc2.itc == CSMCC_ITC_UDI)
      {
         csmcc_llc_struct llc;
         kal_mem_set(&llc, 0, sizeof(csmcc_llc_struct));
      
         setup_req_ptr->llc2P = KAL_TRUE;
         csmcc_fill_llc(&llc, &(CSMCC_PTR->nego_bc.bc2));
         csmcc_form_peer_llc(&(setup_req_ptr->llc2), &llc);
      }                                      
   }
   
   /* dual BC present */
   if(CSMCC_PTR->nego_bc.repeat_present == KAL_TRUE)
   {
      /* repeat bc indication */
      setup_req_ptr->bc_repeat_indP = KAL_TRUE;
      setup_req_ptr->bc_repeat_ind.repeat_indication = 
                       CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication;
                       
      /* repeat llc indication */
      if(setup_req_ptr->llc1P == KAL_TRUE
         || setup_req_ptr->llc2P == KAL_TRUE)
      {         
         setup_req_ptr->llc_repeat_indP = KAL_TRUE;
         setup_req_ptr->llc_repeat_ind.repeat_indication =          
            setup_req_ptr->bc_repeat_ind.repeat_indication;
            
         /* if no low layer compatibility specification applies for one of
            the two call modes, the corresponding llc IE shall indicate 
            "not applicable". "not applicable" means that value part is empty */
         setup_req_ptr->llc1P = KAL_TRUE;
         setup_req_ptr->llc2P = KAL_TRUE;
      }
   }
   
   /* called number */
   setup_req_ptr->called_numP = KAL_TRUE;
   setup_req_ptr->called_num = call_context_ptr->number;
   
#ifdef __SUBADDR_SUPPORT__
   if(call_context_ptr->sub_addr_present == KAL_TRUE)
   {
      /* called sub addr */
      setup_req_ptr->called_sub_addrP = KAL_TRUE;
      setup_req_ptr->called_sub_addr = call_context_ptr->sub_addr;
   }
#endif 
                            
   /* CUG information */
   if(call_context_ptr->cug_info == KAL_TRUE
      || CSMCC_PTR->at_param.cug_param.cug_temporary_mode 
	      == CSMCC_ENABLE_CUG_TEMPORARY_MODE)
   {
      if(csmcc_cug_info_pack(&(setup_req_ptr->simple_recall_alignment),
                             &(CSMCC_PTR->at_param.cug_param)) 
                             == CSMCC_NO_ERROR)
      {
      setup_req_ptr->simple_recall_alignmentP = KAL_TRUE;
      }
   }
   
   /* update inv info */
   if(setup_req_ptr->simple_recall_alignmentP == KAL_TRUE)
   {   
      CALL_DATA(call_id,inv_info.used) = KAL_TRUE;
      CALL_DATA(call_id,inv_info.inv_id) = CSMCC_PTR->inv_id_count;       
      CALL_DATA(call_id,inv_info.opcode) = SS_OP_FORWARDCUG_INFO;
      
      /* increase inv id count (<= 127) */
      CSMCC_PTR->inv_id_count = (CSMCC_PTR->inv_id_count+1)&0x7f;
      //CSMCC_PTR->inv_id_count++;
   }
   
   /*[MAUI_00740014] Rel4 onward, fill all supported UMTS codecs in Supported Codec List IE*/
#ifdef __REL4__
   if(CSMCC_PTR->rat_mode != RAT_NONE)
   {
       /*[MAUI_01711406] Supported Codec List shall only be filled in speech call*/
       if((CALL_DATA(call_id, bc[0]) == CSMCC_VOICE_CALL) 
	  || (CALL_DATA(call_id, bc[0]) == CSMCC_AUX_VOICE_CALL)
	  || (CALL_DATA(call_id, bc[1]) == CSMCC_VOICE_CALL)
	  || (CALL_DATA(call_id, bc[1]) == CSMCC_AUX_VOICE_CALL))
       {
           setup_req_ptr->supported_codecP = KAL_FALSE;
   	    csmcc_form_peer_supported_codec(&(setup_req_ptr->supported_codec)); 
	    if(setup_req_ptr->supported_codec.no_value > 0)
	    {
                setup_req_ptr->supported_codecP = KAL_TRUE;
	    }	
       }
   }
#endif /* (__REL4__)*/
   
   csmcc_send_ilm(setup_req_ptr, 
                  MSG_ID_MNCC_SETUP_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_setup_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_emergency_setup_req
* DESCRIPTION                                                           
*   This procedure is used to send emergency call setup request to CC.
*
* CALLS  
*	csmcc_send_cc_emergency_setup_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_emergency_setup_req(kal_uint8 call_id)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_setup_req_struct *setup_req_ptr;
   csmcc_call_context_struct *call_context_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(setup_req_ptr, 
                              mncc_setup_req_struct) 
   
    /* mtk01602, 070610: TS 22.024 v5.0.0 Sec. 4.2.1, CCM shall hold the value 
      of the last call AOC, until the initiation of an outgoing call or acceptance 
      of an incoming call, at which point it shall be reset to zero.*/
#ifdef __AOC_SUPPORT__
   if(csmcc_is_the_only_call(call_id) == KAL_TRUE)	
    	CSMCC_PTR->last_ccm = 0;   
#endif/*__AOC_SUPPORT__*/  
   call_context_ptr = &(CALL_ENTRY(call_id));
   
   /* fill call id */
   setup_req_ptr->call_id = call_id;   
   
#ifdef __EMLPP_SUPPORT__
   /* fill call priority */
   setup_req_ptr->call_priority = call_context_ptr->call_priority;
#endif 
   if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
   {
       setup_req_ptr->is_emergency_call = KAL_TRUE;
   }
#if defined(__ECALL_SUPPORT__)
   if (call_id == CSMCC_PTR->csmcc_ecall_id)
   {
       setup_req_ptr->ecall_type = CSMCC_PTR->ecall_type;
       setup_req_ptr->is_ecall = KAL_TRUE; 
   }
#endif
   /*Cosine: R4 new feature, Emergency Call Category addition*/
   #ifdef __REL4__
   /* 24.008 10.5.135 : Currently only define 5 bits to represent 
   Emergency Service Category, therefore the value should not exceed 0x20 */
   if((call_context_ptr->service_category > CSMCC_CATEGORY_UNSPECIFIED) 
   	&& call_context_ptr->service_category < CSMCC_CATEGORY_RESERVED)
   {
       setup_req_ptr->service_categoryP = KAL_TRUE;
       setup_req_ptr->service_category = call_context_ptr->service_category;
   }
   #endif
   
   /* BC1 */
   setup_req_ptr->bc1P = KAL_TRUE;   
   csmcc_form_peer_bc(&(setup_req_ptr->bc1), 
                      &(CSMCC_PTR->nego_bc.bc1));
   
/*[MAUI_00740014] Rel4 onward, fill all supported UMTS codecs in Supported Codec List IE*/
#ifdef __REL4__
   if(CSMCC_PTR->rat_mode != RAT_NONE)
   {
       setup_req_ptr->supported_codecP = KAL_FALSE;

       /* [MAUI_01711406] Supported Codec List shall only be filled in speech call
        * Emergency call is always speech call, so supported codec shall be carried
        */
       csmcc_form_peer_supported_codec(&(setup_req_ptr->supported_codec)); 
       if(setup_req_ptr->supported_codec.no_value > 0)
       {
           setup_req_ptr->supported_codecP = KAL_TRUE;
       }
   }
#endif /* (__REL4__)*/
   
   csmcc_send_ilm(setup_req_ptr, 
                  MSG_ID_MNCC_SETUP_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_emergency_setup_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_alert_ind
* DESCRIPTION                                                           
*   This procedure is used to send call alert indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_alert_ind(mncc_alert_ind_struct *alert_ind_ptr)
*
* PARAMETERS
*	*alert_ind_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_alert_ind(mncc_alert_ind_struct* alert_ind_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   l4ccsm_cc_call_alert_ind_struct *call_alert_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_alert_ind_ptr, 
                              l4ccsm_cc_call_alert_ind_struct) 
      
   call_id = alert_ind_ptr->call_id;
   call_alert_ind_ptr->call_id = call_id;
   call_alert_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   /* with in-band tone */
    if( CSMCC_PTR->attach_status == CSMCC_SPEECH_ON
      || ( GET_CALL_TYPE(call_id) != CSMCC_VOICE_CALL
#ifdef __VIDEO_CALL_SUPPORT__
             && GET_CALL_TYPE(call_id)!= CSMCC_VIDEO_CALL
#endif 
             && GET_CALL_TYPE(call_id) != CSMCC_AUX_VOICE_CALL))
   {
      /* user connection attached */
      call_alert_ind_ptr->alert = KAL_FALSE;
   }
   else
   {
      /* user connection not attached, so MS alert itself */
      call_alert_ind_ptr->alert = KAL_TRUE;
   }
   
   csmcc_send_ilm(call_alert_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_ALERT_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_alert_ind */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_auto_dtmf_complete_ind
* DESCRIPTION                                                           
*   This procedure is used to send completing auto dtmf to L4C.
*
* CALLS  
*	csmcc_send_l4c_auto_dtmf_complete_ind(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_auto_dtmf_complete_ind(kal_uint8 call_id)
{
   
   l4ccsm_cc_auto_dtmf_complete_ind_struct *auto_dtmf_complete_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(auto_dtmf_complete_ind_ptr, 
                              l4ccsm_cc_auto_dtmf_complete_ind_struct) 
               
   auto_dtmf_complete_ind_ptr->call_id = call_id;
   auto_dtmf_complete_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   csmcc_send_ilm(auto_dtmf_complete_ind_ptr, 
                  MSG_ID_L4CCSM_CC_AUTO_DTMF_COMPLETE_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_auto_dtmf_complete_ind */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_call_conf_req
* DESCRIPTION                                                           
*   This procedure is used to send call confirm to CC with negotiated 
*   bearer capability. If this is a waiting call, the cause shall be 
*   "user busy"
*
* CALLS  
*	csmcc_send_cc_call_conf_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_call_conf_req(kal_uint8 call_id)
{   
   CSMCC_PTR_G_TO_L
   mncc_call_conf_req_struct *call_conf_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_conf_req_ptr, 
                              mncc_call_conf_req_struct) 
                  
   call_conf_req_ptr->call_id = call_id;
   
   call_conf_req_ptr->ti = CALL_DATA(call_id, ti);
   
   if(CSMCC_PTR->nego_bc.repeat_present == KAL_TRUE)
   {
      call_conf_req_ptr->bc_repeat_indP = KAL_TRUE;
      
      call_conf_req_ptr->bc_repeat_ind.repeat_indication = 
             CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication;
   }
   
   if(CSMCC_PTR->nego_bc.bc1_present == KAL_TRUE)
   {
      call_conf_req_ptr->bc1P = KAL_TRUE;
      
      csmcc_form_peer_bc(&(call_conf_req_ptr->bc1),
                         &(CSMCC_PTR->nego_bc.bc1));
   }
      
   if(CSMCC_PTR->nego_bc.bc2_present == KAL_TRUE)
   {
      call_conf_req_ptr->bc2P = KAL_TRUE;

      csmcc_form_peer_bc(&(call_conf_req_ptr->bc2),
                         &(CSMCC_PTR->nego_bc.bc2));
      
   }  
   
   if(CALL_DATA(call_id,cw_flag) == KAL_TRUE)
   {
      call_conf_req_ptr->causeP = KAL_TRUE;
      call_conf_req_ptr->cause.cause_value = CM_USER_BUSY;
   }
   
   /*[MAUI_00740014] Rel4 onward, fill all supported UMTS codecs in Supported Codec List IE*/
#ifdef __REL4__
   if(CSMCC_PTR->rat_mode != RAT_NONE)
   {
       call_conf_req_ptr->supported_codecP = KAL_FALSE;

       /*[MAUI_01711406] Supported Codec List shall only be filled in speech call*/
       if((CALL_DATA(call_id, bc[0]) == CSMCC_VOICE_CALL) 
	   || (CALL_DATA(call_id, bc[0]) == CSMCC_AUX_VOICE_CALL)
	   || (CALL_DATA(call_id, bc[1]) == CSMCC_VOICE_CALL)
	   || (CALL_DATA(call_id, bc[1]) == CSMCC_AUX_VOICE_CALL))
       {
   	    csmcc_form_peer_supported_codec(&(call_conf_req_ptr->supported_codec)); 
	    if(call_conf_req_ptr->supported_codec.no_value > 0)
	    {
               call_conf_req_ptr->supported_codecP = KAL_TRUE;
	    }
       }
   }
#endif /* (__REL4__)*/
   
   csmcc_send_ilm(call_conf_req_ptr, 
                  MSG_ID_MNCC_CALL_CONF_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_cc_call_conf_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_setup_ind
* DESCRIPTION                                                           
*   This procedure is used to send MT call seutp indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_call_setup_ind(kal_uint8 call_id,
*                                     mncc_setup_ind_struct *setup_ind_ptr)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	*setup_ind_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_setup_ind(kal_uint8 call_id, mncc_setup_ind_struct *setup_ind_ptr)
{
   kal_uint8 cur_call_type;   
   l4ccsm_cc_call_setup_ind_struct *call_setup_ind_ptr;
   kal_uint8 presentation_indicator = 0;
   kal_uint8 screening_indicator = 0;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(call_setup_ind_ptr, 
                              l4ccsm_cc_call_setup_ind_struct) 
   
   call_setup_ind_ptr->call_id = call_id;
      
   if(setup_ind_ptr->signalP == KAL_TRUE)
   {
      call_setup_ind_ptr->signal_value_present = KAL_TRUE;
      
      call_setup_ind_ptr->signal_value = setup_ind_ptr->signal.signal_value;
   }

   if(setup_ind_ptr->alertP == KAL_TRUE)
   {
      call_setup_ind_ptr->alerting_pattern_present = KAL_TRUE;
      
      call_setup_ind_ptr->alerting_pattern = setup_ind_ptr->alert.pattern;
   }
   
   call_setup_ind_ptr->cw_flag = CALL_DATA(call_id,cw_flag);   
   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   call_setup_ind_ptr->call_type = CALL_DATA(call_id,bc[cur_call_type]);
            
   /* calling number */
   if(setup_ind_ptr->calling_numP == KAL_TRUE)
   {
      call_setup_ind_ptr->calling_number_present = KAL_TRUE;
      
      if(setup_ind_ptr->calling_num.addr_ind_present)
      {
         /* Ripple: AT cmd (AT+CLIP) needs this information. 2004.04.06 */
         call_setup_ind_ptr->calling_number.addr_ind_present = KAL_TRUE;
         call_setup_ind_ptr->calling_number.addr_ind = setup_ind_ptr->calling_num.addr_ind;
         
         presentation_indicator = (setup_ind_ptr->calling_num.addr_ind & 0x60);
	  screening_indicator =	(setup_ind_ptr->calling_num.addr_ind & 0x03);		 
      }
      
      /* if not Presentation restricted and Number not available due to interworking */
      //if(presentation_indicator != CC_PRESENTATION_RESTRICTED
      //   && presentation_indicator != CC_NUMBER_UNAVAILABLE)
      if(presentation_indicator == CC_PRESENTATION_ALLOWED ||
	(presentation_indicator == CC_PRESENTATION_RESTRICTED && screening_indicator == CC_SCR_NW))     
      {
         call_setup_ind_ptr->calling_number.addr = setup_ind_ptr->calling_num.addr;
      }
      else 
      {
         /* L4C need 0xff to recoginize ending */
         call_setup_ind_ptr->calling_number.addr.addr_bcd[1]=0xff;
      }
   }
#ifdef __SUBADDR_SUPPORT__
   if(setup_ind_ptr->calling_sub_addrP == KAL_TRUE)
   {
      call_setup_ind_ptr->calling_sub_addr_present = KAL_TRUE;
      call_setup_ind_ptr->calling_sub_addr = setup_ind_ptr->calling_sub_addr;
   }
#endif 
   if(setup_ind_ptr->redirecting_numP == KAL_TRUE)
   {
      call_setup_ind_ptr->redirecting_number_present = KAL_TRUE;
      call_setup_ind_ptr->redirecting_number = setup_ind_ptr->redirecting_num;
   }
#ifdef __SUBADDR_SUPPORT__
   if(setup_ind_ptr->redirecting_sub_addrP == KAL_TRUE)
   {
      call_setup_ind_ptr->redirecting_sub_addr_present = KAL_TRUE;
      call_setup_ind_ptr->redirecting_sub_addr = setup_ind_ptr->redirecting_sub_addr;
   }
#endif
#ifdef __EMLPP_SUPPORT__  
   if(setup_ind_ptr->priorityP == KAL_TRUE)
   {
      call_setup_ind_ptr->call_priority_present = KAL_TRUE;
      call_setup_ind_ptr->call_priority = setup_ind_ptr->priority.call_priority;
   }
#else 
   call_setup_ind_ptr->call_priority_present = KAL_FALSE;
#endif 
   
   if(setup_ind_ptr->cause_of_no_cliP == KAL_TRUE)
   {
      call_setup_ind_ptr->no_cli_cause_present = KAL_TRUE;
      
      call_setup_ind_ptr->no_cli_cause = 
                 setup_ind_ptr->cause_of_no_cli.cause_of_no_CLI;
   }
   
   csmcc_send_ilm(call_setup_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_SETUP_IND, 
                  MOD_L4C,
                  NULL);

   if(setup_ind_ptr->facilityP == KAL_TRUE)
   {
      /* NotifySS invoke(CD, CUG-index, CNAP), uus1, uus2, uus3 invoke */
      csmcc_peer_fac_ie_hdlr(call_id, &(setup_ind_ptr->facility));
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_call_setup_ind */


#ifdef __AUTO_CALL_REJECTION__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_present_ind
* DESCRIPTION                                                           
*   This procedure is used to send MT call seutp indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_call_present_ind(kal_uint8 call_id,
*                                     mncc_setup_ind_struct *setup_ind_ptr)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	*setup_ind_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_present_ind(kal_uint8 call_id, mncc_setup_ind_struct *setup_ind_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 cur_call_type;   
   l4ccsm_cc_call_present_ind_struct *call_present_ind_ptr;
   kal_uint8 presentation_indicator = 0;
   kal_uint8 screening_indicator = 0;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(call_present_ind_ptr, 
                              l4ccsm_cc_call_present_ind_struct) 
   
   call_present_ind_ptr->call_id = call_id;
      
   if(setup_ind_ptr->signalP == KAL_TRUE)
   {
      call_present_ind_ptr->signal_value_present = KAL_TRUE;
      
      call_present_ind_ptr->signal_value = setup_ind_ptr->signal.signal_value;
   }

   if(setup_ind_ptr->alertP == KAL_TRUE)
   {
      call_present_ind_ptr->alerting_pattern_present = KAL_TRUE;
      
      call_present_ind_ptr->alerting_pattern = setup_ind_ptr->alert.pattern;
   }
   
   call_present_ind_ptr->cw_flag = CALL_DATA(call_id,cw_flag);   
   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   call_present_ind_ptr->call_type = CALL_DATA(call_id,bc[cur_call_type]);
            
   /* calling number */
   if(setup_ind_ptr->calling_numP == KAL_TRUE)
   {
      call_present_ind_ptr->calling_number_present = KAL_TRUE;
      
      if(setup_ind_ptr->calling_num.addr_ind_present)
      {
		/* Ripple: AT cmd (AT+CLIP) needs this information. 2004.04.06 */
		call_present_ind_ptr->calling_number.addr_ind_present = KAL_TRUE;
		call_present_ind_ptr->calling_number.addr_ind = setup_ind_ptr->calling_num.addr_ind;

		presentation_indicator = (setup_ind_ptr->calling_num.addr_ind & 0x60);
		screening_indicator =	(setup_ind_ptr->calling_num.addr_ind & 0x03);		 
      }
      
      if(presentation_indicator == CC_PRESENTATION_ALLOWED ||
        (presentation_indicator == CC_PRESENTATION_RESTRICTED && screening_indicator == CC_SCR_NW))     
      {
         call_present_ind_ptr->calling_number.addr = setup_ind_ptr->calling_num.addr;
      }
      else 
      {
         /* L4C need 0xff to recoginize ending */
         call_present_ind_ptr->calling_number.addr.addr_bcd[1]=0xff;
      }
   }
#ifdef __SUBADDR_SUPPORT__
   if(setup_ind_ptr->calling_sub_addrP == KAL_TRUE)
   {
      call_present_ind_ptr->calling_sub_addr_present = KAL_TRUE;
      call_present_ind_ptr->calling_sub_addr = setup_ind_ptr->calling_sub_addr;
   }
#endif
   if(setup_ind_ptr->redirecting_numP == KAL_TRUE)
   {
      call_present_ind_ptr->redirecting_number_present = KAL_TRUE;
      call_present_ind_ptr->redirecting_number = setup_ind_ptr->redirecting_num;
   }
#ifdef __SUBADDR_SUPPORT__
   if(setup_ind_ptr->redirecting_sub_addrP == KAL_TRUE)
   {
      call_present_ind_ptr->redirecting_sub_addr_present = KAL_TRUE;
      call_present_ind_ptr->redirecting_sub_addr = setup_ind_ptr->redirecting_sub_addr;
   }
#endif
#ifdef __EMLPP_SUPPORT__
   if(setup_ind_ptr->priorityP == KAL_TRUE)
   {
      call_present_ind_ptr->call_priority_present = KAL_TRUE;
      call_present_ind_ptr->call_priority = setup_ind_ptr->priority.call_priority;
   }
#endif 
   
   if(setup_ind_ptr->cause_of_no_cliP == KAL_TRUE)
   {
      call_present_ind_ptr->no_cli_cause_present = KAL_TRUE;
      
      call_present_ind_ptr->no_cli_cause = 
                 setup_ind_ptr->cause_of_no_cli.cause_of_no_CLI;
   }

   CSMCC_PTR->seq_num++; //MAUI_01964704
   call_present_ind_ptr->seq_num = CSMCC_PTR->seq_num;

   /* MAUI_01294662 [CC][Revise] Auto call rejection discard call release ind in PRESENT_IND state */
   SET_CALL_STATE(call_id, CSMCC_CALL_PRESENT_IND)

   csmcc_send_ilm(call_present_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_PRESENT_IND, 
                  MOD_L4C,
                  NULL);

   //if(setup_ind_ptr->facilityP == KAL_TRUE)
   //{
      /* NotifySS invoke(CD, CUG-index, CNAP), uus1, uus2, uus3 invoke */
      //csmcc_peer_fac_ie_hdlr(call_id, &(setup_ind_ptr->facility));
   //}
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_call_present_ind */
#endif


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_setup_res
* DESCRIPTION                                                           
*   This procedure is used to accept MT call by sending setup response to CC.
*
* CALLS  
*	csmcc_send_cc_setup_res(kal_uint8 call_id)

* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_setup_res(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   mncc_setup_res_struct *setup_res_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(setup_res_ptr, 
                              mncc_setup_res_struct) 
      
   /* mtk01602, 070610: TS 22.024 v5.0.0 Sec. 4.2.1, CCM shall hold the value 
      of the last call AOC, until the initiation of an outgoing call or acceptance 
      of an incoming call, at which point it shall be reset to zero.*/
#ifdef __AOC_SUPPORT__
   if(csmcc_is_the_only_call(call_id) == KAL_TRUE)	
    	CSMCC_PTR->last_ccm = 0;   
#endif/*__AOC_SUPPORT__*/
   
   setup_res_ptr->call_id = call_id;
   setup_res_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_send_ilm(setup_res_ptr, 
                  MSG_ID_MNCC_SETUP_RES, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

}/* end of csmcc_send_cc_setup_res */   

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_alert_req
* DESCRIPTION                                                           
*   This procedure is used to send alert request to CC.
*
* CALLS  
*	csmcc_send_cc_alert_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_alert_req(kal_uint8 call_id)
{
   mncc_alert_req_struct *alert_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(alert_req_ptr, 
                              mncc_alert_req_struct) 
      
   alert_req_ptr->call_id = call_id;
   alert_req_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_send_ilm(alert_req_ptr, 
                  MSG_ID_MNCC_ALERT_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

}/* end of csmcc_send_cc_alert_req */   

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_preempt_ind
* DESCRIPTION                                                           
*   This procedure is used to send call preemption indication to L4c.
*
* CALLS  
*	csmcc_send_l4c_call_preempt_ind(kal_uint8 call_id, 
*                                       csmcc_preempt_type_enum preempt_type)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	preempt_type 	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_preempt_ind(kal_uint8 call_id, csmcc_preempt_type_enum preempt_type)
{
   l4ccsm_cc_call_preempt_ind_struct *call_preempt_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_preempt_ind_ptr, 
                              l4ccsm_cc_call_preempt_ind_struct) 
      
   call_preempt_ind_ptr->call_id = call_id;
   call_preempt_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   call_preempt_ind_ptr->preempt_type = preempt_type;
   
   csmcc_send_ilm(call_preempt_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_PREEMPT_IND, 
                  MOD_L4C,
                  NULL);

   return CSMCC_NO_ERROR;
} /* end of csmcc_send_l4c_call_preempt_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_connect_ind
* DESCRIPTION                                                           
*   This procedure is used to send call connect indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_connect_ind(mncc_setup_cnf_struct *setup_cnf_ptr)
*
* PARAMETERS
*	*setup_cnf_ptr 	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_connect_ind(mncc_setup_cnf_struct *setup_cnf_ptr)
{
   kal_uint8 call_id;   
   l4ccsm_cc_call_connect_ind_struct *call_connect_ind_ptr;
   kal_uint8 presentation_indicator = 0;
   kal_uint8 last_bcd;
   kal_uint8 screening_indicator = 0;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_connect_ind_ptr, 
                              l4ccsm_cc_call_connect_ind_struct) 
                  
   call_id = setup_cnf_ptr->call_id;  
   
   call_connect_ind_ptr->call_id = call_id;
   call_connect_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   call_connect_ind_ptr->call_type = GET_CALL_TYPE(call_id);
   
   if(setup_cnf_ptr->connected_numP == KAL_TRUE)   
   {
      if(setup_cnf_ptr->connected_num.addr_ind_present)
      {
         presentation_indicator = (setup_cnf_ptr->connected_num.addr_ind & 0x60);
	  screening_indicator = (setup_cnf_ptr->connected_num.addr_ind & 0x03);   
		 
      }
      
      /* if not Presentation restricted and Number not available due to interworking */
      //if(presentation_indicator != CC_PRESENTATION_RESTRICTED
      //   && presentation_indicator != CC_NUMBER_UNAVAILABLE)
      if(presentation_indicator == CC_PRESENTATION_ALLOWED ||
	  (presentation_indicator == CC_PRESENTATION_RESTRICTED && screening_indicator == CC_SCR_NW))      
      {
         call_connect_ind_ptr->connected_number_present = KAL_TRUE;
         call_connect_ind_ptr->connected_number = setup_cnf_ptr->connected_num;
      }
   }
   else
   {
      call_connect_ind_ptr->connected_number_present = KAL_TRUE;
      if (CALL_DATA(call_id,dtmf.digit) == NULL)   
      	{
      call_connect_ind_ptr->connected_number.addr = CALL_DATA(call_id, number);
   }
      else //mtk00924 2005_0420 : if "p" or "w" included in number string, the return length should include extended part ex: p1234.
      	{     
              last_bcd=CALL_DATA(call_id, number.addr_length)-1;
      	      CALL_DATA(call_id,number.addr_length)+=((CALL_DATA(call_id,dtmf.count)+1)>>1); 

              if((CALL_DATA(call_id, number.addr_bcd[last_bcd]) & 0xF0) == 0xF0)
              {
                   if(CALL_DATA(call_id, dtmf.digit[0]) == 12) /*p*/
	              {
                 	CALL_DATA(call_id, number.addr_bcd[last_bcd])&=0xCF;
	              }
                   else /*w*/
        	      {
 	                CALL_DATA(call_id, number.addr_bcd[last_bcd])&=0xDF;
	              }
               }
             call_connect_ind_ptr->connected_number.addr = CALL_DATA(call_id, number);

       }
      //call_connect_ind_ptr->connected_number.addr = CALL_DATA(call_id, number);
   }
#ifdef __SUBADDR_SUPPORT__         
   if(setup_cnf_ptr->connected_sub_addrP == KAL_TRUE)
   {
      call_connect_ind_ptr->connected_sub_addr_present = KAL_TRUE;
      call_connect_ind_ptr->connected_sub_addr = setup_cnf_ptr->connected_sub_addr;
   }
#endif
   csmcc_send_ilm(call_connect_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_CONNECT_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_connect_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_accept_succ
* DESCRIPTION                                                           
*   This procedure is used to send accept call confirm to L4C.
*
* CALLS  
*	csmcc_send_l4c_accept_succ(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_accept_succ(kal_uint8 call_id)
{

   CSMCC_PTR_G_TO_L
   l4ccsm_cc_call_accept_cnf_struct *call_accept_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_accept_cnf_ptr, 
                              l4ccsm_cc_call_accept_cnf_struct) 
   
   call_accept_cnf_ptr->call_id = call_id;
   call_accept_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   call_accept_cnf_ptr->response = CSMCC_SUCCESS;
   
   csmcc_send_ilm(call_accept_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_ACCEPT_CNF, 
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(CSMCC_CALL_ACCEPT_REQ);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_accept_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_ccbs_est_res
* DESCRIPTION                                                           
*   This procedure is used to send cc establishment confirm to CC.
*
* CALLS  
*	csmcc_send_cc_ccbs_est_res(kal_uint8 call_id,
*                                  kal_uint16 cause)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	cause	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_ccbs_est_res(kal_uint8 call_id, kal_uint16 cause)
{
   CSMCC_PTR_G_TO_L
   mncc_ccbs_est_res_struct *ccbs_est_res_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(ccbs_est_res_ptr, 
                              mncc_ccbs_est_res_struct) 
      
   ccbs_est_res_ptr->call_id = call_id;
   ccbs_est_res_ptr->ti = CALL_DATA(call_id, ti);
   
   /* repeat bc indication, bc1, bc2 */
   if(CSMCC_PTR->nego_bc.repeat_present == KAL_TRUE)
   {
      ccbs_est_res_ptr->bc_repeat_indP = KAL_TRUE;
      ccbs_est_res_ptr->bc_repeat_ind.repeat_indication = 
                       CSMCC_PTR->nego_bc.bc_repeat_ind.repeat_indication;
   }

   ccbs_est_res_ptr->bc1P = KAL_TRUE;
       
   csmcc_form_peer_bc(&(ccbs_est_res_ptr->bc1), 
                      &(CSMCC_PTR->nego_bc.bc1));
   
   if(CSMCC_PTR->nego_bc.bc2_present == KAL_TRUE)
   {
      ccbs_est_res_ptr->bc2P = KAL_TRUE;

      csmcc_form_peer_bc(&(ccbs_est_res_ptr->bc2), 
                         &(CSMCC_PTR->nego_bc.bc2));

   }
   
/*[MAUI_00740014] Rel4 onward, fill all supported UMTS codecs in Supported Codec List IE*/
#ifdef __REL4__
   if(CSMCC_PTR->rat_mode != RAT_NONE)
   {
       ccbs_est_res_ptr->supported_codecP = KAL_FALSE;

       /*[MAUI_01711406] Supported Codec List shall only be filled in speech call*/
       if((CALL_DATA(call_id, bc[0]) == CSMCC_VOICE_CALL) 
	   || (CALL_DATA(call_id, bc[0]) == CSMCC_AUX_VOICE_CALL)
	   || (CALL_DATA(call_id, bc[1]) == CSMCC_VOICE_CALL)
	   || (CALL_DATA(call_id, bc[1]) == CSMCC_AUX_VOICE_CALL))
       {
   	    csmcc_form_peer_supported_codec(&(ccbs_est_res_ptr->supported_codec)); 
	    if(ccbs_est_res_ptr->supported_codec.no_value > 0)
	    {
               ccbs_est_res_ptr->supported_codecP = KAL_TRUE;
	    }
       }
   }
#endif /*(__REL4__)*/
   
   if(cause != CSMCC_KAL_U_ZERO )
   {
      /* cause present */
      ccbs_est_res_ptr->causeP = KAL_TRUE;
      ccbs_est_res_ptr->cause.cause_value = cause;
   }
   
   csmcc_send_ilm(ccbs_est_res_ptr, 
                  MSG_ID_MNCC_CCBS_EST_RES, 
                  MOD_CC,
                  NULL);
                  
   return CSMCC_NO_ERROR;
   
   
} /* end of csmcc_send_cc_ccbs_est_res */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_crss_succ
* DESCRIPTION                                                           
*   This procedure is used to send L4C call releated ss success to response 
*   the previous call releated ss request.
*
* CALLS  
*	csmcc_send_l4c_crss_succ(csmcc_req_enum crss_req)
*
* PARAMETERS
*	crss_req	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_crss_succ(csmcc_req_enum crss_req)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_cnf_struct *crss_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(crss_cnf_ptr, 
                              l4ccsm_cc_crss_cnf_struct) 
   
   crss_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   crss_cnf_ptr->response = CSMCC_SUCCESS;
   /*mtk01602, 070718*/
   crss_cnf_ptr->crss_req = CSMCC_PTR->crss_req;
   
   csmcc_send_ilm(crss_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CRSS_CNF, 
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(crss_req);
   /*mtk01602, 070718: reset crss_req_ptr*/
   CSMCC_PTR->crss_req = CSMCC_INVALID_CRSS_TYPE; 
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_crss_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_crss_fail
* DESCRIPTION                                                           
*   This procedure is used to send L4C call releated ss failure to response 
*   the previous call releated ss request.
*
* CALLS  
*	csmcc_send_l4c_crss_fail(kal_uint8 src_id,
*                                csmcc_req_enum crss_req, 
*                                kal_uint16 cause)
*
* PARAMETERS
*	src_ind		IN	first variable, used as input
*	crss_req	IN	second variable, used as input
*	cause		IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_crss_fail(kal_uint8 src_id, 
                                          csmcc_req_enum crss_req, 
                                          kal_uint16 cause)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_cnf_struct *crss_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(crss_cnf_ptr, 
                              l4ccsm_cc_crss_cnf_struct) 
      
   crss_cnf_ptr->src_id = src_id;
   crss_cnf_ptr->response = CSMCC_FAILURE;
   /*mtk01602, 070718*/
   crss_cnf_ptr->crss_req = CSMCC_PTR->crss_req;
   
   if(cause != CSMCC_NO_CAUSE)
   {
      crss_cnf_ptr->cause_present = KAL_TRUE;
      crss_cnf_ptr->cause = cause;
   }
   
   csmcc_send_ilm(crss_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CRSS_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(crss_req);
   /*mtk01602, 070718: reset crss_req_ptr*/
   CSMCC_PTR->crss_req = CSMCC_INVALID_CRSS_TYPE; 
                     
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_crss_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_crss_error
* DESCRIPTION                                                           
*   This procedure is used to send L4C call releated ss error to response 
*   the previous call releated ss request.
*
* CALLS  
*	csmcc_send_l4c_crss_error(kal_uint8 src_id,
*                                csmcc_req_enum crss_req, 
*                                kal_uint8 error_code)
*
* PARAMETERS
*	src_ind		IN	first variable, used as input
*	crss_req	IN	second variable, used as input
*	error_code	IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_crss_error(kal_uint8 src_id, csmcc_req_enum crss_req, kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_cnf_struct *crss_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(crss_cnf_ptr, 
                              l4ccsm_cc_crss_cnf_struct) 
      
   crss_cnf_ptr->src_id = src_id;
   crss_cnf_ptr->response = CSMCC_FAILURE;
   crss_cnf_ptr->cause_present = KAL_TRUE;
   crss_cnf_ptr->cause = CM_SS_ERR_START + error_code;
   crss_cnf_ptr->crss_req = CSMCC_PTR->crss_req;//mtk01602, 070718
   
   csmcc_send_ilm(crss_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CRSS_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(crss_req);
   /*mtk01602, 070718: reset crss_req_ptr*/
   CSMCC_PTR->crss_req = CSMCC_INVALID_CRSS_TYPE; 
                     
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_crss_error */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_crss_reject
* DESCRIPTION                                                           
*   This procedure is used to send L4C call releated ss reject to response 
*   the previous call releated ss request.
*
* CALLS  
*	csmcc_send_l4c_crss_reject(kal_uint8 src_id,
*                             csmcc_req_enum crss_req, 
*                             Reject *reject)
*
* PARAMETERS
*	src_ind		IN	first variable, used as input
*	crss_req	IN	second variable, used as input
*	reject		IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_crss_reject(kal_uint8 src_id, 
                                       csmcc_req_enum crss_req, 
                                       Reject *reject)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_cnf_struct *crss_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(crss_cnf_ptr, 
                              l4ccsm_cc_crss_cnf_struct) 
   
   crss_cnf_ptr->src_id = src_id;
   crss_cnf_ptr->response = CSMCC_FAILURE;
   crss_cnf_ptr->crss_req = CSMCC_PTR->crss_req;//mtk01602, 070718
   
   if(reject->generalProblemOpt)
   {
      crss_cnf_ptr->cause_present = KAL_TRUE;
      crss_cnf_ptr->cause = CM_SS_GENERALPROBLEM_START + (kal_uint16)reject->generalProblem->value;
   }
   else if(reject->invokeProblemOpt)
   {
      crss_cnf_ptr->cause_present = KAL_TRUE;
      crss_cnf_ptr->cause = CM_SS_INVOKEPROBLEM_START + (kal_uint16)reject->invokeProblem->value;
   }
   else if(reject->returnResultProblemOpt)
   {
      crss_cnf_ptr->cause_present = KAL_TRUE;
      crss_cnf_ptr->cause = CM_SS_RETURNRESULTPROBLEM_START + (kal_uint16)reject->returnResultProblem->value;
   }
   else if(reject->returnErrorProblemOpt)
   {
      crss_cnf_ptr->cause_present = KAL_TRUE;
      crss_cnf_ptr->cause = CM_SS_RETURNERRORPROBLEM_START + (kal_uint16)reject->returnErrorProblem->value;
   }
   
   csmcc_send_ilm(crss_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CRSS_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(crss_req);
   /*mtk01602, 070718: reset crss_req_ptr*/
   CSMCC_PTR->crss_req = CSMCC_INVALID_CRSS_TYPE; 
                     
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_crss_reject */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_accept_fail
* DESCRIPTION                                                           
*   This procedure is used to send L4C call accept failure.
*
* CALLS  
*	csmcc_send_l4c_accept_fail(kal_uint8 src_id,
*                                  kal_uint8 call_id, 
*                                  kal_uint16 cause)
*
* PARAMETERS
*	src_id	IN	first variable, used as input
*	call_id	IN	second variable, used as input
*	cause	IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_accept_fail(kal_uint8 src_id, 
                                            kal_uint8 call_id, 
                                            kal_uint16 cause)
{
   l4ccsm_cc_call_accept_cnf_struct *call_accept_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_accept_cnf_ptr, 
                              l4ccsm_cc_call_accept_cnf_struct) 
      
   call_accept_cnf_ptr->call_id = call_id;
   call_accept_cnf_ptr->src_id = src_id; 
   call_accept_cnf_ptr->response = CSMCC_FAILURE;

   if(cause != CSMCC_NO_CAUSE)
   {
      call_accept_cnf_ptr->cause_present = KAL_TRUE;
      call_accept_cnf_ptr->cause = cause;
   }
   
   csmcc_send_ilm(call_accept_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_ACCEPT_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_CALL_ACCEPT_REQ);                  

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_accept_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_rej_req
* DESCRIPTION                                                           
*   This procedure is used to send CC MT call reject request.
*
* CALLS  
*	csmcc_send_cc_rej_req(kal_uint8 ti, kal_uint16 cause)
*
* PARAMETERS
*	ti	IN	first variable, used as input
*	cause	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_rej_req(kal_uint8 ti,
                                       kal_uint16 cause)
{
   mncc_rej_req_struct *rej_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(rej_req_ptr, 
                              mncc_rej_req_struct) 
               
   rej_req_ptr->ti = ti;   
   rej_req_ptr->cause.cause_value = cause;

   csmcc_send_ilm(rej_req_ptr, 
                  MSG_ID_MNCC_REJ_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* csmcc_send_cc_rej_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_ccbs_rej_req
* DESCRIPTION                                                           
*   This procedure is used to send CC reject ccbs request.
*
* CALLS  
*	csmcc_send_cc_ccbs_rej_req(kal_uint8 call_id, kal_uint16 cause)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	cause	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_ccbs_rej_req(kal_uint8 call_id,
                                            kal_uint16 cause)
{
   mncc_ccbs_rej_req_struct *ccbs_rej_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(ccbs_rej_req_ptr, 
                              mncc_ccbs_rej_req_struct) 
               
   ccbs_rej_req_ptr->call_id = call_id;
   ccbs_rej_req_ptr->ti = CALL_DATA(call_id, ti);
   ccbs_rej_req_ptr->cause.cause_value = cause;

   csmcc_send_ilm(ccbs_rej_req_ptr, 
                  MSG_ID_MNCC_CCBS_REJ_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
} /* csmcc_send_cc_ccbs_rej_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_ccbs_setup_req
* DESCRIPTION                                                           
*   This procedure is used to send CC ccbs call setup request.
*
* CALLS  
*	csmcc_send_cc_ccbs_setup_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_ccbs_setup_req(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   mncc_ccbs_setup_req_struct *ccbs_setup_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(ccbs_setup_req_ptr, 
                              mncc_ccbs_setup_req_struct) 
                  
   /* mtk01602, 070610: TS 22.024 v5.0.0 Sec. 4.2.1, CCM shall hold the value 
      of the last call AOC, until the initiation of an outgoing call or acceptance 
      of an incoming call, at which point it shall be reset to zero.*/
#ifdef __AOC_SUPPORT__
   if(csmcc_is_the_only_call(call_id) == KAL_TRUE)	
    	CSMCC_PTR->last_ccm = 0;   
#endif/*__AOC_SUPPORT__*/
   
   ccbs_setup_req_ptr->call_id = call_id;
   ccbs_setup_req_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_send_ilm(ccbs_setup_req_ptr, 
                  MSG_ID_MNCC_CCBS_SETUP_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* csmcc_send_cc_ccbs_setup_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_facility_req
* DESCRIPTION                                                           
*   This procedure is used to send CC facility request with SS component.
*
* CALLS  
*	csmcc_send_cc_facility_req(kal_uint8 call_id, kal_uint8 opcode)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	opcode	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_facility_req(kal_uint8 call_id, kal_uint8 opcode)
{
   CSMCC_PTR_G_TO_L
   mncc_facility_req_struct *fac_req_ptr;
   Component *comp_ptr;
   kal_uint8 call_index;

   CSMCC_CONSTRUCT_LOCAL_PARA(fac_req_ptr, 
                              mncc_facility_req_struct) 
                  
   fac_req_ptr->call_id = call_id;
   fac_req_ptr->ti = CALL_DATA(call_id, ti);
   
   fac_req_ptr->facility.num_of_components = 1;

   cc_ss_comp_new(&(fac_req_ptr->facility.component[0]), SS_COMP_INV, 
               CSMCC_PTR->inv_id_count, NULL, 0);

   comp_ptr = fac_req_ptr->facility.component[0];   
   comp_ptr->invoke->localValueOpt = KAL_TRUE;
   comp_ptr->invoke->localValue = opcode;

   /* MAUI_01356560 */
   if(opcode == SS_OP_BUILDMPTY)
   {
       for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
       {
           if((GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE) || (GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD))
           {
               if(GET_MPTY_STATE(call_index) == CSMCC_MPTY_IDLE)
               {
                   SET_MPTY_STATE(call_index, CSMCC_MPTY_REQ)
               }
               CALL_DATA(call_index,inv_info.used) = KAL_TRUE;
               CALL_DATA(call_index,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
               CALL_DATA(call_index,inv_info.opcode) = SS_OP_BUILDMPTY;
           }
       }
   }
   else if(opcode == SS_OP_HOLDMPTY)
   {
       for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
       {
           if((GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE)
            && (GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE))
           {
               CALL_DATA(call_index,inv_info.used) = KAL_TRUE;
               CALL_DATA(call_index,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
               CALL_DATA(call_index,inv_info.opcode) = SS_OP_HOLDMPTY;
           }
       }
   }
   else if(opcode == SS_OP_RETRIEVEMPTY)
   {
       for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
       {
           if((GET_CALL_STATE(call_index) == CSMCC_CALL_HOLD)
            && (GET_MPTY_STATE(call_index) == CSMCC_MPTY_ACTIVE))
           {
               CALL_DATA(call_index,inv_info.used) = KAL_TRUE;
               CALL_DATA(call_index,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
               CALL_DATA(call_index,inv_info.opcode) = SS_OP_RETRIEVEMPTY;
           }
       }
   }
   else
   {
      CALL_DATA(call_id,inv_info.used) = KAL_TRUE;
      CALL_DATA(call_id,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
      CALL_DATA(call_id,inv_info.opcode) = opcode;
   }

   /* increase inv id count (<= 127) */
   CSMCC_PTR->inv_id_count = (CSMCC_PTR->inv_id_count+1)&0x7f;
   //CSMCC_PTR->inv_id_count++;
   
   csmcc_send_ilm(fac_req_ptr, 
                  MSG_ID_MNCC_FACILITY_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_facility_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_hold_req
* DESCRIPTION                                                           
*   This procedure is used to send call hold request to CC.
*
* CALLS  
*	csmcc_send_cc_hold_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_hold_req(kal_uint8 call_id)
{
   mncc_hold_req_struct *hold_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(hold_req_ptr, 
                              mncc_hold_req_struct) 
                              
   hold_req_ptr->call_id = call_id;
   hold_req_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_send_ilm(hold_req_ptr, 
                  MSG_ID_MNCC_HOLD_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* csmcc_send_cc_hold_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_retrieve_req
* DESCRIPTION                                                           
*   This procedure is used to send call retrieve request to CC.
*
* CALLS  
*	csmcc_send_cc_retrieve_req(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_retrieve_req(kal_uint8 call_id)
{
   mncc_retrieve_req_struct *retrieve_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(retrieve_req_ptr, 
                              mncc_retrieve_req_struct) 
                  
   retrieve_req_ptr->call_id = call_id;
   retrieve_req_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_send_ilm(retrieve_req_ptr, 
                  MSG_ID_MNCC_RETRIEVE_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* csmcc_send_cc_retrieve_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_deflection_succ
* DESCRIPTION                                                           
*   This procedure is used to send call deflection success to L4C to 
*   response the call deflection request.
*
* CALLS  
*	csmcc_send_l4c_call_deflection_succ(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_deflection_succ(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_call_deflection_cnf_struct *call_deflection_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_deflection_cnf_ptr, 
                              l4ccsm_cc_call_deflection_cnf_struct) 
      
   call_deflection_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   call_deflection_cnf_ptr->call_id = call_id;
   call_deflection_cnf_ptr->response = CSMCC_SUCCESS;
  
   csmcc_send_ilm(call_deflection_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_CALL_DEFLECTION_REQ);                  
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_call_deflection_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_deflection_fail
* DESCRIPTION                                                           
*   This procedure is used to send call deflection failure to L4C to 
*   response the call deflection request.
*
* CALLS  
*	csmcc_send_l4c_call_deflection_fail(kal_uint8 src_id,
*                                           kal_uint8 call_id,
*                                           kal_uint16 cause)
*
* PARAMETERS
*	src_id	IN	first variable, used as input
*	call_id	IN	second variable, used as input
*	cause	IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_deflection_fail(kal_uint8 src_id, 
                                                     kal_uint8 call_id, 
                                                     kal_uint16 cause)
{
   l4ccsm_cc_call_deflection_cnf_struct *call_deflection_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_deflection_cnf_ptr,
                             l4ccsm_cc_call_deflection_cnf_struct)
      
   call_deflection_cnf_ptr->src_id = src_id;
   call_deflection_cnf_ptr->call_id = call_id;
   call_deflection_cnf_ptr->response = CSMCC_FAILURE;
   
   if(cause != CSMCC_NO_CAUSE)
   {
      call_deflection_cnf_ptr->cause_present = KAL_TRUE;
      call_deflection_cnf_ptr->cause = cause;
   }
  
   csmcc_send_ilm(call_deflection_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_CALL_DEFLECTION_REQ);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_call_deflection_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_deflection_error
* DESCRIPTION                                                           
*   This procedure is used to send call deflection error to L4C to 
*   response the call deflection request.
*
* CALLS  
*	csmcc_send_l4c_call_deflection_error(kal_uint8 src_id,
*                                            kal_uint8 call_id,
*                                            kal_uint8 error_code)
*
* PARAMETERS
*	src_id		IN	first variable, used as input
*	call_id		IN	second variable, used as input
*	error_code	IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_deflection_error(kal_uint8 src_id, kal_uint8 call_id, kal_uint8 error_code)
{
   l4ccsm_cc_call_deflection_cnf_struct *call_deflection_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_deflection_cnf_ptr,
                             l4ccsm_cc_call_deflection_cnf_struct)
      
   call_deflection_cnf_ptr->src_id = src_id;
   call_deflection_cnf_ptr->call_id = call_id;
   call_deflection_cnf_ptr->response = CSMCC_FAILURE;
   call_deflection_cnf_ptr->cause_present = KAL_TRUE;
   call_deflection_cnf_ptr->cause = CM_SS_ERR_START + (kal_uint16)error_code;
     
   csmcc_send_ilm(call_deflection_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF, 
                  MOD_L4C,
                  NULL);
   
   csmcc_reset_cur_req(CSMCC_CALL_DEFLECTION_REQ);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_call_deflection_error */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_deflection_reject
* DESCRIPTION                                                           
*   This procedure is used to send call deflection reject to L4C to 
*   response the call deflection request.
*
* CALLS  
*	csmcc_send_l4c_call_deflection_reject(kal_uint8 src_id,
*                                        kal_uint8 call_id,
*                                        Reject *reject)
*
* PARAMETERS
*	src_id		IN	first variable, used as input
*	call_id		IN	second variable, used as input
*	reject		IN	third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_deflection_reject(kal_uint8 src_id, 
                                                  kal_uint8 call_id,
                                                  Reject *reject) 
{
   l4ccsm_cc_call_deflection_cnf_struct *call_deflection_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_deflection_cnf_ptr,
                             l4ccsm_cc_call_deflection_cnf_struct)
   
   call_deflection_cnf_ptr->src_id = src_id;
   call_deflection_cnf_ptr->call_id = call_id;
   call_deflection_cnf_ptr->response = CSMCC_FAILURE;

   if(reject->generalProblemOpt)
   {
      call_deflection_cnf_ptr->cause_present = KAL_TRUE;
      call_deflection_cnf_ptr->cause = CM_SS_GENERALPROBLEM_START + (kal_uint16)reject->generalProblem->value;
   }
   else if(reject->invokeProblemOpt)
   {
      call_deflection_cnf_ptr->cause_present = KAL_TRUE;
      call_deflection_cnf_ptr->cause = CM_SS_INVOKEPROBLEM_START + (kal_uint16)reject->invokeProblem->value;
   }
   else if(reject->returnResultProblemOpt)
   {
      call_deflection_cnf_ptr->cause_present = KAL_TRUE;
      call_deflection_cnf_ptr->cause = CM_SS_RETURNRESULTPROBLEM_START + (kal_uint16)reject->returnResultProblem->value;
   }
   else if(reject->returnErrorProblemOpt)
   {
      call_deflection_cnf_ptr->cause_present = KAL_TRUE;
      call_deflection_cnf_ptr->cause = CM_SS_RETURNERRORPROBLEM_START + (kal_uint16)reject->returnErrorProblem->value;
   }
               
   csmcc_send_ilm(call_deflection_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_DEFLECTION_CNF, 
                  MOD_L4C,
                  NULL);
   
   csmcc_reset_cur_req(CSMCC_CALL_DEFLECTION_REQ);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_call_deflection_reject */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_pack_deflected_addr
* DESCRIPTION                                                           
*   This procedure is used to pack deflected address into facility in case
*   of sending disconnect message to CC.
*
* CALLS  
*	csmcc_pack_deflected_addr(mncc_facility_struct *fac_ptr,
*                l4ccsm_cc_call_deflection_req_struct *call_deflected_req_ptr)
*
* PARAMETERS
*	*fac_ptr		OUT	first variable, used as out
*       *call_deflected_req_ptr	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_pack_deflected_addr(mncc_facility_struct *fac_ptr,
                  l4ccsm_cc_call_deflection_req_struct *call_deflected_req_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   CallDeflectionArg *cda_ptr;
   Component* comp_ptr;
   kal_uint8 packed_len;
   kal_uint8 *pun_buff;
   
   cda_ptr = (CallDeflectionArg*)get_ctrl_buffer(512);
   mcd_pseudo_alloc(MCD_CALLDEFLECTIONARG, (kal_uint32*)cda_ptr, 512);

   cda_ptr->deflectedToNumber->octsLen = call_deflected_req_ptr->redirect_num.addr_length;   
   kal_mem_cpy(cda_ptr->deflectedToNumber->octs, 
               call_deflected_req_ptr->redirect_num.addr_bcd,
               cda_ptr->deflectedToNumber->octsLen);
#ifdef __SUBADDR_SUPPORT__
   if(call_deflected_req_ptr->redirect_sub_addr_present == KAL_TRUE)
   {
      cda_ptr->deflectedToSubaddressOpt = KAL_TRUE;
      cda_ptr->deflectedToSubaddress->octsLen = call_deflected_req_ptr->redirect_sub_addr.sub_addr_len;      
      kal_mem_cpy(cda_ptr->deflectedToSubaddress->octs, 
                  call_deflected_req_ptr->redirect_sub_addr.sub_addr,
                  cda_ptr->deflectedToSubaddress->octsLen);
   }
   else
#endif
   {
      cda_ptr->deflectedToSubaddressOpt = KAL_FALSE;
   }

   pun_buff = get_ctrl_buffer(256);
   packed_len = cc_ss_arg_pack(MCD_CALLDEFLECTIONARG, pun_buff, 
                               256, (kal_uint8*)cda_ptr);

   fac_ptr->num_of_components = 1;
   
   cc_ss_comp_new(&(fac_ptr->component[0]), SS_COMP_INV, 
                  CSMCC_PTR->inv_id_count, (kal_uint8*)pun_buff, packed_len);

   comp_ptr = fac_ptr->component[0];               
   comp_ptr->invoke->localValueOpt = KAL_TRUE;
   comp_ptr->invoke->localValue = SS_OP_CALLDEFLECTION;

   free_ctrl_buffer(cda_ptr);
   free_ctrl_buffer(pun_buff);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_pack_deflected_addr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_call_deflection_req
* DESCRIPTION                                                           
*   This procedure is used to send call deflection request to CC.
*
* CALLS  
*	csmcc_send_cc_call_deflection_req(
*              l4ccsm_cc_call_deflection_req_struct *call_deflection_req_ptr)
*
* PARAMETERS
*	*call_deflection_req_ptr	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_call_deflection_req(
                  l4ccsm_cc_call_deflection_req_struct *call_deflection_req_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_disc_req_struct *disc_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(disc_req_ptr,
                              mncc_disc_req_struct)
                                
   call_id = call_deflection_req_ptr->call_id;
   disc_req_ptr->call_id = call_id;
   disc_req_ptr->ti = CALL_DATA(call_id, ti);
   
   disc_req_ptr->cause.cause_value = CM_NORMAL_CALL_CLR;
   
   disc_req_ptr->facilityP = KAL_TRUE;
   csmcc_pack_deflected_addr(&(disc_req_ptr->facility),
                       call_deflection_req_ptr);  


   /* update inv info */
   CALL_DATA(call_id,inv_info.used) = KAL_TRUE;
   CALL_DATA(call_id,inv_info.inv_id) = CSMCC_PTR->inv_id_count;
   CALL_DATA(call_id,inv_info.opcode) = SS_OP_CALLDEFLECTION;
   
   /* increase inv id count (<= 127) */
   CSMCC_PTR->inv_id_count = (CSMCC_PTR->inv_id_count+1)&0x7f;
   //CSMCC_PTR->inv_id_count++;

   csmcc_send_ilm(disc_req_ptr, 
                  MSG_ID_MNCC_DISC_REQ, 
                  MOD_CC,
                  NULL);
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_call_deflection_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_start_dtmf_succ
* DESCRIPTION                                                           
*   This procedure is used to send start dtmf request success to L4C.
*
* CALLS  
*	csmcc_send_l4c_start_dtmf_succ(kal_uint8 call_id,
*                                      kal_uint8 tone)
* PARAMETERS
*	call_id		first variable, used as input
*	tone		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_start_dtmf_succ(kal_uint8 call_id,
                                                kal_uint8 tone)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_start_dtmf_cnf_struct *start_dtmf_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(start_dtmf_cnf_ptr,
                             l4ccsm_cc_start_dtmf_cnf_struct)   
               
   start_dtmf_cnf_ptr->call_id = call_id;
   start_dtmf_cnf_ptr->src_id = CSMCC_PTR->dtmf_src_id;

   start_dtmf_cnf_ptr->response = CSMCC_SUCCESS;
   start_dtmf_cnf_ptr->tone = tone;
 
   csmcc_send_ilm(start_dtmf_cnf_ptr,
                  MSG_ID_L4CCSM_CC_START_DTMF_CNF,
                  MOD_L4C,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_l4c_start_dtmf_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_start_dtmf_fail
* DESCRIPTION                                                           
*   This procedure is used to send start dtmf request failure to L4C.
*
* CALLS  
*	csmcc_send_l4c_start_dtmf_fail(kal_uint8 src_id
*                                      kal_uint8 call_id,
*                                      kal_uint8 tone,
*                                      kal_uint16 cause)
* PARAMETERS
*	src_id		first variable, used as input
*	call_id		second variable, used as input
*	tone		third variable, used as input
*	cause		fourth variable, uase as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_start_dtmf_fail(kal_uint8 src_id, 
                                                kal_uint8 call_id, 
                                                kal_uint8 tone, 
                                                kal_uint16 cause)
{
   l4ccsm_cc_start_dtmf_cnf_struct *start_dtmf_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(start_dtmf_cnf_ptr,
                             l4ccsm_cc_start_dtmf_cnf_struct)   
                                            
   start_dtmf_cnf_ptr->call_id = call_id;
   start_dtmf_cnf_ptr->src_id = src_id;
   start_dtmf_cnf_ptr->response = CSMCC_FAILURE;
   start_dtmf_cnf_ptr->tone = tone;
   
   if(cause != CSMCC_NO_CAUSE)
   {
      start_dtmf_cnf_ptr->cause_present = KAL_TRUE;
      start_dtmf_cnf_ptr->cause = cause;
   }
 
   csmcc_send_ilm(start_dtmf_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_START_DTMF_CNF, 
                  MOD_L4C,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_l4c_start_dtmf_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_start_dtmf_req
* DESCRIPTION                                                           
*   This procedure is used to send start dtmf request to CC.
*
* CALLS  
*	csmcc_send_cc_start_dtmf_req(kal_uint8 call_id,
*                                    kal_uint8 tone)
* PARAMETERS
*	call_id		first variable, used as input
*	tone		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_start_dtmf_req(kal_uint8 call_id, kal_uint8 tone)
{
   mncc_start_dtmf_req_struct *start_dtmf_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(start_dtmf_req_ptr,
                              mncc_start_dtmf_req_struct)      
               
   start_dtmf_req_ptr->call_id = call_id;
   start_dtmf_req_ptr->ti = CALL_DATA(call_id, ti);
   start_dtmf_req_ptr->digit = tone;
 
   csmcc_send_ilm(start_dtmf_req_ptr, 
                  MSG_ID_MNCC_START_DTMF_REQ, 
                  MOD_CC,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_cc_start_dtmf_req */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_abort_call_req
* DESCRIPTION                                                           
*   This procedure is used to send abort callrequest to CC.
*
* CALLS  
*	csmcc_send_cc_abort_call_req(kal_uint8 call_id,
*                                    kal_uint8 tone)
* PARAMETERS
*	call_id		first variable, used as input
*	tone		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_abort_call_req(void)
{
   mncc_abort_call_req_struct *abort_call_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(abort_call_req_ptr,
                              mncc_abort_call_req_struct)      
               
 
   csmcc_send_ilm(abort_call_req_ptr, 
                  MSG_ID_MNCC_ABORT_CALL_REQ, 
                  MOD_CC,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_cc_start_dtmf_req */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_stop_dtmf_req
* DESCRIPTION                                                           
*   This procedure is used to send stop dtmf request to CC.
*
* CALLS  
*	csmcc_send_cc_stop_dtmf_req(kal_uint8 call_id,
*                                    kal_uint8 tone)
* PARAMETERS
*	call_id		first variable, used as input
*	tone		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_stop_dtmf_req(kal_uint8 call_id, kal_uint8 tone)
{
   mncc_stop_dtmf_req_struct *stop_dtmf_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(stop_dtmf_req_ptr,
                             mncc_stop_dtmf_req_struct)   
               
   stop_dtmf_req_ptr->call_id = call_id;
   stop_dtmf_req_ptr->ti = CALL_DATA(call_id, ti);
   stop_dtmf_req_ptr->digit = tone;
 
   csmcc_send_ilm(stop_dtmf_req_ptr, 
                  MSG_ID_MNCC_STOP_DTMF_REQ, 
                  MOD_CC,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_cc_stop_dtmf_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_stop_dtmf_succ
* DESCRIPTION                                                           
*   This procedure is used to send stop dtmf request confirm to L4C.
*
* CALLS  
*	csmcc_send_l4c_stop_dtmf_succ(kal_uint8 call_id, kal_uint8 tone)
*
* PARAMETERS
*	call_id		first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_stop_dtmf_succ(kal_uint8 call_id, kal_uint8 tone)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_stop_dtmf_cnf_struct *stop_dtmf_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(stop_dtmf_cnf_ptr,
                              l4ccsm_cc_stop_dtmf_cnf_struct)   
                                            
   stop_dtmf_cnf_ptr->call_id = call_id;
   stop_dtmf_cnf_ptr->src_id = CSMCC_PTR->dtmf_src_id;

   stop_dtmf_cnf_ptr->response = CSMCC_SUCCESS;
   stop_dtmf_cnf_ptr->tone = tone;
 
   csmcc_send_ilm(stop_dtmf_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_STOP_DTMF_CNF, 
                  MOD_L4C,
                  NULL);
     
   return CSMCC_NO_ERROR;
} /* end of csmcc_send_l4c_stop_dtmf_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_stop_dtmf_fail
* DESCRIPTION                                                           
*   This procedure is used to send stop dtmf failure to L4C.
*
* CALLS  
*	csmcc_send_l4c_stop_dtmf_fail(kal_uint8 src_id,
*                                kal_uint8 call_id, 
*                                kal_uint8 tone,
*                                kal_uint16 cause)
*
* PARAMETERS
*  src_id      first variable, used as input
*	call_id		second variable, used as input
*  tone        third variable, used as input
*  cause       fourth variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_stop_dtmf_fail(kal_uint8 src_id,
                                               kal_uint8 call_id,
                                               kal_uint8 tone,
                                               kal_uint16 cause)
{
   l4ccsm_cc_stop_dtmf_cnf_struct *stop_dtmf_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(stop_dtmf_cnf_ptr,
                              l4ccsm_cc_stop_dtmf_cnf_struct)   
                                            
   stop_dtmf_cnf_ptr->call_id = call_id;
   stop_dtmf_cnf_ptr->src_id = src_id;
   stop_dtmf_cnf_ptr->response = CSMCC_FAILURE;
   stop_dtmf_cnf_ptr->tone = tone;

   if(cause != CSMCC_NO_CAUSE)
   {
      stop_dtmf_cnf_ptr->cause_present = KAL_TRUE;
      stop_dtmf_cnf_ptr->cause = cause;
   }
 
   csmcc_send_ilm(stop_dtmf_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_STOP_DTMF_CNF, 
                  MOD_L4C,
                  NULL);
     
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_stop_dtmf_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_modify_req
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification request to CC.
*
* CALLS  
*	csmcc_send_cc_modify_req(kal_uint8 call_id,
*                            csmcc_bc_struct *bc)
*
* PARAMETERS
*	call_id		first variable, used as input
*	*bc		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_modify_req(kal_uint8 call_id, csmcc_bc_struct *bc, kal_uint8 rscd_P)
{
   mncc_modify_req_struct *modify_req_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(modify_req_ptr,
                             mncc_modify_req_struct)   
                                
   modify_req_ptr->call_id = call_id;
   modify_req_ptr->ti = CALL_DATA(call_id, ti);
   
   csmcc_form_peer_bc(&(modify_req_ptr->bc),
                      bc);
               
   modify_req_ptr->rscd_P = rscd_P;
               
   csmcc_send_ilm(modify_req_ptr, 
                  MSG_ID_MNCC_MODIFY_REQ, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_modify_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_modify_compl
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification request to CC.
*
* CALLS  
*	csmcc_send_cc_modify_compl(kal_uint8 call_id,
*                            csmcc_bc_struct *bc)
*
* PARAMETERS
*	call_id		first variable, used as input
*	*bc		second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_modify_compl(kal_uint8 call_id, csmcc_bc_struct *bc, kal_uint8 rscd_P)
{
   mncc_modify_res_struct *modify_compl_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(modify_compl_ptr,
                             mncc_modify_res_struct)      
   
   modify_compl_ptr->call_id = call_id;
   modify_compl_ptr->ti = CALL_DATA(call_id, ti);
   modify_compl_ptr->response = /*CSMCC_SUCCESS*/CSMCC_KAL_U_ONE;
   modify_compl_ptr->rscd_P = rscd_P;
   
   csmcc_form_peer_bc(&(modify_compl_ptr->bc),
                      bc);
              
   csmcc_send_ilm(modify_compl_ptr, 
                  MSG_ID_MNCC_MODIFY_RES, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_modify_compl */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_cc_modify_rej
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification reject request to CC.
*
* CALLS  
*	csmcc_send_cc_modify_rej(kal_uint8 call_id,
*                            csmcc_bc_struct *bc
*                            kal_uint16 cause)
*
* PARAMETERS
*	call_id		first variable, used as input
*	*bc		second variable, used as input
*	cause		third variable, cause as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_cc_modify_rej(kal_uint8 call_id, 
                                          csmcc_bc_struct *bc, 
                                          kal_uint16 cause)
{
   mncc_modify_res_struct *modify_rej_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(modify_rej_ptr,
                             mncc_modify_res_struct)                                
               
   modify_rej_ptr->call_id = call_id;
   modify_rej_ptr->ti = CALL_DATA(call_id, ti);
   modify_rej_ptr->response = /*CSMCC_FAILURE*/CSMCC_KAL_U_ZERO; 
   
   csmcc_form_peer_bc(&(modify_rej_ptr->bc),
                      bc);

   modify_rej_ptr->causeP = KAL_TRUE;
   modify_rej_ptr->cause.cause_value = cause;
                  
   csmcc_send_ilm(modify_rej_ptr, 
                  MSG_ID_MNCC_MODIFY_RES, 
                  MOD_CC,
                  NULL);
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_send_cc_modify_rej */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_modify_succ
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification success to L4C to
*   response the modify request.
*
* CALLS  
*	csmcc_send_l4c_modify_succ(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_modify_succ(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 cur_call_type;   
   l4ccsm_cc_call_modify_cnf_struct *modify_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(modify_cnf_ptr,
                              l4ccsm_cc_call_modify_cnf_struct)   
                                   
   modify_cnf_ptr->call_id = call_id;
   modify_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   modify_cnf_ptr->response = CSMCC_SUCCESS;
   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   modify_cnf_ptr->cur_call_type = CALL_DATA(call_id,bc[cur_call_type]);
              
   csmcc_send_ilm(modify_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_MODIFY_CNF, 
                  MOD_L4C,
                  NULL);
   
   csmcc_reset_cur_req(CSMCC_MO_MODIFY_REQ);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_modify_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_modify_fail
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification failure to L4C to
*   response the modify request.
*
* CALLS  
*	csmcc_send_l4c_modify_fail(kal_uint8 src_id,
*                                  kal_uint8 call_id, 
*                                  kal_uint16 cause)
*
* PARAMETERS
*	src_id		first variable, used as input
*	call_id		second variable, used as input
*	cause		third variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_modify_fail(kal_uint8 src_id,
                                            kal_uint8 call_id, 
                                            kal_uint16 cause)
{
   kal_uint8 cur_call_type;   
   l4ccsm_cc_call_modify_cnf_struct *modify_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(modify_cnf_ptr,
                             l4ccsm_cc_call_modify_cnf_struct)   
      
   modify_cnf_ptr->call_id = call_id;
   modify_cnf_ptr->src_id = src_id;
   modify_cnf_ptr->response = CSMCC_FAILURE;
   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   modify_cnf_ptr->cur_call_type = 
              CALL_DATA(call_id,bc[cur_call_type]);

   if(cause != CSMCC_NO_CAUSE)
   {
      modify_cnf_ptr->cause_present = KAL_TRUE;
      modify_cnf_ptr->cause = cause;
   }
   
   csmcc_send_ilm(modify_cnf_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_MODIFY_CNF, 
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_MO_MODIFY_REQ);                  
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_modify_fail */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_modify_ind
* DESCRIPTION                                                           
*   This procedure is used to send in-call modification indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_modify_ind(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_modify_ind(kal_uint8 call_id)
{
   kal_uint8 cur_call_type;   
   l4ccsm_cc_call_modify_ind_struct *modify_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(modify_ind_ptr,
                             l4ccsm_cc_call_modify_ind_struct)   
                  
   modify_ind_ptr->call_id = call_id;
   modify_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   modify_ind_ptr->cur_call_type = 
              CALL_DATA(call_id,bc[cur_call_type]);

   csmcc_send_ilm(modify_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_MODIFY_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_modify_ind */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_ccm_ind
* DESCRIPTION                                                           
*   This procedure is used to send current call meter indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_ccm_ind(mncc_aoc_ind_struct *aoc_ind_ptr)
*
* PARAMETERS
*	*aoc_ind_ptr	IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_ccm_ind(mncc_aoc_ind_struct *aoc_ind_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;   
   l4ccsm_cc_ccm_ind_struct *ccm_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(ccm_ind_ptr,
                             l4ccsm_cc_ccm_ind_struct)   
               
   call_id = aoc_ind_ptr->call_id;
   
   ccm_ind_ptr->call_id = call_id;
   ccm_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   ccm_ind_ptr->ccm = aoc_ind_ptr->ccm;
   ccm_ind_ptr->acm = aoc_ind_ptr->acm-CSMCC_PTR->acm;/* pohan, increase units by acm_increase*/
   
   ccm_ind_ptr->ccwv = aoc_ind_ptr->ccwe; /* MAUI_01637672 support CCWE */
   
   csmcc_send_ilm(ccm_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CCM_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_ccm_ind */
#endif /*__AOC_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_cpi_ind
* DESCRIPTION                                                           
*   This procedure is used to send Call Progress Information to L4C.
*   mtk00924 add 041210 for ECPI
*
* CALLS  
*	csmcc_send_l4c_cpi_ind(kal_uint8 call_id,
*                                           csmcc_cpi_msg_type_enum msg_type,
*                                           kal_bool is_ibt,
*                                           kal_bool is_tch)
*
* PARAMETERS
*	 call_id	IN	 first variable, used as input
*	 msg_type     IN     second variable, 
*      is_ibt     IN	third variable, used as input
*	 is_tch    IN	fourth variable, used as input
*
* RETURNS
*	success or failure
*
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_cpi_ind(kal_uint8 call_id,
                                   csmcc_cpi_msg_type_enum msg_type,
                                   kal_bool is_ibt,
                                   kal_bool is_tch,
                                   kal_uint16 disc_cause,
                                   kal_uint8 diagnostic)
                                                                                         
{

   l4ccsm_cc_cpi_ind_struct *cpi_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(cpi_ind_ptr,
                             l4ccsm_cc_cpi_ind_struct)   
                     
   cpi_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   cpi_ind_ptr->msg_type = msg_type;
   cpi_ind_ptr->is_ibt = is_ibt;
   cpi_ind_ptr->is_tch = is_tch;
   cpi_ind_ptr->disc_cause = disc_cause;   
   if (diagnostic != 0)
   {
       cpi_ind_ptr->is_diagnostic_present = KAL_TRUE;
       cpi_ind_ptr->diagnostic = diagnostic;
   }
   
   if(CALL_DATA(call_id,number_present) == KAL_TRUE)
   {
   cpi_ind_ptr->numberP = KAL_TRUE;
   cpi_ind_ptr->number = CALL_DATA(call_id,number);
   }
   
   l4ccsm_cc_get_call_info(call_id, &(cpi_ind_ptr->call_entry), NULL); 
   
   csmcc_send_ilm(cpi_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CPI_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_cpi_ind */


/* MAUI_01315252, update call state */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_update_call_state_ind
* DESCRIPTION                                                           
*   This procedure is used to inform L4C about call state transition.
*   When call state is changed from Hold to Active or from Active to Hold,
*   CSM needs to send this notification to L4C.
*
* CALLS  
*	csmcc_send_l4c_update_call_state_ind(kal_uint8 call_id,
*                          csmcc_call_state_enum call_state)
*
* PARAMETERS
*	 
*
* RETURNS
*	success or failure
*
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_update_call_state_ind(kal_uint8 call_id,
                                   csmcc_call_state_enum call_state)
{
   l4ccsm_cc_update_call_state_ind_struct *state_ind_ptr;

   if((call_state == CSMCC_CALL_IDLE) ||
      (call_state == CSMCC_CALL_INIT) || /* MAUI_01645808 */
      (call_state == CSMCC_CALL_ACTIVE) ||
      (call_state == CSMCC_MS_CALL_DISC) ||
      (call_state == CSMCC_NW_CALL_DISC) ||
      (call_state == CSMCC_CALL_HOLD))
   {
      CSMCC_CONSTRUCT_LOCAL_PARA(state_ind_ptr, l4ccsm_cc_update_call_state_ind_struct)
      state_ind_ptr->call_state = call_state;	  
      l4ccsm_cc_get_call_info(call_id, &(state_ind_ptr->call_entry), NULL); 
      csmcc_send_ilm(state_ind_ptr,
                     MSG_ID_L4CCSM_CC_UPDATE_CALL_STATE_IND,
                     MOD_L4C,
                     NULL);
   }

   return CSMCC_NO_ERROR;
}
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_update_call_state_idle_ind
* DESCRIPTION                                                           
*   This procedure is used to inform L4C about call state transition to IDLE 
*
* CALLS  
*	csmcc_send_l4c_update_call_state_idle_ind(kal_uint8 call_id)
*
* PARAMETERS
*	 
*
* RETURNS
*	success or failure
*
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_update_call_state_idle_ind(kal_uint8 call_id)
{
   l4ccsm_cc_update_call_state_ind_struct *state_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(state_ind_ptr, l4ccsm_cc_update_call_state_ind_struct)
   state_ind_ptr->call_state = CSMCC_CALL_IDLE;
   (state_ind_ptr->call_entry).call_id = call_id;
   csmcc_send_ilm(state_ind_ptr,
                     MSG_ID_L4CCSM_CC_UPDATE_CALL_STATE_IND,
                     MOD_L4C,
                     NULL);

   return CSMCC_NO_ERROR;
}

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_sync_ind
* DESCRIPTION                                                           
*   This procedure is used for sending indication to L4C to make MMI get call info to sync
*   with CSMCC.
*
* CALLS  
*	csmcc_send_l4c_call_sync_ind(kal_uint8 call_id)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_sync_ind(kal_uint8 call_id)
{

   l4ccsm_cc_call_sync_ind_struct *call_sync_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(call_sync_ind_ptr,
                             l4ccsm_cc_call_sync_ind_struct)   
               
   call_sync_ind_ptr->call_id = call_id;
   call_sync_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   csmcc_send_ilm(call_sync_ind_ptr, 
                  MSG_ID_L4CCSM_CC_CALL_SYNC_IND, 
                  MOD_L4C,
                  NULL);
   
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_call_sync_ind */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_ect_rdn
* DESCRIPTION                                                           
*   This procedure is used to fill ECT remote party number
*
* CALLS  
*	csmcc_fill_ect_ind(l4ccsm_cc_ect_rdn_struct *l4c_ect_rdn_ptr
*                     ECT_Indicator *ect_ind_ptr)
*
* PARAMETERS
*	l4c_ect_ind_ptr   OUT	first variable, used as output
*	ect_ind_ptr       IN 	second variable, used as input
*	
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_ect_rdn(l4ccsm_cc_ect_rdn_struct *l4c_ect_rdn_ptr, ECT_Indicator *ect_ind_ptr)
{   
   if(ect_ind_ptr->rdnOpt == KAL_TRUE)
   {
      l4c_ect_rdn_ptr->ect_rdn_present = KAL_TRUE;
      
      if(ect_ind_ptr->rdn->presentationAllowedAddressOpt)
      {
         l4c_ect_rdn_ptr->rdn_choice_tag = RDN_ALLOWED;
         csmcc_form_l4c_rdn_addr(&(l4c_ect_rdn_ptr->rdn_choice_value.presentationAllowedAddress),
                                 ect_ind_ptr->rdn->presentationAllowedAddress);
      }
      else if(ect_ind_ptr->rdn->presentationRestrictedOpt)
      {
         l4c_ect_rdn_ptr->rdn_choice_tag = RDN_RESTRICTED;

      }
      else if(ect_ind_ptr->rdn->numberNotAvailableDueToInterworkingOpt)
      {
         l4c_ect_rdn_ptr->rdn_choice_tag = RDN_UNAVAILABLE;
      }
      else if(ect_ind_ptr->rdn->presentationRestrictedAddressOpt)
      {
         l4c_ect_rdn_ptr->rdn_choice_tag = RDN_RESTRICTEDADDR;
         csmcc_form_l4c_rdn_addr(&(l4c_ect_rdn_ptr->rdn_choice_value.presentationRestrictedAddress),
                                 ect_ind_ptr->rdn->presentationRestrictedAddress);
      }
      else
      {
         l4c_ect_rdn_ptr->ect_rdn_present = KAL_FALSE;
      }
   }

} /* end of csmcc_fill_ect_rdn */

#ifdef __CNAP_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_name_ind
* DESCRIPTION                                                           
*   This procedure is used to fill name indicator
*
* CALLS  
*	csmcc_fill_name_ind(NameIndicator *name_ind_ptr)
*
* PARAMETERS
*	name_ind_ptr		IN	   second variable, used as input
*	
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_name_ind(NameIndicator *name_ind_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 name_len;
   kal_uint8 max_length = L4_MAX_NAME;
   l4ccsm_cc_name_ind_struct *l4c_name_ind_ptr=&(CSMCC_PTR->cnap_info);
   
   l4c_name_ind_ptr->callingName_present = KAL_TRUE;
   if(name_ind_ptr->callingName->namePresentationAllowedOpt)
   {
    	   kal_uint8 lang_type;
           smsal_dcs_enum alphabet_type;
           smsal_msg_class_enum mclass;
           kal_bool is_compress;
           kal_bool is_reserved;
           NameSet *recv_name_string = name_ind_ptr->callingName->namePresentationAllowed;
      
	   l4c_name_ind_ptr->callingName_choice_tag = CNAP_ALLOWED;
	   name_len = recv_name_string->lengthInCharacters;
	   if(name_len > max_length)
           {
	       name_len = max_length;
           }
      
	   l4c_name_ind_ptr->callingName_choice_value.namePresentationAllowed.name_dcs
	    = recv_name_string->dataCodingScheme->octs[0];
                                                                
	   /* Use smsal decode function to determine the coding scheme*/
	   smsal_decode_cbsdcs(recv_name_string->dataCodingScheme->octs[0],
	   	         &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);
	   /*mtk01602, 070626: Change dcs form for MMI*/
	   l4c_name_ind_ptr->callingName_choice_value.namePresentationAllowed.name_dcs = alphabet_type;
	   if ((is_compress == KAL_FALSE) && (alphabet_type == SMSAL_DEFAULT_DCS))
           {
               /*Only use csmss_gsm7_unpack when length != 0, otherwise it will assert.*/
	       if(name_len != 0)			  			   
	       {
                   /*GSM 7 BIT encoding, padding from 7 to 8 bits.*/
                   csmss_gsm7_unpack(l4c_name_ind_ptr->callingName_choice_value.namePresentationAllowed.name,
		   		     recv_name_string->nameString->octs, 
				     name_len, 
				     0);  
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
	       #endif
	       l4c_name_ind_ptr->callingName_choice_value.namePresentationAllowed.name_length = name_len;
	  }
	  else
	  {
               /*Bypass the string if data coding scheme is not GSM 7*/
               kal_mem_cpy(l4c_name_ind_ptr->callingName_choice_value.namePresentationAllowed.name, 
                  	   recv_name_string->nameString->octs, 
                           name_len);
          }
    }
   else if(name_ind_ptr->callingName->presentationRestrictedOpt)
   {
      l4c_name_ind_ptr->callingName_choice_tag = CNAP_RESTRICTED;
   }
   else if(name_ind_ptr->callingName->nameUnavailableOpt)
   {
      l4c_name_ind_ptr->callingName_choice_tag = CNAP_UNAVAILABLE;
   }
   else if(name_ind_ptr->callingName->namePresentationRestrictedOpt)
   {
    	   kal_uint8 lang_type;
           smsal_dcs_enum alphabet_type;
           smsal_msg_class_enum mclass;
           kal_bool is_compress;
           kal_bool is_reserved;
           NameSet *recv_name_string = name_ind_ptr->callingName->namePresentationRestricted;
      
	   l4c_name_ind_ptr->callingName_choice_tag = CNAP_RESTRICTEDNAME;
	   name_len = recv_name_string->lengthInCharacters;
	   if(name_len > max_length)
           {
	      name_len = max_length;
           }
      
           l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name_dcs
	       = recv_name_string->dataCodingScheme->octs[0];
                                                                
	   /* Use smsal decode function to determine the coding scheme*/
	   smsal_decode_cbsdcs(recv_name_string->dataCodingScheme->octs[0],
	      	               &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);
	   /*mtk01602, 070626: Change dcs form for MMI*/
	   l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name_dcs = alphabet_type;
	   if ((is_compress == KAL_FALSE) && (alphabet_type == SMSAL_DEFAULT_DCS))
           {
	        /*Only use csmss_gsm7_unpack when length != 0, otherwise it will assert.*/
	        if(name_len != 0)			  			   
	        {
                    /*GSM 7 BIT encoding, padding from 7 to 8 bits.*/
                    csmss_gsm7_unpack(l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name,
				      recv_name_string->nameString->octs, 
				      name_len, 
				      0);				  
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
		#endif
		l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name_length = name_len;
	   }
	   else
	   {
	   	/*Bypass the string if data coding scheme is not GSM 7*/
                kal_mem_cpy(l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name, 
                  	    recv_name_string->nameString->octs, 
                            name_len);
           }
   }
   else
   {
      l4c_name_ind_ptr->callingName_present = KAL_FALSE;
   }

    kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CNAP_STATUS,
			  255,	
   	                  l4c_name_ind_ptr->callingName_present,
	     	          l4c_name_ind_ptr->callingName_choice_tag,
   	                  l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name_length,
   	                  l4c_name_ind_ptr->callingName_choice_value.namePresentationRestricted.name_dcs);	
	
} /* end of csmcc_fill_name_ind */

#endif /*__CNAP_SUPPORT__*/
#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_fill_ccbs_feature
* DESCRIPTION                                                           
*   This procedure is used to fill ccbs feature
*
* CALLS  
*	csmcc_fill_ccbs_feature(l4ccsm_cc_ccbs_feature_struct l4c_ccbs_feature_ptr,
*                          CCBS_Feature *ccbs_feature_ptr)
*
* PARAMETERS
*	l4c_ccbs_feature_ptr		OUT	first variable, used as out
*	ccbs_feature_ptr		IN	second variable, used as input
*	
* RETURNS
*
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fill_ccbs_feature(l4ccsm_cc_ccbs_feature_struct *l4c_ccbs_feature_ptr, CCBS_Feature *ccbs_feature_ptr)
{
   if(ccbs_feature_ptr->ccbs_IndexOpt == KAL_TRUE)
   {
      l4c_ccbs_feature_ptr->ccbs_index_present = KAL_TRUE;
      l4c_ccbs_feature_ptr->ccbs_index = ccbs_feature_ptr->ccbs_Index->value;
   }
   if(ccbs_feature_ptr->b_subscriberNumberOpt == KAL_TRUE)
   {
      l4c_ccbs_feature_ptr->b_subscriberNumber_present = KAL_TRUE;
      if(ccbs_feature_ptr->b_subscriberNumber->octsLen > L4_MAX_ADDR_BCD)
      {
         l4c_ccbs_feature_ptr->b_subscriberNumber.addr_length = L4_MAX_ADDR_BCD;
      }
      else
      {
         l4c_ccbs_feature_ptr->b_subscriberNumber.addr_length = 
            (kal_uint8)ccbs_feature_ptr->b_subscriberNumber->octsLen;
      }

      kal_mem_set(l4c_ccbs_feature_ptr->b_subscriberNumber.addr_bcd,
                  0xff,
                  L4_MAX_ADDR_BCD);

      kal_mem_cpy(l4c_ccbs_feature_ptr->b_subscriberNumber.addr_bcd, 
                  ccbs_feature_ptr->b_subscriberNumber->octs, 
                  l4c_ccbs_feature_ptr->b_subscriberNumber.addr_length);
   }
#ifdef __SUBADDR_SUPPORT__
   if(ccbs_feature_ptr->b_subscriberSubaddressOpt == KAL_TRUE)
   {
      l4c_ccbs_feature_ptr->b_subscriberSubaddress_present = KAL_TRUE;      
      if(ccbs_feature_ptr->b_subscriberSubaddress->octsLen > L4_MAX_SUB_ADDR)
      {
         l4c_ccbs_feature_ptr->b_subscriberSubaddress.sub_addr_len = L4_MAX_SUB_ADDR;
      }
      else
      {
      l4c_ccbs_feature_ptr->b_subscriberSubaddress.sub_addr_len = 
                   (kal_uint8)ccbs_feature_ptr->b_subscriberSubaddress->octsLen;
      }
      kal_mem_cpy(l4c_ccbs_feature_ptr->b_subscriberSubaddress.sub_addr, 
                  ccbs_feature_ptr->b_subscriberSubaddress->octs, 
                  l4c_ccbs_feature_ptr->b_subscriberSubaddress.sub_addr_len);
   }
#endif 
   if(ccbs_feature_ptr->basicServiceGroupOpt == KAL_TRUE)
   {
      l4c_ccbs_feature_ptr->bs_code_present = KAL_TRUE;
      if(ccbs_feature_ptr->basicServiceGroup->bearerServiceOpt)
      {
         l4c_ccbs_feature_ptr->bs_code = ccbs_feature_ptr->basicServiceGroup->bearerService->octs[0];
      }
      else if(ccbs_feature_ptr->basicServiceGroup->teleserviceOpt)
      {
         l4c_ccbs_feature_ptr->bs_code = ccbs_feature_ptr->basicServiceGroup->teleservice->octs[0];
      }
      else
      {
         l4c_ccbs_feature_ptr->bs_code_present = KAL_FALSE;
      }

   }

} /* csmcc_fill_ccbs_feature */
#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_notify_ss_ind
* DESCRIPTION                                                           
*   This procedure is used to send NotifySS indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_notify_ss_ind(kal_uint8 call_id,
*                                    NotifySS_Arg *notify_ss_arg_ptr)
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*	notify_ss_arg_ptr	IN	second variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_notify_ss_ind(kal_uint8 call_id, NotifySS_Arg *notify_ss_arg_ptr)
{
   l4ccsm_cc_notify_ss_ind_struct *notify_ss_ind_ptr;
   l4ccsm_cc_notify_ss_arg_struct *arg_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(notify_ss_ind_ptr,
                              l4ccsm_cc_notify_ss_ind_struct)      
   
   notify_ss_ind_ptr->src_id = CALL_DATA(call_id, src_id);
   notify_ss_ind_ptr->call_id = call_id;
   notify_ss_ind_ptr->ccbs_recall_numP= KAL_FALSE;

   arg_ptr = &(notify_ss_ind_ptr->notify_ss_arg);

   arg_ptr->type = CSMCC_NOTIFY_NONE;

   if(notify_ss_arg_ptr->ss_NotificationOpt == KAL_TRUE
      && ((notify_ss_arg_ptr->ss_Notification->octs[0]) & SS_CF_MASK) > 0)
   {
      /* notification, just the last 3 bits used. 24.080 */
      if(notify_ss_arg_ptr->ss_CodeOpt == KAL_TRUE)
      {
         switch(notify_ss_arg_ptr->ss_Code->octs[0])
         {
            case SS_ALLFORWARDINGSS:
               arg_ptr->type = CSMCC_NOTIFY_CF;
               break;
            case SS_CFU:
               arg_ptr->type = CSMCC_NOTIFY_CF_CFU;
               break;
            case SS_ALLCONDFORWARDINGSS:
               arg_ptr->type = CSMCC_NOTIFY_CF_CFC;
               break;
            case SS_CFB:
               arg_ptr->type = CSMCC_NOTIFY_CF_CFB;
               break;
            case SS_CFNRY:
               arg_ptr->type = CSMCC_NOTIFY_CF_CFNRY;
               break;
            case SS_CFNRC:
               arg_ptr->type = CSMCC_NOTIFY_CF_CFNRC;
               break;
            case SS_CD:
               /* 17.7.7.5, 29.002, CD belongs to Call forwarding ss. */
               /* 24.072, 24.080 */
               arg_ptr->type = CSMCC_NOTIFY_CD;
               break;               
            default:
               break;
         }
      }
      else
      {      
         arg_ptr->type = CSMCC_NOTIFY_CF;
      }
   }      
   else if(notify_ss_arg_ptr->callIsWaiting_IndicatorOpt == KAL_TRUE)
   {
      arg_ptr->type = CSMCC_NOTIFY_CW;
   }
   else if(notify_ss_arg_ptr->callOnHold_IndicatorOpt == KAL_TRUE)
   {
      if(notify_ss_arg_ptr->callOnHold_Indicator == CALL_RETRIEVED)
      {
         arg_ptr->type = CSMCC_NOTIFY_CALL_RETRIEVED;
      }
      else
      {
         arg_ptr->type = CSMCC_NOTIFY_CALL_HELD;
      }
   }
   else if(notify_ss_arg_ptr->mpty_IndicatorOpt == KAL_TRUE)
   {
      arg_ptr->type = CSMCC_NOTIFY_MPTY;
   }
   else if(notify_ss_arg_ptr->cug_IndexOpt == KAL_TRUE)
   {
      arg_ptr->type = CSMCC_NOTIFY_CUG;
      arg_ptr->cug_index = (kal_uint16)notify_ss_arg_ptr->cug_Index->value;
   }   
   else if(notify_ss_arg_ptr->clirSuppressionRejectedOpt == KAL_TRUE)
   {
      arg_ptr->type = CSMCC_NOTIFY_CLIR_REJECT;
   }
   else if(notify_ss_arg_ptr->ect_IndicatorOpt == KAL_TRUE)
   {
      if(notify_ss_arg_ptr->ect_Indicator->ect_CallState == ECT_ALERTING)
      {
         arg_ptr->type = CSMCC_NOTIFY_ECT_ALERTING;
      }
      else
      {
         arg_ptr->type = CSMCC_NOTIFY_ECT_ACTIVE;
      }

      csmcc_fill_ect_rdn(&(arg_ptr->ect_rdn),
                         notify_ss_arg_ptr->ect_Indicator);
   }
   else if(notify_ss_arg_ptr->nameIndicatorOpt == KAL_TRUE)
   {
      /* MAUI_01312387, catcher event */
      /* MAUI_01670421, replace kal_trace by ps_event_trace for catcher event info */
      ps_event_trace(TRACE_FUNC, EVENT_INFO_TRACE_FUNC_CC_CNAP, MOD_CSM);
      
      if(CALL_DATA(call_id, call_orig) != CSMCC_MT_CALL
	  	|| (GET_CALL_STATE(call_id) != CSMCC_CALL_INIT && CALL_DATA(call_id, cw_flag) != KAL_TRUE)
	  	|| (CALL_DATA(call_id, clir_info) == CSMCC_CLIR_INVOCATION)) //mtk01602, 070724
      {
		  /*[Cosine CNAP] Not pass CNAP if it comes in MO call or MT after call connected state*/
		  arg_ptr->type = CSMCC_NOTIFY_NONE;
      }
      else
      {
      #ifdef __CNAP_SUPPORT__
          arg_ptr->type = CSMCC_NOTIFY_CNAP;
          if(notify_ss_arg_ptr->nameIndicator->callingNameOpt == KAL_TRUE)
          {
       	      /*[Cosine CNAP] save name information into csmcc context. (CSMCC_PTR->cnap_info) */
	      csmcc_fill_name_ind(notify_ss_arg_ptr->nameIndicator);
	  }
      #else
 	  arg_ptr->type = CSMCC_NOTIFY_NONE;		
      #endif /*__CNAP_SUPPORT__*/
      }       
   }/*mtk00924 20061112: ss_code maybe a optional field, therefore, CSM should depends on ccbs_FeatureOpt to send indication to L4C*/       
   //else if(notify_ss_arg_ptr->ss_CodeOpt == KAL_TRUE
   //        && notify_ss_arg_ptr->ss_Code->octs[0] == SS_CCBS_A)
   //{
   //   arg_ptr->type = CSMCC_NOTIFY_CCBS;
   else if(notify_ss_arg_ptr->ccbs_FeatureOpt == KAL_TRUE)
      {
#ifdef __CCBS_SUPPORT__
         /* MAUI_01312387, catcher event */
	 /* MAUI_01670421, replace kal_trace by ps_event_trace for catcher event info */
         ps_event_trace(TRACE_FUNC, EVENT_INFO_TRACE_FUNC_CC_CCBS, MOD_CSM);

         arg_ptr->type = CSMCC_NOTIFY_CCBS;
         arg_ptr->ccbs_ind.ccbs_feature_present = KAL_TRUE;
         csmcc_fill_ccbs_feature(&(arg_ptr->ccbs_ind.ccbs_feature),
                                 notify_ss_arg_ptr->ccbs_Feature);


   	if(CALL_DATA(call_id, number_present))
   	{
		notify_ss_ind_ptr->ccbs_recall_numP = KAL_TRUE;
		notify_ss_ind_ptr->ccbs_recall_num = CALL_DATA(call_id, number);

		//CSMCC_PTR->ccbs_recall_numP = KAL_FALSE;
		//kal_mem_set(&(CSMCC_PTR->ccbs_recall_num), 0, sizeof(l4_addr_bcd_struct));
   	}
	else
		notify_ss_ind_ptr->ccbs_recall_numP = KAL_FALSE;
#else
	arg_ptr->type = CSMCC_NOTIFY_NONE;
#endif /*__CCBS_SUPPORT__*/
      }
                                 
    else if(notify_ss_arg_ptr->alertingPatternOpt == KAL_TRUE)
      {
         arg_ptr->ccbs_ind.alertingPattern_present = KAL_TRUE;
         arg_ptr->ccbs_ind.altertingPattern = 
            notify_ss_arg_ptr->alertingPattern->octs[0];
      }
    else if(notify_ss_arg_ptr->ss_StatusOpt == KAL_TRUE
      && ((notify_ss_arg_ptr->ss_Status->octs[0]) & SS_ACT_MASK) > 0)
   {
      /* 24.080, SS Staus: 17.7.4 of 29.002 (QPRS). 23.011 */
      if(notify_ss_arg_ptr->ss_CodeOpt == KAL_TRUE)
      {
         switch(notify_ss_arg_ptr->ss_Code->octs[0])
         {
            case SS_ALLFORWARDINGSS:
            case SS_CFU:
               arg_ptr->type = CSMCC_NOTIFY_CFU;
               break;
            case SS_ALLCONDFORWARDINGSS:
            case SS_CFB:
            case SS_CFNRY:
            case SS_CFNRC:
               arg_ptr->type = CSMCC_NOTIFY_CFC;
               break;
            case SS_ALLBARRINGSS:
               arg_ptr->type = CSMCC_NOTIFY_BAC;
               break;
            case SS_BARRINGOFOUTGOINGCALLS:
            case SS_BAOC:
            case SS_BOIC:
            case SS_BOICEXHC:
               arg_ptr->type = CSMCC_NOTIFY_BAOC;
               break;
            case SS_BARRINGOFINCOMINGCALLS:
            case SS_BAIC:
            case SS_BICROAM:
               arg_ptr->type = CSMCC_NOTIFY_BAIC;
               break;
            default:
               break;
         }
      }
   }
   
   if(notify_ss_arg_ptr->ss_StatusOpt == KAL_TRUE
      && ((notify_ss_arg_ptr->ss_Status->octs[0]) & SS_ACT_MASK) > 0)
   {
      arg_ptr->status_present = KAL_TRUE;
      arg_ptr->status = notify_ss_arg_ptr->ss_Status->octs[0];	
   }
   
   if(notify_ss_arg_ptr->ss_NotificationOpt == KAL_TRUE
      && ((notify_ss_arg_ptr->ss_Notification->octs[0]) & SS_CF_MASK) > 0)
   {
      arg_ptr->notification_present = KAL_TRUE;
      arg_ptr->notification = notify_ss_arg_ptr->ss_Notification->octs[0];	  	
   }

   if(arg_ptr->type != CSMCC_NOTIFY_NONE)
   {       
      csmcc_send_ilm(notify_ss_ind_ptr, 
                     MSG_ID_L4CCSM_CC_NOTIFY_SS_IND, 
                     MOD_L4C,
                     NULL);
   }
   else
   {
      /* free notify_ss_ind_ptr. */
       free_local_para( ( local_para_struct * ) notify_ss_ind_ptr );      
   }
                     
   return CSMCC_NO_ERROR;   

} /* end of csmcc_send_l4c_notify_ss_ind */

#ifdef __SAT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_call_ctrl_req
* DESCRIPTION                                                           
*   This procedure is used to send call control request to SIM.
*
* CALLS  
*	csmcc_send_sim_call_ctrl_req(kal_uint8 call_id) 
*
* PARAMETERS
*	call_id		IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_call_ctrl_req(kal_uint8 call_id, kal_bool is_sat_action)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   sat_call_ctrl_by_sim_req_struct *call_ctrl_ptr;
   csmcc_call_context_struct *call_context_ptr;
   mncc_bc_struct peer_bc1;
   mncc_bc_struct peer_bc2;
   peer_buff_struct *addr_buff_ptr; /* for address */
   kal_uint16 len = 0;
   //ilm_struct *ilm_ptr = NULL;

   CSMCC_CONSTRUCT_LOCAL_PARA(call_ctrl_ptr,
                              sat_call_ctrl_by_sim_req_struct)    

   call_context_ptr = &(CALL_ENTRY(call_id));
 
   /* type */
   call_ctrl_ptr->type = SAT_SETUP_CALL;

   /* address */
   addr_buff_ptr = construct_peer_buff(call_context_ptr->number.addr_length,
                                       CSMCC_KAL_U_ZERO, 
                                       CSMCC_KAL_U_ZERO,
                                       TD_CTRL);
  
   kal_mem_cpy(get_peer_buff_pdu(addr_buff_ptr, &len),
               call_context_ptr->number.addr_bcd,
               call_context_ptr->number.addr_length);
   
   /* ccp1 */   
   csmcc_form_peer_bc(&peer_bc1, 
                      &(CSMCC_PTR->nego_bc.bc1));

   call_ctrl_ptr->size_of_ccp1 = peer_bc1.no_value;
   kal_mem_cpy(call_ctrl_ptr->ccp1,
               peer_bc1.value,
               peer_bc1.no_value);

   /* subaddress */
#ifdef __SUBADDR_SUPPORT__
   if(call_context_ptr->sub_addr_present == KAL_TRUE)
   {
      call_ctrl_ptr->size_of_subaddr = call_context_ptr->sub_addr.sub_addr_len;
      kal_mem_cpy(call_ctrl_ptr->subaddr,
                  call_context_ptr->sub_addr.sub_addr,
                  call_context_ptr->sub_addr.sub_addr_len);
   }
   else 
#endif
   {
      call_ctrl_ptr->size_of_subaddr = 0;
   }

   /* ccp2 */   
   if(CSMCC_PTR->nego_bc.bc2_present == KAL_TRUE)
   {
      csmcc_form_peer_bc(&peer_bc2, 
                         &(CSMCC_PTR->nego_bc.bc2));

      call_ctrl_ptr->size_of_ccp2 = peer_bc2.no_value;
      kal_mem_cpy(call_ctrl_ptr->ccp2,
                  peer_bc2.value,
                  peer_bc2.no_value);
   }
   else
   {
      call_ctrl_ptr->size_of_ccp2 = 0;
   }
   
   call_ctrl_ptr->is_sat_action = is_sat_action;
   
   csmcc_send_ilm(call_ctrl_ptr,
                  MSG_ID_SAT_CALL_CTRL_BY_SIM_REQ,
                  MOD_SIM,
                  addr_buff_ptr);

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_sim_call_ctrl_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_sat_setup_fail
* DESCRIPTION                                                           
*   This procedure is used to send SAT proactive call setup failure to L4C.
*
* CALLS  
*	csmcc_send_l4c_sat_setup_fail(kal_uint8 src_id, 
*                                kal_uint8 res,
*                                kal_uint8 add_res)
*
* PARAMETERS
*  src_id      IN first variable, used as input
*	res         IN	second variable, used as input
*  add_res     IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_sat_setup_fail(kal_uint8 src_id,
                                               kal_uint8 res,
                                               kal_uint8 add_res,
                                               /*Michael: for SAT retry, to tell L4C lower layer failure*/
                                               kal_uint16 cause,
                                               kal_uint8 call_id) 
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_sat_setup_cnf_struct *sat_setup_cnf_ptr;
   //kal_uint8 call_id;
   kal_uint16 len = 0;
   csmcc_call_context_struct *call_context_ptr;
   peer_buff_struct *addr_buff_ptr = NULL;  /*mtk00924: remove warning C2874W may be used before being set*/
   
   //ilm_struct *ilm_ptr = NULL;
   //call_id = CSMCC_PTR->req_call_id;

   CSMCC_CONSTRUCT_LOCAL_PARA(sat_setup_cnf_ptr,
                              l4ccsm_cc_sat_setup_cnf_struct)    
                              
   sat_setup_cnf_ptr->response = CSMCC_FAILURE;
   sat_setup_cnf_ptr->terminal_res = res;
   sat_setup_cnf_ptr->additional_res = add_res;

   /*Michael: L4C use cause deside if it is lower layer failure*/
   if(cause != CSMCC_NO_CAUSE)
   {
      sat_setup_cnf_ptr->cause_present = KAL_TRUE;
      sat_setup_cnf_ptr->cause = cause;
   }
   else
   {
      sat_setup_cnf_ptr->cause_present = KAL_FALSE;
   }

   /*Michael: have to send ccp to L4C, this ccp  is either form L4C or SIM 
   and then L4C can use the ccp to retry SAT call*/
   kal_mem_cpy(sat_setup_cnf_ptr->ccp, 
                 CSMCC_PTR->ccp_temp, 
                 15);   
   sat_setup_cnf_ptr->size_of_ccp=CSMCC_PTR->size_of_ccp_temp;


   if (call_id != CSMCC_INVALID_CALL_ID)
   {
      call_context_ptr = &(CALL_ENTRY(call_id));

      sat_setup_cnf_ptr->src_id = call_context_ptr->src_id;
      sat_setup_cnf_ptr->type_of_modification = call_context_ptr->type_of_modification; //mtk01602
      /*Michael: have to send sub_addr to L4C, this sub_addr is either form L4C or SIM 
      and then L4C can use the sub_addr to retry SAT call*/  
#ifdef __SUBADDR_SUPPORT__
      if(call_context_ptr->sub_addr_present == KAL_TRUE)
      {
         sat_setup_cnf_ptr->connected_sub_addr_present = KAL_TRUE;
         sat_setup_cnf_ptr->connected_sub_addr = call_context_ptr->sub_addr;
      }
#endif 
      /*Michael: construct a peer buffer to send number back to L4C*/
      if(call_context_ptr->number_present == KAL_TRUE)
      {
         addr_buff_ptr = construct_peer_buff(call_context_ptr->number.addr_length,
                                             CSMCC_KAL_U_ZERO, 
                                             CSMCC_KAL_U_ZERO,
                                             TD_CTRL);
        
         kal_mem_cpy(get_peer_buff_pdu(addr_buff_ptr, &len),
                     call_context_ptr->number.addr_bcd,
                     call_context_ptr->number.addr_length);
      }
   }
   else
   {
      /* no call_context is stored before */
      sat_setup_cnf_ptr->src_id = src_id;
      sat_setup_cnf_ptr->type_of_modification = SIMCALLCONTROL_NOMODIFY;
      sat_setup_cnf_ptr->connected_sub_addr_present = KAL_FALSE;
      sat_setup_cnf_ptr->call_id_present = KAL_FALSE;
      sat_setup_cnf_ptr->connected_number_present = KAL_FALSE;
   }

   csmcc_send_ilm(sat_setup_cnf_ptr,
                  MSG_ID_L4CCSM_CC_SAT_SETUP_CNF,
                  MOD_L4C,
                  addr_buff_ptr);
                
   csmcc_reset_cur_req(CSMCC_SAT_SETUP_REQ);
   /* MAUI_01431417 [CSMCC][Fixbug] Fix bug for MAUI_00682453 */
   csmcc_reset_prev_req(CSMCC_SAT_SETUP_REQ);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_sat_setup_fail */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_sat_setup_succ
* DESCRIPTION                                                           
*   This procedure is used to send SAT proactive call setup success to L4C.
*
* CALLS  
*	csmcc_send_l4c_sat_setup_succ(kal_uint8 call_id, 
*                                mncc_setup_cnf_struct *setup_cnf_ptr)
*
* PARAMETERS
*  call_id        IN first variable, used as input
*	setup_cnf_ptr  IN	second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_sat_setup_succ(kal_uint8 call_id,
                                 mncc_setup_cnf_struct *setup_cnf_ptr)
                                              
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_sat_setup_cnf_struct *sat_setup_cnf_ptr;
   csmcc_call_context_struct *call_context_ptr; 
   call_context_ptr = &(CALL_ENTRY(call_id)); //mtk01602

   CSMCC_CONSTRUCT_LOCAL_PARA(sat_setup_cnf_ptr,
                              l4ccsm_cc_sat_setup_cnf_struct)    

   sat_setup_cnf_ptr->call_id_present = KAL_TRUE;
   sat_setup_cnf_ptr->call_id = call_id;
   sat_setup_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   sat_setup_cnf_ptr->response = CSMCC_SUCCESS;
   sat_setup_cnf_ptr->terminal_res = SAT_CMD_PERFORMED_SUCCESSFULLY;
   sat_setup_cnf_ptr->additional_res = SAT_NO_SPECIFIC_CAUSE;
   sat_setup_cnf_ptr->type_of_modification = call_context_ptr->type_of_modification; //mtk01602
   if(setup_cnf_ptr->connected_numP == KAL_TRUE)   
   {
      sat_setup_cnf_ptr->connected_number_present = KAL_TRUE;
      sat_setup_cnf_ptr->connected_number = setup_cnf_ptr->connected_num;      
   }
#ifdef __SUBADDR_SUPPORT__  
   if(setup_cnf_ptr->connected_sub_addrP == KAL_TRUE)
   {
      sat_setup_cnf_ptr->connected_sub_addr_present = KAL_TRUE;
      sat_setup_cnf_ptr->connected_sub_addr = setup_cnf_ptr->connected_sub_addr;
   }
#endif
   csmcc_send_ilm(sat_setup_cnf_ptr,
                  MSG_ID_L4CCSM_CC_SAT_SETUP_CNF,
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_SAT_SETUP_REQ);
   /* MAUI_01431417 [CSMCC][Fixbug] Fix bug for MAUI_00682453 */
   csmcc_reset_prev_req(CSMCC_SAT_SETUP_REQ);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_sat_setup_succ */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_file_change_res
* DESCRIPTION                                                           
*   This procedure is used to send SAT file change response
*
* CALLS  
*	csmcc_send_sim_file_change_res(kal_bool res)
*
* PARAMETERS
*  res       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_file_change_res(kal_bool res)
{
   CSMCC_PTR_G_TO_L
    
   sat_file_change_res_struct *sat_file_change_res_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(sat_file_change_res_ptr,
                              sat_file_change_res_struct)    

   sat_file_change_res_ptr->is_successful = res;

   csmcc_send_ilm(sat_file_change_res_ptr,
                  MSG_ID_SAT_FILE_CHANGE_RES,
                  MOD_SIM,
                  NULL);
                                   
   CSMCC_PTR->sat_file_change_req = KAL_FALSE; /* ALPS00439699 */
 
   return CSMCC_NO_ERROR;
}   /* end of csmcc_send_sim_file_change_res */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_call_status_ind
* DESCRIPTION                                                           
*   This procedure is used to send SIM call status for SAT
*
* CALLS  
*	csmcc_send_sim_call_status_ind(kal_bool call_status)
*
* PARAMETERS
*  call_status       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_call_status_ind(kal_bool call_status)
{
   sat_call_status_ind_struct *sat_call_status_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(sat_call_status_ind_ptr,
                              sat_call_status_ind_struct)    

   sat_call_status_ind_ptr->call_status = call_status;

   csmcc_send_ilm(sat_call_status_ind_ptr,
                  MSG_ID_SAT_CALL_STATUS_IND,
                  MOD_SIM,
                  NULL);

   return CSMCC_NO_ERROR;

}  /* end of csmcc_send_sim_call_status_ind */

#endif /* __SAT__ */ 

#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_csd_est_ind
* DESCRIPTION                                                           
*   This procedure is used to send CSD establishment indication to L4C
*
* CALLS  
*	csmcc_send_l4c_csd_est_ind(kal_uint8 call_id)
*
* PARAMETERS
*  call_id       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_csd_est_ind(kal_uint8 call_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_csd_est_ind_struct *csd_est_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(csd_est_ind_ptr,
                              l4ccsm_cc_csd_est_ind_struct)    

   csd_est_ind_ptr->src_id = CALL_DATA(call_id, src_id);
   csd_est_ind_ptr->call_id = call_id;
   csd_est_ind_ptr->call_type = GET_CALL_TYPE(call_id);
#ifdef __TCPIP_OVER_CSD__
   /* Add profile type for __DTCNT_SIM_PROFILES_SUPPORT__ */
   csd_est_ind_ptr->profile_type = CSMCC_PTR->prof_type;
#endif   
   switch(CSMCC_PTR->channel_mode)
   {
      case DATA_14_5_RADIO_INTF_RATE:
         csd_est_ind_ptr->user_rate = 14400;
         break;      
      case DATA_12_0_RADIO_INTF_RATE:
         csd_est_ind_ptr->user_rate = 9600;
         break;      
      case DATA_06_0_RADIO_INTF_RATE:
         csd_est_ind_ptr->user_rate = 4800;
         break;      
      case DATA_03_6_RADIO_INTF_RATE:
         csd_est_ind_ptr->user_rate = 2400;
         break;      
   }
  
   csmcc_send_ilm(csd_est_ind_ptr,
                  MSG_ID_L4CCSM_CC_CSD_EST_IND,
                  MOD_L4C,
                  NULL);

   return CSMCC_NO_ERROR;   
   
} /* end of csmcc_send_l4c_csd_est_ind */

#endif  /* defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__) */

#ifdef __TCPIP_OVER_CSD__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_set_csd_prof_cnf
* DESCRIPTION                                                           
*   This procedure is used to send CSD setting confirmation to L4C
*
* CALLS  
*	csmcc_send_l4c_set_csd_prof_cnf(kal_uint8 result, kal_uint8 error_code)
*
* PARAMETERS
*  result       IN first variable, used as input
*  error_code   IN second variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_set_csd_prof_cnf(kal_uint8 result, kal_uint8 error_code)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_set_csd_prof_cnf_struct *set_csd_prof_ptr;
      
   CSMCC_CONSTRUCT_LOCAL_PARA(set_csd_prof_ptr,
                              l4ccsm_cc_set_csd_prof_cnf_struct)
                                 
   set_csd_prof_ptr->src_id = CSMCC_PTR->req_src_id;                                 
   set_csd_prof_ptr->result = result;
   set_csd_prof_ptr->error_cause = error_code;

   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   set_csd_prof_ptr->sat_cbst.speed = CSMCC_PTR->sat_prof.sat_cbst.speed;
   set_csd_prof_ptr->sat_cbst.service_name = CSMCC_PTR->sat_prof.sat_cbst.service_name;
   set_csd_prof_ptr->sat_cbst.ce = CSMCC_PTR->sat_prof.sat_cbst.ce;
   #endif
   csmcc_send_ilm(set_csd_prof_ptr,
                  MSG_ID_L4CCSM_CC_SET_CSD_PROF_CNF,
                  MOD_L4C,
                  NULL);
                  
   csmcc_reset_cur_req(CSMCC_SET_CSD_PROF_REQ);                      
                  
   return CSMCC_NO_ERROR;                  
}
#endif /* __TCPIP_OVER_CSD__ */

#if defined (__CPHS__) || defined (__CCM_NO_RESET__)  
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_nvram_als_req
* DESCRIPTION                                                           
*   This procedure is used to request to update line id in nvram.
*
* CALLS  
*
* PARAMETERS
*  kal_uint8   line_id
*  kal_uint32  last_ccm
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_nvram_als_req(kal_uint8 line_id, kal_uint32 last_ccm)
{
   CSMCC_PTR_G_TO_L
   nvram_write_req_struct *nvram_write_ptr;
   //ilm_struct *ilm_ptr;
   peer_buff_struct *peer_buff_ptr;
   kal_uint8 *pdu_ptr;
   kal_uint16 len;
 
   CSMCC_CONSTRUCT_LOCAL_PARA(nvram_write_ptr,
                              nvram_write_req_struct)    

   nvram_write_ptr->file_idx = NVRAM_EF_ALS_LINE_ID_LID;
#ifdef __GEMINI_3G_SWITCH__
   nvram_write_ptr->para = 1+ (kal_uint16)l4c_gemini_get_actual_sim_id(CSMCC_PTR->csmcc_sim_interface);
#else
   nvram_write_ptr->para = 1+ (kal_uint16)CSMCC_PTR->csmcc_sim_interface;
#endif
   
   peer_buff_ptr = construct_peer_buff(sizeof(nvram_ef_als_line_id_struct),
                                       0, 0, TD_CTRL);
                                       
   pdu_ptr= (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &len);
                                                                      
   pdu_ptr[0] = line_id;
   pdu_ptr[1] = 0;  /* no use for this byte. */

   /*Write CCM value if compile option is turned on. */
 #if defined (__CCM_NO_RESET__) && defined (__AOC_SUPPORT__)
   pdu_ptr[2] = last_ccm & 0x000000ff;
   pdu_ptr[3] = (last_ccm & 0x0000ff00)>>8;
   pdu_ptr[4] = (last_ccm & 0x00ff0000)>>16;
   pdu_ptr[5] = (last_ccm & 0xff000000)>>24;
#endif

   csmcc_send_ilm(nvram_write_ptr,
                  MSG_ID_NVRAM_WRITE_REQ,
                  MOD_NVRAM,
                  peer_buff_ptr);
      
   return CSMCC_NO_ERROR;                  
}
#endif /* (__CPHS__) || (__CCM_NO_RESET__) */
#ifdef __CPHS__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_display_als_ind
* DESCRIPTION                                                           
*   This procedure is used to send MSG_ID_L4CCSM_CPHS_DISPLAY_ALS_IND to l4c.
*
* CALLS  
*
* PARAMETERS
*	line_id		first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_display_als_ind (kal_uint8 line_id)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cphs_display_als_ind_struct *als_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(als_ind_ptr,
                              l4ccsm_cphs_display_als_ind_struct)   
                                   
 
   als_ind_ptr->src_id = CSMCC_PTR->req_src_id;
   als_ind_ptr->line_id = line_id;
    
              
   csmcc_send_ilm(als_ind_ptr, 
                  MSG_ID_L4CCSM_CPHS_DISPLAY_ALS_IND, 
                  MOD_L4C,
                  NULL);
  
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_display_als_ind */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_update_als_cnf
* DESCRIPTION                                                           
*   This procedure is used to send update als confirmation to L4C.
*
* CALLS  
*	
* PARAMETERS
*   src_id      IN first variable, used as input
*	response    IN	second variable, used as input
*   cause       IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_update_als_cnf( kal_uint8 result,
                                          kal_uint16 error_cause)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_update_als_cnf_struct *update_als_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(update_als_cnf_ptr, 
                              l4ccsm_cc_update_als_cnf_struct)   

   update_als_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   update_als_cnf_ptr->result = result;
   update_als_cnf_ptr->error_cause = error_cause;

   csmcc_send_ilm(update_als_cnf_ptr,
                  MSG_ID_L4CCSM_CC_UPDATE_ALS_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(CSMCC_UPDATE_ALS_REQ);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_update_als_cnf */
#ifdef __AOC_SUPPORT__
#if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__)
/* MAUI_01938414 [CSMCC][Revise] support reset last ccm */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_last_ccm_reset_cnf
* DESCRIPTION                                                           
*   This procedure is used to send update als confirmation to L4C.
*
* CALLS  
*	
* PARAMETERS
*   src_id      IN first variable, used as input
*	response    IN	second variable, used as input
*   cause       IN third variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_last_ccm_reset_cnf( kal_uint8 result,
                                          kal_uint16 error_cause)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_last_ccm_reset_cnf_struct *reset_last_ccm_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(reset_last_ccm_cnf_ptr, 
                              l4ccsm_cc_last_ccm_reset_cnf_struct)   

   reset_last_ccm_cnf_ptr->src_id = CSMCC_PTR->req_src_id;
   reset_last_ccm_cnf_ptr->result = result;
   reset_last_ccm_cnf_ptr->error_cause = error_cause;

   csmcc_send_ilm(reset_last_ccm_cnf_ptr,
                  MSG_ID_L4CCSM_CC_LAST_CCM_RESET_CNF,
                  MOD_L4C,
                  NULL);

   csmcc_reset_cur_req(CSMCC_RESET_LAST_CCM_REQ);

   return CSMCC_NO_ERROR;

} /* end of csmcc_send_l4c_last_ccm_reset_cnf */
#endif/*(__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__)*/
#endif/*__AOC_SUPPORT__*/
#endif /* __CPHS__ */



/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_call_info_ind
* DESCRIPTION                                                           
*   This procedure is used to send SIM call status for SAT
*
* CALLS  
*	csmcc_send_sim_call_status_ind(kal_bool call_status)
*
* PARAMETERS
*  call_status       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_call_info_ind(kal_bool call_exist)
{
   l4ccsm_cc_call_info_ind_struct *l4c_cc_call_info_ind_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(l4c_cc_call_info_ind_ptr,
                              l4ccsm_cc_call_info_ind_struct)    

   l4c_cc_call_info_ind_ptr->src_id = 0;
   l4c_cc_call_info_ind_ptr->call_exist = call_exist;

   csmcc_send_ilm(l4c_cc_call_info_ind_ptr,
                  MSG_ID_L4CCSM_CC_CALL_INFO_IND,
                  MOD_L4C,
                  NULL);

   return CSMCC_NO_ERROR;

}  /* end of csmcc_send_l4c_call_info_ind*/

/*************************************************************************
* FUNCTION                                                                                                                    
*	csmcc_send_l4c_auto_dtmf_start_ind
* DESCRIPTION                                                           
*   This procedure is used to send starting auto dtmf indication to L4C.
*
* CALLS  
*	csmcc_send_l4c_auto_dtmf_start_ind(kal_uint8 call_id)
*
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_auto_dtmf_start_ind(kal_uint8 call_id)
{
   l4ccsm_cc_auto_dtmf_start_ind_struct *auto_dtmf_start_ind_ptr;
   csmcc_dtmf_struct *dtmf_ptr;
   kal_uint8 remain_dtmf_count;

   CSMCC_CONSTRUCT_LOCAL_PARA(auto_dtmf_start_ind_ptr, 
                              l4ccsm_cc_auto_dtmf_start_ind_struct) 
                  
   auto_dtmf_start_ind_ptr->call_id = call_id;
   auto_dtmf_start_ind_ptr->src_id = CALL_DATA(call_id,src_id);
   
   dtmf_ptr = &(CALL_DATA(call_id,dtmf));
   
   remain_dtmf_count = dtmf_ptr->count - dtmf_ptr->cur_digit_index;  

   if (remain_dtmf_count == 0 )
   {
      /* no remaining dtmf, not need to send auto dtmf start ind. */
      return CSMCC_NO_ERROR;
   }
   
   /* remain_dtmf_count (in digit) should be less than ((MAX_CC_ADDR_BCD_LEN-1)*2)*/
   if (remain_dtmf_count > ((MAX_CC_ADDR_BCD_LEN -1) << 1))
   {
      remain_dtmf_count = ((MAX_CC_ADDR_BCD_LEN -1) << 1);
   }

   auto_dtmf_start_ind_ptr->digit_count 
       = csmcc_bcd_encode( (dtmf_ptr->digit+dtmf_ptr->cur_digit_index), 
                         auto_dtmf_start_ind_ptr->dtmf_digit, 
                         remain_dtmf_count );
   
   csmcc_send_ilm(auto_dtmf_start_ind_ptr, 
                  MSG_ID_L4CCSM_CC_AUTO_DTMF_START_IND, 
                  MOD_L4C,
                  NULL);
                  
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_auto_dtmf_start_ind */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_gen_notify_ss_ind
* DESCRIPTION                                                           
*   This procedure is used to generate notify SS and then send to L4C.
*
* CALLS  
*	
* PARAMETERS
*	call_id 	IN	first variable, used as input
*    notify_ss_type IN, used as input.
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_gen_notify_ss_ind(kal_uint8 call_id, 
                                         csmcc_notify_ss_type_enum notify_ss_type)
{
   l4ccsm_cc_notify_ss_ind_struct *notify_ss_ind_ptr;

   if (notify_ss_type != CSMCC_NOTIFY_NONE)
   {
      CSMCC_CONSTRUCT_LOCAL_PARA(notify_ss_ind_ptr,
                                 l4ccsm_cc_notify_ss_ind_struct)      
      
      notify_ss_ind_ptr->src_id = CALL_DATA(call_id, src_id);
      notify_ss_ind_ptr->call_id = call_id;

      notify_ss_ind_ptr->notify_ss_arg.type = notify_ss_type;

      csmcc_send_ilm(notify_ss_ind_ptr, 
                     MSG_ID_L4CCSM_CC_NOTIFY_SS_IND, 
                     MOD_L4C,
                     NULL);
   }
   
   return CSMCC_NO_ERROR;
}

#ifdef __SAT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_sat_send_dtmf_cnf
* DESCRIPTION                                                           
*   This procedure is used to send l4c sat_send_dtmf_cnf
*
* CALLS  
*	
*
* PARAMETERS
* 
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_sat_send_dtmf_cnf(kal_uint8 src_id, 
                                              kal_uint8 res, 
                                              kal_uint8 cause)
{
   l4ccsm_cc_sat_send_dtmf_cnf_struct *l4c_cc_sat_send_dtmf_cnf_ptr;

   CSMCC_CONSTRUCT_LOCAL_PARA(l4c_cc_sat_send_dtmf_cnf_ptr,
                              l4ccsm_cc_sat_send_dtmf_cnf_struct)    

   l4c_cc_sat_send_dtmf_cnf_ptr->src_id = src_id;
   l4c_cc_sat_send_dtmf_cnf_ptr->res = res;
   l4c_cc_sat_send_dtmf_cnf_ptr->cause = cause;
  
   csmcc_send_ilm(l4c_cc_sat_send_dtmf_cnf_ptr,
                  MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_CNF,
                  MOD_L4C,
                  NULL);

   return CSMCC_NO_ERROR;

}  /* end of csmcc_send_l4c_sat_send_dtmf_cnf*/

#ifndef __SAT_LOWCOST_NW_DISABLE__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_call_conn_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM call conn req for SAT
*
* CALLS  
*
* PARAMETERS
*  call_status       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_call_conn_req(kal_uint8 ti, kal_bool is_mt_call)
{
    kal_uint8 mode;

    l4c_cc_get_evdlcall_mode_req(&mode);

    if(mode == 1) /* trigger by modem */
    {
       sat_evdl_call_connect_req_struct *sat_call_conn_req_ptr;

       CSMCC_CONSTRUCT_LOCAL_PARA(sat_call_conn_req_ptr,
                                  sat_evdl_call_connect_req_struct)    
       if(is_mt_call)
       {
          sat_call_conn_req_ptr->ti = ti<<4;
       }
       else
       {
          sat_call_conn_req_ptr->ti = ((CSMCC_TI_FLAG_MASK|ti)<<4);
       }

       //sat_call_conn_req_ptr->ti = ti;
       sat_call_conn_req_ptr->is_mt_call = is_mt_call;

       csmcc_send_ilm(sat_call_conn_req_ptr,
                      MSG_ID_SAT_EVDL_CALL_CONNECT_REQ,
                      MOD_SIM,
                      NULL);
    }
    else
    {
        l4ccsm_cc_sat_evdl_call_ind_struct *sat_call_conn_req_ptr;

        CSMCC_CONSTRUCT_LOCAL_PARA(sat_call_conn_req_ptr,
                                   l4ccsm_cc_sat_evdl_call_ind_struct) 

        if(is_mt_call)
        {
           sat_call_conn_req_ptr->ti = ti<<4;
        }
        else
        {
           sat_call_conn_req_ptr->ti = ((CSMCC_TI_FLAG_MASK|ti)<<4);
        }

        sat_call_conn_req_ptr->is_mt_call = is_mt_call;
        sat_call_conn_req_ptr->status = SAT_EVDL_CALL_CONNECT;

        csmcc_send_ilm(sat_call_conn_req_ptr,
                    MSG_ID_L4CCSM_CC_SAT_EVDL_CALL_IND,
                    MOD_L4C,
                    NULL);
    }

    return CSMCC_NO_ERROR;
}  /* end of csmcc_send_sim_call_conn_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_call_conn_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM mt call req for SAT
*
* CALLS  
* PARAMETERS
*  call_status       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
#ifdef __SUBADDR_SUPPORT__
csmcc_ret_t csmcc_send_sim_mt_call_req( kal_uint8 ti,
                                        kal_bool addr_p,
                                        kal_bool sub_addr_p,
                                        l4_addr_bcd_struct *addr,
                                        l4ccsm_cc_sub_addr_struct *sub_addr)
#else
csmcc_ret_t csmcc_send_sim_mt_call_req( kal_uint8 ti,
                                        kal_bool addr_p,
                                        l4_addr_bcd_struct *addr)
#endif
{
   sat_evdl_mt_call_req_struct *sat_mt_call_req_ptr;
   kal_uint8 reversed_ti_flag;

   CSMCC_CONSTRUCT_LOCAL_PARA(sat_mt_call_req_ptr,
                              sat_evdl_mt_call_req_struct)    
   /*The ti that SIM needed is the ti_value and ti_flag in SETUP message(spec 27.22.7.1), 
   but CC has already reversed ti_flag, so retrieve it and reverse it back to original value*/
   reversed_ti_flag = (~(CSMCC_TI_FLAG_MASK & ti)) & CSMCC_TI_FLAG_MASK;

   /*use reversed_ti_flag to OR ti_value and then shift 4 bits to left*/
   sat_mt_call_req_ptr->ti = (reversed_ti_flag | (CSMCC_TI_MASK&ti))<<4;
   sat_mt_call_req_ptr->addr_p = addr_p;
#ifdef __SUBADDR_SUPPORT__
   sat_mt_call_req_ptr->sub_addr_p = sub_addr_p;
   kal_mem_cpy (&(sat_mt_call_req_ptr->sub_addr), sub_addr, sizeof (l4ccsm_cc_sub_addr_struct));
#endif 
   kal_mem_cpy (&(sat_mt_call_req_ptr->addr), addr, sizeof (l4_addr_bcd_struct));
   

   csmcc_send_ilm(sat_mt_call_req_ptr,
                  MSG_ID_SAT_EVDL_MT_CALL_REQ,
                  MOD_SIM,
                  NULL);

   return CSMCC_NO_ERROR;

}  /* end of csmcc_send_sim_mt_call_req */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_sim_call_conn_req
* DESCRIPTION                                                           
*   This procedure is used to send SIM call disc req for SAT
*
* CALLS  
* PARAMETERS
*  call_status       IN first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_sim_call_disc_req(kal_uint8 ti,
                                             kal_bool is_far_end,
                                             //kal_bool cause_p,
                                             //kal_uint8 cause)
                                             kal_uint8 cause_len,
                                             kal_uint8 *cause_p)
{
    kal_uint8 mode;
    kal_uint8 reversed_ti_flag;
    
    l4c_cc_get_evdlcall_mode_req(&mode);

    if(mode == 1) /* trigger by modem */
    {
       sat_evdl_call_disconnect_req_struct *sat_call_disc_req_ptr;
        
       CSMCC_CONSTRUCT_LOCAL_PARA(sat_call_disc_req_ptr,
                                  sat_evdl_call_disconnect_req_struct)    

       if(is_far_end)//MT disconnect, use reversed_ti_flag to OR ti_value and then shift 4 bits to left
       {
    	   /*The ti that SIM needed is the ti_value and ti_flag in DICONNECT message(spec 27.22.7.3), 
    	   but CC has already reversed ti_flag, so retrieve it and reverse it back to original value*/
    	   reversed_ti_flag = (~(CSMCC_TI_FLAG_MASK & ti)) & CSMCC_TI_FLAG_MASK;

       	   sat_call_disc_req_ptr->ti = (reversed_ti_flag | (CSMCC_TI_MASK&ti))<<4;
       }
       else//MO disconnect, just shift 4 bits to left
    	   sat_call_disc_req_ptr->ti = ti<<4;

       sat_call_disc_req_ptr->is_far_end = is_far_end;
       //sat_call_disc_req_ptr->cause_p = cause_p;
       //sat_call_disc_req_ptr->cause = cause;
       sat_call_disc_req_ptr->cause_len = cause_len;
       if(cause_len > 0 && cause_len <= 30)
       kal_mem_cpy(sat_call_disc_req_ptr->cause, cause_p, cause_len);
       
       csmcc_send_ilm(sat_call_disc_req_ptr,
                      MSG_ID_SAT_EVDL_CALL_DISCONNECT_REQ,
                      MOD_SIM,
                      NULL);
    }
    else
    {
       l4ccsm_cc_sat_evdl_call_ind_struct *sat_call_disc_req_ptr;
   
       CSMCC_CONSTRUCT_LOCAL_PARA(sat_call_disc_req_ptr,
                              l4ccsm_cc_sat_evdl_call_ind_struct)    
   
       if(is_far_end)
       {
           reversed_ti_flag = (~(CSMCC_TI_FLAG_MASK & ti)) & CSMCC_TI_FLAG_MASK;
   
           sat_call_disc_req_ptr->ti = (reversed_ti_flag | (CSMCC_TI_MASK&ti))<<4;
       }
       else
           sat_call_disc_req_ptr->ti = ti<<4;
          
       if(cause_len > 0 && cause_len <= 30)
           kal_mem_cpy(sat_call_disc_req_ptr->cause, cause_p, cause_len);

       sat_call_disc_req_ptr->is_far_end = is_far_end;
       sat_call_disc_req_ptr->status = SAT_EVDL_CALL_DISCONNECT;
       sat_call_disc_req_ptr->cause_len = cause_len;
   
       csmcc_send_ilm(sat_call_disc_req_ptr, 
                      MSG_ID_L4CCSM_CC_SAT_EVDL_CALL_IND,
                      MOD_L4C,
                      NULL);
    }

    return CSMCC_NO_ERROR;
    
}  /* end of csmcc_send_sim_call_disc_req */
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif /* __SAT__ */

#ifdef __VIDEO_CALL_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_send_l4c_video_call_status_ind
* DESCRIPTION                                                           
*   This procedure is used to send MSG_ID_L4CCSM_VIDEO_CALL_STATUS_IND to l4c.
*
* CALLS  
*
* PARAMETERS
*	line_id		first variable, used as input
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_send_l4c_video_call_status_ind (kal_uint8 call_id, 
														kal_uint8 action, 
														kal_bool result, 
														kal_uint8 cause)
{
   l4ccsm_cc_video_call_status_ind_struct *video_call_status_ind_ptr;
   
   CSMCC_CONSTRUCT_LOCAL_PARA(video_call_status_ind_ptr,
                              l4ccsm_cc_video_call_status_ind_struct)   
                              
   video_call_status_ind_ptr->call_id = call_id;                                   
   video_call_status_ind_ptr->action = action;
   video_call_status_ind_ptr->result = result;
   video_call_status_ind_ptr->cause = cause;
              
   csmcc_send_ilm(video_call_status_ind_ptr, 
                  MSG_ID_L4CCSM_CC_VIDEO_CALL_STATUS_IND, 
                  MOD_L4C,
                  NULL);
  
   return CSMCC_NO_ERROR;
   
} /* end of csmcc_send_l4c_video_call_status_ind */

#endif /*__3G_VIDEO_CALL__*/

