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
 * rac_funcs.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file defines functions of L4C-RAC interface.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#define RAC2_FUNCS_C

#ifdef __MOD_RAC__
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_trace.h"
#include "md_sap.h"
#include "mm_msgid.h"
#include "sim_ps_msgid.h"

#include "ps_public_enum.h"
#include "l4crac_enums.h"
#include "l3_inc_enums.h"
#ifdef __GEMINI_3G_SWITCH__
#include "sim_public_enum.h"
#endif /* __GEMINI_3G_SWITCH__ */

#include "mcd_l3_inc_struct.h"
#include "mmi2mm_struct.h"
#include "rac2l4c_struct.h"
#ifdef __SAT__
#include "ps2sat_struct.h"
#endif

#include "rac_defs.h"
#include "rac_trc.h"
#include "rac_context.h"
#include "rac_others.h"

#include "l4c_common_enum.h"

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void l4crac_get_attach_status (kal_uint8 * cs_status,kal_uint8 * ps_status,kal_uint8 *service)
{
   #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif

   *cs_status = rac_get_gsm_state();
   *ps_status = rac_get_gprs_state();

   kal_brief_trace(TRACE_INFO,
                  RAC_L4C_GET_ATTACH_STATUS, 
                  *cs_status, 
                  rac_get_gsm_status(),
                  *ps_status, 
                  rac_get_gprs_status());
                  
*service = (kal_uint8)rac_get_gsm_status();

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
}

/*****************************************************************************
* FUNCTION
*   l4crac_get_gprs_status
* DESCRIPTION
*   for L4C to get the gprs attach status 
* PARAMETERS
*  None
* RETURNS
*   
* GLOBALS AFFECTED
*   none
*****************************************************************************/
l4c_rac_gprs_status_enum l4crac_get_gprs_status(void)
{
    return rac_get_gprs_status();
} // MAUI_02316028, support L4C to get gprs status when RAB changed

/*****************************************************************************
* FUNCTION
*   l4crac_get_egprs_status
* DESCRIPTION
*   for L4C to get the egprs status 
* PARAMETERS
*  None
* RETURNS
*   0: not support
*   1: support
* GLOBALS AFFECTED
*   none
*  Erica 20070319: for edge status
*****************************************************************************/
kal_uint8 l4crac_get_egprs_status (void)
{
   return (rac_ptr_global->cell_data_speed_support == EDGE_SUPPORT) ? 1 : 0;
}

/*****************************************************************************
* FUNCTION
*   l4crac_get_cell_data_speed_support_status
* DESCRIPTION
*   for L4C to get the cell data speed support status 
* PARAMETERS
*  None
* RETURNS
*   0: not support
*   1: support
* GLOBALS AFFECTED
*   none
*  Erica 20070319: for edge and hspa status
*****************************************************************************/
data_speed_support_enum l4crac_get_cell_data_speed_support (void)
{
    return rac_ptr_global->cell_data_speed_support;
}
/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
ms_mobile_class_enum l4crac_get_mobile_class (void)
{
   return rac_ptr_global->mobile_class;
}


/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void l4crac_get_current_plmn(plmn_id_rat_struct  *current_plmn)
{
   kal_mem_cpy( (void*) & current_plmn->plmn_id,
                (void*) & rac_ptr_global->current_cell_rat.cell_info.plmn_id,
                sizeof(plmn_id_struct));
   current_plmn->rat = rac_ptr_global->current_cell_rat.rat;
}

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_uint16 l4crac_get_rnc_id()
{
   return (kal_uint16)(rac_ptr_global->current_cell_rat.cell_info.cell_id >> 16) ;
}


#ifdef __CSG_SUPPORT__
/*****************************************************************************
* FUNCTION
*  l4crac_get_csg_info
* DESCRIPTION
*  get csg_info for current cell
*
* PARAMETERS
*  csg_info   OUT  csg_info for current cell
*
* RETURNS
*  return KAL_TRUE if current cell is a CSG cell
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool l4crac_get_csg_info(csg_info_struct *csg_info)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if (rac_ptr_g->current_cell_rat.cell_info.is_csg_cell == KAL_TRUE)
    {
        kal_mem_cpy(csg_info, &rac_ptr_g->current_cell_rat.cell_info.csg_info, sizeof(csg_info_struct));
    }
   return rac_ptr_g->current_cell_rat.cell_info.is_csg_cell;
}
#endif /* __CSG_SUPPORT__ */

