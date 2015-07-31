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
 * Filename:
 * ---------
 *   mbci_main.c
 *
 * Project:
 * --------
 *   MT6280
 *
 * Description:
 * ------------
 *   This file is intends for MBCI implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
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

#include "kal_public_defs.h"
#include "kal_trace.h"
#include "mbci_trc.h"
#include "mbci_context.h"
#include "mbci_cmd.h"
#include "l4_msgid.h"

/*****************************************************************************
 * FUNCTION
 *  mbci_main
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_main(ilm_struct *ilm_ptr)
{
    kal_uint32 i;
    mbci_context_struct *mbci_ptr = MBCI_PTR;

    if (ilm_ptr->msg_id == MSG_ID_UPS_MBCI_COMMAND_REQ)
    {
        mbci_command_req_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, MBCI_UNKNOW_MSG);
    }

    kal_brief_trace(TRACE_STATE, MBCI_STATE, MBCI_PTR->state);

    for (i=0; i<MBIM_MAX_SUPPORT_TRANSACTION; i++)
    {
        if (mbci_ptr->transaction[i].tid != 0)
        {
            kal_brief_trace(TRACE_STATE, MBCI_TRANS, i, 
                        mbci_ptr->transaction[i].tid,
                        mbci_ptr->transaction[i].src_id,
                        mbci_ptr->transaction[i].uuid,
                        mbci_ptr->transaction[i].cid,
                        mbci_ptr->transaction[i].command_type);
        }
    }
}

#ifdef __GEMINI__

/*****************************************************************************
 * FUNCTION
 *  mbci_context_selection
 * DESCRIPTION
 *  
 * PARAMETERS
 *  simInterface        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void mbci_context_selection(kal_uint8 sim_interface)
{
    sim_interface = sim_interface < L4_MAX_SIM_NUM ? sim_interface : 0;
    
    mbci_ptr_g = &mbci_cntxt_g[sim_interface];
    mbci_current_mod_id = L4_MODULE(MOD_MBCI, sim_interface);
}

#endif /* __GEMINI__ */ 


