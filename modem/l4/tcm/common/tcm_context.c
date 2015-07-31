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
 * TCM_COTNEXT.C
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "tcm_context.h"

/* enums. */
#include "l4c_common_enum.h"
#include "ps_em_enum.h"
#include "l4_ps_api.h"

/* prototypes. */
#include "sim_public_api.h"
#include "tcm_pco_api.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
#include "tcm_gprs_statistic.h"
#endif /* (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__))) */


#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
#include "tcm_tft_api.h"
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__


#ifdef __HSDPA_SUPPORT__
#include "tcm_send_msg.h"
#endif /* __HSDPA_SUPPORT__ */


#ifndef __GEMINI__
tcm_context_struct tcm_context;
tcm_context_struct *tcm_ptr_g = &tcm_context;
#else
tcm_context_struct tcm_context[MOD_TCM_TOTAL_SIM];
tcm_context_struct *tcm_ptr_g;
#endif


#ifdef __MEDIATEK_SMART_QOS__
#include "l4c2tcm_func.h"                   /* To include callbacks provided by L4C. */
nvram_ef_msq_list_struct tcm_msq_context ;  /* No matter GEMINI is on or off, TCM uses the same MSQ list. */
#endif /* __MEDIATEK_SMART_QOS__ */


kal_bool tcm_is_sib_free( kal_uint8 sib_id, tcm_sib_usage_enum *sib )
{
    kal_bool ret_val = KAL_TRUE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_MMI,
                      MMI_FN_ENTER_MMI_IS_SIB_FREE_SUBOP );

    /* Return the state of the session information block indexed by
     * index.
     */
    *sib = tcm_ptr_g->sib_tab[sib_id].is_sib_defined;

    //TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_MMI, MMI_FN_EXIT_MMI_IS_SIB_FREE_SUBOP );

    return(ret_val);
}


/** Return the cindex: 0 ~ (TCM_TOT_CONTEXT-1). */
kal_uint8 tcm_get_sib_id( kal_int32 flag, kal_uint8 val )
{
    kal_uint8 ret_val;

    if (flag == GET_FROM_NSAPI)
    {
        val = tcm_nsapi_to_cid(val);
    }
    	
    if(tcm_cntxt_id_check(val))
    {
        ret_val = val - TCM_MIN_CONTEXT_ID;
    }
    else
    {
        ret_val = 0xFF;
    }

    #ifdef __MTK_INTERNAL__    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif // ~ #ifdef __MTK_INTERNAL__

    return(ret_val);    /* returns cindex. */
}


/** Return a pointer to a sib, indexed by sib_id. */
session_info_block_struct *tcm_get_sib_ptr( kal_uint8 cindex )
{
    ASSERT(cindex < TCM_TOT_CONTEXT);
    return(&tcm_ptr_g->sib_tab[cindex]);
}


kal_uint8 tcm_get_context_id_from_sib_id( kal_uint8 sib_id )
{
    return(sib_id + TCM_MIN_CONTEXT_ID);
}