#ifdef __UE_EFOPLMN__
/*****************************************************************************
* FUNCTION
*  l4crac_get_ue_oplmn_version
* DESCRIPTION
*  get UE OPLMN version number
*
* PARAMETERS
*  none
*
* RETURNS
*  return version number of UE OPLMN
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void l4crac_get_ue_oplmn_version(kal_uint8* verd1, kal_uint8* verd2)
{   
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    *verd1 = rac_ptr_g->ue_oplmn_ver[0];
    *verd2 = rac_ptr_g->ue_oplmn_ver[1];   
}
#endif 

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
//kal_uint8 l4crac_get_preferred_band(void)
kal_uint8 l4crac_get_preferred_gsm_band(void)
{
       return rac_ptr_global->requested_gsm_band;
}

#ifdef __UMTS_RAT__
/*****************************************************************************
* FUNCTION         l4crac_get_preferred_umts_band
*  
* DESCRIPTION   function to get the UMTS preferred band
*   
* PARAMETERS
*  
* RETURNS
*  none
* GLOBALS AFFECTED
*   mtk00714 3G band change
*****************************************************************************/
void l4crac_get_preferred_umts_band(kal_uint8 *umts_fdd_band)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    kal_uint32 i;

    for (i = 0; i < SIZE_OF_UMTS_BAND; i++)
    {
        *(umts_fdd_band+i) = rac_ptr_g->requested_umts_fdd_band[i];
    }
}
#endif

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
#endif /* ~Johnny */

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
plmn_selection_mode_enum l4crac_get_sel_mode(void)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   kal_brief_trace(TRACE_INFO,RAC_INFO_GET_SEL_MOD, rac_ptr_g->plmn_sel_mode);
   return rac_ptr_g->plmn_sel_mode;
}


/*****************************************************************************
* FUNCTION
*  l4crac_get_rac_prefer_nvram_ef
*
* DESCRIPTION
*   For L4C to get the current value in "NVRAM_EF_RAC_PREFERENCE" by RAC context
*	without sending query to NVRAM Task.
*
* PARAMETERS
*  
* RETURNS
*  2 bytes "NVRAM_EF_RAC_PREFERENCE" value
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_uint16 l4crac_get_rac_prefer_nvram_ef(void)
{
   /* John Tang 2003/10/20: For L4C to get the current value in 
   "NVRAM_EF_RAC_PREFERENCE" by RAC context. */	
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   kal_uint16 nvram_value = 0x0000; /* 0000 0000 0000 0000 */
   kal_uint16 band;
   kal_uint16 plmn_mode;
   kal_uint16 service;

   /*
   	1st byte: Prefer band
   					   (		0x02 ==> 900 band
		   					0x08 ==> 1800 band
   					   	       0x0a ==> Dual band
   					   	       0x10 ==> 1900 band
   					   
   	2nd byte: 1st bit: PLMN selection mode
   	     	 2, 3 bit: service ( 		Prefer			MS class
	   	     					00 ==> CS servcie         CC
	   	     					01 ==> PS service          CG 
	   	     					10 ==> CS service		  class B
	   	     					11 ==> PS service		  class B
   */
   
   band = rac_ptr_g->requested_gsm_band;  
   plmn_mode = rac_ptr_g->plmn_sel_mode;

   if (MS_CLASS_B == rac_ptr_g->mobile_class)
   {
		service = 0x0002; /* The last 2 bits "10". */
   }
   else
   {
		service = 0x0000; /* The last 2 bits "00". */
   }

   if (CS_DOMAIN == rac_ptr_g->prefered_service)
   {
		service = service | (0x0000);
   }
   else if(PS_DOMAIN == rac_ptr_g->prefered_service)
   {
		service = service | (0x0001);
   }
   
   nvram_value = (nvram_value) | (band << 8) | (plmn_mode << 7) | (service << 5);
   
   return nvram_value;
}


/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void l4crac_set_sel_mode(plmn_selection_mode_enum mode)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
#ifdef __SAT__
    sat_nw_search_mode_ind_struct *sat_nw_search_mode_ind;
