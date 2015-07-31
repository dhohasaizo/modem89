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
 * L4C2TCM_FUNC.C
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file handles AT get and query command.
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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

//#include "kal_release.h"
//#include "app_buff_alloc.h"
//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "app_ltlcom.h"
#include "mmi_l3_enums.h"
//#include "l3_inc_enums.h"
#include "mcd_l3_inc_gprs_struct.h"
//#include "mcd_l3_inc_struct.h"
//#include "l3_inc_local.h"
//#include "ppp_l4_enums.h"
#include "mmi_sm_enums.h"
//#include "custom_nvram_editor_data_item.h"
#include "l4_msgid.h"

//#include "l3_inc_enums.h"
//#include "tcm_common_enums.h"
//#include "tcm_common.h"
//#include "l4c2abm_struct.h"
//#include "l4c2tcm_struct.h"
#include "l4c2tcm_func.h"

//#include "stack_timer.h"
//#include "tcm_timer.h"
#include "tcm_context.h"
#include "stdio.h"
#include "string.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"
#include "tcm_trc.h"

//#include "tcm_cntxt_data.h"
#include "l4c_common_enum.h"
//#include "tcm_cntxt_data_aux.h"

#include "tcm_at_handler.h"

#ifdef __ACL_SUPPORT__
#include "sim_common_enums.h"
#include "sim_ps_api.h"
#endif

#ifdef __MEDIATEK_SMART_QOS__
#include "l4c_sim_cmd.h"
#include "l4c_nw_cmd.h"
#endif /* __MEDIATEK_SMART_QOS__ */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
#include "tcm2l4c_struct.h" // for MSG_ID_TCM_UT_CHECK_CALLBACK_XXX messages structure
#include "tcm_send_msg.h"
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

//------------------------------ suggest Add ------------------------------
//#include "kal_non_specific_general_types.h"
//#include "kal_active_module.h"

//------------------------------ suggest Add ------------------------------
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
//#include "tcm_api.h"

#if defined(__RMMI_UT__) && defined(__IPV4V6__)
kal_uint8 ipv6ut_tcm_cntxt_flag[TCM_TOT_CONTEXT];
kal_uint8 ipv6ut_tcm_pdp_addr_type[TCM_TOT_CONTEXT] = {0x8d, 0x8d, 0x8d};
#endif


const kal_uint8 SND_TO_L4C_DCOMP_ALGO_TABLE[SND_NUM_OF_DCOMP_ALGOS+2] = {1, 0, 0};
const kal_uint8 SND_TO_L4C_HCOMP_ALGO_TABLE[SND_NUM_OF_PCOMP_ALGOS+2] = {1, 0, 0};

#if defined(__R99__)
const kal_uint8 rmmi_sdu_err_ratio_string_table[8][3] =
{
    {'0', 'E', '0'},
    {'1', 'E', '2'},
    {'7', 'E', '3'},
    {'1', 'E', '3'},
    {'1', 'E', '4'},
    {'1', 'E', '5'},
    {'1', 'E', '6'},
    {'1', 'E', '1'}
};

const kal_uint8 rmmi_residual_ber_string_table[10][3] =
{
    {'0', 'E', '0'},
    {'5', 'E', '2'},
    {'1', 'E', '2'},
    {'5', 'E', '3'},
    {'4', 'E', '3'},
    {'1', 'E', '3'},
    {'1', 'E', '4'},
    {'1', 'E', '5'},
    {'1', 'E', '6'},
    {'6', 'E', '8'}
};
#endif /* __R99__ */


#if defined(__IPV4V6__) && defined(__IPV6__)
extern module_type l4c_current_mod_id;
#endif

#if ( (defined(__MTK_INTERNAL__)) && (defined(__REL4__))) // only print qos in high level product (> REL4)
/* under construction !*/
#endif // ~ #if ( (defined(__MTK_INTERNAL__)) && (defined(__REL4__))) // only print qos in high level product (> REL4)

/* 20080616 mtk00714 */
#ifdef __GEMINI__
extern tcm_context_struct tcm_context[];
kal_bool check_pdp_context_exist_in_either_SIM(kal_uint8 which_sim)
{
    kal_bool is_context_exist = KAL_FALSE;
    kal_uint8 index;

    for(index=0 ; index < TCM_TOT_CONTEXT ; index++)
    {
        if ( tcm_context[which_sim].cntxt_flag[index] == TCM_CNTXT_VALID)
        {
            is_context_exist = KAL_TRUE;
            break;
        }
    }
    return is_context_exist;
}
#endif

#if (defined(__GEMINI__))
void tcm_check_context_correct(void)
{
    kal_uint8 index;
    module_type src_mod = kal_get_active_module_id();

    for(index = 0; index < MOD_TCM_TOTAL_SIM; index++)
    {
        if ((src_mod == (MOD_L4C+index)) || (src_mod == MOD_TCM+index) || (src_mod == MOD_ATCI+index))	// Karen
        {
            ASSERT(tcm_ptr_g->sim_interface == index);
            return;
        }
    }

    ASSERT(0);

}
#endif // ~ #if (defined(__GEMINI__))

#ifdef __HSDPA_SUPPORT__
void l4ctcm_get_bearer_capability(kal_uint8* valid_contexts, kal_uint8* context_id, kal_uint8* bearer_capability)
{
    kal_uint8   cindex ;

    if(NULL == valid_contexts)
    {
        DEBUG_ASSERT(0);
    }
    if(NULL == context_id)
    {
        DEBUG_ASSERT(0);
    }
    if(NULL == bearer_capability)
    {
        DEBUG_ASSERT(0);
    }

    *valid_contexts = 0; // initialize

    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        if (sib_ptr->nsapi != TCM_INVALID_NSAPI)
        {
            context_id[(*valid_contexts)] = sib_ptr->context_id ;
            bearer_capability[(*valid_contexts)] = sib_ptr->data_speed;

            kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_H_ICON_L4CTCM_GET_BEARER_CAPABILITY,
                             (*valid_contexts),
                             context_id[(*valid_contexts)],
                             (*valid_contexts),
                             bearer_capability[(*valid_contexts)]);

            *valid_contexts = (*valid_contexts) + 1 ;
        }
    }

    for(cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++) // debug trace
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, TCM_H_ICON_CONTEXT_ID_AND_BEARER_CAPABILITY,
                         (cindex+1),
                         sib_ptr->data_speed );
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        ilm_struct ilm ;
        tcm_ut_check_callback_l4ctcm_get_bearer_capability_struct *tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr;
        kal_uint8 i = 0;

        tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr = (tcm_ut_check_callback_l4ctcm_get_bearer_capability_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_bearer_capability_struct), TD_RESET));

        tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr->valid_contexts = *valid_contexts;
        for(i = 0; i < *valid_contexts; i++)
        {
            tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr->context_id[i] = context_id[i];
            tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr->bearer_capability[i] = bearer_capability[i];
        }

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_BEARER_CAPABILITY;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_bearer_capability_ptr;
        ilm.peer_buff_ptr = NULL;

        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return ;
}
#endif // ~ #ifdef __HSDPA_SUPPORT__

/* +CGDCONT */
/*****************************************************************************
* FUNCTION
*   l4ctcm_get_pri_pdp_info
* DESCRIPTION
*   This function handles +CGDCONT
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_get_pri_pdp_info(l4c_prim_pdp_info_list_struct *info)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8        sib_id;
    session_info_block_struct *sib_ptr;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    kal_uint8 ut_i = 0;
    ilm_struct ilm;
    tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_struct* tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(info == NULL)
        return KAL_FALSE;

    info->length = 0;

    /* Read the SIB for all context  */
    for ( sib_id = 0; sib_id < TCM_TOT_EXT_CONTEXT ; sib_id ++ )
    {
        /* Get the SIB pointer for this context */
        sib_ptr = tcm_get_sib_ptr ( sib_id );

        /* Check whether the sib is present for this context_id */
        if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
        {
            continue;
        }

        /* Check whether the context is primary or secondary.If
        * it's secondary context type skip that context and go for
        * the next context. CGDCONT command reads only primary
        * context information */
        if ((sib_ptr->context_type == PRIMARY_CONTEXT )
                && (sib_ptr->AT_definition & TCM_CGDCONT_DEFINED)) /* mtk00714 w0633: AT definition */
        {
            /* Store the context_id into the scratch */
            info->prim_pdp_info[info->length].context_id = sib_ptr->context_id;

            /* Copy the pdp address type into the scratch */
            info->prim_pdp_info[info->length].pdp_type = sib_ptr->pdp_addr_type;

            /* Copy the apn length into the scratch */
            info->prim_pdp_info[info->length].apn_length = sib_ptr->apn_len;

            /* Copy the apn into the scratch */
            kal_mem_cpy( (kal_uint8 *) info->prim_pdp_info[info->length].apn,
                         (kal_uint8 *) sib_ptr->apn,
                         sib_ptr->apn_len);

            if ( (sib_ptr->pdp_addr_len == IPV4_ADDR_LEN)
#ifdef __IPV4V6__
                    /* Poying: For IPv4v6 type, only need to fill the IPv4 address. */
                    || (sib_ptr->pdp_addr_len == IPV4V6_ADDR_LEN)
#endif /* __IPV4V6__ */
               )
            {
                /* Copy the pdp address length into the scratch */
                info->prim_pdp_info[info->length].pdp_addr_len = sib_ptr->pdp_addr_len;

                /* Copy the pdp Address length */
                kal_mem_cpy( info->prim_pdp_info[info->length].addr_val,
                             (kal_uint8 *) sib_ptr->addr_val,
                             IPV4_ADDR_LEN );
            }
            else  /* Poying: For NULL, IPv6, or other undefined types, just set pdp_addr_len to NULL. */
            {
                /* User requested Dynamic: according to 27.007, still show null even if address is assigned after activated */
                info->prim_pdp_info[info->length].pdp_addr_len = NULL_PDP_ADDR_LEN;
            }

            /* SND_TO_ATCI_HCOMP_ALGO_TABLE converts the SND
             * hcomp_algo into ATCI hcomp_algo type.SIB has SND
             * hcomp_algo value.If we give this values as the index
             * to the SND_TO_ATCI_HCOMP_TABLE then we will get the
             * corresponding hcomp_algo values in ATCI type
             */
            info->prim_pdp_info[info->length].hcomp_algo =
                (snd_pcomp_algo_enum)SND_TO_L4C_HCOMP_ALGO_TABLE[sib_ptr->pcomp_algo];

            /* SND_TO_ATCI_DCOMP_ALGO_TABLE converts the SND
             * dcomp_algo into ATCI dcomp_algo type
             */
            info->prim_pdp_info[info->length].dcomp_algo =
                (snd_dcomp_algo_enum)SND_TO_L4C_DCOMP_ALGO_TABLE[sib_ptr->dcomp_algo];

#ifdef __REL8__
            if (sib_ptr->AT_definition & TCM_CGDCONT_IPV4_ALLOC_VIA_DHCP)
            {
                info->prim_pdp_info[info->length].ipv4addralloc = 1 ;
            }
            else
            {
                info->prim_pdp_info[info->length].ipv4addralloc = 0 ;
            }
#endif /* __REL8__ */

            /* Increment length */
            info->length++;
        }
    } /* End of "for" */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_ptr = (tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_ptr->l4c_prim_pdp_info_list.length = info->length;
        kal_mem_cpy((kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_ptr->l4c_prim_pdp_info_list.prim_pdp_info),
                    (kal_uint8*)&(info->prim_pdp_info), sizeof(l4c_prim_pdp_info_struct));

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_PRI_PDP_INFO;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_pri_pdp_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}


