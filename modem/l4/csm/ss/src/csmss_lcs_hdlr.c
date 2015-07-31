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
 *	csmss_msg_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for handler of messages from L4C and SS.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#define CSMSS_LCS_HDLR_C

#ifdef __AGPS_CONTROL_PLANE__
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"       	/* Task message communiction */
#include "csmss_common_enums.h"
#include "l3_inc_enums.h"
#include "mcd_ss_tcapmessages.h"     /* ITU-T Q.773 */
#include "mnss_struct.h"
#include "csmss_context.h"
#include "kal_trace.h"
#include "csm_trc.h"
#include "csmss_aux_msg_hdlr.h"
#include "ss_asn.h"
#include "l4c2csm_ss_lcs_struct.h"
#include "kal_general_types.h"
#include "ciss_msgid.h"
#include "l4_msgid.h"
    
extern void ciss_component_dealloc(Component *comp);

typedef struct tSSAsnBuf
{
   kal_uint32   length;
   kal_uint8    *value;
}tSSAsnBuf;

#define SSPackObjectEncodePoolSize (1024)
/* encode buffer for ASN encode function */
static kal_uint8 SSTempEncodeBuff[SSPackObjectEncodePoolSize];


/*-----------------------------------
* The message handle from the L4C 
*-----------------------------------*/

