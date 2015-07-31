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
 * TCM_GPRS_STATISTIC.H
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef _TCM_GPRS_STATISTIC_H
#define _TCM_GPRS_STATISTIC_H

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

/* structs. */
#include "tcm_context.h"


#if (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__)))
void tcm_change_statistic_is_writing( kal_bool new_value );
void tcm_change_statistic_needs_update( kal_bool new_value );
void tcm_update_old_call_history_to_nvram( void );
void tcm_update_old_call_history_when_enter_data_plane_deconfigured_state( SESSION_INFO_PTR si_db_ptr, ilm_struct *ilm_ptr );
void tcm_update_old_call_history_when_enter_data_plane_configured_state( SESSION_INFO_PTR si_db_ptr );
void tcm_ratdm_reset_ps_statistics_cnf_hdlr_for_old_call_history( ilm_struct *ilm_ptr );
void tcm_ratdm_query_ps_statistics_cnf_hdlr_for_old_call_history( ilm_struct *ilm_ptr );
void l4ctcm_get_gprs_statistics_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_send_write_statistic_to_nvram( void );
void tcm_send_simple_msg_to_l4c( msg_type MsgID, local_para_struct *pLocalParam, peer_buff_struct *pPeerBuf );
#endif /* (( (!defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)) && (!defined(__MSG_ID_MMI_PS_GET_GPRS_DATA_COUNTER_REQ_PHASE_OUT__)) ) || (defined(__TCM_UT__))) */


#endif /* _TCM_GPRS_STATISTIC_H */

