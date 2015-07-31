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
 * TCM_UGTCM_FSM.H
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


#ifndef _TCM_UGTCM_FSM_H
#define _TCM_UGTCM_FSM_H

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "tcm_send_msg.h"

/* structs. */
#include "tcm2sm_struct.h"
#include "tcm_context.h"

/** Type of APN formats. */
typedef enum
{
   TCM_SATCE_APN_SPEC_FORMAT = 0, // ex: 73cht2tw   APN is cht.tw
   TCM_SATCE_APN_STRING_FORMAT = 1, // ex: 6cht.tw  APN is cht.tw
   TCM_SATCE_APN_INVALID_FORMAT = 2
} satce_apn_type;


/** Cast received MSG to obtain cid. */ 
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8 id;
} mmi_nsapi_cntxt_id_cast_struct;


kal_bool tcm_check_msg( ilm_struct *ilm_ptr ); 
void tcm_preserve_ind_hdlr( ilm_struct *ilm_ptr );
void tcm_reestablish_ind_hdlr( ilm_struct *ilm_ptr );

#ifdef __HSDPA_SUPPORT__
void tcm_ratdm_ps_bearer_capability_ind_hdlr(ilm_struct * ilm_ptr);
#endif /* __HSDPA_SUPPORT__ */

void tcm_cntxt_data_fsm( ilm_struct *ilm_ptr );

void tcm_record_rcvd_msg_and_current_sib_state( msg_type msg_id, SESSION_INFO_PTR si_db_ptr );
void tcm_change_state_according_to_happened_events( SESSION_INFO_PTR si_db_ptr, ilm_struct *ilm_ptr );
module_type tcm_decide_app_module( SESSION_INFO_PTR si_db_ptr );
void tcm_data_plane_fsm_event_occur( SESSION_INFO_PTR si_db_ptr, tcm_data_plane_fsm_event_enum event, ilm_struct *ilm_ptr );
void tcm_record_sent_fsm_msg( msg_type msg_id );
kal_bool tcm_check_sent_msgs_contain_these_msgs( msg_type msg_to_be_checked );

void tcm_error_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_activate_ind_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_timer_expiry_hdlr( void *param );
void tcm_timer_expiry_state1hdlr( kal_uint8 context_id );

void tcm_ext_activate_ind_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct  *peer_buff_ptr );
#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__))
void tcm_ext_activate_ind_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */
void tcm_ext_activate_ind_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

#ifdef __SATCE__
kal_uint8 tcm_check_if_sim_satce_apn_is_valid(kal_uint8 apn_length, kal_uint8 *apn_array) ;
#endif /* __SATCE__ */

void tcm_activate_req_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_activate_req_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_activate_req_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_activate_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_activate_rej_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_sec_activate_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_sec_activate_rej_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_activate_rej_rsp_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_modify_req_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_modify_ind_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_modify_cnf_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_modify_rej_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_deactivate_req_state0n2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_ext_deactivate_ind_state0n2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
#if (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__))
void tcm_ext_deactivate_ind_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
#endif /* (defined(__TCM_UT__) || defined(__TCM_SUPPORT_PPP_ANSWER_MT_PDP__)) */

void tcm_deactivate_ind_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_deactivate_cnf_hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_ratdm_config_cnf_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_ratdm_deconfig_cnf_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_ratdm_deconfig_cnf_state1hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );
void tcm_ratdm_deconfig_cnf_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

void tcm_link_free_state0hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );


void tcm_fill_config_options( void              *config_options, 
                              kal_uint8         *config_option_num, 
                              SESSION_INFO_PTR  si_db_ptr ); 

kal_bool tcm_activate_aux_proc( kal_uint8         sib_id,
                                local_para_struct *local_para_ptr,
                                kal_bool          *term_flag,
                                SESSION_INFO_PTR  si_db_ptr );

pdp_context_type_enum tcm_check_context_prim_sec( kal_uint8        sib_id,
                                                  SESSION_INFO_PTR si_db_ptr );

void tcm_store_activate_src( SESSION_INFO_PTR  si_db_ptr,
                             local_para_struct *local_para_ptr );

kal_bool tcm_string_cmp( kal_uint8 *str1,
                         kal_uint32 len1,
                         kal_uint8 *str2,
                         kal_uint32 len2 );

kal_bool tcm_match_pdpstartup_params( local_para_struct *local_para_ptr,
                                       SESSION_INFO_PTR  si_db_ptr );

void tcm_update_sibfrom_startup_info( local_para_struct *local_para_ptr,
                                      SESSION_INFO_PTR  si_db_ptr );

kal_bool tcm_activate_rej_aux_proc( kal_uint8                   sib_id,
                                    tcm_source_of_config_enum   config_source,
                                    kal_uint8                   config_option_len,
                                    config_option_struct        *config_option_ptr );

#ifdef __APP_SECONDARY_PDP_SUPPORT__
void tcm_reactivate_req_state2hdlr( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

kal_bool tcm_reactivate_cnf_aux_proc( kal_uint8 sib_id,
                                      SESSION_INFO_PTR si_db_ptr );
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */

#endif /* _TCM_UGTCM_FSM_H */

