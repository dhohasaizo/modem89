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
 *	csmcc_msg_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for handler of messages from L4C and CC.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define CSMCC_MSG_HDLR_C

//#include "kal_release.h"      	/* Basic data type */
#include "cc_msgid.h"
#include "data_msgid.h"
#include "l4_msgid.h"
#include "sysservice_msgid.h"
#include "sim_ps_msgid.h"
#include "nvram_msgid.h"
#include "VT_msgid.h"
#include "tst_msgid.h"

//#include "stack_common.h"  
#include "stdlib.h"
#include "time.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */

//#include "syscomp_config.h"
//#include "task_config.h"      	/* Task creation */

//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */

//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */
//#include "app_buff_alloc.h"

//#include "mcd_ss_parameters.h"
//#include "mcd_ss_tcapmessages.h"
//#include "mcd_l4_common.h"
//#include "mcd.h"

#ifdef __SAT__
#include "ps2sat_struct.h"  /* Ripple SATCE */
#include "sat_def.h"
#endif /* __SAT__ */

#include "ps2sim_struct.h"
#include "nvram_struct.h"
#include "l4c_common_enum.h"
#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"
#include "mncc_struct.h"

#include "l3_inc_enums.h"
//#include "mncc_enums.h"
#include "csmcc_common_enums.h"
#include "csmcc_enums.h"
#include "l4c_common_enum.h"
//#include "csmss_common_enums.h"
#include "sim_common_enums.h"
#include "nvram_enums.h"
//enum move to l3_inc_enums.h owing for __MTK_3G_MRAT_ARCH__
//#include "as2mm_enums.h"
//#include "rr_mpal_interface.h"
//#include "l4_defs.h"
#include "csmcc_defs.h"
#include "csmcc_bc_defs.h"
#include "csmcc_bc_types.h"
#include "csmcc_atfunc.h"

#ifdef __MTK_INTERNAL__
/* under construction !*/
#endif

extern void 
csmcc_send_ilm(void *local_para_ptr, msg_type ilm_id, module_type dst_id, peer_buff_struct *peer_buff);

#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__) 
#include "csm_data_enums.h"

#ifdef __CSD_T__
#include "csm2tdt_struct.h"
#endif

#ifdef __CSD_NT__
#include "data_xid_struct.h"
#include "csm2l2r_struct.h"
#endif

#ifdef __CSD_FAX__
#include "csm2t30_struct.h"
#endif

#endif /* __CSD_T__ || __CSD_NT__ || __CSD_FAX__ */

#include "csmcc_types.h"
#include "csmcc_aux_msg_hdlr.h"
#include "csmcc_bc_func.h"
#include "csmcc_utility.h"
#include "csmcc_crss_proc.h"
#include "csmcc_facility_proc.h"
#include "nvram_data_items.h"
//#include "nvram_user_defs.h"

#include "kal_trace.h"
#include "csm_trc.h"
//#include "GV.h"
//#include "tst_def.h"

#ifdef __CPHS__
#include "nvram_editor_data_item.h"
//__CUSTPACK_MULTIBIN Cylen BEGIN
//#include "nvram_user_defs.h" //NVRAM_EF_ALS_LINE_ID_LID
//#include "custom_nvram_editor_data_item.h"//nvram_ef_als_line_id_struct
//__CUSTPACK_MULTIBIN Cylen END

#include "smu_common_enums.h"
#endif /*__CPHS__*/
//#include "custom_nvram_editor_data_item.h"

//#include "Custom_data_account.h"

//#include "nvram_interface.h"    /* for nvram_get_info() */

extern void csmcc_reset_bc(void);
extern void csmcc_reset_sat_prof(void);
extern kal_uint32 csmcc_get_cc_acm(kal_uint8 mod_id);
extern csmcc_ret_t csmcc_increase_acm(void);
extern kal_bool csmcc_is_any_call_except_waiting_exist(void);
extern csmcc_ret_t csmcc_reset_cdur(void);
extern void csmcc_start_call_confirm_timer(kal_uint8 call_id, kal_uint32 duration);
#ifdef __GEMINI__
extern kal_bool csmcc_is_call_table_availible(void);
#endif




#ifdef __VIDEO_CALL_SUPPORT__
#include "csm2vt_struct.h"
//#include "vt_common_enum.h"
#endif /*__VIDEO_CALL_SUPPORT__*/

//#include "cc_types.h"
//#include "cc_ie_form.h"
//#include "cc_msg_form.h"
//#include "cc_timer.h"
//#include "cc_utility.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_non_specific_general_types.h"
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
//#include "ps_public_struct.h"
#include "ps_public_enum.h"

#ifdef __MTK_INTERNAL__
#ifdef __CSMCC_UT__
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
#endif
            
#ifdef __TCPIP_OVER_CSD__
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_set_csd_prof_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to save CSD profile setting to NVRAM
*
* CALLS  
*	l4ccsm_cc_set_csd_prof_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_set_csd_prof_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_set_csd_prof_req_struct *set_csd_prof_ptr;

   set_csd_prof_ptr = (l4ccsm_cc_set_csd_prof_req_struct*)local_para_ptr;   

   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   /*If csd_prof_id=SAT_PROFILE_INDEX, this request command is from SAT */
   if(set_csd_prof_ptr->profile_type == CSMCC_SAT_PROF)
   {
      kal_bool is_supported;

      if(set_csd_prof_ptr->sat_prof.is_addr_present != KAL_FALSE)
      {
          kal_uint8 addr_len;
		  addr_len = set_csd_prof_ptr->sat_prof.addr.addr_length;		  
          /* MAUI_01649863 [CSMCC] Revise for Dynamic data account, allow the addr_len == 0 */
          if(addr_len > L4_MAX_BCD_NUM_LEN)
          {
              /*SIM provides illegal length*/
          	  kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_ADDR_LEN, addr_len);
          }
		  else 
		  {
		      /*set address if present and add length in the legal range*/
              kal_mem_cpy(&(CSMCC_PTR->sat_prof.addr),
                          &(set_csd_prof_ptr->sat_prof.addr),
                          sizeof(l4_addr_bcd_struct));
		  }
      }
#ifdef __SUBADDR_SUPPORT__
      if(set_csd_prof_ptr->sat_prof.is_subaddr_present != KAL_FALSE)
      {
        /*set sub address if present*/        
        kal_mem_cpy(&(CSMCC_PTR->sat_prof.subaddr),
                  &(set_csd_prof_ptr->sat_prof.subaddr),
                  sizeof(l4ccsm_cc_sub_addr_struct));
      }
#endif 
      if(set_csd_prof_ptr->sat_prof.is_user_id_present != KAL_FALSE)
      {
        /*set sub user id if present*/        
        kal_mem_cpy(&(CSMCC_PTR->sat_prof.user_id),
                  &(set_csd_prof_ptr->sat_prof.user_id),
                  CSD_USER_ID_LEN);
      }
      if(set_csd_prof_ptr->sat_prof.is_user_pwd_present != KAL_FALSE)
      {
        /*set sub user password if present*/        
        kal_mem_cpy(&(CSMCC_PTR->sat_prof.user_pwd),
                  &(set_csd_prof_ptr->sat_prof.user_pwd),
                  CSD_USER_PWD_LEN);
      }
      if(set_csd_prof_ptr->sat_prof.is_local_addr_present != KAL_FALSE)
      {
        /*set local address if present*/        
        kal_mem_cpy(&(CSMCC_PTR->sat_prof.local_addr),
                  &(set_csd_prof_ptr->sat_prof.local_addr),
                  SAT_LOCAL_ADDR_LEN);
      }

       is_supported = csmcc_check_cbst_para_supported(set_csd_prof_ptr->sat_prof.sat_cbst.speed, 
      	                                             set_csd_prof_ptr->sat_prof.sat_cbst.service_name, 
                                                     set_csd_prof_ptr->sat_prof.sat_cbst.ce, KAL_FALSE);
      if(is_supported == KAL_FALSE)
      {
         /*If not support the parameter, reset SAT to default bearer setting*/
         csmcc_reset_sat_prof();
       	 csmcc_send_l4c_set_csd_prof_cnf(L4C_SUCCESS, NVRAM_IO_ERRNO_OK); 
      }
      else
      {
        /*set bearer_speed, bearer_service, bearer_ce; mandatory */        
        CSMCC_PTR->sat_prof.sat_cbst = set_csd_prof_ptr->sat_prof.sat_cbst;
        csmcc_send_l4c_set_csd_prof_cnf(L4C_SUCCESS, NVRAM_IO_ERRNO_OK);
      } 
      return CSMCC_NO_ERROR;
   }
   #endif

   return CSMCC_NO_ERROR;

} /* endof l4ccsm_cc_set_csd_prof_req_hdlr */
#endif /* __TCPIP_OVER_CSD__ */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_nvram_read_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process NVRAM read confirmation. If success,
*   send L4C CSM CC startup successfully and send CC ACM update request, 
*   otherwise, return CSM CC startup failure to L4C.
*
* CALLS  
*	nvram_read_cnf_hdlr(local_para_struct *local_para_ptr
*                      peer_buff_struct *peer_buff_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*  peer_buff_ptr     IN second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_nvram_read_cnf_hdlr(local_para_struct *local_para_ptr,
                                     peer_buff_struct *peer_buff_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   nvram_read_cnf_struct *nvram_read_cnf_ptr;
   kal_uint8 *peer_packed_pdu_ptr;
   kal_uint16 len = 0;
   kal_bool startup_success = KAL_TRUE; 

   nvram_read_cnf_ptr = (nvram_read_cnf_struct*)local_para_ptr;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

   if(nvram_read_cnf_ptr->file_idx == NVRAM_EF_MSCAP_LID)
   {
      /*remove mscap size check */
      if(nvram_read_cnf_ptr->result == NVRAM_IO_ERRNO_OK)
      {  
         peer_packed_pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);
         /* save read result to mscap in CSMCC context */
         SET_MSCAP(peer_packed_pdu_ptr)
      }
      else
      {
         startup_success = KAL_FALSE; 
      }
   }

#if defined (__CPHS__) || defined (__CCM_NO_RESET__) 
   else if (nvram_read_cnf_ptr->file_idx == NVRAM_EF_ALS_LINE_ID_LID)
   {
      if(nvram_read_cnf_ptr->result == NVRAM_IO_ERRNO_OK
         && peer_buff_ptr->pdu_len == sizeof(nvram_ef_als_line_id_struct))
      {  
         peer_packed_pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &len);

	 #ifdef __CPHS__
         /* save line_id */
         CSMCC_PTR->als.line_id = peer_packed_pdu_ptr[0];
         
         /* send line_id to L4C */
         csmcc_send_l4c_display_als_ind(peer_packed_pdu_ptr[0]);
         #endif
         
         #if defined (__AOC_SUPPORT__) && defined (__CCM_NO_RESET__) 
         CSMCC_PTR->last_ccm =  ((kal_int32)peer_packed_pdu_ptr[2]
                               |((kal_uint32)peer_packed_pdu_ptr[3]<<8)
                               |((kal_uint32)peer_packed_pdu_ptr[4]<<16)
                               |((kal_uint32)peer_packed_pdu_ptr[5]<<24));
         #endif /*defined (__AOC_SUPPORT__) && defined (__CCM_NO_RESET__) */
      }

      //need not handle NVRAM_EF_ALS_LINE_ID_LID confrim.
      return CSMCC_NO_ERROR;
   }
#endif /* (__CPHS__) || (__CCM_NO_RESET__) */
   else
   {
      return CSMCC_NO_ERROR; /* this is not csmcc's' file, do not process it */
   }

   if(startup_success == KAL_FALSE )
   {         
      csmcc_send_l4c_startup_cnf(L4C_NVRAM_FAIL, nvram_read_cnf_ptr->result, L4CCSM_CC_STARTUP_NVRAM);
   }
   else
   {         
      csmcc_send_l4c_startup_cnf(L4C_SUCCESS, nvram_read_cnf_ptr->result, L4CCSM_CC_STARTUP_NVRAM);
   }
      
   return CSMCC_NO_ERROR;

} /* end of csmcc_nvram_read_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_sync_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process sync indication from CC.
*
* CALLS  
*	mncc_sync_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_sync_ind_hdlr(local_para_struct *local_para_ptr)
{   
   CSMCC_PTR_G_TO_L
   mncc_sync_ind_struct *sync_ind_ptr;
   kal_bool ch_modify = KAL_FALSE;   
   kal_uint8 call_index;
   
   sync_ind_ptr = (mncc_sync_ind_struct*)local_para_ptr;
   CSMCC_PTR->is_tch = KAL_FALSE;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_SYNC_IND,
             sync_ind_ptr->cause,
             sync_ind_ptr->channel_type,
             sync_ind_ptr->channel_mode);

 if(sync_ind_ptr->cause == TCH_ASSIGN) /*mtk00924 add 041210 for ECPI*/
   {
      CSMCC_PTR->is_tch = KAL_TRUE;
   }
#ifdef __UMTS_RAT__
 else if(sync_ind_ptr->cause == UAS_RAB_EST)
 {
      CSMCC_PTR->is_tch = KAL_TRUE;
 }
#endif /*__UMTS_RAT__*/

   if(sync_ind_ptr->cause == CHANNEL_RELEASE)
   {
      /* reset channel_info. */
      CSMCC_PTR->channel_info = CSMCC_NO_TCH;
      CSMCC_PTR->channel_mode = CH_MODE_NONE;
      CSMCC_PTR->channel_type = 0xff; /* channel_type_enum */
      
      return CSMCC_NO_ERROR;
   }
   if(sync_ind_ptr->cause != TCH_ASSIGN && sync_ind_ptr->cause != CHMODE_MODIFY
      && sync_ind_ptr->cause != UAS_RAB_EST && sync_ind_ptr->cause != UAS_RAB_MODIFY)
   {
      /* this is not a TCH assignment or channel mode modify */
      return CSMCC_NO_ERROR;
   }

   /* record if channel mode modify */
   if(CSMCC_PTR->channel_info == CSMCC_CHMODE_MODIFY)
   {
      ch_modify = KAL_TRUE;
   }
   
   /* save the channel assignement information */
   CSMCC_PTR->channel_mode = sync_ind_ptr->channel_mode;
   CSMCC_PTR->channel_type = sync_ind_ptr->channel_type;

   /* Receive channel mode = SIGNALLING_ONLY, reset CSM TCH info and regard RR has no TCH ASSIGN.*/
   if(sync_ind_ptr->channel_mode == SIGNALLING_ONLY)
   {
       //cosine, 20080313: [MAUI_093723]
       CSMCC_PTR->channel_info = CSMCC_NO_TCH;

       return CSMCC_NO_ERROR;
   }
	
   if(CSMCC_PTR->rat == RAT_GSM )
   {
      if(CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_1
         || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_2
         || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_3
//MAUI_01966467
#ifdef __AMRWB_LINK_SUPPORT__
         || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_5 /* FR AMR-WB */
#endif //__AMRWB_LINK_SUPPORT__
         || CSMCC_PTR->channel_mode == UMTS_RAB_SPEECH
#ifdef __CSHSPA_SUPPORT__
         || CSMCC_PTR->channel_mode == UMTS_RAB_HSPA_SPEECH 
#endif //__CSHSPA_SUPPORT__
#ifdef __VAMOS_2__
		 || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_1_VAMOS
		 || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_2_VAMOS
		 || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_3_VAMOS
		 || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_5_VAMOS
#endif
         ) /* MAUI_01660672 */
      {
         CSMCC_PTR->channel_info = CSMCC_SPEECH_TCH;
         if(CSMCC_PTR->attach_status == CSMCC_ATTACH_REQ
            || ch_modify == KAL_TRUE)
         {
            csmcc_attach_speech();
         }      
      }
      else
      {
         CSMCC_PTR->channel_info = CSMCC_DATA_TCH;
      
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)
         if(ch_modify == KAL_TRUE
            && GET_CALL_STATE(CSMCC_PTR->req_call_id) != CSMCC_CALL_MODIFY)//johnnie
         {
       #ifdef __CSD_FAX__
            if(GET_CALL_TYPE(CSMCC_PTR->req_call_id) == CSMCC_FAX_CALL)
            {
               if(csmcc_activate_fax(CSMCC_PTR->req_call_id, CSMCC_PTR->fax_dir) != CSMCC_NO_ERROR)
               {
                  csmcc_disc_call(CSMCC_PTR->req_call_id, CM_NORMAL_CALL_CLR);
               }
  	       else
   	       {
	 	  CSMCC_PTR->activate_data_call_id = CSMCC_PTR->req_call_id;
	       }

            }
      #if defined(__CSD_T__) || defined(__CSD_NT__) 
         else /* Not Fax call, then activate Data call. */
      #endif /*defined(__CSD_T__) || defined(__CSD_NT__)*/
      #endif /*__CSD_FAX__*/
      
      #if defined(__CSD_T__) || defined(__CSD_NT__) 
            if(csmcc_activate_data((kal_uint8)GET_CALL_TYPE(CSMCC_PTR->req_call_id)) != CSMCC_NO_ERROR)
            {
               /* data activation failure, so disconnect call */
               csmcc_disc_call(CSMCC_PTR->req_call_id, CM_NORMAL_CALL_CLR);
            }
	    else
	    {
	       CSMCC_PTR->activate_data_call_id = CSMCC_PTR->req_call_id;
	    }
      #endif /*defined(__CSD_T__) || defined(__CSD_NT__)*/
      }
#endif /* __CSD_T__ || __CSD_NT__ || __CSD_FAX__ */

   }
   }
#ifdef __UMTS_RAT__
   else if(CSMCC_PTR->rat == RAT_UMTS)
   {
      kal_uint16 ret_val;
      kal_uint8 call_id;

   	ret_val = csmcc_find_in_call(&call_id);

      if(ret_val == CSMCC_ERROR)
      {
         kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_NO_CALL);
         return CSMCC_NO_ERROR;
      }
	
	 //if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
         //    ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         if((CSMCC_PTR->channel_mode == UMTS_RAB_SPEECH)
#ifdef __CSHSPA_SUPPORT__
            || CSMCC_PTR->channel_mode == UMTS_RAB_HSPA_SPEECH 
#endif //__CSHSPA_SUPPORT__
            || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_1
            || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_2
            || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_3
//MAUI_01966467
#ifdef __AMRWB_LINK_SUPPORT__
            || CSMCC_PTR->channel_mode == SPEECH_FULL_OR_HALF_VER_5 /* FR AMR-WB */
#endif //__AMRWB_LINK_SUPPORT__
           ) /* MAUI_01660672 */
         {
      		CSMCC_PTR->channel_info = CSMCC_SPEECH_TCH;
      		if(CSMCC_PTR->attach_status == CSMCC_ATTACH_REQ || ch_modify == KAL_TRUE)
      		{
         		csmcc_attach_speech();
      		}      		
         }
         else 
         {
      		CSMCC_PTR->channel_info = CSMCC_DATA_TCH;
      
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__) || defined (__VIDEO_CALL_SUPPORT__) //mtk01602, __REL5__:VT fallback
      		if(ch_modify == KAL_TRUE && GET_CALL_STATE(CSMCC_PTR->req_call_id) != CSMCC_CALL_MODIFY)//johnnie
      		{
#ifdef __CSD_FAX__
         		if(GET_CALL_TYPE(CSMCC_PTR->req_call_id) == CSMCC_FAX_CALL)
         		{
            		    if(csmcc_activate_fax(CSMCC_PTR->req_call_id, CSMCC_PTR->fax_dir) != CSMCC_NO_ERROR)
            		    {
               		        csmcc_disc_call(CSMCC_PTR->req_call_id, CM_NORMAL_CALL_CLR);
            		    }
	     		    else
	     		    {
		 		CSMCC_PTR->activate_data_call_id = CSMCC_PTR->req_call_id;
	     		    }
			}
#endif /*__CSD_FAX__*/

#if defined(__VIDEO_CALL_SUPPORT__) && defined(__REL5__)
			/*[MAUI_00740014]: Video Call Fallback*/
			if(GET_CALL_TYPE(CSMCC_PTR->req_call_id) == CSMCC_VIDEO_CALL)
			{
			    if(csmcc_activate_vt(CSMCC_PTR->req_call_id)!= CSMCC_NO_ERROR)
			    {
			        csmcc_disc_call(CSMCC_PTR->req_call_id, CM_NORMAL_CALL_CLR);
			    }
			    else
	  		    {
	     			CSMCC_PTR->activate_data_call_id = CSMCC_PTR->req_call_id;
	  		    }
			}
#endif /*(__VIDEO_CALL_SUPPORT__) && (__REL5__)*/

#if defined(__CSD_T__) || defined(__CSD_NT__)
			if(GET_CALL_TYPE(CSMCC_PTR->req_call_id) == CSMCC_DATA_CALL)
			{
         		    if(csmcc_activate_data(GET_CALL_TYPE(CSMCC_PTR->req_call_id)) != CSMCC_NO_ERROR)
         		    {
            			/* data activation failure, so disconnect call */
            			csmcc_disc_call(CSMCC_PTR->req_call_id, CM_NORMAL_CALL_CLR);
         		    }
	  		    else
	  		    {
	     			CSMCC_PTR->activate_data_call_id = CSMCC_PTR->req_call_id;
	  		    }
                        } 
#endif /*defined(__CSD_T__) || defined(__CSD_NT__)*/
      	}
#endif /* __CSD_T__ || __CSD_NT__ || __CSD_FAX__ || __VIDEO_CALL_SUPPORT__*/		
	}
   }
#endif /*__UMTS_RAT__*/
   else
   {
	kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_INVALID_RAT, CSMCC_PTR->rat);
	return CSMCC_NO_ERROR;
   }
   if(CSMCC_PTR->cur_non_l4c_req == CSMCC_ALERTING_REQ)
   {
      /* early assignment, send call setup indication and CC alerting */
      csmcc_send_l4c_call_setup_ind(CSMCC_PTR->cur_non_l4c_req_call_id,
         (mncc_setup_ind_struct*)
         (CALL_DATA(CSMCC_PTR->cur_non_l4c_req_call_id,local_para_ptr)));
      
      /* free stored setup indication */
      free_local_para(CALL_DATA(CSMCC_PTR->cur_non_l4c_req_call_id, local_para_ptr));
      CALL_DATA(CSMCC_PTR->cur_non_l4c_req_call_id, local_para_ptr) = NULL;                           
      
      csmcc_send_cc_alert_req(CSMCC_PTR->cur_non_l4c_req_call_id);
      
#ifdef __CSMCC_CALLCONFIRM_TIMER__
      /*Stop timer once receive channel*/
      csmcc_stop_call_confirm_timer(CSMCC_PTR->cur_non_l4c_req_call_id);
#endif /*__CSMCC_CALLCONFIRM_TIMER__*/
      /* reset non-L4C request */
      CSMCC_PTR->cur_non_l4c_req = CSMCC_NO_REQ;
      CSMCC_PTR->cur_non_l4c_req_call_id = CSMCC_INVALID_CALL_ID;
   }

   kal_brief_trace(TRACE_INFO,
             CSMCC_TRACE_CHANNEL_ATTACH_STATUS,
             CSMCC_PTR->attach_status,
             CSMCC_PTR->channel_info);

   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) == CSMCC_CALL_FREE )
      { 
         break;
      }
   }
   call_index--;

   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_index,
   	                 CSMCC_SYNC_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);

   return CSMCC_NO_ERROR;
   
} /* end of mncc_sync_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_rat_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process rat indication from CC.
*
* CALLS  
*	mncc_rat_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_rat_ind_hdlr(local_para_struct *local_para_ptr)
{   
   CSMCC_PTR_G_TO_L
   mncc_rat_ind_struct *rat_ind_ptr;

   rat_ind_ptr = (mncc_rat_ind_struct*)local_para_ptr;

   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_RAT_IND, CSMCC_PTR->rat, rat_ind_ptr->rat); //Cosine, 070806

   /*[Cosine 070430]: If speech is already turned on and InterRAT occur,
                     turn off previous rat speech and turn on new rat speech.*/
   if(CSMCC_PTR->rat != rat_ind_ptr->rat
   	&& CSMCC_PTR->attach_status == CSMCC_SPEECH_ON)
   {
        /*MMI need to know current rat when attaching and detaching speech*/
        /* MAUI_01252708 [CSMCC][Revise] inter-rat performance improvemen for speech */
        //csmcc_send_l4c_detach_ind(KAL_TRUE);
	CSMCC_PTR->rat = rat_ind_ptr->rat;
  	//csmcc_send_l4c_attach_ind(CSMCC_PTR->channel_mode, KAL_TRUE);
   }
   CSMCC_PTR->rat = rat_ind_ptr->rat;
      
   return CSMCC_NO_ERROR;
   
} /* end of mncc_rat_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_crss_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call related SS request from L4C.
*
* CALLS  
*	l4ccsm_cc_crss_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_crss_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var init */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_req_struct *crss_req_ptr;
   csmcc_ret_t ret_val;
   csmcc_req_enum crss_req = CSMCC_NO_REQ;
   kal_uint8 req_call_id = CSMCC_INVALID_CALL_ID;
   kal_uint8 accept_req = CSMCC_NO_REQ;
   kal_uint8 accept_call_id = CSMCC_INVALID_CALL_ID;
   
   crss_req_ptr = (l4ccsm_cc_crss_req_struct*)local_para_ptr;   

   CSMCC_PTR->crss_req = crss_req_ptr->crss_req;   

   switch(crss_req_ptr->crss_req)
   {
      case CSMCC_REL_HELD:

         crss_req = CSMCC_REL_HELD_REQ;
         ret_val = csmcc_rel_held_or_udub(KAL_FALSE, crss_req_ptr->src_id);         
         break;
         
      case CSMCC_REL_HELD_OR_UDUB:
      case CSMCC_REL_UDUB:
#ifdef __CCBS_SUPPORT__         
      case CSMCC_REL_CCBS:         
#endif

         crss_req = CSMCC_REL_HELD_OR_UDUB_REQ;
         ret_val = csmcc_rel_held_or_udub(KAL_TRUE, crss_req_ptr->src_id);         
         break;

      case CSMCC_REL_ACTIVE:

         crss_req = CSMCC_REL_ACTIVE_REQ;         
         ret_val = csmcc_rel_active_and_accept(KAL_FALSE, &accept_req, &accept_call_id);
         break;
         
      case CSMCC_REL_ACTIVE_AND_ACCEPT:
      case CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING:
#ifdef __CCBS_SUPPORT__         
      case CSMCC_REL_ACTIVE_AND_ACCEPT_CCBS:         
#endif
      case CSMCC_REL_ACTIVE_AND_ACCEPT_HELD:

         crss_req = CSMCC_REL_ACTIVE_AND_ACCEPT_REQ;         
         ret_val = csmcc_rel_active_and_accept(KAL_TRUE, &accept_req, &accept_call_id);
         break;

      case CSMCC_REL_SPECIFIC_ACTIVE_CALL:
      
         if(crss_req_ptr->call_id_present != KAL_TRUE)
         {
            /* call id is mandatory for this request */
            ret_val = CSMCC_ERROR;
            break;
         }            

         crss_req = CSMCC_REL_SPECIFIC_ACTIVE_CALL_REQ;  
         req_call_id = crss_req_ptr->call_id;
         ret_val = csmcc_rel_specific_active_call(crss_req_ptr->call_id);

         break;
         
      case CSMCC_REL_SPECIFIC_CALL:
      
         if(crss_req_ptr->call_id_present != KAL_TRUE)
         {
            /* call id is mandatory for this request */
            ret_val = CSMCC_ERROR;
            break;
         }            

         crss_req = CSMCC_REL_SPECIFIC_CALL_REQ;  
         req_call_id = crss_req_ptr->call_id;
         ret_val = csmcc_rel_specific_call(crss_req_ptr->call_id);

         break;         

#if defined(__VIDEO_CALL_SUPPORT__)          
      case CSMCC_VT_FALL_TO_VOICE:
      
         if(crss_req_ptr->call_id_present != KAL_TRUE)
         {
            /* call id is mandatory for this request */
            ret_val = CSMCC_ERROR;
            break;
         }            

         crss_req = CSMCC_REL_SPECIFIC_CALL_REQ;  
         req_call_id = crss_req_ptr->call_id;
         ret_val = csmcc_reject_vt_by_specific_cause(crss_req_ptr->call_id);

         break;          
#endif        
         
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT:
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_WAITING:
#ifdef __CCBS_SUPPORT__  
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_CCBS:
#endif
         crss_req = CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ;
         ret_val = csmcc_hold_active_and_accept(&accept_req, &accept_call_id, KAL_TRUE);

         break;
         
      case CSMCC_SWAP_CALL:
      
         crss_req = CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ;
         ret_val = csmcc_hold_active_and_accept(&accept_req, &accept_call_id, KAL_FALSE);

         break;         
         
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL:
      
         if(crss_req_ptr->call_id_present != KAL_TRUE)
         {
            /* call id is mandatory for this request */
            ret_val = CSMCC_ERROR;
            break;
         }            

         crss_req = CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ;
         req_call_id = crss_req_ptr->call_id;
         ret_val = csmcc_hold_active_except_specific_call(crss_req_ptr->call_id, &accept_req, &accept_call_id);
                               
         break;
               
      case CSMCC_ADD_HELD_CALL:
      
         crss_req = CSMCC_ADD_HELD_CALL_REQ;
         ret_val = csmcc_add_held_call();
         
         break;
         
      case CSMCC_EXPLICIT_CALL_TRANSFER:
      
         crss_req = CSMCC_EXPLICIT_CALL_TRANSFER_REQ;         
         ret_val = csmcc_explicit_call_transfer();
         
         break;

#ifdef __CCBS_SUPPORT__         
      case CSMCC_ACTIVATE_CCBS_CALL:
         
         crss_req = CSMCC_ACTIVATE_CCBS_CALL_REQ;         
         ret_val = csmcc_activate_ccbs_call(&req_call_id);
         
         break;
#endif /*__CCBS_SUPPORT__*/      
      case CSMCC_REL_ALL_EXCEPT_WAITING_CALL:
         
         crss_req = CSMCC_REL_ALL_EXCEPT_WAITING_CALL_REQ;
         ret_val = csmcc_rel_all_except_waiting_call();
         
         break;

      case CSMCC_REL_ALL:
         crss_req = CSMCC_REL_ALL_REQ;
         ret_val = csmcc_rel_all(KAL_TRUE);
         break;
#ifdef __CALL_REJECT__
      case CSMCC_REL_CALL_REJECT:
        crss_req = CSMCC_REL_CALL_REJECT_REQ;
        ret_val = csmcc_rel_call_reject(crss_req_ptr->src_id); 
        break;
#endif /*__CALL_REJECT__*/
      default:
         /* invalid value range */
         ret_val = CSMCC_ERROR;
         break;
         
   } /* switch(crss_req) */

   /* crss request is allow, save request */
   csmcc_save_cur_req(crss_req,
                      crss_req_ptr->src_id,
                      req_call_id);

   ///*mtk01602, 070718: save crss_req into CSMCC context*/
   //CSMCC_PTR->crss_req = crss_req_ptr->crss_req;
   
   if(ret_val == CSMCC_CMD_SUCC)
   {
      csmcc_send_l4c_crss_succ(crss_req); 
      return CSMCC_NO_ERROR;
   }
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      csmcc_send_l4c_crss_fail(crss_req_ptr->src_id, 
                               crss_req, 
                               ret_val);      
      return CSMCC_NO_ERROR;
   }   
   
   if(accept_req != CSMCC_NO_REQ)
   {
      CSMCC_PTR->aux_req = accept_req;
      CSMCC_PTR->aux_req_call_id = accept_call_id;

      if(accept_req == CSMCC_ACCEPT_WAITING_CALL_REQ)
      {
         /* it is possible to accept a waiting call, so save the src id
            for the waiting call */
         CALL_DATA(accept_call_id, src_id) = crss_req_ptr->src_id;
      }
      kal_brief_trace(TRACE_INFO,
                CSMCC_TRACE_AUX_REQUEST_SAVE,
                CSMCC_PTR->aux_req,
                CSMCC_PTR->aux_req_call_id,
                CSMCC_PTR->is_aux_req_processed);
   }
         
   return CSMCC_NO_ERROR;
      
} /* end of l4ccsm_cc_crss_req_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_aux_accept_req_proc
* DESCRIPTION                                                           
*   This procedure is used to process aux_accept request .
*
* CALLS  
*	
* PARAMETERS
*	cause 	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_aux_accept_req_proc(kal_uint8 accept_call_id)
{
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;

   if (CSMCC_PTR->is_aux_req_processed == KAL_TRUE)
   {
      /* the aux_req is being processed. */
      return;
   }         

   /* check if it is allowed to accept any call first */
   if(csmcc_is_allowed_accept_call() == KAL_FALSE)
   {      
      /* now it is not allowed to accept any call */
      csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                               CSMCC_PTR->cur_req, 
                               CSMCC_CALL_ACCEPT_NOT_ALLOW);            
      return;
   }

   /* now , it is allowed to accept call */
   ret_val = csmcc_accept_other_call((kal_uint8)CSMCC_PTR->aux_req, 
                                     accept_call_id);  

   if(ret_val != CSMCC_NO_ERROR)
   {
      /* accept fails */
      csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                               CSMCC_PTR->cur_req, 
                               ret_val);
   }
   else
   {
      CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
   }

   return;
}


/*************************************************************************
* FUNCTION                                                            
*	csmcc_call_clear_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call release .
*
* CALLS  
*	csmcc_call_clear_hdlr(kal_uint8 call_id, kal_uint16 cause,kal_uint8 diagnostic)
* PARAMETERS
*	cause 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_call_clear_hdlr(kal_uint8 call_id, kal_uint16 cause,kal_uint8 diagnostic,kal_uint16 disc_cause)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   kal_uint8 hold_call_id;
   kal_uint8 hold_req_call_id;
   kal_uint8 retrieve_req_call_id;
   kal_uint8 disc_call_id;
   #ifdef __EMLPP_SUPPORT__
   kal_uint8 waiting_call_id;
   #endif
   kal_uint8 csmcc_sat_cause = CSMCC_NO_CAUSE;
   kal_uint8 sat_terminal_res = SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD;/*[MAUI_01697831]*/

   /* MAUI_01787684 */
   kal_uint8  ori_call_src_id = 0;
   csmcc_call_context_struct *call_context_ptr = NULL;

   call_context_ptr = &(CALL_ENTRY(call_id));
   ori_call_src_id = call_context_ptr->src_id;

   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_REQUEST_SAVE, 
             CSMCC_PTR->cur_req, ori_call_src_id,CSMCC_PTR->req_call_id);
   
   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_AUX_REQUEST_SAVE,
             CSMCC_PTR->aux_req, CSMCC_PTR->aux_req_call_id, CSMCC_PTR->is_aux_req_processed); 

   if(GET_CALL_STATE(call_id) == CSMCC_CALL_HOLD)
   {
      /* CSMCC gen notify ss for AT cmd, +CSSN, code2, 5. */   
      csmcc_send_l4c_gen_notify_ss_ind(call_id, CSMCC_NOTIFY_HELD_CALL_RELEASED);
   }   
   
      if((CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_FAX) ||
   	   (CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_DATA))
      {
        /*mtk00924 050312 according to 27.007 section 6.4 */
      CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;
      }   
   
   /* store the state before entering CSMCC_NW_CALL_DISC. 
       for l4ccsm_cc_get_call_info(). */
   if ((GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC) 
      && (GET_CALL_STATE(call_id) !=CSMCC_NW_CALL_DISC)
      && (GET_CALL_STATE(call_id) !=CSMCC_NW_CALL_DISC_ON_HOLD))
   {
      csmcc_ctab_g.call_tab[call_id-1].pre_call_state = GET_CALL_STATE(call_id);
      
      kal_brief_trace(TRACE_INFO, CSMCC_SET_PRE_STATE, 
            call_id, GET_CALL_STATE(call_id));
   }

//MAUI_01997684 fix MAUI_01697831

   kal_brief_trace(TRACE_INFO, CSMCC_TRACE_RLC_STATUS, CALL_DATA(call_id, csmcc_rlc_status));
   csmcc_stop_rlc_timer(call_id);  
#ifdef __AOC_SUPPORT__
   if(csmcc_find_other_aoc_call(call_id) == CSMCC_ERROR)
   {  
      csmcc_stop_aoc_timer(call_id);
      /*MAUI_02866587. reset CDUR if no AOC call exist*/
      csmcc_reset_cdur();
      csmcc_increase_acm();
   }
#endif  /*__AOC_SUPPORT__*/
#ifdef __CSMCC_CALLCONFIRM_TIMER__
   csmcc_stop_call_confirm_timer(call_id);
#endif 
   /* 
    * if the released call is in activate state, then stop auto dtmf sending
    *  for voice call, or deactivate data phase for data call 
    */
    
   if(GET_CALL_STATE(call_id) == CSMCC_CALL_ACTIVE)
   {            
      switch(GET_CALL_TYPE(call_id))
      {
         case CSMCC_VOICE_CALL:
            /* stop sending auto dtmf tone */
            csmcc_stop_auto_dtmf(call_id);
            break;
         case CSMCC_AUX_VOICE_CALL:
            /* stop sending auto dtmf tone */
            csmcc_stop_auto_dtmf(call_id);
            break;
#if defined(__CSD_T__) || defined(__CSD_NT__)
         case CSMCC_DATA_CALL:
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
               || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
               if(CSMCC_PTR->activate_data_call_id == call_id)
               {
                  /* deactivate data call */
                  csmcc_deactivate_data();
      	         /* MAUI_01764436 wait UART transfer back and deact cnf, then send rel ind to L4C */
                  CSMCC_PTR->aux_req = CSMCC_WAIT_DATA_DEACTIVATE_CNF;
                  CSMCC_PTR->activate_data_call_id = 0xff;
                  return CSMCC_NO_ERROR;
               }
               else
               {
                  kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
               }
            }
            break;
#endif
#ifdef __CSD_FAX__
         case CSMCC_FAX_CALL:
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
               || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
            	if(CSMCC_PTR->activate_data_call_id == call_id)
            	{
                  /* deactivate fax call */
                  csmcc_deactivate_fax();
      	         /* MAUI_01764436 wait UART transfer back and deact cnf, then send rel ind to L4C */
                  CSMCC_PTR->aux_req = CSMCC_WAIT_DATA_DEACTIVATE_CNF;
                  CSMCC_PTR->activate_data_call_id = 0xff;
                  return CSMCC_NO_ERROR;
            	}
               else
               {
                  kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
               }				
            }
            break;
