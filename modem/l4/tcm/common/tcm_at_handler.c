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
 * TCM_AT_HANDLER.C
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#include "tcm_at_handler.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "l4c_common_enum.h"
#include "tcm_qos_api.h"

#include "l4_msgid.h"
#include "nvram_msgid.h"
#include "l3_inc_enums.h"
#include "l4_ps_api.h"

/* structs. */
#include "tcm2l4c_struct.h"
#include "nvram_struct.h"
#include "l4c2tcm_struct.h"
#include "nvram_editor_data_item.h"
#include "tcm_ratdm_struct.h"
#include "tcm_context.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "tcm_gprs_statistic.h"
#include "tcm_send_msg.h"

#ifdef __UGTCM__
#include "tcm_ugtcm_send_msg.h"
#endif /* __UGTCM__ */

#ifdef __GEMINI__
#include "ps_public_utility.h"
#endif /* __GEMINI__ */

#include "custom_gprs_pdp_value_check.h"

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
#include "tst_sap.h"
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */
#include "tst_msgid.h"
#include "ratdm_msgid.h"

#define SEND_SET_CNF_TO_L4C(msg_id, SrcId, Result, err_cause) { l4ctcm_set_cnf_struct *pmsg = NULL;\
pmsg = (l4ctcm_set_cnf_struct*)construct_local_para(sizeof(l4ctcm_set_cnf_struct), TD_CTRL);\
ASSERT(NULL != pmsg);\
pmsg->src_id = SrcId;\
pmsg->result = Result;\
pmsg->error_cause = err_cause;\
tcm_send_msg_to_l4c(msg_id, NULL, (void *)pmsg);}


const snd_dcomp_algo_enum L4C_TO_SND_DCOMP_ALGO_TABLE[3] = 
{
   SND_NO_DCOMP,
   SND_V42_BIS,
   SND_V42_BIS
};


const snd_pcomp_algo_enum L4C_TO_SND_HCOMP_ALGO_TABLE[3] =
{
   SND_NO_PCOMP,
   SND_RFC_1144,
   SND_RFC_1144
};


#if (defined(__NDIS_SUPPORT__) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)))
kal_bool is_external_context( kal_uint8 context_id )
{
     if (context_id > 0 && context_id <= TCM_TOT_EXT_CONTEXT)
		return KAL_TRUE;
	else
		return KAL_FALSE;
}


void tcm_l4ctcm_set_config_option_req_hdlr( ilm_struct *ilm_ptr )
{
     session_info_block_struct *sib_ptr;
     kal_uint8 mmi_sib_id = 0;
     l4ctcm_set_config_option_req_struct *msg_ptr =          
         (l4ctcm_set_config_option_req_struct*)ilm_ptr->local_para_ptr;         
     l4c_config_option_struct* prco = &(msg_ptr->prco);       
    
     if (is_external_context(prco->context_id))
     {
         mmi_sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, prco->context_id);

         /* Poying: Reject to set config options if the specified cid is already activated. */
         if (tcm_ptr_g->cntxt_flag[mmi_sib_id] == TCM_CNTXT_VALID)
         {  
             SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_CONFIG_OPTION_CNF, msg_ptr->src_id, L4C_ERROR, TCM_L4C_PRCO_CID_ALREADY_IN_USE);                      
            // Reject Cause: 
             return;
         }

         sib_ptr = tcm_get_sib_ptr(mmi_sib_id);
         if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
         {
            /* Create the SIB for this context */ 
            tcm_create_sib( mmi_sib_id ); 
         }
        
         sib_ptr->is_chap = prco->is_chap; 
         kal_mem_cpy((kal_uint8*)sib_ptr->user_name, prco->user_name, TCM_MAX_GPRS_USER_NAME_LEN);
         kal_mem_cpy((kal_uint8*)sib_ptr->password, prco->password, TCM_MAX_GPRS_PASSWORD_LEN);
         kal_mem_cpy((kal_uint8*)sib_ptr->dns, (kal_uint8*)prco->pri_dns, 4);
         kal_mem_cpy((kal_uint8*)sib_ptr->dns2, (kal_uint8*)prco->sec_dns, 4);

#if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )
         sib_ptr->act_pdp_cntxt_req_ipv6_dns = (l4c_tcm_activate_pdp_request_ipv6_dns_enum)prco->act_pdp_cntxt_req_ipv6_dns;
         kal_brief_trace(TRACE_INFO, TCM_IPV6_ACT_REQ_IPV6_DNS, prco->context_id, sib_ptr->act_pdp_cntxt_req_ipv6_dns) ;
#endif /* ( (defined(__IPV6__)) || (defined(__IPV4V6__)) ) */
         
         SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_CONFIG_OPTION_CNF, 
                                                msg_ptr->src_id, L4C_OK, 0);
     }
    else
     {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_CONFIG_OPTION_CNF, 
                                                msg_ptr->src_id, L4C_ERROR, TCM_L4C_PRCO_CID_UNEXPECTED);
        // Reject Cause: cid is not external context
     }
     return;
}


void tcm_l4ctcm_enter_data_mode_req_hdlr( ilm_struct *ilm_ptr )
{
    
    l4ctcm_enter_data_mode_req_struct * rcv_msg_local_ptr = (l4ctcm_enter_data_mode_req_struct *)ilm_ptr->local_para_ptr;
    tcm_ratdm_enter_data_mode_req_struct * sent_msg_local_ptr = NULL;

#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(NULL != rcv_msg_local_ptr);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    sent_msg_local_ptr = (tcm_ratdm_enter_data_mode_req_struct *)construct_local_para(sizeof(tcm_ratdm_enter_data_mode_req_struct), TD_RESET);
    
    sent_msg_local_ptr->src_id = rcv_msg_local_ptr->src_id;
    sent_msg_local_ptr->context_id = rcv_msg_local_ptr->context_id;
    //sent_msg_local_ptr->uart_port_number= rcv_msg_local_ptr->port_number;

#if (defined(__IPV4V6__) || defined (__IPV6__))
    sent_msg_local_ptr->pdp_type = rcv_msg_local_ptr->pdp_type ;
    sent_msg_local_ptr->channel_id = rcv_msg_local_ptr->channel_id ;
#endif /* (defined(__IPV4V6__) || defined (__IPV6__)) */

    if(TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_MODULE_ID != rcv_msg_local_ptr->additional_para_type)
    {
        DEBUG_ASSERT(0);
    }
          
    sent_msg_local_ptr->module_id= (module_type) rcv_msg_local_ptr->additional_para_content;

#ifdef __UGTCM__
    tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_ENTER_DATA_MODE_REQ, (local_para_struct *)sent_msg_local_ptr, NULL);
#endif /* __UGTCM__ */

}	

    
void tcm_ratdm_enter_data_mode_cnf_hdlr( ilm_struct *ilm_ptr )
{

    tcm_ratdm_enter_data_mode_cnf_struct * rcv_msg_local_ptr = (tcm_ratdm_enter_data_mode_cnf_struct *)ilm_ptr->local_para_ptr;
    l4ctcm_enter_data_mode_cnf_struct * sent_msg_local_ptr = NULL;

#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(NULL != rcv_msg_local_ptr);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    sent_msg_local_ptr = (l4ctcm_enter_data_mode_cnf_struct *)construct_local_para(sizeof(l4ctcm_enter_data_mode_cnf_struct), TD_RESET);

    sent_msg_local_ptr->src_id = rcv_msg_local_ptr->src_id;
    sent_msg_local_ptr->context_id = rcv_msg_local_ptr->context_id; //mtk02285, 20110322
    sent_msg_local_ptr->result = rcv_msg_local_ptr->result;
    sent_msg_local_ptr->error_cause = rcv_msg_local_ptr->error_cause;

    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_ENTER_DATA_MODE_CNF, NULL, sent_msg_local_ptr);
}
#endif /* (defined(__NDIS_SUPPORT__) || (defined(__TCM_UT__) && defined(__UMTS_RAT__))) */


void tcm_l4ctcm_start_req_hdlr( ilm_struct *ilm_ptr )
{
    nvram_read_req_struct *msg_ptr = NULL;    
    l4ctcm_start_req_struct *start_req_ptr = NULL;
 
    start_req_ptr = (l4ctcm_start_req_struct*)ilm_ptr->local_para_ptr;
    if(NULL == start_req_ptr)
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_START_CNF, 
                0, L4C_ERROR, 0xFF);
       return;
    }
     
#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
    msg_ptr = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
    ASSERT(NULL != msg_ptr);
    msg_ptr->file_idx = NVRAM_EF_TCM_STATISTICS_LID;

    msg_ptr->para = tcm_get_actual_sim_id()+1 ; //for SIM1, para == 1, for SIM2, para == 2, for SIM3, para == 3, for SIM4, para == 4
 
    msg_ptr->access_id = start_req_ptr->src_id; /* Store src_id */
    tcm_send_msg_to_nvram(MSG_ID_NVRAM_READ_REQ, (local_para_struct*)msg_ptr, NULL);
#endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )

#ifdef __MEDIATEK_SMART_QOS__
#ifdef __GEMINI__
    if (tcm_ptr_g->sim_interface == 0x00) /* Read MSQ list from NVRAM only if it is MOD_TCM (SIM1). */
#endif /* __GEMINI__ */
    {
        msg_ptr = NULL;
        msg_ptr = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
        ASSERT(NULL != msg_ptr);
        msg_ptr->file_idx = NVRAM_EF_MSQ_LIST_LID ;
        msg_ptr->para = 1 ;
        msg_ptr->access_id = start_req_ptr->src_id; /* Store src_id */
        tcm_send_msg_to_nvram( MSG_ID_NVRAM_READ_REQ, (local_para_struct *)msg_ptr, NULL );
    }
