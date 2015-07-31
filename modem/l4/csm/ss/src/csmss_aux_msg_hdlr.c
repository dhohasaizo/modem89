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
 *	csmss_aux_msg_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for aux. handler of messages from L4C and SS.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#define CSMSS_AUX_MSG_HDLR_C

#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"       	/* Task message communiction */
#include "task_config.h"      	/* Task creation */
#include "ps2sim_struct.h"   // mtk01488
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#include "l4c_common_enum.h"
#include "csmss_common_enums.h"
#include "rmmi_common_enum.h"
#include "mcd.h"
#include "mcd_ss_parameters.h"       /* 3GPP 24.080 */
#include "mcd_ss_tcapmessages.h"     /* ITU-T Q.773 */
#include "mnss_struct.h"
#include "mcd_l4_common.h"
#include "l4c2csm_ss_struct.h"
#include "ps2sat_struct.h"
#include "sat_def.h"
#include "smsal_l4c_enum.h"
#include "smsal_cb.h"
#include "l4c_utility.h"
#include "csmss_context.h"
#include "csmss_aux_msg_hdlr.h"
#include "mcd_ss_parameters.h"
#include "mcd_ss_tcapmessages.h"
#include "mcd_l4_common.h"
#include "mcd.h"
#include "l4c_common_enum.h"
#include "ps2sat_struct.h"
#include "kal_trace.h"
#include "csm_trc.h"
#include "csmss_aux_msg_hdlr.h"
#include "string.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "svc_sap.h"
#include "drv_msgid.h"
#include "md_sap.h"
#include "sim_ps_msgid.h"
#include "ciss_msgid.h"
#include "l4_msgid.h"
/*MAUI_02637521,CTA_EM_MODE*/
#include "l4_ps_api.h"

//[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
//extern kal_bool get_int_before_star(csmss_string_struct *input, kal_uint16 *number);
extern kal_bool get_int_before_star(csmss_string_struct *input, kal_uint8 *number);

extern kal_bool get_string_before_star(csmss_string_struct *input, kal_uint8
                                       *string_ptr, kal_uint8 max_length);

extern kal_bool get_dn_before_star(csmss_string_struct *input, kal_uint8
                                   *string_ptr);

extern kal_bool get_dn_by_length(csmss_string_struct *input, kal_uint8 *string_ptr, kal_uint8 dn_length);
extern kal_uint8 custom_disable_query_cfu_status(void);
extern void csmss_send_nvram_write_essp_req(void);
//#define sim_service_table_query(SERVICE_CALL_CONTROL) SERVICE_SUPPORT

#if defined (__CPHS__) || defined (__REL4__)
extern void csmss_display_cfu_ind(cfu_flag_mmi_action_enum action, kal_uint8 line_id);
extern kal_uint8 custom_cphs_query_cfu_status_always(void);
#endif

const kal_uint8 csmss_bit_mask[8] =
{
    0x7f, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f
};

//MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
/*****************************************************************************
 * FUNCTION
 *  csmss_find_used_call_id
 * DESCRIPTION
 *  This function finds a call id which is used by a unique ss id
 *
 * PARAMETERS
 *  ss_id IN
 * RETURNS
 *  kal_int8
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_int8 csmss_find_used_call_id(kal_uint8 ss_id)
{
    kal_uint8 index = 0;
    kal_int8 ret_val =  - 1;

    for (index = 0; index < MMI_CS_MAX_CALLS; index++)
    {
        if (csmss_g_ss_id_pool[index] == ss_id)
        {
            return index;
        }
    }
    kal_brief_trace(TRACE_ERROR, CSMSS_DD,200,ss_id);
    return ret_val;
} /* end of csmss_find_used_call_id */


/*****************************************************************************
 * FUNCTION
 *  csmss_get_free_call_id
 * DESCRIPTION
 *  This function get a free call id
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  kal_int8
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
void dump_ss_call_id(){
	kal_int8 i;
	for(i=0;i<MMI_CS_MAX_CALLS;i++){
		kal_brief_trace(TRACE_INFO, CSMSS_DD, csmss_g_ss_id_pool[i], csmss_g_call_id_pool[i]);
	}
}

kal_int8 csmss_get_free_call_id(kal_uint8 ss_id)
{
    kal_uint8 index = 0;
    kal_int8 ret_val =  - 1;

    for (index = 0; index < MMI_CS_MAX_CALLS; index++)
    {
        if (csmss_g_ss_id_pool[index]== ss_id) //check redundant ss_id
        {
        	ret_val =  - 1;
		break;
        }
        else if ((ret_val==-1) && (csmss_g_call_id_pool[index] != KAL_TRUE))
        {
            ret_val =  index;
        }
    }
    if (ret_val!=-1)
        {
        csmss_g_call_id_pool[ret_val] = KAL_TRUE;
	 //for parallel SS
	 csmss_g_ss_id_pool[ret_val] = ss_id;
        }
    else{
    	kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);
    }
    dump_ss_call_id();
    return ret_val;
} /* end of csmss_get_free_call_id */


/*****************************************************************************
 * FUNCTION
 *  csmss_mark_call_id
 * DESCRIPTION
 *  This function mark a call id as busy
 *
 * PARAMETERS
 *  call_id  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_mark_call_id(kal_uint8 call_id)
{
    csmss_g_call_id_pool[call_id] = KAL_TRUE;
    return ;
} /* end of csmss_mark_call_id */


/*****************************************************************************
 * FUNCTION
 *  csmss_free_call_id
 * DESCRIPTION
 *  This function set a call id as free
 *
 * PARAMETERS
 *  call_id  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_free_call_id(kal_uint8 call_id)
{
    csmss_g_call_id_pool[call_id] = KAL_FALSE;
    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    csmss_g_ss_id_pool[call_id] = SS_ID_INVALID;
    dump_ss_call_id();
    return ;
} /* end of csmss_free_call_id */

/*****************************************************************************
 * FUNCTION
 *  csmss_send_ilm
 * DESCRIPTION
 *  This routine forms Ilm Message and Post it to the Queue.
 *
 * PARAMETERS
 *  dest_id IN
 *  msg_id IN
 *  local_para IN/OUT
 *  peer_buff IN/OUT
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_send_ilm(kal_uint8 dest_id, kal_uint16 msg_id, void *local_para,
                    void *peer_buff)
{
    kal_uint8  sim_index  = (kal_uint8)(csmss_cur_mod-MOD_CSM);
    sap_type   target_sap = INVALID_SAP;

    switch (dest_id)
    {
    case MOD_L4C:
        target_sap = CSM_L4C_SAP;   
        break;
    case MOD_CISS:
        target_sap = MNSS_SAP;
        break;
    case MOD_SIM:
        target_sap = PS_SIM_SAP;
        break;
    case MOD_NVRAM:
        target_sap = PS_NVRAM_SAP;
        sim_index  = 0;
        break;
    default:
        /* do nothing */
        break;
    }

    msg_send6(csmss_cur_mod, sim_index+dest_id, target_sap, (msg_type)msg_id,
              (local_para_struct*)local_para, (peer_buff_struct*)peer_buff);
    return;
} /* end of csmss_send_ilm */

/*****************************************************************************
 * FUNCTION
 *  csmss_get_default_priority_level
 * DESCRIPTION
 *  This routine return current default priority level of EMLPP service
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  kal_uint8
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_uint8 csmss_get_default_priority_level(void)
{
    return csmss_ptr_g->default_priority_level;
} /* end of csmss_get_default_priority_level */


/*****************************************************************************
 * FUNCTION
 *  csmss_init_ss_return
 * DESCRIPTION
 *  This routine clear ss_return_struct
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  kal_uint8
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_init_ss_return(ss_return_struct *ss_return)
{
    ss_return->cause_present = KAL_FALSE;
    ss_return->cause_value = 0;
    ss_return->para_present = KAL_FALSE;

#ifdef __SAT__
    ss_return->res = 0;
    ss_return->size_of_additional_info = 0;
    kal_mem_set(ss_return->additional_info, 0, 255);
#endif
}

/*************************************************************************
 * FUNCTION
 *	csmss_send_l4c_startup_cnf
 * DESCRIPTION
 *  This procedure is used to send startup result to L4C
 *
 * PARAMETERS
 *	result	IN	first variable, used as result report to l4c
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
void csmss_send_l4c_startup_cnf(kal_uint8 result)
{
    l4ccsm_ciss_startup_cnf_struct *startup_cnf_ptr;

#ifdef __CPHS__
    if (csmss_ptr_g->is_sim_refresh == KAL_FALSE)
    {
#endif
        startup_cnf_ptr = (l4ccsm_ciss_startup_cnf_struct*)construct_local_para
                       (sizeof(l4ccsm_ciss_startup_cnf_struct), TD_CTRL);

        startup_cnf_ptr->result = result;

        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_STARTUP_CNF, startup_cnf_ptr,
                   NULL);
#ifdef __CPHS__
    }
    else
    {
        csmss_ptr_g->is_sim_refresh = KAL_FALSE;
    }
#endif
    
    return ;
} /* end of csmss_send_l4c_startup_cnf */

#if defined (__CPHS__) || defined (__REL4__)
/*****************************************************************************
 * FUNCTION
 *  csmss_cphs_start_hdlr
 * DESCRIPTION
 *  This procedure is called whenever first time camp on network
 *  L4C invoke this function to init CPHS CFU feature.
 *  CSMSS check 1) last imsi 2) last imsi 3) SIM card data field 0x6f13 CFU flag
 *
 * PARAMETERS
 *  local_para_ptr IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_cphs_start_hdlr(void)
{
#ifdef _DBG_CSMSS_
    {
        char dbg[80];
        sprintf(dbg,
                "<---cphs_start_hdlr(is_cfu_read: %d, csmss_is_sim_replaced: %d)",
                csmss_ptr_g->is_cfu_read, csmss_is_smu_sim_replaced(CSMSS_SIM_ID));
        kal_print(dbg);
    }
#endif

    /* Johnny:
       we display/clear CFU icon according to CSMSS context after CSMSS startup whether SIM is replaced or not,
       if SIM is replaced, we will interrogate CFU after camp on */
    if (KAL_TRUE == csmss_ptr_g->is_cfu_read)
    {
       switch (csmss_essp)
       {
          case 0:  //default mode, query when sim replaced.
          {
            if(custom_disable_query_cfu_status() == KAL_TRUE)    
            {                        
              break;
            }     
        /*MAUI_02637521,CTA_EM_MODE*/
        if ((((KAL_TRUE == custom_cphs_query_cfu_status_always()) ||
	        (KAL_TRUE == csmss_is_smu_sim_replaced(CSMSS_SIM_ID))) && 
		         is_test_sim(CSMSS_SIM_ID) == KAL_FALSE   && 
		         KAL_FALSE==is_ps_conf_test_xta_mode() ) ||
		        ((KAL_TRUE==is_ps_conf_test_xta_mode() && 
        		 (CTA_CFQUERY_BIT_FOR_SS==(query_ps_conf_test_profile_setting() & CTA_CFQUERY_BIT_FOR_SS))))
		       )
        {
            kal_uint8 no_reply_timer = 0;
            l4_addr_bcd_struct address;
            kal_bool subaddress_flag = KAL_FALSE;
            l4_addr_bcd_struct subaddress;

            kal_mem_set(&address, 0, sizeof(l4_addr_bcd_struct));
            kal_mem_set(&subaddress, 0, sizeof(l4_addr_bcd_struct));            

            csmss_ss_exe_call_forward_req(L4_CPHS, SS_OP_INTERROGATESS, L4_CFU,
                0, no_reply_timer, address, subaddress_flag, subaddress);
        }
            break;     
          }
          case 2:
          {
            {
                kal_uint8 no_reply_timer = 0;
                l4_addr_bcd_struct address;
                kal_bool subaddress_flag = KAL_FALSE;
                l4_addr_bcd_struct subaddress;

                kal_mem_set(&address, 0, sizeof(l4_addr_bcd_struct));
                kal_mem_set(&subaddress, 0, sizeof(l4_addr_bcd_struct));            

                csmss_ss_exe_call_forward_req(L4_CPHS, SS_OP_INTERROGATESS, L4_CFU,
                    0, no_reply_timer, address, subaddress_flag, subaddress);
            }
            break;
          }       
          default:
            break;
       }
    }

    csmss_ptr_g->is_camp_on = KAL_TRUE;

    return ;
}


