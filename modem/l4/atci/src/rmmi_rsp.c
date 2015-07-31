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
 * RMMI_RSP.C
 *
 * Project:
 * --------
 *   MT6208
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
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define RMMI_RSP_C

#include <stdio.h>
//#include "kal_non_specific_general_types.h"
//#include "ps_trace.h"
//#include "stack_config.h"
#include "kal_trace.h"
#include "string.h"
#if defined(NEPTUNE_MMI)
#include "common_nvram_editor_data_item.h"
#endif
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "med_struct.h"

#ifdef __MOD_SMU__
#include "ps2sim_struct.h"
#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
#include "csmss_common_enums.h"


#include "mcd_l4_common.h"
 
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_msghdlr.h"
#include "l4_trc.h"
#include "atci_trc.h"

//#include "l4c_aux_struct.h"
/////////add to provide SAT sturcture ///////////////////

#include "sim_common_enums.h"

//#include "mcd_ss_parameters.h"  /* csm */
//#include "mcd_ss_tcapmessages.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
//#include "l4c2smsal_struct.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h"
 
//#include "l4c_ss_parse.h"

#include "l3_inc_enums.h"

//#include "l3_inc_local.h"
//#include "mcd_l3_inc_struct.h"
//#include "mcd_mm_common_gen_struct.h"
 
//#include "l4_defs.h"
#include "csmcc_common_enums.h"
#include "csmcc_atfunc.h"
//#include "l4c2csm_ss_struct.h"
#include "csmcc_defs.h"

#ifdef __MOD_RAC__
#include "l4crac_enums.h"
//#include "rac2l4c_struct.h"
#endif /* __MOD_RAC__ */ 
#ifdef __MOD_SMSAL__
#include "smsal_l4c_defs.h"
//#include "l4c2smsal_struct.h"
#include "smsal_l4c_enum.h"

//#include "mcd_l4c2smsal_peer.h"

#endif /* __MOD_SMSAL__ */ 
#ifdef __MOD_UEM__
#include "device.h"
//#include "l4c2uem_struct.h"
#endif /* __MOD_UEM__ */ 

#include "l4c_utility.h"
#include "rmmi_utility.h"
#include "rmmi_rspfmttr.h"
#include "rmmi_rsp.h"
//#include "aud_defs.h"
#include "l4c_sim_cmd.h"
#include "l4crac_enums.h"
//#include "custom_nvram_editor_data_item.h"
//#include "nvram_user_defs.h"

//#include "uart_sw.h"
#include "l4c_eq_cmd.h"
#include "stdlib.h"

#ifdef __CSD_FAX__
#include "l4c2t30_enums.h"
#endif 

//#include "l4c2phb_enums.h" 
//#include "l4c2phb_struct.h"
#include "phb_utils.h"
#include "l3_inc_enums.h"

//#include "smsal_defs.h"
//#include "mnsms_struct.h"
//#include "smsal_peer_struct.h"
//#include "smsal_structs.h"
#include "smsal_cb.h"
//#include "l4c2smu_struct.h"
//#include "Keypad_sw.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "Lmmi_ind.h"

#include "rmmi_msghdlr.h"

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
//#include "l4c2abm_struct.h" //MAX_CC_ADDR_LEN is in ps_public_enum.h

#include "uem_at_cmd.h" 

#include "med_struct.h"
#include "em_struct.h"
#include "nvram_data_items.h"

extern kal_uint8 custom_wild_char(void);

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
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_general_rrsp
 * DESCRIPTION
 *  This is l4c_general_rrsp function of L4C module.
 *  construct general OK/ERROR result code for RMMI display
 * PARAMETERS
 *  result      [IN]        Response of the previous command (TYPE: KAL_BOOL(TRUE or FALSE)!!)
 *  cause       [IN]        The fail cause when the result is false
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_general_rrsp(kal_bool result, kal_uint16 cause)
{
    /* modify by mtk00714 : 2004/03/10 */
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_GENERAL_RRSP_ENTRY);

    /* convert boolean result to l4c_result_enum */
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, cause);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_general_rrsp
 * DESCRIPTION
 *  This is l4c_sms_general_rrsp function of L4C module.
 *  construct general OK/ERROR result code for RMMI display
 *  error cause follows 07.05 Sec 3.2.5
 *  add by mtk00714 : 20050121
 * PARAMETERS
 *  result      [IN]        Response of the previous command (TYPE: KAL_BOOL(TRUE or FALSE)!!)
 *  cause       [IN]        The fail cause when the result is false
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_general_rrsp(kal_bool result, kal_uint16 cause)
{
    if (result == KAL_FALSE)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, cause);
        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, cause, KAL_TRUE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ps_general_rrsp
 * DESCRIPTION
 *  This is l4c_ps_general_rrsp function of L4C module.
 *  construct general OK/ERROR result code for RMMI display
 *  If the result == KAL_FALSE, ERROR should be returned to TE.
 *  If cause != L4C_NO_CAUSE, then the cause is present as ps_cause_enum
 *  add by mtk00714 : 20050121
 * PARAMETERS
 *  result      [IN]        Response of the previous command (TYPE: KAL_BOOL(TRUE or FALSE)!!)
 *  cause       [IN]        The fail cause when the result is false
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ps_general_rrsp(kal_bool result, kal_uint16 cause)
{
    if (result == KAL_FALSE)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, cause);
        if (cause != L4C_NO_CAUSE)
        {
            cause = rmmi_convert_l3_cause(cause);
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
        }
        else
        {
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        }
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sim_general_rrsp
 * DESCRIPTION
 *  This is l4c_sim_general_rrsp function of L4C module.
 *  construct general OK/ERROR result code for RMMI display
 * PARAMETERS
 *  result      [IN]        Response of the previous command
 *  cause       [IN]        The fail cause when the result is false
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_general_rrsp(kal_bool result, kal_uint16 cause)
{
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_GENERAL_RRSP_ENTRY);

    if (result == KAL_FALSE)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_PTR->cmd_error_cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);		
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cfun_rrsp
 * DESCRIPTION
 *  This function return OK or SIM error cause to TE.
 * PARAMETERS
 *  result      [IN]        
 *  cause       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cfun_rrsp(kal_bool result, kal_uint16 cause)
{
    if (result == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_string_parsing_rrsp
 * DESCRIPTION
 *  This is l4c_ss_string_parsing_rrsp function of L4C module.
 *  respond to RMMI about the result of the ss string parsing req
 * PARAMETERS
 *  result      [IN]        
 *  info        [IN]        Response of the ss string parsing req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_string_parsing_rrsp(l4c_result_struct result, l4c_ss_string_info_struct *info)
{
    if (info->opcode == INVALID_OPERATION)
    {
    #if defined(__SP_RIL_SUPPORT__)
        if (result.cause == PHB_CAUSE_FDN_BLOCKED)
        {
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, PHB_CAUSE_FDN_BLOCKED);
        }
        else
    #endif /* __SP_RIL_SUPPORT__ */            
        {
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        }
    }
}

#ifdef __MOD_CSM__

/*****************************************************************************
* FUNCTION
*  l4c_cc_ceer_rrsp
*
* DESCRIPTION
*   This is l4c_cc_ceer_rrspfunction of L4C module.
*   construct report result code for RMMI display
*
* PARAMETERS
*  result      IN    response of the previous command
*  cause       IN    the fail cause when the result is false
*
* RETURNS
*  none.
*
* GLOBALS AFFECTED
*  none.
*****************************************************************************/


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_hangup_active_call_rrsp
 * DESCRIPTION
 *  This is l4c_cc_exe_hangup_active_call_rrsp function of L4C module.
 *  respond to RMMI about the hangup call req
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_hangup_active_call_rrsp()
{
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_CC_EXE_HANGUP_ACTIVE_CALL_RRSP_ENTRY);
    //rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_GEN_CAUSE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_get_call_list_rrsp
 * DESCRIPTION
 *  This is l4c_cc_get_call_list_rrsp function of L4C module.
 *  construct the call list entry for RMMI display
 * PARAMETERS
 *  result          [IN]        Result of the get call list req
 *  last_flag       [IN]        If this entry is the last one in the call list
 *  call_entry      [IN]        Information of this call
 *  addr            [IN]        Phone number of this call
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_get_call_list_rrsp(
        kal_bool result,
        kal_bool last_flag,
        l4c_call_entry_struct call_entry,
        l4c_number_struct addr)
{
    l4c_call_entry_struct retry_call_entry;
    l4c_number_struct retry_call_addr;    
    kal_bool retry_exist = KAL_FALSE;
    l4ccsm_cc_call_setup_req_struct *param_ptr;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_CC_GET_CALL_LIST_RRSP_ENTRY);

    kal_mem_set(&retry_call_entry, 0, sizeof(l4c_call_entry_struct));
    kal_mem_set(&retry_call_addr, 0, sizeof(l4c_number_struct));

    if ((result == KAL_FALSE) || (last_flag == KAL_TRUE))
    {
        /* mtk01616_090213:ongoing_flag period is from setup_req to setup_cnf,there will be call info in CSM */
        if((l4c_ptr->retry_cc == KAL_TRUE) &&
            (l4c_ptr->cc_retry_ongoing_flag == KAL_FALSE) &&
            (l4c_ptr->mo_call_id <= CSMCC_MAX_CALL_NUM) &&
            (l4c_ptr->mo_call_id != l4c_ptr->mt_call_id) && // mtk01616_090602:MO retry and MT call collision       
            (l4c_ptr->cc_parameter[l4c_ptr->retry_src_id].length > 0) &&
            (l4c_ptr->cc_parameter[l4c_ptr->retry_src_id].data != NULL) &&
            ((l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == ATD_EXE) ||
            (l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == ATD_ECC) ||
            (l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == ATD_ECC_CHANGE_RAT) ||
            (l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == SAT_ATD_EXE)))
        {
            retry_exist = KAL_TRUE;		

            retry_call_entry.call_id = l4c_ptr->mo_call_id;
            retry_call_entry.call_orig = CLCC_MO_CALL;		
            retry_call_entry.call_state = CLCC_CALL_DIALING;        
            retry_call_entry.mpty = KAL_FALSE;

            //MAUI_02543184 stk call and normal call use different interfaces of CSM
            if (l4c_ptr->cc_current_action[l4c_ptr->retry_src_id] == SAT_ATD_EXE)
            {
                if (l4c_ptr->cc_peer_buf.length > 0)
                {
                    retry_call_addr.type = ((kal_uint8*)(l4c_ptr->cc_peer_buf.data))[0];
                    retry_call_addr.length = convert_to_digit(
                        ((kal_uint8*)(l4c_ptr->cc_peer_buf.data) + 1),
                        (kal_uint8*) retry_call_addr.number);
                }
                retry_call_entry.call_mode = CLCC_VOICE_CALL;
            }
            else //ATD_EXE, ATD_ECC
            {
                param_ptr = (l4ccsm_cc_call_setup_req_struct*) l4c_ptr->cc_parameter[l4c_ptr->retry_src_id].data;

                if(param_ptr->call_type == CSMCC_DATA_CALL)
                {
                    retry_call_entry.call_mode = CLCC_DATA_CALL;
                }
                else if(param_ptr->call_type == CSMCC_FAX_CALL)
                {
                    retry_call_entry.call_mode = CLCC_FAX_CALL;
                }
 	            else
                {
                    retry_call_entry.call_mode = CLCC_VOICE_CALL;
                }

                if (param_ptr->called_number.addr_length != 0)
                {
                    retry_call_addr.type = param_ptr->called_number.addr_bcd[0];
                    retry_call_addr.length = convert_to_digit((kal_uint8*) & (param_ptr->called_number.addr_bcd[1]), (kal_uint8*) retry_call_addr.number);

                    if (retry_call_addr.length >= MAX_CC_ADDR_LEN)
                    {
                        ASSERT(0);
                    }
                }
            }
        }
    }

    /* if no call list at all, simply retrun "OK" */
    if (result == KAL_FALSE)
    {
        if(retry_exist == KAL_TRUE)
        {
            rmmi_clcc_read_rsp_fmttr(retry_call_entry, retry_call_addr);
        }				
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        return;
    }
    rmmi_clcc_read_rsp_fmttr(call_entry, addr);

    /* if it's the last call information, last_flag will be set. To end with "OK" */
    if (last_flag == KAL_TRUE)
    {
        if(retry_exist == KAL_TRUE)
        {
            rmmi_clcc_read_rsp_fmttr(retry_call_entry, retry_call_addr);
        }				    
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_accept_rrsp
 * DESCRIPTION
 *  This is l4c_cc_exe_call_accept_rrsp function of L4C module.
 *  respond to RMMI about the accept call req
 * PARAMETERS
 *  result          [IN]        Result of the accept req
 *  call_type       [IN]        Call type of the call being accepted
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_call_accept_rrsp(l4c_result_struct result, kal_uint8 call_type)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_CC_EXE_CALL_ACCEPT_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {

    #ifdef __CSD_FAX__      /* add by mtk00714 : this is due to fax call but fclass = 0 */
        if ((call_type == SINGLE_FAX_CALL) || (call_type == ALT_FAX_FAX_CALL) || (call_type == ALT_FAX_VOICE_CALL))
        {
            //l4c_ps_general_rrsp(KAL_FALSE, result.cause); //mtk00924: result code will be given at basic_cmd_processor
        }
        else
    #endif /* __CSD_FAX__ */ 

            rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, 0);
    }
    else
    {
        if ((call_type == SINGLE_VOICE_CALL) ||
            (call_type == FOLLOW_VOICE_CALL) || (call_type == ALT_DATA_VOICE_CALL) || (call_type == ALT_FAX_VOICE_CALL))
        {
            if (check_multi_command(result.flag) != KAL_FALSE)
            {
                return;
            }

            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

        }
    #ifdef __CSD_FAX__      /* add by mtk00714 */
        else if ((call_type == ALT_FAX_FAX_CALL) || (call_type == SINGLE_FAX_CALL))
        {
            return;     //response nothing, wait for msg : L4CCSM_CC_CSD_EST_IND
        }
    #endif /* __CSD_FAX__ */ 
        else
        {
            /* mtk00714: 2004/03/02 add +CR service report for data call */
            if (rmmi_ptr->report_mode.cr == RMMI_ENABLE_REPORT)
            {
                rmmi_cr_result_code_fmttr();
            }

            rmmi_result_code_fmttr(RMMI_RCODE_CONNECT, 0);
        }
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_setup_rrsp
 * DESCRIPTION
 *  This is l4c_cc_exe_call_setup_rrsp function of L4C module.
 *  respond to RMMI about the setup call req
 * PARAMETERS
 *  result      [IN]        Result of the setup call req
 *  call_id     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_call_setup_rrsp(l4c_result_struct result, kal_uint8 call_id)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_CC_EXE_CALL_SETUP_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        if (l4c_ptr->mmrr_ready_flag == KAL_FALSE) //DUMA00146453
        {
            rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmd_error_cause);
        }
        else
        {
            if (result.cause == CM_USER_BUSY)
            {
                rmmi_result_code_fmttr(RMMI_RCODE_BUSY, result.cause);
            }
            else
            {
                rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, result.cause);
            }
        }
    }
#if 1
    else        //brad - add for ATD return 'OK' immediately
    {
        l4c_call_entry_struct call_info;

        l4ccsm_cc_get_call_info(call_id, &call_info, NULL);

        if ((call_info.call_mode == SINGLE_VOICE_CALL) || (call_info.call_mode == FOLLOW_VOICE_CALL) ||
            (call_info.call_mode == ALT_DATA_VOICE_CALL) || (call_info.call_mode == ALT_FAX_VOICE_CALL))
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, result.cause);
        }
    }
#endif /* 1 */ 

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_cc_exe_call_modify_rrsp
 * DESCRIPTION
 *  This is l4c_cc_exe_call_modify_rrsp function of L4C module.
 *  respond to RMMI about the modify call req
 * PARAMETERS
 *  result          [IN]        Result of the call modify req
 *  call_type       [IN]        Call type after modified
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_cc_exe_call_modify_rrsp(l4c_result_struct result, kal_uint8 call_type)
{
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_CC_EXE_CALL_MODIFY_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        if (call_type == CSMCC_VOICE_CALL)
        {
            if (check_multi_command(result.flag) != KAL_FALSE)
            {
                return;
            }
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        }
        else
        {
            rmmi_result_code_fmttr(RMMI_RCODE_CONNECT, 0);
        }
    }
    return;
}

#endif /* __MOD_CSM__ */ 

