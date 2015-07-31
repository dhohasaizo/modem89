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
 * TCM_ACL_SUPPORT.C
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

#ifdef __MASE__
#include "l4_msgid.h"
#endif

#include "tcm_acl_support.h"
#include "md_sap.h"
#include "sm_msgid.h"
#include "sim_ps_msgid.h"

/* enums. */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "sim_public_enum.h"
#include "l4c_common_enum.h"

/* structs. */
#include "l4c2tcm_struct.h"
#include "sim_ps_struct.h"
#include "tcm2l4c_struct.h"
#include "tcm_context.h"

/* debugs. */
#include "tcm_trc.h"
#include "tcm_assert.h"

/* prototypes. */
#include "sim_ps_api.h"
#include "tcm_send_msg.h"

#ifdef __UGTCM__
#include "tcm_ugtcm_send_msg.h"
#include "tcm_ugtcm_fsm.h"
#endif /* __UGTCM__ */

#define MAX_SIM_READ_SIZE  256
#define MAX_SIM_WRITE_SIZE  255

#ifdef __ACL_SUPPORT__
/*****************************************************************************
* FUNCTION
*   tcm_acl_set_mode_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_SET_ACL_MODE_REQ
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_set_mode_req_hdlr(ilm_struct *ilm_ptr)
{
    l4ctcm_set_acl_mode_req_struct *l4c_req_ptr = NULL;
    sim_acl_mode_req_struct *sim_req_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SET_MODE_REQ_HDLR_SUBOP );

    if (TCM_ACL_IDLE == tcm_ptr_g->acl_cntxt.curr_action)
    {
        sim_req_ptr = (sim_acl_mode_req_struct*)construct_local_para(
                            sizeof(sim_acl_mode_req_struct), TD_DL);
        tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_SET_MODE;
        l4c_req_ptr = (l4ctcm_set_acl_mode_req_struct *)ilm_ptr->local_para_ptr;
        if (KAL_TRUE == l4c_req_ptr->on_off)
        {
            kal_brief_trace(TRACE_GROUP_3, TCM_ACL_SET_MODE_REQ_ON);
        }
        else
        {
            kal_brief_trace(TRACE_GROUP_3, TCM_ACL_SET_MODE_REQ_OFF);
        }

        /* Send SIM_ACL_MODE_REQ */
        sim_req_ptr->switch_on = (kal_bool) l4c_req_ptr->on_off; /* mtk00938: KAL_TRUE=ON, KAL_FALSE=OFF */
        tcm_send_msg_to_sim(MSG_ID_SIM_ACL_MODE_REQ, (void *)sim_req_ptr);
    }
    else
    {
        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_SET_MODE_NOT_ALLOWED, tcm_ptr_g->acl_cntxt.curr_action);
        tcm_send_msg_to_l4c(MSG_ID_L4CTCM_SET_ACL_MODE_CNF, NULL, NULL);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SET_MODE_REQ_HDLR_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_get_entries_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_GET_ACL_ENTRIES_REQ
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_get_entries_req_hdlr(ilm_struct *ilm_ptr)
{
    l4ctcm_get_acl_entries_req_struct *l4c_req_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_GET_ENTRIES_REQ_HDLR_SUBOP );

    l4c_req_ptr = (l4ctcm_get_acl_entries_req_struct *)ilm_ptr->local_para_ptr;

    if (TCM_ACL_IDLE == tcm_ptr_g->acl_cntxt.curr_action)
    {
        /* MMI enters ACL menu */
        tcm_ptr_g->acl_cntxt.is_mmi_in_acl_menu = KAL_TRUE;

        /* Store start_index and max_read_entries for future use */
        tcm_ptr_g->acl_cntxt.read_start_index = l4c_req_ptr->start_index;
        tcm_ptr_g->acl_cntxt.max_read_entries = l4c_req_ptr->max_read_entries;

        if (0 == l4c_req_ptr->start_index)
        {
            /* MMI wants to read ACL list from beginning. */
            tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_MMI_GET_FILE_INFO;
            tcm_send_file_info_req_to_sim (TCM_ACL_MMI_GET_ACL_ENTRY);
        }
        else
        {
            /* MMI continue to read ACL list */
            tcm_ptr_g->acl_cntxt.curr_action |= TCM_ACL_MMI_READ;
            tcm_acl_send_read_cnf_to_l4c();
            tcm_ptr_g->acl_cntxt.curr_action &= (~TCM_ACL_MMI_READ);
        }
    }
    else
    {
        /* Reject */
        tcm_acl_send_get_entries_rej_to_l4c(TCM_ACL_ACTION_NOT_ALLOWED);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_GET_ENTRIES_REQ_HDLR_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_set_entry_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_SET_ACL_ENTRY_REQ
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_set_entry_req_hdlr(ilm_struct *ilm_ptr)
{
    l4ctcm_set_acl_entry_req_struct *l4c_req_ptr = NULL;
    kal_uint8 apn_len = 0;
    kal_uint8 *apn;
    kal_bool result = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SET_ENTRY_REQ_HDLR_SUBOP );

    l4c_req_ptr = (l4ctcm_set_acl_entry_req_struct *)ilm_ptr->local_para_ptr;

    if (TCM_ACL_IDLE == tcm_ptr_g->acl_cntxt.curr_action)
    {
        apn = (kal_uint8 *)&(l4c_req_ptr->acl_entry.apn);
        apn_len = strlen((char*) apn);

        result = tcm_acl_modify_apn_in_context(l4c_req_ptr->index, apn, apn_len);

        if (KAL_TRUE == result)
        {
            /* Set action to MMI WRITE */
            tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_MMI_WRITE;
            tcm_acl_write_apn_list_to_sim(TCM_ACL_MMI_SET_ACL_ENTRY);            
        }
        else
        {
            /* Beyond file size limit */
            tcm_acl_send_set_entry_rej_to_l4c(TCM_ACL_SIM_FILE_FULL);            
        }
    }
    else
    {
        /* Reject */
        tcm_acl_send_set_entry_rej_to_l4c(TCM_ACL_ACTION_NOT_ALLOWED);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SET_ENTRY_REQ_HDLR_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_add_entry_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_ADD_ACL_ENTRY_REQ
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_add_entry_req_hdlr(ilm_struct *ilm_ptr)
{
    l4ctcm_add_acl_entry_req_struct *l4c_req_ptr = NULL;
    kal_uint8 add_apn_len = 0;
    kal_uint8 *add_apn;
    kal_bool result = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_ADD_ENTRY_REQ_HDLR_SUBOP );

    l4c_req_ptr = (l4ctcm_add_acl_entry_req_struct *)ilm_ptr->local_para_ptr;

    /* Set action to MMI WRITE */
    if (TCM_ACL_IDLE == tcm_ptr_g->acl_cntxt.curr_action)
    {        
        add_apn = l4c_req_ptr->acl_entry.apn;
        add_apn_len = strlen((char*) add_apn);

        result = tcm_acl_add_apn_to_context(add_apn, add_apn_len);

        if (KAL_TRUE == result)
        {
            tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_MMI_WRITE;
            tcm_acl_write_apn_list_to_sim(TCM_ACL_MMI_ADD_ACL_ENTRY);
        }
        else
        {
            /* Beyond file size limit */
            tcm_acl_send_add_entry_rej_to_l4c(TCM_ACL_SIM_FILE_FULL);            
        }
    }
    else
    {
        /* Reject */
        tcm_acl_send_add_entry_rej_to_l4c(TCM_ACL_ACTION_NOT_ALLOWED);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_ADD_ENTRY_REQ_HDLR_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_del_entry_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_DEL_ACL_ENTRY_REQ
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_del_entry_req_hdlr(ilm_struct *ilm_ptr)
{
    l4ctcm_del_acl_entry_req_struct *l4c_req_ptr = NULL;
    kal_uint8 result;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_DEL_ENTRY_REQ_HDLR_SUBOP );

    l4c_req_ptr = (l4ctcm_del_acl_entry_req_struct *)ilm_ptr->local_para_ptr;

    /* Set action to MMI WRITE */
    if (TCM_ACL_IDLE == tcm_ptr_g->acl_cntxt.curr_action)
    {
        if (KAL_FALSE == l4c_req_ptr->del_all)
        {
            result = tcm_acl_del_apn_in_context(l4c_req_ptr->index);

            if (KAL_TRUE == result)
            {
                tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_MMI_WRITE;
                tcm_acl_write_apn_list_to_sim(TCM_ACL_MMI_DEL_ACL_ENTRY);
            }
            else
            {
                /* Beyond file size limit */
                tcm_acl_send_del_entry_rej_to_l4c(TCM_ACL_ACTION_NOT_ALLOWED);            
            }
        }
    }
    else
    {
        /* Reject */
        tcm_acl_send_del_entry_rej_to_l4c(TCM_ACL_ACTION_NOT_ALLOWED);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_DEL_ENTRY_REQ_HDLR_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_leave_menu_req_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_L4CTCM_LEAVE_ACL_MENU_REQ.
*   MMI sends this primitive to inform L4C/TCM that user leaves ACL menu.
*
* PARAMETERS
*   ilm_ptr      IN     Pointer to the ILM struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_leave_menu_req_hdlr(ilm_struct *ilm_ptr)
{
    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_LEAVE_MENU_REQ_HDLR_SUBOP );

    /* MMI leaves ACL menu */
    tcm_ptr_g->acl_cntxt.is_mmi_in_acl_menu = KAL_FALSE;
    
    if ((TCM_ACL_PDP_GET_FILE_INFO != tcm_ptr_g->acl_cntxt.curr_action) ||
        (TCM_ACL_PDP_READ != tcm_ptr_g->acl_cntxt.curr_action))
    {
        tcm_acl_reset_context();
    }
    else
    {
        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_CONTEXT_NOT_RESET, tcm_ptr_g->acl_cntxt.curr_action);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_LEAVE_MENU_REQ_HDLR_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_get_entries_rej_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF to L4C with result = FALSE.
*
* PARAMETERS
*   cause      IN     cause
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_get_entries_rej_to_l4c(kal_uint16 cause)
{
    l4ctcm_get_acl_entries_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_GET_ENTRIES_REJ_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_get_acl_entries_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_get_acl_entries_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_FALSE;
    l4c_cnf_ptr->cause = cause;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_GET_ENTRIES_REJ_TO_L4C_SUBOP );

    return;    
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_set_entry_rej_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF to L4C with result = FALSE.
*
* PARAMETERS
*   cause      IN     cause
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_set_entry_rej_to_l4c(kal_uint16 cause)
{
    l4ctcm_set_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_SET_ENTRY_REJ_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_set_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_set_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_FALSE;
    l4c_cnf_ptr->cause = cause;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_SET_ENTRY_REJ_TO_L4C_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_add_entry_rej_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_ADD_ACL_ENTRY_CNF to L4C with result = FALSE.
*
* PARAMETERS
*   cause      IN     cause
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_add_entry_rej_to_l4c(kal_uint16 cause)
{
    l4ctcm_add_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_ADD_ENTRY_REJ_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_add_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_add_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_FALSE;
    l4c_cnf_ptr->cause = cause;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_ADD_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_ADD_ENTRY_REJ_TO_L4C_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_del_entry_rej_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF to L4C with result = FALSE.
*
* PARAMETERS
*   cause      IN     cause
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_del_entry_rej_to_l4c(kal_uint16 cause)
{
    l4ctcm_del_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_DEL_ENTRY_REJ_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_del_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_del_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_FALSE;
    l4c_cnf_ptr->cause = cause;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_DEL_ENTRY_REJ_TO_L4C_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_is_apn_exist_in_context
* DESCRIPTION
*   This procedure check whether some specific APN is the TCM ACL context or not.
*
* PARAMETERS
*   apn_len      IN     Length of APN to be checked
*   apn            IN     Pointer to the APN string
* RETURNS
*   BOOLEAN   TRUE: APN is in the TCM ACL context
*                    FALSE: APN is not in the TCM ACL context 
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_acl_is_apn_exist_in_context(kal_uint8 apn_len, kal_uint8* apn)
{
    kal_uint16 curr_read_byte = 0;     /* Point to the current read byte in EFacl */
    kal_uint8 meaningful_bytes_in_this_read = 0;
    kal_uint8 curr_apn_len = 0; /* Length of current APN */
    kal_uint8 curr_apn_len_countdown = 0; /* Bytes left un-parsed in the current APN */
    kal_uint8 curr_label_len = 0; /* Length of current Label in the current APN */
    kal_uint8 *temp = NULL; /* Temp storage to accomondate APN */
    kal_uint8 apn_write_byte = 0;
    kal_uint8 *data = NULL;
    kal_uint16 data_len = 0;
    kal_uint8 curr_apn_index = 0;
    kal_bool result = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_IS_APN_EXIST_IN_CONTEXT_SUBOP );

    if (0 == apn_len)
    {
        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_TO_BE_ACTIVATED_IS_NETWORK_PROVIDED_APN);
    }
    else
    {
        #ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif // ~ #ifdef __MTK_INTERNAL__
    }

    /* Allocate memory for temp storage for APN decoded from context  */
    temp = (kal_uint8 *)get_ctrl_buffer(MAX_APN_LEN+1);
    kal_mem_set(temp, 0, MAX_APN_LEN+1);

    /* Read context */
    data = tcm_ptr_g->acl_cntxt.apn_list;
    data_len = tcm_ptr_g->acl_cntxt.apn_list_len;

    if ((NULL == data) || (0 == data_len))
        return KAL_FALSE;

    /* Skip the first byte, which is Total num of APNs */
    curr_read_byte++;

    do
    {
        /* Check if next byte is 0xDD, which is the delimiter of APNs */
        if (0xDD == data[curr_read_byte++])
        {
            /* Reset temp storage */
            kal_mem_set(temp, 0, MAX_APN_LEN+1);
            apn_write_byte = 0;

            if (curr_read_byte >= data_len)
            {
                /*
                 *       data[index]:   (n-1)    (n)       (n+1)
                 *               length:      n       n+1       n+2
                 *             content:    0x32    0xDD    EOF
                */
                meaningful_bytes_in_this_read = curr_read_byte;
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Next byte is the length of current APN, including further 0xDD if it is composed of multiple labels. */
            curr_apn_len = data[curr_read_byte++];
            curr_apn_len_countdown = curr_apn_len;
            if ((curr_read_byte + curr_apn_len) > data_len)
            {
                /*
                 *       data[index]:   (n-2)    (n-1)     (n)     (n+1)
                 *               length:    n-1        n         n+1    n+2
                 *             content:    0x32    0xDD    0x0A    EOF
                */
                /* Only partial APN is contained in this SIM read cnf. */
                meaningful_bytes_in_this_read = (curr_read_byte -2);
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            if (0 == curr_apn_len)
            {
                /* Network provided APN */
                temp[apn_write_byte++] = 0;
            }
            else
            {
                /* Parsing each LABEL. */
                do
                {
                    /*
                     *       data[index]:   (n-3)    (n-2)    (n-1)     (n)      (n+1)   (n+2)    (n+3)    (n+4)      (n+5)
                     *               length:    n-2       n-1       n        n+1       n+2     n+3      n+4       n+5        n+6
                     *             content:    0x32    0xDD    0x0A    0x04     0x74    0x65     0x73      0x74       0x04
                    */
                    curr_label_len = data[curr_read_byte++];

                    if (((curr_read_byte + curr_label_len) > data_len) || 
                        ((apn_write_byte + curr_label_len) > MAX_APN_LEN+1))
                    {
                        /* Label length is too large to read or to wirte */
                        meaningful_bytes_in_this_read = (curr_read_byte -1);
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                        break;
                    }

                    if (curr_apn_len_countdown < curr_label_len)
                    {
                        /* Something wrong with label length. Stop parsing */
                        meaningful_bytes_in_this_read = (curr_read_byte -1);
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                        break;
                    }

                    /* Skip one byte, which is label length */
                    curr_apn_len_countdown--;

                    /* Copy content of label into temp storage */
                    kal_mem_cpy(
                        (temp + apn_write_byte),
                        (data + curr_read_byte),
                        curr_label_len
                    );

                    /* Update pointers */
                    curr_read_byte += curr_label_len;
                    apn_write_byte += curr_label_len;

                    /* Check if next label is required */
                    curr_apn_len_countdown -= curr_label_len;
                    if (curr_apn_len_countdown > 0)
                    {
                        /* Next label is required. Add '.' to the end of current label */
                        temp[apn_write_byte++] = 0x2E; /* Hex value of '.' in ASCII table */
                    }
                }while (curr_apn_len_countdown > 0);

                if (0 != curr_apn_len_countdown)
                {
                    /* Something wrong with label length. Stop. */
                    break;
                }
            }
            /* Add null byte to the end */
            temp[apn_write_byte++] = 0x00; 

            /* Compare two APNs */
            if (0 == strlen((char *)temp))
            {
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_TO_BE_COMPARED_IS_NETWORK_PROVIDED_APN, curr_apn_index);
            }
            else
            {     
                #ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
                #endif // ~ #ifdef __MTK_INTERNAL__
            }

            if (apn_len == 0)
            {
                /* APN to be activated is Network-provided APN */
                if (0 == strlen((char *)temp))
                {
                    kal_brief_trace(TRACE_GROUP_3, TCM_ACL_BOTH_ARE_NETWORK_PROVIDED_APN);
                    kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_FOUND);
                    result = KAL_TRUE;
                    break;
                }
            }
            else
            {
                /* Length of APN to be activated is not Zero. In this case, memcmp can work.  */
                if (strlen((char *)temp) == apn_len)
                {
                    /* Length of both APNs are the same. Start to compare the content */
                    if (0 == kal_mem_cmp(temp, apn, apn_len))
                    {
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_FOUND);
                        result = KAL_TRUE;
                        break;
                    }
                }
                else
                {
                    /* Since length of both APNs len is not the same, they can never be the same APN */
                }
            }

            /* Prepare to parse next APN */
            kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_NOT_MATCH);
            curr_apn_len = 0;
            curr_label_len = 0;
            curr_apn_len_countdown = 0;
            curr_apn_index++;
        }
        else
        {
            /* Not 0xDD */
            break;
        }
    }while (curr_read_byte < data_len);

    /* Free temp storate */
    free_ctrl_buffer(temp);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_IS_APN_EXIST_IN_CONTEXT_SUBOP );

    return result;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_sim_read_cnf_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_SIM_READ_CNF.
*
* PARAMETERS
*   cnf_ptr         IN     Pointer to sim_read_cnf_struct
*   curr_action   IN     Current action
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_sim_read_cnf_hdlr(void *msg_ptr, kal_uint8 curr_action)
{
    sim_read_cnf_struct *cnf_ptr = (sim_read_cnf_struct *)msg_ptr;
    sim_read_req_struct *new_req_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SIM_READ_CNF_HDLR_SUBOP );

    if (cnf_ptr->result == SIM_CMD_SUCCESS)
    {
        /* mtk00938: Large EFacl Support */
        if (KAL_TRUE == tcm_ptr_g->acl_cntxt.sim_read_session.is_read_sim)
        {
            if (0 == tcm_ptr_g->acl_cntxt.sim_read_session.curr_sim_read_count)
            {
                if (NULL == tcm_ptr_g->acl_cntxt.apn_list)
                {
                    kal_brief_trace(TRACE_GROUP_3, TCM_ACL_LIST_IN_CONTEXT_IS_EMPTY_AS_EXPECTED);
                    tcm_ptr_g->acl_cntxt.apn_list = (kal_uint8 *)get_ctrl_buffer(tcm_ptr_g->acl_cntxt.max_apn_list_len);
                    kal_mem_set(tcm_ptr_g->acl_cntxt.apn_list, 0xFF, tcm_ptr_g->acl_cntxt.max_apn_list_len);
                }
                else
                {
                    /* ACL list in the context is not empty es expected. Discard old ACL list */
                    kal_brief_trace(TRACE_WARNING, TCM_ACL_CONTEXT_SHOULD_BE_EMPTY_BUT_NOT);
                    kal_brief_trace(TRACE_WARNING, TCM_ACL_DISACRD_ACL_LIST_IN_CONTEXT);
                    free_ctrl_buffer(tcm_ptr_g->acl_cntxt.apn_list);
                    tcm_ptr_g->acl_cntxt.apn_list = (kal_uint8 *)get_ctrl_buffer(tcm_ptr_g->acl_cntxt.max_apn_list_len);
                    kal_mem_set(tcm_ptr_g->acl_cntxt.apn_list, 0xFF, tcm_ptr_g->acl_cntxt.max_apn_list_len);
                }
            }

            /* Store the file in the context */
            kal_mem_cpy(
                (tcm_ptr_g->acl_cntxt.apn_list + tcm_ptr_g->acl_cntxt.sim_read_session.bytes_already_read),
                cnf_ptr->data,
                cnf_ptr->length
            );

            /* Update */
            tcm_ptr_g->acl_cntxt.sim_read_session.bytes_already_read += cnf_ptr->length;
            tcm_ptr_g->acl_cntxt.sim_read_session.curr_sim_read_count += 1;

            if (tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count - tcm_ptr_g->acl_cntxt.sim_read_session.curr_sim_read_count > 0)
            {
                /* Need read SIM again at least once */
                new_req_ptr = (sim_read_req_struct *)construct_local_para(
                    sizeof(sim_read_req_struct), TD_RESET);
                new_req_ptr->file_idx = FILE_U_ACL_IDX;
                new_req_ptr->access_id = cnf_ptr->access_id;
                new_req_ptr->para = tcm_ptr_g->acl_cntxt.sim_read_session.bytes_already_read;

                /* Fill length that need to read */
                if (tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count - tcm_ptr_g->acl_cntxt.sim_read_session.curr_sim_read_count > 1)
                    new_req_ptr->length = MAX_SIM_READ_SIZE;
                else
                    /* Last time to read SIM */
                    new_req_ptr->length = tcm_ptr_g->acl_cntxt.sim_read_session.res_bytes_to_read;

                /* Send req to SIM */
                tcm_send_msg_to_sim(MSG_ID_SIM_READ_REQ, (void *)new_req_ptr);

                return;
            }
            else
            {
                /* SIM read complete */
                tcm_ptr_g->acl_cntxt.sim_read_session.is_read_sim = KAL_FALSE;
            }
        }
        else
        {
            /* Wrong flag */
            return;
        }

        /* Parse data read from SIM */
        tcm_acl_parse_sim_file_state0();
        
        /* Continue PDP activation procedure. */
        tcm_acl_pdp_continue_activate_proc();

        /* Check MMI action */
        if (TCM_ACL_PDP_READ == tcm_ptr_g->acl_cntxt.curr_action)
        {
            /* Reset ACL context only when:
             * 1. Only PDP READ action
             * 2. MMI is not in ACL menu. 
             *     For example, if MMI is in ACL menu and after PDP READ, MMI may still need to add/edit/delete.
             *     In this case, ACL context should not be reset.
             */
            if (KAL_FALSE == tcm_ptr_g->acl_cntxt.is_mmi_in_acl_menu)
            {
                /* Reset ACL context */
                tcm_acl_reset_context();                
            }
        }

        if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_PDP_READ) == TCM_ACL_PDP_READ)
        {
            tcm_ptr_g->acl_cntxt.curr_action &= (~TCM_ACL_PDP_READ);
        }

        if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_MMI_READ) == TCM_ACL_MMI_READ)
        {
            tcm_acl_send_read_cnf_to_l4c();
        }

        /* Reset ACL action */
        tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
    }
    else
    {
        /* SIM read fail */
        if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_MMI_READ) == TCM_ACL_MMI_READ)
        {
            /* Send REJ to L4C */
            tcm_acl_send_get_entries_rej_to_l4c(TCM_ACL_SIM_READ_FAILED);
        }

        /* mtk00938 20080713: Reject PDP Activation when SIM fails to read EFacl
            After surveying ref phone behaviour, it is found that if ACL is on but SIM fails to read ACL file,
            PDP Context Activation is always rejected. */
        if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_PDP_READ) == TCM_ACL_PDP_READ)
        {
            /* Reject all pending PDP activation procedure. */
            tcm_acl_pdp_reject_activate_proc(TCM_ACL_SIM_READ_FAILED);
            // Reject Cause: TCM_ACL_SIM_READ_FAILED
        }

        /* Reset ACL action */
        tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SIM_READ_CNF_HDLR_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_sim_write_cnf_hdlr
