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
 * smsal_l4c_funcs.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains fucntion-based fucntions for L4C. Two categories:
 *   1) AT-commands, query/test/execution
 *   2) Operations can execute and return results immediately, eg,
 *      get message list, etc.
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

#ifndef __SMSAL_XXX_C
#define __SMSAL_XXX_C
#endif

#include <stdio.h>
#include "sms_msgid.h"

/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

/* Buffer Management */

#include "l3_inc_enums.h"
#include "smsal_enums.h"
#include "smsal_timer.h"

/* SMSAL <--> L4C */

#include "mcd_l4_common.h"


#include "l4c2smsal_struct.h"

#include "smsal_l4c_defs.h"
#include "smsal_l4c_enum.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"

#include "smsal_other_funcs.h"
#include "smsal_transport_proc.h"
#include "smsal_sms.h"
#include "smsal_checks.h"
#include "smsal_storage.h"

#ifdef __CB__
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "nvram_data_items.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"

extern kal_bool custom_remove_cgsms_constraint(void);

static kal_uint8 smsal_at_test_str[30];

#ifdef AT_NON_CODE_REDUCE
/*--------------------------------------------------------------------------
 *
 * AT-Commands Test String, the test string of following commands are fixed:
 * +CSMS, +CPMS, +CMGF, +CSDH, +CNMI, +CMMS, +CNMA.
 *
 *--------------------------------------------------------------------------*/
kal_char const *const SMSAL_AT_CMD_TEST_STR[NUM_OF_FIXED_AT_TEST_STRING] = 
{
    "+CSMS: (0,1)",                     /* +CSMS: supported services */

#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    /* 
     * SM: only SIM
     * ME: only ME
     * SM_P: prefer SIM, 
     * ME_P: prefer ME 
     * MT: any
     */
    "+CPMS: (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\"), (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\"), (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\")",
    /* +CPMS: supported memory types */
#else
    "+CPMS: (\"SM\"), (\"SM\"), (\"SM\")",
#endif

    "+CMGF: (0,1)",                     /* +CMGF: supported msg formats */
    // "+CSDH: 0, 1",                    /* +CSDH: supported show modes */
    "+CNMI: (0-3), (0-3), (0,2,3), (0,1), (0,1)",       /* +CNMI: supported mode, mt, bm, ds, bpr */
    "+CMMS: (0-2)",                     /* +CMMS */
    "+CNMA: (0-2)",                     /* +CNMA when PDU mode adopted */
    "+CSCB: (0,1)"                      /* +CSCB */
};
#endif

/* 
 * +EQSI Test String, different from message format 
 */
kal_char const *const SMSAL_AT_CMD_EXT_TEST_STR[1] =
{
#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    "+EQSI: (\"SM\", \"ME\")"
#else
    "+EQSI: (\"SM\")"
#endif
};


/* 
 * +CMGL Test String, different from message format 
 */
kal_char const *const SMSAL_CMGL_TEST_STR[NUM_OF_SMSAL_MSG_FORMAT] = 
{
    /* PDU Mode */
    "+CMGL: (0-4)",

    /* TEXT Mode */
    "+CMGL: (\"REC UNREAD\", \"REC READ\", \"STO UNSENT\", \"STO SENT\", \"ALL\")"
};

void smsal_get_common_para(kal_uint8  *fo,
                           kal_uint8  *bearer,
                           kal_uint8  *reply_path,
                           kal_uint8  *status_report)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    *fo = smsal_para_ptr->common.fo;
    *reply_path = smsal_para_ptr->common.reply_path;
    *status_report = smsal_para_ptr->common.status_report;
    *bearer = smsal_para_ptr->common.bearer_service;

    return;
}


/*****************************************************************************
* FUNCTION
*  smsal_get_mailbox_addr
* DESCRIPTION
*   This function return the mailbox address information.
*
* PARAMETERS
*  a  IN/OUT   mailbox_num
*  b  IN/OUT   mailbox_addr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_get_mailbox_addr(kal_uint8 *mailbox_num, 
                            kal_uint8 *alpha_length, 
                            kal_uint8 *max_num_length,
                            smsal_mailbox_addr_struct *mailbox_addr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 i;

    /* ASSERT( mailbox_num != NULL && mailbox_addr != NULL ); */
    if (mailbox_num == NULL || mailbox_addr == NULL)
    {
        SMSAL_ASSERT(KAL_FALSE);
        return;
    }

    /*
     * if CPHS is supported AND SIM has this file, then mailbox_num 
     * * is  set according to no of record number read from SIM.     
     * * OTHERWISE, mailbox_num is set to a predefined value 
     */
    #if defined (__REL4__) || defined(__CPHS__)
    #if defined (__REL4__) && defined(__CPHS__)
    if ((IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE) ||
        (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE))
    #elif defined (__REL4__)
    if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
    #elif defined(__CPHS__)
    if (IS_FLAG_SET(CPHS_MBOX_FLAG) == KAL_TRUE)
    #endif
        *mailbox_num = smsal_para_ptr_g->mailbox.rec_num;
    else
    #endif
    {
        // since no files in sim, use nvram setting
        #ifdef __GEMINI__
        *mailbox_num = (NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL/SMSAL_MAX_SIM_NUM);
        #else
        *mailbox_num = NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL;
        #endif
    }

    if (IS_FLAG_SET(SMSAL_EXT_FLAG) == KAL_TRUE)
        *max_num_length = 40;
    else
        *max_num_length = 20;

    if (alpha_length != NULL)
        *alpha_length = smsal_para_ptr_g->mailbox.alpha_size;

    for (i = 0; i < *mailbox_num; i++)
    {
        /* padding bcd address with 0xff */
        smsal_para_ptr_g->mailbox.addr[i].addr.addr_bcd[smsal_para_ptr_g->mailbox.addr[i].addr.addr_length] = 0xff;

        /* unused bcd length is 0xff, set to zero for clarity */
        if (smsal_para_ptr->mailbox.addr[i].addr.addr_length == 0xff)
            smsal_para_ptr->mailbox.addr[i].addr.addr_length = 0;

        kal_mem_cpy(mailbox_addr+i,
                    &(smsal_para_ptr_g->mailbox.addr[i]),
                    sizeof(smsal_mailbox_addr_struct));
    }

}                                       /* end of smsal_get_mailbox_addr */


