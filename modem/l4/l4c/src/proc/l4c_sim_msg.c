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
 * L4C_SIM_MSG.C
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
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
 *
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

#define L4C_SIM_MSG_C
#ifdef __MOD_SMU__

#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
//#include "stack_ltlcom.h" /* Task message communiction */

#include "ps2sim_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#include "l4c_common_enum.h"
#include "rmmi_context.h"
#include "l4c_context.h"
#include "layer4_context.h"
#include "l4c_sendmsg.h"
#include "l4_trc.h"
#include "l3_inc_enums.h"
#ifdef __MOD_CSM__
#include "l4c_common_enum.h"
#include "l4c2csm_cc_struct.h"
#endif 
#ifdef __MOD_RAC__
#include "l4crac_func.h"
#include "l4c2rac_struct.h"
#endif 
#ifdef __MOD_PHB__
#include "l4c_phb_cmd.h"    
#endif 
#ifdef __MOD_SMSAL__
#include "l4c2smsal_struct.h"
#endif 
#include "l4c2smu_struct.h"  
#include "l4c_utility.h"
#include "l4c_sim_cmd.h"
#include "l4c_sim_msg.h"
#ifdef __EMPTY_CALLBACK__
#include "lmmi_ind.h"
#endif 
#include "lmmi_rsp.h"
#include "lmmi_ind.h"
#include "rmmi_rsp.h"
#include "rmmi_ind.h"
//#include "rmc_context.h"
//#include "rmc_cb.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"
//#include "stack_ltlcom.h"
#include "task_config.h"
#include "ps_public_struct.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "drv_msgid.h"
#include "l4_msgid.h"

#ifdef __MBIM_SUPPORT__
#include "mbci_ind.h"
#include "mbci_msg.h"
#endif

#include "l4c_root.h"
#if defined(__REGIONAL_PHONE__)
#include "ccci.h"
#include "sim_ps_struct.h"
#endif

// Convert sim_cmd_result_enum to sim_error_cause_enum
#define L4C_SIM_ERR(x)  ((x==SIM_NO_INSERTED)?SIM_CARD_REMOVED:SIM_ACCESS_ERROR)

extern void l4csmu_get_chv_info_status(sim_chv_info_struct *chv_info, sim_chv_status_struct *chv_status); // mtk02480 add for l4c_sim_verify_pin_result_lind

#ifdef __GEMINI__
extern void rmc_decode_lang(kal_uint8 char1, kal_uint8 char2, cbs_language_enum *lang_type, kal_uint8 rr_src);

extern void rmc_decode_cbsdcs(
                kal_uint8 pp,
                kal_uint8 dcs,
                kal_uint8 char1,
                kal_uint8 char2,
                kal_uint8 char3,
                cbs_language_enum *lang_type,
                cbs_alphabet_enum *alphabet_type,
                cbs_msgclass_enum *msg_class,
                kal_bool *is_compress,
                kal_bool *is_reserved,
                kal_uint8 rr_src);
#else /* __GEMINI__ */ 
extern void rmc_decode_lang(kal_uint8 char1, kal_uint8 char2, cbs_language_enum *lang_type);

extern void rmc_decode_cbsdcs(
                kal_uint8 pp,
                kal_uint8 dcs,
                kal_uint8 char1,
                kal_uint8 char2,
                kal_uint8 char3,
                cbs_language_enum *lang_type,
                cbs_alphabet_enum *alphabet_type,
                cbs_msgclass_enum *msg_class,
                kal_bool *is_compress,
                kal_bool *is_reserved);
#endif /* __GEMINI__ */


