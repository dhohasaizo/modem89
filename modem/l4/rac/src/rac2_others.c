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
 * rac_others.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for message handlers of RAC.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#define RAC2_OTHERS_C

#ifdef __MOD_RAC__
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "task_config.h"
#include "svc_sap.h"
#include "drv_msgid.h"
#include "md_sap.h"
#include "nvram_msgid.h"
#include "l4_msgid.h"
#include "mm_msgid.h"
#include "sim_ps_msgid.h"

#ifdef __MTK_INTERNAL__ 
/* under construction !*/
#endif /* __MTK_INTERNAL__ */   

#include "ps_public_enum.h"
#include "mm_mmi_enums.h"
#include "l4crac_enums.h"
#include "l3_inc_enums.h"
#include "nvram_enums.h"
#include "nvram_data_items.h"
#ifdef __GEMINI__
#include "sim_public_enum.h"
#include "ps_public_utility.h"
#endif /* __GEMINI__ */

#include "nvram_struct.h"
#include "mcd_l3_inc_struct.h"
#include "l3_inc_local.h"
#include "mmi2mm_struct.h"
#include "rac2l4c_struct.h"
#ifdef __SAT__
#include "sim_common_enums.h"
#include "ps2sat_struct.h"
#endif

#include "rac_defs.h"
#include "rac_context.h"
#include "rac_hdlrs.h"
#include "rac_others.h"
#include "rac_trc.h"
#include "l4crac_func.h"

#include "l4_ps_api.h"


#ifdef __GEMINI__
/* MAUI_02838008 [Gemini+] MM checkin */
extern rac_context_struct rac_context[MAX_SIM_NUM];
#endif

#if defined(__UMTS_FDD_MODE__) && !defined(UNIT_TEST)
//mtk02475: for FDD UMTS HW band customization
#include "ul1d_rf_public.h"
#endif

#if !defined(UNIT_TEST)
#include "l1_interface.h"
#endif

/*****************************************************************************
* FUNCTION
*  rac_set_action
* DESCRIPTION
*   change RAC current action to next actioin
*   clean up related RAC context prevent miss-used in later action
*
* PARAMETERS
*  next_action  IN   next RAC action
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   set action will also clean-up service_to_be_reg/service_to_be_dereg and plmn search/list retry/guard context
*****************************************************************************/
void rac_set_action(rac_action_enum next_action)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (rac_ptr_g->current_action != next_action)
    {
         /* mtk03643: ALPS00085749 to prevent other actions interrupt activating and corrupt RAC_PREFERENCE */
        if(rac_ptr_g->current_action <= RAC_ACTIVATION) 
        {
            switch(next_action)
            {
                case RAC_IDLE:
                case RAC_ACTIVATION:
                case RAC_NULL:
                    break;
                default:
                    ASSERT(0);
                    return ;
            }
        }
        
        switch(rac_ptr_g->current_action)
        {
            case RAC_SELECT_PLMN:
                /* mtk00714: RAC2 revise */
                if (rac_ptr_g->plmn_search_req_ptr != NULL )
                {
                    free_local_para(rac_ptr_g->plmn_search_req_ptr);
                    rac_ptr_g->plmn_search_req_ptr = NULL;
                }
                /* mtk03643 reset retry counter inside cancel functions */
                rac_cancel_retry_timer_hdlr(RAC_RETRY_PLMN_SEARCH_TIMER_ID);
                
                break;
            
            case RAC_PLMN_LIST:
                rac_cancel_retry_timer_hdlr(RAC_RETRY_PLMN_LIST_TIMER_ID);
                #ifdef __RAC_GUARD_PLMN_LIST__
                rac_cancel_timer(RAC_PLMN_LIST_GUARD_TIMER_ID);;
                #endif
                break;

#ifdef __CSG_SUPPORT__
            case RAC_CSG_LIST:
                if (rac_ptr_g->csg_list_req_ptr != NULL )
                {
                    free_local_para(rac_ptr_g->csg_list_req_ptr);
                    rac_ptr_g->csg_list_req_ptr = NULL;
                }
                rac_cancel_retry_timer_hdlr(RAC_RETRY_CSG_LIST_TIMER_ID);
                rac_cancel_csg_list_guard_timer();
                break;
#endif /* __CSG_SUPPORT__ */

            default:
                break;
        }   
        
        rac_ptr_g->current_action = next_action;
        rac_ptr_g->service_to_be_reged = DOMAIN_NONE;
        rac_ptr_g->service_to_be_dereged = DOMAIN_NONE;
    }
    
    kal_brief_trace(TRACE_INFO,RAC_CURRENT_ACTION, next_action);
}

/*****************************************************************************
* FUNCTION
*  rac_make_imei
* DESCRIPTION
*   The IMEI stored is in BCD format, and this routine transform it to
* the format deinfed in spec. 24.008 10.5.1.4.
*
* PARAMETERS
*  imei  IN   the buffer to stored IMEI
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_make_imei(kal_uint8* imei)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
   /* 10.5.1.4
   *
   *   Length
   *   d1  |O/E| Type
   *   d3  d2
   *   d5  d4
   *     ...
   *   d15 d14
   */
   kal_uint8 i;   
   /* length */
   imei[0]       =  8 ; /* IMEI is 15 digit*/

   /* 15 is odd */
   imei[1] = (1<<3) | IMEI_TYPE;   
   imei[1] |=   rac_ptr_g->imei[0] << 4;
   
   for(i=0;i < 7; i++)
   {
      imei[i+2] 
               =  (rac_ptr_g->imei[i] >> 4)  | (rac_ptr_g->imei[i+1] << 4);
   }
   /*
     As an example, if the IMEI of the mobile is "123456789012345" then XX XX XX XX XX XX XX XX = 1A 32 54 76
     98 10 32 04. For further details see also TS 24.008 [10], clause 10.5.1.
     */
   /* 15th digit should be zero for IMEI */
   imei[8] &= 0x0F;
   
}

/*****************************************************************************
* FUNCTION
*  rac_make_imeisvn
* DESCRIPTION
*   The IMEISVN stored is in BCD format, and this routine transform it to
* the format deinfed in spec. 24.008 10.5.1.4.
*
* PARAMETERS
*  imeisvn  IN   the buffer to stored IMEISVN
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_make_imeisvn(kal_uint8* imeisvn)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
   /* 10.5.1.4
   *
   *   Length
   *   d1  |O/E| Type
   *   d3  d2
   *   d5  d4
   *     ...
   *   d15 d14
   *   0xf  d16
   */
   kal_uint8 i;   
   /* length */
   imeisvn[0]       =  9 ; /* IMEISVN is 16 digit*/

   /* 16 is even */
   imeisvn[1] = /*(0<<3) |*/ IMEISV_TYPE;   
   imeisvn[1] |=   rac_ptr_g->imei[0] << 4;
   
   for(i=0;i < 6; i++)
   {
      imeisvn[i+2] 
               =  (rac_ptr_g->imei[i] >> 4)  | (rac_ptr_g->imei[i+1] << 4);
   }
   /*        
     As an example, if the IMEISV of the ME is "1234567890123456" then XX XX XX XX XX XX XX XX XX= 13 32 54
     76 98 10 32 54 F6. For further details see also ETSI TS 124.008 [7].
     */
   imeisvn[8] = ((rac_ptr_g->imei_svn << 4) & 0xF0) | ((rac_ptr_g->imei[6] >> 4) & 0x0F);
   /* 17th digit should be 0xF for IMEISVN */
   imeisvn[9] = ((rac_ptr_g->imei_svn >> 4) & 0x0F) | 0xF0;

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
/*****************************************************************************
* FUNCTION
*  rac_reset_cell_info_rat
* DESCRIPTION
*   reset the cell info in context
*
* PARAMETERS
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_reset_cell_info_rat()
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    kal_mem_set(&(rac_ptr_g->current_cell_rat), 0, sizeof (cell_info_and_rat_struct));

    rac_ptr_g->is_on_hplmn = KAL_FALSE;

    /*when enter no service, limited service, flight mode or set rat mode,
      reset this context. 
     */
    rac_ptr_g->cell_data_speed_support = NONE_SPECIFIED;
}

/*****************************************************************************
* FUNCTION
*  rac_l4c_act_req_handler
* DESCRIPTION
*   rac_l4c_act_req_handler handles L4C_RAC_ACT_REQ ilm.
*
* PARAMETERS
*  ilm_ptr  IN   Inter layer messages.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_ilm(module_type dest_mod, sap_type sap_id, msg_type msg_id, local_para_struct *local_para_ptr)
{
    module_type new_dest_mod = dest_mod;

#ifdef __GEMINI__ 
    if (dest_mod != MOD_NVRAM)
    {
        new_dest_mod = (module_type)(dest_mod + rac_ptr_global->sim_interface);
    }
#endif   

    msg_send5((module_type)RAC_MODULE_ID, new_dest_mod, sap_id, msg_id, local_para_ptr);

} /* end of rac_send_ilm */

/*****************************************************************************
* FUNCTION
*  rac_get_nvram_record_id
* DESCRIPTION
*   This funciton will return NVRAM record id based on current SIM id.
*
* PARAMETERS
*  N/A
*
* RETURNS
*  NVRAM record id for corresponding SIM
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_uint16 rac_get_nvram_record_id()
{
#ifdef __GEMINI__
   /* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
   //mtk02475: for 3G SIM switchable feature, need to query physical SIM id mapping from L4C
   return 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum)(rac_ptr_global->sim_interface));
#else /* __GEMINI__ */
   /* normal project */
   return 1;
#endif /* __GEMINI__ */
}

/*****************************************************************************
* FUNCTION
*  rac_read_from_nvrm
* DESCRIPTION
*   This funciton will send read request to NVRAM.
*
* PARAMETERS
*  nvram_id  IN   the requested NVRAM Logic ID.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_read_from_nvrm(nvram_lid_enum nvram_id)
{
   nvram_read_req_struct* nvram_read_req;

   nvram_read_req = (nvram_read_req_struct*)construct_local_para(
                                             sizeof(nvram_read_req_struct), 
                                             TD_CTRL);
   nvram_read_req->file_idx = nvram_id;

   nvram_read_req->para = rac_get_nvram_record_id();

   nvram_read_req->rec_amount = 0;   
   nvram_read_req->access_id = 0;
   rac_send_ilm(MOD_NVRAM,PS_NVRAM_SAP,MSG_ID_NVRAM_READ_REQ,
                                 (local_para_struct*) nvram_read_req);
}

/*****************************************************************************
* FUNCTION
*  rac_read_from_nvrm_svn
* DESCRIPTION
*   This funciton will send read request to NVRAM to read SV
*
* PARAMETERS
*  none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_read_from_nvrm_svn(void)
{
   nvram_read_req_struct* nvram_read_req;

   nvram_read_req = (nvram_read_req_struct*)construct_local_para(
                                             sizeof(nvram_read_req_struct), 
                                             TD_RESET);
   
   nvram_read_req->file_idx = NVRAM_EF_SYS_CACHE_OCTET_LID;
   nvram_read_req->para = NVRAM_SYS_SVN;
   nvram_read_req->rec_amount = 1;

   rac_send_ilm(MOD_NVRAM,PS_NVRAM_SAP, MSG_ID_NVRAM_READ_REQ,
                                 (local_para_struct*) nvram_read_req);
}

/*****************************************************************************
* FUNCTION
*  rac_send_reg_cnf
* DESCRIPTION
*   send L4CRAC_REG_CNF to L4c.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_reg_cnf(mm_cause_enum cause)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   l4crac_reg_cnf_struct *reg_cnf;
   l4c_rac_response_enum gsm_status = rac_get_gsm_status();
   l4c_rac_gprs_status_enum gprs_status = rac_get_gprs_status();

   reg_cnf = (l4crac_reg_cnf_struct *) 
               construct_local_para( sizeof(l4crac_reg_cnf_struct),
                                     TD_CTRL);

   reg_cnf->src_id = rac_ptr_g->src_id;
   reg_cnf->plmn_sel_mode = rac_ptr_g->plmn_sel_mode;

   reg_cnf->gsm_status = gsm_status;
   reg_cnf->gprs_status =  gprs_status;

   reg_cnf->cell_info = rac_ptr_g->current_cell_rat;
   /* MAUI_01650679, __NW_REGISTRATION_CAUSE__ */
   reg_cnf->cause = cause;
   /* SP for CGREG/CREG indication, L4 only get latest information via indication instead of utility function. 
   e.g. 2G->3G CS updated but will get rejected, do not show 3G CS updated (PS registration result ahead of CS) before CS registration result */
   reg_cnf->cell_data_speed_support = rac_ptr_g->cell_data_speed_support;