#endif

    if(is_rac_activating()) 
		return;

    /* Ripple: only when the mode changed, RAC would request the low layers to change nw selection mode. */
    if (rac_ptr_g->plmn_sel_mode != mode)
    {
       gmmreg_sel_mode_req_struct *sel_mode_req
             = (gmmreg_sel_mode_req_struct*) 
               construct_local_para(sizeof(gmmreg_sel_mode_req_struct),TD_CTRL);
   
       sel_mode_req->plmn_sel_mode = mode;
       rac_ptr_g->plmn_sel_mode = mode;

       /*
        * mtk02475: 
        * sat_nw_search_mode_struct is the same as gmmreg_sel_mode_req_struct
        * reuse local_para to reduce ctrl_buff allocation overhead and memory usage
        */
       #ifdef __SAT__
       hold_local_para((local_para_struct*) sel_mode_req);

       sat_nw_search_mode_ind = (sat_nw_search_mode_ind_struct *) sel_mode_req;
       #endif
	   
       rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SEL_MODE_REQ,
                     (local_para_struct*) sel_mode_req);
   
       rac_save_preference();

       /* 
        * mtk02475:
        * notify SIM about the new network search mode after new setting is 
        * saved in rac context and NVRAM
        */
       #ifdef __SAT__
       rac_send_ilm(MOD_SIM,PS_SIM_SAP,MSG_ID_SAT_NW_SEARCH_MODE_IND,
                     (local_para_struct*) sat_nw_search_mode_ind);
       #endif
    }
}

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool l4crac_get_imei(kal_uint8 *imei_bcd, kal_uint8 *imei_svn_bcd)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if(is_rac_activating()) 
	 return KAL_FALSE; // something might be wrong !

   kal_mem_cpy( (void*) imei_bcd,
                (void*) rac_ptr_g->imei,
                8);
   kal_mem_cpy((void*)imei_svn_bcd,
               (void*)&(rac_ptr_g->imei_svn),
               1);

   return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void l4crac_preferred_plmn_change_req (void)
{
//   rac_send_ilm(MOD_AS,MMI_AS_SAP,MSG_ID_MMIAS_PREFER_PLMN_CHANGE_REQ,NULL);
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
#endif

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
* RETURNS
*  none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool l4crac_test_mobile_class (kal_uint8 const ** buffer)
{
   *buffer = (kal_uint8 const *) "+CGCLASS:(B,CG,CC)";      
   return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*  
* DESCRIPTION
*   
*
* PARAMETERS
*  
*
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
#endif

kal_bool l4crac_get_auto_attach(void)
{
   return rac_ptr_global->auto_attach;
}

kal_bool l4crac_set_auto_attach(kal_bool auto_attach, kal_bool is_pdp_activate)
{
  rac_context_struct * rac_ptr_g = rac_ptr_global;
  kal_bool is_changed = KAL_FALSE;
#ifdef __GEMINI__
  if (auto_attach == KAL_TRUE &&
      rac_is_gprs_always_attach_allowed() == KAL_FALSE)
  {
      return KAL_FALSE;
  }
#endif

   if(is_rac_activating()) 
         return KAL_FALSE;
   if( rac_ptr_g->auto_attach != auto_attach )
   {
        is_changed = KAL_TRUE;
   }
      rac_ptr_g->auto_attach = auto_attach;

      /* Johnny:
         rac_ptr_g->auto_attach is the current setting, we update (or execute) it in l4crac_set_auto_attach()
         nvram setting is the latest setting (user wanted), we update (or save) it in l4crac_set_auto_attach_setting()
         the current setting may be not the same as the lastest setting
         (L4C will call l4crac_set_auto_attach_setting() directly but queue l4crac_set_auto_attach() if command conflict)
         if we poweroff and then poweron, we'll use the latest setting in nvram
      */
   /* John Tang 2005/01/27: 
   This is a RAC bug. Since MMI will start a timer and ONLY send the last
   GPRS connection setting to RAC (One of "When Needed" or "Always"). However, 
   in l4crac_set_auto_attach (), RAC performs GPRS Attach only when it finds that
   the "auto_attach" field in rac_context changes. However, since the tester changes
   quickly from "Always" -> "When Needed" -> "Always". RAC thinks that the setting
   never changes and does nothing. 
   RAC may need to check current GPRS status for such issue. Also, the
   at+cgatt=1 with initial "When needed" -> "Always" -> "When needed" shall also
   be in consideration.
   */
  if(rac_ptr_g->mobile_class == MS_CLASS_CC)
  {
     /* GSM only, do nothing */
     return KAL_FALSE;
  }
   
  /* If "Always"(auto_attach) is TRUE, check if user has ever used at+cgatt=0 to perform 
       Detach. */
  if ((KAL_TRUE == auto_attach) && 
      (is_changed || is_rac_gmm_state_null_dereg()) && 
      (RAC_GPRS_ATTACH != rac_ptr_g->current_action))
  {
       rac_ptr_g->src_id = LMMI_SRC;
       rac_set_action(RAC_SET_GPRS_CONN_TYPE_ALWAYS);
       rac_send_attach_req(PS_DOMAIN);
       return KAL_TRUE; 
  }

  /* If "When needed"(auto_attach is FALSE), check if user has ever used at+cgatt=1 to perform 
      GPRS Attach. */
  else
    /* 
        DEREGISTERING may be only CS service detach
        && (RAC_DEREGISTRATION != rac_ptr_g->current_action) 

       John Tang 2005/01/27: Too many RAC gprs states when  detached. How about
       just sending DEATCH_REQ to GMM. It shall be OK for GMM to process this. 
       && ( GPRS_ATTACHED == rac_ptr_g->gprs_status) 
       */
  {
       /* if PDP active, donot detach */
       if(is_pdp_activate == KAL_FALSE && auto_attach == KAL_FALSE)
       {
            rac_ptr_g->src_id = LMMI_SRC;
            rac_set_action(RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED);   
            rac_send_detach_req(PS_DOMAIN,KAL_FALSE);
       }
       else
       {
            return KAL_FALSE;       
       }
   }
   return KAL_TRUE;
}

/* l4crac_update_auto_attach():
    Unlike above l4crac_set_auto_attach_settin, 
    RAC context auto attach is really updated */
kal_bool l4crac_update_auto_attach(kal_bool auto_attach)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   kal_brief_trace(TRACE_INFO, RAC_AUTO_ATTACH, rac_ptr_g->auto_attach, auto_attach);
   
   if(is_rac_activating()) 
      return KAL_FALSE;
   
#ifdef __GEMINI__
  if (auto_attach == KAL_TRUE &&
      rac_is_gprs_always_attach_allowed() == KAL_FALSE)
  {
  	return KAL_FALSE;
  }
#endif   

   if(rac_ptr_g->auto_attach != auto_attach)
   {
      rac_ptr_g->auto_attach = auto_attach;
      rac_save_preference();
   }
   return KAL_TRUE;
}

/* Johnny:
   rac_ptr_g->auto_attach is the current setting, we update (or execute) it in l4crac_set_auto_attach()
   nvram setting is the latest setting (user wanted), we update (or save) it in l4crac_set_auto_attach_setting()
   the current setting may be not the same as the lastest setting
   (L4C will call l4crac_set_auto_attach_setting() directly but queue l4crac_set_auto_attach() if command conflict)
   if we poweroff and then poweron, we'll use the latest setting in nvram
*/
kal_bool l4crac_set_auto_attach_setting(kal_bool auto_attach)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global; 
   kal_bool ori_auto_attach = rac_ptr_g->auto_attach;
   kal_bool ret = KAL_TRUE;

   ret = l4crac_update_auto_attach( auto_attach );

   rac_ptr_g->auto_attach = ori_auto_attach;
   
   return ret;
}

