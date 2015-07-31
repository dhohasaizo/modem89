/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   cmux_main.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Task entry of CMUX.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "syscomp_config.h"
#include "task_config.h"
#include "stack_config.h"

/******************************************************************************/

static kal_bool cmux_task_init(void);
static kal_bool cmux_task_reset(void);
static void cmux_task_main(task_entry_struct *task_entry_ptr);

/******************************************************************************/

#ifdef __CMUX_SUPPORT__
extern kal_bool cmux_dispatchMsg(ilm_struct *ilm_ptr);
extern kal_bool cmux_init(void);
extern kal_bool cmux_reset(void);
#endif

#ifdef __USB_TETHERING__
extern kal_bool rndis_ctrl_dispatchMsg(ilm_struct *ilm_ptr);
extern kal_bool rndis_ctrl_init(void);
extern kal_bool rndis_ctrl_reset(void);
#endif

#ifdef __MBIM_SUPPORT__
extern kal_bool mbim_ctrl_dispatchMsg(ilm_struct *ilm_ptr);
extern kal_bool mbim_ctrl_init(void);
extern kal_bool mbim_ctrl_reset(void);
#endif

/*******************************************************************************
* FUNCTION
*  cmux_create
* DESCRIPTION
*   create cmux task
*
* PARAMETERS
*   IN          **handle
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_bool cmux_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct handler_info =
    {
        cmux_task_main,	        /* task entry function */
        cmux_task_init,         /* task initialization function */
        cmux_task_reset        /* task reset handler */
    };

    *handle = (comptask_handler_struct *) &handler_info;
    return KAL_TRUE;
} /* end of cmux_create() */

/*******************************************************************************
* FUNCTION
*  cmux_task_init
* DESCRIPTION
*  initial timer and cmux states
*
* PARAMETERS
*   IN      task_indx
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
kal_bool cmux_task_init(void)
{
    kal_bool result = KAL_TRUE;

#ifdef __CMUX_SUPPORT__
    result &= cmux_init();
#endif

#ifdef __USB_TETHERING__
    result &= rndis_ctrl_init();
#endif

#ifdef __MBIM_SUPPORT__
    result &= mbim_ctrl_init();
#endif

    return result;
} /* end of cmux_task_init() */

/*******************************************************************************
* FUNCTION
*  cmux_task_reset
* DESCRIPTION
*   This function is only used in Unit Test.
*
* PARAMETERS
* RETURNS
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
kal_bool cmux_task_reset(void)
{
    kal_bool result = KAL_TRUE;
    
#ifdef __CMUX_SUPPORT__
    result &= cmux_reset();
#endif

#ifdef __USB_TETHERING__
    result &= rndis_ctrl_reset();
#endif
    
#ifdef __MBIM_SUPPORT__
    result &= mbim_ctrl_reset();
#endif
    
    return result;
} /* end of cmux_task_reset() */

/*******************************************************************************
* FUNCTION
*  cmux_task_main
* DESCRIPTION
*   dispatch primitives to modules
*
* PARAMETERS
*   IN          *task_entry_ptr
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_task_main(task_entry_struct *task_entry_ptr)
{
    ilm_struct current_ilm;

    while (1)
    {
        // External Queue
        msg_receive_extq(&current_ilm);
        kal_set_active_module_id(current_ilm.dest_mod_id); 

        do {
#ifdef __MBIM_SUPPORT__
            if (mbim_ctrl_dispatchMsg(&current_ilm)) break;
#endif

#ifdef __USB_TETHERING__
            if (rndis_ctrl_dispatchMsg(&current_ilm)) break;
#endif

#ifdef __CMUX_SUPPORT__
            if (cmux_dispatchMsg(&current_ilm)) break;
#endif

            break;
        }while(1);
        
        destroy_ilm(&current_ilm);

        // Internal Queue
#ifdef __CMUX_SUPPORT__
        while (msg_receive_intq(&current_ilm))
        {
            kal_set_active_module_id(current_ilm.dest_mod_id);
            
            cmux_dispatchMsg(&current_ilm);
            
            destroy_ilm(&current_ilm);
        }
#endif
    }
} /* end of cmux_task_main() */

/******************************************************************************/