/*************************************************************************
 * FUNCTION
 *	csmss_send_sim_read_req
 * DESCRIPTION
 *  This procedure is used to send SIM read request to SIM task.
 *
 * PARAMETERS
 *	file_idx	IN	first variable, used as input
 *	file_len	IN	second variable, used as input
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
void csmss_send_sim_read_req(kal_uint8 file_idx, kal_uint16 file_len)
{
    sim_read_req_struct *sim_read_req_ptr;

    sim_read_req_ptr = (sim_read_req_struct*)construct_local_para(sizeof
                        (sim_read_req_struct), TD_CTRL);

    //sim_read_req_ptr->file_idx = file_idx;
    if (file_idx == FILE_CF_FLAG_IDX)
    {
        sim_read_req_ptr->para = 0;
        sim_read_req_ptr->access_id = 0;
    }
    else
    {
        // CFIS is linear file
        sim_read_req_ptr->para = 1;
        sim_read_req_ptr->access_id = 1;
    }

    sim_read_req_ptr->length = file_len;

#if 0
#ifdef __USIM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __USIM_SUPPORT__ */ 
#endif
    
    sim_read_req_ptr->file_idx = file_idx;

    csmss_send_ilm(MOD_SIM, MSG_ID_SIM_READ_REQ, sim_read_req_ptr, NULL);

    return ;
} /* end of csmss_send_sim_read_req */


/*************************************************************************
 * FUNCTION
 *	csmss_send_sim_write_req
 * DESCRIPTION
 *  This procedure is used to send SIM write request to SIM.
 *
 * PARAMETERS
 *	file_idx    IN	first variable, used as input
 *  file_len    IN second variable, used as input
 *  data_ptr    IN third variable, used as input
 *
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
void csmss_send_sim_write_req(kal_uint8 file_idx, kal_uint16 file_len,
                              kal_uint8 *data_ptr)
{
    sim_write_req_struct *sim_write_req_ptr;

    sim_write_req_ptr = (sim_write_req_struct*)construct_local_para(sizeof
                         (sim_write_req_struct), TD_CTRL);

    /*
        access_id enum
        0: FILE_CF_FLAG_IDX
        1: FILE_CFIS_IDX
        2: FILE_U_CFIS_IDX
    */
    //sim_write_req_ptr->file_idx = file_idx;
    //sim_write_req_ptr->length = file_len;

    if (file_idx == FILE_CF_FLAG_IDX)
    {
        if(csmss_ptr_g->cfu_flag_len == 0) // no length, no need to write it
        {
            free_ctrl_buffer(sim_write_req_ptr);
            return ;
        }       
        sim_write_req_ptr->para = 0;
        sim_write_req_ptr->access_id = 0;
        sim_write_req_ptr->length = csmss_ptr_g->cfu_flag_len;        
    }
    else
    {
        // CFIS is linear file
        if(csmss_ptr_g->cfis_record_len == 0) // no length, no need to write it
        {
            free_ctrl_buffer(sim_write_req_ptr);
            return ;
        }        
        sim_write_req_ptr->para = 1;
        sim_write_req_ptr->access_id = 1;
        sim_write_req_ptr->length = csmss_ptr_g->cfis_record_len;        
    }

    kal_mem_cpy(sim_write_req_ptr->data + 5, data_ptr, file_len);

//remove the unnecessary debug code

#ifdef _DBG_CSMSS_
    {
        char dbg[80];
        sprintf(dbg, "<---sim_write_req(file_len: %d, cfu_flag: %x %x)",
                file_len, data_ptr[0], data_ptr[1]);
        kal_print(dbg);
    }
#endif

#if 0
#ifdef __USIM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __USIM_SUPPORT__ */ 
#endif

    sim_write_req_ptr->file_idx = file_idx;

    csmss_send_ilm(MOD_SIM, MSG_ID_SIM_WRITE_REQ, sim_write_req_ptr, NULL);

    return ;
} /* end of csmss_send_sim_write_req */


/*************************************************************************
 * FUNCTION
 *	csmss_send_sim_file_info_req
 * DESCRIPTION
 *   This procedure is used to send SIM write request to SIM.
 *
 * PARAMETERS
 *	file_idx    IN	first variable, used as input
 *  info_type   IN second variable, used as input
 *
 * RETURNS
 *	void
 * GLOBALS AFFECTED
 *
 *************************************************************************/
void csmss_send_sim_file_info_req(kal_uint8 file_idx, kal_uint8 info_type)
{
    sim_file_info_req_struct *sim_file_info_req_ptr;

    sim_file_info_req_ptr = (sim_file_info_req_struct*)construct_local_para
                             (sizeof(sim_file_info_req_struct), TD_CTRL);

    sim_file_info_req_ptr->file_idx = file_idx;
    sim_file_info_req_ptr->info_type = info_type;

    csmss_send_ilm(MOD_SIM, MSG_ID_SIM_FILE_INFO_REQ, sim_file_info_req_ptr,
                   NULL);

    return ;
} /* end of csmss_send_sim_file_info_req */

#endif /* __CPHS__ */

/*
 * Following part are transport from Amanda's L4C source code for __SAT__
 * feature, SS string and USSD string are parsed here. And CC string will
 * be carried back to L4C to init Call setup procedure.
 */

#ifdef __GEMINI__
kal_bool csmss_is_smu_sim_replaced(kal_uint8 simInterface)
{
    if (check_sim_status(simInterface) == SMU_SIM_REPLACED)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}
#else
kal_bool csmss_is_smu_sim_replaced()
{
    if (check_sim_status() == SMU_SIM_REPLACED)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}
#endif

/* MAUI_01720570 if smu return SMU_SIM_NO_IMSI, need not report cfu to upper layer */
#ifdef __GEMINI__
kal_bool csmss_is_smu_sim_no_imsi(kal_uint8 simInterface)
{
    if (check_sim_status(simInterface) == SMU_SIM_NO_IMSI)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}
#else
kal_bool csmss_is_smu_sim_no_imsi()
{
    if (check_sim_status() == SMU_SIM_NO_IMSI)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}
#endif

csmss_string_op_enum is_ss_string(kal_uint8 src_id, kal_uint8 ton_npi,
                                  kal_uint8 length, csmss_string_struct *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    //kal_uint8 call_id;

    //[ALPS00006144]
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
#if defined(__CSMSS_EXPLICIT_SS_OPERATION__)
    if(CSMSS_EXPLICIT_USSD_OP == (ss_string_op)csmss_ptr_g->is_explicit_ss_op){
	  result = setup_ussd_struct(src_id, ton_npi, input);
    }
    else
#endif
    if (input->string_ptr[input->index] == '*')
    {
        input->index++;
        if (input->string_ptr[input->index] == '*')
        {
            /* "**" */
            input->index++;
            result = process_registration(src_id, ton_npi, length, input);
        }
        else if (input->string_ptr[input->index] == '#')
        {
            /* "*#" */
            input->index++;
            result = process_interrogation(src_id, ton_npi, length, input);
        }
        else
        {
            /* "*" */
            result = process_act_deact(src_id, ton_npi, length, input,
                                       SS_OP_ACTIVATESS);
        }

    }
    else if (input->string_ptr[input->index] == '#')
    {
        input->index++;
        if (input->string_ptr[input->index] == '#')
        {
            /* "##" */
            input->index++;
            result = process_erasure(src_id, ton_npi, length, input);
        }
        else
        {
            /* "#" */
            result = process_act_deact(src_id, ton_npi, length, input,
                                       SS_OP_DEACTIVATESS);
        }
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
#ifdef __MEXICO_ECC__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0 // treated as UE manufacturer defined procedure
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else // treated as short string
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
    else
    {
        result = setup_ussd_struct(src_id, ton_npi, input);
    }

    //if (result != SS_OPERATION)
    //{
        //input->index = 0;
    //}

    return result;
}


csmss_string_op_enum process_registration(kal_uint8 src_id, kal_uint8 ton_npi,
    kal_uint8 length, csmss_string_struct *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 ss_code[MAX_CC_ADDR_LEN];

    kal_mem_set(ss_code, 0, MAX_CC_ADDR_LEN);

    if (input->string_ptr[input->index] != '+')
    {
        if (get_string_before_star(input, ss_code, MAX_CC_ADDR_LEN) == KAL_FALSE)
        {
            return setup_ussd_struct(src_id, ton_npi, input);
        }
    }
    else
    {
        return setup_ussd_struct(src_id, ton_npi, input);
    }

//    if (input->string_ptr[length - 1] == '#')
//    {
        if (strcmp((char*)ss_code, "21") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFU);
        }
        else if (strcmp((char*)ss_code, "67") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFB);
        }
        else if (strcmp((char*)ss_code, "62") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFNRC);
        }
        else if (strcmp((char*)ss_code, "61") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFNRY);
        }
        else if (strcmp((char*)ss_code, "002") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFA);
        }
        else if (strcmp((char*)ss_code, "004") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_REGISTERSS, L4_CFC);
        }
        else if (strcmp((char*)ss_code, "750") == 0)
        {
            result = setup_emlpp_struct(src_id, ton_npi, input, L4_EMLPP0, 0);
        }
        else if (strcmp((char*)ss_code, "751") == 0)
        {
            result = setup_emlpp_struct(src_id, ton_npi, input, L4_EMLPP1, 1);
        }
        else if (strcmp((char*)ss_code, "752") == 0)
        {
            result = setup_emlpp_struct(src_id, ton_npi, input, L4_EMLPP2, 2);
        }
        else if (strcmp((char*)ss_code, "753") == 0)
        {
            result = setup_emlpp_struct(src_id, ton_npi, input, L4_EMLPP3, 3);
        }
        else if (strcmp((char*)ss_code, "754") == 0)
        {
            result = setup_emlpp_struct(src_id, ton_npi, input, L4_EMLPP4, 4);
        }
        else if (strcmp((char*)ss_code, "03") == 0)
        {
            result = process_register_password(src_id, ton_npi, length, input);
        }
        else
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
        }
//    }
//    else
//    {
//        result = CC_OPERATION;
//    }

    return result;
}

csmss_string_op_enum process_interrogation(kal_uint8 src_id, kal_uint8 ton_npi,
    kal_uint8 length, csmss_string_struct *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 ss_code[MAX_CC_ADDR_LEN];

    kal_mem_set(ss_code, 0, MAX_CC_ADDR_LEN);

    if (input->string_ptr[input->index] != '+')
    {
        if (get_string_before_star(input, ss_code, MAX_CC_ADDR_LEN) == KAL_FALSE)
        {
            return setup_ussd_struct(src_id, ton_npi, input);
        }
    }
    else
    {
        return setup_ussd_struct(src_id, ton_npi, input);
    }

//    if (input->string_ptr[length - 1] == '#')
//    {
        if (strcmp((char*)ss_code, "30") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_CLIP);
        }
        else if (strcmp((char*)ss_code, "31") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_CLIR);
        }
        else if (strcmp((char*)ss_code, "76") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_COLP);
        }
        else if (strcmp((char*)ss_code, "77") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_COLR);
        }
        else if (strcmp((char*)ss_code, "300") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_CNAP);
        }
        else if (strcmp((char*)ss_code, "43") == 0)
        {
            result = setup_call_waiting_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS);
        }
        else if (strcmp((char*)ss_code, "37") == 0)
        {
            result = setup_ccbs_struct(src_id, ton_npi, input, SS_OP_INTERROGATESS);
        }
        else if (strcmp((char*)ss_code, "33") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BAOC);
        }
        else if (strcmp((char*)ss_code, "331") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BOIC);
        }
        else if (strcmp((char*)ss_code, "332") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BOICEXHC);
        }
        else if (strcmp((char*)ss_code, "35") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BAIC);
        }
        else if (strcmp((char*)ss_code, "351") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BAICROAM);
        }
/*
        else if (strcmp((char*)ss_code, "330") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BAC);
        }
        else if (strcmp((char*)ss_code, "333") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BOC);
        }
        else if (strcmp((char*)ss_code, "353") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_BIC);
        }
*/        
        else if (strcmp((char*)ss_code, "75") == 0)
        {
            result = setup_interrogate_struct(src_id, ton_npi, input, L4_EMLPP);
        }
        else if (strcmp((char*)ss_code, "21") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFU);
        }
        else if (strcmp((char*)ss_code, "67") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFB);
        }
        else if (strcmp((char*)ss_code, "61") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFNRY);
        }
        else if (strcmp((char*)ss_code, "62") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFNRC);
        }
/*
        else if (strcmp((char*)ss_code, "004") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFC);
        }
        else if (strcmp((char*)ss_code, "002") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_INTERROGATESS, L4_CFA);
        }
*/
        else
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
        }
//    }
//    else
//    {
//        result = CC_OPERATION;
//    }

    return result;
}

csmss_string_op_enum process_act_deact(kal_uint8 src_id, kal_uint8 ton_npi,
                                       kal_uint8 length, csmss_string_struct
                                       *input, kal_uint8 op_code)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 ss_code[MAX_CC_ADDR_LEN];

    kal_mem_set(ss_code, 0, MAX_CC_ADDR_LEN);

    if (input->string_ptr[input->index] != '+')
    {
        if (get_string_before_star(input, ss_code, MAX_CC_ADDR_LEN) == KAL_FALSE)
        {
      	    return setup_ussd_struct(src_id, ton_npi, input);
        }
    }
    else
    {
        return setup_ussd_struct(src_id, ton_npi, input);
    }