kal_bool tcm_create_sib( kal_uint8 sib_id )
{
    kal_bool ret_val = KAL_TRUE;

    /* First check whether a sib already exists at the the index
     * specified by sib_id. If it exist then log and error and return.
     */
    //if ( TCM_PTR(sib_tab)[sib_id].is_sib_defined == TCM_SIB_IN_USE )
    //{
      /* Log an error that the sib already exists */
    //  ret_val = KAL_FALSE;
    //}
    //else
    {

      /* Update the configuration options to be zero-length list */
      tcm_config_packets_trim(&(tcm_ptr_g->sib_tab[sib_id]), 1);  // poying
      tcm_ptr_g->sib_tab[sib_id].prot_option_len = 0;
    
      /* Clear out the memory area that is allocated for the sib that
       * is requested to be created.
       */
      kal_mem_set( (kal_uint8 *)(&(tcm_ptr_g->sib_tab[sib_id])),
                   0,
                   sizeof(session_info_block_struct) );

      /* Update the Sib to be in use */
      tcm_ptr_g->sib_tab[sib_id].is_sib_defined = TCM_SIB_IN_USE;

      /* Make the state of context stored in the sib to inactive
       * context state.
       */
      //tcm_ptr_g->sib_tab[sib_id].main_state = TCM_CONTEXT_INACTIVE_STATE;
      tcm_change_tcm_context_main_state_value(&(tcm_ptr_g->sib_tab[sib_id]), TCM_CONTEXT_INACTIVE_STATE);

      //tcm_ptr_g->sib_tab[sib_id].sub_state = TCM_CONTEXT_INACTIVE_NULL_STATE;
      tcm_change_tcm_context_sub_state_value(&(tcm_ptr_g->sib_tab[sib_id]), TCM_CONTEXT_INACTIVE_NULL_STATE);

      //tcm_ptr_g->sib_tab[sib_id].data_plane_state = TCM_DATA_PLANE_DECONFIGURED;
      tcm_change_tcm_context_data_plane_state_value(&(tcm_ptr_g->sib_tab[sib_id]), TCM_DATA_PLANE_DECONFIGURED, NULL);

      //tcm_ptr_g->sib_tab[sib_id].data_account_id = CBM_INVALID_NWK_ACCT_ID;
      tcm_change_additional_para_value(&(tcm_ptr_g->sib_tab[sib_id]), TCM_PDP_ACT_REQ_NO_EXTRA_PARAMETER, 0);

      /* Set the l2p(Layer 2 protocol) field to NULL_L2P which means
       * that layer 2 protocol is not present.
       */
      tcm_ptr_g->sib_tab[sib_id].l2p = NULL_L2P;

      /* Set the pdp_addr_type field to NULL_PDP_ADDR_TYPE. */
      tcm_ptr_g->sib_tab[sib_id].pdp_addr_type = IPV4_ADDR_TYPE;

      /* Set the pdp_addr_len field to NULL_PDP_ADDR_LEN which means
       * that there is no address present and hence its length is
       * NULL.
       */
      tcm_ptr_g->sib_tab[sib_id].pdp_addr_len = NULL_PDP_ADDR_LEN;

      /* Initialize the primary context id for the context to a
       * unknown context id.
       */
      tcm_ptr_g->sib_tab[sib_id].primary_context_id =
                                       TCM_PRIMARY_UNKNOWN;

      /* Fill nsapi and context id fields */
      tcm_ptr_g->sib_tab[sib_id].context_id =
                               sib_id + TCM_MIN_CONTEXT_ID;
            
      /* Modified by: CH_Liang 2005.01.25
       * Description: Fill nsapi field to be invalid
       */
      tcm_ptr_g->sib_tab[sib_id].nsapi = TCM_INVALID_NSAPI;
      /* End of Modification, 2005.03.19. Reviewed by: Joseph */    

      #ifdef __UGTCM__
      /* Fill by default that the context is initiated by the MS */
      tcm_ptr_g->sib_tab[sib_id].initiated_by = MS_INITIATED;
      tcm_ptr_g->sib_tab[sib_id].tear_down_flag = 0; //erica dallas 20060505: for 2ndary PDP
      #endif /* __UGTCM__ */

      /* Fill the context type to UNKNOWN */
      tcm_ptr_g->sib_tab[sib_id].context_type = UNKNOWN_CONTEXT;
      tcm_ptr_g->deact_cause[sib_id] = (ps_cause_enum)0;            //erica dallas 20060505: for 2ndary PDP

      /* mtk00714 : 20080118 */
      /* give initial value*/
      // 172.21.120.6
      tcm_ptr_g->sib_tab[sib_id].dns[0] = 172;
      tcm_ptr_g->sib_tab[sib_id].dns[1] = 21;
      tcm_ptr_g->sib_tab[sib_id].dns[2] = 120;
      tcm_ptr_g->sib_tab[sib_id].dns[3] = 6;
      /* ~mtk00714*/

      tcm_ptr_g->sib_tab[sib_id].req_qos.qos_length = SM_CORRECT_QOS_LEN;
      tcm_ptr_g->sib_tab[sib_id].min_qos.qos_length = SM_CORRECT_QOS_LEN;
	  
    }

    #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )
    tcm_ptr_g->sib_tab[sib_id].act_pdp_cntxt_req_ipv6_dns = TCM_ACTIVATE_PDP_NEED_REQUEST_IPV6_DNS;
    tcm_ptr_g->sib_tab[sib_id].ipv6_dns1_present = KAL_FALSE;
    tcm_ptr_g->sib_tab[sib_id].ipv6_dns2_present = KAL_FALSE;
    #endif // #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )

#if __REL8__
    tcm_ptr_g->tcm_skip_ipv4_alloc = KAL_FALSE;
#endif /* __REL8__ */ 

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_CREATE_SIB, tcm_ptr_g->sib_tab[sib_id].context_id);

    return( ret_val );
}