#endif /* __MEDIATEK_SMART_QOS__ */
 
#ifdef __EXT_PDP_CONTEXT_ON__
    /* Read PDP prfiles, read 1 first, and read next when receive NVRAM_READ_CNF */
    msg_ptr = NULL;
    msg_ptr = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
    ASSERT(NULL != msg_ptr);
    msg_ptr->file_idx = NVRAM_EF_TCM_PDP_PROFILE_LID;
    msg_ptr->para = 1+(TCM_TOT_EXT_CONTEXT*tcm_get_actual_sim_id()); //for SIM1 1, for SIM2 4, for SIM3 7, for SIM4 10
    msg_ptr->access_id = start_req_ptr->src_id; /* Store src_id */
    tcm_send_msg_to_nvram(MSG_ID_NVRAM_READ_REQ, (local_para_struct*)msg_ptr, NULL);
#else
    SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_START_CNF, 0, L4C_OK, NVRAM_IO_ERRNO_OK); // there is no need to read PDP PROFILE in nvram
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__    

    return;
}


sim_interface_enum tcm_get_actual_sim_id( void )
{
#ifdef __GEMINI__
    /* Poying: 3G Switchable.
     *  - If user specifies SIM3 to be 3G, 
     *    then the logical SIM1 will be mapped to physical(real) SIM3, and vice versa.
     *  - Note that it should only be used for interactions with NVRAM; 
     *    for interactions with SIM module, this SIM mapping will be implemented in SIM's APIs.
     */
    return (l4c_gemini_get_actual_sim_id(tcm_ptr_g->sim_interface)) ;
#else  /* __GEMINI__ */
    return SIM1 ;
#endif /* __GEMINI__ */
}


void tcm_nvram_read_cnf_hdlr( ilm_struct *ilm_ptr )
{
    nvram_read_cnf_struct *msg_ptr = NULL;
    msg_ptr = (nvram_read_cnf_struct*) ilm_ptr->local_para_ptr;
   
    /* Ensure msg_ptr is not NULL before accessing. */
    if (msg_ptr == NULL)
    {
        ASSERT(0) ;
    }
   
    switch(msg_ptr->file_idx)
    {   
    case NVRAM_EF_TCM_STATISTICS_LID:
    {
#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
   
       /* We don't send L4CTCM_START_CNF to L4C since PDP profile has not been 
        * read yet.
        */
       nvram_ef_tcm_statistics_struct *pStat = NULL;
       kal_uint16 cPeerBuf = 0;
       if(msg_ptr->result != NVRAM_IO_ERRNO_OK) /* Failed to read in NVRAM, use 0 as call history value */
       {
           TCM_PTR(total_rx_data) = 0;
           TCM_PTR(total_tx_data) = 0;
           TCM_PTR(last_rx_data) = 0;
           TCM_PTR(last_tx_data) = 0;
       }
       else
       {
           pStat = (nvram_ef_tcm_statistics_struct*) 
                get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &cPeerBuf);
   
           TCM_INTERNAL_DEBUG_ASSERT(NULL != pStat && NVRAM_EF_TCM_STATISTICS_SIZE == cPeerBuf);
   
           TCM_PTR(total_rx_data) = pStat->total_rx_data;
           TCM_PTR(total_tx_data) = pStat->total_tx_data;
           TCM_PTR(last_rx_data) = pStat->last_rx_data;
           TCM_PTR(last_tx_data) = pStat->last_tx_data;

       }
#ifndef __MTK_TARGET__
       kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_TCM_OLD_CALL_HISTORY_CONTENT, TCM_PTR(total_rx_data), TCM_PTR(total_tx_data), TCM_PTR(last_rx_data), TCM_PTR(last_tx_data));
#endif // ~ #ifndef __MTK_TARGET__
       
#else // #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
   
       // There should be no code related to NVRAM_EF_TCM_STATISTICS_LID exists
   
#endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
   
       break;
    }

#ifdef __MEDIATEK_SMART_QOS__
    case NVRAM_EF_MSQ_LIST_LID: 
    {
        if (msg_ptr->result != NVRAM_IO_ERRNO_OK) /* Failed to read in NVRAM */
        {
            SEND_SET_CNF_TO_L4C( MSG_ID_L4CTCM_START_CNF, 0, L4C_ERROR, msg_ptr->result) ;
        }
        else
        {
#ifdef __GEMINI__
            if (tcm_ptr_g->sim_interface != 0x00)
            {
                DEBUG_ASSERT(0) ;
            }
            else /* (tcm_ptr_g->sim_interface == 0x00) */
#endif /* __GEMINI__ */
            {
                nvram_ef_msq_list_struct *msq_list_ptr ;
                kal_uint16  pdu_len ;

                msq_list_ptr = get_peer_buff_pdu( ilm_ptr->peer_buff_ptr, &pdu_len ) ;

                if ( (msq_list_ptr == NULL) || (pdu_len != NVRAM_EF_MSQ_LIST_SIZE) )
                {
                    DEBUG_ASSERT(0) ;
                }

                kal_mem_cpy( tcm_ptr_g->tcm_msq_context_ptr, msq_list_ptr, NVRAM_EF_MSQ_LIST_SIZE ) ;

#ifdef __TCM_DEBUG_MSQ_LIST__
                tcm_msq_print_msq_list();
#endif /* __TCM_DEBUG_MSQ_LIST__ */
            }
        }
        break ;
    }
#endif /* __MEDIATEK_SMART_QOS__ */

