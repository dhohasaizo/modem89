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
 * l4c_hz_msg.c
 *
 * Project:
 * --------
 *   MT6208
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

#define L4C_HZ_MSG_C

#include "kal_public_api.h" /* Task message communiction */

#ifdef __MOD_SMU__
//#include "ps2sim_struct.h"
//#include "sim_common_enums.h"
//#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 

#include "l4c_context.h"
#include "layer4_context.h"
#include "mcd_l3_inc_struct.h"
#include "l4c2smsal_struct.h"
#include "l4crac_enums.h"
#include "rac2l4c_struct.h"     /* rac header file */

#include "l4c_hz_cmd.h"
#include "l4c_hz_msg.h"
#include "l4c_hz_utility.h"

#include "l4_trc.h"

#include "l4c_hz_context.h"
#include "string.h"
#include "kal_general_types.h"
#include "kal_trace.h"

#ifdef __HOMEZONE_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  l4crac_hz_cell_info_update_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_hz_cell_info_update_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_hz_cell_info_update_ind_struct *msg_ptr;

    msg_ptr = (l4crac_hz_cell_info_update_ind_struct*) local_para_ptr;

    memcpy(&(HZ_PTR->currrent_plmn_id), &(msg_ptr->cell_info.cell_info.plmn_id), sizeof(plmn_id_struct));
    HZ_PTR->current_lac[0] = msg_ptr->cell_info.cell_info.la_code[0];
    HZ_PTR->current_lac[1] = msg_ptr->cell_info.cell_info.la_code[1];
    HZ_PTR->current_cell_id = msg_ptr->cell_info.cell_info.cell_id;
    HZ_PTR->current_gsm_status = msg_ptr->gsm_status;

    if ((msg_ptr->gsm_status == L4C_RAC_NO_CELL || msg_ptr->gsm_status == L4C_RAC_LIMITED_SERVICE)
        || l4c_hz_is_on_home_plmn(msg_ptr->cell_info.cell_info.plmn_id) == KAL_FALSE)
    {
        l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
        HZ_PTR->current_hz_number = 0;  /* 1-4, 0 for not in homezone */
        l4csmsal_hz_cb_act_req(KAL_FALSE);
        stop_cb_channel_timer();
        return;
    }

    kal_trace(L4C_HZ_TRC, HZ_STATE, HZ_PTR->hz_sim_status, HZ_PTR->is_dedicated_mode, HZ_PTR->is_pkt_transfer_mode);
    kal_trace(
        L4C_HZ_TRC,
        HZ_CURRENT,
        HZ_PTR->current_lac[0],
        HZ_PTR->current_lac[1],
        HZ_PTR->current_cell_id,
        HZ_PTR->current_gsm_status,
        HZ_PTR->current_hz_number);
    switch (HZ_PTR->hz_sim_status)
    {
        case HZ_READY:
        {
            if (HZ_PTR->is_dedicated_mode == KAL_FALSE && HZ_PTR->is_pkt_transfer_mode == KAL_FALSE)
            {
                l4csmsal_hz_cb_act_req(KAL_TRUE);
                start_cb_channel_timer();
                l4c_hz_cell_reselection_alg(msg_ptr->cell_info.cell_info.la_code, msg_ptr->cell_info.cell_info.cell_id);
            }
            else
            {
                l4csmsal_hz_cb_act_req(KAL_FALSE);
                stop_cb_channel_timer();
            }

            break;
        }
        case HZ_INIT:
        {
            if (HZ_PTR->is_dedicated_mode == KAL_FALSE && HZ_PTR->is_pkt_transfer_mode == KAL_FALSE)
            {
                l4csmsal_hz_cb_act_req(KAL_TRUE);
                start_cb_channel_timer();
            }
            else
            {
                l4csmsal_hz_cb_act_req(KAL_FALSE);
                stop_cb_channel_timer();
            }
            break;
        }
        case HZ_SIM_NOT_ALLOW:
        {
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_hz_dedicated_mode_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_hz_dedicated_mode_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_hz_dedicated_mode_ind_struct *msg_ptr;
    l4c_hz_context_struct *hz_ptr = HZ_PTR; //for slim

    msg_ptr = (l4crac_hz_dedicated_mode_ind_struct*) local_para_ptr;

    if (msg_ptr->is_dedicated_mode == KAL_TRUE)
    {
        hz_ptr->is_dedicated_mode = KAL_TRUE;
    }
    else
    {
        hz_ptr->is_dedicated_mode = KAL_FALSE;
    }

    kal_trace(L4C_HZ_TRC, HZ_STATE, hz_ptr->hz_sim_status, hz_ptr->is_dedicated_mode, hz_ptr->is_pkt_transfer_mode);
    switch (hz_ptr->hz_sim_status)
    {
        case HZ_READY:
        case HZ_INIT:
        {
            if (hz_ptr->is_dedicated_mode == KAL_TRUE)
            {
            #ifdef __HZ_DEDI_AND_PKT_TRANS_CLEAR__
                l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
            #endif 
                hz_ptr->current_hz_number = 0;  /* 1-4, 0 for not in homezone */
                l4csmsal_hz_cb_act_req(KAL_FALSE);
                stop_cb_channel_timer();
            }
            else
            {
                ;   /* Johnny: L4C will receive HZ_CELL_INFO_UPDATE_IND in a short time */
            }
            break;
        }
        case HZ_SIM_NOT_ALLOW:
        {
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4crac_hz_pkt_transfer_mode_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4crac_hz_pkt_transfer_mode_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4crac_hz_pkt_transfer_mode_ind_struct *msg_ptr;
    l4c_hz_context_struct *hz_ptr = HZ_PTR; //for slim

    msg_ptr = (l4crac_hz_pkt_transfer_mode_ind_struct*) local_para_ptr;

    if (msg_ptr->is_pkt_transfer_mode == KAL_TRUE)
    {
        hz_ptr->is_pkt_transfer_mode = KAL_TRUE;
    }
    else
    {
        hz_ptr->is_pkt_transfer_mode = KAL_FALSE;
    }

    kal_trace(L4C_HZ_TRC, HZ_STATE, hz_ptr->hz_sim_status, hz_ptr->is_dedicated_mode, hz_ptr->is_pkt_transfer_mode);
    switch (hz_ptr->hz_sim_status)
    {
        case HZ_READY:
        case HZ_INIT:
        {
            if (hz_ptr->is_pkt_transfer_mode == KAL_TRUE)
            {
            #ifdef __HZ_DEDI_AND_PKT_TRANS_CLEAR__
                l4c_hz_tag_lind(KAL_FALSE, KAL_FALSE, NULL);
            #endif 
                hz_ptr->current_hz_number = 0;  /* 1-4, 0 for not in homezone */
                l4csmsal_hz_cb_act_req(KAL_FALSE);
                stop_cb_channel_timer();
            }
            else
            {
                if (l4c_hz_is_on_home_plmn(hz_ptr->currrent_plmn_id))
                {
                    if (hz_ptr->hz_sim_status == HZ_READY && hz_ptr->current_gsm_status == L4C_RAC_OK)
                    {
                        l4c_hz_cell_reselection_alg(hz_ptr->current_lac, hz_ptr->current_cell_id);
                    }
                    l4csmsal_hz_cb_act_req(KAL_TRUE);
                    start_cb_channel_timer();
                }
            }
        }
        case HZ_SIM_NOT_ALLOW:
        {
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  l4csmsal_hz_cb_msg_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmsal_hz_cb_msg_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmsal_hz_cb_msg_ind_struct *msg_ptr;
    kal_uint8 temp[7];
    kal_uint32 xc, yc;
    l4c_hz_context_struct *hz_ptr = HZ_PTR; //for slim

    msg_ptr = (l4csmsal_hz_cb_msg_ind_struct*) local_para_ptr;

    if (
#ifndef __TC01__		
		(msg_ptr->sn & 0xfff0) != 0x0010 ||
#endif //MAUI_02364467, mtk02285, 20100228
        msg_ptr->mi != 221 || msg_ptr->dcs != 0x00 || msg_ptr->page != 0x01 || msg_ptr->pages != 0x01)
    {
        return;
    }

    temp[6] = '\0';
    memcpy(temp, msg_ptr->msg_data, 6);
    xc = hz_atoi(temp);
    memcpy(temp, msg_ptr->msg_data + 6, 6);
    yc = hz_atoi(temp);

    kal_trace(L4C_HZ_TRC, HZ_STATE, hz_ptr->hz_sim_status, hz_ptr->is_dedicated_mode, hz_ptr->is_pkt_transfer_mode);
    switch (hz_ptr->hz_sim_status)
    {
        case HZ_READY:
        {
            if (hz_ptr->is_dedicated_mode == KAL_FALSE && hz_ptr->is_pkt_transfer_mode == KAL_FALSE)
            {
                l4c_hz_cb_alg(xc, yc);
                l4csmsal_hz_cb_act_req(KAL_FALSE);
                stop_cb_channel_timer();
            }
            break;
        }
        case HZ_INIT:
        {
            hz_ptr->queue_cb = KAL_TRUE;
            hz_ptr->queue_xc = xc;
            hz_ptr->queue_yc = yc;
            l4csmsal_hz_cb_act_req(KAL_FALSE);
            stop_cb_channel_timer();
            break;
        }
        case HZ_SIM_NOT_ALLOW:
        {
            break;
        }

    }
}

#endif /* __HOMEZONE_SUPPORT__ */ 

