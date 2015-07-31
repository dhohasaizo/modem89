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
 * l4c_hz_cmd.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ¡K.
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

#define L4C_HZ_CMD_C

//#include "kal_release.h"        /* Basic data type */
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "stack_ltlcom.h" /* Task message communiction */
//#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
//#include "stack_timer.h"
//#include "event_shed.h"
#include "l4_msgid.h"

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 
//#include "csmss_common_enums.h"

//#include "mcd_l4_common.h"

//#include "l4c_common_enum.h"
//#include "rmmi_common_enum.h"
//#include "rmmi_context.h"
//#include "l4c_context.h"
//#include "layer4_context.h"
#include "l4c_sendmsg.h"
//#include "l4c_rspfmttr.h"
//#include "l4c_ft.h"

//#include "l4c_aux_struct.h"

//#include "mcd_l3_inc_struct.h"

//#include "l3_inc_enums.h"
//#include "smsal_l4c_enum.h"
//#include "smsal_l4c_defs.h"
#include "l4c2smsal_struct.h"

//#include "mcd_l4c2smsal_peer.h"

//#include "smsal_l4c_funcs.h"

//#include "l4c_utility.h"

//#include "l4c_sms_cmd.h"

//#include "mcd.h"

//#include "l4a.h"
//#include "mmi_msg_struct.h"

#include "l4c_hz_cmd.h"

#include "kal_general_types.h"

#ifdef __HOMEZONE_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_hz_cb_act_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  action      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_hz_cb_act_req(kal_bool action)
{
    l4csmsal_hz_cb_act_req_struct *param_ptr;

    param_ptr = (l4csmsal_hz_cb_act_req_struct*)
        construct_local_para((kal_uint16) sizeof(l4csmsal_hz_cb_act_req_struct), TD_RESET);

    param_ptr->action = action;

    l4c_send_msg_to_smsal(MSG_ID_L4CSMSAL_HZ_CB_ACT_REQ, param_ptr, NULL, 0);

}

#endif /* __HOMEZONE_SUPPORT__ */ 