//    if (input->string_ptr[length - 1] == '#')
//    {
        if (strcmp((char*)ss_code, "21") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFU);
        }
        else if (strcmp((char*)ss_code, "67") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFB);
        }
        else if (strcmp((char*)ss_code, "61") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFNRY);
        }
        else if (strcmp((char*)ss_code, "62") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFNRC);
        }
        else if (strcmp((char*)ss_code, "002") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFA);
        }
        else if (strcmp((char*)ss_code, "004") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input, op_code,
                L4_CFC);
        }
        else if (strcmp((char*)ss_code, "43") == 0)
        {
            result = setup_call_waiting_struct(src_id, ton_npi, input, op_code);
        }
        else if (strcmp((char*)ss_code, "33") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BAOC);
        }
        else if (strcmp((char*)ss_code, "330") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BAC);
        }
        else if (strcmp((char*)ss_code, "331") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BOIC);
        }
        else if (strcmp((char*)ss_code, "332") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BOICEXHC);
        }
        else if (strcmp((char*)ss_code, "333") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BOC);
        }
        else if (strcmp((char*)ss_code, "353") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BIC);
        }
        else if (strcmp((char*)ss_code, "35") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BAIC);
        }
        else if (strcmp((char*)ss_code, "351") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input, op_code,
                L4_BAICROAM);
        }
        else if (strcmp((char*)ss_code, "31") == 0)
        /* include *31# or #31# */
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
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
#endif
        else if ((strcmp((char*)ss_code, "03") == 0) && (op_code ==
                 SS_OP_ACTIVATESS))
        {
            result = process_register_password(src_id, ton_npi, length, input);
        }
        else if ((strcmp((char*)ss_code, "37") == 0) && (op_code ==
                 SS_OP_DEACTIVATESS))
        {
            result = setup_ccbs_struct(src_id, ton_npi, input, SS_OP_ERASECCENTRY); //not SS_OP_DEACTIVATESS
        }        
        else
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
        }
//    }
//    else
    /* include *31#DN or #31#DN */
//    {
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
//    }

    return result;
}

csmss_string_op_enum process_erasure(kal_uint8 src_id, kal_uint8 ton_npi,
                                     kal_uint8 length, csmss_string_struct
                                     *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 ss_code[MAX_CC_ADDR_LEN];

    kal_mem_set(ss_code, 0, MAX_CC_ADDR_LEN);

    if (input->string_ptr[input->index] != '+')
    {
        if (get_string_before_star(input, ss_code, MAX_CC_ADDR_LEN) == KAL_FALSE)
        {
      	    return setup_ussd_struct(src_id, ton_npi, input);
        }
    }
    else
    {
        return setup_ussd_struct(src_id, ton_npi, input);
    }

//    if (input->string_ptr[length - 1] == '#')
//    {
        if (strcmp((char*)ss_code, "21") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFU);
        }
        else if (strcmp((char*)ss_code, "67") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFB);
        }
        else if (strcmp((char*)ss_code, "61") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFNRY);
        }
        else if (strcmp((char*)ss_code, "62") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFNRC);
        }
        else if (strcmp((char*)ss_code, "002") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFA);
        }
        else if (strcmp((char*)ss_code, "004") == 0)
        {
            result = setup_call_forward_struct(src_id, ton_npi, input,
                SS_OP_ERASESS, L4_CFC);
        }
        else
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
        }
//    }
//    else
//    {
//        result = CC_OPERATION;
//    }

    return result;
}

csmss_string_op_enum process_register_password(kal_uint8 src_id, kal_uint8
    ton_npi, kal_uint8 length, csmss_string_struct *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_bool result_bool;

    kal_uint8 ss_code[MAX_CC_ADDR_LEN];

    kal_mem_set(ss_code, 0, MAX_CC_ADDR_LEN);
    result_bool = get_string_before_star(input, ss_code, MAX_CC_ADDR_LEN);

    if ((result_bool == KAL_TRUE) && (ss_code[0] == 0))
    {
        return setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BAC);
    }

//    if (input->string_ptr[length - 1] == '#')
//    {
        if (strcmp((char*)ss_code, "33") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BAOC);
        }
        else if (strcmp((char*)ss_code, "331") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BOIC);
        }
        else if (strcmp((char*)ss_code, "332") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BOICEXHC);
        }
        else if (strcmp((char*)ss_code, "35") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BAIC);
        }
        else if (strcmp((char*)ss_code, "351") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BAICROAM);
        }
        else if (strcmp((char*)ss_code, "333") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BOC);
        }
        else if (strcmp((char*)ss_code, "353") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BIC);
        }
        else if (strcmp((char*)ss_code, "330") == 0)
        {
            result = setup_call_barring_struct(src_id, ton_npi, input,
                SS_OP_REGISTERPASSWORD, L4_BAC);
        }
        else
        {
            result = setup_ussd_struct(src_id, ton_npi, input);
        }
//    }
//    else
//    {
//        result = CC_OPERATION;
//    }

    return result;
}


csmss_string_op_enum setup_call_forward_struct(kal_uint8 src_id, kal_uint8
    ton_npi, csmss_string_struct *input, kal_uint8 op_code, kal_uint8 ss_code)
{
    //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
    //kal_int8 bs_code = INVALID_BS_CODE;
    kal_uint8 bs_code = INVALID_BS_CODE;
    kal_uint8 timer = 0;
    csmss_number_struct addr;
    csmss_sub_addr_struct sub_addr;
    csmss_string_op_enum result = INVALID_OPERATION;
    l4_addr_bcd_struct l4_address;
    l4_addr_bcd_struct l4_subaddr;
    //[ALPS00006144]
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
    kal_uint8 count;
    kal_bool plus_found = KAL_FALSE; //#217116    
    kal_uint8 cf_number_length = csmss_g_cf_number_length ; /* MAUI_01722785 add cf number interface */
    //[ALPS00006144]
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
    kal_uint16 index;

    kal_mem_set(&addr, 0, sizeof(csmss_number_struct));
    kal_mem_set(&sub_addr, 0, sizeof(csmss_sub_addr_struct));
    kal_mem_set(&l4_address, 0, sizeof(l4_addr_bcd_struct));
    kal_mem_set(&l4_subaddr, 0, sizeof(l4_addr_bcd_struct));

    csmss_skip_spaces(input);

    if (op_code != SS_OP_REGISTERSS) //erasure/activation/deactivation/interrogation
    {
        if (input->string_ptr[input->index] != '\0')
        {

            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            if (input->string_ptr[input->index] == '+')
            {
                ton_npi = 0x91; // international number
                input->index++;
                if (cf_number_length > 0)
                {
                    cf_number_length--;
                }
            }

            if (cf_number_length > 0)
            {
                if (get_dn_by_length(input, (kal_uint8*)addr.number, cf_number_length) == KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }
            }
            else
            {
                if (get_dn_before_star(input, (kal_uint8*)addr.number) == KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }
            }

            if (addr.number[0] != 0)
            {
                // added by paul, 20030414, to invoke registration if *21*<DN>#
                if (op_code == SS_OP_ACTIVATESS)
                {
                    op_code = SS_OP_REGISTERSS;

                    l4_address.addr_bcd[0] = ton_npi;

                    count = convert_to_bcd((kal_uint8*)addr.number,
                                           (kal_uint8*)&(l4_address.addr_bcd[1]),
                                           (kal_uint8)(MAX_CC_ADDR_LEN - 1));

                    l4_address.addr_length = count + 1;
                }
                else
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }

            }
            /* Johnny:
               special case:
               Vivo operator in Brazil.
               The phone number to activate the voice number is *555
            */
#ifdef __CF_NUM_INC_STAR__
            else if ((input->string_ptr[input->index] != '\0') &&
                     (op_code == SS_OP_ACTIVATESS))
            {
                if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }

                if (input->string_ptr[input->index] == '+')
                {
                    ton_npi = 0x91; // international number
                    input->index++;
                }

                if (get_dn_before_star(input, (kal_uint8*)(addr.number+1)) == KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }

                if (addr.number[1] != 0)
                {
                    addr.number[0] = '*';            
                
                    // added by paul, 20030414, to invoke registration if *21*<DN>#
                    if (op_code == SS_OP_ACTIVATESS)
                    {
                        op_code = SS_OP_REGISTERSS;

                        l4_address.addr_bcd[0] = ton_npi;

                        count = convert_to_bcd((kal_uint8*)addr.number, (kal_uint8*) &
                                       (l4_address.addr_bcd[1]), MAX_CC_ADDR_LEN - 1);

                        l4_address.addr_length = count + 1;
                    }
                    else
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                }
            }
#endif

            // It's OK for Erasure/Activation/Deactivation/Interrogation to have empty DN field.


            index = input->index;

            if (input->string_ptr[input->index] != '\0')
            {

                if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }

		  //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //if (get_int_before_star(input, (kal_uint16 *)&bs_code) == KAL_FALSE)
                if (get_int_before_star(input, &bs_code) == KAL_FALSE)
                {
                    input->index = ++index;
					//bs_code = INVALID_BS_CODE;
                }
		  //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //else if ((bs_code >= INVALID_BS_CODE && bs_code < L4_ALL_TELESERVICES)
                else if ((bs_code < L4_ALL_TELESERVICES)
                || (bs_code > L4_FACSIMILE_SERVICES && bs_code <  L4_SHORT_MESSAGE_SERVICES)
                || (bs_code > L4_ALL_SYNC_SERVICES &&  bs_code < L4_ALL_DATA_CIRCUIT_SYNC)
                || (bs_code > L4_ALL_DATA_CIRCUIT_ASYNC && bs_code < L4_AUXILIARY_TELEPHONY)
                || bs_code > L4_AUXILIARY_TELEPHONY) //L4_ALL_GPRS_BEARER_SERVICES
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
                
                if (input->string_ptr[input->index] != '\0')
                {
                    if (op_code == SS_OP_REGISTERSS) //act
                    {

                        if ((ss_code == L4_CFNRY) || (ss_code == L4_CFA) || (ss_code ==
                            L4_CFC))
                        {
                            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                            {
                                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                            }

				//[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                            //if (get_int_before_star(input, (kal_uint16 *)&timer) ==
                            if (get_int_before_star(input, &timer) ==
                                KAL_FALSE)
                            {
                                //input->index = 0;
                                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                            }

                            if (timer != 5 && timer != 10 && timer != 15 && timer != 20 && timer != 25 && timer != 30)
                            {
                                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                            }

                            if (input->string_ptr[input->index] != '\0')
                            {
                                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                            }
                     
                        }
                        else
                        {
                            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                        }
                    }
                    else
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                }
            }
        }
    }
    else //registration
    {
        if (input->string_ptr[input->index] != '\0')
        {

            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            if (input->string_ptr[input->index] == '+')
            {
                ton_npi = 0x91; // international number
                input->index++;
                plus_found = KAL_TRUE;

                if (cf_number_length > 0)
                {
                    cf_number_length--;
                }
            }

            if (cf_number_length > 0)
            {
                if (get_dn_by_length(input, (kal_uint8*)addr.number, cf_number_length) == KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }
            }
            else
            {
                if (get_dn_before_star(input, (kal_uint8*)addr.number) == KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }
            }

            if (addr.number[0] != 0)
            {
                l4_address.addr_bcd[0] = ton_npi;

               count = convert_to_bcd((kal_uint8*)addr.number, (kal_uint8*) &
                                       (l4_address.addr_bcd[1]), MAX_CC_ADDR_LEN - 1);

                l4_address.addr_length = count + 1;

                // added by paul, 20030414, to invoke registration if *21*<DN>#
                if (op_code == SS_OP_ACTIVATESS)
                {
                    op_code = SS_OP_REGISTERSS;
                }
            }
            else if (plus_found == KAL_FALSE)
            {
                /* Johnny:
                   special case:
                   Vivo operator in Brazil.
                   The phone number to activate the voice number is *555
                */
#ifdef __CF_NUM_INC_STAR__
                if ((input->string_ptr[input->index] != '\0') &&
                    (op_code == SS_OP_REGISTERSS))
                {

                    if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }

                    if (input->string_ptr[input->index] == '+')
                    {
                        ton_npi = 0x91; // international number
                        input->index++;
                        plus_found = KAL_TRUE;                
                    }

                    if (get_dn_before_star(input, (kal_uint8*)(addr.number+1)) == KAL_FALSE)
                    {
                        return INVALID_OPERATION;
                    }

                    if (addr.number[1] != 0)
                    {
                       addr.number[0] = '*';
                       
                        l4_address.addr_bcd[0] = ton_npi;

                       count = convert_to_bcd((kal_uint8*)addr.number, (kal_uint8*) &
                                       (l4_address.addr_bcd[1]), MAX_CC_ADDR_LEN - 1);

                        l4_address.addr_length = count + 1;

                        // added by paul, 20030414, to invoke registration if *21*<DN>#
                        if (op_code == SS_OP_ACTIVATESS)
                        {
                            op_code = SS_OP_REGISTERSS;
                        }
                    }
                    else if (plus_found == KAL_FALSE)
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                }
#else                
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);                
#endif                
            }
            // [MAUI_03213593/MAUI_03214542] -- mtk04317 Ian Chang 2012/07/10 -- START
            //
            else  // i.e. addr.number[0] is 0 and plus_found is TRUE ==> Only '+' in <DN> field
            {
                return INVALID_OPERATION;   // NOTE: In this case, we don't pass the string to SIM for SS-ctrl-by-SIM.
                                            //       Otherwise, 
            }                               //       csmss_send_ss_ctrl_req(), which calls convert_to_general_bcd() with type=CONVERT_TO_BCD_IGNORE_PLUS,
            //                              //       would cause '+' to be removed from the SS string passed to SIM.
            //                              //       This func, setup_call_forward_struct(), would be called again to parse the string sent back by SIM,
            //                              //       and, bcoz '+' is gone, the above block calling csmss_ss_src_ussd_req() would be entered.
            //                              //       Finally is_ss_string() would return INVALID_OPERATION to csmss_ss_ctrl_cnf_hdlr(), causing problem.
            //
            // [MAUI_03213593/MAUI_03214542] -- mtk04317 Ian Chang 2012/07/10 -- END

            index = input->index;

            if (input->string_ptr[input->index] != '\0')
            {
            
                if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
                //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //if (get_int_before_star(input, (kal_uint16*)&bs_code) == KAL_FALSE)
                if (get_int_before_star(input, &bs_code) == KAL_FALSE)
                {
                    input->index = ++index;
					//bs_code = INVALID_BS_CODE;
                }
		  //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //else if ((bs_code >= INVALID_BS_CODE && bs_code < L4_ALL_TELESERVICES)
                else if ((bs_code < L4_ALL_TELESERVICES)
                || (bs_code > L4_FACSIMILE_SERVICES && bs_code <  L4_SHORT_MESSAGE_SERVICES)
                || (bs_code > L4_ALL_SYNC_SERVICES && bs_code < L4_ALL_DATA_CIRCUIT_SYNC)
                || (bs_code > L4_ALL_DATA_CIRCUIT_ASYNC && bs_code < L4_AUXILIARY_TELEPHONY)
                || bs_code > L4_AUXILIARY_TELEPHONY) //L4_ALL_GPRS_BEARER_SERVICES
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
 
                if (input->string_ptr[input->index] != '\0')
                {
                    if ((ss_code == L4_CFNRY) || (ss_code == L4_CFA) || (ss_code ==
                        L4_CFC))
                    {
                        if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                        {
                            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                        }
                        //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                        //if (get_int_before_star(input, (kal_uint16*)&timer) ==
                        if (get_int_before_star(input, &timer) ==
                            KAL_FALSE)
                        {
                            //input->index = 0;
                            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                        }

                        if (timer != 5 && timer != 10 && timer != 15 && timer != 20 && timer != 25 && timer != 30)
                        {
                            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                        }

                        if (input->string_ptr[input->index] != '\0')
                        {
                            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                        }
                    
                    }
                    else
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                }
            }
        }
        else
        {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }
    }
    
    if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
    {
        //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
        //result = csmss_ss_exe_call_forward_req(src_id, op_code, ss_code, (kal_uint8)bs_code, timer, l4_address, KAL_FALSE, l4_subaddr);
        result = csmss_ss_exe_call_forward_req(src_id, op_code, ss_code, bs_code, timer, l4_address, KAL_FALSE, l4_subaddr);
    }
    return result;
}