* DESCRIPTION
*   This procedure handles MSG_ID_SIM_WRITE_CNF.
*
* PARAMETERS
*   cnf_ptr         IN     Pointer to sim_write_cnf_struct
*   curr_action   IN     Current action
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_sim_write_cnf_hdlr(void *msg_ptr, kal_uint8 curr_action)
{
    sim_write_cnf_struct *cnf_ptr = (sim_write_cnf_struct *)msg_ptr;
    sim_write_req_struct *new_req_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SIM_WRITE_CNF_HDLR_SUBOP );

    if (cnf_ptr->result == SIM_CMD_SUCCESS)
    {
        /* mtk00938: Large EFacl Support */
        if (KAL_TRUE == tcm_ptr_g->acl_cntxt.sim_write_session.is_write_sim)
        {
            ASSERT(cnf_ptr->para == tcm_ptr_g->acl_cntxt.sim_write_session.bytes_already_write);

            tcm_ptr_g->acl_cntxt.sim_write_session.bytes_already_write += cnf_ptr->length;
            tcm_ptr_g->acl_cntxt.sim_write_session.curr_sim_write_count += 1;

            if (tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count - tcm_ptr_g->acl_cntxt.sim_write_session.curr_sim_write_count > 0)
            {
                new_req_ptr = (sim_write_req_struct *)construct_local_para(
                    sizeof(sim_write_req_struct), TD_RESET);
                new_req_ptr->file_idx = FILE_U_ACL_IDX;
                new_req_ptr->access_id = cnf_ptr->access_id;
                new_req_ptr->para = tcm_ptr_g->acl_cntxt.sim_write_session.bytes_already_write;

                if (tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count - tcm_ptr_g->acl_cntxt.sim_write_session.curr_sim_write_count > 1)
                    new_req_ptr->length = MAX_SIM_WRITE_SIZE;
                else
                    new_req_ptr->length = tcm_ptr_g->acl_cntxt.sim_write_session.res_bytes_to_write;

                kal_mem_cpy(
                    (new_req_ptr->data + 5),
                    (tcm_ptr_g->acl_cntxt.apn_list + tcm_ptr_g->acl_cntxt.sim_write_session.bytes_already_write),
                    new_req_ptr->length
                );

                tcm_send_msg_to_sim(MSG_ID_SIM_WRITE_REQ, (void *)new_req_ptr);
                return;
            }
            else
            {
                /* Write SIM action is finished. */
                tcm_ptr_g->acl_cntxt.sim_write_session.is_write_sim = KAL_FALSE;
                /* Continue PDP activation procedure. */
                tcm_acl_pdp_continue_activate_proc();

                /* Check MMI action */
                if (TCM_ACL_MMI_WRITE == tcm_ptr_g->acl_cntxt.curr_action)
                {
                    tcm_acl_send_write_cnf_to_l4c(cnf_ptr);
                }

                /* Reset ACL action */
                tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
            }
        }
        else
        {
            /* Wrong flag. */
            return;
        }        
    }
    else
    {
        /* SIM Write fail */
        if (TCM_ACL_MMI_WRITE == tcm_ptr_g->acl_cntxt.curr_action)
        {
            tcm_acl_send_write_rej_to_l4c(cnf_ptr, TCM_ACL_SIM_WRITE_FAILED);
        }
        /* Reset ACL action */
        tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SIM_WRITE_CNF_HDLR_SUBOP );
     
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_write_apn_list_to_sim
* DESCRIPTION
*   This procedure writes TCM ACL list in the context to (U)SIM.
*
* PARAMETERS
*   mmi_action  IN     MMI action
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_write_apn_list_to_sim(kal_uint8 mmi_action)
{
    sim_write_req_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_WRITE_APN_LIST_TO_SIM_SUBOP );

    /* Calculate how many times needed to write ACL to EFacl in SIM and residual bytes to write in the last SIM read action */
    if (tcm_ptr_g->acl_cntxt.efacl_file_size < tcm_ptr_g->acl_cntxt.max_apn_list_len)
    {
        tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count = tcm_ptr_g->acl_cntxt.efacl_file_size/MAX_SIM_WRITE_SIZE;
        tcm_ptr_g->acl_cntxt.sim_write_session.res_bytes_to_write = 
            tcm_ptr_g->acl_cntxt.efacl_file_size - (tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count)*MAX_SIM_WRITE_SIZE;
        if (tcm_ptr_g->acl_cntxt.efacl_file_size%MAX_SIM_WRITE_SIZE > 0)
            tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count++;
    }
    else
    {
        tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count = tcm_ptr_g->acl_cntxt.max_apn_list_len/MAX_SIM_WRITE_SIZE;
        tcm_ptr_g->acl_cntxt.sim_write_session.res_bytes_to_write = 
            tcm_ptr_g->acl_cntxt.max_apn_list_len - (tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count)*MAX_SIM_WRITE_SIZE;
        if (tcm_ptr_g->acl_cntxt.max_apn_list_len%MAX_SIM_WRITE_SIZE > 0)
            tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count++;
    }


    /* Initialize SIM write session */
    tcm_ptr_g->acl_cntxt.sim_write_session.is_write_sim = KAL_TRUE;
    tcm_ptr_g->acl_cntxt.sim_write_session.curr_sim_write_count = 0;
    tcm_ptr_g->acl_cntxt.sim_write_session.bytes_already_write = 0;

    /* Allocate memory */
    msg_ptr = (sim_write_req_struct *)construct_local_para(
        sizeof(sim_write_req_struct), TD_RESET);
    msg_ptr->file_idx = FILE_U_ACL_IDX;
    msg_ptr->access_id = mmi_action;
    msg_ptr->para = 0;

    if (tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count > 1)
    {
        /* Need write more than once */
        msg_ptr->length = MAX_SIM_WRITE_SIZE;
    }
    else if ((tcm_ptr_g->acl_cntxt.sim_write_session.max_sim_write_count == 1) &&
                (tcm_ptr_g->acl_cntxt.sim_write_session.res_bytes_to_write ==0))
    {
        /* Write once, and legnth is MAX_SIM_WRITE_SIZE */
        msg_ptr->length = MAX_SIM_WRITE_SIZE;
    }
    else
    {
        /* One SIM write can write the whole file */
        msg_ptr->length = tcm_ptr_g->acl_cntxt.sim_write_session.res_bytes_to_write;
    }

    kal_mem_cpy(
        (msg_ptr->data + 5),
        tcm_ptr_g->acl_cntxt.apn_list,
        msg_ptr->length
    );
    
    tcm_send_msg_to_sim(MSG_ID_SIM_WRITE_REQ, (void *)msg_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_WRITE_APN_LIST_TO_SIM_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_pdp_continue_activate_proc
* DESCRIPTION
*   This procedure continues PDP activation procedure.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_pdp_continue_activate_proc(void)
{
    SESSION_INFO_PTR            si_db_ptr = NULL;
    kal_uint8 sib_id = 0;
    kal_bool is_apn_valid = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, FUNC_TCM_CONTINUE_ACT_PROC);


    for (sib_id = 0; sib_id < TCM_TOT_CONTEXT; sib_id ++)
    {	
        if ((tcm_ptr_g->acl_cntxt.pending_activating_sib & (0x01 << sib_id)) == 0)
        {
            continue;
        }
        else
        {
            tcm_ptr_g->acl_cntxt.pending_activating_sib &= (~(0x01 << sib_id));

            si_db_ptr = tcm_get_sib_ptr( sib_id );

            // ASSERT(si_db_ptr->context_type == PRIMARY_CONTEXT);
            kal_brief_trace(TRACE_INFO, TCM_PDP_CONTEXT_TYPE, si_db_ptr->context_type);

        #ifdef __GEMINI__
            if (usim_query_acl_type((sim_interface_enum)tcm_ptr_g->sim_interface) == USIM_ACL_SERVICE_ACTIVATED)
        #else
            if (usim_query_acl_type( ) == USIM_ACL_SERVICE_ACTIVATED)
        #endif
            {
                is_apn_valid = tcm_acl_is_apn_exist_in_context(si_db_ptr->apn_len, si_db_ptr->apn);
                if (is_apn_valid == KAL_TRUE)
                {
                    #ifdef __UGTCM__
                    /* proceed the activate_proc: send REQ to SM */
                    tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REQ,
                    			                          si_db_ptr,
                    			                          (void *)NULL,
                    			                          (void *)NULL );
                    #endif /* __UGTCM__ */

                    #ifdef __TCM_NEW_ARCH_DEBUG__
                    if(TCM_CONTEXT_INACTIVE_STATE != si_db_ptr->main_state)
                    {
                        ASSERT(0);
                    }
                    if(TCM_CONTEXT_INACTIVE_NULL_STATE != si_db_ptr->sub_state)
                    {
                        ASSERT(0);
                    }
                    #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
                    tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                    tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE);

                }
                else
                {
                    si_db_ptr->cause = TCM_ACL_APN_NOT_EXIST_IN_ACL ;    //?? Any better choice ?
                    // Reject Cause: APN is not exist in ACL context
                    
                    #ifdef __UGTCM__
                    /* reject the activate request */
                     tcm_activate_rej_aux_proc( sib_id,
                                                TCM_CONFIG_OPTION_FROM_SIB,
                                                0, 
                                                NULL ) ; /* Poying: The PCO info can be simply retrieved from SIB. */
                                                
                    /* Poying: Clear TCM context. */
                    tcm_terminate_context( tcm_get_sib_id(GET_FROM_CONTEXTID, si_db_ptr->context_id) );
                    #endif /* __UGTCM__ */
                }
            }
            else
            {
                #ifdef __UGTCM__ 
                /* ACL service is not activated. Proceed normal activate_proc */
                tcm_send_msg_to_sm( MSG_ID_SMREG_PDP_ACTIVATE_REQ,
                		                          si_db_ptr,
                		                          (void *)NULL,
                		                          (void *)NULL );
                #endif /* __UGTCM__ */

                #ifdef __TCM_NEW_ARCH_DEBUG__
                if(TCM_CONTEXT_INACTIVE_STATE != si_db_ptr->main_state)
                {
                    ASSERT(0);
                }
                if(TCM_CONTEXT_INACTIVE_NULL_STATE != si_db_ptr->sub_state)
                {
                    ASSERT(0);
                }
                #endif // ~ #ifdef __TCM_NEW_ARCH_DEBUG__
                tcm_change_tcm_context_main_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_STATE);
                tcm_change_tcm_context_sub_state_value(si_db_ptr, TCM_CONTEXT_INACTIVE_WAITING_SM_ACT_CNF_STATE);            
            }
        }
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, FUNC_EXIT_TCM_CONTINUE_ACT_PROC );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_pdp_reject_activate_proc
* DESCRIPTION
*   This procedure rejects all pending PDP activation procedure.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_pdp_reject_activate_proc(kal_uint16 rej_cause)
{
    SESSION_INFO_PTR si_db_ptr = NULL;
    kal_uint8 sib_id = 0;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, FUNC_TCM_ACL_REJECT_ACT_PROC);


    for (sib_id = 0; sib_id < TCM_TOT_CONTEXT; sib_id ++)
    {	
        if ((tcm_ptr_g->acl_cntxt.pending_activating_sib & (0x01 << sib_id)) == 0)
        {
            continue;
        }
        else
        {
            tcm_ptr_g->acl_cntxt.pending_activating_sib &= (~(0x01 << sib_id));

            si_db_ptr = tcm_get_sib_ptr( sib_id );

            // ASSERT(si_db_ptr->context_type == PRIMARY_CONTEXT);
            kal_brief_trace(TRACE_INFO, TCM_PDP_CONTEXT_TYPE, si_db_ptr->context_type);

            si_db_ptr->cause = rej_cause ;
            
            #ifdef __UGTCM__
            /* reject the activate request */
             tcm_activate_rej_aux_proc( sib_id,
                                        TCM_CONFIG_OPTION_FROM_SIB,
                                        0,
                                        NULL ) ; /* Poying: The PCO info can be simply retrieved from SIB. */
            #endif /* __UGTCM__ */
        }
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM, FUNC_TCM_ACL_REJECT_ACT_PROC );

    return;
}