kal_bool l4ctcm_test_pri_pdp_info(kal_uint8 **rsp_str)
{
    kal_uint8 i = 0;
    kal_uint8 cid_range_string[6] = {0}; //assume the max string is "1-255"
    const kal_uint8 pdp_type_string[4][7] = {"IP",     "PPP",     "IPV6",    "IPV4V6"};
    kal_bool pdp_type_support[4] =          {KAL_TRUE, KAL_FALSE, KAL_FALSE, KAL_FALSE};
    kal_uint8* write_ptr;

    /* Make sure rsp_str is not NULL before dereference. */
    if (rsp_str == NULL) return KAL_FALSE;
    write_ptr = *rsp_str ;

#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
    pdp_type_support[1] = KAL_TRUE;
#endif
#ifdef __IPV6__
    pdp_type_support[2] = KAL_TRUE;
#endif
#ifdef __IPV4V6__
    pdp_type_support[3] = KAL_TRUE;
#endif

#if (TCM_TOT_EXT_CONTEXT == 1)
    kal_sprintf((kal_char*)cid_range_string, "1");
#else
    kal_sprintf((kal_char*)cid_range_string, "1-%d", TCM_TOT_EXT_CONTEXT);
#endif

    for (i=0; i<4; i++)
    {
        if (KAL_TRUE == pdp_type_support[i])
        {   //max length estimate: <CR><LF>+CGDCONT: (1-255),"IPV4V6",,,(0),(0)  ==> 38 bytes per line
#ifdef __REL8__
            write_ptr += kal_sprintf((kal_char*)write_ptr, "\r\n+CGDCONT: (%s),\"%s\",,,(0),(0),(0-1)", cid_range_string, pdp_type_string[i]);
#else
            write_ptr += kal_sprintf((kal_char*)write_ptr, "\r\n+CGDCONT: (%s),\"%s\",,,(0),(0)", cid_range_string, pdp_type_string[i]);
#endif /* __REL8__ */
        }
    }
    write_ptr += kal_sprintf((kal_char*)write_ptr, "\r\n"); //max length estimate: 38*4+2 = 154
    return KAL_TRUE;
}


kal_bool l4ctcm_get_gprs_statistics_info(l4c_gprs_statistics_info_struct *info)
{

    return KAL_TRUE;

}

#ifdef __TCPIP__ /* ABM */
kal_bool l4ctcm_get_ext_gprs_statistics_info(kal_uint8 cid, l4c_ext_gprs_statistics_info_struct *info)
{
    return KAL_TRUE;
}
#endif

/* +CGDSCONT */
/*****************************************************************************
* FUNCTION
*   tcm_
* DESCRIPTION
*   This function handles +CGDSCONT
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_get_sec_pdp_info(l4c_sec_pdp_info_list_struct *info)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8        sib_id;
    session_info_block_struct *sib_ptr;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_struct* tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(info == NULL)
        return KAL_FALSE;
    info->length = 0;

    /* for each context do the following things */
    for ( sib_id= 0; sib_id < TCM_TOT_EXT_CONTEXT ; sib_id ++ )
    {
        /* Read the sib value for this context */
        sib_ptr = tcm_get_sib_ptr ( sib_id );

        /* Check whether the sib is present for this context_id */
        if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
        {
            continue;
        }

        /* Check whether the context is primary or secondary. if
        * it's primary context type, skip that context and go for
        * the next context. CGDSCONT command reads only secondary
        * context information */
        if ((sib_ptr->context_type == SECONDARY_CONTEXT )
                && (sib_ptr->AT_definition & TCM_CGDSCONT_DEFINED)) /* mtk00714 w0633: AT definition */
        {
            /* Store context_id into the scratch */
            info->sec_pdp_info[info->length].context_id = sib_ptr->context_id;

            /* Store primary ContextId into the scratch */
            //assert(sib_ptr->context_id != sib_ptr->primary_context_id);

            info->sec_pdp_info[info->length].prim_context_id
                = sib_ptr->primary_context_id;

            /* SND_TO_ATCI_HCOMP_ALGO_TABLE converts the SND hcomp_algo
            * into ATCI hcomp_algo( SIB has SND hcomp_algo value). If
            * we give this values as the index to the
            * SND_TO_ATCI_HCOMP_TABLE then we will get the
            * corresponding hcomp_algo values in ATCI type
            */
            info->sec_pdp_info[info->length].hcomp_algo =
                (snd_pcomp_algo_enum)SND_TO_L4C_HCOMP_ALGO_TABLE[sib_ptr->pcomp_algo];

            /* SND_TO_ATCI_DCOMP_ALGO_TABLE converts the SND
             * dcomp_algo into ATCI type dcomp_algo */
            info->sec_pdp_info[info->length].dcomp_algo =
                (snd_dcomp_algo_enum)SND_TO_L4C_DCOMP_ALGO_TABLE[sib_ptr->dcomp_algo];

            /* Increment length */
            info->length++;
        }
    }/* End of the for loop */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_ptr = (tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_struct), TD_RESET));

        kal_mem_cpy((kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_ptr->l4c_sec_pdp_info_list),
                    (kal_uint8*)(info), sizeof(l4c_sec_pdp_info_list_struct));

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_SEC_PDP_INFO;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_sec_pdp_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

kal_bool l4ctcm_test_sec_pdp_info (kal_uint8 **rsp_str)
{
#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)
    kal_uint8 i = 0;
    kal_char szActPrimCxt[35] = {'\0'}, szTemp[5] = {'\0'};
    kal_bool bFirst = KAL_TRUE;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(rsp_str == NULL)
        return KAL_FALSE;

    for(i=0 ; i<TCM_TOT_EXT_CONTEXT ; i++)
    {
        /* Modified by: CH_Liang 2005.06.23
         * Description: check primary context state, and converts i+1 to string
         */
        if(PRIMARY_CONTEXT == tcm_ptr_g->sib_tab[i].context_type &&
                TCM_CONTEXT_ACTIVE_STATE == tcm_ptr_g->sib_tab[i].main_state)
        {
            if(KAL_TRUE == bFirst)
            {
                bFirst = KAL_FALSE;
                sprintf(szTemp, "%d", i + 1);
            }
            else
            {
                sprintf(szTemp, ",%d", i + 1);
            }

            strcat(szActPrimCxt, szTemp);
        }
        /* End of Modification, 2005.06.23. Reviewed by: Joseph Chen */
    }

#if (!defined(__TCM_UT__)) // UT not print this
    /*
    sprintf((kal_char*)*rsp_str, "\r\n+CGDSCONT: (1-3),(%s),\"IP\",,,(0),(0)\r\n", szActPrimCxt);
     */
#if (TCM_TOT_EXT_CONTEXT == 1)
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGDSCONT: (1),(%s),(0),(0)\r\n", szActPrimCxt);
#else
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGDSCONT: (1-%d),(%s),(0),(0)\r\n", TCM_TOT_EXT_CONTEXT, szActPrimCxt);
#endif //MAX_EXT_PDP_CONTEXT_revise, mtk02285, 20100203   

#endif // ~ #if (!defined(__TCM_UT__)) // UT not print this

    return KAL_TRUE;
#else // #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
}


/* +CGTFT */
kal_bool l4ctcm_set_tft_info(l4c_tft_struct *info)
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_uint8                            mmi_sib_id = 0;
    kal_bool		ret;
    tcm_sib_usage_enum			sib;
    session_info_block_struct         *sib_ptr = NULL;
    kal_brief_trace(TRACE_INFO, L4CTCM_SET_TFT_INFO);

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

#ifndef __APP_SECONDARY_PDP_SUPPORT__ //mtk00714 streaming       
    if (!(info->context_id > 0 && info->context_id <= TCM_TOT_EXT_CONTEXT))
#else
    if (!(info->context_id > 0 && info->context_id <= TCM_TOT_CONTEXT))
#endif
        return KAL_FALSE;

    /* Get the command information for the context */
    mmi_sib_id = tcm_get_sib_id ( GET_FROM_CONTEXTID,
                                  info->context_id );

    ASSERT(mmi_sib_id < TCM_TOT_CONTEXT);

    /* Get the sib status for this context_id */
    tcm_is_sib_free(mmi_sib_id, &sib);

    /* Check whether SIB is created or not */
    if (sib != TCM_SIB_IN_USE )
        tcm_create_sib( mmi_sib_id );

    /* Set TFT info */
    ret = tcm_set_tft_info(mmi_sib_id, info);
    if (ret == KAL_TRUE)
    {
        sib_ptr = tcm_get_sib_ptr ( mmi_sib_id );
        sib_ptr->AT_definition |= TCM_CGTFT_DEFINED;
    }
    return ret;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}

