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
 * TCM_AT_HANDLER.H
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef _TCM_AT_HANDLER_H
#define _TCM_AT_HANDLER_H

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "sim_public_enum.h"


typedef enum {
   E_L4C_START_REQ,             // not is use
   E_L4C_SET_PRI_PDP_INFO,
   E_L4C_SET_SEC_PDP_INFO,
   E_L4C_SET_QOS_INFO,
   E_L4C_SET_EQOS_INFO,
   E_L4C_SET_PPP_AUTH_INFO,
   E_L4C_SET_GPRS_ACCOUNT_INFO, // not is use
   E_L4C_UNDEFINE_PDP_INFO,
   E_L4C_SET_N201U_INFO,

   E_L4C_SET_MSQ_MODE,  /* __MEDIATEK_SMART_QOS__ */
   E_L4C_SET_MSQ_ENTRY, /* __MEDIATEK_SMART_QOS__ */
   
   E_L4C_SET_MAX_LIMIT = 16
} l4c_set_type_enum;


#if (defined(__NDIS_SUPPORT__) || (defined(__TCM_UT__) && defined(__UMTS_RAT__)))
kal_bool is_external_context( kal_uint8 context_id );
void tcm_l4ctcm_set_config_option_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_enter_data_mode_req_hdlr( ilm_struct *ilm_ptr );
void tcm_ratdm_enter_data_mode_cnf_hdlr( ilm_struct *ilm_ptr );
#endif /* (defined(__NDIS_SUPPORT__) || (defined(__TCM_UT__) && defined(__UMTS_RAT__))) */

void tcm_l4ctcm_start_req_hdlr( ilm_struct *ilm_ptr );

sim_interface_enum tcm_get_actual_sim_id( void );
void tcm_nvram_read_cnf_hdlr( ilm_struct *ilm_ptr );

void tcm_l4ctcm_set_pri_pdp_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_gprs_statistics_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_sec_pdp_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_qos_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_eqos_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_ppp_auth_info_req_hdlr( ilm_struct *ilm_ptr );
void tcm_l4ctcm_undefine_pdp_info_req_hdlr( ilm_struct *ilm_ptr );

#ifdef __MEDIATEK_SMART_QOS__
void tcm_l4ctcm_set_msq_mode_req_handler( ilm_struct *ilm_ptr );
void tcm_l4ctcm_set_msq_entry_req_handler( ilm_struct *ilm_ptr );
void tcm_store_msq_list_to_nvram( kal_uint8 set_type_and_src_id );
#endif /* __MEDIATEK_SMART_QOS__ */

#ifdef __UGTCM__
void tcm_set_req_n201u_hdlr(kal_uint8 cid, kal_uint16 req_n201u);
#endif /* __UGTCM__ */

void tcm_nvram_write_cnf_hdlr( ilm_struct *ilm_ptr );

void tcm_restore_sib_to_nvram( kal_uint8 index, kal_uint8 access_id );

#endif /* _TCM_AT_HANDLER_H */