#ifdef __REL4__
/*****************************************************************************
* FUNCTION
*  smsal_get_mbi
* DESCRIPTION
*   This function return the mailbox address information.
*
* PARAMETERS
*  a  IN/OUT   mailbox_num
*  b  IN/OUT   mailbox_addr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_get_mbi(kal_uint8 *msp_num, 
                   smsal_mbi_struct *mbi)
{
    kal_uint8 i, j;

    if (msp_num == NULL)
    {
        SMSAL_ASSERT(KAL_FALSE);
        return;
    }

    *msp_num = smsal_para_ptr_g->mailbox.mbi_rec_num;

    for (i = 0; i < *msp_num; i++)
    {
        // MAUI_01926235 [SMSAL][FixBug] REL4 MBI <index> does not sync with MMI 
        //kal_mem_cpy(mbi+i,
        //            &(smsal_para_ptr_g->mailbox.mbi[i]),
        //            sizeof(smsal_mbi_struct));

        for( j=0 ; j<NUM_OF_MSG_WAITING_TYPE ; j++)
        {
            (mbi+i)->mbi_id[j] = smsal_para_ptr_g->mailbox.mbi[i].mbi_id[j] - 1;
            // 0 -> invalid 0xff
            // 1 -> index 0
            // 2 -> index 1
            // 3 -> index 2
        }
    }
}                                       /* end of smsal_get_mbi */


/*****************************************************************************
* FUNCTION
*  smsal_get_selected_msp
* DESCRIPTION
*   This function return the mailbox address information.
*
* PARAMETERS
*  a  IN/OUT   mailbox_num
*  b  IN/OUT   mailbox_addr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_get_selected_msp(kal_uint8 *selected_msp)
{
    if (selected_msp == NULL)
    {
        SMSAL_ASSERT(KAL_FALSE);
        return;
    }

    *selected_msp = smsal_para_ptr_g->common.selected_msp;

}                                       /* end of smsal_get_selected_msp */


/*****************************************************************************
* FUNCTION
*  smsal_set_selected_msp
* DESCRIPTION
*   This function return the mailbox address information.
*
* PARAMETERS
*  a  IN/OUT   mailbox_num
*  b  IN/OUT   mailbox_addr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_set_selected_msp(kal_uint8 selected_msp)
{

    /* msp count from 0 */
    if (selected_msp >= SMSAL_MAX_MSP_NUM)
        return MSG_LEN_EXCEEDED;

    smsal_para_ptr_g->common.selected_msp = selected_msp;

    smsal_set_common_change_to_nvram(SMSAL_MAX_PENDING_ACT);
    
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_set_selected_msp */


#endif


/*****************************************************************************
* FUNCTION
*  smsal_is_support_r4_mbdn
* DESCRIPTION
*   This function return the mailbox address information.
*
* PARAMETERS
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_is_support_r4_mbdn(void)
{
#ifdef __REL4__
    if (IS_FLAG_SET(REL4_MBDN_FLAG) == KAL_TRUE)
        return KAL_TRUE;
    else
#endif
        return KAL_FALSE;
}   


/*****************************************************************************
* FUNCTION
*  smsal_normal_service_ind
* DESCRIPTION
*   This function will be called by L4C when MS enters normal service mode.
*
* PARAMETERS
*  none 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_normal_service_ind(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    SET_FLAGS(NORMAL_SERVICE_FLAG);

    if ((IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_TRUE) &&
        (IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
        (IS_FLAG_SET(MEM_FULL_FLAG) == KAL_FALSE) &&
        (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE))
    {
        /* Send Memory Available Notification */
        smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
        smsal_send_mem_avl_notif_req();
    }
}                                       /* end of smsal_normal_service_ind */


/*****************************************************************************
* FUNCTION
*  smsal_get_msgbox_num
* DESCRIPTION
*   This function returns number of messages in inbox/outbox.
*
* PARAMETERS
*  a  IN/OUT   is_sms_ready                             
*  b  IN/OUT   is_sim_card_change
*  c  IN/OUT   inbox_sim_num                             
*  d  IN/OUT   inbox_me_num
*  e  IN/OUT   outbox_sim_num   
*  f  IN/OUT   outbox_me_num
*  g  IN/OUT   unread_msg_num
*  h  IN/OUT   total_sim_num
*  i  IN/OUT   total_me_num
* RETURNS
*  KAL_TRUE:  all sms files are read
*  KAL_FALSE: not ready yet
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_get_msgbox_num(kal_bool   *is_sms_ready,
                              kal_bool   *is_sim_card_change,
                              kal_uint16 *inbox_sim_num,
                              kal_uint16 *inbox_me_num,
                              kal_uint16 *outbox_sim_num,
                              kal_uint16 *outbox_me_num,
                              kal_uint16 *unread_msg_num,
                              kal_uint16 *total_sim_num,
                              kal_uint16 *total_me_num
                             )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#ifdef __SMS_STORAGE_BY_MMI__

    if (is_sms_ready)
        *is_sms_ready = IS_FLAG_SET(SMSAL_RDY_FLAG);
    if (is_sim_card_change)
        *is_sim_card_change = IS_FLAG_SET(SIM_CHANGE_FLAG);

    if (total_sim_num)
        *total_sim_num = smsal_cntx_ptr->storage_num_info.sim_msg_num;
    if (total_me_num)
        *total_me_num = smsal_cntx_ptr->storage_num_info.me_msg_num;

    if (inbox_sim_num)
        *inbox_sim_num = smsal_cntx_ptr->storage_num_info.inbox_sim_num;
    if (outbox_sim_num)
        *outbox_sim_num = smsal_cntx_ptr->storage_num_info.outbox_sim_num;

    if (inbox_me_num)
        *inbox_me_num = smsal_cntx_ptr->storage_num_info.inbox_me_num;
    if (outbox_me_num)
        *outbox_me_num = smsal_cntx_ptr->storage_num_info.outbox_me_num;

    if (unread_msg_num)
        *unread_msg_num = 0;

#else //__SMS_STORAGE_BY_MMI__

    *inbox_sim_num = smsal_cntx_ptr->storage_num_info.inbox_sim_num;
    *outbox_sim_num = smsal_cntx_ptr->storage_num_info.outbox_sim_num;

#ifdef __SMS_ME_STORAGE__
    *inbox_me_num = smsal_cntx_ptr->storage_num_info.inbox_me_num;
    *outbox_me_num = smsal_cntx_ptr->storage_num_info.outbox_me_num;
    if (total_sim_num)
        *total_sim_num = smsal_cntx_ptr->storage_num_info.sim_msg_num;
    if (total_me_num)
        *total_me_num = smsal_cntx_ptr->storage_num_info.me_msg_num;
#else
    *inbox_me_num = 0;
    *outbox_me_num = 0;
    if (total_me_num)
        *total_me_num = 0;
#endif

    if (is_sms_ready)
        *is_sms_ready = IS_FLAG_SET(SMSAL_RDY_FLAG);

    if (is_sim_card_change)
        *is_sim_card_change = IS_FLAG_SET(SIM_CHANGE_FLAG);

    if (unread_msg_num)
    {
        kal_uint16 i;
        kal_uint16 unread_no = 0;

        for (i = 0; i < SMSAL_MAX_MSG_NUM; i++)
        {
            if (((&(smsal_cntx_ptr->message_box[i]))->state == SMSAL_MB_ENTRY_VALID) &&
                ((SMSAL_STATUS_UNREAD | ((&(smsal_cntx_ptr->message_box[i]))->status & 0x0f)) == SMSAL_STATUS_UNREAD))
                unread_no++;
        }

        *unread_msg_num = unread_no;
    }

#endif //__SMS_STORAGE_BY_MMI__

    return (IS_FLAG_SET(SMSAL_RDY_FLAG));

}                                       /* end of smsal_get_msgbox_num */


