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
 *   l4c_em.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode source file.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "app_buff_alloc.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
#include "md_sap.h"
#include "em_msgid.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "device.h"
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_msghdlr.h"
#include "l4_trc.h"
//#include "uart_sw.h"

//#include "mcd_l3_inc_struct.h"
//#include "l4_defs.h"
//#include "csmcc_atfunc.h"
//#include "csmss_atfunc.h"
//#include "l4c_aux_struct.h"
//#include "l4c_ss_parse.h"

#ifdef __MOD_CSM__
//#include "mcd_ss_parameters.h"  /* csm */
//#include "mcd_ss_tcapmessages.h"
#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c_ciss_cmd.h"
//#include "l4c2csm_ss_struct.h"
//#include "l4c_cc_cmd.h"
#endif /* __MOD_CSM__ */ 
#include "em_struct.h"
#include "l4c_em.h"

//#include "l4c2abm_struct.h"
//#include "l4c_ss_parse.h"
//#include "smsal_l4c_enum.h"
//#include "l4c2smsal_struct.h"
//#include "l4c2phb_enums.h"   
//#include "l4c2phb_struct.h"
#include "lmmi_rsp.h"

//#include "mcd_ps2sat_peer.h"
//#include "keypad_sw.h"
//#include "ps2sat_struct.h"
//#include "l4c2smu_struct.h"
#include "lmmi_ind.h"
#include "custom_em.h"
#include "rmmi_ind.h"  
#include "rmmi_rsp.h"  
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "ps_em_enum.h"

#ifdef __MTK_TARGET__
#include "mph_cs_msg.h"
#ifdef __UMTS_FDD_MODE__
#include "ul1_def.h"
#include "ul1_struct.h"
#endif
#endif

/* MMI will prepare these functions for call back */
#ifndef __EMPTY_CALLBACK__
extern void l4c_em_update_rsp(kal_bool result, kal_uint8 cause);
extern void l4c_em_status_ind(kal_uint8 mod_id, kal_uint32 em_info, peer_buff_struct *info);
#endif /* __EMPTY_CALLBACK__ */ 

#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
extern const em_info_req_mod_tbl_struct em_info_req_mod_tbl[];
#endif 


/*****************************************************************************
 * FUNCTION
 *  em_send_msg_to_ps
 * DESCRIPTION
 *  
 * PARAMETERS
 *  msg_id          [IN]        
 *  dest_mod_id     [IN]        
 *  pLocal          [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void em_send_msg_to_ps(msg_type msg_id, module_type dest_mod_id, 
                       local_para_struct *pLocal)
{                       

   msg_send5(l4c_current_mod_id, dest_mod_id, EM_PS_SAP, msg_id, pLocal);

   return;
}
//mtk00468 modified cal back function for RMMI with EM mode 
#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
void l4a_em_update_req(kal_uint8 src_id,  kal_uint8 *info_request)
{
	 l4c_em_update_req(EM_FROM_MMI,info_request);

	 /* response to MMI immediately */
	 l4c_em_update_rsp(KAL_TRUE, EM_CAUSE_OK);	 
}