kal_bool tcm_alloc_nsapi( kal_uint8 context_id )
{
    kal_uint8   nsapi ;
    kal_uint8   count ;
    kal_uint8   cindex ; 

    if ( !((context_id >= 1) && (context_id <= TCM_TOT_CONTEXT)) )
    {
        DEBUG_ASSERT(0) ;
        return KAL_FALSE ;
    }


    for (count = 0; count <= (MAX_THEORETICAL_VALID_NSAPI - MIN_VALID_NSAPI) ; count++)
    {
        #ifdef __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__
        if (tcm_ptr_g->tcm_tst_specified_nsapi != 0)
        {
            nsapi = tcm_ptr_g->tcm_tst_specified_nsapi + count ;

            if (nsapi > MAX_THEORETICAL_VALID_NSAPI)
            {
                nsapi -= (MAX_THEORETICAL_VALID_NSAPI - MIN_VALID_NSAPI + 1) ;
            }
        }
        else 
        #endif /* __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__ */
        {
            nsapi = TCM_MIN_NSAPI + count ;
        }

        /* Some nsapi is selected. Now see if it has been used or not. */ 
        for (cindex = 0 ; cindex < TCM_TOT_CONTEXT; cindex++) 
        {
            SESSION_INFO_PTR  sib_check_ptr = tcm_get_sib_ptr(cindex) ;

            if (sib_check_ptr->nsapi == nsapi)
            {
                /* The selected nsapi has been used, break loop to choose another one. */
                break ;
            }
        }

        if (cindex == TCM_TOT_CONTEXT)
        {
            SESSION_INFO_PTR  sib_ptr = tcm_get_sib_ptr(tcm_get_sib_id(GET_FROM_CONTEXTID, context_id)) ;

            sib_ptr->nsapi = nsapi ;
            return KAL_TRUE ;
        }
    }

    /* All nsapis have been used by SIBs. */
    kal_brief_trace(TRACE_WARNING, TCM_TCM_ALLOC_NSAPI_FAIL);
    return KAL_FALSE ;
}


void tcm_free_nsapi( SESSION_INFO_PTR sib_ptr )
{
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif

    tcm_free_dl_flc_pool_id(sib_ptr->nsapi);

    sib_ptr->nsapi = TCM_INVALID_NSAPI;
    return ;
}


kal_uint8 tcm_nsapi_check( kal_uint8 nsapi )
{
    return(nsapi >= TCM_MIN_NSAPI && nsapi <= TCM_MAX_NSAPI);
}


/** Return the context_id: 1 ~ TCM_TOT_CONTEXT. */
kal_uint8 tcm_nsapi_to_cid( kal_uint8 nsapi )
{	
    kal_uint8   cindex ;
    
	if(tcm_nsapi_check(nsapi))
	{
        for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
        {
            SESSION_INFO_PTR sib_ptr = NULL ;

            sib_ptr = tcm_get_sib_ptr(cindex) ;
            
            if (sib_ptr->nsapi == nsapi)
            {
                return sib_ptr->context_id ;
            }
        }
	}
	
	return TCM_INVALID_CONTEXT_ID;
}