/*****************************************************************************
 * FUNCTION
 *  l4c_sim_lang_decode
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_lang_decode(sim_lp_struct *LP_PTR, cbs_language_enum lang[5], int *alpha_set)
{
    kal_bool fake2, fake3;
    kal_uint8 i,j;
    int fake1 = 0;

    /* mtk00714 : store preferred language for later +CLAN="auto" */
    //test code ISO 639
    //msg_ptr->lp.num_lp = 3;
    //msg_ptr->lp.lp_file_type = ELP;
    //msg_ptr->lp.lp[0] = 0x7A; //z 
    //msg_ptr->lp.lp[1] = 0x34; //h
    //msg_ptr->lp.lp[2] = 0x7A; //z 
    //msg_ptr->lp.lp[3] = 0x34; //h
    //msg_ptr->lp.lp[4] = 0x7A; //z 
    //msg_ptr->lp.lp[5] = 0x34; //h

    for (i = 0; i < 5; i++)
    {
        lang[i] = PS_CBS_INVALID;
    }

    if (LP_PTR->num_lp > 0)
    {
        if (LP_PTR->lp_file_type == SIM_LP)  // LP => 1 byte
        {
            for (i = 0; i < LP_PTR->num_lp; i++)
            {
            #ifdef __GEMINI__
                rmc_decode_cbsdcs(
                    0x10,
                    LP_PTR->lp[i],
                    0,
                    0,
                    0,
                    (cbs_language_enum*) &lang[i],
                    (cbs_alphabet_enum*) &alpha_set,
                    (cbs_msgclass_enum*) &fake1,
                    &fake2,
                    &fake3,
                    SIM1 + (l4c_current_mod_id - MOD_L4C));
            #else /* __GEMINI__ */ 
                rmc_decode_cbsdcs(
                    0x10,
                    LP_PTR->lp[i],
                    0,
                    0,
                    0,
                    (cbs_language_enum*) &lang[i],
                    (cbs_alphabet_enum*) alpha_set,
                    (cbs_msgclass_enum*) &fake1,
                    &fake2,
                    &fake3);
            #endif /* __GEMINI__ */ 
            }
            /* to store preferred language information for +CLAN */
            RMMI_PTR->preferred_lang = 0x0f;        //if lp ever present, use 0x0f as default.
            for (i = 0; i < LP_PTR->num_lp; i++)
            {
                if (LP_PTR->lp[i] == 0x01)
                {
                    RMMI_PTR->preferred_lang = 0x01;
                    break;
                }
            }
        }
        else        // ELP,  USIM_LI, USIM_PL => 2 byte
        {
            for (i = 0; i < LP_PTR->num_lp; i++)
            {
            #ifdef __GEMINI__
                rmc_decode_lang(
                    LP_PTR->lp[2 * i],
                    LP_PTR->lp[2 * i + 1],
                    (cbs_language_enum*) &lang[i],
                    SIM1 + (l4c_current_mod_id - MOD_L4C));
            #else /* __GEMINI__ */ 
                //mtk01616_080204: according to 11.11 section 10.1.2 , language code a pair of alpha-numeric character each char should be 1 byte
                rmc_decode_lang(LP_PTR->lp[2 * i],
                        LP_PTR->lp[2 * i + 1], 
                        (cbs_language_enum*) &lang[i]);
            #endif /* __GEMINI__ */ 
            }

            RMMI_PTR->preferred_lang = 0x0f;        //if lp ever present, use 0x0f as default.
            j = 0;
            for (i = 0; i < LP_PTR->num_lp; i++)
            {
                if (LP_PTR->lp[j]=='e' && LP_PTR->lp[j+1]=='n')
                {
                    RMMI_PTR->preferred_lang = 0x01;
                    break;
                }
                j += 2;
            }
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_startup_info_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_startup_info_ind(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_start_cnf_struct *msg_ptr = (l4csmu_start_cnf_struct*) local_para_ptr;
    int alpha_set_1 = 0, alpha_set_2 = 0;
    cbs_language_enum lang_1[5], lang_2[5];

    // get language and ECC number from SIM
    l4c_sim_lang_decode(&(msg_ptr->lp[0]), lang_1, &alpha_set_1);
    l4c_sim_lang_decode(&(msg_ptr->lp[1]), lang_2, &alpha_set_2);
    
    l4c_sim_startup_info_lind(msg_ptr->ecc.num_ecc, 
                                            msg_ptr->ecc.ecc_entry, 
                                            (kal_uint8 *)lang_1, 
                                            alpha_set_1, 
                                            (kal_uint8 *)lang_2, 
                                            alpha_set_2, 
                                            check_is_usim());

#if defined(__ENS_RAT_BALANCING__)
    L4C_PTR->is_valid_ef_rat_mode = msg_ptr->is_valid_rat_mode;
    L4C_PTR->ef_rat_mode = msg_ptr->rat_mode;

#if defined(__UMTS_RAT__)
    if (l4c_current_mod_id == MOD_L4C)
    {
        l4c_nw_ef_rat_mode_change_lind(L4C_PTR->is_valid_ef_rat_mode, L4C_PTR->ef_rat_mode);
    }
#endif
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4c_sim_security_check
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_security_check(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4csmu_security_cnf_struct *msg_ptr = (l4csmu_security_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = msg_ptr->src_id;
    kal_uint8 is_sim_change = l4c_check_sim_status();  // report sim change for MMI
    sim_chv_status_struct chv_status;
    kal_bool startup_flag = KAL_FALSE;

    l4csmu_get_chv_info_status(NULL,&chv_status);

    if (l4c_ptr->smu_activated == L4C_SMU_INACTIVE)
    {
        if ((msg_ptr->response != SMU_RES_OK) && (msg_ptr->cause_present == KAL_TRUE) 
			&& (msg_ptr->cause == SIM_CMD_FAIL || msg_ptr->cause == SIM_FATAL_ERROR 
			|| msg_ptr->cause == SIM_MEMORY_PROBLEM || msg_ptr->cause == SIM_NO_INSERTED 
			|| msg_ptr->cause == SIM_TECHNICAL_PROBLEM))
        {
            /* SIM response OK in start_cnf, but reponse abnormal error when verify PIN  */
            l4c_clear_poweron_action(src_id); 

            l4c_sim_fail_lind(L4C_SIM_ERR(msg_ptr->cause));                        

            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_FALSE);
            }
        #endif

            l4c_ptr->sim_detected = KAL_FALSE;
            l4c_ptr->single_sim_inserted_status = L4C_NO_INSERTED;
            l4c_ptr->sim_refresh = KAL_FALSE;
            l4c_ptr->sim_error_cause = msg_ptr->cause;
            l4c_ptr->smu_activated = L4C_SMU_ACTIVATE_FAIL;
            if (is_current_rac_activated() == KAL_TRUE)
            {
                startup_flag = KAL_TRUE;
            }
        }
        else
        {
            if (l4c_ptr->power_on_pin_check == KAL_TRUE && msg_ptr->type != TYPE_UNSPECIFIED)
            {
            #if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
                /* link_SML: notify L4C Root about the SML check result */
                if (l4c_root_lock_status_ind(msg_ptr->src_id) == KAL_TRUE)
                {
                    /* only updated to LMMI if the pending password is not modified */
                    l4c_sim_passwd_required_lind(
                    msg_ptr->type,
                    is_sim_change,
                    msg_ptr->chv_info,
                    msg_ptr->cphs_retry_count);
                }
            #else
                l4c_sim_passwd_required_lind(
                    msg_ptr->type,
                    is_sim_change,
                    msg_ptr->chv_info,
                    msg_ptr->cphs_retry_count);
            #endif

                #if 0 //MAUI_03103051 !defined(__MMI_FMI__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
                #endif
            }

            if (msg_ptr->type == TYPE_NO_REQUIRED)
            {
            #if defined(__MMI_FMI__)
                kal_uint16 length;
            #endif
                l4c_ptr->smu_activated = L4C_SMU_ACTIVE;

            #if defined(__MMI_FMI__)
                /* notify LMMI that this sim card support  how many plmn list */
                l4csmu_read_plmn_sel(l4c_smu_file_idx_for_preferred_oper_list(FILE_NONE), 0, &length, NULL);
                l4c_sim_support_plmn_list_lind(length);
            #endif

                if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                {   
                    if (l4c_ptr->smu_current_action != L4C_NO_ACTION)
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                    }
                    l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                }
            #ifdef __MBIM_SUPPORT__
                else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                {
                    if (l4c_ptr->smu_current_action != L4C_NO_ACTION)
                    {
                        l4c_sim_general_mrsp(src_id, KAL_TRUE);
                    }
                }
            #endif

                if (is_current_rac_activated() == KAL_TRUE)
                {
                    startup_flag = KAL_TRUE;
                }						
                l4c_clear_poweron_action(src_id); 
            }
            else if (msg_ptr->type == TYPE_UNSPECIFIED)
            {
                /**
                 * After PIN verfied, SMU is going to check SML. 
                 * TYPE_UNSPECIFIED is for print result code "OK" for AT+CPIN only.
                 * It supposed to receive another smu_security_cnf soon.
                 */
                if (src_id == LMMI_SRC)
                {
                    // Do nothing
                }
                else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                {
                    rmmi_ptr->current_src = src_id;
                    l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                }
            #ifdef __MBIM_SUPPORT__
                else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                {
                    l4c_sim_general_mrsp(src_id, KAL_TRUE);
                }
            #endif
            }
            else
            {
                l4c_ptr->sim_refresh = KAL_FALSE;

                if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                {
                    l4c_clear_poweron_action(src_id); 

                    if (l4c_ptr->smu_current_action != L4C_NO_ACTION)
                    {				   
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                    }

                    if (l4c_ptr->power_on_pin_check == KAL_FALSE)
                    {
                        l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                    }
                }
            #ifdef __MBIM_SUPPORT__
                else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                {
                    if (l4c_ptr->smu_current_action != L4C_NO_ACTION)
                    {
                        l4c_sim_general_mrsp(src_id, KAL_FALSE);
                    }
                }
            #endif
                else if (src_id == LMMI_SRC && l4c_ptr->power_on_pin_check == KAL_FALSE)
                {
                      if (msg_ptr->response == SMU_RES_OK)
                      {
                           l4c_smu_exe_verify_pin_lrsp(KAL_TRUE, msg_ptr->type, msg_ptr->chv_info);
                      }
                      else
                      {
                           l4c_smu_exe_verify_pin_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                      }
                }

                switch(msg_ptr->type)
                {
                    case TYPE_NP:
                    case TYPE_NSP:	
                    case TYPE_SP:					
                    case TYPE_CP:				
                    case TYPE_IMSI_LOCK:		
                    case TYPE_LINK_NS_SP:		
                    case TYPE_LINK_SIM_C:
                        if (msg_ptr->cphs_retry_count > 0)
                        {
                            break;
                        }
                        kal_trace(TRACE_INFO, INFO_CPHS_LOCK_BLOCKED);
                    case TYPE_SIM_CARD_BLOCKED:
                        l4c_ptr->smu_activated = L4C_SMU_ACTIVATE_FAIL;     
                        l4c_clear_poweron_action(src_id); 
                        if (is_current_rac_activated() == KAL_TRUE)
                        {
                            startup_flag = KAL_TRUE;
                        }
                        break;
                    default:
                        /* do nothing */
                        break;
                }
            } /*  Not No required */
        }

        if (startup_flag == KAL_TRUE && l4c_ptr->power_on_pin_check == KAL_TRUE)
        {
            l4c_clear_poweron_action(src_id);
            l4c_activate_sub_modules(src_id);
        }
    }              
    else if (l4c_ptr->smu_activated == L4C_SMU_ACTIVE && l4c_ptr->smu_current_action!=L4C_NO_ACTION)
    {
        if (msg_ptr->type == TYPE_NO_REQUIRED)
        {
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_TRUE);
            }
        #endif
            else
            {
                l4c_smu_exe_verify_pin_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->chv_info);
            }
        }
        else if (msg_ptr->type == TYPE_UNSPECIFIED)
        {
            /**
             * After PIN verfied, SMU is going to check SML. 
             * TYPE_UNSPECIFIED is for print result code "OK" for AT+CPIN only.
             * It supposed to receive another smu_security_cnf soon.
             */
            if (src_id == LMMI_SRC)
            {
                // [MAUI_02640601]
                // For MMI project, clear smu_action after SML check
                return;
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_TRUE);
            }
        #endif
        }
        else
        {
            /* ask for further passwd or display error */
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_FALSE);
            }
        #endif
            else
            {
                l4c_smu_exe_verify_pin_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
            }

            if (msg_ptr->type == TYPE_SIM_CARD_BLOCKED)
            {                            
                l4c_ptr->power_on_not_finish = KAL_TRUE;
                L4C_COMM_PTR->wap_init_flag = KAL_TRUE;      // Do not init WAP later
                l4c_reset_sub_modules(L4_PHB | L4_SMSAL); // Reset PHB here
            }
        }
    }
    else if (l4c_ptr->smu_activated == L4C_SMU_ACTIVATE_FAIL && l4c_ptr->smu_current_action!=L4C_NO_ACTION)
    {	
        /* For Phone lock check with no sim inserted */
        if (msg_ptr->type != TYPE_NO_REQUIRED)
        {
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_FALSE);
            }
        #endif
            else
            {
                if (l4c_ptr->power_on_pin_check == KAL_TRUE)
                {
                    l4c_smu_exe_verify_pin_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info); // mtk02480: why response this?
                    l4c_sim_passwd_required_lind(
                        msg_ptr->type,
                        is_sim_change,
                        msg_ptr->chv_info,
                        msg_ptr->cphs_retry_count);
                }
                else
                {
                    if (msg_ptr->response == SMU_RES_OK)
                    {
                        l4c_smu_exe_verify_pin_lrsp(KAL_TRUE, msg_ptr->type, msg_ptr->chv_info);
                    }
                    else
                    {
                        l4c_smu_exe_verify_pin_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                    }
                }
            }
        }
        else
        {
            if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                rmmi_ptr->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_sim_general_mrsp(src_id, KAL_TRUE);
            }
        #endif
            else
            {
                l4c_smu_exe_verify_pin_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->chv_info);
                if (msg_ptr->cause_present || l4c_ptr->power_on_pin_check == KAL_TRUE)
                {
                    /* SIM response NOT_INSERTED or FATAL_ERROR in start_cnf. 
                    After verify Phonelock, send sim_fail_ind to MMI */
                    l4c_sim_fail_lind(L4C_SIM_ERR(l4c_ptr->sim_error_cause));
                }
            }
        }					
    }
	
    if (l4c_ptr->power_on_pin_check == KAL_FALSE)
    {
        l4c_ptr->power_on_pin_check = KAL_TRUE;
    }

    l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_start_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_start_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    l4csmu_start_cnf_struct *msg_ptr = (l4csmu_start_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = msg_ptr->src_id;
    kal_uint8 is_sim_change = l4c_check_sim_status();

    if (l4c_ptr->smu_activated == L4C_SMU_INACTIVE)
    {

        if (l4c_ptr->sim_refresh == KAL_FALSE)
        {
        #ifdef __GEMINI__        	
            l4c_send_dual_sim_power_on_ind(src_id);
        #endif /* __GEMINI__ */ 

    	/************************************************************************************
    	  *  For PowerOn with first AT+CFUN=1/4 , we should always reponse "OK", no matter SIM inserted or not
    	  *************************************************************************************/	 	
            if (src_id == LMMI_SRC)
            {
                l4c_nw_cfun_state_lrsp(KAL_TRUE);
            }
            else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
            {
                RMMI_PTR->current_src = msg_ptr->src_id;  
                l4c_cfun_rrsp(KAL_TRUE, L4C_NO_CAUSE);  
            }
        #ifdef __MBIM_SUPPORT__
            else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
            {
                l4c_nw_cfun_state_mrsp(src_id, KAL_TRUE);                
            }
        #endif

        #ifdef __MBIM_SUPPORT__
            l4c_nw_cfun_state_mind();
        #endif
        }

    #if !defined(__MMI_FMI__)
        {
            kal_uint8 temp_src = RMMI_PTR->current_src;

            RMMI_PTR->current_src = RMMI_UNSOLICITED;
            if (msg_ptr->response == SMU_RES_OK)
            {
                l4c_sim_usim_type_rind(check_is_usim());
            }
            else
            {
                /* SIM error during start up */
                l4c_sim_status_update_rind(KAL_FALSE, SIM_ACCESS_ERROR);
            }
            RMMI_PTR->current_src = temp_src;
        }
    #endif

    #if defined(__OP01__)
        if (msg_ptr->response == SMU_RES_OK && msg_ptr->chv1_phonelock_status  == SMU_CHV1_NOT_REQUIRED)
        {
            l4c_op01_cardmode_rind(KAL_TRUE, check_is_usim());
        }
        else
        {
            l4c_op01_cardmode_rind(KAL_FALSE, check_is_usim());        
        }
    #endif

        l4c_ptr->sim_refresh = KAL_FALSE;

        if (msg_ptr->response == SMU_RES_OK)
        {
            l4c_sim_startup_info_ind(local_para_ptr, peer_buff_ptr);

            l4c_ptr->sim_detected = KAL_TRUE;
            l4c_ptr->single_sim_inserted_status = L4C_INSERTED;
            l4c_ptr->sim_error_cause = SIM_CMD_SUCCESS;

	     switch(msg_ptr->chv1_phonelock_status)
	     {
                case SMU_PHONELOCK_REQUIRED:
                    l4c_sim_passwd_required_lind(TYPE_PHONELOCK, is_sim_change, msg_ptr->chv_info, 0);
                    break;
                case SMU_CHV1_REQUIRED:
                    l4c_sim_passwd_required_lind(TYPE_CHV1, is_sim_change, msg_ptr->chv_info, 0);				
                    break;
                case SMU_UBCHV1_REQUIRED:
                    l4c_sim_passwd_required_lind(TYPE_UBCHV1, is_sim_change, msg_ptr->chv_info, 0);
                    break;
                case SMU_SIM_BLOCKED:
                    l4c_sim_passwd_required_lind(TYPE_SIM_CARD_BLOCKED, is_sim_change, msg_ptr->chv_info, 0);
                    l4c_activate_sub_modules(src_id);
                    l4c_clear_poweron_action(src_id);
                    l4c_ptr->smu_activated = L4C_SMU_ACTIVATE_FAIL;
                    break;
                case SMU_CHV1_NOT_REQUIRED:
                    l4c_ptr->sim_refresh = KAL_TRUE;
                    break;
                default:
                    break;
	     }
        }
        else
        {
            // SIM_NO_INSERTED or SIM_FATAL_ERROR

    	     l4c_clear_poweron_action(src_id);
            l4c_ptr->smu_activated = L4C_SMU_ACTIVATE_FAIL;
            l4c_ptr->sim_detected = KAL_FALSE;
            l4c_ptr->single_sim_inserted_status = L4C_NO_INSERTED;
            l4c_ptr->sim_error_cause = msg_ptr->cause;

            // PhoneLock when No SIM Inserted
            if (msg_ptr->chv1_phonelock_status == SMU_PHONELOCK_REQUIRED)
            {
                l4c_sim_passwd_required_lind(TYPE_PHONELOCK, is_sim_change, msg_ptr->chv_info, 0);
            }
            else                
            {
                l4c_sim_fail_lind(L4C_SIM_ERR(msg_ptr->cause));
            }

            if (is_current_rac_activated() == KAL_TRUE)
            {
                l4c_activate_sub_modules(src_id);
            }
        }

    #ifdef __MBIM_SUPPORT__
        l4c_sim_status_update_mind();
    #endif
    }
    else
    {
        /* error */
        //kal_trace(TRACE_INFO, INFO_HERE6);
    }
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_security_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_security_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    rmmi_context_struct *rmmi_ptr = RMMI_PTR;
    l4csmu_security_cnf_struct *msg_ptr = (l4csmu_security_cnf_struct*) local_para_ptr;
    kal_uint8 src_id = msg_ptr->src_id;
    kal_uint8 is_sim_change = l4c_check_sim_status();  // report sim change for MMI
    sim_chv_status_struct chv_status;

    l4csmu_get_chv_info_status(NULL,&chv_status);	 
       
    switch (l4c_ptr->smu_current_action)
    {
	     case L4C_NO_ACTION:
            case CPIN_EXE:
                l4c_sim_security_check(local_para_ptr, peer_buff_ptr);
                break;    
            case CACM_EXE:
            {
                l4ccsm_cc_acm_reset_req_struct *param_ptr;

		  l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
 
                if (msg_ptr->type != TYPE_NO_REQUIRED)  /* need passwd again */
                {
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                    if (src_id == LMMI_SRC)
                    {
                        l4c_cc_exe_reset_acm_lrsp(KAL_FALSE, msg_ptr->type);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                    }
                }
                else
                {
                    param_ptr = (l4ccsm_cc_acm_reset_req_struct*)
                        construct_local_para((kal_uint16) sizeof(l4ccsm_cc_acm_reset_req_struct), TD_RESET);

                    param_ptr->src_id = src_id;
                    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_ACM_RESET_REQ, param_ptr, NULL, 0);
                }

                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                break;
            }
            case CAMM_EXE:
            {
		  l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
				
                if (msg_ptr->type != TYPE_NO_REQUIRED)
                {
                    free_local_para(l4c_ptr->cc_parameter[src_id].data);
                    l4c_ptr->cc_parameter[src_id].length = 0;
                    l4c_ptr->cc_current_action[src_id] = L4C_NO_ACTION;
                    if (src_id == LMMI_SRC)
                    {
                        l4c_cc_set_acm_max_lrsp(KAL_FALSE, msg_ptr->type);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                    }
                }
                else
                {
                    l4c_send_msg_to_csm(MSG_ID_L4CCSM_CC_ACMMAX_SET_REQ, (void*)(l4c_ptr->cc_parameter[src_id].data), NULL, 0);
                }

                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                break;
            }
            case CPUC_EXE:
            {
                if (msg_ptr->type != TYPE_NO_REQUIRED)
                {
                    free_local_para(l4c_ptr->parameter[src_id].data);
                    l4c_ptr->parameter[src_id].length = 0;
		      l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);

                    if (src_id == LMMI_SRC)
                    {
                        l4c_smu_set_puc_params_lrsp(KAL_FALSE, msg_ptr->type);
                    }
                    else
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                    }
                }
                else
                {
                    l4c_send_msg_to_smu(MSG_ID_L4CSMU_PUCT_WRITE_REQ, (void*)(l4c_ptr->parameter[src_id].data));
                }

                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                break;
            }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif			
            case XDN_EXE:
            {
                if (msg_ptr->type != TYPE_NO_REQUIRED)
                {
                    free_local_para(l4c_ptr->parameter[src_id].data);
                    l4c_ptr->parameter[src_id].length = 0;
		      l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
					
                    if (src_id == LMMI_SRC)
                    {
                        l4c_smu_exe_dial_mode_lrsp(KAL_FALSE, msg_ptr->type);
                    }
                    else
                    {
			   /* mtk02514_081205: modify casue="rmmi_ptr->cmd_error_cause" to fix +CMEE output
			        this rmmi_ptr->cmd_error_cause will be updated in the function smu_security_cnf_handler*/
                        rmmi_ptr->current_src = src_id;			        
			   l4c_smu_exe_dial_mode_rrsp(KAL_FALSE, rmmi_ptr->cmd_error_cause); 

   			   //[MAUI_01296349] mtk02480: 27.007: +CPIN? return  PIN2/PUK2 if previous command execured authentication failure i.e. cmee_err=17/18
			   rmmi_ptr->last_executed_P2_fail = rmmi_ptr->cmd_error_cause; 
                    }
                }
                else
                {
                    l4c_send_msg_to_smu(MSG_ID_L4CSMU_DIAL_MODE_REQ, l4c_ptr->parameter[src_id].data);
                }

                l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                break;
            }
            case CPWD_EXE:
            {
                l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
				
                if (msg_ptr->type != TYPE_NO_REQUIRED)
                {
                    if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                    {
 			   rmmi_ptr->last_executed_P2_fail = rmmi_ptr->cmd_error_cause; //[MAUI_01296349] mtk02480: 27.007: +CPIN? return  PIN2/PUK2 if previous command execured authentication failure i.e. cmee_err=17/18				
                    
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
			   l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);						
                    }
                #ifdef __MBIM_SUPPORT__
                    else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                    {
                        l4c_smu_exe_change_password_mrsp(src_id, KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                    }
                #endif
                    else
                    {
                        l4c_smu_exe_change_password_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                    }
                }
                else
                {
                    if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
			   l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);						
                    }
                #ifdef __MBIM_SUPPORT__
                    else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                    {
                        l4c_smu_exe_change_password_mrsp(src_id, KAL_TRUE, msg_ptr->type, msg_ptr->chv_info);
                    }
                #endif
                    else
                    {
                        l4c_smu_exe_change_password_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->chv_info);
                    }
                }
                break;
            }
            case CLCK_EXE:
            {
                l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);

                if ((l4c_ptr->power_on_not_finish == KAL_TRUE) &&
                    (l4c_ptr->smu_activated == L4C_SMU_INACTIVE) && l4c_ptr->power_on_pin_check == KAL_TRUE)
                {
                    l4c_sim_passwd_required_lind(
                        msg_ptr->type,
                        is_sim_change,
                        msg_ptr->chv_info,
                        msg_ptr->cphs_retry_count);
                }
                else
                {
                    if (msg_ptr->type != TYPE_NO_REQUIRED)
                    {

                        if (src_id == LMMI_SRC)
                        {
                            l4c_smu_exe_lock_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                        }
                        else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                        {
                            rmmi_ptr->current_src = src_id;
                            l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
              	       l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);

				rmmi_ptr->last_executed_P2_fail = rmmi_ptr->cmd_error_cause;  //[MAUI_01296349] mtk02480: 27.007: +CPIN? return  PIN2/PUK2 if previous command execured authentication failure i.e. cmee_err=17/18			   
                        }
                    #ifdef __MBIM_SUPPORT__
                        else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)
                        {
                            l4c_smu_exe_lock_mrsp(src_id, KAL_FALSE, msg_ptr->chv_info, msg_ptr->type);
                        }
                    #endif
                    }
                    else
                    {
                        if (src_id == LMMI_SRC)
                        {
                            l4c_smu_exe_lock_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->chv_info);
                        }
                        else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
                        {							
                            rmmi_ptr->current_src = src_id;
                            l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);			
              	       l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);				   
                        }
                    #ifdef __MBIM_SUPPORT__
                        else if (src_id >= MBCI_SRC && src_id <= MBCI_SRC_END)                           
                        {
                            l4c_smu_exe_lock_mrsp(src_id, KAL_TRUE, msg_ptr->chv_info, msg_ptr->type);
                        }
                    #endif
                    }
                }

		   // mtk02480:  why need?
                if (l4c_ptr->power_on_pin_check == KAL_FALSE)
                {
                    l4c_ptr->power_on_pin_check = KAL_TRUE;
                }
                break;
            }			
            case CPIN2_EXE:
	     {
                l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
				
                if (msg_ptr->type == TYPE_NO_REQUIRED)
                {
                    if (src_id >= RMMI_SRC)
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
                        l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                    }
                    else
                    {
                        l4c_smu_exe_verify_pin_lrsp(KAL_TRUE, L4C_NO_CAUSE, msg_ptr->chv_info);
                    }
                }
                else
                {
                    if (src_id >= RMMI_SRC)
                    {
                        rmmi_ptr->current_src = src_id;
                        l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->rmmi_error_cause);
                        l4c_sim_verify_pin_result_lind(msg_ptr->type, msg_ptr->chv_info,chv_status);
                    }
                    else
                    {
                        l4c_smu_exe_verify_pin_lrsp(KAL_FALSE, msg_ptr->type, msg_ptr->chv_info);
                    }
                }

                if (l4c_ptr->power_on_pin_check == KAL_FALSE)
                {
                    l4c_ptr->power_on_pin_check = KAL_TRUE;
                }				
                break;	
	     }
            default:
                break;
    }