/*****************************************************************************
* FUNCTION
*   tcm_acl_send_add_entry_cnf_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF to L4C with result = TRUE.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_add_entry_cnf_to_l4c(void)
{
    l4ctcm_add_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_ADD_ENTRY_CNF_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_add_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_add_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_TRUE;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_ADD_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_ADD_ENTRY_CNF_TO_L4C_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_set_entry_cnf_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF to L4C with result = TRUE.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_set_entry_cnf_to_l4c(void)
{
    l4ctcm_set_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_SET_ENTRY_CNF_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_set_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_set_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_TRUE;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_SET_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_SET_ENTRY_CNF_TO_L4C_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_del_entry_cnf_to_l4c
* DESCRIPTION
*   This procedure sends MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF to L4C with result = TRUE.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_del_entry_cnf_to_l4c(void)
{
    l4ctcm_del_acl_entry_cnf_struct *l4c_cnf_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_DEL_ENTRY_CNF_TO_L4C_SUBOP );

    l4c_cnf_ptr = (l4ctcm_del_acl_entry_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_del_acl_entry_cnf_struct), TD_RESET);
    l4c_cnf_ptr->result = KAL_TRUE;
    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_DEL_ACL_ENTRY_CNF, NULL, (void *)l4c_cnf_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_DEL_ENTRY_CNF_TO_L4C_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_write_cnf_to_l4c
* DESCRIPTION
*   This procedure sends CNF (result = TRUE) to L4C after receiving MSG_ID_SIM_WRITE_CNF
*   according to access id.
*
* PARAMETERS
*   cnf_ptr        IN        Pointer to sim_write_cnf_struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_write_cnf_to_l4c(void *cnf_ptr)
{
    sim_write_cnf_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_WRITE_CNF_TO_L4C_SUBOP );

    msg_ptr = (sim_write_cnf_struct *)cnf_ptr;
    switch (msg_ptr->access_id)
    {
        case TCM_ACL_MMI_ADD_ACL_ENTRY:
            tcm_acl_send_add_entry_cnf_to_l4c();
            break;

        case TCM_ACL_MMI_SET_ACL_ENTRY:
            tcm_acl_send_set_entry_cnf_to_l4c();
            break;

        case TCM_ACL_MMI_DEL_ACL_ENTRY:
            tcm_acl_send_del_entry_cnf_to_l4c();
            break;

        default:
            kal_brief_trace(TRACE_WARNING, TCM_ACL_WRONG_ACCESS_ID_IN_SIM_WRITE_CNF, msg_ptr->access_id);
            break;
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_WRITE_CNF_TO_L4C_SUBOP );
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_write_cnf_to_l4c
* DESCRIPTION
*   This procedure sends CNF (result = FALSE) to L4C after receiving MSG_ID_SIM_WRITE_CNF
*   according to access id.
*
* PARAMETERS
*   cnf_ptr        IN        Pointer to sim_write_cnf_struct
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_write_rej_to_l4c(void *cnf_ptr, kal_uint16 cause)
{
    sim_write_cnf_struct *msg_ptr = NULL;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_WRITE_REJ_TO_L4C_SUBOP );

    msg_ptr = (sim_write_cnf_struct *)cnf_ptr;
    switch (msg_ptr->access_id)
    {
        case TCM_ACL_MMI_ADD_ACL_ENTRY:
            tcm_acl_send_add_entry_rej_to_l4c(cause);
            break;

        case TCM_ACL_MMI_SET_ACL_ENTRY:
            tcm_acl_send_set_entry_rej_to_l4c(cause);
            break;

        case TCM_ACL_MMI_DEL_ACL_ENTRY:
            tcm_acl_send_del_entry_rej_to_l4c(cause);
            break;

        default:
            kal_brief_trace(TRACE_WARNING, TCM_ACL_WRONG_ACCESS_ID_IN_SIM_WRITE_CNF, msg_ptr->access_id);
            break;
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_WRITE_REJ_TO_L4C_SUBOP );
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_send_read_cnf_to_l4c
* DESCRIPTION
*   This procedure parses the ACL list in the context and sends MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF to L4C.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_send_read_cnf_to_l4c(void)
{
    l4ctcm_get_acl_entries_cnf_struct *msg_ptr;
    kal_uint8 num_of_apn_in_range = 0;
    kal_uint16 curr_read_byte = 0;     /* Point to the current read byte in EFacl */
    kal_uint8 meaningful_bytes_in_this_read = 0;
    kal_uint8 curr_apn_len = 0; /* Length of current APN */
    kal_uint8 curr_apn_len_countdown = 0; /* Bytes left un-parsed in the current APN */
    kal_uint8 curr_label_len = 0; /* Length of current Label in the current APN */
    kal_uint8 apn_write_byte = 0;
    kal_uint8 temp[0xFF]; /* Temp storage to accomondate APN */
    kal_uint8 *data = NULL;
    kal_uint16 data_len = 0;
    kal_uint8 curr_apn_index = 0;
    kal_uint8 i;
    
    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_SEND_READ_CNF_TO_L4C_SUBOP );

    /* Initialize the message */
    msg_ptr = (l4ctcm_get_acl_entries_cnf_struct *)construct_local_para(
        sizeof(l4ctcm_get_acl_entries_cnf_struct), TD_RESET);
    msg_ptr->num_of_entries = 0;
    msg_ptr->start_index = tcm_ptr_g->acl_cntxt.read_start_index;
    msg_ptr->result = KAL_TRUE;

    /* Read context */
    data = tcm_ptr_g->acl_cntxt.apn_list;
    data_len = tcm_ptr_g->acl_cntxt.apn_list_len;

    if (0 == data_len)
    {
        /* EFacl is empty */
        msg_ptr->more_flag = KAL_FALSE;
        tcm_send_msg_to_l4c(MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF, NULL, (void *) msg_ptr);
        return;
    }

    /* First byte in EFacl is Total num of APNs */
    tcm_ptr_g->acl_cntxt.total_apn_in_efacl = data[curr_read_byte++];

    /* Only process as many APNs as indicated in EFacl */
    for (i = 0; i < tcm_ptr_g->acl_cntxt.total_apn_in_efacl; i++)
    {    

        /* Check if next byte is 0xDD, which is the delimiter of APNs */
        if (0xDD == data[curr_read_byte++])
        {
            /* Reset temp storage */
            kal_mem_set(temp, 0, 0xFF);
            apn_write_byte = 0;

            if (curr_read_byte >= data_len)
            {
                /*
                 *       data[index]:   (n-1)    (n)       (n+1)
                 *               length:      n       n+1       n+2
                 *             content:    0x32    0xDD    EOF
                */
                meaningful_bytes_in_this_read = curr_read_byte;
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Next byte is the length of current APN, including further 0xDD if it is composed of multiple labels. */
            curr_apn_len = data[curr_read_byte++];
            curr_apn_len_countdown = curr_apn_len;
            if ((curr_read_byte + curr_apn_len) > data_len)
            {
                /*
                 *       data[index]:   (n-2)    (n-1)     (n)     (n+1)
                 *               length:    n-1        n         n+1    n+2
                 *             content:    0x32    0xDD    0x0A    EOF
                */
                /* Only partial APN is contained in this SIM read cnf. */
                meaningful_bytes_in_this_read = (curr_read_byte -2);
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            if (0 == curr_apn_len)
            {
                /* Networ-provided APN */
                temp[apn_write_byte++] = 0;
            }
            else
            {
                /* Parsing each LABEL. */
                do
                {
                    /*
                     *       data[index]:   (n-3)    (n-2)    (n-1)     (n)      (n+1)   (n+2)    (n+3)    (n+4)      (n+5)
                     *               length:    n-2       n-1       n        n+1       n+2     n+3      n+4       n+5        n+6
                     *             content:    0x32    0xDD    0x0A    0x04     0x74    0x65     0x73      0x74       0x04
                    */
                    curr_label_len = data[curr_read_byte++];
                    curr_apn_len_countdown--;

                    if (((curr_read_byte + curr_label_len) > data_len) || 
                        ((apn_write_byte + curr_label_len) > 0xFF))
                    {
                        /* Label length is too large to read or to wirte */
                        meaningful_bytes_in_this_read = (curr_read_byte -1);
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                        break;
                    }

                    if (curr_apn_len_countdown < curr_label_len)
                    {
                        /* Something wrong with label length. Stop parsing */
                        meaningful_bytes_in_this_read = (curr_read_byte -1);
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                        break;
                    }

                    /* Copy content of label into temp storage */
                    kal_mem_cpy(
                        (temp + apn_write_byte),
                        (data + curr_read_byte),
                        curr_label_len
                    );

                    /* Update pointers */
                    curr_read_byte += curr_label_len;
                    apn_write_byte += curr_label_len;

                    /* Check if next label is required */
                    curr_apn_len_countdown -= curr_label_len;
                    if (curr_apn_len_countdown > 0)
                    {
                        /* Next label is required. Add '.' to the end of current label */
                        temp[apn_write_byte++] = 0x2E; /* Hex value of '.' in ASCII table */
                    }
                }while (curr_apn_len_countdown > 0);

                if (0 != curr_apn_len_countdown)
                {
                    /* Something wrong with this APN. Stop parsing. */
                    break;
                }
            }

            /* Add null byte to the end */
            temp[apn_write_byte++] = 0x00; 

            /* Only process those APN in range */
            if (curr_apn_index >= msg_ptr->start_index)
            {
                if (0 == strlen((char *)temp))
                {
                    kal_brief_trace(TRACE_GROUP_3, TCM_ACL_APN_TO_BE_COMPARED_IS_NETWORK_PROVIDED_APN, curr_apn_index);
                }
                else
                {
                    #ifdef __MTK_INTERNAL__
/* under construction !*/
/* under construction !*/
/* under construction !*/
                    #endif // ~ #ifdef __MTK_INTERNAL__
                }

                /* Update number of APN in range, which means apn_index > start_read_index */
                num_of_apn_in_range++;

                if (msg_ptr->num_of_entries < tcm_ptr_g->acl_cntxt.max_read_entries)
                {
                    /* Fill in the APN in the message */
                    kal_mem_cpy(
                        msg_ptr->acl_list[msg_ptr->num_of_entries++].apn,
                        temp,
                        (apn_write_byte - 1)
                    );
                }
            }

            /* Prepare to parse next APN */
            curr_apn_len = 0;
            curr_label_len = 0;
            curr_apn_len_countdown = 0;
            curr_apn_index++;
        }
        else
        {
            /* Not 0xDD */
            break;
        }
    }

    /* Decide if more_flag is TRUE or FALSE */
    if (num_of_apn_in_range > msg_ptr->num_of_entries)
        msg_ptr->more_flag = KAL_TRUE;
    else
        msg_ptr->more_flag = KAL_FALSE;

    tcm_send_msg_to_l4c(MSG_ID_L4CTCM_GET_ACL_ENTRIES_CNF, NULL, (void *) msg_ptr);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_SEND_READ_CNF_TO_L4C_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_add_apn_to_context
* DESCRIPTION
*   This procedure adds an APN to the ACL list in the context.
*
* PARAMETERS
*   apn         IN      Pointer to the APN string
*   apn_len   IN      Length of the APN to be added
* RETURNS
*   BOOLEAN     TRUE: Add successfully
*                      FLASE: Fail to add
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_acl_add_apn_to_context (kal_uint8 *apn,  kal_uint8 apn_len)
{
    kal_uint8 apn_write_byte = 0;
    kal_uint8* temp; /* Temp storage to accomondate APN */
    kal_bool  retv = KAL_TRUE;
    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_ADD_APN_TO_CONTEXT_SUBOP );

    if (NULL == tcm_ptr_g->acl_cntxt.apn_list)
    {
        /* EFacl is not available in the context */
        kal_brief_trace(TRACE_WARNING, TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_ADD_APN);
        return KAL_FALSE;
    }

    /* Maximum length after APN is econded  */
    temp = (kal_uint8 *)get_ctrl_buffer(MAX_APN_LEN * 2);
    kal_mem_set(temp, 0, MAX_APN_LEN * 2);

    apn_write_byte = tcm_acl_encode_apn(temp, apn, apn_len);

    if (0 != tcm_ptr_g->acl_cntxt.apn_list_len)
    {
        if (apn_write_byte + tcm_ptr_g->acl_cntxt.apn_list_len > tcm_ptr_g->acl_cntxt.max_apn_list_len)
        {
            /* Write size over limit */

            /* Free temp storage */
            free_ctrl_buffer(temp);

            retv = KAL_FALSE;
        }
        else
        {
            /* Write to context */
            kal_mem_cpy(
                tcm_ptr_g->acl_cntxt.apn_list + tcm_ptr_g->acl_cntxt.apn_list_len,
                temp,
                apn_write_byte
            );
            /* Update ACL list length */
            tcm_ptr_g->acl_cntxt.apn_list_len += apn_write_byte;

            /* Update Total number of APNs and encode it into ACL file */
            tcm_ptr_g->acl_cntxt.apn_list[0]++;
            tcm_ptr_g->acl_cntxt.total_apn_in_efacl = tcm_ptr_g->acl_cntxt.apn_list[0];

            /* Free temp storage */
            free_ctrl_buffer(temp);

            retv = KAL_TRUE;
        }
    }
    else
    {
        // if apn_write_byte + tcm_ptr_g->acl_cntxt.apn_list_len + 1 > tcm_ptr_g->acl_cntxt.max_apn_list_len, means SIM will be full
        // the apn_write_byte is current APN length, 
        // the tcm_ptr_g->acl_cntxt.max_apn_list_len is the current length before add this APN, which is 0 here
        // and the 1 is the first byte that stores the total number of APNs
        if (apn_write_byte + 1 > tcm_ptr_g->acl_cntxt.max_apn_list_len) 
        {
            /* Write size over limit */

            /* Free temp storage */
            free_ctrl_buffer(temp);

            retv = KAL_FALSE;
        }
        else
        {
            /* Add one APN to the empty EFacl */
            tcm_ptr_g->acl_cntxt.apn_list[0] = 1;
            tcm_ptr_g->acl_cntxt.apn_list_len++;
            /* Write to context */
            kal_mem_cpy(
                &(tcm_ptr_g->acl_cntxt.apn_list[1]),
                temp,
                apn_write_byte
            );
            /* Update ACL list length */
            tcm_ptr_g->acl_cntxt.apn_list_len += apn_write_byte;
            tcm_ptr_g->acl_cntxt.total_apn_in_efacl = tcm_ptr_g->acl_cntxt.apn_list[0];
    
            /* Free temp storage */
            free_ctrl_buffer(temp);
    
            retv = KAL_TRUE;
        }
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_ADD_APN_TO_CONTEXT_SUBOP );

    return retv;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_encode_apn
* DESCRIPTION
*   This procedure encodes an APN string to the format used in EFacl.
*
* PARAMETERS
*   dst         IN      Pointer to buffer for encoded APN
*   src         IN      Pointer to the APN string
*   src_len   IN      Length of APN string
* RETURNS
*   U16        Length of encoded APN in bytes
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_uint16 tcm_acl_encode_apn(kal_uint8 *dst, kal_uint8 *src, kal_uint16 src_len)
{
    kal_uint8 write_byte = 0;
    kal_uint8 encoded_apn_len = 0;
    kal_uint8 read_byte = 0;
    kal_uint8 label_len_write_position = 0;
    kal_uint8 label_read_start_position = 0;
    kal_uint8 label_len = 0;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_ENCODE_APN_SUBOP );

    /* 1st byte must be 0xDD */
    dst[write_byte++] = 0xDD;

    if (0 == src_len)
    {
        /* Network provided APN */
        dst[write_byte++] = 0;
        return write_byte;
    }

    /* 2nd byte must be length of encoded APN, which is known AFTER whole APN encoding is done. */
    write_byte++;

    do
    {
        /* This byte must be length of label, which is known AFTER encoding is done. */
        label_len_write_position = write_byte;
        label_read_start_position = read_byte;

        do
        {
            if (src[read_byte++] == 0x2E)
            {
                if (label_len > 0)
                {
                    /* Meet '.'  and there are characters before '.' */
                    write_byte++;
                    /* Copy label content */
                    kal_mem_cpy(
                        (dst + write_byte),
                        (src + label_read_start_position),
                        label_len
                    );
                    /* Fill label length */
                    dst[label_len_write_position] = label_len;

                    /* Move pointers */
                    write_byte += label_len;
                    encoded_apn_len += (label_len+1); // one byte for label length + label content
                    /* Reset label length so that we can start to process another label */
                    label_len = 0;

                    if (read_byte == src_len)
                    {
                        /* If '.' is the last charachter of APN */
                        dst[write_byte++] = 0;
                        /* Update encoded APN len */
                        encoded_apn_len++;
                    }
                    break;
                }
                else
                {
                    /* Label length is 0 before meeting "." */
                    /* Example: "." 
                     *  "." is encoded as "DD 02 00 00"
                     *  ".." is encoded as "DD 03 00 00 00"
                     *  "..." is encoded as "DD 04 00 00 00 00"
                     *  ".3gpp" is encoded as "DD 06 00 04 33 67 70 70"
                     *  ".3gpp." is enconded as "DD 07 00 04 33 67 70 70 00"
                     *  "..3gpp.." is encoded as "DD 09 00 00 04 33 67 70 70 00 00"
                     */
                    dst[write_byte++] = 0x00;
                    encoded_apn_len+=1;

                    if (read_byte == src_len)
                    {
                        /* Last label */
                        if (read_byte == 1)
                        {
                            /* Scenario: "." */
                            dst[write_byte++] = 0;
                            encoded_apn_len+=1;
                        }
                        else
                        {
                            /* Scenario: Last dot, and previous is also a dot */
                            dst[write_byte++] = 0;
                            encoded_apn_len+=1;
                        }
                    }
                    break;
                }
            }
            else
            {
                label_len++;
            }
        }while(read_byte < src_len);

        if (0 != label_len)
        {
            /* Last label */
            write_byte++;
            
            kal_mem_cpy(
                (dst + write_byte),
                (src + label_read_start_position),
                label_len
            );
            /* Fill label length */
            dst[label_len_write_position] = label_len;

            /* Move pointers */
            write_byte += label_len;
            encoded_apn_len += (label_len+1); // one byte for label length + label content
        }
    }while (read_byte < src_len);

    /* Write length of encoded APN to the 2nd byte */
    dst[1] = encoded_apn_len;

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_ENCODE_APN_SUBOP );

    return (encoded_apn_len + 2); //including 0xDD and Length of APN
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_parse_sim_file_state0
* DESCRIPTION
*   This procedure parses read EFacl content in the context. 
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_parse_sim_file_state0(void)
{
    kal_uint16 curr_read_byte = 0;     /* Point to the current read byte in EFacl */
    kal_uint8 curr_apn_len = 0; /* Length of current APN */
    kal_uint8 curr_apn_len_countdown = 0; /* Bytes left un-parsed in the current APN */
    kal_uint8 curr_label_len = 0; /* Length of current Label in the current APN */
    kal_uint8 *data = NULL;
    kal_uint16 data_len = 0;
    kal_uint8 curr_apn_index = 0;
    kal_uint16 num_of_apn_after_parse = 0;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_PARSE_SIM_FILE_STATE0_SUBOP );

    /* Read context */
    data = tcm_ptr_g->acl_cntxt.apn_list;
    data_len = tcm_ptr_g->acl_cntxt.max_apn_list_len;

    if (0 == data_len)
    {
        /* EFacl is not read */
        kal_brief_trace(TRACE_WARNING, TCM_ACL_SIM_READ_SUCCESS_BUT_EMPTY_CONTENT);
        return;
    }

    /* First byte in EFacl is Total num of APNs */
    tcm_ptr_g->acl_cntxt.total_apn_in_efacl = data[curr_read_byte++];

    for (curr_apn_index = 0; curr_apn_index < tcm_ptr_g->acl_cntxt.total_apn_in_efacl; curr_apn_index++)
    {
        /* Check if next byte is 0xDD, which is the delimiter of APNs */
        if (0xDD == data[curr_read_byte++])
        {
            if (curr_read_byte >= data_len)
            {
                /*
                 *       data[index]:   (n-1)    (n)       (n+1)
                 *               length:      n       n+1       n+2
                 *             content:    0x32    0xDD    EOF
                */
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, curr_read_byte);
                break;
            }

            /* Next byte is the length of current APN, including further 0xDD if it is composed of multiple labels. */
            curr_apn_len = data[curr_read_byte++];
            curr_apn_len_countdown = curr_apn_len;
            if ((curr_read_byte + curr_apn_len) > data_len)
            {
                /*
                 *       data[index]:   (n-2)    (n-1)     (n)     (n+1)
                 *               length:    n-1        n         n+1    n+2
                 *             content:    0x32    0xDD    0x0A    EOF
                */
                /* Only partial APN is contained in this SIM read cnf. */
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, (curr_read_byte -2));
                break;
            }
            
            if (0 == curr_apn_len)
            {
                /* Network provided APN */
            }
            else
            {
                /* Parsing each LABEL. */
                do
                {
                    /*
                     *       data[index]:   (n-3)    (n-2)    (n-1)     (n)      (n+1)   (n+2)    (n+3)    (n+4)      (n+5)
                     *               length:    n-2       n-1       n        n+1       n+2     n+3      n+4       n+5        n+6
                     *             content:    0x32    0xDD    0x0A    0x04     0x74    0x65     0x73      0x74       0x04
                    */
                    curr_label_len = data[curr_read_byte++];

                    if ((curr_read_byte + curr_label_len) > data_len)
                    {
                        /* Label length is too large to read */
                        curr_read_byte-=1;
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, curr_read_byte);
                        break;
                    }

                    if (curr_apn_len_countdown < curr_label_len)
                    {
                        /* Something wrong with label length. Stop parsing */
                        curr_read_byte-=1;
                        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, curr_read_byte);
                        break;
                    }

                    /* Skip one byte, which is the label length */
                    curr_apn_len_countdown--;

                    /* Update pointers */
                    curr_read_byte += curr_label_len;

                    /* Check if next label is required */
                    curr_apn_len_countdown -= curr_label_len;
                }while (curr_apn_len_countdown > 0);

                if (0 != curr_apn_len_countdown)
                {
                    /* Somwthing wrong with label length */
                    break;
                }
            }

            /* Update number of APN successfully parsed */
            num_of_apn_after_parse++;
            
            /* Prepare to parse next APN */
            curr_apn_len = 0;
            curr_label_len = 0;
            curr_apn_len_countdown = 0;
        }
        else
        {
            /* Not 0xDD */
            curr_read_byte-=1;
            break;
        }
    }

    /* Debug trace */
    kal_brief_trace(TRACE_GROUP_3, TCM_NUM_OF_APN_INDICATED_IN_EFACL, tcm_ptr_g->acl_cntxt.total_apn_in_efacl);
    kal_brief_trace(TRACE_GROUP_3, TCM_NUM_OF_APN_AFTER_PARSING_EFACL, num_of_apn_after_parse);

    /* Copy parsing result to the context */
    if ((curr_read_byte >= 3) && (curr_read_byte <= tcm_ptr_g->acl_cntxt.max_apn_list_len))
    {
        tcm_ptr_g->acl_cntxt.apn_list_len = curr_read_byte;
    }
    else
    {
        /* curr_read_byte < 3 means that
        * 1. EFacl is empty, like EFacl starting from "FF FF". Or
        * 2. Format of EFacl is illeagal. For example, the 2nd byte of EFacl is not 0xDD
        */
        tcm_ptr_g->acl_cntxt.apn_list_len = 0;
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_PARSE_SIM_FILE_STATE0_SUBOP );
    
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_reset_context
* DESCRIPTION
*   This procedure resets ACL context to initial value.
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_acl_reset_context(void)
{
    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_RESET_CONTEXT_SUBOP );

    if (NULL != tcm_ptr_g->acl_cntxt.apn_list)
    {
        free_ctrl_buffer(tcm_ptr_g->acl_cntxt.apn_list);
        tcm_ptr_g->acl_cntxt.apn_list = NULL;
    }

    tcm_ptr_g->acl_cntxt.apn_list_len = 0;
    tcm_ptr_g->acl_cntxt.total_apn_in_efacl = 0;
    tcm_ptr_g->acl_cntxt.efacl_file_size = 0;
    tcm_ptr_g->acl_cntxt.read_start_index = 0;
    tcm_ptr_g->acl_cntxt.max_read_entries = 0;

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_RESET_CONTEXT_SUBOP );

    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_modify_apn_in_context