csmss_string_op_enum setup_call_barring_struct(kal_uint8 src_id, kal_uint8
    ton_npi, csmss_string_struct *input, kal_uint8 op_code, kal_uint8 ss_code)
{
    //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
    //kal_int8 bs_code = INVALID_BS_CODE;
    kal_uint8 bs_code = INVALID_BS_CODE;
    csmss_string_op_enum result = INVALID_OPERATION;
    kal_uint8 old_pw[4];
    kal_uint8 new_pw1[4];
    kal_uint8 new_pw2[4];
    kal_uint8 password_temp[100];
    kal_uint16 len = 0;

    kal_mem_set(old_pw, 0, 4);
    kal_mem_set(new_pw1, 0, 4);
    kal_mem_set(new_pw2, 0, 4);

    if (op_code == SS_OP_INTERROGATESS)
    {
        if (input->string_ptr[input->index] != '\0')
        {
            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            len = input->index;
            if (get_string_before_star(input, (kal_uint8*)password_temp, 100) ==
                KAL_FALSE)
            {
                return INVALID_OPERATION;
            }

            len = input->index - len - 1;
            /* MAUI_01699805 [CSMSS][Revise] handle *#33**11# as CB instead of USSD */
            if ((len != 4) && (len != 0))
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }
            
            if (input->string_ptr[input->index] != '\0')
            {
#if 1
                if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
            
		  //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //if (get_int_before_star(input, (kal_uint16*)&bs_code) == KAL_FALSE)
                if (get_int_before_star(input, &bs_code) == KAL_FALSE)
                {
                    //input->index = 0;
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
		  //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                //else if ((bs_code >= INVALID_BS_CODE && bs_code < L4_ALL_TELESERVICES)
                else if ((bs_code < L4_ALL_TELESERVICES)
                || (bs_code > L4_FACSIMILE_SERVICES && bs_code < L4_SHORT_MESSAGE_SERVICES)
                || (bs_code > L4_ALL_SYNC_SERVICES && bs_code < L4_ALL_DATA_CIRCUIT_SYNC)
                || (bs_code > L4_ALL_DATA_CIRCUIT_ASYNC && bs_code < L4_AUXILIARY_TELEPHONY)
                || bs_code > L4_AUXILIARY_TELEPHONY) //L4_ALL_GPRS_BEARER_SERVICES
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
 
                if (input->string_ptr[input->index] != '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
#else
/* under construction !*/
#endif
            }
        }
    }
    else
    // opcode = ACT/DEACT/REGPW
    {
        if (input->string_ptr[input->index] != '\0')
        {
            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            len = input->index;
            if (get_string_before_star(input, (kal_uint8*)password_temp, 100) ==
                KAL_FALSE)
            {
                return INVALID_OPERATION;
            }

            // minus one digit for get_string_before_star will point to the digit next to star sign
            len = input->index - len - 1;
            if (len == 4)
            {
                kal_mem_cpy(old_pw, password_temp, 4);
            }
            else
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            if (op_code == SS_OP_REGISTERPASSWORD)
            {
                len = input->index;
                if (get_string_before_star(input, (kal_uint8*)password_temp, 100) ==
                    KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }

                // minus one digit for get_string_before_star will point to the digit next to star sign
                len = input->index - len - 1;
                if (len == 4)
                {
                    kal_mem_cpy(new_pw1, password_temp, 4);
                }
                else
                {
                    return INVALID_OPERATION;
                }

                len = input->index;
                if (get_string_before_star(input, (kal_uint8*)password_temp, 100) ==
                    KAL_FALSE)
                {
                    return INVALID_OPERATION;
                }
 
                // minus one digit for get_string_before_star will point to the digit next to star sign
                len = input->index - len - 1;
                if (len == 4)
                {
                    kal_mem_cpy(new_pw2, password_temp, 4);
                }
                else
                {
                    return INVALID_OPERATION;
                }

                /* Johnny: we do not check new pw1 == new pw2 here, NW will check it */

                if (input->string_ptr[input->index] != '\0')
                {
                    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                }
            }
            else
            {
                if (input->string_ptr[input->index] != '\0')
                {
                
                    if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                    //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                    //if (get_int_before_star(input, (kal_uint16*)&bs_code) ==
                    if (get_int_before_star(input, &bs_code) ==
                        KAL_FALSE)
                    {
                        //input->index = 0;
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
		      //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
                    //else if ((bs_code >= INVALID_BS_CODE && bs_code < L4_ALL_TELESERVICES)
                    else if ((bs_code < L4_ALL_TELESERVICES)
                    || (bs_code > L4_FACSIMILE_SERVICES && bs_code < L4_SHORT_MESSAGE_SERVICES)
                    || (bs_code > L4_ALL_SYNC_SERVICES && bs_code < L4_ALL_DATA_CIRCUIT_SYNC)
                    || (bs_code > L4_ALL_DATA_CIRCUIT_ASYNC && bs_code < L4_AUXILIARY_TELEPHONY)
                    || bs_code > L4_AUXILIARY_TELEPHONY) //L4_ALL_GPRS_BEARER_SERVICES
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }

                    if (input->string_ptr[input->index] != '\0')
                    {
                        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
                    }
                }
            }
        }
        else
        {
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }
    }

    if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
    {
        //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
        result = csmss_ss_exe_call_barring_req(src_id, op_code, ss_code,
            bs_code, (kal_uint8*)old_pw, (kal_uint8*)new_pw1, (kal_uint8*)new_pw2);
    }

    return result;
}


csmss_string_op_enum setup_call_waiting_struct(kal_uint8 src_id, kal_uint8
    ton_npi, csmss_string_struct *input, kal_uint8 op_code)
{
    csmss_string_op_enum result = INVALID_OPERATION;
    //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
    //kal_int8 bs_code = INVALID_BS_CODE;
    kal_uint8 bs_code = INVALID_BS_CODE;

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
#endif
        if (input->string_ptr[input->index] != '\0')
        {

            if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }
            //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
            //if (get_int_before_star(input,(kal_uint16*) &bs_code) == KAL_FALSE)
            if (get_int_before_star(input, &bs_code) == KAL_FALSE)
            {
                /*         bs_code = INVALID_BS_CODE; */
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }
            //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
            //else if ((bs_code >= INVALID_BS_CODE && bs_code < L4_ALL_TELESERVICES)
            else if ((bs_code < L4_ALL_TELESERVICES)
            || (bs_code > L4_FACSIMILE_SERVICES && bs_code < L4_SHORT_MESSAGE_SERVICES)
            || (bs_code > L4_ALL_SYNC_SERVICES && bs_code < L4_ALL_DATA_CIRCUIT_SYNC)
            || (bs_code > L4_ALL_DATA_CIRCUIT_ASYNC && bs_code < L4_AUXILIARY_TELEPHONY)
            || bs_code > L4_AUXILIARY_TELEPHONY) //L4_ALL_GPRS_BEARER_SERVICES
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }

            if (input->string_ptr[input->index] != '\0')
            {
                return csmss_ss_src_ussd_req(src_id, ton_npi, input);
            }
        }
//    }

    if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
    {
        //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
        //result = csmss_ss_exe_call_wait_req(src_id, op_code, (kal_uint8)bs_code);
        result = csmss_ss_exe_call_wait_req(src_id, op_code, bs_code);
    }

    return result;
}


csmss_string_op_enum setup_interrogate_struct(kal_uint8 src_id, kal_uint8
    ton_npi, csmss_string_struct *input, kal_uint8 ss_code)
{
    //kal_uint8 passwd[8];
    //kal_uint8 ccbs_index = 0xff;
    csmss_string_op_enum result = INVALID_OPERATION;
    //csmss_number_struct addr;
    //csmss_sub_addr_struct sub_addr;
    //l4_addr_bcd_struct l4_address;
    //l4_addr_bcd_struct l4_subaddr;

    //kal_mem_set(passwd, 0, 8);
    //kal_mem_set(&addr, 0, sizeof(csmss_number_struct));
    //kal_mem_set(&sub_addr, 0, sizeof(csmss_sub_addr_struct));
    //kal_mem_set(&l4_address, 0, sizeof(l4_addr_bcd_struct));
    //kal_mem_set(&l4_subaddr, 0, sizeof(l4_addr_bcd_struct));

    switch (ss_code)
    {
    case L4_CLIP:
    case L4_CLIR:
    case L4_COLP:
    case L4_COLR:
    case L4_CNAP:

        if (input->string_ptr[input->index] != '\0')
        {
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }

        if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
        {
            result = csmss_ss_exe_cli_req(src_id, ss_code);
        }

        break;

    case L4_EMLPP:

        if (input->string_ptr[input->index] != '\0')
        {
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }
 
        if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
        {
            result = csmss_ss_exe_emlpp_req(src_id, SS_OP_INTERROGATESS, 0);
        }

        break;

    default:
        result = INVALID_OPERATION;
        break;
    } // end of switch-case of ss_code

    return result;
}


csmss_string_op_enum setup_emlpp_struct(kal_uint8 src_id, kal_uint8 ton_npi,
                                        csmss_string_struct *input, kal_uint8
                                        ss_code, kal_uint8 priority)
{
    csmss_string_op_enum result = INVALID_OPERATION;

    if (input->string_ptr[input->index] != '\0')
    {
        return csmss_ss_src_ussd_req(src_id, ton_npi, input);
    }

    if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
    {
        result = csmss_ss_exe_emlpp_req(src_id, SS_OP_REGISTERSS, priority);
    }

    return result;
}

csmss_string_op_enum setup_ussd_struct(kal_uint8 src_id, kal_uint8 ton_npi,
                                       csmss_string_struct *input)
{
    //csmss_string_op_enum result = INVALID_OPERATION;

//MAUI_02328296
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif

    return csmss_ss_src_ussd_req(src_id, ton_npi, input);
}