kal_uint8 tcm_cntxt_id_check( kal_uint8 cntxt_id )
{
    return(cntxt_id >= TCM_MIN_CONTEXT_ID &&
           cntxt_id <= TCM_MAX_CONTEXT_ID);
}


kal_bool mmi_is_internal( SESSION_INFO_PTR si_db_ptr )
{
	if ( si_db_ptr->startup_type == TCM_INTERNAL_STARTUP )
	{
		if ( (si_db_ptr->context_id > 0) && (si_db_ptr->context_id <= TCM_TOT_EXT_CONTEXT) )
			return KAL_FALSE;
		else
			return KAL_TRUE;
	}
	else
	{
		return KAL_FALSE;
	}
}


kal_bool tcm_is_test_sim(void)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) 
        return tcm_ptr_g->ut_is_test_sim_flag;
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */

#ifndef __GEMINI__
	return (is_test_sim());
#else
	return (is_test_sim(tcm_ptr_g->sim_interface));
#endif
}


kal_bool tcm_terminate_context( kal_uint8 sib_id )
{
    kal_bool ret_val = KAL_TRUE;
    kal_uint16 i = 0;
    //kal_uint8 i;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                      MMI_FN_ENTER_TCM_TERMINATE_CONTEXT_SUBOP );

    ASSERT(sib_id < TCM_TOT_CONTEXT); // make sure the tcm_ptr_g->sib_tab[] will not be "array index out of bound"

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    /* Free both packet filter lists */
    tcm_free_list(tcm_ptr_g->sib_tab[sib_id].tft_in_use.filter_list_ptr);
    tcm_free_list(tcm_ptr_g->sib_tab[sib_id].tft_under_mod.filter_list_ptr);
    tcm_ptr_g->sib_tab[sib_id].tft_in_use.filter_list_ptr = NULL;
    tcm_ptr_g->sib_tab[sib_id].tft_under_mod.filter_list_ptr = NULL;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

    //tcm_ptr_g->sib_tab[sib_id].main_state = TCM_CONTEXT_INACTIVE_STATE;
    // tcm_change_tcm_context_main_state_value(&(tcm_ptr_g->sib_tab[sib_id]), TCM_CONTEXT_INACTIVE_STATE);// do not set fsm in func hdlr
    tcm_ptr_g->cntxt_flag[sib_id] = TCM_CNTXT_INVALID;
    tcm_ptr_g->deact_cause[sib_id] = (ps_cause_enum)0;    //erica dallas 20060505: for 2ndary PDP

    /* Add 03.06.10, Set pdp_addr_len to be NULL_PDP_ADDR_LEN so that
     * next pdp context can be activated with dynamic IP address scheme
     */
    for(i=0; i<MAX_PDP_ADDR_LEN; i++) // addr_val[MAX_PDP_ADDR_LEN]
    {
        tcm_ptr_g->sib_tab[sib_id].addr_val[i] = 0x00;
    }
    tcm_ptr_g->sib_tab[sib_id].pdp_addr_len = NULL_PDP_ADDR_LEN;
    tcm_ptr_g->sib_tab[sib_id].addr_scheme = TCM_DYNAMIC_ADDR;

#ifdef __HSDPA_SUPPORT__
   tcm_change_data_speed_state(&(tcm_ptr_g->sib_tab[sib_id]), DATA_SPEED_NONE_ACTIVATE);
   #ifdef __MODEM_EM_MODE__  /* Poying: EM_MODE. */
   tcm_send_em_context_info() ;
   #endif
#endif // ~ #ifdef __HSDPA_SUPPORT__

    tcm_config_packets_trim(&(tcm_ptr_g->sib_tab[sib_id]), 1); /* Add 03.08.05 */
    tcm_ptr_g->sib_tab[sib_id].prot_option_len = 0; /* Add 03.08.05 */

    #ifdef __UGTCM__
    tcm_ptr_g->sib_tab[sib_id].initiated_by = MS_INITIATED; //mtk00714 20070730
    tcm_ptr_g->sib_tab[sib_id].tear_down_flag = 0; //erica dallas 20060505: for 2ndary PDP
    #endif /* __UGTCM__ */
    
    /*erica 20051215  mark unused codes */
    /*
    if(NW_INITIATED == tcm_ptr_g->sib_tab[sib_id].initiated_by)
    {
       TCM_PTR(mt_context_num)--;
    }
    */

    tcm_free_nsapi(&tcm_ptr_g->sib_tab[sib_id]);

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    /* Begin : erica finland 20060628*/
    /* since the pdp is deactivated, tft is no more in use */
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

    /* Preserve user's configuration on context_type, so no reset here. */
    // tcm_ptr_g->sib_tab[sib_id].context_type = UNKNOWN_CONTEXT;
  	
    tcm_ptr_g->sib_tab[sib_id].l2p = NULL_L2P;

#if 0  /* __APP_SECONDARY_PDP_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif /* 0 */

    #ifdef __TCM_UT__
    {
        kal_uint8 p_id = 0;
        kal_uint8 qos_id = 0;
        if(tcm_ptr_g->sib_tab[sib_id].context_id > TCM_TOT_EXT_CONTEXT)
        {

            /* Poying: Align the declaration of l4c_free_pdp_context(). */
            #if (defined(__MOD_TCM__) && defined(__INT_PDP_CONTEXT_ON__))
            
            // free the context resource of L4C context (MT PDP context will occupy L4C context resource)
            #ifdef __APP_SECONDARY_PDP_SUPPORT__
            l4c_free_pdp_context(tcm_ptr_g->sib_tab[sib_id].context_id,&p_id, &qos_id);
            #else // #ifdef __APP_SECONDARY_PDP_SUPPORT__
            l4c_free_pdp_context(tcm_ptr_g->sib_tab[sib_id].context_id,&p_id);
            #endif // ~ #ifdef __APP_SECONDARY_PDP_SUPPORT__

            #endif /* (defined(__MOD_TCM__) && defined(__INT_PDP_CONTEXT_ON__)) */
        }
    }
    #endif // ~ #ifdef __TCM_UT__

    #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )
    tcm_ptr_g->sib_tab[sib_id].act_pdp_cntxt_req_ipv6_dns = TCM_ACTIVATE_PDP_NEED_REQUEST_IPV6_DNS;
    tcm_ptr_g->sib_tab[sib_id].ipv6_dns1_present = KAL_FALSE;
    tcm_ptr_g->sib_tab[sib_id].ipv6_dns2_present = KAL_FALSE;
    #endif // #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )

    return( ret_val );
}


