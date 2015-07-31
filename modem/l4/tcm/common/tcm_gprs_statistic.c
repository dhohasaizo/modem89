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
 * TCM_GPRS_STATISTIC.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "tcm_gprs_statistic.h"
#include "drv_msgid.h"
#include "l4_msgid.h"
#include "ratdm_msgid.h"
#include "nvram_msgid.h"
#include "md_sap.h"

/* enums. */
#include "nvram_data_items.h"

/* structs. */
#include "tcm_ratdm_struct.h"
#include "tcm2l4c_struct.h"
#include "nvram_struct.h"
#include "nvram_editor_data_item.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "tcm_at_handler.h"
#include "tcm_send_msg.h"

#ifdef __UGTCM__
#include "tcm_ugtcm_send_msg.h"
#endif /* __UGTCM__ */


#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))

void tcm_change_statistic_is_writing( kal_bool new_value )
{
    #ifdef __TCM_NEW_ARCH_DEBUG__
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_STATISTICS_IS_WRITING_CHANGE, TCM_PTR(statistic_is_writing), new_value);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__    
    TCM_PTR(statistic_is_writing) = new_value;
}


void tcm_change_statistic_needs_update( kal_bool new_value )
{
    #ifdef __TCM_NEW_ARCH_DEBUG__
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_STATISTICS_NEEDS_UPDATE_CHANGE, TCM_PTR(statistic_needs_update), new_value);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__    
    TCM_PTR(statistic_needs_update) = new_value;
}


void tcm_update_old_call_history_to_nvram( void )
{
    #ifdef __TCM_NEW_ARCH_DEBUG__
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_UPDATE_OLD_CALL_HISTORY_TO_NVRAM);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    if(TCM_PTR(statistic_is_writing) == KAL_FALSE)
    {
        tcm_send_write_statistic_to_nvram();            
    }
    else
    {
       tcm_change_statistic_needs_update(KAL_TRUE);
    }
}


void tcm_update_old_call_history_when_enter_data_plane_deconfigured_state( SESSION_INFO_PTR si_db_ptr, ilm_struct *ilm_ptr )
{
    tcm_ratdm_deconfig_cnf_struct * tcm_ratdm_deconfig_cnf_ptr;

    if(NULL != ilm_ptr)
    {

        #ifdef __TCM_NEW_ARCH_DEBUG__
        ASSERT(MSG_ID_TCM_RATDM_DECONFIG_CNF == ilm_ptr->msg_id);
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_UPDATE_OLD_CALL_HISTORY_WHEN_ENTER_DATA_PLANE_DECONFIGURED_STATE);
        #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
        tcm_ratdm_deconfig_cnf_ptr = (tcm_ratdm_deconfig_cnf_struct *)ilm_ptr->local_para_ptr;

        #ifdef __TCM_NEW_ARCH_DEBUG__
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_TOTAL_TX_DATA_CHANGE,
                                      (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->tx_data_octets), 
                                      TCM_PTR(total_tx_data)+(kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->tx_data_octets));
        #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
        TCM_PTR(total_tx_data) += (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->tx_data_octets);

        #ifdef __TCM_NEW_ARCH_DEBUG__
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_TOTAL_RX_DATA_CHANGE,
                                                   (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->rx_data_octets),
                                                   TCM_PTR(total_rx_data)+(kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->rx_data_octets));
        #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
        TCM_PTR(total_rx_data) += (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->rx_data_octets);

        if(si_db_ptr->context_id == TCM_PTR(last_context_id))
        {
           // This context id is the last established context id
           #ifdef __TCM_NEW_ARCH_DEBUG__
           kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_LAST_TX_DATA_CHANGE,
                                                      TCM_PTR(last_tx_data),
                                                      (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->tx_data_octets));
           #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
           TCM_PTR(last_tx_data) = (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->tx_data_octets);

           #ifdef __TCM_NEW_ARCH_DEBUG__
           kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_LAST_RX_DATA_CHANGE,
                                                      TCM_PTR(last_rx_data),
                                                      (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->rx_data_octets));
           #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
           TCM_PTR(last_rx_data) = (kal_uint32)(tcm_ratdm_deconfig_cnf_ptr->rx_data_octets);
        }

        // write call history to NVRAM
        tcm_update_old_call_history_to_nvram();

    }
}


