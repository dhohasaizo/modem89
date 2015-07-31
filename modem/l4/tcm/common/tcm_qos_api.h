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
 * TCM_QOS_API.H
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef _TCM_QOS_API_H
#define _TCM_QOS_API_H


/* kals. */
#include "kal_general_types.h"

/* structs. */
#include "mcd_l3_inc_gprs_struct.h"
#include "ps_public_struct.h"

#include "tcm_api.h"

/* Poying: Move to tcm_api.h for MSBB-compatiable. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

void tcm_qos_extend( qos_struct *qos, kal_uint8 pdp_addr_type_enum_value, tcm_qos_type_enum qos_type );

kal_bool tcm_qos_check_if_need_to_do_R98_to_R99( qos_struct *s, tcm_qos_type_enum qos_type );
kal_bool tcm_qos_check_if_need_to_do_R99_to_R98( qos_struct *s, tcm_qos_type_enum qos_type );

kal_bool tcm_check_if_eqos_is_all_zero( qos_struct *s );
kal_bool tcm_check_if_qos_is_all_zero( qos_struct *s );

void tcm_qos_R98_to_R99( qos_struct *s, kal_uint8 pdp_addr_type_enum_value, tcm_qos_type_enum qos_type );
/* Poying: Move to tcm_api.h for MSBB-compatiable. */
// void tcm_qos_R99_to_R98( qos_struct *s, tcm_qos_type_enum qos_type );

kal_uint8 tcm_get_max_bitrate( kal_uint8 peak_throughput );

/* only print qos in high level product (> REL4) */
#ifdef __REL4__ 
void tcm_print_eqos_content( l4c_eqos_struct *qos_p );
void tcm_print_qos_content( qos_struct *qos_p, kal_bool print_context_id_and_qos_type, kal_uint8 context_id, tcm_qos_type_enum qos_type );
#endif /* __REL4__ */


#endif /* _TCM_QOS_API_H */