/*****************************************************************************
* FUNCTION
*  smsal_get_msgbox_num
* DESCRIPTION
*   This function returns number of messages in inbox/outbox.
*
* PARAMETERS
*  a  IN/OUT   inbox_num                             
*  b  IN/OUT   outbox_num   
* 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_get_profile_info(kal_uint8 *profile_num,
                            kal_uint8 *alpha_length)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    *profile_num = smsal_para_ptr->profile.max_profile_num;
    if (smsal_para_ptr->profile.alpha_size > SMSAL_PROFILE_NAME_LEN)
        *alpha_length = SMSAL_PROFILE_NAME_LEN;
    else
        *alpha_length = smsal_para_ptr->profile.alpha_size;
}


kal_bool smsal_get_profile_name(kal_uint8 profile_no,
                                l4_name_struct *profile_name)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    if (profile_no > smsal_para_ptr->profile.max_profile_num - 1)
        return KAL_FALSE;

    *profile_name = smsal_para_ptr->profile.profile[profile_no].profile_name;
    return KAL_TRUE;
}


//#if 1
#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_get_inbox_list
* DESCRIPTION
*   This function sorts inbox list by SC timestamp and return inbox list
*   to L4C.
*
* PARAMETERS
*  a  IN       start_msg, indicate the starting message of the returned list
*                         0 --> 1st message
*  b  IN       num_msg, maximum number of inbox message in the returned list
* RETURNS
*  a pointer of smsal_inbox_list_struct
* GLOBALS AFFECTED
*  none
*****************************************************************************/
smsal_inbox_list_struct *smsal_get_inbox_list(kal_uint16 start_msg,
                                              kal_uint8 num_msg)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    kal_uint16 msg_count = 0;
    kal_uint8 ext_status;
    smsal_inbox_list_struct *inbox_list;
    smsal_mb_entry_struct *entry;

    if ((num_msg == 0) ||
#ifdef __SMS_ME_STORAGE__
        ((smsal_cntx_ptr->storage_num_info.inbox_sim_num + smsal_cntx_ptr->storage_num_info.inbox_me_num) == 0) ||
#else
        (smsal_cntx_ptr->storage_num_info.inbox_sim_num == 0) ||
#endif
        (start_msg >= SMSAL_MAX_MSG_NUM))
        return NULL;

    if (num_msg > SMSAL_PAGE_SIZE)
        num_msg = SMSAL_PAGE_SIZE;

    inbox_list = (smsal_inbox_list_struct *) get_ctrl_buffer(sizeof(smsal_inbox_list_struct));

    for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
    {
        entry = (&(smsal_cntx_ptr->message_box[index]));
        if ((entry->state == SMSAL_MB_ENTRY_VALID) &&
            (WHICH_MSGBOX(SMSAL_STATUS_INBOX ,entry->status) == KAL_TRUE) &&
            (index >= start_msg ))
        {
            smsal_get_ext_status(entry->status, &ext_status);
            inbox_list->inbox_list[msg_count].status = ext_status;
            inbox_list->inbox_list[msg_count].storage_type = entry->storage_type;
            inbox_list->inbox_list[msg_count].mti = entry->mti;
            inbox_list->inbox_list[msg_count].index = index;

            msg_count++;
        }

        if (msg_count >= num_msg)
            break;
    }                                   /* for */

    inbox_list->msg_count = msg_count;

    return inbox_list;

}                                       /* end of smsal_get_inbox_list */


/*****************************************************************************
* FUNCTION
*  smsal_get_outbox_list
* DESCRIPTION
*   This function returns the outbox list
*   to L4C.
*
* PARAMETERS
*  a  IN       start_msg, indicate the starting message of the returned list
*                         0 --> 1st message
*  b  IN       num_msg, maximum number of outbox message in the returned list
* RETURNS
*  a pointer of smsal_outbox_list_struct
* GLOBALS AFFECTED
*  none
*****************************************************************************/
smsal_outbox_list_struct *smsal_get_outbox_list(kal_uint16 start_msg,
                                                kal_uint8 num_msg)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    kal_uint16 msg_count = 0;
    kal_uint8 ext_status;
    smsal_mb_entry_struct *entry;
    smsal_outbox_list_struct *outbox_list;

    if ((num_msg == 0) ||
#ifdef __SMS_ME_STORAGE__
        ((smsal_cntx_ptr->storage_num_info.outbox_sim_num +
         smsal_cntx_ptr->storage_num_info.outbox_me_num) == 0) ||
#else
        (smsal_cntx_ptr->storage_num_info.outbox_sim_num == 0) ||
#endif
        (start_msg >= SMSAL_MAX_MSG_NUM))
        return NULL;

    if (num_msg > SMSAL_PAGE_SIZE)
        num_msg = SMSAL_PAGE_SIZE;

    outbox_list = (smsal_outbox_list_struct *) get_ctrl_buffer(sizeof(smsal_outbox_list_struct));

    for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
    {
        entry = (&(smsal_cntx_ptr->message_box[index]));
        if ((entry->state == SMSAL_MB_ENTRY_VALID) &&
            (WHICH_MSGBOX(SMSAL_STATUS_OUTBOX,entry->status) == KAL_TRUE) &&
            (index >= start_msg ))
        {
            smsal_get_ext_status(entry->status, &ext_status);
            outbox_list->outbox_list[msg_count].status = ext_status;
            outbox_list->outbox_list[msg_count].storage_type = entry->storage_type;
            outbox_list->outbox_list[msg_count].mti = entry->mti;
            outbox_list->outbox_list[msg_count].index = index;

            msg_count++;                /* incr count of OUTBOX msg */
        }

        if (msg_count >= num_msg)
            break;
    }                                   /* for */

    outbox_list->msg_count = msg_count;

    return outbox_list;
}                                       /* end of smsal_get_outbox_list */
#endif