#if defined(__OP01__)
    if (msg_ptr->type == TYPE_NO_REQUIRED || msg_ptr->type == TYPE_UNSPECIFIED)
    {
        l4c_op01_cardmode_rind(KAL_TRUE, check_is_usim());
    }
    else
    {
        l4c_op01_cardmode_rind(KAL_FALSE, check_is_usim());        
    }
#endif

#ifdef __MBIM_SUPPORT__
    l4c_sim_status_update_mind();
#endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_mmi_info_ind_hdlr
 * DESCRIPTION
 *  mtk00468 add in 030610 for release 0325
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4csmu_mmi_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_mmi_info_ind_struct *msg_ptr = NULL;
    kal_uint8 temp_src;
    kal_uint8 imsi[9],imsi_string[17];   

    l4csmu_get_imsi((kal_uint8*) imsi);
    imsi[8] = 0xff;
    convert_to_digit((kal_uint8*) imsi, imsi_string);

    msg_ptr = (l4csmu_mmi_info_ind_struct*) local_para_ptr;
    L4C_PTR->mmi_info_received = KAL_TRUE;

    l4c_cphs_mmi_info_lind(
        msg_ptr->is_spn_valid,
        msg_ptr->is_spn_RPLMN_required,
        (kal_uint8*) (msg_ptr->spn),
        (kal_uint8) msg_ptr->is_opname_valid,
        (kal_uint8*) (msg_ptr->opname),
        (kal_uint8) msg_ptr->is_sopname_valid,
        (kal_uint8*) (msg_ptr->sopname),
        (kal_uint8) msg_ptr->no_msisdn,
        msg_ptr->msisdn,
        (kal_uint8) msg_ptr->no_info_num,
        (l4csmu_info_num_struct*) (msg_ptr->info_num),
        (kal_uint8) msg_ptr->is_valid_csp,
        (kal_uint8*) msg_ptr->csp,
        (kal_uint8) msg_ptr->is_puct_valid,
        (kal_uint8*) msg_ptr->ef_puct,
        msg_ptr->is_autolock_enable,
        msg_ptr->autolock_result,
        msg_ptr->autolock_remain,
        msg_ptr->is_valid_ef_acting_hplmn,
        (kal_uint8*) msg_ptr->ef_acting_hplmn,
        imsi_string,   
        msg_ptr->digits_of_mnc,  
        msg_ptr->is_usim,
        msg_ptr->is_valid_ef_ehplmn,
        msg_ptr->num_of_ehplmn,
        (kal_uint8*) msg_ptr->ef_ehplmn);
    
    if (msg_ptr->no_info_num)
    {
        if (msg_ptr->info_num == NULL)
        {
            ASSERT(0);
        }

        free_ctrl_buffer(msg_ptr->info_num);
    }

    temp_src = RMMI_PTR->current_src;
    RMMI_PTR->current_src = RMMI_UNSOLICITED;

    l4c_cphs_mmi_info_rind(
        msg_ptr->is_autolock_enable, 
        msg_ptr->autolock_result,
        msg_ptr->is_valid_csp,
        msg_ptr->csp,
        msg_ptr->is_spn_valid,
        (kal_uint8*) (msg_ptr->spn));
	
    RMMI_PTR->current_src = temp_src;		