void tcm_update_old_call_history_when_enter_data_plane_configured_state( SESSION_INFO_PTR si_db_ptr )
{
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_UPDATE_OLD_CALL_HISTORY_WHEN_ENTER_DATA_PLANE_CONFIGURED_STATE);

    #ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(NULL != si_db_ptr);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
    TCM_PTR(last_context_id) = si_db_ptr->context_id; // change last context id

    TCM_PTR(last_tx_data) = 0;
    TCM_PTR(last_rx_data) = 0;

    // write call history to NVRAM
    tcm_update_old_call_history_to_nvram();

}


void tcm_ratdm_reset_ps_statistics_cnf_hdlr_for_old_call_history( ilm_struct *ilm_ptr )
{
    #ifndef __MASE__
    
    tcm_ratdm_reset_ps_statistics_cnf_struct * rcv_msg_ptr;
    l4ctcm_set_gprs_statistics_info_cnf_struct * sent_msg_ptr;
    rcv_msg_ptr = (tcm_ratdm_reset_ps_statistics_cnf_struct *)ilm_ptr->local_para_ptr;

    sent_msg_ptr = (l4ctcm_set_gprs_statistics_info_cnf_struct *)construct_local_para
                              (sizeof(l4ctcm_set_gprs_statistics_info_cnf_struct),
                              TD_RESET );

    #ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(TCM_PTR(reset_serial_number) == rcv_msg_ptr->reset_serial_num);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    sent_msg_ptr->reset_id = (kal_uint8)rcv_msg_ptr->reset_serial_num;

    TCM_PTR(total_rx_data) = 0;
    TCM_PTR(total_tx_data) = 0;
    TCM_PTR(last_rx_data) = 0;
    TCM_PTR(last_tx_data) = 0;

    tcm_update_old_call_history_to_nvram();

    tcm_send_simple_msg_to_l4c(MSG_ID_L4CTCM_SET_GPRS_STATISTICS_INFO_CNF, (local_para_struct *)sent_msg_ptr, NULL);
    
    #endif /* __MASE__ */    
}


void tcm_ratdm_query_ps_statistics_cnf_hdlr_for_old_call_history( ilm_struct *ilm_ptr )
{
    #ifndef __MASE__
    
    tcm_ratdm_query_ps_statistics_cnf_struct * rcv_msg_ptr;
    l4ctcm_get_gprs_statistics_info_rsp_struct * sent_msg_ptr;

    kal_uint32	temp_total_rx_data = TCM_PTR(total_rx_data);
    kal_uint32	temp_total_tx_data = TCM_PTR(total_tx_data);
    kal_uint32	temp_last_rx_data = 0;
    kal_uint32	temp_last_tx_data = 0;

    kal_bool last_context_id_is_currently_active = KAL_FALSE;

    kal_uint8 index = 0;
    kal_uint8 sib_id = 0;
    session_info_block_struct * si_db_ptr = NULL;


    rcv_msg_ptr = (tcm_ratdm_query_ps_statistics_cnf_struct *)ilm_ptr->local_para_ptr;

    for(index = 0; index < rcv_msg_ptr->no_of_nsapis; index++)
    {
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, rcv_msg_ptr->context_id_list[index]);
        si_db_ptr = tcm_get_sib_ptr(sib_id);
        #ifdef __TCM_NEW_ARCH_DEBUG__
        ASSERT((rcv_msg_ptr->context_id_list[index] <= TCM_TOT_CONTEXT) && (rcv_msg_ptr->context_id_list[index] > 0));
        ASSERT(si_db_ptr->data_plane_state == TCM_DATA_PLANE_CONFIGURED);
        ASSERT(si_db_ptr->nsapi == rcv_msg_ptr->nsapi_list[index]);
        #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

        if(rcv_msg_ptr->context_id_list[index] <= TCM_TOT_CONTEXT) 
        {
            // This is an external context
            temp_total_rx_data += rcv_msg_ptr->rx_data_octets[index];
            temp_total_tx_data += rcv_msg_ptr->tx_data_octets[index];

            if(si_db_ptr->context_id == TCM_PTR(last_context_id))
            {
                temp_last_rx_data = rcv_msg_ptr->rx_data_octets[index];
                temp_last_tx_data = rcv_msg_ptr->tx_data_octets[index];
                last_context_id_is_currently_active = KAL_TRUE;
            }

        }
    }

    if(KAL_FALSE == last_context_id_is_currently_active)
    {
        temp_last_rx_data = TCM_PTR(last_rx_data);
        temp_last_tx_data = TCM_PTR(last_tx_data);
    }

    sent_msg_ptr =  (l4ctcm_get_gprs_statistics_info_rsp_struct *)construct_local_para
                                 (sizeof(l4ctcm_get_gprs_statistics_info_rsp_struct),
                                 TD_RESET );
    sent_msg_ptr->last_rx_data = temp_last_rx_data;
    sent_msg_ptr->last_tx_data = temp_last_tx_data;
    sent_msg_ptr->total_rx_data = temp_total_rx_data;
    sent_msg_ptr->total_tx_data = temp_total_tx_data;
    sent_msg_ptr->query_id = TCM_PTR(query_serial_number);

    tcm_send_simple_msg_to_l4c(MSG_ID_L4CTCM_GET_GPRS_STATISTICS_INFO_RSP, (local_para_struct *)sent_msg_ptr, NULL);

    #endif /* __MASE__ */
}


