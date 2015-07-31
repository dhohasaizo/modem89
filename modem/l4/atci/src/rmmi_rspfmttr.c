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
 * RMMI_RSPFMTTR.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

#define RMMI_RSPFMTTR_C

#include <stdio.h>
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "app_buff_alloc.h"     //mtk01616_070707
//#include "event_shed.h"
//#include "divider_public.h"
#include "kal_public_defs.h"
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

#include "mcd_l4_common.h"
 
#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_table.h"
//#include "l4c_msghdlr.h"
#include "l4_trc.h"
#include "atci_trc.h"

#include "dcl.h"

//#include "l4c_aux_struct.h"
/////////add to provide SAT sturcture ///////////////////

//#include "sim_common_enums.h"

//#include "mcd_ss_parameters.h"  /* csm */
//#include "mcd_ss_tcapmessages.h"

#include "l4c_common_enum.h"
//#include "csmcc_enums.h"
//#include "csmcc_common_enums.h"
//#include "ps2sat_struct.h"
//#include "l4c2csm_cc_struct.h"

//#include "l4c2csm_ss_struct.h"
#include "l4c2smsal_struct.h"
//#include "ps2sat_struct.h"

//#include "mcd_ps2sat_peer.h" 

//#include "l4_defs.h"
#include "csmcc_atfunc.h"

//#include "mcd_l3_inc_struct.h"

#ifdef __UE_SIMULATOR__
#include "tst_sap.h"
#include "l4c2uegw_struct.h"
#endif
 
#ifdef __MOD_SMSAL__
#include "smsal_l4c_enum.h"
//#include "smsal_l4c_defs.h"
//#include "smsal_defs.h"
#include "l4c2smsal_struct.h"
//#include "mcd_l4c2smsal_peer.h"
#endif /* __MOD_SMSAL__ */ 
#ifdef __MOD_UEM__
//#include "device.h"
//#include "l4c2uem_struct.h"
#endif /* __MOD_UEM__ */ 

#include "l4c_utility.h"
#include "rmmi_utility.h"
#include "rmmi_rspfmttr.h"
//#include "l4c2phb_enums.h"
//#include "phb_utils.h"
#include "rmmi_validator.h"
#include "l3_inc_enums.h"       /* for SMSAL 3GPP 27.005 clause 3.2.5 ATcmd cause values */

#include "rmmi_msghdlr.h"

//#include "kal_non_specific_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "ps_trace.h"
#include "kal_trace.h"
//#include "kal_common_defs.h"
//#include "kal_release.h"
#include "string.h"

#include "kal_general_types.h"
#include "cmux_vp_num.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "ps_em_enum.h"
#include "l4c_em.h"

#ifdef UART_ENABLE
#include "rmmi_sio.h"
#endif

#ifdef __UE_SIMULATOR__
#include "l4_msgid.h"
#endif

#include "l4_ps_api.h"

//extern char* plmn_alpha[4][2];
extern UART_PORT PS_UART_PORT;
extern kal_bool l4c_cc_exe_ata_req(kal_uint8 src_id);
extern kal_bool rmmi_translate_oper_name(
                    kal_uint8 format1,
                    kal_uint8 *oper_str1,
                    kal_uint8 format2,
                    kal_uint8 *oper_str2);

extern void UART_ClrRxBuffer(UART_PORT port, module_type ownerid);
extern kal_uint16 rmmi_get_ring_interval(void);
extern kal_bool l4c_cc_get_bearer_service_req(kal_uint8 src_id, kal_uint8 * speed, kal_uint8 * name, kal_uint8 * ce);
#ifdef __MOD_TCM__
extern const kal_uint8* custom_get_gprs_dialup_connect_post_string(kal_uint8 act); //MAUI_02386357, mtk02285, MAUI_02825172, __PS_DIALUP_CONNECT_STRING_BY_ACT__
#endif

/*****************************************************************************
 * FUNCTION
 *  rmmi_result_code_fmttr
 * DESCRIPTION
 *  Spec 07.07 Sec 9.2
 * PARAMETERS
 *  rsp_type        [IN]        rmmi_rsp_type_enum
 *  cause           [IN]        rmmi_err_id_enum
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause)
{
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint16 string_length = 0;
    kal_uint8 cid;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    //kal_brief_trace(TRACE_FUNC, FUNC_RMMI_RESULT_CODE_FMTTR_ENTRY);
    if (rsp_type != RMMI_RCODE_ERROR)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RESULT_CODE_FMTTR, rsp_type);
    }
    else
    {
        kal_brief_trace(TRACE_INFO, RMMI_RESULT_CODE_ERROR, rsp_type, cause);
	rmmi_ptr->cmee_err = cause;
    }

    //cid = rmmi_srcid_2_cid(RMMI_SRC);
    cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);

    kal_brief_trace(TRACE_INFO, RMMI_SRC_ID_AND_CID, rmmi_ptr->current_src, cid);

    //if (cid < RMMI_MAX_CHANNEL_NUMBER)  /* if the action is ATD, the action finished, so we reset the ATD flag */
    {
        RMMI_COMM_PTR->isAtdAction_flag &= ~(0x01 << cid);
    }

    /* tst inject, do not send response to DTE, reset cmd_from_tst flag */
    if (RMMI_COMM_PTR->cmd_from_tst == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, RMMI_CMD_FROM_TST);
        RMMI_COMM_PTR->cmd_from_tst = KAL_FALSE;
#ifndef __UE_SIMULATOR__
        return;