#endif
#ifdef __VIDEO_CALL_SUPPORT__
         case CSMCC_VIDEO_CALL:
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
               || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
            	if(CSMCC_PTR->activate_data_call_id == call_id)
            	{
            		kal_uint8 call_end_type;

                  if(GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC)
                     call_end_type = VT_MT_DISC;
                  else
                     call_end_type = VT_MO_DISC;					
				
                  /* deactivate video call */
                  csmcc_deactivate_vt(call_id, call_end_type);
                  CSMCC_PTR->activate_data_call_id = 0xff;
            	}
               else
               {
                  kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
               }				
            }
            break;
#endif /*__VIDEO_CALL_SUPPORT__*/

#if defined(__CSD_T__) || defined(__CSD_NT__)
   #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         case CSMCC_SAT_DATA_CALL:
   #endif
   #ifdef __TCPIP_OVER_CSD__
         case CSMCC_CSD_CALL:
   #endif
   #if defined(__TCPIP_OVER_CSD__) ||  (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH)
            {
               csmcc_send_l4c_simple_disc_ind(call_id, cause,diagnostic);
            
               /* PPP deactivation must be prior to CSD deactivate, so 
                  send L4C disconnect to wait completion of PPP deacivation
                  in case of radio link failure, network disconnect directly
                  with RELEASE. Here just set call state to idle but not to
                  dealloc call context for later disconnect request from
                  L4C */
               
               SET_CALL_STATE(call_id, CSMCC_NW_CALL_DISC)
               CSMCC_PTR->aux_req = CSMCC_WAIT_DATA_DEACTIVATE_REQ;
               return CSMCC_NO_ERROR;
            }
            else if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
               if(CSMCC_PTR->activate_data_call_id == call_id)
               {
                  /* deactivate data call */
                  csmcc_deactivate_data();  
                  CSMCC_PTR->activate_data_call_id = 0xff;
               }
               else
               {
                  kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
               }
            }
            break;
   #endif /* ~ defined(__TCPIP_OVER_CSD__) || defined(__SATCE__) */
#endif /* defined(__CSD_T__) || defined(__CSD_NT__) */
         default:
            /* invalid value range */
            break;            
      } /* switch(cur_call_type) */
   }
#if defined(__TCPIP_OVER_CSD__) ||  (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   else if(GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC
           && ( GET_CALL_TYPE(call_id) == CSMCC_CSD_CALL
              ||GET_CALL_TYPE(call_id) == CSMCC_SAT_DATA_CALL)
           && CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH)
	{
	   /* wait L4C deactivate PPP because network has sent DISCONNECT */
	   CSMCC_PTR->aux_req = CSMCC_WAIT_DATA_DEACTIVATE_REQ;
	   return CSMCC_NO_ERROR;
	} 	   
#endif   

   /* MAUI_01643590 */
   /* UK_FT_weird_sound, detach_ind should go prior than call_rel_ind */
   if((GET_CALL_TYPE(call_id)== CSMCC_VOICE_CALL)
      || (GET_CALL_TYPE(call_id)== CSMCC_AUX_VOICE_CALL))
   {
      /* detach speech if necessary */
      csmcc_check_if_detach_speech(call_id);
   }

   if(CSMCC_PTR->req_call_id == call_id)
   {
      /* if the release call is the same as the call to be requested */

      switch(CSMCC_PTR->cur_req)
      {        
        /* case CSMCC_ALERTING_REQ: */
            /* nothing to do */
        /*   break;           */
            
         case CSMCC_MO_MODIFY_REQ:
         
            /* call modify fail */
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id,
                                       call_id, 
                                       cause);
            
            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
                  
            break;

         case CSMCC_CALL_SETUP_REQ:
         
            /* call setup fail */
            /*mtk01602, 070606: TS11.14 12.12.2, 
            For "network currently unable to process command", additional info. 
            shall be the first byte of the cause returned by the network.*/
            #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
      		if(GET_CALL_TYPE(call_id)==CSMCC_SAT_DATA_CALL)
      		{
               csmcc_sat_cause = (kal_uint8)cause;
               if(csmcc_sat_cause != CSMCC_NO_CAUSE)
               {
                  csmcc_sat_cause |= (1<<7);
               }
      		}
            #endif

            /* MAUI_01787684 */
            csmcc_send_l4c_setup_fail(ori_call_src_id, 
                                      (kal_uint8)GET_CALL_TYPE(call_id), 
                                      cause,
                                      SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                      csmcc_sat_cause,
                                      diagnostic);
            
            break;

         case CSMCC_EMERGENCY_CALL_SETUP_REQ:

            /* MAUI_01787684 */
            /* emergency call setup fail */
            csmcc_send_l4c_emergency_setup_fail(ori_call_src_id,
                                                cause);
            
            break;
#ifdef __SAT__
         case CSMCC_SAT_SETUP_REQ:

            if (disc_cause != CSMCC_NO_CAUSE)
            {
                csmcc_sat_cause= (kal_uint8)disc_cause; 
            }
            else
            {
                csmcc_sat_cause = (kal_uint8)cause;
            }
            
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            {
               csmcc_sat_cause |= (1<<7);
            }
            /* MAUI_01787684 */
            /* call setup fail */ /* [Cosine 070310]Send add_info to SIM */
            csmcc_send_l4c_sat_setup_fail(ori_call_src_id,
                                         sat_terminal_res,  /*[MAUI_01697831]*/
                                         /*SAT_NO_SPECIFIC_CAUSE*/csmcc_sat_cause,
                                         CSMCC_NO_CAUSE,
                                         call_id);
            break;
#endif /* __SAT__ */
         case CSMCC_CALL_ACCEPT_REQ:
         
            /* accept fail */
            /*MAUI_02294259 Change order for l4C*/
            csmcc_send_l4c_accept_fail(CSMCC_PTR->req_src_id,
                                       call_id, 
                                       cause);
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
            break;

 #ifdef __EMLPP_SUPPORT__                      
         case CSMCC_AUTO_ANSWER_REQ:
                        
            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
            
            /* reset non-L4C request */
            csmcc_reset_cur_req(CSMCC_AUTO_ANSWER_REQ);
         
            break;
                           
         case CSMCC_CALL_PREEMPT_REQ:
      
            /* the waiting call which preempts other calls is released */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
         
            /* reset non-L4C request */
            csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
         
            break;
 #endif /* __EMLPP_SUPPORT__ */

         case CSMCC_CALL_DISC_REQ:
         
            /* call disconnect success */
            csmcc_send_l4c_disc_succ(call_id);
                  
            break;
         
         case CSMCC_REL_SPECIFIC_ACTIVE_CALL_REQ:

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);            

            /* release a specific call successfully */
            csmcc_send_l4c_crss_succ(CSMCC_REL_SPECIFIC_ACTIVE_CALL_REQ);
                       
            break;
            
         case CSMCC_REL_SPECIFIC_CALL_REQ:

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);            

            /* MAUI_01902089 [3G-Gemini] MS cannot disc the call and MS hang - handle opcode=2 for prev_req=call setup */
            if ((CSMCC_PTR->prev_req == CSMCC_CALL_SETUP_REQ) ||
                (CSMCC_PTR->prev_req == CSMCC_SAT_SETUP_REQ) ||
                (CSMCC_PTR->prev_req == CSMCC_EMERGENCY_CALL_SETUP_REQ))
            {
               CSMCC_PTR->prev_req = CSMCC_NO_REQ;
               CSMCC_PTR->prev_req_src_id = CSMCC_INVALID_SRC_ID;
               CSMCC_PTR->prev_req_call_id = CSMCC_INVALID_CALL_ID;
            }

            /* release a specific call successfully */
            csmcc_send_l4c_crss_succ(CSMCC_REL_SPECIFIC_CALL_REQ);
                       
            break;
                        
         case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                     CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ,
                                     cause);

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);			

            break;
         case CSMCC_CALL_DEFLECTION_REQ:
         
            /* 
             * when current request is call deflection upop receipt of 
             * release confirm, this means that NW doesn't response the
             * call deflection request, so return call deflection failure
             * to L4C.
             */
          
            csmcc_send_l4c_call_deflection_fail(CSMCC_PTR->req_src_id,
                                                call_id,
                                                cause);

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
                    
            break;

         case CSMCC_ACTIVATE_CCBS_CALL_REQ:
         
            /* 
             * when current request is activate ccbs call upop receipt of 
             * release confirm, this means that NW doesn't response the
             * activate ccbs call request, so return activate ccbs call 
             * failure to L4C.
             */
          
             csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                      CSMCC_ACTIVATE_CCBS_CALL_REQ, 
                                      CSMCC_NO_RESPONSE_FROM_NW);

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
                    
            break;

         default:
         
            /* 
             * in case of call deflection, activate ccbs, and explicit call
             * transfer request, the return result component may be contained
             * in facility IE in this message to response these request.
             * so current request has been updated in csmcc_peer_fac_ie_hdlr.*/

            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
         
            break;
      
      } /* swith(CSMCC_PTR->cur_req) */

   }
   else if ( (CSMCC_PTR->cur_non_l4c_req_call_id == call_id)
      && (CSMCC_PTR->cur_non_l4c_req == CSMCC_ALERTING_REQ))
   {
//MAUI_01996988
      /* since call present, upper layer aware the call */
      csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);

      /* This is a mt call, and have not informed L4C, so not need to 
         inform l4c the call is released. Just reset non_l4c_req.*/
       /* reset non-L4C request */
      CSMCC_PTR->cur_non_l4c_req = CSMCC_NO_REQ;
      CSMCC_PTR->cur_non_l4c_req_call_id = CSMCC_INVALID_CALL_ID;
   }
   /*Cosine: 20080503, [MAUI_00682453]*/
   else if(CSMCC_PTR->prev_req_call_id == call_id)
   {
      switch(CSMCC_PTR->prev_req)
      {        
        case CSMCC_CALL_SETUP_REQ:

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         if(GET_CALL_TYPE(call_id)==CSMCC_SAT_DATA_CALL)
         {
            csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            {
               csmcc_sat_cause |= (1<<7);
            }
         }
#endif
            /* MAUI_01787684 */
            csmcc_send_l4c_setup_fail(ori_call_src_id, 
                                      (kal_uint8)GET_CALL_TYPE(call_id), 
                                      cause,
                                      SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                      csmcc_sat_cause,
                                      diagnostic);
            
            break;

         case CSMCC_EMERGENCY_CALL_SETUP_REQ:

            /* emergency call setup fail */
            /* MAUI_01787684 */
            csmcc_send_l4c_emergency_setup_fail(ori_call_src_id,
                                                cause);
            
            break;
#ifdef __SAT__
         case CSMCC_SAT_SETUP_REQ:
         
            csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            {
               csmcc_sat_cause |= (1<<7);
            }

            /* MAUI_01997684 */
            if ((GET_CALL_STATE(call_id) == CSMCC_MS_CALL_DISC)
         	   && (CALL_DATA(call_id, pre_call_state) < CSMCC_CALL_ACTIVE))
            {
               /* [MAUI_01697831] TS 11.14 version 8.17.0, 6.7, The user cleared down the call, 
                * before the call connected (CONNECT received from network) or before the network 
                * released the call.
                */
               sat_terminal_res = SAT_USER_CLEAR_DOWN_CALL_BEFORE_CONNECTION_RELEASE;
            }

            /* call setup fail */ /* [Cosine 070310]Send add_info to SIM */
            /* use previous call id since release all doesn't keep call id in CSMCC_PTR->req_call_id*/
            /* MAUI_01787684 */
            csmcc_send_l4c_sat_setup_fail(ori_call_src_id,
                                         sat_terminal_res, /*[MAUI_01697831]*/
                                         /*SAT_NO_SPECIFIC_CAUSE*/csmcc_sat_cause,
                                         CSMCC_NO_CAUSE,
                                         call_id);             
            break;
#endif /* __SAT__ */
         default:
            /* MAUI_01641721 [CSMCC][Fixbug] handle CSMCC_REL_ALL before call connect ack */
            csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
            break;
   	  	}
   }
   else
   {    /*mtk00924 add 041208 for +ECPI*/
        /* MAUI_01645808 */
        /* mvoe to csmcc_dealloc_call_context
         csmcc_send_l4c_cpi_ind(call_id,
                               CSMCC_ALL_CALLS_DISC_MSG,
                               KAL_FALSE,
                               KAL_FALSE,
                               cause,
                               0);
        */
      /* unsolicited call release */
      csmcc_send_l4c_rel_ind(call_id, cause,diagnostic);
   }

   #ifdef __CSD_FAX__
   if (GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
   {
      CSMCC_PTR->at_param.fclass_mode = CSMCC_DATA;
   }
   #endif

   /* deallocate call context of released call */
   csmcc_dealloc_call_context(call_id);

   /* update the status for the request of non-specific call */

   switch(CSMCC_PTR->cur_req)
   {
      /* ripple */
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         
         if(csmcc_is_allowed_setup_call(KAL_TRUE /* full checking */) == KAL_TRUE)
         {

            /* send emergency call setup to CC */
            csmcc_send_cc_emergency_setup_req(CSMCC_PTR->req_call_id);
            
            SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         }
         
         break;
         
      case CSMCC_CALL_SETUP_REQ:
           
         if(csmcc_is_allowed_setup_call(KAL_TRUE /* full checking */) == KAL_TRUE)
         {
            /* 
             * All the existing calls have been released, so send call setup 
             * request to CC.
             */
            csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);            
            SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         }
            
         break;
         
 #ifdef __EMLPP_SUPPORT__       
      case CSMCC_CALL_PREEMPT_REQ:

         if(csmcc_is_allowed_accept_call() == KAL_TRUE)
         {                  
            ret_val = csmcc_find_waiting_call(&waiting_call_id);
         
            if(ret_val == CSMCC_NO_ERROR)
            {
               /* accept the waiting call, and update the request call id */
               ret_val = csmcc_accept_mt_call(waiting_call_id);

               if(ret_val == CSMCC_NO_ERROR)
               {
                  /* update current request */
                  csmcc_update_cur_req(CSMCC_AUTO_ANSWER_REQ,
                                       CSMCC_INVALID_SRC_ID,
                                       waiting_call_id);
               }
               else
               {
                  /* reset non-L4C request */
                  csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
               }                                     
            }
            else
            {            
                /* no waiting call exists, reset non-L4C request */
                csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);                
            } 
         }
         break;
 #endif /*__EMLPP_SUPPORT__*/
 
      case CSMCC_REL_HELD_REQ:   
      case CSMCC_REL_HELD_OR_UDUB_REQ:
#ifdef __CALL_REJECT__
      case CSMCC_REL_CALL_REJECT_REQ:
#endif   
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_MS_CALL_DISC, 
                                   &disc_call_id);                                  
         if(ret_val != CSMCC_NO_ERROR)
         {
            /* no call is waiting to be released */
            csmcc_send_l4c_crss_succ(CSMCC_PTR->cur_req);                        
         }

         break;
      
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:

         if(CSMCC_PTR->aux_req_call_id == call_id)
         {
            /* the released call is the call to be accepted */
            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                     CSMCC_PTR->cur_req, 
                                     cause);
            break;
         }

         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                   (CSMCC_MS_CALL_DISC|CSMCC_CALL_ACTIVE), 
                                   &disc_call_id);
         
         /* find active is due to when release data call, before deactive_cnf, the state is 
             remain at ACTIVE. */

         if(ret_val == CSMCC_NO_ERROR)
         {
            /* some call is waiting for call disconnect response */
            break;
         }
         
         /* now, no call is waiting to be released */

         switch(CSMCC_PTR->aux_req)
         {
            case CSMCC_ACCEPT_WAITING_CALL_REQ:
            case CSMCC_ACCEPT_CCBS_CALL_REQ:

		 csmcc_detach_speech();//mtk00924_060220: detach speech for MMI to close CTM connection, and attach again when waiting call is accepted.                      
               csmcc_aux_accept_req_proc(CSMCC_PTR->aux_req_call_id);
       
               break;

            case CSMCC_ACCEPT_HELD_CALL_REQ:

               ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                         CSMCC_CALL_HOLD,
                                         &hold_call_id);

               if(ret_val != CSMCC_NO_ERROR)
               {
                  ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                            CSMCC_CALL_RETRIEVE_REQ,
                                            &retrieve_req_call_id);
                  
                  if(ret_val != CSMCC_NO_ERROR)
                  {
                     /* no call can be accepted and no call are in
                        call retrieve request state */

                     csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
				                                  CSMCC_REL_ACTIVE_AND_ACCEPT_REQ, 
				                                  cause);                     
                     break;
                  }

                  /* some call is waiting for call retrieve response */
                  break;
               }

		 csmcc_detach_speech();//mtk00924_060213: detach speech for MMI to close CTM connection, and attach again when held call is retrieved.               
               /* some held call exists, accept it(them)  */               
               csmcc_aux_accept_req_proc(hold_call_id);

               break;
            case CSMCC_NO_REQ:
               /* no call needs to be accepted */
               csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ); 
               break;
         }

         break;

      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                   CSMCC_MS_CALL_DISC, 
                                   &disc_call_id);

         if(ret_val == CSMCC_NO_ERROR)
         {
            /* MAUI_01085715 [CSMCC][Revise] keep the original crss request in aux_req_call_id */
            if(CSMCC_PTR->aux_req_call_id == call_id)
            {
                /* original crss call_id is released now, modify to other call_id,
                   otherwise crss will forget to send_l4c_crss response */
                CSMCC_PTR->aux_req_call_id = disc_call_id;
            }

            /* some call is releasing. */
            break;
         }

         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                   CSMCC_CALL_HOLD_REQ,
                                   &hold_req_call_id);
     
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* MAUI_01085715 [CSMCC][Revise] keep the original crss request in aux_req_call_id */
            if(CSMCC_PTR->aux_req_call_id == call_id)
            {
                /* original crss call_id is released now, modify to other call_id,
                   otherwise crss will forget to send_l4c_crss response */
                CSMCC_PTR->aux_req_call_id = hold_req_call_id;
            }

            /* some call is waiting for call hold response */
            break;
         }
            
         /* now, no call is in call hold request state */

         switch(CSMCC_PTR->aux_req)
         {
            case CSMCC_ACCEPT_WAITING_CALL_REQ:
            case CSMCC_ACCEPT_CCBS_CALL_REQ:

               if(CSMCC_PTR->aux_req_call_id == call_id)
               {
                  csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                           CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                           cause);
               }
               else /* no hold_req calls, so may need accept call here. */
               {
                  csmcc_aux_accept_req_proc(CSMCC_PTR->aux_req_call_id);
               }
               
               break;
               
            case CSMCC_ACCEPT_HELD_CALL_REQ:

               ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                         CSMCC_CALL_RETRIEVE_REQ,
                                         &retrieve_req_call_id);

               if(ret_val != CSMCC_NO_ERROR)
               {
                  csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                           CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                           cause);
               }
               break;
            case CSMCC_NO_REQ:
               /* the released call is in call hold request state */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                        cause);
               break;
            default: 
               break;
         }

         break;

      case CSMCC_ADD_HELD_CALL_REQ:         
      
         /* if no call exists, then report L4C failure */
         /*MAUI_02290364, we should return CRSS_fail,if no call except waiting call exist*/
         if(csmcc_is_any_call_except_waiting_exist() == KAL_FALSE)
         {
            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                     CSMCC_ADD_HELD_CALL_REQ,
                                     cause);                                     
         }
         break;
         
      case CSMCC_EXPLICIT_CALL_TRANSFER_REQ:         

         /* if no call exists, then report L4C failure */
         if(csmcc_is_any_call_exist() == KAL_FALSE)
         {
            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                     CSMCC_EXPLICIT_CALL_TRANSFER_REQ,
                                     cause);                                     
         }
         break;

      case CSMCC_REL_ACTIVE_REQ:
      case CSMCC_REL_ALL_REQ:                     
      case CSMCC_REL_ALL_EXCEPT_WAITING_CALL_REQ:

         /* If a data call is released, before deactivate_cnf back, its state remains at Active. */
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                   (CSMCC_MS_CALL_DISC|CSMCC_CALL_ACTIVE), 
                                   &disc_call_id);
         
         if(ret_val != CSMCC_NO_ERROR)
         {
            /* all calls are released */
            csmcc_send_l4c_crss_succ(CSMCC_PTR->cur_req);         
         }

         break;
   
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
   
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_MS_CALL_DISC,
                                   &disc_call_id);
         if(ret_val != CSMCC_NO_ERROR)
         {
            /*mtk01602:[MAUI_00593059]*/
	    if(GET_CALL_STATE(CSMCC_PTR->req_call_id) == CSMCC_CALL_IDLE)
	    {
            	/* all calls are released */
            	csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);                           
            	SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
            }
         }

         break;   
#endif /* __SAT__ */

      default:
	/*Cosine: othercases, directly jump out*/
	break;

   } /* switch(CSMCC_PTR->cur_req) */

   /* MAUI_01643590 */
   /* UK_FT_weird_sound, detach_ind should go prior than call_rel_ind */
   /* detach speech if necessary */
   //csmcc_detach_speech();
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_call_clear_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_nvram_write_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to handle NVRAM write confirmation. Now this handle
*   CSD profile write confirmation only.
*
* CALLS  
*	csmcc_nvram_write_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_nvram_write_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   nvram_write_cnf_struct *nvram_write_cnf_ptr;   
   
   nvram_write_cnf_ptr = (nvram_write_cnf_struct*)local_para_ptr;
   
   #ifdef __CPHS__
   if(nvram_write_cnf_ptr->file_idx == NVRAM_EF_CFU_FLAG_LID) 
   {
      /* this is csmss' file, do not process it, return to let csmss process it. */
      return CSMCC_NO_ERROR;
   }
   #endif
   #if defined (__CPHS__) || defined (__CCM_NO_RESET__)
   if(nvram_write_cnf_ptr->file_idx == NVRAM_EF_ALS_LINE_ID_LID)
   {                                 
      /* this may come in when startup with SIM replaced or update_als_req from l4c. */
      /* only need to process update_als_req from l4c. */

      if (CSMCC_PTR->cur_req == CSMCC_UPDATE_ALS_REQ)
      {
         if(nvram_write_cnf_ptr->result == NVRAM_IO_ERRNO_OK)
         {
            CSMCC_PTR->als.line_id = CSMCC_PTR->temp_als_id;
            
            /* send update_als_cnf succ to l4c */
            csmcc_send_l4c_update_als_cnf(CSMCC_SUCCESS, NVRAM_IO_ERRNO_OK);
         }
         else
         {
            /* send update_als_cnf fail to l4c */
            csmcc_send_l4c_update_als_cnf(CSMCC_FAILURE, nvram_write_cnf_ptr->result);
         }
      }

      #if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__) && defined (__AOC_SUPPORT__)
	 /* MAUI_01938414 [CSMCC][Revise] support reset last ccm */
      if (CSMCC_PTR->cur_req == CSMCC_RESET_LAST_CCM_REQ)
      {
         if(nvram_write_cnf_ptr->result == NVRAM_IO_ERRNO_OK)
         {
            CSMCC_PTR->last_ccm = 0xffffffff;
            
            /* send update_als_cnf succ to l4c */
            csmcc_send_l4c_last_ccm_reset_cnf(CSMCC_SUCCESS, NVRAM_IO_ERRNO_OK);
         }
         else
         {
            /* send update_als_cnf fail to l4c */
            csmcc_send_l4c_last_ccm_reset_cnf(CSMCC_FAILURE, nvram_write_cnf_ptr->result);
         }
      }
      return CSMCC_NO_ERROR;
      #endif /*defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__) && defined (__AOC_SUPPORT__)*/

   }
   #endif /* (__CPHS__) || (__CCM_NO_RESET__) */
   
   return CSMCC_ERROR;
      
} /* end of csmcc_nvram_write_cnf_hdlr */
         


/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_startup_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process CSM CC startup request from L4C.
*   CSM CC shall read MS capabilties from NVRAM first, and then EFACM,  
*   EFACMmax, EFeMLPP, EFAAeM from SIM and MS in order.
*
* CALLS  
*	l4ccsm_cc_startup_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_startup_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_startup_req_struct *startup_req_ptr;

   startup_req_ptr = (l4ccsm_cc_startup_req_struct*)local_para_ptr;
      
   /* save source id */
   if (startup_req_ptr->init_type == L4CCSM_CC_STARTUP_NVRAM)
   {
      csmcc_save_cur_req(CSMCC_STARTUP_REQ, /* MAUI_01747506 separte startup to SIM and NVRAM */
                         startup_req_ptr->src_id,
                         CSMCC_INVALID_CALL_ID);

      /* readvar NVRAM first */
      csmcc_send_nvram_read_req(NVRAM_EF_MSCAP_LID, 1);
   }
   else if (startup_req_ptr->init_type == L4CCSM_CC_STARTUP_SIM)
   {
#if defined (__CPHS__) || defined (__CCM_NO_RESET__) 
      smu_sim_status_enum csmcc_check_sim_status;
      /* read ALS */
#if (defined(__CSMCC_UT__) && defined(__MTK_INTERNAL__))
/* under construction !*/
#else
      csmcc_check_sim_status = check_sim_status(CSMCC_SIM_INTERFACE);
#endif
      kal_brief_trace(TRACE_INFO, CSMCC_TRACE_IS_SIM_REPLACED, csmcc_check_sim_status);

      if (csmcc_check_sim_status == SMU_SIM_REPLACED)   
      {
         /* update line_id and ccm value of nvram */
         csmcc_send_nvram_als_req(CSMCC_ALS_LINE1, 0xffffffff);
      #if defined (__AOC_SUPPORT__) && defined (__CCM_NO_RESET__) 
         CSMCC_PTR->last_ccm = 0xffffffff;
      #endif /* defined (__AOC_SUPPORT__) && defined (__CCM_NO_RESET__)*/

      #ifdef __CPHS__
         /* send line_id to L4C */
         CSMCC_PTR->als.line_id = CSMCC_ALS_LINE1;
         csmcc_send_l4c_display_als_ind(CSMCC_ALS_LINE1);
      #endif           
      }
      else
      {
         /* Read als line id */
         csmcc_send_nvram_read_req(NVRAM_EF_ALS_LINE_ID_LID, 1);
         //return CSMCC_NO_ERROR;
      }        
#endif /* (__CPHS__) || (__CCM_NO_RESET__) */
  
      /* ALPS00740963 */
      CSMCC_PTR->starup_sim_read_req = KAL_TRUE;

#ifndef __CSMCC_UT__   
      /* check which sim files needed to be read */
      CSMCC_RESET_SIM_READ_FLAG
#endif

      
#ifdef __AOC_SUPPORT__
      if (CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_AOC) == SERVICE_SUPPORT)
      {
         CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK | CSMCC_FILE_ACMMAX_MASK)
            
      }
#endif
#ifdef __EMLPP_SUPPORT__
         if (CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_EMLPP) == SERVICE_SUPPORT)
      {
         CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK | CSMCC_FILE_AAEM_MASK)
      }
#endif
   
         switch (csmcc_first_read_sim_flag())
      {
#ifdef __AOC_SUPPORT__      
             case CSMCC_FILE_ACM_MASK:
                 csmcc_send_sim_read_req(FILE_ACM_IDX, ACM_LEN);
             break;
#endif
#ifdef __EMLPP_SUPPORT__
             case CSMCC_FILE_EMLPP_MASK:
                 csmcc_send_sim_read_req(FILE_EMLPP_IDX, EMLPP_LEN);
             break;
#endif
             default: 
         csmcc_send_l4c_startup_cnf(L4C_SUCCESS, NVRAM_IO_ERRNO_OK, L4CCSM_CC_STARTUP_SIM);
             break;
            
   
   
      }
   }
   else
   {
      ASSERT(KAL_FALSE);
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_startup_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_sig_con_reest_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call reestablishment indication.
*   CSM CC shall set the call reestablishment flag on.
*
* CALLS  
*	mncc_sig_con_reest_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_sig_con_reest_ind_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   
   /* set call reestablishment flag on */
   CSMCC_PTR->call_reest = KAL_TRUE;
   
   /* add by johnnie 2003/11/03 for turn-off speech in case of call re-establihsment */
   for(call_index = 1; call_index <= CSMCC_MAX_CALL_NUM; call_index++)
   {
      if(GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE
         && (GET_CALL_TYPE(call_index) == CSMCC_VOICE_CALL 
         || GET_CALL_TYPE(call_index) == CSMCC_AUX_VOICE_CALL))
      {
         csmcc_detach_speech();
         return CSMCC_NO_ERROR;
      }
   }

   return CSMCC_NO_ERROR;
   
} /* end of mncc_sig_con_reest_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_sig_con_reest_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call reestablishment confirmation.
*   This means call reestablishment phase ending.CSM CC shall set the call 
*   reestablishment flag off.
*
* CALLS  
*	mncc_sig_con_reest_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_sig_con_reest_cnf_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;
   
   /* set call reestablishment flag off */
   CSMCC_PTR->call_reest = KAL_FALSE;
   
   /* add by johnnie 2003/11/03 for turn-on speech in case of call re-establihsment successfully*/
   for(call_index = 1; call_index <= CSMCC_MAX_CALL_NUM; call_index++)
   {
      if(GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE
         && (GET_CALL_TYPE(call_index) == CSMCC_VOICE_CALL 
         || GET_CALL_TYPE(call_index) == CSMCC_AUX_VOICE_CALL))
      {
         csmcc_attach_speech();
         return CSMCC_NO_ERROR;
      }
   }      

   return CSMCC_NO_ERROR;
   
} /* end of mncc_sig_con_reest_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_sim_read_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process SIM read confirmation. If success,
*   continuely read next EF needed to be read.
*
* CALLS  
*	sim_read_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_sim_read_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   sim_read_cnf_struct *sim_read_cnf_ptr;

   sim_read_cnf_ptr = (sim_read_cnf_struct*)local_para_ptr;

   /*ALPS00437346, if dup_sim_file_change_req == true, means this cnf is for previous sim read req,
        so not update csm and cc, just continue to read the need-to-read files and unset this flag*/
   if(CSMCC_PTR->dup_sim_file_change_req != KAL_TRUE)
   {
   switch(sim_read_cnf_ptr->file_idx)
   {
 #ifdef __AOC_SUPPORT__
      case FILE_ACM_IDX:
         if(sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
         {
            SET_ACM_VAL(sim_read_cnf_ptr->data)
            if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_ACMMAX_MASK) == KAL_FALSE)
            {
               /* ACM has been valid */
               CSMCC_PTR->acm_valid = KAL_TRUE;
               /* send ACM update request to CC after reading ACM and ACMAX*/
               csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);
            }
         }
         CSMCC_UNSET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK)
         break;
      case FILE_ACMAX_IDX:
         if(sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
         {
            SET_ACMMAX_VAL(sim_read_cnf_ptr->data)
            /* ACM has been valid */
            CSMCC_PTR->acm_valid = KAL_TRUE;
            /* send ACM update request to CC after reading ACM and ACMAX*/
            csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);
         }
         CSMCC_UNSET_SIM_READ_FLAG(CSMCC_FILE_ACMMAX_MASK)
         break;
#endif
      case FILE_EMLPP_IDX:
         if(sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
         {
            SET_EMLPP_VAL(sim_read_cnf_ptr->data)
         }         
         CSMCC_UNSET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK)
         break;
      case FILE_AAEM_IDX:
         if(sim_read_cnf_ptr->result == SIM_CMD_SUCCESS)
         {
            SET_AAEM_VAL(sim_read_cnf_ptr->data)
         }
         CSMCC_UNSET_SIM_READ_FLAG(CSMCC_FILE_AAEM_MASK)
         break;
      default:
         return CSMCC_NO_ERROR;
   }

   if(sim_read_cnf_ptr->result != SIM_CMD_SUCCESS)
   {
      if (CSMCC_PTR->sat_file_change_req != KAL_TRUE) /* ALPS00439699 */
      {
         CSMCC_SET_STARTUP_SIM_FAIL_FLAG
      }
#ifdef __SAT__
      else if (CSMCC_PTR->sat_file_change_req == KAL_TRUE) /* ALPS00439699 */
      {
         CSMCC_SET_SIM_FILE_CHANGE_FAIL_FLAG
      }
#endif
   }
   }//end if(CSMCC_PTR->dup_sim_file_change_req != KAL_TRUE)
   else
   {
      CSMCC_PTR->dup_sim_file_change_req = KAL_FALSE;//reset dup_sim_file_change_req
   }

#ifdef __AOC_SUPPORT__
   if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_ACM_IDX, ACM_LEN);
   }
   else if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_ACMMAX_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_ACMAX_IDX, ACMMAX_LEN);
   }
   else
#endif /*__AOC_SUPPORT__*/
   {
      if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_EMLPP_IDX, EMLPP_LEN);
   }
   else if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_AAEM_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_AAEM_IDX, AAEM_LEN);
   }
   else
   {
      /* all sim file needed to be read has been read */      
      if (CSMCC_PTR->sat_file_change_req != KAL_TRUE) /* ALPS00439699 */
      {
         csmcc_send_l4c_startup_cnf(L4C_SUCCESS, sim_read_cnf_ptr->result, L4CCSM_CC_STARTUP_SIM);
         CSMCC_PTR->starup_sim_read_req = KAL_FALSE;

      }
#ifdef __SAT__
      else if (CSMCC_PTR->sat_file_change_req == KAL_TRUE) /* ALPS00439699 */
      {
         /* ALPS00740963 */
         if(CSMCC_PTR->starup_sim_read_req == KAL_TRUE) 
         {
             csmcc_send_l4c_startup_cnf(L4C_SUCCESS, sim_read_cnf_ptr->result, L4CCSM_CC_STARTUP_SIM);
             CSMCC_PTR->starup_sim_read_req = KAL_FALSE;
         }

         if(CSMCC_GET_SIM_FILE_CHANGE_FAIL_FLAG == KAL_TRUE)
         {
            /* in case SAT file change, send result to SIM once read error */
            csmcc_send_sim_file_change_res(KAL_FALSE);
         }
         else
         {         
            /* all sim file needed to be update has been updated */
            csmcc_send_sim_file_change_res(KAL_TRUE);
         }
      }
#endif

   }
}
   return CSMCC_NO_ERROR;
      
} /* end of csmcc_sim_read_cnf_hdlr */

#ifdef __CPHS__
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_update_als_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process update als line id request from L4C.
*
* CALLS  
*	nvram_read_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_update_als_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_update_als_req_struct *als_req_ptr;

   als_req_ptr = (l4ccsm_cc_update_als_req_struct *)local_para_ptr;

   /*mtk01602: remove ASSERT since it should not occur now.*/
   //ASSERT (als_req_ptr->line_id <= CSMCC_ALS_LINE2);

   /* update line_id of nvram */   
   #if defined (__CCM_NO_RESET__) && defined (__AOC_SUPPORT__)
   csmcc_send_nvram_als_req(als_req_ptr->line_id, CSMCC_PTR->last_ccm);
   #else
   csmcc_send_nvram_als_req(als_req_ptr->line_id, 0xffffffff);
   #endif
   /* save temp line id */
   CSMCC_PTR->temp_als_id = als_req_ptr->line_id;

   csmcc_save_cur_req(CSMCC_UPDATE_ALS_REQ,
                      als_req_ptr->src_id,
                      CSMCC_INVALID_CALL_ID);
     
   return CSMCC_NO_ERROR;
}

#if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__)&& defined (__AOC_SUPPORT__)
/* MAUI_01938414 [CSMCC][Revise] support reset last ccm */
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_reset_last_ccm_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process reset last ccm request from L4C.
*
* CALLS  
*	nvram_read_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_reset_last_ccm_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_last_ccm_reset_req_struct *reset_last_ccm_req_ptr;

   reset_last_ccm_req_ptr = (l4ccsm_cc_last_ccm_reset_req_struct *)local_para_ptr;

   /*mtk01602: remove ASSERT since it should not occur now.*/
   //ASSERT (als_req_ptr->line_id <= CSMCC_ALS_LINE2);

   /* update last ccm */   
   csmcc_send_nvram_als_req(CSMCC_PTR->als.line_id, 0xffffffff);

   csmcc_save_cur_req(CSMCC_RESET_LAST_CCM_REQ,
                      reset_last_ccm_req_ptr->src_id,
                      CSMCC_INVALID_CALL_ID);
     
   return CSMCC_NO_ERROR;
}
#endif
#endif