void tcm_translate_apn( kal_uint8 *access_name, SESSION_INFO_PTR si_db_ptr )
{
   kal_uint8 index = 0, last_index = 0;

   /* Substitute '.' with 0 for use strlen() */
   for(index=0 ; index<si_db_ptr->apn_len ; index++)
   {
      if('.' == si_db_ptr->apn[index])
      {
         si_db_ptr->apn[index] = 0;

         ASSERT(last_index<100); // make sure the msg_ptr->access_name[] will not be "array index out of bound"

         access_name[last_index] = strlen((kal_char*)((si_db_ptr->apn)+last_index));
         last_index = index + 1;
      }
      else
      {

         ASSERT((index+1)<100); // make sure the msg_ptr->access_name[] will not be "array index out of bound"

         access_name[index+1] = si_db_ptr->apn[index];
      }
   }
   /* Fill first label length */
   access_name[0] = strlen((kal_char*)(si_db_ptr->apn));
   /* Fill last label length */

   ASSERT(last_index<100); // make sure the msg_ptr->access_name[] will not be "array index out of bound"

   access_name[last_index] = strlen((kal_char*)((si_db_ptr->apn)+last_index));   

   /* Substitute 0 with '.' */
   for(index=0 ; index<si_db_ptr->apn_len ; index++)
   {
      if(0 == si_db_ptr->apn[index])
      {
         si_db_ptr->apn[index] = '.';
      }
   }
}


