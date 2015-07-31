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
 * TCM_TIMER.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file handles TCM timers.
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#include "tcm_ugtcm_timer.h"

/* kals. */
#include "kal_public_api.h"
#include "kal_public_defs.h"

/* structs. */
#include "tcm_context.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "tcm_send_msg.h"
#include "tcm_ugtcm_fsm.h"

void tcm_init_timer(void)
{
    kal_uint8 indx;

    /* Poying: Use new EV_SH api. */   
    tcm_ptr_g->tcm_event_scheduler_ptr = evshed_create("TCM_TIMER", (module_type)TCM_MODULE_ID, 0, 255) ;
   
    /* Initialize the context_id for each t3333 timer. */ 
    for(indx = 0; indx < TCM_TOT_CONTEXT; indx++)
    {
        tcm_ptr_g->t3333timer[indx].context_id = 0xff ;
        tcm_ptr_g->t3333timer[indx].event_id = NULL ;
    }

    return;
}

void tcm_timer_expiry(ilm_struct *ilm_rcv)
{
    /* Poying: Use new EV_SH api. */
	// if (stack_is_time_out_valid(&(base_timer)))
	{
		evshed_timer_handler( tcm_ptr_g->tcm_event_scheduler_ptr ) ;    // tcm_timer_expiry_hdlr
	}
	// stack_process_time_out(&(base_timer));

    return ;
}


void tcm_stop_timer( kal_uint8 context_id )
{
    kal_uint8 index;
    tcm_event_info_struct *event_ptr ;

    kal_trace(TRACE_FUNC, FUNC_TCM_STOP_TIMER);

    index = tcm_get_sib_id( GET_FROM_CONTEXTID, context_id );

    ASSERT(index < TCM_TOT_CONTEXT);

    event_ptr = &(tcm_ptr_g->t3333timer[index]) ;

    event_ptr->context_id = 0xff ;

    if (event_ptr->event_id != NULL)
    {
		kal_brief_trace(TRACE_INFO, TCM_STOP_EVENT_TIMER, context_id) ;
		evshed_cancel_event(tcm_ptr_g->tcm_event_scheduler_ptr, &(event_ptr->event_id)) ;
    }

    return;
}


void tcm_start_timer( kal_uint8 context_id )
{ 
    kal_uint8  index;
    tcm_event_info_struct *event_ptr ;
    
    kal_trace(TRACE_FUNC, FUNC_TCM_START_TIMER);    
    index = tcm_get_sib_id( GET_FROM_CONTEXTID, context_id );

    ASSERT(index < TCM_TOT_CONTEXT);

    event_ptr = &(tcm_ptr_g->t3333timer[index]) ;

    kal_brief_trace(TRACE_INFO, TCM_START_EVENT_TIMER, context_id) ;
    
    event_ptr->context_id = context_id ;
    event_ptr->event_id = evshed_set_event( tcm_ptr_g->tcm_event_scheduler_ptr, 
                                            tcm_timer_expiry_hdlr, 
                                            event_ptr,
                                            TCM_T3333_TIMEOUT_MILLI_SECS ) ;
                                            
    return;
}


void tcm_reset_timer(void)
{ 
    kal_uint8  indx;
    kal_trace(TRACE_FUNC, FUNC_TCM_RESET_TIMER);

    /* Initialize the context_id for each t3333 timer. */ 
    for(indx = 0; indx < TCM_TOT_CONTEXT; indx++)
    {
        tcm_ptr_g->t3333timer[indx].context_id = 0xff ;
        tcm_ptr_g->t3333timer[indx].event_id = NULL ;
    }

    return;
}