#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_acmmax_set_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process ACMMax set request from L4C.
*
* CALLS  
*	nvram_read_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_acmmax_set_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_acmmax_set_req_struct *acmmax_set_req_ptr;
   kal_uint8 data[ACMMAX_LEN];
   
   acmmax_set_req_ptr = (l4ccsm_cc_acmmax_set_req_struct*)local_para_ptr;

   if(acmmax_set_req_ptr->acmmax > 0x00ffffff)
   {
      /* ACMMAX is too much */
      csmcc_send_l4c_acmmax_set_cnf(acmmax_set_req_ptr->src_id, 
                                    CSMCC_FAILURE,
                                    CSMCC_CMD_NOT_ALLOW);
      return CSMCC_NO_ERROR;
   }

   /* send sim_write_req to SIM */
   FILL_ACM_VAL(data, acmmax_set_req_ptr->acmmax)
   
   csmcc_send_sim_write_req(FILE_ACMAX_IDX, data, ACMMAX_LEN);

   /* record write value in order to update upon write cnf */
   CSMCC_PTR->acmmax_update_temp = acmmax_set_req_ptr->acmmax;

   csmcc_save_cur_req(CSMCC_ACMMAX_SET_REQ,
                      acmmax_set_req_ptr->src_id,
                      CSMCC_INVALID_CALL_ID);

   return CSMCC_NO_ERROR;

} /* end of l4ccsm_cc_acmmax_set_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_acm_reset_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process ACM reset request from L4C.
*
* CALLS  
*	nvram_read_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_acm_reset_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   l4ccsm_cc_acm_reset_req_struct *acm_reset_req_ptr;
   kal_uint8 data[ACM_LEN];

   acm_reset_req_ptr = (l4ccsm_cc_acm_reset_req_struct*)local_para_ptr;

   /* send sim_write_req to SIM */
   FILL_ACM_VAL(data, 0)
   
   csmcc_send_sim_write_req(FILE_ACM_IDX, data, ACM_LEN);

   csmcc_save_cur_req(CSMCC_ACM_RESET_REQ,
                      acm_reset_req_ptr->src_id,
                      CSMCC_INVALID_CALL_ID);

   return CSMCC_NO_ERROR;

} /* end of l4ccsm_cc_acm_reset_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_sim_write_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process SIM write confirmation.
*
* CALLS  
*	sim_write_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_sim_write_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   sim_write_cnf_struct *sim_write_cnf_ptr;

   sim_write_cnf_ptr = (sim_write_cnf_struct*)local_para_ptr;

   if(sim_write_cnf_ptr->result != SIM_CMD_SUCCESS)
   {
      switch(sim_write_cnf_ptr->file_idx)
      {
         case FILE_ACM_IDX:
            switch(CSMCC_PTR->cur_req)               
            {
               case CSMCC_ACM_RESET_REQ:
                  /* send L4C acm reset failure*/               
                  csmcc_send_l4c_acm_reset_cnf(CSMCC_PTR->req_src_id, 
                                               CSMCC_FAILURE,
                                               sim_write_cnf_ptr->result);

                  break;
               default:
                  /* invalid value range */
                  break;
            }
            break;
         case FILE_ACMAX_IDX:
            switch(CSMCC_PTR->cur_req)
            {
               case CSMCC_ACMMAX_SET_REQ:
                  /* send L4C acmmax set failure */
                  csmcc_send_l4c_acmmax_set_cnf(CSMCC_PTR->req_src_id, 
                                                CSMCC_FAILURE,
                                                sim_write_cnf_ptr->result);
                  break;
               default:
                  /* invalid value range */
                  break;
            }
            break;
         default:
            /* invalid value range */
            break;
      }
   }
   else
   {
      switch(sim_write_cnf_ptr->file_idx)
      {
         case FILE_ACM_IDX:
            switch(CSMCC_PTR->cur_req)
            {
               case CSMCC_ACM_RESET_REQ:
                  /* reset acm in CSMCC context */
                  CSMCC_PTR->acm = 0;
		    CSMCC_PTR->pre_acm = 0;		  
                  /* send ACM update request to CC after reading ACM and ACMAX*/
                  csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);                  
                  /* send L4C acm reset success */            
                  csmcc_send_l4c_acm_reset_cnf(CSMCC_PTR->req_src_id, 
                                               CSMCC_SUCCESS,
                                               sim_write_cnf_ptr->result);
                  break;
               default:
                  /* invalid value range */
                  break;
            }
            break;
         case FILE_ACMAX_IDX:
            switch(CSMCC_PTR->cur_req)
            {
               case CSMCC_ACMMAX_SET_REQ:
                  /* update acmmax in CSMCC context */
                  CSMCC_PTR->acmmax = CSMCC_PTR->acmmax_update_temp;
                  /* send ACM update request to CC after reading ACM and ACMAX*/
                  csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);
                  /* send L4C acmmax set success */
                  csmcc_send_l4c_acmmax_set_cnf(CSMCC_PTR->req_src_id, 
                                                CSMCC_SUCCESS,
                                                sim_write_cnf_ptr->result);
                  break;
               default:
                  /* invalid value range */
                  break;
            }
            break;
         default:
            /* invalid value range */
            break;
      }
   }

   return CSMCC_NO_ERROR;

} /* end of csmcc_sim_write_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_sim_increase_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process SIM increase confirmation.
*
* CALLS  
*	sim_increase_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_sim_increase_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   sim_increase_cnf_struct *sim_incr_cnf_ptr;
   kal_uint8 call_index;   
   //kal_uint8 data[ACM_LEN];

   sim_incr_cnf_ptr = (sim_increase_cnf_struct*)local_para_ptr;

   /* MAUI_01254060 [MT6268 FTA] 6.4.4 */

   /* find out the call which increases acm */
   /* not used any more */
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
   
   if(sim_incr_cnf_ptr->result != SIM_CMD_SUCCESS
      || sim_incr_cnf_ptr->length < ACM_LEN)
   {
      /*put acm reset before csmcc_disc_call, so that in csmcc disc call , it will not increase again*/
      CSMCC_PTR->acm = CSMCC_PTR->pre_acm;
      kal_trace(TRACE_INFO,CSMCC_TRACE_ACM_VALUE,CSMCC_PTR->acm,CSMCC_PTR->pre_acm,CSMCC_PTR->acm_before_write_sim);
      for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
      {
         if (CALL_DATA(call_index, ccm_per_call) != 0)
         {
            /* according to spec, increase failure shall disconnect call */
            csmcc_disc_call(call_index, CM_NORMAL_UNSPECIFIED);
         }
      }
      /* sync acm value to CC, because increase failure */
       csmcc_send_cc_acm_update_req(CSMCC_PTR->acmmax, CSMCC_PTR->acm);      
      
      //return CSMCC_NO_ERROR;
   }
   else
   {
       CSMCC_PTR->pre_acm = CSMCC_PTR->acm_before_write_sim;
       kal_trace(TRACE_INFO,CSMCC_TRACE_ACM_VALUE,CSMCC_PTR->acm,CSMCC_PTR->pre_acm,CSMCC_PTR->acm_before_write_sim);
   }

   //if(CSMCC_PTR->update_acm_flag == KAL_TRUE)
   //{
   //	FILL_ACM_VAL(data, CSMCC_PTR->acm - CSMCC_PTR->pre_acm)
   //	csmcc_send_sim_increase_req(FILE_ACM_IDX, data, ACM_LEN);
   //	CSMCC_SET_CCM_INCR_FLAG(call_index);
   //	CSMCC_PTR->update_acm_flag = KAL_FALSE;
   //}

//mtk00924_051209: set acm value immediately when receiving mncc_aoc_ind 
   //SET_ACM_VAL(sim_incr_cnf_ptr->data)

   return CSMCC_NO_ERROR;

}   /* end of csmcc_sim_increase_cnf_hdlr */
#endif  /*__AOC_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_emergency_call_setup_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the emergency call setup request from
*   L4C.
*
* CALLS  
*	l4ccsm_cc_emergency_call_setup_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_emergency_call_setup_req_hdlr( local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_emergency_call_setup_req_struct *emergency_call_setup_req_ptr;  
   csmcc_ret_t ret_val;
   kal_uint8 call_id;
   kal_uint8 active_call_id; 
   csmcc_call_type_enum call_type;
   
   emergency_call_setup_req_ptr = (l4ccsm_cc_emergency_call_setup_req_struct*)local_para_ptr;

   if (CSMCC_PTR->mscap.disable_call == KAL_TRUE)
   {
       csmcc_send_l4c_emergency_setup_fail(emergency_call_setup_req_ptr->src_id,
                                             CSMCC_CMD_NOT_ALLOW);         
       return CSMCC_NO_ERROR;
   }
   
   /* alloate call id */
   ret_val = csmcc_alloc_call_context(&call_id);

   if(ret_val != CSMCC_NO_ERROR)
   {
      /* no free call context can be allocated for the call */
      csmcc_send_l4c_emergency_setup_fail(emergency_call_setup_req_ptr->src_id,
                                          CSMCC_CALL_ALLOC_FAIL);
      return CSMCC_NO_ERROR;
   }

   do
   {
      /*if the MS is in startup, sending setup fail with cause CM_TEMPORARY_FAILURE, let l4c retry*/
      if(CSMCC_PTR->cur_req == CSMCC_STARTUP_REQ)
      {
         csmcc_send_l4c_emergency_setup_fail(emergency_call_setup_req_ptr->src_id,
         	                                    CM_TEMPORARY_FAILURE);
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }

      /* check if the call is allowed to be setup */    
      if(csmcc_is_allowed_setup_call(KAL_FALSE /* full checking */) == KAL_FALSE)
      {
         /* call setup is not allowed */
         csmcc_send_l4c_emergency_setup_fail(emergency_call_setup_req_ptr->src_id,
                                             CSMCC_CMD_NOT_ALLOW);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }
            
      /* reset and fill bearer capability */
      csmcc_reset_bc();

      /* for emerg. call, always set as line1, follow ref. phone. */
      call_type = CSMCC_VOICE_CALL;

      ret_val = csmcc_fill_bc(call_id, 
                              emergency_call_setup_req_ptr->src_id,
                              call_type,
                              0);
      
      if(ret_val != CSMCC_NO_ERROR)
      {
         /* bearer capability is not authorized */
         csmcc_send_l4c_emergency_setup_fail(emergency_call_setup_req_ptr->src_id,
                                             CSMCC_BC_FILL_FAIL);      
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }   
   }while(0);

   if (ret_val == CSMCC_NO_ERROR)
   {
      /* allow to make emergency call, save request */
      csmcc_save_cur_req(CSMCC_EMERGENCY_CALL_SETUP_REQ,
                         emergency_call_setup_req_ptr->src_id,
                         call_id);

      /* MAUI_01296840: fill call context for emergency call*/
      csmcc_fill_emergency_mo_call_context(call_id, emergency_call_setup_req_ptr);

      /* for ECPI: report call id assign here */
      csmcc_send_l4c_cpi_ind(call_id,
                           CSMCC_MO_CALL_ID_ASSIGN_MSG,
                           KAL_FALSE,
                           KAL_FALSE,
                           CSMCC_NO_CAUSE,
                           0);

      /* check if it is necessary to put active call on hold first. */
      if(csmcc_find_call(CSMCC_ORIG_NONE, 
                         CSMCC_CALL_ACTIVE, 
                         &active_call_id) == CSMCC_NO_ERROR)
      {      
         /* put active call (TS11) on hold */
         csmcc_hold_active_call(active_call_id);
         
         return CSMCC_NO_ERROR;
      }
      
      /* send emergency call setup to CC */
      csmcc_send_cc_emergency_setup_req(call_id);
      
      SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
   }
   else if (ret_val == CSMCC_ERROR)
   {
      csmcc_dealloc_call_context(call_id);
   }
   else
   {
      ASSERT(KAL_FALSE);
   }

   return CSMCC_NO_ERROR;

} /* end of l4ccsm_cc_emergency_call_setup_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_setup_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the MO call setup request from L4C.
*
* CALLS  
*	l4ccsm_cc_call_setup_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_setup_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   kal_uint8 call_id;
   kal_uint8 active_call_id; 
   csmcc_call_type_enum call_type;
   l4ccsm_cc_call_setup_req_struct *call_setup_req_ptr;  

   call_setup_req_ptr = (l4ccsm_cc_call_setup_req_struct*)local_para_ptr;

   call_type = (csmcc_call_type_enum)(call_setup_req_ptr->call_type);

   if (CSMCC_PTR->mscap.disable_call == KAL_TRUE)
   {

       csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_CMD_BEYOND_ME_CAP,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);
       return CSMCC_NO_ERROR;
   }

#ifdef __VIDEO_CALL_SUPPORT__
      if((call_type == CSMCC_VIDEO_CALL) && ((csmcc_call_capability & CSMCC_VT_CAP_MASK) !=0))
   {
       csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_CMD_BEYOND_ME_CAP,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);
       return CSMCC_NO_ERROR;

    }
#endif
   /* alloate call id */
   ret_val = csmcc_alloc_call_context(&call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* no free call context can be allocated for the call */
      csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                (kal_uint8)call_type,
                                CSMCC_CALL_ALLOC_FAIL,
                                SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                0);
      
      return CSMCC_NO_ERROR;
   }

   do
   {

   /* MAUI_01647491 [L4C][CSM] Support Specifing als type in callsetup */
   if ((call_type == CSMCC_VOICE_CALL) 
      || (call_type == CSMCC_AUX_VOICE_CALL))
   {
      #ifdef __CPHS__ //MAUI_01977687
         switch (call_setup_req_ptr->als_type)
         {
         case  ALS_DIAL_BY_SETTING:
            call_type = ( CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2 ) ? 
                               CSMCC_AUX_VOICE_CALL : CSMCC_VOICE_CALL;
            break;
         case  ALS_DIAL_LINE1:
            CSMCC_PTR->als.line_id = CSMCC_ALS_LINE1;
            call_type = CSMCC_VOICE_CALL;;
            break;
         case  ALS_DIAL_LINE2:
            CSMCC_PTR->als.line_id = CSMCC_ALS_LINE2;
            call_type = CSMCC_AUX_VOICE_CALL;
            break;
         default:
            ASSERT(KAL_FALSE);
            break;
         }
      #else
         call_type = CSMCC_VOICE_CALL;
      #endif
   }
   else /* want to setup a non-voice call. */
   {
#ifdef __CSD_FAX__
         /* if call type is data call and fclass is 1,1.0,2,2.0, this is a FAX call */
         if((call_type == CSMCC_DATA_CALL)
            &&(CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_TIA
               || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_1_ITUT 
               || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_MANU_SPECIFIC
                  || CSMCC_PTR->at_param.fclass_mode == CSMCC_FAX_CLASS_2))
         {
            call_type = CSMCC_FAX_CALL;
         }
#endif     

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         if (call_type == CSMCC_SAT_DATA_CALL &&
             CSMCC_PTR->sat_prof.addr.addr_length == 0)
         {
            csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                      call_type,
                                      CM_UNASSIGNED_NUM,
                                      SAT_CMD_NUMBER_NOT_KNOWN_BY_ME,
                                      SAT_NO_SPECIFIC_CAUSE,
                                      0);
            //return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
         }
#endif/* __SATCE__ */
         
         //if (csmcc_is_any_call_exist())
         if(csmcc_is_the_only_call(call_id) != KAL_TRUE)
         {
            /* if there is any call exists, then can not make wap/data/fax call. */
            csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                   SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                   0);
         
            //return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
         }  

#ifdef __VIDEO_CALL_SUPPORT__
//MAUI_01966467
      /*[MAUI_01712442] Not allow video call if no UMTS capability*/
      if(call_type == CSMCC_VIDEO_CALL)
      {
          if((CSMCC_PTR->rat_mode == RAT_GSM) || (CSMCC_PTR->rat_mode == RAT_NONE))
         {
            csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
            		           (kal_uint8)call_type,
         			        CSMCC_VT_NO_UMTS_CAPABILITY,
                                      SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                      SAT_NO_SPECIFIC_CAUSE,
                                      0);
              //return CSMCC_NO_ERROR;
              ret_val = CSMCC_ERROR;
              break;
          }
         }
#endif
      }

      /*if the MS is in startup, sending setup fail with cause CM_TEMPORARY_FAILURE, let l4c retry*/
      if(CSMCC_PTR->cur_req == CSMCC_STARTUP_REQ)
      {
         csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                      (kal_uint8)call_type,
                                      CM_TEMPORARY_FAILURE,
                                      SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                      SAT_NO_SPECIFIC_CAUSE,
                                      0);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }   
         
      /* check if the call is allowed to be setup */
      if (csmcc_is_allowed_setup_call(KAL_FALSE) == KAL_FALSE)
      {
         /* call setup is not allowed */
         csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CSMCC_CMD_NOT_ALLOW,
                                   SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                   SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                   0);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }
#ifdef __AOC_SUPPORT__
      if(csmcc_is_acm_exceed() == KAL_TRUE)
      {
         /* ACM >= ACMMAX */
         csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CM_ACM_EXCEEDED, 
                                   SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }
#endif/*__AOC_SUPPORT__*/ 
      /* reset and fill bearer capability */   
      csmcc_reset_bc();
      ret_val = csmcc_fill_bc(call_id, 
                              call_setup_req_ptr->src_id,
                              call_type,
                              call_setup_req_ptr->profile_type);
      
      if(ret_val != CSMCC_NO_ERROR)
      {
         /* bearer capability is not authorized */
         csmcc_send_l4c_setup_fail(call_setup_req_ptr->src_id,
                                   (kal_uint8)call_type,
                                   CSMCC_BC_FILL_FAIL,
                                   SAT_CMD_BEYOND_ME_CAP,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);            
                                   
         /* deallocate call context */
         //csmcc_dealloc_call_context(call_id);

         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }   
   }while(0);

   if (ret_val == CSMCC_NO_ERROR)
   {
      /* allow to make mo call, save request */
      csmcc_save_cur_req(CSMCC_CALL_SETUP_REQ,
                         call_setup_req_ptr->src_id,
                         call_id);

      /* fill call context */
      csmcc_fill_mo_call_context(call_id, call_setup_req_ptr);   

      /* for ECPI: report call id assign here */
      csmcc_send_l4c_cpi_ind(call_id,
                           CSMCC_MO_CALL_ID_ASSIGN_MSG,
                           KAL_FALSE,
                           KAL_FALSE,
                           CSMCC_NO_CAUSE,
                           0);

#ifdef __SAT__
      /* query SIM if support call control by sim, if support call control 
         by sim, send call control by sim request to sim. If this is a redial 
         call, call control by sim request is not sent */   
      if(call_setup_req_ptr->redial == 0  
         && CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_CALL_CONTROL) == SERVICE_SUPPORT)
      {
         csmcc_send_sim_call_ctrl_req(call_id, KAL_FALSE);
         return CSMCC_NO_ERROR;
      }
#endif /* __SAT__ */

      /* check if it is necessary to put active call on hold first. */
      if(csmcc_find_call(CSMCC_ORIG_NONE, 
                         CSMCC_CALL_ACTIVE, 
                         &active_call_id) == CSMCC_NO_ERROR)
      {
         /* put active call (TS11) on hold */
         csmcc_hold_active_call(active_call_id);

         return CSMCC_NO_ERROR;
      }

      /* no active call is needed to be put on hold, send call setup to CC */
      csmcc_send_cc_setup_req(call_id);
      
      SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
      
   }
   else if (ret_val == CSMCC_ERROR)
   {
      csmcc_dealloc_call_context(call_id);
   }
   else
   {
      ASSERT(KAL_FALSE);
   }

   return CSMCC_NO_ERROR;

}/* end of l4ccsm_cc_call_setup_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_accept_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call accept request from L4C.
*
* CALLS  
*	l4ccsm_cc_call_accept_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_accept_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   l4ccsm_cc_call_accept_req_struct *call_accept_req_ptr;
   kal_uint8 call_id;   
   csmcc_ret_t ret_val;
   
   call_accept_req_ptr = (l4ccsm_cc_call_accept_req_struct*)local_para_ptr;   
   call_id = call_accept_req_ptr->call_id;
   
   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK)
   {
      /* invalid call id */
      csmcc_send_l4c_accept_fail(call_accept_req_ptr->src_id, 
                                 call_id, 
                                 CSMCC_ILLEGAL_CALL_ID);
      return CSMCC_NO_ERROR;                                 
   }

   if(CALL_DATA(call_id,call_orig) != CSMCC_MT_CALL
      || GET_CALL_STATE(call_id) != CSMCC_CALL_INIT
      ||csmcc_is_allowed_accept_call() == KAL_FALSE )
   {
      /* it's not allowed to accept a call */
      csmcc_send_l4c_accept_fail(call_accept_req_ptr->src_id, 
                                 call_id, 
                                 CSMCC_CMD_NOT_ALLOW);
      
      return CSMCC_NO_ERROR;
      
   }

   ret_val = csmcc_accept_mt_call(call_id);

   if (ret_val != CSMCC_NO_ERROR)
   {
      csmcc_send_l4c_accept_fail(call_accept_req_ptr->src_id, 
                                 call_id, 
                                 ret_val);
      
      return CSMCC_NO_ERROR;
   }
   
   /* [Cosine 070319] Once CSMCC send EVDL_CALL_CONNECT to SIM, some SIM cards may
      pop out Select Item screen and MMI reject other menu access. 
      According to SIM spec. TS102.223 v6.7 sec.7.5.2, CSMCC shall send 
      EVDL_CALL_CONNECT when receiving incoming connect message in case of MT call. */ 
//#ifdef __SATC3__
//   /* for SAT class 3, inform SAT about sending CONNECT */
//   csmcc_send_sim_call_conn_req(CALL_DATA(call_id, ti), KAL_TRUE);
//#endif      

   /* it's allow to accept a call, save request */
   csmcc_save_cur_req(CSMCC_CALL_ACCEPT_REQ,
                      call_accept_req_ptr->src_id,
                      call_id);

   /* save source ID used in case of sending indication */
   CALL_DATA(call_id,src_id) = call_accept_req_ptr->src_id;
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_call_accept_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_disc_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call disconnect request from L4C.
*
* CALLS  
*	l4ccsm_cc_call_disc_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_disc_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   csmcc_call_state_enum call_state;
   l4ccsm_cc_call_disc_req_struct *call_disc_req_ptr;
   
   call_disc_req_ptr = (l4ccsm_cc_call_disc_req_struct*)local_para_ptr;
   call_id = call_disc_req_ptr->call_id;   
   call_state = GET_CALL_STATE(call_id);
   
   /* Ripple: 1A, MO-> hold_req, MO state is IDLE */
   if(call_id == CSMCC_PTR->req_call_id
      && (CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ
          || CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ
          || CSMCC_PTR->cur_req == CSMCC_EMERGENCY_CALL_SETUP_REQ)
      && GET_CALL_STATE(CSMCC_PTR->req_call_id) == CSMCC_CALL_IDLE)
   {
      //csmcc_reset_cur_req(CSMCC_PTR->cur_req);
      CSMCC_PTR->req_src_id = call_disc_req_ptr->src_id;      
      csmcc_send_l4c_disc_succ(call_id);
      /*cur_req=CSMCC_NO_REQ, only here can reset the current requet
      related parameters to initial condition, csmcc_reset_cur_req in csmcc
      _send_l4c_disc_succ can't do this*/
      csmcc_reset_cur_req(CSMCC_PTR->cur_req);      
      
      /* deallocate call context */
      csmcc_dealloc_call_context(call_id);
      return CSMCC_NO_ERROR;
   }
   /* check if the call is idle but no setup_req . if yes, reject the request */ 
   else if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK
      || call_state == CSMCC_CALL_IDLE
      || call_state == CSMCC_MS_CALL_DISC)
   {
      csmcc_send_l4c_disc_fail(call_disc_req_ptr->src_id, call_id);
      return CSMCC_NO_ERROR;
   }
   
   if(CALL_DATA(call_id,call_orig) == CSMCC_MT_CALL
      && ((GET_CALL_STATE(call_id)&(CSMCC_CALL_INIT|CSMCC_CALL_ACCEPT)) != 0))
   {
      csmcc_disc_call(call_id, CM_USER_BUSY);
   }
   else
   {
   csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);  
   }
   
   /* it's allow to disc a "speech" call, save request */
   csmcc_save_cur_req(CSMCC_CALL_DISC_REQ,
                      call_disc_req_ptr->src_id,
                      call_id);

   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_call_disc_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_rel_comp_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process release complete request from L4C.
*
* CALLS  
*	l4ccsm_cc_rel_comp_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_rel_comp_req_hdlr(local_para_struct *local_para_ptr)
{
   kal_uint8 call_id, call_index;
   l4ccsm_cc_rel_comp_req_struct *l4c_rel_comp_req_ptr;
   mncc_rel_comp_req_struct *mncc_rel_comp_req_ptr;
   
   
   l4c_rel_comp_req_ptr = (l4ccsm_cc_rel_comp_req_struct*)local_para_ptr;
   call_id = l4c_rel_comp_req_ptr->call_id;
   
   if (call_id == CSMCC_INVALID_CALL_ID)
   { 
      /* Ripple: if call id is INVALID_CALL_ID, indicate MMI has not known call id.
      * This only may occurs when SETUP_REQ-> DISC_REQ-> REL_COMP_REQ.
      * So the call that the previouse state is outgoing and current staet is DISCONNECTING 
      * is which we should send REL COMPLETE. */
      for(call_index = 1; call_index <= CSMCC_MAX_CALL_NUM; call_index++)
      {
         if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
            continue;
            
         if(((CALL_DATA(call_index, call_orig) & CSMCC_MO_CALL) > 0) &&
             ((GET_CALL_STATE(call_index) & CSMCC_ALL_DISC_STATES) != 0) &&
             (csmcc_ctab_g.call_tab[call_index-1].pre_call_state <= CSMCC_CALL_ALERT))
         {
            call_id = call_index;
            break;
         }
      }
   }

   /* Ripple: if call id is still INVALID or call is idle, indicate the call has been released. */
   if((call_id == CSMCC_INVALID_CALL_ID) || 
       GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
      return CSMCC_NO_ERROR;
   }

/*MAUI_02648399, only in state RLC_TIMER_RUNNING/RLC_TIMER_EXPIRE handle the MMI RLC_REQ, other state ignore it*/
   if(CALL_DATA(call_id, csmcc_rlc_status) == RLC_TIMER_RUNNING)
        CALL_DATA(call_id, csmcc_rlc_status) = WAIT_FOR_SENDING_RLC;
   else if(CALL_DATA(call_id, csmcc_rlc_status) == RLC_TIMER_EXPIRE) 
   {
   	CSMCC_CONSTRUCT_LOCAL_PARA(mncc_rel_comp_req_ptr, 
       		                   mncc_rel_comp_req_struct) 
   
        mncc_rel_comp_req_ptr->call_id = call_id;
        mncc_rel_comp_req_ptr->ti = CALL_DATA(call_id,ti);  
        mncc_rel_comp_req_ptr->cause.cause_value = CM_NORMAL_CALL_CLR;
   
        csmcc_send_ilm(mncc_rel_comp_req_ptr, 
                       MSG_ID_MNCC_REL_COMP_REQ, 
                       MOD_CC,
                       NULL);

        csmcc_call_clear_hdlr(call_id, CM_NORMAL_CALL_CLR,0,CSMCC_NO_CAUSE);
   }

   return CSMCC_NO_ERROR;
}

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_start_dtmf_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process sending start DTMF request from L4C.
*
* CALLS  
*	l4ccsm_cc_start_dtmf_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_start_dtmf_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_start_dtmf_req_struct *start_dtmf_req_ptr;   
   kal_uint8 call_id, call_index;
   
   start_dtmf_req_ptr = (l4ccsm_cc_start_dtmf_req_struct*)local_para_ptr;   
   call_id = start_dtmf_req_ptr->call_id;

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK)
   {
      /* invalid call id */
      csmcc_send_l4c_start_dtmf_fail(start_dtmf_req_ptr->src_id,
                                     call_id, 
                                     start_dtmf_req_ptr->tone, 
                                     CSMCC_ILLEGAL_CALL_ID);
    
       return CSMCC_NO_ERROR;
   }
   
   /*Cosine, 070711: [MAUI_00235279] Not sending DTMF during an on-going HOLD Request,
     Since network does not expect for DTMF after sending HOLD Message.*/
   if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON
      ||CALL_DATA(call_id, wait_stop_dtmf) == KAL_TRUE
      ||GET_CALL_STATE(call_id) == CSMCC_CALL_HOLD_REQ
      ||GET_CALL_STATE(call_id) == CSMCC_CALL_RETRIEVE_REQ
      ||GET_MPTY_STATE(call_id) == CSMCC_MPTY_REQ
      ||GET_MPTY_STATE(call_id) == CSMCC_SPLIT_REQ)//MAUI_02295713
   {
      /* it's not allow to send dtmf */
      csmcc_send_l4c_start_dtmf_fail(start_dtmf_req_ptr->src_id,
                                     call_id, 
                                     start_dtmf_req_ptr->tone, 
                                     CSMCC_CMD_NOT_ALLOW);
    
       return CSMCC_NO_ERROR;
   }

    for (call_index=1; call_index < CSMCC_MAX_CALL_NUM; call_index++)
   {
      /* there is auto dtmf. */
      if (CALL_DATA(call_index, dtmf.digit) != NULL)
      {
          csmcc_send_l4c_start_dtmf_fail(start_dtmf_req_ptr->src_id,
                                     call_id, 
                                     start_dtmf_req_ptr->tone, 
                                     CSMCC_CMD_NOT_ALLOW);
          
          return CSMCC_NO_ERROR;
      }
   }

   switch(start_dtmf_req_ptr->tone)
   {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':         
      case '*':
      case '#':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
            
         csmcc_send_cc_start_dtmf_req(call_id, start_dtmf_req_ptr->tone);

         /* for dtmf request request, it is handled as a special case 
            to save the dtmf mode (manual or +vts) instead of request.
            It is assumed that start and stop dtmf request must be 
            coupled. */

         CALL_DATA(call_id, dtmf_mode) = 
            ((start_dtmf_req_ptr->src_id >= RMMI_SRC)?CSMCC_VTS_DTMF:CSMCC_MANUAL_DTMF);
         
         CSMCC_PTR->dtmf_src_id = start_dtmf_req_ptr->src_id;

         /* turn on waiting stop dtmf flag */
         CALL_DATA(call_id, wait_stop_dtmf) = KAL_TRUE;
         
         break;
    
      default:
         /* invalid value range */
         csmcc_send_l4c_start_dtmf_fail(start_dtmf_req_ptr->src_id,
                                        call_id, 
                                        start_dtmf_req_ptr->tone, 
                                        CSMCC_ILLEGAL_DTMF_TONE);
         
         break;

   } 
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_start_dtmf_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_stop_dtmf_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process sending stop DTMF request from L4C.
*
* CALLS  
*	l4ccsm_cc_stop_dtmf_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_stop_dtmf_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_stop_dtmf_req_struct *stop_dtmf_req_ptr;
   kal_uint8 call_id, call_index;
   
   stop_dtmf_req_ptr = (l4ccsm_cc_stop_dtmf_req_struct*)local_para_ptr;   
   call_id = stop_dtmf_req_ptr->call_id;

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK)
   {
      /* invalid call id */
      csmcc_send_l4c_stop_dtmf_fail(stop_dtmf_req_ptr->src_id,
                                    call_id,
                                    stop_dtmf_req_ptr->tone,
                                    CSMCC_ILLEGAL_CALL_ID);    
       return CSMCC_NO_ERROR;
   }
   
   if(CSMCC_PTR->attach_status != CSMCC_SPEECH_ON
      || CALL_DATA(call_id, wait_stop_dtmf) == KAL_FALSE
      ||GET_CALL_STATE(call_id) == CSMCC_CALL_HOLD_REQ
      ||GET_CALL_STATE(call_id) == CSMCC_CALL_RETRIEVE_REQ
      ||GET_MPTY_STATE(call_id) == CSMCC_MPTY_REQ
      ||GET_MPTY_STATE(call_id) == CSMCC_SPLIT_REQ)//MAUI_02295713
   {
      csmcc_send_l4c_stop_dtmf_fail(stop_dtmf_req_ptr->src_id,
                                    call_id,
                                    stop_dtmf_req_ptr->tone,
                                    CSMCC_CMD_NOT_ALLOW);
       return CSMCC_NO_ERROR;
   }
   
    for (call_index=1; call_index < CSMCC_MAX_CALL_NUM; call_index++)
   {
      /* there is auto dtmf. */
      if (CALL_DATA(call_index, dtmf.digit) != NULL)
      {
          csmcc_send_l4c_stop_dtmf_fail(stop_dtmf_req_ptr->src_id,
                                    call_id,
                                    stop_dtmf_req_ptr->tone,
                                    CSMCC_CMD_NOT_ALLOW);
          
          return CSMCC_NO_ERROR;
      }
   }
   
   /* for dtmf request request, it is handled as a special case 
      to save the dtmf mode (manual or +vts) instead of request.
      It is assumed that start and stop dtmf request must be 
      coupled. */
   
   csmcc_send_cc_stop_dtmf_req(call_id, stop_dtmf_req_ptr->tone);
   CSMCC_PTR->dtmf_src_id = stop_dtmf_req_ptr->src_id;
   /* turn off wait stop dtmf flag */
   CALL_DATA(call_id, wait_stop_dtmf) = KAL_FALSE;
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_stop_dtmf_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_auto_dtmf_start_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process auto DTMF request in response to 'w'.
*
* CALLS  
*	l4ccsm_cc_auto_dtmf_start_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_auto_dtmf_start_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_auto_dtmf_start_req_struct *auto_dtmf_req_ptr;
   kal_uint8 call_id,call_index, digit_count;
   csmcc_ret_t ret_val;
   
   auto_dtmf_req_ptr = (l4ccsm_cc_auto_dtmf_start_req_struct*)local_para_ptr;   
   call_id = auto_dtmf_req_ptr->call_id;
   digit_count = auto_dtmf_req_ptr->digit_count; 
   
   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK   
      || GET_CALL_STATE(call_id) != CSMCC_CALL_ACTIVE
      || CSMCC_PTR->attach_status != CSMCC_SPEECH_ON
      ||  digit_count == 0  )
   {
      /* invalid call id or no dtmf. */
      csmcc_send_l4c_auto_dtmf_complete_ind(call_id);    
      return CSMCC_NO_ERROR;
   }

   for (call_index=1; call_index < CSMCC_MAX_CALL_NUM; call_index++)
   {
      if (CALL_DATA(call_index, dtmf.digit) != NULL)
      {
         /* has other auto dtmf in queue. */
          csmcc_send_l4c_auto_dtmf_complete_ind(call_id);   
         return CSMCC_NO_ERROR;
      }
   }

   if (digit_count >= MAX_CC_ADDR_BCD_LEN)
   {
      digit_count = MAX_CC_ADDR_BCD_LEN-1;
   }
      
   /* convert bcd into integer and store auto DTMF */
   csmcc_convert_bcd_dtmf_to_digit( call_id, 
                                    digit_count, 
                                    auto_dtmf_req_ptr->dtmf_digit);   
   
   ret_val = csmcc_send_auto_dtmf(call_id);
   
   if(ret_val == CSMCC_NO_ERROR)
   {
      /* auto dtmf tones needs to be sent */            	
      CALL_DATA(call_id, dtmf_mode) = CSMCC_AUTO_DTMF;
   }
   else if(ret_val == CSMCC_ERROR)
   {
      csmcc_send_l4c_auto_dtmf_complete_ind(call_id);
      csmcc_stop_auto_dtmf(call_id);
   }         
               
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_auto_dtmf_start_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_deflection_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call deflection request from L4C.
*
* CALLS  
*	l4ccsm_cc_call_deflection_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_deflection_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   l4ccsm_cc_call_deflection_req_struct *call_deflection_req_ptr;
   
   call_deflection_req_ptr = (l4ccsm_cc_call_deflection_req_struct*) local_para_ptr;   

   if(csmcc_find_call(CSMCC_MT_CALL,
                      CSMCC_CALL_INIT,
                      &call_id) != CSMCC_NO_ERROR)
   {
      /* no call is allowed to be deflected */
      csmcc_send_l4c_call_deflection_fail(call_deflection_req_ptr->src_id,
                                          CSMCC_INVALID_CALL_ID, 
                                          CSMCC_CMD_NOT_ALLOW);
      
      return CSMCC_NO_ERROR;
   }

   if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
   {      
      /* emergency call is not allowed to be deflected */
      csmcc_send_l4c_call_deflection_fail(call_deflection_req_ptr->src_id,
                                          call_id, 
                                          CSMCC_CMD_NOT_ALLOW);
      
      return CSMCC_NO_ERROR;
   }

   /* fill call id of deflected call */
   call_deflection_req_ptr->call_id = call_id;

   /* it's allow to deflect call, save request */
   csmcc_save_cur_req(CSMCC_CALL_DEFLECTION_REQ,
                      call_deflection_req_ptr->src_id,
                      call_id);
                      
   csmcc_send_cc_call_deflection_req(call_deflection_req_ptr);
   
   SET_CALL_STATE(call_id ,CSMCC_MS_CALL_DISC)

   /* save source ID because this is the first request of 
      this call from L4C */

   CALL_DATA(call_id, src_id) = call_deflection_req_ptr->src_id;
   
   return CSMCC_NO_ERROR;

} /* end of l4ccsm_cc_call_deflection_req_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	mncc_setup_ind_after_call_conf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process MT call setup indication from CC.
*
* CALLS  
*	mncc_setup_ind_after_call_conf_hdlr(kal_uint8 call_id, mncc_setup_ind_struct *setup_ind_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_setup_ind_after_call_conf_hdlr(kal_uint8 call_id, mncc_setup_ind_struct *setup_ind_ptr)
{
   CSMCC_PTR_G_TO_L
#ifdef __EMLPP_SUPPORT__
   kal_uint8 call_index;
   csmcc_ret_t ret_val;
   kal_uint8 active_call_id;
   kal_uint8 hold_call_id;
   kal_bool auto_answer = KAL_FALSE;
   kal_bool call_preempt = KAL_FALSE;
#endif

#ifdef __AUTO_CALL_REJECTION__
   kal_bool keep_local_para = KAL_FALSE;
#endif

#if (defined(__AUTO_ANS_FOR_EMLPP__) && defined(__EMLPP_SUPPORT__))
   /* check if incoming call priority meets the auto answer requirement */
   auto_answer = (kal_bool)(AUTO_ANSWER(call_id));
