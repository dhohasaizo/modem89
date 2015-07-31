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
 * L4_TASK.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for ...
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

//#include "kal_release.h"      	/* Basic data type */
//#include "stack_common.h"
//#include "stack_msgs.h"
#include "syscomp_config.h"
#include "task_config.h"      	/* Task creation */
//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */
//#include "event_shed.h"       	/* Event scheduler */
//#include "stack_timer.h"      	/* Stack timer */
//#include "stdio.h"
#include "kal_public_defs.h"
/*For L4*/
#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#include "ps2sat_struct.h"
//#include "mcd_ps2sat_peer.h"
#endif
//#include "csmss_common_enums.h"
#ifdef __MOD_L4C__
//#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
//#include "l4c_context.h"
//#include "l4c_msghdlr.h"
#include "layer4_context.h"
#endif /*__MOD_L4C__*/
//#include "uart_sw.h"
#include "dcl.h"

#include "layer4_init.h"

//#include "l4_common.h"
//#include "l4c_aux_struct.h"
//#include "rmmi_utility.h"

//#include "device.h"
//#include "l4c_eq_cmd.h"

#include "rmmi_msghdlr.h"

#include "rmmi_init.h"
#include "rmmi_root.h"

/*Extern functions header files*/

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
//#include "kal_non_specific_general_types.h"
//#include "task_main_func.h"
//#include "stack_ltlcom.h"
//#include "kal_active_module.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "cmux_vp_num.h"

extern UART_PORT PS_UART_PORT;

extern void rmmi_context_selection(kal_uint8 sim_interface);

#ifdef __MBIM_SUPPORT__
extern void mbci_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void mbci_context_selection(kal_uint8 sim_interface);
#endif
#endif

#ifdef __MOD_CSM__
extern void csm_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void csmcc_context_selection(kal_uint8 sim_interface);
extern void csmss_context_selection(kal_uint8 sim_interface);
#endif
#endif
#ifdef __MOD_SMU__
extern void smu_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void smu_context_selection(kal_uint8 sim_interface);
#endif
#endif
#ifdef __MOD_UEM__
extern void uem_main(ilm_struct *current_ilm);
#endif
#ifdef __MOD_SMSAL__
extern void smsal_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void smsal_context_selection(kal_uint8 sim_interface);
#endif
#endif
#ifdef __MOD_PHB__
extern void phb_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void phb_context_selection(kal_uint8 sim_interface);
#endif
#endif
#ifdef __MOD_RAC__
extern void rac_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void rac_context_selection(kal_uint8 sim_interface);
#endif
#endif
#ifdef __MOD_TCM__
extern void tcm_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void tcm_context_selection(kal_uint8 sim_interface);
#endif
#endif

#ifdef __MOD_ATCI__
extern void rmmi_init_uart(void);
#endif

#ifdef __MOD_L4C__
extern void l4c_main(ilm_struct *current_ilm);
#ifdef __GEMINI__
extern void l4c_context_selection(kal_uint8 sim_interface);
#endif
#endif

#ifndef __MTK_TARGET__
extern kal_bool l4_reset(void);
#endif

void layer4_task_main( task_entry_struct *task_entry_ptr);
void process_ilm (ilm_struct *current_ilm);

kal_bool l4_create(comptask_handler_struct **handle)
{
	static const comptask_handler_struct l4_handler_info =
	{
		layer4_task_main,       /* task entry function */
		layer4_init,            /* task initialization function */
    #ifndef __MTK_TARGET__
		l4_reset                /* task reset handler */
	#else
        NULL
    #endif
	};

	*handle = (comptask_handler_struct *)&l4_handler_info;
	return KAL_TRUE;
}

void layer4_task_main(task_entry_struct *task_entry_ptr)
{
   ilm_struct current_ilm;
//   kal_uint32   my_index;
   kal_uint8	i;
   //kal_get_my_task_index(&my_index);
//   my_index = (kal_uint32)kal_get_current_task_index();
   //stack_set_active_module_id (my_index, l4c_current_mod_id);
   rmmi_init_uart();
   
   rmmi_init_atci();

   while (1)
   {
      msg_receive_extq(&current_ilm);

      //stack_set_active_module_id (my_index, current_ilm.dest_mod_id);
      kal_set_active_module_id(current_ilm.dest_mod_id);
      process_ilm(&current_ilm); /*process external ILM */

        if ( (current_ilm.dest_mod_id >= MOD_L4C && current_ilm.dest_mod_id <= (MOD_L4C + L4_MAX_SIM_NUM -1))
              || (current_ilm.dest_mod_id >= MOD_ATCI && current_ilm.dest_mod_id <= (MOD_ATCI + L4_MAX_SIM_NUM -1))
        ){
            for(i=0 ; i<RMMI_MAX_CHANNEL_NUMBER; i++)
            {
                if (rmmi_root_is_uart_owner(i) == KAL_TRUE)
                {
                    if (RMMI_COMM_PTR->uart_input_queue[i].length > 0)
                        rmmi_process_one_cmd(i);
                }
            }
        }
       
      while (msg_receive_intq(&current_ilm))
      {
         //stack_set_active_module_id (my_index, current_ilm.dest_mod_id);
         kal_set_active_module_id(current_ilm.dest_mod_id);
         process_ilm(&current_ilm);  /*process internal ILM */
      }
   }

}