* DESCRIPTION
*   This procedure modifies specific APN inthe context
*
* PARAMETERS
*   index         IN      Index of APN in the EFacl, starting from 0
*   apn           IN       Pointer to the APN string
*   apn_len     IN       Length of APN string
* RETURNS
*   BOOLEAN    TRUE: Success  
*                     FALSE: Fail
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_acl_modify_apn_in_context(kal_uint16 index, kal_uint8 *apn, kal_uint8 apn_len)
{
    kal_uint8 encoded_apn_write_byte = 0;
    kal_uint8* encoded_apn;
    kal_uint8* temp_acl = NULL;
    kal_uint8 temp_acl_write_byte = 0; 
    kal_uint8 *data = NULL;
    kal_uint16 data_len = 0;
    kal_uint16 curr_read_byte = 0;     /* Point to the current read byte in EFacl */
    kal_uint8 meaningful_bytes_in_this_read = 0;
    kal_uint8 curr_apn_len = 0; /* Length of current APN */
    //kal_uint8 curr_apn_len_countdown = 0; /* Bytes left un-parsed in the current APN */
    //kal_uint8 curr_label_len = 0; /* Length of current Label in the current APN */
    kal_uint8 curr_apn_index = 0;
    kal_bool result = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_MODIFY_APN_IN_CONTEXT_SUBOP );

    /* Encode APN */
    encoded_apn = (kal_uint8 *)get_ctrl_buffer(MAX_APN_LEN+2);
    encoded_apn_write_byte = tcm_acl_encode_apn(encoded_apn, apn, apn_len);

    /* Allocate memory for temp */
    temp_acl = (kal_uint8 *)get_ctrl_buffer(tcm_ptr_g->acl_cntxt.max_apn_list_len);
    kal_mem_set(temp_acl, 0xFF, tcm_ptr_g->acl_cntxt.max_apn_list_len);

    /* Read context */
    data = tcm_ptr_g->acl_cntxt.apn_list;
    data_len = tcm_ptr_g->acl_cntxt.apn_list_len;

    if (NULL == data)
    {
        /* EFacl is not available in the context */
        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_MODIFY_APN);
        return KAL_FALSE;
    }
    else if (0 == data_len)
    {
        /* EFacl is empty */
        kal_brief_trace(TRACE_GROUP_3, TCM_ACL_CONTEXT_IS_EMPTY_WHEN_MODIFY_APN);
        return KAL_FALSE;
    }

    /* First byte in EFacl is Total num of APNs */
    temp_acl[temp_acl_write_byte++] = data[curr_read_byte++];

    do
    {
        /* Check if next byte is 0xDD, which is the delimiter of APNs */
        if (0xDD == data[curr_read_byte++])
        {
            if (curr_read_byte >= data_len)
            {
                /*
                 *       data[index]:   (n-1)    (n)       (n+1)
                 *               length:      n       n+1       n+2
                 *             content:    0x32    0xDD    EOF
                */
                meaningful_bytes_in_this_read = curr_read_byte;
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Next byte is the length of current APN, including further 0xDD if it is composed of multiple labels. */
            curr_apn_len = data[curr_read_byte++];
            //curr_apn_len_countdown = curr_apn_len;
            if ((curr_read_byte + curr_apn_len) > data_len)
            {
                /*
                 *       data[index]:   (n-2)    (n-1)     (n)     (n+1)
                 *               length:    n-1        n         n+1    n+2
                 *             content:    0x32    0xDD    0x0A    EOF
                */
                /* Only partial APN is contained in this SIM read cnf. */
                meaningful_bytes_in_this_read = (curr_read_byte -2);
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Check if we encounter the target APN index */
            if ((curr_apn_index == index) && (KAL_FALSE == result))
            {
                if (temp_acl_write_byte + encoded_apn_write_byte <= tcm_ptr_g->acl_cntxt.max_apn_list_len)
                {
                    /* Copy newly encoded APN to the temp acl */
                    kal_mem_cpy(
                        (temp_acl + temp_acl_write_byte),
                        encoded_apn,
                        encoded_apn_write_byte
                    );
                    temp_acl_write_byte += encoded_apn_write_byte;

                    /* Skip over the old APN in the context */
                    curr_read_byte += curr_apn_len;
                    result = KAL_TRUE;
                }
                else
                {
                    /* File size limit is hit */
                    result = KAL_FALSE;
                    break;
                }
            }
            else
            {
                /* Not the target APN index */
                if (temp_acl_write_byte + (curr_apn_len + 2) <= tcm_ptr_g->acl_cntxt.max_apn_list_len)
                {
                    /* Copy this encoded APN in the context to the temp acl */
                    kal_mem_cpy(
                        (temp_acl + temp_acl_write_byte),
                        (data + (curr_read_byte -2)),
                        (curr_apn_len + 2)
                    );
                    temp_acl_write_byte += (curr_apn_len + 2);
                    curr_read_byte += curr_apn_len;
                }
                else
                {
                    /* File size limit is hit */
                    result = KAL_FALSE;
                    break;                    
                }
            }
           
            /* Prepare to parse next APN */
            curr_apn_len = 0;
            //curr_label_len = 0;
            //curr_apn_len_countdown = 0;
            curr_apn_index++;
        }
        else
        {
            /* Not 0xDD */
            break;
        }
    }while (curr_read_byte < data_len);

    if (KAL_TRUE == result)
    {
        /* Update ACL file in the context */
        free_ctrl_buffer(tcm_ptr_g->acl_cntxt.apn_list);
        tcm_ptr_g->acl_cntxt.apn_list = temp_acl;
        tcm_ptr_g->acl_cntxt.apn_list_len = temp_acl_write_byte;
    }
    else
    {
        /* File size limit is hit */
        free_ctrl_buffer(temp_acl);
    }

    /* Free temp storage for encoded APN */
    free_ctrl_buffer(encoded_apn);

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_MODIFY_APN_IN_CONTEXT_SUBOP );

    return result;
}