/*****************************************************************************
 * 
 * Following functions are for fulfilling AT-Commands
 * 
 *  smsal_xxxx_set   : set parameters for command xxxx
 *  smsal_xxxx_query : get current parameters of command xxxx
 *  smsal_xxxx_test  : TEST for command xxxx, return string of supporting 
 *                     values of servies/parameter
 *  smsal_xxxx_exe   : EXECUTE for command xxxx
 *
 ****************************************************************************/
void smsal_cgsms_query(kal_uint8 * bearer)      /* sms_prefer_service_enum */
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    *bearer = smsal_cntx_ptr->sms_parameter.common.bearer_service;

}                                       /* end of smsal_cgsms_query */


/* void smsal_cgsms_test(kal_uint8 *test_str) */
void smsal_cgsms_test(kal_uint8 const **test_str)
{
#if defined (__CS_SERVICE__) && defined (__PS_SERVICE__)
    if( custom_remove_cgsms_constraint() == KAL_TRUE )
        *test_str = (kal_uint8 const *)"(0-3)";
    else
        *test_str = (kal_uint8 const *)"(1-3)";
#elif defined (__CS_SERVICE__)
    *test_str = (kal_uint8 const *)"(1)";
#elif defined (__PS_SERVICE__)
    if( custom_remove_cgsms_constraint() == KAL_TRUE )
        *test_str = (kal_uint8 const *)"(0)";
    else
        *test_str = (kal_uint8 const *)"()";
#endif 
}                                       /* end of smsal_cgsms_test */


/*****************************************************************************
* FUNCTION
*  smsal_cnma_exe
* DESCRIPTION
*   This function handles +CNMA.
*
* PARAMETERS
*  a  IN       id, which embedded in +CNMI
*  b  IN       mode, only used when PDU mode is used
*              0: operates as text mode
*              1: Send RP-ACK
*              2: Send RP-ERROR
*  c  IN       peer_buff_ptr, contains RP-ACK or RP-ERROR depending on
*              mode
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_cnma_exe(kal_uint8        id,
                          kal_uint8        mode,                                      
                          peer_buff_struct *peer_buff_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_deliver_report_ack_struct *ack_ptr;
    sms_deliver_report_nack_struct *nack_ptr;

    if (smsal_cntx_ptr->cnmi[0].is_used == KAL_TRUE)
    {
        id = 0;
    }
    else if (smsal_cntx_ptr->cnmi[1].is_used == KAL_TRUE)
    {
        id = 1;
    }
    else
    {
        return NO_CNMA_EXPECTED;
    }

    smsal_stop_timer(SMSAL_CNMA_TIMER, id);

    smsal_cntx_ptr->cnmi[id].is_used = KAL_FALSE;

    if (smsal_cntx_ptr->cnmi[id].sent_report == KAL_TRUE)
        return SMSAL_NO_ERROR;

    if (smsal_para_ptr->rmi.message_format == SMSAL_TEXT_MODE)
    {
        smsal_deliver_ack_post(smsal_cntx_ptr->cnmi[id].smi, 0, 0, 0, 0, NULL);
    }
    /* PDU mode */
    else
    {
        switch (mode)
        {
            case CNMA_MODE_TEXT_MODE:
                smsal_deliver_ack_post(smsal_cntx_ptr->cnmi[id].smi, 0, 0, 0, 0, NULL);
                break;

            case CNMA_MODE_RP_ACK:
                if (peer_buff_ptr != NULL)
                {
                    /* Allocate memory for local strucutre */
                    ack_ptr = (sms_deliver_report_ack_struct *)
                        construct_local_para(sizeof(sms_deliver_report_ack_struct), TD_UL);

                    ack_ptr->smi = smsal_cntx_ptr->cnmi[id].smi;
                    
                    hold_peer_buff(peer_buff_ptr);
                    smsal_send_msg_to_sms(MSG_ID_SMS_DELIVER_REPORT_ACK,
                                          (local_para_struct*) ack_ptr, 
                                          peer_buff_ptr);

                    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__DELIVER_REPORT);
                }
                break;

            case CNMA_MODE_RP_ERROR:
                if (peer_buff_ptr == NULL)
                {
                    smsal_deliver_nack_post(smsal_cntx_ptr->cnmi[id].smi,
                                            UNSPECIFIED_TP_FCS,
                                            0, 0, 0, 0, NULL);
                }
                else
                {
                    /* Allocate memory for local strucutre */
                    nack_ptr = (sms_deliver_report_nack_struct *)
                        construct_local_para(sizeof(sms_deliver_report_ack_struct), TD_UL);

                    nack_ptr->smi = smsal_cntx_ptr->cnmi[id].smi;
                    
                    hold_peer_buff(peer_buff_ptr);
                    smsal_send_msg_to_sms(MSG_ID_SMS_DELIVER_REPORT_NACK,
                                          (local_para_struct *) nack_ptr, peer_buff_ptr);
                    kal_brief_trace(TRACE_PEER, SMSAL_MS_TO_NW_PEER_MSG, SMSAL__DELIVER_REPORT);
                }
                break;

            default:
                break;
        }
    }

    return SMSAL_NO_ERROR;

}                                       /* end of smsal_cnma_exe */