#ifdef __EXT_PDP_CONTEXT_ON__
#ifndef __MASE__
    case NVRAM_EF_TCM_PDP_PROFILE_LID:
    {
       if(msg_ptr->result != NVRAM_IO_ERRNO_OK) /* Failed to read in NVRAM */
       {
          SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_START_CNF, 
                0, L4C_ERROR, msg_ptr->result);
       }
       else /* read OK, read next SIB */
       {
          kal_uint8 mmi_sib_id;
          kal_uint16 cPeerBuf = 0;
          session_info_block_struct *sib_ptr = NULL;
          nvram_ef_tcm_PDP_profile_record_struct *pPdpProfile = NULL;
          kal_uint8 max_record_num = TCM_TOT_EXT_CONTEXT;
          kal_uint8 para = (kal_uint8)(msg_ptr->para);
   
#ifdef __GEMINI__
          if (tcm_get_actual_sim_id() >= 1)
          para = msg_ptr->para -(TCM_TOT_EXT_CONTEXT*tcm_get_actual_sim_id());
#endif
   
          /* Copy to SIB */
          mmi_sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, (kal_uint8)para);
          pPdpProfile = (nvram_ef_tcm_PDP_profile_record_struct*) 
                get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &cPeerBuf);
   
          TCM_INTERNAL_DEBUG_ASSERT(NULL != pPdpProfile && 
                         NVRAM_EF_TCM_PDP_PROFILE_SIZE == cPeerBuf);
       
          sib_ptr = tcm_get_sib_ptr(mmi_sib_id);
          TCM_INTERNAL_DEBUG_ASSERT(NULL != sib_ptr);
   
          if(TCM_CNTXT_INVALID == tcm_ptr_g->cntxt_flag[mmi_sib_id]) // MAUI_01641731
          {
              // Start to copy NVRAM information into TCM context (SIB)
              /* modify 2002.12.12 */               
              sib_ptr->context_id = (kal_uint8)para;//pPdpProfile->context_id;//03.03.28
              sib_ptr->nsapi= pPdpProfile->nsapi;
              sib_ptr->pdp_addr_type= (pdp_addr_type_enum)pPdpProfile->pdp_addr_type;
              sib_ptr->pdp_addr_len= (pdp_addr_len_enum)pPdpProfile->pdp_addr_len;
              kal_mem_cpy(sib_ptr->addr_val, pPdpProfile->addr_val, MAX_PDP_ADDR_LEN);
              kal_mem_cpy(&(sib_ptr->req_qos), &(pPdpProfile->req_qos), sizeof(qos_struct));

              // Wynne: MOLY00008714
              // If IOT mode on, the reliability_class, sdu_err_ratio should be set to 0 (subscribed) as default value
              /*
              if (query_ps_conf_test_mode() == PS_CONF_TEST_IOT)
              {
                  sib_ptr->req_qos.reliability_class = SUBSCRIBED_RELIABILITY_CLASS;
                  sib_ptr->req_qos.sdu_err_ratio = SUBSCRIBED_SDU_ERR_RATIO_;
              }
                        */
              
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
              tcm_print_qos_content(&(sib_ptr->req_qos), KAL_TRUE, sib_ptr->context_id, TCM_REQ_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
              kal_mem_cpy(&(sib_ptr->min_qos), &(pPdpProfile->min_qos), sizeof(qos_struct));
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
              tcm_print_qos_content(&(sib_ptr->min_qos), KAL_TRUE, sib_ptr->context_id, TCM_MIN_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
              sib_ptr->apn_len = pPdpProfile->apn_len;
              kal_mem_cpy(sib_ptr->apn, pPdpProfile->apn, 100);
              sib_ptr->pcomp_algo = (snd_pcomp_algo_enum)pPdpProfile->pcomp_algo;
              sib_ptr->dcomp_algo = (snd_dcomp_algo_enum)pPdpProfile->dcomp_algo;
              sib_ptr->context_type= (pdp_context_type_enum)pPdpProfile->context_type;
              if(0 == pPdpProfile->primary_context_id)
                 sib_ptr->primary_context_id = (kal_uint8)para;
              else
                 sib_ptr->primary_context_id = pPdpProfile->primary_context_id;
              sib_ptr->is_sib_defined= (tcm_sib_usage_enum)pPdpProfile->is_sib_defined;
   		   
   	           /* mtk00714 : 20080118 */
//	if ( !((pPdpProfile->dns_val[0] == 0x00) && (pPdpProfile->dns_val[1] == 0x00) && 
//                      (pPdpProfile->dns_val[2] == 0x00) && (pPdpProfile->dns_val[3] == 0x00)))
              {
                 /* when network doesn't assign DNS, TCM will use this value to give to PPP */
                 /* PPP will have problem if it's 0.0.0.0, therefore use default value 172.21.120.6 (initial value as NVRAM_EF_TCM_PDP_PROFILE_DEFAULT)*/
                 kal_mem_cpy(sib_ptr->dns, pPdpProfile->dns_val, 4); /* Add 03.03.28 */
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
                 kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_WHEN_NETWORK_DOESNOT_ASSIGN_DNS_ASSIGN_DEFAULT_TO_PPP);
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
              }
              /* ~mtk00714*/
              sib_ptr->is_chap = pPdpProfile->is_chap;
   
              //sib_ptr->name_length = pPdpProfile->name_length;// Carlson: remove useless context
              //sib_ptr->name_dcs = pPdpProfile->name_dcs;// Carlson: remove useless context
              //kal_mem_cpy(sib_ptr->name, pPdpProfile->name, 32);// Carlson: remove useless context
              kal_mem_cpy(sib_ptr->user_name, pPdpProfile->user_name, 16);
              kal_mem_cpy(sib_ptr->password, pPdpProfile->password, 16);
   		  
              /* mtk00714 w0633: AT definition */
              sib_ptr->AT_definition = pPdpProfile->reserved;
   
              /* erica 20070112 */
#ifdef __UGTCM__
              sib_ptr->req_n201u = pPdpProfile->req_n201u;
              kal_brief_trace(TRACE_INFO, TCM_TRACE_N201U, sib_ptr->context_id, sib_ptr->req_n201u);
#endif /* __UGTCM__ */
           }
           else
           {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
              {
                  ilm_struct    ilm ;
                  tst_module_string_inject_struct * tst_module_string_inject_struct_ptr;
                  tst_module_string_inject_struct_ptr = (tst_module_string_inject_struct *)
                                                                                                        (construct_local_para(sizeof(tst_module_string_inject_struct), TD_RESET));
                  tst_module_string_inject_struct_ptr->index = 0xFF;  // just for UT check this message
                  strcpy(tst_module_string_inject_struct_ptr->string, "DO NOT OVERWRITE WITH NVRAM CONTEXT");
                  ilm.msg_id = MSG_ID_TST_INJECT_STRING;
                  ilm.local_para_ptr = (local_para_struct *)tst_module_string_inject_struct_ptr;
                  ilm.peer_buff_ptr = NULL;
                  tcm_send_msg_to_mod_nil(&ilm);
              }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
              /*
                * Carlson Lin mtk01936 2009.03.05 MAUI_01641731
                * TCM_CNTXT_VALID == tcm_ptr_g->cntxt_flag[mmi_sib_id]
                * This means certain context has been activated before TCM finish reading NVRAM content for context id 1, 2, 3.
                * This may happen in FTA 45.2.2-1(2), the NW may send UE [NW->MS] SM__REQUEST_PDP_CONTEXT_ACTIVATION
                * before the TCM receive MSG_ID_L4CTCM_START_REQ from L4C.
                * If certain context id has been activated, we cannot use the value in NVRAM to overwrite the context again.
                * Therefore, we do not copy the information in NVRAM_READ_CNF into SIB.
                */
                kal_brief_trace(TRACE_INFO, TCM_INFO_ERROR_CERTAIN_PDP_CONTEXT_HAS_BEEN_ACTIVATED_BEFORE_TCM_FINISH_BOOTUP);
                kal_brief_trace(TRACE_INFO, TCM_INFO_ERROR_CERTAIN_CNTXT_FLAG_ALREADY_VALID, mmi_sib_id);
              
           }
   
#ifdef __GEMINI__
          if (tcm_get_actual_sim_id() >= 1)
          	max_record_num = TCM_TOT_EXT_CONTEXT * (tcm_get_actual_sim_id()+1);
#endif
          if (max_record_num == msg_ptr->para) //normal project
          {
             SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_START_CNF, 
                   0, L4C_OK, msg_ptr->result);
          }
          else /* read next */
          {
             nvram_read_req_struct *msg_ptr2 = NULL;
             msg_ptr2 = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
             TCM_INTERNAL_DEBUG_ASSERT(NULL != msg_ptr);
             msg_ptr2->file_idx = NVRAM_EF_TCM_PDP_PROFILE_LID;
             msg_ptr2->para = msg_ptr->para+1;
             msg_ptr2->access_id = msg_ptr->access_id; /* Store src_id */
             tcm_send_msg_to_nvram(MSG_ID_NVRAM_READ_REQ, (local_para_struct*)msg_ptr2, NULL);      
          }
       }
       break;
    }   
#endif // __MASE__
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
   
    default:
       TCM_INTERNAL_DEBUG_ASSERT(0);
    }
    return;
}


void tcm_l4ctcm_set_pri_pdp_info_req_hdlr( ilm_struct *ilm_ptr )
{
    l4ctcm_set_pri_pdp_info_req_struct *dcont_ptr = NULL;         
    kal_uint8 mmi_sib_id ;
    session_info_block_struct *sib_ptr = NULL;
 
    dcont_ptr = (l4ctcm_set_pri_pdp_info_req_struct *)ilm_ptr->local_para_ptr;
 
    TCM_INTERNAL_DEBUG_ASSERT(NULL != dcont_ptr);
 
    if(!(dcont_ptr->context_id > 0 && dcont_ptr->context_id <= TCM_TOT_EXT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, 
                dcont_ptr->src_id, L4C_ERROR, TCM_L4C_DCONT_CID_UNEXPECTED);
        // Reject Cause: 0xFF ?!?! should be TCM_L4C_CID_UNEXPECTED
       return;
    }

#ifdef __EXT_PDP_CONTEXT_ON__ 

#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__)) // for PPP Type PDP Context, we can neither apply header compression nor data compression
    if (dcont_ptr->pdp_type == PPP_ADDR_TYPE)
       {
           if((dcont_ptr->dcomp_algo !=0) || (dcont_ptr->hcomp_algo !=0))
           {
               kal_brief_trace(TRACE_INFO, TCM_INFO_AT_CONFIGURE_PPP_PDP_BUT_ENABLE_COMPRESSION, dcont_ptr->dcomp_algo, dcont_ptr->hcomp_algo);
               SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, dcont_ptr->src_id, 
                    L4C_ERROR, TCM_L4C_DCONT_NOT_ALLOW_FOR_PPP_TYPE);
            // Reject Cause: ppp type can set compression
               return;
           }
       }
#endif // ~ #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
 
#ifdef __SND_HCOMP_RFC1144__
     if (dcont_ptr->hcomp_algo > 1)
#else
    if (dcont_ptr->hcomp_algo !=0) 
#endif
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, dcont_ptr->src_id, 
            L4C_ERROR, TCM_L4C_DCONT_INVALID_PARAMETER);
        // Reject Cause:
       return;
    }
 
#ifdef __SND_DCOMP_V42BIS__
/* under construction !*/
#else
    if (dcont_ptr->dcomp_algo !=0) 
#endif
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, dcont_ptr->src_id, 
            L4C_ERROR, TCM_L4C_DCONT_INVALID_PARAMETER);
        // Reject Cause:
       return;
    }
 
    mmi_sib_id = tcm_get_sib_id (GET_FROM_CONTEXTID, dcont_ptr->context_id);         

    ASSERT(mmi_sib_id < TCM_TOT_CONTEXT);

    /* erica 20051215  mark unused codes */
    //TCM_PTR(tcm_src_id) = dcont_ptr->src_id; //Store L4C src_id for CNF msg, Add 03.01.07
 
    /* Check whether the PDP type is valid type or not, if not
     * send error to TE */
    switch (dcont_ptr->pdp_type)
    {
        /* Poying: The below are the valid pdp types. */
        case IPV4_ADDR_TYPE: 
        case 0xFF:
#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
        case PPP_ADDR_TYPE:
#endif /* (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__)) */
#ifdef __IPV6__
        case IPV6_ADDR_TYPE:
#endif /* __IPV6__ */
#ifdef __IPV4V6__
        case IPV4V6_ADDR_TYPE:
#endif /* __IPV4V6__ */
        {
            break ;
        }      
        default: 
        /* Poying: pdp type is not valid. */ 
        {
            kal_brief_trace(TRACE_INFO, TCM_INFO_AT_CONFIGURE_PDP_ADDR_TYPE, dcont_ptr->pdp_type);
            
            /* Poying: The error cause will be passed from TCM --> L4C --> RIL. 
             * - RIL will not try to activate pdp context again after receiving this cause (pdp_type error). 
             */
            SEND_SET_CNF_TO_L4C( MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, dcont_ptr->src_id, L4C_ERROR, TCM_L4C_DCONT_INVALID_PDP_TYPE);
            // Reject Cause: pdp type is not valid. 
            return;
        }
    }

   /* erica 20060320 : during activation already , reject the requeset */
   if(tcm_ptr_g->cntxt_flag[mmi_sib_id] == TCM_CNTXT_VALID )
   {  
       /* currently is activating, reject to change the definition of PDP context */
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF, dcont_ptr->src_id, 
            L4C_ERROR, TCM_L4C_DCONT_CID_ALREADY_IN_USE);                      
        // Reject Cause:
       return;
   }
 
   /* Get the SIB pointer for this context */
   sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
   TCM_INTERNAL_DEBUG_ASSERT(NULL != sib_ptr);
 
   /* Check whether the sib is present for this context_id */
   if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
   {
     tcm_create_sib( mmi_sib_id ); 
   }
 
   /* mtk00714 w0633: AT definition */
   sib_ptr->AT_definition |= TCM_CGDCONT_DEFINED;