/* 
   reg_cnf->scanned_plmn_list_len = list_no;

   if (list_no > 0)
   {
      kal_uint8 i;
      for(i =0 ;i < list_no; i++)
      {
         kal_mem_cpy( & reg_cnf->plmn_list[i].plmn_id,
                      & plmn_list[i],
                      sizeof(plmn_info_struct));
         reg_cnf->plmn_list[i].status = plmn_status[i];
      }
   }
*/
   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_REG_CNF,
                 (local_para_struct*) reg_cnf);  

   kal_brief_trace(TRACE_INFO,RAC_L4C_GET_ATTACH_STATUS, 
                    rac_get_gsm_state(), 
                    gsm_status,
                    rac_get_gprs_state(), 
                    gprs_status);
                 
   /* Johnny: */                 
   kal_mem_set(&(rac_ptr_g->last_l4crac_reg_state_ind), 0, sizeof (l4crac_reg_state_ind_struct));                  
}

/*****************************************************************************
* FUNCTION
*  rac_send_plmn_list_cnf
* DESCRIPTION
*   This funciton will send plmn list confirm to L4C.
*
* PARAMETERS
*  list_no      IN  Number of list
*  plmn_list    IN  PLMN ID list
*  plmn_status  IN  PLMN status
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
/*    mtk01778, 2007/07/31: Vary the function interface to pass parameter pointer instead of parameter value. 
       This is due to passing parameter value will increase the RAC stack size. For example, 
       if we receive GMMREG_PLMN_LIST_STOP_CNF triggering by timeout, we need to pass a fake plmn list 
       (temp_plmn_list) to this function. That will enlarge RAC stack size with more than 224 bytes (32*7). { 
*/
void rac_send_plmn_list_cnf(rac_plmn_list_struct *plmn_list, l4c_rac_response_enum response, mm_cause_enum cause, kal_uint8 num_of_hplmn)	   
/* } mtk01778, 2007/07/31 */ 
{
   l4crac_plmn_list_cnf_struct *list_cnf;

   list_cnf = (l4crac_plmn_list_cnf_struct *) 
               construct_local_para( sizeof(l4crac_plmn_list_cnf_struct),
                                     TD_CTRL);

   list_cnf->src_id = rac_ptr_global->src_id;
   //list_cnf->src_id = rac_ptr_g->plmn_list_src_id; /* John Tang 2004/02/12 */
   list_cnf->response = response;
   list_cnf->cause = cause;
   list_cnf->num_of_hplmn = num_of_hplmn;

   if (response == L4C_RAC_ERROR)
   {
      list_cnf->plmn_list.plmn_count = 0;
   }
   else if (response == L4C_RAC_OK)
   {
    /* mtk01778, 2007/07/31: Vary the function interface to pass parameter pointer instead of parameter value. 
       This is due to passing parameter value will increase the RAC stack size. For example, 
       if we receive GMMREG_PLMN_LIST_STOP_CNF triggering by timeout, we need to pass a fake plmn list 
       (temp_plmn_list) to this function. That will enlarge RAC stack size with more than 224 bytes (32*7). { */
      if (plmn_list != NULL)
      {
         kal_mem_cpy(&(list_cnf->plmn_list), plmn_list, sizeof (rac_plmn_list_struct));   
      }
      else
      {
         ASSERT(0);
      }
    /* } mtk01778, 2007/07/31 */    

   }
     
   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PLMN_LIST_CNF,
                 (local_para_struct*) list_cnf);
}
/*****************************************************************************
* FUNCTION
*  rac_send_plmn_list_stop_cnf
* DESCRIPTION
*   This funciton will send plmn list stop confirm to L4C.
*
* PARAMETERS
* none
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_plmn_list_stop_cnf()
{
    l4crac_plmn_list_stop_cnf_struct *l4crac_msg_ptr;        

    l4crac_msg_ptr =
           (l4crac_plmn_list_stop_cnf_struct *) 
           construct_local_para(sizeof(l4crac_plmn_list_stop_cnf_struct),TD_CTRL);

    l4crac_msg_ptr->src_id = rac_ptr_global->src_id;

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PLMN_LIST_STOP_CNF,
           (local_para_struct*) l4crac_msg_ptr);
}
/*****************************************************************************
* FUNCTION
*  rac_send_reg_ind
* DESCRIPTION
*   This funciton will send register confirm to L4C.
*
* PARAMETERS
*   none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_reg_ind(domain_id_enum service, rac_send_reg_ind_enum send_reg_ind, mm_cause_enum cause)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   l4c_rac_response_enum gsm_status;
   l4c_rac_gprs_status_enum gprs_status;
   reg_state_enum gsm_state, gprs_state;
   kal_bool temp_searching = KAL_FALSE;

    /* MAUI_02231381 mtk02475: hind unexpected state update during PLMN SEARCH */
    if (rac_ptr_g->current_action == RAC_SELECT_PLMN) {
        if (rac_ptr_g->rac_mm_state != RAC_MM_NULL && rac_ptr_g->rac_mm_state != RAC_MM_SEARCHING)
        {
            rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
            rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;
            temp_searching = KAL_TRUE;
        }
    }

   gsm_status = rac_get_gsm_status();
   gprs_status = rac_get_gprs_status();
   gsm_state = rac_get_gsm_state();
   gprs_state = rac_get_gprs_state();
            
    /* mtk02475: restore correct gmm_state */
    if (temp_searching == KAL_TRUE) {
        rac_ptr_g->rac_mm_state = rac_ptr_g->previous_rac_mm_state;
    }
            
   /* To aviod too many primitives exchange, check if the new content 
   of "l4crac_reg_state_ind_struct" is same as sent last time. */
   if ( 
      (rac_is_cell_info_equal( &rac_ptr_g->current_cell_rat.cell_info , &rac_ptr_g->last_l4crac_reg_state_ind.cell_info.cell_info ) ) &&
      rac_ptr_g->current_cell_rat.rat == rac_ptr_g->last_l4crac_reg_state_ind.cell_info.rat &&
      (gsm_status == rac_ptr_g->last_l4crac_reg_state_ind.gsm_status) &&
      (gprs_status == rac_ptr_g->last_l4crac_reg_state_ind.gprs_status) &&      
      (gsm_state == rac_ptr_g->last_l4crac_reg_state_ind.gsm_state) &&
      (gprs_state == rac_ptr_g->last_l4crac_reg_state_ind.gprs_state) &&
      send_reg_ind != RAC_ALWAYS_SEND &&
      ((domain_id_enum)service == rac_ptr_g->last_l4crac_reg_state_ind.domain) &&
      rac_ptr_g->last_l4crac_reg_state_ind.cause == cause
   )
   {
      kal_brief_trace(TRACE_INFO, RAC_SAME_SEND_REG_IND);   
      return;
   }

   /* Update the last content in "l4crac_reg_state_ind_struct" */
   rac_ptr_g->last_l4crac_reg_state_ind.gprs_status = gprs_status;
   rac_ptr_g->last_l4crac_reg_state_ind.gprs_state = gprs_state;
   rac_ptr_g->last_l4crac_reg_state_ind.gsm_status = gsm_status;
   rac_ptr_g->last_l4crac_reg_state_ind.gsm_state = gsm_state;   
   /* SP for CGREG/CREG indication, L4 only get latest information via indication instead of utility function. 
      e.g. 2G->3G CS updated but will get rejected, do not show 3G CS updated (PS registration result ahead of CS) before CS registration result */
   rac_ptr_g->last_l4crac_reg_state_ind.cell_data_speed_support = rac_ptr_g->cell_data_speed_support;

   rac_ptr_g->last_l4crac_reg_state_ind.cell_info = rac_ptr_g->current_cell_rat;
   rac_ptr_g->last_l4crac_reg_state_ind.domain = (domain_id_enum)service;
   /* MAUI_01650679, __NW_REGISTRATION_CAUSE__ */
   if( send_reg_ind == RAC_ALWAYS_NOT_SEND && 
       rac_ptr_g->current_action == RAC_SELECT_PLMN &&
       cause == CAUSE_NONE)
   {
       /* If action is select plmn, then if nw reject MS' LR,
        * RAC will not send regState Ind to L4C after receiving detach ind. 
        * It will wait for MM plmn search cnf to notify the reject cause.  
        * However, in case of reject cause#11,#13, or #15, MM will not send the 
        * PLMN search cnf with the reject cause immediatelly but just continue to 
        * try the next PLMN. Since the reg cause will be changed by trying next PLMN,
        * we can't rely on the cause in MM plmn search cnf. 
        * Therefore, don't update the last reg cause if we get a MTK proprietary cause. 
        * And the last reg cause will be utilized when sending the plmn search cnf to L4C. 
        */
   }
   else
   {
       rac_ptr_g->last_l4crac_reg_state_ind.cause = cause;
   }

                
    /* Johnny: reg_state_ind only for PS_SERVICE, LMMI should not care gsm_status */
    /* mtk03643 : the parameter 'service' is what domain MM wants to update. 
        do not want the PS update status affects CS domain display, update PS domain but set CS domain as searching
        to ensure next reg_state_ind will be sent.
       */
   if (service == PS_DOMAIN && send_reg_ind == RAC_ALWAYS_NOT_SEND)
   {
      rac_ptr_g->last_l4crac_reg_state_ind.gsm_status = L4C_RAC_SEARCHING;	
   } 
   
   if (send_reg_ind != RAC_ALWAYS_NOT_SEND)
   {
      l4crac_reg_state_ind_struct *reg_ind;   
      
      reg_ind = (l4crac_reg_state_ind_struct *) 
               construct_local_para( sizeof(l4crac_reg_state_ind_struct),
                                     TD_CTRL);

      rac_ptr_g->last_l4crac_reg_state_ind.ref_count = reg_ind->ref_count;
      rac_ptr_g->last_l4crac_reg_state_ind.msg_len = reg_ind->msg_len;

      kal_mem_cpy(reg_ind,
                &rac_ptr_g->last_l4crac_reg_state_ind, 
                sizeof(l4crac_reg_state_ind_struct));
      
      rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_REG_STATE_IND,
                 (local_para_struct*) reg_ind);   

      kal_brief_trace(TRACE_INFO,RAC_L4C_GET_ATTACH_STATUS, 
                    gsm_state, 
                    gsm_status,
                    gprs_state, 
                    gprs_status);
   }
}