kal_bool l4ctcm_get_tft_info(l4c_tft_struct *info)
{
#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    kal_uint8				sib_id = 0;
    SESSION_INFO_PTR			sib_ptr;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct  ilm;
    tcm_ut_check_callback_l4ctcm_get_tft_info_struct* tcm_ut_check_callback_l4ctcm_get_tft_info_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if (info == NULL)
        return KAL_FALSE;

    if (!(info->context_id > 0 && info->context_id <= TCM_TOT_EXT_CONTEXT))
        return KAL_FALSE;

    /* Get the SIB pointer for this context  */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, info->context_id);
    sib_ptr = tcm_get_sib_ptr ( sib_id );

    if ( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
        return KAL_FALSE;

    tcm_get_tft_info(sib_ptr, info);

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_get_tft_info_ptr = (tcm_ut_check_callback_l4ctcm_get_tft_info_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_tft_info_struct), TD_RESET));
        kal_mem_cpy((kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_tft_info_ptr->l4c_tft),
                    (kal_uint8*)(info), sizeof(l4c_tft_struct));

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_TFT_INFO;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_tft_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
#else // #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
}

kal_bool l4ctcm_test_tft_info (kal_uint8 **rsp_str)
{
#ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__ // related to AT_CMD_SET option (__SLIM_AT__)
    kal_uint8 i = 0;
    const kal_uint8 pdp_type_string[4][7] = {"IP",     "PPP",     "IPV6",    "IPV4V6"};
    kal_bool pdp_type_support[4] =          {KAL_TRUE, KAL_FALSE, KAL_FALSE, KAL_FALSE};
    kal_uint8 *write_ptr ;

    /* Poying: Avoid to access NULL pointer. */
    if (rsp_str == NULL)
    {
        return KAL_FALSE;
    }
    else
    {
        write_ptr = *rsp_str ;
    }

#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
    pdp_type_support[1] = KAL_TRUE;
#endif
#ifdef __IPV6__
    pdp_type_support[2] = KAL_TRUE;
#endif
#ifdef __IPV4V6__
    pdp_type_support[3] = KAL_TRUE;
#endif

    for (i=0; i<4; i++)
    {
        if (KAL_TRUE == pdp_type_support[i])
        {   //max length estimate: <CR><LF>+CGTFT: "IPV4V6",(1-8),(0-255),,(0-255),,,("00000000"-"FFFFFFFF"),,("00000"-"FFFFF")  ==> 86 bytes per line
            write_ptr += kal_sprintf((kal_char*)write_ptr, "\r\n+CGTFT: \"%s\",(1-8),(0-255),,(0-255),,,(\"00000000\"-\"FFFFFFFF\"),,(\"00000\"-\"FFFFF\")", pdp_type_string[i]);
        }
    }
    write_ptr += kal_sprintf((kal_char*)write_ptr, "\r\n"); //max length estimate: 86*4+2 = 346
    return KAL_TRUE;
#else // #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
    return KAL_FALSE;
#endif // ~ #ifdef __TURN_ON_EXTERNAL_SECONDARY_PDP__
}

/*****************************************************************************
* FUNCTION
*   tcm_
* DESCRIPTION
*   This function handles +CGQREQ and +CGQMIN
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
/* +CGQREQ / +CGQMIN */
kal_bool l4ctcm_get_qos_info (atci_qos_enum type, l4c_qos_list_struct *info)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8        sib_id;
    session_info_block_struct *sib_ptr;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_get_qos_info_struct* tcm_ut_check_callback_l4ctcm_get_qos_info_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(info == NULL)
        return KAL_FALSE;

    info->length = 0;

    /*Check the QoSType.*/
    if (type == ATCI_REQ_QOS)
    {
        for ( sib_id = 0; sib_id < TCM_TOT_EXT_CONTEXT; sib_id ++ )
        {
            /* Get the SIB pointer for this context  */
            sib_ptr = tcm_get_sib_ptr ( sib_id );

            /* Check whether the sib is present for this context_id */
            if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
            {
                continue;
            }

            /* Poying: Should not show undefined cid info. MAUI_01734842 is not correct. */
#if 1 // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            if (sib_ptr->AT_definition & TCM_CGQREQ_DEFINED) /* mtk00714 w0633: AT definition */
#endif // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            {
                /* Copy the qos type into the scratch  */
                info->qos_info[info->length].qos_type = ATCI_REQ_QOS;

                /* Copy the context_id into scratch */
                info->qos_info[info->length].context_id = sib_ptr->context_id;

                /* Copy the delay_class into the scratch */
                info->qos_info[info->length].delay_class = (delay_class_enum)sib_ptr->req_qos.delay_class;

                /* Copy the reliability_class into the scratch */
                info->qos_info[info->length].reliability_class
                    = (reliability_class_enum)sib_ptr->req_qos.reliability_class;

                /* Copy the peak_throughput into the scratch */
                info->qos_info[info->length].peak_throughput
                    = (peak_throughput_class)sib_ptr->req_qos.peak_throughput;

                /* Copy the precedence_class into the scratch */
                info->qos_info[info->length].precedence_class
                    = (precedence_class_enum)sib_ptr->req_qos.precedence_class;

                /* Copy the mean_throughput into the scratch */
                info->qos_info[info->length].mean_throughput
                    = (mean_throughput_enum)sib_ptr->req_qos.mean_throughput;

                /* Increment length */
                info->length++;
            }/* mtk00714 w0633: AT definition */
        }/* End of the for - loop */

    }/* else, QoSType is min_qos */
    else
    {
        for ( sib_id = 0; sib_id < TCM_TOT_EXT_CONTEXT; sib_id ++ )
        {
            /* Get the SIB pointer for this context  */
            sib_ptr = tcm_get_sib_ptr ( sib_id );

            /* Check whether the sib is present for this context_id */
            if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
            {
                continue;
            }

            /* Poying: Should not show undefined cid info. MAUI_01734842 is not correct. */
#if 1 // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            if (sib_ptr->AT_definition & TCM_CGQMIN_DEFINED) /* mtk00714 w0633: AT definition */
#endif // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            {
                /* Copy the qos type into the scratch  */
                info->qos_info[info->length].qos_type = ATCI_MIN_QOS;

                /* Copy the context_id into scratch */
                info->qos_info[info->length].context_id = sib_ptr->context_id;

                /* Copy the delay_class into the scratch */
                info->qos_info[info->length].delay_class = (delay_class_enum)sib_ptr->min_qos.delay_class;

                /* Copy the reliability_class into the scratch */
                info->qos_info[info->length].reliability_class
                    = (reliability_class_enum)sib_ptr->min_qos.reliability_class;

                /* Copy the peak_throughput into the scratch */
                info->qos_info[info->length].peak_throughput
                    = (peak_throughput_class)sib_ptr->min_qos.peak_throughput;

                /* Copy the precedence_class into the scratch */
                info->qos_info[info->length].precedence_class
                    = (precedence_class_enum)sib_ptr->min_qos.precedence_class;

                /* Copy the mean_throughput into the scratch */
                info->qos_info[info->length].mean_throughput
                    = (mean_throughput_enum)sib_ptr->min_qos.mean_throughput;

                /* Increment length */
                info->length++;
            }/* mtk00714 w0633: AT definition */
        }
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_get_qos_info_ptr = (tcm_ut_check_callback_l4ctcm_get_qos_info_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_qos_info_struct), TD_RESET));
        kal_mem_cpy((kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_qos_info_ptr->l4c_qos_list),
                    (kal_uint8*)(info), sizeof(l4c_qos_list_struct));

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_QOS_INFO;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_qos_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
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
#endif

#if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) || (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__)) )
/* +CGDCONT */
/*****************************************************************************
* FUNCTION
*   l4ctcm_get_pri_pdp_info
* DESCRIPTION
*   This function handles +CGDCONT
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_get_config_option_info(l4c_config_option_list_struct *info)
{
    kal_uint8        sib_id;
    session_info_block_struct *sib_ptr;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(info == NULL)
        return KAL_FALSE;

    info->length = 0;

    /* Read the SIB for all context  */
    for ( sib_id=0; sib_id < TCM_TOT_EXT_CONTEXT; sib_id++ )
    {
        l4c_config_option_struct  *config_option_info_ptr = &(info->config_option_info[info->length]) ;

        /* Get the SIB pointer for this context */
        sib_ptr = tcm_get_sib_ptr ( sib_id );

        /* Check whether the sib is present for this context_id */
        if( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
        {
            continue;
        }

        config_option_info_ptr->is_chap = sib_ptr->is_chap;

        kal_mem_cpy(config_option_info_ptr->user_name, (kal_uint8*)sib_ptr->user_name, TCM_MAX_GPRS_USER_NAME_LEN);
        kal_mem_cpy(config_option_info_ptr->password, (kal_uint8*)sib_ptr->password, TCM_MAX_GPRS_PASSWORD_LEN);
        kal_mem_cpy(config_option_info_ptr->pri_dns, (kal_uint8*)(kal_uint8*)sib_ptr->dns, IPV4_ADDR_LEN );
        kal_mem_cpy(config_option_info_ptr->sec_dns, (kal_uint8*)(kal_uint8*)sib_ptr->dns2, IPV4_ADDR_LEN );

        /* Store the context_id into the scratch */
        config_option_info_ptr->context_id = sib_ptr->context_id;


        /* Poying: Copy the IPv6 DNS address. */
#if ((defined(__IPV6__)) || (defined(__IPV4V6__)))
        config_option_info_ptr->act_pdp_cntxt_req_ipv6_dns = sib_ptr->act_pdp_cntxt_req_ipv6_dns ;

        config_option_info_ptr->ipv6_dns1_present = sib_ptr->ipv6_dns1_present ;
        kal_mem_cpy(config_option_info_ptr->ipv6_dns1, sib_ptr->ipv6_dns1, IPV6_ADDR_LEN) ;

        config_option_info_ptr->ipv6_dns2_present = sib_ptr->ipv6_dns2_present ;
        kal_mem_cpy(config_option_info_ptr->ipv6_dns2, sib_ptr->ipv6_dns2, IPV6_ADDR_LEN) ;
#endif /* ((defined(__IPV6__)) || (defined(__IPV4V6__))) */

        info->length++ ;
    } /* End of "for" */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        ilm_struct ilm;
        tcm_ut_check_callback_l4ctcm_get_config_option_info_struct* tcm_ut_check_callback_l4ctcm_get_config_option_info_ptr;

        tcm_ut_check_callback_l4ctcm_get_config_option_info_ptr = (tcm_ut_check_callback_l4ctcm_get_config_option_info_struct*)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_config_option_info_struct), TD_RESET));

        kal_mem_cpy( (kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_config_option_info_ptr->l4c_config_option_list),
                     (kal_uint8*)(info),
                     sizeof(l4c_config_option_list_struct) );

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_CONFIG_OPTION_INFO;
        ilm.local_para_ptr = (local_para_struct *) tcm_ut_check_callback_l4ctcm_get_config_option_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
}
#endif // ~ #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) || (defined(__NDIS_SUPPORT__)) || (defined(__TCM_UT__)) )