#endif

#ifdef __EMLPP_SUPPORT__   
   if(auto_answer == KAL_TRUE)
   {      
      ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                CSMCC_CALL_ACTIVE, 
                                &active_call_id);

      if(ret_val == CSMCC_NO_ERROR)
      {
         /* one active exists, check if called party preemption applies */
         if(CALL_DATA(call_id,call_priority) 
            > CALL_DATA(active_call_id,call_priority) )
         {
            call_preempt = KAL_TRUE;            
         }
         else
         {
            auto_answer = KAL_FALSE;
         }
      }
   }
         
   if(call_preempt == KAL_TRUE)
   {
      /* send MT call setup indication to L4C */
      csmcc_send_l4c_call_setup_ind(call_id, setup_ind_ptr);

      /*
       * According to 3GPP TS 24.067 clause 4.1.3
       * If the ongoing call is not a TS11 call, the mobile 
       * station should not send a hold message to the network 
       * but release the call and accept the waiting call.
       */

      if(csmcc_is_ts11_call(active_call_id) == KAL_FALSE)
      {
         /* 
          * the active call is not TS11, so it can't be put on hold,
          * so disconnect all active calls 
          */
         for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
         {
            if(GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE)
            {
               csmcc_disc_call(call_index, CM_PRE_EMPTION);
            }
         }
      }   
      else
      {
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE, 
                                   CSMCC_CALL_HOLD, 
                      &hold_call_id);
         
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* held call exists, then disconnect all active calls */
            for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
            {
               if(GET_CALL_STATE(call_index) == CSMCC_CALL_ACTIVE)
               {
                  csmcc_disc_call(call_index, CM_PRE_EMPTION);
               }
            }
         }
         else
         {
            csmcc_hold_active_call(active_call_id);
         }         
      }                  

      /* it's necessary to preempt an existing call, save request */
      csmcc_save_cur_req(CSMCC_CALL_PREEMPT_REQ,
                         CSMCC_INVALID_SRC_ID,
                         call_id);
      
      SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
   }
   else if(auto_answer == KAL_TRUE)
   {         
      /* Ripple: this part of code is just reserved. There is problem, 
          e.g. mmi does not know CSMCC has accepted the call. */
      /* send MT call setup indication to L4C */
      csmcc_send_l4c_call_setup_ind(call_id, setup_ind_ptr);
      
      /* auto answer the MT call */
      csmcc_accept_mt_call(call_id);
      
      /* auto answer call, save request */
      csmcc_save_cur_req(CSMCC_AUTO_ANSWER_REQ,
                         CSMCC_INVALID_SRC_ID,
                         call_id);
   }
   else
#endif /*__EMLPP_SUPPORT__*/
   {
      /* not necessary to auto answer, so send alert request to CC */
      if(setup_ind_ptr->signalP == KAL_FALSE
         && CSMCC_PTR->channel_info == CSMCC_NO_TCH)
      {
         /* early assignment, so send alerting and call setup indication 
            after TCH assignment. Thus, keep setup indication from CC here */                     
            
         //ASSERT(CALL_DATA(call_id, local_para_ptr) == NULL);
         if (CALL_DATA(call_id, local_para_ptr) == NULL)
         {
            hold_local_para((local_para_struct*)setup_ind_ptr);
            CALL_DATA(call_id, local_para_ptr) = (local_para_struct*)setup_ind_ptr;
         }
         #ifdef __AUTO_CALL_REJECTION__
            keep_local_para = KAL_TRUE;
         #endif

         CSMCC_PTR->cur_non_l4c_req = CSMCC_ALERTING_REQ;
         CSMCC_PTR->cur_non_l4c_req_call_id = call_id;
#ifdef __CSMCC_CALLCONFIRM_TIMER__
         /*Start Call confirm timer to wait for channel, if after CSMCC_CALL_CONFIRM_TIME, call will be disconnected*/
         csmcc_start_call_confirm_timer(call_id,CSMCC_CALL_CONFIRM_TIME);
#endif 
      }
      else
      {
         /*mtk01602: Add for CNAP 8470 IT. If MT call is sent with SignalP, then should set call state 
		   before send L4C indication.*/
         SET_CALL_STATE(call_id, CSMCC_CALL_INIT);
         /* send MT call setup indication to L4C */
         csmcc_send_l4c_call_setup_ind(call_id, setup_ind_ptr);
         
         /* later assignment or call waiting, send alerting right now */
         csmcc_send_cc_alert_req(call_id);
      }

      SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
   }

#ifdef __AUTO_CALL_REJECTION__
   if ((keep_local_para != KAL_TRUE) &&
      (CALL_DATA(call_id, local_para_ptr) != NULL))
   {
      free_local_para(CALL_DATA(call_id, local_para_ptr));
      CALL_DATA(call_id, local_para_ptr) = NULL;
   }
#endif

   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_SETUP_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);
   return CSMCC_NO_ERROR;

} /* end of mncc_setup_ind_after_call_conf_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	mncc_setup_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process MT call setup indication from CC.
*
* CALLS  
*	mncc_setup_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_setup_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   kal_uint8 call_index;
   csmcc_ret_t ret_val;
   mncc_setup_ind_struct *setup_ind_ptr;
#ifdef __EMLPP_SUPPORT__
   kal_uint8 active_call_id;
   kal_uint8 hold_call_id;
   kal_bool auto_answer = KAL_FALSE;
   kal_bool call_preempt = KAL_FALSE;
#endif

   setup_ind_ptr = (mncc_setup_ind_struct*)local_para_ptr;

   if (CSMCC_PTR->mscap.disable_call == KAL_TRUE)
   {
       csmcc_send_cc_rej_req(setup_ind_ptr->ti, CM_BEARER_SER_UNIMPL); 
       return CSMCC_NO_ERROR;
   }


   ret_val = csmcc_alloc_call_context(&call_id);
   CSMCC_PTR->is_ibt = KAL_FALSE;
   /*[Cosine CNAP] reset cnap info.*/ //reset at l4ccsm_cc_get_cnap_info
   //CSMCC_PTR->cnap_info.callingName_present = KAL_FALSE;
   
   if(ret_val != CSMCC_NO_ERROR)
   {
      /* call id allocation failure */
      csmcc_send_cc_rej_req(setup_ind_ptr->ti, CM_RESOURCE_UNAVAIL_UNSPECIFIED);      
      return CSMCC_NO_ERROR;
   }   
      
   /* reset bearer capability and bearer capability negotiation */      
   csmcc_reset_bc();
   if(csmcc_is_mt_call_compat(call_id, setup_ind_ptr) == KAL_FALSE)
   {
      /* bearer capability negotiation fail */
      csmcc_send_cc_rej_req(setup_ind_ptr->ti, CM_INCOMPATIBLE_DEST);
      csmcc_dealloc_call_context(call_id);     
      return CSMCC_NO_ERROR;
   }
   
   /* mtk01602: For video call, should check LLC in addition. 
      When "H.223&H.245" is set to only LLC_IE, treat the UDI call as VT call. */ 
   if(setup_ind_ptr->llc1P == KAL_TRUE && (setup_ind_ptr->llc1.value[2] & 0x1f) == 0x06) /*user information layer 1 protocol = H.223 and H.245*/
   {
#ifdef __VIDEO_CALL_SUPPORT__
       CALL_DATA(call_id, bc[0]) = CSMCC_VIDEO_CALL;
#else
       /* bearer capability negotiation fail */
      csmcc_send_cc_rej_req(setup_ind_ptr->ti, CM_INCOMPATIBLE_DEST);
      csmcc_dealloc_call_context(call_id);     
      return CSMCC_NO_ERROR;
#endif
   }


#ifdef __VIDEO_CALL_SUPPORT__   
   if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
   {
//MAUI_01966467
   #ifdef __REL6__
       /*[MAUI_01712442]CC R6 change request*/
       CSMCC_PTR->umts_only_service = KAL_TRUE;
   #endif  /*(__REL6__)*/
       csmcc_fill_video_bc_param(&(CSMCC_PTR->data_bc_param));
       csmcc_fill_video_bc_ie(&(CSMCC_PTR->nego_bc.bc1));   
   }
#endif /*__VIDEO_CALL_SUPPORT__*/
   
   /* fill call context */
   csmcc_fill_mt_call_context(call_id, setup_ind_ptr);

#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   /* for SAT class 3, inform SAT about MT call */
#ifdef __SUBADDR_SUPPORT__
   csmcc_send_sim_mt_call_req(CALL_DATA(call_id, ti),
                       CALL_DATA(call_id, number_present),
                       CALL_DATA(call_id, sub_addr_present),
                       &(CALL_DATA(call_id, number)),
                       &(CALL_DATA(call_id, sub_addr))); 
#else
   csmcc_send_sim_mt_call_req(CALL_DATA(call_id, ti),
                       CALL_DATA(call_id, number_present),
                       &(CALL_DATA(call_id, number)));
#endif
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif
   
   /* check if the incoming call is a waiting call */
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_STATUS(call_index) != CSMCC_CALL_BLK)
         continue;
         
      if (GET_CALL_STATE(call_index) != CSMCC_CALL_IDLE)
      {
#ifdef __CSMCC_REJWAIT_CALL__
          kal_uint8 call_type_current = GET_CALL_TYPE(call_index); 
          kal_uint8 call_type_incoming = GET_CALL_TYPE(call_id);
 
          if ((call_type_current == CSMCC_VOICE_CALL || call_type_current == CSMCC_AUX_VOICE_CALL) &&
              (call_type_incoming == CSMCC_VOICE_CALL || call_type_incoming == CSMCC_AUX_VOICE_CALL)
            )
          {
              //only allow voice call ,voice call waiting , other waiting call type is rejected
          }
          else
          {   
              csmcc_send_cc_rej_req(setup_ind_ptr->ti, CM_USER_BUSY);
              csmcc_dealloc_call_context(call_id);     
              return CSMCC_NO_ERROR;
          }
#endif
          /* if there is any call != IDLE, then the new one is a waiting call. */
          CALL_DATA(call_id, cw_flag) = KAL_TRUE;
          break;
      }
   }


#ifdef __AUTO_CALL_REJECTION__

   ASSERT(CALL_DATA(call_id, local_para_ptr) == NULL);
   hold_local_para((local_para_struct*)setup_ind_ptr);
   CALL_DATA(call_id, local_para_ptr) = (local_para_struct*)setup_ind_ptr;

   //SET_CALL_STATE(call_id, CSMCC_CALL_PRESENT)
   csmcc_send_l4c_call_present_ind(call_id, setup_ind_ptr);

   return CSMCC_NO_ERROR;

#else
   /* send call confirm to CC with negotiated bearer capability */
   csmcc_send_cc_call_conf_req(call_id);
   mncc_setup_ind_after_call_conf_hdlr(call_id, setup_ind_ptr);
#endif

   return CSMCC_NO_ERROR;
}

      
/*************************************************************************
* FUNCTION                                                            
*	mncc_call_proc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call proceeding indication from CC.
*
* CALLS  
*	mncc_call_proc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_call_proc_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_call_proc_ind_struct *call_proc_ind_ptr;
      
   call_proc_ind_ptr = (mncc_call_proc_ind_struct*)local_para_ptr;
   call_id = call_proc_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_INIT)
   {
      return CSMCC_NO_ERROR;
   }
   
   /* save ti to call context*/
   CALL_DATA(call_id,ti) = call_proc_ind_ptr->ti;   
   
   if(csmcc_is_mo_call_compat(call_proc_ind_ptr) == KAL_FALSE)
   {
      /* bearer capability negotiated by network is not compatible */      
      csmcc_disc_call(call_id, CM_INCOMPATIBLE_DEST);
      
      /* 
       * Note: CC has entered call proceeding state, but current request
       *       of CSM shall still be CSMCC_CALL_SETUP_REQ, because upon
       *       receipt of mncc_rel_ind, CSM can send call setup fail 
       *       according to current request.
       *
       */
      
      return CSMCC_NO_ERROR;
   }
         
   /* 
    * bearer capability negotiated by network is compatible.
    * send call setup success to L4C
    */

   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_CALL_SETUP_REQ:
 	 //mtk01602,070611:For SAT data call, should not send cnf at this point 
	 if(GET_CALL_TYPE(call_id) != CSMCC_SAT_DATA_CALL)
            csmcc_send_l4c_setup_succ(call_id); 
         break;
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         csmcc_send_l4c_emergency_setup_succ(call_id);  
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         /* nothing to do */
         break;
#endif /* __SAT__ */
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
         break;
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);
         break;
      default: 
            break;
   }
   
   /* update call priority if present in CALL PROCEEDING */
   /* [MAUI_02396838]  Dont update call priority in call proceeding if no EMLPP SUPPORT */
   #ifdef __EMLPP_SUPPORT__
   if(call_proc_ind_ptr->priorityP == KAL_TRUE)
   {
      CALL_DATA(call_id,call_priority) = (csmcc_call_priority_enum)(call_proc_ind_ptr->priority.call_priority);
   }
   #endif /* __EMLPP_SUPPORT__ */
   
   if(call_proc_ind_ptr->progress_indP == KAL_TRUE)
   {
      csmcc_prog_desc_hdlr(call_id, 
                           (csmcc_prog_desc_enum)(call_proc_ind_ptr->progress_ind.prog_desc));
   }

   if(call_proc_ind_ptr->facilityP == KAL_TRUE)
   {
      /* NotifySS invoke (CUG-index) */
      csmcc_peer_fac_ie_hdlr(call_id, &(call_proc_ind_ptr->facility));
   }
      
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_CALL_PROCESS_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);

   return CSMCC_NO_ERROR;
   
} /* end of mncc_call_proc_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_progress_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call progress indication from CC.
*
* CALLS  
*	mncc_progress_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_progress_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_progress_ind_struct *progress_ind_ptr;   
   
   progress_ind_ptr = (mncc_progress_ind_struct*)local_para_ptr;   
   call_id = progress_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   if((GET_CALL_STATE(progress_ind_ptr->call_id) == CSMCC_CALL_IDLE)
      ||(GET_CALL_STATE(progress_ind_ptr->call_id) == CSMCC_CALL_HOLD)
      ||(CALL_DATA(progress_ind_ptr->call_id,call_orig) == CSMCC_MT_CALL))
   {
      /* Ripple: when hold, not to turn on speech. */
      /* for mt call, before accept, the speech shall not be turned on, or the ring will be stopped.
         it will be turned on when accepting call, so the message is ignored here. 
         In Europe IOT, #4571, the PROGRESS is received before accepted, 
         and we turn on speech, then ring is stopped, and the caller and callee can 
         hear each other before connected. so we can't turn on speech for mt call before accepted. */
          
      return CSMCC_NO_ERROR;
   }
           
   csmcc_prog_desc_hdlr(progress_ind_ptr->call_id, 
                        (csmcc_prog_desc_enum)(progress_ind_ptr->progress_ind.prog_desc));
   
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_PROGRESS_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);
   
   return CSMCC_NO_ERROR;
   
} /* end of mncc_progress_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_alert_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call alert indication from CC.
*
* CALLS  
*	mncc_alert_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_alert_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_alert_ind_struct *alert_ind_ptr;
   
   alert_ind_ptr = (mncc_alert_ind_struct*)local_para_ptr;
   call_id = alert_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_INIT)
   {
      return CSMCC_NO_ERROR;
   }
   
   /* save ti to call context*/
   CALL_DATA(call_id,ti) = alert_ind_ptr->ti;   
   
   /* 
    * if NW doesn't send call proceeding message before sending 
    * alert indication, send L4C call setup request successfully
    */

   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_CALL_SETUP_REQ:
	 //mtk01602,070611:For SAT data call, should not send cnf at this point 
	 if(GET_CALL_TYPE(call_id) != CSMCC_SAT_DATA_CALL)
            csmcc_send_l4c_setup_succ(call_id);   
         break;
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         csmcc_send_l4c_emergency_setup_succ(call_id);
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         /* nothing to do */
         break;
#endif /* __SAT__ */
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
         break;
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);
         break;
      default: 
            break;
   }
      
   if(alert_ind_ptr->progress_indP == KAL_TRUE)
   {
      csmcc_prog_desc_hdlr(call_id, 
                           (csmcc_prog_desc_enum)(alert_ind_ptr->progress_ind.prog_desc));      
   }   

   if(alert_ind_ptr->facilityP == KAL_TRUE)
   {
      /* NotifySS invoke(CW), uus1, uus2 rr, re */
      csmcc_peer_fac_ie_hdlr(call_id, &alert_ind_ptr->facility);
   }

   csmcc_send_l4c_alert_ind(alert_ind_ptr);
   
   SET_CALL_STATE(call_id, CSMCC_CALL_ALERT)
   
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_ALERT_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
                         CSMCC_NO_CAUSE,
                         0);
   
   return CSMCC_NO_ERROR;
   
} /* end of mncc_alert_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_setup_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call MO call setup completing
*   indication from CC.
*
* CALLS  
*	mncc_setup_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_setup_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_setup_cnf_struct *setup_cnf_ptr;

   setup_cnf_ptr = (mncc_setup_cnf_struct*)local_para_ptr;
   call_id = setup_cnf_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   if((GET_CALL_STATE(call_id) & (CSMCC_CALL_INIT|CSMCC_CALL_ALERT)) == 0)
   {
      return CSMCC_NO_ERROR;
   }
   
      if((CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_FAX) ||
   	   (CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_DATA))
      {
        /*mtk00924 050312 according to 27.007 section 6.4 */
      CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;
      }   
      
   /* save ti to call context*/
   CALL_DATA(call_id,ti) = setup_cnf_ptr->ti;

   /* 
    * NW possibily doesn't send call proceeding or alert indication
    * before sending connect. so send L4C call setup request successfully.
    */
   
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_CALL_SETUP_REQ:
         csmcc_send_l4c_setup_succ(call_id);
         break;
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:         
         csmcc_send_l4c_emergency_setup_succ(call_id);         
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         csmcc_send_l4c_sat_setup_succ(call_id, setup_cnf_ptr);
         break;
#endif /* __SAT__ */
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
         break;
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         /* accept CCBS call successfully */
         csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);
         break;
      default: 
            break;
   }

#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   /* for SAT class 3, inform SAT about receiving CONNECT */
   csmcc_send_sim_call_conn_req(CALL_DATA(call_id,ti), KAL_FALSE);
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif   

   /* process facility ie */
   if(setup_cnf_ptr->facilityP == KAL_TRUE)
   {
      /* uus1, uus3 rr, re */
      csmcc_peer_fac_ie_hdlr(call_id, &(setup_cnf_ptr->facility));
   }

   /* update call info */   
   csmcc_update_mo_call_context(setup_cnf_ptr);
      
   if(GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL
      || GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL
      || CSMCC_PTR->channel_info == CSMCC_SPEECH_TCH)      
   {
      /* update call type according to channel type */
      if(GET_CALL_TYPE(call_id) != CSMCC_VOICE_CALL
         && GET_CALL_TYPE(call_id) != CSMCC_AUX_VOICE_CALL)
      {
         SET_CALL_TYPE(call_id, CSMCC_VOICE_CALL)
      }
      
      SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)      
      
      /* send connect indication to L4C */
      csmcc_send_l4c_connect_ind(setup_cnf_ptr);
      
      /* attach user connection for speech call */      
      csmcc_attach_speech();
      
      /* see if need to send auto dtmf */    
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON
         && CALL_DATA(call_id, dtmf.count) > 0)
      {
         csmcc_ret_t ret_val = csmcc_send_auto_dtmf(call_id);
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* auto dtmf tones needs to be sent */            	
            CALL_DATA(call_id, dtmf_mode) = CSMCC_AUTO_DTMF;
         }
         else if(ret_val == CSMCC_ERROR)
         {            
            csmcc_stop_auto_dtmf(call_id);
         }         
      }
   }   
   
#if defined(__CSD_T__) || defined(__CSD_NT__)
   if((GET_CALL_TYPE(call_id) == CSMCC_DATA_CALL
#ifdef __TCPIP_OVER_CSD__
      || GET_CALL_TYPE(call_id) == CSMCC_CSD_CALL
#endif   
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
      || GET_CALL_TYPE(call_id) == CSMCC_SAT_DATA_CALL
#endif   
     ) && CSMCC_PTR->channel_info == CSMCC_DATA_TCH)
   {
      if(csmcc_activate_data((kal_uint8)GET_CALL_TYPE(call_id)) != CSMCC_NO_ERROR)
      {
         csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
      }
      else
      {
         SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)               
         
         /* send connect indication to L4C */
         csmcc_send_l4c_connect_ind(setup_cnf_ptr);
	  CSMCC_PTR->activate_data_call_id = call_id;
      }         
   }
#endif
#ifdef __CSD_FAX__
   if(GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
   {
      /* TBD: activate fax call */
      if(csmcc_activate_fax(call_id, MO_FAX_CALL) != CSMCC_NO_ERROR)
      {
         csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
      }
      else
      {
         SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)               
         
         /* send connect indication to L4C */
         csmcc_send_l4c_connect_ind(setup_cnf_ptr);
	  CSMCC_PTR->activate_data_call_id = call_id;		 
      }         
   }
#endif   
#ifdef __VIDEO_CALL_SUPPORT__
	  if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
	  {		
		 if(csmcc_activate_vt(call_id) != CSMCC_NO_ERROR)
		 {
			csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
		 }
		 else
		 {
			SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)				 
			
			/* send connect indication to L4C */
			csmcc_send_l4c_connect_ind(setup_cnf_ptr);
		 	CSMCC_PTR->activate_data_call_id = call_id;		
		 }		   
	  }
#endif/*__VIDEO_CALL_SUPPORT__*/   
   
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_CALL_CONNECTED_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);

   return CSMCC_NO_ERROR;
   	
} /* end of mncc_setup_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_setup_compl_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call MT call setup completing
*   indication from CC.
*
* CALLS  
*	mncc_setup_compl_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_setup_compl_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_setup_compl_ind_struct *setup_compl_ind_ptr;

   setup_compl_ind_ptr = (mncc_setup_compl_ind_struct*)local_para_ptr;
   call_id = setup_compl_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_ACCEPT)
   {
      return CSMCC_NO_ERROR;
   }

      if((CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_FAX) ||
   	   (CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_DATA))
      {
        /*mtk00924 050312 according to 27.007 section 6.4 */
      CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;
      }   
   
#if defined(__CSD_T__) || defined(__CSD_NT__)

    /* if this call is not a voice call, then return call accept request
       success after data activation completely. */
    
   if(GET_CALL_TYPE(call_id) == CSMCC_DATA_CALL
      && CSMCC_PTR->channel_info == CSMCC_DATA_TCH)
   {
      /* activate failure, disconnect */
      if(csmcc_activate_data((kal_uint8)GET_CALL_TYPE(call_id)) != CSMCC_NO_ERROR)
      {
         csmcc_disc_call(call_id, CM_SER_UNAVAILABLE);
         return CSMCC_NO_ERROR;
      }      
      else
      {
         CSMCC_PTR->activate_data_call_id = call_id;
      }
   }
#endif

#ifdef __CSD_FAX__
   if(GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
   {
      /* TBD: activate fax */
      if(csmcc_activate_fax(call_id, MT_FAX_CALL) != CSMCC_NO_ERROR)
      {
         csmcc_disc_call(call_id, CM_SER_UNAVAILABLE);
      return CSMCC_NO_ERROR;
   }
      else
      {
         CSMCC_PTR->activate_data_call_id = call_id;
      }	  
   }
#endif
   
#ifdef __VIDEO_CALL_SUPPORT__
	  if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
	  {
		
		 if(csmcc_activate_vt(call_id) != CSMCC_NO_ERROR)
		 {
			csmcc_disc_call(call_id, CM_SER_UNAVAILABLE);
			return CSMCC_NO_ERROR;
		 }	
      		 else
      		 {
         		CSMCC_PTR->activate_data_call_id = call_id;
      		 }			 
	  }
#endif/*__VIDEO_CALL_SUPPORT__*/   

   /* MAUI_01637829 [CSMCC][Revise] report update_call_state_ind order before call operation CNF */
   SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)
   
   switch(CSMCC_PTR->cur_req)
   {
   #ifdef __EMLPP_SUPPORT__                      
      case CSMCC_AUTO_ANSWER_REQ:
         /* TBD */
         break;
   #endif /* __EMLPP_SUPPORT__*/
   
      case CSMCC_CALL_ACCEPT_REQ:
         csmcc_send_l4c_accept_succ(setup_compl_ind_ptr->call_id);
         break;
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:
         /* accept waiting call */
         csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
         break;
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         /* accept waiting call */
         csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);
         break; 
      default: 
            break;
   }

   //SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)

  /* [Cosine 070319] Once CSMCC send EVDL_CALL_CONNECT to SIM, some SIM cards may
      pop out Select Item screen and MMI reject other menu access. 
      According to SIM spec. TS102.223 v6.7 sec.7.5.2, CSMCC shall send 
      EVDL_CALL_CONNECT when receiving incoming connect message in case of MT call. */
#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   /* for SAT class 3, inform SAT about sending CONNECT */
   csmcc_send_sim_call_conn_req(CALL_DATA(call_id, ti), KAL_TRUE);
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif      

   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_CALL_CONNECTED_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 CSMCC_NO_CAUSE,
   	                 0);

   return CSMCC_NO_ERROR;
   	
} /* end of mncc_setup_compl_ind_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	mncc_rel_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call release confirmation from CC.
*
* CALLS  
*	mncc_rel_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_rel_cnf_hdlr(local_para_struct *local_para_ptr) 
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_rel_cnf_struct *rel_cnf_ptr;
   kal_uint8 call_id;
   kal_uint16 cause = CSMCC_NO_CAUSE;
   kal_uint8 diagnostic; 

   kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmcc_mncc_rel_cnf_handler);
      
   rel_cnf_ptr = (mncc_rel_cnf_struct*)local_para_ptr;
   call_id = rel_cnf_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE; 
   
   if (call_id == CSMCC_INVALID_CALL_ID)
   {
      call_id = csmcc_find_call_id_from_ti(rel_cnf_ptr->ti);

      /* if still can't find call id, discard this msg. */
      if (call_id == CSMCC_INVALID_CALL_ID)
      {
         return CSMCC_NO_ERROR;
      }
   }

//MAUI_01996988
#if 0
#ifdef __AUTO_CALL_REJECTION__
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

#ifdef __CCBS_SUPPORT__
   if(GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
      /* 
       * check if the released call is a ccbs activating reqest call, if 
       * yes, just deallocate call context and do not send l4c release
       * indicaiton.
       */      
      kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CCBS_STATUS, call_id, CALL_DATA(call_id,ccbs_status));      
      if(CALL_DATA(call_id, ccbs_status) == CSMCC_CCBS_ACTIVATED)
      {
         csmcc_dealloc_call_context(call_id);
         return CSMCC_NO_ERROR;
      }
      else if(CALL_DATA(call_id, ccbs_status) != CSMCC_CCBS_INVOKED)
      {
          /* [Cosine 070307] If state=IDLE, ccbs_status!=ACTIVATED or INVOKED, this is not a legally disconnect*/
      	  return CSMCC_NO_ERROR;
      }
   }
#endif /*__CCBS_SUPPORT__*/
   
#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   if ((GET_CALL_STATE(call_id) & CSMCC_ALL_DISC_STATES) == 0) 
   {
      kal_bool is_far_end = KAL_TRUE;
      kal_uint8 sat_cause[30];
      kal_uint8 sat_cause_len = 0xff;  
      mncc_cause_struct temp_cause;
      
      if (rel_cnf_ptr->cause.cause_value == CM_MM_RR_CONN_RELEASE
        || rel_cnf_ptr->cause.cause_value == CM_MM_RANDOM_ACCES_FAILURE)
      {
         /* Radio link fail, shall be considered as near end disconneciton. Sec. 11.3, Spec. 11.14. */
         is_far_end = KAL_FALSE;
         //sat_cause = CM_RADIO_LINK_FAIL;
	  sat_cause_len = 0; /*radio link fail*/	 
      }
      else if(rel_cnf_ptr->cause.cause_value > CM_MM_CAUSE_START || cause > 0xff)
      {
         /* TBD: correctly transform MM cause to CM cause */
         //sat_cause = CM_TEMPORARY_FAILURE;
         kal_mem_cpy(&temp_cause, &rel_cnf_ptr->cause, sizeof(mncc_cause_struct));
	  temp_cause.cause_value = CM_TEMPORARY_FAILURE;
	  sat_cause_len = csmcc_form_sat_cause((kal_uint8 *)&temp_cause, sat_cause);		 
      }
      else
      {
         //sat_cause = (kal_uint8)rel_cnf_ptr->cause.cause_value;
         if(rel_cnf_ptr->causeP == KAL_TRUE)
	  	sat_cause_len = csmcc_form_sat_cause((kal_uint8 *)&rel_cnf_ptr->cause, sat_cause);		       
      }

      /* the first disconnected occur, need to inform SIM. */
      csmcc_send_sim_call_disc_req(rel_cnf_ptr->ti,
                            is_far_end, 
                            //rel_cnf_ptr->causeP,  
			    sat_cause_len,
                            sat_cause);
   }
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif
   
   if(rel_cnf_ptr->facilityP == KAL_TRUE)
   {
      /* AccessRegisterCCEntry, ExplicitCT rr re */
      csmcc_peer_fac_ie_hdlr(call_id, &(rel_cnf_ptr->facility));
   }

   if(rel_cnf_ptr->causeP == KAL_TRUE)
   {
      cause = rel_cnf_ptr->cause.cause_value;
   }
   else
   {
      cause = CSMCC_NO_CAUSE;
   }

   if (rel_cnf_ptr->cause.diagnostics_length > 0)
   {
      diagnostic = rel_cnf_ptr->cause.diagnostics[0];
   }
   else
   {
      diagnostic = 0; 
   }

   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_DISCONNECT_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 cause,
   	                 diagnostic);
          
   return csmcc_call_clear_hdlr(call_id, cause,diagnostic,rel_cnf_ptr->disc_cause);

} /* end of mncc_rel_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_rel_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call release indication from CC.
*
* CALLS  
*	mncc_rel_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_rel_ind_hdlr(local_para_struct *local_para_ptr) 
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_rel_ind_struct *rel_ind_ptr;
   kal_uint8 call_id;
   kal_uint16 cause;
   kal_uint8 diagnostic;
   
   rel_ind_ptr = (mncc_rel_ind_struct*)local_para_ptr;
   call_id = rel_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE; 
   
    if (call_id == CSMCC_INVALID_CALL_ID)
   {
      call_id = csmcc_find_call_id_from_ti(rel_ind_ptr->ti);

      /* if still can't find call id, discard this msg. */
      if (call_id == CSMCC_INVALID_CALL_ID)
      {
         return CSMCC_NO_ERROR;
      }
   }

//MAUI_01996988
#if 0
#ifdef __AUTO_CALL_REJECTION__
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

#ifdef __CCBS_SUPPORT__
   if(GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
      /* [Cosine 070307]
       * check if the released call is a ccbs activating reqest call, if 
       * yes, just deallocate call context and do not send l4c release
       * indicaiton.
       */   
      kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CCBS_STATUS, call_id, CALL_DATA(call_id,ccbs_status));
      if(CALL_DATA(call_id, ccbs_status) == CSMCC_CCBS_ACTIVATED)
      {
         csmcc_dealloc_call_context(call_id);
         return CSMCC_NO_ERROR;
      }
      else if(CALL_DATA(call_id, ccbs_status) != CSMCC_CCBS_INVOKED)
      {
          /* [Cosine 070307] If state=IDLE, ccbs_status!=ACTIVATED or INVOKED, this is not a legally disconnect*/
         return CSMCC_NO_ERROR;
      }
   }
#endif /*__CCBS_SUPPORT__*/
   
#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   if ((GET_CALL_STATE(call_id) & CSMCC_ALL_DISC_STATES) == 0) 
   {
      kal_uint8 sat_cause[30];
      kal_uint8 sat_cause_len = 0xff;

      if(rel_ind_ptr->causeP == KAL_TRUE)
      		sat_cause_len = csmcc_form_sat_cause((kal_uint8 *)&rel_ind_ptr->cause, sat_cause);				

      /* the first disconnect occur, need to inform SIM. */
      csmcc_send_sim_call_disc_req(rel_ind_ptr->ti,
                            KAL_TRUE, /* is_far_end */
                            //rel_ind_ptr->causeP,  
                            //(kal_uint8)rel_ind_ptr->cause.cause_value);
                            sat_cause_len,  
                            sat_cause);
   }
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif
      
   if(rel_ind_ptr->facilityP == KAL_TRUE)
   {
      /* CD, ExplicitCT rr re */
      csmcc_peer_fac_ie_hdlr(call_id, &(rel_ind_ptr->facility));
   }
   
   if(rel_ind_ptr->causeP == KAL_TRUE)
   {
      cause = rel_ind_ptr->cause.cause_value;
   }
   else
   {
      cause = CSMCC_NO_CAUSE;
   }
   
   if (rel_ind_ptr->cause.diagnostics_length > 0)
   {
       diagnostic = rel_ind_ptr->cause.diagnostics[0];
   }
   else
   {
       diagnostic = 0; 
   }
   
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_DISCONNECT_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 KAL_FALSE,
   	                 cause,
   	                 diagnostic);
   
   return csmcc_call_clear_hdlr(call_id, cause,diagnostic,CSMCC_NO_CAUSE);

} /* end of mncc_rel_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_rej_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call setup reject indication from CC.
*
* CALLS  
*	mncc_rej_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_rej_ind_hdlr(local_para_struct *local_para_ptr) 
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_rej_ind_struct *rej_ind_ptr;
   kal_uint8 call_id;
   kal_uint8 csmcc_sat_cause = CSMCC_NO_CAUSE;
   kal_uint16 cause;
   kal_uint8 diagnostic; 
   
   rej_ind_ptr = (mncc_rej_ind_struct*)local_para_ptr;
   call_id = rej_ind_ptr->call_id;
   
   if (call_id == CSMCC_INVALID_CALL_ID)
   {
      call_id = csmcc_find_call_id_from_ti(rej_ind_ptr->ti);

      /* if still can't find call id, discard this msg. */
      if (call_id == CSMCC_INVALID_CALL_ID)
      {
         return CSMCC_NO_ERROR;
      }
   }
   
      if((CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_FAX) ||
   	   (CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_DATA))
      {
        /*mtk00924 050312 according to 27.007 section 6.4 */
      CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;

      }   
      
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_INIT
      && GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC)
   {
      return CSMCC_NO_ERROR;
   }

#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   if ((GET_CALL_STATE(call_id) & CSMCC_ALL_DISC_STATES) == 0)
   {
       //mtk01602, 071022:[MAUI_041125]
       if(rej_ind_ptr->is_cc_setup_sent == KAL_TRUE)  
       {
	   kal_uint8 sat_cause[30];
	   kal_uint8 sat_cause_len = 0;/*radio link fail*/

           /* the first disconnect occur, need to inform SIM. */
           /* receive this msg only when mo then radio link fail. */
           csmcc_send_sim_call_disc_req(rej_ind_ptr->ti,
                            KAL_FALSE, /* radio link fair is near end. */
                            //KAL_TRUE,  /* causeP */
                            //CM_RADIO_LINK_FAIL);
                            sat_cause_len,
                            sat_cause);
       }
   }
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif

   if(rej_ind_ptr->facilityP == KAL_TRUE)
   {
      /* NotifySS */
      csmcc_peer_fac_ie_hdlr(call_id, &(rej_ind_ptr->facility));
   }
   
   if(rej_ind_ptr->causeP == KAL_TRUE)
   {
      cause = rej_ind_ptr->cause.cause_value;
   }
   else
   {
      cause = CSMCC_NO_CAUSE;
   }
   
   if (rej_ind_ptr->cause.diagnostics_length >0)
   {
        diagnostic = rej_ind_ptr->cause.diagnostics[0];
   }
   else
   {
        diagnostic = 0;
   }
   
   if(GET_CALL_STATE(call_id) == CSMCC_MS_CALL_DISC)
   {
      return csmcc_call_clear_hdlr(call_id, cause,diagnostic,CSMCC_NO_CAUSE);
   }   
   
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_CALL_SETUP_REQ:
      	 /*mtk01602, 070606: TS11.14 12.12.2, 
           For "network currently unable to process command", additional info. 
           shall be the first byte of the cause returned by the network.*/
     #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
	 csmcc_sat_cause = (kal_uint8)cause;
         if(csmcc_sat_cause != CSMCC_NO_CAUSE)
         {
         	csmcc_sat_cause |= (1<<7);
         }
     #endif
         csmcc_send_l4c_setup_fail(CSMCC_PTR->req_src_id, 
         	                   (kal_uint8)GET_CALL_TYPE(call_id), 
         	                   cause,
         	                   SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
         	                   csmcc_sat_cause,
         	                   diagnostic);
         break;
         
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
      
         csmcc_send_l4c_emergency_setup_fail(CSMCC_PTR->req_src_id, cause);
         break;
         
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:

         /* accept ccbs call failure */
         csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                  CSMCC_REL_ACTIVE_AND_ACCEPT_REQ,
                                  cause);         
         break;
         
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
         
         /* accept ccbs call failure */
         csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                  CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                  cause);         
         break;
#ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            	{
            		csmcc_sat_cause |= (1<<7);
            	}
        /* call setup fail */ /* [Cosine 070310]Send add_info to SIM */
         csmcc_send_l4c_sat_setup_fail(CSMCC_PTR->req_src_id, 
                                       SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       /*SAT_NO_SPECIFIC_CAUSE*/csmcc_sat_cause,
                                       cause,
                                       CSMCC_PTR->req_call_id); 
         break;         