/*****************************************************************************
* FUNCTION
*   tcm_acl_del_apn_in_context
* DESCRIPTION
*   This procedure deletes specific APN inthe context
*
* PARAMETERS
*   index         IN      Index of APN in the EFacl, starting from 0
* RETURNS
*   BOOLEAN    TRUE: Success  
*                     FALSE: Fail
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool tcm_acl_del_apn_in_context(kal_uint16 index)
{
    kal_uint8* temp_acl = NULL;
    kal_uint8 temp_acl_write_byte = 0; 
    kal_uint8 *data = NULL;
    kal_uint16 data_len = 0;
    kal_uint16 curr_read_byte = 0;     /* Point to the current read byte in EFacl */
    kal_uint8 meaningful_bytes_in_this_read = 0;
    kal_uint8 curr_apn_len = 0; /* Length of current APN */
    //kal_uint8 curr_apn_len_countdown = 0; /* Bytes left un-parsed in the current APN */
    //kal_uint8 curr_label_len = 0; /* Length of current Label in the current APN */
    kal_uint8 curr_apn_index = 0;
    kal_bool result = KAL_FALSE;

    TCM_CONTROL_PLANE_FN_ENTRY_LOG
         ( MOD_TCM,
           MMI_FN_ENTER_TCM_ACL_DEL_APN_IN_CONTEXT_SUBOP );

    /* Allocate memory for temp */
    temp_acl = (kal_uint8 *)get_ctrl_buffer(tcm_ptr_g->acl_cntxt.max_apn_list_len);
    kal_mem_set(temp_acl, 0xFF, tcm_ptr_g->acl_cntxt.max_apn_list_len);

    /* Read context */
    data = tcm_ptr_g->acl_cntxt.apn_list;
    data_len = tcm_ptr_g->acl_cntxt.apn_list_len;

    if (NULL == data)
    {
        /* EFacl is not available in the context */
        kal_brief_trace(TRACE_WARNING, TCM_ACL_CONTEXT_NOT_AVAILABLE_WHEN_DELETE_APN);
        return KAL_FALSE;
    }
    else if (0 == data_len)
    {
        /* EFacl is empty */
        kal_brief_trace(TRACE_WARNING, TCM_ACL_CONTEXT_IS_EMPTY_WHEN_DELETE_APN);
        return KAL_FALSE;
    }

    /* First byte in EFacl is Total num of APNs */
    temp_acl[temp_acl_write_byte++] = data[curr_read_byte++];

    do
    {
        /* Check if next byte is 0xDD, which is the delimiter of APNs */
        if (0xDD == data[curr_read_byte++])
        {
            if (curr_read_byte >= data_len)
            {
                /*
                 *       data[index]:   (n-1)    (n)       (n+1)
                 *               length:      n       n+1       n+2
                 *             content:    0x32    0xDD    EOF
                */
                meaningful_bytes_in_this_read = curr_read_byte;
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Next byte is the length of current APN, including further 0xDD if it is composed of multiple labels. */
            curr_apn_len = data[curr_read_byte++];
            //curr_apn_len_countdown = curr_apn_len;
            if ((curr_read_byte + curr_apn_len) > data_len)
            {
                /*
                 *       data[index]:   (n-2)    (n-1)     (n)     (n+1)
                 *               length:    n-1        n         n+1    n+2
                 *             content:    0x32    0xDD    0x0A    EOF
                */
                /* Only partial APN is contained in this SIM read cnf. */
                meaningful_bytes_in_this_read = (curr_read_byte -2);
                kal_brief_trace(TRACE_GROUP_3, TCM_ACL_PARSE_EFACL_STOP_BEFORE_EOF, meaningful_bytes_in_this_read);
                break;
            }

            /* Check if we encounter the target APN index */
            if ((curr_apn_index == index) && (KAL_FALSE == result))
            {
                /* Skip over stored encoded APN in the context */
                curr_read_byte += curr_apn_len;

                /* Decrease total number of APNs */
                temp_acl[0]--;
                tcm_ptr_g->acl_cntxt.total_apn_in_efacl = temp_acl[0];
                result = KAL_TRUE;
            }
            else
            {
                /* Not the target APN index */
                /* Copy this encoded APN in the context to the temp acl */
                kal_mem_cpy(
                    (temp_acl + temp_acl_write_byte),
                    (data + (curr_read_byte -2)),
                    (curr_apn_len + 2)
                );
                temp_acl_write_byte += (curr_apn_len + 2);
                curr_read_byte += curr_apn_len;
            }
           
            /* Prepare to parse next APN */
            curr_apn_len = 0;
            //curr_label_len = 0;
            //curr_apn_len_countdown = 0;
            curr_apn_index++;
        }
        else
        {
            /* Not 0xDD */
            break;
        }
    }while (curr_read_byte < data_len);

    if (KAL_TRUE == result)
    {
        /* Update ACL file in the context */
        free_ctrl_buffer(tcm_ptr_g->acl_cntxt.apn_list);
        tcm_ptr_g->acl_cntxt.apn_list = temp_acl;
        tcm_ptr_g->acl_cntxt.apn_list_len = temp_acl_write_byte;
    }
    else
    {
        kal_brief_trace(TRACE_WARNING, TCM_ACL_APN_INDEX_NOT_IN_CONTEXT_WHEN_DELETE, index);
        /* Free temp_acl */
        free_ctrl_buffer(temp_acl);
    }

    TCM_CONTROL_PLANE_FN_NORMAL_EXIT_LOG( MOD_TCM,
                     MMI_FN_EXIT_TCM_ACL_DEL_APN_IN_CONTEXT_SUBOP );

    return result;
}