#ifdef __MBIM_SUPPORT__
    l4c_cphs_mmi_info_mind(msg_ptr->no_msisdn, msg_ptr->msisdn);
#endif

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_mmrr_ready_ind_hdlr
 * DESCRIPTION
 *  mtk00468 add in 030610 for release 0325
 *  This function is just for template.
 * PARAMETERS
 *  local_para_ptr      [?]             
 *  peer_buff_ptr       [?]             
 *  a(?)                [IN/OUT]        First variable, used as returns
 *  b(?)                [IN]            Second variable
 * RETURNS
 *  the description of return value, if any.(?)
 *****************************************************************************/
void l4csmu_mmrr_ready_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;

    l4c_sim_cipher_lind((kal_bool)l4csmu_get_cipher_ind_status(), KAL_FALSE, 0xff, 0xff); //gmmreg_cipher_enum

#if !defined(__MMI_FMI__)
    l4c_sim_cipher_rind((kal_bool)l4csmu_get_cipher_ind_status(), KAL_FALSE, 0xff, 0xff);
#endif

    l4c_ptr->sim_refresh = KAL_FALSE;

#ifndef WISDOM_MMI
    l4c_ptr->mmrr_ready_flag = KAL_TRUE;

    if (is_current_rac_activated() == KAL_TRUE && l4c_ptr->smu_activated == L4C_SMU_ACTIVE && l4c_ptr->cfun_state == 1)
    {
        if (l4c_ptr->cc_state[LMMI_SRC] == L4C_COMMAND_STATE)
        {
        #ifdef __MOD_RAC__
            l4crac_reg_req_struct *param_ptr;

        /* --------------------------------------------------------
		 *   MMRR_READY_IND might comes during below actions
		 *    We should not send REG_REQ in here. 
		 *    REG_REQ will be sent later after action finished
		 * --------------------------------------------------------*/
            if ((l4c_ptr->rac_current_action == PWRON_SET_RAT_MODE) || 
                (l4c_ptr->rac_current_action == RFON_SET_RAT_MODE) || 
                (l4c_ptr->rac_current_action == SET_RAT_MODE_DETACH) ||
                (l4c_ptr->rac_current_action == SET_RAT_MODE) ||
                (l4c_ptr->rac_current_action == PWROFF_DETACH) || 
                (l4c_ptr->rac_current_action == RFOFF_DETACH) || 
                (l4c_ptr->rac_current_action == SET_HSPA_MODE) || 
                (l4c_ptr->rac_current_action == CBND_SET))
             {
             		return;
             }

        #if defined(__ENS_RAT_BALANCING__) && defined(__UMTS_RAT__)
            {
                l4c_rat_enum rat_mode = l4c_nw_check_ef_rat_mode();

                if (rat_mode != l4crac_get_rat_mode())
                {
                    l4c_nw_set_rat_mode_req(L4C_SRC, rat_mode);
                    return;
                }
            }
        #endif

            param_ptr = (l4crac_reg_req_struct*)
                construct_local_para((kal_uint16) sizeof(l4crac_reg_req_struct), TD_RESET);

            /* mm normal plmn sel */
	     param_ptr->src_id = LMMI_SRC;	  
            param_ptr->search_type = MMI_SEARCH_NORMAL; 
            l4c_send_msg_to_rac(MSG_ID_L4CRAC_REG_REQ, param_ptr);

	    l4c_ptr->has_deregistered = KAL_FALSE;

            l4c_set_user_action(L4C_RAC, LMMI_SRC, PWRON_ATTACH);

        #endif /* __MOD_RAC__ */ 
        }
    }