#endif /* __SAT__ */
       default: 
            break;
   }

   switch(CSMCC_PTR->prev_req)
   {
      case CSMCC_CALL_SETUP_REQ:
      	 /*mtk01602, 070606: TS11.14 12.12.2, 
           For "network currently unable to process command", additional info. 
           shall be the first byte of the cause returned by the network.*/
     #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
	 csmcc_sat_cause = (kal_uint8)cause;
         if(csmcc_sat_cause != CSMCC_NO_CAUSE)
         {
         	csmcc_sat_cause |= (1<<7);
         }
     #endif
         csmcc_send_l4c_setup_fail(CSMCC_PTR->req_src_id, 
         	                   (kal_uint8)GET_CALL_TYPE(call_id), 
         	                   cause,
         	                   SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
         	                   csmcc_sat_cause,
         	                   diagnostic);
         break;
         
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
      
         csmcc_send_l4c_emergency_setup_fail(CSMCC_PTR->req_src_id, cause);
         break;
 	 #ifdef __SAT__
      case CSMCC_SAT_SETUP_REQ:
         csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            	{
            		csmcc_sat_cause |= (1<<7);
            	}
        /* call setup fail */ /* [Cosine 070310]Send add_info to SIM */
         csmcc_send_l4c_sat_setup_fail(CSMCC_PTR->req_src_id, 
                                       SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       /*SAT_NO_SPECIFIC_CAUSE*/csmcc_sat_cause,
                                       cause,
                                       CSMCC_PTR->req_call_id); 
         break;         
      #endif /* __SAT__ */
      default: 
            break;
   	}

   /* dealloc call context */
   csmcc_dealloc_call_context(call_id);
   
   return CSMCC_NO_ERROR;
   	
} /* mncc_rej_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_disc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call disconnect indication from CC.
*
* CALLS  
*	mncc_disc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_disc_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   mncc_disc_ind_struct *disc_ind_ptr;
   kal_bool send_release = KAL_TRUE;
   kal_uint8 diagnostic;
   
   disc_ind_ptr = (mncc_disc_ind_struct*)local_para_ptr;
   call_id = disc_ind_ptr->call_id;
   CSMCC_PTR->is_ibt = KAL_FALSE;   
   
   if (call_id == CSMCC_INVALID_CALL_ID)
   {
      call_id = csmcc_find_call_id_from_ti(disc_ind_ptr->ti);

      /* if still can't find call id, discard this msg. */
      if (call_id == CSMCC_INVALID_CALL_ID)
      {
         return CSMCC_NO_ERROR;
      }
   }

//MAUI_01996988
#if 0
#ifdef __AUTO_CALL_REJECTION__
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

   /* MAUI_01632551: save ti to call context*/
   CALL_DATA(call_id,ti) = disc_ind_ptr->ti;   

   if((CALL_DATA(call_id, call_mode)== CSMCC_ALT_VOICE_FAX) ||
      (CALL_DATA(call_id, call_mode) == CSMCC_ALT_VOICE_DATA))
   {
       /*mtk00924 050312 according to 27.007 section 6.4 */
       CSMCC_PTR->at_param.call_mode = CSMCC_SINGLE_MODE;
   }   

#ifdef __CCBS_SUPPORT__
   if(GET_CALL_STATE(call_id) == CSMCC_CALL_IDLE)
   {
        /* [Cosine 070307] State=IDLE, ccbs_status=ACTIVATED or INVOKED, this is a ccbs recall;
                     otherwise this is not a legal disconnect*/
        kal_brief_trace(TRACE_INFO, CSMCC_TRACE_CCBS_STATUS, call_id, CALL_DATA(call_id,ccbs_status));
  	 if(CALL_DATA(call_id,ccbs_status) == CSMCC_CCBS_ACTIVATED)
   	{
   		csmcc_send_cc_rel_req(call_id, disc_ind_ptr->cause.cause_value);
                return CSMCC_NO_ERROR;
        }
  	 else if(CALL_DATA(call_id,ccbs_status) != CSMCC_CCBS_INVOKED)
  	{
      		return CSMCC_NO_ERROR;
   	}
   }
#endif /*__CCBS_SUPPORT__*/	
   
   if(disc_ind_ptr->facilityP == KAL_TRUE)
   {
      /* ExplicitCT rr, re */
      csmcc_peer_fac_ie_hdlr(call_id, &(disc_ind_ptr->facility));
   }

#ifdef __CCBS_SUPPORT__
   /* record CCBS possible status if present in disconnect indication */
   if(disc_ind_ptr->ccbs_allowedP == KAL_TRUE
      && disc_ind_ptr->ccbs_allowed.CCBS_possible == CSMCC_KAL_U_ONE
      && GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC)
   {
      CALL_DATA(call_id,ccbs_status) = CSMCC_CCBS_POSSIBLE;
      
      /* CCBS possible, wait for user decision */
      send_release = KAL_FALSE;
   }   
#endif /*__CCBS_SUPPORT__*/
   
   csmcc_send_l4c_disc_ind(disc_ind_ptr);
   
#ifdef __SAT__ //mtk01602, 070727
#ifndef __SAT_LOWCOST_NW_DISABLE__
   if ((GET_CALL_STATE(call_id) & CSMCC_ALL_DISC_STATES) == 0) 
   {
      kal_uint8 sat_cause[30];
      kal_uint8 sat_cause_len = 0xff;
	   
      sat_cause_len = csmcc_form_sat_cause((kal_uint8 *)&disc_ind_ptr->cause, sat_cause);	

      /* the first disconnect occur, need to inform SIM. */
      csmcc_send_sim_call_disc_req(disc_ind_ptr->ti,
                            KAL_TRUE, /* is_far_end */
                            //KAL_TRUE, /*cause_p*/
                            //(kal_uint8)disc_ind_ptr->cause.cause_value);
                            sat_cause_len,
                            sat_cause);
                            
   }
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif
   
   if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL
      || GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL)
      && GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC
      && disc_ind_ptr->progress_indP == KAL_TRUE
      && disc_ind_ptr->progress_ind.prog_desc == CSMCC_IN_BAND_AVAILABLE)
   {        
      CSMCC_PTR->is_ibt = KAL_TRUE;   /*mtk00924 add 041210 for ECPI*/
      csmcc_attach_speech();
      if(CSMCC_PTR->attach_status == CSMCC_SPEECH_ON) 
      {
         /* if speech is connected, wait for user decision */
         send_release = KAL_FALSE;
      }
   }
   
#ifdef __TCPIP_OVER_CSD__   //mtk01602, 071226: [MAUI_00596161]
   if(GET_CALL_TYPE(call_id) == CSMCC_CSD_CALL
      && (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH 
      || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ))
   {
      /* in order to let L4C deactivate PPP */
      send_release = KAL_FALSE;
   }
#endif      

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   if(GET_CALL_TYPE(call_id) == CSMCC_SAT_DATA_CALL
	  && (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
      || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ))   
   {
      /* in order to let L4C deactivate PPP */
      send_release = KAL_FALSE;
   }
#endif   

   /* store the state before entering CSMCC_NW_CALL_DISC. 
          for l4ccsm_cc_get_call_info(). */
   if ((GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC) 
      && (GET_CALL_STATE(call_id) !=CSMCC_NW_CALL_DISC)
      && (GET_CALL_STATE(call_id) !=CSMCC_NW_CALL_DISC_ON_HOLD))
   {
      csmcc_ctab_g.call_tab[call_id-1].pre_call_state = GET_CALL_STATE(call_id);
      
      kal_brief_trace(TRACE_INFO, CSMCC_SET_PRE_STATE, 
            call_id, GET_CALL_STATE(call_id));
   }

   if(GET_CALL_STATE(call_id) == CSMCC_CALL_HOLD)
   {
      SET_CALL_STATE(call_id, CSMCC_NW_CALL_DISC_ON_HOLD)
         
      /* CSMCC gen notify ss for AT cmd, +CSSN, code2, 5. */   
      csmcc_send_l4c_gen_notify_ss_ind(call_id, CSMCC_NOTIFY_HELD_CALL_RELEASED);
   }
   else
   {
      SET_CALL_STATE(call_id, CSMCC_NW_CALL_DISC)
   }
   
   if(send_release == KAL_TRUE)
   {
      csmcc_disc_call(call_id, disc_ind_ptr->cause.cause_value);
   }
         
   if (disc_ind_ptr->cause.diagnostics_length > 0)
   {
        diagnostic = disc_ind_ptr->cause.diagnostics[0]; 
   }
   else
   {
        diagnostic = 0;
   }
         
   /*mtk00924 add 041210 for ECPI*/
   csmcc_send_l4c_cpi_ind(call_id,
   	                 CSMCC_DISCONNECT_MSG,
   	                 CSMCC_PTR->is_ibt,
   	                 CSMCC_PTR->is_tch,
   	                 disc_ind_ptr->cause.cause_value,
   	                 diagnostic);
   	                                     
         
   return CSMCC_NO_ERROR;

} /* end of mncc_disc_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_modify_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call modify request from L4C.
*
* CALLS  
*	l4ccsm_cc_call_modify_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_modify_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_call_modify_req_struct *call_modify_req_ptr;
   kal_uint8 call_id;
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__ ) || defined(__CSD_FAX__)
   kal_uint8 cur_call_type = 0;
#endif 
   kal_uint8 new_call_type = 0;
   kal_bool reject = KAL_FALSE;
   kal_bool speech_off = KAL_FALSE; 
   kal_bool need_RSCD = KAL_FALSE;
   
   call_modify_req_ptr = (l4ccsm_cc_call_modify_req_struct*)local_para_ptr;
   call_id = call_modify_req_ptr->call_id;

   if(GET_CALL_STATUS(call_id) != CSMCC_CALL_BLK)
   {
      /* invalid call id */
      csmcc_send_l4c_modify_fail(call_modify_req_ptr->src_id,
                                 call_id, 
                                 CSMCC_ILLEGAL_CALL_ID);
      
      return CSMCC_NO_ERROR;
   }
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_ACTIVE)
   {
      /* call can be modified only if call is active */
      csmcc_send_l4c_modify_fail(call_modify_req_ptr->src_id,
                                 call_id, 
                                 CSMCC_CMD_NOT_ALLOW);
      
      return CSMCC_NO_ERROR;
   }
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__ ) || defined(__CSD_FAX__)
   cur_call_type = CALL_DATA(call_id,cur_call_type);
#endif


   switch(CALL_DATA(call_id,call_mode))
   {
      case CSMCC_SINGLE_MODE:
         /* single call mode can't be modify */
         reject = KAL_TRUE;
         break;
#ifdef __CSD_FAX__
      case CSMCC_ALT_VOICE_FAX:

         new_call_type = (cur_call_type == 0)?1:0;        
               
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VOICE_CALL
            || CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_AUX_VOICE_CALL)
         {
            /* voice -> fax */
            csmcc_stop_auto_dtmf(call_id);
            speech_off = KAL_TRUE;

            /*a. MO call +  ATD    :  DCD = "mobile originate"     
               b. MO call +  ATA     :  DCD = "mobile terminated" and  RSCD 
               c. MT call +  ATD     :  DCD = "mobile originate" and RSCD 
               d. MT call +  ATA     :  DCD = "mobile terminated"  */
            if ((CALL_DATA(call_id, call_orig) == CSMCC_MO_CALL) 
                  && (call_modify_req_ptr->modify_cmd == L4C_MODIFY_ATA))
            {
               /* need RSCD, MT Fax call. */
               need_RSCD = KAL_TRUE;
               CSMCC_PTR->fax_dir = MT_FAX_CALL;
            }
            else if((CALL_DATA(call_id, call_orig) == CSMCC_MT_CALL) 
                  && (call_modify_req_ptr->modify_cmd == L4C_MODIFY_ATD))
            { 
               /* need RSCD, MO Fax call. */
               need_RSCD = KAL_TRUE;
               CSMCC_PTR->fax_dir = MO_FAX_CALL;
            }
            else if (CALL_DATA(call_id, call_orig) == CSMCC_MO_CALL) 
            {
               /* No RSCD, MO Fax call. */
               CSMCC_PTR->fax_dir = MO_FAX_CALL;
            }
            else /* call_orig == MT call */
            {
               /* No RSCD, MT Fax call. */
               CSMCC_PTR->fax_dir = MT_FAX_CALL;
            }
            
            csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                  call_modify_req_ptr->src_id,
                                  call_id);//johnnie          
         }
         else
         {
            /* fax -> voice */
            /* TBD: deactivate FAX */
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
               || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
		if(CSMCC_PTR->activate_data_call_id == call_id)
		{
               csmcc_deactivate_fax();
		 	CSMCC_PTR->activate_data_call_id = 0xff;
               csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                  call_modify_req_ptr->src_id,
                                  call_id);
               
               return CSMCC_NO_ERROR;
            }
		else
		{
		 	kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
		 	/* invalid call id */
      			csmcc_send_l4c_modify_fail(call_modify_req_ptr->src_id,
                                 call_id, 
                                 CSMCC_ILLEGAL_CALL_ID);
      
      			return CSMCC_NO_ERROR;		 	
		 }
            }
         }
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)         
      case CSMCC_ALT_VOICE_DATA:
         new_call_type = (cur_call_type == 0)?1:0;        
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VOICE_CALL
            || CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_AUX_VOICE_CALL)
         {
            /* voice -> data */
            csmcc_stop_auto_dtmf(call_id);
            speech_off = KAL_TRUE;
            csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                  call_modify_req_ptr->src_id,
                                  call_id);//johnnie            
         }
         else
         {
            /* data -> voice */
            if(CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH
               || CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ)
            {
		 if(CSMCC_PTR->activate_data_call_id == call_id)
		 {
		 #ifdef __VIDEO_CALL_SUPPORT__
		     if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VIDEO_CALL)
                     {
             	         csmcc_deactivate_vt(call_id, VT_MO_DISC);
			 CSMCC_PTR->activate_data_call_id = 0xff;
                         csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                           call_modify_req_ptr->src_id,
                                           call_id);
              
                         return CSMCC_NO_ERROR;
		     }
		 #endif
		 #if defined(__CSD_T__) || defined(__CSD_NT__)
		     if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_DATA_CALL)
		     {
                         csmcc_deactivate_data();
		         CSMCC_PTR->activate_data_call_id = 0xff;
                         csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                           call_modify_req_ptr->src_id,
                                           call_id);
              
                         return CSMCC_NO_ERROR;
                     }
		 #endif
		     else
		     {
		 	kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
		 	/* invalid call id */
      			csmcc_send_l4c_modify_fail(call_modify_req_ptr->src_id,
                                 call_id, 
                                 CSMCC_ILLEGAL_CALL_ID);
      
      			return CSMCC_NO_ERROR;		 	
		     }
                 }   
             }
         }
         break;
      case CSMCC_VOICE_FOLLOW_DATA:
         if(cur_call_type == 0)
         {
            new_call_type = 1;
            /* voice -> data */
            csmcc_stop_auto_dtmf(call_id);
            speech_off = KAL_TRUE;
               csmcc_save_cur_req(CSMCC_MO_MODIFY_REQ,
                                  call_modify_req_ptr->src_id,
                                  call_id);//johnnie            
         }
         else
         {
            reject = KAL_TRUE;
         }
         break;
#endif
      default:
         /* invalid value range */
         reject = KAL_TRUE;
         break;

   } /* switch(call_mode) */
            
   if(reject == KAL_TRUE)
   {
      csmcc_send_l4c_modify_fail(call_modify_req_ptr->src_id,
                                 call_id, 
                                 CSMCC_ILLEGAL_BC);

      return CSMCC_NO_ERROR;
   }
   
   if(new_call_type == 0)
   {
      csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc1), (kal_uint8)need_RSCD);
   }
   else if(new_call_type == 1)
   {
      csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc2), (kal_uint8)need_RSCD);      
   }

   CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;            
      
   SET_CALL_STATE(call_id, CSMCC_CALL_MODIFY)
   
   /* turn off speech */
   if(speech_off == KAL_TRUE)
   {      
      csmcc_detach_speech();      
   }
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_call_modify_req_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	modify_compl_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call modify complete indication from CC.
*
* CALLS  
*	modify_compl_hdlr(mncc_modify_cnf_struct* modify_compl_ptr)
* PARAMETERS
*	modify_cnf_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t modify_compl_hdlr(mncc_modify_cnf_struct* modify_compl_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   csmcc_bc_struct bc;

   csmcc_form_app_bc(&bc, &(modify_compl_ptr->bc));   
   call_id = modify_compl_ptr->call_id;
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_MODIFY)
   {
      return CSMCC_NO_ERROR;
   }
      
   switch(bc.itc)
   {
      case CSMCC_ITC_SPEECH:
         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         {
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id, 
                                       call_id, 
                                       CSMCC_MODIFY_ACTUAL_MODE);
         }
#if defined(__CSD_T__) || defined(__CSD_NT__)         
         else if(GET_CALL_TYPE(call_id) == CSMCC_DATA_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;                        
            csmcc_send_l4c_modify_succ(call_id);
         }
#endif
#ifdef __VIDEO_CALL_SUPPORT__         
         else if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;                        
            csmcc_send_l4c_modify_succ(call_id);
         }
#endif
#ifdef __CSD_FAX__
         else if(GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;            
            csmcc_send_l4c_modify_succ(call_id);
         }         
#endif
         break;
      case CSMCC_ITC_AUX_SPEECH:
         if((GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL)
             ||(GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL))
         {
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id, 
                                       call_id, 
                                       CSMCC_MODIFY_ACTUAL_MODE);
         }
#if defined(__CSD_T__) || defined(__CSD_NT__)
         else if(GET_CALL_TYPE(call_id) == CSMCC_DATA_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;                        
            csmcc_send_l4c_modify_succ(call_id);
         }
#endif
#ifdef __VIDEO_CALL_SUPPORT__         
         else if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;                        
            csmcc_send_l4c_modify_succ(call_id);
         }
#endif
#ifdef __CSD_FAX__
         else if(GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
         {
            /* change to voice successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;            
            csmcc_send_l4c_modify_succ(call_id);
         }         
#endif
         break;
#ifdef __CSD_FAX__
      case CSMCC_ITC_FAX_GROUP_3:

         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||((GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL)))
         {
            csmcc_send_l4c_modify_succ(call_id);
            /* change to fax successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;
            
            if(CSMCC_PTR->channel_info == CSMCC_DATA_TCH)
            {   
               if(csmcc_activate_fax(call_id, CSMCC_PTR->fax_dir) != CSMCC_NO_ERROR)
               {
                  csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
               }
		 else
		 {
		    CSMCC_PTR->activate_data_call_id = call_id;
		 }			   
            }
            else
            {
               /* No data TCH yet, just wait it. So active data in mncc_sync_ind_hdlr(). 
                * save req_call_id for use in mncc_sync_ind_hdlr() */               
               CSMCC_PTR->req_call_id = call_id;
            }
         }
         else if(GET_CALL_TYPE(call_id) == CSMCC_FAX_CALL)
         {
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id, 
                                       call_id, 
                                       CSMCC_MODIFY_ACTUAL_MODE);
         }
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)
      case CSMCC_ITC_UDI:
      case CSMCC_ITC_3_1_K_AUDIO:
      case CSMCC_OTHER_ITC:
         if((GET_CALL_TYPE(call_id) == CSMCC_VOICE_CALL)
            ||(GET_CALL_TYPE(call_id) == CSMCC_AUX_VOICE_CALL))
         {
            csmcc_send_l4c_modify_succ(call_id);//Ripple
            /* change to data successfully, update current call type */
            CALL_DATA(call_id, cur_call_type) = (CALL_DATA(call_id, cur_call_type) == 0)?1:0;
                        
            if(CSMCC_PTR->channel_info == CSMCC_DATA_TCH)
            {
               #ifdef __VIDEO_CALL_SUPPORT__
	       if(CALL_DATA(call_id,bc[CALL_DATA(call_id, cur_call_type)]) == CSMCC_VIDEO_CALL)
	       {
                   if(csmcc_activate_vt(call_id) != CSMCC_NO_ERROR)
		   {
		       csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
		   }
				    else
		   {
		      CSMCC_PTR->activate_data_call_id = call_id;
		   }
	       }
	       #endif
	       #if defined(__CSD_T__) || defined(__CSD_NT__)
	       if(CALL_DATA(call_id,bc[CALL_DATA(call_id, cur_call_type)]) == CSMCC_DATA_CALL)
	       {
	           if(csmcc_activate_data((kal_uint8)GET_CALL_TYPE(call_id)) != CSMCC_NO_ERROR)
                   {
                      /* data activation failure, so disconnect call */
                      csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
                   }
		   else
		   {
		      CSMCC_PTR->activate_data_call_id = call_id;
		   }
               }
	       #endif
	       else
	       {
	   	   /*TBD: Initiate call clear if NW attach a DATA TCH which is not negotiated before.*/
		   kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);	 	 
		   //csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR); 
	       }
            }
            else
            {
               /* No data TCH yet, just wait it. So active data in mncc_sync_ind_hdlr(). 
                * save req_call_id for use in mncc_sync_ind_hdlr() */               
               CSMCC_PTR->req_call_id = call_id;               
            }
         }
	 #if defined(__CSD_T__) || defined(__CSD_NT__)
         else if(GET_CALL_TYPE(call_id) == CSMCC_DATA_CALL)
         {
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id,
                                       call_id, 
                                       CSMCC_MODIFY_ACTUAL_MODE);
         }         
         #endif /*(__CSD_T__) || (__CSD_NT__)*/
         #ifdef __VIDEO_CALL_SUPPORT__         
         else if(GET_CALL_TYPE(call_id) == CSMCC_VIDEO_CALL)
         {
            csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id,
                                       call_id, 
                                       CSMCC_MODIFY_ACTUAL_MODE);
         }         
         #endif /*__VIDEO_CALL_SUPPORT__*/
         break;
#endif
      default:
         ASSERT(KAL_FALSE);
   } /* switch(itc) */
   
   SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)
         
   return CSMCC_NO_ERROR;

} /* end of modify_compl_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	modify_rej_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call modify reject indication from CC.
*
* CALLS  
*	modify_rej_hdlr(mncc_modify_cnf_struct* modify_rej_ptr)
* PARAMETERS
*	modify_cnf_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t modify_rej_hdlr(mncc_modify_cnf_struct* modify_rej_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   csmcc_bc_struct bc;
   kal_bool speech_on = KAL_FALSE;
      
   csmcc_form_app_bc(&bc, &(modify_rej_ptr->bc));   
   call_id = modify_rej_ptr->call_id;      
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_MODIFY)
   {
      return CSMCC_NO_ERROR;
   }
   
   switch(GET_CALL_TYPE(call_id))
   {
      case CSMCC_VOICE_CALL:
         /* resume voice call */
         CSMCC_PTR->channel_info = CSMCC_SPEECH_TCH;
         speech_on = KAL_TRUE;
         break;

      case CSMCC_AUX_VOICE_CALL:
         /* resume voice call */
         CSMCC_PTR->channel_info = CSMCC_SPEECH_TCH;
         speech_on = KAL_TRUE;
         break;
#ifdef __CSD_FAX__         
      case CSMCC_FAX_CALL:
         /* TBD: resume fax call*/
         {
            CSD_FAX_DIRECTION_ENUM fax_dir;
            
         CSMCC_PTR->channel_info = CSMCC_DATA_TCH;
            
            if (CALL_DATA(call_id, call_orig) == CSMCC_MO_CALL) 
            {            
               fax_dir = MO_FAX_CALL;
            }
            else /* call_orig == MT call */
            {           
               fax_dir = MT_FAX_CALL;
            }
            
            if(csmcc_activate_fax(call_id, fax_dir) != CSMCC_NO_ERROR)
            {
               csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
            }
	     else
	     {
	        CSMCC_PTR->activate_data_call_id = call_id;
	     }			
         }
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__)
      case CSMCC_DATA_CALL:
         /* resume data call */
         CSMCC_PTR->channel_info = CSMCC_DATA_TCH;
         if(csmcc_activate_data((kal_uint8)GET_CALL_TYPE(call_id)) != CSMCC_NO_ERROR)
         {
            csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
         }
	 else
	 {
	    CSMCC_PTR->activate_data_call_id = call_id;
	 }
         break;
#endif
#ifdef __VIDEO_CALL_SUPPORT__
      case CSMCC_VIDEO_CALL:
         /* resume video call */
         CSMCC_PTR->channel_info = CSMCC_DATA_TCH;
         if(csmcc_activate_vt(call_id) != CSMCC_NO_ERROR)
         {
            csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
         }
	 else
	 {
	    CSMCC_PTR->activate_data_call_id = call_id;
	 }
         break;
#endif

      default:
         /* invalid value range */
         return CSMCC_ERROR;
   } /* switch(itc) */
   
   csmcc_send_l4c_modify_fail(CSMCC_PTR->req_src_id, 
                              call_id, 
                              modify_rej_ptr->cause.cause_value);
   
   SET_CALL_STATE(call_id, CSMCC_CALL_ACTIVE)
   
   /* turn on speech here because it will check state */
   if(speech_on == KAL_TRUE)
   {
      csmcc_attach_speech();
   }

   return CSMCC_NO_ERROR;

} /* end of modify_rej_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	mncc_modify_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call modify confirmation from CC.
*
* CALLS  
*	mncc_modify_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_modify_cnf_hdlr(local_para_struct *local_para_ptr)
{
   kal_uint8 response;
      
   response = ((mncc_modify_cnf_struct*)local_para_ptr)->response;
   
   if(response == KAL_TRUE)
   {
      return modify_compl_hdlr((mncc_modify_cnf_struct*)local_para_ptr);
   }
   else 
   {
      return modify_rej_hdlr((mncc_modify_cnf_struct*)local_para_ptr);
   }
} /* end of mncc_modify_cnf_hdlr */



/*************************************************************************
* FUNCTION                                                            
*	mncc_modify_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call modify indication from CC.
*
* CALLS  
*	mncc_modify_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_modify_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */  
   CSMCC_PTR_G_TO_L
   mncc_modify_ind_struct *modify_ind_ptr;      
   kal_uint8 call_id;   
   kal_uint8 cur_call_type = 0;
   kal_uint8 new_call_type = 0;   
   kal_bool  reject = KAL_FALSE;   
   kal_bool  actual = KAL_FALSE;
   csmcc_bc_struct bc;
   
   modify_ind_ptr = (mncc_modify_ind_struct*)local_para_ptr;   
   csmcc_form_app_bc(&bc, &(modify_ind_ptr->bc));   
   call_id = modify_ind_ptr->call_id;   
   cur_call_type = CALL_DATA(call_id,cur_call_type);
   
   if(GET_CALL_STATE(call_id) != CSMCC_CALL_ACTIVE)
   {
      return CSMCC_NO_ERROR;
   }
      
   switch(CALL_DATA(call_id,call_mode))
   {
      case CSMCC_SINGLE_MODE:
         reject = KAL_TRUE;
         break;
#ifdef __CSD_FAX__
      case CSMCC_ALT_VOICE_FAX:
         new_call_type = (cur_call_type == 0)?1:0;
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)
      case CSMCC_ALT_VOICE_DATA:
         new_call_type = (cur_call_type == 0)?1:0;
         break;
      case CSMCC_VOICE_FOLLOW_DATA:
         if(cur_call_type == 0)
         {
            new_call_type = 1;
         }
         else
         {
            reject = KAL_TRUE;
         }
         break;
#endif
      default:
         /* invalid value range */
         reject = KAL_TRUE;
         break;

   } /* switch(call_mode) */

   switch(bc.itc)
   {
      case CSMCC_ITC_SPEECH:
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VOICE_CALL)
         {
            /* already in the indicated mode. directly accepted but not need to change mode. */
            actual = KAL_TRUE;
         }
         break;
      case CSMCC_ITC_AUX_SPEECH:
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_AUX_VOICE_CALL)
         {
            actual = KAL_TRUE;
         }
         break;
#ifdef __CSD_FAX__ 
      case CSMCC_ITC_FAX_GROUP_3:
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_FAX_CALL)
         {
            actual = KAL_TRUE;
         }
         break;
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__VIDEO_CALL_SUPPORT__)
      case CSMCC_ITC_UDI:
      case CSMCC_ITC_3_1_K_AUDIO:
      case CSMCC_OTHER_ITC:
         if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_DATA_CALL
           || CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VIDEO_CALL)
         {
            if(CSMCC_PTR->data_bc_param.itc != bc.itc)
            {
               reject = KAL_TRUE;
            }
            else
            {
               actual = KAL_TRUE;
            }
         }
         break;
#endif
      default:
         /* invalid value range */
         reject = KAL_TRUE;
         break;

   } /* switch(itc) */
   
   if(actual == KAL_FALSE && reject == KAL_FALSE)
   {      
      if(new_call_type == 0)
      {        
         reject = (kal_bool)(!csmcc_is_bc_compat(&(CSMCC_PTR->nego_bc.bc1),
                                      &bc));
      }
      else
      {         
         reject = (kal_bool)(!csmcc_is_bc_compat(&(CSMCC_PTR->nego_bc.bc2),
                                      &bc));
      }
   }
      
   if(reject == KAL_TRUE)
   {
      if(cur_call_type == 0)
      {
         csmcc_send_cc_modify_rej(call_id, &(CSMCC_PTR->nego_bc.bc1),
                                         CM_INCOMPATIBLE_DEST);
      }
      else
      {
         csmcc_send_cc_modify_rej(call_id, &(CSMCC_PTR->nego_bc.bc2),
                                         CM_INCOMPATIBLE_DEST);
      }      

      return CSMCC_NO_ERROR;
      
   }
   else if(actual == KAL_TRUE)
   {
      if(cur_call_type == 0)
      {
         csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc1),modify_ind_ptr->rscd_P);
      }
      else
      {
         csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc2),modify_ind_ptr->rscd_P);
      }      
      return CSMCC_NO_ERROR;
   }
   
   /* now, the mode modified is acceptable */

   if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VOICE_CALL
      || CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_AUX_VOICE_CALL)
   {
      /* stop auto dtmf */
      csmcc_stop_auto_dtmf(call_id);
      /* turn off speech */
      csmcc_detach_speech();      
      /*[Cosine 070314] UT bug*/
      csmcc_save_cur_req(CSMCC_MT_MODIFY_REQ,
                         CSMCC_INVALID_SRC_ID,
                         call_id);
   }   
#if defined(__CSD_T__) || defined(__CSD_NT__)
   else if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_DATA_CALL)
   {
      /* data -> voice */ /* ripple: add the 2nd cond. */
      if( (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH)
         || (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ) ) 
      {
	  if(CSMCC_PTR->activate_data_call_id == call_id)
	  {
         csmcc_deactivate_data();
		CSMCC_PTR->activate_data_call_id = 0xff;
         /* tore rscd_P used when send modify compl in data_deactivate_cnf_hdlr(). */
         CSMCC_PTR->rscd_P = (kal_bool)(modify_ind_ptr->rscd_P);
         csmcc_save_cur_req(CSMCC_MT_MODIFY_REQ,
                            CSMCC_INVALID_SRC_ID,
                            call_id);
         /* send modify compl when data deactivate cnf. */
         return CSMCC_NO_ERROR;                                     
      }      
	  else
	  {
	  	kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	  }
      }      
   }
#endif
#ifdef __3G_VIDEO_CALL
   else if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_VIDEO_CALL)
   {
      /* video -> voice */ 
      if( (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH)
        || (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ) ) 
      {
	  if(CSMCC_PTR->activate_data_call_id == call_id)
	  {
              csmcc_deactivate_vt(call_id, VT_MT_DISC);
	      CSMCC_PTR->activate_data_call_id = 0xff;
              /* Store rscd_P used when send modify compl in data_deactivate_cnf_hdlr(). */
              CSMCC_PTR->rscd_P = (kal_bool)(modify_ind_ptr->rscd_P);
              csmcc_save_cur_req(CSMCC_MT_MODIFY_REQ,
                                CSMCC_INVALID_SRC_ID,
                                call_id);
              /* send modify compl when data deactivate cnf. */
              return CSMCC_NO_ERROR;                                     
          }      
	  else
	  {
	      kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	  }
      }      
   }
#endif

#ifdef __CSD_FAX__
   else if(CALL_DATA(call_id,bc[cur_call_type]) == CSMCC_FAX_CALL)
   {
	if(CSMCC_PTR->activate_data_call_id == call_id)
	{
      /* TBD: deactivate fax */
      csmcc_deactivate_fax();
		CSMCC_PTR->activate_data_call_id = 0xff;
      /* tore rscd_P used when send modify compl in data_deactivate_cnf_hdlr(). */
      CSMCC_PTR->rscd_P = modify_ind_ptr->rscd_P;
      csmcc_save_cur_req(CSMCC_MT_MODIFY_REQ,
                         CSMCC_INVALID_SRC_ID,
                         call_id);
      
      /* send modify compl when data deactivate cnf. */
      return CSMCC_NO_ERROR;                  
   }
	else
	{
	  	kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_CALL_ID_NOT_MATCHED);
	}	
	
   }
#endif

   if(new_call_type == 0)
   {
      csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc1),modify_ind_ptr->rscd_P);
   }
   else if(new_call_type == 1)
   {
      csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc2),modify_ind_ptr->rscd_P);      
   }
      
   CALL_DATA(call_id, cur_call_type) = new_call_type;  /* ripple: exchange these two lines. */
   csmcc_send_l4c_modify_ind(call_id);
      
   CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;                  
      
   return CSMCC_NO_ERROR;
   
} /* end of mncc_modify_ind_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	mncc_start_dtmf_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process start dtmf response from CC.
*
* CALLS  
*	mncc_start_dtmf_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_start_dtmf_cnf_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   mncc_start_dtmf_cnf_struct *start_dtmf_cnf_ptr;
   kal_uint8 call_id;
   
   start_dtmf_cnf_ptr = (mncc_start_dtmf_cnf_struct*)local_para_ptr;
   call_id = start_dtmf_cnf_ptr->call_id;
   
   if(CALL_DATA(call_id,dtmf_mode) == CSMCC_AUTO_DTMF)
   {
      /* 
       * the response is for sending automatic dtmf tone,
       * so keeping sending the next one
       */

      if(csmcc_send_auto_dtmf(call_id) != CSMCC_NO_ERROR)
      {
         /* no dtmf tone is waiting to be sent */
         #ifdef __SAT__
         if (CSMCC_PTR->is_sat_dtmf == KAL_TRUE)
         {            
            /* Send sat_send_dtmf_cnf */
            csmcc_send_l4c_sat_send_dtmf_cnf(CSMCC_PTR->dtmf_src_id, 
                                                        SAT_CMD_PERFORMED_SUCCESSFULLY, 
                                                        SAT_NO_SPECIFIC_CAUSE);
         
            CSMCC_PTR->is_sat_dtmf = KAL_FALSE;
            /* DUMA00112321 remove dtmf reset */
            //CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;            
         }
         else
         #endif /* __SAT__ */
         {
         csmcc_send_l4c_auto_dtmf_complete_ind(call_id);         
      }      

         csmcc_stop_auto_dtmf(call_id);                  
      }      

      /* 
       * Note: L4CCSM_CC_START_DTMF_CNF of each sending dtmf tone
       * may be sent to L4C in case of auto dtmf mode. This is optional. 
       */
   }
   else if(CALL_DATA(call_id,dtmf_mode) != CSMCC_INVALID_DTMF_MODE)
   {
      /* the resonse is for sending manual dtmf tone */
      
      if(start_dtmf_cnf_ptr->response == CSMCC_KAL_U_ONE)
      {
         /* start dtmf ack */
         csmcc_send_l4c_start_dtmf_succ(call_id, start_dtmf_cnf_ptr->digit);
      }
      else
      {
         /* start dtmf reject */
         csmcc_send_l4c_start_dtmf_fail(CSMCC_PTR->dtmf_src_id,

                                        call_id, 
                                        start_dtmf_cnf_ptr->digit,
          (kal_uint8)((start_dtmf_cnf_ptr->causeP == KAL_TRUE)?
            start_dtmf_cnf_ptr->cause.cause_value:CSMCC_NO_CAUSE));
      }
      /* DUMA00112321 remove dtmf reset */
      //CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;   
      /* for dtmf request request, it is handled as a special case 
         to save the dtmf mode (manual or +vts) instead of request.
         It is assumed that start and stop dtmf request must be 
         coupled. */      
   }
   
   return CSMCC_NO_ERROR;

} /* end of mncc_start_dtmf_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_stop_dtmf_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process stop dtmf response from CC.
*
* CALLS  
*	mncc_stop_dtmf_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_stop_dtmf_cnf_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   mncc_stop_dtmf_cnf_struct *stop_dtmf_cnf_ptr;   
   kal_uint8 call_id;      
      
   stop_dtmf_cnf_ptr = (mncc_stop_dtmf_cnf_struct*)local_para_ptr;
   call_id = stop_dtmf_cnf_ptr->call_id;
   
   if(CALL_DATA(call_id,dtmf_mode) == CSMCC_AUTO_DTMF)
   {
      /* 
       * the response is for sending automatic dtmf tone,
       * so nothing to do.
       */

      /* 
       * Note: L4CCSM_CC_STOP_DTMF_CNF of each sending dtmf tone
       * may be sent to L4C in case auto dtmf mode. this is optional.
       */
   }
   else if(CALL_DATA(call_id,dtmf_mode) != CSMCC_INVALID_DTMF_MODE)
   {
      /* the resonse is for sending manual dtmf tone */
      
      if(stop_dtmf_cnf_ptr->response == CSMCC_KAL_U_ONE)
      {
         csmcc_send_l4c_stop_dtmf_succ(call_id, stop_dtmf_cnf_ptr->digit);
      }
      else
      {
         /* stop dtmf failure */
         csmcc_send_l4c_stop_dtmf_fail(CSMCC_PTR->dtmf_src_id,

          call_id,
          stop_dtmf_cnf_ptr->digit,
          (kal_uint8)((stop_dtmf_cnf_ptr->causeP == KAL_TRUE)?
            stop_dtmf_cnf_ptr->cause.cause_value:CSMCC_NO_CAUSE));
      }
      /* DUMA00112321 remove dtmf reset */
      //CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;
      /* for dtmf request request, it is handled as a special case 
         to save the dtmf mode (manual or +vts) instead of request.
         It is assumed that start and stop dtmf request must be 
         coupled. */ 
   }
   
   return CSMCC_NO_ERROR;

} /* end of mncc_stop_dtmf_cnf_hdlr */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	mncc_aoc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process AoC indication from CC.
*
* CALLS  
*	mncc_aoc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_aoc_ind_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_aoc_ind_struct *aoc_ind_ptr;
   //kal_uint8 data[ACM_LEN];
   
   aoc_ind_ptr = (mncc_aoc_ind_struct*)local_para_ptr;
   
   /* update CCM of the call */
   //CALL_DATA(aoc_ind_ptr->call_id, ccm_per_call) = (CALL_DATA(aoc_ind_ptr->call_id, ccm_per_call) & 0x80000000) | (aoc_ind_ptr->ccm & 0x7fffffff);
   CALL_DATA(aoc_ind_ptr->call_id, ccm_per_call) = aoc_ind_ptr->ccm;

   /* send L4C CCM indication */   
   csmcc_send_l4c_ccm_ind(aoc_ind_ptr);/*mtk00924_051209: send L4C ccm_ind before set acm value to CSM context, 
   										otherwise, the acm in l4c_ccm_ind value will always be zero becasue of the 
   										acm in aoc_ind and CSM context are equal*/

   if(CALL_DATA(aoc_ind_ptr->call_id, aoc_cdur) == 0)
   {
   	CALL_DATA(aoc_ind_ptr->call_id, aoc_cdur) = aoc_ind_ptr->cdur;
   }
		
       if(CSMCC_PTR->cdur_present)
       {
       	CSMCC_PTR->updated_cdur_present = KAL_TRUE;
		CSMCC_PTR->updated_cdur = aoc_ind_ptr->cdur;
       }
	else
	{
       	CSMCC_PTR->cdur_present = KAL_TRUE;
		CSMCC_PTR->cdur = aoc_ind_ptr->cdur;		
		csmcc_start_aoc_timer(aoc_ind_ptr->call_id, CSMCC_PTR->cdur);
	}


   if(aoc_ind_ptr->acm > CSMCC_PTR->acm)
   {
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	
	CSMCC_PTR->acm = aoc_ind_ptr->acm;
   }
   /*MAUI_02574027*/
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
   /* send L4C CCM indication */
   //csmcc_send_l4c_ccm_ind(aoc_ind_ptr);
   
   return CSMCC_NO_ERROR;

} /* end of mncc_aoc_ind_hdlr */
#endif /*__AOC_SUPPORT__*/

