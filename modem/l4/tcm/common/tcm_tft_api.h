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
 * TCM_TFT_API.H
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


#ifndef _TCM_TFT_API_H
#define _TCM_TFT_API_H

/* kals. */
#include "kal_general_types.h"
#include "kal_public_defs.h"

/* enums. */
#include "mmi_sm_enums.h"

/* structs. */
#include "ps_public_struct.h" 
#include "l3_inc_local.h"
#include "tcm_context.h"


/** Type of packet filter components. */
typedef enum
{
    PF_IPV4_SRC_ADDR_TYPE = 0x10,
    PF_IPV6_SRC_ADDR_TYPE = 0x20,
    PF_PROT_ID_NEXT_HDR_TYPE = 0x30,
    PF_SINGLE_DST_PORT_TYPE = 0x40,
    PF_DST_PORT_RANGE_TYPE = 0x41,
    PF_SINGLE_SRC_PORT_TYPE = 0x50,
    PF_SRC_PORT_RANGE_TYPE = 0x51,
    PF_SECURITY_PARAM_INDX_TYPE = 0x60,
    PF_TYPE_OF_SERV_TRAFFIC_CLASS_TYPE = 0x70,
    PF_FLOW_LABEL_TYPE = 0x80    
} packet_filter_comp_type_enum;

typedef struct {
    LOCAL_PARA_HDR
    tcm_packet_filter_struct packet_filter;
} tcm_check_packet_filter_content_struct ;


kal_bool tcm_update_tft( SESSION_INFO_PTR si_db_ptr, tft_opcode_enum tft_opcode );

void tcm_append_list( tcm_packet_filter_struct **d_ptr, tcm_packet_filter_struct **s_ptr, kal_bool replace );
tcm_packet_filter_struct* tcm_delete_list ( tcm_packet_filter_struct *d_ptr, tcm_packet_filter_struct *s_ptr );
tcm_packet_filter_struct* tcm_free_list ( tcm_packet_filter_struct *l_ptr );

void tcm_delete_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, kal_uint8 pfi );
void tcm_replace_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, l4c_tft_struct *tft );
void tcm_add_packet_filter( tcm_packet_filter_struct **sib_tft_ptr, l4c_tft_struct *tft );
tcm_packet_filter_struct* tcm_create_packet_filter( l4c_tft_struct *tft );

kal_bool tcm_set_tft_info( kal_uint8 sib_id, l4c_tft_struct *tft );
kal_bool tcm_set_tft_info_peer( kal_uint8 sib_id, l4c_tft_struct *tft, tft_opcode_enum tft_opcode, kal_bool replace_in_use );
kal_bool tcm_set_tft_info_local( kal_uint8 sib_id, l4c_tft_struct *tft, tft_opcode_enum tft_opcode );

kal_bool tcm_check_without_tft( kal_uint8 primary_context_id );
void tcm_set_tft_mod( SESSION_INFO_PTR sib_ptr );
tft_opcode_enum tcm_get_tft_opcode( SESSION_INFO_PTR sib_ptr, l4c_tft_struct *tft, kal_bool *replace_in_use );
kal_bool tcm_check_pfi_exist( kal_uint8 pfi, tcm_packet_filter_struct *tft_ptr );
kal_uint8 tcm_get_primary_context_id( SESSION_INFO_PTR sib_ptr );

void tcm_get_tft_info( SESSION_INFO_PTR sib_ptr, l4c_tft_struct *tft );
void tcm_fill_tft( tcm_packet_filter_struct *tft_ptr, l4c_tft_struct *tft );
void tcm_fill_tft_replace( tcm_packet_filter_struct *use_ptr, tcm_packet_filter_struct *mod_ptr, l4c_tft_struct *tft );
void tcm_fill_packet_filter( tcm_packet_filter_struct *tft_ptr, l4c_tft_struct *tft, kal_uint8 index );

kal_bool tcm_pack_tft( tft_opcode_enum opcode, tft_struct *tft_ptr, SESSION_INFO_PTR si_db_ptr);

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
kal_bool tcm_is_same_epi( kal_uint8 current_sib_id, kal_uint8 pfi, kal_uint8 epi );
kal_bool tcm_check_epi_exist( kal_uint8 epi, tcm_packet_filter_struct *tft_ptr, kal_uint8 *pfi );
#endif /* __TURN_ON_GENERAL_SECONDARY_PDP__ */


#endif /* _TCM_TFT_API_H */