csmss_string_op_enum setup_ccbs_struct(kal_uint8 src_id, kal_uint8
    ton_npi, csmss_string_struct *input, kal_uint8 op_code)
{
    //kal_uint8 passwd[8];
    kal_uint8 ccbs_index = 0xff;
    csmss_string_op_enum result = INVALID_OPERATION;
    //csmss_number_struct addr;
    //csmss_sub_addr_struct sub_addr;
    //l4_addr_bcd_struct l4_address;
    //l4_addr_bcd_struct l4_subaddr;

    //kal_mem_set(passwd, 0, 8);
    //kal_mem_set(&addr, 0, sizeof(csmss_number_struct));
    //kal_mem_set(&sub_addr, 0, sizeof(csmss_sub_addr_struct));
    //kal_mem_set(&l4_address, 0, sizeof(l4_addr_bcd_struct));
    //kal_mem_set(&l4_subaddr, 0, sizeof(l4_addr_bcd_struct));

    if (input->string_ptr[input->index] != '\0')
    {
        if (input->string_ptr[input->index] == '#' && input->string_ptr[input->index + 1] == '\0')
        {
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }
        //[MAUI_02257093][Modis]Run-Time Check Failure #2 - Stack around the avriable 'timer' was currupted
        //if (get_int_before_star(input, (kal_uint16*)&ccbs_index) ==
        if (get_int_before_star(input, &ccbs_index) ==
            KAL_FALSE)
        {
            //input->index = 0;
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }

        if (input->string_ptr[input->index] != '\0')
        {
            return csmss_ss_src_ussd_req(src_id, ton_npi, input);
        }
    }
    if (csmss_ss_src_req(src_id, ton_npi, input, &result) == KAL_TRUE)
    {
        result = csmss_ss_exe_ccbs_req(src_id, op_code, ccbs_index);
    }

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_convert_l4_ss_code
 * DESCRIPTION
 *  This funtion convert MTK L4 ss-code to 3GPP ss-code
 *
 * PARAMETERS
 *  l4_ss  IN
 * RETURNS
 *  ss_code_enum
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

ss_code_enum csmss_convert_l4_ss_code(l4_ss_code_enum l4_ss)
{
    ss_code_enum ss;

    switch (l4_ss)
    {
    case L4_EMLPP:
    case L4_EMLPP0:
    case L4_EMLPP1:
    case L4_EMLPP2:
    case L4_EMLPP3:
    case L4_EMLPP4:
        ss = SS_EMLPP;
        break;

    case L4_CD:
        ss = SS_CD;
        break;

    case L4_CLIP:
        ss = SS_CLIP;
        break;
    case L4_CLIR:
        ss = SS_CLIR;
        break;
    case L4_COLP:
        ss = SS_COLP;
        break;
    case L4_COLR:
        ss = SS_COLR;
        break;

    case L4_CFU:
        ss = SS_CFU;
        break;
    case L4_CFB:
        ss = SS_CFB;
        break;
    case L4_CFNRY:
        ss = SS_CFNRY;
        break;
    case L4_CFNRC:
        ss = SS_CFNRC;
        break;
    case L4_CFA:
        ss = SS_ALLFORWARDINGSS;
        break;
    case L4_CFC:
        ss = SS_ALLCONDFORWARDINGSS;
        break;

    case L4_CW:
        ss = SS_CW;
        break;

    case L4_UUS1:
        ss = SS_UUS1;
        break;
    case L4_UUS2:
        ss = SS_UUS2;
        break;
    case L4_UUS3:
        ss = SS_UUS3;
        break;
    case L4_UUSALL:
        ss = SS_ALLADDITIONALINFOTRANSFERSS;
        break;

    case L4_BAOC:
        ss = SS_BAOC;
        break;
    case L4_BOIC:
        ss = SS_BOIC;
        break;
    case L4_BOICEXHC:
        ss = SS_BOICEXHC;
        break;
    case L4_BAIC:
        ss = SS_BAIC;
        break;
    case L4_BAICROAM:
        ss = SS_BICROAM;
        break;
    case L4_BAC:
        ss = SS_ALLBARRINGSS;
        break;
    case L4_BOC:
        ss = SS_BARRINGOFOUTGOINGCALLS;
        break;
    case L4_BIC:
        ss = SS_BARRINGOFINCOMINGCALLS;
        break;

    case L4_ECT:
        ss = SS_ECT;
        break;

    case L4_CCBS:
        ss = SS_CCBS_A;
        break;

    case L4_CNAP:
        ss = SS_CNAP;
        break;

    case L4_MC:
        ss = SS_MC;
        break;

    default:
        ss = SS_PLMN_SPECIFICSS_F;
        break;
    }

    return ss;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_convert_l4_bs_code
 * DESCRIPTION
 *  This funtion convert MTK L4 bs-code to 3GPP bs-code
 *
 * PARAMETERS
 *  l4_ss  IN
 * RETURNS
 *  BasicServiceCode
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

void csmss_convert_l4_bs_code(l4_bs_code_enum l4_bs, BasicServiceCode *bsc)
{
    switch (l4_bs)
    {
    case L4_ALL_TELESERVICES:
    case L4_TELEPHONY:
    case L4_ALL_DATA_TELESERVICES:
    case L4_FACSIMILE_SERVICES:
    case L4_SHORT_MESSAGE_SERVICES:
    case L4_ALL_TELESERVICES_EXCEPT_SMS:
    case L4_VOICE_GROUP_CALL_SERVICE:
    case L4_VOICE_BROADCAST_SERVICE:
    case L4_AUXILIARY_TELEPHONY:
        bsc->teleserviceOpt = KAL_TRUE;
        bsc->teleservice = get_ctrl_buffer(sizeof(TeleserviceCode));
        break;

    case L4_ALL_BEARER_SERVICES:
    case L4_ALL_ASYNC_SERVICES:
    case L4_ALL_SYNC_SERVICES:
    case L4_ALL_DATA_CIRCUIT_SYNC:
    case L4_ALL_DATA_CIRCUIT_ASYNC:
        bsc->bearerServiceOpt = KAL_TRUE;
        bsc->bearerService = get_ctrl_buffer(sizeof(BearerServiceCode));
        break;

    default:
        break;
    }

    switch (l4_bs)
    {
    case L4_ALL_TELESERVICES:
        bsc->teleservice->octs[0] = TS_ALLTELESERVICES;
        break;
    case L4_TELEPHONY:
        bsc->teleservice->octs[0] = TS_ALLSPEECTRANSMISSIONSERVICES;
        break;
    case L4_ALL_DATA_TELESERVICES:
        bsc->teleservice->octs[0] = TS_ALLDATATELESERVICES;
        break;
    case L4_FACSIMILE_SERVICES:
        bsc->teleservice->octs[0] = TS_ALLFACSIMILETRANSMISSIONSERVICES;
        break;
    case L4_SHORT_MESSAGE_SERVICES:
        bsc->teleservice->octs[0] = TS_ALLSHORTMESSAGESERVICES;
        break;
    case L4_ALL_TELESERVICES_EXCEPT_SMS:
        bsc->teleservice->octs[0] = TS_ALLTELESERVICES_EXEPTSMS;
        break;
    case L4_VOICE_GROUP_CALL_SERVICE:
        bsc->teleservice->octs[0] = TS_ALLVOICEGROUPCALLSERVICES;
        break;
    case L4_VOICE_BROADCAST_SERVICE:
        bsc->teleservice->octs[0] = TS_VOICEBROADCASTCALL;
        break;
    case L4_AUXILIARY_TELEPHONY:
        bsc->teleservice->octs[0] = TS_PLMN_SPECIFICTS_1;   /* Johnny: CPHS 4.2 */
        break;

    case L4_ALL_BEARER_SERVICES:
        bsc->bearerService->octs[0] = BS_ALLBEARERSERVICES;
        break;
    case L4_ALL_ASYNC_SERVICES:
        bsc->bearerService->octs[0] = BS_ALLASYNCHRONOUSSERVICES;
        break;
    case L4_ALL_SYNC_SERVICES:
        bsc->bearerService->octs[0] = BS_ALLSYNCHRONOUSSERVICES;
        break;
    case L4_ALL_DATA_CIRCUIT_SYNC:
        bsc->bearerService->octs[0] = BS_ALLDATACIRCUITSYNCHRONOUS;
        break;
    case L4_ALL_DATA_CIRCUIT_ASYNC:
        bsc->bearerService->octs[0] = BS_ALLDATACIRCUITASYNCHRONOUS;
        break;

    default:
        break;
    }

    return;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_convert_ss_code_l4
 * DESCRIPTION
 *  This funtion convert 3GPP ss-code to MTK L4 ss-code
 *
 * PARAMETERS
 *  ss  IN
 * RETURNS
 *  l4_ss_code_enum
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

l4_ss_code_enum csmss_convert_ss_code_l4(ss_code_enum ss)
{
    l4_ss_code_enum l4_ss;

    switch (ss)
    {
    case SS_EMLPP:
        l4_ss = L4_EMLPP;
        break;

    case SS_CD:
        l4_ss = L4_CD;
        break;

    case SS_CLIP:
        l4_ss = L4_CLIP;
        break;
    case SS_CLIR:
        l4_ss = L4_CLIR;
        break;
    case SS_COLP:
        l4_ss = L4_COLP;
        break;
    case SS_COLR:
        l4_ss = L4_COLR;
        break;

    case SS_CFU:
        l4_ss = L4_CFU;
        break;
    case SS_CFB:
        l4_ss = L4_CFB;
        break;
    case SS_CFNRY:
        l4_ss = L4_CFNRY;
        break;
    case SS_CFNRC:
        l4_ss = L4_CFNRC;
        break;
    case SS_ALLFORWARDINGSS:
        l4_ss = L4_CFA;
        break;
    case SS_ALLCONDFORWARDINGSS:
        l4_ss = L4_CFC;
        break;

    case SS_CW:
        l4_ss = L4_CW;
        break;

    case SS_UUS1:
        l4_ss = L4_UUS1;
        break;
    case SS_UUS2:
        l4_ss = L4_UUS2;
        break;
    case SS_UUS3:
        l4_ss = L4_UUS3;
        break;
    case SS_ALLADDITIONALINFOTRANSFERSS:
        l4_ss = L4_UUSALL;
        break;

    case SS_BAOC:
        l4_ss = L4_BAOC;
        break;
    case SS_BOIC:
        l4_ss = L4_BOIC;
        break;
    case SS_BOICEXHC:
        l4_ss = L4_BOICEXHC;
        break;
    case SS_BAIC:
        l4_ss = L4_BAIC;
        break;
    case SS_BICROAM:
        l4_ss = L4_BAICROAM;
        break;
    case SS_ALLBARRINGSS:
        l4_ss = L4_BAC;
        break;
    case SS_BARRINGOFOUTGOINGCALLS:
        l4_ss = L4_BOC;
        break;
    case SS_BARRINGOFINCOMINGCALLS:
        l4_ss = L4_BIC;
        break;

    case SS_ECT:
        l4_ss = L4_ECT;
        break;

    case SS_CCBS_A:
        l4_ss = L4_CCBS;
        break;
    case SS_CCBS_B:
        l4_ss = L4_CCBS;
        break;

    case SS_CNAP:
        l4_ss = L4_CNAP;
        break;

    case SS_MC:
        l4_ss = L4_MC;
        break;

    default:
        l4_ss = L4_ALLSS;
        break;
    }

    return l4_ss;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_convert_bs_code_l4
 * DESCRIPTION
 *  This funtion convert 3GPP bs-code to MTK L4 bs-code
 *
 * PARAMETERS
 *  bs  IN
 * RETURNS
 *  l4_bs_code_enum
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

l4_bs_code_enum csmss_convert_bs_code_l4(BasicServiceCode *bs)
{
    l4_bs_code_enum l4_bs = L4_ALL_TELESERVICES;

    if (bs->teleserviceOpt == KAL_TRUE)
    {
        switch (bs->teleservice->octs[0])
        {
        case TS_ALLTELESERVICES:
            l4_bs = L4_ALL_TELESERVICES;
            break;

        case TS_ALLSPEECTRANSMISSIONSERVICES:
        case TS_TELEPHONY:
            l4_bs = L4_TELEPHONY;
            break;

        case TS_ALLDATATELESERVICES:
            l4_bs = L4_ALL_DATA_TELESERVICES;
            break;
        case TS_ALLFACSIMILETRANSMISSIONSERVICES:
            l4_bs = L4_FACSIMILE_SERVICES;
            break;
        case TS_ALLSHORTMESSAGESERVICES:
            l4_bs = L4_SHORT_MESSAGE_SERVICES;
            break;
        case TS_ALLTELESERVICES_EXEPTSMS:
            l4_bs = L4_ALL_TELESERVICES_EXCEPT_SMS;
            break;
        case TS_ALLVOICEGROUPCALLSERVICES:
            l4_bs = L4_VOICE_GROUP_CALL_SERVICE;
            break;
        case TS_VOICEBROADCASTCALL:
            l4_bs = L4_VOICE_BROADCAST_SERVICE;
            break;

        case TS_ALLPLMN_SPECIFICTS:
        case TS_PLMN_SPECIFICTS_1:
            l4_bs = L4_AUXILIARY_TELEPHONY; /* Johnny: CPHS 4.2 */
            break;

        default:
            l4_bs = L4_ALL_TELESERVICES;
            break;
        }
    }
    else if (bs->bearerServiceOpt == KAL_TRUE)
    {
        switch (bs->bearerService->octs[0])
        {
        case BS_ALLBEARERSERVICES:
            l4_bs = L4_ALL_BEARER_SERVICES;
            break;
        case BS_ALLASYNCHRONOUSSERVICES:
            l4_bs = L4_ALL_ASYNC_SERVICES;
            break;
        case BS_ALLSYNCHRONOUSSERVICES:
            l4_bs = L4_ALL_SYNC_SERVICES;
            break;

        case BS_ALLDATACIRCUITSYNCHRONOUS:
        case BS_ALLDATACDS_SERVICES:
            l4_bs = L4_ALL_DATA_CIRCUIT_SYNC;
            break;

        case BS_ALLDATACIRCUITASYNCHRONOUS:
        case BS_ALLDATACDA_SERVICES:
            l4_bs = L4_ALL_DATA_CIRCUIT_ASYNC;
            break;

        case BS_ALLPADACCESSCA_SERVICES:
            l4_bs = L4_BS_ALLPADACCESSCA_SERVICES;
            break;      
        case BS_ALLDATAPDS_SERVICES:
            l4_bs = L4_BS_ALLDATAPDS_SERVICES;
            break;                    

        default:
            l4_bs = L4_ALL_BEARER_SERVICES;
            break;
        }
    }

    return l4_bs;
}

kal_bool csmss_ss_src_req(kal_uint8 src_id, kal_uint8 ton_npi, csmss_string_struct *input, csmss_string_op_enum *ret)
{
    //kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_src_call_forward_req);
    /** 
     * MAUI_00372946
     * [SS][Revise][STK] STN-No envelope(call control) command in call control (send ussd)
     */
    if (src_id >= MAX_SOURCE_NUM)
    {
        *ret = INVALID_OPERATION;
        return KAL_FALSE;
    }

#ifdef __SAT__
#ifdef __GEMINI__
    if (sim_service_table_query(SERVICE_CALL_CONTROL, (kal_uint8)(csmss_cur_mod-MOD_CSM)) == SERVICE_SUPPORT)
#else
    if (sim_service_table_query(SERVICE_CALL_CONTROL) == SERVICE_SUPPORT)
#endif
    {
        if (csmss_ptr_g->ss_ctrl_done != KAL_TRUE)
        {
            csmss_g_src_id = src_id;

            /* send SAT_SS_CTRL_BY_SIM_REQ to SIM */
            csmss_send_ss_ctrl_req(SAT_SEND_SS, ton_npi, input ->
                                   string_ptr); // always true

            /* send CSM_SS_PARSE_CNF to L4C */
            csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input ->
                                    string_ptr); // always true
            *ret = SS_OPERATION;
            return KAL_FALSE;
        }
        else if (csmss_ptr_g->type_of_modification != SIMCALLCONTROL_NOMODIFY)
        {
            /* call to ss need not send to control by sim again, but parse cnf need to be returned */
            /* ss to ss need not send to control by sim again, but parse cnf need NOT to be returned */
            /* send CSM_SS_PARSE_CNF to L4C */
            csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
            // always true
            *ret = SS_OPERATION;        
        }
    }
    else
    {
        /* send CSM_SS_PARSE_CNF to L4C */
        csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
        // always true
        *ret = SS_OPERATION;
    }
#else
    /* send CSM_SS_PARSE_CNF to L4C */
    csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
    *ret = SS_OPERATION;
#endif
    return KAL_TRUE;
}

csmss_string_op_enum csmss_ss_src_ussd_req(kal_uint8 src_id, kal_uint8 ton_npi,
    csmss_string_struct *input)
{
    csmss_string_op_enum result = INVALID_OPERATION;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_src_ussd_req);

    /* AT command can indicate the SS operation or not. Avoid to send USSD when we can not identify the SS operation. */
   //[ALPS00006144]
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
#if defined(__CSMSS_EXPLICIT_SS_OPERATION__)
    if(CSMSS_EXPLICIT_SS_OP == (ss_string_op)csmss_ptr_g->is_explicit_ss_op){
        return result;
    }
#endif

    /** 
     * MAUI_00372946
     * [SS][Revise][STK] STN-No envelope(call control) command in call control (send ussd)
     */
    if (src_id >= MAX_SOURCE_NUM)
    {
        return result;
    }

//MAUI_02328296
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
    /* use original string */
    if (csmss_g_ussd_len == 0)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_ALLOC_NULL_STRING);
        return result;
    }

    input->index = csmss_g_ussd_len;

#ifdef __SAT__
#ifdef __GEMINI__
    if (sim_service_table_query(SERVICE_CALL_CONTROL, (kal_uint8)(csmss_cur_mod-MOD_CSM)) == SERVICE_SUPPORT)
#else
    if (sim_service_table_query(SERVICE_CALL_CONTROL) == SERVICE_SUPPORT)
#endif
    {
        if (csmss_ptr_g->ss_ctrl_done != KAL_TRUE)
        {
            csmss_g_src_id = src_id;

            /* send SAT_SS_CTRL_BY_SIM_REQ to SIM */
            csmss_send_ss_ctrl_req(SAT_SEND_USSD, ton_npi, input ->
                                   string_ptr);

            /* send CSM_SS_PARSE_CNF to L4C */
            csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input ->
                                    string_ptr);
            result = SS_OPERATION;
            return result;
        }
        else if (csmss_ptr_g->type_of_modification != SIMCALLCONTROL_NOMODIFY)
        {
            /* call to ss need not send to control by sim again, but parse cnf need to be returned */
            /* ss to ss need not send to control by sim again, but parse cnf need NOT to be returned */
            /* send CSM_SS_PARSE_CNF to L4C */
            csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
            // always true
            result = SS_OPERATION;
        }        
    }
    else
    {
        /* send CSM_SS_PARSE_CNF to L4C */
        csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
        result = SS_OPERATION;
    }