#ifdef __CCBS_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	mncc_ccbs_est_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process CC establishment indication from CC.
*
* CALLS  
*	mncc_ccbs_est_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_ccbs_est_ind_hdlr(
                          local_para_struct *local_para_ptr)
{
   /* local var declare */
   kal_uint8 ccbs_call_id;
   csmcc_ret_t ret_val;
   mncc_ccbs_est_ind_struct *ccbs_est_ind_ptr;
   
   ccbs_est_ind_ptr = (mncc_ccbs_est_ind_struct*)local_para_ptr;

   /* alloc a call id for ccbs call */
   ret_val = csmcc_alloc_call_context(&ccbs_call_id);
   /* save call_id & ti */
   CALL_DATA(ccbs_call_id, ti) = ccbs_est_ind_ptr->ti;
   CALL_DATA(ccbs_call_id, call_id) = ccbs_call_id;

   if(ret_val != CSMCC_NO_ERROR)
   {
      csmcc_send_cc_ccbs_rej_req(ccbs_call_id, CM_RESOURCE_UNAVAIL_UNSPECIFIED);
      return CSMCC_NO_ERROR;
   }

   /* a ccbs possible call found, then do basic service recall alignment */

   /* reset bearer capability and bearer capability negotiation */      
   csmcc_reset_bc();   
   if(csmcc_is_ccbs_call_compat(ccbs_call_id, ccbs_est_ind_ptr) == KAL_FALSE)
   {
      /* 
       * basic service recall alignment fails, so send ccbs reject
       * request to CC and deactivate ccbs call 
       */
       
      csmcc_send_cc_ccbs_rej_req(ccbs_call_id, CM_BEARER_CAP_NOT_AUTHORISED);
      csmcc_dealloc_call_context(ccbs_call_id);      
      return CSMCC_NO_ERROR;
   }
   
   /* save new ti */
   CALL_DATA(ccbs_call_id,ti) = ccbs_est_ind_ptr->ti;   
   
   if(csmcc_is_allowed_setup_call(KAL_TRUE) == KAL_FALSE)
   {
      /* MS is busy */
      csmcc_send_cc_ccbs_est_res(ccbs_call_id, CM_USER_BUSY);
   }
   else
   {
      csmcc_send_cc_ccbs_est_res(ccbs_call_id, 0);
   }

   CALL_DATA(ccbs_call_id,ccbs_status) = CSMCC_CCBS_ACTIVATED;
   
   return CSMCC_NO_ERROR;

} /* end of mncc_ccbs_establishment_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_ccbs_recall_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process CC recall indication from CC.
*
* CALLS  
*	mncc_ccbs_recall_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_ccbs_recall_ind_hdlr(
                          local_para_struct *local_para_ptr)
{
   /* local var declare */
   kal_uint8 ccbs_call_id;
   mncc_ccbs_recall_ind_struct *recall_ind_ptr;
   
   recall_ind_ptr = (mncc_ccbs_recall_ind_struct*)local_para_ptr;
   ccbs_call_id = recall_ind_ptr->call_id;
#ifdef __AOC_SUPPORT__ 
   if(csmcc_is_acm_exceed() == KAL_TRUE)
   {
      /* ACM >= ACMMAX */
      csmcc_send_cc_ccbs_rej_req(ccbs_call_id, CM_ACM_EXCEEDED);
      csmcc_dealloc_call_context(ccbs_call_id);      
      return CSMCC_NO_ERROR;
   }
#endif/*__AOC_SUPPORT__*/
   if(recall_ind_ptr->ccbs_recall_numP)
   {
	CALL_DATA(ccbs_call_id, number_present) = KAL_TRUE;
	CALL_DATA(ccbs_call_id, number) = recall_ind_ptr->ccbs_recall_num;
   }
   	
   if(recall_ind_ptr->facilityP == KAL_TRUE)
   {
      /* NotifySS invoke (CCBS feature) */
      csmcc_peer_fac_ie_hdlr(ccbs_call_id, &(recall_ind_ptr->facility));
   }

   CALL_DATA(ccbs_call_id,ccbs_status) = CSMCC_CCBS_INVOKED;
   
   return CSMCC_NO_ERROR;

} /* end of mncc_ccbs_recall_ind_hdlr */
#endif /*__CCBS_SUPPORT__*/
/*************************************************************************
* FUNCTION                                                            
*	mncc_hold_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call hold acknowledge from CC.
*
* CALLS  
*	mncc_hold_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_hold_cnf_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   mncc_hold_cnf_struct *hold_cnf_ptr;
   csmcc_ret_t ret_val;
   #ifdef __EMLPP_SUPPORT__        
   kal_uint8 call_id;
   #endif
   kal_uint8 hold_call_id;
   kal_uint8 retrieve_req_call_id;
   kal_uint8 csmcc_sat_cause = CSMCC_NO_CAUSE;
   kal_uint16 cause = CSMCC_NO_CAUSE;
   
   hold_cnf_ptr = (mncc_hold_cnf_struct*)local_para_ptr;
   hold_call_id = hold_cnf_ptr->call_id;
   
   if(GET_CALL_STATE(hold_call_id) != CSMCC_CALL_HOLD_REQ)
   {
      return CSMCC_NO_ERROR;
   }
   
   if(hold_cnf_ptr->response == CSMCC_KAL_U_ONE)
   {
      /* hold successfully, update call state */
      SET_CALL_STATE(hold_call_id, CSMCC_CALL_HOLD)
   }
   else
   {
      /* hold failure, update call state */
      SET_CALL_STATE(hold_call_id, CSMCC_CALL_ACTIVE)
      
      if(hold_cnf_ptr->causeP == KAL_TRUE)
      {
         cause = hold_cnf_ptr->cause.cause_value;
      }
      else
      {
         cause = CSMCC_NO_CAUSE;
      }
   }

   kal_brief_trace (TRACE_INFO, CSMCC_TRACE_REQUEST_SAVE,
              CSMCC_PTR->cur_req,
   	        CSMCC_PTR->req_src_id,
   	        CSMCC_PTR->req_call_id );
   
   kal_brief_trace (TRACE_INFO,CSMCC_TRACE_AUX_REQUEST_SAVE,
   	        CSMCC_PTR->aux_req, CSMCC_PTR->aux_req_call_id, CSMCC_PTR->is_aux_req_processed);
   
   switch(CSMCC_PTR->cur_req)
   {

      case CSMCC_NO_REQ:
         /* when 1A and then make MO call, CSM have to hold 1A first, if user abort the MO setup before
              CSM receives hold_cnf, CSM will send L4C disc_cnf and until receiving hold_cnf, it will send
              L4C sync_ind to let MMI get call info again.             
         */   
            csmcc_send_l4c_call_sync_ind(hold_call_id);
                     
         break;      	
         
      /* ripple */
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         /* 
          * hold unsuccessfully before send CC call setup, so return
          * failure to L4C 
          */
         
         if(hold_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            kal_uint8 dealloc_call_id = CSMCC_PTR->req_call_id;
   
            csmcc_send_l4c_emergency_setup_fail(CSMCC_PTR->req_src_id,
                                                CSMCC_CMD_NOT_ALLOW );
                  
            /* deallocate call context */
            csmcc_dealloc_call_context(dealloc_call_id);    
            
            break;
         }
         
         /*
          * hold successfully before send CC call setup, so send CC call
          * setup request.
          */
          
         /* send emergency call setup to CC */
         csmcc_send_cc_emergency_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id, CSMCC_CALL_INIT)
         
         break;
         
      case CSMCC_CALL_SETUP_REQ:
         
         /* 
          * hold unsuccessfully before send CC call setup, so return
          * failure to L4C 
          */
         
         if(hold_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            kal_uint8 dealloc_call_id = CSMCC_PTR->req_call_id;
             /*mtk01602, 070606: TS11.14 12.12.2, 
            For "network currently unable to process command", additional info. 
            shall be the first byte of the cause returned by the network.*/
       #if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
	    csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            {
         	   csmcc_sat_cause |= (1<<7);
            }
       #endif
            csmcc_send_l4c_setup_fail(CSMCC_PTR->req_src_id, 
                              (kal_uint8)GET_CALL_TYPE(CSMCC_PTR->req_call_id), 
                              CSMCC_CMD_NOT_ALLOW,
                              SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                              csmcc_sat_cause,
                              0);
            
            /* deallocate call context */
            csmcc_dealloc_call_context(dealloc_call_id);
            
            break;
         }
         
         /*
          * hold successfully before send CC call setup, so send CC call
          * setup request.
          */
          
         csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id,CSMCC_CALL_INIT)
         
         break;
         
 #ifdef __EMLPP_SUPPORT__        
      case CSMCC_CALL_PREEMPT_REQ:

         /* 
          * hold pre-empted call unsuccessfully before accepting waiting 
          * call, so disconnect the pre-empted call.
          */
                   
         if(hold_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            csmcc_disc_call(hold_call_id, CM_PRE_EMPTION);            
            break;
         }

         /* 
          * hold pre-empted call successfully and then accept the 
          * waiting call 
          */

         ret_val = csmcc_find_waiting_call(&call_id);
         
         if(ret_val == CSMCC_NO_ERROR)
         {
            /* accept the waiting call */
            ret_val = csmcc_accept_mt_call(call_id);
            
            if(ret_val == CSMCC_NO_ERROR)
            {
               /* update current request */
               csmcc_update_cur_req(CSMCC_AUTO_ANSWER_REQ,
                                    CSMCC_INVALID_SRC_ID,
                                    call_id);
            }
            else
            {
               /* reset non-L4C request */
               csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
            }                                  
         }
         else
         {
            /* beause no waiting call exists, reset non-L4C request */
            csmcc_reset_cur_req(CSMCC_CALL_PREEMPT_REQ);
         }
         break;
 #endif /*__EMLPP_SUPPORT__*/         
 
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         /* in case of call swap or hold active call */
         
         if(hold_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
            {
               /* deallocate call context */
               csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);             
                              
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                        hold_cnf_ptr->cause.cause_value);
            }
            else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_HELD_CALL_REQ)
            {
               ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                         CSMCC_CALL_RETRIEVE_REQ,
                                         &retrieve_req_call_id);

               if(ret_val != CSMCC_NO_ERROR)
               {
                  /* no call in retrieve request state */
                  csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                           CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                           hold_cnf_ptr->cause.cause_value);         
               }
            }
            else
            {
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id, 
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                        hold_cnf_ptr->cause.cause_value);             
            }

            break;
         }

         /******************************************* 
          *     hold call successfully 
          *******************************************/

         if(CSMCC_PTR->aux_req == CSMCC_NO_REQ)
         {
            /* hold active call successfully, notify L4C */
            csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);                                    
         }         
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_WAITING_CALL_REQ
                 || CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
         {
            /* check if it is allowed to accept any call first */
            if(csmcc_is_allowed_accept_call() == KAL_FALSE)
            {      
               /* now it is not allowed to accept any call */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CSMCC_CALL_ACCEPT_NOT_ALLOW);         
               break;
            }

            ret_val = csmcc_accept_other_call((kal_uint8)CSMCC_PTR->aux_req, 
				                                  CSMCC_PTR->aux_req_call_id);
            
            CSMCC_PTR->is_aux_req_processed = KAL_TRUE;
            
            if(ret_val != CSMCC_NO_ERROR)
            {
               /* now it is not allowed to accept any call */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        ret_val);         
            }
         }
         else if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_HELD_CALL_REQ)
         {
            ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                      CSMCC_CALL_RETRIEVE_REQ,
                                      &retrieve_req_call_id);

            if(ret_val != CSMCC_NO_ERROR)
            {
               /* Ripple, if aux_call_id state == ACTIVE, send crss_cnf(succ), else crss_cnf(fail). */
               if(GET_CALL_STATE(CSMCC_PTR->aux_req_call_id) == CSMCC_CALL_ACTIVE)
               {
                  /* The aux_call has been retrieved succ. */
               csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);                     
            }
               else
               {
                  /* no call is at retrieve_req, and it is not active, it must be released. */
                  csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ,
                                        CM_SS_ERR_SS_ERRORSTATUS);                              
               }
            }
         }
         break;
      
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         /* in case of call swap, nothing to do */
         
         break;

#ifdef __SAT__

      case CSMCC_SAT_SETUP_REQ:
         /* 
          * hold unsuccessfully before send CC call setup, so return
          * failure to L4C 
          */
         
         if(hold_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            /* deallocate call context */
            csmcc_dealloc_call_context(CSMCC_PTR->req_call_id);
            
            csmcc_sat_cause = (kal_uint8)cause;
            if(csmcc_sat_cause != CSMCC_NO_CAUSE)
            	{
            		csmcc_sat_cause |= (1<<7);
            	}
            /* [Cosine 070310]Send add_info to SIM */
            csmcc_send_l4c_sat_setup_fail(CSMCC_PTR->req_src_id,
                                          SAT_NET_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                          /*SAT_NO_SPECIFIC_CAUSE*/csmcc_sat_cause,
                                          CSMCC_NO_CAUSE,
                                          CSMCC_PTR->req_call_id);

            break;
         }
         
         /*
          * hold successfully before send CC call setup, so send CC call
          * setup request.
          */
          
         csmcc_send_cc_setup_req(CSMCC_PTR->req_call_id);
         
         SET_CALL_STATE(CSMCC_PTR->req_call_id,CSMCC_CALL_INIT)
         
         break;

#endif /* __SAT__ */

      default:
         //ASSERT(KAL_FALSE);
         break;
   }
   
   /* detach speech if necessary */
   csmcc_detach_speech();

   return CSMCC_NO_ERROR;

} /* end of mncc_hold_cnf_dlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_retrieve_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process call retrieve acknowledge from CC.
*
* CALLS  
*	mncc_retrieve_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_retrieve_cnf_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 retrieve_call_id;
   mncc_retrieve_cnf_struct *retrieve_cnf_ptr;
   
   retrieve_cnf_ptr = (mncc_retrieve_cnf_struct*)local_para_ptr;
   retrieve_call_id = retrieve_cnf_ptr->call_id;
   
   if(GET_CALL_STATE(retrieve_call_id) != CSMCC_CALL_RETRIEVE_REQ)
   {
      return CSMCC_NO_ERROR;
   }
      
   if(retrieve_cnf_ptr->response == CSMCC_KAL_U_ONE)
   {
      /* retrieve successfully, update call state */
      SET_CALL_STATE(retrieve_call_id,CSMCC_CALL_ACTIVE)      
   }
   else
   {
      /* hold failure, update call state */
      SET_CALL_STATE(retrieve_call_id, CSMCC_CALL_HOLD)
   }
   
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_REL_ACTIVE_AND_ACCEPT_REQ:
         
         /*
          * single held call exists, which is retrieved 
          */
         
         if(retrieve_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {
            /* call retrieve failure, notify L4C */
            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                     CSMCC_REL_ACTIVE_AND_ACCEPT_REQ, 
                                     retrieve_cnf_ptr->cause.cause_value);
         }
         else
         {
            /* call retrieve success, notify L4C */
            csmcc_send_l4c_crss_succ(CSMCC_REL_ACTIVE_AND_ACCEPT_REQ);
         }
                  
         break;
         
      case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:

         /* if no call is at hold request state, indicate L4C reslt */
         if(csmcc_find_call(CSMCC_ORIG_NONE, 
                            CSMCC_CALL_HOLD_REQ, 
                            NULL) != CSMCC_NO_ERROR)
         {          
            if(retrieve_cnf_ptr->response == CSMCC_KAL_U_ZERO)
            {
               /* call retrieve failure, notify L4C */
               csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                        CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ, 
                                        retrieve_cnf_ptr->cause.cause_value);                                     
            }
            else
            {
               /* call retrieve success, notify L4C */               
               csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ);         
            }            
         }
         
         break;
               
      case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ:

         /*
          * only one held call exists, which is retrieved 
          */
          
         if(retrieve_cnf_ptr->response == CSMCC_KAL_U_ZERO)
         {            
            /* call retrieve failure, notify L4C */
            
            csmcc_send_l4c_crss_fail(CSMCC_PTR->req_src_id,
                                     CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ, 
                                     retrieve_cnf_ptr->cause.cause_value);            
         }
         else
         {         
            /* call retrieve success, notify L4C */
            csmcc_send_l4c_crss_succ(CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ);         
         }
         
         break;      
         
      default:
         //ASSERT(KAL_FALSE);
         break;
   }
      
   if(GET_CALL_STATE(retrieve_call_id) == CSMCC_CALL_ACTIVE)
   {
      /* attach speech if necessary */   
      csmcc_attach_speech();
   }

   return CSMCC_NO_ERROR;

} /* end of mncc_retrieve_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	mncc_facility_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process facility indication from CC.
*
* CALLS  
*	mncc_facility_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t mncc_facility_ind_hdlr(local_para_struct *local_para_ptr)
{
   mncc_facility_ind_struct *fac_ind_ptr;
   
   fac_ind_ptr = (mncc_facility_ind_struct*)local_para_ptr;
   
   if(GET_CALL_STATE(fac_ind_ptr->call_id) == CSMCC_CALL_IDLE)
   {
      return CSMCC_NO_ERROR;
   }
   
   if(fac_ind_ptr->facilityP == KAL_TRUE)
   {
      csmcc_peer_fac_ie_hdlr(fac_ind_ptr->call_id, &(fac_ind_ptr->facility));
   }
   
   return CSMCC_NO_ERROR;
} /* end of mncc_facility_ind_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_dtmf_pause_timeout_handler
* DESCRIPTION                                                           
*    This function used to handle time-out of pausewhen sending DTMF.
*
* CALLS  
*	csmcc_dtmf_pause_timeout_handler(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_dtmf_pause_timeout_handler(kal_uint32 data)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;
   csmcc_ret_t ret_val;
   kal_uint8   call_id;

   timer_ptr = (csmcc_timer_struct *)data;
   call_id = timer_ptr->call_id;
   
   kal_trace(TRACE_FUNC,
             FN_ENTRY_csmcc_dtmf_pause_timeout_handler);
             
   CSMCC_PTR->csmcc_timer_pool[CSMCC_DTMF_PAUSE_TIMER].call_id = CSMCC_INVALID_CALL_ID;
   
   ret_val = csmcc_send_auto_dtmf(call_id);
   
   if(ret_val != CSMCC_NO_ERROR)
   {
         /* no dtmf tone is waiting to be sent */
   #ifdef __SAT__
          if (CSMCC_PTR->is_sat_dtmf == KAL_TRUE)
         {            
            /* Send sat_send_dtmf_cnf */
            csmcc_send_l4c_sat_send_dtmf_cnf(CSMCC_PTR->dtmf_src_id, 
                                                        SAT_CMD_PERFORMED_SUCCESSFULLY, 
                                                        SAT_NO_SPECIFIC_CAUSE);
         
            CSMCC_PTR->is_sat_dtmf = KAL_FALSE;
            /* DUMA00112321 remove dtmf reset */
            //CSMCC_PTR->dtmf_src_id = CSMCC_INVALID_SRC_ID;            
         }
         else
   #endif /* __SAT__ */
         {
         	csmcc_send_l4c_auto_dtmf_complete_ind(call_id);         
         }

         csmcc_stop_auto_dtmf(call_id);
              
   }

   kal_trace(TRACE_FUNC,
             FN_EXIT_csmcc_dtmf_pause_timeout_handler);
   
} /* csmcc_dtmf_pause_timeout_handler */
#ifdef __AOC_SUPPORT__

/*************************************************************************
* FUNCTION                                                            
*	csmcc_aoc_timeout_handler
* DESCRIPTION                                                           
*    This function used to handle timeout of AoC to increase ACM to SIM.
*
* CALLS  
*	csmcc_aoc_timeout_handler(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_aoc_timeout_handler(kal_uint32 data)
{
   CSMCC_PTR_G_TO_L
   csmcc_timer_struct *timer_ptr;
   kal_uint8  call_id;

   timer_ptr = (csmcc_timer_struct *)data;
   call_id = timer_ptr->call_id;
  
   kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_aoc_timeout_handler);
   /*MAUI_02574027*/
   CSMCC_PTR->acm =  csmcc_get_cc_acm(CSMCC_PTR->csmcc_sim_interface); 

   csmcc_increase_acm();

   if(CSMCC_PTR->updated_cdur_present)
   {
       if(CSMCC_PTR->cdur < CSMCC_PTR->updated_cdur)
       {
           CSMCC_PTR->cdur = CSMCC_PTR->updated_cdur;
       }
       CSMCC_PTR->updated_cdur_present = KAL_FALSE;
       CSMCC_PTR->updated_cdur = 0;
   }

   if(CSMCC_PTR->cdur > 0)	
   {   
       csmcc_start_aoc_timer(call_id, CSMCC_PTR->cdur);
   }

   kal_trace(TRACE_FUNC, FN_EXIT_csmcc_aoc_timeout_handler);	  
} /* csmcc_aoc_timeout_handler */
#endif /*__AOC_SUPPORT__*/

/*************************************************************************
* FUNCTION                                                            
*	csmcc_rlc_timeout_handler
* DESCRIPTION                                                           
*    This function used to handle timeout of RLC timer.
*
* CALLS  
*	csmcc_rlc_timeout_handler(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_rlc_timeout_handler(kal_uint32 data)
{
  //Cosine, 0820
  csmcc_timer_struct *timer_ptr;
  mncc_rel_comp_req_struct *mncc_rel_comp_req_ptr;
  kal_uint8 call_id;
    
  timer_ptr = (csmcc_timer_struct *)data;
  call_id = timer_ptr->call_id;

  kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_rlc_timeout_handler);
  kal_trace(TRACE_GROUP_1, CSMCC_RLC_REQ_CALL_ID, timer_ptr->call_id);

  if(CALL_DATA(call_id, csmcc_rlc_status) == WAIT_FOR_SENDING_RLC)
  {
    CSMCC_CONSTRUCT_LOCAL_PARA(mncc_rel_comp_req_ptr, 
        	                     mncc_rel_comp_req_struct) 
   
    mncc_rel_comp_req_ptr->call_id = call_id;
    mncc_rel_comp_req_ptr->ti = CALL_DATA(call_id,ti);  
    mncc_rel_comp_req_ptr->cause.cause_value = CM_NORMAL_CALL_CLR;
   
    csmcc_send_ilm(mncc_rel_comp_req_ptr, 
                   MSG_ID_MNCC_REL_COMP_REQ, 
                   MOD_CC,
                   NULL);

    csmcc_call_clear_hdlr(call_id, CM_NORMAL_CALL_CLR,0,CSMCC_NO_CAUSE);
    CALL_DATA(call_id, csmcc_rlc_status) = RLC_TIMER_INIT;
  }
  else
  {
    CALL_DATA(call_id, csmcc_rlc_status) = RLC_TIMER_EXPIRE;  	
  }

  kal_trace(TRACE_FUNC, FN_EXIT_csmcc_rlc_timeout_handler);

} 
#ifdef __CSMCC_CALLCONFIRM_TIMER__
/*************************************************************************
* FUNCTION                                                            
*csmcc_call_confirm_timeout_handler
* DESCRIPTION                                                           
*    This function used to handle timeout of call confirm timer.
*
* CALLS  
*csmcc_call_confirm_timeout_handler(kal_uint8 call_id)
*
* PARAMETERS
*	call_id	IN	first variable, used as input
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_call_confirm_timeout_handler(kal_uint32 data)
{
  CSMCC_PTR_G_TO_L
  csmcc_timer_struct *timer_ptr;
  kal_uint8 call_id;
    
  timer_ptr = (csmcc_timer_struct *)data;
  call_id = timer_ptr->call_id;

  timer_ptr->call_id = CSMCC_INVALID_CALL_ID;
  timer_ptr->event_id = NULL;

  kal_trace(TRACE_FUNC, FN_ENTRY_csmcc_call_confirm_timeout_handler);
  if(CSMCC_PTR->cur_non_l4c_req == CSMCC_ALERTING_REQ &&
         CSMCC_PTR->cur_non_l4c_req_call_id == call_id )
  {
      csmcc_disc_call(call_id, CM_RECOVERY_ON_TIMER_EXPIRY);
  }
} 
#endif 
/*************************************************************************
* FUNCTION                                                            
*	csmcc_timer_expiry_hdlr
* DESCRIPTION                                                           
*
*  This is used to handle stack timer expiry and call each timer expiry
*  handler associated with each time-out event
* CALLS  
*                           
* PARAMETERS
*	
* RETURNS
*	
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_timer_expiry_hdlr(void) 
{
   CSMCC_PTR_G_TO_L
   evshed_timer_handler(CSMCC_PTR->csmcc_timer.evshed_ptr);
   return (CSMCC_NO_ERROR);

}	/* End of csmcc_timer_expiry_hdlr */

#ifdef __SAT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_process_sat_call
* DESCRIPTION                                                           
*   This procedure is used to process the SIM proactive MO call 
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
void csmcc_process_sat_call(void)
{
   CSMCC_PTR_G_TO_L
   csmcc_call_context_struct *call_context_ptr;
   csmcc_ret_t ret_val;
   kal_uint8 active_call_id, call_id;
   

   if(CSMCC_PTR->cur_req != CSMCC_SAT_SETUP_REQ)
   {
      return;
   }      
   
   call_id = CSMCC_PTR->req_call_id;
   call_context_ptr = &(CALL_ENTRY(call_id));
   
   switch(call_context_ptr->sat_call_type)
   {
      /*mtk01602, 070717: [MAUI_00415491] For sat_call_type = '06' to 'FF', 
                           treated it as '00', SETUP_CALL_IF_NO_ANOTHER_CALL*/
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
      case SETUP_CALL_PUT_ANOTHER_HOLD:    
      case SETUP_CALL_WITH_REDIAL_PUT_ANOTHER_HOLD:
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                   CSMCC_CALL_ACTIVE,
                                   &active_call_id);

         if(ret_val == CSMCC_NO_ERROR)
         {
            /* an active call exists, hold it first 
             * the active call must be TS11 service, because the check has been 
             * done above.
             */
            csmcc_hold_active_call(active_call_id);              
            break;
         }

         /* no active call exists, so send cc setup req */
         if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
         	csmcc_send_cc_emergency_setup_req(call_id);
         else
	        csmcc_send_cc_setup_req(call_id);

         SET_CALL_STATE(call_id, CSMCC_CALL_INIT)

         break;

      case SETUP_CALL_DISCON_ANOTHER:    
      case SETUP_CALL_WITH_REDIAL_DISCON_ANOTHER:
         /* Ripple Cheng: set False: not to release itself.*/
         ret_val = csmcc_rel_all(KAL_FALSE); 

         if (ret_val != CSMCC_NO_ERROR ) 
         {
            /* No calls exist, so not need do disc proc, can send setup_req now. */
        if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
         	    csmcc_send_cc_emergency_setup_req(call_id);
         	else
            	    csmcc_send_cc_setup_req(call_id);
            
            SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
         }

         break;     
      
      default:
          /*mtk01602, 070717: [MAUI_00415491] For sat_call_type = '06' to 'FF', 
                           treated it as '00', SETUP_CALL_IF_NO_ANOTHER_CALL*/
         /* invalid value range */
         //ASSERT(KAL_FALSE);
         ret_val = csmcc_find_call(CSMCC_ORIG_NONE,
                                   CSMCC_CALL_ACTIVE,
                                   &active_call_id);

         if(ret_val == CSMCC_NO_ERROR)
         {
            csmcc_dealloc_call_context(call_id);
                        
            /* busy on another call, send reject back */
            csmcc_send_l4c_sat_setup_fail( CSMCC_PTR->req_src_id, 
                                          SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                          SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                          CSMCC_NO_CAUSE,
                                          CSMCC_PTR->req_call_id);            
            break;
         }

         /* no busy call exists, send cc call setup req */
         csmcc_send_cc_setup_req(call_id);

         SET_CALL_STATE(call_id, CSMCC_CALL_INIT)

         break;
   }

}

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_sat_setup_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the SIM proactive MO call setup 
*   request from L4C.
*
* CALLS  
*	l4ccsm_cc_sat_setup_req_hdlr(local_para_struct *local_para_ptr,
*                               peer_buff_struct *peer_buff_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
*  peer_buff_ptr     IN second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_sat_setup_req_hdlr(local_para_struct *local_para_ptr,
                                              peer_buff_struct *peer_buff_ptr)
{ 
   /* local var declare */
   CSMCC_PTR_G_TO_L
   csmcc_ret_t ret_val;
   kal_uint8 call_id; 
   csmcc_call_type_enum call_type;
 
   l4ccsm_cc_sat_setup_req_struct *sat_setup_req_ptr;  
   
   sat_setup_req_ptr = (l4ccsm_cc_sat_setup_req_struct*)local_para_ptr;
   CSMCC_PTR->size_of_ccp_temp = 0;
   /*Michael: hold the ccp form L4C, and send it back when setup fail*/ 
   if(sat_setup_req_ptr->ccp_present == KAL_TRUE)
   {
   kal_mem_set(CSMCC_PTR->ccp_temp, 
                  0xff, 
                  15);            
   kal_mem_cpy(CSMCC_PTR->ccp_temp, 
                 sat_setup_req_ptr->ccp, 
                 sat_setup_req_ptr->size_of_ccp);
   CSMCC_PTR->size_of_ccp_temp = sat_setup_req_ptr->size_of_ccp;
   }

   if (CSMCC_PTR->mscap.disable_call == KAL_TRUE)
   {

       csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                          SAT_CMD_BEYOND_ME_CAP,
                                          SAT_NO_SPECIFIC_CAUSE,
                                          CSMCC_CMD_NOT_ALLOW,
                                          CSMCC_INVALID_CALL_ID);
            
       return CSMCC_NO_ERROR;
   }

   /* alloate call id */
   ret_val = csmcc_alloc_call_context(&call_id);

   if(ret_val != CSMCC_NO_ERROR)
   {
      /* call id alloc failure */
      csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                    SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                    SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                    CSMCC_NO_CAUSE,
                                    CSMCC_INVALID_CALL_ID);
      return CSMCC_NO_ERROR;
   }

   do
   {   
      /*if the MS is in startup, sending setup fail with cause CM_TEMPORARY_FAILURE, let l4c retry*/
      if(CSMCC_PTR->cur_req == CSMCC_STARTUP_REQ)
      {
         csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                       SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       CM_TEMPORARY_FAILURE,
                                       CSMCC_INVALID_CALL_ID);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }

      if(csmcc_is_allowed_setup_call(KAL_FALSE /* full checking */) == KAL_FALSE)
      {
         /* call setup is not allowed */
         csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                       SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                       SAT_ME_CURRENTLY_BUSY_ON_CALL,
                                       CSMCC_NO_CAUSE,
                                       CSMCC_INVALID_CALL_ID);
         
         //return CSMCC_NO_ERROR;
         ret_val = CSMCC_ERROR;
         break;
      }

      if(sat_setup_req_ptr->is_emergency_call == KAL_FALSE)//mtk01602, 070831
      {
#ifdef __AOC_SUPPORT__
         if(csmcc_is_acm_exceed() == KAL_TRUE)
         {
            /* ACM >= ACMMAX */
            csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                          SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                          SAT_NO_SPECIFIC_CAUSE,
                                          CSMCC_NO_CAUSE,
                                          CSMCC_INVALID_CALL_ID);
         
            //return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
          }
#endif/*__AOC_SUPPORT__*/
      #ifdef __SAT_CALL_LINE_CEHCK__
         if(sat_setup_req_ptr->ccp_present == KAL_TRUE)
         {
         	  kal_uint8 sat_call_line;
   	
      	  sat_call_line = sat_setup_req_ptr->ccp[1] & CSMCC_THREE_BIT_MASK	;
   	
   	  if((sat_call_line == CSMCC_ITC_SPEECH && CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2)
   	  	  || (sat_call_line == CSMCC_ITC_AUX_SPEECH && CSMCC_PTR->als.line_id == CSMCC_ALS_LINE1))
   	   {
      		/* SAT setup call with line different form user setting form MMI*/
      		csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                    SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR,//0x39
                                    0x02,//0x02: the type of request had changed
                                    CSMCC_NO_CAUSE,
                                    CSMCC_INVALID_CALL_ID);
      
      		//return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
   	   }
      }   
#endif /*__SAT_CALL_LINE_CEHCK__*/   
   
#ifndef __SUBADDR_SUPPORT__
      if(KAL_TRUE==sat_setup_req_ptr->called_sub_addr_present)
      {
         csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                       SAT_CMD_BEYOND_ME_CAP,  /*MAUI_02876296:not support subaddress, send sat fail with cause*/
                                       SAT_NO_SPECIFIC_CAUSE,
                                       CSMCC_NO_CAUSE,
                                       CSMCC_INVALID_CALL_ID);
         

         ret_val = CSMCC_ERROR;
         break;
      }