kal_uint16 smsal_csms_set(kal_uint8 service)    /* smsal_service_mode_enum */
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    if (service > SMSAL_SERVICE1)
        return SMSAL_INVALID_SERVICE_MODE;

    smsal_cntx_ptr->sms_parameter.rmi.service_mode = service;
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_csms_set */

void smsal_csms_query(kal_uint8 * service,      /* smsal_service_mode_enum */
                      smsal_service_mode_struct * service_info)
{
     smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    *service = smsal_cntx_ptr->sms_parameter.rmi.service_mode;
    *service_info = smsal_cntx_ptr->sms_parameter.rmi.service_info;
}                                       /* end of smsal_csms_query */

#ifdef AT_NON_CODE_REDUCE
void smsal_csms_test(kal_uint8 const **test_str)
{
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CSMS];

}                                       /* end of smsal_csms_test */
#endif /* AT_NON_CODE_REDUCE */

void smsal_cpms_query(smsal_prefer_storage_struct * mem_info)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    mem_info->mem1 = smsal_cntx_ptr->sms_parameter.rmi.prefer_mem1;
    mem_info->mem2 = smsal_cntx_ptr->sms_parameter.rmi.prefer_mem2;
    mem_info->mem3 = smsal_cntx_ptr->sms_parameter.rmi.prefer_mem3;
    mem_info->total1 = smsal_get_storage_info(STORAGE_TOTAL, (smsal_storage_enum) mem_info->mem1);
    mem_info->used1 = smsal_get_storage_info(STORAGE_USED, (smsal_storage_enum) mem_info->mem1);
    mem_info->total2 = smsal_get_storage_info(STORAGE_TOTAL, (smsal_storage_enum) mem_info->mem2);
    mem_info->used2 = smsal_get_storage_info(STORAGE_USED, (smsal_storage_enum) mem_info->mem2);
    mem_info->total3 = smsal_get_storage_info(STORAGE_TOTAL, (smsal_storage_enum) mem_info->mem3);
    mem_info->used3 = smsal_get_storage_info(STORAGE_USED, (smsal_storage_enum) mem_info->mem3);

}                                       /* end of smsal_cpms_query */

void smsal_cpms_test(kal_uint8 const **test_str)
{
#ifdef AT_NON_CODE_REDUCE
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CPMS];
#else
    /* +CPMS: supported memory types */
    *test_str = (kal_uint8 const *)
#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
#ifdef __UNIFIED_MESSAGE_SIMBOX_SUPPORT__
        "+CPMS: (\"SM\",\"ME\"), (\"ME\"), (\"ME\")";
#else
        "+CPMS: (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\"), (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\"), (\"SM\", \"ME\", \"SM_P\", \"ME_P\", \"MT\")";
#endif
#else
#ifdef __UNIFIED_MESSAGE_SIMBOX_SUPPORT__
        "+CPMS: (\"SM\"), (\"\"), (\"\")";
#else
        "+CPMS: (\"SM\"), (\"SM\"), (\"SM\")";
#endif
#endif
#endif

}                                       /* end of smsal_cpms_test */

#if defined(__SMS_STORAGE_BY_MMI__)
kal_uint16 smsal_force_at_cmgf_mode_set(kal_uint8 msg_format)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    smsal_cntx_ptr->sms_parameter.rmi.force_msg_mode = msg_format;
    return SMSAL_NO_ERROR;
}
#endif

kal_uint16 smsal_cmgf_set(kal_uint8 msg_format) /* smsal_msg_format_enum */
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
  

    if (msg_format > SMSAL_TEXT_MODE)
        return SMSAL_INVALID_MSG_FORMAT;

    smsal_cntx_ptr->sms_parameter.rmi.message_format = msg_format;
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_cmgf_set */

void smsal_cmgf_query(kal_uint8 * msg_format)   /* smsal_msg_format_enum */
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
  
    *msg_format = smsal_cntx_ptr->sms_parameter.rmi.message_format;
}                                       /* end of smsal_cmgf_query */

#ifdef AT_NON_CODE_REDUCE
void smsal_cmgf_test(kal_uint8 const **test_str)
{
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CMGF];

}                                       /* end of smsal_cmgf_test */
#endif /* AT_NON_CODE_REDUCE */

kal_uint16 smsal_csca_set(l4_addr_bcd_struct sca)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_addr_struct *sc_addr;

    sc_addr = &smsal_para_ptr->rmi.profile.sca;

    // MAUI_01940507
    // [SMSAL][Fixbug] if TS-SCA bit in "parameter Indicators" of EFsmsp is absent, SC setting could not be stored by AT
    smsal_para_ptr->rmi.profile.para_ind &= SMSAL_SMSP_SCA_BITS;

    l4_addr2_sms_rp_addr(&sca, sc_addr);

    return SMSAL_NO_ERROR;
}                                       /* end of smsal_csca_set */

void smsal_csca_query(l4_addr_bcd_struct *sca, 
                      kal_uint8 profile_no)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    sms_addr_struct *sc_addr;

    /* for AT. */
    if (profile_no == SMSAL_PROFILE_NONE)
    {
        sc_addr = &smsal_para_ptr->rmi.profile.sca;
    }
    else
    {
        if (profile_no >= smsal_cntx_ptr->sms_parameter.profile.max_profile_num)
            profile_no = 0;

        sc_addr = &smsal_para_ptr->profile.profile[profile_no].sca;
    }

    sms_rp_addr2_l4_addr(sc_addr, sca);

}                                       /* end of smsal_csca_query */