#endif        
    }

    switch (rsp_type)
    {
        case RMMI_RCODE_OK:
            if (l4c_ptr->route_thru_lmmi == KAL_TRUE
#ifdef __ATCI_QUEUE_AT__
                && rmmi_need_clear_route_lmmi()
#endif /*__ATCI_QUEUE_AT__*/
                )
            {
                l4c_ptr->route_thru_lmmi = KAL_FALSE;
            }
            if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
                // there's remaining mutli command, do not print final result code OK.
            {
                kal_brief_trace(TRACE_INFO, RMMI_SRC_ID_AND_CID, rmmi_ptr->current_src, cid);
                return;
            }
            //  if(RMMI_PTR->is_gprs_data_dialing)
            // {
            //      RMMI_PTR->is_gprs_data_dialing = KAL_FALSE;
            // }

            if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
            {
                rmmi_ptr->arg_list[0] = (void*)&rsp_type;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
            }
            else
            {
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "OK", rmmi_ptr->arg_list, 0);
            }
            break;

        case RMMI_RCODE_CONNECT:
        case RMMI_RCODE_CONNECT_PS: //mtk02285, MAUI_02956467           
            if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
            {
                kal_uint8 temp_rsp_type = RMMI_RCODE_CONNECT;
                rmmi_ptr->arg_list[0] = (void*)&temp_rsp_type;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
            }
            else
            {
                if (cause != L4C_NO_CAUSE)
                {
#ifdef __MOD_TCM__            
                    if (RMMI_RCODE_CONNECT_PS == rsp_type)
                    {                    
       				    kal_uint8 post_string[80];
                        #ifdef __ORANGE_H_PLUS__
                        strncpy((char*)post_string, (char*)custom_get_gprs_dialup_connect_post_string((kal_uint8)rmmi_ptr->register_act), 64);
                        #else
                        strncpy((char*)post_string, (char*)custom_get_gprs_dialup_connect_post_string((kal_uint8)rmmi_ptr->ps_register_status.act), 64); //__PS_DIALUP_CONNECT_STRING_BY_ACT__
                        #endif
						post_string[64] = '\0';
						rmmi_ptr->arg_list[0]= (void*)post_string;
					    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "CONNECT%s", rmmi_ptr->arg_list, 1);
                    }
                    else
#endif /* __MOD_TCM__ */                        
                    {
                        kal_uint32 rate;				
                        l4ccsm_cc_get_data_rate(&rate);
                        rmmi_ptr->arg_list[0] = (void*)&rate;
    			        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "CONNECT %e", rmmi_ptr->arg_list, 1);						
                    }
                }
                else
                {
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "CONNECT", rmmi_ptr->arg_list, 0);
                }
            }
            break;
        case RMMI_RCODE_BUSY:
            if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
            {
                rmmi_ptr->arg_list[0] = (void*)&rsp_type;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
            }
            else
            {
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "BUSY", rmmi_ptr->arg_list, 0);
            }
            break;
        case RMMI_RCODE_RING:
        {
            kal_bool ret_val;
            kal_uint16 interval;

        #ifdef __UCM_SUPPORT__
            rmmi_string_struct *source_string_ptr;
            rmmi_multiple_basic_cmd_struct *head_node_ptr;
            rmmi_err_id_enum err_id;
        #endif /* __UCM_SUPPORT__ */ 

            /* mtk00714: 20040317 : for ATS0 automatic answr a call after # of rings */
            if (rmmi_ptr->cring_type != RMMI_CRING_GPRS)
            {
                if ((rmmi_ptr->s_reg.s0 != 0) || ((query_ps_conf_test_mode()==PS_CONF_TEST_FACTORY) && (query_ps_conf_test_profile_setting() & FACTORY_MODEM_AUTO_BOOT_AND_AUTO_ANSWER_BIT_FOR_L4C)))
                {
                    if (rmmi_ptr->ring_count >= rmmi_ptr->s_reg.s0)     //for module : Maui_sw 9943
                    {
                        //mtk01616_070707
                    #ifndef __UCM_SUPPORT__
                        rmmi_ptr->ring_count = 0;
                        ret_val = l4c_cc_exe_ata_req(rmmi_ptr->ats0_src_id); //MAUI_02743662
                        if (ret_val == KAL_TRUE)
                        {
                            rmmi_ptr->ats0_auto_answer = KAL_TRUE; //MAUI_02280805
                            return;
                        }
                    #else /* __UCM_SUPPORT__ */ 
                        rmmi_reset_ring_count();
                        source_string_ptr = (rmmi_string_struct*) get_ctrl_buffer(sizeof(rmmi_string_struct));
                        head_node_ptr =
                            (rmmi_multiple_basic_cmd_struct*) get_ctrl_buffer(sizeof(rmmi_multiple_basic_cmd_struct));

                        ((rmmi_string_struct*) source_string_ptr)->string_ptr = (kal_uint8*) get_ctrl_buffer(10);
                        kal_sprintf((kal_char*)source_string_ptr->string_ptr, "ATA%c", rmmi_ptr->s_reg.s3);
                        source_string_ptr->index = 2;
                        source_string_ptr->src_id = rmmi_ptr->ats0_src_id; //MAUI_02743662

                        ret_val = rmmi_ata_hdlr(source_string_ptr, head_node_ptr, &err_id);

                        free_ctrl_buffer(source_string_ptr->string_ptr);
                        free_ctrl_buffer(source_string_ptr);
                        free_ctrl_buffer(head_node_ptr);
                        if (ret_val == KAL_TRUE)
                        {
                            rmmi_ptr->ats0_auto_answer = KAL_TRUE;
                            return;
                        }
                    #endif /* __UCM_SUPPORT__ */ 
                    }
                    rmmi_ptr->ring_count++;
                }
            }

            //MAUI_01800132 rescheduling next RING timer before print
            if (l4c_ptr->event_id[6] != 0)      //mtk00924_060223: cancel timer first if still has event
            {
                kal_brief_trace(TRACE_INFO, INFO_RMMI_CANCEL_EVENT, l4c_ptr->event_id[6]);
                evshed_cancel_event(l4c_ptr->event_scheduler_ptr, &(l4c_ptr->event_id[6]));
                l4c_ptr->event_id[6] = 0;
            }
            interval = rmmi_get_ring_interval();

            l4c_ptr->event_id[6] = evshed_set_event(
                                    l4c_ptr->event_scheduler_ptr,
                                    (kal_timer_func_ptr) rmmi_ring_repeat_hdlr,
                                    NULL,
                                    interval * KAL_TICKS_100_MSEC);

            //MAUI_01800132 check ATQ setting before print
            if (rmmi_ptr->rsp_mode.suppress_flag == RMMI_SUPRESS_ON)
            {
                kal_brief_trace(TRACE_INFO, RMMI_RESPONSE_SUPPRESS_ON);
                return;
            }
            
            if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
            {
                rmmi_ptr->arg_list[0] = (void*)&rsp_type;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
                rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
            }
            else
            {
                if (rmmi_ptr->report_mode.crc == RMMI_DISABLE_REPORT)
                {
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "RING", rmmi_ptr->arg_list, 0);
                    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);  //print RING
                }
                else    //RMMI_ENABLE_REPORT: CRING
                {
                    rmmi_cring_unsolicited_rsp_fmttr(buffer);
                }
            }

            /* print +CLIP unsolicited result code if enable */
            if (rmmi_ptr->report_mode.clip == RMMI_ENABLE_REPORT)
            {
                rmmi_clip_unsolicited_rsp_fmttr(buffer);
            }
            return;
        }
        case RMMI_RCODE_NO_CARRIER:

            if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
            {
                rmmi_ptr->arg_list[0] = (void*)&rsp_type;
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
            }
            else
            {
                string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "NO CARRIER", rmmi_ptr->arg_list, 0);
            }
            break;

        case RMMI_RCODE_ERROR:
            if (l4c_ptr->route_thru_lmmi == KAL_TRUE
#ifdef __ATCI_QUEUE_AT__
                && rmmi_need_clear_route_lmmi()
#endif /*__ATCI_QUEUE_AT__*/
                )
            {
                l4c_ptr->route_thru_lmmi = KAL_FALSE;
            }
            if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
            {
                kal_brief_trace(TRACE_INFO, RMMI_MULTI_CMD_ERROR);
                //RMMI_PTR->multi_cmd_error = KAL_TRUE;
                //RMMI_PTR->is_multi_cmd = KAL_FALSE;
                RMMI_COMM_PTR->multi_cmd_error |= (0x01 << cid);

                /* mtk00924_060109: does not reset is_multi_cmd here, reset it at 1.receiving CNF message and then call
                   rmmi_process_multi_cmd, 2.in rmmi_cmd_processor. Also give result code at these two function */
                //RMMI_PTR->is_multi_cmd &= ~(0x01 << cid);

                /* add by mtk00714 */
                RMMI_COMM_PTR->multi_cmd_string[cid][0] = 0;

                /* mtk02514 *** MAUI_01643487 *** 090309 *************
                *  We will clear multi_cmd_error flag at
                * rmmi_cmd_processor or rmmi_process_multi_cmd()
                ********************************************/

            }
            if (rmmi_ptr->error_report_mode == RMMI_SIMPLE_ERROR)
            {
                if (rmmi_ptr->rsp_mode.format == RMMI_NUM_PARTIAL_HEAD_TAIL)
                {
                    rmmi_ptr->arg_list[0] = (void*)&rsp_type;
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "%d", rmmi_ptr->arg_list, 1);
                }
                else
                {
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "ERROR", rmmi_ptr->arg_list, 0);
                }
            }
            else if (rmmi_ptr->error_report_mode == RMMI_NUMERIC_ERROR)
            {
                if (cause == RMMI_ERR_COMMAND_CONFLICT)
                {
                    cause = OPERATION_NOT_ALLOWED_ERR;
                }

                /* by mtk00714 */
                if (cause > 256)        //proprietary RMMI error cause (rmmi_err_id_enum)
                {
                    if (((cause > SM_CAUSE_START) && (cause < SM_CAUSE_END)) ||
                        ((cause >= SM_PROPRIETARY_CAUSE_START) && (cause < SM_PROPRIETARY_CAUSE_END)) ||
                        ((cause >= TCM_CAUSE_START) && (cause < TCM_CAUSE_END)) ||
                        ((cause >= L4C_CMD_CONFLICT) && (cause < L4C_CAUSE_END))
                #if defined(__SP_RIL_SUPPORT__)
                        || cause == PHB_CAUSE_FDN_BLOCKED 
                        || cause == RMMI_ERR_BT_SAP_UNDEFINED 
                        || cause == RMMI_ERR_BT_SAP_NOT_ACCESSIBLE 
                        || cause == RMMI_ERR_BT_SAP_CARD_REMOVED
                #endif /* __SP_RIL_SUPPORT__ */                                 
                        )
                    {
                        rmmi_ptr->arg_list[0] = (void*)&cause;
                        string_length = rmmi_fast_string_print(
                                        buffer,
                                        (kal_uint8*) "+CME ERROR: %u",
                                        rmmi_ptr->arg_list,
                                        1);
                    }
                    else
                    {
                        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "ERROR", rmmi_ptr->arg_list, 0);
                    }
                }
                else
                {
                    rmmi_ptr->arg_list[0] = (void*)&cause;
                    string_length = rmmi_fast_string_print(
                                        buffer,
                                        (kal_uint8*) "+CME ERROR: %u",
                                        rmmi_ptr->arg_list,
                                        1);
                }
            }
            else
            {
                /* by mtk00714 : we only maintain 160 entries of error string in the table */
                if (cause >= RMMI_MAX_ERROR_NUM)
                {
                    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "ERROR", rmmi_ptr->arg_list, 0);
                }
                else
                {
                    rmmi_ptr->arg_list[0] = (void*)RMMI_ERROR_MSG_TABLE[cause];
                    string_length = rmmi_fast_string_print(
                                        buffer,
                                        (kal_uint8*) "+CME ERROR: %s",
                                        rmmi_ptr->arg_list,
                                        1);
                }
            }

            if (cid < RMMI_MAX_CHANNEL_NUMBER)
            {
            #ifdef UART_ENABLE
                kal_uint8 port;

                port = rmmi_cid_2_port(cid);
                if (RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
                {
                    RMMI_UART_ClrRxBuffer((UART_PORT)port, MOD_ATCI);
                }
            #endif /* UART_ENABLE */ 
#ifndef __ATCI_QUEUE_AT__
                RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
                RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
#endif 
            }
            break;

        default:
            break;

    }

#ifdef __SAT__
#ifdef __SATCB__
    rmmi_ptr->IsSATcommand = KAL_FALSE; //finish parse SAT at command