/* mtk02475: 
 * in Android GEMINI, RAC will ignore NVRAM setting at power-on and wait for AP to request PS service
 * but for GCF test, test case might need power-on combined attach. 
 * therefore, AP will set the auto attach in RAC context before RAC init 
 */
kal_bool l4crac_save_auto_attach_context(kal_bool auto_attach)
{
   rac_context_struct * rac_ptr_g = rac_ptr_global;
   kal_brief_trace(TRACE_INFO, RAC_AUTO_ATTACH, rac_ptr_g->auto_attach, auto_attach);

#ifdef __GEMINI__
  if (auto_attach == KAL_TRUE &&
      rac_is_gprs_always_attach_allowed() == KAL_FALSE)
  {
  	return KAL_FALSE;
  }
#endif   

   if(rac_ptr_g->auto_attach != auto_attach)
   {
      rac_ptr_g->auto_attach = auto_attach;
   }
   return KAL_TRUE;
}


rat_enum l4crac_get_rat_mode(void)
{
    return rac_ptr_global->rat_mode;
}

/*****************************************************************************
* FUNCTION
*  l4crac_set_rat_mode
* DESCRIPTION
*  
*  to set rat mode during flight mode, only change RAC context and NVRAM file
*
* PARAMETERS
*  desired rat mode
*
* RETURNS
*  SUCCEED or FAIL
* GLOBALS AFFECTED
*   
******************************************************************************/
kal_bool l4crac_set_rat_mode(rat_enum rat_mode)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
	
	if(is_rac_activating()) 
          return KAL_FALSE; 
 
    if( rat_mode != rac_ptr_g->rat_mode)
    {
        rac_ptr_g->rat_mode = rat_mode;
        
        rac_save_preference();
        return KAL_TRUE;
    }

    return KAL_FALSE;
}


