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
 * TCM_UGTCM_CHECKS.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes some check functions in TCM.
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
 *============================================================================
 ****************************************************************************/

#include "tcm_ugtcm_check.h"
#include "tcm_trc.h"


#ifdef __PS_DIALUP__
kal_uint8 tcm_check_mmi_ext_pdp_activate_ind
                    ( mmi_ext_pdp_activate_ind_struct *msg_ptr )
{
        kal_uint8                sib_id = 0;
        SESSION_INFO_PTR         sib_ptr;
        
        /* Get the SIB pointer for this context  */  
        if(msg_ptr->context_id<1 || msg_ptr->context_id > TCM_TOT_EXT_CONTEXT)
            return KAL_FALSE;
        sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, msg_ptr->context_id);  
        sib_ptr = tcm_get_sib_ptr ( sib_id );

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__        
        if (sib_ptr->context_type == PRIMARY_CONTEXT)
        {
            //tft must not exist
            if (sib_ptr->tft_under_mod.filter_list_ptr != NULL)
            {
		  kal_brief_trace(TRACE_WARNING, TCM_PRIMARY_WITH_TFT);
                return  KAL_FALSE;
            }

        }
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__  

    /* TBD: To augment the checks */
    return( tcm_pdp_addr_ltcheck
            ( (pdp_addr_len_enum) msg_ptr->pdp_addr_len,
              (pdp_addr_type_enum) msg_ptr->pdp_type ) &&
            ( msg_ptr->l2p_type >= NULL_L2P &&
              msg_ptr->l2p_type <= MANUFACTURER_PROTOCOL ) );

    /* End of Modification, 2005.03.19. Reviewed by: Joseph */	
}
#endif /*__PS_DIALUP__*/


kal_bool tcm_check_smreg_pdp_activate_cnf
                        ( smreg_pdp_activate_cnf_struct *msg_ptr )
{
#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
    if ( TCM_PTR(sib_tab)[tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi)].pdp_addr_type
         == PPP_ADDR_TYPE )
    {        
      /* If the addressing scheme is PPP Type PDP context then 
        * pdp_addr_len should be 0 (PPP_ADDR_LEN) 
        * pdp_addr_type should be 1 (PPP_ADDR_TYPE)
       */
      return( (msg_ptr->pdp_addr_len == PPP_ADDR_LEN) &&
              tcm_pdp_addr_ltcheck( msg_ptr->pdp_addr_len,
                                    msg_ptr->pdp_addr_type ) &&
              tcm_qos_check( &msg_ptr->qos_negotiated ) &&
            (msg_ptr->config_option_len <= MMI_MAX_NUM_CONFIG_OPTION_PACKETS) );
    }
#endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__

    return( 
            tcm_pdp_addr_ltcheck( (pdp_addr_len_enum)msg_ptr->pdp_addr_len,
                                  (pdp_addr_type_enum)msg_ptr->pdp_addr_type ) &&
            tcm_qos_check( &msg_ptr->qos_negotiated ) &&
            (msg_ptr->config_option_len <= MMI_MAX_NUM_CONFIG_OPTION_PACKETS) )? KAL_TRUE: KAL_FALSE;
}


kal_uint8 tcm_pdp_addr_ltcheck( pdp_addr_len_enum  pl,
                                pdp_addr_type_enum pt )
{
    if (pl == NULL_PDP_ADDR_LEN && pt != NULL_PDP_ADDR_TYPE)
    {
        /* the pdp_addr_len could be NULL incase of dynamic address,
         * so in this case the check should also pass. to achive this
         * pl is assigned to the TCM_PDP_LEN which is a configurable
         * macro.
         */
        // pl = TCM_PDP_LEN;
        switch (pt)
        {
            /* Poying: Accept only if the pdp_type is recognizable. */
            case IPV4_ADDR_TYPE: 
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
                return KAL_TRUE ;
            }
            default: 
            {
                return KAL_FALSE ;
            }
        }
    }
    
#if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
    kal_brief_trace(TRACE_INFO, TCM_INFO_PDP_LEN_PDP_TYPE, pl,pt);// carlson temp
#endif /* (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__)) */

    if ( (pl == IPV4_ADDR_LEN && pt == IPV4_ADDR_TYPE)
          #if (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__))
          || (pl == PPP_ADDR_LEN && pt == PPP_ADDR_TYPE)
          #endif /* (defined(__PPP_TYPE_PDP_DIALUP_SUPPORT__) || defined(__TCM_UT__)) */
          #ifdef __IPV6__
          || (pl == IPV6_ADDR_LEN && pt == IPV6_ADDR_TYPE)
          #endif /* __IPV6__ */
          #ifdef __IPV4V6__
          || (pl == IPV4V6_ADDR_LEN && pt == IPV4V6_ADDR_TYPE)
          #endif /* __IPV4V6__ */
        )
    {
        return KAL_TRUE ; 
    }
    else
    {
        return KAL_FALSE ;
    }
}


kal_uint8 tcm_qos_check( qos_struct *q_ptr )
{
	return KAL_TRUE;
}


kal_uint8 tcm_check_smreg_pdp_activate_ind
                        ( smreg_pdp_activate_ind_struct *msg_ptr )
{
    return( tcm_pdp_addr_ltcheck
                ( (pdp_addr_len_enum) msg_ptr->pdp_addr_len,
                  (pdp_addr_type_enum) msg_ptr->pdp_addr_type ) &&
           (msg_ptr->apn_len <= MAX_APN_LEN) );
}