#ifdef __MOD_CSM__


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_emlpp_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_emlpp_rrsp function of L4C module.
 *  respond to RMMI about the emlpp register/interrogate req
 * PARAMETERS
 *  result                  [IN]        Result of the emlpp req
 *  para_present            [IN]        
 *  opcode                  [IN]        Register or interrogate
 *  default_priority        [IN]        Interrogate result
 *  max_priority            [IN]        Interrogate result
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_emlpp_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 opcode,
        kal_uint8 default_priority,
        kal_uint8 max_priority)
{
#if !defined(__SLIM_AT__)

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_EMLPP_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        if (opcode == SS_OP_INTERROGATESS)
        {
            rmmi_caemlpp_read_rsp_fmttr(default_priority, max_priority);
        }
        else
        {
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        }
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_repeat_ccfc_rrsp
 * DESCRIPTION
 *  This is l4c_ss_store_call_forwarding_rrsp function of L4C module.
 *  deal with responses for call forwarding ( register/erase/activate/deactivate/
 *  interrogate req). It stores the response in l4c_cntxt_g.cfcc_rsp_buffer.
 * PARAMETERS
 *  return_code     [IN]        
 *  bs_count        [IN]        
 *  opcode          [IN]        
 *  list            [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_repeat_ccfc_rrsp(
        kal_uint8 return_code,
        kal_uint8 bs_count,
        kal_uint8 opcode,
        forwarding_list_struct *list)
{
    kal_uint8 buffer[MAX_CC_ADDR_LEN + 20];
    kal_uint8 status;
    kal_uint8 addr_type = 129;
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    /* deal with responses:
       write to buffer, then concat with global ccfc_rsp_buffer  */
    if ((return_code == L4C_ERROR) ||   //error
        ((return_code == L4C_OK) && (bs_count == 0)))   //inactive
    {

        rmmi_ptr->arg_list[0] = (void*)&rmmi_ptr->ccfc_current_class;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: 0, %d",    //+CCFC: <status=0>, <classx>
                                               rmmi_ptr->arg_list, 1);
    }
    else        // L4c_OK && bs_count!=0
    {
        if ((list[0].ss_status & 0x01) == 0)    //last bit of status : SS_ABIT is for activation
        {
            status = 0;
        }
        else
        {
            status = 1;
        }

        if (list[0].address[0] == RMMI_CHAR_PLUS)       //addrtype
        {
            addr_type = 145;
        }

        rmmi_ptr->arg_list[0] = (void*)&status;        //status
        rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->ccfc_current_class;   //classx
        rmmi_ptr->arg_list[2] = (void*)&list[0].address;       //address
        rmmi_ptr->arg_list[3] = (void*)&addr_type;     //addrtype
        if (list[0].no_reply_timer != 0)
        {
            rmmi_ptr->arg_list[4] = (void*)&list[0].no_reply_timer;    //timer
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: %d, %d,\"%s\", %d,,, %d",      //vito remove space
                                                   rmmi_ptr->arg_list, 5);
        }
        else
        {
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: %d, %d,\"%s\", %d",    //vito remove space
                                                   rmmi_ptr->arg_list, 4);

        }
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_forward_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_emlpp_rrsp function of L4C module.
 *  respond to RMMI about the emlpp register/erase/activate/deactivate/
 *  interrogate req
 * PARAMETERS
 *  result                  [IN]        Result of the emlpp req
 *  para_present            [IN]        
 *  opcode                  [IN]        Register/erase/activate/deactivate/interrogate
 *  type                    [IN]        
 *  length                  [IN]        
 *  list                    [?]         
 *  default_priority(?)     [IN]        Interrogate result
 *  max_priority(?)         [IN]        Interrogate result
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_call_forward_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 opcode,
        kal_uint8 type,
        kal_uint8 length,
        forwarding_list_struct *list)
{
    kal_uint8 i;
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_CC_ADDR_LEN + 20];
#if !defined(__SP_RIL_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CALL_FORWARD_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        if (opcode == SS_OP_INTERROGATESS)
        {
            #if !defined(__SP_RIL_SUPPORT__)
            kal_uint8 classx = 7; /* default value defined in TS27.007 */
            #endif // temp fix to compile warning by MT
            if (length == 0)
            {
            //mtk01616_080808: for AT+EUCSD and AT+CCFC query .ccfc_current_class will be 0 (invalid)
            #if defined(__SP_RIL_SUPPORT__)
                kal_sprintf((char*)buffer, "+CCFC: 0, 10"); /* L4_ALL_TELESERVICES = 10 */
                string_length = (kal_uint16)strlen((char*)buffer);
            #else 
                rmmi_ptr->arg_list[0] = (void*)&classx;
                ////RMMI_PTR->arg_list[0] = (void*)&RMMI_PTR->ccfc_current_class;
                
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: 0, %d",    //+CCFC: <status=0>, <classx>
                                                       rmmi_ptr->arg_list, 1);
            #endif /* __SP_RIL_SUPPORT__ */ 
                rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
            }
            else
            {
                for (i = 0; i < length; i++)
                {
                    rmmi_ccfc_interrogate_rsp_fmttr(
                        list[i].ss_status,
                        list[i].bs_code,
                        list[i].no_reply_timer,
                        (kal_uint8*) list[i].address);
                }
            }
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_search_bs_code
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cw_cb       [IN]        
 *  bs_code     [IN]        
 *  length      [IN]        
 *  list        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_search_bs_code(kal_bool cw_cb, kal_uint8 bs_code, kal_uint8 length, kal_uint8 *list)
{
    kal_uint8 bs_count_temp;

    for (bs_count_temp = 0; bs_count_temp < length; bs_count_temp++)
    {    
        if (list[bs_count_temp] == bs_code)
        {
            if (cw_cb == KAL_TRUE)      //cw
            {
                rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_ACTIVE, bs_code);
            }
            else        //cb
            {
                rmmi_clck_interrogate_rsp_fmttr(KAL_TRUE, bs_code);
            }
            return;
        }
    }

    if (bs_count_temp == length)
    {
        if (cw_cb == KAL_TRUE)  //cw
        {
            rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_NOT_ACTIVE, bs_code);
        }
        else    //cb
        {
            rmmi_clck_interrogate_rsp_fmttr(KAL_FALSE, bs_code);
        }
        return;
    }
}


#if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_ss_search_bs_code_ext
 * DESCRIPTION
 *  This extended function is intended for AT+ECUSD (Currently used by WM and ECMT)
 * PARAMETERS
 *  cw_cb      [IN]        
 *  bs_code    [IN]        
 *  length     [IN]        
 *  list       [IN]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_search_bs_code_ext(kal_bool cw_cb, kal_uint8 status, kal_uint8 length, kal_uint8 *list)
{
    kal_uint8 bs_count_temp;

    for (bs_count_temp = 0; bs_count_temp < length; bs_count_temp++)
    {
        if (cw_cb == KAL_TRUE)  //cw
        {
            rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_ACTIVE, list[bs_count_temp]);
        }
        else    //cb
        {
            rmmi_clck_interrogate_rsp_fmttr(KAL_TRUE, list[bs_count_temp]);
        }
    }

    if (length == 0)
    {
        if (cw_cb == KAL_TRUE)  //cw
        {
            if (status & SS_ABIT) //A_PBIT is for activation
            {
                rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_ACTIVE, L4_ALL_TELESERVICES);
                rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_ACTIVE, L4_ALL_ASYNC_SERVICES);
                rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_ACTIVE, L4_ALL_SYNC_SERVICES);
            }
            else
            {
                rmmi_ccwa_interrogate_rsp_fmttr(L4C_CISS_NOT_ACTIVE, L4_ALL_TELESERVICES);
            }
        }
        else    //cb
        {
            rmmi_clck_interrogate_rsp_fmttr(KAL_FALSE, L4_ALL_TELESERVICES);
        }
        return;
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_wait_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_emlpp_rrsp function of L4C module.
 *  respond to RMMI about the call waiting activate/deactivate
 *  /interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the call waiting req
 *  para_present        [IN]        
 *  opcode              [IN]        Activate/deactivate/interrogate
 *  length              [IN]        Number of interrogate result
 *  status              [IN]        
 *  list                [IN]        List of interrogate result
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_call_wait_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 opcode,
        kal_uint8 length,
        kal_uint8 status,
        kal_uint8 *list)
{
#if !defined(__SP_RIL_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CALL_WAIT_RRSP_ENTRY);

    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        if (opcode == SS_OP_INTERROGATESS)
        {
        #if defined(__SP_RIL_SUPPORT__)
            l4c_ss_search_bs_code_ext(KAL_TRUE, status, length, list);
        #else /* __SP_RIL_SUPPORT__ */ 

            if ((rmmi_ptr->ccwa_current_class == 1) || (rmmi_ptr->ccwa_current_class == 2) ||
                (rmmi_ptr->ccwa_current_class == 4) || (rmmi_ptr->ccwa_current_class == 8) ||
                (rmmi_ptr->ccwa_current_class == 16) || (rmmi_ptr->ccwa_current_class == 32) ||
                (rmmi_ptr->ccwa_current_class == 64))
            {
                l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(rmmi_ptr->ccwa_current_class), length, list);
            }
            else        //combination
            {
                if ((rmmi_ptr->ccwa_current_class & 0x01) != 0)
                    // bit 8 : classx = 1 : voice
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(1), length, list);
                }
                if ((rmmi_ptr->ccwa_current_class & 0x02) != 0)
                    // bit 7 : classx = 2 : data
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(2), length, list);
                }
                if ((rmmi_ptr->ccwa_current_class & 0x04) != 0)
                    // bit 6 : classx = 4 : fax
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(4), length, list);
                }
                if ((rmmi_ptr->ccwa_current_class & 0x08) != 0)
                    // bit 5 : classx = 8 : SMS
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(8), length, list);
                }
                if ((rmmi_ptr->ccwa_current_class & 0x10) != 0)
                    // bit 4 : classx = 16 : data circuit sync
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(16), length, list);
                }
                if ((rmmi_ptr->ccwa_current_class & 0x20) != 0)
                    // bit 3 : classx = 32 : data circuit async
                {
                    l4c_ss_search_bs_code(KAL_TRUE, check_bscode_L4enum(32), length, list);
                }
                //mtk01616_080808: for AT+ECUSD
		  #if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
                if (rmmi_ptr->ccwa_current_class == 0)
                {
                    l4c_ss_search_bs_code_ext(KAL_TRUE, status, length, list);
                }
                #endif 
            }

            /* clear stored global variable */
            rmmi_ptr->ccwa_combi_classx = 0;
            rmmi_ptr->ccwa_current_class = 0;
            rmmi_ptr->ccwa_result = KAL_FALSE;
            kal_mem_set(&rmmi_ptr->ccwa_req_param, 0, sizeof(ccwa_req_param_struct)); // modified by mtk02514_081216
        #endif /* __SP_RIL_SUPPORT__ */ 
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_cdip_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_cdip_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the cdip interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the cdip interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Cdip status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_cdip_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
#if !defined(__SLIM_AT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CDIP_INTERROGATE_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
        status = 2;
        rmmi_cdip_read_rsp_fmttr(rmmi_ptr->report_mode.cdip, status);

    }
    else
    {
        if ((status & 0x01) == 0)       //0x01 : A_PBIT is for activation
        {
            status = 0; //CDIP not provisioned
        }
        else
        {
            status = 1; //CDIP provisioned
        }
        rmmi_cdip_read_rsp_fmttr(rmmi_ptr->report_mode.cdip, status);
    }
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_clip_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_clip_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the clip interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the clip interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Clip status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_clip_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CLIP_INTERROGATE_RRSP_ENTRY);

    if (result.flag == L4C_ERROR)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
        status = 2;     //UNKNOWN
        rmmi_clip_read_rsp_fmttr(rmmi_ptr->report_mode.clip, status);
    }
    else
    {
        if ((status & SS_PBIT) == 0)    //0x01 : SS_PBIT is for provision
        {
            status = 0; //CLIP not provisioned
        }
        else
        {
            status = 1; //CLIP provisioned
        }
        rmmi_clip_read_rsp_fmttr(rmmi_ptr->report_mode.clip, status);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_clir_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_clir_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the clir interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the clir interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Clir status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_clir_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
#if !defined(__SLIM_AT__)
    kal_uint8 clir_status;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CLIR_INTERROGATE_RRSP_ENTRY);

    if (result.flag == L4C_ERROR)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
        clir_status = 2;        //UNKNOWN
        rmmi_clir_read_rsp_fmttr(rmmi_ptr->report_mode.clir, clir_status);
    }
    else
    {
        if ((status & 0x04) == 0)       //0x04 : SS_PBIT is for provision
        {
            clir_status = 0;    //CLIR not provisioned
        }
        else
        {
            if ((clir_option == 0) && ((status & 0x01) == 1))   //0x01 : SS_ABIT is for activation
            {
                clir_status = 1;        //CLIR provisioned in permanent mode
            }
            else if (clir_option == 1)
            {
                clir_status = 3;        //CLIR temporary mode presentation restricted
            }
            else if (clir_option == 2)
            {
                clir_status = 4;        //CLIR temporary mode presentation allowed
            }
            else
            {
            #if defined(__SP_RIL_SUPPORT__)
                clir_status = 1;
            #else 
                clir_status = 2;
            #endif 
            }
        }
        rmmi_clir_read_rsp_fmttr(rmmi_ptr->report_mode.clir, clir_status);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_cnap_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_cnap_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the cnap interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the cnap interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Cnap status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_cnap_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
#if !defined(__SLIM_AT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CNAP_INTERROGATE_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        rmmi_cnap_read_rsp_fmttr(rmmi_ptr->report_mode.cnap, status);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_colp_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_colp_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the colp interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the colp interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Colp status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_colp_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
#if !defined(__SLIM_AT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_COLP_INTERROGATE_RRSP_ENTRY);

    if (result.flag == L4C_ERROR)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
        status = 2;     //unknown

        rmmi_colp_read_rsp_fmttr(rmmi_ptr->report_mode.colp, status);
    }
    else
    {
        if ((status & 0x01) == 0)       //0x01 : A_PBIT is for activation
        {
            status = 0; //not provisioned
        }
        else
        {
            status = 1; //provisioned
        }

        rmmi_colp_read_rsp_fmttr(rmmi_ptr->report_mode.colp, status);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_colr_interrogate_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_colr_interrogate_rrsp function of L4C module.
 *  respond to RMMI about the colp interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the colp interrogate req
 *  para_present        [IN]        
 *  status              [IN]        Colp status
 *  clir_option         [IN]        No use
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_colr_interrogate_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 status,
        kal_uint8 clir_option)
{
#if !defined(__SLIM_AT__) && !defined(__MMI_FMI__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result.flag == L4C_ERROR)
    {
        status = 2;     //unknown
        rmmi_colr_read_rsp_fmttr(rmmi_ptr->report_mode.colp, status);
    }
    else
    {
        if ((status & 0x01) == 0)       //0x01 : A_PBIT is for activation
        {
            status = 0; //not provisioned
        }
        else
        {
            status = 1; //provisioned
        }

        rmmi_colr_read_rsp_fmttr(rmmi_ptr->report_mode.colp, status);
    }
    return;
#endif /* !defined(__SLIM_AT__) && !defined(__MMI_FMI__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_call_barring_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_call_barring_rrsp function of L4C module.
 *  respond to RMMI about the call barring register/erase/activate/
 *  deactivate/interrogate req
 * PARAMETERS
 *  result              [IN]        Result of the call barring req
 *  para_present        [IN]        
 *  opcode              [IN]        Register/erase/activate/deactivate/interrogate
 *  type                [IN]        No use
 *  length              [IN]        Number of interrogate result
 *  list                [IN]        List of interrogate result
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_call_barring_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 opcode,
        kal_uint8 type,
        kal_uint8 length,
        barring_list_struct *list)
{
#if !defined(__SLIM_AT__)
#if !defined(__SP_RIL_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#endif

    kal_uint8 i;

    //kal_uint8 activate_status;
    //kal_uint8 classx;

    kal_uint8 bs_code_length = 0;
    kal_uint8 bs_code_list[13];

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SS_EXE_CALL_BARRING_RRSP_ENTRY);

    kal_mem_set(bs_code_list,0,sizeof(bs_code_list));	
	
    if (result.flag == L4C_ERROR)
    {
        l4c_ps_general_rrsp(KAL_FALSE, result.cause);
    }
    else
    {
        if (opcode == SS_OP_INTERROGATESS)
        {
            for (i = 0; i < length; i++)
            {
                /* mtk00714 : convert csmss_common_enum to AT output */
                if ((list[i].ss_status & SS_ABIT) == KAL_TRUE)
                {
                    bs_code_list[bs_code_length] = list[i].bs_code;
                    bs_code_length++;
                }
            }
            
         //mtk01616_080808: for AT+ECUSD            
        #if defined(__SP_RIL_SUPPORT__)
            l4c_ss_search_bs_code_ext(
                KAL_FALSE,
                0,
                bs_code_length,
                bs_code_list);
        #else /* __SP_RIL_SUPPORT__ */ 
            if ((rmmi_ptr->clck_ss_current_class == 1) || (rmmi_ptr->clck_ss_current_class == 2) ||
                (rmmi_ptr->clck_ss_current_class == 4) || (rmmi_ptr->clck_ss_current_class == 8) ||
                (rmmi_ptr->clck_ss_current_class == 16) || (rmmi_ptr->clck_ss_current_class == 32))
            {
                l4c_ss_search_bs_code(
                    KAL_FALSE,
                    check_bscode_L4enum(rmmi_ptr->clck_ss_current_class),
                    bs_code_length,
                    bs_code_list);
            }
            else        //combination
            {
                if ((rmmi_ptr->clck_ss_current_class & 0x01) != 0)
                    // bit 8 : classx = 1 : voice
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(1), bs_code_length, bs_code_list);
                }
                if ((rmmi_ptr->clck_ss_current_class & 0x02) != 0)
                    // bit 7 : classx = 2 : data
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(2), bs_code_length, bs_code_list);
                }
                if ((rmmi_ptr->clck_ss_current_class & 0x04) != 0)
                    // bit 6 : classx = 4 : fax
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(4), bs_code_length, bs_code_list);
                }
                if ((rmmi_ptr->clck_ss_current_class & 0x08) != 0)
                    // bit 5 : classx = 8 : SMS
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(8), bs_code_length, bs_code_list);
                }
                if ((rmmi_ptr->clck_ss_current_class & 0x10) != 0)
                    // bit 4 : classx = 16 : data circuit sync
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(16), bs_code_length, bs_code_list);
                }
                if ((rmmi_ptr->clck_ss_current_class & 0x20) != 0)
                    // bit 3 : classx = 32 : data circuit async
                {
                    l4c_ss_search_bs_code(KAL_FALSE, check_bscode_L4enum(32), bs_code_length, bs_code_list);
                }
            //mtk01616_080808: for AT+ECUSD
	     #if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
                if (rmmi_ptr->clck_ss_current_class == 0)
                {
                    l4c_ss_search_bs_code_ext(KAL_FALSE, 0, bs_code_length, bs_code_list);
                }
            #endif 
            }

            /* clear stored global variable */
            rmmi_ptr->clck_ss_combi_classx = 0;
            rmmi_ptr->clck_ss_current_class = 0;
            rmmi_ptr->clck_ss_result = KAL_FALSE;
            kal_mem_set(&rmmi_ptr->clck_ss_req_param, 0, sizeof(clck_ss_req_param_struct));	// modified by mtk02514_081216
        #endif /* __SP_RIL_SUPPORT__ */ 
            //rmmi_clck_interrogate_rsp_fmttr(activate_status, classx);
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_ussd_rrsp
 * DESCRIPTION
 *  This is l4c_ss_exe_ussd_rrsp function of L4C module.
 *  respond to RMMI about the ussd req
 * PARAMETERS
 *  result              [IN]        Result of the ussd req
 *  para_present        [IN]        
 *  op_code             [IN]        
 *  dcs                 [IN]        Data coding scheme for the ussd string
 *  ussd_str            [IN]        Ussd string rsp from the network
 *  ussd_str_len        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_ussd_rrsp(
        l4c_result_struct result,
        kal_uint8 para_present,
        kal_uint8 op_code,
        kal_uint8 dcs,
        kal_uint8 *ussd_str,
        kal_uint8 ussd_str_len)
{
#if !defined(__SLIM_AT__)

    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DIGITS_USSD * 4 + 30];