#endif
    }
      /* reset bearer capability and bearer capability negotiation */      
      csmcc_reset_bc();

      if(sat_setup_req_ptr->ccp_present == KAL_TRUE
         && sat_setup_req_ptr->size_of_ccp > 0)
      {   
         if(csmcc_is_sat_call_compat(call_id, 
                                  sat_setup_req_ptr->ccp,
                                  sat_setup_req_ptr->size_of_ccp,
                                  NULL,
                                  0,
                                  KAL_FALSE,
                                  0) == KAL_FALSE)
         {
            //csmcc_dealloc_call_context(call_id);
                     
            /* bearer capability negotiation fail */
            csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                       SAT_CMD_BEYOND_ME_CAP,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       CSMCC_NO_CAUSE,
                                       CSMCC_INVALID_CALL_ID);
         
            //return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
         }
      }
      else
      {
         
         /* if no ccp in sat setup request, default call type is voice */
         call_type = CSMCC_VOICE_CALL;
      #ifdef __CPHS__
         if(sat_setup_req_ptr->is_emergency_call == KAL_FALSE)
               call_type = ( CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2 ) ? 
                            CSMCC_AUX_VOICE_CALL : CSMCC_VOICE_CALL;
      #endif
         
         ret_val = csmcc_fill_bc(call_id, 
                                 sat_setup_req_ptr->src_id,
                                 call_type,
                                 0);

         if(ret_val != CSMCC_NO_ERROR)
         {         
            /* bearer capability is not authorized */
            csmcc_send_l4c_sat_setup_fail(sat_setup_req_ptr->src_id,
                                       SAT_CMD_BEYOND_ME_CAP,
                                       SAT_NO_SPECIFIC_CAUSE,
                                       CSMCC_NO_CAUSE,
                                       call_id);
               
            /* deallocate call context */
            //csmcc_dealloc_call_context(call_id);
                                                  
            //return CSMCC_NO_ERROR;
            ret_val = CSMCC_ERROR;
            break;
         }   
      }
   }while(0);

   if (ret_val == CSMCC_NO_ERROR)
   {
      /* save request */
      csmcc_save_cur_req(CSMCC_SAT_SETUP_REQ,
                         sat_setup_req_ptr->src_id,
                         call_id);

      /* fill call context*/
      csmcc_fill_sat_call_context(call_id, 
                                  sat_setup_req_ptr,
                                  peer_buff_ptr);

      /* for ECPI: report call id assign here */
      csmcc_send_l4c_cpi_ind(call_id,
                           CSMCC_MO_CALL_ID_ASSIGN_MSG,
                           KAL_FALSE,
                           KAL_FALSE,
                           CSMCC_NO_CAUSE,
                           0);

      /* query SIM if support call control by sim, if support call control 
         by sim, send call control by sim request to sim. If this is a redial 
         call, call control by sim request is not sent */   

      /*Michael: if l4c_retry = KAL_FALSE, sending SAT_CALL_CTRL_BY_SIM_REQ*/

      /*mtk01602: TS11.14 9.1.1, when the user is dialling "112" or an emergency call code stored in EFECC, 
      for which the ME sets up an emergency call instead of passing the call set-up details to the SIM.*/
      if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_CALL_CONTROL) == SERVICE_SUPPORT
      	&& sat_setup_req_ptr->is_emergency_call == KAL_FALSE) //mtk01602, 070831
      {
      	switch(sat_setup_req_ptr->type_of_modification)
      	{
      	    case SIMCALLCONTROL_NOMODIFY:
                       csmcc_send_sim_call_ctrl_req(call_id, KAL_TRUE);
                       return CSMCC_NO_ERROR;
      					  
      	    case SIMCALLCONTROL_SSTOCALL:
      	    case SIMCALLCONTROL_USSDTOCALL:
      		 /*mtk01602: this is already a modified call, no need to send call ctrl again*/
      		 break; 					

      	    default:
      		 kal_brief_trace(TRACE_ERROR, CSMCC_TRACE_SAT_TYPE_OF_MODIFICATION,(sat_setup_req_ptr->type_of_modification));
      		 break;
      	}
      }
      csmcc_process_sat_call();
   }
   else if (ret_val == CSMCC_ERROR)
   {
      csmcc_dealloc_call_context(call_id);
   }
   else
   {
      ASSERT(KAL_FALSE);
   }

   return CSMCC_NO_ERROR;

} /* l4ccsm_cc_sat_setup_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_sat_call_ctrl_by_sim_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the call cotnrol by SIM confirmation.
*
* CALLS  
*	csmcc_sat_call_ctrl_by_sim_cnf_hdlr(local_para_struct *local_para_ptr,
*                                      peer_buff_struct *peer_buff_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_sat_call_ctrl_by_sim_cnf_hdlr(local_para_struct *local_para_ptr,
                                                     peer_buff_struct *peer_buff_ptr)
{   
   /* local var delcare */
   CSMCC_PTR_G_TO_L
   sat_call_ctrl_by_sim_cnf_struct *call_ctrl_cnf_ptr;
   kal_uint8 call_id;
   kal_uint8 active_call_id;
   
   call_ctrl_cnf_ptr = (sat_call_ctrl_by_sim_cnf_struct*)local_para_ptr;
   
   //ASSERT(call_ctrl_cnf_ptr->type == SAT_SETUP_CALL);
   
   call_id = CSMCC_PTR->req_call_id;

   if (call_id == CSMCC_INVALID_CALL_ID)
   {
      /* MAUI_01545183 
         [CSMCC][Fixbug] csmcc_sat_call_ctrl_by_sim_cnf_hdlr need not reset context once the call has been released 
         1. if original MO state is IDLE, csmcc receive disconnect reqeust 
            will response csmcc_send_l4c_disc_succ(call_id) immediately,
            and then reset the current requet and context.
            So, here need not reset the context again.
         2. in above case, if MMI use ATH to disconnect the call, it means
            MMI doesn't have call id, so CSMCC need not send call cnf or rel ind
       */
      return CSMCC_NO_ERROR;
   }

   if(call_ctrl_cnf_ptr->res == SAT_NOT_ALLOWED
      || call_ctrl_cnf_ptr->res == SAT_SIM_ERROR
      || (call_ctrl_cnf_ptr->res == SAT_ALLOWED_WITH_MODIFICATION
      && call_ctrl_cnf_ptr->type !=SAT_SETUP_CALL))
   {      
      /* SIM responses failure */
      if(CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ)
      {
         csmcc_send_l4c_setup_fail(CALL_DATA(call_id, src_id),
                                   (kal_uint8)GET_CALL_TYPE(call_id),
                                   CSMCC_SAT_CALL_CTRL_REJECTED, /* change cause for MAUI_01300426 */
                                   SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
                                   SAT_NO_SPECIFIC_CAUSE,
                                   0);
      }
      else if(CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ)
      {
         if((call_ctrl_cnf_ptr->res == SAT_ALLOWED_WITH_MODIFICATION && call_ctrl_cnf_ptr->type !=SAT_SETUP_CALL))
         {
	     csmcc_send_l4c_sat_setup_fail(CALL_DATA(call_id, src_id),
	 	                           SAT_CMD_PERFORMED_BUT_MODIFIED_CC_BY_SIM,
			                   0x01,
			                   CSMCC_NO_CAUSE,
			                   call_id); /* SIM request the value. */

         }
	 else if(call_ctrl_cnf_ptr->res == SAT_NOT_ALLOWED)
	 {
             /* MAUI_01300426, add new cause when call rejected by call control */
             csmcc_send_l4c_sat_setup_fail(CALL_DATA(call_id, src_id),
                                           SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR,
                                           0x01,
                                           CSMCC_SAT_CALL_CTRL_REJECTED,
                                           call_id);
	 }
	 else
	 {
             csmcc_send_l4c_sat_setup_fail(CALL_DATA(call_id, src_id),
                                           SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR,
                                           0x01,
                                           CSMCC_NO_CAUSE,
                                           call_id); /* SIM request the value. */
	 }
      }
                                
      csmcc_dealloc_call_context(call_id);                                      
      
      return CSMCC_NO_ERROR;
   }
   
   if(call_ctrl_cnf_ptr->res == SAT_ALLOWED_WITH_MODIFICATION)
   {
      /* SIM response success, then ccp if compatible */
      if(call_ctrl_cnf_ptr->size_of_ccp1 > 0 
         && csmcc_is_sat_call_compat(call_id, 
                          call_ctrl_cnf_ptr->ccp1,
                          call_ctrl_cnf_ptr->size_of_ccp1,
                          call_ctrl_cnf_ptr->ccp2,
                          call_ctrl_cnf_ptr->size_of_ccp2,
                          (kal_bool)(call_ctrl_cnf_ptr->is_bc_repeat_ind_avail),
                          call_ctrl_cnf_ptr->bc_repeat_ind) == KAL_FALSE)
      {         
         if(CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ)
         {
            csmcc_send_l4c_setup_fail(CALL_DATA(call_id, src_id),
                                      (kal_uint8)GET_CALL_TYPE(call_id),
                                      CM_BEARER_CAP_NOT_AUTHORISED,
                                      SAT_CMD_BEYOND_ME_CAP,
                                      SAT_NO_SPECIFIC_CAUSE,
                                      0);
         }
         else if(CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ)
         {
            csmcc_send_l4c_sat_setup_fail(CALL_DATA(call_id, src_id),
                                    SAT_CMD_BEYOND_ME_CAP,
                                    SAT_NO_SPECIFIC_CAUSE,
                                    CSMCC_NO_CAUSE,
                                    call_id);
         }
         csmcc_dealloc_call_context(call_id);                                            
                                            
         return CSMCC_NO_ERROR;
      }

#ifdef __SAT_CALL_LINE_CEHCK__
   if(call_ctrl_cnf_ptr->size_of_ccp1 > 0)
   {  
   	kal_uint8 sat_call_line;
	
   	sat_call_line = call_ctrl_cnf_ptr->ccp1[1] & CSMCC_THREE_BIT_MASK;
		
	if((sat_call_line == CSMCC_ITC_SPEECH && CSMCC_PTR->als.line_id == CSMCC_ALS_LINE2)
		|| (sat_call_line == CSMCC_ITC_AUX_SPEECH && CSMCC_PTR->als.line_id == CSMCC_ALS_LINE1))
	{
      		/* SAT setup call with line different form user setting form MMI*/
      		csmcc_send_l4c_sat_setup_fail(CALL_DATA(call_id, src_id),
                                    SAT_INTERACTION_WITH_CALL_CTRL_BY_SIM_PERMANENT_ERROR,//0x39
                                    0x02,//0x02: the type of request had changed
                                    CSMCC_NO_CAUSE,
                                    call_id);
			
      		csmcc_dealloc_call_context(call_id);   
			
      		return CSMCC_NO_ERROR;		
	}
   }   
#endif /*__SAT_CALL_LINE_CEHCK__*/   

      /*Michael: hold the ccp form L4C, and send it back when setup fail*/ 
      if(CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ && call_ctrl_cnf_ptr->size_of_ccp1 > 0)
      {
      /*CSMCC_PTR->ccp_temp_ptr =  (kal_uint8*)get_ctrl_buffer(sizeof(l4ccsm_cc_sat_setup_req_struct.ccp));*/
      kal_mem_set(CSMCC_PTR->ccp_temp, 
                     0xff, 
                     15);            
      kal_mem_cpy(CSMCC_PTR->ccp_temp, 
                    call_ctrl_cnf_ptr->ccp1, 
                    call_ctrl_cnf_ptr->size_of_ccp1);
      CSMCC_PTR->size_of_ccp_temp = call_ctrl_cnf_ptr->size_of_ccp1;
      }
      /* ccp is compatible, then update call context and send cc setup request */
      csmcc_update_sat_call_context(call_id, 
                                    call_ctrl_cnf_ptr,
                                    peer_buff_ptr);
   }
   
   if(CSMCC_PTR->cur_req == CSMCC_CALL_SETUP_REQ)
   {
      /* check if it is necessary to put active call on hold first. */
      if(csmcc_find_call(CSMCC_ORIG_NONE, 
                         CSMCC_CALL_ACTIVE, 
                         &active_call_id) == CSMCC_NO_ERROR)
      {      
         /* put active call (TS11) on hold */
         csmcc_hold_active_call(active_call_id);
      
         return CSMCC_NO_ERROR;
      }
   
      if (call_id == CSMCC_PTR->csmcc_emergency_call_id)
      {
         /* if sim modify this call to emergency call */
         csmcc_send_cc_emergency_setup_req(call_id);
      }
      else
      {
         csmcc_send_cc_setup_req(call_id);
      }

      SET_CALL_STATE(call_id, CSMCC_CALL_INIT)
   }
   else if(CSMCC_PTR->cur_req == CSMCC_SAT_SETUP_REQ)
   {
      csmcc_process_sat_call();
   }
   
   return CSMCC_NO_ERROR;

} /* end of csmcc_sat_call_ctrl_by_sim_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_sat_file_change_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process SAT file change indication
*
* CALLS  
*	csmcc_sat_file_change_ind_hdlr(local_para_struct *local_para_ptr)
*
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_sat_file_change_ind_hdlr(local_para_struct *local_para_ptr)
{   
   CSMCC_PTR_G_TO_L
   sat_file_change_ind_struct *sat_file_chg_ind_ptr;
   kal_uint8 i;

   sat_file_chg_ind_ptr = (sat_file_change_ind_struct*)local_para_ptr;
   //ALPS00437346, if there exist any sim file to be read at this moment, means there is duplicate sim file change req
   if(CSMCC_GET_SIM_READ_FLAG(CSMCC_ALL_FILE_MASK) == KAL_TRUE)
   {
   	CSMCC_PTR->dup_sim_file_change_req = KAL_TRUE;
   }

   CSMCC_RESET_SIM_READ_FLAG

   if(sat_file_chg_ind_ptr->is_full_changed == KAL_TRUE)
   {
#ifdef __AOC_SUPPORT__
      if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_AOC) == SERVICE_SUPPORT)
      {
         CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK | CSMCC_FILE_ACMMAX_MASK)
      }
#endif/*__AOC_SUPPORT__*/
      if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_EMLPP) == SERVICE_SUPPORT)
      {
         CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK | CSMCC_FILE_AAEM_MASK)
      }
   }
   else
   {
      for(i = 0; i < sat_file_chg_ind_ptr->num_of_file; i++)
      {
         switch(sat_file_chg_ind_ptr->file_list[i])
         {
#ifdef __AOC_SUPPORT__
            case FILE_ACM_IDX:
               if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_AOC) == SERVICE_SUPPORT)
               {
                  CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK)
               }
               break;
            case FILE_ACMAX_IDX:
               if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_AOC) == SERVICE_SUPPORT)
               {
                  CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_ACMMAX_MASK)
               }
               break;
#endif/*__AOC_SUPPORT__*/
            case FILE_EMLPP_IDX:
               if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_EMLPP) == SERVICE_SUPPORT)
               {
                  CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK)
               }
               break;
            case FILE_AAEM_IDX:
               if(CSMCC_SIM_SERVICE_TABLE_QUERY(SERVICE_EMLPP) == SERVICE_SUPPORT)
               {
                  CSMCC_SET_SIM_READ_FLAG(CSMCC_FILE_AAEM_MASK)
               }
               break;
            default:
               /* skip */
               break;
         }
      }
   }

   //ALPS00437346, if there is confirm to be received, return,
   //                     let the confirm trigger "sim file reading"
   if(CSMCC_PTR->dup_sim_file_change_req != KAL_TRUE)
   {
   
#ifdef __AOC_SUPPORT__
   if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_ACM_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_ACM_IDX, ACM_LEN);
   }
   else if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_ACMMAX_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_ACMAX_IDX, ACMMAX_LEN);
   }
   else
#endif/*__AOC_SUPPORT__*/
   {
      if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_EMLPP_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_EMLPP_IDX, EMLPP_LEN);
   }
   else if(CSMCC_GET_SIM_READ_FLAG(CSMCC_FILE_AAEM_MASK) == KAL_TRUE)
   {
      csmcc_send_sim_read_req(FILE_AAEM_IDX, AAEM_LEN);
   }
   else
   {
      /* no sim file needed to be update, response success */
      csmcc_send_sim_file_change_res(KAL_TRUE);
      return CSMCC_NO_ERROR;
   }
   }

   }
   
   /* MAUI_01617512 */
   csmcc_save_prev_req(CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id, CSMCC_PTR->req_call_id);

   /* ALPS00439699 : add new flag to keep SAT file change request */
   CSMCC_PTR->sat_file_change_req = KAL_TRUE; 

   return CSMCC_NO_ERROR;

} /* end of csmcc_sat_file_change_ind_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_sat_send_dtmf_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process sending DTMF request from SAT.
*
* CALLS  
*	csmcc_send_auto_dtmf
* PARAMETERS
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_sat_send_dtmf_req_hdlr(local_para_struct *local_para_ptr)
{
   /* local var declare */
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_sat_send_dtmf_req_struct *sat_dtmf_req_ptr;
   kal_uint8 call_id, call_index, no_dtmf;
   csmcc_ret_t ret_val;

   sat_dtmf_req_ptr = (l4ccsm_cc_sat_send_dtmf_req_struct*)local_para_ptr;   
   no_dtmf = sat_dtmf_req_ptr->no_dtmf;
   
   if((csmcc_find_call(CSMCC_ORIG_NONE, CSMCC_CALL_ACTIVE, &call_id) != CSMCC_NO_ERROR)
      || (CSMCC_PTR->attach_status != CSMCC_SPEECH_ON)
      || (GET_MPTY_STATE(call_id) == CSMCC_MPTY_ACTIVE)
      || (no_dtmf == 0))
   {
      /* no active call exists, or speech is not turned on, return fail. */     
      csmcc_send_l4c_sat_send_dtmf_cnf(sat_dtmf_req_ptr->src_id, 
                                                   SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD, 
                                                   SAT_NOT_IN_SPEECH_MODE);
      return CSMCC_NO_ERROR;
   }

   for (call_index=1; call_index < CSMCC_MAX_CALL_NUM; call_index++)
   {
      if (CALL_DATA(call_index, dtmf.digit) != NULL)
      {
         /* has other auto dtmf in queue. */
         csmcc_send_l4c_sat_send_dtmf_cnf(sat_dtmf_req_ptr->src_id, 
                                                      SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD, 
                                                      SAT_ME_CURRENTLY_BUSY_ON_DTMF);
         return CSMCC_NO_ERROR;
      }
   }
   
   if (no_dtmf >= MAX_CC_ADDR_BCD_LEN)
   {
      no_dtmf = MAX_CC_ADDR_BCD_LEN-1;
   }
      
   /* convert bcd into integer and store sat auto DTMF */
   csmcc_convert_bcd_dtmf_to_digit( call_id, 
                                    no_dtmf, 
                                    sat_dtmf_req_ptr->dtmf);   
   
   ret_val = csmcc_send_auto_dtmf(call_id);
   
   if(ret_val == CSMCC_NO_ERROR)
   {
      /* auto dtmf tones needs to be sent */            	
      CALL_DATA(call_id, dtmf_mode) = CSMCC_AUTO_DTMF;
      CSMCC_PTR->is_sat_dtmf = KAL_TRUE;
      CSMCC_PTR->dtmf_src_id = sat_dtmf_req_ptr->src_id;
   }
   else if(ret_val == CSMCC_ERROR)
   {
      csmcc_send_l4c_sat_send_dtmf_cnf(sat_dtmf_req_ptr->src_id, 
                                                        SAT_CMD_PERFORMED_SUCCESSFULLY, 
                                                        SAT_NO_SPECIFIC_CAUSE);
      csmcc_stop_auto_dtmf(call_id);
   }         
   
   return CSMCC_NO_ERROR;
   
} /* end of l4ccsm_cc_sat_send_dtmf_req_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_sat_abort_dtmf_req_hdlr
* DESCRIPTION                                                           
*   This procedure is used to abort sending DTMF request from SAT.
*
* CALLS  
*	csmcc_send_auto_dtmf
* PARAMETERS
*	
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_sat_abort_dtmf_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_index;

   if (CSMCC_PTR->is_sat_dtmf == KAL_FALSE)
   {
      return CSMCC_NO_ERROR;
   }     
   
   for (call_index=1; call_index < CSMCC_MAX_CALL_NUM; call_index++)
   {
      if (CALL_DATA(call_index, dtmf.digit) != NULL)   
      {         
         csmcc_dtmf_struct *dtmf_ptr = &(CALL_DATA(call_index,dtmf));
         if (  (CSMCC_PTR->is_sat_dtmf == KAL_TRUE)
            && (dtmf_ptr->count > dtmf_ptr->cur_digit_index))
         {            
            /* Send sat_send_dtmf_cnf */
            csmcc_send_l4c_sat_send_dtmf_cnf(CSMCC_PTR->dtmf_src_id, 
                                                        SAT_PROACTIVE_CMD_TERMINATED_BY_USER, 
                                                        SAT_NO_SPECIFIC_CAUSE);
         
            CSMCC_PTR->is_sat_dtmf = KAL_FALSE;          
         }                
         csmcc_stop_auto_dtmf(call_index); 
         return CSMCC_NO_ERROR;
      }
   }
     
   return CSMCC_NO_ERROR;
}

#endif /* __SAT__ */

#if defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_data_activate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process data activation confirmation.
*
* CALLS  
*	csmcc_data_activate_cnf_hdlr(kal_uint8 call_id, kal_bool is_succ)
* PARAMETERS
*  call_Id  IN first variable, used as input
*	is_succ 	IN	second variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_data_activate_cnf_hdlr(kal_uint8 call_id, kal_bool is_succ)
{
   CSMCC_PTR_G_TO_L
   if(is_succ == KAL_FALSE)
   {
      /* reset attach status */
      CSMCC_PTR->attach_status = CSMCC_DETACH;
      csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
   }
   else if (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ) 
   {      
      /*Activate data succ. and the call is not relesed during activation.*/
      CSMCC_PTR->attach_status = CSMCC_DATA_ATTACH;
      csmcc_send_l4c_csd_est_ind(call_id);
   }                  

   return CSMCC_NO_ERROR;
   
} /* end of csmcc_data_activate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_data_deactivate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the data deactivation confirmation.
*
* CALLS  
*	csmcc_data_deactivate_cnf_hdlr(kal_uint8 call_id)
* PARAMETERS
*	call_id 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_data_deactivate_cnf_hdlr(kal_uint8 call_id)
{  
   CSMCC_PTR_G_TO_L
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_MO_MODIFY_REQ:
         
         /* change mode to speech */
         if(CALL_DATA(call_id, cur_call_type) == 0)
         {
            csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc2), KAL_FALSE);            
         }
         else if(CALL_DATA(call_id, cur_call_type) == 1)
         {
            csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc1), KAL_FALSE);
         }
         
         /* update channel information to channel mode modify request */
         CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;
         
         SET_CALL_STATE(call_id, CSMCC_CALL_MODIFY)

         break;
         
      case CSMCC_MT_MODIFY_REQ:
               
         /* change mode to speech */         
         if(CALL_DATA(call_id, cur_call_type) == 0)
         {
            CALL_DATA(call_id, cur_call_type) = 1;
            csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc2),(kal_uint8)CSMCC_PTR->rscd_P);
         }
         else if(CALL_DATA(call_id, cur_call_type) == 1)
         {
            CALL_DATA(call_id, cur_call_type) = 0;
            csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc1),(kal_uint8)CSMCC_PTR->rscd_P);
         }
         
         csmcc_send_l4c_modify_ind(call_id);
         
         /* update current request to wait channel modify request */
         CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;

         /* MT modify to speech, so transfer UART control to L4C */
         csmcc_send_ilm(NULL,
                        MSG_ID_L4CCSM_CC_UART_TRANSFER_IND,
                        MOD_L4C,
                        NULL);
         break;
         
      case CSMCC_CALL_DISC_REQ:
      case CSMCC_REL_ACTIVE_REQ:
      case CSMCC_REL_ALL_EXCEPT_WAITING_CALL_REQ:      
      case CSMCC_REL_ALL_REQ:
      default:      
#ifdef __TCPIP_OVER_CSD__      
         if(CSMCC_PTR->aux_req == CSMCC_WAIT_DATA_DEACTIVATE_REQ
            && GET_CALL_STATE(call_id) == CSMCC_NW_CALL_DISC)
         {
            /* just for deactivate CSD, CC connect has been cleared */
            /* After L4C deactivate PPP, it will send disc_req to csmcc,
                so send disc_cnf. */
            csmcc_send_l4c_disc_succ(call_id);          
            csmcc_dealloc_call_context(call_id);
            break;
         }      
#endif
         /* MAUI_01764436 wait UART transfer back and deact cnf, then send rel ind to L4C */
         if(CSMCC_PTR->aux_req == CSMCC_WAIT_DATA_DEACTIVATE_CNF
            && GET_CALL_STATE(call_id) == CSMCC_CALL_ACTIVE)
         {
            /* unsolicited call release */
            csmcc_send_l4c_rel_ind(call_id, CM_MM_RR_CONN_RELEASE,0);

            /* deallocate call context of released call */
            csmcc_dealloc_call_context(call_id);
         }
         else
         {
            if(GET_CALL_STATE(call_id) != CSMCC_CALL_IDLE
               && GET_CALL_STATE(call_id) != CSMCC_MS_CALL_DISC)
            {
               csmcc_disc_call(call_id, CM_NORMAL_CALL_CLR);
            }
         }
         break;
   }

   return CSMCC_NO_ERROR;

} /* end of csmcc_data_deactivate_cnf_hdlr */
#endif /* defined(__CSD_T__) || defined(__CSD_NT__) || defined(__CSD_FAX__)*/

#if defined(__CSD_T__) || defined(__CSD_NT__)
/*************************************************************************
* FUNCTION                                                            
*	csmcc_data_disc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process L2R disconnect indication.
*
* CALLS  
*	csmcc_data_disc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_data_disc_ind_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
 #if defined(__TCPIP_OVER_CSD__) ||  (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
   /* If this is PPP call, then PPP shall be deactivated prior to 
      CSD deactivation */
      
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_CSD_CALL
         || GET_CALL_TYPE(call_index) == CSMCC_SAT_DATA_CALL)
      {
         return csmcc_send_l4c_simple_disc_ind(call_index, CM_NORMAL_CALL_CLR,0);
      }
   }         
#endif   
   
   csmcc_deactivate_data();
	   CSMCC_PTR->activate_data_call_id = 0xff;
                            
   return CSMCC_NO_ERROR;                            
        
}  /* end of csmcc_l2r_disc_ind_hdlr */

#endif /* defined(__CSD_T__) || defined(__CSD_NT__)*/

#ifdef __CSD_T__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_tdt_activate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the TDT activation confirmation.
*
* CALLS  
*	csmcc_tdt_activate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_tdt_activate_cnf_hdlr(local_para_struct *local_para_ptr)
{   
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_DATA_CALL
#ifdef __TCPIP_OVER_CSD__
         || GET_CALL_TYPE(call_index) == CSMCC_CSD_CALL
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         || GET_CALL_TYPE(call_index) == CSMCC_SAT_DATA_CALL
#endif   
        )
      {
         return csmcc_data_activate_cnf_hdlr(call_index, 
         (kal_bool)(((csm_tdt_activate_cnf_struct *)local_para_ptr)->is_successful));
      }
   }
   
   return CSMCC_ERROR;   
   
} /* end of csmcc_tdt_activate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_tdt_deactivate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the TDT deactivation confirmation.
*
* CALLS  
*	csmcc_tdt_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_tdt_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_DATA_CALL
#ifdef __TCPIP_OVER_CSD__
         || GET_CALL_TYPE(call_index) == CSMCC_CSD_CALL
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         || GET_CALL_TYPE(call_index) == CSMCC_SAT_DATA_CALL
#endif   
        )
      {
         return csmcc_data_deactivate_cnf_hdlr(call_index);
      }
   }
   
   return CSMCC_ERROR;
   
} /* end of csmcc_tdt_deactivate_cnf_hdlr */

#endif /* __CSD_T__ */

#ifdef __CSD_NT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_l2r_activate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the L2R activation confirmation.
*
* CALLS  
*	csm_l2r_activate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_l2r_activate_cnf_hdlr(local_para_struct *local_para_ptr)
{   
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_DATA_CALL
#ifdef __TCPIP_OVER_CSD__
         || GET_CALL_TYPE(call_index) == CSMCC_CSD_CALL
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         || GET_CALL_TYPE(call_index) == CSMCC_SAT_DATA_CALL
#endif
        )
      {
         return csmcc_data_activate_cnf_hdlr(call_index, 
         (kal_bool)(((csm_l2r_activate_cnf_struct *)local_para_ptr)->is_successful));
      }
   }
   
   return CSMCC_ERROR;   
         
} /* end of csmcc_l2r_activate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csm_l2r_deactivate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the TDT deactivation confirmation.
*
* CALLS  
*	csm_tdt_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_l2r_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_DATA_CALL
#ifdef __TCPIP_OVER_CSD__
         || GET_CALL_TYPE(call_index) == CSMCC_CSD_CALL
#endif      
#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
         || GET_CALL_TYPE(call_index) == CSMCC_SAT_DATA_CALL
#endif
        )
      {
         return csmcc_data_deactivate_cnf_hdlr(call_index);
      }
   }
   
   return CSMCC_ERROR;   

} /* end of csm_l2r_deactivate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_l2r_xid_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process L2R disconnect indication.
*
* CALLS  
*	csmcc_l2r_xid_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_l2r_xid_ind_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   csm_l2r_xid_ind_struct *l2r_xid_ind_ptr = (csm_l2r_xid_ind_struct*)local_para_ptr;

   if(l2r_xid_ind_ptr->xid_params.wsize_iwf_ms_p == KAL_TRUE)
   {
      CSMCC_PTR->data_bc_param.rlp_param.rlp_iws = l2r_xid_ind_ptr->xid_params.wsize_iwf_ms;
   }
   
   if(l2r_xid_ind_ptr->xid_params.wsize_ms_iwf_p == KAL_TRUE)
   {
      CSMCC_PTR->data_bc_param.rlp_param.rlp_mws = l2r_xid_ind_ptr->xid_params.wsize_ms_iwf;
   }

   if(l2r_xid_ind_ptr->xid_params.t1_p == KAL_TRUE)
   {
      CSMCC_PTR->data_bc_param.rlp_param.rlp_T1 = l2r_xid_ind_ptr->xid_params.t1;
   }

   if(l2r_xid_ind_ptr->xid_params.n2_p == KAL_TRUE)
   {
      CSMCC_PTR->data_bc_param.rlp_param.rlp_N2 = l2r_xid_ind_ptr->xid_params.n2;
   }
   
   if(l2r_xid_ind_ptr->xid_params.version_num_p == KAL_TRUE)
   {
      CSMCC_PTR->data_bc_param.rlp_param.rlp_ver = l2r_xid_ind_ptr->xid_params.version_num;
   }   

   return CSMCC_NO_ERROR;
   
}  /* end of csmcc_l2r_xid_ind_hdlr */

#endif /* __CSD_NT__ */

#ifdef __CSD_FAX__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_t30_activate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the L2R activation confirmation.
*
* CALLS  
*	csm_l2r_activate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_t30_activate_cnf_hdlr(local_para_struct *local_para_ptr)
{   
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_FAX_CALL)
      {
         return csmcc_data_activate_cnf_hdlr(call_index, 
         ((csm_t30_activate_cnf_struct *)local_para_ptr)->is_successful);
      }
   }
   
   return CSMCC_ERROR;            
} /* end of csmcc_t30_activate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_t30_deactivate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the T30 deactivation confirmation.
*
* CALLS  
*	csm_t30_deactivate_cnf_hdlr(void)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_t30_deactivate_cnf_hdlr(void)
{
   kal_uint8 call_index;
   
   for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   {
      if(GET_CALL_TYPE(call_index) == CSMCC_FAX_CALL)
      {
         return csmcc_data_deactivate_cnf_hdlr(call_index);
      }
   }
   
   return CSMCC_ERROR;   

} /* end of csmcc_t30_deactivate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_t30_disc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process T30 disconnect indication.
*
* CALLS  
*	csmcc_t30_disc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_t30_disc_ind_hdlr(void)
{  
   CSMCC_PTR_G_TO_L
   csmcc_deactivate_fax();
   CSMCC_PTR->activate_data_call_id = 0xff;
                            
   return CSMCC_NO_ERROR;                          
}  /* end of csmcc_t30_disc_ind_hdlr */

#endif /* end  __CSD_FAX__ */
#ifdef __VIDEO_CALL_SUPPORT__
/*************************************************************************
* FUNCTION                                                            
*	csmcc_vt_activate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the VT activation confirmation.
*
* CALLS  
*	csmcc_vt_activate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_vt_activate_cnf_hdlr(local_para_struct *local_para_ptr)
{   
   CSMCC_PTR_G_TO_L
   csm_vt_activate_cnf_struct *vt_act_cnf_ptr = (csm_vt_activate_cnf_struct*)local_para_ptr;

   if(vt_act_cnf_ptr->result == KAL_FALSE)
   {
         csmcc_disc_call(vt_act_cnf_ptr->call_id, CM_NORMAL_CALL_CLR);
   }
   else if (CSMCC_PTR->attach_status == CSMCC_DATA_ATTACH_REQ) 
   {
	CSMCC_PTR->attach_status = CSMCC_DATA_ATTACH;
   }
   csmcc_send_l4c_video_call_status_ind(vt_act_cnf_ptr->call_id,
   									CSMCC_VIDEO_CALL_ACTIVATE,
   									vt_act_cnf_ptr->result,
   									vt_act_cnf_ptr->cause);
   
   return CSMCC_ERROR;            
} /* end of csmcc_vt_activate_cnf_hdlr */

/*************************************************************************
* FUNCTION                                                            
*	csmcc_vt_deactivate_cnf_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process the VT activation confirmation.
*
* CALLS  
*	csmcc_vt_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_vt_deactivate_cnf_hdlr(local_para_struct *local_para_ptr)
{   
   CSMCC_PTR_G_TO_L
   csm_vt_deactivate_cnf_struct *vt_deact_cnf_ptr = (csm_vt_deactivate_cnf_struct*)local_para_ptr;

   kal_uint8 call_id = vt_deact_cnf_ptr->call_id;
	
   if(GET_CALL_TYPE(vt_deact_cnf_ptr->call_id) == CSMCC_VIDEO_CALL)
   {
       switch(CSMCC_PTR->cur_req)
       {               
       case CSMCC_MO_MODIFY_REQ:
         
         /* change mode to speech */
         if(CALL_DATA(call_id, cur_call_type) == 0)
         {
            csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc2), KAL_FALSE);            
         }
         else if(CALL_DATA(call_id, cur_call_type) == 1)
         {
            csmcc_send_cc_modify_req(call_id, &(CSMCC_PTR->nego_bc.bc1), KAL_FALSE);
         }
         
         /* update channel information to channel mode modify request */
         CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;
         
         SET_CALL_STATE(call_id, CSMCC_CALL_MODIFY)

         break;
         
      case CSMCC_MT_MODIFY_REQ:
               
         /* change mode to speech */         
         if(CALL_DATA(call_id, cur_call_type) == 0)
         {
            CALL_DATA(call_id, cur_call_type) = 1;
            csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc2),(kal_uint8)CSMCC_PTR->rscd_P);
         }
         else if(CALL_DATA(call_id, cur_call_type) == 1)
         {
            CALL_DATA(call_id, cur_call_type) = 0;
            csmcc_send_cc_modify_compl(call_id, &(CSMCC_PTR->nego_bc.bc1),(kal_uint8)CSMCC_PTR->rscd_P);
         }
         
         csmcc_send_l4c_modify_ind(call_id);
         
         /* update current request to wait channel modify request */
         CSMCC_PTR->channel_info = CSMCC_CHMODE_MODIFY;

         break;
   	  	
      default:
			
         if(GET_CALL_STATE(vt_deact_cnf_ptr->call_id) != CSMCC_CALL_IDLE
            && GET_CALL_STATE(vt_deact_cnf_ptr->call_id) != CSMCC_MS_CALL_DISC)
         {
            csmcc_disc_call(vt_deact_cnf_ptr->call_id, CM_NORMAL_CALL_CLR);
         }
         break;
   }

   //return CSMCC_NO_ERROR;
      }
     	
   csmcc_send_l4c_video_call_status_ind(vt_deact_cnf_ptr->call_id,
   				        CSMCC_VIDEO_CALL_DEACTIVATE,
   					vt_deact_cnf_ptr->result,
   					vt_deact_cnf_ptr->cause);
   
   return CSMCC_NO_ERROR;            
} /* end of csmcc_vt_deactivate_cnf_hdlr */


/*************************************************************************
* FUNCTION                                                            
*	csmcc_vt_disc_ind_hdlr
* DESCRIPTION                                                           
*   This procedure is used to process VT disconnect indication.
*
* CALLS  
*	csmcc_vt_disc_ind_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t csmcc_vt_disc_ind_hdlr(local_para_struct *local_para_ptr)
{  
   //kal_uint8 call_index;
   CSMCC_PTR_G_TO_L
   csm_vt_disc_ind_struct *vt_disc_ind_ptr = (csm_vt_disc_ind_struct*)local_para_ptr;
   
   //for(call_index = 1; call_index < CSMCC_MAX_CALL_NUM+1; call_index++)
   //{
   //   if(GET_CALL_TYPE(call_index) == CSMCC_VIDEO_CALL)
   //   {
   //      return csmcc_send_l4c_simple_disc_ind(call_index, CM_NORMAL_CALL_CLR,0);
   //   }
   //}    

   csmcc_deactivate_vt(vt_disc_ind_ptr->call_id, vt_disc_ind_ptr->call_end_type);
   
   CSMCC_PTR->activate_data_call_id = 0xff;
                            
   return CSMCC_NO_ERROR;                          
}  /* end of csmcc_vt_disc_ind_hdlr */

#endif /*__VIDEO_CALL_SUPPORT__*/

#if defined(__CSD_T__) || defined(__CSD_NT__) 
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_uart_transfer_req_hdlr
* DESCRIPTION                                                           
*  This procedure is used to process request of uart transfer to data 
*
* CALLS  
*	l4ccsm_cc_uart_transfer_req_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_uart_transfer_req_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_uart_transfer_req_struct *uart_trans_ptr;
   #ifdef __CSD_T__
   csm_tdt_uart_setowner_req_struct *csm_tdt_uart_setowner_req_ptr;
   csm_tdt_esc_off_req_struct *csm_tdt_esc_off_req_ptr;
   #endif
   #ifdef __CSD_NT__
   csm_l2r_uart_setowner_req_struct *csm_l2r_uart_setowner_req_ptr;
   csm_l2r_esc_off_req_struct *csm_l2r_esc_off_req_ptr;
   #endif
   
   
   uart_trans_ptr = (l4ccsm_cc_uart_transfer_req_struct*)local_para_ptr;
   
   if(CSMCC_PTR->activate_data_call_ce == CSMCC_TRANSPARENT) /* MAUI_01789039 */
   {
#ifdef __CSD_T__
      if(uart_trans_ptr->is_esc_off == KAL_TRUE)
      {
         CSMCC_CONSTRUCT_LOCAL_PARA(csm_tdt_esc_off_req_ptr, 
                              csm_tdt_esc_off_req_struct)                                         
         csm_tdt_esc_off_req_ptr->port = uart_trans_ptr->port;        
         csmcc_send_ilm(csm_tdt_esc_off_req_ptr, MSG_ID_CSM_TDT_ESC_OFF_REQ, MOD_TDT,NULL);
      }
      else
      {
         CSMCC_CONSTRUCT_LOCAL_PARA(csm_tdt_uart_setowner_req_ptr, 
                              csm_tdt_uart_setowner_req_struct)                                         
         csm_tdt_uart_setowner_req_ptr->port = uart_trans_ptr->port;  
         csmcc_send_ilm(csm_tdt_uart_setowner_req_ptr, MSG_ID_CSM_TDT_UART_SETOWNER_REQ, MOD_TDT,NULL);
      }         
#endif
   }
   else if(CSMCC_PTR->activate_data_call_ce == CSMCC_NON_TRANSPARENT) /* MAUI_01789039 */
   {
#ifdef __CSD_NT__
      if(uart_trans_ptr->is_esc_off == KAL_TRUE)
      {
         CSMCC_CONSTRUCT_LOCAL_PARA(csm_l2r_esc_off_req_ptr, 
                              csm_l2r_esc_off_req_struct)                                         
         csm_l2r_esc_off_req_ptr->port = uart_trans_ptr->port;       
         csmcc_send_ilm(csm_l2r_esc_off_req_ptr, MSG_ID_CSM_L2R_ESC_OFF_REQ, MOD_L2R,NULL);
      }
      else
      {
         CSMCC_CONSTRUCT_LOCAL_PARA(csm_l2r_uart_setowner_req_ptr, 
                              csm_l2r_uart_setowner_req_struct)                                         
         csm_l2r_uart_setowner_req_ptr->port = uart_trans_ptr->port;  
         csmcc_send_ilm(csm_l2r_uart_setowner_req_ptr, MSG_ID_CSM_L2R_UART_SETOWNER_REQ, MOD_L2R,NULL);
      }
#endif
   }

   return CSMCC_NO_ERROR;

}  /* end of l4ccsm_cc_uart_transfer_req_hdlr */