/*****************************************************************************
* FUNCTION
*   tcm_send_msg_to_sim
* DESCRIPTION
*   This procedure is called whenever a message is to be sent to SIM
*
* PARAMETERS
*   msg_type        IN     Message ID 
*   context_id       IN     the function is triggered by which sib_id 
*   read_size       IN     for SIM_READ_REQ message, indicates the filesize.
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_send_msg_to_sim(msg_type MsgID, void *param_ptr)
{
   ilm_struct ilm ;

   ilm.msg_id = MsgID;
   ilm.local_para_ptr = (local_para_struct *)param_ptr;
   ilm.peer_buff_ptr = NULL;
   
   TCM_SEND_ILM(MOD_TCM, MOD_SIM, PS_SIM_SAP, &ilm);

   return;
}


/*****************************************************************************
* FUNCTION
*   tcm_send_file_info_req_to_sim
* DESCRIPTION
*   This procedure is called whenever a message is to be sent to SIM
*
* PARAMETERS
*
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_send_file_info_req_to_sim(kal_uint8 access_id)
{
    sim_file_info_req_struct *msg_ptr = NULL;

    msg_ptr = (sim_file_info_req_struct *)construct_local_para(
             		 sizeof(sim_file_info_req_struct), TD_DL);
    msg_ptr->file_idx = FILE_U_ACL_IDX;
    msg_ptr->access_id = access_id;
    msg_ptr->info_type = USIM_FILE_SIZE;

    tcm_send_msg_to_sim(MSG_ID_SIM_FILE_INFO_REQ, (void *)msg_ptr);
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_send_read_req_to_sim
* DESCRIPTION
*   This procedure is called whenever a message is to be sent to SIM
*
* PARAMETERS
*
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_send_read_req_to_sim(kal_uint16 file_idx, kal_uint8 access_id, kal_uint16 offset, kal_uint16 read_size)
{
    sim_read_req_struct *msg_ptr = NULL;

    /* Allocate memory to send the local parameters */  
    msg_ptr = (sim_read_req_struct *)construct_local_para(
             		 sizeof(sim_read_req_struct), TD_DL);
    msg_ptr->file_idx = file_idx;
    msg_ptr->access_id = access_id;
    msg_ptr->para = offset;
    msg_ptr->length = read_size;

    tcm_send_msg_to_sim(MSG_ID_SIM_READ_REQ, (void *)msg_ptr);
    return;
}