#if !defined(__SP_RIL_SUPPORT__)
    kal_uint8 lang_type;
    smsal_dcs_enum alphabet_type;
    smsal_msg_class_enum mclass;
    kal_bool is_compress;
    kal_bool is_reserved;
#endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_ptr->report_mode.ussd == RMMI_ENABLE_REPORT)
    {
        if (result.flag == L4C_OK)
        {
            if (ussd_str != NULL)
            {
                kal_uint8 *ptr; //MAUI_02354954

                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CUSD: 2, \"", rmmi_ptr->arg_list, 0);
                ptr = buffer + string_length;

            #if !defined(__SP_RIL_SUPPORT__)
                //hogan 070305: decode CB DCS. CISS gives DCS according to spec23.038
                // but AT uses smsal defined enum, so AT has to transfer DCS to what smsal used
                smsal_decode_cbsdcs(dcs, &lang_type, &alphabet_type, &mclass, &is_compress, &is_reserved);
                check_dcs_toCscs(alphabet_type, ussd_str_len, ussd_str, ptr);
            #else
                //mtk02508_090220: copy to RIL the ussd_string receiving from NW, it will decode according to the dcs
                print_hex_value_ext(ussd_str, ptr, ussd_str_len);
            #endif /* __SP_RIL_SUPPORT__ */ 

                ptr = buffer + strlen((char*)buffer);
                kal_sprintf((char*)ptr, "\", %d", dcs);
                rmmi_write_to_uart((kal_uint8*) buffer, (kal_uint16)strlen((char*)buffer), KAL_TRUE);
            }
            else //mtk02508_090220: for MT USSD cnf from NW
            {
                kal_sprintf((char*)buffer, "+CUSD: 2");
                string_length = (kal_uint16)strlen((char*)buffer);
                rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
            }
            
            //mtk01616_080603 : return OK/ERROR  immediately in modem load
        #ifdef __MMI_FMI__
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        #endif /* __MMI_FMI__ */ 
        }
        else// if (result.flag == L4C_ERROR)
        {
            //mtk01616_080603: we use +CUSD:4 for USSD error response and it is treated as URC in modem load 
        #if !defined(__MMI_FMI__) || defined(__ECUSD_SUPPORT__)
            kal_sprintf((char*)buffer, "+CUSD: 4");
            string_length = (kal_uint16)strlen((char*)buffer);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        #else /* __MMI_FMI__ */ 
            l4c_ps_general_rrsp(KAL_FALSE, result.cause);
        #endif /* __MMI_FMI__ */ 
        }
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_ss_exe_ccbs_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result              [IN]        
 *  para_present        [IN]        
 *  opcode              [IN]        
 *  list                [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ss_exe_ccbs_rrsp(l4c_result_struct result, kal_uint8 para_present, kal_uint8 opcode, ccbs_list_struct *list)
{
#if !defined(__SLIM_AT__)
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif 
}

#endif /* __MOD_CSM__ */ 

#ifdef __MOD_RAC__


/*****************************************************************************
 * FUNCTION
 *  l4c_nw_get_plmn_list_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  length      [IN]        
 *  list        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_get_plmn_list_rrsp(l4c_result_struct result, kal_uint8 length, l4c_rat_plmn_info_struct *list)     //mtk01616_070529
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 rsp_string[256];
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_NW_GET_PLMN_LIST_RRSP_ENTRY);

    if (result.flag == L4C_ERROR)
    {
       // rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, OPERATION_NOT_ALLOWED_ERR);	 // MAUI_01730751 , mtk02480
        return;
    }

    rmmi_ptr->arg_list[0] = (void*)&rmmi_ptr->s_reg.s3;
    rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->s_reg.s4;

    if (rmmi_ptr->rsp_mode.format == RMMI_VERBOSE_FULL_HEAD_TAIL)       //no <CR><LF> when ATV0
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%c%c+COPS: ", rmmi_ptr->arg_list, 2);
    }
    else
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+COPS: ", rmmi_ptr->arg_list, 0);
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_FALSE);

    for (i = 0; i < length; i++)
    {
        rmmi_cops_test_rsp_fmttr(&(list[i]));
    }

#if !defined(__MMI_FMI__) || defined(__NW_DETACH_SUPPORT__)
    kal_sprintf((char*)rsp_string, ",(0-3),(0-2)%c%c", rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);
#else 
    kal_sprintf((char*)rsp_string, ",(0, 1, 3),(0-2)%c%c", rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);
#endif 

    string_length = (kal_uint16)strlen((char*)rsp_string);
    rmmi_write_to_uart((kal_uint8*) rsp_string, string_length, KAL_FALSE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_nw_exe_cops_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  status      [IN]        
 *  plmn        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_exe_cops_rrsp(l4c_result_struct result, kal_uint8 status, kal_uint8 *plmn)
{
#ifndef __DISABLE_PS_ONLY_OPERATOR_SUPPORT__
    if (status != L4C_RAC_OK && l4crac_get_gprs_status() != GPRS_ATTACHED)
#else
    if (status != L4C_RAC_OK)
#endif
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, status);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    else
    {
        /* [MAUI01902699], print OK/ERROR depend on RAC result only */
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
}

#if defined(__CSG_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  rmmi_csg_test_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_csg_test_rsp_fmttr(available_plmn_csg_struct *plmn_csg)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 rsp_string[256];
    kal_uint8 plmn_id[7];    
    kal_uint8 act;
    kal_uint32 i;

    if (plmn_csg->csg_count == 0)
    {
        return;
    }

    plmn_convert_to_digit(&(plmn_csg->plmn_id_rat.plmn_id), (kal_uint8*)plmn_id);
    
    act = rmmi_current_access_technology(plmn_csg->plmn_id_rat.rat, 
                                                                    l4crac_get_cell_data_speed_support(), 
                                                                    L4C_PTR->max_data_bearer_capa); 

    kal_sprintf((char*)rsp_string, ",\"%s\",%d,%d", plmn_id, act, plmn_csg->csg_count);
    string_length = strlen((char*)rsp_string);
    rmmi_write_to_uart((kal_uint8*) rsp_string, string_length, KAL_FALSE);    

    for (i=0; i<plmn_csg->csg_count; i++)
    {
        kal_uint8 hnb_name_str[MAX_HNB_NAME_LEN*2+1];
        csg_info_struct *csg_info = &(plmn_csg->csg_info_list[i]);

        check_sms_pdu_string(csg_info->hnb_name_length, (kal_uint8*)csg_info->hnb_name, hnb_name_str);

        RMMI_PTR->arg_list[0] = (void*)&(csg_info->csg_id);
        RMMI_PTR->arg_list[1] = (void*)&(csg_info->csg_type);
        RMMI_PTR->arg_list[2] = (void*)hnb_name_str;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) ",%u,%d,\"%s\"", RMMI_PTR->arg_list, 3);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_FALSE);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_nw_get_csg_list_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_get_csg_list_rrsp(kal_bool result, kal_uint8 plmn_count, available_plmn_csg_struct *available_plmn_csg)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 rsp_string[256];
    kal_uint32 i;

    if (result == KAL_TRUE)
    {
        kal_sprintf((char*)rsp_string, "%c%c+ECSG: %d", RMMI_PTR->s_reg.s3, RMMI_PTR->s_reg.s4, plmn_count);
        string_length = strlen((char*)rsp_string);
        rmmi_write_to_uart((kal_uint8*) rsp_string, string_length, KAL_FALSE);

        for (i=0; i<plmn_count; i++)
        {
            rmmi_csg_test_rsp_fmttr(&available_plmn_csg[i]);
        }

        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
}
#endif /* __CSG_SUPPORT__ */

#endif /* __MOD_RAC__ */ 

#ifdef __MOD_PHB__
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_msisdn_rrsp
 * DESCRIPTION
 * This function is used to output the MSISDN entries read from PHB to the RMMI_PTR->current_src
 *  
 * PARAMETERS
 *  no_list     [IN]         the number of entries in the list
 *  list          [IN]         the entries to be outputted
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_get_msisdn_rrsp(kal_uint16 no_list, l4c_phb_entry_struct *list)
{
    kal_uint16 i = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_PHB_GET_ENTRY_RRSP_ENTRY);

    for (i = 0; i < no_list; i++)
    {
        rmmi_phb_msisdn_rsp_fmttr(&list[i]);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_entry_rrsp
 * DESCRIPTION
 * This function is used to output the PHB entries read from PHB to the RMMI_PTR->current_src
 * which is triggered by AT+CPBR
 *  
 * PARAMETERS
 *  no_list     [IN]         the number of entries in the list
 *  list          [IN]         the entries to be outputted
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_get_entry_rrsp(kal_uint16 no_list, l4c_phb_entry_struct *list)
{
#if !defined(__ULC_AT__)
    kal_uint16 i = 0;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_PHB_GET_ENTRY_RRSP_ENTRY);

    for (i = 0; i < no_list; i++)
    {
        rmmi_phb_entry_rsp_fmttr(&list[i]);
    }
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_update_entry_rrsp
 * DESCRIPTION
 * This function is used to output the PHB written index
 * which is triggered by AT+EPBW
 *  
 * PARAMETERS
 *  index          [IN]         the written index
 * RETURNS
 *  void
 *****************************************************************************/
#if defined(__AT_EPBW_SUPPORT__)
void l4c_phb_update_entry_rrsp(kal_uint16 index)
{
    kal_uint8 buffer[50];

    sprintf((kal_char*)buffer, "+EPBW: %d", index);
    rmmi_write_to_uart(buffer, (kal_uint16)strlen((kal_char*)buffer), KAL_TRUE);
}
#endif

#ifdef __AT_EPBUM_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_phb_get_epbum_entry_rrsp
 * DESCRIPTION
 * This function is used to output the read USIM PHB entry data for AT+EPBUM
 *  
 * PARAMETERS
 *  type          [IN]         the type of PHB entry
 *  entry         [IN]          Might be l4c_phb_entry_struct or l4c_phb_usim_entry
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_get_epbum_entry_rrsp(phb_type_enum type, kal_uint16 index, kal_uint16 occurrence, void *entry)
{
    /*+EPBUM: <type>, <INDEX1>, <INDEX2>, <number/email/text/grp_list>*/
    rmmi_epbum_ef_type_enum ef_type;
    l4c_phb_entry_struct *phb_entry;
    l4c_phb_usim_entry *phb_usim_entry;
    kal_uint8 buffer[PHB_MAX_EMAIL_LENGTH];
    kal_uint8 i;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    phb_entry = (l4c_phb_entry_struct*) entry;
    phb_usim_entry = (l4c_phb_usim_entry*) entry;

    ef_type = rmmi_phb_type_to_epbum_type(type);
    rmmi_header_rrsp("+EPBUM:");
    rmmi_int_space_rrsp(ef_type);
    rmmi_int_comma_rrsp(index);
    if (type == PHB_ANR || type == PHB_EMAIL || type == PHB_SNE)
        rmmi_int_comma_rrsp(occurrence);
    else
        rmmi_string_rrsp("", RMMI_COMMA, KAL_FALSE);
    
    if (type == PHB_ANR)
    {
        /*+EPBUM: <type>, <INDEX1>, <INDEX2>, <number>, <ton>, <ass_id>*/
        rmmi_string_comma_rrsp((kal_char*) phb_entry->tel.number);
        rmmi_int_comma_rrsp(phb_entry->tel.type);
        rmmi_tail_int_comma_rrsp(phb_entry->aas_id);
    }
    else if (type == PHB_EMAIL)
    {
        /*+EPBUM: <type>, <INDEX1>, <INDEX2>, <email>*/
        rmmi_gsm7bit_to_IRA(
                phb_usim_entry->field.email.email_address, buffer, 
                phb_usim_entry->field.email.email_length, PHB_MAX_EMAIL_LENGTH-1);
        rmmi_tail_string_comma_rrsp((kal_char*)buffer);

    }
    else if (type == PHB_SNE || type == PHB_AAS || type == PHB_GAS)
    {
        /*+EPBUM: <type>, <INDEX1>, <INDEX2>,<TEXT>, <Encode method>*/
        rmmi_phb_alphaId_rrsp(&(phb_usim_entry->field.sne), RMMI_COMMA);
        rmmi_tail_int_comma_rrsp((phb_usim_entry->field.sne.name_dcs == PHB_ASCII) ? 0 : 1);
    }
    else if (type == PHB_GRP)
    {
        /*+EPBUM: <type>, <INDEX1>, <INDEX2>, <GRP1>, <GRP2>, �K,<GRP_n>*/
        for (i=0;i<(rmmi_ptr->phb_grp_length-1);i++)
        {
            rmmi_int_comma_rrsp(phb_usim_entry->field.grp.gas_id[i]);
        }
        rmmi_tail_int_comma_rrsp(phb_usim_entry->field.grp.gas_id[i]);
    }
    else
    {
        ;// do nothing
    }
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_phb_read_ln_entry_rrsp
 * DESCRIPTION
 *  this function is used to output call log entries which is read from PHB to the UART
 *  where the trigger action is AT+CPBR
 * PARAMETERS
 *  no_list     [IN]         the number of entries in the list
 *  index [IN]      the beginning index of the first entry in the list
 *  list          [IN]         the entries to be outputted
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_read_ln_entry_rrsp(
        kal_uint8 no_list,
        kal_uint8 index,
        l4c_phb_ln_entry_struct *list)
{
#if defined(__MOD_PHB__)
#if !defined(__ULC_AT__)
    kal_uint8 i;
    kal_uint8 time[25];
    kal_uint8 rsp_string[4 * MAX_PS_NAME_SIZE];
    kal_uint16 string_length;
    kal_uint8 buffer[ MAX_UART_LENGTH * 3];

    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    if (rmmi_ptr->cpbr_range[1]==0) //+CPBR= <index>, only print specified index
        rmmi_ptr->cpbr_range[1] = rmmi_ptr->cpbr_range[0];

    for (i = 0; i < no_list; i++, index++)
    {
        //+CPBR= <index>, <index2>: print index between the range
        if ((index >= rmmi_ptr->cpbr_range[0]) && (index <= rmmi_ptr->cpbr_range[1]))
        {
            rmmi_ptr->arg_list[0] = (void*)&index;
            #if defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__)
                if (list[i].address_type == PHB_LN_VOIP)
                {
                    rmmi_ptr->arg_list[1] = (void*)list[i].address.uri;
                }
                else
                {
                    rmmi_ptr->arg_list[1] = (void*)list[i].address.tel.number;
                }
                rmmi_ptr->arg_list[2] = (void*)&list[i].address.tel.type;
            #else /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */
                rmmi_ptr->arg_list[1] = (void*)list[i].tel.number;
                rmmi_ptr->arg_list[2] = (void*)&list[i].tel.type;
            #endif /* defined(__VOIP__) || defined(__VIDEO_CALL_SUPPORT__) */

            kal_mem_set(rsp_string, 0, 4 * MAX_PS_NAME_SIZE);            
            if (list[i].alpha_id.name_length != 0)
            {
                l4c_phb_format_alpha_id(&list[i].alpha_id, rsp_string);                                
            }
            
            rmmi_ptr->arg_list[3] = (void*)rsp_string /* list[i].alpha_id.name */ ;
            rtc_to_string_format((kal_uint8*) time, DATE_AUX_YY_MM_DD, TIME_HH_MM_24, &list[i].time);
            rmmi_ptr->arg_list[4] = (void*)time;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CPBR: %d,\"%s\",%d,\"%s\",\"%s\"",       //vito remove space
                    rmmi_ptr->arg_list, 5);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }
    }

    return;
#endif /* !defined(__ULC_AT__) */
#endif
}

static void rmmi_general_rrsp(kal_uint8 *buffer, kal_uint16 length, kal_bool flush)
{
    static rmmi_uart_queue_struct queue = {0};

    if (length > MAX_DATA_QUEUE_LENGTH)
    {
        ASSERT(0);
    }
        
    if ((length + queue.length) > MAX_DATA_QUEUE_LENGTH)
    {
        //flush
        rmmi_write_to_uart(queue.data, queue.length, KAL_FALSE);
        queue.length = 0;
    }

    kal_mem_cpy(queue.data+queue.length, buffer, length);
    queue.length += length;

    if (flush)
    {
        rmmi_write_to_uart(queue.data, queue.length, KAL_FALSE);
        queue.length = 0;
    }
}

static void rmmi_hex_general_rrsp(kal_uint8 *data, kal_uint16 length, kal_char delimiter, kal_bool quote, kal_bool is_tail)
{
    kal_uint16 i;
    kal_char buffer[MAX_UART_LENGTH+2]; /* +2, for <CR><LF> */
    kal_char *buf_ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    buf_ptr = buffer;

    if (delimiter != '\0')
    {
        *buf_ptr = delimiter;
        buf_ptr++;
    }
    if (quote)
    {
        *buf_ptr = RMMI_DOUBLE_QUOTE;
        buf_ptr++;
    }
    
    for (i=0; i<length; i++)
    {
        kal_sprintf(buf_ptr, "%02X", data[i]);
        buf_ptr += 2;
        /*
            -2, because if we don't output the data in the buffer,
            the buffer overflow will occurs since we will add 3 bytes each time
            (two hex digits and one null pointer)
        */
        if ( (buf_ptr - buffer) >= (MAX_UART_LENGTH-2) )    
        {
            rmmi_general_rrsp((kal_uint8*)buffer, (kal_uint16)(buf_ptr-buffer), KAL_FALSE);
            buf_ptr = buffer;
        }
    }

    if (quote)
    {
        *buf_ptr = RMMI_DOUBLE_QUOTE;
        buf_ptr++;
    }

    if (buf_ptr != buffer)
    {
        rmmi_general_rrsp((kal_uint8*)buffer, (kal_uint16)(buf_ptr-buffer), KAL_FALSE);
    }

    if (is_tail)
    {
        buffer[0] = rmmi_ptr->s_reg.s3;
        buffer[1] = rmmi_ptr->s_reg.s4;
        rmmi_general_rrsp((kal_uint8*)buffer, 2, KAL_TRUE);
    }

}

void rmmi_header_rrsp(kal_char *string)
{
#if !defined(__SLIM_AT__)
    kal_uint16 len;
    kal_char buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (rmmi_ptr->rsp_mode.format != RMMI_NUM_PARTIAL_HEAD_TAIL)
    {
        sprintf(buffer, "%c%c%s", 
                rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4, string);
    }
    else
    {
        sprintf(buffer, "%s", string);
    }

    len = (kal_uint16)strlen(buffer);
    rmmi_general_rrsp((kal_uint8*)buffer, len, KAL_FALSE);
#endif 
}

void rmmi_tail_int_comma_rrsp(kal_uint32 integer)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_int_rrsp(integer, RMMI_COMMA);
#endif
}