void tcm_change_additional_para_value( SESSION_INFO_PTR si_db_ptr, kal_uint8 new_type, kal_uint32 new_value )
{
    tcm_pdp_activate_req_additional_para_type_enum old_type = si_db_ptr->additional_para_type; 
    kal_uint32 old_value = si_db_ptr->additional_para_content;

    si_db_ptr->additional_para_type = (tcm_pdp_activate_req_additional_para_type_enum)new_type;
    si_db_ptr->additional_para_content = new_value;

    if((new_type != old_type) || (new_value != old_value))
    {
        kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_ADDITIONAL_PARA_CHANGE_LOG, si_db_ptr->context_id, old_type, new_type, old_value, new_value);
    }
}


void tcm_change_tcm_context_main_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_main_state_enum new_value )
{
    #ifdef __MTK_INTERNAL__
/* under construction !*/
    #endif // ~ #ifdef __MTK_INTERNAL__

    #ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(new_value<TCM_CONTEXT_MAIN_STATE_END);
    ASSERT(si_db_ptr->main_state<TCM_CONTEXT_MAIN_STATE_END);
    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__

    if(new_value<=TCM_CONTEXT_ACTIVE_STATE)
    {
        si_db_ptr->main_state = new_value;
        #ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif // ~ #ifdef __MTK_INTERNAL__
    }

    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif // ~ #if 0

}


void tcm_change_tcm_context_sub_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_sub_state_enum new_value )
{
    #ifdef __MTK_INTERNAL__
/* under construction !*/
    #endif // ~ #ifdef __MTK_INTERNAL__
    
#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(new_value<TCM_CONTEXT_ACTIVE_SUBSTATE_END);
    ASSERT(si_db_ptr->sub_state<TCM_CONTEXT_ACTIVE_SUBSTATE_END);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
    if(new_value<=TCM_CONTEXT_ACTIVE_SUBSTATE_END)
    {
        si_db_ptr->sub_state = new_value;
        #ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif // ~ #ifdef __MTK_INTERNAL__
    }

    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif // ~ #if 0

}


void tcm_change_tcm_context_data_plane_state_value( SESSION_INFO_PTR si_db_ptr, tcm_context_data_plane_state_enum new_value, ilm_struct *ilm_ptr )
{
    tcm_context_data_plane_state_enum old_value = si_db_ptr->data_plane_state;


#ifdef __TCM_NEW_ARCH_DEBUG__
    ASSERT(new_value<TCM_DATA_PLANE_STATE_END);
    ASSERT(si_db_ptr->data_plane_state<TCM_DATA_PLANE_STATE_END);
#endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
    if(new_value<=TCM_DATA_PLANE_DECONFIGURING)
    {
        si_db_ptr->data_plane_state = new_value;

        if(new_value != old_value)
        {
            #ifdef __MTK_INTERNAL__
/* under construction !*/
            #endif // ~ #ifdef __MTK_INTERNAL__

            if(TCM_DATA_PLANE_DECONFIGURED == new_value)
            {
                tcm_change_additional_para_value(si_db_ptr, TCM_PDP_ACT_REQ_NO_EXTRA_PARAMETER, 0);

                if(KAL_TRUE == si_db_ptr->has_enter_data_plane_configured_state)
                {
                    // call history: part 2 (old call history)
                    #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
                    tcm_update_old_call_history_when_enter_data_plane_deconfigured_state(si_db_ptr, ilm_ptr);
                    #endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )

                    si_db_ptr->has_enter_data_plane_configured_state = KAL_FALSE;
                }
                
            }

            if(TCM_DATA_PLANE_CONFIGURED == new_value)
            {

                si_db_ptr->has_enter_data_plane_configured_state = KAL_TRUE;

                // call history: part 2 (old call history)
                #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
                tcm_update_old_call_history_when_enter_data_plane_configured_state(si_db_ptr);
                #endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
            }
        }


    }

    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif // ~ #if 0

}

