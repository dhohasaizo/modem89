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
 * L4C_WAP_MSG.C
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
 :  [solution]
Add MTK header
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
*
* Filename:
* ---------
* RMMI_INIT.C
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
 *------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*==============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#define L4C_WAP_MSG_C
#ifdef __WAP_SUPPORT

#define L4C_SIM_MSG_C
#ifdef __MOD_SMU__

//#include "kal_release.h"
//#include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "app_ltlcom.h" /* Task message communiction */
#include "stacklib.h"   /* Basic type for dll, evshed, stacktimer */
//#include "app_buff_alloc.h"
#include "stack_timer.h"
#include "event_shed.h"

#include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"
#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#include "csmss_common_enums.h"

#include "mcd_l4_common.h"

#include "l4c_common_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_rspfmttr.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
#include "l4c_ft.h"
#include "l4_trc.h"
#endif /* __MOD_SMU__ */ 
#include "wap2l4c_struct.h"
 


/*****************************************************************************
 * FUNCTION
 *  l4c_wap_prof_access_cnf_hdlr
 * DESCRIPTION
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4c_wap_prof_access_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4cwap_prof_access_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4cwap_prof_access_cnf_struct*) local_para_ptr;
    src_id = msg_ptr->src_id;

    if (L4C_PTR->cc_current_action[src_id] == CWAP_ACCESS)
    {
        if (peer_buff_ptr != NULL)
        {
            kal_uint16 packed_peer_buff_len;
            kal_uint8 *pdu_ptr;

            pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &packed_peer_buff_len);

        }
        L4C_PTR->cc_current_action[src_id] = L4C_NO_ACTION;
        //l4c_wap_prof_access_req_rrsp(msg_ptr->result, pdu_ptr);
    }
    else
    {
        /* wrong msg error */
    }
    return;
}
#endif /* __WAP_SUPPORT */ /* WAP_SUPPORT */