void rmmi_tail_int_space_rrsp(kal_uint32 integer)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_int_rrsp(integer, RMMI_SPACE);
#endif
}


void rmmi_tail_int_rrsp(kal_uint32 integer,  kal_char delimiter)
{
#if !defined(__SLIM_AT__)
    kal_char buffer[15];

    sprintf(buffer, "%d", integer);
    rmmi_tail_string_rrsp(buffer, delimiter, KAL_FALSE);

#endif
}

void rmmi_tail_string_comma_rrsp(kal_char *string)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_string_rrsp(string, RMMI_COMMA, KAL_TRUE);
#endif
}

void rmmi_tail_string_space_rrsp(kal_char *string)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_string_rrsp(string, RMMI_SPACE, KAL_TRUE);
#endif
}

void rmmi_tail_string_rrsp(kal_char *string,  kal_char delimiter, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    kal_uint16 len;
    kal_char buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (quote)
    {
        sprintf(buffer, "%c\"%s\"%c%c", 
                delimiter, string, rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);
    }
    else
    {
        sprintf(buffer, "%c%s%c%c", 
                delimiter, string, rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);    
    }

    len = (kal_uint16)strlen(buffer);
    rmmi_general_rrsp((kal_uint8*)buffer, len, KAL_TRUE);
#endif
}

void rmmi_tail_hex_space_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_hex_rrsp(data, length, RMMI_SPACE, quote);
#endif
}

void rmmi_tail_hex_comma_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    rmmi_tail_hex_rrsp(data, length, RMMI_COMMA, quote);
#endif
}

void rmmi_tail_hex_rrsp(kal_uint8 *data, kal_uint16 length, kal_char delimiter, kal_bool quote)
{
    rmmi_hex_general_rrsp(data, length, delimiter, quote, KAL_TRUE);
}

void rmmi_string_space_rrsp(kal_char *string)
{
#if !defined(__SLIM_AT__)
    rmmi_string_rrsp(string, RMMI_SPACE, KAL_TRUE);
#endif
}


void rmmi_string_comma_rrsp(kal_char *string)
{
#if !defined(__SLIM_AT__)
    rmmi_string_rrsp(string, RMMI_COMMA, KAL_TRUE);
#endif
}

void rmmi_string_rrsp(kal_char *string, kal_char delimiter, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    kal_uint16 len;
    kal_char buffer[MAX_UART_LENGTH];
    kal_char *tmp_buf;

    tmp_buf = buffer;

    if (delimiter != '\0')
    {
        sprintf(tmp_buf, "%c", delimiter);
        tmp_buf++;
    }

    if (quote)
    {
        sprintf(tmp_buf, "\"%s\"", string);
    }
    else
    {
        sprintf(tmp_buf, "%s", string);    
    }

    len = (kal_uint16)strlen(buffer);
    rmmi_general_rrsp((kal_uint8*)buffer, len, KAL_FALSE);
#endif
}

void rmmi_hex_space_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    rmmi_hex_rrsp(data, length, RMMI_SPACE, quote);
#endif
}

void rmmi_hex_comma_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    rmmi_hex_rrsp(data, length, RMMI_COMMA, quote);
#endif
}

void rmmi_hex_rrsp(kal_uint8 *data, kal_uint16 length, kal_char delimiter, kal_bool quote)
{
#if !defined(__SLIM_AT__)
    rmmi_hex_general_rrsp(data, length, delimiter, quote, KAL_FALSE);
#endif
}

void rmmi_int_space_rrsp(kal_uint32 integer)
{
#if !defined(__SLIM_AT__)
    rmmi_int_rrsp(integer, RMMI_SPACE);
#endif
}

void rmmi_int_comma_rrsp(kal_uint32 integer)
{
#if !defined(__SLIM_AT__)
    rmmi_int_rrsp(integer, RMMI_COMMA);
#endif
}

void rmmi_int_rrsp(kal_uint32 integer, kal_char delimiter)
{
#if !defined(__SLIM_AT__)
    kal_uint16 len;
    kal_char buffer[MAX_UART_LENGTH];

    if (delimiter != '\0')
        sprintf(buffer, "%c%d", delimiter, integer);
    else
        sprintf(buffer, "%d", integer);

    len = (kal_uint16)strlen(buffer);
    rmmi_general_rrsp((kal_uint8*)buffer, len, KAL_FALSE);
#endif
}

void rmmi_phb_alphaId_rrsp(l4_name_struct *alpha_id, kal_char delimiter)
{
#if !defined(__SLIM_AT__)
    kal_uint16 len;
    kal_uint8 *buffer, *out_string; 
    #ifdef __PHB_0x81_SUPPORT__
    kal_uint8 ucs2_data[2 * MAX_PS_NAME_SIZE]; 
    istring_type decoded_str;
    
    decoded_str.length = 2 * MAX_PS_NAME_SIZE - 2;
    decoded_str.data = ucs2_data;
    #endif

    buffer = get_ctrl_buffer(MAX_PS_NAME_SIZE*4+1);
    out_string = get_ctrl_buffer(MAX_PS_NAME_SIZE*4+4); // add 4 for two " and ,\0

    if (alpha_id->name_dcs == PHB_ASCII) //GSM7bit
    {
        rmmi_gsm7bit_to_IRA(alpha_id->name, buffer, alpha_id->name_length, MAX_PS_NAME_SIZE*4);
    }
    else if (alpha_id->name_dcs == PHB_UCS2)
    {
         rmmi_print_ucs2(alpha_id->name, buffer);
    }
    #ifdef __PHB_0x81_SUPPORT__
    else if (alpha_id->name_dcs == PHB_UCS2_82)
    {
        kal_mem_set(ucs2_data, 0, 2 * MAX_PS_NAME_SIZE);
        istring_decode_0x82_to_0x80(
            alpha_id->name_length,
            alpha_id->name,
            &decoded_str);
        rmmi_print_ucs2(decoded_str.data, buffer);
    }
    else if (alpha_id->name_dcs == PHB_UCS2_81)
    {
        kal_mem_set(ucs2_data, 0, 2 * MAX_PS_NAME_SIZE);
        istring_decode_0x81_to_0x80(
            alpha_id->name_length,
            alpha_id->name,
            &decoded_str);
        rmmi_print_ucs2(decoded_str.data, buffer);
    }
    #endif
    else 
    {
         buffer[0] = RMMI_END_OF_STRING_CHAR;
    }

    sprintf((kal_char*)out_string, "%c\"%s\"", delimiter, buffer);

    len = (kal_uint16)strlen((kal_char*)out_string);
    rmmi_general_rrsp(out_string, len, KAL_FALSE);

    free_ctrl_buffer(buffer);
    free_ctrl_buffer(out_string);
#endif /* !defined(__SLIM_AT__) */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_phb_general_rrsp
 * DESCRIPTION
 *  This functio is used to output result code ("OK" or "ERROR") for AT commands of PHB
 *  
 * PARAMETERS
 *  result      [IN]        the action result
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_phb_general_rrsp(l4c_result_struct *result)
{
#if defined(__MOD_PHB__)

    sim_chv_info_struct chv_info;
    sim_chv_status_struct chv_status;
    kal_uint16 cause;
    #ifdef __OP01__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    #endif

    if (result->flag == L4C_ERROR)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result->cause);
        if (result->cause == PHB_CAUSE_CAPACITY_EXCEEDED)
        {
            cause = RMMI_ERR_MEM_FULL;
        }
        else if (result->cause == SIM_EF_RECORD_FULL)
        {
            cause = DIAL_ERRSTRING_TOO_LONG_ERR;
        }
        else if (result->cause ==  SIM_CHV_RETRY_ALLOW)
        {
            l4c_sim_check_pin_status_req(&chv_info, &chv_status);

            if (chv_info.chv2_count > 0)
            {
                cause = SIM_PIN2_REQUIRED;
            }
            else if (chv_info.ubchv2_count > 0)
            {
                cause = SIM_PUK2_REQUIRED;

            }
            else
            {
                cause = SIM_FAILURE;
            }            
            
        }
        else if (result->cause == RMMI_ERR_NO_FOUND)
        {
            cause = RMMI_ERR_NO_FOUND;
        }
        else
        {
            cause = RMMI_ERR_UNKNOWN;
        }
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }

    #ifdef __OP01__
    if (rmmi_ptr->scpbw_entry_ptr != NULL)
    {
        free_ctrl_buffer(rmmi_ptr->scpbw_entry_ptr);
        rmmi_ptr->scpbw_entry_ptr = NULL;
    }
    #endif

#endif
}

#endif /* __MOD_PHB__ */ 

#ifdef __MOD_SMU__


/*****************************************************************************
 * FUNCTION
 *  l4c_smu_exe_restricted_access_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  sw1             [IN]        
 *  sw2             [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_exe_restricted_access_rrsp(
        l4c_result_struct result,
        kal_uint8 sw1,
        kal_uint8 sw2,
        kal_uint16 length,
        kal_uint8 *response)
{
#if !defined(__SLIM_AT__)

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMU_EXE_RESTRICTED_ACCESS_RRSP_ENTRY);
    if (result.flag == L4C_ERROR)
    {
        //rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
        rmmi_crsm_exe_rsp_fmttr(sw1, sw2, 0, response);
    }
    else
    {
        rmmi_crsm_exe_rsp_fmttr(sw1, sw2, length, response);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_authenticate_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_sim_authenticate_rrsp(
        l4c_result_struct result,
        kal_uint8 sw1,
        kal_uint8 sw2,
        kal_uint16 length,
        kal_uint8 *response)
{
#if !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__)
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

   if (result.flag == L4C_ERROR && result.cause == SIM_NO_INSERTED)
   {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, SIM_NOT_INSERTED);
   }
   else
   {
        kal_uint16 string_length;
        kal_uint8 buffer[256*2+24];
        kal_uint8 *response_buffer = NULL;

        if (result.flag == L4C_ERROR)
        {
            length = 0; // only print <sw1>,<sw2>
        }

        ASSERT(response != NULL && length <= 256); /* max length of sim response data is 256 */

        response_buffer = (kal_uint8 *) get_ctrl_buffer(512+1); // 256*2
        kal_mem_set(buffer,0,sizeof(buffer));
        kal_mem_set(response_buffer,0,512);
    	
        response[length] = RMMI_END_OF_STRING_CHAR;

        check_sms_pdu_string(length, response, response_buffer);

        rmmi_ptr->arg_list[0] = (void*)&sw1;
        rmmi_ptr->arg_list[1] = (void*)&sw2;

        if (length > 0)
        {
            rmmi_ptr->arg_list[2] = (void*)response_buffer;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EAUTH: %d, %d, \"%s\"", rmmi_ptr->arg_list, 3);
        }
        else
        {
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EAUTH: %d, %d", rmmi_ptr->arg_list, 2);
        }
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

        free_ctrl_buffer(response_buffer);
   }