flc2_pool_id_enum tcm_alloc_dl_flc_pool_id(kal_uint8 nsapi)
{
#if defined(__MULTIPLE_PPP_DIALUP_SUPPORT__) || defined(__MULTIPLE_NDIS_SUPPORT__)
    kal_uint8 flc_pool_id;
    flc2_pool_id_enum chosen_pool_id;
    
    for(flc_pool_id = 0; flc_pool_id < TCM_TOTAL_FLC_DL_POOL; flc_pool_id++)
    {
        if (tcm_ptr_g->nsapi_use_this_pool[flc_pool_id] == 0)
        {
            tcm_ptr_g->nsapi_use_this_pool[flc_pool_id] = nsapi;
            chosen_pool_id = flc_pool_id + FLC2_POOL_ID_NPDU_DL;

            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_ALLOCATE_DL_FLC_POOL_ID_RESULT, nsapi, chosen_pool_id, chosen_pool_id);
            return chosen_pool_id;
        }
    }

    DEBUG_ASSERT(0);
    return FLC2_POOL_ID_NPDU_DL + FLC2_MAX_NPDU_POOLS_NUM - 1;
#else
    return FLC2_POOL_ID_NPDU_DL;   //erica 20060509        
#endif
}

void tcm_free_dl_flc_pool_id(kal_uint8 nsapi)
{
    kal_uint8 flc_pool_id;
    flc2_pool_id_enum freed_pool_id;

    for(flc_pool_id = 0; flc_pool_id < TCM_TOTAL_FLC_DL_POOL; flc_pool_id++)
    {
        if (tcm_ptr_g->nsapi_use_this_pool[flc_pool_id] == nsapi)
        {
            tcm_ptr_g->nsapi_use_this_pool[flc_pool_id] = 0;
            freed_pool_id = flc_pool_id + FLC2_POOL_ID_NPDU_DL;
            
            kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_FREE_DL_FLC_POOL_ID_RESULT, nsapi, freed_pool_id, freed_pool_id);
            return;
        }
    }
    kal_brief_trace(TRACE_WARNING, TCM_WARNING_PDP_NOT_HAVE_DL_FLC_POOL, nsapi);
}

#ifdef __HSDPA_SUPPORT__
void tcm_change_data_speed_state( session_info_block_struct *si_db_ptr, data_speed_activate_enum new_value )
{
    kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_H_ICON_TCM_CHANGE_DATA_SPEED_STATE, 
                     si_db_ptr->nsapi, si_db_ptr->context_id, si_db_ptr->data_speed, new_value );
    si_db_ptr->data_speed = new_value;
}
#endif /* __HSDPA_SUPPORT__ */ 


