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
 * TCM_ACL_SUPPORT.H
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


#ifndef _TCM_ACL_SUPPORT_H
#define _TCM_ACL_SUPPORT_H

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

typedef enum
{
    TCM_ACL_MMI_INVALID_ACTION,
    TCM_ACL_MMI_GET_ACL_ENTRY,
    TCM_ACL_MMI_ADD_ACL_ENTRY,
    TCM_ACL_MMI_SET_ACL_ENTRY,
    TCM_ACL_MMI_DEL_ACL_ENTRY,
    TCM_ACL_MMI_TOTAL_ACTIONS
}tcm_acl_mmi_action_enum;

typedef enum
{
    TCM_ACL_IDLE              = 0x00,
    TCM_ACL_SET_MODE          = 0x01,
    TCM_ACL_MMI_GET_FILE_INFO = 0x02,
    TCM_ACL_MMI_READ          = 0x04,
    TCM_ACL_MMI_WRITE         = 0x08,
    TCM_ACL_PDP_GET_FILE_INFO = 0x10,
    TCM_ACL_PDP_READ          = 0x20
}tcm_acl_action_enum;

typedef struct
{
    kal_bool is_read_sim;
    kal_uint8 max_sim_read_count;
    kal_uint8 curr_sim_read_count;
    kal_uint16 bytes_already_read;
    kal_uint16 res_bytes_to_read;
}acl_read_sim_session_struct;

typedef struct
{
    kal_bool is_write_sim;
    kal_uint8 max_sim_write_count;
    kal_uint8 curr_sim_write_count;
    kal_uint16 bytes_already_write;
    kal_uint16 res_bytes_to_write;
}acl_write_sim_session_struct;

typedef struct
{
    tcm_acl_action_enum curr_action;
    kal_uint16 efacl_file_size; /* Size of EFacl */
    kal_uint16 total_apn_in_efacl; /* Total num of APNs in EFacl */
    kal_uint16 read_start_index;
    kal_uint16 max_read_entries;
    kal_uint8 *apn_list;
    kal_uint16 apn_list_len;
    kal_uint16 max_apn_list_len; /* Max length of data can be read from EFacl */
    kal_uint16 pending_activating_sib; //erica
    kal_bool is_mmi_in_acl_menu;
    acl_read_sim_session_struct sim_read_session;
    acl_write_sim_session_struct sim_write_session;
}acl_context_struct;


extern void tcm_acl_set_mode_req_hdlr(ilm_struct *ilm_ptr);

extern void tcm_acl_get_entries_req_hdlr(ilm_struct *ilm_ptr);
extern void tcm_acl_set_entry_req_hdlr(ilm_struct *ilm_ptr);

extern void tcm_acl_add_entry_req_hdlr(ilm_struct *ilm_ptr);
extern void tcm_acl_del_entry_req_hdlr(ilm_struct *ilm_ptr);

extern void tcm_acl_leave_menu_req_hdlr(ilm_struct *ilm_ptr);

extern void tcm_acl_send_get_entries_rej_to_l4c(kal_uint16 cause);
extern void tcm_acl_send_set_entry_rej_to_l4c(kal_uint16 cause);
extern void tcm_acl_send_add_entry_rej_to_l4c(kal_uint16 cause);
extern void tcm_acl_send_del_entry_rej_to_l4c(kal_uint16 cause);

extern kal_bool tcm_acl_is_apn_exist_in_context(kal_uint8 apn_len, kal_uint8* apn);

extern void tcm_acl_sim_read_cnf_hdlr(void *msg_ptr, kal_uint8 curr_action);
extern void tcm_acl_sim_write_cnf_hdlr(void *msg_ptr, kal_uint8 curr_action);
extern void tcm_acl_write_apn_list_to_sim(kal_uint8 mmi_action);

extern void tcm_acl_pdp_continue_activate_proc(void);
extern void tcm_acl_pdp_reject_activate_proc(kal_uint16 rej_cause);

extern void tcm_acl_send_add_entry_cnf_to_l4c(void);
extern void tcm_acl_send_set_entry_cnf_to_l4c(void);
extern void tcm_acl_send_del_entry_cnf_to_l4c(void);

extern void tcm_acl_send_write_cnf_to_l4c(void *msg_ptr);
extern void tcm_acl_send_write_rej_to_l4c(void *cnf_ptr, kal_uint16 cause);

extern void tcm_acl_send_read_cnf_to_l4c(void);

extern kal_bool tcm_acl_add_apn_to_context (kal_uint8 *apn,  kal_uint8 apn_len);
extern kal_uint16 tcm_acl_encode_apn(kal_uint8 *dst, kal_uint8 *src, kal_uint16 src_len);

extern void tcm_acl_parse_sim_file_state0(void);
extern void tcm_acl_reset_context(void);

extern kal_bool tcm_acl_modify_apn_in_context(kal_uint16 index, kal_uint8 *apn, kal_uint8 apn_len);
extern kal_bool tcm_acl_del_apn_in_context(kal_uint16 index);

extern void tcm_send_msg_to_sim(msg_type MsgID, void *param_ptr);
extern void tcm_send_file_info_req_to_sim(kal_uint8 access_id);
extern void tcm_send_read_req_to_sim(kal_uint16 file_idx, kal_uint8 access_id, kal_uint16 offset, kal_uint16 read_size);
extern void tcm_sim_msg_hdlr( ilm_struct *ilm_ptr );

#endif /* _TCM_ACL_SUPPORT_H */