// MT response

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_mtlr_end_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_mtlr_end_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_mtlr_end_rsp_struct *msg_ptr;

    kal_uint32  retCode;
    tSSAsnBuf   tempBuffer;

    kal_bool result = KAL_FALSE;
 
    msg_ptr = (l4ccsm_ciss_mtlr_end_rsp_struct*)local_para_ptr;
    

    /* set the data buffer pointer so that AsnRrcDbEncode will not allocate a new buffer */
    tempBuffer.value =  SSTempEncodeBuff;
    tempBuffer.length = 0;

    retCode = AsnEncode_SS2_LocationNotificationRes(&(msg_ptr->ssLocationNotificationRes),
                &(tempBuffer.value),
                &(tempBuffer.length),
                NULL);

    if(retCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_ENCODE_FAILED);

        return KAL_FALSE;
    }
    else
    {
        mnss_end_req_struct *end_req_ptr;

        end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof(mnss_end_req_struct), TD_CTRL);

        kal_mem_set(&(end_req_ptr->facility), 0, sizeof(mnss_facility_struct));

        end_req_ptr->causeP = KAL_FALSE;
        end_req_ptr->facilityP = KAL_TRUE;
        end_req_ptr->facility.num_of_components = 1;

        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
        #ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
        csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);		
	 #else
        csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE);		
	#endif

        CSMSS_ALLOC_COMP(end_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(end_req_ptr ->facility.component[0]->returnResultLast, ReturnResult)
        CSMSS_FILL_RESULTOPT(end_req_ptr->facility.component[0]->returnResultLast, KAL_TRUE)
        
        CSMSS_FILL_INVOKEID(end_req_ptr->facility.component[0]->returnResultLast,
            csmss_g_ciss_tab[csmss_g_call_id].invoke_id)

        //CSMSS_FILL_OPCODE(end_req_ptr->facility.component[0]->returnResultLast, csmss_g_ciss_tab[csmss_g_call_id].op_code)
//        CSMSS_FILL_PARAOPT(end_req_ptr->facility.component[0]->returnResultLast, KAL_TRUE)


        CSMSS_FILL_OPCODE(end_req_ptr->facility.component[0]->returnResultLast, SS_OP_LCS_LOCATIONNOTIFICATION)

        end_req_ptr->facility.component[0]->returnResultLast->parameter = get_ctrl_buffer (tempBuffer.length);
        end_req_ptr->facility.component[0]->returnResultLast->parameterLen = tempBuffer.length;

        kal_mem_cpy(end_req_ptr->facility.component[0]->returnResultLast->parameter, tempBuffer.value, tempBuffer.length);

        //CSMSS_PACK(MCD_SS_FORBS_CODE, begin_req_ptr->facility.component[0]->invoke, bs_arg)

        end_req_ptr->call_id = csmss_g_call_id;
        end_req_ptr->ti = csmss_g_ciss_tab[end_req_ptr->call_id].ti;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

	//MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
	//csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
	//If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
	//It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
	//Therefore, we have to check the index before to clear context.
	//The same problem will also happen for facility response procedure.
	if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[csmss_g_call_id].state = CSMSS_NULL_STATE;

        csmss_free_call_id(csmss_g_call_id);
	}
       else{
    	   kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
       }

        return KAL_TRUE;
    }

    //   csmss_free_call_id(csmss_g_call_id);
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_lcs_fill_end_cnf_error_cause
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  end indication message and fill the error cause
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
void csmss_ss_lcs_fill_end_cnf_error_cause(l4ccsm_ciss_molr_end_cnf_struct *msg_ptr,
                                           mnss_end_ind_struct *end_ind_ptr)
{
    if (end_ind_ptr->facilityP == KAL_TRUE)
    {
        if (end_ind_ptr->facility.component[0]->invokeOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnResultLastOpt == KAL_TRUE){}
        else if (end_ind_ptr->facility.component[0]->returnErrorOpt == KAL_TRUE)
        {
            //msg_ptr->return_code = L4_FAIL;
            //return_error_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
            if (end_ind_ptr->facility.component[0]->returnError->localValueOpt == KAL_TRUE)
            {
                msg_ptr->cause_present = KAL_TRUE;
                msg_ptr->cause = CM_SS_ERR_START +
                    end_ind_ptr->facility.component[0]->returnError->localValue;
            } /* end of error code are localvalue */
        }
        else if (end_ind_ptr->facility.component[0]->rejectOpt == KAL_TRUE)
        {
            //msg_ptr->return_code = L4_FAIL;
            //reject_component_handler(&(msg_ptr->ss_return), end_ind_ptr);
            msg_ptr->cause_present = KAL_TRUE;

            if (end_ind_ptr->facility.component[0]->reject->generalProblemOpt == KAL_TRUE)
            {
                msg_ptr->cause = CM_SS_GENERALPROBLEM_START +
                    end_ind_ptr->facility.component[0]->reject->generalProblem->value;
            }
            else if (end_ind_ptr->facility.component[0]->reject->invokeProblemOpt == KAL_TRUE)
            {
                msg_ptr->cause = CM_SS_INVOKEPROBLEM_START +
                    end_ind_ptr->facility.component[0]->reject->invokeProblem->value;
            }
            else if (end_ind_ptr->facility.component[0]->reject->returnResultProblemOpt == KAL_TRUE)
            {
                msg_ptr->cause = CM_SS_RETURNRESULTPROBLEM_START + 
                    end_ind_ptr->facility.component[0]->reject->returnResultProblem->value;
            }
            else if (end_ind_ptr->facility.component[0]->reject->returnErrorProblemOpt == KAL_TRUE)
            {
                msg_ptr->cause = CM_SS_RETURNERRORPROBLEM_START + 
                    end_ind_ptr->facility.component[0]->reject->returnErrorProblem->value;
            }
            else
            {
                msg_ptr->cause_present = KAL_FALSE;
            }
        }

        //if (end_ind_ptr->facility.component[0] != NULL)
        //{
        //    ciss_component_dealloc(end_ind_ptr->facility.component[0]);
        //}
    }

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if (end_ind_ptr->causeP == KAL_TRUE)
    {
        //      msg_ptr->return_code = L4_FAIL;
        msg_ptr->cause_present = KAL_TRUE;
        if (end_ind_ptr->facilityP != KAL_TRUE)
        {
            msg_ptr->cause = end_ind_ptr->cause.cause_value;
        }
    } /* end if causeP */
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_lcs_aerp_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  aerp end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ss_lcs_aerp_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_aerp_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    //kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_emlpp_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_aerp_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_aerp_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    //msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code;
    //csmss_init_ss_return(&(msg_ptr->ss_return));

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];

    if ((end_ind_ptr->facilityP == KAL_TRUE) &&
        (end_ind_ptr->facility.component[0] != NULL))
    {
        ciss_component_dealloc(end_ind_ptr->facility.component[0]);
       
    } /* end if facilityP */

    csmss_ss_lcs_fill_end_cnf_error_cause(msg_ptr,end_ind_ptr);
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

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AERP_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_lcs_molr_end_cnf_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  molr end indication message.
 *
 * PARAMETERS
 *  end_ind_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_ss_lcs_molr_end_cnf_hdlr(mnss_end_ind_struct *end_ind_ptr)
{
    l4ccsm_ciss_molr_end_cnf_struct *msg_ptr = NULL;
    //kal_uint32 invoke_id;
    //kal_uint8 component_count;
    //kal_uint32 ret_val;

    //kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_emlpp_end_cnf_hdlr);

    msg_ptr = (l4ccsm_ciss_molr_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_molr_end_cnf_struct), TD_CTRL);

    msg_ptr->src_id = csmss_g_ciss_tab[end_ind_ptr->call_id].src_id;
    msg_ptr->return_code = L4_FAIL;
    //msg_ptr->op_code = csmss_g_ciss_tab[end_ind_ptr ->call_id].op_code;
    //csmss_init_ss_return(&(msg_ptr->ss_return));

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    msg_ptr->ss_id = csmss_g_ss_id_pool[end_ind_ptr->call_id];

    csmss_ss_lcs_fill_end_cnf_error_cause(msg_ptr,end_ind_ptr);

    if ((end_ind_ptr->facilityP == KAL_TRUE) &&
        (end_ind_ptr->facility.component[0] != NULL))
    {
        ciss_component_dealloc(end_ind_ptr->facility.component[0]);
       
    } /* end if facilityP */

    csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MOLR_END_CNF, msg_ptr, NULL);
    //   csmss_ptr_g->ussd_resend = KAL_FALSE;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_aerq_end_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_lcs_end_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_lcs_end_req_struct *msg_ptr = NULL;
    mnss_end_req_struct *end_req_ptr = NULL;

    //kal_brief_trace(TRACE_FUNC, FN_ENTRY_csmss_end_res_hdlr);

    msg_ptr = (l4ccsm_ciss_lcs_end_req_struct*)local_para_ptr;

    end_req_ptr = (mnss_end_req_struct*)construct_local_para(sizeof
                   (mnss_end_req_struct), TD_CTRL);

    kal_mem_set(&(end_req_ptr->cause), 0, sizeof(mnss_cause_struct));
    kal_mem_set(&(end_req_ptr->facility), 0, sizeof(mnss_facility_struct));
    end_req_ptr->facilityP = KAL_FALSE;

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    #ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
    csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);		
    #else
    csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE);		
    #endif

    //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
    csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;
    end_req_ptr->call_id = csmss_g_call_id;
    end_req_ptr->ti = csmss_g_ciss_tab[end_req_ptr->call_id].ti;

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
#endif

    if (msg_ptr->cause_value == 0)
    {
        end_req_ptr->causeP = KAL_FALSE;
    }
    else
    {
        end_req_ptr->causeP = KAL_TRUE;
        end_req_ptr->cause.cause_value = msg_ptr->cause_value;
        end_req_ptr->cause.diagnostics_length = 0;
    }