#ifdef __REL8__
   /* Leverage AT_definition to store ipv4addralloc if needed. */
   if (dcont_ptr->ipv4addralloc == 1)   // ipv4 address allocated via DHCP
   {
       sib_ptr->AT_definition |= TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP;
   }
   else if (dcont_ptr->ipv4addralloc == 0) // IPv4 address allocated via NAS signalling
   {
       sib_ptr->AT_definition &= (~TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP);
   }
   else 
   {
       ASSERT(0) ;
   }
   /* Note: 
    * In current design, the "IPv4 address allocation via DHCP" will only take effect 
    * in the case of using CGDCONT + CGACT. 
    *  - For dial-up, PPP needs the IPv4 address provided by GGSN.
    *  - For WAP, its pdp context is not defined by the CGDCONT command.
    */
#endif /* __REL8__ */
  
   /* Copy the context type into the SIB  */
   sib_ptr->context_type       = PRIMARY_CONTEXT;
 
   /* Store the primary context id into the SIB */
   sib_ptr->primary_context_id = dcont_ptr->context_id ;
 
   /* Copy the context id into the SIB */
   sib_ptr->context_id         = dcont_ptr->context_id;
 
   /* Copy the apn  length into the SIB */
   if(0xFF != dcont_ptr->apn_length)
   {
       sib_ptr->apn_len            = dcont_ptr->apn_length;
       /* Copy the apn into the SIB */
       strcpy((kal_char *)sib_ptr->apn, (kal_char *)dcont_ptr->apn);
   }
 
   /* Copy the pdp address type into SIB */
   if(0xFF != dcont_ptr->pdp_type)
       sib_ptr->pdp_addr_type      = (pdp_addr_type_enum)dcont_ptr->pdp_type;
 
 
   /* Copy the pdp address length into the SIB */
   
#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
   if (dcont_ptr->pdp_type == PPP_ADDR_TYPE)   
   {
       // PPP Type PDP Context, don't care what is the dcont_ptr->pdp_addr_len value
       // even if L4C does not carry the pdp_addr_len, (that is, 0xFF == dcont_ptr->pdp_addr_len)
       // we use PPP_ADDR_LEN for the pdp_addr_len
       sib_ptr->pdp_addr_len = PPP_ADDR_LEN;

       // sib_ptr->addr_scheme = TCM_STATIC_ADDR ;  // Poying: don't-care
   }
   else
#endif /* (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__)) */
   {
       /* Poying: For IPv6, user cannot specify the address. Set to be dynamic. */
#ifdef __IPV6__
       if ( (dcont_ptr->pdp_type == IPV6_ADDR_TYPE) 
#ifdef __IPV4V6__
             || (dcont_ptr->pdp_type == IPV4V6_ADDR_TYPE) 
#endif /* __IPV4V6__ */
           )
       {
           dcont_ptr->pdp_addr_len = NULL_PDP_ADDR_LEN ;
       }
#endif /* __IPV6__ */

       /* Poying: Fill-in pdp_addr_len. */
       sib_ptr->pdp_addr_len = dcont_ptr->pdp_addr_len ; 

       /* Poying: Fill-in address scheme and address value (if any). */
       if ( (dcont_ptr->pdp_addr_len == 0xFF) || (dcont_ptr->pdp_addr_len == NULL_PDP_ADDR_LEN) )
       {
           sib_ptr->addr_scheme = TCM_DYNAMIC_ADDR ;
       }       
       else 
       {
          sib_ptr->addr_scheme = TCM_STATIC_ADDR ;       
          
#if 1
          /* Poying: Use kal_mem_cpy to copy address. */
          kal_mem_cpy(sib_ptr->addr_val, dcont_ptr->addr_val, sib_ptr->pdp_addr_len) ;
#else
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
   }

 
    if(0xFF != dcont_ptr->hcomp_algo)
    {
      /* Copy the header compression algorithm into SIB */
      sib_ptr->pcomp_algo = L4C_TO_SND_HCOMP_ALGO_TABLE[dcont_ptr->hcomp_algo];
    }
    if(0xFF != dcont_ptr->dcomp_algo)
    {
      /* Copy the data compression algorithm into SIB */
      sib_ptr->dcomp_algo = L4C_TO_SND_DCOMP_ALGO_TABLE[dcont_ptr->dcomp_algo];
    }
 
    sib_ptr->src_id = dcont_ptr->src_id;
    tcm_restore_sib_to_nvram(dcont_ptr->context_id, 
                             (kal_uint8)E_L4C_SET_PRI_PDP_INFO*16);
    
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__

    return;
}


void tcm_l4ctcm_set_gprs_statistics_info_req_hdlr( ilm_struct *ilm_ptr )
{
#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
 
    kal_uint8 index = 0;
    kal_uint8 sib_id = 0;
    session_info_block_struct * si_db_ptr = NULL;
    l4ctcm_set_gprs_statistics_info_req_struct * rcv_msg_ptr;
    tcm_ratdm_reset_ps_statistics_req_struct * sent_msg_ptr;
    rcv_msg_ptr = (l4ctcm_set_gprs_statistics_info_req_struct *)ilm_ptr->local_para_ptr;
 
    sent_msg_ptr = (tcm_ratdm_reset_ps_statistics_req_struct *)construct_local_para
                              (sizeof(tcm_ratdm_reset_ps_statistics_req_struct),
                              TD_RESET );
 
    TCM_PTR(reset_serial_number) = rcv_msg_ptr->reset_id;
    sent_msg_ptr->reset_serial_num = rcv_msg_ptr->reset_id;
 
    for(index = 1; index <= TCM_TOT_CONTEXT; index++)
    {
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, index);
        si_db_ptr = tcm_get_sib_ptr(sib_id);
        if(TCM_DATA_PLANE_DECONFIGURED != si_db_ptr->data_plane_state)
        {
            sent_msg_ptr->nsapi_list[sent_msg_ptr->no_of_nsapis] = si_db_ptr->nsapi;
            sent_msg_ptr->no_of_nsapis++;
        }
    }

#ifdef __UGTCM__
    tcm_send_msg_to_ratdm(MSG_ID_TCM_RATDM_RESET_PS_STATISTICS_REQ, (local_para_struct *)sent_msg_ptr, NULL);
#endif /* __UGTCM__ */
     
    return;
 
#else // #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
 
    // There should be no code related to NVRAM_EF_TCM_STATISTICS_LID exists
   return;
 
#endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
}


void tcm_l4ctcm_set_sec_pdp_info_req_hdlr( ilm_struct *ilm_ptr )
{
    l4ctcm_set_sec_pdp_info_req_struct *dscont_ptr; 
#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)
    tcm_sib_usage_enum                       sib;  
    kal_uint8 mmi_sib_id;
    session_info_block_struct *sib_ptr = NULL, *prim_sib_ptr = NULL;
#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
  
    /* Get the command information into the scratch */
    dscont_ptr = (l4ctcm_set_sec_pdp_info_req_struct *)ilm_ptr->local_para_ptr;
    TCM_INTERNAL_DEBUG_ASSERT(NULL != dscont_ptr);
  
    kal_brief_trace(TRACE_GROUP_2, TCM_SET_SEC_PDP_INFO, dscont_ptr->context_id, dscont_ptr->prim_context_id);

    /* Modified by: CH_Liang 2005.06.23
     * Description: primary and secondary context id should not eqaul
     */
    if ( ( !(dscont_ptr->context_id > 0 && dscont_ptr->context_id <= TCM_TOT_EXT_CONTEXT) ) 
            || (dscont_ptr->context_id == dscont_ptr->prim_context_id) )
    {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_CID_UNEXPECTED);
        // Reject Cause: 
        return;
    }
    /* End of Modification, 2005.06.23. Reviewed by: Joseph Chen */ 

#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)

#ifdef __SND_HCOMP_RFC1144__
      if (dscont_ptr->hcomp_algo > 1)
#else
     if (dscont_ptr->hcomp_algo !=0) 
#endif
     {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, 
                 dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_INVALID_PARAMETER);
        // Reject Cause: TCM_L4C_INVALID_PARAMETER
        return;
     }
  		 
#ifdef __SND_DCOMP_V42BIS__
/* under construction !*/
#else
     if (dscont_ptr->dcomp_algo !=0) 
#endif
     {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, 
                 dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_INVALID_PARAMETER);
        // Reject Cause: TCM_L4C_INVALID_PARAMETER
        return;
     }
    
    mmi_sib_id = tcm_get_sib_id (GET_FROM_CONTEXTID,dscont_ptr->prim_context_id );
    prim_sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
  
    /* Check whether SIB is present for this context or not */
    if ( prim_sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
    {
      /* error logging is inside the function. no need of doing
       * here.Also the primary context is not present. Hence
       * there's no way of proceeding further */
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_CID_PRIMARY_IS_NOT_IN_USE);
        // Reject Cause: 
        return;
    }
  
    /* Poying: Accpet CGDSCONT only if the primary context is activated. */ 
    if (prim_sib_ptr->main_state != TCM_CONTEXT_ACTIVE_STATE)
    {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_CID_PRIMARY_IS_NOT_ACTIVATED);
        // Reject Cause: 
        return;
    }

#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
    /* If the primary PDP is PPP Type PDP, then we do not allow define secondary PDP */
    if (prim_sib_ptr->pdp_addr_type == PPP_ADDR_TYPE)
    {
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, dscont_ptr->src_id, L4C_ERROR, TCM_L4C_DSCONT_NOT_ALLOW_FOR_PPP_TYPE);
        // Reject Cause: not allow set 2nd pdp for ppp type pdp
        return;
    }
#endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__
  
    mmi_sib_id =
        tcm_get_sib_id (GET_FROM_CONTEXTID, dscont_ptr->context_id );

    ASSERT(mmi_sib_id < TCM_TOT_CONTEXT);
    
    /* erica 20060320 : during activation already , reject the requeset */
    if(tcm_ptr_g->cntxt_flag[mmi_sib_id] == TCM_CNTXT_VALID )
    {  
        /* currently is activating, reject to change the definition of PDP context */
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF, dscont_ptr->src_id, 
             L4C_ERROR, TCM_L4C_DSCONT_CID_ALREADY_IN_USE);                      
        // Reject Cause: reject cgdscont during activation
        return;
    }
    
    /* Now check for the (would-be) secondary context */
    /* Get the SIB status for this context */
    tcm_is_sib_free(mmi_sib_id, &sib);
  
    /* Check whether SIB is created or not */
    if (sib != TCM_SIB_IN_USE )
    {
       /* SIB is not created before,so create the SIB for this
        * context  */ 
       tcm_create_sib( mmi_sib_id ); 
    }
  
    /* Get secondary context SIB pointer */
    sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
    
    /* Modified by: CH_Liang 2005.06.23
     * Description: check secondary context state
     */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    /* End of Modification, 2005.06.23. Reviewed by: Joseph Chen */      
  
    /* Copy the pdp length from parent context 
     * to the secondary context */
    sib_ptr->pdp_addr_len  = prim_sib_ptr->pdp_addr_len;
    
    /* Copy the pdp address from the parent context to 
     * the secondary context */
    
    kal_mem_cpy((kal_uint8 *)sib_ptr->addr_val,
                  (kal_uint8 *)prim_sib_ptr->addr_val,
                                 prim_sib_ptr->pdp_addr_len);
    
    /* Copy the APN length from the parent context to 
     * the secondary context */
    sib_ptr->apn_len = prim_sib_ptr->apn_len;
    
    /* Copy the APN from the parent context to the secondary
     * context */
    strcpy((kal_char *)sib_ptr->apn, (kal_char *)prim_sib_ptr->apn);
  
  /* mtk00714 w0633: AT definition */
   sib_ptr->AT_definition |= TCM_CGDSCONT_DEFINED;
  
    /* Update the context type as SECONDARY_CONTEXT */
    sib_ptr->context_type     = SECONDARY_CONTEXT;
    
    /* Update the context id and it's parent context id */
    sib_ptr->context_id       = dscont_ptr->context_id;
    
    sib_ptr->primary_context_id  = dscont_ptr->prim_context_id;
    
    if(0xFF != dscont_ptr->hcomp_algo)
     {
       /* Update the header compression algorithm & data compression
        * algorithm values */
       sib_ptr->pcomp_algo = L4C_TO_SND_HCOMP_ALGO_TABLE[dscont_ptr->hcomp_algo];
    }
    if(0xFF != dscont_ptr->dcomp_algo)
    {
       sib_ptr->dcomp_algo = L4C_TO_SND_DCOMP_ALGO_TABLE[dscont_ptr->dcomp_algo];
    }
    
    sib_ptr->src_id = dscont_ptr->src_id;
    tcm_restore_sib_to_nvram(dscont_ptr->context_id, 
                             (kal_uint8)E_L4C_SET_SEC_PDP_INFO*16);

#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__      

    return;
}


void tcm_l4ctcm_set_qos_info_req_hdlr( ilm_struct *ilm_ptr )
{
    l4ctcm_set_qos_info_req_struct *msg_ptr;
    session_info_block_struct *sib_ptr;
    kal_uint8 mmi_sib_id = 0;
    qos_struct *qos_ptr;
    tcm_qos_type_enum qos_type;

    msg_ptr = (l4ctcm_set_qos_info_req_struct *)ilm_ptr->local_para_ptr;
    TCM_INTERNAL_DEBUG_ASSERT(NULL != msg_ptr);
 
#ifndef TCM_WAP_QOS_SETTING
   /* only accept external cid */
   	if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_EXT_CONTEXT))
   {
   		//not external PDP context id
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_QOS_INFO_CNF, 
                						msg_ptr->src_id, L4C_ERROR, 0xFF);
       return;
   }
#else
   /*mtk00714: add for wap qos testing*/
   /* wap qos is allowed to set by the AT commands */
   	if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_CONTEXT))
   {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_QOS_INFO_CNF, 
                						msg_ptr->src_id, L4C_ERROR, 0xFF);
       return;
   }
   /*mtk00714: add for wap qos testing*/
#endif

#ifdef __EXT_PDP_CONTEXT_ON__   
    /* erica 20051215  mark unused codes */
//TCM_PTR(tcm_src_id) = qos_ptr->src_id; //Store L4C src_id for CNF msg, Add 03.01.07
 
   	mmi_sib_id = tcm_get_sib_id ( GET_FROM_CONTEXTID, msg_ptr->context_id );
 
   /* Get the SIB pointer for this context  */
   sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
   /* Check whether the sib is present for this context_id */
   if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
   {
     /* Create the SIB for this context */ 
     tcm_create_sib( mmi_sib_id ); 
   }
   
   /* Check the QosType */
     if (msg_ptr->qos_type == ATCI_REQ_QOS )
   {
 	/* mtk00714 w0633: AT definition */
 	 sib_ptr->AT_definition |= TCM_CGQREQ_DEFINED;
 	
 	kal_brief_trace(TRACE_INFO, TCM_PDP_SET_QOS, msg_ptr->qos_type);
 
     if(TCM_PTR(sib_tab)[mmi_sib_id].mod_type == TFT_MOD)
        TCM_PTR(sib_tab)[mmi_sib_id].mod_type = TFT_REQ_QOS_MOD;
     else
        TCM_PTR(sib_tab)[mmi_sib_id].mod_type = REQ_QOS_MOD;
     
     qos_ptr = &(sib_ptr->req_qos);         
     qos_type = TCM_REQ_QOS;
   }
   else     /* else, QoSType is minQos */
   {
 	/* mtk00714 w0633: AT definition */
 	 sib_ptr->AT_definition |= TCM_CGQMIN_DEFINED;
 	
 	kal_brief_trace(TRACE_INFO, TCM_PDP_SET_QOS, msg_ptr->qos_type);
 
     if(TCM_PTR(sib_tab)[mmi_sib_id].mod_type == TFT_MOD)
        TCM_PTR(sib_tab)[mmi_sib_id].mod_type = TFT_MIN_QOS_MOD;
     else
        TCM_PTR(sib_tab)[mmi_sib_id].mod_type = MIN_QOS_MOD;
 
     qos_ptr = &(sib_ptr->min_qos);
     qos_type = TCM_MIN_QOS;
    }
        sib_ptr->context_id              = msg_ptr->context_id;

        kal_mem_set(qos_ptr, 0, sizeof(qos_struct));
        qos_ptr->qos_length      = SM_CORRECT_QOS_LEN;
 
        if(0xFF != msg_ptr->delay_class)
                 	qos_ptr->delay_class     = msg_ptr->delay_class;          
        if(0xFF != msg_ptr->reliability_class)
                	qos_ptr->reliability_class = msg_ptr->reliability_class;
        if(0xFF != msg_ptr->peak_throughput)
                 	qos_ptr->peak_throughput   = msg_ptr->peak_throughput;
        if(0xFF != msg_ptr->precedence_class)
                	qos_ptr->precedence_class  = msg_ptr->precedence_class;
        if(0xFF != msg_ptr->mean_throughput)
                 	qos_ptr->mean_throughput   = msg_ptr->mean_throughput;
 
 	   tcm_qos_R98_to_R99( qos_ptr, sib_ptr->pdp_addr_type, qos_type); //erica dallas 20060516
    
 /*mtk00714: add for wap qos testing*/
#ifdef TCM_WAP_QOS_SETTING
   if ((msg_ptr->context_id > TCM_TOT_EXT_CONTEXT)
       && (msg_ptr->context_id <= TCM_TOT_CONTEXT))
   {
       if ((msg_ptr->precedence_class == 0)
               &&(msg_ptr->delay_class == 0)
               &&(msg_ptr->reliability_class == 0)
               &&(msg_ptr->peak_throughput == 0)
               &&(msg_ptr->mean_throughput == 0))
       {
               TCM_PTR(set_wap_qos) = KAL_FALSE; //reset the flag
       }
       else
       {
               TCM_PTR(set_wap_qos) = KAL_TRUE; //remember the flag, so in activate_req, won't use WAP setting
               kal_brief_trace(TRACE_WARNING, TCM_WAP_QOS_SETTING_RECEIVE_AT);
       }
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_QOS_INFO_CNF, 
                						msg_ptr->src_id, L4C_OK, NVRAM_IO_ERRNO_OK);
       return;
   }
#endif
 /*mtk00714: add for wap qos testing*/
    sib_ptr->src_id = msg_ptr->src_id;
    	tcm_restore_sib_to_nvram(msg_ptr->context_id, 
                             (kal_uint8)E_L4C_SET_QOS_INFO*16);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__

    return;
}


void tcm_l4ctcm_set_eqos_info_req_hdlr( ilm_struct *ilm_ptr )
{
    
    l4ctcm_set_eqos_info_req_struct *msg_ptr;
    session_info_block_struct *sib_ptr;
    qos_struct *qos_ptr;
    kal_uint8 mmi_sib_id = 0;
    tcm_qos_type_enum qos_type;
    
    /* Get the command information into the scratch*/
    msg_ptr = (l4ctcm_set_eqos_info_req_struct *)ilm_ptr->local_para_ptr;
    TCM_INTERNAL_DEBUG_ASSERT(NULL != msg_ptr);
#ifndef TCM_WAP_QOS_SETTING
    /* only accept external cid */
    if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_EXT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_EQOS_INFO_CNF, 
                                     msg_ptr->src_id, L4C_ERROR, 0xFF);
        return;
    }