#endif	
    return;
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_plmn_sel_write_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_plmn_sel_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_plmn_sel_write_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4csmu_plmn_sel_write_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->smu_current_action == CPOL_EXE)
    {
        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
		
        if (msg_ptr->response == SMU_RES_FALSE)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_smu_set_preferred_oper_list_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_smu_set_preferred_oper_list_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
        }
    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sim_access_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sim_access_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_sim_access_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (l4csmu_sim_access_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (msg_ptr->response == SMU_RES_FALSE)
    {
        if (msg_ptr->cause_present == KAL_TRUE)
        {
            result.flag = L4C_ERROR;
            result.cause = msg_ptr->cause;
        }
        else
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_NO_CAUSE;
        }
    }
    else
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }

    if (src_id == LMMI_SRC)
    {
      #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
      #endif
    }
    else
    {
        RMMI_PTR->current_src = src_id;
        l4c_smu_exe_restricted_access_rrsp(
            result,
            msg_ptr->sw1,
            msg_ptr->sw2,
            msg_ptr->length,
            (kal_uint8*) (msg_ptr->res_data));
    }

    return;
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_puct_write_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_puct_write_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __AOC_SUPPORT__
    l4csmu_puct_write_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4csmu_puct_write_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->smu_current_action == CPUC_EXE)
    {
        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
        if (msg_ptr->response == SMU_RES_FALSE)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_smu_set_puc_params_lrsp(KAL_FALSE, msg_ptr->cause);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_sim_general_rrsp(KAL_FALSE, msg_ptr->cause);
            }
        }
        else
        {
            if (src_id == LMMI_SRC)
            {
                l4c_smu_set_puc_params_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }

        }

        L4C_PTR->parameter[src_id].length = 0;
        L4C_PTR->parameter[src_id].data = NULL;

    }
    else
    {
        /* wrong msg error */
    }
    return;