kal_uint16 smsal_csmp_set(kal_uint8 profile_no,
                          kal_uint8 para_ind,
                          kal_uint8 fo,
                          kal_uint8 vp,
                          kal_uint8 pid,
                          kal_uint8 dcs)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));

    smsal_error_cause_enum dummy1;
    kal_uint8 dummy2;

    if ((para_ind & SMSAL_PARA_FO) == SMSAL_PARA_FO)
    {
        if (smsal_fo_check(fo) == KAL_FALSE)
            return SMSAL_UNSPECIFIED_ERROR_CAUSE;
    }

    if ((para_ind & SMSAL_PARA_PID) == SMSAL_PARA_PID)
    {
        if (smsal_pid_check(pid, &dummy1, &dummy2) == KAL_FALSE)
            return SMSAL_UNSPECIFIED_ERROR_CAUSE;
    }

    if ((para_ind & SMSAL_PARA_DCS) == SMSAL_PARA_DCS)
    {
        if (smsal_dcs_check(dcs, &dummy1) == KAL_FALSE)
            return SMSAL_UNSPECIFIED_ERROR_CAUSE;
    }

    if ((para_ind & SMSAL_PARA_FO) == SMSAL_PARA_FO)
    {
        if (fo != smsal_para_ptr->common.fo)
        {
            smsal_para_ptr->common.fo = fo;
        }
    }

    if ((para_ind & SMSAL_PARA_VP) == SMSAL_PARA_VP)
    {
        if (vp != smsal_para_ptr->rmi.profile.vp)
        {
#if defined(EMPTY_MMI) || defined(__SMS_STORE_CSMP_PARAM__) 
            smsal_para_ptr->rmi.profile.para_ind &= SMSAL_SMSP_VP_BITS;
#endif
            smsal_para_ptr->rmi.profile.vp = vp;
        }
    }

    if ((para_ind & SMSAL_PARA_PID) == SMSAL_PARA_PID)
    {
        if (pid != smsal_para_ptr->rmi.profile.pid)
        {
#if defined(EMPTY_MMI) || defined(__SMS_STORE_CSMP_PARAM__)
            smsal_para_ptr->rmi.profile.para_ind &= SMSAL_SMSP_PID_BITS;
#endif
            smsal_para_ptr->rmi.profile.pid = pid;
        }
    }

    if ((para_ind & SMSAL_PARA_DCS) == SMSAL_PARA_DCS)
    {
        if (dcs != smsal_para_ptr->rmi.profile.dcs)
        {
#if defined(EMPTY_MMI) || defined(__SMS_STORE_CSMP_PARAM__)
            smsal_para_ptr->rmi.profile.para_ind &=SMSAL_SMSP_DCS_BITS;
#endif
            smsal_para_ptr->rmi.profile.dcs = dcs;
        }
    }
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_csmp_set */

void smsal_csmp_query(kal_uint8 profile_no,
                      kal_uint8 *fo,
                      kal_uint8 *vp,
                      kal_uint8 *pid,
                      kal_uint8 *dcs)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));


    /* for AT. */
    if (profile_no == SMSAL_PROFILE_NONE)
    {
        *fo = smsal_para_ptr->common.fo;
        *vp = smsal_para_ptr->rmi.profile.vp;
        *pid = smsal_para_ptr->rmi.profile.pid;
        *dcs = smsal_para_ptr->rmi.profile.dcs;
    }
    else
    {
        if (profile_no >= smsal_cntx_ptr->sms_parameter.profile.max_profile_num)
            profile_no = 0;

        *fo = smsal_para_ptr->common.fo;
        *vp = smsal_para_ptr->profile.profile[profile_no].vp;
        *pid = smsal_para_ptr->profile.profile[profile_no].pid;
        *dcs = smsal_para_ptr->profile.profile[profile_no].dcs;
    }

}                                       /* end of smsal_csmp_query */


void smsal_csas_test(kal_uint8 const **test_str)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_at_test_str[0] = '\0';
    if (smsal_cntx_ptr->sms_parameter.profile.max_profile_num > 0)
    {
        if (smsal_cntx_ptr->sms_parameter.profile.max_profile_num > 1)
            kal_sprintf((kal_char *) smsal_at_test_str, "+CSAS: (0-%d)",
                        smsal_cntx_ptr->sms_parameter.profile.max_profile_num - 1);
        else
            kal_sprintf((kal_char *) smsal_at_test_str, "+CSAS: (0)");
    }

    *test_str = (kal_uint8 const *)smsal_at_test_str;
}                                       /* end of smsal_csas_test */

kal_uint16 smsal_cres_set(kal_uint8 profile_id)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    if (profile_id > smsal_para_ptr->profile.max_profile_num - 1)
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    /* smsal_para_ptr->rmi.profile.profile_name =                    */
    /*    smsal_para_ptr->profile.profile[profile_id].profile_name ; */
    smsal_para_ptr->rmi.profile.para_ind = smsal_para_ptr->profile.profile[profile_id].para_ind;
    smsal_para_ptr->rmi.profile.vp = smsal_para_ptr->profile.profile[profile_id].vp;
    smsal_para_ptr->rmi.profile.pid = smsal_para_ptr->profile.profile[profile_id].pid;
    smsal_para_ptr->rmi.profile.dcs = smsal_para_ptr->profile.profile[profile_id].dcs;
    smsal_para_ptr->rmi.profile.sca = smsal_para_ptr->profile.profile[profile_id].sca;
    smsal_para_ptr->rmi.profile.da = smsal_para_ptr->profile.profile[profile_id].da;

    return SMSAL_NO_ERROR;

}                                       /* end of smsal_cres_set */

void smsal_cres_test(kal_uint8 const **test_str)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_at_test_str[0] = '\0';
    if (smsal_cntx_ptr->sms_parameter.profile.max_profile_num > 0)
    {
        if (smsal_cntx_ptr->sms_parameter.profile.max_profile_num > 1)
            kal_sprintf((kal_char *) smsal_at_test_str, "+CRES: (0-%d)",
                        smsal_cntx_ptr->sms_parameter.profile.max_profile_num - 1);
        else
            kal_sprintf((kal_char *) smsal_at_test_str, "+CRES: (0)");
    }

    *test_str = (kal_uint8 const *)smsal_at_test_str;
}
/* end of smsal_cres_test */

kal_uint16 smsal_esmss_set(kal_uint8 esmss_val)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    if (esmss_val > 1)
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    smsal_para_ptr->rmi.set_read_status = esmss_val;

    return SMSAL_NO_ERROR;
}

#ifdef AT_NON_CODE_REDUCE
void smsal_esmss_test(kal_uint8 const **test_str)
{

    kal_sprintf((kal_char *) smsal_at_test_str, "+ESMSS: (0-1)");
    *test_str = (kal_uint8 const *)smsal_at_test_str;
    return;
}
#endif /* AT_NON_CODE_REDUCE */

void smsal_esmss_query(kal_uint8 * esmss_val)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    *esmss_val = smsal_para_ptr->rmi.set_read_status;
}

