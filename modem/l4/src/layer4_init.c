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
 * LAYER4_INIT.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for �K.
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

#define L4_INIT_C
//#include "kal_non_specific_general_types.h"
//#include "kal_release.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h"       	/* Task message communiction */
//#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */
//#include "stack_timer.h"
//#include "event_shed.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"

//#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
//#endif
/*INCLUDE common_enum value*/
//#include "csmss_common_enums.h"
//#include "rmmi_common_enum.h"
//#include "device.h"
//#include "rmmi_context.h"
//#include "l4c_common_enum.h"
//#include "l4c_context.h"
//#include "layer4_context.h"

#include "rmmi_init.h"
#include "kal_general_types.h"

/*INCLUDE all L4 modules init.h*/
//#include "layer4_init.h"
#ifdef __MOD_L4C__
extern kal_bool l4c_init(void);
#endif
#ifdef __MOD_CSM__
extern kal_bool csmcc_init(void);
extern kal_bool csmss_init(void);
#endif
#ifdef __MOD_UEM__
extern kal_bool uem_init(void);
#endif
#ifdef __MOD_PHB__
extern kal_bool phb_init(void);
#endif
#ifdef __MOD_RAC__
extern kal_bool rac_init(void);
#endif
#ifdef __MOD_SMSAL__
extern kal_bool smsal_init(void);
#endif
#ifdef __MOD_SMU__
extern kal_bool smu_init(void);
#endif
#ifdef __MOD_TCM__
extern kal_bool tcm_init(void);
#endif

#ifdef __MBIM_SUPPORT__
extern kal_bool mbci_init(void);
#endif

//layer4_context_struct layer4_cntxt_g;
//layer4_context_struct *layer4_ptr_g;

kal_uint32 l4_pun_src_buff[180];
kal_uint32 l4_pun_dest_buff[200];

kal_bool layer4_init(void)
{
   kal_bool ret_val = KAL_FALSE;

   //layer4_ptr_g = &layer4_cntxt_g;
   //
   //ret_val = layer4_init_context();
   //
   //if (ret_val == KAL_FALSE)
   //{
   //   return KAL_FALSE;
   //}

#ifdef __MOD_L4C__
   ret_val = l4c_init();
#endif

#ifdef __MOD_ATCI__
   ret_val = rmmi_init();
#endif

#ifdef __MBIM_SUPPORT__
       ret_val = mbci_init();
#endif

    /* call all modules init function */
#ifdef __MOD_CSM__
    ret_val = csmcc_init();
	 ret_val = csmss_init();
#endif
#ifdef __MOD_UEM__
    ret_val = uem_init();
#endif
#ifdef __MOD_PHB__
    ret_val = phb_init();
#endif
#ifdef __MOD_SMU__
    ret_val = smu_init();
#endif
#ifdef __MOD_SMSAL__
    ret_val = smsal_init();
#endif
#ifdef __MOD_RAC__
    ret_val = rac_init();
#endif
#ifdef __MOD_TCM__
    ret_val = tcm_init();
#endif


   return ret_val;
}

//kal_bool layer4_init_context()
//{
//
//   layer4_ptr_g->l4c_ptr = NULL;
//
//   return KAL_TRUE;
//
//}