void l4ctcm_get_gprs_statistics_info_req_hdlr( ilm_struct *ilm_ptr )
{
    #ifndef __MASE__
    
    l4ctcm_get_gprs_statistics_info_req_struct * rcv_msg_ptr;
    tcm_ratdm_query_ps_statistics_req_struct * sent_msg_ptr;

    rcv_msg_ptr = (l4ctcm_get_gprs_statistics_info_req_struct *)ilm_ptr->local_para_ptr;

    sent_msg_ptr = (tcm_ratdm_query_ps_statistics_req_struct *)construct_local_para
                             (sizeof(tcm_ratdm_query_ps_statistics_req_struct),
                             TD_RESET );

    TCM_PTR(query_serial_number) = rcv_msg_ptr->query_id;

    sent_msg_ptr->query_serial_number = TCM_PTR(query_serial_number);

    #ifdef __UGTCM__
    tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_QUERY_PS_STATISTICS_REQ, (local_para_struct *)sent_msg_ptr, NULL);
    #endif /* __UGTCM__ */

    #endif /* __MASE__ */
}


void tcm_send_write_statistic_to_nvram( void )
{
    nvram_write_req_struct *msg_ptr = NULL;
    peer_buff_struct *pPeerBuf = NULL;
#ifndef __MASE__
    nvram_ef_tcm_statistics_struct *pbPdu = NULL;
#endif
    kal_uint16 wPeerLen = 0;         

   /* Send message to nvram */
    msg_ptr = (nvram_write_req_struct *)construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
    ASSERT(NULL != msg_ptr);
    msg_ptr->file_idx = NVRAM_EF_TCM_STATISTICS_LID;

    msg_ptr->para = (tcm_get_actual_sim_id()+1); //for SIM1, para == 1, for SIM2, para == 2, for SIM3, para == 3, for SIM4, para == 4
	
    msg_ptr->access_id = 0xFF; /* Indicate NVRAM writing is trigerred from TCM not L4C */

    pPeerBuf = construct_peer_buff(NVRAM_EF_TCM_STATISTICS_SIZE, 0, 0, TD_CTRL);
#ifndef __MASE__
    pbPdu = (nvram_ef_tcm_statistics_struct *) get_peer_buff_pdu(pPeerBuf, &wPeerLen);
    TCM_INTERNAL_DEBUG_ASSERT(sizeof(nvram_ef_tcm_statistics_struct) == wPeerLen && NULL != pbPdu);

    pbPdu->total_rx_data = TCM_PTR(total_rx_data);
    pbPdu->total_tx_data = TCM_PTR(total_tx_data);
    pbPdu->last_rx_data = TCM_PTR(last_rx_data);
    pbPdu->last_tx_data = TCM_PTR(last_tx_data);
#endif

    #ifdef __TCM_NEW_ARCH_DEBUG__
    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_CONTENT, TCM_PTR(total_tx_data), TCM_PTR(total_rx_data), TCM_PTR(last_tx_data), TCM_PTR(last_rx_data));
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
    tcm_send_msg_to_nvram(MSG_ID_NVRAM_WRITE_REQ, (local_para_struct*)msg_ptr, pPeerBuf);

    /* Update the statisti flag */
    tcm_change_statistic_is_writing(KAL_TRUE);
    tcm_change_statistic_needs_update(KAL_FALSE);
}


void tcm_send_simple_msg_to_l4c( msg_type MsgID, local_para_struct *pLocalParam, peer_buff_struct *pPeerBuf )
{
   ilm_struct ilm ;

   ilm.msg_id = MsgID;
   ilm.local_para_ptr = pLocalParam;
   ilm.peer_buff_ptr = pPeerBuf;

   TCM_SEND_ILM(MOD_TCM, MOD_L4C, TCM_L4C_SAP, &ilm);
}

#endif /* (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__))) */