#endif 
#endif 

    //MAUI_01800132 check ATQ setting before print
    if (rmmi_ptr->rsp_mode.suppress_flag == RMMI_SUPRESS_ON)
    {
        kal_brief_trace(TRACE_INFO, RMMI_RESPONSE_SUPPRESS_ON);
        return;
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);

    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_final_rsp_generator
 * DESCRIPTION
 *  the function generates the information response and final result code to DTE.
 * PARAMETERS
 *  src_id              [IN]        l4c_source_enum (channel)
 *  ret_val             [IN]        OK/ERROR
 *  buffer              [?]         
 *  string_length       [IN]        the length of buffer.
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_final_rsp_generator(kal_uint8 src_id, kal_bool ret_val, kal_uint8 *buffer, kal_uint16 string_length)
{
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#ifdef __UE_SIMULATOR__
    l4uegw_at_response_ind_struct *l4uegw_at_response_ind_ptr;

    if (string_length > 0 && string_length < 128)
    {
        l4uegw_at_response_ind_ptr = (l4uegw_at_response_ind_struct *)construct_local_para((kal_uint16)sizeof(l4uegw_at_response_ind_struct), TD_RESET);
        memcpy((kal_char*)l4uegw_at_response_ind_ptr->tst_inject.string, buffer, string_length);
        l4uegw_at_response_ind_ptr->tst_inject.index = string_length;
        l4c_send_msg_to_uegw(MSG_ID_L4UEGW_AT_RESPONSE_IND, l4uegw_at_response_ind_ptr);
    }
    else 
    {
        l4uegw_at_response_ind_ptr = (l4uegw_at_response_ind_struct *)construct_local_para((kal_uint16)sizeof(l4uegw_at_response_ind_struct), TD_RESET);
        if (ret_val)
        {
            strcpy((kal_char*)l4uegw_at_response_ind_ptr->tst_inject.string, "OK");
            l4uegw_at_response_ind_ptr->tst_inject.index = 2;
        }
        else
        {
            strcpy((kal_char*)l4uegw_at_response_ind_ptr->tst_inject.string, "ERROR");
            l4uegw_at_response_ind_ptr->tst_inject.index = 5;
        }
        l4c_send_msg_to_uegw(MSG_ID_L4UEGW_AT_RESPONSE_IND, l4uegw_at_response_ind_ptr);
    }
#else /* __UE_SIMULATOR__ */
    if (ret_val == KAL_TRUE)
    {
        if (string_length > 0)
        {
            rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
        }
        rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    }
    else
    {
        rmmi_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err);
        //RMMI_PTR->cmee_err = RMMI_ERR_UNSPECIFIED;      //back to initial value.
    }
#endif /* __UE_SIMULATOR__ */
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_result_code_fmttr
 * DESCRIPTION
 *  Spec 07.05 Sec 3.2.5
 *  the function generates +CMS ERROR for SMS error,
 *  if rsp_type is OK, call original rmmi_result_code_fmttr
 * PARAMETERS
 *  rsp_type            [IN]        rmmi_rsp_type_enum
 *  cause               [IN]        rmmi_err_id_enum
 *  cause_present       [IN]        (indicates if cause is present)
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sms_result_code_fmttr(kal_uint8 rsp_type, kal_uint16 cause, kal_bool cause_present)
{
#if defined(__SLIM_AT__) 
    //low cost : no extended error cause
    rmmi_result_code_fmttr(rsp_type, cause);

#else 
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint16 string_length = 0;
    kal_uint8 cid;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    /* SMS +CMS ERROR result code is different from other 07.07 commands */
    /* so we have to do special handle when +CMEE=1 or 2 */
    if ((rsp_type != RMMI_RCODE_ERROR) ||       //OK
        (rmmi_ptr->error_report_mode == RMMI_SIMPLE_ERROR))     //+CMEE=0
    {
        rmmi_result_code_fmttr(rsp_type, cause);
    }
    else
    {
        kal_brief_trace(TRACE_INFO, RMMI_RESULT_CODE_ERROR, rsp_type, cause);
        cid = rmmi_srcid_2_cid(rmmi_ptr->current_src);

        /* tst inject, do not send response to DTE, reset cmd_from_tst flag */
        if (RMMI_COMM_PTR->cmd_from_tst == KAL_TRUE)
        {
            RMMI_COMM_PTR->cmd_from_tst = KAL_FALSE;
            return;
        }
        if (rmmi_ptr->rsp_mode.suppress_flag == RMMI_SUPRESS_ON)
        {
            return;
        }

        /* start handling ERROR */
        if ((cid < RMMI_MAX_CHANNEL_NUMBER) && (RMMI_COMM_PTR->is_multi_cmd & (0x01 << cid)))
        {
            RMMI_COMM_PTR->multi_cmd_error |= (0x01 << cid);
	     /* does not reset is_multi_cmd here, reset it at 1.receiving CNF message and then call
                   rmmi_process_multi_cmd, 2.in rmmi_cmd_processor. Also give result code at these two function */
            //RMMI_PTR->is_multi_cmd &= ~(0x01 << cid);

            /* add by mtk00714 */
            RMMI_COMM_PTR->multi_cmd_string[cid][0] = 0;

            /* mtk02514 *** MAUI_01643487 *** 090309 *************
            *  We will clear multi_cmd_error flag at
            * rmmi_cmd_processor or rmmi_process_multi_cmd()
            ********************************************/
        }

        /* AT+CMEE=1 or 2 */
        if (cause_present == KAL_TRUE)
        {
            /* cause given by MOD_SMSAL */
            kal_sprintf((kal_char*) buffer, "+CMS ERROR: %u", cause);
        }
        else
        {
            /* error related to syntax or invalid parameters : ERROR is returned normally */
            kal_sprintf((kal_char*) buffer, "ERROR");
        }
        string_length = (kal_uint16)strlen((char*)buffer);

        if (cid < RMMI_MAX_CHANNEL_NUMBER)
        {
        #ifdef UART_ENABLE
            kal_uint8 port;

            port = rmmi_cid_2_port(cid);
            if (RMMI_UART_GetOwnerID((UART_PORT)port) == MOD_ATCI)
            {
                RMMI_UART_ClrRxBuffer((UART_PORT)port, MOD_ATCI);
            }
        #endif /* UART_ENABLE */ 
#ifndef __ATCI_QUEUE_AT__
            RMMI_COMM_PTR->uart_input_queue[cid].head = 0;
            RMMI_COMM_PTR->uart_input_queue[cid].length = 0;
#endif 
        }

    #ifdef __SAT__
    #ifdef __SATCB__
        rmmi_ptr->IsSATcommand = KAL_FALSE;     //finish parse SAT at command
    #endif 
    #endif 

        rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);

    }

#endif /* defined(__SLIM_AT__) */
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_final_rsp_generator
 * DESCRIPTION
 *  the function generates the information response and final result code for 07.05 SMS command to DTE.
 * PARAMETERS
 *  src_id              [IN]        l4c_source_enum (channel)
 *  ret_val             [IN]        OK/ERROR
 *  buffer              [?]         
 *  string_length       [IN]        the length of buffer.
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sms_final_rsp_generator(kal_uint8 src_id, kal_bool ret_val, kal_uint8 *buffer, kal_uint16 string_length)
{
#if defined(__SLIM_AT__) 
    //low cost : no extended error cause
    rmmi_final_rsp_generator(src_id, ret_val, buffer, string_length);

#else 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    if (ret_val == KAL_TRUE)
    {
        rmmi_final_rsp_generator(src_id, ret_val, buffer, string_length);
    }
    else
    {
        kal_bool cause_present = KAL_FALSE;

    #if defined(__WM_RIL_SUPPORT__) //WM need to print +CMS ERROR
        if (rmmi_ptr->cmee_err == RMMI_ERR_COMMAND_CONFLICT || rmmi_ptr->cmee_err == INVALID_MEM_INDEX)
    #else 
        if (rmmi_ptr->cmee_err == RMMI_ERR_COMMAND_CONFLICT)
    #endif 
            cause_present = KAL_TRUE;

        rmmi_sms_result_code_fmttr(RMMI_RCODE_ERROR, rmmi_ptr->cmee_err, cause_present);
        rmmi_ptr->cmee_err = RMMI_ERR_UNSPECIFIED;      //back to initial value.
    }
#endif /* defined(__SLIM_AT__) */
}


#ifdef __MOD_CSM__