/*****************************************************************************
 * FUNCTION
 *  l4c_em_update_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  em_src              [IN]          
 *  info_request        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_update_req(em_source_enum em_src,  kal_uint8 *info_request)
{
       kal_uint32 i = 0;
	kal_uint32 j = 0;
	kal_uint16 update_num = 0;
	kal_uint32 em_total_mod = em_get_total_mod();
	kal_uint32 em_total_info_req = em_get_total_info_req();
	kal_bool exist = KAL_FALSE;	  
       module_type *update_list;
       module_type mod_id = MOD_NIL;	   

	update_list = get_ctrl_buffer(em_total_mod * sizeof(module_type));
	
       //kal_prompt_trace(l4c_current_mod_id,"em_total_info_req=%d,em_total_mod=%d",em_total_info_req,em_total_mod);
	 
 	 /* Prevent broadcasting update_req, only send to module needed*/
        for(i=0 ; i<NUM_OF_EM_INFO ; i++)
        {
        	/* info_request[i] is mapped to event in em_info_enum*/
       	if(info_request[i] != EM_NC)
       	{
			//kal_prompt_trace(l4c_current_mod_id,"event=%d",i);
			
			/* Lookup the module responsible for the event*/
       		exist = KAL_FALSE;
			
			for(j=0;j<em_total_info_req;j++)
			{
				if( (kal_uint32)em_info_req_mod_tbl[j].em_info_event == i)//
				{

                            // [MAUI_02963626]
                            // If PPP_NOT_PRESENT, PPP has no external queue
                            #if defined(PPP_NOT_PRESENT)
                                if (em_info_req_mod_tbl[j].mod_id == MOD_PPP)
                                {
                                    break;
                                }
                            #endif

                                switch(em_info_req_mod_tbl[j].mod_id)
                                {
                                    // These module only have one even in Gemini project
                                    case MOD_UEM:
                                    case MOD_PPP:
                                #ifdef __VIDEO_CALL_SUPPORT__
                                    case MOD_VT:
                                #endif
                                #ifdef  __UMTS_RAT__
                                    case MOD_URR:
                                #endif
                                #if defined(__UMTS_RAT__) && defined(__UMTS_TDD128_MODE__)
                                    case MOD_UL2:
                                #endif
                                    case MOD_NIL:
                                        mod_id = em_info_req_mod_tbl[j].mod_id;
                                        break;
                                    default:
                                        mod_id = L4_MODULE(em_info_req_mod_tbl[j].mod_id, l4c_current_mod_id - MOD_L4C);
                                        break;
                                }

                                exist = KAL_TRUE;
                                //kal_prompt_trace(l4c_current_mod_id,"Event found in em_info_req_mod_tbl[%d],mod_id=%d,i=%d",j,mod_id,i);
                                kal_trace(TRACE_GROUP_6, EM_EVENT_FOUND_IN_MAPPING_TABLE,j,mod_id,i);										
				}
			}

			if(exist == KAL_FALSE)
			{
				//kal_prompt_trace(l4c_current_mod_id,"No module mapped to em event :%d",i);
				kal_trace(TRACE_GROUP_6, EM_NO_MODULE_MAP_TO_EVENT, mod_id);									
				continue;
			}
			
       		/* check if it's already in the update_list */
       		exist = KAL_FALSE;

			for(j=0;j<update_num;j++)
			{
				if(update_list[j] == mod_id)
				{
					exist = KAL_TRUE;
					break;		
				}
			}

			/* if the module is not included in the update_list,add it */
       		if(exist == KAL_FALSE)
    			{
				/* add to update list */
				if(update_num < em_total_mod && mod_id != MOD_NIL)
				{
		      			update_list[update_num] = mod_id;
					update_num++;
					//kal_prompt_trace(l4c_current_mod_id,"Add event:%d in the update_list",mod_id);					
					kal_trace(TRACE_GROUP_6, EM_ADD_UPDATE_LIST, mod_id);					
				}
				
				if(update_num == em_total_mod)
				{
					break;
				}	
			}	
       	}		
      	  }
 	  
        for(i=0; i<update_num; i++)
        {
       	 l4cps_em_update_req_struct *param_ptr = NULL;
   		
		 param_ptr = (l4cps_em_update_req_struct *)construct_local_para(
       	               		  sizeof(l4cps_em_update_req_struct), TD_RESET);  
			
       	 ASSERT(param_ptr != NULL);
			 
		 param_ptr->em_src = em_src; 
	        kal_mem_cpy(param_ptr->info_request , info_request, NUM_OF_EM_INFO);      
  
	        em_send_msg_to_ps(MSG_ID_L4CPS_EM_UPDATE_REQ, update_list[i], (local_para_struct*)param_ptr);
         }

	 free_ctrl_buffer(update_list);
	 return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_vt_em_get_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_vt_em_get_config_req(kal_uint8 src_id)
{
#ifdef __VIDEO_CALL_SUPPORT__
    em_send_msg_to_ps(MSG_ID_L4C_VT_EM_GET_CONFIG_REQ, MOD_VT, NULL);
#endif 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_vt_em_set_config_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  em_config       [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_vt_em_set_config_req(kal_uint8 src_id, vt_em_config_struct *em_config)
{
#ifdef __VIDEO_CALL_SUPPORT__
    l4c_vt_em_set_config_req_struct *param_ptr = NULL;

    param_ptr = (l4c_vt_em_set_config_req_struct*) construct_local_para(sizeof(l4c_vt_em_set_config_req_struct), TD_RESET);

    kal_mem_cpy(&param_ptr->em_config, (vt_em_config_struct*) em_config, sizeof(vt_em_config_struct));

    em_send_msg_to_ps(MSG_ID_L4C_VT_EM_SET_CONFIG_REQ, MOD_VT, (local_para_struct*) param_ptr);
#endif /* __VIDEO_CALL_SUPPORT__ */ 
}
#endif /* __MODEM_EM_MODE__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_em_cell_resel_suspend_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 *  status      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_cell_resel_suspend_req(kal_uint8 src_id, kal_uint8 status)
{
    l4cps_em_cell_resel_suspend_req_struct *msg_ptr = NULL;

    msg_ptr =
        (l4cps_em_cell_resel_suspend_req_struct*) construct_local_para(
                                                    sizeof(l4cps_em_cell_resel_suspend_req_struct),
                                                    TD_RESET);
    ASSERT(msg_ptr != NULL);

    msg_ptr->suspend_status = status;

    em_send_msg_to_ps(MSG_ID_L4CPS_EM_CELL_RESEL_SUSPEND_REQ, MOD_AS, (local_para_struct*) msg_ptr);

    /* Confirm immediately */
    l4c_em_cell_resel_suspend_rsp(KAL_TRUE, EM_CAUSE_OK);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_cell_resel_resume_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_cell_resel_resume_req(kal_uint8 src_id)
{
    em_send_msg_to_ps(MSG_ID_L4CPS_EM_CELL_RESEL_RESUME_REQ, MOD_AS, NULL);

    /* Confirm immediately */
    l4c_em_cell_resel_resume_rsp(KAL_TRUE, EM_CAUSE_OK);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_get_cell_lock_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_get_cell_lock_req(kal_uint8 src_id)
{
    module_type dest_id;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

  #if defined(__MODEM_EM_MODE__)
    if (src_id >= RMMI_SRC)
    {
    	if (rmmi_ptr->em_src_id==INVALID_SRC)
    	{
    		rmmi_ptr->em_src_id = src_id;
    	}
    	else
    	{	/* RMMI_PTR->em_src_id!=INVALID_SRC , i.e other EM request existed */
    		l4c_em_get_cell_lock_rrsp(KAL_FALSE,0,0,0,L4C_PTR->em_cell_lock_mode);
    		L4C_PTR->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_CONDITIONED;
    		return;
    	}
    }
  #endif
  
    dest_id = L4_MODULE(MOD_AS, l4c_current_mod_id - MOD_L4C);

    em_send_msg_to_ps(MSG_ID_L4CPS_EM_GET_CELL_LOCK_REQ, dest_id, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_ext_get_cell_lock_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_ext_get_cell_lock_req(kal_uint8 src_id)
{
    L4C_PTR->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_ABSOLUTE;
    /* If EM request conflict, is_extended_cell_lock flag should be cleared inside rrsp() function*/
    l4c_em_get_cell_lock_req(src_id);

}

void l4c_em_common_set_cell_lock_req(kal_uint8 src_id, kal_uint32 enabled_bitmap, kal_bool band_indicator, kal_uint16 *lock_arfcn, kal_uint32 mode)
{
    kal_uint32 counter=0;
    module_type dest_id;
    l4cps_em_set_cell_lock_req_struct *msg_ptr = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    L4C_PTR->em_cell_lock_mode = mode;
   
  #if defined(__MODEM_EM_MODE__)
    if (src_id >= RMMI_SRC)
    {
	if (rmmi_ptr->em_src_id==INVALID_SRC)
	{
		rmmi_ptr->em_src_id = src_id;
	}
	else
	{/* RMMI_PTR->em_src_id!=INVALID_SRC , i.e other EM request existed */
	    l4c_em_set_cell_lock_rrsp(KAL_FALSE);
            L4C_PTR->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_CONDITIONED;
	    return;
	}
    }
  #endif	

    msg_ptr =
        (l4cps_em_set_cell_lock_req_struct*) construct_local_para(sizeof(l4cps_em_set_cell_lock_req_struct), TD_RESET);
    ASSERT(msg_ptr != NULL);

    msg_ptr->enabled_bitmap = enabled_bitmap;
    msg_ptr->band_indicator = band_indicator;
    msg_ptr->mode = mode;
    for( ;counter < MAX_NUM_CELL_LOCK_ARFCN; counter++)
    {
        if(enabled_bitmap & (0x1<<counter))
        {
            msg_ptr->lock_arfcn[counter] = lock_arfcn[counter];
        }
        else
        {
            //break;
            msg_ptr->lock_arfcn[counter] = 0;
        }
    }

    dest_id = L4_MODULE(MOD_AS, l4c_current_mod_id - MOD_L4C);

    em_send_msg_to_ps(MSG_ID_L4CPS_EM_SET_CELL_LOCK_REQ, dest_id, (local_para_struct*) msg_ptr);
}

/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_cell_lock_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  turn_on_or_off      [IN]        
 *  band_indicator      [IN]        
 *  lock_arfcn          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_set_cell_lock_req(kal_uint8 src_id, kal_bool turn_on_or_off, kal_bool band_indicator, kal_uint16 lock_arfcn)
{
    l4c_em_common_set_cell_lock_req(src_id, (kal_uint32)turn_on_or_off, band_indicator, &lock_arfcn, (kal_uint32)CELL_LOCK_MODE_CONDITIONED);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_ext_set_cell_lock_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  turn_on_or_off      [IN]        
 *  band_indicator      [IN]        
 *  lock_arfcn          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_em_ext_set_cell_lock_req(kal_uint8 src_id, kal_uint32 enabled_bitmap, kal_bool band_indicator, kal_uint16 *lock_arfcn)
{
    l4c_em_common_set_cell_lock_req(src_id, enabled_bitmap, band_indicator, lock_arfcn, (kal_uint32)CELL_LOCK_MODE_ABSOLUTE);
}


#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_em_set_cell_id_lock_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id              [IN]        
 *  num_of_nc_lai       [IN]        
 *  nc_lai              [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_set_cell_id_lock_req(kal_uint8 src_id, kal_uint8 num_of_nc_lai, rr_em_lai_info_struct *nc_lai)
{
    l4cps_em_set_cell_id_lock_req_struct *msg_ptr = NULL;

    msg_ptr =
        (l4cps_em_set_cell_id_lock_req_struct*) construct_local_para(
                                                    sizeof(l4cps_em_set_cell_id_lock_req_struct),
                                                    TD_RESET);
    ASSERT(msg_ptr != NULL);

    msg_ptr->num_of_nc_lai = num_of_nc_lai;
    kal_mem_cpy(msg_ptr->nc_lai, nc_lai, sizeof(rr_em_lai_info_struct) * L4C_MAX_EM_CELL_LOCK_NUM);

    em_send_msg_to_ps(MSG_ID_L4CPS_EM_SET_CELL_ID_LOCK_REQ, MOD_AS, (local_para_struct*) msg_ptr);
}
#endif
#endif /* __MODEM_EM_MODE__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_em_feature_command_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id                  [IN]        
 *  em_feature              [IN]        
 *  em_feature_state        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_feature_command_req(kal_uint8 src_id, kal_uint8 em_feature, kal_uint8 em_feature_state)
{
    l4cps_em_feature_command_req_struct *msg_ptr = NULL;
    module_type dest_id;
    
    msg_ptr =
        (l4cps_em_feature_command_req_struct*) construct_local_para(
                                                sizeof(l4cps_em_feature_command_req_struct),
                                                TD_RESET);
    ASSERT(msg_ptr != NULL);

    msg_ptr->em_feature = (em_feature_enum)em_feature;               /* em_feature_enum */
    msg_ptr->em_feature_state = (em_feature_state_enum)em_feature_state;   /* em_feature_state_enum */

    dest_id = L4_MODULE(MOD_AS, l4c_current_mod_id - MOD_L4C);

    em_send_msg_to_ps(MSG_ID_L4CPS_EM_FEATURE_COMMAND_REQ, dest_id, (local_para_struct*) msg_ptr);
}

/* EM main message handler */


/*****************************************************************************
 * FUNCTION
 *  l4c_em_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_handler(ilm_struct *ilm_ptr)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    
    switch (ilm_ptr->msg_id)
    {

   case MSG_ID_TSTL4C_EM_UPDATE_REQ:
   {
      tstl4c_em_update_req_struct *msg_ptr = NULL;
      msg_ptr = (tstl4c_em_update_req_struct*)ilm_ptr->local_para_ptr;
 
	//mtk01616_070509: L4C should not send EM_START_REQ ,since those modules might not initialized when USB_BOOT mode  ,
	if(!(l4c_ptr->cfun_state == 1 || l4c_ptr->cfun_state == 4))
		break;
#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
	l4c_em_update_req(EM_FROM_CATCHER, (kal_uint8*)msg_ptr->info_request);
#endif	
      break;
   }


   case MSG_ID_L4CPS_EM_UPDATE_CNF:
   {
      /* NO check */
      break;
   }

        case MSG_ID_L4CPS_EM_CELL_RESEL_SUSPEND_CNF:
        {
            /* NO check */
            break;
        }
        case MSG_ID_L4CPS_EM_CELL_RESEL_RESUME_CNF:
        {
            /* NO check */
            break;
        }
        case MSG_ID_L4CPS_EM_GET_CELL_LOCK_CNF:
        {
            l4cps_em_get_cell_lock_cnf_struct *msg_ptr = NULL;
            
            msg_ptr = (l4cps_em_get_cell_lock_cnf_struct*) ilm_ptr->local_para_ptr;
            
            if((kal_uint32)msg_ptr->mode == l4c_ptr->em_cell_lock_mode)
            {
            #if defined(__MODEM_EM_MODE__)
                if(rmmi_ptr->em_src_id != INVALID_SRC)
                {
                    rmmi_ptr->current_src = rmmi_ptr->em_src_id;    
                    l4c_em_get_cell_lock_rrsp(msg_ptr->result, msg_ptr->enabled_bitmap, msg_ptr->band_indicator, msg_ptr->lock_arfcn, l4c_ptr->em_cell_lock_mode);
                    rmmi_ptr->em_src_id = INVALID_SRC;
                }
                else 
            #endif
                if(l4c_ptr->em_cell_lock_mode == (kal_uint32)CELL_LOCK_MODE_ABSOLUTE)
                {
                    l4c_em_ext_get_cell_lock_lrsp(msg_ptr->result,
                                                  msg_ptr->enabled_bitmap,
                                                  msg_ptr->band_indicator,
                                                  msg_ptr->lock_arfcn);
                    
                }
                else
                {
                    l4c_em_get_cell_lock_rsp(msg_ptr->result,
                                             (kal_bool)(msg_ptr->enabled_bitmap & 0x01),
                                             msg_ptr->band_indicator,
                                             msg_ptr->lock_arfcn[0]);
                }
                
            }
            else
            {
            #if defined(__MODEM_EM_MODE__)
                if(rmmi_ptr->em_src_id != INVALID_SRC)
                {
                    rmmi_ptr->current_src = rmmi_ptr->em_src_id;    
                    l4c_em_get_cell_lock_rrsp(KAL_FALSE, msg_ptr->enabled_bitmap, msg_ptr->band_indicator, msg_ptr->lock_arfcn, l4c_ptr->em_cell_lock_mode);
                    rmmi_ptr->em_src_id = INVALID_SRC;
                }
                else 
            #endif
                if(l4c_ptr->em_cell_lock_mode == (kal_uint32)CELL_LOCK_MODE_ABSOLUTE)
                {
                    l4c_em_ext_get_cell_lock_lrsp(KAL_FALSE,
                                                  msg_ptr->enabled_bitmap,
                                                  msg_ptr->band_indicator,
                                                  msg_ptr->lock_arfcn);
                    
                }
                else
                {
                    l4c_em_get_cell_lock_rsp(KAL_FALSE,
                                             (kal_bool)(msg_ptr->enabled_bitmap & 0x01),
                                             msg_ptr->band_indicator,
                                             msg_ptr->lock_arfcn[0]);
                }
                
            }
	        
	        l4c_ptr->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_CONDITIONED;

            break;
        }
        case MSG_ID_L4CPS_EM_SET_CELL_LOCK_CNF:
        {
            l4cps_em_set_cell_lock_cnf_struct *msg_ptr = NULL;

            msg_ptr = (l4cps_em_set_cell_lock_cnf_struct*) ilm_ptr->local_para_ptr;

            #if defined(__MODEM_EM_MODE__)
                if(rmmi_ptr->em_src_id != INVALID_SRC)
                {
                    rmmi_ptr->current_src = rmmi_ptr->em_src_id;		
                    l4c_em_set_cell_lock_rrsp(msg_ptr->result);
                    rmmi_ptr->em_src_id = INVALID_SRC;
                }
                else 
            #endif
            
            if(l4c_ptr->em_cell_lock_mode == (kal_uint32)CELL_LOCK_MODE_ABSOLUTE)
            {
                l4c_em_ext_set_cell_lock_lrsp(msg_ptr->result);
            }
            else
            {
                l4c_em_set_cell_lock_rsp(msg_ptr->result);
            }
            
            l4c_ptr->em_cell_lock_mode = (kal_uint32)CELL_LOCK_MODE_CONDITIONED;

            break;
        }
    #if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
    #if defined(__NONE_USED_L4MMI_MESSAGE__)
        case MSG_ID_L4CPS_EM_SET_CELL_ID_LOCK_CNF:
        {
            l4cps_em_set_cell_id_lock_cnf_struct *msg_ptr = NULL;

            msg_ptr = (l4cps_em_set_cell_id_lock_cnf_struct*) ilm_ptr->local_para_ptr;

            l4c_em_set_cell_id_lock_lrsp(msg_ptr->result);

            break;
        }
    #endif
    #endif /* __MODEM_EM_MODE__ */ 
            //mtk01616_071004: EM for VT
        case MSG_ID_L4C_VT_EM_GET_CONFIG_CNF:
        {
        #ifdef __MODEM_EM_MODE__
        #ifdef __VIDEO_CALL_SUPPORT__
            l4c_vt_em_get_config_cnf_struct *msg_ptr = NULL;

            msg_ptr = (l4c_vt_em_get_config_cnf_struct*) ilm_ptr->local_para_ptr;

            l4c_vt_em_get_config_lrsp(msg_ptr->em_config);

        #endif /* __VIDEO_CALL_SUPPORT__ */ 
        #endif
            break;
        }

        case MSG_ID_L4CPS_EM_FEATURE_COMMAND_CNF:
        {
            l4cps_em_feature_command_cnf_struct *msg_ptr = NULL;

            msg_ptr = (l4cps_em_feature_command_cnf_struct*) ilm_ptr->local_para_ptr;

            l4c_em_feature_command_rsp(msg_ptr->result, msg_ptr->em_feature);

            break;
        }

        case MSG_ID_L4CPS_EM_STATUS_IND:
        {
            l4cps_em_status_ind_struct *msg_ptr = NULL;
            peer_buff_struct *pPeer = NULL;

            msg_ptr = (l4cps_em_status_ind_struct*) ilm_ptr->local_para_ptr;

            pPeer = (peer_buff_struct*) ilm_ptr->peer_buff_ptr;

        // In tst mode (catcher EM mode) , ps module will NOT send EM_STATUS_IND to L4C anymore

        // currently we not support EM info for LMMI and RMMI at the same time
        #if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
        #ifdef __MMI_FMI__
            hold_peer_buff(ilm_ptr->peer_buff_ptr);   /* Hold the peer buffer */
        #else /* __MMI_FMI__ */

            if (rmmi_ptr->report_mode.einfo & (INFO_REPORT_MASK << RMMI_ENWINFO_BIT))
            {
                kal_uint8 temp_src = rmmi_ptr->current_src;
                kal_uint16 pdu_len;
                kal_uint8 *pdu_ptr = get_peer_buff_pdu(pPeer,&pdu_len);

                rmmi_ptr->current_src = RMMI_UNSOLICITED;			
                l4c_em_status_rind(msg_ptr->em_info, pdu_ptr, pdu_len);
                rmmi_ptr->current_src = temp_src;
            }
        #endif
            l4c_em_status_ind((kal_uint8) (ilm_ptr->src_mod_id), msg_ptr->em_info, pPeer);
          #endif /* __MODEM_EM_MODE__ */ 

            break;
        }
        case MSG_ID_L4CPS_EM_NW_EVENT_NOTIFY_IND:
        {
            l4cps_em_nw_event_notify_ind_struct *msg_ptr;

            msg_ptr = (l4cps_em_nw_event_notify_ind_struct*) ilm_ptr->local_para_ptr;

            l4c_em_nw_event_notify_lind(msg_ptr->group_id, msg_ptr->event_id);
        }
            break;
        default:
            ASSERT(0);
            break;
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_em_nw_event_notify_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  src_id          [IN]        
 *  is_on           [IN]        
 *  num_of_mod      [IN]        
 *  mod_list        [?]         
 * RETURNS
 *  
 *****************************************************************************/
kal_bool l4c_em_nw_event_notify_req(kal_uint8 src_id, kal_bool is_on, kal_uint8 num_of_mod, module_type *mod_list)
{
    kal_uint8 i = 0;

    //ilm_struct *ilm_ptr = NULL;

    if (num_of_mod == 0 || num_of_mod > 20)
    {
        return KAL_FALSE;
    }

    for (i = 0; i < num_of_mod; i++)
    {

        l4cps_em_nw_event_notify_req_struct *msg_ptr = NULL;

        msg_ptr = (l4cps_em_nw_event_notify_req_struct*) construct_local_para(
                                                            (kal_uint16) sizeof (l4cps_em_nw_event_notify_req_struct),
                                                            TD_RESET);
        ASSERT(msg_ptr != NULL);

        msg_ptr->is_on = is_on;

        em_send_msg_to_ps(MSG_ID_L4CPS_EM_NW_EVENT_NOTIFY_REQ, mod_list[i], (local_para_struct*) msg_ptr);
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  is_ps_conf_test_xta_mode
 * DESCRIPTION
 *  Used to query if PS conformance test mode is FTA or CTA, if mode is FTA or CTA return KAL_TRUE
 *  API for PS modules
 * PARAMETERS
 *  N/A
 *
 * RETURNS
 *  kal_bool
 *  
 *****************************************************************************/
kal_bool is_ps_conf_test_xta_mode(void)
{
    if((L4C_COMM_PTR->ps_conf_test_mode == (kal_uint8)PS_CONF_TEST_CTA) 
        || (L4C_COMM_PTR->ps_conf_test_mode == (kal_uint8)PS_CONF_TEST_FTA))
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;

}


/*****************************************************************************
 * FUNCTION
 *  query_ps_conf_test_mode
 * DESCRIPTION
 *  Used to get PS Conformance test mode setting
 *  API for PS modules
 * PARAMETERS
 *  N/A
 *
 * RETURNS
 *  ps_conf_test_mode_enum
 *  
 *****************************************************************************/
ps_conf_test_mode_enum query_ps_conf_test_mode(void)
{
    return (ps_conf_test_mode_enum)L4C_COMM_PTR->ps_conf_test_mode;
}


/*****************************************************************************
 * FUNCTION
 *  query_ps_conf_test_profile_setting
 * DESCRIPTION
 *  Used to get PS Conformance test profile setting
 *  API for PS modules
 * PARAMETERS
 *  N/A
 *
 * RETURNS
 *  kal_uint32
 *  
 *****************************************************************************/
kal_uint32 query_ps_conf_test_profile_setting(void)
{
    return L4C_COMM_PTR->ps_conf_test_profile;
}


#ifdef __MMI_FMI__
/*****************************************************************************
 * FUNCTION
 *  l4c_em_quick_test_report_res_req
 * DESCRIPTION
 *  Used to print quick test result for +ETEST
 * 
 * PARAMETERS
 *  result      [IN]
 *  test_count  [IN]
 *  test_list   [IN]
 *
 * RETURNS
 *  kal_uint32
 *  
 *****************************************************************************/
void l4c_em_quick_test_report_res_req(kal_bool result, kal_uint8 test_count, kal_uint8 *test_list)
{
    L4C_PTR->route_thru_lmmi = KAL_FALSE;
    RMMI_PTR->current_src = L4C_PTR->route_thru_lmmi_user; 
    L4C_PTR->route_thru_lmmi_user = INVALID_SRC;
    l4c_eq_read_autotest_report_rrsp(result, test_count, test_list);
}
#endif


/*****************************************************************************
 * EM related context and API
 *****************************************************************************/
#if defined(__EM_MODE__) && defined(PLUTO_MMI)
/* Note:
 * 1. max event num in a group = MAX_NWEVENT_OF_A_GROUP = 20
 * 2. max string len of event name = MAX_LEN_OF_NW_EVENT_NAME = 20
 * 3. Please add the event in order with group id
 * 4. total event num should be less than EM_NW_EVENT_MAX_NUM_OF_EVENTS = 100
 */
em_network_event_struct em_network_event_tbl[] =
{
    /* John Tang 2006/11/13 */
#ifdef __UMTS_RAT__
    /* UL2 */ 
    //{EM_NW_EVENT_GROUP_UMAC, "UMAC", MOD_UMAC, EM_NW_EVENT_ID_UMAC_EVENT_START, "EV_START", 0}, 
    //{EM_NW_EVENT_GROUP_UMAC, "UMAC", MOD_UMAC, EM_NW_EVENT_ID_UMAC_EVENT_END, "EV_END", 0},

    /**
     * Gibran 2006/12/15
     * Modified for 1. Cell Reselection 2. New cell selected 3. Out-of-service 4. in-service
     */
    {EM_NW_EVENT_GROUP_CSCE, "CSCE", MOD_CSCE, EM_NW_EVENT_ID_CSCE_CELL_RESELECTION_EVENT, "EV_CELL_RESEL", 0},
    {EM_NW_EVENT_GROUP_CSCE, "CSCE", MOD_CSCE, EM_NW_EVENT_ID_CSCE_NEW_CELL_SELECTED_EVENT, "EV_NEW_CELL", 0},      
    {EM_NW_EVENT_GROUP_CSCE, "CSCE", MOD_CSCE, EM_NW_EVENT_ID_CSCE_OUT_OF_SERVICE_EVENT, "EV_OUT_OF_SERV", 0},
    {EM_NW_EVENT_GROUP_CSCE, "CSCE", MOD_CSCE, EM_NW_EVENT_ID_CSCE_IN_SERVICE_EVENT, "EV_IN_SERV", 0},

    {EM_NW_EVENT_GROUP_MEME, "MEME", MOD_MEME, EM_NW_EVENT_ID_MEME_EVENT_SPECIFIC_CELL_IND, "EV_SPECIFIC_CELL", 0},

  /*  {EM_NW_EVENT_GROUP_RRCE, "RRCE", MOD_RRCE, EM_NW_EVENT_ID_RRCE_EVENT_START, "EV_START", 0}, */
    {EM_NW_EVENT_GROUP_RRCE, "RRCE", MOD_RRCE, EM_NW_EVENT_ID_RRCE_IRHO_3G2_EVENT, "EV_3G2_HO", 0},
    {EM_NW_EVENT_GROUP_RRCE, "RRCE", MOD_RRCE, EM_NW_EVENT_ID_RRCE_IRCCO_3G2_EVENT, "EV_3G2_CCO", 0},
    {EM_NW_EVENT_GROUP_RRCE, "RRCE", MOD_RRCE, EM_NW_EVENT_ID_RRCE_IRCR_3G2_EVENT, "EV_3G2_CR", 0},
 /*   {EM_NW_EVENT_GROUP_RRCE, "RRCE", MOD_RRCE, EM_NW_EVENT_ID_RRCE_EVENT_END, "EV_END", 0}, */

    //{EM_NW_EVENT_GROUP_SLCE, "SLCE", MOD_SLCE, EM_NW_EVENT_ID_SLCE_EVENT_START, "EV_START", 0},
    //{EM_NW_EVENT_GROUP_SLCE, "SLCE", MOD_SLCE, EM_NW_EVENT_ID_SLCE_EVENT_END, "EV_END", 0},

#endif /* #ifdef __UMTS_RAT__ */
    /*Add the dummy item to avoid compiler error*/
    {EM_NW_EVENT_GROUP_RAC, "RAC", MOD_RAC, EM_NW_EVENT_ID_CELL_POWER_LEVEL_IND, "CELL_POWER_IND", 0}
};

/*****************************************************************************
 * FUNCTION
 *  em_nw_get_total_event
 * DESCRIPTION
 *
 * PARAMETERS
 *  is_reset        [IN]
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 em_nw_get_total_event(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return (sizeof(em_network_event_tbl)/sizeof(em_network_event_struct));
}
#endif /* #ifdef #if defined(__EM_MODE__) && defined(PLUTO_MMI) */

#if defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)
/**
 * The table mapping from info_request to mod_id, 
 * maintained by PS developers and used by L4C.
 * Note: please also add module in em_ps_mod  when new module is used
 */
const em_info_req_mod_tbl_struct em_info_req_mod_tbl[] =
{
   /* MOD_RRM */
   {MOD_RRM, RR_EM_CELL_SELECT_PARA_INFO},
   {MOD_RRM, RR_EM_CHANNEL_DESCR_INFO},
   {MOD_RRM, RR_EM_CTRL_CHANNEL_DESCR_INFO},
   {MOD_RRM, RR_EM_RACH_CTRL_PARA_INFO},
   {MOD_RRM, RR_EM_LAI_INFO},
   {MOD_RRM, RR_EM_RADIO_LINK_COUNTER_INFO},
   {MOD_RRM, RR_EM_MEASUREMENT_REPORT_INFO},
   /* ZY : Temp solution : Cell allocation list*/
   {MOD_RRM, RR_EM_CA_LIST_INFO},
   /* RR new structure */
   {MOD_RRM, RR_EM_CONTROL_MSG_INFO},    
   {MOD_RRM, RR_EM_SI2Q_INFO_STRUCT_INFO},
   {MOD_RRM, RR_EM_MI_INFO_STRUCT_INFO},
   /* gprs em begins */
   {MOD_RRM, RR_EM_BLK_INFO},
   {MOD_RRM, RR_EM_TBF_INFO},
   {MOD_RRM, RR_EM_GPRS_GENERAL_INFO},
#ifdef __UMTS_RAT__
   {MOD_RRM, RRM_EM_IR_PROGRESS_STATUS_IND_STRUCT_INFO},
   {MOD_RRM, RRM_EM_IR_PARAMETER_STATUS_IND_STRUCT_INFO},
   {MOD_RRM, RRM_EM_IR_RESELECT_STATUS_IND_STRUCT_INFO},
   {MOD_RRM, RRM_EM_IR_3G_NEIGHBOR_MEAS_STATUS_IND_STRUCT_INFO},
#endif

   /* CC */ 
   {MOD_CC, CC_EM_CHANNEL_INFO},
   {MOD_CC, CC_EM_CALL_INFO},
   

   /* SS */
   //There is no handler in SS now. Please do not turn it on.
   //Remind: L4 may send MSG_ID_L4CPS_EM_UPDATE_REQ in parallel to SS transaction and cause collision.
   //{MOD_CISS, SS_EM_INFO},
   
   /* MM */
   {MOD_MM, MM_EM_INFO},
   /*EM ehancement for RR new structure*/
   {MOD_MM, MMRR_EM_PLMN_INFO_STRUCT_INFO},
   /* UEM */                            
   {MOD_UEM, UEM_EM_BATTERY_INFO},   
   {MOD_MM, GMM_EM_INFO},
#ifdef __PS_SERVICE__                                             
   {MOD_TCM, TCM_EM_EXT_PDP_INFO},
   {MOD_TCM, TCM_EM_INT_PDP_INFO},
   {MOD_TCM, TCM_EM_CONTEXT_INFO},
   {MOD_SNDCP, SNDCP_EM_INFO},
   {MOD_LLC, LLC_EM_INFO},
   {MOD_PPP, PPP_EM_INFO},
   {MOD_SM, SM_EM_INFO},
#endif

#ifdef __VIDEO_CALL_SUPPORT__       
    /* VT EM Display, 2007/11/30 */
   {MOD_VT, VT_EM_CALL_STATE_INFO},
   {MOD_VT, VT_EM_MASTER_SLAVE_STATUS_INFO},
   {MOD_VT, VT_EM_RETRANSMISSION_PROTOCOL_INFO},
   {MOD_VT, VT_EM_INCOMING_AUDIO_CHANNEL_INFO},
   {MOD_VT, VT_EM_OUTGOING_AUDIO_CHANNEL_INFO},
   {MOD_VT, VT_EM_INCOMING_VIDEO_CHANNEL_INFO},
   {MOD_VT, VT_EM_OUTGOING_VIDEO_CHANNEL_INFO},
   {MOD_VT, VT_EM_ADM_MEM_MAX_USED_INFO},
   {MOD_VT, VT_EM_STATISTIC_INFO},
   {MOD_VT, VT_EM_ROUND_TRIP_DELAY_INFO},
   {MOD_VT, VT_EM_INCOMING_XSRP_INFO},
   {MOD_VT, VT_EM_OUTGOING_XSRP_INFO},   
#endif


#ifdef __UMTS_RAT__ //For MAUI, MONZA2G exclude 3G
   {MOD_URR, UAS_3G_GENERAL_STATUS_IND_STRUCT_INFO},
   {MOD_URR, SIBE_EM_3G_SIB_IND_STRUCT_INFO},      
   {MOD_URR, CSCE_EM_SERV_CELL_IND_STRUCT_INFO},
   {MOD_URR, CSCE_EM_NEIGH_CELL_IND_STRUCT_INFO},
   {MOD_URR, CSCE_EM_R_STATUS_IND_STRUCT_INFO},
   {MOD_URR, CSCE_EM_H_STATUS_IND_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_GSM_CELL_STATUS_STRUCT_INFO},   
   {MOD_URR, MEME_EM_INFO_UMTS_CELL_STATUS_STRUCT_INFO},   
   {MOD_URR, MEME_EM_INFO_GSM_CELL_STATUS_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_1_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_2_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_3_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_4_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_5_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_EVENT_TYPE_6_PARAMETER_STRUCT_INFO},
   {MOD_URR, MEME_EM_3G_BLER_IND_STRUCT_INFO},
   {MOD_URR, URR_EM_TGPS_STATUS_IND_STRUCT_INFO},   
   {MOD_URR, URR_EM_INFO_UMTS_SRNC_ID_INFO},
#ifdef __UMTS_TDD128_MODE__
   {MOD_URR, UAS_3G_TDD128_HANDOVER_SEQUENCE_IND_STRUCT_INFO},
#endif
   {MOD_URR, SLCE_EM_PS_DATA_RATE_STATUS_IND_STRUCT_INFO},
   {MOD_URR, MEME_EM_INFO_H_SERVING_CELL_INFO},
#endif /* __UMTS_RAT__ */
#if defined(__UMTS_RAT__) && defined (__UMTS_TDD128_MODE__)
    {MOD_UL2, UL2_EM_ADM_POOL_STATUS_IND_STRUCT_INFO},
    {MOD_UL2, UL2_EM_PS_DATA_RATE_STATUS_IND_STRUCT_INFO}, 
    {MOD_UL2, UL2_EM_HSDSCH_RECONFIG_STATUS_IND_STRUCT_INFO},
    {MOD_UL2, UL2_EM_URLC_EVENT_STATUS_IND_STRUCT_INFO},
    {MOD_UL2, UL2_EM_3G_BLER_IND_STRUCT_INFO},
#endif
   /* reserve for customization */
   {MOD_NIL, CUS_EM_INFO_1},
   {MOD_NIL, CUS_EM_INFO_2},
   {MOD_NIL, CUS_EM_INFO_3}
}; 

/* This table is used to count the total number of ps modules involving EM info , please add the table when new module is used*/
const module_type em_ps_mod[] = {
                                             MOD_RRM/*For RRM*/, 
                                             MOD_CC, 
                                             MOD_SMSAL/*For CB*/, 
                                             MOD_CISS/*For SS*/, 
                                             MOD_MM, 
                                             MOD_UEM
#ifdef __VIDEO_CALL_SUPPORT__
                                             ,MOD_VT
#endif
#ifdef __UMTS_RAT__
                                             ,MOD_URR
#endif                                             
#if defined(__UMTS_RAT__) && defined(__UMTS_TDD128_MODE__)
                                             ,MOD_UL2
#endif
#ifdef __PS_SERVICE__                                             
                                             ,MOD_TCM
                                             ,MOD_SNDCP
                                             ,MOD_LLC
                                             ,MOD_PPP
                                             ,MOD_SM
#endif /* __PS_SERVICE__ */
};
//mtk01616_080622
/*****************************************************************************
 * FUNCTION
 *  em_get_total_mod
 * DESCRIPTION
 *
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 em_get_total_mod(void)
{
    return (sizeof(em_ps_mod)/sizeof(module_type));
}

/*****************************************************************************
 * FUNCTION
 *  em_get_total_info_req
 * DESCRIPTION
 *
 * PARAMETERS
 *  
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 em_get_total_info_req(void)
{
    return (sizeof(em_info_req_mod_tbl)/sizeof(em_info_req_mod_tbl_struct));
}

#endif /* defined(__EM_MODE__) */

/*****************************************************************************
 * FUNCTION
 *  l4c_l1_max_tx_pwr_red_req
 * DESCRIPTION
 *  Used to set L1 TX power reduction levels
 *  API for PS modules
 * PARAMETERS
 *  N/A
 *
 * RETURNS
 *  kal_bool
 *  
 *****************************************************************************/
kal_bool l4c_l1_max_tx_pwr_red_req(kal_uint8 src_id,
                                        kal_uint8 op,
                                        kal_bool gsm_tbl_valid,
                                        kal_uint8 ***gsm_tx_pwr_reduction_tbl,
                                        kal_bool umts_tbl_valid,
                                        kal_uint8 **umts_tx_pwr_reduction_tbl)
{
#ifdef __MTK_TARGET__

    if (gsm_tbl_valid)
    {
        l1_gsm_max_tx_pwr_red_req_struct *gsm_ptr = 
            (l1_gsm_max_tx_pwr_red_req_struct*) construct_local_para(sizeof(l1_gsm_max_tx_pwr_red_req_struct), TD_RESET);

        if (op != 4)
        {
            gsm_ptr->valid = KAL_TRUE;
        }
        else
        {
            gsm_ptr->valid = KAL_FALSE;
        }

        gsm_ptr->op = op;
        kal_mem_cpy((void*)gsm_ptr->Gsm_tx_reduction, (void*)gsm_tx_pwr_reduction_tbl, 4*2*4);

        em_send_msg_to_ps(MSG_ID_L1_GSM_MAX_TX_PWR_RED_REQ, MOD_L1, (local_para_struct*)gsm_ptr);
    }
    
#ifdef __UMTS_FDD_MODE__
    if (umts_tbl_valid)
    {
        ul1_umts_max_tx_pwr_red_req_struct *umts_ptr = 
            (ul1_umts_max_tx_pwr_red_req_struct*) construct_local_para(sizeof(ul1_umts_max_tx_pwr_red_req_struct), TD_RESET);

        if (op != 4)
        {
            umts_ptr->valid = KAL_TRUE;
        }
        else
        {
            umts_ptr->valid = KAL_FALSE;
        }

        kal_mem_cpy((void*)umts_ptr->umts_power_reduction_in_edb, (void*)umts_tx_pwr_reduction_tbl, 20*2);

        em_send_msg_to_ps(MSG_ID_UL1_UMTS_MAX_TX_PWR_RED_REQ, MOD_UL1, (local_para_struct*)umts_ptr);
    }
#endif

    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}


