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
 * smsal_reset.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for resetting SMSAL module.
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

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_timer.h"
#include "smsal_defs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_init.h"
#include "smsal_other_funcs.h"


#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

#undef  _FILE_CODE_
#define _FILE_CODE_ _SMSAL_RESET_C_

#ifdef __SMSAL_UT__
kal_bool is_smsal_clear(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool retval = KAL_TRUE;
#ifndef __SMS_STORAGE_BY_MMI__
    kal_uint16 id;
    for (id = 0; id < SMSAL_MAX_MSG_NUM; id++)
    {
        if ((((&(smsal_cntx_ptr->message_box[id]))->state) >> 2) != 0)
        {
            /* printf("state %d NOT clear!\n"); */
            retval = KAL_FALSE;
        }
    }
#endif
    return retval;
}
#endif

#ifdef __SMSAL_UT__
void smsal_reset_for_ut_reset_only()
{
#ifdef __GEMINI__
    kal_uint8 i;
    for (i = 0; i < SMSAL_MAX_SIM_NUM; i++)
#endif
    {

    #ifdef __GEMINI__
        smsal_ptr_g = &smsal_g[i];
        smsal_para_ptr_g = &smsal_g[i].sms_parameter;
        smsal_cur_mod = MOD_SMSAL + i;
    #else
        smsal_ptr_g = &smsal_g;
        smsal_para_ptr_g = &smsal_g.sms_parameter;
        smsal_cur_mod = MOD_SMSAL;
    #endif

        /*
         * --------------------------------------------------------------
         * * Initailize the Message reference for MO Short message.
         * * This parameter goes inside the TPDU header. 
         * * -------------------------------------------------------------- */
        smsal_ptr_g->msg_ref = 0;

#ifndef __SMS_STORAGE_BY_MMI__
        /* Initialize message box */
        smsal_init_msg_box();
#endif

        /* stop all running timers */
        smsal_stop_all_timers();

        /* reset timer pool */
        smsal_reset_timer();

       /*---------------------------------------------
        * Initialize SMS Storage numbers 
        *---------------------------------------------*/
        smsal_storage_num_init();

       /*---------------------------
        * Initialize SMS Parameters 
        *---------------------------*/
        smsal_parameter_init();
    }

}
#endif

kal_bool smsal_reset(void)
{
#ifdef __SMSAL_UT__
    kal_uint8 id;
#endif

#ifdef __GEMINI__
    kal_uint8 i;
    for (i = 0; i < SMSAL_MAX_SIM_NUM; i++)
#endif
    {

    #ifdef __GEMINI__
        smsal_ptr_g = &smsal_g[i];
        smsal_para_ptr_g = &smsal_g[i].sms_parameter;
        smsal_cur_mod = MOD_SMSAL + i;
    #else
        smsal_ptr_g = &smsal_g;
        smsal_para_ptr_g = &smsal_g.sms_parameter;
        smsal_cur_mod = MOD_SMSAL;
    #endif

#ifdef __SMSAL_UT__
        is_smsal_clear();

        smsal_ptr_g->is_usim = KAL_FALSE;
        smsal_ptr_g->is_sim_support = 0; //SERVICE_NOT_SUPPORT;

        for (id = 0; id < SMSAL_MAX_PENDING_ACT; id++)
        {
            smsal_free_pending_act(id);
        }

        smsal_ptr_g->flags = 0;
        smsal_ptr_g->flags_ext = 0;
        /* Start normal initialization
         * * clear the duplicated init req check
         */
        CLR_FLAGS(SMSAL_NORMAL_INIT);
#if defined(__CANCEL_LOCK_POWERON__)
        CLR_FLAGS(SMSAL_ME_ONLY_INIT);
#endif
        smsal_pending_struct_init();
#endif

        /*
         * --------------------------------------------------------------
         * * Initailize the Message reference for MO Short message.
         * * This parameter goes inside the TPDU header. 
         * * -------------------------------------------------------------- */
        smsal_ptr_g->msg_ref = 0;

#ifndef __SMS_STORAGE_BY_MMI__
        /* Initialize message box */
        smsal_init_msg_box();
#endif

        /* stop all running timers */
        smsal_stop_all_timers();

        /* reset timer pool */
        smsal_reset_timer();

       /*---------------------------------------------
        * Initialize SMS Storage numbers 
        *---------------------------------------------*/
        smsal_storage_num_init();

       /*---------------------------
        * Initialize SMS Parameters 
        *---------------------------*/
        smsal_parameter_init();
    }

    return KAL_TRUE;

}                                       /* end of smsal_module_reset function */


#ifdef __GEMINI__
kal_bool smsal_reset_by_cur_mod(kal_uint8 simInterface)
{
    if ((simInterface != 0) && (simInterface != 1))
        SMSAL_ASSERT(0);

    smsal_ptr_g = &smsal_g[simInterface];
    smsal_para_ptr_g = &smsal_g[simInterface].sms_parameter;
    smsal_cur_mod = MOD_SMSAL + simInterface;

    /*
     * --------------------------------------------------------------
     * * Initailize the Message reference for MO Short message.
     * * This parameter goes inside the TPDU header. 
     * * -------------------------------------------------------------- */
    smsal_ptr_g->msg_ref = 0;

#ifndef __SMS_STORAGE_BY_MMI__
    /* Initialize message box */
    smsal_init_msg_box();
#endif

    /* stop all running timers */
    smsal_stop_all_timers();

    /* reset timer pool */
    smsal_reset_timer();

   /*---------------------------------------------
    * Initialize SMS Storage numbers 
    *---------------------------------------------*/
    smsal_storage_num_init();

   /*---------------------------
    * Initialize SMS Parameters 
    *---------------------------*/
    smsal_parameter_init();

    return KAL_TRUE;

}                                       /* end of smsal_reset_by_cur_mod function */
#endif
