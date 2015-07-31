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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	csmss_reset.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for reseting global context in CSM(SS) module.
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
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define CSMSS_RESET_C

#ifndef __MTK_TARGET__
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"

#include "syscomp_config.h"
#include "task_config.h"      	/* Task creation */

#include "stacklib.h"        	   /* Basic type for dll, evshed, stacktimer */

#include "event_shed.h"       	/* Event scheduler */

#include "stack_timer.h"      	/* Stack timer */

#include "nvram_struct.h"
#include "nvram_enums.h"
#include "nvram_data_items.h"
#include "nvram_editor_data_item.h"
#include "csmss_common_enums.h"
#include "l4c_common_enum.h"
#include "csmss_context.h"

extern kal_bool csmss_reset(void);
#endif //__MTK_TARGET__


/*****************************************************************************
 * FUNCTION
 *  csmss_reset
 * DESCRIPTION
 *  This function resets CSM(SS) module global variables.
 *
 * PARAMETERS
 *  void  IN
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

#ifndef __MTK_TARGET__
kal_bool csmss_reset(void)
{
    kal_uint8 index = 0;

    kal_uint8 i;
    for (i = 0; i < MAX_SIM_NUM; i++)
    {
        csmss_ptr_g = &csmss_g[i];
        csmss_cur_mod = MOD_CSM+i;

#if defined (__CPHS__) || defined (__REL4__)        
        csmss_ptr_g->cfu_flag_len = 0;
        csmss_ptr_g->cfis_record_len = 0;  
#endif

        for (index = 0; index < MMI_CS_MAX_CALLS; index++)
        {
            csmss_g_call_id_pool[index] = KAL_FALSE;
        }

    // Revise interrogate: 1.query again for active, 2.if no respones from NW, clear the line.
        #ifndef __SS_NOT_INTERROGATE_ACTIVATESS__
        if (csmss_g_query_act_req == KAL_TRUE)
        {
            csmss_g_query_act_req = KAL_FALSE;

            if (csmss_g_msg_ptr != NULL)
                free_local_para((local_para_struct *)csmss_g_msg_ptr);
            csmss_g_msg_ptr = NULL;
        }
        #endif
        #ifdef __SS_ERASURE_BEFORE_REGISTER__
        if (csmss_g_erase_reg_req == KAL_TRUE)
        {
            csmss_g_erase_reg_req = KAL_FALSE;
        }
        #endif

        /* MAUI_01722785 add cf number interface */
        csmss_g_cf_number_length = 0;
    }

    return KAL_TRUE;

} /* end of csmss_reset */
#endif //__MTK_TARGET__