#ifdef __GEMINI__
void layer4_module_context_selection(module_type mod_id)
{
    kal_uint8 which_sim = SIM1;
    kal_uint8 i;

    for (i=0; i<L4_MAX_SIM_NUM; i++)
    {
        if ((mod_id == L4_MODULE(MOD_L4C,i)) || (mod_id == L4_MODULE(MOD_RAC,i)) || (mod_id == L4_MODULE(MOD_TCM,i)) || 
            (mod_id == L4_MODULE(MOD_CSM,i)) || (mod_id == L4_MODULE(MOD_SMSAL,i)) || (mod_id == L4_MODULE(MOD_PHB,i)) || 
            (mod_id == L4_MODULE(MOD_SMU,i)) || (mod_id == L4_MODULE(MOD_ATCI,i)) || (mod_id == MOD_UEM) || 
            (mod_id == MOD_USAT) || (mod_id == L4_MODULE(MOD_ENG,i)) || (mod_id == L4_MODULE(MOD_MBCI,i)))
        {
            which_sim = SIM1 + i;
            break;
        }
    }

    if (i == L4_MAX_SIM_NUM)
    {
        ASSERT(0);
    }
    
    l4c_context_selection(which_sim);
    rmmi_context_selection(which_sim);
#ifdef __MBIM_SUPPORT__
    mbci_context_selection(which_sim);
#endif
    csmcc_context_selection(which_sim);
    csmss_context_selection(which_sim);
    smsal_context_selection(which_sim);
#ifdef __MOD_TCM__
    tcm_context_selection(which_sim);
#endif
    rac_context_selection(which_sim);
    smu_context_selection(which_sim);
    phb_context_selection(which_sim);
}
#endif

void process_ilm (ilm_struct *current_ilm)
{

#ifdef __GEMINI__
   layer4_module_context_selection(current_ilm->dest_mod_id);
#endif

#ifdef __MOD_CSM__
    if ((MOD_CSM <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_CSM+L4_MAX_SIM_NUM))
    {
		csm_main( current_ilm );
    }
#endif
#ifdef __MOD_SMU__
    else if ((MOD_SMU <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_SMU+L4_MAX_SIM_NUM))
	{
		smu_main( current_ilm );
	}
#endif
#ifdef __MOD_UEM__
    else if (current_ilm->dest_mod_id == MOD_UEM)
    {
        uem_main( current_ilm );
    }
#endif
#ifdef __MOD_SMSAL__
    else if ((MOD_SMSAL <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_SMSAL+L4_MAX_SIM_NUM))
    {
        smsal_main( current_ilm );
    }
#endif
#ifdef __MOD_PHB__
    else if ((MOD_PHB <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_PHB+L4_MAX_SIM_NUM))
    {
        phb_main( current_ilm );
    }
#endif
#ifdef __MOD_RAC__
    else if ((MOD_RAC <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_RAC+L4_MAX_SIM_NUM))
    {
        rac_main( current_ilm );
    }
#endif
#ifdef __MOD_TCM__
    else if ((MOD_TCM <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_TCM+L4_MAX_SIM_NUM))
    {
        tcm_main( current_ilm );
    }
#endif
#ifdef __MOD_ATCI__
    else if ((MOD_ATCI <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_ATCI+L4_MAX_SIM_NUM))
    {
        rmmi_main( current_ilm );
    }
#endif
#ifdef __MBIM_SUPPORT__
    else if ((MOD_MBCI <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_MBCI+L4_MAX_SIM_NUM))
    {
        mbci_main( current_ilm );
    }
#endif
#ifdef __MOD_L4C__
    else if ((MOD_L4C <= current_ilm->dest_mod_id) && (current_ilm->dest_mod_id < MOD_L4C+L4_MAX_SIM_NUM))
    {
        l4c_main( current_ilm );
    }
#endif
	else
    {
		/* wrong destination */
	}
	destroy_ilm( current_ilm );
}