//    end_req_ptr->facilityP = KAL_FALSE;

    csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_END_REQ, end_req_ptr, NULL);

    //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
    //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
    //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
    //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
    //Therefore, we have to check the index before to clear context.
    //The same problem will also happen for facility response procedure.
    if(csmss_g_call_id<MMI_CS_MAX_CALLS){
        csmss_g_ciss_tab[csmss_g_call_id].state = CSMSS_NULL_STATE;
        csmss_free_call_id(csmss_g_call_id);
    }
    else{
    	   kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
    }
    return KAL_TRUE;
}

// MO request
/*****************************************************************************
 * FUNCTION
 *  csmss_ss_aerp_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_aerp_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_aerp_req_struct *msg_ptr;// = NULL;

    kal_uint32  retCode;
    tSSAsnBuf   tempBuffer;

    kal_int8 call_id = 0;

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    msg_ptr = (l4ccsm_ciss_aerp_req_struct*)local_para_ptr;
    #ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
    call_id = csmss_get_free_call_id(msg_ptr->ss_id);
    #else
    call_id  = csmss_get_free_call_id(SS_ID_CISS_BASE);		
    #endif
    if (call_id ==  - 1)
    {
        l4ccsm_ciss_aerp_end_cnf_struct *msg_p = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_p = (l4ccsm_ciss_aerp_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_aerp_end_cnf_struct), TD_CTRL);

        msg_p->src_id = msg_ptr->src_id;
        msg_p->return_code = L4_FAIL;
        msg_p->cause_present = KAL_FALSE;
        msg_p->cause = 0;
        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
        msg_p->ss_id = msg_ptr->ss_id;
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AERP_END_CNF, msg_p, NULL);        
        return KAL_FALSE;
    }

    

    /* set the data buffer pointer so that AsnRrcDbEncode will not allocate a new buffer */
    tempBuffer.value =  SSTempEncodeBuff;
    tempBuffer.length = 0;

    retCode = AsnEncode_SS2_LCS_AreaEventReportArg(&(msg_ptr->ssLCSAreaEventReportArg),
                &(tempBuffer.value),
                &(tempBuffer.length),
                NULL);


    if(retCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_ENCODE_FAILED);

        return KAL_FALSE;
    }
    else
    {
        mnss_begin_req_struct *begin_req_ptr;

        begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof(mnss_begin_req_struct), TD_CTRL);

        kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

        begin_req_ptr->facility.num_of_components = 1;

        CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr->facility.component[0]->invoke, Invoke)

        CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]->invoke, CSMSS_MO_INVOKE_ID)
        CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->facility.component[0]->invoke)
        CSMSS_FILL_OPCODE(begin_req_ptr->facility.component[0]->invoke, SS_OP_LCS_AREA_EVENT_REPORT)
        CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]->invoke, KAL_TRUE)
    
        begin_req_ptr->facility.component[0]->invoke->parameter = get_ctrl_buffer (tempBuffer.length);
        begin_req_ptr->facility.component[0]->invoke->parameterLen = tempBuffer.length;

        kal_mem_cpy(begin_req_ptr->facility.component[0]->invoke->parameter, tempBuffer.value, tempBuffer.length);

        begin_req_ptr->call_id = call_id;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

        csmss_mark_call_id(call_id);
        csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_AREA_EVENT_REPORT;

        csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_AERP_REQ;
        csmss_g_ciss_tab[call_id].src_id = msg_ptr->src_id; //MAUI_01988887
        csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
        csmss_g_call_id = call_id;
        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
        csmss_g_ss_id_pool[call_id] = msg_ptr->ss_id;

        return KAL_TRUE;
    }
}