/*****************************************************************************
 * FUNCTION
 *  rmmi_clcc_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  call_entry      [IN]        
 *  addr            [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clcc_read_rsp_fmttr(l4c_call_entry_struct call_entry, l4c_number_struct addr)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CLCC_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&(call_entry.call_id);
    rmmi_ptr->arg_list[1] = (void*)&(call_entry.call_orig);
    rmmi_ptr->arg_list[2] = (void*)&(call_entry.call_state);
    rmmi_ptr->arg_list[3] = (void*)&(call_entry.call_mode);
    rmmi_ptr->arg_list[4] = (void*)&(call_entry.mpty);
    rmmi_ptr->arg_list[5] = (void*)addr.number;

    if ((addr.type & 0x70) == 0x10)
    {
        addr.type = 145;        // international number
    }
    else
    {
        addr.type = 129;        // national number      
    }

    rmmi_ptr->arg_list[6] = (void*)&(addr.type);

    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLCC: %d,%d,%d,%d,%d,\"%s\",%d",     //for module : Maui_sw 9943
                                           rmmi_ptr->arg_list, 7);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cring_unsolicited_rsp_fmttr
 * DESCRIPTION
 *  This is rmmi_cring_unsolicited_rsp_fmttr function of RMMI module.
 *  if +CRC =1 enables, +CRING will be sent to DTE instead of RING
 *  mtk00714: 20040413
 * PARAMETERS
 *  buffer      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cring_unsolicited_rsp_fmttr(kal_uint8 *buffer)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 cring_type_str[20];
    kal_uint8 data_call_info;
    kal_uint8 data_type_str[10];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_mem_set(cring_type_str,0,sizeof(cring_type_str));
    kal_mem_set(data_type_str,0,sizeof(data_type_str));	 

    l4ccsm_cc_get_data_call_info(&data_call_info);
    switch (data_call_info)
    {
        case L4C_ASYNC_T:
            kal_sprintf((char*)data_type_str, "ASYNC");
            break;
        case L4C_SYNC_T:
            kal_sprintf((char*)data_type_str, "SYNC");
            break;
        case L4C_ASYNC_NT:
            kal_sprintf((char*)data_type_str, "REL ASYNC");
            break;
        case L4C_SYNC_NT:
            kal_sprintf((char*)data_type_str, "REL SYNC");
            break;
    }

    if (rmmi_ptr->cring_type == RMMI_CRING_VOICE)
    {
        kal_sprintf((char*)cring_type_str, "VOICE");
    }

    else if (rmmi_ptr->cring_type == RMMI_CRING_DATA)
    {
        strcpy((char*)cring_type_str, (char*)data_type_str);
    }

    else if (rmmi_ptr->cring_type == RMMI_CRING_FAX)
    {
        kal_sprintf((char*)cring_type_str, "FAX");
    }

    else if (rmmi_ptr->cring_type == RMMI_CRING_VOICE_DATA)
    {
        kal_sprintf((char*)cring_type_str, "VOICE/");  //VOICE/xxx
        strcat((char*)cring_type_str, (char*)data_type_str);
    }
    else if (rmmi_ptr->cring_type == RMMI_CRING_ALT_VOICE_DATA) //ALT VOICE/XXX
    {
        kal_sprintf((char*)cring_type_str, "ALT VOICE/");
        strcat((char*)cring_type_str, (char*)data_type_str);
    }
    else if (rmmi_ptr->cring_type == RMMI_CRING_DATA_VOICE)     // XXX/VOICE
    {
        strcpy((char*)cring_type_str, (char*)data_type_str);
        strcat((char*)cring_type_str, "/VOICE");
    }
    else if (rmmi_ptr->cring_type == RMMI_CRING_ALT_VOICE_FAX)
    {
        kal_sprintf((char*)cring_type_str, "ALT VOICE/FAX");
    }

    else if (rmmi_ptr->cring_type == RMMI_CRING_ALT_DATA_VOICE) //ALT xxx/VOICE
    {
        kal_sprintf((char*)cring_type_str, "ALT ");
        strcat((char*)cring_type_str, (char*)data_type_str);
        strcat((char*)cring_type_str, "/VOICE");
    }
    else if (rmmi_ptr->cring_type == RMMI_CRING_ALT_FAX_VOICE)
    {
        kal_sprintf((char*)cring_type_str, "ALT FAX/VOICE");
    }

    else if (rmmi_ptr->cring_type == RMMI_CRING_GPRS)
    {
        kal_sprintf((char*)cring_type_str, "GPRS");
    }
#if defined(__SP_RIL_SUPPORT__)
    else if (rmmi_ptr->cring_type == RMMI_CRING_VOICE_AUX)
    {
        kal_sprintf((char*)cring_type_str, "AUX VOICE");
    }
#endif /* __SP_RIL_SUPPORT__ */ 
#ifdef __VT_TRANSPORT_SUPPORT__
    else if (rmmi_ptr->cring_type == RMMI_CRING_VIDEO)
    {
        kal_sprintf((char*)cring_type_str, "VIDEO");
    }
#endif
    else
    {
        kal_sprintf((char*)cring_type_str, "UNKNOWN");
    }

    rmmi_ptr->arg_list[0] = (void*)cring_type_str;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRING: %s",  //vito remove space
                                           rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);  //print CRING
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_caemlpp_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  default_priority        [IN]        
 *  max_priority            [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_caemlpp_read_rsp_fmttr(kal_uint8 default_priority, kal_uint8 max_priority)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CAEMLPP_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&default_priority;
    rmmi_ptr->arg_list[1] = (void*)&max_priority;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CAEMLPP: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ccfc_interrogate_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status      [IN]        
 *  bclass      [IN]        
 *  timer       [IN]        
 *  address     [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ccfc_interrogate_rsp_fmttr(kal_uint8 status, kal_uint8 bclass, kal_uint8 timer, kal_uint8 *address)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 type = 129;
    kal_uint8 buffer[MAX_UART_LENGTH];
#if !defined(__SP_RIL_SUPPORT__)
    kal_uint8 bs_code;
#endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CCFC_INTERROGATE_RSP_FMTTR_ENTRY);
    ASSERT(address != NULL);

    if ((status & 0x01) == 0)   //last bit of status : SS_ABIT is for activation
    {
        status = 0;
    }
    else
    {
        status = 1;
    }
#if !defined(__SP_RIL_SUPPORT__)
    bs_code = check_bscode_class(bclass);
#endif
    rmmi_ptr->arg_list[0] = (void*)&status;

#if defined(__SP_RIL_SUPPORT__)    /* return bclass that form CSM directly to WM RIL */
    rmmi_ptr->arg_list[1] = (void*)&bclass;
#else 
    rmmi_ptr->arg_list[1] = (void*)&bs_code;
#endif 

    rmmi_ptr->arg_list[2] = (void*)address;
    if (address[0] == RMMI_CHAR_PLUS)
    {
        type = 145;
    }
    rmmi_ptr->arg_list[3] = (void*)&type;
    if ((status == 0) && (bclass == 0)) //MAUI_01740106: network doesn't bring bs_code and the service is not active
    {
#if defined(__SP_RIL_SUPPORT__)
        kal_sprintf((char*)buffer, "+CCFC: 0, 0");
#else
        kal_sprintf((char*)buffer, "+CCFC: 0, 7");
#endif
        string_length = (kal_uint16)strlen((char*)buffer);
    }   
    else if (timer != 0)
    {
        rmmi_ptr->arg_list[4] = (void*)&timer;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: %d, %d,\"%s\", %d,,, %d",  //vito remove space
                                               rmmi_ptr->arg_list, 5);
    }
    else
    {
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCFC: %d, %d,\"%s\", %d",        //vito remove space
                                               rmmi_ptr->arg_list, 4);

    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_ccwa_interrogate_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ss_status       [IN]        
 *  bclass          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_ccwa_interrogate_rsp_fmttr(kal_uint8 ss_status, kal_uint8 bclass)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
#if !defined(__SP_RIL_SUPPORT__)
    kal_uint8 classx;
#endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CCWA_INTERROGATE_RSP_FMTTR_ENTRY);

#if !defined(__SP_RIL_SUPPORT__)
    classx = check_bscode_class(bclass);
#endif

    rmmi_ptr->arg_list[0] = (void*)&ss_status;
#if defined(__SP_RIL_SUPPORT__)
    rmmi_ptr->arg_list[1] = (void*)&bclass;
#else 
    rmmi_ptr->arg_list[1] = (void*)&classx;
#endif 
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CCWA: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cdip_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cdip_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
#if !defined(__SLIM_AT__)

    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CDIP_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&report_mode;
    rmmi_ptr->arg_list[1] = (void*)&status;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CDIP: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_clip_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clip_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CLIP_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&report_mode;
    rmmi_ptr->arg_list[1] = (void*)&status;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLIP: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_clip_unsolicited_rsp_fmttr
 * DESCRIPTION
 *  This is rmmi_clip_unsolicited_rsp_fmttr function of RMMI module.
 *  if AT+CLIP=1 enables the result code.
 *  the +CLIP: <number>,<type>[,<subaddr>,<satype>[,<alpha>[,<cli validity>]]]
 *  will be returned after very RING.
 *  The caller is rmmi_result_code_fmttr(RMMI_RCODE_RING)
 *  mtk00714: 20040413
 * PARAMETERS
 *  buffer      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clip_unsolicited_rsp_fmttr(kal_uint8 *buffer)
{
    kal_uint16 string_length;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)rmmi_ptr->clip_info.number;
    rmmi_ptr->arg_list[1] = (void*)&rmmi_ptr->clip_info.type;
    rmmi_ptr->arg_list[2] = (void*)rmmi_ptr->clip_info.subaddr;
    rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->clip_info.satype;
    rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->clip_info.cli_validity;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLIP: \"%s\",%d,\"%s\",%d,\"\",%d",  //for module : Maui_sw 9943
                                           rmmi_ptr->arg_list, 5);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);  //print ring
    return;
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_colp_unsolicited_rsp_fmttr
 * DESCRIPTION
 *  This is rmmi_colp_unsolicited_rsp_fmttr function of RMMI module.
 *  if AT+COLP=1 enables the result code.
 *  the +COLP: <number>,<type>[,<subaddr>,<satype>[,<alpha>]]
 *  will be returned after connected.
 *  The caller is l4ccsm_cc_call_connect_ind_hdlr
 *  mtk02508: 20090309
 * PARAMETERS
 *  num         [IN]
 *  sub_addr    [IN]
 *  name        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_colp_unsolicited_rsp_fmttr(
        l4c_number_struct *num,
        l4c_sub_addr_struct *sub_addr,
        kal_uint8 *name)
{
#if !defined(__SLIM_AT__)

    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)num->number;
    rmmi_ptr->arg_list[1] = (void*)&num->type;        
    rmmi_ptr->arg_list[2] = (void*)sub_addr->number;
    rmmi_ptr->arg_list[3] = (void*)&sub_addr->type;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+COLP: \"%s\",%d,\"%s\",%d",
                                           rmmi_ptr->arg_list, 4);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}

