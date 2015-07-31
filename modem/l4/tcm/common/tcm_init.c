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
 * TCM_INIT.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes init functions of TCM.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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


#include "tcm_init.h"

/* kals. */
#include "kal_public_api.h"

/* enums. */
#include "l3_inc_enums.h"
#include "l4c_common_enum.h"
#include "ppp_l4_enums.h"

/* structs. */
#include "tcm_context.h"


#ifdef __GEMINI__
extern tcm_context_struct tcm_context[];
#endif /* __GEMINI__ */ 

#ifdef __UGTCM__
#include "tcm_ugtcm_timer.h"
#endif /* __UGTCM__ */


kal_bool tcm_init( void )
{
     kal_uint8 indx;
     kal_bool  ret_val = KAL_TRUE;

#ifdef __GEMINI__    
     kal_uint8 i;
     for (i=0; i<MOD_TCM_TOTAL_SIM; i++)
#endif
     {	 

#ifdef __GEMINI__    
     tcm_ptr_g = &tcm_context[i];
#endif
	 
    /* Initialize the memory area of the TCM context to zero's. This
     * in turn will initialize the memory area for the tcm cache field
     * to zero's
     */
     
    if ( tcm_ptr_g != NULL )
    {
      kal_mem_set( (kal_uint8 *)tcm_ptr_g,
                   (kal_uint32)0,
                   (kal_uint32)sizeof(tcm_context_struct) );

    #ifdef __GEMINI__
     tcm_ptr_g->sim_interface = i;
    #endif

     #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
      tcm_ptr_g->statistic_is_writing = KAL_FALSE;
      tcm_ptr_g->statistic_needs_update = KAL_FALSE;
     #endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )

     
      for (indx = 0; indx < TCM_TOT_CONTEXT; indx++)
      {
        tcm_ptr_g->deact_cause[indx] = UNSPECIFIED;

        tcm_ptr_g->cntxt_flag[indx] = TCM_CNTXT_INVALID;

        tcm_ptr_g->sib_tab[indx].src_id = INVALID_SRC;

        tcm_ptr_g->sib_tab[indx].l2p = NULL_L2P;
      }
        
      for (indx = TCM_TOT_EXT_CONTEXT; indx < TCM_TOT_CONTEXT; indx++)
      {        
        tcm_create_sib(indx);  
      }

      #ifdef __UGTCM__
      tcm_init_timer();
      #endif /* __UGTCM__ */  

        #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE;
        #endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */
       
    #ifdef TCM_WAP_QOS_SETTING                
        tcm_ptr_g->set_wap_qos = KAL_FALSE;
    #endif

    #ifdef __ACL_SUPPORT__
        tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
        tcm_ptr_g->acl_cntxt.efacl_file_size = 0;
        tcm_ptr_g->acl_cntxt.read_start_index = 0;
        tcm_ptr_g->acl_cntxt.max_read_entries = 0;
        tcm_ptr_g->acl_cntxt.total_apn_in_efacl = 0;
        tcm_ptr_g->acl_cntxt.apn_list = NULL;
        tcm_ptr_g->acl_cntxt.apn_list_len = 0;
        tcm_ptr_g->acl_cntxt.max_apn_list_len = TCM_MAX_ACL_FILE_SIZE_SUPPORT;
        tcm_ptr_g->acl_cntxt.pending_activating_sib = 0;
        tcm_ptr_g->acl_cntxt.is_mmi_in_acl_menu = KAL_FALSE;
    #endif /* __ACL_SUPPORT__ */

        #ifdef __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__
        tcm_ptr_g->tcm_tst_specified_nsapi = 0 ;
        #endif /* __TCM_TST_INJECT_USE_SPECIFIED_NSAPI__ */

        #ifdef __MEDIATEK_SMART_QOS__
        tcm_ptr_g->tcm_msq_context_ptr = NULL ;
        #endif /* __MEDIATEK_SMART_QOS__ */
    }
    else
    {
      ret_val = KAL_FALSE;
    }
   }
    return( ret_val );
}