#endif /* __CSD_T__ || __CSD_NT__ */


#ifdef __AUTO_CALL_REJECTION__
/*************************************************************************
* FUNCTION                                                            
*	l4ccsm_cc_call_present_rsp_hdlr
* DESCRIPTION                                                           
*  This procedure is used to process request of uart transfer to data 
*
* CALLS  
*	l4ccsm_cc_call_present_rsp_hdlr(local_para_struct *local_para_ptr)
* PARAMETERS
*	local_para_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
csmcc_ret_t l4ccsm_cc_call_present_rsp_hdlr(local_para_struct *local_para_ptr)
{
   CSMCC_PTR_G_TO_L
   kal_uint8 call_id;
   csmcc_call_state_enum check_state;
   l4ccsm_cc_call_present_rsp_struct *cc_call_present_rsp_ptr;
   kal_uint16 reject_cause = 0;

   cc_call_present_rsp_ptr = (l4ccsm_cc_call_present_rsp_struct*)local_para_ptr;
   call_id = cc_call_present_rsp_ptr->call_id;
   check_state = GET_CALL_STATE(call_id);

   /* MAUI_01294662 [CC][Revise] Auto call rejection discard call release ind in PRESENT_IND state */
   /* check if race condition: before upper layer confirm, call is released. */
   if (check_state == CSMCC_CALL_IDLE)
   {
      kal_brief_trace(TRACE_WARNING, CSMCC_TRACE_CALL_IS_RELEASED);
      return CSMCC_NO_ERROR;
   }
   else if (check_state != CSMCC_CALL_PRESENT_IND)
   {
      /* MAUI_01782430 shall discard duplicated CALL PRESENT RSP */
      kal_brief_trace(TRACE_ERROR,CSMCC_TRACE_WRONG_CHECK_STATE,check_state);
      return CSMCC_NO_ERROR;
   }

   if (cc_call_present_rsp_ptr->seq_num != CSMCC_PTR->seq_num)
   {
      /* MAUI_01964704 */
      kal_brief_trace(TRACE_WARNING, CSMCC_TRACE_CALL_IS_RELEASED); 
      return CSMCC_NO_ERROR;
   }

   if (cc_call_present_rsp_ptr->is_mt_call_allowed == KAL_TRUE)
   {
      /* send call confirm to CC with negotiated bearer capability */
      csmcc_send_cc_call_conf_req(call_id);
      mncc_setup_ind_after_call_conf_hdlr(call_id, (mncc_setup_ind_struct *)CALL_DATA(call_id, local_para_ptr));
   }
   else
   {
      /* MAUI_01672443 [CSMCC][Revise] change the auto reject cause as USER_BUSY */
      if (check_sim_card_status(CSMCC_SIM_INTERFACE) == TEST_SIM_PRESENCE)
      {
         reject_cause = CM_CALL_REJECTED;
      }
      else
      {
         reject_cause = CM_USER_BUSY;
      }
      csmcc_send_cc_rej_req(CALL_DATA(call_id, ti), reject_cause);

      csmcc_dealloc_call_context(call_id);     
   }

   return CSMCC_NO_ERROR;

}  /* end of l4ccsm_cc_call_present_rsp_hdlr */
#endif  

/*************************************************************************
* FUNCTION                                                            
*	csmcc_reject_l4c_req
* DESCRIPTION                                                           
*   This procedure is used to reject l4c request, e.g when before csmcc send cnf, it sends 
*   a new request again.
*
* CALLS  
*	
* PARAMETERS
*	
* RETURNS
*	None
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_reject_l4c_req(ilm_struct *ilm_ptr)
{
   CSMCC_PTR_G_TO_L
   l4ccsm_cc_crss_req_struct *crss_req_ptr;
   crss_req_ptr = (l4ccsm_cc_crss_req_struct*)(ilm_ptr->local_para_ptr);  
   
   switch(ilm_ptr->msg_id)
   {      
      case MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ:
         csmcc_send_l4c_call_deflection_fail(
            ((l4ccsm_cc_call_deflection_cnf_struct *)ilm_ptr->local_para_ptr)->src_id,
            CSMCC_INVALID_CALL_ID, 
            CSMCC_CMD_NOT_ALLOW);         
         break;
         
      case MSG_ID_L4CCSM_CC_CRSS_REQ:
         /* Should not reset  cur_req, so the parameter pass CSMCC_NO_REQ. */
         CSMCC_PTR->crss_req = crss_req_ptr->crss_req;
         csmcc_send_l4c_crss_fail(
            ((l4ccsm_cc_crss_req_struct *)ilm_ptr->local_para_ptr)->src_id,
            CSMCC_NO_REQ,
            CSMCC_CMD_NOT_ALLOW); 
         break;
         
      case MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ:
         csmcc_send_l4c_accept_fail(
            ((l4ccsm_cc_call_accept_req_struct *)ilm_ptr->local_para_ptr)->src_id, 
            ((l4ccsm_cc_call_accept_req_struct *)ilm_ptr->local_para_ptr)->call_id, 
            CSMCC_CMD_NOT_ALLOW);
         break;
         
      case MSG_ID_L4CCSM_CC_CALL_DISC_REQ:
         csmcc_send_l4c_disc_fail(
            ((l4ccsm_cc_call_disc_req_struct*)ilm_ptr->local_para_ptr)->src_id, 
            ((l4ccsm_cc_call_disc_req_struct*)ilm_ptr->local_para_ptr)->call_id);
         break;
         
      case MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ:
         csmcc_send_l4c_modify_fail(
            ((l4ccsm_cc_call_modify_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_call_modify_req_struct*)ilm_ptr->local_para_ptr)->call_id, 
            CSMCC_CMD_NOT_ALLOW);
         break;
         
      case MSG_ID_L4CCSM_CC_CALL_SETUP_REQ:
         csmcc_send_l4c_update_call_state_idle_ind(1);
         csmcc_send_l4c_setup_fail(
            ((l4ccsm_cc_call_setup_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_call_setup_req_struct*)ilm_ptr->local_para_ptr)->call_type,
            CSMCC_CMD_NOT_ALLOW,
            SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
            SAT_ME_CURRENTLY_BUSY_ON_CALL,
            0);
         break;
         
      case MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ:
         csmcc_send_l4c_update_call_state_idle_ind(1);
         csmcc_send_l4c_emergency_setup_fail(
            ((l4ccsm_cc_emergency_call_setup_req_struct *)ilm_ptr->local_para_ptr)->src_id,
            CSMCC_CMD_NOT_ALLOW);
         break;
         
   #ifdef __SAT__
      case MSG_ID_L4CCSM_CC_SAT_SETUP_REQ:
         csmcc_send_l4c_update_call_state_idle_ind(1);
         csmcc_send_l4c_sat_setup_fail(
            ((l4ccsm_cc_sat_setup_req_struct *)ilm_ptr->local_para_ptr)->src_id,
            SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
            SAT_ME_CURRENTLY_BUSY_ON_CALL,
            CSMCC_NO_CAUSE,
            CSMCC_INVALID_CALL_ID);
         break;
   #endif
         
   #ifdef __TCPIP_OVER_CSD__
      case MSG_ID_L4CCSM_CC_SET_CSD_PROF_REQ:
         csmcc_send_l4c_set_csd_prof_cnf(L4C_GENERAL_ERROR, 0);
         break;
   #endif
         
   #ifdef __CPHS__
      case MSG_ID_L4CCSM_CC_UPDATE_ALS_REQ:
         csmcc_send_l4c_update_als_cnf(CSMCC_FAILURE, 0);
         break;

      #if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__) && defined (__AOC_SUPPORT__)
      /* MAUI_01938414 [CSMCC][Revise] support reset last ccm */
      case MSG_ID_L4CCSM_CC_LAST_CCM_RESET_REQ:
         csmcc_send_l4c_last_ccm_reset_cnf(CSMCC_FAILURE, 0);
         break;
       #endif /*(__CCM_NO_RESET__) && (__LAST_CCM_RESET__)&& (__AOC_SUPPORT__)*/
       #endif
#ifdef __AOC_SUPPORT__
      case MSG_ID_L4CCSM_CC_ACM_RESET_REQ:
         csmcc_send_l4c_acm_reset_cnf(
		 ((l4ccsm_cc_acm_reset_req_struct *)ilm_ptr->local_para_ptr)->src_id,
		 CSMCC_FAILURE, 
		 CSMCC_CMD_NOT_ALLOW);
         break;                  
      case MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ:
         csmcc_send_l4c_acmmax_set_cnf(
		 ((l4ccsm_cc_acmmax_set_req_struct *)ilm_ptr->local_para_ptr)->src_id,
		 CSMCC_FAILURE, 
		 CSMCC_CMD_NOT_ALLOW);
         break;     
#endif/*__AOC_SUPPORT__*/
      case MSG_ID_L4CCSM_CC_START_DTMF_REQ:
	   csmcc_send_l4c_start_dtmf_fail(
		  ((l4ccsm_cc_start_dtmf_req_struct *)ilm_ptr->local_para_ptr)->src_id,
		  ((l4ccsm_cc_start_dtmf_req_struct *)ilm_ptr->local_para_ptr)->call_id, 
		  ((l4ccsm_cc_start_dtmf_req_struct *)ilm_ptr->local_para_ptr)->tone, 
		  CSMCC_CMD_NOT_ALLOW);
         break;     		 
	case MSG_ID_L4CCSM_CC_STOP_DTMF_REQ:
 	   csmcc_send_l4c_stop_dtmf_fail(
		 ((l4ccsm_cc_stop_dtmf_req_struct *)ilm_ptr->local_para_ptr)->src_id,
		 ((l4ccsm_cc_stop_dtmf_req_struct *)ilm_ptr->local_para_ptr)->call_id, 
		 ((l4ccsm_cc_stop_dtmf_req_struct *)ilm_ptr->local_para_ptr)->tone, 
		 CSMCC_CMD_NOT_ALLOW);
	  break;				
    #ifdef __SAT__ //mtk01602, 070727
	case MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ:
	   csmcc_send_l4c_sat_send_dtmf_cnf(
	   	 ((l4ccsm_cc_sat_send_dtmf_req_struct *)ilm_ptr->local_para_ptr)->src_id, 
		 SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD, 
		 SAT_NO_SPECIFIC_CAUSE);
	  break;				 
    #endif
      default:
         break;
   }
}
#ifdef __GEMINI__
/*************************************************************************
* FUNCTION                                                            
*csmcc_valid_request_from_diff_sim
* DESCRIPTION                                                           
*   Used to tell if corrent call context owner is the same as operating module 
*   
*
* CALLS  
*	
* PARAMETERS
*	
* RETURNS
*	None
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_valid_request_from_diff_sim(ilm_struct *ilm_ptr)
{
   
   CSMCC_PTR_G_TO_L
   switch(ilm_ptr->msg_id)
   {  
      case MSG_ID_L4CCSM_CC_CALL_SETUP_REQ:
      case MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ:      
#ifdef __SAT__
      case MSG_ID_L4CCSM_CC_SAT_SETUP_REQ:
#endif
      {
          //Check if the sim is occupied or CC has occupied the other SIM 
          if (csmcc_is_call_table_availible() == KAL_FALSE)
          {
              return KAL_TRUE;
          }
          else
          {
              return KAL_FALSE;
          }
      }
      break;
      case MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ:
      case MSG_ID_L4CCSM_CC_CRSS_REQ:
      case MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ:
      case MSG_ID_L4CCSM_CC_CALL_DISC_REQ:
      case MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ:   
#ifdef __SAT__
      case MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ:
#endif
      case MSG_ID_L4CCSM_CC_START_DTMF_REQ:
      case MSG_ID_L4CCSM_CC_STOP_DTMF_REQ:
#ifdef __AUTO_CALL_REJECTION__
    //ALPS00555664, 201304, check ctab status before send call confirm in case that the call has been released
      case MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP:
#endif
      {
          /*req other than setup req can not be sent if csmcc_ctab_mod_id ==0 */
          if (csmcc_ctab_mod_id != (CSMCC_MOD_ID))
          {
             kal_trace(TRACE_WARNING, CSMCC_TRACE_COMMAND_TO_DIFF_SIM,csmcc_ctab_mod_id,(CSMCC_MOD_ID));
             return KAL_TRUE;
          }
          return KAL_FALSE;
  
      }
      break;

      /*L4C requests that will not use call table, therefore, allowed diff SIM operate at same time*/
//      case MSG_ID_L4CCSM_CC_SET_CSD_PROF_REQ:
//      case MSG_ID_L4CCSM_CC_UPDATE_ALS_REQ:
//      case MSG_ID_L4CCSM_CC_LAST_CCM_RESET_REQ:
//      case MSG_ID_L4CCSM_CC_ACM_RESET_REQ:                 
//      case MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ:     
//          return KAL_FALSE;
//      break;

      default:
          return KAL_FALSE;
      break;
   }
}
#endif /*__GEMINI__ */
/*************************************************************************
* FUNCTION                                                            
*	csmcc_valid_l4c_req
* DESCRIPTION                                                           
*   This procedure is used to check if the requested call is existing
*
* CALLS  
*	csmcc_valid_l4c_req(ilm_struct *ilm_ptr)
* PARAMETERS
*	*ilm_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_valid_l4c_req(ilm_struct *ilm_ptr)
{   
   /* some request has been initiated, only the following request can 
      be abort by call disconnect request :      
      a. MO call and emergency call request 
      b. MT call alerting request (wait channel assignment)
      c. MT call accept request */
  CSMCC_PTR_G_TO_L   
  kal_brief_trace(TRACE_INFO, CSMCC_TRACE_REQUEST_SAVE, 
             CSMCC_PTR->cur_req, CSMCC_PTR->req_src_id,CSMCC_PTR->req_call_id);

   switch(ilm_ptr->msg_id)
   {
      case MSG_ID_L4CCSM_CC_REL_COMP_REQ:
      case MSG_ID_L4CCSM_CC_SAT_ABORT_DTMF_REQ:
      case MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ:
      case MSG_ID_L4CCSM_CC_ACM_RESET_REQ:
      case MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ:	   
      case MSG_ID_L4CCSM_CC_AUTO_DTMF_START_REQ:
      case MSG_ID_L4CCSM_CC_START_DTMF_REQ:
      case MSG_ID_L4CCSM_CC_STOP_DTMF_REQ:	   
      case MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ:
      case MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP:
         return KAL_TRUE;
         break;
	   
	   case MSG_ID_L4CCSM_CC_CRSS_REQ:
	   {
	      kal_uint8 crss_req = 
               ((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->crss_req;
	    
            if(crss_req == CSMCC_REL_ALL_EXCEPT_WAITING_CALL
               || crss_req == CSMCC_REL_SPECIFIC_CALL
               || crss_req == CSMCC_REL_ALL)
         {
               return KAL_TRUE;   
         }
     }     
         break;
      default: 
            break;
	}
	
   switch(CSMCC_PTR->cur_req)
   {
      case CSMCC_UPDATE_ALS_REQ:
         /* when updating als, l4c should not send any other req. */
         return KAL_FALSE;
         break;

      case CSMCC_SET_CSD_PROF_REQ:
         /* when saving csd profile, l4c should not send any other req. */
         return KAL_FALSE;
         break;
                  
      case CSMCC_CALL_SETUP_REQ:
      case CSMCC_SAT_SETUP_REQ:
      case CSMCC_EMERGENCY_CALL_SETUP_REQ:
         if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CALL_DISC_REQ)
         {
            return KAL_TRUE;
         }
         else if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CRSS_REQ)
         {
            kal_uint8 crss_req = 
               ((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->crss_req;

            if(crss_req == CSMCC_REL_ALL_EXCEPT_WAITING_CALL
               || crss_req == CSMCC_REL_SPECIFIC_CALL
               || crss_req == CSMCC_REL_ALL 
               || crss_req == CSMCC_ACTIVATE_CCBS_CALL)
            {
               return KAL_TRUE;
            }
         }            
		 else if (ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_STARTUP_REQ)
		 {
            return KAL_TRUE;
		 }
         break;
		 
	  case CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ:
	     if(CSMCC_PTR->aux_req == CSMCC_ACCEPT_CCBS_CALL_REQ)
	     {		     
	        if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CALL_DISC_REQ)
	        {  
	             /*[Cosine 0301]: 1A, 1 CCBS recall, select "yes" to redial and abort immediately. */
   	             return KAL_TRUE;
	        }
 	        else if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CRSS_REQ)
                {
                      /*[Cosine 0301]: 1A, 1 CCBS recall, select "yes" to redial and NW send CC_DISC with CCBS 
			        Possible, activate again.*/
		      kal_uint8 crss_req = 
   		        ((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->crss_req;
    	              if(crss_req == CSMCC_ACTIVATE_CCBS_CALL)
       	              {
                         return KAL_TRUE;
         	      }
             	 }   
       	      }         
      	      break;	 
     	
      case CSMCC_CALL_ACCEPT_REQ:
         if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CALL_DISC_REQ)
         {
            return KAL_TRUE;
         }
         else if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CRSS_REQ)
         {
            kal_uint8 crss_req = 
               ((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->crss_req;

            if(crss_req == CSMCC_REL_ALL_EXCEPT_WAITING_CALL
               || crss_req == CSMCC_REL_SPECIFIC_CALL
               || crss_req == CSMCC_REL_ALL)
            {
               return KAL_TRUE;
            }
         }            
         break;
      
      case CSMCC_CALL_DISC_REQ:
         /* Ripple: when MO, then MT in, L4C will disc MO, and then may accept the MT. */
         if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ )          
         {
            return KAL_TRUE;
         }
         else if (ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CRSS_REQ)
         {
            kal_uint8 crss_req = 
               ((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->crss_req;

            if(crss_req == CSMCC_HOLD_ACTIVE_AND_ACCEPT)
            {
               return KAL_TRUE;
            }
         }
         break;
         
      case CSMCC_ACMMAX_SET_REQ:
      case CSMCC_ACM_RESET_REQ:
#ifdef __EMLPP_SUPPORT__
      case CSMCC_CALL_PREEMPT_REQ:    /* non-L4C request */
      case CSMCC_AUTO_ANSWER_REQ:     /* non-L4C request */
#endif
      //case CSMCC_ALERTING_REQ:        /* non-L4C request */
      case CSMCC_MT_MODIFY_REQ:       /* non-L4C request */
      case CSMCC_NO_REQ:
         /* don't care these request */
         return KAL_TRUE;
         break;      
      /*if receiving setup_req during start up stage,return TRUE, and CSM will return setup cnf (fail)
         to make L4C retry*/
      case CSMCC_STARTUP_REQ:
         if(ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_STARTUP_REQ /* MAUI_02008108 allow SIM and NVRAM init at the same time */
            ||ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_CALL_SETUP_REQ 
            || ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ
            || ilm_ptr->msg_id == MSG_ID_L4CCSM_CC_SAT_SETUP_REQ)          
         {
            return KAL_TRUE;
         }
         break;
      default: 
        break;
   }
      
     kal_brief_trace(TRACE_WARNING,
             CSMCC_TRACE_DUPLICATE_L4C_REQ,
             ilm_ptr->msg_id);   
                                  
   return  KAL_FALSE;
   
} /* end of csmcc_valid_l4c_req */   

/*************************************************************************
* FUNCTION                                                            
*	csmcc_call_reest_check
* DESCRIPTION                                                           
*   This procedure is used to check if the request is allowable in case of 
*   call reestablishment. only call disconnect request is allowed.
*
* CALLS  
*	csmcc_call_reest_check(ilm_struct *ilm_ptr)
* PARAMETERS
*	*ilm_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
kal_bool csmcc_call_reest_check(ilm_struct* ilm_ptr)
{      
   /* call establishment on going, check if request is allowable */
   CSMCC_PTR_G_TO_L
   switch(ilm_ptr->msg_id)
   {
      case MSG_ID_L4CCSM_CC_CRSS_REQ:
      {
         csmcc_req_enum crss_req = CSMCC_NO_REQ;

         switch(((l4ccsm_cc_crss_req_struct*)
               ilm_ptr->local_para_ptr)->crss_req)
         {
            case CSMCC_REL_ACTIVE_AND_ACCEPT:
            case CSMCC_REL_ACTIVE_AND_ACCEPT_WAITING:
            case CSMCC_REL_ACTIVE_AND_ACCEPT_CCBS:
            case CSMCC_REL_ACTIVE_AND_ACCEPT_HELD:
               crss_req = CSMCC_REL_ACTIVE_AND_ACCEPT_REQ;
               break;
               
            case CSMCC_HOLD_ACTIVE_AND_ACCEPT:
            case CSMCC_HOLD_ACTIVE_AND_ACCEPT_WAITING:
            case CSMCC_HOLD_ACTIVE_AND_ACCEPT_CCBS:
            case CSMCC_SWAP_CALL:
               crss_req = CSMCC_HOLD_ACTIVE_AND_ACCEPT_REQ;
               break;
               
            case CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL:
               crss_req = CSMCC_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL_REQ;
               break;
               
            case CSMCC_ADD_HELD_CALL:
               crss_req = CSMCC_ADD_HELD_CALL_REQ;
               break;
               
            case CSMCC_EXPLICIT_CALL_TRANSFER:
               crss_req = CSMCC_EXPLICIT_CALL_TRANSFER_REQ;
               break;
               
            case CSMCC_ACTIVATE_CCBS_CALL:
               crss_req = CSMCC_ACTIVATE_CCBS_CALL_REQ;
               break;
               
            default:
               /* do nothing, keep CSMCC_NO_REQ */
               break;
         }

         if (crss_req != CSMCC_NO_REQ)
         {
            CSMCC_PTR->crss_req = ((l4ccsm_cc_crss_req_struct*)(ilm_ptr->local_para_ptr))->crss_req;//MAUI_02451463, save crss_req , so that we can return correct crss_req enum to MMI.
            csmcc_send_l4c_crss_fail(((l4ccsm_cc_crss_req_struct*)ilm_ptr->local_para_ptr)->src_id,
                                     crss_req,
                                     CSMCC_CMD_NOT_ALLOW);

            return KAL_FALSE;   
         }
         break;
      }
      case MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ:
         csmcc_send_l4c_modify_fail(
            ((l4ccsm_cc_call_modify_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_call_modify_req_struct*)ilm_ptr->local_para_ptr)->call_id,
            CSMCC_CALL_RE_EST);
         return KAL_FALSE;
      case MSG_ID_L4CCSM_CC_CALL_SETUP_REQ:
         csmcc_send_l4c_setup_fail(
            ((l4ccsm_cc_call_setup_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_call_setup_req_struct*)ilm_ptr->local_para_ptr)->call_type,
            CSMCC_CALL_RE_EST,
            SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
            SAT_NO_SPECIFIC_CAUSE,
            0);
         return KAL_FALSE;
      case MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ:
         csmcc_send_l4c_emergency_setup_fail(
            ((l4ccsm_cc_emergency_call_setup_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            CSMCC_CALL_RE_EST);
         return KAL_FALSE;
      case MSG_ID_L4CCSM_CC_START_DTMF_REQ:
         csmcc_send_l4c_start_dtmf_fail(
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->call_id,
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->tone,
            CSMCC_CALL_RE_EST);
         return KAL_FALSE;
      case MSG_ID_L4CCSM_CC_STOP_DTMF_REQ:
         csmcc_send_l4c_stop_dtmf_fail(
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->call_id,
            ((l4ccsm_cc_start_dtmf_req_struct*)ilm_ptr->local_para_ptr)->tone,
            CSMCC_CALL_RE_EST);
         return KAL_FALSE;      
#ifdef __SAT__
      case MSG_ID_L4CCSM_CC_SAT_SETUP_REQ:
         csmcc_send_l4c_sat_setup_fail(
            ((l4ccsm_cc_sat_setup_req_struct*)ilm_ptr->local_para_ptr)->src_id,
            SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD,
            SAT_NO_SPECIFIC_CAUSE,
            CSMCC_NO_CAUSE,
            CSMCC_INVALID_CALL_ID);
         return KAL_FALSE;
#endif
      default:
         break;           
   }
   
   return KAL_TRUE;

} /* end of csmcc_call_reest_check */

#ifdef __MTK_INTERNAL__
/* under construction !*/
#ifdef __CSMCC_UT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef WRITE_REGRESSION_FILE
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef WRITE_REGRESSION_FILE
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //__CSMCC_UT__
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
#ifdef __REL4__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*(__REL4__)*/
#ifdef __REL6__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	   
/* under construction !*/
#ifdef __CSMCC_UT__
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
#endif // __CSMCC_UT__
/* under construction !*/
/* under construction !*/
#endif

/*************************************************************************
* FUNCTION                                                            
*	csmcc_fsm
* DESCRIPTION                                                           
*   This procedure is used to dispatch receiving message from CC or L4C 
*   to message handler.
*
* CALLS  
*	csmcc_fsm(ilm_struct *ilm_ptr)
* PARAMETERS
*	*ilm_ptr 	IN	first variable, used as input
* RETURNS
*	success or failure
* GLOBALS AFFECTED
*   
*************************************************************************/
void csmcc_fsm(ilm_struct *ilm_ptr)
{   
   CSMCC_PTR_G_TO_L
   if(ilm_ptr->msg_id >= MSG_ID_MNCC_SETUP_IND
      && ilm_ptr->msg_id <= MSG_ID_MNCC_SIG_CON_REEST_CNF)
   {
      /* msg from CC */
      switch(ilm_ptr->msg_id)
      {
      case MSG_ID_MNCC_SETUP_IND:      
         mncc_setup_ind_hdlr(ilm_ptr->local_para_ptr);
         break;         
      case MSG_ID_MNCC_SETUP_CNF:
         mncc_setup_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_SETUP_COMPL_IND:
         mncc_setup_compl_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_REJ_IND:
         mncc_rej_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_CALL_PROC_IND:
         mncc_call_proc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;  
      case MSG_ID_MNCC_PROGRESS_IND:
         mncc_progress_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_ALERT_IND:
         mncc_alert_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      /*case MSG_ID_MNCC_NOTIFY_IND:*/
      case MSG_ID_MNCC_DISC_IND:
         mncc_disc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_REL_IND:
         mncc_rel_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_REL_CNF:
         mncc_rel_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_FACILITY_IND:
         mncc_facility_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_START_DTMF_CNF:
         mncc_start_dtmf_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_STOP_DTMF_CNF:
         mncc_stop_dtmf_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_MODIFY_IND:
         mncc_modify_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_MODIFY_CNF:
         mncc_modify_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_SYNC_IND:
         mncc_sync_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_RAT_IND:
         mncc_rat_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_HOLD_CNF:
         mncc_hold_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_RETRIEVE_CNF:  
         mncc_retrieve_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      /*case MSG_ID_MNCC_USER_INFO_IND:*/
      /*case MSG_ID_MNCC_CONGESTION_CTRL_IND:*/ 
#ifdef __CCBS_SUPPORT__	  
      case MSG_ID_MNCC_CCBS_EST_IND:
         mncc_ccbs_est_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_CCBS_RECALL_IND:  
         mncc_ccbs_recall_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif /*__CCBS_SUPPORT__*/
#ifdef __AOC_SUPPORT__
      case MSG_ID_MNCC_AOC_IND:  
         mncc_aoc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif
      case MSG_ID_MNCC_SIG_CON_REEST_IND:
         mncc_sig_con_reest_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_MNCC_SIG_CON_REEST_CNF:
         mncc_sig_con_reest_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      default: 
        break;
      }
   }
   else if(ilm_ptr->msg_id >= MSG_ID_L4CCSM_CC_STARTUP_REQ
           && ilm_ptr->msg_id <= MSG_ID_L4CCSM_CC_REL_COMP_REQ)
   {
      /* msg from L4C */            
      if (CSMCC_PTR->sat_file_change_req == KAL_TRUE) /* ALPS00439699 */
      {
          kal_trace(TRACE_WARNING, CSMCC_TRACE_FILE_CHANGE_FOR_SIM_REFRESH);
          csmcc_reject_l4c_req(ilm_ptr);
          return;
      }
#ifdef __GEMINI__
      if (csmcc_valid_request_from_diff_sim(ilm_ptr))
      {
          //DEBUG_ASSERT(0);
          csmcc_reject_l4c_req(ilm_ptr);
          return;
      }
#endif /*(__GEMINI__) */

      if( (csmcc_valid_l4c_req(ilm_ptr) == KAL_FALSE)||
          (CSMCC_PTR->call_reest == KAL_TRUE
         && csmcc_call_reest_check(ilm_ptr) == KAL_FALSE))
      {
         /* request is not allowable in this moment */
         return;
      }
      
      switch(ilm_ptr->msg_id)
      {
      case MSG_ID_L4CCSM_CC_STARTUP_REQ:
         l4ccsm_cc_startup_req_hdlr(ilm_ptr->local_para_ptr);
         break;
 #ifdef __AOC_SUPPORT__
      case MSG_ID_L4CCSM_CC_ACM_RESET_REQ:
         l4ccsm_cc_acm_reset_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ:
         l4ccsm_cc_acmmax_set_req_hdlr(ilm_ptr->local_para_ptr);
         break;
 #endif
      case MSG_ID_L4CCSM_CC_CALL_DEFLECTION_REQ:
         l4ccsm_cc_call_deflection_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_CRSS_REQ:
         l4ccsm_cc_crss_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_CALL_ACCEPT_REQ:
         l4ccsm_cc_call_accept_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_CALL_DISC_REQ:
         l4ccsm_cc_call_disc_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_REL_COMP_REQ:
         l4ccsm_cc_rel_comp_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_CALL_MODIFY_REQ:
         l4ccsm_cc_call_modify_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_CALL_SETUP_REQ:
         l4ccsm_cc_call_setup_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_EMERGENCY_CALL_SETUP_REQ:
         l4ccsm_cc_emergency_call_setup_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_START_DTMF_REQ:
         l4ccsm_cc_start_dtmf_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_STOP_DTMF_REQ:
         l4ccsm_cc_stop_dtmf_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_L4CCSM_CC_AUTO_DTMF_START_REQ:
         l4ccsm_cc_auto_dtmf_start_req_hdlr(ilm_ptr->local_para_ptr);
         break;
#ifdef __SAT__         
      case MSG_ID_L4CCSM_CC_SAT_SETUP_REQ:
         l4ccsm_cc_sat_setup_req_hdlr(ilm_ptr->local_para_ptr,
                                      ilm_ptr->peer_buff_ptr);
         break;
      case MSG_ID_L4CCSM_CC_SAT_SEND_DTMF_REQ:    
         l4ccsm_cc_sat_send_dtmf_req_hdlr(ilm_ptr->local_para_ptr);
         break;
 	 case MSG_ID_L4CCSM_CC_SAT_ABORT_DTMF_REQ:
         l4ccsm_cc_sat_abort_dtmf_req_hdlr(ilm_ptr->local_para_ptr);
 	    break;
#endif                   
#ifdef __TCPIP_OVER_CSD__
      case MSG_ID_L4CCSM_CC_SET_CSD_PROF_REQ:
         l4ccsm_cc_set_csd_prof_req_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif     
#ifdef __CPHS__
      case MSG_ID_L4CCSM_CC_UPDATE_ALS_REQ:
         l4ccsm_cc_update_als_req_hdlr(ilm_ptr->local_para_ptr);
         break;
      #if defined (__CCM_NO_RESET__) && defined (__LAST_CCM_RESET__) && (__AOC_SUPPORT__)
	 /* MAUI_01938414 [CSMCC][Revise] support reset last ccm */
      case MSG_ID_L4CCSM_CC_LAST_CCM_RESET_REQ:
         l4ccsm_cc_reset_last_ccm_req_hdlr(ilm_ptr->local_para_ptr);
		 break;
      #endif
#endif
#if defined(__CSD_T__) || defined(__CSD_NT__) 
      case MSG_ID_L4CCSM_CC_UART_TRANSFER_REQ:
         l4ccsm_cc_uart_transfer_req_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif
#ifdef __AUTO_CALL_REJECTION__
      case MSG_ID_L4CCSM_CC_CALL_PRESENT_RSP:
         l4ccsm_cc_call_present_rsp_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif 
      case MSG_ID_L4CCSM_CC_ABORT_CALL_REQ: 
         csmcc_send_cc_abort_call_req();
         break;
      default:
        break;
      }
   }
   else if(ilm_ptr->msg_id >= MSG_ID_CSM_TDT_ACTIVATE_CNF
           && ilm_ptr->msg_id <= MSG_ID_CSM_T30_DISC_IND)
   {
      /* msg from TDT, L2R, or T30 */
      switch(ilm_ptr->msg_id)
      {         
#ifdef __CSD_T__         
      case MSG_ID_CSM_TDT_ACTIVATE_CNF:
         csmcc_tdt_activate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_TDT_DEACTIVATE_CNF:
         csmcc_tdt_deactivate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_TDT_ESC_ON_IND:
         hold_local_para(ilm_ptr->local_para_ptr);   
         csmcc_send_ilm(ilm_ptr->local_para_ptr, 
                  MSG_ID_L4CCSM_CC_UART_TRANSFER_IND, MOD_L4C,NULL);
         break;
      case MSG_ID_CSM_TDT_DISC_IND:
         csmcc_data_disc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif
#ifdef __CSD_NT__         
      case MSG_ID_CSM_L2R_ACTIVATE_CNF:
         csmcc_l2r_activate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_L2R_DEACTIVATE_CNF:
         csmcc_l2r_deactivate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_L2R_XID_IND:
         csmcc_l2r_xid_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_L2R_DISC_IND:
         csmcc_data_disc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_L2R_ESC_ON_IND:
         hold_local_para(ilm_ptr->local_para_ptr);   
         csmcc_send_ilm(ilm_ptr->local_para_ptr, 
                  MSG_ID_L4CCSM_CC_UART_TRANSFER_IND, MOD_L4C,NULL);
         break;
#endif      
#ifdef __CSD_FAX__
      case MSG_ID_CSM_T30_ACTIVATE_CNF:
         csmcc_t30_activate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_T30_DEACTIVATE_CNF:
         csmcc_t30_deactivate_cnf_hdlr();
         break;
      case MSG_ID_CSM_T30_FAX_RATE_CNF:
         /* not used now, reserved. */
         break;
      case MSG_ID_CSM_T30_DISC_IND:
         csmcc_t30_disc_ind_hdlr();
         break;
#endif
      default:
         break;
      }
   }
   else
   {
      /* other msgs */
      switch(ilm_ptr->msg_id)
      {
      case MSG_ID_TIMER_EXPIRY:
    	 csmcc_timer_expiry_hdlr();
	 break;
      case MSG_ID_SIM_READ_CNF:
         csmcc_sim_read_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
#ifdef __AOC_SUPPORT__
      case MSG_ID_SIM_WRITE_CNF:
         csmcc_sim_write_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_SIM_INCREASE_CNF:
         csmcc_sim_increase_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif
      case MSG_ID_NVRAM_READ_CNF:
         csmcc_nvram_read_cnf_hdlr(ilm_ptr->local_para_ptr,
                                   ilm_ptr->peer_buff_ptr);
         break;
#ifdef __SAT__
      case MSG_ID_SAT_CALL_CTRL_BY_SIM_CNF:
         csmcc_sat_call_ctrl_by_sim_cnf_hdlr(ilm_ptr->local_para_ptr,
                                             ilm_ptr->peer_buff_ptr);
         break;
      case MSG_ID_SAT_FILE_CHANGE_IND:
         csmcc_sat_file_change_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif /* __SAT__ */

#if defined(__TCPIP_OVER_CSD__) || defined(__CPHS__)      
      case MSG_ID_NVRAM_WRITE_CNF:
         csmcc_nvram_write_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif          
#ifdef __VIDEO_CALL_SUPPORT__
      case MSG_ID_CSM_VT_ACTIVATE_CNF:
         csmcc_vt_activate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_VT_DEACTIVATE_CNF:
         csmcc_vt_deactivate_cnf_hdlr(ilm_ptr->local_para_ptr);
         break;
      case MSG_ID_CSM_VT_DISC_IND:
         csmcc_vt_disc_ind_hdlr(ilm_ptr->local_para_ptr);
         break;
#endif
#ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
      default: 
         break;
      }
   }
                 
} /* end of csmcc_fsm */