/*****************************************************************************
* FUNCTION
*   l4ctcm_get_eqos_info / l4ctcm_test_eqos_info
* DESCRIPTION
*   This function handles +CGEQREQ and +CGEQMIN
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
/* +CGEQREQ +CGEQMIN  +CGEQNEG */
kal_bool l4ctcm_get_eqos_info (atci_qos_enum type, l4c_eqos_list_struct *info)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8        sib_id;
    qos_struct                       *qos_ptr = NULL;
    session_info_block_struct *sib_ptr;

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_get_eqos_info_struct* tcm_ut_check_callback_l4ctcm_get_eqos_info_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, TCM_PDP_AT_GET_EQOS_INFO, type);

    if (info == NULL)
        return KAL_FALSE;

    info->length = 0;

    for (sib_id = 0; sib_id < TCM_TOT_EXT_CONTEXT; sib_id ++)
    {
        /* Get the SIB pointer for this context  */
        sib_ptr = tcm_get_sib_ptr ( sib_id );

        /* Check whether the sib is present for this context_id */
        if (sib_ptr->is_sib_defined != TCM_SIB_IN_USE)
        {
            continue;
        }

        /*Check the QoSType */
        if (type == ATCI_REQ_QOS)
        {
            /* Poying: Should not show undefined cid info. MAUI_01734842 is not correct. */
#if 1 // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            /* mtk00714 w0633: AT definition */
            if ((sib_ptr->AT_definition & TCM_CGQREQ_DEFINED)== 0)
            {
                continue;
            }
#endif // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info

            qos_ptr = &(sib_ptr->req_qos);

            /* Copy the qos type into the scratch  */
            info->qos_info[info->length].qos_type = ATCI_REQ_QOS;
        }
        else if (type == ATCI_MIN_QOS)
        {
            /* Poying: Should not show undefined cid info. MAUI_01734842 is not correct. */
#if 1 // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info
            /* mtk00714 w0633: AT definition */
            if ((sib_ptr->AT_definition & TCM_CGQMIN_DEFINED)== 0)
            {
                continue;
            }
#endif // MAUI_01734842 [MAUI][08B][09A][TCM] CG(E)QREQ? CG(E)QMIN? show undefined cid info

            qos_ptr = &(sib_ptr->min_qos);

            /* Copy the qos type into the scratch  */
            info->qos_info[info->length].qos_type = ATCI_MIN_QOS;
        }
        else if (type == ATCI_NEG_QOS)
        {
            if (sib_ptr->main_state != TCM_CONTEXT_ACTIVE_STATE) // do not show the neg qos for non-active pdp cotnexts
            {
                continue;
            }
            qos_ptr = &(sib_ptr->neg_qos);

            /* Copy the qos type into the scratch  */
            info->qos_info[info->length].qos_type = ATCI_NEG_QOS;
        }
        else
        {
            DEBUG_ASSERT(0);
            return KAL_FALSE;
        }

        /* Copy the context_id into scratch */
        info->qos_info[info->length].context_id = sib_ptr->context_id;

        /* Copy the traffic_class into the scratch */
        info->qos_info[info->length].traffic_class = qos_ptr->traffic_class;

        /* Copy the delivery_order into the scratch */
        info->qos_info[info->length].delivery_order
            = qos_ptr->delivery_order;

        /* Copy the delivery_of_err_sdu into the scratch */
        info->qos_info[info->length].delivery_of_err_sdu
            = qos_ptr->delivery_of_err_sdu;

        /* Copy the max_sdu_size into the scratch */
        info->qos_info[info->length].max_sdu_size
            = qos_ptr->max_sdu_size;

        /* Copy the max_bitrate_up_lnk into the scratch */
        info->qos_info[info->length].max_bitrate_up_lnk
            = qos_ptr->max_bitrate_up_lnk;

        /* Copy the max_bitrate_down_lnk into the scratch */
        info->qos_info[info->length].max_bitrate_down_lnk
            = qos_ptr->max_bitrate_down_lnk;

        /* Copy the residual_bit_err_rate into the scratch */
        info->qos_info[info->length].residual_bit_err_rate
            = qos_ptr->residual_bit_err_rate;

        /* Copy the sdu_err_ratio into the scratch */
        info->qos_info[info->length].sdu_err_ratio
            = qos_ptr->sdu_err_ratio;

        /* Copy the transfer_delay into the scratch */
        info->qos_info[info->length].transfer_delay
            = qos_ptr->transfer_delay;

        /* Copy the traffic_hndl_priority into the scratch */
        info->qos_info[info->length].traffic_hndl_priority
            = qos_ptr->traffic_hndl_priority;

        /* Copy the guarntd_bit_rate_up_lnk into the scratch */
        info->qos_info[info->length].guarntd_bit_rate_up_lnk
            = qos_ptr->guarntd_bit_rate_up_lnk;

        /* Copy the guarntd_bit_rate_down_lnk into the scratch */
        info->qos_info[info->length].guarntd_bit_rate_down_lnk
            = qos_ptr->guarntd_bit_rate_down_lnk;

#ifdef __REL6__
        info->qos_info[info->length].signalling_indication // no need to show this on screen
            = qos_ptr->signalling_indication;

        info->qos_info[info->length].source_statistics_descriptor // no need to show this on screen
            = qos_ptr->source_statistics_descriptor;

        info->qos_info[info->length].ext_max_bitrate_down_lnk
            = qos_ptr->ext_max_bitrate_down_lnk;

        info->qos_info[info->length].ext_guarntd_bit_rate_down_lnk
            = qos_ptr->ext_guarntd_bit_rate_down_lnk;

        info->qos_info[info->length].ext_max_bitrate_up_lnk
            = qos_ptr->ext_max_bitrate_up_lnk;

        info->qos_info[info->length].ext_guarntd_bit_rate_up_lnk
            = qos_ptr->ext_guarntd_bit_rate_up_lnk;
#else // __REL6__
        info->qos_info[info->length].signalling_indication // no need to show this on screen
            = 0;

        info->qos_info[info->length].source_statistics_descriptor // no need to show this on screen
            = 0;

        info->qos_info[info->length].ext_max_bitrate_down_lnk
            = 0;

        info->qos_info[info->length].ext_guarntd_bit_rate_down_lnk
            = 0;

        info->qos_info[info->length].ext_max_bitrate_up_lnk
            = 0;

        info->qos_info[info->length].ext_guarntd_bit_rate_up_lnk
            = 0;
#endif // ~ __REL6__

#if ( (defined(__MTK_INTERNAL__)) && (defined(__REL4__))) // only print qos in high level product (> REL4)
/* under construction !*/
#endif // ~ #if ( (defined(__MTK_INTERNAL__)) && (defined(__REL4__))) // only print qos in high level product (> REL4)

        /* Increment length */
        info->length++;
    }/* End of the for - loop */

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_get_eqos_info_ptr = (tcm_ut_check_callback_l4ctcm_get_eqos_info_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_get_eqos_info_struct), TD_RESET));
        kal_mem_cpy((kal_uint8*)&(tcm_ut_check_callback_l4ctcm_get_eqos_info_ptr->l4c_eqos_list),
                    (kal_uint8*)(info), sizeof(l4c_eqos_list_struct));
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_GET_EQOS_INFO;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_get_eqos_info_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

