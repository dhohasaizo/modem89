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
 * TCM_RESET.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes reset function of TCM.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#include "tcm_reset.h"

/* kals. */
#include "kal_general_types.h"

/* enums. */
#include "l4c_common_enum.h"
#include "l3_inc_enums.h"

/* structs. */
#include "tcm_context.h"

/* debugs. */
#include "tcm_trc.h"

#ifdef __GEMINI__
extern tcm_context_struct tcm_context[];
#endif /* __GEMINI__ */

#ifdef __UGTCM__
#include "tcm_ugtcm_timer.h"
#endif /* __UGTCM__ */

/*****************************************************************************
* FUNCTION
*   tcm_reset
* DESCRIPTION
*   This function resets the global variable of the TCM module.
*
* PARAMETERS
*   local_para_ptr   IN     Pointer to local parameter 
*   peer_buff_ptr    IN     Pointer to peer buffer 
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_reset()
{
#ifndef __MTK_TARGET__ // TCM reduce code size
    kal_uint8 indx;
    #ifdef __GEMINI__    
    kal_uint8 i;
    #endif
#endif // ~ #ifndef __MTK_TARGET__ TCM reduce code size

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM,
                      MMI_FN_ENTER_TCM_MODULE_RESET_SUBOP );

   #ifndef __MTK_TARGET__ // TCM reduce code size

   #ifdef __GEMINI__    
   for (i=0; i<MOD_TCM_TOTAL_SIM; i++)
   #endif
   {	 

        #ifdef __GEMINI__    
        tcm_ptr_g = &tcm_context[i];
        #endif

        #ifdef __UGTCM__
        tcm_reset_timer();/* Reset all the timers used in the TCM module. */
        #endif /* __UGTCM__ */

        #if 0 // TCM reduce code size
/* under construction !*/
        #endif // ~ #if 0 TCM reduce code size

        /*
        kal_mem_set((kal_uint8 *)tcm_ptr_g,
                       (kal_uint32)0,
                       (kal_uint32)sizeof(tcm_context_struct)); // Add 03.01.06
        */

        #ifndef __MTK_TARGET__
        #if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
        tcm_ptr_g->statistic_is_writing = KAL_FALSE;
        tcm_ptr_g->statistic_needs_update = KAL_FALSE;
        TCM_PTR(total_tx_data) = 0;
        TCM_PTR(total_rx_data) = 0;
        TCM_PTR(last_tx_data) = 0;
        TCM_PTR(last_rx_data) = 0;
        #endif // ~ #if ( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) )
        #endif // ~ #ifndef __MTK_TARGET__

        for (indx = 0; indx < TCM_TOT_CONTEXT; indx++)
        {
            tcm_ptr_g->deact_cause[indx] = UNSPECIFIED;
            tcm_ptr_g->cntxt_flag[indx] = TCM_CNTXT_INVALID;

            tcm_ptr_g->sib_tab[indx].src_id = INVALID_SRC;

            tcm_create_sib(indx);        
        }

        #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        tcm_ptr_g->ut_is_test_sim_flag = KAL_FALSE;
        #endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */

        #ifdef TCM_WAP_QOS_SETTING                
        tcm_ptr_g->set_wap_qos = KAL_FALSE;
        #endif
        //tcm_ptr_g->wap_use_compression = 0;

        #ifdef __MEDIATEK_SMART_QOS__
        tcm_ptr_g->tcm_msq_context_ptr = NULL ;
        #endif /* */
    }

   #endif // ~ #ifndef __MTK_TARGET__ TCM reduce code size
    
   return( KAL_TRUE );
}