/*****************************************************************************
* FUNCTION
*  rac_send_dereg_cnf
* DESCRIPTION
*   This funciton will send deregister confirm to L4C.
*
* PARAMETERS
* none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_dereg_cnf()
{
   l4crac_dereg_cnf_struct *dereg_cnf =
             (l4crac_dereg_cnf_struct *) 
                  construct_local_para(sizeof(l4crac_dereg_cnf_struct),TD_CTRL);
   
   
   dereg_cnf->src_id = rac_ptr_global->src_id;
   //dereg_cnf->service = service;

   //dereg_cnf->status = rac_get_gsm_status();

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_DEREG_CNF,
                 (local_para_struct*) dereg_cnf);
}

/*****************************************************************************
* FUNCTION
*  rac_send_plmn_sel_cnf
* DESCRIPTION
*   This funciton will send plmn sel confirm to L4C.
*
* PARAMETERS
* none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_plmn_search_cnf(l4c_rac_response_enum gsm_status, mm_cause_enum cause)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   l4crac_plmn_search_cnf_struct *sel_cnf =
             (l4crac_plmn_search_cnf_struct *) 
                  construct_local_para(sizeof(l4crac_plmn_search_cnf_struct),TD_CTRL);
   
   /* John Tang 2004/07/19 */
   sel_cnf->src_id = rac_ptr_g->src_id;
   //sel_cnf->src_id = rac_ptr_g->plmn_sel_src_id;
  

	sel_cnf->gsm_status = gsm_status;


  
   //sel_cnf->gsm_status =  rac_get_gsm_status();
   /* John Tang 2004/07/30: Don't forget the GPRS response. It happens in China FT,
   Ian find that after GPRS is detached, if user performs PLMN SEL and then interrupt 
   by incoming MT call, G icon appears again. The reason is that we don't set the value
   in "gprs_response" so that it may be "0" means "GPRS_ATTACHED" in 
   l4c_rac_gprs_status_enum type. */

   sel_cnf->gprs_status =  rac_get_gprs_status();

   sel_cnf->cause = cause;
   /* SP for CGREG/CREG indication, L4 only get latest information via indication instead of utility function. 
      e.g. 2G->3G CS updated but will get rejected, do not show 3G CS updated (PS registration result ahead of CS) before CS registration result */
   sel_cnf->cell_data_speed_support = rac_ptr_g->cell_data_speed_support;
/* mtk02475:
 * L4C need correct current cell/RAT info to update registration status for CREG/CGREG
 * RAC should copy cell info under any circumstance
 */
//if (gsm_status != L4C_RAC_ERROR)
{
   sel_cnf->cell_info = rac_ptr_g->current_cell_rat;
} 
   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PLMN_SEARCH_CNF,
                 (local_para_struct*) sel_cnf);
   
   kal_brief_trace(TRACE_INFO,RAC_L4C_GET_ATTACH_STATUS, 
                    rac_get_gsm_state(), 
                    rac_get_gsm_status(),
                    rac_get_gprs_state(), 
                    rac_get_gprs_status());   

}

void rac_send_set_rat_mode_cnf(kal_bool result, mm_cause_enum cause)
{
    l4crac_set_rat_mode_cnf_struct *l4crac_msg_ptr =
                                       (l4crac_set_rat_mode_cnf_struct *) 
                                       construct_local_para(sizeof(l4crac_set_rat_mode_cnf_struct),TD_CTRL);

    l4crac_msg_ptr->src_id = rac_ptr_global->src_id;
    l4crac_msg_ptr->result = result;
    l4crac_msg_ptr->cause = cause;

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SET_RAT_MODE_CNF,
                           (local_para_struct*) l4crac_msg_ptr);
}

#ifdef __UE_EFOPLMN__
void rac_send_ue_oplmn_update(kal_bool is_update_needed, kal_uint16 no_oplmn_entry, kal_uint8 *oplmn_data)
{
    gmmreg_ue_oplmn_update_req_struct *gmmreg_msg_ptr =
                                       (gmmreg_ue_oplmn_update_req_struct *) 
                                       construct_local_para(sizeof(gmmreg_ue_oplmn_update_req_struct),TD_CTRL);

    gmmreg_msg_ptr->is_update_needed = is_update_needed;
    gmmreg_msg_ptr->no_oplmn_entry = no_oplmn_entry;
    gmmreg_msg_ptr->oplmn_data = oplmn_data;
    gmmreg_msg_ptr->ue_oplmn_ver[0] = rac_ptr_global->ue_oplmn_ver[0];
    gmmreg_msg_ptr->ue_oplmn_ver[1] = rac_ptr_global->ue_oplmn_ver[1];

    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_UE_OPLMN_UPDATE_REQ,
                                          (local_para_struct*)gmmreg_msg_ptr);
}
#endif

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
#endif
/*****************************************************************************
* FUNCTION
*  rac_copy_imei_imeisv
* DESCRIPTION
*   This funciton will copy imei and imeisv.
*
* PARAMETERS
*  pdu_ptr   imeisv buffer.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_copy_imei_imeisv(kal_uint8 *pdu_ptr)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
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
   kal_mem_cpy( (void*) rac_ptr_g->imei,
                (void*) pdu_ptr,
                8);

   /* unused digit should be 0xF */
   rac_ptr_g->imei[7] |= 0xF0;
   //rac_ptr_g->imei[7] = 0xF0; //15th digit is spare bit and should be 0
   
   /* copy to local parameter to be sent */

#if 0
#ifdef __GEMINI__
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

   rac_ptr_g->imei_svn = pdu_ptr[8];

   /* convert to MM expect order of imei_svn */
   rac_ptr_g->local_para_ptr->imei_svn =  ((rac_ptr_g->imei_svn & 0x0F) << 4) | ((rac_ptr_g->imei_svn & 0xF0) >> 4);
   rac_make_imei(rac_ptr_g->local_para_ptr->imei);
}

/*****************************************************************************
* FUNCTION
*  rac_send_plmn_sel_cnf
* DESCRIPTION
*   This funciton will copy rac perference.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_copy_rac_perference(kal_uint8 *pdu_ptr)
{
   kal_uint8 service;
   kal_uint8 hw_gsm_band = 0;
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   
#if !defined(UNIT_TEST)
   L1D_UeBandCapability(&hw_gsm_band);     
#else
   hw_gsm_band = rac_ptr_g->fake_hw_gsm_band_capability;
#endif   
   *pdu_ptr &= hw_gsm_band;
   rac_ptr_g->requested_gsm_band = *pdu_ptr;
   rac_ptr_g->plmn_sel_mode = (plmn_selection_mode_enum)(*(pdu_ptr +1) >> 7);
#if defined(__ANDROID_RIL_SUPPORT__) 
//mtk02475: for Android GEMINI project, AP side will have its own configuration
//          discard auto_attach setting load from NVRAM at power-on
//   rac_ptr_g->auto_attach =(*(pdu_ptr +1) >> 4) &1;  
#else
   rac_ptr_g->auto_attach = (kal_bool)((*(pdu_ptr +1) >> 4) &1);
#endif /* __ANDROID_RIL_SUPPORT__ && __GEMINI__ */
   
   service = ((*(pdu_ptr +1) >> 5) & 3); 
   switch(service)
   {
      case 0:
         rac_ptr_g->prefered_service = CS_DOMAIN;
         rac_ptr_g->mobile_class     = MS_CLASS_CC;
         break;
      case 1:
         rac_ptr_g->prefered_service = PS_DOMAIN;
         rac_ptr_g->mobile_class     = MS_CLASS_CG;
         break;
      case 2:
         rac_ptr_g->prefered_service = CS_DOMAIN;
         rac_ptr_g->mobile_class     = MS_CLASS_B;
         break;
      case 3:
         rac_ptr_g->prefered_service = PS_DOMAIN;
         rac_ptr_g->mobile_class     = MS_CLASS_B;
         break;
      default:
         break;         
   }

   rac_ptr_g->local_para_ptr->plmn_sel_mode = rac_ptr_g->plmn_sel_mode;
   rac_ptr_g->local_para_ptr->requested_gsm_band = rac_ptr_g->requested_gsm_band;
   rac_ptr_g->local_para_ptr->prefered_service = rac_ptr_g->prefered_service;    
   
#ifdef __PLMN_LIST_PREF_SUPPORT__
   /*
    * mtk02475: PLMN_LIST_PREFERENCE
    */
   rac_ptr_g->plmn_list_preference = (plmn_list_preference_enum)((*(pdu_ptr +1)) & 0x01);
   kal_brief_trace(TRACE_INFO, RAC_PLMN_LIST_PREFERENCE, rac_ptr_g->plmn_list_preference);  
#endif    

/* mtk03643: byte[1] bit[2] */
#ifdef __DYNAMIC_ROAMING_SUPPORT__
   rac_ptr_g->is_supporting_roaming = (kal_bool)(((*(pdu_ptr+1)) & 0x02)>>1);
   rac_ptr_g->local_para_ptr->is_supporting_roaming = rac_ptr_g->is_supporting_roaming;
   kal_brief_trace(TRACE_INFO, RAC_ROAMING_SUPPORT_SETTING, rac_ptr_g->is_supporting_roaming); 
#endif

   
#ifdef __CSG_SUPPORT__
   //mtk02475: for Rel8 CSG autonomous search 
   rac_ptr_g->csg_auto_search_preference = (kal_bool)(((*(pdu_ptr +1)) & 0x04) >> 2);
   kal_brief_trace(TRACE_INFO, RAC_CSG_AUTO_SEARCH_PREFERENCE, rac_ptr_g->csg_auto_search_preference);  
#endif /* __CSG_SUPPORT__ */

#ifdef __MM_INTEGRITY_PREF__
   rac_ptr_g->is_disable_integrity_check = (kal_bool)(((*(pdu_ptr+1)) & 0x08)>>3);
   rac_ptr_g->local_para_ptr->is_disable_integrity_check = rac_ptr_g->is_disable_integrity_check;
#endif
   
#if defined(__UMTS_RAT__) && defined(__GSM_RAT__)
#ifdef __GEMINI__
    /*mtk02475: for WG+G GEMINI, SIM2 is GSM only*/

   if (rac_ptr_g->sim_interface != 0) 
   {
       rac_ptr_g->rat_mode = RAT_GSM;
   }
   else
#endif /* __GEMINI__ */
   {
       rac_ptr_g->rat_mode = (rat_enum)(*(pdu_ptr+2));
       ASSERT(rac_ptr_g->rat_mode != RAT_NONE);
   }
#elif defined(__GSM_RAT__)
   rac_ptr_g->rat_mode = RAT_GSM;
#else
   rac_ptr_g->rat_mode = RAT_UMTS;
#endif 
   rac_ptr_g->nvram_rat_mode = rac_ptr_g->rat_mode;

#if (defined(__UMTS_RAT__) && defined(__GSM_RAT__))
   rac_ptr_g->prefer_rat = (rat_enum)((*(pdu_ptr+3)) & 0x03);
// mtk03643: wcdma prefer feature
   rac_ptr_g->irat = (rat_enum)(((*(pdu_ptr+3))>>4) & 0x03);
   rac_ptr_g->local_para_ptr->prefered_rat = rac_ptr_g->prefer_rat;    
#endif
   
#ifdef __UMTS_RAT__
#ifdef __UMTS_FDD_MODE__
   //mtk02475: UMTS band customization
   rac_hardware_support_band_filter(pdu_ptr+4);
#endif /* __UMTS_FDD_MODE__ */
   rac_ptr_g->requested_umts_fdd_band[0] = *(pdu_ptr+4);
   rac_ptr_g->requested_umts_fdd_band[1] = *(pdu_ptr+5);
   rac_ptr_g->requested_umts_fdd_band[2] = *(pdu_ptr+6);
   rac_ptr_g->requested_umts_fdd_band[3] = *(pdu_ptr+7);
   kal_mem_cpy(rac_ptr_g->local_para_ptr->requested_umts_fdd_band, rac_ptr_g->requested_umts_fdd_band, sizeof(kal_uint8)*SIZE_OF_UMTS_BAND);
   kal_brief_trace(TRACE_INFO, RAC_MULTI_BAND, rac_ptr_g->requested_umts_fdd_band[0], rac_ptr_g->requested_umts_fdd_band[1]
                   , rac_ptr_g->requested_umts_fdd_band[2], rac_ptr_g->requested_umts_fdd_band[3], 2);  
#endif

#ifdef __MONITOR_PAGE_DURING_TRANSFER__
   //mtk02475: for test mode, do not turn on gprs_transfer_preference at power-on
   if (is_ps_conf_test_xta_mode() == KAL_FALSE)
   {
       rac_ptr_g->gprs_transfer_preference = (gprs_transfer_preference_enum)((*(pdu_ptr+8)) & 0x03);
   }
   rac_ptr_g->local_para_ptr->prefer= rac_ptr_g->gprs_transfer_preference;
   kal_brief_trace(TRACE_INFO, RAC_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->gprs_transfer_preference);  