/*****************************************************************************
* FUNCTION
*  l4crac_set_prefer_rat
* DESCRIPTION
*  
*  to set prefer rat during flight mode, L4C/RAC/MM do not need to wait for confirm
*
* PARAMETERS
*  desired prefer rat
*
* RETURNS
*  SUCCEED or FAIL
* GLOBALS AFFECTED
*   
******************************************************************************/

kal_bool l4crac_set_prefer_rat(rat_enum prefer_rat)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
#if (defined(__UMTS_RAT__) && defined(__GSM_RAT__))
    gmmreg_set_prefer_rat_req_struct *gmmreg_msg_ptr;

    if(is_rac_activating()) 
          return KAL_FALSE; 

    if(rac_ptr_g->prefer_rat != prefer_rat)
    {
        rac_ptr_g->prefer_rat = prefer_rat;
        rac_save_preference();
        gmmreg_msg_ptr = (gmmreg_set_prefer_rat_req_struct*) construct_local_para(sizeof(gmmreg_set_prefer_rat_req_struct),TD_CTRL);
        gmmreg_msg_ptr->prefer_rat = prefer_rat;

        rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_PREFER_RAT_REQ,
					   (local_para_struct *)gmmreg_msg_ptr);
    }  
#endif
    return KAL_TRUE;
}

#ifdef __DYNAMIC_ROAMING_SUPPORT__
kal_bool l4crac_get_roaming_mode(void)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    kal_brief_trace(TRACE_INFO, RAC_ROAMING_SUPPORT_SETTING, rac_ptr_g->is_supporting_roaming); 
    return rac_ptr_g->is_supporting_roaming;
}
#endif

kal_bool l4crac_get_roaming_setting(roaming_setting_enum setting)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
	   	   
	switch (setting) 
    {
        case DISABLE_INTERNATIONAL_ROAMING_SETTING:
        {
			kal_brief_trace(TRACE_INFO, RAC_INTERNATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_international_roaming_support);	 
            return rac_ptr_g->disable_international_roaming_support;
        }
		case DISABLE_NATIONAL_ROAMING_SETTING:
        {			
			kal_brief_trace(TRACE_INFO, RAC_NATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_national_roaming_support);    				  
            return rac_ptr_g->disable_national_roaming_support;
        }
		case DISABLE_HPPLMN_SEARCH_SETTING:
		{
 		    kal_brief_trace(TRACE_INFO, RAC_DISABLE_HPPLMN_SEARCH_SETTING, rac_ptr_g->disable_hhplmn_search_support);	 
            return rac_ptr_g->disable_hhplmn_search_support;
        }	
		default:
			DEBUG_ASSERT(0);
			break;
	}
	
    return KAL_FALSE;
}

void l4crac_set_roaming_setting(roaming_setting_enum setting, kal_bool is_turn_on)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;

	if(is_rac_activating()) 
          return ; 	   	   
	
	switch (setting) 
    {
        case DISABLE_INTERNATIONAL_ROAMING_SETTING:
        {
			rac_ptr_g->disable_international_roaming_support = is_turn_on;
			kal_brief_trace(TRACE_INFO, RAC_INTERNATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_international_roaming_support);	 
			break;
        }
		case DISABLE_NATIONAL_ROAMING_SETTING:
        {			
			rac_ptr_g->disable_national_roaming_support = is_turn_on;
			kal_brief_trace(TRACE_INFO, RAC_NATIONAL_ROAMING_SUPPORT_SETTING, rac_ptr_g->disable_national_roaming_support);    				  
            break;
        }
		case DISABLE_HPPLMN_SEARCH_SETTING:
		{
			rac_ptr_g->disable_hhplmn_search_support = is_turn_on;
 		    kal_brief_trace(TRACE_INFO, RAC_DISABLE_HPPLMN_SEARCH_SETTING, rac_ptr_g->disable_hhplmn_search_support);	 
            break;
        }	
		default:
			DEBUG_ASSERT(0);
			break;
	}
	rac_save_preference();
}

rat_enum l4crac_get_prefer_rat(void)
{
#if defined(__UMTS_RAT__) && defined(__GSM_RAT__)
    kal_brief_trace(TRACE_INFO, RAC_NASRAT_PREFERENCE, rac_ptr_global->prefer_rat); 
    return rac_ptr_global->prefer_rat;
#elif defined(__GSM_RAT__)
    kal_brief_trace(TRACE_INFO, RAC_NASRAT_PREFERENCE, RAT_GSM); 
    return RAT_GSM;
#else
    kal_brief_trace(TRACE_INFO, RAC_NASRAT_PREFERENCE, RAT_UMTS); 
    return RAT_UMTS;
#endif 
}