/*****************************************************************************
 * FUNCTION
 *  rmmi_clir_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clir_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CLIR_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&report_mode;
    rmmi_ptr->arg_list[1] = (void*)&status;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLIR: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;

#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cnap_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cnap_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CNAP_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&report_mode;
    rmmi_ptr->arg_list[1] = (void*)&status;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CNAP: %d, %d", rmmi_ptr->arg_list, 2);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;

#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_colp_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_colp_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_COLP_READ_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&report_mode;
    rmmi_ptr->arg_list[1] = (void*)&status;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+COLP: %d, %d", rmmi_ptr->arg_list, 2);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;

#endif /* !defined(__SLIM_AT__) */ 
}

/* This is proprietary command for query COLR status for network */


/*****************************************************************************
 * FUNCTION
 *  rmmi_colr_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  report_mode     [IN]        
 *  status          [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_colr_read_rsp_fmttr(kal_uint8 report_mode, kal_uint8 status)
{
#if !defined(__SLIM_AT__) && !defined(__MMI_FMI__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    rmmi_ptr->arg_list[0] = (void*)&status; /* 0: not provision, 1: provision, 2: unknown */
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+COLR: %d", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;

#endif /* !defined(__SLIM_AT__) && !defined(__MMI_FMI__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_clck_interrogate_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  status      [IN]        
 *  bclass      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_clck_interrogate_rsp_fmttr(kal_uint8 status, kal_uint8 bclass)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
#if !defined(__SP_RIL_SUPPORT__)
    kal_uint8 classx = 0;
#endif
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CLCK_INTERROGATE_RSP_FMTTR_ENTRY);

#if !defined(__SP_RIL_SUPPORT__)
    classx = check_bscode_class(bclass);
#endif

    if (bclass != 0)
    {
        rmmi_ptr->arg_list[0] = (void*)&status;
#if defined(__SP_RIL_SUPPORT__)        
        rmmi_ptr->arg_list[1] = (void*)&bclass;
#else
        rmmi_ptr->arg_list[1] = (void*)&classx;
#endif
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLCK: %d, %d", rmmi_ptr->arg_list, 2);
    }
    else    /* invalid classx, dont show */
    {
        rmmi_ptr->arg_list[0] = (void*)&status;
        string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CLCK: %d", rmmi_ptr->arg_list, 1);

    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}

#endif /* __MOD_CSM__ */ 


/*****************************************************************************
 * FUNCTION
 *  rmmi_crsm_exe_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  sw1             [IN]        
 *  sw2             [IN]        
 *  length          [IN]        
 *  response        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_crsm_exe_rsp_fmttr(kal_uint8 sw1, kal_uint8 sw2, kal_uint16 length, kal_uint8 *response)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[256*2+24];
    kal_uint8 *response_buffer = NULL;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
#ifdef __UICC_CHANNEL_SUPPORT__
    kal_uint16 src_pos = (kal_uint16)(1 << rmmi_ptr->current_src);
#endif /* __UICC_CHANNEL_SUPPORT__ */

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CRSM_EXE_RSP_FMTTR_ENTRY);
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

#ifdef __UICC_CHANNEL_SUPPORT__
        if (rmmi_ptr->is_crla & src_pos)
        {
            rmmi_ptr->is_crla &= ~(src_pos);
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRLA: %d, %d, \"%s\"", rmmi_ptr->arg_list, 3);
        }
        else
#endif /* __UICC_CHANNEL_SUPPORT__ */
        {
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRSM: %d, %d, \"%s\"", rmmi_ptr->arg_list, 3);
        }
    }
    else
    {
#ifdef __UICC_CHANNEL_SUPPORT__
        if (rmmi_ptr->is_crla & src_pos )
        {
            rmmi_ptr->is_crla &= ~(src_pos);
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRLA: %d, %d", rmmi_ptr->arg_list, 2);
        }
        else
#endif /* __UICC_CHANNEL_SUPPORT__ */
        {
            string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CRSM: %d, %d", rmmi_ptr->arg_list, 2);
        }
    }
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

    free_ctrl_buffer(response_buffer);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cops_test_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  list        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cops_test_rsp_fmttr(l4c_rat_plmn_info_struct *list)
{
    kal_uint16 string_length = 0;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 oper_long_str[17];
    kal_uint8 oper_short_str[9];
    kal_uint8 rat;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_COPS_TEST_RSP_FMTTR_ENTRY);

    rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, list->plmn_id, RMMI_PLMN_LONG_ALPHA, oper_long_str);

    rmmi_translate_oper_name(RMMI_PLMN_NUMERIC, list->plmn_id, RMMI_PLMN_SHORT_ALPHA, oper_short_str);
    if (list->rat == RAT_GSM)
    {
        rat = 0;
    }
    else if (list->rat == RAT_UMTS)
    {
        rat = 2;
    }
    else
    {
        rat = 0xff;
    }

    string_length =(kal_uint16) kal_sprintf((char*)buffer, "(%d,\"%s\",\"%s\",\"%s\",", 
                                list->status,
                                oper_long_str,
                                oper_short_str,
                                list->plmn_id);

#ifdef __PLMN_LIST_WITH_LAC__
    if (RMMI_PTR->list_plmn_with_lac == KAL_TRUE)
    {
        string_length += (kal_uint16)kal_sprintf((char*)(buffer+string_length), "\"%02X%02X\",", list->lac[0], list->lac[1]);
    }
#endif

    string_length += (kal_uint16)kal_sprintf((char*)(buffer+string_length), "%d),", rat);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_FALSE);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_phb_entry_rsp_fmttr
 * DESCRIPTION
 *  This function is used to format the PHB entry which will be outputted to the UART
 *  
 * PARAMETERS
 *  entry       [IN]        the entry to be outputted
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_phb_entry_rsp_fmttr(l4c_phb_entry_struct *entry)
{
#if !defined(__ULC_AT__)
#ifdef __MOD_PHB__
    kal_uint16 string_length;
    kal_uint8 buffer[ /* MAX_DATA_QUEUE_LENGTH */ MAX_UART_LENGTH * 3];
    kal_uint8 cmd[5];
    kal_uint8 rsp_string[4 * MAX_PS_NAME_SIZE]; 
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_PHB_ENTRY_RSP_FMTTR_ENTRY);
    kal_mem_set(cmd, 0, 5);

    kal_mem_set(rsp_string, 0, sizeof(kal_uint8) * 4 * MAX_PS_NAME_SIZE);

    switch (l4c_ptr->phb_current_action)
    {
        case CPBF_EXE:
            kal_sprintf((char*)cmd, "CPBF");
            break;
        case CPBR_RANGE_EXE:
        case CPBR_EXE:
            kal_sprintf((char*)cmd, "CPBR");
            break;
    }

    rmmi_ptr->arg_list[0] = (void*)cmd;
    rmmi_ptr->arg_list[1] = (void*)&entry->record_index;
    rmmi_ptr->arg_list[2] = (void*)entry->tel.number;
    rmmi_ptr->arg_list[3] = (void*)&entry->tel.type;

    l4c_phb_format_alpha_id(&entry->alpha_id, rsp_string);    
    rmmi_ptr->arg_list[4] = (void*)rsp_string;

    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+%s: %u, \"%s\", %d, \"%s\"", rmmi_ptr->arg_list, 5);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