#else
    /*mtk00714: add for wap qos testing*/
    /* wap qos is allowed to set by the AT commands */
    if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_EQOS_INFO_CNF, 
                                     msg_ptr->src_id, L4C_ERROR, 0xFF);
        return;
    }
    /*mtk00714: add for wap qos testing*/
#endif
    
#ifdef __EXT_PDP_CONTEXT_ON__    
     /* erica 20051215  mark unused codes */
    //TCM_PTR(tcm_src_id) = msg_ptr->src_id;
    
    mmi_sib_id = tcm_get_sib_id ( GET_FROM_CONTEXTID,msg_ptr->context_id );
    
    /* Get the SIB pointer for this context  */
    sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
    /* Check whether the sib is present for this context_id */
    if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
    {
       /* Create the SIB for this context */ 
       tcm_create_sib( mmi_sib_id ); 
    }
    
    /* Check the QoS Type */
    if (msg_ptr->qos_type == ATCI_REQ_QOS )
    {
    /* mtk00714 w0633: AT definition */
     sib_ptr->AT_definition |= TCM_CGQREQ_DEFINED;
    
    	kal_brief_trace(TRACE_INFO, TCM_PDP_SET_EQOS, msg_ptr->qos_type);
    
       if(TCM_PTR(sib_tab)[mmi_sib_id].mod_type == TFT_MOD)
          TCM_PTR(sib_tab)[mmi_sib_id].mod_type = TFT_REQ_QOS_MOD;
       else
          TCM_PTR(sib_tab)[mmi_sib_id].mod_type = REQ_QOS_MOD;
    
       qos_ptr = &(sib_ptr->req_qos);         
       qos_type = TCM_REQ_QOS;
    }
    else
    {
    /* mtk00714 w0633: AT definition */
     sib_ptr->AT_definition |= TCM_CGQMIN_DEFINED;
    
    	kal_brief_trace(TRACE_INFO, TCM_PDP_SET_EQOS, msg_ptr->qos_type);
    	
       qos_ptr = &(sib_ptr->min_qos);  
       qos_type = TCM_MIN_QOS;
    }
    
    sib_ptr->context_id = msg_ptr->context_id;       

    kal_mem_set(qos_ptr, 0, sizeof(qos_struct));
    qos_ptr->qos_length = SM_CORRECT_QOS_LEN;          
    qos_ptr->traffic_class = msg_ptr->traffic_class;          
    qos_ptr->delivery_order = msg_ptr->delivery_order;         
    qos_ptr->delivery_of_err_sdu = msg_ptr->delivery_of_err_sdu;
    qos_ptr->max_sdu_size = msg_ptr->max_sdu_size;
    qos_ptr->max_bitrate_up_lnk = msg_ptr->max_bitrate_up_lnk;
    qos_ptr->max_bitrate_down_lnk = msg_ptr->max_bitrate_down_lnk;
    qos_ptr->residual_bit_err_rate = msg_ptr->residual_bit_err_rate;
    qos_ptr->sdu_err_ratio = msg_ptr->sdu_err_ratio;
    qos_ptr->transfer_delay = msg_ptr->transfer_delay;
    qos_ptr->traffic_hndl_priority = msg_ptr->traffic_hndl_priority;
    qos_ptr->guarntd_bit_rate_up_lnk = msg_ptr->guarntd_bit_rate_up_lnk;
    qos_ptr->guarntd_bit_rate_down_lnk = msg_ptr->guarntd_bit_rate_down_lnk;
    qos_ptr->signalling_indication = msg_ptr->signalling_indication;
    qos_ptr->source_statistics_descriptor = msg_ptr->source_statistics_descriptor;
    qos_ptr->ext_max_bitrate_down_lnk = msg_ptr->ext_max_bitrate_down_lnk;
    qos_ptr->ext_guarntd_bit_rate_down_lnk = msg_ptr->ext_guarntd_bit_rate_down_lnk;
    qos_ptr->ext_max_bitrate_up_lnk = msg_ptr->ext_max_bitrate_up_lnk;
    qos_ptr->ext_guarntd_bit_rate_up_lnk = msg_ptr->ext_guarntd_bit_rate_up_lnk;
    
    tcm_qos_R99_to_R98( qos_ptr, qos_type); //erica dallas 20060516        
    
    
    /*mtk00714: add for wap qos testing*/
#ifdef TCM_WAP_QOS_SETTING
    if ((msg_ptr->context_id > TCM_TOT_EXT_CONTEXT)
        && (msg_ptr->context_id <= TCM_TOT_CONTEXT))
    {
           TCM_PTR(set_wap_qos) = KAL_TRUE; //remember the flag, so in activate_req, won't use WAP setting
           kal_brief_trace(TRACE_WARNING, TCM_WAP_QOS_SETTING_RECEIVE_AT);
           SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_EQOS_INFO_CNF, 
                 						msg_ptr->src_id, L4C_OK, NVRAM_IO_ERRNO_OK);
           return;
    }
#endif
    /*mtk00714: add for wap qos testing*/
      
    sib_ptr->src_id = msg_ptr->src_id;
    tcm_restore_sib_to_nvram(msg_ptr->context_id, 
                             (kal_uint8)E_L4C_SET_EQOS_INFO*16);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__

    return;
}


void tcm_l4ctcm_set_ppp_auth_info_req_hdlr( ilm_struct *ilm_ptr )
{
    session_info_block_struct *sib_ptr;
    kal_uint8 mmi_sib_id = 0;
    l4ctcm_set_ppp_auth_info_req_struct *msg_ptr = NULL;
    msg_ptr = (l4ctcm_set_ppp_auth_info_req_struct*)ilm_ptr->local_para_ptr;         
   
    if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_EXT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_SET_PPP_AUTH_CNF, 
                msg_ptr->src_id, L4C_ERROR, 0xFF);
   
       return;
    }
#ifdef __EXT_PDP_CONTEXT_ON__
    mmi_sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);
   
    /* Get the SIB pointer for this context  */
    sib_ptr = tcm_get_sib_ptr(mmi_sib_id);
   
    sib_ptr->is_chap = msg_ptr->is_chap;
   
    sib_ptr->src_id = msg_ptr->src_id;
    tcm_restore_sib_to_nvram(msg_ptr->context_id, 
                             (kal_uint8)E_L4C_SET_PPP_AUTH_INFO*16);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
    return;
}


void tcm_l4ctcm_undefine_pdp_info_req_hdlr( ilm_struct *ilm_ptr )
{
    session_info_block_struct *sib_ptr;
    kal_uint8 mmi_sib_id = 0;
    	 l4ctcm_undefine_pdp_info_req_struct *msg_ptr = 
	(l4ctcm_undefine_pdp_info_req_struct*)ilm_ptr->local_para_ptr;

    TCM_INTERNAL_DEBUG_ASSERT(NULL != msg_ptr);

    kal_brief_trace(TRACE_WARNING, TCM_UNDEFINE_PDP_INFO, msg_ptr->undefine_action);
 
#ifndef TCM_WAP_QOS_SETTING
    /* only accept external cid */
    if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_EXT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF, 
                                     msg_ptr->src_id, L4C_ERROR, 0xFF);
        return;
    }
#else			
    if(!(msg_ptr->context_id > 0 && msg_ptr->context_id <= TCM_TOT_CONTEXT))
    {
       SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF, 
                                     msg_ptr->src_id, L4C_ERROR, 0xFF);
        return;
    }
#endif

#ifdef __EXT_PDP_CONTEXT_ON__
    mmi_sib_id = tcm_get_sib_id ( GET_FROM_CONTEXTID,msg_ptr->context_id );

    ASSERT(mmi_sib_id < TCM_TOT_CONTEXT);

    /* erica 20060320 : during activation already , reject the requeset */
    if(tcm_ptr_g->cntxt_flag[mmi_sib_id] == TCM_CNTXT_VALID )
    {  
        /* currently is activating, reject to change the definition of PDP context */
        SEND_SET_CNF_TO_L4C(MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF, 
                                     msg_ptr->src_id, L4C_ERROR, 0xFF);                      
        return;
    }	        			

    /* Get the SIB pointer for this context  */
    sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
    /* Check whether the sib is present for this context_id */
    if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
    {
       /* Create the SIB for this context */ 
       tcm_create_sib( mmi_sib_id ); 
    }