/*****************************************************************************
* FUNCTION
*   tcm_sim_msg_hdlr
* DESCRIPTION
*   This procedure is called whenever receives a  message from SIM
*
* PARAMETERS
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void tcm_sim_msg_hdlr( ilm_struct *ilm_ptr )
{
    TCM_CONTROL_PLANE_FN_ENTRY_LOG( MOD_TCM, FUNC_TCM_SIM_MSG_HDLR );

   if (ilm_ptr->msg_id == MSG_ID_SIM_FILE_INFO_CNF)
   {
   	 sim_file_info_cnf_struct *msg_ptr = NULL;
   	 kal_bool sim_file_info_result = KAL_FALSE;
   	 
        msg_ptr = (sim_file_info_cnf_struct *)ilm_ptr->local_para_ptr;

        if (FILE_U_ACL_IDX == msg_ptr->file_idx)
        {
            if ((SIM_CMD_SUCCESS == msg_ptr->result)
            && (0 != msg_ptr->file_size))
            {
                sim_file_info_result = KAL_TRUE;

                /* Store the file size */
                tcm_ptr_g->acl_cntxt.efacl_file_size = msg_ptr->file_size;

                /* Calculate how many times needed to read SIM for EFacl and residual bytes to read in the last SIM read action */
                if (tcm_ptr_g->acl_cntxt.efacl_file_size < TCM_MAX_ACL_FILE_SIZE_SUPPORT)
                {
                    /* Efacl is smaller than max size supported. */
                    tcm_ptr_g->acl_cntxt.max_apn_list_len = tcm_ptr_g->acl_cntxt.efacl_file_size;

                    tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count = tcm_ptr_g->acl_cntxt.efacl_file_size/MAX_SIM_READ_SIZE;
                    tcm_ptr_g->acl_cntxt.sim_read_session.res_bytes_to_read = 
                        tcm_ptr_g->acl_cntxt.efacl_file_size - (tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count)*MAX_SIM_READ_SIZE;
                    if (tcm_ptr_g->acl_cntxt.efacl_file_size%MAX_SIM_READ_SIZE > 0)
                        tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count++;
                }
                else
                {
                    /* Efacl is larger than max size supported. */
                    tcm_ptr_g->acl_cntxt.max_apn_list_len = TCM_MAX_ACL_FILE_SIZE_SUPPORT;

                    tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count = tcm_ptr_g->acl_cntxt.max_apn_list_len/MAX_SIM_READ_SIZE;
                    tcm_ptr_g->acl_cntxt.sim_read_session.res_bytes_to_read = 
                        tcm_ptr_g->acl_cntxt.max_apn_list_len - (tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count)*MAX_SIM_READ_SIZE;
                    if (tcm_ptr_g->acl_cntxt.max_apn_list_len%MAX_SIM_READ_SIZE > 0)
                        tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count++;
                }
                
                /* Initialize SIM read session */
                tcm_ptr_g->acl_cntxt.sim_read_session.is_read_sim = KAL_TRUE;
                tcm_ptr_g->acl_cntxt.sim_read_session.curr_sim_read_count = 0;
                tcm_ptr_g->acl_cntxt.sim_read_session.bytes_already_read = 0;
                
                if (tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count > 1)
                {
                    tcm_send_read_req_to_sim(FILE_U_ACL_IDX, 
                                                                   msg_ptr->access_id, //TCM_ACL_MMI_GET_ACL_ENTRY
                                                                   0, //offset
                                                                   MAX_SIM_READ_SIZE //read size
                                                                   );
                }
                else if ((tcm_ptr_g->acl_cntxt.sim_read_session.max_sim_read_count == 1) &&
                            (tcm_ptr_g->acl_cntxt.sim_read_session.res_bytes_to_read == 0))
                {
                    tcm_send_read_req_to_sim(FILE_U_ACL_IDX, 
                                                                   msg_ptr->access_id, //TCM_ACL_MMI_GET_ACL_ENTRY
                                                                   0, //offset
                                                                   MAX_SIM_READ_SIZE //read size
                                                                   );
                }
                else
                {
                    /* One SIM read can read the whole file */
                    tcm_send_read_req_to_sim(FILE_U_ACL_IDX, 
                                                                   msg_ptr->access_id, //TCM_ACL_MMI_GET_ACL_ENTRY
                                                                   0, //offset
                                                                   tcm_ptr_g->acl_cntxt.sim_read_session.res_bytes_to_read //read size
                                                                   );
                }
            }
            else
            {
                sim_file_info_result = KAL_FALSE;
            }

            if (KAL_TRUE == sim_file_info_result)
            {            
                if (TCM_ACL_MMI_GET_FILE_INFO == tcm_ptr_g->acl_cntxt.curr_action)
                {
                    /* Read EFacl by MMI */
                    tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_MMI_READ;
                }
                else if (TCM_ACL_PDP_GET_FILE_INFO == tcm_ptr_g->acl_cntxt.curr_action)
                {
                    /* Read EFacl by PDP */
                    tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_PDP_READ;
                        
                }
                else if ((TCM_ACL_MMI_GET_FILE_INFO|TCM_ACL_PDP_GET_FILE_INFO) == tcm_ptr_g->acl_cntxt.curr_action)
                {
                    /* Read EFacl by MMI and PDP */
                    tcm_ptr_g->acl_cntxt.curr_action = (tcm_acl_action_enum)(TCM_ACL_MMI_READ|TCM_ACL_PDP_READ);
                }
                else
                {
                    /* Action conflict */
                    return;
                }
            }
            else
            {
                /* Get file info fail. Return to L4C */
                if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_MMI_GET_FILE_INFO) == TCM_ACL_MMI_GET_FILE_INFO)
                {
                    tcm_acl_send_get_entries_rej_to_l4c(TCM_ACL_SIM_READ_FAILED);
                }

                /* mtk00938 20080713: Reject PDP Activation when SIM fails to locate EFacl or length of EFacl is 0.
                    After surveying ref phone behaviour, it is found that if ACL is on but 
                    1. EFacl does not exist, or 
                    2. length of EFacl is 0,
                    PDP Context Activation is always rejected. */
                if ((tcm_ptr_g->acl_cntxt.curr_action & TCM_ACL_PDP_GET_FILE_INFO) == TCM_ACL_PDP_GET_FILE_INFO)
                {
                    /* Reject all pending PDP activation procedure. */
                    tcm_acl_pdp_reject_activate_proc(TCM_ACL_SIM_READ_FAILED);
                    // Reject Cause: TCM_ACL_SIM_READ_FAILED
                }

                /* Reset ACL action */
                tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;                
            }
        }
        else
        {
            /* Wrong file */
            return;
        }
   }
   else if (ilm_ptr->msg_id == MSG_ID_SIM_ACL_MODE_CNF)
   {
        sim_acl_mode_cnf_struct *msg_ptr = NULL;
        msg_ptr = (sim_acl_mode_cnf_struct *)ilm_ptr->local_para_ptr;

        if (TCM_ACL_SET_MODE == tcm_ptr_g->acl_cntxt.curr_action)
        {
            tcm_send_msg_to_l4c(MSG_ID_L4CTCM_SET_ACL_MODE_CNF, NULL, (void *)msg_ptr);
            /* Reset ACL current action */
            tcm_ptr_g->acl_cntxt.curr_action = TCM_ACL_IDLE;
        }
        else
        {
            /* Action conflict */
            return;
        }
   }
   else if (ilm_ptr->msg_id == MSG_ID_SIM_READ_CNF)
   {
   	 sim_read_cnf_struct *msg_ptr = NULL;

        msg_ptr = (sim_read_cnf_struct *)ilm_ptr->local_para_ptr;
        ASSERT (msg_ptr->file_idx ==  FILE_U_ACL_IDX);

        tcm_acl_sim_read_cnf_hdlr(msg_ptr, tcm_ptr_g->acl_cntxt.curr_action);
   }
   else if(ilm_ptr->msg_id == MSG_ID_SIM_WRITE_CNF)
   {
   	 sim_write_cnf_struct *msg_ptr = NULL;

        msg_ptr = (sim_write_cnf_struct *)ilm_ptr->local_para_ptr;
        ASSERT (msg_ptr->file_idx ==  FILE_U_ACL_IDX);

        tcm_acl_sim_write_cnf_hdlr(msg_ptr, tcm_ptr_g->acl_cntxt.curr_action);
   }


    return;
}

#endif /* __ACL_SUPPORT__ */