#else
    /* send CSM_SS_PARSE_CNF to L4C */
    csmss_send_ss_parse_cnf(src_id, SS_OPERATION, input->string_ptr);
    result = SS_OPERATION;
#endif
    /* send MNSS_BEGIN_REQ to CISS */
    if (csmss_g_change_phase_req == KAL_FALSE)
    {
        result = csmss_ss_exe_ussd_req(src_id, input->string_ptr, (kal_uint8)input
           ->index, (kal_uint8)SS_OP_PROCESSUNSTRUCTUREDSS_REQUEST);
    }
    else
    {
        result = csmss_ss_exe_ussd_req(src_id, input->string_ptr, (kal_uint8)input
           ->index, (kal_uint8)SS_OP_PROCESSUNSTRUCTUREDSS_DATA);
    }

    return result;
}

/***************************************************
 *
 * The routines to send SAT_CALL_CTRL_BY_SIM_REQ to SIM with
 * BCD encoing of SS-string
 *
 ***************************************************/


void csmss_send_ss_ctrl_req(kal_uint8 type, kal_uint8 ton_npi, kal_uint8
                            ss_string[MAX_DIGITS_USSD])
{
    sat_ss_ctrl_by_sim_req_struct *call_ctrl_ptr = NULL;
    peer_buff_struct *buff_ptr; /* for ss-string */
    kal_uint16 len = 0;
    kal_uint8 index = 0;
    kal_uint8 bcd_buff[MAX_DIGITS_USSD];

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_send_ss_ctrl_req);

    /* prepare local parameter */

    call_ctrl_ptr = (sat_ss_ctrl_by_sim_req_struct*)construct_local_para(sizeof
                     (sat_ss_ctrl_by_sim_req_struct), TD_CTRL);

    call_ctrl_ptr->type = type;
    call_ctrl_ptr->size_of_ccp1 = 0;
    call_ctrl_ptr->size_of_ccp2 = 0;
    call_ctrl_ptr->size_of_subaddr = 0;
    //MAUI_03104215, check src_id and mark SAT action
    if(csmss_g_src_id == SAT_SRC){
        call_ctrl_ptr->is_sat_action = KAL_TRUE;
    }
    else{
        call_ctrl_ptr->is_sat_action = KAL_FALSE;
    }

    csmss_ptr_g->ori_ss_ctrl_type = type;
    
    /* prepare peer buffer */

    if (type == SAT_SETUP_CALL)
    {
        bcd_buff[0] = ton_npi;
        index = convert_to_bcd(ss_string, bcd_buff + 1, MAX_DIGITS_USSD - 1);
        index++;
    }
    else if ((type == SAT_SEND_SS) ||
            ((type == SAT_SEND_USSD) && 
            #ifdef __GEMINI__
            (sim_service_table_query(SERVICE_USSD,(kal_uint8)(csmss_cur_mod-MOD_CSM)) != SERVICE_SUPPORT)))
            #else
            (sim_service_table_query(SERVICE_USSD) != SERVICE_SUPPORT)))
            #endif
    {
        /* 11.14 12.14 SS String*/
        call_ctrl_ptr->type = SAT_SEND_SS;
        bcd_buff[0] = ton_npi;
        index = convert_to_general_bcd(ss_string, bcd_buff + 1, MAX_DIGITS_USSD - 1, CONVERT_TO_BCD_IGNORE_PLUS);
        index++;
    }
    else //(type == SAT_SEND_USSD)
    {
        /* 11.14 12.17 USSD String*/
        kal_uint8 lang_type;
        smsal_dcs_enum alphabet_type;
        smsal_msg_class_enum mclass;
        kal_bool is_compress;
        kal_bool is_reserved;
            
        bcd_buff[0] = csmss_g_ussd_dcs;

        for (;ss_string[index] != '\0' && index < MAX_DIGITS_USSD - 1; index++)
        {
            ;
        }

        smsal_decode_cbsdcs(csmss_g_ussd_dcs, &lang_type,
                            &alphabet_type, &mclass, &is_compress,
                            &is_reserved);

#ifdef __USSD_AUTO_REJECT__
        if (alphabet_type == SMSAL_RESERVED_DCS)
        {
            alphabet_type = SMSAL_DEFAULT_DCS;
        }
#endif

        if ((is_compress == KAL_FALSE) && (alphabet_type == SMSAL_DEFAULT_DCS))
        {
            csmss_gsm7_pack((kal_uint8*)bcd_buff+1, ss_string, index, 0);
            index = (index * 7 + 7) / 8;
        }
        else
        {
            //MAUI_02328296
            if (alphabet_type == SMSAL_UCS2_DCS)
            {
                index = csmss_g_ussd_len;
            }

            kal_mem_cpy(bcd_buff+1, ss_string, index);
        }
        index++;
    }

    buff_ptr = construct_peer_buff(index, 0, 0, TD_CTRL);

    kal_mem_cpy(get_peer_buff_pdu(buff_ptr, &len), bcd_buff, index);

    csmss_send_ilm(MOD_SIM, MSG_ID_SAT_SS_CTRL_BY_SIM_REQ, call_ctrl_ptr,
                   buff_ptr);
}

/***************************************************
 *
 * The routines to send CSM_SS_PARSE_CNF to L4C with
 * correct type of operation (csmss_string_op_enum)
 *
 ***************************************************/


void csmss_send_ss_parse_cnf(kal_uint8 src_id, kal_uint8 op_code, kal_uint8
                             ss_string[MAX_DIGITS_USSD])
{
    l4ccsm_ciss_ss_parse_cnf_struct *ss_parse_ptr = NULL;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_send_ss_parse_cnf);

    ss_parse_ptr = (l4ccsm_ciss_ss_parse_cnf_struct*) \
        construct_local_para(sizeof(l4ccsm_ciss_ss_parse_cnf_struct), TD_CTRL);

    ss_parse_ptr->src_id = src_id;
    ss_parse_ptr->opcode = op_code;
    ss_parse_ptr->ss_dcs = csmss_g_ussd_dcs;
    ss_parse_ptr->type_of_modification = csmss_ptr_g->type_of_modification;
    //[MAUI_02547720]
    ss_parse_ptr->cf_number_length = csmss_g_cf_number_length;
    //[ALPS00006144]
    //[MAUI_02553565] [YuSu] [L4 SS] explicit SS feature
#if defined(__CSMSS_EXPLICIT_SS_OPERATION__)
    ss_parse_ptr->explicit_ss_op = csmss_ptr_g->is_explicit_ss_op;