#endif /* !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__) */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smu_write_sim_rrsp
 * DESCRIPTION
 *  This is l4c_smu_write_sim_rrsp function of L4C module.
 *  respond to RMMI about the sim write request for CSIM
 * PARAMETERS
 *  result          [IN]        Result of the record req
 *  response        [IN]        Response cause from SMU
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_write_sim_rrsp(kal_bool result, l4c_result_struct response)
{
#if !defined(__SLIM_AT__)
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMU_WRITE_SIM_RRSP_ENTRY);
    if (result)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_csim_error_rsp_fmttr(response.cause);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smu_read_sim_rrsp
 * DESCRIPTION
 *  This is l4c_smu_read_sim_rrsp function of L4C module.
 *  respond to RMMI about sim read request for CSIM
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from SIM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_read_sim_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 i;
    kal_char buff[3];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMU_READ_SIM_RRSP_ENTRY);
    ASSERT(data != NULL);       //check if null pointer

    data[length] = RMMI_END_OF_STRING_CHAR;     //add the end of a string
    rmmi_ptr->arg_list[0] = (void*)data;

    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSIM: %s", rmmi_ptr->arg_list, 1);

    if (result.flag != L4C_ERROR)
    {
        for (i = 0; i < length; i++)
        {
            kal_sprintf(buff, "%2.2X", *data++);
            rmmi_ptr->arg_list[0] = (void*)buff;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%s", rmmi_ptr->arg_list, 1);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_FALSE);
        }

        //     buffer[0]='\0';
        //  RMMI_PTR->arg_list[1] = (void *)&RMMI_PTR->s_reg.s3;
        rmmi_ptr->arg_list[2] = (void*)&rmmi_ptr->s_reg.s4;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%c", rmmi_ptr->arg_list, 1);

        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_csim_error_rsp_fmttr(result.cause);
    }

    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smu_exe_dial_mode_rrsp
 * DESCRIPTION
 *  This is l4c_smu_exe_dial_mode_rrsp function of L4C module.
 *  respond to RMMI about sim dial mode  request for CSIMD
 * PARAMETERS
 *  result      [IN]        Result of the request
 *  cause       [IN]        Response cause from SMU
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_exe_dial_mode_rrsp(kal_bool result, kal_uint16 cause)
{
#if !defined(__SLIM_AT__)
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMU_EXE_DIAL_MODE_RRSP_ENTRY);

    if (result)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
    }

    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_smu_sml_status_rrsp
 * DESCRIPTION
 *  This is l4c_smu_sml_status_rrsp function of L4C module.
 *  respond to RMMI about SIM-ME lock status
 * PARAMETERS
 *  result          [IN]        Result of the request
 *  retry_count     [?]         
 *  cause(?)        [IN]        Response cause from SMU
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_smu_sml_status_rrsp(kal_bool  result,kal_uint8*  state,kal_uint8*  retry_count,
		kal_uint8*  autolock_count,kal_uint8*  num_of_sets,kal_uint8*  total_size_of_cat,kal_uint8*  key_state,
		kal_uint8*  imsi,kal_uint8  is_valid_gid1,kal_uint8  ef_gid1,kal_uint8  is_valid_gid2,kal_uint8  ef_gid2,
		kal_uint8  digits_of_mnc) 
{
#if defined(__SIM_ME_LOCK__) && !defined(__SLIM_AT__)
    kal_uint8 *buffer, i;
    kal_uint16 string_length;
    kal_uint8 info[7][30];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMU_SML_STATUS_RRSP_ENTRY);

    if (result)
    {
        if (rmmi_ptr->clck_sml_type != TYPE_UNSPECIFIED)
        {
            kal_uint8 query_state = 0;

            if (state[rmmi_ptr->clck_sml_type - TYPE_NP] == SML_STATE_LOCK)
            {
                query_state = 1;
            }
            
            rmmi_header_rrsp("+CLCK:");
            rmmi_tail_int_space_rrsp(query_state);
            rmmi_ptr->clck_sml_type = TYPE_UNSPECIFIED;
        }
        else
        {
            for (i = 0; i < 7; i++)
            {
                kal_sprintf((char *) info[i], "(%d,%d,%d,%d,%d,%d,%d)", i, state[i], retry_count[i],
                autolock_count[i], num_of_sets[i], total_size_of_cat[i],
                key_state[i]);
                rmmi_ptr->arg_list[i] = (void *) info[i];
            }
        #ifdef __SP_RIL_SUPPORT__
            rmmi_ptr->arg_list[7] = (void *) &imsi[1];
        #else
            rmmi_ptr->arg_list[7] = (void *) imsi;
        #endif
            rmmi_ptr->arg_list[8] = (void *) &is_valid_gid1;
            rmmi_ptr->arg_list[9] = (void *) &ef_gid1;
            rmmi_ptr->arg_list[10] = (void *) &is_valid_gid2;
            rmmi_ptr->arg_list[11] = (void *) &ef_gid2;
            rmmi_ptr->arg_list[12] = (void *) &digits_of_mnc;

            buffer = get_ctrl_buffer(500);
            string_length = rmmi_fast_string_print (buffer,
                                            (kal_uint8 *)"+ESMLCK: %s,%s,%s,%s,%s,%s,%s,\"%s\",%d,\"%d\",%d,\"%d\",%d", 
                                            rmmi_ptr->arg_list,
                                            13);

            rmmi_write_to_uart((kal_uint8 *)buffer, string_length, KAL_TRUE);		
            free_ctrl_buffer(buffer);
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNSPECIFIED);
    }

    return;
#endif /* defined(__SIM_ME_LOCK__) && !defined(__SLIM_AT__) */
}

/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_profile_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_bt_sim_profile_rrsp(kal_uint16 result ,kal_uint8 action, kal_uint8 current_type, kal_uint8 supported_type, kal_uint16 length, kal_uint8 *response)
{
#if !defined(__MMI_FMI__)
#ifdef __BT_SIM_PROFILE__
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

   if (result == 0x00)
   {
	kal_uint16 string_length;   
	kal_uint8 buffer[APDU_RSP_MAX_LEN*2+24];
    	kal_uint8 *response_buffer = NULL;

   	switch(action)
   	{
   		case 0: /* Connect */
		{
			length = (length < ATR_MAX_LEN)?(length):(ATR_MAX_LEN);
				
			if (length > 0)
			{
				response_buffer = (kal_uint8 *) get_ctrl_buffer(ATR_MAX_LEN*2+1); 
				check_sms_pdu_string(length, response, response_buffer);

	       		rmmi_ptr->arg_list[0] = (void*)&current_type;
	       		rmmi_ptr->arg_list[1] = (void*)&supported_type;
	       		rmmi_ptr->arg_list[2] = (void*)response_buffer;			
	       		string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EBTSAP: %d,%d,\"%s\"", rmmi_ptr->arg_list, 3);

	    			rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
			    	free_ctrl_buffer(response_buffer);
			}
			break;
		}
   		case 1: /* Disconnect */			
   		case 3: /* SIM PowerOff */
		{
			break;
		}			
   		case 2: /* SIM PowerOn */
   		case 4: /* SIM Reset */
		{
			length = (length < ATR_MAX_LEN)?(length):(ATR_MAX_LEN);
				
			if (length > 0)
			{
				response_buffer = (kal_uint8 *) get_ctrl_buffer(ATR_MAX_LEN*2+1); 
				check_sms_pdu_string(length, response, response_buffer);

	       		rmmi_ptr->arg_list[0] = (void*)&current_type;
	       		rmmi_ptr->arg_list[1] = (void*)response_buffer;			
	       		string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EBTSAP: %d,\"%s\"", rmmi_ptr->arg_list, 2);

	    			rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
			    	free_ctrl_buffer(response_buffer);
			}
			break;
		}		
   		case 5: /* APDU */
		{
			length = (length < APDU_RSP_MAX_LEN)?(length):(APDU_RSP_MAX_LEN);
				
			if (length > 0)
			{
				response_buffer = (kal_uint8 *) get_ctrl_buffer(APDU_RSP_MAX_LEN*2+1); 
				check_sms_pdu_string(length, response, response_buffer);

	       		rmmi_ptr->arg_list[0] = (void*)response_buffer;			
	       		string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EBTSAP: \"%s\"", rmmi_ptr->arg_list, 1);

	    			rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
			    	free_ctrl_buffer(response_buffer);
			}
			break;
		}		
		default:
			break;
   	}
	
    	rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
   }
   else
   {
	kal_uint16 cause = RMMI_ERR_UNSPECIFIED;
   
	if (result == 0x01)
	{
 		cause = RMMI_ERR_BT_SAP_UNDEFINED;
	}
	else if (result == 0x02)
	{
 		cause = RMMI_ERR_BT_SAP_NOT_ACCESSIBLE;	
	}
	else if (result == 0x04)
	{
 		cause = RMMI_ERR_BT_SAP_CARD_REMOVED;		
	}	
	rmmi_result_code_fmttr(RMMI_RCODE_ERROR, cause);
   }
#endif
#endif
}
//mtk02514_nfc
#if defined(__CSIM__) || defined(__CGLA__)/* MAUI_03082391 */
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_apdu_access_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_sim_apdu_access_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *response,l4c_action_enum action)
{
    kal_char *header = "";

   if (result.flag == L4C_OK)
   {
        /* for CSIM: +CSIM: <length>, <response>*/
        /* for CGLA: +CGLA: <length>, <response>*/
	
        if (action == CSIM_EXE)
        {
            header = "+CSIM:";
        }
        else if(action == CGLA_EXE)
        {
            header = "+CGLA:";
        }
        rmmi_header_rrsp(header);
        rmmi_int_space_rrsp(length<<1);
        rmmi_tail_hex_comma_rrsp(response, length, KAL_TRUE);

        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else   	
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);   
    }
    return;
}
#endif

#ifdef __UICC_CHANNEL_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_manage_channel_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_sim_manage_channel_rrsp(l4c_result_struct result, kal_uint8 channel_id, l4c_action_enum action)
{
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint8 length;

    if (result.flag == L4C_OK)
    {
        /* for CCHO: <session_id>*/
        /* for CCHC: +CCHC    , but this is too strange, we don't output it now*/
        if (action == CCHO_EXE)
        {
            length = (kal_uint8)kal_sprintf((char*)buffer, "%d", channel_id);
            rmmi_write_to_uart(buffer, length, KAL_TRUE);
        }

        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else   	
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);   
    }
    return;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_sim_reset_rrsp
 * DESCRIPTION
 *  Return "+ESIMS: 1" or "+ESIMS: 0" to tell RMMI if SIM card inserted
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_sim_reset_rrsp(kal_bool is_sim_inserted)
{
 #ifndef __GSMCDMA_DUALSIM__
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 string_length;

    kal_sprintf((kal_char*) buffer, "+ESIMS: %d", (kal_uint8)is_sim_inserted);
    string_length = (kal_uint8)strlen((char*)buffer);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
  #endif	

    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);  	
    return;
}

#ifdef __OP01__
/*****************************************************************************
 * FUNCTION
 *  l4c_op01_spn_read_rrsp
 * DESCRIPTION
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_op01_spn_read_rrsp(l4c_result_struct result, kal_uint8 spn_type, kal_uint8 *file, kal_uint16 length)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result.flag == L4C_OK)
    {
        kal_uint16 string_length;   
        kal_uint8 buffer[128];
        kal_uint8 display_rplmn;
        kal_uint8 coding = 1;  // Always output as UCS2
        kal_uint8 spn[33];

        if (file[0] & 0x01)
        {
            display_rplmn = 1;
        }
        else
        {
            display_rplmn = 0;
        }

        if (length > 16)
        {
            length = 16;
        }

        kal_mem_set(spn, 0, 33);
        check_sms_pdu_string(length, &file[1], spn);

        rmmi_ptr->arg_list[0] = (void*)&display_rplmn;
        rmmi_ptr->arg_list[1] = (void*)&coding;
        rmmi_ptr->arg_list[2] = (void*)spn;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "^SPN:%d,%d,%s", rmmi_ptr->arg_list, 3);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
}
#endif

#ifdef __GSMCDMA_DUALSIM__
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_get_gsmcdma_dualsim_info_rrsp
 * DESCRIPTION
 *  Return "+ESIMS: 1" or "+ESIMS: 0" to tell RMMI if SIM card inserted
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_get_gsmcdma_dualsim_info_rrsp(kal_uint8 is_sim_inserted, kal_uint8 is_df_gsm_existed, kal_uint8 is_df_cdma_existed)
{
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 string_length;
    kal_uint8 sim_type;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (is_sim_inserted == KAL_FALSE)
    {
    	sim_type = 0;  // No SIM
    }
    else if (is_df_gsm_existed && is_df_cdma_existed)
    {
    	sim_type = 3;  // Dual mode SIM
    }
    else if (is_df_gsm_existed)
    {
    	sim_type = 1;  // GSM SIM
    }
    else
    {
    	sim_type = 2;  // CDMA SIM
    }

    kal_sprintf((kal_char*) buffer, "+ESIMS: %d", (kal_uint8)sim_type);
    string_length = strlen((char*)buffer);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);

#if defined(__GEMINI__) && defined(__CTA_DUAL_SIM_STANDARD__)
    l4c_sim_reset_req(rmmi_ptr->current_src);
#else	
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);  	
#endif

    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_query_info_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
 void l4c_sim_query_info_rrsp(
        l4c_result_struct result,
        sim_query_info_enum info_id,
        sim_query_info_field *info_data)
{

    if (result.flag == L4C_OK)
    {
        /* +ESIMINFO: <INFO_ID>, <INFO_DATA>*/
        rmmi_header_rrsp("+ESIMINFO:");
        rmmi_int_space_rrsp(info_id);        

        if (info_id == SIM_INFO_ATR)
            rmmi_tail_hex_comma_rrsp(info_data->atr.atr, info_data->atr.length, KAL_TRUE);
        
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
}



#endif /* __MOD_SMU__ */ 

#ifdef __MOD_SMSAL__


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_send_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  cause       [IN]        
 *  mr          [IN]        
 *  scts        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_send_rrsp(kal_bool result, kal_uint16 cause, kal_uint8 mr, kal_uint8 *scts,kal_uint8 src_id)
{
#if !defined(__ULC_AT__) // for disable at+cmgs,at+cmgc,at+cmss
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_SEND_RRSP_ENTRY);

    if (result == KAL_FALSE)
    {
        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, cause, KAL_TRUE);
    }
    else
    {
        ASSERT(scts != NULL);
        rmmi_sms_send_rsp_fmttr(mr, scts,src_id);
    }
    return;
#endif	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_list_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  cause           [IN]        
 *  length          [IN]        
 *  mti             [IN]        
 *  status          [IN]        
 *  index           [IN]        
 *  hex_dspl        [IN]        
 *  alpha_id        [IN]        
 *  msg_header      [?]         
 *  data            [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_list_rrsp(
        kal_bool result,
        kal_uint16 cause,
        kal_uint16 length,
        kal_uint8 mti,
        kal_uint8 status,
        kal_uint16 index,
        kal_uint8 hex_dspl,
        l4_name_struct alpha_id,
        void *msg_header,
        void *data)
{
#if !defined(__SLIM_AT__) 
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_READ_MSG_LIST_RRSP_ENTRY);
    if (result == KAL_FALSE)
    {
        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, cause, KAL_TRUE);
    }
    else
    {
        //ASSERT (data != NULL);
        //convert index to index+1 (index start 0 => 1)
        rmmi_sms_list_rsp_fmttr(length, mti, status, (kal_uint16) (index + 1), hex_dspl, alpha_id, msg_header, data);
        if (check_multi_command((kal_uint8) result) != KAL_FALSE)
        {
            return;
        }
        //rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  cause           [IN]        
 *  length          [IN]        
 *  mti             [IN]        
 *  status          [IN]        
 *  hex_dspl        [IN]        
 *  alpha_id        [IN]        
 *  msg_header      [?]         
 *  data            [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_rrsp(
        kal_bool result,
        kal_uint16 cause,
        kal_uint16 length,
        kal_uint8 mti,
        kal_uint8 status,
        kal_uint8 hex_dspl,
        l4_name_struct alpha_id,
        void *msg_header,
        void *data)
{
#if !defined(__ULC_AT__) // for disable at+cmgr
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_READ_MSG_RRSP_ENTRY);
    if (result == KAL_FALSE)
    {
        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, cause, KAL_TRUE);
    }
    else
    {
        //ASSERT (data != NULL);
        rmmi_sms_read_rsp_fmttr(length, mti, status, hex_dspl, alpha_id, msg_header, data);
        if (check_multi_command((kal_uint8) result) != KAL_FALSE)
        {
            return;
        }
        /* mtk00924_060510: give OK when receiving MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ */
        //mtk01616_070510: compile option MMI_FMI is necessary
    #ifndef __MMI_FMI__
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    #endif 
	#ifdef __SMS_STORAGE_BY_MMI__ 
		rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
	#endif
    }
    return;
#endif /* !defined(__ULC_AT__) */	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_list_pdu_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status          [IN]        
 *  index           [IN]        
 *  data            [?]         
 *  message_len     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_list_pdu_rrsp(
        kal_uint8 status,
        kal_uint16 index,
        peer_buff_struct *data,
        kal_uint16 message_len)
{
#if !defined(__SLIM_AT__) 
    kal_uint8 *pdu_stream_ptr;
    kal_uint16 string_length;
    kal_uint8 buffer[SMSAL_MAX_TPDU_SIZE * 2 + 30]; //30 is for header
    kal_uint16 len;
    kal_uint8 buf[3]; //for storing CR LF
    kal_uint8 *ptr; 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_READ_MSG_LIST_PDU_RRSP_ENTRY);
    ASSERT(data != NULL);
    rmmi_ptr->arg_list[0] = (void*)&index;
    rmmi_ptr->arg_list[1] = (void*)&status;
    rmmi_ptr->arg_list[2] = (void*)&message_len;       //mtk00924_051107: the length should exclude the SC address part, do not print the pdu_len
    //RMMI_PTR->arg_list[2] = (void *)&data->pdu_len;
    rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s3;
    rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s4;

    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CMGL: %u, %d,, %u%c%c", rmmi_ptr->arg_list, 5);

    pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(data, &len);

    check_sms_pdu_string(data->pdu_len, pdu_stream_ptr, buffer + string_length);

    string_length = (kal_uint16)strlen((kal_char*)buffer);

    ptr = buffer;
    kal_sprintf((char*)buf, "%c%c", rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);

    if (rmmi_ptr->rsp_mode.format != RMMI_NUM_PARTIAL_HEAD_TAIL)
    {        
        rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE);//write CR LF in begining
    }
    
    //separately write to UART to prevent overwrite MAX_DATA_QUEUE_LENGTH
    while (string_length > (MAX_DATA_QUEUE_LENGTH/2))
    {
        rmmi_write_to_uart((kal_uint8*) ptr, (MAX_DATA_QUEUE_LENGTH/2), KAL_FALSE);
        ptr += (MAX_DATA_QUEUE_LENGTH/2);
        string_length -= (MAX_DATA_QUEUE_LENGTH/2);
    }
    
    rmmi_write_to_uart((kal_uint8*) ptr, string_length, KAL_FALSE);
    rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE); //write CR LF end