#endif
#endif /* !defined(__ULC_AT__) */
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_phb_msisdn_rsp_fmttr
 * DESCRIPTION
 *  This function is used to format the MSISDN entry which will be outputted to the UART
 *  where the output format is defined by AT+CNUM
 * PARAMETERS
 *  entry       [IN]        the entry to be outputted
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_phb_msisdn_rsp_fmttr(l4c_phb_entry_struct *entry) 
{
    kal_uint16 string_length=0;
    kal_char *str_ptr;
    kal_uint8 str_argc;
    kal_uint8 rsp_string[4*MAX_PS_NAME_SIZE];
    kal_uint8 buffer[ /* MAX_DATA_QUEUE_LENGTH */ MAX_UART_LENGTH * 3];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_PHB_MSISDN_RSP_FMTTR_ENTRY);

    if (entry->alpha_id.name_length == 0 && entry->tel.length == 0)
    {
        return;
    }

    kal_mem_set(rsp_string, 0, 4 * MAX_PS_NAME_SIZE);
    l4c_phb_format_alpha_id(&entry->alpha_id, rsp_string);

    rmmi_ptr->arg_list[0] = (void*)rsp_string;
    if (entry->tel.length == 0)
    {
        kal_brief_trace(TRACE_INFO, INFO_ALPH_ID_PRESENT_NO_TEL_NUMBER);
        //please refer the example in HFP 1.5 section 4.33.2 , if optional field is not supported, shall be left blank
        str_ptr = "+CNUM: \"%s\",\"\",,,4";
        str_argc = 1;
    }
    else
    {
        rmmi_ptr->arg_list[1] = (void*)entry->tel.number;
        rmmi_ptr->arg_list[2] = (void*)&entry->tel.type;        

        #if !defined(__MMI_FMI__)
        {
            kal_uint8 speed, name, ce;
			
            l4c_cc_get_bearer_service_req(RMMI_SRC, &speed, &name, &ce);
            rmmi_ptr->arg_list[3] = (void*)&speed;        	

            str_ptr = "+CNUM: \"%s\",\"%s\",%d,%d,4";
            str_argc = 4;
        }
	 #else
            //please refer the example in HFP 1.5 section 4.33.2 , if optional field is not supported, shall be left blank
            if (entry->alpha_id.name_length == 0)
            {
                str_ptr = "+CNUM: %s,\"%s\",%d,,4";
            }
            else
            {
                str_ptr = "+CNUM: \"%s\",\"%s\",%d,,4";
            }
            str_argc = 3;
        #endif		
    }
    string_length = rmmi_fast_string_print(
            buffer,
            (kal_uint8*)str_ptr,
            rmmi_ptr->arg_list,
            str_argc);
    
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
}


#ifdef __MOD_SMSAL__


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_send_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mr          [IN]        
 *  scts        [IN]         
 *  src_id      [IN]          
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sms_send_rsp_fmttr(kal_uint8 mr, kal_uint8 *scts,kal_uint8 src_id)
{
#if !defined(__ULC_AT__) //for disable at+cmgs , at+cmss , at+cmgc
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    kal_uint8 cmd[5];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4c_context_struct *l4c_ptr = L4C_PTR;
    
    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_SEND_RSP_FMTTR_ENTRY);
    ASSERT(scts != NULL);
    switch (l4c_ptr->sms_current_action[src_id])
    {
        case CMGS_EXE:
        case CMGS_PDU_EXE:
            kal_sprintf((char*)cmd, "CMGS");
            break;
        case CMGC_EXE:
            kal_sprintf((char*)cmd, "CMGC");
            break;
        case CMSS_EXE:
            kal_sprintf((char*)cmd, "CMSS");
            break;
    }

    rmmi_ptr->arg_list[0] = (void*)cmd;
    rmmi_ptr->arg_list[1] = (void*)&mr;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+%s: %d", rmmi_ptr->arg_list, 2);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