#endif    
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_sms_depersonalization_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
#if defined (__SMS_DEPERSONALIZATION__)
void l4csmu_sms_depersonalization_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SIM_ME_LOCK__
    l4csmu_sms_depersonalization_cnf_struct *msg_ptr;
    l4csmsal_sms_depersonalization_rsp_struct *param_ptr;


    msg_ptr = (l4csmu_sms_depersonalization_cnf_struct*) local_para_ptr;
    param_ptr = (l4csmsal_sms_depersonalization_rsp_struct*) construct_local_para(
                                                        (kal_uint16) sizeof(l4csmsal_sms_depersonalization_rsp_struct),
                                                        TD_RESET);

    param_ptr->response = msg_ptr->response;
    param_ptr->cause_present = msg_ptr->cause_present;
    param_ptr->cause = msg_ptr->cause;
    param_ptr->length = msg_ptr->length;


    l4c_send_msg(L4_MODULE(MOD_SMSAL, (l4c_current_mod_id - MOD_L4C)), 
            MSG_ID_L4CSMSAL_SMS_DEPERSONALIZATION_RSP, SMSAL_L4C_SAP, param_ptr, peer_buff_ptr);

#endif
}

void l4csmu_sml_status_notify_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SIM_ME_LOCK__
    l4c_smu_sml_status_notify_lind();
#endif
}
#endif

/*****************************************************************************
 * FUNCTION
 *  l4csmu_dial_mode_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_dial_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4csmu_dial_mode_cnf_struct *msg_ptr = NULL;
    kal_uint8 src_id;

    msg_ptr = (l4csmu_dial_mode_cnf_struct*) local_para_ptr;

    src_id = msg_ptr->src_id;

    if (L4C_PTR->smu_current_action == XDN_EXE)
    {
        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
        if (msg_ptr->response == SMU_RES_FALSE)
        {
            if (src_id == LMMI_SRC)
            {
                l4c_smu_exe_dial_mode_lrsp(KAL_FALSE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_smu_exe_dial_mode_rrsp(KAL_FALSE, L4C_NO_CAUSE);
            }
        }
        else
        {
            /* notify PHB for XDN change */
            l4c_reset_sub_modules(L4_PHB);

            if (src_id == LMMI_SRC)
            {
                l4c_smu_exe_dial_mode_lrsp(KAL_TRUE, L4C_NO_CAUSE);
            }
            else
            {
                RMMI_PTR->current_src = src_id;
                l4c_smu_exe_dial_mode_rrsp(KAL_TRUE, L4C_NO_CAUSE);
            }

        }
        L4C_PTR->parameter[src_id].length = 0;
        L4C_PTR->parameter[src_id].data = NULL;

    }
    else
    {
        /* wrong msg error */
    }
    return;
}


/*****************************************************************************
 * FUNCTION
 *  sim_error_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_error_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    l4c_context_struct *l4c_ptr = L4C_PTR;
    sim_error_ind_struct *msg_ptr = (sim_error_ind_struct*) local_para_ptr;
    smu_pending_password_id_enum pending_password_id = l4csmu_get_pending_password_id();

    switch (msg_ptr->cause)
    {
        case SIM_PUK1:
            l4c_ptr->mmrr_ready_flag = KAL_FALSE;
            l4c_ptr->mmi_info_received = KAL_FALSE;
            break;

        case SIM_CARD_REMOVED:
        case SIM_ACCESS_ERROR:       
        case SIM_IMEI_LOCK_FAIL:
        case SIM_ACCESS_PROFILE_ON:
        case DUALSIM_DISCONNECTED:
        case SIM_PLUG_OUT:
        case SIM_VSIM_OFF:
        case SIM_RECOVERY_START:

        #if !defined(__MMI_FMI__)
            l4c_sim_status_update_rind(KAL_FALSE, msg_ptr->cause);
        #endif

        #ifdef __GEMINI__
            l4c_check_dual_sim_insert_status(l4c_current_mod_id, KAL_FALSE);
        #endif
            l4c_ptr->single_sim_inserted_status = L4C_NO_INSERTED;
            l4c_ptr->sim_detected = KAL_FALSE;

            // If plug out SIM card before SIM startup, keep stay in INACTIVE
            if (l4c_ptr->smu_activated != L4C_SMU_INACTIVE)
            {
                l4c_ptr->smu_activated = L4C_SMU_ACTIVATE_FAIL;
            }

            if ((msg_ptr->cause == SIM_ACCESS_ERROR) || (msg_ptr->cause == SIM_IMEI_LOCK_FAIL))
            {
                l4c_ptr->sim_error_cause = SIM_FATAL_ERROR;
            }
            else
            {
                l4c_ptr->sim_error_cause = SIM_NO_INSERTED;
            }

            l4c_reset_sub_modules(L4_SMSAL);
            
            // [MAUI_01792021] If MMI is waitting for Phonelock verification, send  sim_fail_ind after verfication 
            if (pending_password_id != ID_PHONELOCK)
            {
                l4c_sim_fail_lind(msg_ptr->cause);
            }
            break;

        case SIM_REFRESH:
        case SIM_ACCESS_PROFILE_OFF:
        case DUALSIM_CONNECTED:
        case SIM_PLUG_IN:
        case SIM_VSIM_ON:
        case SIM_RECOVERY_END:

        #if !defined(__MMI_FMI__)
            l4c_sim_status_update_rind(KAL_TRUE, msg_ptr->cause);
        #endif

            l4c_sim_fail_lind(msg_ptr->cause);
        #ifdef __GEMINI__
            l4c_check_dual_sim_insert_status(l4c_current_mod_id, KAL_TRUE);
        #ifdef __SIM_ME_LOCK__
            if (msg_ptr->cause == SIM_PLUG_IN)
            {
                /* inform L4C root to reset fake pending password table */
                l4c_root_set_pending_password_id(l4c_current_mod_id-MOD_L4C, ID_SIM_BUSY);
            }
        #endif
        #endif
            l4c_ptr->single_sim_inserted_status = L4C_INSERTED;
            l4c_ptr->sim_detected = KAL_TRUE;
            l4c_ptr->sim_refresh = KAL_TRUE;
            l4c_ptr->smu_activated = L4C_SMU_INACTIVE;
            l4c_ptr->mmrr_ready_flag = KAL_FALSE;   // [MAUI_01704887]
            l4c_ptr->mmi_info_received = KAL_FALSE;

            l4crac_cancel_retry_action();  // [DUMA00208245], cancel pending PLMN_LITS/PLMN_SEARCH in RAC

             // [MAUI_02661863] Only clear rac action when previous action is COPS_EXE/COPS_TEST
            if (l4c_previous_rac_action_rsp() == KAL_TRUE)
            {
                l4c_set_user_action(L4C_RAC, L4C_NO_USER, L4C_NO_ACTION);
            }
            break;

        default:
            // un-handle cause
            break;
    }

#ifdef __MBIM_SUPPORT__
    l4c_sim_status_update_mind();
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_set_personalization_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_set_personalization_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SIM_ME_LOCK__
    l4csmu_set_personalization_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;

    msg_ptr = (l4csmu_set_personalization_cnf_struct*) local_para_ptr;

    if (msg_ptr->result == KAL_TRUE)
    {
        result.flag = L4C_OK;
    	 result.cause = L4C_NO_CAUSE;		
    }
    else
    {
        result.flag = L4C_ERROR;
    	 result.cause = L4C_GEN_CAUSE;				
    }
    if (msg_ptr->src_id == LMMI_SRC)

    l4c_smu_set_personalization_lrsp(
        result,
        msg_ptr->category,
        msg_ptr->op,
        msg_ptr->state,
        msg_ptr->retry_count,
        msg_ptr->num_of_sets,
        msg_ptr->space_of_sets);
    else if (msg_ptr->src_id >= RMMI_SRC) 
    {
    	 RMMI_PTR->current_src = msg_ptr->src_id; 
        l4c_general_rrsp((kal_bool)msg_ptr->result, L4C_NO_CAUSE);	
    }
