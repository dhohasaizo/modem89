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
 * SMU_INIT.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file declares the smu context and initialize it.
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
 
/* KAL - RTOS Abstraction Layer */
//#include "kal_release.h"
#include "sysservice_msgid.h"

/* Task Message Communication */
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h"    /* local/peer struct */
//#include "stack_ltlcom.h"

/* Timer Management  */
//#include "stacklib.h"
//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"

/* Buffer Management */
//#include "app_buff_alloc.h"     

/* Task Management */
//#include "syscomp_config.h"     
//#include "task_config.h"   


//#include "sat_def.h"
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
//#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
//#include "ps2sat_struct.h"	/* Benson SATCE */
#include "smu_def.h"
//#include "l4c2smu_struct.h"
//#include "cbm_api.h"

//#include "kal_non_specific_general_types.h"   
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"

#include "kal_public_api.h"   
#include "kal_general_types.h"

smu_context_struct smu_context_g[MAX_SIM_NUM];
smu_context_struct *this_smu = &smu_context_g[0];

/*****************************************************************************
* FUNCTION
*  smu_init
* DESCRIPTION
*  This function is to initialize the sim context.
*
* PARAMETERS
*  none 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smu_init( void )
{
#if defined(__SATCE__) && !defined(__RSAT__)
   kal_uint8   CH;
#endif
   kal_uint8 i=0;

   for (i=0; i<MAX_SIM_NUM; i++)
   {
        this_smu = &smu_context_g[i];
        this_smu->smu_current_mod = SMU_MODULE(MOD_SMU, i);
        this_smu->security_status=0;
        this_smu->pending_password_id=ID_READY;
        this_smu->is_puk_unlock=KAL_FALSE;
        this_smu->is_exception_reset=KAL_FALSE;
        this_smu->is_phone_lock_verified=KAL_FALSE;
        this_smu->is_mmi_security_ind_recv = KAL_FALSE;
        this_smu->is_mmrr_ready_ind_recv=KAL_FALSE;
        this_smu->is_mmrr_ready_ind_sent=KAL_FALSE;
        this_smu->dn_type = TYPE_NONE;
        this_smu->plmn_sel_info.plmn_ptr=NULL;
        this_smu->uplmn_wact_info.plmn_ptr = NULL;
        this_smu->oplmn_wact_info.plmn_ptr = NULL;
        this_smu->hplmn_wact_info.plmn_ptr = NULL;
        this_smu->cipher_ind = SMU_CI_NONE;
        this_smu->is_simcard_replaced = KAL_TRUE;
        this_smu->is_sim_card_inserted = SMU_SIM_UNKNOWN;
        this_smu->sim_status = SMU_SIM_NOT_READY; // [MAUI_00632199]
        kal_mem_set(this_smu->imsi,0x00,9);
        this_smu->is_personalization_done=KAL_FALSE;       
    #ifdef __SIM_ME_LOCK__
        this_smu->is_sml_refresh = KAL_FALSE;
        this_smu->cphs_lock_count=5;
        this_smu->l4csmu_set_sml_cnf_ptr = NULL;       
        this_smu->is_autolock_enable = KAL_FALSE;
        this_smu->is_autolock_success = KAL_FALSE;
        this_smu->autolock_remain_count = 0;
        this_smu->is_masterkey_unlocked = KAL_FALSE;       
    #endif
    #if defined(__SATCE__) && !defined(__RSAT__)
        this_smu->sate_app_id = 0;

        for (CH=0; CH<MAX_SUPPORT_SATE_CHANNEL+1; CH++)
        {
            /* Register timer expiry message */
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.dest_mod_id = SMU_MODULE(MOD_SMU, i);
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.src_mod_id = MOD_TIMER;
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.msg_id = MSG_ID_TIMER_EXPIRY;
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.local_para_ptr = NULL;
            this_smu->sate_channel[CH].smu_timer_context.smu_timer_ilm.peer_buff_ptr = NULL;

            /* Create an Event Scheduler */
            this_smu->sate_channel[CH].smu_timer_context.smu_event_scheduler_ptr1 = evshed_create("SMU_BASE_TIMER", SMU_MODULE(MOD_SMU, i), 0, 255);

            this_smu->sate_channel[CH].is_cmd_modified = KAL_FALSE;
            this_smu->sate_channel[CH].bearer = 0x00;
            this_smu->sate_channel[CH].buffer_size = 0;
            this_smu->sate_channel[CH].avail_buf_size = 0;
            this_smu->sate_channel[CH].satce_buf_hd = 0;
            this_smu->sate_channel[CH].satce_buffer = NULL;
            this_smu->sate_channel[CH].channel_id = SAT_NO_CHANNEL;
            this_smu->sate_channel[CH].channel_data_len = 0;
            this_smu->sate_channel[CH].soc_fd = -1;		/* SOC_ERROR */
            this_smu->sate_channel[CH].channel_status[0]=0x00;
            this_smu->sate_channel[CH].channel_status[1]=0x00;
            this_smu->sate_channel[CH].no_apn = 0;
            this_smu->sate_channel[CH].apn = NULL;
            this_smu->sate_channel[CH].no_local_addr = 0;
            this_smu->sate_channel[CH].local_addr = NULL;
            this_smu->sate_channel[CH].no_dest_addr = 0;
            this_smu->sate_channel[CH].dest_addr = NULL;
            this_smu->sate_channel[CH].no_username = 0;
            this_smu->sate_channel[CH].username = NULL;
            this_smu->sate_channel[CH].no_passwd = 0;
            this_smu->sate_channel[CH].passwd = NULL;
        }
    #endif // __SATCE__
   }   

   return KAL_TRUE;
}