#endif

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
   //mtk02475: for test mode, do not turn on peer_gprs_transfer_preference at power-on
   if (is_ps_conf_test_xta_mode() == KAL_FALSE)
   {
       rac_ptr_g->peer_gprs_transfer_preference = (kal_bool)(((*(pdu_ptr+8)) & 0x0C) >> 2);
   }
   kal_brief_trace(TRACE_INFO, RAC_PEER_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->peer_gprs_transfer_preference);  
#endif

#ifdef __HSPA_PREFERENCE_SETTING__
   rac_ptr_g->hspa_preference = (hspa_preference_enum)((*(pdu_ptr+8)) >> 4);
   rac_ptr_g->local_para_ptr->hspa_preference= rac_ptr_g->hspa_preference;
   kal_brief_trace(TRACE_INFO, RAC_HSPA_PREFERENCE, rac_ptr_g->hspa_preference);  
#endif  

   rac_ptr_g->disable_international_roaming_support = ((*(pdu_ptr+9)) & 0x01);
   rac_ptr_g->local_para_ptr->disable_international_roaming_support = rac_ptr_g->disable_international_roaming_support;
   kal_brief_trace(TRACE_INFO, RAC_INTERNATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_international_roaming_support);	 
   
   rac_ptr_g->disable_national_roaming_support = (((*(pdu_ptr+9)) & 0x02) >> 1);
   rac_ptr_g->local_para_ptr->disable_national_roaming_support = rac_ptr_g->disable_national_roaming_support;
   kal_brief_trace(TRACE_INFO, RAC_NATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_national_roaming_support);	   
   
   rac_ptr_g->disable_hhplmn_search_support = (((*(pdu_ptr+9)) & 0x04) >> 2);
   rac_ptr_g->local_para_ptr->disable_hhplmn_search_support = rac_ptr_g->disable_hhplmn_search_support;
   kal_brief_trace(TRACE_INFO, RAC_DISABLE_HPPLMN_SEARCH_SETTING, rac_ptr_g->disable_hhplmn_search_support);	 

   rac_ptr_g->roaming_broker_support = (((*(pdu_ptr+9)) & 0x08) >> 3);
   rac_ptr_g->local_para_ptr->enable_roaming_broker_support = rac_ptr_g->roaming_broker_support;
   kal_brief_trace(TRACE_INFO, RAC_ROAMING_BROKER_SETTING, rac_ptr_g->roaming_broker_support);	 
   
}

/*****************************************************************************
* FUNCTION
*  rac_copy_ms_ra_cap
* DESCRIPTION
*   This funciton will copy ms ra cap.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*#ifdef __PS_SERVICE__ */
/*****************************************************************************
* FUNCTION
*  rac_copy_ms_nw_cap
* DESCRIPTION
*   This funciton will copy ms network capability.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*#ifdef __PS_SERVICE__ */
/*****************************************************************************
* FUNCTION
*  rac_copy_drx_param
* DESCRIPTION
*   This funciton will copy drx parameter.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#ifdef __PS_SERVICE__
void rac_copy_drx_param(kal_uint8 *pdu_ptr)
{
   kal_mem_cpy( (void*) & rac_ptr_global->local_para_ptr->packed_drx_para,
                (void*) pdu_ptr,
                SIZE_OF_DRX_PARAMETER);
}
#endif /* #ifdef __PS_SERVICE__ */
/*****************************************************************************
* FUNCTION
*  rac_copy_classmark1
* DESCRIPTION
*   This funciton will copy classmark1.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/*****************************************************************************
* FUNCTION
*  rac_copy_classmark2
* DESCRIPTION
*   This funciton will copy classmark2.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
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
#endif
/*****************************************************************************
* FUNCTION
*  rac_save_preference
* DESCRIPTION
*   This funciton will save RAC perference to NVRAM.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_save_preference(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   nvram_write_req_struct* nvram_write_req;

   peer_buff_struct* peer_buf_ptr;
   kal_uint8* pdu_ptr;
   kal_uint16 pdu_length;
   kal_uint8  sel_mode_mask;

   ASSERT(rac_ptr_g->current_action > RAC_ACTIVATION);

   /* John Tang 2004/07/09: There is a issue when the handset is performing FTP UP+DL, play 
   MP3, and change MMI GPRS connection between ""Always" and "When needed", the queue of NVRAM
   will be Full due to NVRAM's low task priority. The solution is that ONLY when NVRAM_WRITE_CNF is received 
   shall we send the next NVRAM_WRITE_REQ. Therefore, a counter "nvram_write_counter" is applied. */
   kal_brief_trace(TRACE_INFO, 
  		      RAC_NVRAM_WRITE_COUNT, 
		      rac_ptr_g->nvram_write_counter, 
		     RAC_SEND_NVRAM_REQ);   
   rac_ptr_g->nvram_write_counter++;
   /* Current write request is Not the only request. Already a  NVRAM_WRITE_REQ is ongoing. */
   if (1 != rac_ptr_g->nvram_write_counter)
   {
	return;
   }

   nvram_write_req = (nvram_write_req_struct*)construct_local_para(
                                             sizeof(nvram_write_req_struct), 
                                             TD_CTRL);
   nvram_write_req->file_idx = NVRAM_EF_RAC_PREFERENCE_LID;

   nvram_write_req->para = rac_get_nvram_record_id(); 

   nvram_write_req->access_id = 0;
   
   /* Construct peer buffer */
   // nv item size = 6. (4+2, 2 for multiband)
   peer_buf_ptr = construct_peer_buff(NVRAM_EF_RAC_PREFERENCE_SIZE, 0, 0, TD_CTRL);
   pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
   kal_mem_set(pdu_ptr, 0, NVRAM_EF_RAC_PREFERENCE_SIZE);

   /* Now copy the data to write into peer buffer */   
   *pdu_ptr = rac_ptr_g->requested_gsm_band;
      


   if(rac_ptr_g->plmn_sel_mode == 0)
   {
      sel_mode_mask =0;
   }
   else
   {
      sel_mode_mask = 0x80;
   }

    switch (rac_ptr_g->mobile_class)
    {
    
    case MS_CLASS_CC:
       *(pdu_ptr+1) = sel_mode_mask;
       break;
    case MS_CLASS_CG:
       *(pdu_ptr+1) = (kal_uint8) (sel_mode_mask | (1 << 5 ));
       break;

    case MS_CLASS_B:
       if(rac_ptr_g->prefered_service == CS_DOMAIN)
       {
          *(pdu_ptr+1) = (kal_uint8) ( sel_mode_mask | (2 << 5 ) );
       }
       else
       {
          *(pdu_ptr+1) = (kal_uint8) (sel_mode_mask | (3 << 5 ) );
       }
       break;

    default:
        break;
    }
   
   if(rac_ptr_g->auto_attach)
   {
      *(pdu_ptr+1) |= 0x10;
   }

#ifdef __PLMN_LIST_PREF_SUPPORT__
   /*mtk02475: PLMN_LIST_PREFERENCE*/
   *(pdu_ptr+1) |= (rac_ptr_g->plmn_list_preference & 0x01);
    kal_brief_trace(TRACE_INFO, RAC_PLMN_LIST_PREFERENCE, rac_ptr_g->plmn_list_preference);  
#endif

#ifdef __DYNAMIC_ROAMING_SUPPORT__
       if(rac_ptr_g->is_supporting_roaming)
       {
           *(pdu_ptr+1) |= 0x02;
       }
       kal_brief_trace(TRACE_INFO, RAC_ROAMING_SUPPORT_SETTING, rac_ptr_g->is_supporting_roaming);     
#endif
#ifdef __CSG_SUPPORT__
   //mtk02475: for Rel8 CSG autonomous search 
   *(pdu_ptr+1) |= (kal_uint8)((rac_ptr_g->csg_auto_search_preference << 2) & 0x0C);
   kal_brief_trace(TRACE_INFO, RAC_CSG_AUTO_SEARCH_PREFERENCE, rac_ptr_g->csg_auto_search_preference);  
#endif /* __CSG_SUPPORT__ */

   /* mtk02475:
    * preserve original RAT_MODE setting in NVRAM
    * for 2G only project, PREFER_RAT setting is default RAT_NONE and have no usage
    */
   *(pdu_ptr+2) = rac_ptr_g->nvram_rat_mode;   

#if defined(__UMTS_RAT__) && defined(__GSM_RAT__)
   *(pdu_ptr+3) = rac_ptr_g->prefer_rat | (rac_ptr_g->irat << 4);
#else
   *(pdu_ptr+3) = RAT_NONE | (RAT_NONE << 4);
#endif

    /* mtk02475:
     * for 2G only project, UMTS band setting is default all '0', no need to assign other value
     */
#ifdef __UMTS_RAT__       
      *(pdu_ptr+4) = rac_ptr_g->requested_umts_fdd_band[0];
      *(pdu_ptr+5) = rac_ptr_g->requested_umts_fdd_band[1];
      *(pdu_ptr+6) = rac_ptr_g->requested_umts_fdd_band[2];
      *(pdu_ptr+7) = rac_ptr_g->requested_umts_fdd_band[3];
      kal_brief_trace(TRACE_INFO, RAC_MULTI_BAND, rac_ptr_g->requested_umts_fdd_band[0], rac_ptr_g->requested_umts_fdd_band[1]
                      , rac_ptr_g->requested_umts_fdd_band[2], rac_ptr_g->requested_umts_fdd_band[3], 1);
#endif   
   
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
      *(pdu_ptr+8) = ((kal_uint8)rac_ptr_g->gprs_transfer_preference) & 0x03;
      kal_brief_trace(TRACE_INFO, RAC_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->gprs_transfer_preference);  
#endif

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
      *(pdu_ptr+8) |= (((kal_uint8)rac_ptr_g->peer_gprs_transfer_preference) << 2) & 0x0C;
      kal_brief_trace(TRACE_INFO, RAC_PEER_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->peer_gprs_transfer_preference);  
#endif

#ifdef __HSPA_PREFERENCE_SETTING__
      *(pdu_ptr+8) |= ((kal_uint8)rac_ptr_g->hspa_preference) << 4;
      kal_brief_trace(TRACE_INFO, RAC_HSPA_PREFERENCE, rac_ptr_g->hspa_preference);  
#endif
	  if(rac_ptr_g->disable_international_roaming_support)
	  {
	  	*(pdu_ptr+9) = 0x01;
	  }
	  else
	  {
	  	*(pdu_ptr+9) = 0x00;			  	
	  }
	  kal_brief_trace(TRACE_INFO, RAC_INTERNATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_international_roaming_support);     
	  
	  if(rac_ptr_g->disable_national_roaming_support)
	  {
	  	*(pdu_ptr+9) |= 0x02;
	  }
	  kal_brief_trace(TRACE_INFO, RAC_NATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_national_roaming_support);     
	  if(rac_ptr_g->disable_hhplmn_search_support)
      {
		*(pdu_ptr+9) |= 0x04;
	  }
	  kal_brief_trace(TRACE_INFO, RAC_DISABLE_HPPLMN_SEARCH_SETTING, rac_ptr_g->disable_hhplmn_search_support);     
	  
	  if(rac_ptr_g->roaming_broker_support)
      {
		*(pdu_ptr+9) |= 0x08;
	  }
	  kal_brief_trace(TRACE_INFO, RAC_ROAMING_BROKER_SETTING, rac_ptr_g->roaming_broker_support);     
	  
   msg_send6(
        (module_type)RAC_MODULE_ID,
        MOD_NVRAM,
        PS_NVRAM_SAP,
        MSG_ID_NVRAM_WRITE_REQ,
        (local_para_struct*) nvram_write_req,
        (peer_buff_struct*)  peer_buf_ptr);
}