kal_bool l4ctcm_test_negotiated_eqos(kal_uint8 **rsp_str)
{
    kal_uint8 i = 0;
    kal_char szActPrimCxt[35] = {'\0'}, szTemp[5] = {'\0'};
    kal_bool bFirst = KAL_TRUE;

    if(rsp_str == NULL) return KAL_FALSE;

    for(i=0 ; i<TCM_TOT_EXT_CONTEXT ; i++)
    {
        if(PRIMARY_CONTEXT == tcm_ptr_g->sib_tab[i].context_type &&
                TCM_CONTEXT_ACTIVE_STATE == tcm_ptr_g->sib_tab[i].main_state)
        {
            if(KAL_TRUE == bFirst)
            {
                bFirst = KAL_FALSE;
                sprintf(szTemp, "%d", i + 1);
            }
            else
            {
                sprintf(szTemp, ",%d", i + 1);
            }
            strcat(szActPrimCxt, szTemp);
        }
    } /* 20111005 copy from +CGDSCONT test */

#ifndef __TCM_UT__
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGEQNEG: (%s)\r\n", szActPrimCxt);
#endif

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   l4ctcm_encode_sdu_size / l4ctcm_decode_sdu_size
* DESCRIPTION
*   This function handles the mapping between maximum SDU size (octets) and encoded value
*
* PARAMETERS
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_encode_sdu_size(kal_uint16 size, kal_uint16 *val_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_encode_sdu_size_struct* tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (val_ptr == NULL)
        return KAL_FALSE;

    if (size == 0)
    {
        *val_ptr = 0;
    }
    else if (size >= 10 && size <= 1500)
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
        {
            tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr = (tcm_ut_check_callback_l4ctcm_encode_sdu_size_struct *)
            (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_sdu_size_struct), TD_RESET));
            l4ctcm_round_up_encode_func(size, 0, 0, 10, val_ptr); /* 0 + (size - 0) / 10 */
            tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr->val = *val_ptr;
            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_SDU_SIZE;
            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr;
            ilm.peer_buff_ptr = NULL;
            tcm_send_msg_to_mod_nil(&ilm);
        }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

        return l4ctcm_round_up_encode_func(size, 0, 0, 10, val_ptr); /* 0 + (size - 0) / 10 */
    }
    else if (size == 1502)
    {
        *val_ptr = 151;
    }
    else if (size == 1510)
    {
        *val_ptr = 152;
    }
    else if (size == 1520)
    {
        *val_ptr = 153;
    }
    else
    {
        return KAL_FALSE;
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr = (tcm_ut_check_callback_l4ctcm_encode_sdu_size_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_sdu_size_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr->val = *val_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_SDU_SIZE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_sdu_size_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
}

kal_bool l4ctcm_decode_sdu_size(kal_uint16 val, kal_uint16 *size_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct* tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (size_ptr == NULL)
        return KAL_FALSE;

    if (val == 0)
    {
        *size_ptr = 0;
    }
    else if (val >= 1 && val <= 150)
    {
        *size_ptr = val * 10;
    }
    else if (val == 151)
    {
        *size_ptr = 1502;
    }
    else if (val == 152)
    {
        *size_ptr = 1510;
    }
    else if (val == 153)
    {
        *size_ptr = 1520;
    }
    else
    {
        return KAL_FALSE;
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr->rate = *size_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_DECODE_SDU_SIZE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
}

#ifdef __REL6__

/*****************************************************************************
* FUNCTION
*   l4ctcm_encode_bit_rate / l4ctcm_decode_bit_rate
* DESCRIPTION
*   This function handles the mapping between bit rate (kbps) and encoded value
*
* PARAMETERS
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_encode_bit_rate(kal_uint32 rate, kal_uint16 *val_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct* tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (val_ptr == NULL)
        return KAL_FALSE;

    if (rate == 0)
    {
        *val_ptr = rate;
    }
    else if (/*rate >= 1 &&*/ rate <= 63)
    {
        *val_ptr = rate;
    }
    else if (/*rate >= 64 &&*/ rate <= 568)
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
        {
            l4ctcm_round_up_encode_func(rate, 64, 64, 8, val_ptr);
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
            (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
            ilm.peer_buff_ptr = NULL;
            tcm_send_msg_to_mod_nil(&ilm);
        }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        return l4ctcm_round_up_encode_func(rate, 64, 64, 8, val_ptr);      /* 64 + (rate - 64) / 8 */
    }
    else if (/*rate >= 569 &&*/ rate <= 575) //mtk00714 :__APP_SECONDARY_PDP_SUPPORT__
    {
        *val_ptr = 128; //treat as 576
    } // ~mtk00714
    else if (/*rate >= 576 &&*/ rate <= 8640)
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
        {
            l4ctcm_round_up_encode_func(rate, 128, 576, 64, val_ptr);
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
            (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
            ilm.peer_buff_ptr = NULL;
            tcm_send_msg_to_mod_nil(&ilm);
        }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        return l4ctcm_round_up_encode_func(rate, 128, 576, 64, val_ptr); /* 128 + (rate - 576) / 64 */
    }
    else if (/*rate >= 8641 &&*/ rate <= 8699)
    {
        *val_ptr = 1<<8;
    }
    else if (/*rate >= 8700 &&*/ rate <= 16000)
    {
        if(rate%100 != 0)
        {
            *val_ptr = (((rate-8600)/100)+1)<<8;
        }
        else
        {
            *val_ptr = ((rate-8600)/100)<<8;
        }
    }
    else if (/*rate >= 16001 &&*/ rate <= 16999)
    {
        *val_ptr = 75<<8;
    }
    else if (/*rate >= 17000 &&*/ rate <= 128000)
    {
        if(rate%1000 != 0)
        {
            *val_ptr = ((((rate-16000)/1000)+74)+1)<<8;
        }
        else
        {
            *val_ptr = (((rate-16000)/1000)+74)<<8;
        }
    }
    else if (/*rate >= 128001 &&*/ rate <= 129999)
    {
        *val_ptr = 187<<8;
    }
    else if (/*rate >= 130000 &&*/ rate <= 256000)
    {
        if(rate%2000 != 0)
        {
            *val_ptr = ((((rate-128000)/2000)+186)+1)<<8;
        }
        else
        {
            *val_ptr = (((rate-128000)/2000)+186)<<8;
        }
    }
    /*
       else if (rate == 0)
       {
          *val_ptr = 255;
       }
    */
    else if (rate > 256000)
    {
        *val_ptr = 250<<8; //maximum value
    }
    else
    {
        return KAL_FALSE;
    }

    if (rate >= 8641)
    {
        // 24.008 Table 10.5.156
        //If the sending entity wants to indicate a Maximum bit rate for uplink higher than 8640 kbps, it shall set octet 8 to "11111110", i.e. 8640 kbps, and shall encode the value for the Maximum bit rate in octet 17.
        //If the sending entity wants to indicate a Maximum bit rate for downlink higher than 8640 kbps, it shall set octet 9 to "11111110", i.e. 8640 kbps, and shall encode the value for the Maximum bit rate in octet 15.
        //If the sending entity wants to indicate a Guaranteed bit rate for uplink higher than 8640 kbps, it shall set octet 12 to "11111110", i.e. 8640 kbps, and shall encode the value for the Guaranteed bit rate in octet 18.
        //If the sending entity wants to indicate a Guaranteed bit rate for downlink higher than 8640 kbps, it shall set octet 13 to "11111110", i.e. 8640 kbps, and shall encode the value for the Guaranteed bit rate in octet 16.
        //
        DEBUG_ASSERT(((*val_ptr)&(0x00FF))==0);

        *val_ptr &= (0xFF00); // set first octet as 00000000
        *val_ptr |= (0x00FE); // set first octet as 11111110
    }

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_L4CTCM_ENCODE_BIT_RATE, rate, *val_ptr);

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
}

kal_bool l4ctcm_decode_bit_rate(kal_uint16 val, kal_uint32 *rate_ptr)
{
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct* tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (rate_ptr == NULL)
        return KAL_FALSE;

    if (val == 0)
    {
        *rate_ptr = val;
    }
    else if (/*val >= 1 &&*/ val <= 63)
    {
        *rate_ptr = val;
    }
    else if (/*val >= 64 &&*/ val <= 127)
    {
        *rate_ptr = 64 + ((val - 64) << 3);
    }
    else if (/*val >= 128 &&*/ val <= 254)
    {
        *rate_ptr = 576 + ((val - 128) << 6);
    }
    else if (val == 255)
    {
        *rate_ptr = 0;
    }
    else
    {
        val &= 0xFF00; // remove the right byte

        if (val >= (1<<8) && val <= (74<<8))
        {
            *rate_ptr = 8600 + ((val>>8) * 100);
        }
        else if (/*val >= (75<<8) &&*/ val <= (186<<8))
        {
            *rate_ptr = 16000 + (((val>>8)-74) * 1000);
        }
        else if (/*val >= (187<<8) &&*/ val <= (250<<8))
        {
            *rate_ptr = 128000 + (((val>>8)-186) * 2000);
        }
        else if (val > (250<<8))
        {
            *rate_ptr = 256000;// maximum value
        }
        else
        {
            return KAL_FALSE;
        }
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr->rate = *rate_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_DECODE_BIT_RATE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_L4CTCM_DECODE_BIT_RATE, val, *rate_ptr);

    return KAL_TRUE;
}


#else //#ifdef __REL6__


/*****************************************************************************
* FUNCTION
*   l4ctcm_encode_bit_rate / l4ctcm_decode_bit_rate
* DESCRIPTION
*   This function handles the mapping between bit rate (kbps) and encoded value
*
* PARAMETERS
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_encode_bit_rate(kal_uint16 rate, kal_uint16 *val_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct* tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (val_ptr == NULL)
        return KAL_FALSE;

    if (rate == 0)
    {
        *val_ptr = rate;
    }
    else if (/*rate >= 1 &&*/ rate <= 63)
    {
        *val_ptr = rate;
    }
    else if (/*rate >= 64 &&*/ rate <= 568)
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
        {
            l4ctcm_round_up_encode_func(rate, 64, 64, 8, val_ptr);
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
            (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
            ilm.peer_buff_ptr = NULL;
            tcm_send_msg_to_mod_nil(&ilm);
        }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        return l4ctcm_round_up_encode_func(rate, 64, 64, 8, val_ptr);      /* 64 + (rate - 64) / 8 */
    }
    else if (/*rate >= 569 &&*/ rate <= 575) //mtk00714 :__APP_SECONDARY_PDP_SUPPORT__
    {
        *val_ptr = 128; //treat as 576
    } // ~mtk00714
    else if (/*rate >= 576 &&*/ rate <= 8640)
    {
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
        {
            l4ctcm_round_up_encode_func(rate, 128, 576, 64, val_ptr);
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
            (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
            tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
            ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
            ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
            ilm.peer_buff_ptr = NULL;
            tcm_send_msg_to_mod_nil(&ilm);
        }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))
        return l4ctcm_round_up_encode_func(rate, 128, 576, 64, val_ptr); /* 128 + (rate - 576) / 64 */
    }
    /*
       else if (rate == 0)
       {
          *val_ptr = 255;
       }
    */
    else if (rate > 8640) //mtk00714 :__APP_SECONDARY_PDP_SUPPORT__
    {
        *val_ptr = 254; //maximum value
    }// ~mtk00714
    else
    {
        return KAL_FALSE;
    }

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_L4CTCM_ENCODE_BIT_RATE, rate, *val_ptr);

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_encode_bit_rate_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr->val = *val_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_ENCODE_BIT_RATE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_encode_bit_rate_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return KAL_TRUE;
}

kal_bool l4ctcm_decode_bit_rate(kal_uint16 val, kal_uint16 *rate_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    ilm_struct ilm ;
    tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct* tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    if (rate_ptr == NULL)
        return KAL_FALSE;

    if (val == 0)
    {
        *rate_ptr = val;
    }
    else if (/*val >= 1 &&*/ val <= 63)
    {
        *rate_ptr = val;
    }
    else if (/*val >= 64 &&*/ val <= 127)
    {
        *rate_ptr = 64 + ((val - 64) << 3);
    }
    else if (/*val >= 128 &&*/ val <= 254)
    {
        *rate_ptr = 576 + ((val - 128) << 6);
    }
    else if (val == 255)
    {
        *rate_ptr = 0;
    }
    else
    {
        return KAL_FALSE;
    }

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP,TCM_L4CTCM_DECODE_BIT_RATE, val, *rate_ptr);

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__) && (!defined(__SM_UT__))) // only used for UT Regression
    {
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr = (tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_l4ctcm_decode_bit_rate_struct), TD_RESET));
        tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr->rate = *rate_ptr;
        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_L4CTCM_DECODE_BIT_RATE;
        ilm.local_para_ptr = tcm_ut_check_callback_l4ctcm_decode_bit_rate_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))


    return KAL_TRUE;
}

