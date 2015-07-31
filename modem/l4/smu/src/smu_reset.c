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
 * smu_reset.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is to initialize the sim_context_g.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/* KAL - RTOS Abstraction Layer */

//#include "kal_release.h"
#include "kal_general_types.h"
#include "sysservice_msgid.h"

#ifndef __MTK_TARGET__

/* Task Message Communication */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h"    /* local/peer struct */
//#include "stack_ltlcom.h"

/* Timer Management  */
#include "stacklib.h"
#include "event_shed.h"       	/* Event scheduler */
#include "stack_timer.h"

/* Buffer Management */
//#include "app_buff_alloc.h"     

/* Task Management */
#include "syscomp_config.h"     
#include "task_config.h"   

#include "sat_def.h"
#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
//#include "custom_nvram_editor_data_item.h"
#include "ps2sat_struct.h"	/* Benson SATCE */
#include "smu_def.h"
#include "l4c2smu_struct.h"
#include "kal_public_api.h"

//#include "kal_non_specific_general_types.h"

extern kal_bool smu_stop_timer( void );
extern void smu_free_ctrl_buffer(void * p);

/*****************************************************************************
 * FUNCTION
 *  smu_reset
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_bool smu_reset(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#if defined(__SATCE__) && !defined(__RSAT__)
   kal_uint8   CH;
#endif
   kal_uint8 i=0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    for (i=0; i<MAX_SIM_NUM; i++)
    {
        this_smu = &smu_context_g[i];        
        smu_free_ctrl_buffer(this_smu->file_change_info_ptr);
#ifdef __SIM_ME_LOCK__    
        smu_free_ctrl_buffer(this_smu->l4csmu_set_sml_cnf_ptr);
#endif

        if (this_smu->plmn_sel_info.plmn_ptr != NULL)
        {
            smu_free_ctrl_buffer(this_smu->plmn_sel_info.plmn_ptr);
            this_smu->plmn_sel_info.plmn_ptr = NULL;
        }
        if (this_smu->uplmn_wact_info.plmn_ptr != NULL)
        {
            smu_free_ctrl_buffer(this_smu->uplmn_wact_info.plmn_ptr);
            this_smu->uplmn_wact_info.plmn_ptr = NULL;
        }
        if (this_smu->oplmn_wact_info.plmn_ptr != NULL)
        {
            smu_free_ctrl_buffer(this_smu->oplmn_wact_info.plmn_ptr);
            this_smu->oplmn_wact_info.plmn_ptr = NULL;
        }
        if (this_smu->hplmn_wact_info.plmn_ptr != NULL)
        {
            smu_free_ctrl_buffer(this_smu->hplmn_wact_info.plmn_ptr);
            this_smu->hplmn_wact_info.plmn_ptr = NULL;
        }

        kal_mem_set((kal_uint8*) this_smu, 0x00, sizeof(smu_context_struct));
        this_smu->smu_current_mod = SMU_MODULE(MOD_SMU, i);
    #ifdef __SIM_ME_LOCK__
        this_smu->cphs_lock_count=5;
    #endif
        this_smu->cipher_ind = SMU_CI_NONE;
        this_smu->is_simcard_replaced = KAL_TRUE;

    #if defined(__SATCE__) && !defined(__RSAT__)  
        for (CH=0; CH<MAX_SUPPORT_SATE_CHANNEL+1; CH++)
        {
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.dest_mod_id = SMU_MODULE(MOD_SMU, i);
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.src_mod_id = MOD_TIMER;
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.msg_id = MSG_ID_TIMER_EXPIRY;
            smu_stop_timer();
            this_smu->sate_channel[CH].soc_fd = -1;		/* SOC_ERROR */
        }
    #endif // __SATCE__
   }   

    return KAL_TRUE;
}
#endif