#ifdef __TCM_UT__
	 //1 for TCM UT, set undef action to MSC Composer designed value
	 if(CGDCONT_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGDCONT_EXE;
	 else if(CGDSCONT_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGDSCONT_EXE;
	 else if(CGQMIN_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGQMIN_EXE;
	 else if(CGQREQ_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGQREQ_EXE;
	 else if(CGEQMIN_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGEQMIN_EXE;
	 else if(CGEQREQ_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGEQREQ_EXE;
	 else if(CGTFT_EXE==msg_ptr->undefine_action)
		 msg_ptr->undefine_action=TCM_UNDEF_CGTFT_EXE;
	 else
		 kal_prompt_trace(MOD_L4C,"MAY BE wrong undefine action sent to TCM");
	 if (msg_ptr->undefine_action == TCM_UNDEF_CGDCONT_EXE)
	 {
	 	sib_ptr->AT_definition &= (~TCM_CGDCONT_DEFINED);
	 	
#ifdef __REL8__
        /* Undefine ipv4addralloc as well. */
        sib_ptr->AT_definition &= (~TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP);
#endif /* __REL8__ */
	 }
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGQREQ_EXE)
	 {
	 	sib_ptr->AT_definition &= (~TCM_CGQREQ_DEFINED);
		//kal_mem_set(&sib_ptr->req_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->req_qos, TCM_REQ_QOS);
		sib_ptr->req_qos.qos_length= SM_CORRECT_QOS_LEN;
#ifdef TCM_WAP_QOS_SETTING
		TCM_PTR(set_wap_qos) = KAL_FALSE;
#endif
	 }
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGQMIN_EXE)
	 {
	 	sib_ptr->AT_definition &= (~TCM_CGQMIN_DEFINED);
		//kal_mem_set(&sib_ptr->min_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->min_qos, TCM_MIN_QOS);
		sib_ptr->min_qos.qos_length= SM_CORRECT_QOS_LEN;
	 }
#ifdef __R99__
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGDSCONT_EXE)
	 {
	 	sib_ptr->AT_definition &= (~TCM_CGDSCONT_DEFINED);
	 }
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGEQREQ_EXE)
	 {
		sib_ptr->AT_definition &= (~TCM_CGQREQ_DEFINED);
		//kal_mem_set(&sib_ptr->req_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->req_qos, TCM_REQ_QOS);
		sib_ptr->req_qos.qos_length= SM_CORRECT_QOS_LEN;
#ifdef TCM_WAP_QOS_SETTING
		TCM_PTR(set_wap_qos) = KAL_FALSE;
#endif
	 }
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGEQMIN_EXE)
	 {
		sib_ptr->AT_definition &= (~TCM_CGQMIN_DEFINED);
		//kal_mem_set(&sib_ptr->min_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->min_qos, TCM_MIN_QOS);
		sib_ptr->min_qos.qos_length= SM_CORRECT_QOS_LEN;
	 }
	 else if(msg_ptr->undefine_action == TCM_UNDEF_CGTFT_EXE)
	 {
	 	l4c_tft_struct		tft;
		sib_ptr->AT_definition &= (~TCM_CGTFT_DEFINED);
		kal_brief_trace(TRACE_GROUP_2, L4CTCM_SET_TFT_INFO);
		tft.tot_pf_count = 0;
		tcm_set_tft_info(mmi_sib_id, &tft);
	 }
#endif
#else // ~ #ifdef __TCM_UT__
	 if (msg_ptr->undefine_action == CGDCONT_EXE)
	 {
        sib_ptr->AT_definition &= (~TCM_CGDCONT_DEFINED);
        
#ifdef __REL8__
        /* Undefine ipv4addralloc as well. */
        sib_ptr->AT_definition &= (~TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP);
#endif /* __REL8__ */
	 }
    else if(msg_ptr->undefine_action == CGQREQ_EXE)
	 {
 	sib_ptr->AT_definition &= (~TCM_CGQREQ_DEFINED);
	//kal_mem_set(&sib_ptr->req_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->req_qos, TCM_REQ_QOS);
	sib_ptr->req_qos.qos_length= SM_CORRECT_QOS_LEN;
#ifdef TCM_WAP_QOS_SETTING
	TCM_PTR(set_wap_qos) = KAL_FALSE;
#endif
	 }
    else if(msg_ptr->undefine_action == CGQMIN_EXE)
	 {
 	sib_ptr->AT_definition &= (~TCM_CGQMIN_DEFINED);
	//kal_mem_set(&sib_ptr->min_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->min_qos, TCM_MIN_QOS);
	sib_ptr->min_qos.qos_length= SM_CORRECT_QOS_LEN;
	 }
#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)
    else if(msg_ptr->undefine_action == CGDSCONT_EXE)
	 {
 	sib_ptr->AT_definition &= (~TCM_CGDSCONT_DEFINED);
	 }
#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
    else if(msg_ptr->undefine_action == CGEQREQ_EXE)
	 {
 	sib_ptr->AT_definition &= (~TCM_CGQREQ_DEFINED);
	//kal_mem_set(&sib_ptr->req_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->req_qos, TCM_REQ_QOS);
	sib_ptr->req_qos.qos_length= SM_CORRECT_QOS_LEN;
#ifdef TCM_WAP_QOS_SETTING
	TCM_PTR(set_wap_qos) = KAL_FALSE;
#endif
	 }
    else if(msg_ptr->undefine_action == CGEQMIN_EXE)
	 {
 	sib_ptr->AT_definition &= (~TCM_CGQMIN_DEFINED);
	//kal_mem_set(&sib_ptr->min_qos, 0, sizeof(qos_struct));
		custom_gprs_pdp_reset_qos_values_to_default_values(&sib_ptr->min_qos, TCM_MIN_QOS);
	sib_ptr->min_qos.qos_length= SM_CORRECT_QOS_LEN;
	 }
#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)
    else if(msg_ptr->undefine_action == CGTFT_EXE)
	 {
            l4c_tft_struct		tft;
            sib_ptr->AT_definition &= (~TCM_CGTFT_DEFINED);
            kal_brief_trace(TRACE_GROUP_2, L4CTCM_SET_TFT_INFO);
            tft.tot_pf_count = 0;
            tcm_set_tft_info(mmi_sib_id, &tft);
	 }
#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
#endif // ~ #ifdef __TCM_UT__
    sib_ptr->src_id = msg_ptr->src_id;
 	  tcm_restore_sib_to_nvram(msg_ptr->context_id, 
                             (kal_uint8)E_L4C_UNDEFINE_PDP_INFO*16);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
 return;
}


#ifdef __MEDIATEK_SMART_QOS__
void tcm_l4ctcm_set_msq_mode_req_handler( ilm_struct *ilm_ptr )
{
    l4ctcm_set_msq_mode_req_struct  *msg_ptr = NULL ;
    session_info_block_struct *sib_ptr;
    sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, TCM_TOT_CONTEXT) );   /* steal the last SIB to store src_id */

    msg_ptr = (l4ctcm_set_msq_mode_req_struct *) ilm_ptr->local_para_ptr ;

    tcm_ptr_g->tcm_msq_context_ptr->is_msq_on = msg_ptr->is_msq_on ;
    
    sib_ptr->src_id = msg_ptr->src_id;
    tcm_store_msq_list_to_nvram( E_L4C_SET_MSQ_MODE*16 ) ;
    
    return ;
}

void tcm_l4ctcm_set_msq_entry_req_handler( ilm_struct *ilm_ptr )
{
    l4ctcm_set_msq_entry_req_struct  *msg_ptr = NULL ;
    nvram_ef_msq_entry_struct        *entry_ptr = NULL ;
    nvram_ef_msq_entry_struct        *tcm_msq_entry_ptr = NULL ;
    session_info_block_struct *sib_ptr;
    sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, TCM_TOT_CONTEXT) );   /* steal the last SIB to store src_id */
    
    msg_ptr = (l4ctcm_set_msq_entry_req_struct *) ilm_ptr->local_para_ptr ;
    entry_ptr = &(msg_ptr->entry) ;

    tcm_msq_entry_ptr = &(tcm_ptr_g->tcm_msq_context_ptr->msq_entry[entry_ptr->entry_id - 1]) ;

    /* Handle the reset case: AT+MSQ=<#>,"",0,0. 
     * That is, to clear one entry in MSQ, L4C should send AT+MSQ=<#>,"",0,0 to TCM
     */
    if ( ( kal_mem_cmp(entry_ptr->plmn_id, "", sizeof("")) == 0 ) 
          && (entry_ptr->check_nw == 0)
          && (entry_ptr->check_sim == 0) )
    {
        /* Clear the entry_id to be 0 in TCM's MSQ entry, 
         * so that we can print valid entries only when AT+MSQ? is used to quert the MSQ list. 
         */
        kal_brief_trace( TRACE_INFO, TCM_MSQ_SET_ENTRY_CLEAR, tcm_msq_entry_ptr->entry_id ) ;
        entry_ptr->entry_id = 0 ;
    }

    kal_mem_cpy( tcm_msq_entry_ptr, entry_ptr, sizeof(nvram_ef_msq_entry_struct) ) ;

    sib_ptr->src_id = msg_ptr->src_id;
    tcm_store_msq_list_to_nvram( E_L4C_SET_MSQ_ENTRY*16 ) ;
    
    return ;
}

void tcm_store_msq_list_to_nvram( kal_uint8 set_type_and_src_id )
{
    nvram_write_req_struct      *msg_ptr = NULL ;
    peer_buff_struct            *peer_buff_ptr = NULL ;
    nvram_ef_msq_list_struct    *pdu_ptr = NULL ;
    kal_uint16  pdu_len ;

    /* Construct and fill-in local_para. */
    msg_ptr = (nvram_write_req_struct *) construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
    ASSERT(msg_ptr != NULL);    
    msg_ptr->file_idx = NVRAM_EF_MSQ_LIST_LID ;
    msg_ptr->para = 1 ;
    msg_ptr->access_id = set_type_and_src_id ;

    /* Construct and fill-in peer_buff. */
    peer_buff_ptr = construct_peer_buff(NVRAM_EF_MSQ_LIST_SIZE, 0, 0, TD_CTRL) ;
    pdu_ptr = (nvram_ef_msq_list_struct *) get_peer_buff_pdu( peer_buff_ptr, &pdu_len ) ;
    if ( (pdu_ptr == NULL) || (pdu_len != NVRAM_EF_MSQ_LIST_SIZE ) )
    {
        DEBUG_ASSERT(0) ;
    }
    kal_mem_cpy( pdu_ptr, tcm_ptr_g->tcm_msq_context_ptr, NVRAM_EF_MSQ_LIST_SIZE ) ;

    tcm_send_msg_to_nvram( MSG_ID_NVRAM_WRITE_REQ, (local_para_struct *) msg_ptr, peer_buff_ptr );

    return ;
}
#endif /* __MEDIATEK_SMART_QOS__ */


#ifdef __UGTCM__
void tcm_set_req_n201u_hdlr(kal_uint8 cid, kal_uint16 req_n201u)
{
    session_info_block_struct *sib_ptr;

    sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, cid) );
    sib_ptr->req_n201u = req_n201u;
    
    sib_ptr->src_id = RMMI_SRC;
    tcm_restore_sib_to_nvram(cid, (kal_uint8)E_L4C_SET_N201U_INFO*16);
}
#endif /* __UGTCM__ */