kal_uint8 tcm_check_smreg_pdp_activate_rej
                        ( smreg_pdp_activate_rej_struct *msg_ptr )
{
    return (msg_ptr->config_option_len <= MMI_MAX_NUM_CONFIG_OPTION_PACKETS);
}


#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
kal_uint8 tcm_check_smreg_pdp_activate_sec_cnf
                        ( smreg_pdp_activate_sec_cnf_struct *msg_ptr )
{
    return( tcm_qos_check(&msg_ptr->qos_negotiated) );
}

kal_uint8 tcm_check_smreg_pdp_activate_sec_rej
                        ( smreg_pdp_activate_sec_rej_struct *msg_ptr )
{
    return KAL_TRUE;
}
#endif /* __TURN_ON_GENERAL_SECONDARY_PDP__ */ 


kal_uint8 tcm_check_tcm_pdp_modify_req
                        ( tcm_pdp_modify_req_struct *msg_ptr )
{
    kal_uint8 sib_id = msg_ptr->context_id - TCM_MIN_CONTEXT_ID;

    /* incorrect mod_type specified in the TCM_PDP_MODIFY_REQ message */
    if(!(TCM_PTR(sib_tab)[sib_id].mod_type >= MIN_QOS_MOD &&
                TCM_PTR(sib_tab)[sib_id].mod_type <= TFT_REQ_QOS_MOD))
    {
       return 0;
    }

	/* check TFT */
    if(TCM_PTR(sib_tab)[sib_id].mod_type == TFT_MOD ||
       //TCM_PTR(sib_tab)[sib_id].mod_type == TFT_MIN_QOS_MOD ||
       TCM_PTR(sib_tab)[sib_id].mod_type == TFT_REQ_QOS_MOD)
    {

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__

      if(TCM_PTR(sib_tab)[sib_id].tft_opcode == DELETE_EXISTING_TFT)
      {
        /* for del existing TFT the tft_under_mod field of the SIB should be null */
        if(!(TCM_PTR(sib_tab)[sib_id].tft_under_mod.filter_list_ptr == NULL))
        {
           return 0;
        }        
      }
      else if (TCM_PTR(sib_tab)[sib_id].tft_opcode == CREATE_NEW_TFT)
      {
        /* to create a new TFT the tft_in_use field of the SIB should be null */
        if(!(TCM_PTR(sib_tab)[sib_id].tft_in_use.filter_list_ptr == NULL))
        {
           return 0;
        }
        /* for cases other than DELETE_EXISTING_TFT TFT the tft_under_mod field of the SIB should not be null */
        if(!( TCM_PTR(sib_tab)[sib_id].tft_under_mod.filter_list_ptr !=  NULL))        
        {
           return 0;
        }
      }
      else
      {
        /* for cases other than DELETE_EXISTING_TFT TFT the tft_under_mod field of the SIB should not be null */
        if(!( TCM_PTR(sib_tab)[sib_id].tft_under_mod.filter_list_ptr != NULL))        
        {
          return 0;
        }
      }
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
      return( 0 );
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    }

    return( 1 );
}


kal_uint8 tcm_check_smreg_pdp_modify_ind
                        ( smreg_pdp_modify_ind_struct *msg_ptr )
{
    kal_uint8   sib_id ;
    SESSION_INFO_PTR    si_db_ptr = NULL;

    sib_id = tcm_get_sib_id(GET_FROM_NSAPI, msg_ptr->nsapi);    
    si_db_ptr = tcm_get_sib_ptr( sib_id );

    /* Poying: For pdp_addr part, compare the assigned pdp_addr_len with the current pdp_addr_type. */
    return( tcm_qos_check(&msg_ptr->qos_negotiated) &&
            (msg_ptr->mod_type <= PDP_ADDR_NEG_QOS_MOD &&
             msg_ptr->mod_type >= PDP_ADDR_MOD) &&
            tcm_pdp_addr_ltcheck
                ((pdp_addr_len_enum) msg_ptr->pdp_addr_len,
                  (pdp_addr_type_enum) si_db_ptr->pdp_addr_type) );
}


kal_uint8 tcm_check_smreg_pdp_modify_cnf
                        ( smreg_pdp_modify_cnf_struct *msg_ptr )
{
    return( tcm_qos_check(&msg_ptr->qos_mod_neg) &&
            (msg_ptr->mod_type >= MIN_QOS_MOD &&
             msg_ptr->mod_type <= TFT_REQ_QOS_MOD) );
}


kal_uint8 tcm_check_smreg_pdp_modify_rej
                        ( smreg_pdp_modify_rej_struct *msg_ptr )
{
    return KAL_TRUE;
}


kal_uint8 tcm_check_smreg_pdp_deactivate_ind
                        ( smreg_pdp_deactivate_ind_struct *msg_ptr )
{
    return( (msg_ptr->tear_ind == NO_TEARDOWN ||
             msg_ptr->tear_ind == TEARDOWN_ALL) );
}


kal_uint8 tcm_check_smreg_pdp_deactivate_cnf
                        ( smreg_pdp_deactivate_cnf_struct *msg_ptr )
{
    return KAL_TRUE;
}


kal_uint8 tcm_check_mmi_link_free_ind
                        ( mmi_link_free_ind_struct *msg_ptr )
{
    return( msg_ptr->cause == NORMAL_LINK_TERMINATION ||
            msg_ptr->cause == ABNORMAL_LINK_TERMINATION );
}

