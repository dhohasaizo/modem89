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
 *
 * Filename:
 * ---------
 *	csmss_init.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for init global context in CSM(SS) module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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

#define CSMSS_INIT_C

#include "l4c_common_enum.h"
#include "csmss_context.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"

csmss_context_struct csmss_g[MAX_SIM_NUM];
csmss_context_struct *csmss_ptr_g;
module_type csmss_cur_mod;
kal_uint8 csmss_g_src_id;
kal_uint8 csmss_g_call_id;
kal_uint8 *csmss_g_msg_ptr;
kal_uint8 csmss_g_ussd_len;
kal_uint8 csmss_g_ussd_dcs;
kal_uint8 csmss_g_cf_number_length;
kal_bool csmss_g_change_phase_req;
kal_bool csmss_g_erase_reg_req;
kal_bool csmss_g_query_act_req;
kal_uint8 csmss_g_call_id_pool[MMI_CS_MAX_CALLS];
//MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
kal_uint8 csmss_g_ss_id_pool[MMI_CS_MAX_CALLS];
csm_ciss_context_struct csmss_g_ciss_tab[MMI_CS_MAX_CALLS];
kal_uint8 csmss_g_old_pw[4];
kal_uint8 csmss_g_new_pw1[4];
kal_uint8 csmss_g_new_pw2[4];
kal_uint8 *csmss_g_ussd_string;
kal_uint32 csmss_g_ussd_string_buf[MAX_DIGITS_USSD/4+1];
kal_uint32 csmss_essp;

extern kal_bool csmss_init(void);
extern void csmss_send_ilm(kal_uint8 dest_id, kal_uint16 msg_id, void
                           *local_para, void *peer_buff);

/*****************************************************************************
 * FUNCTION
 *  csmss_init
 * DESCRIPTION
 *  This function initializes the CSM context.
 *
 * PARAMETERS
 *  void  IN
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  None
 *****************************************************************************/

kal_bool csmss_init(void)
{
    kal_bool   ret_val = KAL_TRUE;
    kal_uint8  index   = 0;
    kal_int8   i       = 0;

    for (i = 0; i < MAX_SIM_NUM; i++)
    {
        csmss_ptr_g    = &csmss_g[i];

        csmss_cur_mod  = MOD_CSM + i;

        kal_set_active_module_id(csmss_cur_mod);
        
#if defined (__CPHS__) || defined (__REL4__)        
        csmss_ptr_g->cfu_flag_len     = 0;
        csmss_ptr_g->cfis_record_len  = 0;
#endif
        
        for (index = 0; index < MMI_CS_MAX_CALLS; index++)
        {
            csmss_g_call_id_pool[index] = KAL_FALSE;
            //MAUI_02857408, [AGPS][UP CP conflict] Support Parallel SS
            csmss_g_ss_id_pool[index] = SS_ID_INVALID;
        }
    }
    csmss_essp = 0;
    csmss_g_ussd_string = (kal_uint8 *)csmss_g_ussd_string_buf;
    return ret_val;
}