#endif // ~ #ifdef __REL6__

/*****************************************************************************
* FUNCTION
*   l4ctcm_encode_transfer_delay / l4ctcm_decode_transfer_delay
* DESCRIPTION
*   This function handles the mapping between transfer delay (ms) and encoded value
*
* PARAMETERS
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_encode_transfer_delay(kal_uint16 delay, kal_uint16 *val_ptr)
{

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    ilm_struct* ilm_ptr;
    tcm_ut_check_callback_l4ctcm_encode_transfer_delay_struct* tcm_ut_check_callback_l4ctcm_encode_transfer_delay_ptr;
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    kal_brief_trace(TCM_CONTROL_PLANE_TRACE_GROUP, MMI_FN_ENTER_TCM_L4CTCM_ENCODE_TRANSFER_DELAY, delay, val_ptr);

    if (val_ptr == NULL)
        return KAL_FALSE;

    if (delay == 0)
    {
        *val_ptr = 0;
    }
    /* for delay between (1-9) we must set the encoded
         value to 1 but no subscribed value 0
      */
    else if (/*delay >= 1 &&*/ delay <= 9)
    {
        *val_ptr = 1;
    }
    //else if (delay >= 10 && delay <= 150)
    else if (/*delay >= 10 &&*/ delay <= 150)
    {
        return l4ctcm_round_down_encode_func(delay, 0, 0, 10, val_ptr);         /* 0 + (delay - 0) / 10 */
    }
    else if (/*delay >= 151 &&*/ delay <= 199)
    {
        *val_ptr = 15;
    }
    //else if (delay >= 200 && delay <= 950)
    else if (/*delay >= 200 &&*/ delay <= 999)
    {
        return l4ctcm_round_down_encode_func(delay, 16, 200, 50, val_ptr);    /* 16 + (delay - 200) / 50 */
    }
    else if (/*delay >= 1000 &&*/ delay <= 4000)
    {
        return l4ctcm_round_down_encode_func(delay, 32, 1000, 100, val_ptr); /* 32 + (delay - 1000) / 100 */
    }
    else
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool l4ctcm_decode_transfer_delay(kal_uint16 val, kal_uint16 *delay_ptr)
{
    if (delay_ptr == NULL)
        return KAL_FALSE;

    if (val == 0)
    {
        *delay_ptr = 0;
    }
    else if (/*val >= 1 &&*/ val <= 15)
    {
        *delay_ptr = val * 10;
    }
    else if (/*val >= 16 &&*/ val <= 31)
    {
        *delay_ptr = 200 + ((val - 16) * 50);
    }
    //else if (val >= 32 && val <= 63)
    else if (/*val >= 32 &&*/ val <= 62)
    {
        *delay_ptr = 1000 + ((val - 32) * 100);
    }
    else
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   l4ctcm_round_down_encode_func
* DESCRIPTION
*   This function handles the encoding to be offset + (val - min) / step
*
* PARAMETERS
*    IN
*    IN
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/

kal_bool l4ctcm_round_down_encode_func(kal_uint16 val, kal_uint16 offset, kal_uint16 min, kal_uint16 step, kal_uint16 *result_ptr)
{
    val -= min;

    if (result_ptr == NULL)
        return KAL_FALSE;

    if (step == 0)
        return KAL_FALSE;

    *result_ptr = offset + val / step;
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   l4ctcm_round_up_encode_func
* DESCRIPTION
*   This function handles the encoding to be offset + (val - min) / step
*
* PARAMETERS
*    IN
*    IN
*    IN
*    OUT
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/

kal_bool l4ctcm_round_up_encode_func(kal_uint16 val, kal_uint16 offset, kal_uint16 min, kal_uint16 step, kal_uint16 *result_ptr)
{
    val -= min;

    if (result_ptr == NULL)
        return KAL_FALSE;

    if (step == 0)
        return KAL_FALSE;

#if 0
/* under construction !*/
/* under construction !*/
#else //__APP_SECONDARY_PDP_SUPPORT__
    if (val % step != 0)
        *result_ptr = offset + (val / step + 1);
    else
#endif
    *result_ptr = offset + val / step;
    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*   tcm_
* DESCRIPTION
*   This function handles +CGPADDR
*
* PARAMETERS
*    IN
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
/* +CGPADDR (No set)*/
kal_bool l4ctcm_get_pdp_addr (kal_uint8 cid, kal_uint8 *length, kal_uint8 *addr)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    session_info_block_struct *sib_ptr;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(!(cid > 0 && cid <= TCM_TOT_EXT_CONTEXT))
        return KAL_FALSE;

    if(length==NULL || addr==NULL)
        return KAL_FALSE;

    sib_ptr = tcm_get_sib_ptr((kal_uint8)(cid-1));

    if (TCM_CONTEXT_ACTIVE_STATE == sib_ptr->main_state )
    {
        *length = sib_ptr->pdp_addr_len;
        if (*length == NULL_PDP_ADDR_LEN)
        {
            addr[0] = '\0';
        }
        else
        {
            /* Poying: The maximum of pdp_addr_len is IPV4V6_ADDR_LEN (0x14) if IPv4v6 is turned ON. */
            kal_mem_cpy(addr, sib_ptr->addr_val, sib_ptr->pdp_addr_len);
        }
    }
    else
    {
        addr[0] = '\0';
    }

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}


kal_bool l4ctcm_test_pdp_addr (kal_uint8 const **rsp_str)
{
    if(rsp_str == NULL)
        return KAL_FALSE;

#if (TCM_TOT_EXT_CONTEXT == 1)
    *rsp_str = (kal_uint8 const *)"\r\n+CGPADDR: (1)\r\n";
#else
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGPADDR: (1-%d)\r\n", TCM_TOT_EXT_CONTEXT);
#endif

    return KAL_TRUE;
} //MAX_EXT_PDP_CONTEXT_revise, mtk02285, 20100203

/* query all pdp context, if active, fill 1, else fill 0 */
kal_bool l4ctcm_get_context_state(kal_uint8 *total_context, kal_uint8 *state_list)
{
    kal_uint8 index = 0;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    *total_context = TCM_TOT_CONTEXT;

    for(index=0 ; index<TCM_TOT_CONTEXT ; index++)
    {
        state_list[2*index] = index + 1; //Fill context id

        if(TCM_PTR(sib_tab[index].main_state) == TCM_CONTEXT_ACTIVE_STATE)
            state_list[1+2*index] = 1; // Fill State of context id
        else
            state_list[1+2*index] = 0; // Fill State of context id
    }

    return KAL_TRUE;
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
#endif

kal_bool l4ctcm_test_answer_mode(kal_uint8 const **rsp_str)
{
    return KAL_TRUE;
}

kal_bool l4ctcm_test_auto_answer_mode(kal_uint8 const **rsp_str)
{
    return KAL_TRUE;
}

kal_bool l4ctcm_test_modify_info(kal_uint8 const **rsp_str)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8                   sib_id;  /* Initialized later */
    SESSION_INFO_PTR            si_db_ptr = NULL;
    kal_bool                    bFirst = KAL_TRUE;
    kal_char                    szTemp[5] = {'\0'};
    kal_char                    szActCxt[35] = {'\0'};

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(rsp_str == NULL)
        return KAL_FALSE;

    /* Modified by: CH_Liang 2005.10.14
     * Description: get the list of active external PDP contexts from SIB
     */
    for(sib_id=0 ; sib_id<TCM_TOT_EXT_CONTEXT ; sib_id++)
    {
        /* Get the session information for this context */
        si_db_ptr = tcm_get_sib_ptr(sib_id);

        if(TCM_CONTEXT_ACTIVE_STATE == si_db_ptr->main_state)
        {
            if(KAL_TRUE == bFirst)
            {
                bFirst = KAL_FALSE;
                sprintf(szTemp, "%d", sib_id + 1);
            }
            else
            {
                sprintf(szTemp, ",%d", sib_id + 1);
            }

            strcat(szActCxt, szTemp);
        }
    }

#if (!defined(__TCM_UT__)) // UT not print this
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGCMOD: (%s)\r\n", szActCxt);
#endif // ~ #if (!defined(__TCM_UT__)) // UT not print this
    /* End of Modification, 2005.10.14. Reviewed by: Joseph Chen */

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

kal_bool l4ctcm_test_l2p(kal_uint8 const **rsp_str)
{
    return KAL_TRUE;
}

kal_bool l4ctcm_get_empty_gprs_prof(kal_uint8 *empty_gprs_prof_entry)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8 indx;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for (indx = 0; indx < TCM_TOT_EXT_CONTEXT ; indx++)
    {
        if ( TCM_PTR(sib_tab)[indx].is_sib_defined == TCM_SIB_IDLE )
        {
            *empty_gprs_prof_entry = indx + TCM_MIN_CONTEXT_ID; /* return c_id */
            break;
        }
    }
    if ( indx == TCM_TOT_EXT_CONTEXT )
    {
        return KAL_FALSE; // Could not find a free nsapi
    }

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

kal_bool l4ctcm_get_ppp_auth(kal_uint8 context_id, kal_uint8 *is_chap)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    kal_uint8 sib_id;
    session_info_block_struct *sib_ptr;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    if(!(context_id > 0 && context_id <= TCM_TOT_EXT_CONTEXT))
        return KAL_FALSE;

    /* Get the SIB pointer for this context  */
    sib_id = tcm_get_sib_id(GET_FROM_CONTEXTID, context_id);
    sib_ptr = tcm_get_sib_ptr(sib_id);

    if ( sib_ptr->is_sib_defined != TCM_SIB_IN_USE )
    {
        return KAL_FALSE; /* Return FALSE if no TFT */
    }

    *is_chap = sib_ptr->is_chap;

    return KAL_TRUE;
#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return KAL_FALSE;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

kal_bool l4ctcm_test_ppp_auth(kal_uint8 const **rsp_str)
{
    if(rsp_str == NULL)
        return KAL_FALSE;

#if (TCM_TOT_EXT_CONTEXT == 1)
    *rsp_str = (kal_uint8 const *)"\r\n+EGPAU: (0-1), (1), (0-2)\r\n";
#else
#ifndef __SP_RIL_SUPPORT__
    kal_sprintf((kal_char*)*rsp_str, "\r\n+EGPAU: (0-1), (1-%d), (0-2)\r\n", TCM_TOT_EXT_CONTEXT); //Support: NONE, PAP, CHAP on FP
#else
    kal_sprintf((kal_char*)*rsp_str, "\r\n+EGPAU: (0-1), (1-%d), (0-3)\r\n", TCM_TOT_EXT_CONTEXT); //Support: NONE, PAP, CHAP, PAP/CHAP on SP
#endif
#endif

    return KAL_TRUE;
} //MAX_EXT_PDP_CONTEXT_revise, mtk02285, 20100203


kal_bool l4ctcm_get_msq_mode_info(kal_bool *is_msq_on)
{
#ifdef __MEDIATEK_SMART_QOS__
    {
#ifdef __GEMINI__
        tcm_check_context_correct();
#endif /* __GEMINI__ */

        *is_msq_on = tcm_ptr_g->tcm_msq_context_ptr->is_msq_on ;

        return KAL_TRUE ;
    }
#else  /* __MEDIATEK_SMART_QOS__ */
    return KAL_FALSE ;
#endif /* __MEDIATEK_SMART_QOS__ */
}

kal_bool l4ctcm_get_msq_entry_info(nvram_ef_msq_list_struct *msq_list_info)
{
#ifdef __MEDIATEK_SMART_QOS__
    {
#ifdef __GEMINI__
        tcm_check_context_correct();
#endif /* __GEMINI__ */

        kal_mem_cpy( msq_list_info, tcm_ptr_g->tcm_msq_context_ptr, sizeof(nvram_ef_msq_list_struct) ) ;

        return KAL_TRUE ;
    }
#else  /* __MEDIATEK_SMART_QOS__ */
    return KAL_FALSE ;
#endif /* __MEDIATEK_SMART_QOS__ */
}


kal_bool l4ctcm_test_protocol_config(kal_uint8 const **rsp_str)
{
    if(rsp_str == NULL)
        return KAL_FALSE;

#if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )

#if (TCM_TOT_EXT_CONTEXT == 1)
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGPRCO: (1), %d, %d, (0,1)\r\n", MAX_GPRS_USER_NAME_LEN-1, MAX_GPRS_PASSWORD_LEN-1);
#else
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGPRCO: (1-%d), %d, %d, (0,1)\r\n", TCM_TOT_EXT_CONTEXT, MAX_GPRS_USER_NAME_LEN-1, MAX_GPRS_PASSWORD_LEN-1);
#endif


#else // #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )

#if (TCM_TOT_EXT_CONTEXT == 1)
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGPRCO: (1), %d, %d\r\n", MAX_GPRS_USER_NAME_LEN-1, MAX_GPRS_PASSWORD_LEN-1);
#else
    kal_sprintf((kal_char*)*rsp_str, "\r\n+CGPRCO: (1-%d), %d, %d\r\n", TCM_TOT_EXT_CONTEXT, MAX_GPRS_USER_NAME_LEN-1, MAX_GPRS_PASSWORD_LEN-1);
#endif

#endif // ~ #if ( (defined(__IPV6__)) || (defined(__IPV4V6__)) )

    return KAL_TRUE;
} //MAX_EXT_PDP_CONTEXT_revise, mtk02285, 20100203


kal_bool check_pdp_context_exist_func(void)
{
    kal_bool is_context_exist = KAL_FALSE;
    kal_uint8 index;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for(index=0 ; index < TCM_TOT_CONTEXT ; index++)
    {
        if(TCM_PTR(cntxt_flag[index]) == TCM_CNTXT_VALID)
        {
            is_context_exist = KAL_TRUE;
            break;
        }
    }

    return is_context_exist;
}

kal_uint8 l4ctcm_get_pdp_addr_type(kal_uint8 cid)
{
#ifdef __EXT_PDP_CONTEXT_ON__
    session_info_block_struct *sib_ptr;

    if(!(cid > 0 && cid <= TCM_TOT_EXT_CONTEXT))
        return 0xFF;

#if defined(__RMMI_UT__) && defined(__IPV4V6__)
    return ipv6ut_tcm_pdp_addr_type[cid-1];
#else
    sib_ptr = tcm_get_sib_ptr((kal_uint8)(cid-1));
    kal_prompt_trace(MOD_L4C, "[IPV4V6] l4ctcm_get_pdp_addr_type=%d, cid=%d", sib_ptr->pdp_addr_type, cid);
    return sib_ptr->pdp_addr_type;
#endif /* defined(__RMMI_UT__) && defined(__IPV4V6__) */

#else // #ifdef __EXT_PDP_CONTEXT_ON__
    return 0xFF;
#endif // ~ #ifdef __EXT_PDP_CONTEXT_ON__
}

#ifdef __IPV4V6__
kal_bool l4ctcm_check_is_context_valid(kal_uint8 cid)
{
    kal_prompt_trace(l4c_current_mod_id, "[IPV4V6] l4ctcm_check_is_context_valid, cid=%d", cid);
    if ((cid <= TCM_TOT_CONTEXT) && (cid > 0))
    {
#if defined(__RMMI_UT__) && defined(__IPV4V6__)
        if (ipv6ut_tcm_cntxt_flag[cid-1] == TCM_CNTXT_VALID)
#else
        if (TCM_PTR(cntxt_flag[cid-1]) == TCM_CNTXT_VALID)
#endif
        {
            kal_prompt_trace(l4c_current_mod_id, "[IPV4V6] l4ctcm_check_is_context_valid, return TRUE");
            return KAL_TRUE;
        }
    }
    else
    {
        ASSERT(0);
    }
    kal_prompt_trace(l4c_current_mod_id, "[IPV4V6] l4ctcm_check_is_context_valid, return FALSE");
    return KAL_FALSE;
}

/*
 +CGDCONT=
 +CGPRCO=
 +CGTFT=    //nobody uses this now
 +CGEQREQ=
 +CGEQMIN=
 +CGQREQ=
 +CGQMIN=
 */
void l4ctcm_sib_cpy(kal_uint8 dst_cid, kal_uint8 src_cid)
{
    session_info_block_struct *src_sib_ptr = NULL;
    session_info_block_struct *dst_sib_ptr = NULL;

    src_sib_ptr = tcm_get_sib_ptr(tcm_get_sib_id(GET_FROM_CONTEXTID, src_cid));
    dst_sib_ptr = tcm_get_sib_ptr(tcm_get_sib_id(GET_FROM_CONTEXTID, dst_cid));

    kal_mem_cpy((void*)dst_sib_ptr, (void*)src_sib_ptr, sizeof(session_info_block_struct));

    //V6_TODO: this is really really NOT GOOD
    //         - Is it possible to isolate "user setting" and "pdp state" in a single SIB???
    dst_sib_ptr->context_id = dst_cid;
    dst_sib_ptr->main_state = TCM_CONTEXT_INACTIVE_STATE;
    dst_sib_ptr->sub_state = TCM_CONTEXT_INACTIVE_NULL_STATE;
    dst_sib_ptr->data_plane_state = TCM_DATA_PLANE_DECONFIGURED;
    dst_sib_ptr->has_enter_data_plane_configured_state = KAL_FALSE;

    //cut the allocated buffer
    dst_sib_ptr->prot_options_struct.next_ptr = NULL;
    dst_sib_ptr->prot_option_len = 0;

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
    dst_sib_ptr->tft_in_use.filter_list_ptr = NULL;
    dst_sib_ptr->tft_under_mod.filter_list_ptr = NULL;
#endif // MT/Poying note: we may need to allocate copy the tft link list 

    kal_prompt_trace(l4c_current_mod_id, "[IPV4V6] l4ctcm_sib_cpy(), src_cid=%d, dst_cid=%d", src_cid, dst_cid);
}

void l4ctcm_update_pdp_type(kal_uint8 cid, kal_uint8 pdp_addr_type)
{
#if defined(__RMMI_UT__) && defined(__IPV4V6__)
    ipv6ut_tcm_pdp_addr_type[cid-1] = pdp_addr_type;
#else

    session_info_block_struct *sib_ptr = NULL;
    sib_ptr = tcm_get_sib_ptr(tcm_get_sib_id(GET_FROM_CONTEXTID, cid));

    if (NULL != sib_ptr)
    {
        kal_prompt_trace(l4c_current_mod_id,
                         "[IPV4V6] l4ctcm_update_pdp_type, cid=%d, type=%d", cid, pdp_addr_type);
        sib_ptr->pdp_addr_type = pdp_addr_type;
        sib_ptr->pdp_addr_len = NULL_PDP_ADDR_LEN;
        //MT_NOTE: 20110927, we should NOT change PDP address length here
        /*MT_NOTE: 20010930 bug fix --
          1. TE activates IPV4V6 with cid1
          2. NW accepts with IPV6 first ... TCM updates cid1's pdp_addr_len to 16
          3. L4C copies cid1 to cid2, updates cid2's pdp_add_type to IPV4
          4. L4C activates cid2
          5. SM checks activation request and finds it is IPV4 but the length is 16 --> assert!!!
          --> since IPV4V6 does NOT allow to use static address, L4C always updates length as 1 here!!!
         */
    }

    //MT_V6_TEMP: reuse 0xff magic number for L4C handling
    tcm_restore_sib_to_nvram(cid, 0xFF);
#endif
}
#endif /* __IPV4V6__ */

// check if there is PDP activating or activated
// This function check if certain context has been called tcm_alloc_nsapi
kal_bool check_pdp_context_exist_or_during_activating_func(void)
{
    kal_uint8           cindex ;
    kal_bool            is_context_exist_or_during_activating = KAL_FALSE;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        if (sib_ptr->nsapi != TCM_INVALID_NSAPI)
        {
            kal_brief_trace( TCM_CONTROL_PLANE_TRACE_GROUP, FUNC_CONTEXT_IS_ACTIVATED_OR_DURING_ACTIVATING,
                             sib_ptr->nsapi,
                             sib_ptr->context_id ) ;

            is_context_exist_or_during_activating = KAL_TRUE;

            break ;
        }
    }

#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
    {
        ilm_struct ilm ;
        tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_struct *tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_ptr;

        tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_ptr = (tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_struct *)
                (construct_local_para(sizeof(tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_struct), TD_RESET));

        tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_ptr->callback_func_return_value = is_context_exist_or_during_activating;

        ilm.msg_id = MSG_ID_TCM_UT_CHECK_CALLBACK_CHECK_PDP_CONTEXT_EXIST_OR_DURING_ACTIVATING_FUNC;
        ilm.local_para_ptr = tcm_ut_check_callback_check_pdp_context_exist_or_during_activating_func_ptr;
        ilm.peer_buff_ptr = NULL;
        tcm_send_msg_to_mod_nil(&ilm);
    }
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__))

    return is_context_exist_or_during_activating;
}