/*****************************************************************************
* FUNCTION
*  l4crac_get_irat_preference
* DESCRIPTION
*  
*  to get Inter-RAT preference 
*
* PARAMETERS
*  none
*
* RETURNS
*  TRUE or FALSE
* GLOBALS AFFECTED
*   
******************************************************************************/
rat_enum l4crac_get_irat_preference(void)
{
#if defined(__UMTS_RAT__) && defined(__GSM_RAT__)
    kal_brief_trace(TRACE_INFO, RAC_IRAT_PREFERENCE, rac_ptr_global->irat); 
    return rac_ptr_global->irat;
#elif defined(__GSM_RAT__)
    kal_brief_trace(TRACE_INFO, RAC_IRAT_PREFERENCE, RAT_GSM); 
    return RAT_GSM;
#else
    kal_brief_trace(TRACE_INFO, RAC_IRAT_PREFERENCE, RAT_UMTS); 
    return RAT_UMTS;
#endif 
}

/*****************************************************************************
* FUNCTION
*  l4crac_set_irat_preference
* DESCRIPTION
*  
*  to set Inter-RAT preference
*
* PARAMETERS
*  is WCDMA preferred or not
*
* RETURNS
*  SUCCEED or FAIL
* GLOBALS AFFECTED
*   
******************************************************************************/
kal_bool l4crac_set_irat_preference(rat_enum preferred_rat)
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
	
	if(is_rac_activating()) 
          return KAL_FALSE; 

    kal_brief_trace(TRACE_INFO, RAC_IRAT_PREFERENCE, preferred_rat); 
#if (defined(__UMTS_RAT__) && defined(__GSM_RAT__))    
    if( preferred_rat != rac_ptr_g->irat)
    {
        rac_ptr_g->irat = preferred_rat;
        
        rac_save_preference();
        return KAL_TRUE;
    }
#endif
    return KAL_FALSE;
}

/*
 * mtk02475:
 * Allow L4C cancel PLMN_LIST/SEARCH retry
 */
//DUMA00208245: retried PLMN LIST/SEARCH cannot be correctly stopped during SIM refresh
//MAUI_01693564: send PLMN SEARCH/LIST/LIST STOP CNF to L4C even if request is sent to MM, 
//               prevent current action been overwirte when SIM READY come before CNF
kal_bool l4crac_cancel_retry_action() 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    kal_bool ret_value = KAL_FALSE;
    kal_bool is_retrying = KAL_FALSE;
    
    if (rac_ptr_g->event_id[RAC_RETRY_PLMN_SEARCH_TIMER_ID] != 0
        || rac_ptr_g->event_id[RAC_RETRY_PLMN_LIST_TIMER_ID] != 0
#ifdef __CSG_SUPPORT__
        || rac_ptr_g->event_id[RAC_RETRY_CSG_LIST_TIMER_ID] != 0
#endif /* __CSG_SUPPORT__ */
       )
    {
        is_retrying = KAL_TRUE;
    }

    switch (rac_ptr_g->current_action) 
    {
        case RAC_PLMN_LIST:
        {
            rac_send_plmn_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE, 0);
            
            if (is_retrying == KAL_FALSE) { //stop PLMN LIST if PLMN_LIST_REQ is sent to MM
                rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_PLMN_LIST_STOP_REQ,
                        NULL);
            }
            ret_value = KAL_TRUE;
            break;
        }

        case RAC_SELECT_PLMN:
        {
            //reset MM/GMM state when PLMN search been canceled by L4C
            
            /*MAUI_02319532,when RAC is in searching state and receiving PLMN_SEARCH_REQ,
            * and after MM responses for it directly, RAC should check whether previous state for mm is RAC_MM_NULL.
            * Or RAC will restore state for mm to RAC_MM_NULL. Then RAC may stay in RAC_MM_NULL and MMI shows "no service".
            */            
            if ((rac_ptr_g->rac_mm_state == RAC_MM_SEARCHING)&&(rac_ptr_g->previous_rac_mm_state != RAC_MM_NULL))
            {
                rac_ptr_g->rac_mm_state = rac_ptr_g->previous_rac_mm_state; //PROC_FAILED => RAC_MM_LIMITED_DENIED?
            }
            if (rac_ptr_g->rac_gmm_state == RAC_GMM_SEARCHING)
            {
                rac_ptr_g->rac_gmm_state = rac_ptr_g->previous_rac_gmm_state;
            }
            rac_send_plmn_search_cnf(L4C_RAC_ERROR, CAUSE_NONE);
            ret_value = KAL_TRUE;
            break;
        }

        case RAC_PLMN_LIST_STOP:
        {
            rac_send_plmn_list_stop_cnf();
            ret_value = KAL_TRUE;
            break;
        }
        
        case RAC_PLMN_LIST_STOP_TIMEOUT:
        {
            rac_send_plmn_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE, 0);
            ret_value = KAL_TRUE;
            break;
        }
        