#endif    
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_sml_status_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sml_status_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SIM_ME_LOCK__
    l4csmu_sml_status_cnf_struct *msg_ptr = NULL;
    l4c_result_struct result;
    kal_uint8 bcd_imsi[9];
    kal_uint8 imsi[17];

    msg_ptr = (l4csmu_sml_status_cnf_struct*) local_para_ptr;

    result.flag = L4C_OK;
    result.cause = L4C_NO_CAUSE;

    kal_mem_cpy(bcd_imsi, msg_ptr->ef_imsi, 8);
    bcd_imsi[8] = 0xff;
    convert_to_digit(bcd_imsi, imsi);

    if (msg_ptr->src_id == LMMI_SRC)
    {
        l4c_smu_sml_status_lrsp(
            result,
            msg_ptr->state,
            msg_ptr->retry_count,
            msg_ptr->autolock_count,
            msg_ptr->num_of_sets,
            msg_ptr->total_size_of_cat,
            msg_ptr->key_state,
            imsi,
            msg_ptr->is_valid_gid1,
            msg_ptr->ef_gid1,
            msg_ptr->is_valid_gid2,
            msg_ptr->ef_gid2,
            msg_ptr->digits_of_mnc);
    }
    else if (msg_ptr->src_id >= RMMI_SRC) 
    {
   	RMMI_PTR->current_src = msg_ptr->src_id; 
	l4c_smu_sml_status_rrsp(KAL_TRUE,
                                msg_ptr->state,
                                msg_ptr->retry_count,
                                msg_ptr->autolock_count,
                                msg_ptr->num_of_sets,
                                msg_ptr->total_size_of_cat,
                                msg_ptr->key_state,
                                imsi,
                                msg_ptr->is_valid_gid1,
                                msg_ptr->ef_gid1,
                                msg_ptr->is_valid_gid2,
                                msg_ptr->ef_gid2,
                                msg_ptr->digits_of_mnc);
    }
#endif
}


/*****************************************************************************
 * FUNCTION
 *  l4csmu_update_sim_status_ind
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rmmi_cmd_allow          [IN]        
 *  rmmi_error_cause        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_update_sim_status_ind(kal_bool rmmi_cmd_allow, kal_uint16 rmmi_error_cause)
{
#if defined(__GEMINI__) && defined(__DISABLE_SIM2_AT_SUPPORT__)//mtk01616_100511: prevent SIM2 event to update RMMI context	
    if(l4c_current_mod_id == MOD_L4C_2)
        return;		
#endif

    RMMI_PTR->command_allow = rmmi_cmd_allow;
    RMMI_PTR->cmd_error_cause = rmmi_error_cause;
    return;

}

/*****************************************************************************
 * FUNCTION
 *  sim_o2_prepay_sim_ind_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void sim_o2_prepaid_sim_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __SIM_O2_PREPAID_SIM_DETECT__
    sim_o2_prepaid_sim_ind_struct *msg_ptr = NULL;
    msg_ptr = (sim_o2_prepaid_sim_ind_struct*) local_para_ptr;	
    l4c_sim_o2_prepaid_sim_lind(msg_ptr->is_o2_prepaid_sim);
#endif
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_sim_read_plmn_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rmmi_cmd_allow          [IN]        
 *  rmmi_error_cause        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sim_read_plmn_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	sim_read_plmn_cnf_struct *msg_ptr;
	l4c_result_struct result;
	kal_uint8 src_id;

	msg_ptr = (sim_read_plmn_cnf_struct*)local_para_ptr;
	src_id = msg_ptr->src_id;

	if (msg_ptr->result == SIM_CMD_SUCCESS)
	{
		result.flag = L4C_OK;
		result.cause = L4C_NO_CAUSE;
	}
	else
	{
		result.flag = L4C_ERROR;
		result.cause = msg_ptr->result;
	}

	if (msg_ptr->file_size > MAX_SUPPORT_PLMN_DATA_SIZE)
	{
		ASSERT(0); /* should not exceed than max plmn file size */ 
	}

	if (src_id == LMMI_SRC)
	{
		l4c_sim_read_plmn_lrsp(msg_ptr->access_id, msg_ptr->file_idx, result, msg_ptr->file_size, msg_ptr->file);
	}
	else
	{
		// rrsp to RMMI
	}
	
}

/*****************************************************************************
 * FUNCTION
 *  l4csmu_sim_write_plmn_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rmmi_cmd_allow          [IN]        
 *  rmmi_error_cause        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sim_write_plmn_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	sim_write_plmn_cnf_struct *msg_ptr;
	l4c_result_struct result;
	kal_int8 src_id;

	msg_ptr = (sim_write_plmn_cnf_struct*)local_para_ptr;
	src_id = msg_ptr->src_id;

	if (msg_ptr->result == SIM_CMD_SUCCESS)
	{
		result.flag = L4C_OK;
		result.cause = L4C_NO_CAUSE;
	}
	else
	{
		result.flag = L4C_ERROR;
		result.cause = msg_ptr->result;
	}

	if (src_id == LMMI_SRC)	
	{
		l4c_sim_write_plmn_lrsp(msg_ptr->access_id, msg_ptr->file_idx, result);
	}
	else
	{
		// rrsp to RMMI
	}
	
}


#if defined(__SIM_SEARCH_RECORD_SUPPORT__)/* MAUI_02953154 */
/*****************************************************************************
 * FUNCTION
 *  l4csmu_sim_search_record_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void l4csmu_sim_search_record_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	sim_search_record_cnf_struct *msg_ptr;
	kal_bool result = KAL_FALSE;
      kal_uint16 cause = L4C_NO_CAUSE; 	
	kal_uint8 src_id;

	msg_ptr = (sim_search_record_cnf_struct*)local_para_ptr;
	src_id = msg_ptr->src_id;

	if (msg_ptr->result == SIM_CMD_SUCCESS)
	{
		result = KAL_TRUE;
	}
	else
	{
		result = KAL_FALSE;
		cause = msg_ptr->result;
	}

	if (src_id == LMMI_SRC)
	{
		l4c_sim_search_record_lrsp(result,cause,msg_ptr->access_id, msg_ptr->record_num, msg_ptr->record);
	}
	else
	{
		// rrsp to RMMI
	}
	
}
#endif
//mtk02514_nfc
#if defined(__CSIM__) || defined(__CGLA__)/* MAUI_03082391 */
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_apdu_access_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_apdu_access_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr) 	
{
    sim_apdu_access_cnf_struct *msg_ptr;
    kal_uint8 src_id;
    l4c_result_struct result;

    msg_ptr = (sim_apdu_access_cnf_struct*)local_para_ptr; 
    src_id = msg_ptr->src_id;

    if ((L4C_PTR->smu_current_action == CSIM_EXE) ||
        (L4C_PTR->smu_current_action == CGLA_EXE))
    {	
        if (msg_ptr->result == SIM_CMD_SUCCESS)
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        else
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;		
        }

        if (src_id == LMMI_SRC)
        {
        }
        else if (src_id >= RMMI_SRC)
        {
            RMMI_PTR->current_src = src_id;
            msg_ptr->rsp_len = (msg_ptr->rsp_len > APDU_RSP_MAX_LEN) ? APDU_RSP_MAX_LEN : msg_ptr->rsp_len;
            l4c_sim_apdu_access_rrsp(result, msg_ptr->rsp_len, msg_ptr->rsp,L4C_PTR->smu_current_action);
        }

        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
    } 
}
#endif

#ifdef __UICC_CHANNEL_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_manage_channel_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_manage_channel_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_manage_channel_cnf_struct *msg_ptr;
    kal_uint8 src_id;
    l4c_result_struct result;

    msg_ptr = (sim_manage_channel_cnf_struct*)local_para_ptr; 
    src_id = msg_ptr->src_id;

    if ((L4C_PTR->smu_current_action == CCHO_EXE) ||
        (L4C_PTR->smu_current_action == CCHC_EXE))
    {	
        if (msg_ptr->result == SIM_CMD_SUCCESS)
        {
            result.flag = L4C_OK;
            result.cause = L4C_NO_CAUSE;
        }
        else
        {
            result.flag = L4C_ERROR;
            result.cause = L4C_GEN_CAUSE;		
        }

        if (src_id == LMMI_SRC)
        {
        }
        else if (src_id >= RMMI_SRC)
        {
            RMMI_PTR->current_src = src_id;
            l4c_sim_manage_channel_rrsp(result, msg_ptr->channel_id, L4C_PTR->smu_current_action);
        }

        l4c_set_user_action(L4C_SMU, L4C_NO_USER, L4C_NO_ACTION);
    } 
}
#endif