#if (defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__))
kal_bool check_if_has_activation_pending_pdp(void)
{
    kal_uint8           cindex ;
    kal_bool            if_has_activation_pending_pdp = KAL_FALSE ;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        if ( (sib_ptr->nsapi != TCM_INVALID_NSAPI)
                && (sib_ptr->sub_state == TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE) )
        {
            if_has_activation_pending_pdp = KAL_TRUE ;

            break ;
        }
    }

    return if_has_activation_pending_pdp;
}

kal_bool check_if_has_deactivation_pending_pdp(void)
{
    kal_uint8           cindex ;
    kal_bool            if_has_deactivation_pending_pdp = KAL_FALSE ;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        if ( (sib_ptr->nsapi != TCM_INVALID_NSAPI)
                && (sib_ptr->sub_state == TCM_CONTEXT_ACTIVE_WAITING_SM_DEACT_CNF_STATE) )
        {
            if_has_deactivation_pending_pdp = KAL_TRUE ;
            break ;
        }
    }

    return if_has_deactivation_pending_pdp;
}

kal_bool check_if_has_mt_activation_pending_pdp(void)
{
    kal_uint8           cindex ;
    kal_bool            if_has_mt_activation_pending_pdp = KAL_FALSE ;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    for (cindex = 0; cindex < TCM_TOT_CONTEXT; cindex++)
    {
        SESSION_INFO_PTR sib_ptr = tcm_get_sib_ptr(cindex) ;

        if ( (sib_ptr->nsapi != TCM_INVALID_NSAPI)
                && (sib_ptr->main_state == TCM_CONTEXT_WAIT_AP_RSP_STATE) )
        {
            if_has_mt_activation_pending_pdp = KAL_TRUE ;
            break ;
        }
    }

    return if_has_mt_activation_pending_pdp;
}
#endif /* (defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)) */