void tcm_nvram_write_cnf_hdlr( ilm_struct *ilm_ptr )
{
    nvram_write_cnf_struct *msg_ptr = NULL;
    session_info_block_struct *sib_ptr;
    msg_ptr = (nvram_write_cnf_struct*) ilm_ptr->local_para_ptr;
   
    switch(msg_ptr->file_idx)
    {
    
#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
        case NVRAM_EF_TCM_STATISTICS_LID:
        {
            tcm_change_statistic_is_writing(KAL_FALSE);
            if(TCM_PTR(statistic_needs_update) == KAL_TRUE)
            {
                tcm_send_write_statistic_to_nvram();
            }	
            break;
        }
#endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )

#ifdef __MEDIATEK_SMART_QOS__
        case NVRAM_EF_MSQ_LIST_LID: 
        {
            l4c_result_enum l4_result = L4C_OK ;
            msg_type msg_id = 0 ;
        sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, TCM_TOT_CONTEXT) );   /* steal the last SIB to store src_id */

            if (msg_ptr->result != NVRAM_IO_ERRNO_OK) /* Failed to write in NVRAM */
            {
                l4_result = L4C_ERROR ;
            }

            switch ((msg_ptr->access_id)/16) 
            {
                case E_L4C_SET_MSQ_MODE: 
                {   
                    msg_id = MSG_ID_L4CTCM_SET_MSQ_MODE_CNF ; 
                    break ; 
                }
                case E_L4C_SET_MSQ_ENTRY: 
                { 
                    msg_id = MSG_ID_L4CTCM_SET_MSQ_ENTRY_CNF ; 
                    break ; 
                }
                default: 
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0) ;
                    break ;
                }
            }
            
        SEND_SET_CNF_TO_L4C(msg_id, sib_ptr->src_id, l4_result, msg_ptr->result) ;
            break ;
        }
#endif /* __MEDIATEK_SMART_QOS__ */

#ifdef __EXT_PDP_CONTEXT_ON__
        case NVRAM_EF_TCM_PDP_PROFILE_LID:
        {
            l4c_result_enum l4_result = L4C_OK ;
            msg_type msg_id = 0 ;
        

            //erica finland: TCM saved NVRAM internal. not triggered by L4c
            // for example,  change pdp_context_type when secondary becomes primary in tcm_terminate_context().
            if ((msg_ptr->access_id) == 0xff)
            {
       	        break;
           	}

		sib_ptr = tcm_get_sib_ptr( tcm_get_sib_id(GET_FROM_CONTEXTID, (msg_ptr->access_id)%16) );
		
            if (msg_ptr->result != NVRAM_IO_ERRNO_OK) /* Failed to write in NVRAM */
            {
                l4_result = L4C_ERROR ;
            }

            switch ((msg_ptr->access_id)/16) 
            {
                case E_L4C_SET_PRI_PDP_INFO: 
                {   
                    msg_id = MSG_ID_L4CTCM_SET_PRI_PDP_INFO_CNF ; 
                    break ; 
                }
                case E_L4C_SET_SEC_PDP_INFO: 
                {   
                    msg_id = MSG_ID_L4CTCM_SET_SEC_PDP_INFO_CNF ; 
                    break ; 
                }
                case E_L4C_SET_QOS_INFO:
                { 
                    msg_id = MSG_ID_L4CTCM_SET_QOS_INFO_CNF ; 
                    break ; 
                }
                case E_L4C_SET_EQOS_INFO:
                { 
                    msg_id = MSG_ID_L4CTCM_SET_EQOS_INFO_CNF ; 
                    break ; 
                }
                case E_L4C_SET_PPP_AUTH_INFO:
                {   
                    msg_id = MSG_ID_L4CTCM_SET_PPP_AUTH_CNF ; 
                    break ; 
                }
                case E_L4C_UNDEFINE_PDP_INFO:
                { 
                    msg_id = MSG_ID_L4CTCM_UNDEFINE_PDP_INFO_CNF ; 
                    break ; 
                }
#ifdef __TCM_UT__
                case E_L4C_SET_N201U_INFO:
                {
                    if (msg_ptr->result != NVRAM_IO_ERRNO_OK)
                    {
                        kal_brief_trace(TRACE_WARNING, TCM_N201U_UPDATED_FAIL);
                    }
                    break ; 
                }
#endif /* __TCM_UT__ */
                default: 
                {
                    TCM_INTERNAL_DEBUG_ASSERT(0) ;
                    break ;
                }
            }

#ifdef __TCM_UT__
            if ((msg_ptr->access_id)/16 == E_L4C_SET_N201U_INFO)
            {
                ; // do-nothing. 
            }
            else
#endif /* __TCM_UT__ */
            {
            SEND_SET_CNF_TO_L4C(msg_id, sib_ptr->src_id, l4_result, msg_ptr->result);
            }    
            break ;
        }
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__   
   
        default:
            TCM_INTERNAL_DEBUG_ASSERT(0);
    }
    
    return;
}

void tcm_restore_sib_to_nvram( kal_uint8 index, kal_uint8 access_id )
{
#if (defined(__MASE__) && defined(NVRAM_NOT_PRESENT))
    return ;
#else /* (defined(__MASE__) && defined(NVRAM_NOT_PRESENT)) */
    {
#ifdef __EXT_PDP_CONTEXT_ON__
   nvram_write_req_struct *msg_ptr = NULL;
   peer_buff_struct *pPeerBuf = NULL;
   nvram_ef_tcm_PDP_profile_record_struct *pbPdu = NULL;
   kal_uint16 wPeerLen = 0;
   session_info_block_struct *pSib = NULL;

   msg_ptr = (nvram_write_req_struct *)construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
   ASSERT(NULL != msg_ptr);
   msg_ptr->file_idx = NVRAM_EF_TCM_PDP_PROFILE_LID;

   msg_ptr->para = index + (TCM_TOT_EXT_CONTEXT*tcm_get_actual_sim_id()); //for SIM1/SIM2/SIM3/SIM4
   
        if (access_id != 0xFF)
            msg_ptr->access_id = access_id + index;
        else
   msg_ptr->access_id = access_id;

   pPeerBuf = construct_peer_buff(NVRAM_EF_TCM_PDP_PROFILE_SIZE, 0, 0, TD_CTRL);
   pbPdu = (nvram_ef_tcm_PDP_profile_record_struct *) get_peer_buff_pdu(pPeerBuf, &wPeerLen);
   TCM_INTERNAL_DEBUG_ASSERT(sizeof(nvram_ef_tcm_PDP_profile_record_struct) == wPeerLen && NULL != pbPdu);

   pSib = tcm_get_sib_ptr((kal_uint8)(index-1));
   if(NULL == pSib)
      return;

   pSib->is_sib_defined = TCM_SIB_IN_USE;

   /* Poying: Maximum Length is NOT IPV4V6_ADDR_LEN in SIB since IPv6 cannot use static address. */
   kal_mem_cpy(pbPdu->addr_val, pSib->addr_val, MAX_PDP_ADDR_LEN); // Carlson: why only 4 Bytes? must be IPv4?
   
   kal_mem_cpy(&(pbPdu->req_qos), &(pSib->req_qos), sizeof(qos_struct));
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
   tcm_print_qos_content(&(pSib->req_qos), KAL_TRUE, pSib->context_id, TCM_REQ_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
   kal_mem_cpy(&(pbPdu->min_qos), &(pSib->min_qos), sizeof(qos_struct));
#if ((defined(__REL4__))) // only print qos in high level product (> REL4)
   tcm_print_qos_content(&(pSib->min_qos), KAL_TRUE, pSib->context_id, TCM_MIN_QOS);
#endif // ~ #if ((defined(__REL4__))) // only print qos in high level product (> REL4)
   kal_mem_cpy(pbPdu->apn, pSib->apn, 100);
   kal_mem_cpy(pbPdu->dns_val, pSib->dns, MAX_PDP_ADDR_LEN);
   //kal_mem_cpy(pbPdu->name, pSib->name, 32);// Carlson: remove useless context
   kal_mem_cpy(pbPdu->user_name, pSib->user_name, 16);
   kal_mem_cpy(pbPdu->password, pSib->password, 16);
   pbPdu->context_id = pSib->context_id;
   pbPdu->nsapi= pSib->nsapi;
   pbPdu->pdp_addr_type= pSib->pdp_addr_type;
   pbPdu->pdp_addr_len= pSib->pdp_addr_len;
   pbPdu->apn_len = pSib->apn_len;
   pbPdu->pcomp_algo = pSib->pcomp_algo;
   pbPdu->dcomp_algo = pSib->dcomp_algo;
   pbPdu->context_type= pSib->context_type;
   pbPdu->primary_context_id= pSib->primary_context_id;
   pbPdu->is_sib_defined= pSib->is_sib_defined;
   pbPdu->is_chap = pSib->is_chap;
   //pbPdu->name_length = pSib->name_length;// Carlson: remove useless context
   //pbPdu->name_dcs = pSib->name_dcs;// Carlson: remove useless context
   pbPdu->reserved = pSib->AT_definition;  //mtk00714 w0633

#ifdef __UGTCM__
   pbPdu->req_n201u = pSib->req_n201u; //erica 20070112
#endif /* __UGTCM__ */

   tcm_send_msg_to_nvram(MSG_ID_NVRAM_WRITE_REQ, (local_para_struct*)msg_ptr, pPeerBuf);
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__    
   return;
   
    }
#endif /* (defined(__MASE__) && defined(NVRAM_NOT_PRESENT)) */
}