#if 0  /* Ripple: Remove this function */
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
#endif /* ~ Ripple */

/*****************************************************************************
* FUNCTION
*  rac_save_preference
* DESCRIPTION
*   This funciton will save RAC perference to NVRAM.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_attach_req(domain_id_enum service)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   gmmreg_attach_req_struct * reg_att_req;
         
   reg_att_req = (gmmreg_attach_req_struct *)
                   construct_local_para(sizeof(gmmreg_attach_req_struct),
                                        TD_CTRL);
   reg_att_req->attach_type = service;

   rac_ptr_g->service_to_be_reged = service;
   rac_ptr_g->service_to_be_dereged = DOMAIN_NONE;

   reg_att_req->ready_timer_p = KAL_FALSE; 
   kal_mem_set(&(reg_att_req->ready_timer_value), 0, sizeof(gmmreg_timer_struct));

   if (rac_ptr_g->att_id == 255)
   {
      rac_ptr_g->att_id = 1;
   }
   else
   {
      rac_ptr_g->att_id++;
   }


   reg_att_req->att_id = rac_ptr_g->att_id;

    /* Erica:
       High speed SIM, MM receives SIM_READY before 1st ATTACH_REQ(trigger by RAC_ACT_CNF).
       Therefore even though Phone lock is still on, 
       but since MM "sim_valid_for_cs" flag is TRUE,
       MM will search normal service instead of limited service.
       Therefore L4C needs to decide the search type and passed to RAC and MM */
   reg_att_req->search_type = rac_ptr_g->search_type;

   rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_ATTACH_REQ,
                                          (local_para_struct*)reg_att_req);

}
/*****************************************************************************
* FUNCTION
*  rac_save_preference
* DESCRIPTION
*   This funciton will save RAC perference to NVRAM.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_detach_req(domain_id_enum service,kal_bool is_poweroff)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   gmmreg_detach_req_struct *detach_req;
   
   detach_req = (gmmreg_detach_req_struct *)
               construct_local_para(sizeof(gmmreg_detach_req_struct),TD_CTRL);
   
   detach_req->power_off = is_poweroff;
   detach_req->detach_type = service;
      
   rac_ptr_g->service_to_be_dereged = service;

    /* MAUI_01813028
     * mtk02475: reset service_to_be_reged to NONE_SERVICE
     *           otherwise MMI will receive erroreous REG_STATE_IND
     */
   rac_ptr_g->service_to_be_reged = DOMAIN_NONE;


   if (rac_ptr_g->att_id == 255)
   {
      rac_ptr_g->att_id = 1;
   }
   else
   {
      rac_ptr_g->att_id++;
   }


   detach_req->att_id = rac_ptr_g->att_id;
   
      rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_DETACH_REQ,
               (local_para_struct*)detach_req);

   if ((service == PS_DOMAIN) || (service == CS_PS_DOMAIN))
   {
      rac_send_ps_event_report_ind(ME_DETACH_EVENT);
   }

}

#ifdef __DYNAMIC_BAND_SEL__
/*****************************************************************************
* FUNCTION
*  rac_send_set_band_req
*
* DESCRIPTION
*   send GMMREG_SET_PREFERRED_BAND_REQ to notify AS layer that preferred 
*   band setting has been changed by user.
*
* PARAMETERS
*  change_rat   the RAT that need to update band setting
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_set_band_req(rat_enum change_rat) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    gmmreg_set_preferred_band_req_struct *gmmreg_msg_ptr = 
        (gmmreg_set_preferred_band_req_struct *)construct_local_para(sizeof(gmmreg_set_preferred_band_req_struct),TD_RESET);
    
    #ifdef __GSM_RAT__
    if ((change_rat & RAT_GSM)) 
    {
        gmmreg_msg_ptr->is_gsm_band_present = KAL_TRUE;
        gmmreg_msg_ptr->gsm_band = rac_ptr_g->requested_gsm_band;
    }
    #endif

    #ifdef __UMTS_RAT__
    if ((change_rat & RAT_UMTS)) 
    {
        gmmreg_msg_ptr->is_umts_band_present = KAL_TRUE;
        kal_mem_cpy(gmmreg_msg_ptr->umts_fdd_band, rac_ptr_g->requested_umts_fdd_band, sizeof(kal_uint8)*SIZE_OF_UMTS_BAND);
    }
    #endif
    
    rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_PREFERRED_BAND_REQ,
                           (local_para_struct*) gmmreg_msg_ptr);    
}
#endif
/*****************************************************************************
* FUNCTION
*  rac_handle_class_change
*
* DESCRIPTION
*   This funciton will handle ms class change.
*   rac_ptr_g->mobile_class means new ms class, whereas 
*   prev_ms_class means previous ms class.
*   if L4C request same ms class, rac will returns immediately. 
*   if L4C request different ms class, rac will enable or disable CS/PS domain.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_handle_class_change(ms_mobile_class_enum prev_ms_class)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   RAC_FN_ENTRY_LOG(RAC_FN_rac_handle_class_change); 
    
   /* new ms class */	
   switch(rac_ptr_g->mobile_class)
   {
        case MS_CLASS_B:
        {
            switch(prev_ms_class)
            {
              case MS_CLASS_B:
                if (rac_ptr_g->attach_req_sent != KAL_FALSE)
                {
                    rac_ptr_g->attach_req_sent = KAL_FALSE;
                }
                rac_send_class_change_cnf();
                break;
        
              case MS_CLASS_CG:
                rac_ptr_g->attach_req_sent = KAL_TRUE;
                rac_send_attach_req(CS_DOMAIN);
                break;
        
              case MS_CLASS_CC:          
                if(rac_ptr_g->auto_attach != KAL_FALSE)
                {            
                    rac_ptr_g->attach_req_sent = KAL_TRUE;
                    rac_send_attach_req(PS_DOMAIN);
                }          
                else
                {
                    rac_send_class_change_cnf();
                }          
                break;
        
              default:
                rac_abnormal_assert();
                break;
            }
        }
        break;
      
        case MS_CLASS_CC:
        {
            switch(prev_ms_class)
            {
              case MS_CLASS_B:
                rac_send_detach_req(PS_DOMAIN,KAL_FALSE);
                break;
        
              case MS_CLASS_CG:
                rac_ptr_g->attach_req_sent = KAL_TRUE;
                rac_send_attach_req(CS_DOMAIN);
                break;
        
              case MS_CLASS_CC:          
                if(rac_ptr_g->attach_req_sent != KAL_FALSE)
                {            
                    rac_ptr_g->attach_req_sent = KAL_FALSE;
                    rac_send_detach_req(PS_DOMAIN,KAL_FALSE);
                }
                else
                {
                    rac_send_class_change_cnf();
                }
                break;
        
              default:
                rac_abnormal_assert();
                break;
            }
        }
        break;

        case MS_CLASS_CG:
        {
            switch(prev_ms_class)
            {
              case MS_CLASS_B:
                if(rac_ptr_g->auto_attach == KAL_FALSE)
                {
                    rac_ptr_g->attach_req_sent = KAL_TRUE;
                    rac_send_attach_req(PS_DOMAIN); 
                }
                else
                {
                    rac_send_detach_req(CS_DOMAIN,KAL_FALSE);
                }
                break;
        
              case MS_CLASS_CG:
                if(rac_ptr_g->attach_req_sent != KAL_FALSE)
                {            
                    rac_ptr_g->attach_req_sent = KAL_FALSE;
                    rac_send_detach_req(CS_DOMAIN,KAL_FALSE);
                }
                else
                {
                    rac_send_class_change_cnf();
                }
                break;
        
              case MS_CLASS_CC:          
                rac_ptr_g->attach_req_sent = KAL_TRUE;
                rac_send_attach_req(PS_DOMAIN);  
                break;
        
              default:
                rac_abnormal_assert();
                break;
            }
        }
        break;

        default:
	    rac_abnormal_assert();
           break;
   }

   RAC_FN_ENTRY_LOG(RAC_FN_rac_handle_class_change);
}

/*****************************************************************************
* FUNCTION
*  rac_send_class_change_cnf
* DESCRIPTION
*   This funciton will send register confirm to L4C.
*
* PARAMETERS
*   none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_class_change_cnf(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   l4crac_class_change_cnf_struct *change_cnf;

   change_cnf = (l4crac_class_change_cnf_struct *) 
               construct_local_para( sizeof(l4crac_class_change_cnf_struct),
                                     TD_CTRL);
   
   change_cnf->src_id = rac_ptr_g->src_id;

   change_cnf->gsm_status = rac_get_gsm_status();
   change_cnf->gprs_status = rac_get_gprs_status();

   kal_brief_trace(TRACE_INFO,RAC_L4C_GET_ATTACH_STATUS, 
                    rac_get_gsm_state(), 
                    change_cnf->gsm_status,
                    rac_get_gprs_state(), 
                    change_cnf->gprs_status);

   /* John Tang 2003/11/12 Ericsson IOT: Reset the current action. Otherwise when the NW initiate 
   Detach procedure with "re-attach NOT required", RAC will still invoke GMM to perform Attach 
   procedure.*/
   rac_ptr_g->current_action = RAC_IDLE;
   kal_brief_trace(TRACE_INFO,RAC_CURRENT_ACTION,rac_ptr_g->current_action);
   

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_CLASS_CHANGE_CNF,
                 (local_para_struct*) change_cnf);   
   
}

/*****************************************************************************
* FUNCTION
*  rac_is_plmn_id_equal
* DESCRIPTION
*   Compare two input PLMN IDs to see if they are equal.
*
* PARAMETERS
*   plmn1   the plmn id
*   plmn2   the plmn id
* RETURNS
*  if equal return true
* GLOBALS AFFECTED
*   none
*****************************************************************************/


kal_bool rac_is_plmn_id_equal(plmn_id_struct *plmn1,plmn_id_struct *plmn2)
{
   if ( kal_mem_cmp( plmn1 , plmn2 , sizeof(plmn_id_struct) ) == 0 )
   {
      return KAL_TRUE;
   }

   return KAL_FALSE;
}

/*****************************************************************************
* FUNCTION
*  rac_is_plmn_id_rat_equal_to_current
* DESCRIPTION
*   Compare the input PLMN ID to see if it is the same as current one.
*
* PARAMETERS
*   plmn   the plmn id
* RETURNS
*  if equal return true
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool rac_is_plmn_id_rat_equal_to_current(plmn_id_rat_struct *plmn)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   if ( rac_is_plmn_id_equal( &rac_ptr_g->current_cell_rat.cell_info.plmn_id , &plmn->plmn_id )
       && rac_ptr_g->current_cell_rat.rat == plmn->rat)
   {
      return KAL_TRUE;
   }

   return KAL_FALSE;
}

/*****************************************************************************
* FUNCTION
*  rac_is_cell_info_equal
* DESCRIPTION
*   Compare two input cells to see if they are equal.
*
* PARAMETERS
*   cell1   the cell id
*   cell2   the cell id
* RETURNS
*  if equal return true
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool rac_is_cell_info_equal(cell_info_struct *cell1, cell_info_struct *cell2)
{
   if ( cell1->cell_id == cell2->cell_id &&
		rac_is_plmn_id_equal( &cell1->plmn_id, &cell2->plmn_id ) == KAL_TRUE &&
        cell1->la_code[0] == cell2->la_code[0] &&
        cell1->la_code[1] == cell2->la_code[1] &&
        cell1->ra_code == cell2->ra_code )
   {
      return KAL_TRUE;
   }

   return KAL_FALSE;
}

#ifdef __CSG_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_is_cell_csg_info_equal
* DESCRIPTION
*   Compare two input cells to see if their csg_info are equal.
*
* PARAMETERS
*   cell1   the cell id
*   cell2   the cell id
* RETURNS
*  if equal return true
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool rac_is_cell_csg_info_equal(cell_info_struct *cell1, cell_info_struct *cell2)
{
   if ( cell1->is_csg_cell == cell2->is_csg_cell
        && (cell1->is_csg_cell == KAL_FALSE 
            || (cell1->csg_info.csg_id == cell2->csg_info.csg_id
                && cell1->csg_info.csg_type == cell2->csg_info.csg_type
                && cell1->csg_info.hnb_name_length == cell2->csg_info.hnb_name_length
                && kal_mem_cmp(cell1->csg_info.hnb_name, cell2->csg_info.hnb_name, MAX_HNB_NAME_LEN) == 0))
       )
   {
      return KAL_TRUE;
   }

   return KAL_FALSE;
}
#endif /* __CSG_SUPPORT__ */