/*****************************************************************************
 * FUNCTION
 *  l4c_sim_vsim_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_vsim_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
#ifdef __VSIM__
	l4c_sim_set_vsim_mode_cnf_struct *msg_ptr;
	kal_uint8 src_id;
	msg_ptr = (l4c_sim_set_vsim_mode_cnf_struct*)local_para_ptr;
	src_id = msg_ptr->src_id;

	if (msg_ptr->result == SIM_CMD_SUCCESS)
	{
		if (src_id == LMMI_SRC)
		{
			// currently not used 
		}
		else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
		{
              	RMMI_PTR->current_src = src_id;
              	l4c_sim_general_rrsp(KAL_TRUE, L4C_NO_CAUSE);
		}
	}
	else
	{
		if (src_id == LMMI_SRC)
		{
			// currently not used 
		}
		else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
		{
              	RMMI_PTR->current_src = src_id;
              	l4c_sim_general_rrsp(KAL_FALSE, RMMI_ERR_UNSPECIFIED);
		}	
	}	
#endif
}

/*****************************************************************************
 * FUNCTION
 *  sim_reset_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void sim_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_reset_cnf_struct *msg_ptr;
    kal_uint8 sim_config = 0xFF;	

    msg_ptr = (sim_reset_cnf_struct*)local_para_ptr;

    // SIM been active
    L4C_PTR->sim_poweroff = KAL_FALSE;

#ifdef __GEMINI__
    l4c_check_dual_sim_insert_status(l4c_current_mod_id, msg_ptr->is_sim_inserted);
    sim_config = L4C_COMM_PTR->dual_sim_mode_setting;
#endif
    L4C_PTR->single_sim_inserted_status = msg_ptr->is_sim_inserted;

    if (msg_ptr->src_id==LMMI_SRC)
    {
        l4c_sim_reset_lrsp((kal_bool)msg_ptr->is_sim_inserted, sim_config);
    }
#if defined(__GEMINI__)
    else if (msg_ptr->src_id==LMMI_SRC2)
    {
        l4c_root_sim_reset_rsp(l4c_current_mod_id, msg_ptr->is_sim_inserted);
    }
#endif        
    else if (msg_ptr->src_id >= RMMI_SRC)
    {
        RMMI_PTR->current_src = msg_ptr->src_id;
        l4c_sim_reset_rrsp((kal_bool)msg_ptr->is_sim_inserted);
    }
}

#if !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  sim_authenticate_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
void sim_authenticate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_authenticate_cnf_struct *msg_ptr;
    kal_uint8 src_id;
    l4c_result_struct result;

    msg_ptr = (sim_authenticate_cnf_struct*)local_para_ptr; 
    src_id = msg_ptr->src_id;

    if (msg_ptr->result == SIM_CMD_SUCCESS)
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }
    else
    {
        result.flag = L4C_ERROR;
        result.cause = msg_ptr->result;        
    }

    if (src_id == LMMI_SRC)
    {
        // TODO
    }
    else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {
        kal_uint8 sw1 = (kal_uint8)(msg_ptr->status_word >> 8);
        kal_uint8 sw2 = (kal_uint8)(msg_ptr->status_word & 0x00FF);
    
        RMMI_PTR->current_src = src_id;
        l4c_sim_authenticate_rrsp(
                result,
                sw1,
                sw2,
                msg_ptr->auth_res_len,
                (kal_uint8*) (msg_ptr->auth_res));
    }
}
#endif /* !defined(__MMI_FMI__) || defined(__EAUTH_SUPPORT__) */

#if !defined(__MMI_FMI__) && defined(__BT_SIM_PROFILE__)
/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_connect_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_connect_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_connect_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_connect_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							0, 
							msg_ptr->current_transport_protocol_type, 
							msg_ptr->supported_transport_protocol_type_capability, 
							msg_ptr->atr_len, 
							msg_ptr->atr);

	}	
}

/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_disconnect_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_disconnect_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_disconnect_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_disconnect_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							1, 
							0, 
							0, 
							0, 
							NULL);
	}
}

/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_power_on_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_power_on_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_power_on_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_power_on_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							2, 
							msg_ptr->current_transport_protocol_type, 
							0, 
							msg_ptr->atr_len, 
							msg_ptr->atr);
	}
}

/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_power_off_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_power_off_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_power_off_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_power_off_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							3, 
							0, 
							0, 
							0, 
							NULL);
	}
}

/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_reset_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_reset_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_reset_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							4, 
							msg_ptr->current_transport_protocol_type, 
							0, 
							msg_ptr->atr_len, 
							msg_ptr->atr);

	}	
}


/*****************************************************************************
 * FUNCTION
 *  l4c_bt_sim_apdu_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_bt_sim_apdu_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	bt_sim_apdu_cnf_struct *msg_ptr;

	msg_ptr = (bt_sim_apdu_cnf_struct*)local_para_ptr;
	
	if (msg_ptr->src_id==LMMI_SRC)
	{
		// currently unused
	}
	else if (msg_ptr->src_id >= RMMI_SRC)
	{
		RMMI_PTR->current_src = msg_ptr->src_id;
		l4c_bt_sim_profile_rrsp(msg_ptr->result, 
							5, 
							0, 
							0, 
							msg_ptr->apdu_rsp_len, 
							msg_ptr->apdu_rsp);

	}	
}
#endif /* !defined(__MMI_FMI__) && defined(__BT_SIM_PROFILE__) */

#if !defined(__MMI_FMI__) 
/*****************************************************************************
 * FUNCTION
 *  sim_query_info_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void sim_query_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_query_info_cnf_struct *msg_ptr;
    l4c_result_struct result;
    kal_uint8 src_id;

    msg_ptr = (sim_query_info_cnf_struct*)local_para_ptr; 
    src_id = msg_ptr->src_id;
    
    if (msg_ptr->result == SIM_CMD_SUCCESS)
    {
        result.flag = L4C_OK;
        result.cause = L4C_NO_CAUSE;
    }
    else
    {
        result.flag = L4C_ERROR;
        result.cause = L4C_GEN_CAUSE;        
    }

    if (src_id == LMMI_SRC)
    {
        // TODO
    }
    else if (src_id >= RMMI_SRC && src_id < RMMI_ALL)
    {   
        RMMI_PTR->current_src = src_id;
        l4c_sim_query_info_rrsp(result, msg_ptr->info_id, &(msg_ptr->info_data));
    }

}

#endif

#endif /* __MOD_SMU__ */ 

/*****************************************************************************
 * FUNCTION
 *  sim_sat_language_req_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]      
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __SAT__
void sim_sat_language_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
	l4c_sat_provide_lang_info_lind();
}
#endif


#if defined(__REGIONAL_PHONE__) 
/*****************************************************************************
 * FUNCTION
 *  l4c_sim_read_imsi_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void l4c_sim_read_imsi_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr)
{
    sim_read_imsi_cnf_struct *msg_ptr;
    kal_uint8 mccmnc[4];
    kal_uint8 mnc_len;
    kal_uint32 *data_ptr;

    msg_ptr = (sim_read_imsi_cnf_struct*)local_para_ptr; 
    mnc_len = (msg_ptr->mnc_length != 0)? msg_ptr->mnc_length : 2;
    kal_mem_set(mccmnc, 0xff, sizeof(mccmnc));
    data_ptr = (kal_uint32*)mccmnc;
    
    if (msg_ptr->result == KAL_TRUE)
    {
        mccmnc[0] = (msg_ptr->imsi[1] & 0xf0) | (msg_ptr->imsi[2] & 0x0f);
        mccmnc[1] = (msg_ptr->imsi[2] & 0xf0) | 0x0f;
        mccmnc[2] = ((msg_ptr->imsi[3] & 0x0f) << 4) | ((msg_ptr->imsi[3] & 0xf0) >> 4);
        if (mnc_len == 3)
        {
            mccmnc[3] = ((msg_ptr->imsi[4] & 0x0f) << 4) | 0x0f;
        }
    }

#if defined(__SP_RIL_SUPPORT__) && defined(__MTK_TARGET__)
    if (KAL_TRUE == ccci_send_message(CCMSG_ID_SYSMSGSVC_L4_SIM_INFO, *data_ptr))
#endif
    {
        kal_brief_trace(TRACE_INFO, INFO_MCCMNC, 
                        mccmnc[0], mccmnc[1], mccmnc[2], mccmnc[3]);
    }

}
#endif /* __REGIONAL_PHONE__ */