//
//
/*****************************************************************************
 * FUNCTION
 *  csmss_ss_molr_req_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_molr_req_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_molr_req_struct *msg_ptr;

    kal_uint32  retCode;
    tSSAsnBuf   tempBuffer;

    kal_int8 call_id = 0;

    //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
    msg_ptr = (l4ccsm_ciss_molr_req_struct*)local_para_ptr;
    #ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
    call_id = csmss_get_free_call_id(msg_ptr->ss_id);
    #else
    call_id  = csmss_get_free_call_id(SS_ID_CISS_BASE);		
    #endif
    if (call_id ==  - 1)
    {
        l4ccsm_ciss_molr_end_cnf_struct *msg_p = NULL;

        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

        msg_p = (l4ccsm_ciss_molr_end_cnf_struct*)construct_local_para(sizeof
               (l4ccsm_ciss_molr_end_cnf_struct), TD_CTRL);

        msg_p->src_id = msg_ptr->src_id;
        msg_p->return_code = L4_FAIL;
        msg_p->cause_present = KAL_FALSE;
        msg_p->cause = 0;
	 //for parallel SS
        msg_p->ss_id = msg_ptr->ss_id;
        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MOLR_END_CNF, msg_p, NULL);        
        return KAL_FALSE;
    }


    /* set the data buffer pointer so that AsnRrcDbEncode will not allocate a new buffer */
    tempBuffer.value =  SSTempEncodeBuff;
    tempBuffer.length = 0;

    retCode = AsnEncode_SS2_LCS_MOLRArg(&(msg_ptr->ssLCSMOLRArg),
                &(tempBuffer.value),
                &(tempBuffer.length),
                NULL);

    if(retCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_ENCODE_FAILED);

        return KAL_FALSE;
    }
    else
    {
        mnss_begin_req_struct *begin_req_ptr;

        begin_req_ptr = (mnss_begin_req_struct*)construct_local_para(sizeof(mnss_begin_req_struct), TD_CTRL);

        kal_mem_set(&(begin_req_ptr->facility), 0, sizeof(mnss_facility_struct));

        begin_req_ptr->facility.num_of_components = 1;

        CSMSS_ALLOC_COMP(begin_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(begin_req_ptr->facility.component[0]->invoke, Invoke)

        CSMSS_FILL_INVOKEID(begin_req_ptr->facility.component[0]->invoke, CSMSS_MO_INVOKE_ID)
        CSMSS_FILL_LINEDID_NOT(begin_req_ptr ->facility.component[0]->invoke)
        CSMSS_FILL_OPCODE(begin_req_ptr->facility.component[0]->invoke, SS_OP_LCS_MOLR)
        CSMSS_FILL_PARAOPT(begin_req_ptr->facility.component[0]->invoke, KAL_TRUE)
    
        begin_req_ptr->facility.component[0]->invoke->parameter = get_ctrl_buffer (tempBuffer.length);
        begin_req_ptr->facility.component[0]->invoke->parameterLen = tempBuffer.length;

        kal_mem_cpy(begin_req_ptr->facility.component[0]->invoke->parameter, tempBuffer.value, tempBuffer.length);

        begin_req_ptr->call_id = call_id;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_BEGIN_REQ, begin_req_ptr, NULL);

        csmss_mark_call_id(call_id);
        csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_MOLR;

        csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_MOLR_REQ;
        csmss_g_ciss_tab[call_id].src_id = msg_ptr->src_id; //MAUI_01988887
        csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_NW_STATE;
        csmss_g_call_id = call_id;
        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
        csmss_g_ss_id_pool[call_id] = msg_ptr->ss_id;

        return KAL_TRUE;
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_aerp_fac_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_aerp_fac_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_aerp_fac_res_struct *msg_ptr = NULL;

    kal_uint32  retCode;
    tSSAsnBuf   tempBuffer;

    msg_ptr = (l4ccsm_ciss_aerp_fac_res_struct*)local_para_ptr;

    /* set the data buffer pointer so that AsnRrcDbEncode will not allocate a new buffer */
    tempBuffer.value =  SSTempEncodeBuff;
    tempBuffer.length = 0;

    retCode = AsnEncode_SS2_LCS_AreaEventReportArg(&(msg_ptr->ssLCSAreaEventReportArg),
                &(tempBuffer.value),
                &(tempBuffer.length),
                NULL);

    if(retCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_ENCODE_FAILED);

        return KAL_FALSE;
    }
    else
    {
        mnss_fac_req_struct *fac_req_ptr = NULL;

        fac_req_ptr = (mnss_fac_req_struct*)construct_local_para(sizeof
                       (mnss_fac_req_struct), TD_CTRL);

        kal_mem_set(&(fac_req_ptr->facility), 0, sizeof(mnss_facility_struct));

        fac_req_ptr->facility.num_of_components = 1;
        
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
        CSMSS_ALLOC_COMP(fac_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(fac_req_ptr->facility.component[0]->invoke, Invoke)

        // since there is no fac_ind will bring invoke id.
        CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]->invoke, CSMSS_MO_INVOKE_ID)
        //CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]->invoke,
        //                    csmss_g_ciss_tab[csmss_g_call_id].invoke_id)

        CSMSS_FILL_LINEDID_NOT(fac_req_ptr ->facility.component[0]->invoke)
        CSMSS_FILL_OPCODE(fac_req_ptr->facility.component[0]->invoke, SS_OP_LCS_AREA_EVENT_REPORT)
        CSMSS_FILL_PARAOPT(fac_req_ptr->facility.component[0]->invoke, KAL_TRUE)
    
        fac_req_ptr->facility.component[0]->invoke->parameter = get_ctrl_buffer (tempBuffer.length);
        fac_req_ptr->facility.component[0]->invoke->parameterLen = tempBuffer.length;

        kal_mem_cpy(fac_req_ptr->facility.component[0]->invoke->parameter, tempBuffer.value, tempBuffer.length);

        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
	#ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
	csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);
	#else
	csmss_g_call_id = csmss_find_used_call_id(SS_ID_CISS_BASE);		
	#endif
	 if (csmss_g_call_id ==  - 1)
	 {
	        l4ccsm_ciss_aerp_end_cnf_struct *msg_p = NULL;
	        msg_p = (l4ccsm_ciss_aerp_end_cnf_struct*)construct_local_para(sizeof
	               (l4ccsm_ciss_aerp_end_cnf_struct), TD_CTRL);

	        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

	        msg_p->src_id = msg_ptr->src_id;
	        msg_p->return_code = L4_FAIL;
	        msg_p->cause_present = KAL_FALSE;
	        msg_p->cause = 0;
		 //for parallel SS
	        msg_p->ss_id = msg_ptr->ss_id;
	        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AERP_END_CNF, msg_p, NULL);        
	        return KAL_FALSE;
	 }
        //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
        csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;

        fac_req_ptr->call_id = csmss_g_call_id;
        fac_req_ptr->ti = csmss_g_ciss_tab[fac_req_ptr->call_id].ti;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_FAC_REQ, fac_req_ptr, NULL);

        //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
        //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
        //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
        //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
        //Therefore, we have to check the index before to clear context.
        //The same problem will also happen for facility response procedure.
        if(csmss_g_call_id<MMI_CS_MAX_CALLS){
            csmss_g_ciss_tab[csmss_g_call_id].state =  CSMSS_WAIT_FOR_NW_STATE;
        }
        else{
            kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
        }
    }

    //csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_AREA_EVENT_REPORT;
    //op_code, msg_id shall keep the same

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  csmss_ss_molr_fac_hdlr
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  a ss parse request from L4C if user enter from local MMI.
 *  There are 3 possiblitlies when CSMSS get this
 *  1) SS (USSD) string
 *  2) CC string
 *  3) PDP (GPRS) activities
 *  If case 1, related operation will be invoked.
 *  else the received string will be sent back to L4C with an operaiton enum.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/