kal_bool smsal_eqsi_query(kal_uint8  mem,
                          kal_uint16 *beg_index,
                          kal_uint16 *end_index,
                          kal_uint16 *used)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if( mem == SMSAL_SM )
    {
        if( smsal_cntx_ptr->storage_num_info.sim_msg_num == 0 )
        {
            return KAL_FALSE;
        }

#ifndef __SMS_STORAGE_BY_MMI__
        if ( (&(smsal_cntx_ptr->message_box[0]))->storage_type == SMSAL_SM )
#endif
        {
            *beg_index = 0;
            *end_index = smsal_cntx_ptr->storage_num_info.sim_msg_num-1;
        }
#ifndef __SMS_STORAGE_BY_MMI__
        else
        {            
            *beg_index = smsal_cntx_ptr->storage_num_info.me_msg_num;
            *end_index = smsal_cntx_ptr->storage_num_info.me_msg_num +
                         smsal_cntx_ptr->storage_num_info.sim_msg_num - 1;
        }
#endif
        *used = smsal_cntx_ptr->storage_num_info.used_sim_msg_num;
        return KAL_TRUE;
    }
    else if( mem == SMSAL_ME )
    {
        if( smsal_cntx_ptr->storage_num_info.me_msg_num == 0 )
        {
            return KAL_FALSE;
        }
#ifndef __SMS_STORAGE_BY_MMI__
        if ( (&(smsal_cntx_ptr->message_box[0]))->storage_type == SMSAL_SM )
#endif
        {
            *beg_index = smsal_cntx_ptr->storage_num_info.sim_msg_num;
            *end_index = smsal_cntx_ptr->storage_num_info.sim_msg_num +
                         smsal_cntx_ptr->storage_num_info.me_msg_num - 1;
        }
#ifndef __SMS_STORAGE_BY_MMI__
        else
        {
            *beg_index = 0;
            *end_index = smsal_cntx_ptr->storage_num_info.me_msg_num - 1;
        }
#endif
        *used = smsal_cntx_ptr->storage_num_info.used_me_msg_num;
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

kal_uint16 smsal_cnmi_set(smsal_mt_msg_route_struct mt_route)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
	  
    if (mt_route.mt > 3)
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    if (mt_route.ds > 1)
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    if ((mt_route.bm == 1) || (mt_route.bm > 3))
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    smsal_cntx_ptr->sms_parameter.rmi.nmi_para = mt_route;
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_cnmi_set */

void smsal_cnmi_query(smsal_mt_msg_route_struct * mt_route)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    *mt_route = smsal_cntx_ptr->sms_parameter.rmi.nmi_para;
}                                       /* end of smsal_cnmi_query */

#ifdef AT_NON_CODE_REDUCE
void smsal_cnmi_test(kal_uint8 const **test_str)
{
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CNMI];

}                                       /* end of smsal_cnmi_test */
#endif /* AT_NON_CODE_REDUCE */

void smsal_eqsi_test(kal_uint8 const **test_str)
{
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_EXT_TEST_STR[0];
}                                       /* end of smsal_eqsi_test */

void smsal_cmgl_test(kal_uint8 const **test_str)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    /* kal_uint8 mode = smsal_cntx_ptr->sms_parameter.rmi.message_format; */
    *test_str = (kal_uint8 const *)SMSAL_CMGL_TEST_STR[smsal_para_ptr->rmi.message_format];

}                                       /* end of smsal_cnmi_test */

void smsal_cmgd_test(kal_uint8 const **test_str)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    kal_uint8 prefer_mem = smsal_cntx_ptr->sms_parameter.rmi.prefer_mem1;

    if (prefer_mem == SMSAL_SM_PREFER ||
        prefer_mem == SMSAL_ME_PREFER ||
        prefer_mem == SMSAL_MT)
    {
        /* SIM or ME */
        kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (1-%d), (0-4)",
                    smsal_cntx_ptr->storage_num_info.sim_msg_num + smsal_cntx_ptr->storage_num_info.me_msg_num);
    }
    else if (prefer_mem == SMSAL_SM)
    {
        /* SIM only */
        if( (smsal_cntx_ptr->storage_num_info.sim_msg_num) != 0 )
        {
            kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (1-%d), (0-4)",
                        (smsal_cntx_ptr->storage_num_info.sim_msg_num));
        }
        else
        {
            kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (), (0-4)");
        }
    }
    else
    {
        /* ME only */
        kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (%d-%d), (0-4)",
                    (smsal_cntx_ptr->storage_num_info.sim_msg_num + 1),
                    (smsal_cntx_ptr->storage_num_info.sim_msg_num + smsal_cntx_ptr->storage_num_info.me_msg_num));
    }
    
#else

    /* SIM only */
    if( (smsal_cntx_ptr->storage_num_info.sim_msg_num) != 0 )
    {
        kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (1-%d), (0-4)",
                    (smsal_cntx_ptr->storage_num_info.sim_msg_num));
    }
    else
    {
        kal_sprintf((kal_char *) smsal_at_test_str, "+CMGD: (), (0-4)");
    }

#endif /* __SMS_ME_STORAGE__ */

    *test_str = (kal_uint8 const *)smsal_at_test_str;

}                                       /* smsal_cmgd_test */

void smsal_emems_query(kal_uint8 storage_type, kal_uint8 *is_full)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if( storage_type == SMSAL_ME)
    {
        *is_full = smsal_cntx_ptr->storage_num_info.is_me_full;
    }
    else if( storage_type == SMSAL_SM)
    {
        //*is_full = smsal_cntx_ptr->storage_num_info.is_sim_full;                   
        *is_full = (smsal_cntx_ptr->storage_num_info.used_sim_msg_num >= 
                    smsal_cntx_ptr->storage_num_info.sim_msg_num) ? 1 : 0;
    }
}

void smsal_emems_set(kal_uint8 storage_type, kal_uint8 is_full)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    // ME
    if( storage_type == SMSAL_ME)
    {
        smsal_cntx_ptr->storage_num_info.is_me_full = is_full;
    }

    // SIM
    /*if( storage_type == SMSAL_SM)
    {

    }*/    

    if( is_full == 0 )
    {
        if ((smsal_cntx_ptr->smma.pending_smma == KAL_FALSE) &&
            (IS_FLAG_SET(NORMAL_SERVICE_FLAG) == KAL_TRUE))
        {
            /* Send Memory Available Notification */
            smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
            smsal_send_mem_avl_notif_req();
        }
    }
}