#if 0 /* Johnny: 3G RAC */
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
#endif /* ~Johnny */

#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
/*****************************************************************************
* FUNCTION
*  rac_get_sat_location_info
* DESCRIPTION
*   This function is used to derive sat location info and status
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_get_sat_location_info(sat_location_info_ind_struct* loc_info)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
   /* loc_info->location_info:
   *  LAI    5 bytes
   *  CELLID 2 bytes
   *
   */
   loc_info->location_info[0] = (rac_ptr_g->current_cell_rat.cell_info.plmn_id.mcc2 << 4)
                               | rac_ptr_g->current_cell_rat.cell_info.plmn_id.mcc1;
   
   loc_info->location_info[1] = (rac_ptr_g->current_cell_rat.cell_info.plmn_id.mnc3 << 4)
                               | rac_ptr_g->current_cell_rat.cell_info.plmn_id.mcc3;
   loc_info->location_info[2] = (rac_ptr_g->current_cell_rat.cell_info.plmn_id.mnc2 << 4)
                               | rac_ptr_g->current_cell_rat.cell_info.plmn_id.mnc1;
   
   loc_info->location_info[3] = rac_ptr_g->current_cell_rat.cell_info.la_code[0];
   loc_info->location_info[4] = rac_ptr_g->current_cell_rat.cell_info.la_code[1];
   
   loc_info->location_info[5] = (kal_uint8)(rac_ptr_g->current_cell_rat.cell_info.cell_id >> 8 & 0xFF );
   loc_info->location_info[6] = (kal_uint8)(rac_ptr_g->current_cell_rat.cell_info.cell_id & 0xFF);

   loc_info->location_info[7] = (kal_uint8)(rac_ptr_g->current_cell_rat.cell_info.cell_id >> 24 & 0xFF);
   loc_info->location_info[8] = (kal_uint8)(rac_ptr_g->current_cell_rat.cell_info.cell_id >> 16 & 0xFF);

   loc_info->rat = rac_ptr_g->current_cell_rat.rat;

  switch(rac_ptr_g->rac_mm_state)
   {
      case RAC_MM_NO_CELL:
      case RAC_MM_NO_CELL_DENIED:
      {
         loc_info->mm_status = SAT_MM_NO_SERVICE;
         break;
      }
      
      case RAC_MM_NORMAL:
      {
         loc_info->mm_status = SAT_MM_NORMAL_SERVICE;
         break;
      }
         
      case RAC_MM_NULL:
      case RAC_MM_NO_IMSI:
      case RAC_MM_NO_IMSI_DENIED:
      case RAC_MM_LIMITED:
      case RAC_MM_LIMITED_DENIED:
      case RAC_MM_ATTEMPT_TO_UPDATE:
      case RAC_MM_SEARCHING:
      {
         loc_info->mm_status = SAT_MM_LIMITED_SERVICE;
         break;
      }
      
      default:
         ASSERT(0);
         loc_info->mm_status = SAT_MM_LIMITED_SERVICE;
   }

   return;
}

/*****************************************************************************
* FUNCTION
*  rac_send_location_info_ind
* DESCRIPTION
*   This funciton will save RAC perference to NVRAM.
*
* PARAMETERS
*  pdu_ptr   the buffer from NVRAM.
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_sat_location_info_ind(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   local_para_struct *local_para_ptr;
   sat_location_info_ind_struct *loc_info;
   
   local_para_ptr = construct_local_para(sizeof(sat_location_info_ind_struct),TD_CTRL);
   loc_info = (sat_location_info_ind_struct*) local_para_ptr;

   rac_get_sat_location_info(loc_info);
   
   rac_send_ilm(MOD_SIM,PS_SIM_SAP,MSG_ID_SAT_LOCATION_INFO_IND,
                local_para_ptr);

   rac_ptr_g->last_sat_location_info_ind.mm_status = loc_info->mm_status;
   kal_mem_cpy(&(rac_ptr_g->last_sat_location_info_ind.location_info), &(loc_info->location_info), 9);
   rac_ptr_g->last_sat_location_info_ind.rat= rac_ptr_g->current_cell_rat.rat; 
   
}

kal_bool rac_current_equal_last_sat_location_info_ind(void)
{
    /* Johnny: in 101.267 11.4.1:
    when the ME enters the MM-IDLE state with the result that either the Location status or
    Location information has been changed or updated, the ME shall inform the SIM that this has occurred.
    
    So RAC will send MSG_ID_SAT_LOCATION_INFO_IND to SIM when:
    
    1. not in MM_IDLE:
    a. enter MM_IDLE (check rac_ptr_g->send_sat_location_info_ind)
    
    2. in MM_IDLE:
    a. in rac_mm_attach_cnf_msg_handler()/rac_mm_detach_ind_msg_handler(),
       rac_current_equal_last_sat_location_info_ind() == KAL_FALSE
    b. in rac_mm_cell_info_update_ind_msg_handler(),
       change location_info in normal service
    RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM when location_info changes in limited service.
    
    ps. if latest_location_status == NO_SERVICE && current_location_status == NO_SERVICE,
        altought location_info changes, RAC should not send MSG_ID_SAT_LOCATION_INFO_IND to SIM task
        (SIM task also does not send location_info to SIM card if SIM location_status == NO_SERVICE)
    */
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   sat_location_info_ind_struct current_loc_info;
    
   rac_get_sat_location_info(&current_loc_info);
   
   if ((current_loc_info.mm_status == rac_ptr_g->last_sat_location_info_ind.mm_status &&
   current_loc_info.location_info[0] == rac_ptr_g->last_sat_location_info_ind.location_info[0] &&
   current_loc_info.location_info[1] == rac_ptr_g->last_sat_location_info_ind.location_info[1] &&
   current_loc_info.location_info[2] == rac_ptr_g->last_sat_location_info_ind.location_info[2] &&
   current_loc_info.location_info[3] == rac_ptr_g->last_sat_location_info_ind.location_info[3] &&
   current_loc_info.location_info[4] == rac_ptr_g->last_sat_location_info_ind.location_info[4] &&
   current_loc_info.location_info[5] == rac_ptr_g->last_sat_location_info_ind.location_info[5] &&
   current_loc_info.location_info[6] == rac_ptr_g->last_sat_location_info_ind.location_info[6] &&
   current_loc_info.location_info[7] == rac_ptr_g->last_sat_location_info_ind.location_info[7] &&
   current_loc_info.location_info[8] == rac_ptr_g->last_sat_location_info_ind.location_info[8] 
    /* mtk01778, 2007/07/31: Remove the unused proactive cmd in the structure to decrease local and 
       global memory consumption. In addition, add the "rat" information for SAT requirement after R4 . { */
      &&
   current_loc_info.rat == rac_ptr_g->last_sat_location_info_ind.rat
    /* } mtk01778, 2007/07/31 */    
      ) ||
   (current_loc_info.mm_status == SAT_MM_NO_SERVICE &&
     rac_ptr_g->last_sat_location_info_ind.mm_status == SAT_MM_NO_SERVICE))
   {
      return KAL_TRUE;
   }
   else
   {
      return KAL_FALSE;
   }
   /* we do not use proactive_cmd now */   
}

#endif /* #ifndef __SAT_LOWCOST_NW_DISABLE__ */
#endif /* #ifdef __SAT__ */

/*****************************************************************************
* FUNCTION
*  rac_send_ps_reg_cnf
* DESCRIPTION
*   This funciton will send attach result to L4C
*
* PARAMETERS
*  response   the result of attachment
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_ps_reg_cnf(l4c_rac_gprs_status_enum response)
{
   l4crac_ps_reg_cnf_struct *reg_cnf;
   rac_context_struct * rac_ptr_g = rac_ptr_global; 

   reg_cnf = (l4crac_ps_reg_cnf_struct *) 
               construct_local_para( sizeof(l4crac_ps_reg_cnf_struct),
                                     TD_CTRL);

   reg_cnf->src_id = rac_ptr_g->src_id;
   reg_cnf->gprs_status = response;
   /* SP for CGREG/CREG indication, L4 only get latest information via indication instead of utility function. 
      e.g. 2G->3G CS updated but will get rejected, do not show 3G CS updated (PS registration result ahead of CS) before CS registration result */
   reg_cnf->cell_data_speed_support = rac_ptr_g->cell_data_speed_support;

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PS_REG_CNF,
                 (local_para_struct*) reg_cnf);   
   
}


/*****************************************************************************
* FUNCTION
*  rac_send_set_band_cnf
* DESCRIPTION
*   This funciton will send attach result to L4C
*
* PARAMETERS
*  response   the result of attachment
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_set_band_cnf(l4c_rac_response_enum response, l4c_source_id_enum src_id)
{
   l4crac_set_preferred_band_cnf_struct *cnf;

   cnf = (l4crac_set_preferred_band_cnf_struct *) 
            construct_local_para( sizeof(l4crac_set_preferred_band_cnf_struct),
                                     TD_CTRL);

   cnf->src_id = src_id;
   //cnf->src_id = rac_ptr_g->band_change_src_id; //John Tang 2004/02/16
   /* John Tang 2004/03/08: To handle case that sent Band change when MM connection active. */
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
   cnf->gsm_status = response;
   
   cnf->gprs_status = rac_get_gprs_status();

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SET_PREFERRED_BAND_CNF,
                 (local_para_struct*) cnf);   

}
/*****************************************************************************
* FUNCTION
*  rac_send_set_prefer_rat_cnf
* DESCRIPTION
*   This funciton will send prefer rat result to L4C
*
* PARAMETERS
*  response   the result of prefer rat
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_set_prefer_rat_cnf(kal_bool result, l4c_source_id_enum src_id)
{
   l4crac_set_prefer_rat_cnf_struct *cnf;

   cnf = (l4crac_set_prefer_rat_cnf_struct *) 
            construct_local_para( sizeof(l4crac_set_prefer_rat_cnf_struct),
                                     TD_CTRL);

   cnf->src_id = src_id;
   cnf->result = result;

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_SET_PREFER_RAT_CNF,
                 (local_para_struct*) cnf);   
}

/* CH_Liang 2005/05/31: Notify L4C of current cell information */
#ifdef __HOMEZONE_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_send_cell_info_update_ind
* DESCRIPTION
*   This funciton will send current cell information to L4C
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/

void rac_send_cell_info_update_ind(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   l4crac_hz_cell_info_update_ind_struct *cell_info;
   
   cell_info = (l4crac_hz_cell_info_update_ind_struct *) 
               construct_local_para( sizeof(l4crac_hz_cell_info_update_ind_struct), TD_CTRL);
    
   cell_info->cell_info = rac_ptr_g->current_cell_rat;

   switch(rac_ptr_g->rac_mm_state)
   {
      case RAC_MM_NORMAL:
      case RAC_MM_NO_CELL:  
      case RAC_MM_NO_CELL_DENIED: 
         cell_info->gsm_status = rac_get_gsm_status();
         break;

      /*
      case RAC_MM_NULL: // CH_Liang 2005/09/28: Add initial value 
      //case L4C_RAC_ERROR:
      case RAC_MM_NO_IMSI:
      case RAC_MM_NO_IMSI_DENIED:
      case RAC_MM_LIMITED:
      case RAC_MM_LIMITED_DENIED:
      case RAC_MM_ATTEMPT_TO_UPDATE:      
      case RAC_MM_SEARCHING:
         cell_info->gsm_status = L4C_RAC_LIMITED_SERVICE;
         break;
      */
      default:
         cell_info->gsm_status = L4C_RAC_LIMITED_SERVICE;
         break;
   }

   rac_send_ilm(MOD_L4C, RAC_L4C_SAP, MSG_ID_L4CRAC_HZ_CELL_INFO_UPDATE_IND,
                (local_para_struct*)cell_info);

   kal_brief_trace(TRACE_INFO,RAC_INFO,rac_ptr_g->current_action, rac_ptr_g->rac_mm_state, rac_ptr_g->rac_gmm_state);

}
#endif /* #ifdef __HOMEZONE_SUPPORT__ */