kal_bool csmss_ss_molr_fac_hdlr(local_para_struct *local_para_ptr)
{
    l4ccsm_ciss_molr_fac_res_struct *msg_ptr = NULL;

    kal_uint32  retCode;
    tSSAsnBuf   tempBuffer;

    msg_ptr = (l4ccsm_ciss_molr_fac_res_struct*)local_para_ptr;

    /* set the data buffer pointer so that AsnRrcDbEncode will not allocate a new buffer */
    tempBuffer.value =  SSTempEncodeBuff;
    tempBuffer.length = 0;

    retCode = AsnEncode_SS2_LCS_MOLRArg(&(msg_ptr->ssLCSMOLRArg),
                                        &(tempBuffer.value),
                                        &(tempBuffer.length),
                                        NULL);

    if(retCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_ENCODE_FAILED);

        return KAL_FALSE;
    }
    else
    {
        mnss_fac_req_struct *fac_req_ptr = NULL;

        fac_req_ptr = (mnss_fac_req_struct*)construct_local_para(sizeof
                       (mnss_fac_req_struct), TD_CTRL);

        kal_mem_set(&(fac_req_ptr->facility), 0, sizeof(mnss_facility_struct));

        fac_req_ptr->facility.num_of_components = 1;

        CSMSS_ALLOC_COMP(fac_req_ptr->facility.component[0])
        CSMSS_ALLOC_COMPSTRUCT(fac_req_ptr->facility.component[0]->invoke, Invoke)

        // since there is no fac_ind will bring invoke id.
        CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]->invoke, CSMSS_MO_INVOKE_ID)
        //CSMSS_FILL_INVOKEID(fac_req_ptr->facility.component[0]->invoke,
        //                    csmss_g_ciss_tab[csmss_g_call_id].invoke_id)

        CSMSS_FILL_LINEDID_NOT(fac_req_ptr ->facility.component[0]->invoke)
        CSMSS_FILL_OPCODE(fac_req_ptr->facility.component[0]->invoke, SS_OP_LCS_MOLR)
        CSMSS_FILL_PARAOPT(fac_req_ptr->facility.component[0]->invoke, KAL_TRUE)
    
        fac_req_ptr->facility.component[0]->invoke->parameter = get_ctrl_buffer (tempBuffer.length);
        fac_req_ptr->facility.component[0]->invoke->parameterLen = tempBuffer.length;

        kal_mem_cpy(fac_req_ptr->facility.component[0]->invoke->parameter, tempBuffer.value, tempBuffer.length);

        //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
	#ifdef __CSMSS_AGPS_SUPPORT_PARALLEL__
	csmss_g_call_id = csmss_find_used_call_id(msg_ptr->ss_id);
	#else
	csmss_g_call_id  = csmss_find_used_call_id(SS_ID_CISS_BASE);		
	#endif
	 if (csmss_g_call_id ==  - 1)
	 {
	        l4ccsm_ciss_molr_end_cnf_struct *msg_p = NULL;

	        kal_brief_trace(TRACE_ERROR, CSMSS_ERR_NO_FREE_CALL_ID_IN_POOL);

	        msg_p = (l4ccsm_ciss_molr_end_cnf_struct*)construct_local_para(sizeof
	               (l4ccsm_ciss_molr_end_cnf_struct), TD_CTRL);

	        msg_p->src_id = msg_ptr->src_id;
	        msg_p->return_code = L4_FAIL;
	        msg_p->cause_present = KAL_FALSE;
	        msg_p->cause = 0;
		 //for parallel SS
	        msg_p->ss_id = msg_ptr->ss_id;
	        csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MOLR_END_CNF, msg_p, NULL);        
	        return KAL_FALSE;
	 }
        //MAUI_03097639, [SS][Change Feature]MT SS piggy back src_id for L4 multi channel
        csmss_g_ciss_tab[csmss_g_call_id].src_id = msg_ptr->src_id;

        fac_req_ptr->call_id = csmss_g_call_id;
        fac_req_ptr->ti = csmss_g_ciss_tab[fac_req_ptr->call_id].ti;

        csmss_send_ilm(MOD_CISS, MSG_ID_MNSS_FAC_REQ, fac_req_ptr, NULL);

        //MAUI_02318798, [MT6276_EVB_SZ_FT_Static] Fatal Error:(431,0) - L4
        //csmss_g_call_id will be initialied to 255 when NW reject the PUSSR req.
        //If user pressed end key at the same time, L4 sent MSG_ID_L4CCSM_CISS_END_RES to CSM.
        //It will cause memory corruption beacuse CSM uses the initialied index which is out of context range.
        //Therefore, we have to check the index before to clear context.
        //The same problem will also happen for facility response procedure.
        if(csmss_g_call_id<MMI_CS_MAX_CALLS){
            csmss_g_ciss_tab[csmss_g_call_id].state = CSMSS_WAIT_FOR_NW_STATE;
        }
        else{
            kal_brief_trace(TRACE_INFO, CSMSS_D, csmss_g_call_id);
        }
        //csmss_g_ciss_tab[csmss_g_call_id].state =
        //    CSMSS_WAIT_FOR_NW_STATE;

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
        #endif
        //   csmss_free_call_id(csmss_g_call_id);
    }
    return KAL_TRUE;
}