#endif /* !defined(__ULC_AT__) */	
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_list_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
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
void rmmi_sms_list_rsp_fmttr(
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

    kal_uint16 string_length;
    kal_uint8 scts[25];
    kal_uint8 status_str[11];
    kal_uint8 buffer[SMSAL_MAX_MSG_LEN*4+30]; //maximum sms length = 160 char = 160*4 ucs2, 30 is for header
    kal_uint8 buf[3]; //for storing CR LF
    kal_uint8 *ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_LIST_RSP_FMTTR_ENTRY);
    //ASSERT (data != NULL);
    //kal_mem_set(temp_str, 0, SMSAL_ONE_MSG_LEN * 4);

    /* mtk00714 : add for +CSDH = 1 */
    if (rmmi_ptr->csdh_show == KAL_TRUE)
    {
        switch (mti)
        {
            case SMSAL_MTI_DELIVER:
            {
                smsal_deliver_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr;

                buff_ptr = (smsal_deliver_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->oa.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->oa.addr_bcd[1]), addr.number);
                check_sms_scts(scts, buff_ptr->scts);

                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                /* we don't support <alpha> when phb sorting is done by MMI */
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)scts;
                rmmi_ptr->arg_list[4] = (void*)&addr.type;
                rmmi_ptr->arg_list[5] = (void*)&length;
                rmmi_ptr->arg_list[6] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[7] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",,\"%s\",%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    8);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }
				
		string_length = strlen((kal_char*)buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[4] = (void*)scts;
                rmmi_ptr->arg_list[5] = (void*)&addr.type;
                rmmi_ptr->arg_list[6] = (void*)&length;
                rmmi_ptr->arg_list[7] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[8] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",\"%s\",\"%s\",%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    9);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer + string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer + string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 

                break;
            }
            case SMSAL_MTI_SUBMIT:
            {
                smsal_submit_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr;

                buff_ptr = (smsal_submit_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->da.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->da.addr_bcd[1]), addr.number);
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)&addr.type;
                rmmi_ptr->arg_list[4] = (void*)&length;
                rmmi_ptr->arg_list[5] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[6] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",,,%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    7);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }
				
		string_length = strlen((kal_char*)buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[4] = (void*)&addr.type;
                rmmi_ptr->arg_list[5] = (void*)&length;
                rmmi_ptr->arg_list[6] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[7] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",\"%s\",,%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    8);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }
				
		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 
                break;
            }
            default:
                return;

        }
    }
    /* mtk00714 : add for +CSDH = 0 */
    else        //if (RMMI_PTR->csdh_show==KAL_FALSE)
    {
        switch (mti)
        {
            case SMSAL_MTI_DELIVER:
            {
                smsal_deliver_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr;

                buff_ptr = (smsal_deliver_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->oa.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->oa.addr_bcd[1]), addr.number);
                check_sms_scts(scts, buff_ptr->scts);
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)scts;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[5] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",,\"%s\"%c%c",
                                    rmmi_ptr->arg_list,
                                    6);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*)buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[4] = (void*)scts;
                rmmi_ptr->arg_list[5] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[6] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",\"%s\",\"%s\"%c%c",
                                    rmmi_ptr->arg_list,
                                    7);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 

                break;
            }
            case SMSAL_MTI_SUBMIT:
            {
                smsal_submit_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr;

                buff_ptr = (smsal_submit_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->da.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->da.addr_bcd[1]), addr.number);
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",,%c%c",
                                    rmmi_ptr->arg_list,
                                    5);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*)buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)&index;
                rmmi_ptr->arg_list[1] = (void*)status_str;
                rmmi_ptr->arg_list[2] = (void*)addr.number;
                rmmi_ptr->arg_list[3] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[5] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGL: %u,\"%s\",\"%s\",\"%s\",%c%c",
                                    rmmi_ptr->arg_list,
                                    6);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 
                break;
            }
            default:
                return;

        }

    }

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
 *  rmmi_sms_read_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
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
void rmmi_sms_read_rsp_fmttr(
        kal_uint16 length,
        kal_uint8 mti,
        kal_uint8 status,
        kal_uint8 hex_dspl,
        l4_name_struct alpha_id,
        void *msg_header,
        void *data)
{
#if !defined(__ULC_AT__)  //for disable at+cmgr
    kal_uint16 string_length;
    kal_uint8 scts[25];
    kal_uint8 status_str[11];
    kal_uint8 buffer[SMSAL_MAX_MSG_LEN*4+30]; //maximum sms length = 160 char = 160*4 ucs2, 30 is for header
    kal_uint8 buf[3]; //for storing CR LF
    kal_uint8 *ptr;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_READ_RSP_FMTTR_ENTRY);
    //ASSERT (data != NULL);
    //kal_mem_set(temp_str, 0, SMSAL_ONE_MSG_LEN * 4);

    /* mtk00714: add for +CDSH = 1 */
    if (rmmi_ptr->csdh_show == KAL_TRUE)
    {
        switch (mti)
        {
            case SMSAL_MTI_DELIVER:
            {
                smsal_deliver_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr, sca;

                kal_mem_set(&sca, 0, sizeof(l4c_number_struct));
                buff_ptr = (smsal_deliver_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->oa.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->oa.addr_bcd[1]), addr.number);
                if (buff_ptr->sca.addr_length > 0)
                {
                    sca.type = buff_ptr->sca.addr_bcd[0];
                    sca.length = convert_to_digit(&(buff_ptr->sca.addr_bcd[1]), sca.number);
                }
                check_sms_scts(scts, buff_ptr->scts);

                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)scts;
                rmmi_ptr->arg_list[3] = (void*)&addr.type;
                rmmi_ptr->arg_list[4] = (void*)&buff_ptr->fo;
                rmmi_ptr->arg_list[5] = (void*)&buff_ptr->pid;
                rmmi_ptr->arg_list[6] = (void*)&buff_ptr->ori_dcs;
                rmmi_ptr->arg_list[7] = (void*)sca.number;
                rmmi_ptr->arg_list[8] = (void*)&sca.type;
                rmmi_ptr->arg_list[9] = (void*)&length;
                rmmi_ptr->arg_list[10] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[11] = (void*)&rmmi_ptr->s_reg.s4;

		string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",,\"%s\",%d,%d,%d,%d,\"%s\",%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    12);
					
                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*) buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[3] = (void*)scts;
                rmmi_ptr->arg_list[4] = (void*)&addr.type;
                rmmi_ptr->arg_list[5] = (void*)&buff_ptr->fo;
                rmmi_ptr->arg_list[6] = (void*)&buff_ptr->pid;
                rmmi_ptr->arg_list[7] = (void*)&buff_ptr->ori_dcs;
                rmmi_ptr->arg_list[8] = (void*)sca.number;
                rmmi_ptr->arg_list[9] = (void*)&sca.type;
                rmmi_ptr->arg_list[10] = (void*)&length;
                rmmi_ptr->arg_list[11] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[12] = (void*)&rmmi_ptr->s_reg.s4;

		string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",\"%s\",\"%s\",%d,%d,%d,%d,\"%s\",%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    13);
		  
                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*) buffer);

            #endif /* __MMI_FMI__ */ 

                break;
            }
            case SMSAL_MTI_SUBMIT:
            {
                smsal_submit_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr, sca;

                kal_mem_set(&sca, 0, sizeof(l4c_number_struct));
                buff_ptr = (smsal_submit_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->da.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->da.addr_bcd[1]), addr.number);
                if (buff_ptr->sca.addr_length > 0)
                {
                    sca.type = buff_ptr->sca.addr_bcd[0];
                    sca.length = convert_to_digit(&(buff_ptr->sca.addr_bcd[1]), sca.number);
                }
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)&addr.type;
                rmmi_ptr->arg_list[3] = (void*)&buff_ptr->fo;
                rmmi_ptr->arg_list[4] = (void*)&buff_ptr->pid;
                rmmi_ptr->arg_list[5] = (void*)&buff_ptr->ori_dcs;
                rmmi_ptr->arg_list[6] = (void*)&buff_ptr->vp;
                rmmi_ptr->arg_list[7] = (void*)sca.number;
                rmmi_ptr->arg_list[8] = (void*)&sca.type;
                rmmi_ptr->arg_list[9] = (void*)&length;
                rmmi_ptr->arg_list[10] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[11] = (void*)&rmmi_ptr->s_reg.s4;

		string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",,%d,%d,%d,%d,%d,\"%s\",%d, %u%c%c",
                                    rmmi_ptr->arg_list,
                                    12);
		  
                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*) buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[3] = (void*)&addr.type;
                rmmi_ptr->arg_list[4] = (void*)&buff_ptr->fo;
                rmmi_ptr->arg_list[5] = (void*)&buff_ptr->pid;
                rmmi_ptr->arg_list[6] = (void*)&buff_ptr->ori_dcs;
                rmmi_ptr->arg_list[7] = (void*)&buff_ptr->vp;
                rmmi_ptr->arg_list[8] = (void*)sca.number;
                rmmi_ptr->arg_list[9] = (void*)&sca.type;
                rmmi_ptr->arg_list[10] = (void*)&length;
                rmmi_ptr->arg_list[11] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[12] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",\"%s\",%d,%d,%d,%d,%d,\"%s\",%d,%u%c%c",
                                    rmmi_ptr->arg_list,
                                    13);
                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*) buffer);

            #endif /* __MMI_FMI__ */ 
                break;
            }
            default:
                return;

        }
    }
    else        //for +CSDH=0
    {
        switch (mti)
        {
            case SMSAL_MTI_DELIVER:
            {
                smsal_deliver_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr, sca;

                kal_mem_set(&sca, 0, sizeof(l4c_number_struct));
                buff_ptr = (smsal_deliver_msg_hdr_struct*) msg_header;

                addr.type = buff_ptr->oa.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->oa.addr_bcd[1]), addr.number);
                if (buff_ptr->sca.addr_length > 0)
                {
                    sca.type = buff_ptr->sca.addr_bcd[0];
                    sca.length = convert_to_digit(&(buff_ptr->sca.addr_bcd[1]), sca.number);
                }
                check_sms_scts(scts, buff_ptr->scts);
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)scts;
                rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",,\"%s\"%c%c",
                                    rmmi_ptr->arg_list,
                                    5);
                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*)buffer);
		  
            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[3] = (void*)scts;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[5] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",\"%s\",\"%s\"%c%c",
                                    rmmi_ptr->arg_list,
                                    6);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 
                break;
            }
            case SMSAL_MTI_SUBMIT:
            {
                smsal_submit_msg_hdr_struct *buff_ptr;
                l4c_number_struct addr, sca;

                kal_mem_set(&sca, 0, sizeof(l4c_number_struct));
                buff_ptr = (smsal_submit_msg_hdr_struct*) msg_header;
                addr.type = buff_ptr->da.addr_bcd[0];
                addr.length = convert_to_digit(&(buff_ptr->da.addr_bcd[1]), addr.number);
                if (buff_ptr->sca.addr_length > 0)
                {
                    sca.type = buff_ptr->sca.addr_bcd[0];
                    sca.length = convert_to_digit(&(buff_ptr->sca.addr_bcd[1]), sca.number);
                }
                check_sms_status_name(status, status_str);

            #ifdef __MMI_FMI__
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",%c%c",
                                    rmmi_ptr->arg_list,
                                    4);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = strlen((kal_char*)buffer);

            #else /* __MMI_FMI__ */ 
                rmmi_ptr->arg_list[0] = (void*)status_str;
                rmmi_ptr->arg_list[1] = (void*)addr.number;
                rmmi_ptr->arg_list[2] = (void*)alpha_id.name;
                rmmi_ptr->arg_list[3] = (void*)&rmmi_ptr->s_reg.s3;
                rmmi_ptr->arg_list[4] = (void*)&rmmi_ptr->s_reg.s4;

                string_length = rmmi_fast_string_print(
                                    buffer,
                                    (kal_uint8*) "+CMGR: \"%s\",\"%s\",\"%s\"%c%c",
                                    rmmi_ptr->arg_list,
                                    5);

                if (length > 0)
                {
                    if (hex_dspl == KAL_TRUE)
                    {
                        check_sms_pdu_string(length, data, buffer+string_length);
                    }
                    else
                        // dcs decoding
                    {
                        check_dcs_toCscs(buff_ptr->dcs, length, data, buffer+string_length);
                    }
                }

		string_length = (kal_uint16)strlen((kal_char*)buffer);

            #endif /* __MMI_FMI__ */ 

                break;
            }
            default:
                return;

        }

    }

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
#endif /* !defined(__ULC_AT__) */    
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_write_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sms_write_rsp_fmttr(kal_uint16 index)
{
#if !defined(__ULC_AT__) //for disable at+cmgw
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_WRITE_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&index;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CMGW: %u", rmmi_ptr->arg_list, 1);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    if (check_multi_command(L4C_OK) != KAL_FALSE)
    {
        return;
    }

    /* mtk01616_070510: give OK when receiving MSG_ID_MMI_SMS_SYNC_MSG_RES_REQ */
#ifndef __MMI_FMI__
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif 
#ifdef __SMS_STORAGE_BY_MMI__ 
	rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
#endif

    return;
#endif /* !defined(__ULC_AT__) */
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_sms_storage_rsp_fmttr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  mem     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_sms_storage_rsp_fmttr(smsal_prefer_storage_struct *mem)
{
#if !defined(__ULC_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_SMS_STORAGE_RSP_FMTTR_ENTRY);
    ASSERT(mem != NULL);
    rmmi_ptr->arg_list[0] = (void*)&mem->used1;
    rmmi_ptr->arg_list[1] = (void*)&mem->total1;
    rmmi_ptr->arg_list[2] = (void*)&mem->used2;
    rmmi_ptr->arg_list[3] = (void*)&mem->total2;
    rmmi_ptr->arg_list[4] = (void*)&mem->used3;
    rmmi_ptr->arg_list[5] = (void*)&mem->total3;

    string_length = rmmi_fast_string_print(
                        buffer,
                        (kal_uint8*) "+CPMS: %u, %u, %u, %u, %u, %u",
                        rmmi_ptr->arg_list,
                        6);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    if (check_multi_command(L4C_OK) != KAL_FALSE)
    {
        return;
    }
    rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);
    return;
#endif	
}
#endif /* __MOD_SMSAL__ */ 