kal_uint16 smsal_cmms_set(kal_uint8 mms)        /* smsal_more_msg_mode_enum */
{
   smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
   /* only mode: 0, 1, 2 are supported, 
    * refer to 3.5.6 in ts 127.005
     */
   if((mms != SMSAL_MMS_ENALBE) &&
      (mms != SMSAL_MMS_ENABLE_UNTIL_TIMEOUT) &&
      (mms != SMSAL_MMS_DISABLE))
        return SMSAL_UNSPECIFIED_ERROR_CAUSE;

    smsal_cntx_ptr->sms_parameter.rmi.mms = mms;
    return SMSAL_NO_ERROR;
}                                       /* end of smsal_cmms_set */

void smsal_cmms_query(kal_uint8 * mms)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    *mms = smsal_cntx_ptr->sms_parameter.rmi.mms;
}                                       /* end of smsal_cmms_query */

#ifdef AT_NON_CODE_REDUCE
void smsal_cmms_test(kal_uint8 const **test_str)
{
    *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CMMS];

}                                       /* end of smsal_cmms_test */
#endif /* AT_NON_CODE_REDUCE */

void smsal_cnma_test(kal_uint8 const **test_str)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (smsal_cntx_ptr->sms_parameter.rmi.message_format == SMSAL_TEXT_MODE)
    {
        kal_sprintf((kal_char *) smsal_at_test_str, " ");
        *test_str = (kal_uint8 const *)smsal_at_test_str;
    }
    else
    {
    #ifdef AT_NON_CODE_REDUCE
        *test_str = (kal_uint8 const *)SMSAL_AT_CMD_TEST_STR[SMSAL_CNMA];
    #else
        *test_str = (kal_uint8 const *)"+CNMA: (0-2)";
    #endif
    }

}                                       /* end of smsal_cmms_test */

#ifdef __CB__
void smsal_cb_get_status(kal_uint8 * on_off,
                         kal_uint8    *mi_num,
		         kal_uint8    *mir_num,
		         kal_uint8    *dcs_num,
                         l4c_cb_info_struct *cb_info)
{
    smsal_cb_struct *smsal_cb_data_ptr=(&(smsal_ptr_g->cb_data));
    kal_uint8 i = 0;

    *on_off = smsal_cb_data_ptr->cbch_req;

    cb_info->is_cb_ready = IS_FLAG_SET(CB_RDY_FLAG);
    cb_info->is_sim_change = IS_FLAG_SET(SIM_CHANGE_FLAG);
    cb_info->is_all_language_on = smsal_cb_data_ptr->all_lang_on;

    // for MMI user feeling
    if( smsal_cb_data_ptr->all_lang_on == KAL_TRUE )
    {
        for (i = 0 ; i < SMSAL_DEFAULT_DCS_ENTRY ; i++)
        {
            smsal_cb_data_ptr->dcs_mask[i] = KAL_TRUE;
        }
    }
    
    for (i = 0; i < SMSAL_MMI_CBMI_MAX_ENTRY; i++)
    {
        cb_info->mid[i] = smsal_cb_data_ptr->cbmi[i];
        cb_info->mid_mask[i] = smsal_cb_data_ptr->cbmi_mask[i];
    }

    for (i = 0; i < SMSAL_CB_MAX_ENTRY; i++)
    {
        cb_info->dcs[i] = smsal_cb_data_ptr->dcs[i];

        /* added by Kevin */
        cb_info->mir[2 * i] = smsal_cb_data_ptr->cbmir[2 * i];
        cb_info->mir[2 * i + 1] = smsal_cb_data_ptr->cbmir[2 * i + 1];

        cb_info->mir_mask[i] = smsal_cb_data_ptr->cbmir_mask[i];
        cb_info->dcs_mask[i] = smsal_cb_data_ptr->dcs_mask[i];
    }

    *mi_num = smsal_cb_data_ptr->cbmi_num;
    *mir_num = smsal_cb_data_ptr->cbmir_num;     /* SCR:2181 */
    *dcs_num = smsal_cb_data_ptr->dcs_num;

}                                       /* end of smsal_cb_get_status */
#endif /* __CB__ */

kal_bool smsal_reg_port_num(kal_uint8 enable, kal_uint16 * cause,
                            kal_uint32 port_num, kal_uint16 mod_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 i;
    kal_bool ret;

    ret = KAL_FALSE;

    if (enable == KAL_TRUE)
    {
        /* enable == KAL_TRUE; for register */

        /* check this port is registered or not */
        for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
            if (smsal_cntx_ptr->reg_port.port[i] == (kal_int32)port_num)
                break;

        if (i != SMSAL_MAX_REG_PORT_NUM)
        {
            if (cause != NULL)
                *cause = SMS_PORT_NUM_ALREADY_REG;
            return KAL_FALSE;
        }

        /* And this port is not registed */
        /* find a free slot */
        for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
            if (smsal_cntx_ptr->reg_port.port[i] == SMSAL_INVALID_PORT_NUM)
                break;

        if (i < SMSAL_MAX_REG_PORT_NUM)
        {
            smsal_cntx_ptr->reg_port.port[i] = port_num;
            smsal_cntx_ptr->reg_port.mod_id[i] = mod_id;
            ret = KAL_TRUE;
        }
        else
        {
            if (cause != NULL)
                *cause = SMS_PORT_NUM_NO_FREE_ENTITY;
        }
    }
    else
    {
        /* enable == KAL_FALSE; for unregister */
        /* if registered, check mod_id */

        if (port_num == SMSAL_INVALID_PORT_NUM)
        {
            /* unregister by mod_id */
            for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
            {
                if (smsal_cntx_ptr->reg_port.mod_id[i] == mod_id)
                {
                    smsal_cntx_ptr->reg_port.port[i] = SMSAL_INVALID_PORT_NUM;
                    smsal_cntx_ptr->reg_port.mod_id[i] = 0;
                }
            }

            ret = KAL_TRUE;
        }
        else
        {
            for (i = 0; i < SMSAL_MAX_REG_PORT_NUM; i++)
            {
                if (smsal_cntx_ptr->reg_port.port[i] == (kal_int32)port_num)
                {
                    smsal_cntx_ptr->reg_port.port[i] = SMSAL_INVALID_PORT_NUM;
                    smsal_cntx_ptr->reg_port.mod_id[i] = 0;
                }
            }
            ret = KAL_TRUE;
        }
    }

    return ret;
}