#ifdef __CSG_SUPPORT__
        case RAC_CSG_LIST:
        {
            rac_send_csg_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE);
            
            if (is_retrying == KAL_FALSE) { //stop CSG LIST if CSG_LIST_REQ is sent to MM
                rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_CSG_LIST_STOP_REQ,
                        NULL);
            }
            ret_value = KAL_TRUE;
            break;
        }

        case RAC_CSG_LIST_STOP:
        {
            rac_send_csg_list_stop_cnf();
            ret_value = KAL_TRUE;
            break;
        }

        case RAC_CSG_LIST_STOP_TIMEOUT:
        {
            rac_send_csg_list_cnf(NULL, L4C_RAC_ERROR, CAUSE_NONE);
            ret_value = KAL_TRUE;
            break;
        }
#endif /* __CSG_SUPPORT__ */

        default:
            break;
    }
    
    if (ret_value == KAL_TRUE)
    {
        rac_set_action(RAC_IDLE);
    }
    
    return ret_value;
}

/*
 * mtk02475:
 * query function, return true if MS is deregistered from network
 */
kal_bool l4crac_is_deregistered() 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    if (rac_ptr_g->rac_mm_state == RAC_MM_NULL && rac_ptr_g->rac_gmm_state == RAC_GMM_NULL) {
        return KAL_TRUE;
    } else {    
        return KAL_FALSE;
    }
}

#ifdef __MONITOR_PAGE_DURING_TRANSFER__
/* mtk02475:
 * get/set function for MONITOR_PAGE_DURING_TRANSFER feature
 */
gprs_transfer_preference_enum l4crac_get_gprs_transfer_preference(void) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    kal_brief_trace(TRACE_INFO, RAC_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->gprs_transfer_preference);  
    return rac_ptr_g->gprs_transfer_preference;
}


void l4crac_set_gprs_transfer_preference(gprs_transfer_preference_enum transfer_perference) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    if(is_rac_activating()) 
		return;

    if (rac_ptr_g->gprs_transfer_preference != transfer_perference)
    {
       gmmreg_set_gprs_transfer_preference_req_struct *transfer_preference_req
             = (gmmreg_set_gprs_transfer_preference_req_struct*) 
               construct_local_para(sizeof(gmmreg_set_gprs_transfer_preference_req_struct),TD_CTRL);
   
       transfer_preference_req->prefer= transfer_perference;
       rac_ptr_g->gprs_transfer_preference = transfer_perference;
	   
       rac_send_ilm(MOD_MM,GMMREG_SAP,MSG_ID_GMMREG_SET_GPRS_TRANSFER_PREFERENCE_REQ,
                     (local_para_struct*) transfer_preference_req);
   
       rac_save_preference();
    }
}
#endif

#ifdef __PLMN_LIST_PREF_SUPPORT__
/*
 * mtk02475:
 * PLMN LIST PREFERENCE
 */

plmn_list_preference_enum l4crac_get_plmn_list_preference() 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    kal_brief_trace(TRACE_INFO, RAC_PLMN_LIST_PREFERENCE, rac_ptr_g->plmn_list_preference);  
    return rac_ptr_g->plmn_list_preference;
}

void l4crac_set_plmn_list_preference(plmn_list_preference_enum preference) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;    
    
    if(is_rac_activating()) 
		    return;

    if (rac_ptr_g->plmn_list_preference != preference)
    {   
    	 rac_ptr_g->plmn_list_preference = preference;
       rac_save_preference();
    }
}
#endif /* __PLMN_LIST_PREF_SUPPORT__ */

#ifdef __HSPA_PREFERENCE_SETTING__
/*
 * mtk02475:
 * HSPA PREFERENCE
 */

hspa_preference_enum l4crac_get_hspa_preference() 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    kal_brief_trace(TRACE_INFO, RAC_HSPA_PREFERENCE, rac_ptr_g->hspa_preference);  
    return rac_ptr_g->hspa_preference;
}