/*****************************************************************************
 * FUNCTION
 *  rmmi_fast_string_print
 * DESCRIPTION
 *  
 * PARAMETERS
 *  buff_ptr        [?]         
 *  fmt             [?]         
 *  arg_list        [?]         
 *  nos_arg         [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_uint16 rmmi_fast_string_print(kal_uint8 *buff_ptr, kal_uint8 *fmt, void *arg_list[], kal_uint8 nos_arg)
{
    kal_int32 digit = 0;

    // kal_int16   digit = 0;
    kal_uint8 character;
    kal_uint8 dec_val[15];

    /* array to store decimal number in the form of string */
    kal_uint8 *str_ptr;
    kal_uint8 index = 0;
    kal_uint16 buffer_length = 0;
    kal_uint8 arg_indx = 0;
    kal_bool int_str_ptr_flag = KAL_FALSE;
    kal_bool negative_flag = KAL_FALSE;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_FAST_STRING_PRINT_ENTRY);
    while (*fmt)
    {
        /* store into the buffer if we find any non '%' character */
        if (*fmt != RMMI_CHAR_PERCENT || nos_arg == 0)
        {
            /* increment the buffer index and input string index by one */
            *buff_ptr++ = *fmt++;
            buffer_length++;
            continue;
        }

        /* If we find '%' character then we require to see for
           corresponding conversion specifier like d (for integer)
                                                  c (for character )
                                                  s (for string )
           this is analyzed using switch - case  statement */
        switch (*++fmt)
        {
                /* String print a kal_int32 type variable */
            case rmmi_char_g:
            {
                /* Get the integer value from the string format */
                digit = *((kal_int32*) arg_list[arg_indx++]);
                int_str_ptr_flag = KAL_TRUE;
                break;
            }

                /* String print a kal_uint32 type variable */
            case rmmi_char_e:
            {
                kal_uint32 udigit;

                //kal_uint16 udigit;
                /* Get the integer value from the string format */
                udigit = *((kal_uint32*) arg_list[arg_indx++]);
                rmmi_int_to_ascii_converter(udigit, (kal_uint8*) dec_val);
                /* convert the integer into string */
                index = 0;
                while (dec_val[index] != RMMI_END_OF_STRING_CHAR)
                {
                    *buff_ptr++ = dec_val[index++];
                    buffer_length++;
                }
                break;
            }

                /* String print a kal_int16 type variable */
            case rmmi_char_l:
            {
                /* Get the integer value from the string format */
                digit = *((kal_int16*) arg_list[arg_indx++]);
                int_str_ptr_flag = KAL_TRUE;
                break;
            }

                /* String print a kal_uint16 type variable */
            case rmmi_char_u:
            {
                /* Get the integer value from the string format */
                digit = *((kal_uint16*) arg_list[arg_indx++]);
                int_str_ptr_flag = KAL_TRUE;
                break;
            }

                /* String print a kal_int8 type variable */
            case rmmi_char_a:
            {
                /* Get the integer value from the string format */
                digit = *((kal_int8*) arg_list[arg_indx++]);
                int_str_ptr_flag = KAL_TRUE;
                break;
            }

                /* String print a kal_uint8 type variable */
            case rmmi_char_d:
            {
                /* Get the integer value from the string format */
                digit = *((kal_uint8*) arg_list[arg_indx++]);
                int_str_ptr_flag = KAL_TRUE;
                break;
            }

            case rmmi_char_c:
            {
                /* get the character from the given string format */
                character = *((kal_uint8*) arg_list[arg_indx++]);

                /* update the buffer */
                *buff_ptr++ = character;
                buffer_length++;
                break;
            }

            case rmmi_char_s:
            {
                /* get the string value from the given string format */
                str_ptr = (kal_uint8*) arg_list[arg_indx++];

                /* store the string into the buffer */
                while (*str_ptr)
                {
                    *buff_ptr++ = *str_ptr++;
                    buffer_length++;
                }
                break;
            }

            default:
            {
                /* if no conversion specifier is found  after '%' character
                   store that character as it is  in to the buffer  */
                *buff_ptr++ = *fmt;
                buffer_length++;
                break;
            }
        }   /* end switch */

        if (int_str_ptr_flag == KAL_TRUE)
        {
            if (digit < 0)
            {
                negative_flag = KAL_TRUE;
                digit = digit * (-1);
            }

            rmmi_int_to_ascii_converter(digit, dec_val);
            /* convert the integer into string */
            index = 0;
            /* store converted decimal value into the buffer */
            if (negative_flag == KAL_TRUE)
            {
                *buff_ptr++ = RMMI_CHAR_MINUS;
                buffer_length++;
            }

            while (dec_val[index] != RMMI_END_OF_STRING_CHAR)
            {
                *buff_ptr++ = dec_val[index++];
                buffer_length++;
            }
            int_str_ptr_flag = KAL_FALSE;
        }

        fmt++;
    }

    /* finish string with \0 */
    *buff_ptr = *fmt;
    /*
     * SME_FN_EXIT_LOG(
     * MOD_ATCI,
     * ATCI_FUNC_ATCIFASTSTRINGPRINT_EXIT_SUBOP
     * );
     */
    return buffer_length;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_int_to_ascii_converter
 * DESCRIPTION
 *  
 * PARAMETERS
 *  digit           [IN]        
 *  buff_ptr        [?]         
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_int_to_ascii_converter(kal_uint32 digit, kal_uint8 *buff_ptr)
{
    kal_uint8 divisor = 10;
    kal_uint8 tmp;
    kal_uint8 index1;
    kal_uint8 index2;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_INT_TO_ASCII_CONVERTER_ENTRY);
    for (index1 = 0; digit >= 10; index1++)
    {
        /* Get last digit of given integer number */
        //*( buff_ptr + index1) = MODULO (digit, divisor);
        *(buff_ptr + index1) = (digit % divisor);
        /* remove the last digit from the given number & restore the
           remaining number into the same variable */
        //digit = DIVIDE ((digit - (*(buff_ptr + index1))), divisor);
        digit = ((digit - (*(buff_ptr + index1))) / divisor);
        /* convert the last digit into ASCII Equivalent value */
        *(buff_ptr + index1) += RMMI_CHAR_0;
    }

    /* Incorporate last digit */
    *(buff_ptr + index1) = RMMI_CHAR_0 + (kal_uint8)digit;

    /* Now invert the string.Because digits are extracted from the
       number from right to left direction */
    for (index2 = 0; index2 <= (index1 >> 1); index2++)
    {
        tmp = *(buff_ptr + index2);
        *(buff_ptr + index2) = *(buff_ptr + index1 - index2);
        *(buff_ptr + index1 - index2) = tmp;
    }

    /* Finish the string */
    *(buff_ptr + index1 + 1) = RMMI_END_OF_STRING_CHAR;
    /*
     * l4_fn_exit(
     * MOD_ATCI,
     * FUNC_ATCI_INT_TO_ASCII_CONVERTER_SUBOP
     * );
     */
    return;
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_csim_error_rsp_fmttr
 * DESCRIPTION
 *  This is rmmi_csim_error_rsp_fmttr function of RMMI module.
 *  respond to UART about the error cause
 * PARAMETERS
 *  cause       [IN]        The cause form UEM
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_csim_error_rsp_fmttr(kal_uint16 cause)
{
#if !defined(__SLIM_AT__)
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CSIM_ERROR_RSP_FMTTR_ENTRY);
    rmmi_ptr->arg_list[0] = (void*)&cause;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CSIM: %u", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;

#endif /* !defined(__SLIM_AT__) */ 
}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cnvrm_error_rsp_fmttr
 * DESCRIPTION
 *  This is rmmi_cnvrm_error_rsp_fmttr function of RMMI module.
 *  respond to UART about the error cause
 * PARAMETERS
 *  cause       [IN]        The cause form UEM
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cnvrm_error_rsp_fmttr(kal_uint16 cause)
{
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    //kal_uint8 const  *rsp_str = NULL; /*response string and initialization */

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CNVRM_ERROR_RSP_FMTTR_ENTRY);

    rmmi_ptr->arg_list[0] = (void*)&cause;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CNVRM: %d", rmmi_ptr->arg_list, 1);

    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    //rmmi_result_code_fmttr(RMMI_RCODE_OK, L4C_NO_CAUSE);

    return;

}


/*****************************************************************************
 * FUNCTION
 *  rmmi_cr_result_code_fmttr
 * DESCRIPTION
 *  This is for printing +CR service result code before CONNECT
 *  mtk00714 add on 2004/03/02
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void rmmi_cr_result_code_fmttr(void)
{
#if !defined(__SLIM_AT__)
    kal_uint8 data_call_info;
    kal_uint8 data_type_str[10];
    kal_uint16 string_length;
    kal_uint8 buffer[MAX_UART_LENGTH];
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;

    kal_brief_trace(TRACE_FUNC, FUNC_RMMI_CR_RESULT_CODE_FMTTR_ENTRY);

    l4ccsm_cc_get_data_call_info(&data_call_info);
    switch (data_call_info)
    {
        case L4C_ASYNC_T:
            kal_sprintf((char*)data_type_str, "ASYNC");
            break;
        case L4C_SYNC_T:
            kal_sprintf((char*)data_type_str, "SYNC");
            break;
        case L4C_ASYNC_NT:
            kal_sprintf((char*)data_type_str, "REL ASYNC");
            break;
        case L4C_SYNC_NT:
            kal_sprintf((char*)data_type_str, "REL SYNC");
            break;
    }
    rmmi_ptr->arg_list[0] = (void*)data_type_str;
    string_length = rmmi_fast_string_print(buffer, (kal_uint8*) "+CR : %s", rmmi_ptr->arg_list, 1);
    rmmi_write_to_uart((kal_uint8*) buffer, string_length, KAL_TRUE);
    return;
#endif /* !defined(__SLIM_AT__) */ 
}