#endif
    kal_mem_cpy(ss_parse_ptr->ss_string, ss_string, MAX_DIGITS_USSD);

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_SS_PARSE_CNF, ss_parse_ptr, NULL)
                   ;
}

/***************************************************
 *
 * The routines to send MNSS_BEGIN_REQ to CISS with
 * various kinds of SS Invoke operations
 *
 ***************************************************/

csmss_string_op_enum csmss_ss_exe_call_forward_req(kal_uint8 src_id, kal_uint8
    op_code, kal_uint8 ss_code, kal_uint8 bs_code, kal_uint8 no_reply_timer,
    l4_addr_bcd_struct address, kal_bool subaddress_flag, l4_addr_bcd_struct
    subaddress)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;

    //kal_int32                        comp_param_len;
    kal_int8 call_id;
    kal_uint8 ori_ss_code = ss_code;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_call_forward_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_cf_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_cf_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cf_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        msg_ptr->ss_code = ss_code;
        msg_ptr->bs_count = 0;
        kal_mem_set(msg_ptr->forwarding_list, 0, 13 *sizeof
                (forwarding_list_struct));
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__

        // [MAUI_03234680]
        // [SS][Change Feature] remove CFU assert andclear csmss_g_cf_number_length in abnormal case
        csmss_g_cf_number_length = 0;
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CF_END_CNF, msg_ptr, NULL);

        return SS_OPERATION;
    }

#if (defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
    kal_mem_cpy(&(csmss_g_ciss_tab[call_id].address), &address, sizeof(l4_addr_bcd_struct));
#endif

#ifdef __SS_ERASURE_BEFORE_REGISTER__
//remove the unnecessary debug code

    if ((csmss_g_erase_reg_req == KAL_FALSE) &&
        ((ss_code == L4_CFA) || (ss_code == L4_CFC)) &&
        (op_code == SS_OP_REGISTERSS))
    {
        op_code = SS_OP_ERASESS;

        if (ss_code != L4_CFA)
        {
            ss_code = L4_CFA;
        }
#if !(defined(__REL4__) && defined(__CFU_FTN_IN_EFCFIS__))
        // (NOTE: Just need to do this once. See also the section wrapped by __CFU_FTN_IN_EFCFIS__ above.)
        kal_mem_cpy(&(csmss_g_ciss_tab[call_id].address), &address, sizeof(l4_addr_bcd_struct));
#endif
        csmss_g_ciss_tab[call_id].no_reply_timer = no_reply_timer;

        csmss_g_erase_reg_req = KAL_TRUE;
    }
#endif

    /* Compose begin_req_ptr */
    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    switch (op_code)
    {
    case SS_OP_REGISTERSS:
        {
            CSMSS_MCD_VAR_START(RegisterSS_Arg, reg_arg)CSMSS_ALLOC_SS_CODE
                                (reg_arg->ss_Code, ss_code)
                                CSMSS_ALLOC_BASICSERVICE(reg_arg ->
                                basicService)CSMSS_ALLOC_ADDR(reg_arg ->
                                forwardedToNumber)CSMSS_ALLOC_SUBADDR(reg_arg
                               ->forwardedToSubaddress)CSMSS_ALLOC_TIMER
                                (reg_arg->noReplyConditionTime)

#ifdef __REL7__
	      reg_arg->longFTN_SupportedOpt = KAL_TRUE;
#endif//__REL7__

            csmss_pack(MCD_REGISTERSS_ARG, (kal_uint8*)reg_arg, begin_req_ptr
                      ->facility.component[0]);

            //CSMSS_PACK(MCD_REGISTERSS_ARG, begin_req_ptr->facility.component[0]->invoke, reg_arg)
            CSMSS_DEALLOC_SS_CODE(reg_arg->ss_Code)CSMSS_DEALLOC_BASICSERVICE
                                  (reg_arg->basicService)CSMSS_DEALLOC_ADDR
                                  (reg_arg->forwardedToNumber)
                                  CSMSS_DEALLOC_SUBADDR(reg_arg ->
                                  forwardedToSubaddress)CSMSS_DEALLOC_TIMER
                                  (reg_arg->noReplyConditionTime)
                                  CSMSS_MCD_VAR_END(reg_arg)
        }
        break;

    case SS_OP_ERASESS:
    case SS_OP_ACTIVATESS:
    case SS_OP_DEACTIVATESS:
    case SS_OP_INTERROGATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, ss_code)
                                CSMSS_ALLOC_BASICSERVICE(bs_arg->basicService)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_DEALLOC_BASICSERVICE
                                  (bs_arg->basicService)CSMSS_MCD_VAR_END
                                  (bs_arg)
        }
        break;

    default:
        break;
    } // end of switch-case of op_code

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    /* update context */
    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].ss_code = ori_ss_code;
    csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_CF_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;
    csmss_g_ciss_tab[call_id].bs_code = bs_code;

//remove the unnecessary debug code

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_call_wait_req(kal_uint8 src_id, kal_uint8
    op_code, kal_uint8 bs_code)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;

    //kal_int32                        comp_param_len;
    kal_int8 call_id;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_call_wait_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_cw_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_cw_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cw_end_cnf_struct), TD_CTRL);
        
        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        msg_ptr->bs_count = 0;
        msg_ptr->ss_status = 0;
        kal_mem_set(msg_ptr->bs_code, 0, 13);
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CW_END_CNF, msg_ptr, NULL);        
        
		return SS_OPERATION;
    }

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    switch (op_code)
    {
    case SS_OP_ACTIVATESS:
    case SS_OP_DEACTIVATESS:
    case SS_OP_INTERROGATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, L4_CW)
                                CSMSS_ALLOC_BASICSERVICE(bs_arg->basicService)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_DEALLOC_BASICSERVICE
                                  (bs_arg->basicService)CSMSS_MCD_VAR_END
                                  (bs_arg)
        }
        break;

    default:
        break;
    } // end of switch-case of op_code

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].ss_code = L4_CW;
    csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_CW_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id;
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_call_barring_req(kal_uint8 src_id, kal_uint8
    op_code, kal_uint8 ss_code, kal_uint8 bs_code, kal_uint8 old_pw[4],
    kal_uint8 new_pw1[4], kal_uint8 new_pw2[4])
{
    mnss_begin_req_struct *begin_req_ptr = NULL;
    //kal_int32                        comp_param_len;
    kal_int8 call_id;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_call_barring_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_cb_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_cb_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cb_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        msg_ptr->ss_code = ss_code;
        msg_ptr->bs_count = 0;
        kal_mem_set(msg_ptr->barring_list, 0, 13 *sizeof(barring_list_struct));
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CB_END_CNF, msg_ptr, NULL);        
        
		return SS_OPERATION;
    }

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    switch (op_code)
    {
    case SS_OP_ACTIVATESS:
    case SS_OP_DEACTIVATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, ss_code)
                                CSMSS_ALLOC_BASICSERVICE(bs_arg->basicService)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_DEALLOC_BASICSERVICE
                                  (bs_arg->basicService)CSMSS_MCD_VAR_END
                                  (bs_arg)

            kal_mem_cpy(csmss_g_old_pw, old_pw, 4);
        }
        break;

    case SS_OP_INTERROGATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, ss_code)
                                CSMSS_ALLOC_BASICSERVICE(bs_arg->basicService)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_DEALLOC_BASICSERVICE
                                  (bs_arg->basicService)CSMSS_MCD_VAR_END
                                  (bs_arg)

            if (old_pw[0] != 0)
            {
                kal_mem_cpy(csmss_g_old_pw, old_pw, 4);
            }
        }
        break;

    case SS_OP_REGISTERPASSWORD:
        {
            CSMSS_MCD_VAR_START(SS_Code, ss_Code)

            ss_Code->octs[0] = (kal_uint8)csmss_convert_l4_ss_code(
                                  (l4_ss_code_enum)ss_code);
            //            CSMSS_ALLOC_SS_CODE(ss_Code, ss_code)

            csmss_pack(MCD_SS_CODE, (kal_uint8*)ss_Code, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_CODE, begin_req_ptr->facility.component[0]->invoke, ss_Code)
            //            CSMSS_DEALLOC_SS_CODE(ss_Code)
            CSMSS_MCD_VAR_END(ss_Code)

            kal_mem_cpy(csmss_g_old_pw, old_pw, 4);
            kal_mem_cpy(csmss_g_new_pw1, new_pw1, 4);
            kal_mem_cpy(csmss_g_new_pw2, new_pw2, 4);

            // added by paul
            //layer4_ptr_g->l4c_ptr->cc_current_action[src_id] = CPWD_SS_EXE;
        }
        break;

    default:
        break;
    } // end of switch-case of op_code

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].ss_code = ss_code;
    csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_CB_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_emlpp_req(kal_uint8 src_id, kal_uint8 op_code,
    kal_uint8 default_priority_level)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;
    //kal_int32                           comp_param_len;
    kal_int8 call_id;
        
    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_emlpp_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_emlpp_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_emlpp_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_emlpp_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        msg_ptr->ss_status = 0;
        msg_ptr->default_priority_level = 0;
        msg_ptr->maximum_priority_level = 0;
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
 #ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_EMLPP_END_CNF, msg_ptr, NULL);        
    
		return SS_OPERATION;
    }

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    switch (op_code)
    {
    case SS_OP_REGISTERSS:
        {
            CSMSS_MCD_VAR_START(RegisterSS_Arg, reg_arg)CSMSS_ALLOC_SS_CODE
                                (reg_arg->ss_Code, L4_EMLPP)CSMSS_ALLOC_DPL
                                (reg_arg->defaultPriority)

            csmss_pack(MCD_REGISTERSS_ARG, (kal_uint8*)reg_arg, begin_req_ptr
                      ->facility.component[0]);

            //CSMSS_PACK(MCD_REGISTERSS_ARG, begin_req_ptr->facility.component[0]->invoke, reg_arg)
            CSMSS_DEALLOC_SS_CODE(reg_arg->ss_Code)CSMSS_DEALLOC_DPL(reg_arg
                                 ->defaultPriority)CSMSS_MCD_VAR_END(reg_arg)
        }
        break;

    case SS_OP_INTERROGATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, L4_EMLPP)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_MCD_VAR_END(bs_arg)
        }
        break;

    default:
        break;
    } // end of switch-case of op_code

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].ss_code = L4_EMLPP;
    csmss_g_ciss_tab[call_id].msg_id =
        MSG_ID_L4CCSM_CISS_EMLPP_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_cli_req(kal_uint8 src_id, kal_uint8
    ss_code)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;
    //kal_int32                         comp_param_len;
    kal_int8 call_id;
    kal_uint8 op_code = SS_OP_INTERROGATESS;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_interrogate_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_cli_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_cli_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_cli_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->ss_code = ss_code;
        msg_ptr->ss_status = 0;
        msg_ptr->clir_option = 3;
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
 #ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CLI_END_CNF, msg_ptr, NULL);        

        return SS_OPERATION;
    }

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    if (1)
    {
        CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE(bs_arg ->
                            ss_Code, ss_code)

        csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                   facility.component[0]);

        //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
        CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_MCD_VAR_END(bs_arg)
    }

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = SS_OP_INTERROGATESS;
    csmss_g_ciss_tab[call_id].ss_code = ss_code;
    csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_CLI_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_ccbs_req(kal_uint8 src_id, kal_uint8 op_code,
    kal_uint8 ccbs_index)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;
    //kal_int32                          comp_param_len;
    kal_int8 call_id;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_ccbs_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_ccbs_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_ptr = (l4ccsm_ciss_ccbs_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_ccbs_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id =src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        kal_mem_set(msg_ptr->ccbs_list, 0, 5 *sizeof(ccbs_list_struct));
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction  
#endif
 #ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_CCBS_END_CNF, msg_ptr, NULL);        

        return SS_OPERATION;
    }

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)

    switch (op_code)
    {
    case SS_OP_INTERROGATESS:
        {
            CSMSS_MCD_VAR_START(SS_ForBS_Code, bs_arg)CSMSS_ALLOC_SS_CODE
                                (bs_arg->ss_Code, L4_CCBS)

            csmss_pack(MCD_SS_FORBS_CODE, (kal_uint8*)bs_arg, begin_req_ptr ->
                       facility.component[0]);

            //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)
            CSMSS_DEALLOC_SS_CODE(bs_arg->ss_Code)CSMSS_MCD_VAR_END(bs_arg)
        }
        break;

    case SS_OP_ERASECCENTRY:
        {
            CSMSS_MCD_VAR_START(EraseCC_EntryArg, ccbs_arg)
            CSMSS_ALLOC_SS_CODE(ccbs_arg->ss_Code, L4_CCBS)
            /* Johnny: check ccbs_index != 0xff in MACRO */
            CSMSS_ALLOC_CCBS_INDEX(ccbs_arg->ccbs_Index)

            csmss_pack(MCD_ERASECC_ENTRYARG, (kal_uint8*)ccbs_arg,
                       begin_req_ptr->facility.component[0]);

            //CSMSS_PACK(MCD_ERASECC_ENTRYARG, begin_req_ptr->facility.component[0]->invoke, ccbs_arg)
            CSMSS_DEALLOC_SS_CODE(ccbs_arg->ss_Code)
            CSMSS_DEALLOC_CCBS_INDEX(ccbs_arg->ccbs_Index)
            CSMSS_MCD_VAR_END(ccbs_arg)
        }
        break;

    default:
        break;
    } // end of switch-case of op_code

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].ss_code = L4_CCBS;
    csmss_g_ciss_tab[call_id].msg_id =
        MSG_ID_L4CCSM_CISS_CCBS_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;

    return SS_OPERATION;
}