/*-----------------------------------
 * The message handle from the L4C 
 *-----------------------------------*/

kal_bool csmss_lcs_l4c_entry_func(ilm_struct *ilm_ptr)
{
    kal_bool result = KAL_FALSE;
 
    switch (ilm_ptr->msg_id)
    {
        case MSG_ID_L4CCSM_CISS_MTLR_END_RSP:
            result = csmss_ss_mtlr_end_hdlr(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CCSM_CISS_AERP_REQ:
            result = csmss_ss_aerp_req_hdlr(ilm_ptr->local_para_ptr);
            break;
        case MSG_ID_L4CCSM_CISS_MOLR_REQ:
            result = csmss_ss_molr_req_hdlr(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CCSM_CISS_AERP_FAC_RES:
            result = csmss_ss_aerp_fac_hdlr(ilm_ptr->local_para_ptr);
            break;
        case MSG_ID_L4CCSM_CISS_MOLR_FAC_RES:
            result = csmss_ss_molr_fac_hdlr(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_L4CCSM_CISS_AERQ_END_RSP:
        case MSG_ID_L4CCSM_CISS_AERP_END_REQ:
        case MSG_ID_L4CCSM_CISS_AECL_END_RSP:
        case MSG_ID_L4CCSM_CISS_MOLR_END_REQ:
            result = csmss_ss_lcs_end_hdlr(ilm_ptr->local_para_ptr);
            break;
        default:
            ASSERT(KAL_FALSE);
            /* LOG ERROR */
            break;
    } /* switch (msg_id) */

    return result;
}





//SSAGPS
/*-----------------------------------
 * The message handle from the CISS
 *-----------------------------------*/

/*****************************************************************************
 * FUNCTION
 *  csmss_lcs_begin_ind_entry_func
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  begin indication message.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_lcs_begin_ind_entry_func(kal_uint8 call_id, kal_uint32 lcs_op, kal_uint8 *src, kal_uint32 total_bits)
{
    kal_uint32              asnRetCode;
    void*                   genericMsgPtr = NULL;

    switch (lcs_op)
    {
        case SS_OP_LCS_LOCATIONNOTIFICATION:
        {
            l4ccsm_ciss_mtlr_begin_ind_struct *msg_ptr = NULL;

            msg_ptr = (l4ccsm_ciss_mtlr_begin_ind_struct*)
                       construct_local_para(sizeof(l4ccsm_ciss_mtlr_begin_ind_struct), TD_CTRL);

            /** 
             * The AsnDecode function returns 0 if success, > 0 otherwise. 
             * Returned length is in bits. 
             */
            asnRetCode = AsnDecode_SS2_LocationNotificationArg((SS2_LocationNotificationArg **)&genericMsgPtr,
                                                              src,
                                                              &total_bits,
                                                              NULL, NULL);
            //MAUI_02867580, [11A][AGPS CP] SS applib2_asn_memory.c 69 memory leak
            //Need to free the ASN memory after using it.
            if (!asnRetCode)
            {
                kal_mem_cpy(&(msg_ptr->ssLocationNotificationArg),
                            (SS2_LocationNotificationArg**)genericMsgPtr,
                            sizeof(SS2_LocationNotificationArg));

                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MTLR_BEGIN_IND, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_MTLR_BEGIN_IND;
                csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_LOCATIONNOTIFICATION;
                csmss_g_call_id = call_id;

            }
        }
        break;

        case SS_OP_LCS_AREA_EVENT_REQUEST:
        {
            l4ccsm_ciss_aerq_begin_ind_struct *msg_ptr = NULL;

            msg_ptr = (l4ccsm_ciss_aerq_begin_ind_struct*)
                       construct_local_para(sizeof(l4ccsm_ciss_aerq_begin_ind_struct), TD_CTRL);

            /** 
             * The AsnDecode function returns 0 if success, > 0 otherwise. 
             * Returned length is in bits. 
             */
            asnRetCode = AsnDecode_SS2_LCS_AreaEventRequestArg((SS2_LCS_AreaEventRequestArg **)&genericMsgPtr,
                                                               src,
                                                               &total_bits,
                                                               NULL, NULL);
            //MAUI_02867580, [11A][AGPS CP] SS applib2_asn_memory.c 69 memory leak
            //Need to free the ASN memory after using it.
            if (!asnRetCode)
            {
                kal_mem_cpy(&(msg_ptr->ssLCSAreaEventRequestArg),
                            (SS2_LCS_AreaEventRequestArg**)genericMsgPtr,
                            sizeof(SS2_LCS_AreaEventRequestArg));

                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AERQ_BEGIN_IND, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_AERQ_BEGIN_IND;
                csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_AREA_EVENT_REQUEST;
                csmss_g_call_id = call_id;

            }
        }
        break;

        case SS_OP_LCS_AREA_EVENT_CANCELLATION:
        {
            l4ccsm_ciss_aecl_begin_ind_struct *msg_ptr = NULL;

            msg_ptr = (l4ccsm_ciss_aecl_begin_ind_struct*)
                       construct_local_para(sizeof(l4ccsm_ciss_aecl_begin_ind_struct), TD_CTRL);

            /** 
             * The AsnDecode function returns 0 if success, > 0 otherwise. 
             * Returned length is in bits. 
             */
            asnRetCode = AsnDecode_SS2_LCS_AreaEventCancellationArg((SS2_LCS_AreaEventCancellationArg **)&genericMsgPtr,
                                                                    src,
                                                                    &total_bits,
                                                                    NULL, NULL);
            //MAUI_02867580, [11A][AGPS CP] SS applib2_asn_memory.c 69 memory leak
            //Need to free the ASN memory after using it.
            if (!asnRetCode)
            {
                kal_mem_cpy(&(msg_ptr->ssLCSAreaEventCancellationArg),
                            (SS2_LCS_AreaEventCancellationArg**)genericMsgPtr,
                            sizeof(SS2_LCS_AreaEventCancellationArg));

                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AECL_BEGIN_IND, msg_ptr, NULL);

                csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_AECL_BEGIN_IND;
                csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_ciss_tab[call_id].op_code = SS_OP_LCS_AREA_EVENT_CANCELLATION;
                csmss_g_call_id = call_id;

            }
        }
        break;

        default:
        {
            return KAL_FALSE;
        }
    }
	
    if (asnRetCode)
    {
        kal_brief_trace(TRACE_ERROR, CSMSS_LCS_DISCARD_DECODE_FAILED);
        return KAL_FALSE;
    }
    else
    {
        //MAUI_02867580, [11A][AGPS CP] SS applib2_asn_memory.c 69 memory leak
        //Need to free the ASN memory after using it.
        applib2_AsnFreeDecoded(genericMsgPtr, NULL);
        return KAL_TRUE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  csmss_lcs_fac_ind_entry_func
 * DESCRIPTION
 *  This procedure is called whenever the CSM module receives
 *  end indication message.
 *
 * PARAMETERS
 *  local_para_ptr  IN
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_lcs_fac_ind_entry_func(kal_uint8 call_id, kal_uint32 lcs_op, kal_uint8 *src, kal_uint32 total_bits)
{
    kal_uint32              asnRetCode;
    void*                   genericMsgPtr = NULL;

    switch (lcs_op)
    {
        case SS_OP_LCS_AREA_EVENT_REPORT:
        {
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                l4ccsm_ciss_aerp_fac_ind_struct *msg_ptr = NULL;
                msg_ptr = (l4ccsm_ciss_aerp_fac_ind_struct*)
                construct_local_para(sizeof(l4ccsm_ciss_aerp_fac_ind_struct), TD_CTRL);
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_AERP_FAC_IND, msg_ptr, NULL);

                //csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_AERP_FAC_IND;
                //csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_call_id = call_id;
        }
        break;

        case SS_OP_LCS_MOLR:
        {
            l4ccsm_ciss_molr_fac_ind_struct *msg_ptr = NULL;

            msg_ptr = (l4ccsm_ciss_molr_fac_ind_struct*)
                       construct_local_para(sizeof(l4ccsm_ciss_molr_fac_ind_struct), TD_CTRL);


            //MAUI_02885047, deal with the NULL Operation Code
            if(total_bits==0){
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                msg_ptr->ssLCSMOLRRes.validity = 0;
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MOLR_FAC_IND, msg_ptr, NULL);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_call_id = call_id;
                return KAL_TRUE;
            }

            /** 
             * The AsnDecode function returns 0 if success, > 0 otherwise. 
             * Returned length is in bits. 
             */
            asnRetCode = AsnDecode_SS2_LCS_MOLRRes((SS2_LCS_MOLRRes **)&genericMsgPtr,
                                                   src,
                                                   &total_bits,
                                                   NULL, NULL);

            if (asnRetCode)
            {
                genericMsgPtr = NULL;
                kal_brief_trace(TRACE_ERROR, CSMSS_LCS_DISCARD_DECODE_FAILED);

                return KAL_FALSE;
            }
            else
            {
                kal_mem_cpy(&(msg_ptr->ssLCSMOLRRes),
                            (SS2_LCS_MOLRRes**)genericMsgPtr,
                            sizeof(SS2_LCS_MOLRRes));
                //MAUI_02867580, [11A][AGPS CP] SS applib2_asn_memory.c 69 memory leak
                //Need to free the ASN memory after using it.
                applib2_AsnFreeDecoded(genericMsgPtr, NULL);
                //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
                msg_ptr->ss_id = csmss_g_ss_id_pool[call_id];
                csmss_send_ilm(MOD_L4C, MSG_ID_L4CCSM_CISS_MOLR_FAC_IND, msg_ptr, NULL);

                //csmss_g_ciss_tab[call_id].msg_id = MSG_ID_L4CCSM_CISS_MOLR_FAC_IND;
                //csmss_mark_call_id(call_id);
                csmss_g_ciss_tab[call_id].state = CSMSS_WAIT_FOR_SUB_STATE;
                csmss_g_call_id = call_id;
            }
        }
        break;

        default:
        {
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}

#endif