l4c_rac_response_enum rac_get_gsm_status(void)
{
    switch(rac_ptr_global->rac_mm_state)
    {
        case RAC_MM_NULL:
            return L4C_RAC_NULL;

        case RAC_MM_NORMAL:
            return L4C_RAC_OK;

        case RAC_MM_ATTEMPT_TO_UPDATE:
            return L4C_RAC_ATTEMPT_TO_UPDATE;

        case RAC_MM_LIMITED:
        case RAC_MM_LIMITED_DENIED:
            return L4C_RAC_LIMITED_SERVICE;

        case RAC_MM_NO_IMSI:
        case RAC_MM_NO_IMSI_DENIED:
            return L4C_RAC_INVALID_SIM;

        case RAC_MM_NO_CELL:
        case RAC_MM_NO_CELL_DENIED:
            return L4C_RAC_NO_CELL;

        case RAC_MM_SEARCHING:
            return L4C_RAC_SEARCHING;

        default:
            rac_abnormal_assert();
            return L4C_RAC_NULL;
    }
}

reg_state_enum rac_get_gsm_state(void)
{
    switch(rac_ptr_global->rac_mm_state)
    {
        case RAC_MM_NULL:
            return REG_STATE_UNKNOWN;

        case RAC_MM_NORMAL:
#ifdef __UMTS_TDD128_MODE__            
        case RAC_MM_ATTEMPT_TO_UPDATE:
#endif
            return REG_STATE_REGISTERED;
#ifndef __UMTS_TDD128_MODE__ 
        case RAC_MM_ATTEMPT_TO_UPDATE:
#endif            
        case RAC_MM_LIMITED_DENIED:
        case RAC_MM_NO_IMSI_DENIED:
        case RAC_MM_NO_CELL_DENIED:
            return REG_STATE_REG_DENIED;

        case RAC_MM_LIMITED:
        case RAC_MM_NO_IMSI:
        case RAC_MM_NO_CELL:
            return REG_STATE_NOT_REGISTERED;

        case RAC_MM_SEARCHING:
            return REG_STATE_SEARCHING;

        default:
            rac_abnormal_assert();
            return REG_STATE_UNKNOWN;
    }
}

kal_bool is_rac_gmm_state_null_dereg(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
   /*
    if (rac_ptr_g->rac_gmm_state == RAC_GMM_NULL ||
      //rac_ptr_g->rac_gmm_state == RAC_GMM_NULL_AGAIN ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_LIMITED ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_LIMITED_DENIED||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_CELL ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_CELL_DENIED ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_IMSI ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_DEREG_NO_IMSI_DENIED)
      */
    if (rac_ptr_g->rac_gmm_state >= RAC_GMM_REG_NORMAL )
    {
        return KAL_FALSE;
    }
    else
    {
        return KAL_TRUE;
    }
}

kal_bool is_rac_gmm_state_reg(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (rac_ptr_g->rac_gmm_state == RAC_GMM_REG_NORMAL ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_REG_LIMITED ||
      rac_ptr_g->rac_gmm_state == RAC_GMM_REG_NO_CELL)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

l4c_rac_gprs_status_enum rac_get_gprs_status(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    switch(rac_ptr_g->rac_gmm_state)
    {
        case RAC_GMM_REG_NORMAL:
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
            {
                return GPRS_ATTACHED;
            }

        case RAC_GMM_REG_NO_CELL:
        case RAC_GMM_DEREG_NO_CELL:
        case RAC_GMM_DEREG_NO_CELL_DENIED:
            return GPRS_NO_COVERAGE;

        case RAC_GMM_REG_LIMITED:
        case RAC_GMM_DEREG_LIMITED:
        case RAC_GMM_DEREG_LIMITED_DENIED:
        case RAC_GMM_SEARCHING: //special case
            return GPRS_LIMITED_SERVICE;

        case RAC_GMM_DEREG_NO_IMSI:
        case RAC_GMM_DEREG_NO_IMSI_DENIED:
            return GPRS_INVALID_SIM;

        case RAC_GMM_NULL:
            /* mtk00938 20090114: MAUI_01311911
                GPRS_NULL=6 is wrongly mapped to L4C_PDP_ATTEMPT_ACT=6 in l4c_gprs_status_enum for MMI.
                In this case, after power-off GPRS Detach, G icon will not disappear.
                Refer to UpdateGPRSStatusIcon() in MMI, we should do the following mapping:
                RAC_GMM_NULL -> GPRS_LIMITED_SERVICE -> L4C_GPRS_DETACHED
                so that G icon will disapear after power-off GPRS Detach.
            */
            //return GPRS_NULL;
            return GPRS_LIMITED_SERVICE;

        default:
            rac_abnormal_assert();
            return GPRS_NULL;
    }
}


reg_state_enum rac_get_gprs_state(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (rac_ptr_g->rac_gmm_state == RAC_GMM_REG_NORMAL)
        return REG_STATE_REGISTERED;
    else if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
        return REG_STATE_SEARCHING;
    else
    {
        switch(rac_ptr_g->rac_gmm_state)
        {
            case RAC_GMM_DEREG_NO_CELL_DENIED:
            case RAC_GMM_DEREG_LIMITED_DENIED:
            case RAC_GMM_DEREG_NO_IMSI_DENIED:
                return REG_STATE_REG_DENIED;

            case RAC_GMM_DEREG_NO_CELL:
            case RAC_GMM_DEREG_NO_IMSI:
            case RAC_GMM_DEREG_LIMITED:
                return REG_STATE_NOT_REGISTERED;
                
            case RAC_GMM_REG_NO_CELL:
            case RAC_GMM_REG_LIMITED:
#ifndef __DISABLE_PS_ONLY_OPERATOR_SUPPORT__
                return REG_STATE_NOT_REGISTERED;
#else
                return REG_STATE_REGISTERED;
#endif

           // case RAC_GMM_NULL_AGAIN:
               // return REG_STATE_NOT_ACTIVE;

            case RAC_GMM_NULL:
                return REG_STATE_UNKNOWN;

            default:
                rac_abnormal_assert();
                return REG_STATE_UNKNOWN;
        }
    }
}

void rac_l4c_reg_req_cs(kal_bool *req_needed, kal_bool *response)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    switch( rac_ptr_g->rac_mm_state)
    {
        case RAC_MM_NORMAL:
            /* response with limited service */
            *response = KAL_TRUE;
            break;
        case RAC_MM_SEARCHING:
            *req_needed = KAL_TRUE;
            break;
        default:
            rac_ptr_g->previous_rac_mm_state = rac_ptr_g->rac_mm_state;
            rac_ptr_g->rac_mm_state = RAC_MM_SEARCHING;
            *req_needed = KAL_TRUE;
    }
}

void rac_l4c_reg_req_ps(kal_bool *req_needed, kal_bool *response)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (is_rac_gmm_state_reg())
    {
        /* response with limited service */
        *response = KAL_TRUE;
    }
    else if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
    {
        ; /* let LR keep ongoging */
    }
    else if (is_rac_gmm_state_null_dereg())
    {
        rac_ptr_g->previous_rac_gmm_state = rac_ptr_g->rac_gmm_state;    
        rac_ptr_g->rac_gmm_state = RAC_GMM_SEARCHING;
        *req_needed = KAL_TRUE;
    }    
}

void update_service_to_be(domain_id_enum *target_service, domain_id_enum service_type)
    {
        switch (*target_service)
        {
            case CS_DOMAIN:
                if (service_type == CS_DOMAIN || service_type == CS_PS_DOMAIN)
                {
                    *target_service = DOMAIN_NONE;
                }
                break;
    
            case PS_DOMAIN:
                if (service_type == PS_DOMAIN || service_type == CS_PS_DOMAIN)
                {
                    *target_service = DOMAIN_NONE;
                }
                break;
    
            case CS_PS_DOMAIN:
                if (service_type == CS_DOMAIN)
                {
                    *target_service = PS_DOMAIN;
                }
                else if (service_type == PS_DOMAIN)
                {
                    *target_service = CS_DOMAIN;
                }
                else if (service_type == CS_PS_DOMAIN)
                    *target_service = DOMAIN_NONE;
                break;
    
            default:
                *target_service = DOMAIN_NONE;
        }
    }

void update_service_to_be_reged(domain_id_enum service_type)
{
    update_service_to_be( &rac_ptr_global->service_to_be_reged , service_type );
}

void update_service_to_be_dereged(domain_id_enum service_type)
{
    update_service_to_be( &rac_ptr_global->service_to_be_dereged , service_type );
}

typedef void (* rac_timer_func_ptr)(void );

void rac_start_retry_timer_hdlr( rac_timer_id_enum which_timer )
{
    rac_ptr_global->retry_count ++;
    rac_start_timer_hdlr(which_timer);
}

void rac_cancel_retry_timer_hdlr( rac_timer_id_enum which_timer )
{
    rac_ptr_global->retry_count = 0;
    rac_cancel_timer(which_timer);
}

kal_uint32 rac_get_timeout_period( rac_timer_id_enum which_timer )
{
         switch(which_timer)
         {
            case RAC_RETRY_PLMN_SEARCH_TIMER_ID:
            case RAC_RETRY_PLMN_LIST_TIMER_ID:
#ifdef __CSG_SUPPORT__
            case RAC_RETRY_CSG_LIST_TIMER_ID:
#endif /* __CSG_SUPPORT__ */
               return RAC_RETRY_TIMER * KAL_TICKS_100_MSEC;
#ifdef __RAC_GUARD_PLMN_LIST__
            case RAC_PLMN_LIST_GUARD_TIMER_ID:
               return RAC_PLMN_LIST_GUARD_TIMER * KAL_TICKS_1_MIN; 
#endif               
#ifdef __CSG_SUPPORT__
            case RAC_CSG_LIST_GUARD_TIMER_ID:
               return RAC_CSG_LIST_GUARD_TIMER; 
#endif /* __CSG_SUPPORT__ */
            default:
               ASSERT(0);
         }
         return 0;
}

rac_timer_func_ptr rac_get_timeout_hdlr( rac_timer_id_enum which_timer )
{
         switch(which_timer)
         {
            case RAC_RETRY_PLMN_SEARCH_TIMER_ID:
               return rac_retry_plmn_search_timeout_hdlr;  
            case RAC_RETRY_PLMN_LIST_TIMER_ID:
               return rac_retry_plmn_list_timeout_hdlr;   
#ifdef __RAC_GUARD_PLMN_LIST__
            case RAC_PLMN_LIST_GUARD_TIMER_ID:
               return rac_plmn_list_guard_timer_timeout_hdlr;   
#endif               
#ifdef __CSG_SUPPORT__
            case RAC_RETRY_CSG_LIST_TIMER_ID:
               return rac_retry_csg_list_timeout_hdlr;   
            case RAC_CSG_LIST_GUARD_TIMER_ID:
               return rac_csg_list_guard_timer_timeout_hdlr;   
#endif /* __CSG_SUPPORT__ */
            default:
               ASSERT(0);
         }
         return NULL;
}