#ifndef __APP_SECONDARY_PDP_SUPPORT__

kal_bool l4ctcm_dataAccountId_to_cid (kal_uint8 data_account_id, kal_uint8 *context_id)
{
    kal_uint8 				sib_id;
    SESSION_INFO_PTR 		sib_ptr;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    /* Check context id pointer */
    if ( context_id == NULL )
        return KAL_FALSE;

    /* Read the SIB for internal context  */
    for ( sib_id = TCM_TOT_EXT_CONTEXT; sib_id < TCM_TOT_CONTEXT ; sib_id ++ )
    {
        /* Get the SIB pointer for this context */
        sib_ptr = tcm_get_sib_ptr ( sib_id );

        if ( (sib_ptr->main_state == TCM_CONTEXT_ACTIVE_STATE) &&
                (sib_ptr->additional_para_type == TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID) &&
                ((kal_uint8)(sib_ptr->additional_para_content) == data_account_id) )
        {
            *context_id = tcm_get_context_id_from_sib_id(sib_id);
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
}
#endif // ~ #ifndef __APP_SECONDARY_PDP_SUPPORT__   


#ifdef __APP_SECONDARY_PDP_SUPPORT__ //mtk00714 streaming

/*****************************************************************************
* FUNCTION
*   l4ctcm_get_linked_context_id
* DESCRIPTION
*   This function finds the active PDP context with same profile id,
*   to return as linked cid
*
* PARAMETERS
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_uint8 l4ctcm_get_linked_context_id(kal_uint8 dataAccountId)
{
    kal_uint8 linked_context_id = 0xff;
    kal_uint8 index = 0;

    for (index = TCM_TOT_EXT_CONTEXT; index < TCM_TOT_CONTEXT; index ++)
    {
        if ((tcm_ptr_g->sib_tab[index].main_state == TCM_CONTEXT_ACTIVE_STATE)
                && (tcm_ptr_g->sib_tab[index].additional_para_type == TCM_PDP_ACT_REQ_HAS_EXTRA_PARA_AS_DATA_ACCOUNT_ID)
                && ((kal_uint8)(tcm_ptr_g->sib_tab[index].additional_para_content) == dataAccountId))
        {
            linked_context_id = tcm_ptr_g->sib_tab[index].context_id;
            break;
        }
    }

#ifdef __MTK_INTERNAL__
/* under construction !*/
#endif // ~  #ifdef __MTK_INTERNAL__

    return linked_context_id;
}


/*****************************************************************************
* FUNCTION
*   l4ctcm_check_qos_fulfilled
* DESCRIPTION
*   This function checks if the qos is fullfilled
*
* PARAMETERS
*    IN
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool l4ctcm_check_qos_fulfilled(nvram_editor_qos_struct * qos, kal_uint8 linked_context_id)
{
    return KAL_FALSE;
}


#endif /* ~ __APP_SECONDARY_PDP_SUPPORT__ */

/* erica: new EM */
kal_uint8 l4ctcm_get_pdp_type(kal_uint8 context_id)
{
    kal_uint8        sib_id;
    session_info_block_struct *sib_ptr;
    kal_uint8 	context_type;

#if (defined(__GEMINI__))
    tcm_check_context_correct();
#endif // ~ #if (defined(__GEMINI__))

    /* Get the command information for the context */
    sib_id = tcm_get_sib_id ( GET_FROM_CONTEXTID, context_id );
    sib_ptr = tcm_get_sib_ptr ( sib_id );

    if((sib_ptr->context_type == PRIMARY_CONTEXT )
            && (sib_ptr->AT_definition & TCM_CGDCONT_DEFINED))
    {
        context_type = PRIMARY_CONTEXT;
    }
    else if((sib_ptr->context_type == SECONDARY_CONTEXT )
            && (sib_ptr->AT_definition & TCM_CGDSCONT_DEFINED))
    {
        context_type = SECONDARY_CONTEXT;
    }
    else
    {
        context_type = UNKNOWN_CONTEXT;
    }

    kal_brief_trace(TRACE_INFO, TCM_PDP_CONTEXT_TYPE, context_type);
    return context_type;
}


#ifdef __ACL_SUPPORT__
kal_uint8 l4ctcm_get_acl_type(void)
{
    usim_acl_type_enum result;
    l4c_acl_mode_enum acl_type = ACL_NOT_SUPPORT;

    /* Query USIM for ACL service type */
#ifdef __GEMINI__
    result = usim_query_acl_type((sim_interface_enum)tcm_ptr_g->sim_interface);
#else
    result = usim_query_acl_type();
#endif

    switch(result)
    {
    case USIM_NOT_INITIALIZED:
        kal_brief_trace(TRACE_INFO, TCM_INFO_GET_ACL_TYPE_USIM_NOT_INITIALIZED);
        /* ACL is not supported */
        acl_type = ACL_NOT_SUPPORT;
        break;

    case USIM_ACL_SERVICE_NOT_AVAILABLE:
        kal_brief_trace(TRACE_INFO, TCM_INFO_GET_ACL_TYPE_USIM_ACL_SERVICE_NOT_AVAILABLE);
        /* ACL is not supported */
        acl_type = ACL_NOT_SUPPORT;
        break;

    case USIM_ACL_SERVICE_NOT_ACTIVATED:
        kal_brief_trace(TRACE_INFO, TCM_INFO_GET_ACL_TYPE_USIM_ACL_SERVICE_NOT_ACTIVATED);
        /* ACL is supported but disabled */
        acl_type = ACL_DISABLE;
        break;

    case USIM_ACL_SERVICE_ACTIVATED:
        kal_brief_trace(TRACE_INFO, TCM_INFO_USIM_ACL_SERVICE_ACTIVATED);
        /* ACL is supported and enabled */
        acl_type = ACL_ENABLE;
        break;

    default:
        ASSERT(0);
    }

    return (kal_uint8)acl_type;
}
#endif /* ~__ACL_SUPPORT__ */

#ifdef __MEDIATEK_SMART_QOS__
void tcml4c_get_current_plmn_id(kal_uint8 *sim_plmn, kal_uint8 *nw_plmn)
{
    kal_uint8 imsi[17];
    kal_uint8 plmn_len = 0;
    kal_uint8 mnc_len = 0;

    //1. Get PLMN ID from SIM card
    if (KAL_TRUE == l4c_smu_get_imsi_req(L4C_SRC, (kal_uint8*) imsi))
    {
        //1.1. with SIM
#ifdef __GEMINI__
        mnc_len = sim_query_mnc_num((sim_interface_enum)tcm_ptr_g->sim_interface);
#else
        mnc_len = sim_query_mnc_num(SIM1);
#endif
        if (mnc_len==0)
        {
            mnc_len = 3;
        }
        plmn_len = mnc_len+3;
        kal_mem_cpy(sim_plmn, &imsi[1], plmn_len);          /* Fill-in the first five or six digits. */
        sim_plmn[plmn_len] = '\0';                          /* Fill-in the NUL-termiator. */
    }
    else
    {
        //1.2. without SIM
        sim_plmn[0] = 'X';
        sim_plmn[1] = '\0';
    }

    //2. Get PLMN ID from NW
    l4c_nw_get_current_oper_req(L4C_SRC, (kal_uint8*) nw_plmn);
}
#endif

