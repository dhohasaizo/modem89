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
 * smsal_timer.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to timer.
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

#ifndef __SMSAL_XXX_C
#define __SMSAL_XXX_C
#endif

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"

/* Timer Management  */
#include "stacklib.h"

/* SMSAL <--> L4C */
#include "l4c2smsal_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_timer.h"
#include "smsal_context.h"
#include "smsal_transport_proc.h"
#include "smsal_cb.h"

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"

#undef  _FILE_CODE_
#define _FILE_CODE_ _SMSAL_TIMER_C_

void smsal_init_timer(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_timer_struct *smsal_timer_ptr=(&(smsal_ptr_g->smsal_timer));
    kal_uint8 id;

    /* Create an Event Scheduler */
    smsal_timer_ptr->evt_scheduler = evshed_create("SMSAL_BASE_TIMER", smsal_cur_mod, 0, 0);
    
    for (id = 0; id < SMSAL_MAX_TIMER_ITEM; id++)
    {
        smsal_cntx_ptr->timer_pool[id].is_used = KAL_FALSE;
    }

}                                       /* end of smsal_init_timer */

smsal_timer_info_struct *smsal_get_free_timer(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_TIMER_ITEM; id++)
    {
        if (smsal_cntx_ptr->timer_pool[id].is_used == KAL_FALSE)
            return (&smsal_cntx_ptr->timer_pool[id]);
    }
    /* LOG ERROR */
    return NULL;
}

smsal_timer_info_struct *smsal_get_timer_ptr(kal_uint8 timer_id, kal_uint8 invoke_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_timer_info_struct *timer_ptr;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_TIMER_ITEM; id++)
    {
        timer_ptr = &smsal_cntx_ptr->timer_pool[id];

        if ((timer_ptr->is_used == KAL_TRUE) &&
            (timer_ptr->timer_id == timer_id) && (timer_ptr->invoke_id == invoke_id))
        {
            return timer_ptr;
        }
    }

    /* LOG ERROR */
    return NULL;
}                                       /* end of smsal_get_timer_ptr */

void smsal_start_timer(kal_uint8 timer_id, kal_uint8 invoke_id, kal_uint32 time_out)
{
    smsal_timer_struct *smsal_timer_ptr=(&(smsal_ptr_g->smsal_timer));
    smsal_timer_info_struct *timer_ptr;
    kal_timer_func_ptr timer_hdlr;

    const kal_timer_func_ptr handler_func_ptr[] = 
    {
        NULL, /* SMSAL_BASE_TIMER */
        smsal_cnma_timeout              /* timeout hdlr for +CNMA */
    #if defined(__CB__)
            , smsal_cb_timeout
    #endif
    };

    kal_brief_trace(TRACE_INFO, SMSAL_START_TIMER_FUNC, timer_id, invoke_id, time_out);

    timer_hdlr = handler_func_ptr[timer_id];

    timer_ptr = smsal_get_free_timer();

    if( timer_ptr == NULL )
    {
        SMSAL_ASSERT(0);
        return;
    }

    timer_ptr->invoke_id = invoke_id;
    timer_ptr->is_used = KAL_TRUE;
    timer_ptr->timer_id = timer_id;
    timer_ptr->event_id =
        evshed_set_event(smsal_timer_ptr->evt_scheduler,
                         (kal_timer_func_ptr) timer_hdlr,
                         (void *)timer_ptr,
                         time_out);

}                                       /* end of smsal_start_timer */

void smsal_stop_timer(kal_uint8 timer_id, kal_uint8 invoke_id)
{
    smsal_timer_struct *smsal_timer_ptr=(&(smsal_ptr_g->smsal_timer));
    smsal_timer_info_struct *timer_ptr;

    /* kal_trace(TRACE_FUNC, SMS_STOP_TIMER_FUNC, timer_id, invoke_id); */

    timer_ptr = smsal_get_timer_ptr(timer_id, invoke_id);

    /* ASSERT(timer_ptr != NULL); */
    if (timer_ptr != NULL && timer_ptr->is_used == KAL_TRUE)
    {
        evshed_cancel_event(smsal_timer_ptr->evt_scheduler, &timer_ptr->event_id);

        timer_ptr->is_used = KAL_FALSE;
        kal_brief_trace(TRACE_INFO, SMSAL_STOP_TIMER_FUNC, timer_id, invoke_id);
    }

}                                       /* end of smsal_stop_timer */

void smsal_stop_all_timers(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_TIMER_ITEM; id++)
    {
        if (smsal_cntx_ptr->timer_pool[id].is_used == KAL_TRUE)
        {
            smsal_stop_timer(smsal_cntx_ptr->timer_pool[id].timer_id,
                             smsal_cntx_ptr->timer_pool[id].invoke_id);
            smsal_cntx_ptr->timer_pool[id].is_used = KAL_FALSE;
        }
    }
}                                       /* end of smsal_stop_all_timers */

void smsal_release_timer(void)
{
    smsal_stop_all_timers();
}

void smsal_reset_timer(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    for (id = 0; id < SMSAL_MAX_TIMER_ITEM; id++)
    {
        smsal_cntx_ptr->timer_pool[id].is_used = KAL_FALSE;
        smsal_cntx_ptr->timer_pool[id].invoke_id = 0;
        smsal_cntx_ptr->timer_pool[id].timer_id = 0;

    }

}                                       /* end of smsal_reset_timer */

void smsal_timer_expiry(ilm_struct *ilm_ptr)
{
    smsal_timer_struct *smsal_timer_ptr=(&(smsal_ptr_g->smsal_timer));
    evshed_timer_handler(smsal_timer_ptr->evt_scheduler);
}                                       /* end of smsal_timer_expiry */

void smsal_cnma_timeout(void *msg_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 index;
    smsal_timer_info_struct *timer_ptr;

    if (msg_ptr == NULL)
    {
        SMSAL_ASSERT(KAL_FALSE);
        return;
    }

    timer_ptr = (smsal_timer_info_struct *) msg_ptr;

    if (timer_ptr->is_used == KAL_FALSE)
        return;

    timer_ptr->event_id = NULL;
    timer_ptr->is_used = KAL_FALSE;

    index = timer_ptr->invoke_id;

    if (smsal_cntx_ptr->cnmi[index].is_used == KAL_TRUE)
    {
        if (smsal_cntx_ptr->cnmi[index].sent_report == KAL_FALSE)
        {
            /* Sent Deliver Report (RP-ERROR) */
            smsal_deliver_nack_post(smsal_cntx_ptr->cnmi[index].smi,
                                    UNSPECIFIED_TP_FCS, 0, 0, 0, 0, NULL);
        }
    }
    else
    {
        /* production release!! */
        /* ingor abnormal cnmi timer timeout. */
        SMSAL_ASSERT(KAL_FALSE);
    }

    smsal_cntx_ptr->cnmi[index].is_used = KAL_FALSE;

    /* MAUI_02573563 [SMSAL] For Android phone, CNMA timeout not to modify cnmi setting */
#ifndef __ANDROID_RIL_SUPPORT__
    /* Disable TE Routing, ie, set <mt> and <ds> to zero */
    smsal_cntx_ptr->sms_parameter.rmi.nmi_para.mt = 0;
    smsal_cntx_ptr->sms_parameter.rmi.nmi_para.ds = 0;
#endif
}                                       /* end of smsal_cnma_timeout */

