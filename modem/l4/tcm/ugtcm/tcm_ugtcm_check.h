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
 * TCM_UGTCM_CHECK.H
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file describes some check functions in TCM.
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


#ifndef _TCM_UGTCM_CHECK_H
#define _TCM_UGTCM_CHECK_H

/* kals. */
#include "kal_general_types.h"

/* enums. */
#include "ps_public_enum.h"
#include "mmi_l3_enums.h"
#include "mmi_sm_enums.h"
#include "ppp_l4_enums.h"

/* struct. */
#include "sm2tcm_struct.h"
#include "l4c2tcm_struct.h"
#include "ppp2tcm_struct.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "tcm_context.h"


#define MMI_MAX_NUM_CONFIG_OPTION_PACKETS 84

kal_uint8 tcm_check_mmi_ext_pdp_activate_ind
                    ( mmi_ext_pdp_activate_ind_struct *msg_ptr );

kal_bool tcm_check_smreg_pdp_activate_cnf
                        ( smreg_pdp_activate_cnf_struct *msg_ptr );                  

kal_uint8 tcm_pdp_addr_ltcheck( pdp_addr_len_enum  pl, pdp_addr_type_enum pt );
kal_uint8 tcm_qos_check( qos_struct *q_ptr );


/* prototypes. */
kal_uint8 tcm_check_smreg_pdp_activate_ind
                        ( smreg_pdp_activate_ind_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_activate_rej
                        ( smreg_pdp_activate_rej_struct *msg_ptr );

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
kal_uint8 tcm_check_smreg_pdp_activate_sec_cnf
                        ( smreg_pdp_activate_sec_cnf_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_activate_sec_rej
                        ( smreg_pdp_activate_sec_rej_struct *msg_ptr );
#endif /* __TURN_ON_GENERAL_SECONDARY_PDP__ */ 

kal_uint8 tcm_check_tcm_pdp_modify_req
                        ( tcm_pdp_modify_req_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_modify_ind
                        ( smreg_pdp_modify_ind_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_modify_cnf
                        ( smreg_pdp_modify_cnf_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_modify_rej
                        ( smreg_pdp_modify_rej_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_deactivate_ind
                        ( smreg_pdp_deactivate_ind_struct *msg_ptr );

kal_uint8 tcm_check_smreg_pdp_deactivate_cnf
                        ( smreg_pdp_deactivate_cnf_struct *msg_ptr );

kal_uint8 tcm_check_mmi_link_free_ind
                        ( mmi_link_free_ind_struct *msg_ptr );

#endif  /* _TCM_UGTCM_CHECK_H */ 