void l4crac_set_hspa_preference(hspa_preference_enum preference) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;    
    
    if(is_rac_activating()) 
		    return;

    if (rac_ptr_g->hspa_preference != preference)
    {   
       rac_ptr_g->hspa_preference = preference;
       rac_save_preference();
    }
	return;
}
#endif /* __HSPA_PREFERENCE_SETTING__ */

/* mtk02475:
 * for ECC retry on other RAT feature, L4C need this query function to obtain current RAT info
 */
rat_enum l4crac_get_current_rat()
{
    return rac_ptr_global->current_cell_rat.rat;
}

/* mtk02475:
 * get current NVRAM RAT mode setting
 */
rat_enum l4crac_get_nvram_rat_mode(void)
{
    return rac_ptr_global->nvram_rat_mode;
}

#ifdef __GEMINI_3G_SWITCH__
/* mtk02475:
 * for 3G switchable feature, need to turn on 3G for specified SIM
 * detailed procedure:
 *    1. RIL -- AT+ES3G=<SIM ID>, <RAT MODE> --> L4C 
 *    2. L4C -- update_nvram_rat_mode(<SIM ID>, <RAT MODE>) --> RAC
 *    3. RAC -- NVRAM_WRITE_REQ --> NVRAM (update RAT mode)
 *    4. L4C -- NVRAM_WRITE_REQ --> NVRAM (update 3G SIM setting)
 *    5. RIL -- reboot modem --> L4C
 */
void l4crac_update_nvram_rat_mode(l4c_rat_enum nvram_rat_mode, sim_interface_enum sim_id)
{
    rac_context_struct * rac_ptr_g;
#ifdef __GEMINI__
    sim_interface_enum original_sim_id = (sim_interface_enum)rac_ptr_global->sim_interface;
#endif /* __GEMINI__ */

#ifdef __GEMINI__
    //mtk02475: need to switch context to target sim before invoke any function
    rac_context_selection((kal_uint8)sim_id);
#endif /* __GEMINI__ */

    //mtk02475: init local variable after context selection
    rac_ptr_g = rac_ptr_global;

    if(is_rac_activating() == KAL_FALSE) 
    {
        if (rac_ptr_g->nvram_rat_mode != ((rat_enum)nvram_rat_mode))
        {   
            rac_ptr_g->nvram_rat_mode = nvram_rat_mode;
            rac_save_preference();
        }
    }
#ifdef __GEMINI__
    rac_context_selection((kal_uint8)original_sim_id);
#endif /* __GEMINI__ */

	return;
}
#endif /* __GEMINI_3G_SWITCH__ */

//mtk02475: for AT%CAMP, L4C need to query current CS domain service status
l4c_rac_response_enum l4crac_get_gsm_status()
{
    return rac_get_gsm_status();    
} //rx_level need

//mtk02475: for EHPLMN, modem will provide the information of roaming
kal_bool l4crac_is_on_hplmn(void) 
{
    return rac_ptr_global->is_on_hplmn;
}

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
/* mtk02475:
 * get/set function for GEMINI 2.0 feature
 */
kal_bool l4crac_get_peer_gprs_transfer_preference(void) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    kal_brief_trace(TRACE_INFO, RAC_PEER_GPRS_TRANSFER_PREFERENCE, rac_ptr_g->peer_gprs_transfer_preference);  
    return rac_ptr_g->peer_gprs_transfer_preference;
}


void l4crac_set_peer_gprs_transfer_preference(kal_bool peer_transfer_perference) 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    
    if(is_rac_activating()) 
		return;

    if (rac_ptr_g->peer_gprs_transfer_preference != peer_transfer_perference)
    {
       rac_ptr_g->peer_gprs_transfer_preference = peer_transfer_perference;	      
       rac_save_preference();
    }
}
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

#ifdef __CSG_SUPPORT__
/*
 * mtk02475:
 * for Rel8 CSG autonomous search
 */

kal_bool l4crac_get_csg_auto_search_preference() 
{
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    kal_brief_trace(TRACE_INFO, RAC_CSG_AUTO_SEARCH_PREFERENCE, rac_ptr_g->csg_auto_search_preference);  
    return rac_ptr_g->csg_auto_search_preference;
}

void l4crac_set_csg_auto_search_preference(kal_bool preference) 
{	    
    rac_context_struct * rac_ptr_g = rac_ptr_global;
    if(is_rac_activating()) 
    {
       return;
    }

    if (rac_ptr_g->csg_auto_search_preference != preference)
    {   
       rac_ptr_g->csg_auto_search_preference = preference;
       rac_save_preference();
    }
	return;
}
#endif /* __CSG_SUPPORT__ */

#endif /*end of __MOD_RAC__*/

