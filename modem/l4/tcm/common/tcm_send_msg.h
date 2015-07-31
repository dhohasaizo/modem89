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
 * TCM_SEND_MSG.H
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef _TCM_SEND_MSG_H
#define _TCM_SEND_MSG_H


/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "l3_inc_enums.h"

/* structs. */
#include "tcm_context.h"

/* prototypes. */
#include "kal_public_api.h"


#ifndef __GEMINI__
#define TCM_MODULE_ID MOD_TCM
#else  /* __GEMINI__ */
#define TCM_MODULE_ID (MOD_TCM+ tcm_ptr_g->sim_interface)
#endif /* __GEMINI__ */

/* Note: The msg_id, local_para_ptr, and peer_buff_ptr should be pre-filled. */
#define TCM_SEND_ILM(src_mod, dest_mod, sap, ilm_ptr) tcm_send_ilm(src_mod, dest_mod, sap, ilm_ptr)

/** Source of the protocol config option. */
typedef enum
{
    TCM_CONFIG_OPTION_FROM_SIB,
    TCM_CONFIG_OPTION_FROM_MSG
}tcm_source_of_config_enum;

void tcm_send_activate_rej_rsp( tcm_startup_type_enum startup_type, 
                                ps_cause_enum cause, 
                                local_para_struct *local_para_ptr, 
                                kal_uint8 sib_id );

void tcm_send_l4c_activate_rej( kal_bool is_sib_ptr, void *param_ptr, ps_cause_enum cause );

kal_bool tcm_activate_cnf_aux_proc( SESSION_INFO_PTR si_db_ptr );

void tcm_report_event_to_l4c( mmi_event_enum event_type, SESSION_INFO_PTR si_db_ptr );

void tcm_send_modify_rej_to_l4c( kal_uint8 context_id, ps_cause_enum cause, kal_uint8 l4c_src_id );

void tcm_send_deactivate_cnf_to_l4c( kal_uint8 context_id, kal_uint8 l4c_src_id );

void tcm_send_msg_to_l4c( msg_type         msg_type,
                          SESSION_INFO_PTR si_db_ptr,
                          void             *param_ptr );

void tcm_send_msg_to_nvram( msg_type MsgID, 
                            local_para_struct *pLocalParam, 
                            peer_buff_struct *pPeerBuf );

void tcm_send_ilm( module_type src_mod, module_type dest_mod, sap_type sap, ilm_struct *ilm_ptr );

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
void tcm_send_msg_to_mod_nil( ilm_struct *ilm_ptr );
#endif /* ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) */

#ifdef __PS_DIALUP__
void tcm_send_activate_rej_to_ppp( SESSION_INFO_PTR  si_db_ptr,
                                   kal_uint8	context_id,
                                   kal_uint8	config_option_len,
                                   void       *config_option,
                                   kal_uint8   config_protocol, 
                                   tcm_source_of_config_enum	config_source,
                                   kal_uint8 	l4c_src_id );

void tcm_gprs_send_msg_to_ppp( msg_type msg_type,
                               session_info_block_struct *si_db_ptr,
                               void *param_ptr,
                               void *config_option_ptr,
                               tcm_source_of_config_enum config_source );

void tcm_send_msg_to_ppp( msg_type msg_type,
                          session_info_block_struct *si_db_ptr,
                          void *param_ptr );                                   
#endif /* __PS_DIALUP__*/                             

#ifdef __MODEM_EM_MODE__
void tcm_send_em_context_info(void);
#endif /* __MODEM_EM_MODE__ */ 


#endif /* _TCM_SEND_MSG_H */