#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_read_msg_pdu_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status      [IN]        
 *  data        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_read_msg_pdu_rrsp(kal_uint8 status, peer_buff_struct *data)
{
#if !defined(__ULC_AT__) //for disable at+cmgr
    kal_uint8 *pdu_stream_ptr;
    kal_uint16 string_length;
    kal_uint8 buffer[SMSAL_MAX_TPDU_SIZE * 2 + 30 + 1];//30 is for header
    kal_uint8 temp[3];
    kal_uint16 len;
    kal_uint8 buf[3]; //for storing CR LF
    kal_uint8 *ptr; 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_READ_MSG_PDU_RRSP_ENTRY);
    ASSERT(data != NULL);
    rmmi_ptr->arg_list[0] = (void*)&status;
    rmmi_ptr->arg_list[1] = (void*)&len;       //for module : Maui_sw 9943
    rmmi_ptr->arg_list[2] = (void*)&rmmi_ptr->s_reg.s3;
    rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s4;

    pdu_stream_ptr = (kal_uint8*) get_peer_buff_pdu(data, &len);

    check_sms_pdu_string(data->pdu_len, pdu_stream_ptr, buffer+30);

    //for module : Maui_sw 9943
    // length should exclude SC address
    temp[0] = *(buffer+30);
    temp[1] = *(buffer+30+1);
    temp[2] = '\0';
    len -= (kal_uint16)atoi((char*)temp) + 1;

    if (rmmi_ptr->is_emgr == KAL_TRUE) 
    {
    	string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EMGR: %d,, %u%c%c", rmmi_ptr->arg_list, 4);
    }
    else
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CMGR: %d,, %u%c%c", rmmi_ptr->arg_list, 4);
    }

    kal_mem_cpy(buffer+string_length, buffer+30, SMSAL_MAX_TPDU_SIZE * 2 + 1);

    string_length = (kal_uint16)strlen((kal_char*)buffer);

    ptr = buffer;
    kal_sprintf((char*)buf, "%c%c", rmmi_ptr->s_reg.s3, rmmi_ptr->s_reg.s4);

    if (rmmi_ptr->rsp_mode.format != RMMI_NUM_PARTIAL_HEAD_TAIL)
    {        
        rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE);//write CR LF in begining
    }
    
    //separately write to UART to prevent overwrite MAX_DATA_QUEUE_LENGTH
    while (string_length > (MAX_DATA_QUEUE_LENGTH/2))
    {
        rmmi_write_to_uart((kal_uint8*) ptr, (MAX_DATA_QUEUE_LENGTH/2), KAL_FALSE);
        ptr += (MAX_DATA_QUEUE_LENGTH/2);
        string_length -= (MAX_DATA_QUEUE_LENGTH/2);
    }
    
    rmmi_write_to_uart((kal_uint8*) ptr, string_length, KAL_FALSE);
    rmmi_write_to_uart((kal_uint8*) buf, 2, KAL_FALSE); //write CR LF end

    if (check_multi_command(L4C_OK) != KAL_FALSE)
    {
        return;
    }

    /* mtk00924_060510: give OK when receiving MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ */
#ifndef __MMI_FMI__
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif 

#ifdef __SMS_STORAGE_BY_MMI__ 
	rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif
#endif /* !defined(__ULC_AT__) */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_sms_exe_write_msg_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result      [IN]        
 *  cause       [IN]        
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sms_exe_write_msg_rrsp(kal_bool result, kal_uint16 cause, kal_uint16 index)
{
#if !defined(__ULC_AT__) // for disable at+cmgw

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_SMS_EXE_WRITE_MSG_RRSP_ENTRY);
    if (result == KAL_FALSE)
    {
        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, cause, KAL_TRUE);
    }
    else
    {
        //ASSERT (index != NULL);   /*mtkoo924 : index may be 0, should not assert*/
        //indx = *((kal_uint8 *)index+0);
        rmmi_sms_write_rsp_fmttr((kal_uint16) (index + 1));     //convert index : start from 1 not 0
    }
    return;
#endif	
}


#endif /* __MOD_SMSAL__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_write_nvram_rrsp
 * DESCRIPTION
 *  This is l4c_eq_write_nvram_rrsp function of L4C module.
 *  respond to RMMI about the nvram write request for NVRAM
 * PARAMETERS
 *  result          [IN]        Result of the record req
 *  file_idx        [IN]        
 *  para            [IN]        
 *  response(?)     [IN]        Response cause from SMU
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_write_nvram_rrsp(l4c_result_struct result, kal_uint8 file_idx, kal_uint16 para)
{
    kal_brief_trace(TRACE_FUNC, FUNC_L4C_EQ_WRITE_NVRAM_RRSP_ENTRY);
    if (result.flag)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_cnvrm_error_rsp_fmttr(result.cause);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_nvram_rrsp
 * DESCRIPTION
 *  This is l4c_eq_read_nvram_rrsp function of L4C module.
 *  respond to RMMI about sim read request for CSIM
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from NVRAM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_read_nvram_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 i;        //using to convert each element in *data byte stream
    kal_char buff[3];   //using to store the hex character and end of string character
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_L4C_EQ_READ_NVRM_RRSP_ENTRY);
    ASSERT(data != NULL);       //check if null pointer

    //string_length = rmmi_fast_string_print (
    //       buffer,
    //       (kal_uint8 *)"+CNVRAM: %s",
    //       RMMI_PTR->arg_list,
    //       1
    //       );

    if (result.flag != L4C_ERROR)
    {
        for (i = 0; i < length; i++)    //transfer each byte into hex string
        {
            kal_sprintf(buff, "%2.2X", *data++);
            rmmi_ptr->arg_list[0] = (void*)buff;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%s", rmmi_ptr->arg_list, 1);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_FALSE); //output to UART without CR or LF
        }

        //buffer[0]='\0'; //clear buffer
        rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->s_reg.s3;    //output CR
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%c", rmmi_ptr->arg_list, 1);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_cnvrm_error_rsp_fmttr(result.cause);
    }

    return;

}

#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_diag_nvm_read_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_diag_nvm_read_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 func)
{
    kal_uint16 string_length = 0;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&func;
		if (func == RMMI_DIAG_FOR_AT)
		{
		    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+DIAG: CONFIG = AT(%d)", rmmi_ptr->arg_list, 1);
		}
		else if  (func == RMMI_DIAG_FOR_TST)
		{
		    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+DIAG: CONFIG = TST(%d)", rmmi_ptr->arg_list, 1);
		}
		else
		{            
		    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+DIAG: CONFIG = UNKNOWN(%d)", rmmi_ptr->arg_list, 1);
		}
    }
	rmmi_final_rsp_generator(src_id, result, (kal_uint8*)buffer, string_length);
    return;
}
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */

#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
/*****************************************************************************
 * FUNCTION
 *  rmmi_mbpc_read_result_code_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_mbpc_read_result_code_fmttr(kal_uint8 src_id, nvram_ef_mobile_broadband_provision_context_struct* prov_cntxt, kal_uint8 entry_id)
{
    kal_uint16 string_length = 0;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN+164]; //apn100, user32, passwd32
    RMMI_PTR->current_src = src_id;         
    RMMI_PTR->arg_list[0] = (void*) &(prov_cntxt->status);    
    RMMI_PTR->arg_list[1] = (void*) &entry_id;    
    RMMI_PTR->arg_list[2] = (void*) &(prov_cntxt->context_id);
    RMMI_PTR->arg_list[3] = (void*) &(prov_cntxt->context_type);    
    RMMI_PTR->arg_list[4] = (void*) &(prov_cntxt->access_string);
    RMMI_PTR->arg_list[5] = (void*) &(prov_cntxt->user_name);        
    RMMI_PTR->arg_list[6] = (void*) &(prov_cntxt->pass_word);
    RMMI_PTR->arg_list[7] = (void*) &(prov_cntxt->compression);    
    RMMI_PTR->arg_list[8] = (void*) &(prov_cntxt->auth_type);
    RMMI_PTR->arg_list[9] = (void*) &(prov_cntxt->plmn_in_digit);            
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+MBPC: %d, %d, %e, %d, \"%s\", \"%s\", \"%s\", %d, %d, \"%s\"", RMMI_PTR->arg_list, 10);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
    return;
}
#endif

#ifdef __MEDIATEK_SMART_QOS__
/*****************************************************************************
 * FUNCTION
 *  rmmi_msqon_read_result_code_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_msqon_read_result_code_fmttr(kal_uint8 src_id, kal_bool is_msq_on)
{
    kal_uint16 string_length = 0;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    
    RMMI_PTR->current_src = src_id;        
    RMMI_PTR->arg_list[0] = (void*) &is_msq_on;           
    
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+MSQON: %d", RMMI_PTR->arg_list, 1);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
    return;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_mbpc_read_result_code_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_msq_read_result_code_fmttr(kal_uint8 src_id, nvram_ef_msq_entry_struct* msq_entry)
{
    kal_uint16 string_length = 0;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    
    RMMI_PTR->current_src = src_id;        
    RMMI_PTR->arg_list[0] = (void*) &(msq_entry->entry_id);     
    RMMI_PTR->arg_list[1] = (void*) &(msq_entry->plmn_id);    
    RMMI_PTR->arg_list[2] = (void*) &(msq_entry->check_nw);
    RMMI_PTR->arg_list[3] = (void*) &(msq_entry->check_sim);              
    
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+MSQ: %d, \"%s\", %d, %d", RMMI_PTR->arg_list, 4);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_sn_rrsp
 * DESCRIPTION
 *  This is l4c_eq_read_ms_sn_rrsp
 *  DESCRIPTION function of L4C module.
 *  respond to RMMI about sim read request for CSIM
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from NVRAM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_read_ms_sn_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
    kal_uint16 string_length;
    kal_uint8 code[NVRAM_EF_BARCODE_NUM_SIZE+1]; //NVRAM_EF_BARCODE_NUM_SIZE +1
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;


    if (result.flag != L4C_ERROR)
    {
        ASSERT(data != NULL);       //check if null pointer
        if(length>(NVRAM_EF_BARCODE_NUM_SIZE + 1)){
        	ASSERT(0);	    
        }
        kal_mem_set(code, 0, (NVRAM_EF_BARCODE_NUM_SIZE + 1));
        kal_mem_cpy(code, data, length);
        
        rmmi_ptr->arg_list[0] = (void*)code;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EGMR: \"%s\"", rmmi_ptr->arg_list, 1);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    return;
}


#if defined(__NONE_USED_L4MMI_MESSAGE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_imei_rrsp
 * DESCRIPTION
 *  This is l4c_eq_read_ms_sn_rrsp
 *  DESCRIPTION function of L4C module.
 *  respond to RMMI about sim read request for CSIM
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from NVRAM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_read_ms_imei_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ASSERT(data != NULL);       //check if null pointer

    if (result.flag == L4C_ERROR)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    else
    {
        if (rmmi_ptr->imei_action == RMMI_IMEI_READ)
        {
            kal_uint8 imei_bcd[8];
            kal_uint8 imei_str[16];

            kal_mem_cpy(imei_bcd, data, 8);
            imei_bcd[7] = imei_bcd[7] | 0xf0;
            convert_to_digit((kal_uint8*) imei_bcd, imei_str);
            //    imei_str[15] = 0;

            rmmi_ptr->arg_list[0] = (void*)imei_str;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EGMR: \"%s\"", rmmi_ptr->arg_list, 1);

            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
            rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
        }

    }

    rmmi_ptr->imei_action = RMMI_IMEI_NO_ACTION;
    return;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_ms_sv_rrsp
 * DESCRIPTION
 *  This is l4c_eq_read_ms_sv_rrsp
 *  DESCRIPTION function of L4C module.
 *  respond to RMMI about nvram read request for egmr
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from NVRAM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_read_ms_sv_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 svn_bcd[2];
    kal_uint8 svn_str[3];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ASSERT(data != NULL); //check if null pointer

    if (result.flag == L4C_ERROR)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    else
    {
        svn_bcd[0] = data[0]; //SVN
        svn_bcd[1] = 0xff; //The END
        convert_to_digit((kal_uint8*) svn_bcd, svn_str);
        rmmi_ptr->arg_list[0] = (void*)svn_str;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EGMR: \"%s\"", rmmi_ptr->arg_list, 1);
        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_read_autotest_report_rrsp
 * DESCRIPTION
 *  This is l4c_eq_read_autotest_report_rrsp
 * PARAMETERS
 *  result      [IN]        Result of the record req
 *  length      [IN]        Length of data
 *  data        [IN]        Raw data from NVRAM
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_read_autotest_report_rrsp(kal_bool result, kal_uint16 length, kal_uint8 *data)
{
#if defined(NEPTUNE_MMI)
    /* TODO: Neptune shall handle MSG_ID_MMI_EM_AUTO_TEST_REPORT_IND in the future as Pluto.
      After that, this part can be removed and keep the new architecture.
    */
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 i;
    kal_uint8 test_result;
    nvram_ef_autotest_struct *report;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;


    if (result != KAL_FALSE)
    {
        ASSERT(data != NULL);       //check if null pointer
        report = (nvram_ef_autotest_struct*) data;

        for (i = 0; i < report->testcount; i++)
        {
            rmmi_ptr->arg_list[0] = (void*)&i;

            if (report->testlist[i] >= 2)
            {
                test_result = 2;
            }
            else
            {
                test_result = report->testlist[i];
            }

            rmmi_ptr->arg_list[1] = (void*)&test_result;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+ETEST: %d, %d", rmmi_ptr->arg_list, 2);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
//        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    return;
#elif defined(__MMI_FMI__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_DATA_QUEUE_LENGTH];
    kal_uint8 i;
    kal_uint8 test_result;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result != KAL_FALSE)
    {
        ASSERT(data != NULL);       //check if null pointer
        
        for (i = 0; i < length; i++)
        {
            rmmi_ptr->arg_list[0] = (void*)&i;

            if (data[i] >= 2)
            {
                test_result = 2;
            }
            else
            {
                test_result = data[i];
            }

            rmmi_ptr->arg_list[1] = (void*)&test_result;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+ETEST: %d, %d", rmmi_ptr->arg_list, 2);
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
//        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
#endif /* __MMI_FMI__ */
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_set_ms_sn_rrsp
 * DESCRIPTION
 *  This is  l4c_eq_set_ms_sn_rrsp function of L4C module.
 *  respond to RMMI about the ms serial set request for NVRAM
 * PARAMETERS
 *  result          [IN]        Result of the record req
 *  file_idx        [IN]        
 *  para            [IN]        
 *  response(?)     [IN]        Response cause from SMU
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_set_ms_sn_rrsp(l4c_result_struct result, kal_uint8 file_idx, kal_uint16 para)
{
    if (result.flag == L4C_OK)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        kal_brief_trace(TRACE_INFO, RMMI_RSP_ERROR_CAUSE, result.cause);
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_voleme_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result          [IN]        
 *  vol_type        [IN]        
 *  vol_level       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_get_voleme_rrsp(kal_bool result, kal_uint8 vol_type, kal_uint8 vol_level)
{
#if !defined(__SLIM_AT__)
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    kal_uint8 level;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        level = vol_level & 0x0F;

        if (level > 6)
        {
            level = 6;
        }

        if (vol_type == VOL_TYPE_SPH)
        {
            rmmi_ptr->arg_list[0] = (void*)&level;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLVL: %d", rmmi_ptr->arg_list, 1);
        }
        else if (vol_type == VOL_TYPE_MEDIA)
        {
            level++;    //to be consistant with MMI
            rmmi_ptr->arg_list[0] = (void*)&level;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRSL: %d", rmmi_ptr->arg_list, 1);
        }

        rsp_str = &buffer[0];
        ret_val = KAL_TRUE;

    }

    rmmi_final_rsp_generator(RMMI_SRC, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
#endif
}

//mtk01616_100706 : at+cvgs is obsolete
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
#if defined(__MODEM_EM_MODE__) 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif

/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_profile_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  result              [IN]        
 *  audio_profile       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_get_audio_profile_rrsp(kal_bool result, audio_profile_struct audio_profile)
{
#if !defined(__SLIM_AT__) || defined(__AT_FOR_SPEECH_TUNING_TOOL__)
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        if (rmmi_ptr->em_eadp_action == RMMI_EADP_GET)
        {
            switch (rmmi_ptr->em_audio_type)
            {
                case 0:
                    rmmi_ptr->arg_list[0] = (void*)&(audio_profile.melody[rmmi_ptr->em_volume_level]);
                    break;
                case 1:
                    rmmi_ptr->arg_list[0] = (void*)&(audio_profile.keytone[rmmi_ptr->em_volume_level]);
                    break;
                case 2:
                    rmmi_ptr->arg_list[0] = (void*)&(audio_profile.speech[rmmi_ptr->em_volume_level]);
                    break;
                case 3:
                    rmmi_ptr->arg_list[0] = (void*)&(audio_profile.mic[rmmi_ptr->em_volume_level]);
                    break;
                case 4:
                    rmmi_ptr->arg_list[0] = (void*)&(audio_profile.sidetone);
                    break;
            }

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EADP: %d", rmmi_ptr->arg_list, 1);
            rsp_str = &buffer[0];
            ret_val = KAL_TRUE;

            rmmi_ptr->em_volume_level = 0;
            rmmi_ptr->em_audio_type = 0;

        }
        else if (rmmi_ptr->em_eadp_action == RMMI_EADP_SET)
        {
            audio_profile.mode = rmmi_ptr->em_audio_mode;

            switch (rmmi_ptr->em_audio_type)
            {
                case 0:
                    audio_profile.melody[rmmi_ptr->em_volume_level] = rmmi_ptr->em_audio_gain;
                    break;
                case 1:
                    audio_profile.keytone[rmmi_ptr->em_volume_level] = rmmi_ptr->em_audio_gain;
                    break;
                case 2:
                    audio_profile.speech[rmmi_ptr->em_volume_level] = rmmi_ptr->em_audio_gain;
                    break;
                case 3:
                    audio_profile.mic[rmmi_ptr->em_volume_level] = rmmi_ptr->em_audio_gain;
                    break;
                case 4:
                    audio_profile.sidetone = rmmi_ptr->em_audio_gain;
                    break;
            }

            ret_val = l4c_eq_set_audio_profile_req(rmmi_ptr->current_src, &audio_profile);

            rmmi_ptr->em_audio_mode = 0;
            rmmi_ptr->em_audio_type = 0;
            rmmi_ptr->em_volume_level = 0;
            rmmi_ptr->em_audio_gain = 0;
            return;
        }
    }

    rmmi_ptr->em_eadp_action = RMMI_EADP_NO_ACTION;
    rmmi_final_rsp_generator(RMMI_SRC, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
#endif
}


void l4c_eq_get_audio_param_rrsp(kal_bool result, audio_param_struct * audio_para)
{
#if !defined(__SLIM_AT__) || defined(__AT_FOR_SPEECH_TUNING_TOOL__)
    kal_uint8 buffer[120];
    kal_uint8 loop = 0;
    kal_uint8 loop_ctrl;
    //kal_uint8 FIR_Range;
    kal_uint16 string_length = 0;
    kal_uint8 const *rsp_str = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    
    if(result == KAL_TRUE)
    {
        if(rmmi_ptr->eaps_action == RMMI_EAPS_GET)
        {
            rmmi_ptr->arg_list[0] = &rmmi_ptr->eaps_para1;
            switch(rmmi_ptr->eaps_para1)
            {
                case 0:
                case 1:
                {
                    kal_int16 *setting_ptr;
                    if(rmmi_ptr->eaps_para1 == 0)
                    {
                        setting_ptr = audio_para->speech_input_FIR_coeffs[rmmi_ptr->eaps_para2];
                    }
                    else
                    {
                        setting_ptr = audio_para->speech_output_FIR_coeffs[rmmi_ptr->eaps_para2];
                    }
                    setting_ptr += 10*rmmi_ptr->eaps_para3;
                    
                    rmmi_ptr->arg_list[1] = &rmmi_ptr->eaps_para2;
                    rmmi_ptr->arg_list[2] = &rmmi_ptr->eaps_para3;
                    string_length = rmmi_fast_string_print(buffer,
                                                           (kal_uint8*)"+EAPS: %d,%d,%d,\"",
                                                           rmmi_ptr->arg_list,
                                                           3);
                    if(SPEECH_FIR_COEFF_NUM%10 == 0)
                    {
                        loop_ctrl = 10;
                    }
                    else
                    {
                        if(rmmi_ptr->eaps_para3 == (SPEECH_FIR_COEFF_NUM/10))
                        {
                            loop_ctrl = SPEECH_FIR_COEFF_NUM - rmmi_ptr->eaps_para3*10;
                        }
                        else
                        {
                            loop_ctrl = 10;
                        }
                    }
                    for( ; loop < loop_ctrl; loop++)
                    {
                        rmmi_ptr->arg_list[0] = setting_ptr;
                        string_length += rmmi_fast_string_print(&buffer[string_length],
                                                                (kal_uint8*)"%u.",
                                                                rmmi_ptr->arg_list,
                                                                1);
                        setting_ptr++;
                    }
                    break;
                }
                case 2:
                {
                    rmmi_ptr->arg_list[1] = &audio_para->selected_FIR_output_index;
                    string_length = rmmi_fast_string_print(buffer,
                                                           (kal_uint8*)"+EAPS: %d,%u",
                                                           rmmi_ptr->arg_list,
                                                           2);
                    break;
                }
                case 3:
                {
                    string_length += rmmi_fast_string_print(buffer,
                                                           (kal_uint8*)"+EAPS: %d,\"",
                                                           rmmi_ptr->arg_list,
                                                           1);
                    for( ; loop < 12; loop++)
                    {
                        rmmi_ptr->arg_list[0] = &audio_para->speech_common_para[loop];
                        string_length += rmmi_fast_string_print(&buffer[string_length],
                                                           (kal_uint8*)"%u.",
                                                           rmmi_ptr->arg_list,
                                                           1);
                    }
                    break;
                }
                case 4:
                {
                    rmmi_ptr->arg_list[1] = &rmmi_ptr->eaps_para2;
                    string_length += rmmi_fast_string_print(buffer,
                                                           (kal_uint8*)"+EAPS: %d,%d,\"",
                                                           rmmi_ptr->arg_list,
                                                           2);
                    for( ; loop < 16; loop++)
                    {
                        rmmi_ptr->arg_list[0] = &audio_para->speech_mode_para[rmmi_ptr->eaps_para2][loop];
                        string_length += rmmi_fast_string_print(&buffer[string_length],
                                                           (kal_uint8*)"%u.",
                                                           rmmi_ptr->arg_list,
                                                           1);
                    }
                    
                    break;
                }
            } /* End of switch*/

            if(rmmi_ptr->eaps_para1 != 2)
            {
                /* Rollback one charactor */
                string_length -= 1;
                string_length += rmmi_fast_string_print(&buffer[string_length],
                                                        (kal_uint8*)"\"",
                                                        NULL,
                                                        0);
            }
            rsp_str = &buffer[0];
        }/*End of if */
        else if(rmmi_ptr->eaps_action == RMMI_EAPS_SET)
        {
            kal_uint8 copy_bytes = 0;
            audio_param_struct *eaps_audio_param = (audio_param_struct *)rmmi_ptr->eaps_audio_param;
            if(rmmi_ptr->eaps_para1 == 0 || rmmi_ptr->eaps_para1 == 1)
            {
                if(SPEECH_FIR_COEFF_NUM%10 == 0)
                {
                    copy_bytes = 20;
                }
                else
                {
                    if(rmmi_ptr->eaps_para3 == (SPEECH_FIR_COEFF_NUM/10))
                    {
                        copy_bytes = (SPEECH_FIR_COEFF_NUM - rmmi_ptr->eaps_para3*10)*2;
                    }
                    else
                    {
                        copy_bytes = 20;
                    }
                }
            }
            
            switch(rmmi_ptr->eaps_para1)
            {
                case 0:
                {
                    
                    kal_mem_cpy((void*)(audio_para->speech_input_FIR_coeffs[rmmi_ptr->eaps_para2]+10*rmmi_ptr->eaps_para3),
                                (void*)(eaps_audio_param->speech_input_FIR_coeffs[rmmi_ptr->eaps_para2]+10*rmmi_ptr->eaps_para3),
                                copy_bytes);
                    break;
                }
                case 1:
                {
                    kal_mem_cpy((void*)(audio_para->speech_output_FIR_coeffs[rmmi_ptr->eaps_para2]+10*rmmi_ptr->eaps_para3),
                                (void*)(eaps_audio_param->speech_output_FIR_coeffs[rmmi_ptr->eaps_para2]+10*rmmi_ptr->eaps_para3),
                                copy_bytes);
                    break;
                }
                case 2:
                {
                    audio_para->selected_FIR_output_index = eaps_audio_param->selected_FIR_output_index;
                    break;
                }
                case 3:
                {
                    kal_mem_cpy((void*)audio_para->speech_common_para,
                                (void*)eaps_audio_param->speech_common_para,
                                24);
                    break;
                }
                case 4:
                {
                    kal_mem_cpy((void*)audio_para->speech_mode_para[rmmi_ptr->eaps_para2],
                                (void*)eaps_audio_param->speech_mode_para[rmmi_ptr->eaps_para2],
                                32);
                    break;
                }
            }
            l4c_eq_set_audio_param_req(rmmi_ptr->current_src, audio_para);
            free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
            rmmi_ptr->eaps_audio_param = NULL;
            //rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;//Clear action when set param cnf
            rmmi_ptr->eaps_para1 = 0xff;
            rmmi_ptr->eaps_para2 = 0xff;
            rmmi_ptr->eaps_para3 = 0xff;
            return;
        }
    }
    if(rmmi_ptr->eaps_audio_param != NULL)
    {
        free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
        rmmi_ptr->eaps_audio_param = NULL;
    }
    
    rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;
    rmmi_ptr->eaps_para1 = 0xff;
    rmmi_ptr->eaps_para2 = 0xff;
    rmmi_ptr->eaps_para3 = 0xff;
    rmmi_final_rsp_generator(rmmi_ptr->current_src, result, (kal_uint8*)rsp_str, string_length);
    return;
#endif
}


#if defined(__AMRWB_LINK_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_wb_fir_rrsp
 * DESCRIPTION
 *  When get WB audio FIR paramter cnf received by UEM, will call into this function, we parsing the cnf 
 * message and according to user input, form a result string or set new value to system
 * PARAMETERS
 *  result       [IN]
 *  fir_param  [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_get_audio_wb_fir_rrsp(kal_uint8 result, audio_wb_speech_fir_struct* fir_param)
{
#if !defined(__SLIM_AT__) || defined(__AT_FOR_SPEECH_TUNING_TOOL__)

    kal_uint8 buffer[120];
    kal_uint32 loop = 0;
    kal_uint32 loop_ctrl = 0;
    kal_uint32 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 const *rsp_str = NULL;
    
    if(result == KAL_TRUE)
    {
        if((rmmi_ptr->eaps_action == RMMI_EAPS_WB_INPUT_FIR_GET)
            || (rmmi_ptr->eaps_action == RMMI_EAPS_WB_OUTPUT_FIR_GET))
        {
            kal_int16 *setting_ptr;
        
            setting_ptr = fir_param->coeff[rmmi_ptr->eaps_para2-6];
            
            setting_ptr += 10*rmmi_ptr->eaps_para3;

            rmmi_ptr->arg_list[0] = &rmmi_ptr->eaps_para1;
            rmmi_ptr->arg_list[1] = &rmmi_ptr->eaps_para2;
            rmmi_ptr->arg_list[2] = &rmmi_ptr->eaps_para3;
            string_length = rmmi_fast_string_print(buffer,
                                                   (kal_uint8*)"+EAPS: %d,%d,%d,\"",
                                                   rmmi_ptr->arg_list,
                                                   3);
            
            if(WB_SPEECH_FIR_COEFF_NUM%10 == 0)
            {
                loop_ctrl = 10;
            }
            else
            {
                if(rmmi_ptr->eaps_para3 == (WB_SPEECH_FIR_COEFF_NUM/10))
                {
                    loop_ctrl = WB_SPEECH_FIR_COEFF_NUM - rmmi_ptr->eaps_para3*10;
                }
                else
                {
                    loop_ctrl = 10;
                }
            }
            
            for( ; loop < loop_ctrl; loop++)
            {
                rmmi_ptr->arg_list[0] = setting_ptr;
                string_length += rmmi_fast_string_print(&buffer[string_length],
                                                        (kal_uint8*)"%u.",
                                                        rmmi_ptr->arg_list,
                                                        1);
                setting_ptr++;
            }
            /* Rollback one charactor */
            string_length -= 1;
            string_length += rmmi_fast_string_print(&buffer[string_length],
                                                    (kal_uint8*)"\"",
                                                    NULL,
                                                    0);
            rsp_str = &buffer[0];
        }
        else
        {
            kal_uint8 copy_bytes = 0;
            //audio_param_struct *eaps_audio_param = (audio_param_struct *)rmmi_ptr->eaps_audio_param;
            if(rmmi_ptr->eaps_para1 == 0 || rmmi_ptr->eaps_para1 == 1)
            {
                if(WB_SPEECH_FIR_COEFF_NUM%10 == 0)
                {
                    copy_bytes = 20;
                }
                else
                {
                    if(rmmi_ptr->eaps_para3 == (WB_SPEECH_FIR_COEFF_NUM/10))
                    {
                        copy_bytes = (WB_SPEECH_FIR_COEFF_NUM - rmmi_ptr->eaps_para3*10)*2;
                    }
                    else
                    {
                        copy_bytes = 20;
                    }
                }
            }
            kal_mem_cpy((void *)(fir_param->coeff[rmmi_ptr->eaps_para2 - 6]+10*rmmi_ptr->eaps_para3), 
                        (void*)(((audio_wb_speech_fir_struct*)(rmmi_ptr->eaps_audio_param))->coeff[rmmi_ptr->eaps_para2 - 6]+10*rmmi_ptr->eaps_para3),
                        copy_bytes);
            l4c_eq_set_audio_wb_param_req(rmmi_ptr->current_src, rmmi_ptr->eaps_para1, (void *)fir_param);
            rmmi_ptr->eaps_para1 = 0xff;
            rmmi_ptr->eaps_para2 = 0xff;
            rmmi_ptr->eaps_para3 = 0xff;
            if(rmmi_ptr->eaps_audio_param != NULL)
            {
                free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
                rmmi_ptr->eaps_audio_param = NULL;
            }
            return;
        }
    }

    if(rmmi_ptr->eaps_audio_param != NULL)
    {
        free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
        rmmi_ptr->eaps_audio_param = NULL;
    }
    rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;
    rmmi_ptr->eaps_para1 = 0xff;
    rmmi_ptr->eaps_para2 = 0xff;
    rmmi_ptr->eaps_para3 = 0xff;
    rmmi_final_rsp_generator(rmmi_ptr->current_src, result, (kal_uint8*)rsp_str, string_length);
    return;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_get_audio_wb_mode_rrsp
 * DESCRIPTION
 *  When get WB audio Mode paramter cnf received by UEM, will call into this function, we parsing the cnf 
 * message and according to user input, form a result string or set new value to system
 * PARAMETERS
 *  result       [IN]
 *  mode_param  [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_get_audio_wb_mode_rrsp(kal_uint8 result, audio_wb_speech_mode_struct *mode_param)
{
#if !defined(__SLIM_AT__) || defined(__AT_FOR_SPEECH_TUNING_TOOL__)

    kal_uint8 buffer[120];
    kal_uint32 loop = 0;
    kal_uint32 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 const *rsp_str = NULL;
    
    if(result == KAL_TRUE)
    {
        if(rmmi_ptr->eaps_action == RMMI_EAPS_WB_MODE_PARAM_GET)
        {
            rmmi_ptr->arg_list[0] = &rmmi_ptr->eaps_para1;
            rmmi_ptr->arg_list[1] = &rmmi_ptr->eaps_para2;
            string_length += rmmi_fast_string_print(buffer,
                                                   (kal_uint8*)"+EAPS: %d,%d,\"",
                                                   rmmi_ptr->arg_list,
                                                   2);
            for( ; loop < 16; loop++)
            {
                rmmi_ptr->arg_list[0] = &mode_param->param[rmmi_ptr->eaps_para2-8][loop];
                string_length += rmmi_fast_string_print(&buffer[string_length],
                                                   (kal_uint8*)"%u.",
                                                   rmmi_ptr->arg_list,
                                                   1);
            }
            /* Rollback one charactor */
            string_length -= 1;
            string_length += rmmi_fast_string_print(&buffer[string_length],
                                                    (kal_uint8*)"\"",
                                                    NULL,
                                                    0);

            rsp_str = &buffer[0];
        }
        else
        {
            kal_mem_cpy((void *)(mode_param->param[rmmi_ptr->eaps_para2-8]), 
                        (void *)(((audio_wb_speech_mode_struct *)(rmmi_ptr->eaps_audio_param))->param[rmmi_ptr->eaps_para2-8]), 
                        32);
            l4c_eq_set_audio_wb_param_req(rmmi_ptr->current_src, rmmi_ptr->eaps_para1, (void *)mode_param);
            if(rmmi_ptr->eaps_audio_param != NULL)
            {
                free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
                rmmi_ptr->eaps_audio_param = NULL;
            }
            rmmi_ptr->eaps_para1 = 0xff;
            rmmi_ptr->eaps_para2 = 0xff;
            rmmi_ptr->eaps_para3 = 0xff;
            return;
        }
    }

    if(rmmi_ptr->eaps_audio_param != NULL)
    {
        free_ctrl_buffer((void*)rmmi_ptr->eaps_audio_param);
        rmmi_ptr->eaps_audio_param = NULL;
    }
    rmmi_ptr->eaps_action = RMMI_EAPS_NO_ACION;
    rmmi_ptr->eaps_para1 = 0xff;
    rmmi_ptr->eaps_para2 = 0xff;
    rmmi_ptr->eaps_para3 = 0xff;
    rmmi_final_rsp_generator(rmmi_ptr->current_src, result, (kal_uint8*)rsp_str, string_length);
    return;
#endif
}
#endif


void  l4c_eq_get_calibration_flag_rsp(kal_uint8 cal_flag)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length = 0;       /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)&cal_flag;
#ifdef __RMMI_EXTEND_CUSTOM_CMD__
    string_length = rmmi_fast_string_print_custom(
                                buffer,
                                (kal_uint8*) "%d",
                                rmmi_ptr->arg_list,
                                1);
#else
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
#endif
    rsp_str = &buffer[0];
    ret_val = KAL_TRUE;

    rmmi_final_rsp_generator(RMMI_SRC, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


void  l4c_eq_get_calibration_data_rsp(kal_uint8 cal_data)
{
    kal_bool ret_val = KAL_FALSE;
    kal_uint8 const *rsp_str = NULL;    /* response string and initialization */
    kal_uint16 string_length = 0;       /* string length variable */
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    
    rmmi_ptr->arg_list[0] = (void*)&cal_data;
#ifdef __RMMI_EXTEND_CUSTOM_CMD__
    string_length = rmmi_fast_string_print_custom(
                                buffer,
                                (kal_uint8*) "%d",
                                rmmi_ptr->arg_list,
                                1);
#else
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
#endif
    rsp_str = &buffer[0];
    ret_val = KAL_TRUE;

    rmmi_final_rsp_generator(RMMI_SRC, ret_val, (kal_uint8*) rsp_str, string_length);
    return;
}


#if defined(__AT_ESWM_SUPPORT__)
void l4cuem_at_ef_port_setting_result_rrsp(l4cuem_at_ef_port_mode_enum mode, kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;
}
#endif

#if defined(__GEMINI__) && !defined (__MMI_FMI__)
/*****************************************************************************
 * FUNCTION
 *  l4c_edsim_nvram_read_cnf_rrsp
 * DESCRIPTION
 *  Return "+EDSIM: %d" or "ERROR" to tell RMMI user the dual sim mode setting
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_edsim_nvram_read_cnf_rrsp(kal_bool result, kal_uint8* data)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    if (result == KAL_TRUE)
    {
        /* return OK on AT channel */
        if (data != NULL)
        {
            kal_uint8 mode = 0xff;
            if (data[L4C_SETTING_FLIGHT_MODE] == KAL_TRUE) 
            {
                mode = 0;
            }
            else if (data[L4C_SETTING_DUAL_SIM_MODE] == DAUL_SIM_CONFIG)
            {
                mode = 3;
            }
            else if (data[L4C_SETTING_DUAL_SIM_MODE] == SIM2_ONLY_CONFIG)
            {
                mode = 2;
            }
            else if (data[L4C_SETTING_DUAL_SIM_MODE] == SIM1_ONLY_CONFIG)
            {
                mode = 1;
            }
            kal_sprintf((kal_char*) buffer, "+EDSIM: %d", mode);
            string_length = (kal_uint16)strlen((char*)buffer);
            rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
 	     rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);  
        }
    }
    else
    {
        /* return ERROR on AT channel */
        kal_sprintf((kal_char*) buffer, "ERROR");
        string_length = (kal_uint16)strlen((char*)buffer);
        rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
    }

}

/*****************************************************************************
 * FUNCTION
 *  l4c_edsim_nvram_write_cnf_rrsp
 * DESCRIPTION
 *  Return "OK" or "ERROR" to tell RMMI user the dual sim mode setting
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_edsim_nvram_write_cnf_rrsp(kal_bool result)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];

    if (result == KAL_TRUE)
    {
        /* return OK on AT channel */
        kal_sprintf((kal_char*) buffer, "OK");
    }
    else
    {
        /* return ERROR on AT channel */
        kal_sprintf((kal_char*) buffer, "ERROR");
    }
    string_length = (kal_uint16)strlen((char*)buffer);
    rmmi_write_to_uart(buffer, string_length, KAL_TRUE);
}

#endif /* defined(__GEMINI__) && !defined (__MMI_FMI__) */


#ifdef __CSD_FAX__
/*****************************************************************************
 * FUNCTION
 *  l4c_t30_general_rrsp
 * DESCRIPTION
 *  This function is used to form the general response(ERROR, OK)  from t30 to DTE.
 *  Add by mtk00714.
 * PARAMETERS
 *  result      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_general_rrsp(l4c_result_struct result)
{
    if (check_multi_command(result.flag) == KAL_TRUE)   //multicmd => don't print final result code now
    {
        return;
    }

    if (result.flag == L4C_ERROR)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, result.cause);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_result_string_rrsp
 * DESCRIPTION
 *  This function is used to print result_str from T30 to DTE.
 *  Add by mtk00714.
 * PARAMETERS
 *  result_string       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_result_string_rrsp(kal_uint8 *result_string)
{
    kal_uint8 string_length;
    kal_uint8 buffer[120];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    ASSERT(result_string != NULL);

    rmmi_ptr->arg_list[0] = (void*)result_string;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%s", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4c_t30_act_rrsp
 * DESCRIPTION
 *  This function is used to form the action response(CONNECT, ERROR,
 *  NO_CARRIER, OK, +FCERROR)  from t30 to DTE.
 *  Add by mtk00714.
 * PARAMETERS
 *  result_code     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_t30_act_rrsp(kal_uint8 result_code)
{
    kal_uint8 string[9];

    if (result_code == CODE_CONNECT)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_CONNECT, L4C_NO_CAUSE);
    }

    else if (result_code == CODE_ERROR)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    else if (result_code == CODE_NOCARRIER)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_NO_CARRIER, L4C_NO_CAUSE);
    }

    else if (result_code == CODE_OK)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }

    else    /* l4C_FCERROR */
    {
        kal_sprintf((kal_char*) string, "+FCERROR");
        l4c_t30_result_string_rrsp(string);
    }
}

#endif /* __CSD_FAX__ */ 


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_pmic_config_rrsp
 * DESCRIPTION
 *  
 * PARAMETERS
 *  request_type        [IN]        
 *  request             [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_pmic_config_rrsp(kal_uint8 request_type, pmic_config_param_struct request)
{
    #if defined(MT6318) && defined(PLUTO_MMI)
    
    kal_uint16 category;
    kal_bool ret_val = KAL_FALSE;
    kal_uint16 string_length = 0;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 buff[7];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_INFO, INFO_REQUEST_TYPE, request_type);
    switch (request_type)
    {
        case PMIC_GET_CHR_STATE:
        {
            category = 0;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&(request.chr_state.charger_status);
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d", rmmi_ptr->arg_list, 2);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_AC_USB:
        {
            category = 1;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.ac_usb_status.chr_enable;
            rmmi_ptr->arg_list[2] = (void*)&request.ac_usb_status.current;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d, %e", rmmi_ptr->arg_list, 3);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_LED_CONFIG:
        {
            category = 2;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.led_config.duty;
            rmmi_ptr->arg_list[2] = (void*)&request.led_config.current;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d, %e", rmmi_ptr->arg_list, 3);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_MISC_LDO_STATE:
        {
            category = 3;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.misc_ldo_state.enable;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d", rmmi_ptr->arg_list, 2);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_RGB_DIM:
        {
            category = 4;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.rgb_dim.pump_enable;
            rmmi_ptr->arg_list[2] = (void*)&request.rgb_dim.pump_current;
            rmmi_ptr->arg_list[3] = (void*)&request.rgb_dim.clk;

            string_length = rmmi_fast_string_print(
                                buffer,
                                (kal_uint8*) "+EPMIC: %u, %d, %e, %e",
                                rmmi_ptr->arg_list,
                                4);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_BL_DIM:
        {
            category = 5;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.bl_dim.div_enable;
            rmmi_ptr->arg_list[2] = (void*)&request.bl_dim.clk;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d, %e", rmmi_ptr->arg_list, 3);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_SPEAKER_STATE:
        {
            category = 6;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.speaker_state.state;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d", rmmi_ptr->arg_list, 2);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_GET_SPEAKER_GAIN:
        {
            category = 7;
            rmmi_ptr->arg_list[0] = (void*)&category;
            rmmi_ptr->arg_list[1] = (void*)&request.speaker_gin.gain;

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EPMIC: %u, %d", rmmi_ptr->arg_list, 2);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_READ_REG:
        {
            kal_sprintf((char*)buff, "0X%04X", request.read_reg.register_index);
            rmmi_ptr->arg_list[0] = (void*)buff;
            rmmi_ptr->arg_list[1] = (void*)&request.read_reg.result;
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+EREG: \"%s\", %d", rmmi_ptr->arg_list, 2);
            ret_val = KAL_TRUE;
            break;
        }
        case PMIC_WRITE_REG:
        {
            ret_val = KAL_TRUE;
            break;
        }
        default:
        {
            break;
        }
    }
    rmmi_final_rsp_generator(RMMI_SRC, ret_val, (kal_uint8*) buffer, string_length);
    return;

    #endif
}


#if defined(__CTM_SUPPORT__) && defined(__CTM_AT_CMD_SUPPORT__)
// mtk01616_100130: don't wrap slim at , wrap ctm_at_support instead
/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_open_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_open_rrsp function of L4C module.
 *  respond to RMMI about the ctm_open_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_open_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_close_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_close_rrsp function of L4C module.
 *  respond to RMMI about the ctm_close_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_close_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_connect_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_connect_rrsp function of L4C module.
 *  respond to RMMI about the ctm_connect_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_connect_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_send_text_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_send_text_rrsp function of L4C module.
 *  respond to RMMI about the ctm_send_text_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_send_text_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_set_default_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_set_default_rrsp function of L4C module.
 *  respond to RMMI about the ctm_set_default_req
 * PARAMETERS
 *  result              [IN]        Result of the accept req
 *  is_turn_on          [IN]        
 *  ctm_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_set_default_rrsp(kal_bool result, kal_bool is_turn_on, kal_uint8 ctm_interface)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }

    rmmi_ptr->is_ctm_turn_on = is_turn_on;

    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_get_default_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_get_default_rrsp function of L4C module.
 *  respond to RMMI about the ctm_get_default_req
 * PARAMETERS
 *  result              [IN]        Result of the accept req
 *  is_turn_on          [IN]        
 *  ctm_interface       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_get_default_rrsp(kal_bool result, kal_bool is_turn_on, kal_uint8 ctm_interface)
{
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&is_turn_on;
        rmmi_ptr->arg_list[1] = (void*)&ctm_interface;

        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CTMSET: %d, %d", rmmi_ptr->arg_list, 2);
        kal_brief_trace(TRACE_GROUP_1, CTMSET, is_turn_on, ctm_interface);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_set_config_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_set_config_rrsp function of L4C module.
 *  respond to RMMI about the ctm_set_config_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_set_config_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}


/*****************************************************************************
 * FUNCTION
 *  l4c_ctm_get_config_rrsp
 * DESCRIPTION
 *  This is l4c_ctm_get_config_rrsp function of L4C module.
 *  respond to RMMI about the ctm_get_config_req
 * PARAMETERS
 *  result      [IN]        Result of the accept req
 *  para1       [IN]        
 *  para2       [IN]        
 *  para3       [IN]        
 *  para4       [IN]        
 *  para5       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_ctm_get_config_rrsp(
        kal_bool result,
        kal_uint16 para1,
        kal_uint16 para2,
        kal_uint16 para3,
        kal_uint16 para4,
        kal_uint16 para5)
{
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (result == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&para1;
        rmmi_ptr->arg_list[1] = (void*)&para2;
        rmmi_ptr->arg_list[2] = (void*)&para3;
        rmmi_ptr->arg_list[3] = (void*)&para4;
        rmmi_ptr->arg_list[4] = (void*)&para5;

        string_length = rmmi_fast_string_print(
                            buffer,
                            (kal_uint8*) "+CTMCFG: %u, %u, %u, %u, %u",
                            rmmi_ptr->arg_list,
                            5);
        kal_brief_trace(TRACE_GROUP_1, CTMCFG, para1, para2, para3, para4, para5);

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;

}

#endif /* __CTM_SUPPORT__ */ 


#if defined(__MODEM_EM_MODE__)
void l4c_em_get_cell_lock_rrsp(kal_bool result, kal_uint32 enabled_bitmap, kal_bool band_indicator, kal_uint16 *arfcn, kal_uint32 mode)
{
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_length = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint32 counter = 0;

    if (result == KAL_FALSE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
	    return;
    }

    rmmi_ptr->arg_list[0] = (void*)&enabled_bitmap;

    if (enabled_bitmap != 0) // 1: 0n,  0:off  
    {
    	 rmmi_ptr->arg_list[1] = (void*)&band_indicator;

        if(mode == CELL_LOCK_MODE_ABSOLUTE)
        {
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*)"+ECELCK: %d,%d", rmmi_ptr->arg_list, 2);

            for( ; counter < MAX_NUM_CELL_LOCK_ARFCN; counter++)
            {
                if(enabled_bitmap & (0x1 << counter))
                {
                    rmmi_ptr->arg_list[0] = (void *)&arfcn[counter];
                    string_length += rmmi_fast_string_print(&buffer[string_length], (kal_uint8 *)",%l", rmmi_ptr->arg_list, 1);
                }
            }
        }
        else if (mode == CELL_LOCK_MODE_CONDITIONED)
        {
    	    rmmi_ptr->arg_list[2] = (void*)&arfcn[0];		 

            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+ECELCK: %d,%d,%l",  rmmi_ptr->arg_list, 3);    
        }
    }
    else
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+ECELCK: %d",  rmmi_ptr->arg_list, 1);
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);	
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
}

void l4c_em_set_cell_lock_rrsp(kal_bool result)
{
    if (result == KAL_TRUE)
    {
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, RMMI_ERR_UNKNOWN);
    }
    return;
}
#endif


void l4c_eq_reset_nvram_rrsp(l4c_result_struct result)
{
    return;
}	


/*****************************************************************************
 * FUNCTION
 *  l4c_em_get_conftest_para_rrsp
 * DESCRIPTION
 *  This function is used to response AT+EPCT read mode
 * PARAMETERS
 *  result      [IN]         
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_em_get_conftest_para_rrsp(kal_bool result)
{
    kal_uint8 buffer[RMMI_SHORT_RSP_LEN];
    kal_uint16 string_len = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_common_context_struct *l4c_comm_ptr = L4C_COMM_PTR;

    if(result == KAL_TRUE)
    {
        rmmi_ptr->arg_list[0] = (void*)&l4c_comm_ptr->ps_conf_test_mode;
        rmmi_ptr->arg_list[1] = (void*)&l4c_comm_ptr->ps_conf_test_profile;
        string_len = rmmi_fast_string_print(buffer,
                                            (kal_uint8*)"+EPCT: %d,%e",
                                            rmmi_ptr->arg_list,
                                            2);
    }  
    rmmi_final_rsp_generator(rmmi_ptr->current_src, result, buffer, string_len);
}


/*****************************************************************************
 * FUNCTION
 *  l4c_eq_query_cal_data_dl_status_rrsp
 * DESCRIPTION
 *  This function is used to response AT+EPCT read mode
 * PARAMETERS
 *  cal_data_valid      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_eq_query_cal_data_dl_status_rrsp(kal_bool cal_data_valid)
{
    kal_uint8 buffer[20];
    kal_uint16 string_len = 0;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)&cal_data_valid;
    string_len = rmmi_fast_string_print(buffer,
                                        (kal_uint8*)"+ECAL: %d",
                                        rmmi_ptr->arg_list,
                                        1);
    
    rmmi_final_rsp_generator(rmmi_ptr->current_src, KAL_TRUE, buffer, string_len);
}


#if defined(__2STAGE_NW_SELECTION__)
/*****************************************************************************
 * FUNCTION
 *  l4c_nw_modem_suspend_rind
 * DESCRIPTION
 *  This function is used to report +EMSR URC
 * PARAMETERS
 *  session_id   [IN]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_nw_modem_resume_rrsp(kal_uint8 session_id)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    kal_uint8 temp_src = rmmi_ptr->current_src;

    if (rmmi_ptr->emsr_mode == 1)
    {
        rmmi_ptr->current_src = RMMI_UNSOLICITED;
        rmmi_header_rrsp("+EMSR:");
        rmmi_tail_int_space_rrsp(session_id);
        rmmi_ptr->current_src = temp_src;
    }
}
#endif /* defined(__2STAGE_NW_SELECTION__) */