csmss_string_op_enum csmss_ss_exe_ussd_req(kal_uint8 src_id, kal_uint8
    *ussd_string, kal_uint8 ussd_len, kal_uint8 op_code)
{
    mnss_begin_req_struct *begin_req_ptr = NULL;
    //kal_int32                           comp_param_len;
    kal_int8 call_id;

    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;

    kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_ss_exe_ussd_req);

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    call_id = csmss_get_free_call_id(SS_ID_CISS_BASE);

    if (call_id ==  - 1)
    {
        l4ccsm_ciss_pussr_end_cnf_struct *msg_ptr = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

		msg_ptr = (l4ccsm_ciss_pussr_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_pussr_end_cnf_struct), TD_CTRL);

        msg_ptr->src_id = src_id;
        msg_ptr->return_code = L4_FAIL;
        msg_ptr->op_code = op_code;
        msg_ptr->ussd_dcs = 0;
        kal_mem_set(msg_ptr->ussd_string, 0, MAX_DIGITS_USSD);
        csmss_init_ss_return(&(msg_ptr->ss_return));
#ifdef __SAT__
        msg_ptr->ss_return.res = 0x20; //ME currently unable to process command
        msg_ptr->ss_return.size_of_additional_info = 1;
        msg_ptr->ss_return.additional_info[0] = 0x03; //ME currently busy on SS transaction
#endif
#ifdef WISDOM_MMI
/* under construction !*/
/* under construction !*/
#endif
#ifdef __CSMSS_CISS_USSD_SUPPORT_PARALLEL__
    	 msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
#endif//__CSMSS_CISS_USSD_SUPPORT_PARALLEL__
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_PUSSR_END_CNF, msg_ptr, NULL);        
        
		return SS_OPERATION;
    }

    /* keep in context */
    kal_mem_cpy(csmss_g_ussd_string, ussd_string, ussd_len);
    csmss_g_ussd_len = ussd_len;

    begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof
                     (mnss_begin_req_struct), TD_CTRL);

    kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

    begin_req_ptr->facility.num_of_components = 1;

    CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
                     CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr ->
                     facility.component[0]->invoke, Invoke)
                     CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]
                    ->invoke, CSMSS_MO_INVOKE_ID)CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->
                     facility.component[0]->invoke)CSMSS_FILL_OPCODE
                     (begin_req_ptr->facility.component[0]->invoke, op_code)
                     CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]
                    ->invoke, KAL_TRUE)
//MAUI_01988887
    smsal_decode_cbsdcs(csmss_g_ussd_dcs, &lang_type,
                        &alphabet_type, &mclass, &is_compress,
                        &is_reserved);

#ifdef __USSD_AUTO_REJECT__
    if (alphabet_type == SMSAL_RESERVED_DCS)
    {
        alphabet_type = SMSAL_DEFAULT_DCS;
    }
#endif

    if (op_code != SS_OP_PROCESSUNSTRUCTUREDSS_DATA)
    {
        CSMSS_MCD_VAR_START(USSD_Arg, ussd_arg)CSMSS_ALLOC_USSD_DCS(ussd_arg->ussd_DataCodingScheme)
        {
            /** 
             * MAUI_00372946
             * [SS][Revise][STK] STN-No envelope(call control) command in call control (send ussd)
             */
            if ((is_compress == KAL_FALSE) && (alphabet_type == SMSAL_DEFAULT_DCS))
            {
                CSMSS_ALLOC_USSD_STRING(ussd_arg->ussd_String, (kal_uint16)
                                        (ussd_len - ussd_len / 8))

                csmss_gsm7_pack((kal_uint8*)ussd_arg->ussd_String->octs,
                                ussd_string, ussd_len, 0);
            }
            else
            {
                CSMSS_ALLOC_USSD_STRING(ussd_arg->ussd_String, (kal_uint16)
                                        ussd_len)

                kal_mem_cpy((kal_uint8*)ussd_arg->ussd_String->octs,
                            ussd_string, ussd_len);
            }
        }

        csmss_pack(MCD_USSD_ARG, (kal_uint8*)ussd_arg, begin_req_ptr ->
                   facility.component[0]);

        //CSMSS_PACK(MCD_USSD_ARG, begin_req_ptr->facility.component[0]->invoke, ussd_arg)
        CSMSS_DEALLOC_USSD_DCS(ussd_arg->ussd_DataCodingScheme)
                               CSMSS_DEALLOC_USSD_STRING(ussd_arg ->
                               ussd_String)CSMSS_MCD_VAR_END(ussd_arg)
    }
    else
    {
        CSMSS_MCD_VAR_START(USSDIA5_String, ussd_ia5)
        {
            /** 
             * MAUI_00372946
             * [SS][Revise][STK] STN-No envelope(call control) command in call control (send ussd)
             */
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
        }

        CSMSS_ALLOC_USSDIA5(ussd_ia5, ussd_len)
        kal_mem_cpy((kal_uint8*)ussd_ia5->octs, ussd_string, ussd_len);

        csmss_pack(MCD_USSDIA5_STRING, (kal_uint8*)ussd_ia5, begin_req_ptr ->
                   facility.component[0]);

        //CSMSS_PACK(MCD_USSDIA5_STRING, begin_req_ptr->facility.component[0]->invoke, ussd_ia5)
        CSMSS_DEALLOC_USSDIA5(ussd_ia5)CSMSS_MCD_VAR_END(ussd_ia5)
    }

    //CSMSS_FILL_PARA(begin_req_ptr->facility.component[0]->invoke)

    begin_req_ptr->call_id = call_id;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

    csmss_mark_call_id(call_id);
    csmss_g_ciss_tab[call_id].op_code = op_code;
    csmss_g_ciss_tab[call_id].msg_id =
        MSG_ID_L4CCSM_CISS_PUSSR_BEGIN_REQ;
    csmss_g_ciss_tab[call_id].src_id = src_id; //MAUI_01988887
    csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
    csmss_g_call_id = call_id;
//MAUI_01988887
    return SS_OPERATION;
}


/*****************************************************************************
 * FUNCTION
 *  csmss_gsm7_unpack
 * DESCRIPTION
 *   This function unpacks the GSM 7-bit data.  For example,
 *   two packed GSM 7-bit data will be unpacked to the follows:
 *
 *  bit8                           bit1
 *   +-------------------------------+
 *   | 0 |    1st GSM 7-bit data     |
 *   +-------------------------------+
 *   | 0 |    2nd GSM 7-bit data     |
 *   +-------------------------------+
 *
 *
 * PARAMETERS
 *  a  IN          packed_data
 *  b  IN/OUT      unpacked_data
 *  c  IN          length of "unpacked" data
 *  d  IN          offset, indicate the starting position to unpack
 *
 *
 *
 * RETURNS
 *  none
 * GLOBALS AFFECTED
 *  none
 *****************************************************************************/
void csmss_gsm7_unpack(kal_uint8 *unpacked_data, kal_uint8 *packed_data,
                       kal_uint16 data_len, kal_uint16 offset)
{
    kal_uint8 prev_char;

    /* Before enter while-loop, there are two cases:
     *
     * (1) no padding:
     * +----+----------------------+
     * | 2g | 1a 1b 1c 1d 1e 1f 1g | <-- prev_char  (unpacked 1st octet)
     * +----+----------------------+
     * |                           | <-- packed_data
     * +---------------------------+
     * unpack 1st octet,  offset = 7
     *
     * (2) padding bit(s) presented, eg, 1 padding bit:
     * +-----------------------+---+
     * | 1a 1b 1c 1d 1e 1f 1g  | 0 | <-- prev_char
     * +-----------------------+---+
     * |                           | <-- packed_data
     * +---------------------------+
     * |                           |
     * +---------------------------+
     * offset = 1
     */

    ASSERT((data_len != 0) && (packed_data != NULL));

    prev_char =  *packed_data; //[MAUI_01984040] for Klocwork

    if (((data_len % 7) == 0) && ((packed_data[data_len - 1] & 0xfe) == 0x1A)) //23.038 6.1.2.3.1, padding <CR>
    {
        data_len = data_len + data_len / 7-1;
    }
    else
    {
        data_len = data_len + data_len / 7;
    }

    *unpacked_data =  *packed_data &0x7f;
    unpacked_data = unpacked_data + 1;
    offset = 7;
    data_len = data_len - 1;

    if (data_len == 0)
    {
        return ;
    }

    packed_data = packed_data + 1;

    while (data_len > 0)
    {
        if (offset == 0)
        {
            *unpacked_data = prev_char &0x7f;
            offset = 7;
        }
        else
        {
            *unpacked_data = prev_char >> offset;
            offset = offset - 1;
            if (offset > 0)
            {
                *unpacked_data =  *unpacked_data | (*packed_data
                    &csmss_bit_mask[offset]) << (7-offset);
            }
            prev_char =  *packed_data;
            packed_data = packed_data + 1;
        }
        unpacked_data = unpacked_data + 1;
        data_len = data_len - 1;

    } /* while */
    *unpacked_data = 0;
} /* end of csmss_gsm7_unpack */


/*****************************************************************************
 * FUNCTION
 *  csmss_gsm7_pack
 * DESCRIPTION
 *   This function packs the GSM 7-bit data.
 *
 * PARAMETERS
 *  a  IN          unpacked_data, pointer to input data
 *  b  IN/OUT      packed_data
 *  c  IN          length of unpacked data
 *  d  IN          offset, indicate the starting position to pack
 *
 *
 *                      |<--------   length ----------->|
 *                      +-------------------------------+
 *  unpacked_data --->  |                               |
 *                      +-------------------------------+
 *
 *
 *
 *                   -->| offset/8 bytes  |<--
 *                      | be skipped      |
 *                      +-----------------+-------+------+
 *  packed_data --->    |                 | OCTET*|  ... |
 *                      +-----------------+-------+------+
 *
 *
 * RETURNS
 *  none
 * GLOBALS AFFECTED
 *  none
 *****************************************************************************/
void csmss_gsm7_pack(kal_uint8 *packed_data, kal_uint8 *unpacked_data,
                     kal_uint16 data_len, kal_uint16 offset)
{
    ASSERT((data_len != 0) && (unpacked_data != NULL));

    if (offset > 0)
    {
        packed_data = packed_data + (offset / 8);
        offset = 8-(offset % 8);
        *packed_data = 0x00;
        //[MAUI_01983697] for Klocwork
        if (offset == 8)
            offset = 0;
    }

    do
    {
        if (offset == 0)
        {
            *packed_data =  *unpacked_data &csmss_bit_mask[offset];
        }
        else
        {
            *packed_data =  *packed_data | ((*unpacked_data
                &csmss_bit_mask[offset]) << (8-offset));

            packed_data = packed_data + 1;

            if (offset < 7)
            {
                *packed_data =  *unpacked_data >> offset;
            }
        }
        offset = (offset < 7) ? (offset + 1): 0;
        unpacked_data = unpacked_data + 1;
        data_len = data_len - 1;
    }

    while (data_len > 0);
    
    if (offset == 7) //23.038 6.1.2.3.1
    {
        *packed_data = *packed_data | 0x1A; //padding <CR>
    }    

} /* end of csmss_gsm7_pack */

void csmss_pack(kal_uint16 msgid, kal_uint8 *parameter, Component *comp)
{
    kal_uint32 packed_len;
    kal_uint8 *pun_buf;

    pun_buf = get_ctrl_buffer(256);
    packed_len = mcd_pack(msgid, (kal_uint32*)pun_buf, 256, parameter);
    packed_len = (packed_len + 0x7) >> 3;
    if (packed_len > 0)
    {

        if (comp->invokeOpt == KAL_TRUE)
        {
            comp->invoke->parameterOpt = KAL_TRUE;
            comp->invoke->parameterLen = (kal_uint8)packed_len;
            comp->invoke->parameter = get_ctrl_buffer((kal_uint16)
                packed_len);
            kal_mem_cpy(comp->invoke->parameter, pun_buf, packed_len);
        }
        else if (comp->returnResultLastOpt == KAL_TRUE)
        {
            comp->returnResultLast->parameterLen = (kal_uint8)packed_len;
            comp->returnResultLast->parameter = get_ctrl_buffer((kal_uint16)
                packed_len);
            kal_mem_cpy(comp->returnResultLast->parameter, pun_buf,
                        packed_len);
        }
    }
    free_ctrl_buffer(pun_buf);

}