#ifdef __MEDIATEK_SMART_QOS__
kal_bool tcm_msq_check_if_use_r6_qos(void)
{
    kal_uint8                     sim_plmn[MSQ_PLMN_ID_LEN] ;
    kal_uint8                     nw_plmn[MSQ_PLMN_ID_LEN] ;
    nvram_ef_msq_entry_struct    *tcm_entry_ptr = NULL ;
    kal_int8                      index = 0 ;
    kal_uint8                     plmn_len = MSQ_PLMN_ID_LEN-1 ;
    kal_bool                      sim_plmn_found = KAL_FALSE ;
    kal_bool                      nw_plmn_found  = KAL_FALSE ;
    kal_bool                      result = KAL_TRUE ;
    
    tcml4c_get_current_plmn_id(sim_plmn, nw_plmn) ;

    kal_brief_trace( TRACE_INFO, TCM_MSQ_CURRENT_SIM_PLMN, 
                     sim_plmn[0], sim_plmn[1], sim_plmn[2],
                     sim_plmn[3], sim_plmn[4], sim_plmn[5] ) ;

    kal_brief_trace( TRACE_INFO, TCM_MSQ_CURRENT_NW_PLMN, 
                     nw_plmn[0], nw_plmn[1], nw_plmn[2],
                     nw_plmn[3], nw_plmn[4], nw_plmn[5] ) ;

    if ((tcm_ptr_g->tcm_msq_context_ptr->is_msq_on == 0) || (query_ps_conf_test_mode() == PS_CONF_TEST_IOT))
    {
        result = KAL_FALSE ;
    }
    else 
    {
        for ( index = 0, tcm_entry_ptr = tcm_ptr_g->tcm_msq_context_ptr->msq_entry ; 
              index < MSQ_MAX_ENTRY_COUNT; 
              index++, tcm_entry_ptr++ )
        {
            if (tcm_entry_ptr->entry_id == 0)
            {
                /* Entry has never been set. Skip. */
                continue ;
            }
            else 
            { 
                plmn_len = (strlen((char *)tcm_entry_ptr->plmn_id) < strlen((char *)sim_plmn))? 
                            strlen((char *)tcm_entry_ptr->plmn_id) : strlen((char *)sim_plmn);
            
                if (( sim_plmn_found == KAL_FALSE ) &&
                    ( (tcm_entry_ptr->check_sim != 0) 
                      && (kal_mem_cmp(sim_plmn, tcm_entry_ptr->plmn_id, plmn_len) == 0) ))
                {
                    /* Find PLMN ID in current SIM matches MSQ entry. */
                    kal_brief_trace( TRACE_INFO, TCM_MSQ_FIND_SIM_PLMN_IN_ENTRY, tcm_entry_ptr->entry_id ) ;
                    sim_plmn_found = KAL_TRUE ;
                }
                if (( nw_plmn_found == KAL_FALSE ) &&
                     ( (tcm_entry_ptr->check_nw != 0) 
                       && (kal_mem_cmp(nw_plmn,  tcm_entry_ptr->plmn_id, plmn_len) == 0) ))
                {
                    /* Find PLMN ID in current NW matches MSQ entry. */
                    kal_brief_trace( TRACE_INFO, TCM_MSQ_FIND_NW_PLMN_IN_ENTRY, tcm_entry_ptr->entry_id ) ;
                    nw_plmn_found = KAL_TRUE ;
                }
                if (( sim_plmn_found == KAL_TRUE ) && ( nw_plmn_found == KAL_TRUE ))
                {
                    result = KAL_FALSE ;
                    break;
                }
            }
        }
    }

    return result ;
}

#ifdef __TCM_DEBUG_MSQ_LIST__
void tcm_msq_print_msq_list(void)
{
    nvram_ef_msq_entry_struct *msq_entry_ptr ;
    kal_uint8   index ;

    kal_brief_trace( TRACE_INFO, TCM_MSQ_PRINT_MSQ_MODE, tcm_ptr_g->tcm_msq_context_ptr->is_msq_on ) ;

    for ( index = 0, msq_entry_ptr = tcm_ptr_g->tcm_msq_context_ptr->msq_entry ;
          index < MSQ_MAX_ENTRY_COUNT ;
          index++, msq_entry_ptr++ )
    {
        // if (msq_entry_ptr->entry_id != 0)
        {
            kal_brief_trace( TRACE_INFO, TCM_MSQ_PRINT_MSQ_ENTRY, 
                             msq_entry_ptr->entry_id, 
                             msq_entry_ptr->plmn_id[0], msq_entry_ptr->plmn_id[1], msq_entry_ptr->plmn_id[2], 
                             msq_entry_ptr->plmn_id[3], msq_entry_ptr->plmn_id[4], msq_entry_ptr->plmn_id[5], 
                             msq_entry_ptr->check_nw, 
                             msq_entry_ptr->check_sim ) ;
        }
    }

    return ;
}
#endif /* __TCM_MSQ_LIST_DEBUG__ */

#endif /* __MEDIATEK_SMART_QOS__ */