void rac_start_timer_hdlr( rac_timer_id_enum which_timer )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    kal_brief_trace(TRACE_INFO,RAC_START_TIMER,which_timer);
    
    rac_ptr_g->event_id[which_timer] = evshed_set_event (rac_ptr_g->event_scheduler_ptr,
                                        (kal_timer_func_ptr)rac_get_timeout_hdlr(which_timer),
                                        NULL,rac_get_timeout_period(which_timer) );
}

void rac_cancel_timer( rac_timer_id_enum which_timer )
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    if (rac_ptr_g->event_id[which_timer] != NULL)
    {
        kal_brief_trace(TRACE_INFO,RAC_CANCEL_TIMER,which_timer);
        evshed_cancel_event (rac_ptr_g->event_scheduler_ptr,
                                          &(rac_ptr_g->event_id[which_timer]));
    }

}

void rac_timeout_cleanup( rac_timer_id_enum which_timer )
{
     rac_context_struct * rac_ptr_g = rac_ptr_global;
     
     rac_ptr_g->event_id[which_timer] = NULL;

     kal_brief_trace(TRACE_INFO,RAC_TIMEOUT,which_timer,rac_ptr_g->current_action);
     
}

void rac_retry_plmn_search_timeout_hdlr(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    rac_timeout_cleanup(RAC_RETRY_PLMN_SEARCH_TIMER_ID);
    
        
    if(rac_ptr_g->current_action == RAC_SELECT_PLMN)
    {
        //rac_ptr_g->current_action = RAC_IDLE;
        rac_l4c_plmn_search_req_msg_handler(rac_ptr_g->plmn_search_req_ptr, NULL); /* mtk00714: RAC2 revise */ 
    }
}

void rac_retry_plmn_list_timeout_hdlr(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    rac_timeout_cleanup(RAC_RETRY_PLMN_LIST_TIMER_ID);

    if(rac_ptr_g->current_action == RAC_PLMN_LIST)
    {
        rac_send_ilm(MOD_MM,GMMREG_SAP, MSG_ID_GMMREG_PLMN_LIST_REQ,NULL);
    }
}

#ifdef __RAC_GUARD_PLMN_LIST__

void rac_plmn_list_guard_timer_timeout_hdlr(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    rac_timeout_cleanup(RAC_PLMN_LIST_GUARD_TIMER_ID);

    if (rac_ptr_g->current_action == RAC_PLMN_LIST)
    {
        if (rac_ptr_g->event_id[RAC_RETRY_PLMN_LIST_TIMER_ID] != 0)
        {

            rac_send_plmn_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE, 0); //0 for no cause
            rac_set_action( RAC_IDLE );
                
        }
        else
        {
            rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_PLMN_LIST_STOP_REQ,
                     NULL);

            /* Johnny: for rac_plmn_list_guard_timer_timeout_hdlr(), RAC stop PLMN list by itself, 
                       RAC send MSG_ID_L4CRAC_PLMN_LIST_CNF to L4C */
            rac_set_action( RAC_PLMN_LIST_STOP_TIMEOUT );
        }                      
    }
}
#endif

#ifdef __CSG_SUPPORT__
void rac_retry_csg_list_timeout_hdlr(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    rac_timeout_cleanup(RAC_RETRY_CSG_LIST_TIMER_ID);

    if(rac_ptr_g->current_action == RAC_CSG_LIST)
    {
        rac_l4c_csg_list_req_msg_handler(rac_ptr_g->csg_list_req_ptr, NULL);
    }
}

//mtk02475: timer handling for CSG list guard timer
void rac_start_csg_list_guard_timer_hdlr(void)
{
    rac_start_timer_hdlr(RAC_CSG_LIST_GUARD_TIMER_ID);
}

void rac_cancel_csg_list_guard_timer(void)
{
    rac_cancel_timer(RAC_CSG_LIST_GUARD_TIMER_ID);
}

void rac_csg_list_guard_timer_timeout_hdlr()
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

    rac_timeout_cleanup(RAC_CSG_LIST_GUARD_TIMER_ID);
    
    if (rac_ptr_g->current_action == RAC_CSG_LIST)
    {
        if (rac_ptr_g->event_id[RAC_RETRY_CSG_LIST_TIMER_ID] != 0)	   
        {
            rac_send_csg_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE);            
            rac_set_action(RAC_IDLE);
        }
        else
        {
            rac_send_ilm(MOD_MM, GMMREG_SAP, MSG_ID_GMMREG_CSG_LIST_STOP_REQ, NULL);
            rac_set_action(RAC_CSG_LIST_STOP_TIMEOUT);
        }                      
    }
}

#endif /* __CSG_SUPPORT__ */

#ifdef __GEMINI__
kal_bool	rac_is_gprs_always_attach_allowed(void)
{
#ifndef __ANDROID_RIL_SUPPORT__
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    /*mtk02475: for Andoird project, allow GPRS always on for switching Data service between SIM1 and SIM2*/
    //mtk02475: for N SIM project, need to add further check on SIM3/SIM4 single SIM config
   if (!(rac_ptr_g->dual_sim_config_status == SIM1_RADIO_ON
         || rac_ptr_g->dual_sim_config_status == SIM2_RADIO_ON
         || rac_ptr_g->dual_sim_config_status == SIM3_RADIO_ON
         || rac_ptr_g->dual_sim_config_status == SIM4_RADIO_ON)
      && (KAL_FALSE == is_test_sim(rac_ptr_g->sim_interface)))
   {
      /* DUAL SIM mode, does not allow GPRS auto attach except TEST SIM */
      return KAL_FALSE;
   }
   else
#endif
      return KAL_TRUE;
}
#endif


void rac_send_ps_event_report_ind(mmi_event_enum event_id)
{
   l4crac_ps_event_report_ind_struct *event_ind =
             (l4crac_ps_event_report_ind_struct *) 
                  construct_local_para(sizeof(l4crac_ps_event_report_ind_struct),TD_CTRL);
   
   event_ind->event_id = event_id;

   rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_PS_EVENT_REPORT_IND,
                 (local_para_struct*) event_ind);
}

#ifdef __MTK_INTERNAL__
#ifdef __UMTS_RAT__
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
#ifdef UNIT_TEST
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
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __PLMN_LIST_PREF_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __HSPA_PREFERENCE_SETTING__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif              
#ifdef __CSG_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __CSG_SUPPORT__ */
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
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __PLMN_LIST_PREF_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __HSPA_PREFERENCE_SETTING__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __CSG_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __CSG_SUPPORT__ */
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
#endif /* UNIT_TEST */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* __MTK_INTERNAL__ */   


/*****************************************************************************
* FUNCTION
*  is_rac_activating
*
* DESCRIPTION
*  we shall be certain that rac_context has been read from NV before use or write rac_ptr_g
*
* PARAMETERS
*  KAL_TRUE  : currently is activating. (RAC is reading from NV)
*  KAL_FALSE : currently is not activating. (already read from NV completely)
*
* RETURNS
*  none
*
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool is_rac_activating(void)
{
   if (rac_ptr_global->current_action <= RAC_ACTIVATION)
   {
      DEBUG_ASSERT(0);
      kal_brief_trace(TRACE_WARNING, RAC_ACTIVATING_IGNORE); 
      return KAL_TRUE;
   }
   else
      return KAL_FALSE;
}// end of is_rac_activating

/*****************************************************************************
* FUNCTION
*  rac_abnormal_assert
*
* DESCRIPTION
*  RAC2 has encountered an abnormal condition or entried an impossible path.
*  ex: an impossible default option while using a swich-case semantics.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
*
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_abnormal_assert(void)
{
	kal_brief_trace(TRACE_INFO, RAC_ABNORMAL_ASSERT); 
	DEBUG_ASSERT(0);
}

#ifdef __UMTS_FDD_MODE__
/*****************************************************************************
* FUNCTION
*  rac_hardware_support_band_filter
*
* DESCRIPTION
*  filter SW UMTS band setting according to HW UMTS band capability
*
* PARAMETERS
*  umts_support_band:  kal_uint8[2] array for current SW support band
*                      the content will be modified to exclude HW non-support band
*
* RETURNS
*  none
*
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_hardware_support_band_filter(kal_uint8 *umts_support_band)
{
/* mtk02475: 
 * for FDD UMTS HW band support customization, the SW band support (in RAC_PREFERENCE will be all turned on.
 * Therefore, RAC need to query HW band setting at runtime to filter unsupported UMTS band at power-on stage
 */
   kal_uint32 hw_umts_band = 0;

#ifndef UNIT_TEST
   UL1D_UeBandCapabilityEx(&hw_umts_band); //get HW support band
#else
   hw_umts_band = rac_ptr_global->fake_hw_umts_band_capability; //mtk02475: for Modis UT, use fake HW band capability from inject string
#endif /* !UNIT_TEST */
       
   *umts_support_band &= (kal_uint8) (hw_umts_band & 0xFF); //filter band_1 ~ band_8
   *(umts_support_band+1) &= (kal_uint8) ((hw_umts_band >> 8) & 0xFF); //filter band_9 ~ band_16
   *(umts_support_band+2) &= (kal_uint8) ((hw_umts_band >> 16) & 0xFF); //filter band_17 ~ band_24
   *(umts_support_band+3) &= (kal_uint8) ((hw_umts_band >> 24) & 0xFF); //filter band_25 ~ band_32
}
#endif /* __UMTS_FDD_MODE__ */

#ifdef __CSG_SUPPORT__
/*****************************************************************************
* FUNCTION
*  rac_free_csg_list
* DESCRIPTION
*   This funciton will free the ctrl buffer in available csg list.
*
* PARAMETERS
*  csg_list     IN  CSG ID list
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_free_csg_list(rac_csg_list_struct *csg_list)
{
    kal_uint32 i;

    for ( i = 0; i < csg_list->plmn_count; i++)
    {
        if (csg_list->available_plmn_csg[i].csg_info_list != NULL)
        {
            free_ctrl_buffer(csg_list->available_plmn_csg[i].csg_info_list);
        }
    }
}

/*****************************************************************************
* FUNCTION
*  rac_send_csg_list_cnf
* DESCRIPTION
*   This funciton will send csg list confirm to L4C.
*
* PARAMETERS
*  csg_list     IN  CSG ID list
*  response     IN  response to L4C
*  cause        IN  fail cause
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_csg_list_cnf(rac_csg_list_struct *csg_list, l4c_rac_response_enum response, mm_cause_enum cause)
{
    l4crac_csg_list_cnf_struct *list_cnf;

    list_cnf = (l4crac_csg_list_cnf_struct *) 
                construct_local_para( sizeof(l4crac_csg_list_cnf_struct), TD_RESET);

    list_cnf->src_id = rac_ptr_global->src_id;
    list_cnf->response = response;
    list_cnf->cause = cause;

    if (response == L4C_RAC_OK && csg_list != NULL)
    {
        memcpy(&(list_cnf->csg_list), csg_list, sizeof (rac_csg_list_struct));   
    }
    else
    {
        list_cnf->csg_list.plmn_count = 0;
        if (csg_list != NULL)
        {
            rac_free_csg_list(csg_list);
        }
    }
     
    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_CSG_LIST_CNF,
                 (local_para_struct*) list_cnf);
}

/*****************************************************************************
* FUNCTION
*  rac_send_csg_list_stop_cnf
* DESCRIPTION
*   This funciton will send csg list stop confirm to L4C.
*
* PARAMETERS
*  none
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void rac_send_csg_list_stop_cnf()
{
    l4crac_csg_list_stop_cnf_struct *l4crac_msg_ptr = 
            (l4crac_csg_list_stop_cnf_struct *) construct_local_para(
                sizeof(l4crac_csg_list_stop_cnf_struct),TD_CTRL);

    l4crac_msg_ptr->src_id = rac_ptr_global->src_id;

    rac_send_ilm(MOD_L4C,RAC_L4C_SAP,MSG_ID_L4CRAC_CSG_LIST_STOP_CNF,
           (local_para_struct*) l4crac_msg_ptr);
}
#endif /* __CSG_SUPPORT__ */

#endif /*end of __MOD_RAC__*/

