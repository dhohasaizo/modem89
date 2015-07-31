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
 * smsal_other_funcs.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is some common functions.
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


/* Task Message Communication */
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

/* SMSAL <--> L4C */
#include "l4c_common_enum.h"            /* For src id */

#include "mcd_l4_common.h"


#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"
#include "smsal_l4c_defs.h"

#include "smsal_l4c_enum.h"

/* SMS Peer Messages */
#include "smsal_peer_struct.h"
#include "smsal_peer_pun.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#include "smsal_timer.h"
#include "l3_inc_enums.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#endif

#include "smsal_enums.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"
#include "smsal_other_funcs.h"
#include "smsal_l4c_msgs.h"
#include "smsal_utils.h"
#include "smsal_transport_proc.h"

#include "l4_msgid.h"

/* SAT */
#if defined (__SAT__)
#endif

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "smslib_def.h"
#include "smslib_others.h"
#include "smslib_encode.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_is_index_valid
* DESCRIPTION
*   This function checks whether index which specified by user 
*   is valid or not.
*
* PARAMETERS
*  a  IN       index
* RETURNS
*  KAL_TRUE: valid
*  KAL_FALSE: invalid
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_is_index_valid(kal_uint16 index)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    if ((index >= SMSAL_MAX_MSG_NUM) || ((&(smsal_cntx_ptr->message_box[index]))->state != SMSAL_MB_ENTRY_VALID))
        return KAL_FALSE;
    else
        return KAL_TRUE;
}                                       /* end of smsal_is_index_valid */


/*****************************************************************************
* FUNCTION
*  smsal_find_mb_entry_by_status
* DESCRIPTION
*   This function find the message box entry which matched the status and 
*   prefer storage type.
*
* PARAMETERS
*  a  IN       start, starting index of entry message box
*  a  IN       status
* RETURNS
*  index of message box entry, if found, ow,
*  SMSAL_INVALID_INDEX is returned.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_find_mb_entry_by_status(kal_uint8 src_id, kal_uint16 start, kal_uint8 status)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 i;
    kal_uint8 prefer_mem;

    if (src_id >= RMMI_SRC)
        prefer_mem = smsal_cntx_ptr->sms_parameter.rmi.prefer_mem1;
    else
        prefer_mem = SMSAL_STORAGE_UNSPECIFIED;

    if (start >= SMSAL_MAX_MSG_NUM)
        return SMSAL_INVALID_INDEX;

    if (prefer_mem == SMSAL_STORAGE_UNSPECIFIED||
        prefer_mem == SMSAL_SM_PREFER||
        prefer_mem == SMSAL_ME_PREFER)
    {
        for (i = start; i < SMSAL_MAX_MSG_NUM; i++)
        {

            if (((&(smsal_cntx_ptr->message_box[i]))->state == SMSAL_MB_ENTRY_VALID) &&
                ((status | ((&(smsal_cntx_ptr->message_box[i]))->status & 0x0f)) == status))
                break;
        }
    }
    else
    {
        for (i = start; i < SMSAL_MAX_MSG_NUM; i++)
        {
            if (((&(smsal_cntx_ptr->message_box[i]))->state == SMSAL_MB_ENTRY_VALID) &&
                (prefer_mem == (&(smsal_cntx_ptr->message_box[i]))->storage_type) &&
                ((status | ((&(smsal_cntx_ptr->message_box[i]))->status & 0x0f)) == status))
                break;
        }
    }

    if (i < SMSAL_MAX_MSG_NUM)
        return i;
    else
        return SMSAL_INVALID_INDEX;
}                                       /* end of smsal_find_mb_entry_by_status */


/*****************************************************************************
* FUNCTION
*  smsal_find_mb_entry_by_del_flag
* DESCRIPTION
*   This function find the message box entry which matched the del_flag.
*
* PARAMETERS
*  a  IN       start, starting index of entry message box
*  a  IN       del flag
* RETURNS
*  index of message box entry, if found, ow,
*  SMSAL_INVALID_INDEX is returned.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_find_mb_entry_by_del_flag(kal_uint8  src_id,
                                           kal_uint16 start,
                                           kal_uint8  del_flag)
{
    kal_uint16 index = SMSAL_INVALID_INDEX;

    switch (del_flag)
    {
        case SMSAL_DEL_READ_MSG:
            index = smsal_find_mb_entry_by_status(src_id, start, SMSAL_STATUS_READ);
            break;

        case SMSAL_DEL_READ_SENT_MSG:
            index = smsal_find_mb_entry_by_status(src_id,
                                                  start,
                                                  (SMSAL_STATUS_READ | SMSAL_STATUS_SENT));
            break;

        case SMSAL_DEL_READ_MO_MSG:
            index = smsal_find_mb_entry_by_status(src_id,
                                                  start,
                                                  (SMSAL_STATUS_READ |
                                                   SMSAL_STATUS_SENT |
                                                   SMSAL_STATUS_UNSENT));

            break;

        case SMSAL_DEL_ALL_MSG:
            index = smsal_find_mb_entry_by_status(src_id, start, SMSAL_STATUS_ALL);

            break;

        case SMSAL_DEL_INBOX:
            index = smsal_find_mb_entry_by_status(src_id, start, (SMSAL_STATUS_READ | SMSAL_STATUS_UNREAD));
            break;

        case SMSAL_DEL_OUTBOX:
            index = smsal_find_mb_entry_by_status(src_id,
                                                  start,
                                                  (SMSAL_STATUS_SENT | SMSAL_STATUS_UNSENT));
            break;

        default:
            index = SMSAL_INVALID_INDEX;
            break;
    }                                   /* switch */

    return index;
}                                       /* end of smsal_find_mb_entry_by_del_flag */

// only for AT-Command used (pretended me full)
kal_uint8 smsal_check_is_me_full()
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if( smsal_cntx_ptr->storage_num_info.is_me_full != 0 )
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

extern kal_uint8 smsal_sms_prefer_order(void);
/*****************************************************************************
* FUNCTION
*  smsal_find_mb_storage_type_by_index
* DESCRIPTION
*   This function find the storage type of message box entry by message index. 
*
* PARAMETERS
*  a  IN       start, starting index of entry message box
*  a  IN       status
* RETURNS
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_find_mb_storage_type_by_index(kal_uint16 index, smsal_storage_enum *storage_type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (index >= SMSAL_MAX_MSG_NUM)
        return KAL_FALSE;

#ifdef __SMS_ME_STORAGE__
    if( 0 == smsal_sms_prefer_order() )
    {
        /* SIM first. */
        if (index < smsal_cntx_ptr->storage_num_info.sim_msg_num)
            *storage_type = SMSAL_SM;
        else
            *storage_type = SMSAL_ME;
    }
    else
    {
        /* ME first. */
        if (index < smsal_cntx_ptr->storage_num_info.me_msg_num)
            *storage_type = SMSAL_ME;
        else
            *storage_type = SMSAL_SM;
    }
#else
    *storage_type = SMSAL_SM;
#endif
    return KAL_TRUE;

}                                       /* end of smsal_find_mb_entry_by_status */


/*****************************************************************************
* FUNCTION
*  smsal_is_storage_available
* DESCRIPTION
*   This function checks whether storage is available.
*
* PARAMETERS
*  a  IN       msg_num
*  b  IN/OUT   used_storage, return the selected storage type
* RETURNS
*  KAL_TRUE: storage is available
*  KAL_FALSE: storage is full
* GLOBALS AFFECTED
*  none
*****************************************************************************/
#if !defined (__SMS_ME_STORAGE__)
kal_bool smsal_is_storage_available(kal_uint16 msg_num)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 free_num;

    ASSERT(smsal_cntx_ptr->storage_num_info.sim_msg_num >=
           smsal_cntx_ptr->storage_num_info.used_sim_msg_num);

    free_num = smsal_cntx_ptr->storage_num_info.sim_msg_num -
               smsal_cntx_ptr->storage_num_info.used_sim_msg_num;

    if (free_num >= msg_num)
        return KAL_TRUE;
    else
    {
        kal_brief_trace(TRACE_WARNING, STORAGE_NOT_AVAILABLE, \
                  SMSAL_SM, \
                  msg_num, \
                  smsal_cntx_ptr->storage_num_info.sim_msg_num, \
                  smsal_cntx_ptr->storage_num_info.used_sim_msg_num, 0, 0);

        return KAL_FALSE;
    }
}                                       /* end of smsal_is_storage_available */


#else
kal_bool smsal_is_storage_available(smsal_storage_enum  storage_type,
                                    kal_uint16          msg_num,
                                    kal_uint16          *sim_num,
                                    kal_uint16          *me_num)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 free_num = 0;

    ASSERT((smsal_cntx_ptr->storage_num_info.sim_msg_num >= smsal_cntx_ptr->storage_num_info.used_sim_msg_num) &&
           (smsal_cntx_ptr->storage_num_info.me_msg_num >= smsal_cntx_ptr->storage_num_info.used_me_msg_num));

    ASSERT(sim_num != NULL && me_num != NULL);

    *sim_num = 0;                       /* reset */
    *me_num = 0;

    switch (storage_type)
    {
        case SMSAL_SM:                 /* SIM only */
            free_num = smsal_cntx_ptr->storage_num_info.sim_msg_num -
                       smsal_cntx_ptr->storage_num_info.used_sim_msg_num;
            if (free_num >= msg_num)
            {
                *sim_num = msg_num;
                return KAL_TRUE;
            }
            break;                      /* storage not available */

        case SMSAL_ME:                 /* ME only */

            if( smsal_check_is_me_full() )
            {
                //NA
            }
            else
            {
                free_num = smsal_cntx_ptr->storage_num_info.me_msg_num -
                           smsal_cntx_ptr->storage_num_info.used_me_msg_num;
                if (free_num >= msg_num)
                {
                    *me_num = msg_num;
                    return KAL_TRUE;
                }
            }

            break;                      /* storage not available */

        case SMSAL_ME_PREFER:

            if( smsal_check_is_me_full() )
            {
                //NA
            }
            else
            {
                /* Try ME first */
                free_num = smsal_cntx_ptr->storage_num_info.me_msg_num -
                           smsal_cntx_ptr->storage_num_info.used_me_msg_num;

                if (free_num >= msg_num)
                {
                    *me_num = msg_num;
                    return KAL_TRUE;
                }
            }

            #if defined (DELAY_PENDING_MT_UNTIL_READY)
            /* ME not ready. Don't try to store in SIM. */
            if (IS_FLAG_SET(SMSAL_FINISH_NVM_LOAD_FLAG) == KAL_FALSE)
                break;
            #endif

            *me_num = free_num;
            msg_num = msg_num - free_num;

            /* Try SIM if ME capacity is not enough */
            free_num = smsal_cntx_ptr->storage_num_info.sim_msg_num -
                       smsal_cntx_ptr->storage_num_info.used_sim_msg_num;

            if (free_num >= msg_num)
            {
                *sim_num = msg_num;
                return KAL_TRUE;
            }

            break;                      /* storage not available */

        case SMSAL_SM_PREFER:          /* no break */
        default:

            /* Try SIM first */
            free_num = smsal_cntx_ptr->storage_num_info.sim_msg_num -
                       smsal_cntx_ptr->storage_num_info.used_sim_msg_num;

            if (free_num >= msg_num)
            {
                *sim_num = msg_num;
                return KAL_TRUE;
            }

            #if defined (DELAY_PENDING_MT_UNTIL_READY)
            /* SIM not ready. Don't try to store in ME. */
            if (IS_FLAG_SET(SMSAL_FINISH_SIM_LOAD_FLAG) == KAL_FALSE)
                break;
            #endif

            *sim_num = free_num;
            msg_num = msg_num - free_num;

            if( smsal_check_is_me_full() )
            {
                //NA
            }
            else
            {
                /* Try ME if SIM capacity is not enough */
                free_num = smsal_cntx_ptr->storage_num_info.me_msg_num -
                           smsal_cntx_ptr->storage_num_info.used_me_msg_num;

                if (free_num >= msg_num)
                {
                    *me_num = msg_num;
                    return KAL_TRUE;
                }
            }

            break;                      /* storage not available */

    }                                   /* switch */

    kal_brief_trace(TRACE_WARNING, STORAGE_NOT_AVAILABLE, storage_type, msg_num, \
              smsal_cntx_ptr->storage_num_info.sim_msg_num, \
              smsal_cntx_ptr->storage_num_info.used_sim_msg_num, \
              smsal_cntx_ptr->storage_num_info.me_msg_num, \
              smsal_cntx_ptr->storage_num_info.used_me_msg_num);

    return KAL_FALSE;

}                                       /* end of smsal_is_storage_available */


/*****************************************************************************
* FUNCTION
*  smsal_is_storage_available_for_concat_msg
* DESCRIPTION
*   This function finds out the storage which can store the whole message
*   according to the preferred storage setting.
*
* PARAMETERS
*  a  IN          storage_try, SMSAL_SM or SMSAL_ME
*  b  IN          prefer_mem
*  c  IN          no_try_storage, the no. of messages required
*  d  IN          no_try_storage
*  e  IN/OUT      storage, used as returns
* RETURNS
*  TRUE: find such storage
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_is_storage_available_for_concat_msg(smsal_storage_enum  storage_try,
                                                   smsal_storage_enum  prefer_mem,
                                                   kal_uint16          msg_num,
                                                   kal_uint8           no_try_storage,
                                                   smsal_storage_enum  *storage) 
{
    kal_uint16 sim_num, me_num;
    kal_bool ret_val;

    ASSERT(storage_try == SMSAL_SM || storage_try == SMSAL_ME);
    ASSERT(no_try_storage < 2);

    no_try_storage++;                   /* increment the no of tried storage types */

    ret_val = smsal_is_storage_available(storage_try, msg_num, &sim_num, &me_num);

    if (ret_val == KAL_TRUE)
    {
        if (sim_num == msg_num)
            *storage = SMSAL_SM;
        else if (me_num == msg_num)
            *storage = SMSAL_ME;
        else
            ret_val = KAL_FALSE;
    }

    if (ret_val == KAL_FALSE)
    {
        /*
         * stop trying another storage in three cases:
         * * 1. SIM only 
         * * 2. ME only 
         * * 3. already tried SIM/ME 
         */
        if (prefer_mem == SMSAL_SM || prefer_mem == SMSAL_ME || no_try_storage == 2)
            return KAL_FALSE;

        if (storage_try == SMSAL_ME)
            storage_try = SMSAL_SM;
        else
            storage_try = SMSAL_ME;

        /* make a recursive call here */
        ret_val = smsal_is_storage_available_for_concat_msg(storage_try, 
                                                            prefer_mem,
                                                            msg_num, 
                                                            no_try_storage,
                                                            storage);   
    }

    return ret_val;

}                                       /* end of smsal_is_storage_available_for_concat_msg */


/*****************************************************************************
* FUNCTION
*  smsal_where_to_save_concat_msg
* DESCRIPTION
*   This function finds the concat. saving record according given concat.
*   information. If such record found, use the same storage to save,
*   otherwise create one record and find proper storage to save.
*
* PARAMETERS
*  a  IN          concat_info
*  b  IN          hash, computed by bcd address
*  c  IN          preferred_mem
*  d  IN/OUT      storage_storage, used as returns
* RETURNS
*  TRUE: concat. saving record found or created
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_where_to_save_concat_msg(smsal_concat_struct  *concat_info,
                                        kal_uint16           hash,
                                        kal_uint8            preferred_mem,
                                        smsal_storage_enum   *storage_type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 i;
    smsal_concat_msg_save_struct *concat_ptr = smsal_cntx_ptr->concat_msg_saving;

    /* find whether we save this concat seg before */
    for (i = 0; i < SMSAL_MAX_CONCAT_MSG_SAVE; i++)
    {
        if (concat_ptr[i].concat_info.total_seg != 1 &&
            concat_ptr[i].hash == hash && concat_ptr[i].concat_info.ref == concat_info->ref)
        {
            *storage_type = (smsal_storage_enum) concat_ptr[i].storage_type;

            concat_ptr[i].concat_info.seg++;

            /* finish dealing with all segments, make this slot as free */
            if (concat_ptr[i].concat_info.seg >= concat_ptr[i].concat_info.total_seg)
                concat_ptr[i].concat_info.total_seg = 1;        /* reset */

            return KAL_TRUE;
        }
    }                                   /* for */

    /* not found, try to create a new one */
    for (i = 0; i < SMSAL_MAX_CONCAT_MSG_SAVE; i++)
    {
        if (concat_ptr[i].concat_info.total_seg == 1)
        {
            smsal_storage_enum storage_try;

            if (preferred_mem == SMSAL_ME_PREFER || preferred_mem == SMSAL_ME)
                storage_try = SMSAL_ME;
            else
                storage_try = SMSAL_SM;

            if (smsal_is_storage_available_for_concat_msg(storage_try,
                                                          (smsal_storage_enum) preferred_mem,
                                                          (kal_uint16) concat_info->total_seg,
                                                          0,
                                                          storage_type) == KAL_FALSE)
            {
                return KAL_FALSE;
            }

            concat_ptr[i].concat_info.total_seg = concat_info->total_seg;
            concat_ptr[i].concat_info.seg = 1;  /*
                                                 * reset no. of handling msg 
                                                 * * NOTE: here is not seg seq no
                                                 */
            concat_ptr[i].concat_info.ref = concat_info->ref;
            concat_ptr[i].hash = hash;
            concat_ptr[i].storage_type = *storage_type;
            return KAL_TRUE;

        }                               /* if (total_seg == 1) */
    }                                   /* for */

    return KAL_FALSE;

}                                       /* end of smsal_where_to_save_concat_msg */
#endif /* __SMS_ME_STORAGE__ */
#endif //__SMS_STORAGE_BY_MMI__

kal_bool smsal_is_pending_act_available(kal_uint8 *id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 i;

    for (i = 0; i < SMSAL_MAX_PENDING_ACT && smsal_cntx_ptr->pending_act[i].in_use == KAL_TRUE; i++)
        ;                               /* void */

    if (i >= SMSAL_MAX_PENDING_ACT)
    {
        kal_brief_trace(TRACE_WARNING, NO_FREE_PENDING_ACT_STRUCT);
        return KAL_FALSE;
    }

    *id = i;
    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*  smsal_get_pending_act_id
* DESCRIPTION
*   This function gets a free PENDING ACTION slot.
*
* PARAMETERS
*  a  IN/OUT   id, index of pending action slot (used as return)
* RETURNS
*  KAL_TRUE: found a free slot
*  KAL_FALSE: o.w.
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_get_pending_act_id(kal_uint8 *id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (smsal_is_pending_act_available(id) == KAL_FALSE)
        return KAL_FALSE;

    smsal_cntx_ptr->pending_act[*id].in_use = KAL_TRUE;
    // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
    smsal_cntx_ptr->pending_act[*id].action_status = 0x80;

    smsal_cntx_ptr->pending_act[*id].local_para_ptr = NULL;
    smsal_cntx_ptr->pending_act[*id].peer_buff_ptr = NULL;
    smsal_cntx_ptr->pending_act[*id].aux_info = NULL;
    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*  smsal_free_pending_act
* DESCRIPTION
*   This function frees corresponding resources which used by 
*   this PENDING ACTION slot and make this slot usable. 
*
* PARAMETERS
*  a  IN       id, index of the used pending action slot
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_free_pending_act(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_pending_act_struct *pending_act;

    if (id >= SMSAL_MAX_PENDING_ACT)
        return;

    pending_act = (&(smsal_cntx_ptr->pending_act[id]));
    if (pending_act->in_use == KAL_TRUE)
    {
        pending_act->in_use = KAL_FALSE;

        if (pending_act->local_para_ptr != NULL)
            free_local_para(pending_act->local_para_ptr);

        if (pending_act->peer_buff_ptr != NULL)
            free_peer_buff(pending_act->peer_buff_ptr);

        /* 
         * Release the resources if allocated before
         */
        switch (pending_act->act_code)
        {
#if defined(__SMS_STORAGE_BY_MMI__)
                //NA
#else
            case SMSAL_DELIVER:
                {
                    smsal_mt_msg_aux_info_struct *aux_info;
                    smsal_tpdu_decode_struct *tpdu_decode_ptr;

#ifdef __SMS_DELAY_MTSMS_REPLACE_TYPE__                    
                    smsal_pdu_decode_struct * pdu_decode;

                    if (pending_act->sub_act_code == SMSAL_REPLACE_PENDING_MSG)
                    {
                        pdu_decode = (smsal_pdu_decode_struct *)pending_act->aux_info;

                        if (pdu_decode != NULL)
                        {
                            tpdu_decode_ptr = &(pdu_decode->tpdu);
                            smsal_free_tpdu_decode_struct(tpdu_decode_ptr);
                            //free_ctrl_buffer(pdu_decode);
                            //pdu_decode would be freeed at the end of this function
                        }
                    }
                    else
#endif
                    {
                        aux_info = (smsal_mt_msg_aux_info_struct *) pending_act->aux_info;

                        if (aux_info->pdu_decode != NULL)
                        {
                            tpdu_decode_ptr = &aux_info->pdu_decode->tpdu;

                            if (tpdu_decode_ptr != NULL)
                                smsal_free_tpdu_decode_struct(tpdu_decode_ptr);

                            free_ctrl_buffer(aux_info->pdu_decode);
                        }
                    }
                }

                break;
#endif
            case SMSAL_SAVE_PARAM:
            {
                smsal_set_param_aux_info_struct *aux_info;

                aux_info = (smsal_set_param_aux_info_struct *) pending_act->aux_info;

                if (aux_info->common != NULL)
                    free_ctrl_buffer(aux_info->common);

                if (aux_info->profile != NULL)
                    free_ctrl_buffer(aux_info->profile);
                break;
            }

            case SMSAL_SEND_MO_SMS:    /* the same for BOTH */
            case SMSAL_SEND_FROM_STORAGE:
#if defined (__SAT__)
            case SMSAL_SAT_SEND:
#endif
            {
                smsal_send_sms_aux_info_struct *aux_info;

                aux_info = (smsal_send_sms_aux_info_struct *) pending_act->aux_info;

                if (aux_info->peer_to_send != NULL)
                {
                    free_peer_buff(aux_info->peer_to_send);
                }
                break;
            }

            default:
                break;
        }                               /* switch (act_code) */

        if (pending_act->aux_info != NULL)
            free_ctrl_buffer(pending_act->aux_info);

    }                                   /* in use */

}                                       /* end of smsal_free_pending_act */

kal_bool smsal_find_pending_act(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (id >= SMSAL_MAX_PENDING_ACT)
        return KAL_FALSE;
    else if (smsal_cntx_ptr->pending_act[id].in_use == KAL_TRUE)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}                                       /* end of smsal_find_pending_act */

#if !defined(__SMS_STORAGE_BY_MMI__)
/*****************************************************************************
* FUNCTION
*  smsal_get_int_status
* DESCRIPTION
*   This function transforms status from upper layer's representation 
*   to internal representation. 
*
* PARAMETERS
*  a  IN       status
*  b  IN/OUT   int_status, return the internal status
* RETURNS
*  KAL_TRUE: success
*  KAL_FALSE: invalid input status
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_get_int_status(smsal_status_enum status, kal_uint8 *int_status)
{
    switch (status)
    {
        case SMSAL_REC_UNREAD:
            *int_status = SMSAL_STATUS_UNREAD;
            break;

        case SMSAL_REC_READ:
            *int_status = SMSAL_STATUS_READ;
            break;

        case SMSAL_STO_UNSENT:
            *int_status = SMSAL_STATUS_UNSENT;
            break;

        case SMSAL_STO_SENT:
            *int_status = SMSAL_STATUS_SENT;
            break;

        /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        case SMSAL_STO_DRAFT:
            *int_status = (SMSAL_STATUS_UNSENT|SMSAL_STATUS_DRAFT);
            break;

        case SMSAL_ALL:
            *int_status = SMSAL_STATUS_ALL;
            break;

        default:
            return KAL_FALSE;
    }
    return KAL_TRUE;
}                                       /* end of smsal_get_int_status */


/*****************************************************************************
* FUNCTION
*  smsal_get_ext_status
* DESCRIPTION
*   This function transforms status from internal representation
*   to upper layer's representation.
*
* PARAMETERS
*  a  IN       status
*  b  IN/OUT   int_status, return the internal status
* RETURNS
*  KAL_TRUE: success
*  KAL_FALSE: invalid input status
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_get_ext_status(kal_uint8 int_status, kal_uint8 *status)
{
    /* special case */
    /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
    if (int_status == (SMSAL_STATUS_UNSENT|SMSAL_STATUS_DRAFT))
    {
        *status = (kal_uint8)SMSAL_STO_DRAFT;
        return KAL_TRUE;
    }

    /* 9-6-2004 ,Robert                                              */
    /* Only transfer bit0-bit4 of status(read, unread, sent, unsent) */
    /* and ignore the SRR status bit.                                */
    int_status &= 0x0f;

    switch (int_status)
    {
        case SMSAL_STATUS_UNREAD:
            *status = (kal_uint8)SMSAL_REC_UNREAD;
            break;

        case SMSAL_STATUS_READ:
            *status = (kal_uint8)SMSAL_REC_READ;
            break;

        case SMSAL_STATUS_UNSENT:
            *status = (kal_uint8)SMSAL_STO_UNSENT;
            break;

        case SMSAL_STATUS_SENT:
            *status = (kal_uint8)SMSAL_STO_SENT;
            break;

        default:
            return KAL_FALSE;
    }
    return KAL_TRUE;
}                                       /* end of smsal_get_ext_status */
#endif

void smsal_send_error(kal_uint8 src_id,
                      kal_uint8 seq_num,
                      smsal_concat_struct *concat_info,
                      smsal_error_cause_enum error_cause)
{
    l4csmsal_send_cnf_struct *send_cnf;

    send_cnf = (l4csmsal_send_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_send_cnf_struct), TD_CTRL);

    send_cnf->src_id = src_id;
    send_cnf->result = L4C_ERROR;
    send_cnf->error_cause = error_cause;
    send_cnf->seq_num = seq_num;

    if (concat_info != NULL)
        send_cnf->concat_info = *concat_info;
    else
    {
        /* reset */
        send_cnf->concat_info.ref = 0;
        send_cnf->concat_info.seg = 1;
        send_cnf->concat_info.total_seg = 1;
    }

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SEND_CNF,
                          (local_para_struct *) send_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_CNF, send_cnf->result, error_cause);

}                                       /* end of smsal_send_error */

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
void smsal_read_raw_data_error(kal_uint8 src_id, smsal_error_cause_enum error_cause)
{
    l4csmsal_read_raw_data_cnf_struct *read_cnf;

    read_cnf = (l4csmsal_read_raw_data_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_read_raw_data_cnf_struct), TD_CTRL);

    read_cnf->src_id = src_id;
    read_cnf->result = L4C_ERROR;
    read_cnf->error_cause = error_cause;
    read_cnf->storage_type = SMSAL_STORAGE_UNSPECIFIED;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_READ_RAW_DATA_CNF, (local_para_struct *) read_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_RAW_DATA_CNF, read_cnf->result, error_cause);

}                                       /* end of smsal_read_raw_data_error */
#endif

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__

kal_uint8 smsal_decode_tpoa_to_MMI(kal_uint8 *input, l4_addr_bcd_struct *output)
{
    kal_uint16 offset = 0;

    // unpack address length
    output->addr_length = *(input+offset);
    offset++;

    // type
    output->addr_bcd[0] = *(input+offset);
    offset++;

    // max: 40 digits, MSDN + EXT6
    if ( (output->addr_length) > ((SMSAL_ADDR_LEN - 1) * 4) )
    {
        output->addr_length = (SMSAL_ADDR_LEN - 1) * 4;            
    }

    if ((output->addr_length != 0) && (output->addr_bcd[0] & 0xf0) == 0xd0)
    {
        output->addr_length = ((output->addr_length*4)/7)+1;

        smsal_gsm7_unpack((kal_uint8 *)(input+offset),
                          &(output->addr_bcd[1]),
                          (kal_uint16)output->addr_length,
                          (kal_uint16)0);                
    }
    else
    {
        kal_mem_cpy(&output->addr_bcd[1], input+offset, (output->addr_length+1)/2);
    }

    if( output->addr_length != 0 && output->addr_length % 2 == 0)
        output->addr_bcd[1+(output->addr_length+1)/2] = 0xff;

    return 1;
}


void smsal_evm_free_evm(smsal_evmi_struct *evmi)
{
    kal_uint32 i;
    module_type mod;

    if( evmi == NULL )
        return;

    mod = kal_get_active_module_id();

#ifndef __MTK_TARGET__
#ifdef __GEMINI__
    //printf("\t[free_evm(0x%X)] %d, Task 0x%X %d/(MOD_SMSAL:%d, MOD_SMSAL_2:%d)\n", evmi, evmi->l4_status, kal_get_task_self_id(), mod, MOD_SMSAL, MOD_SMSAL_2);
#else
    //printf("\t[free_evm(0x%X)] %d, Task 0x%X %d/(MOD_SMSAL:%d)\n", evmi, evmi->l4_status, kal_get_task_self_id(), mod, MOD_SMSAL);
#endif
#endif

    if( evmi->l4_status == 1 )
    {
#ifdef __GEMINI__
        if((mod >= MOD_SMSAL) && (mod < (MOD_SMSAL + SMSAL_MAX_SIM_NUM)))
#else
        if(mod == MOD_SMSAL)
#endif
        {
#ifndef __MTK_TARGET__
            printf("\tnot free ...\n");
#endif
            return;
        }
    }

#ifndef __MTK_TARGET__
    printf("\tdo free ...\n");
#endif

    if( evmi->vm_status_ext_data != NULL )
    {
        free_ctrl_buffer( evmi->vm_status_ext_data );
        evmi->vm_status_ext_data = NULL;
    }

    for(i=0 ; i< 32 ; i++)
    {
        if( evmi->vm_msg[i] )
        {
            if( evmi->vm_msg[i]->msg_ext_data != NULL )
            {
                free_ctrl_buffer( evmi->vm_msg[i]->msg_ext_data );
                evmi->vm_msg[i]->msg_ext_data = NULL;
            }
            free_ctrl_buffer( evmi->vm_msg[i] );
            evmi->vm_msg[i] = NULL;
        }
    }

    evmi->l4_status = 2;
}

// (IEI, IEL, IEa) are all included
kal_uint8 smsal_decode_evmi(kal_uint8 * rawdata, kal_uint16 total_len, smsal_evmi_struct *evmi)
{
    kal_uint16    offset = 2;
    kal_uint8     temp;
    kal_uint16    i;

    if( (evmi==NULL) || (rawdata==NULL || *rawdata != 0x23) )
        return 0;

    if( total_len < 6 )
        return 0;


    do{
        temp = *(rawdata+offset);
        offset++;

        evmi->evm_pdu_type      = temp & 0x01;
        evmi->multi_sub_profile = (temp & 0x0c) >> 2;
        evmi->is_store          = (temp & 0x10) >> 4;
        evmi->vm_almost_full    = (temp & 0x20) >> 5;
        evmi->vm_full           = (temp & 0x40) >> 6;
        evmi->vm_status_ext_flg = (temp & 0x80) >> 7;

        if( evmi->multi_sub_profile >= SMSAL_MAX_MSP_NUM )
        {
            evmi->multi_sub_profile = 0;
        }

        if( *(rawdata+1) < 4 )
            return 0;

        // unpack address (BCD number) of TP-DA
        if( *(rawdata+offset) > 0 )
        {
            smsal_decode_tpoa_to_MMI(rawdata+offset, &(evmi->vm_access_addr) );
            offset += 2 + (*(rawdata+offset)+1)/2;
            if( offset >= total_len )
                break;
        }
        else
        {
            offset++;
            if( offset >= total_len )
                break;
        }


        // number of voice message
        evmi->number_of_vm_unread = *(rawdata+offset);
        offset++;
        if( offset >= total_len )
            break;


        // number of voice notifications
        if( evmi->evm_pdu_type == 0)
        {
            evmi->number_of_vm_notify = (*(rawdata+offset)) & 0x1f;
            if( evmi->number_of_vm_notify > 15 )
            {
                evmi->number_of_vm_notify = 15;
            }
            temp = evmi->number_of_vm_notify;
        }
        // number of voice delete
        else
        {
            evmi->number_of_vm_delete = (*(rawdata+offset)) & 0x1f;
            if( evmi->number_of_vm_delete > 63 )
            {
                evmi->number_of_vm_delete = 63;
            }
            temp = evmi->number_of_vm_delete;
        }
        offset++;
        if( offset > total_len )
        {
            break;
        }
        else if( offset == total_len )
        {
            // N/A // for unpack done
        }


        // voice mailbox status extenstion
        if( evmi->vm_status_ext_flg )
        {
            evmi->vm_status_ext_len = *(rawdata+offset);
            offset++;
            if( offset > total_len )
            {
                break;
            }
            else if( offset == total_len )
            {
                if( evmi->vm_status_ext_len > 0 )
                    break;
                // N/A // for unpack done
            }

            if( evmi->vm_status_ext_len > 0 )
            {
                evmi->vm_status_ext_data = (kal_uint8 *)get_ctrl_buffer(evmi->vm_status_ext_len);
                
                kal_mem_cpy(evmi->vm_status_ext_data, rawdata+offset, evmi->vm_status_ext_len);
                offset += (evmi->vm_status_ext_len);
                if( offset > total_len )
                {
                    break;
                }
                else if( offset == total_len )
                {
                    // N/A // for unpack done
                }
            }
        }

        // voice mail message ids
        for (i=0 ; i<temp ; i++)
        {
            evmi->vm_msg[i] = (smsal_evmi_msg_struct *)get_ctrl_buffer( sizeof(smsal_evmi_msg_struct) );
            kal_mem_set(evmi->vm_msg[i], 0, sizeof(smsal_evmi_msg_struct));

            evmi->vm_msg[i]->id = ((kal_uint16)(*(rawdata+offset)) << 8) + (*(rawdata+offset+1));
            offset+=2;
            if( offset >= total_len )
                return 0;


            if( evmi->evm_pdu_type == 0 )
            {
                // message length
                evmi->vm_msg[i]->msg_len_insec = *(rawdata+offset);
                offset++;
                if( offset >= total_len )
                    break;

                // message retention days
                evmi->vm_msg[i]->msg_retention_day = (*(rawdata+offset) & 0x1f);
                if( evmi->vm_msg[i]->msg_retention_day > 31)
                    evmi->vm_msg[i]->msg_retention_day = 31;

                evmi->vm_msg[i]->priority    = ((*(rawdata+offset) & 0x40) >> 6 );
                evmi->vm_msg[i]->msg_ext_flg = (*(rawdata+offset) >> 7);
                offset++;
                if( offset > total_len )
                {
                    break;
                }
                else if( offset == total_len )
                {
                    // N/A // for unpack done
                }

                // calling line identity
                if( *(rawdata+offset) > 0 )
                {
                    smsal_decode_tpoa_to_MMI(rawdata+offset, &(evmi->vm_msg[i]->calling_line_addr) );
                    offset += 2 + (*(rawdata+offset)+1)/2;
                }
                else
                {
                    offset++;                    
                }

                if( offset > total_len )
                {
                    return 0;
                }
                else if( offset == total_len )
                {
                    break;  // for unpack done
                }
            }
            else
            {
                evmi->vm_msg[i]->msg_ext_flg = (*(rawdata+offset) >> 7);
                offset++;

                if( offset > total_len )
                {
                    break;
                }
                else if( offset == total_len )
                {
                    // N/A // for unpack done
                }
            }

            if( evmi->vm_msg[i]->msg_ext_flg )
            {
                evmi->vm_msg[i]->msg_ext_len = *(rawdata+offset);
                offset++;

                if( evmi->vm_msg[i]->msg_ext_len > 0 )
                {                    
                    if( offset >= total_len )
                        break;

                    evmi->vm_msg[i]->msg_ext_data = (kal_uint8 *)get_ctrl_buffer(evmi->vm_msg[i]->msg_ext_len);

                    kal_mem_cpy(evmi->vm_msg[i]->msg_ext_data, rawdata+offset, evmi->vm_msg[i]->msg_ext_len);
                    offset += (evmi->vm_msg[i]->msg_ext_len);
                    if( offset > total_len )
                    {
                        break;
                    }
                    else if( offset == total_len )
                    {
                        // N/A // for unpack done
                    }
                }
            }

        }

        return 1;

    }while(0);

    smsal_evm_free_evm(evmi);

    return 0;
}
#endif //__SMS_R6_ENHANCED_VOICE_MAIL__


#if !defined(__SMS_STORAGE_BY_MMI__)
void smsal_read_error(kal_uint8 src_id, smsal_error_cause_enum error_cause)
{
    l4csmsal_read_cnf_struct *read_cnf;

    read_cnf = (l4csmsal_read_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_read_cnf_struct), TD_CTRL);

    read_cnf->src_id = src_id;
    read_cnf->result = L4C_ERROR;
    read_cnf->error_cause = error_cause;
    read_cnf->storage_type = SMSAL_STORAGE_UNSPECIFIED;
    read_cnf->concat_info.ref = 0;
    read_cnf->concat_info.total_seg = 1;
    read_cnf->concat_info.seg = 1;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_READ_CNF, (local_para_struct *) read_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_CNF, read_cnf->result, error_cause);

}                                       /* end of smsal_read_error */

/*****************************************************************************
* FUNCTION
*  smsal_decode_sms_pdu
* DESCRIPTION
*   This function decodes the short message read from SIM/NVM,
*   update the entry of message box.
*
* PARAMETERS
*  a  IN       data[]
*
*    Octet:  0         1        X       X+1       Y               174
*            +----------+-------+-----------------------------------+
*            |  SCA LEN | TOSCA |   SCA   |          TPDU           |
*            +----------+-------+-----------------------------------+
*
*  b  IN       length (must equals to 175)
*  c  IN/OUT   sms_pdu, contain the decoded result
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_decode_sms_pdu(kal_uint8               *pdu, 
                              kal_uint8               pdu_len,
                              smsal_pdu_decode_struct *sms_pdu)
{
    kal_bool retval;

    ASSERT((pdu != NULL) && (pdu_len != 0) && (sms_pdu != NULL));

    sms_pdu->pdu_len = 0;
    sms_pdu->tpdu_len = 0;

   /*----------------
    * Get SC address 
    *----------------*/
    /* length exceed max sc address length */
    if(*pdu > SMSAL_ADDR_LEN)
    {
        sms_pdu->tpdu.mti = SMSAL_MTI_ILLEGAL;
        return KAL_FALSE;
    }

    sms_pdu->sca.addr_length = *pdu;

    if (*pdu > 0)
    {
        kal_mem_cpy(sms_pdu->sca.addr_bcd, (pdu + 1), sms_pdu->sca.addr_length);
    }
    sms_pdu->pdu_len += (1 + *pdu);     /* for sca length */

    smsal_reset_tpdu_decode_struct(&(sms_pdu->tpdu));

    /* reset user_data_size */
    sms_pdu->tpdu.mti = (smsal_mti_enum) (*(pdu + 1 + sms_pdu->sca.addr_length) & SMSAL_MTI_BITS);

    if (sms_pdu->tpdu.mti == SMSAL_MTI_UNSPECIFIED)
    {
        sms_pdu->tpdu.mti = SMSAL_MTI_DELIVER;
    }
    
    if (sms_pdu->tpdu.mti == SMSAL_MTI_DELIVER)
        sms_pdu->tpdu.data.deliver_tpdu.user_data_size = 0;
    else if (sms_pdu->tpdu.mti == SMSAL_MTI_SUBMIT)
        sms_pdu->tpdu.data.submit_tpdu.user_data_size = 0;

    if ((retval = smsal_decode_tpdu(&(sms_pdu->tpdu),
                                    (pdu + 1 + sms_pdu->sca.addr_length),     /* exclude sca */
                                    (kal_uint8) (pdu_len - 1 - sms_pdu->sca.addr_length)))
                                    == KAL_TRUE)
    {
        sms_pdu->tpdu_len = sms_pdu->tpdu.offset + sms_pdu->tpdu.msg_len;
        sms_pdu->pdu_len += sms_pdu->tpdu_len;
        sms_pdu->tpdu.offset += (1 + *pdu);     /* for sca */
    }

    if (sms_pdu->tpdu.msg_wait.is_msg_wait == KAL_TRUE)
    {
        smsal_message_waiting_handler(sms_pdu);
    }
    
    return retval;

}                                       /* end of smsal_decode_sms_pdu */


/*****************************************************************************
* FUNCTION
*  smsal_decode_tpdu
* DESCRIPTION
*   This function decodes the TPDU and update the entry of message box.
*
* PARAMETERS
*  a  IN/OUT   tpdu_decode_ptr, store the decoded results
*  b  IN       data, pointer to TPDU
*  c  IN       len, length of TPDU
*
*    Octet:  0                   len-1 
*            +--------------------+
*            |        TPDU        |
*            +--------------------+
* RETURNS
*  KAL_TRUE:  success
*  KAL_FALSE: fail
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_decode_tpdu(smsal_tpdu_decode_struct *tpdu_decode_ptr,                          
                           kal_uint8                *data,
                           kal_uint8                len)
{
    kal_uint8 addr_len = 0;
    kal_uint8 msg_offset = 0;

    ASSERT(tpdu_decode_ptr != NULL);

    tpdu_decode_ptr->mti = (smsal_mti_enum) (SMSAL_MTI_BITS & (*data));

    if (tpdu_decode_ptr->mti == SMSAL_MTI_UNSPECIFIED)
    {
        tpdu_decode_ptr->mti = SMSAL_MTI_DELIVER;
    }

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
    kal_mem_set(&(tpdu_decode_ptr->msg_wait.evmi), 0, sizeof(smsal_evmi_struct));
#endif

    // set default
    tpdu_decode_ptr->msg_wait.msp = smsal_para_ptr_g->common.selected_msp;

    /* Get Message Type */
    switch (tpdu_decode_ptr->mti)
    {
        case SMSAL_MTI_DELIVER:
        {
            smsal_deliver_peer_struct *deliver_ptr;

            deliver_ptr = &tpdu_decode_ptr->data.deliver_tpdu;
            if (deliver_ptr->user_data_size == 0)
            {
                smsal_deliver_peer_struct_alloc((void *)deliver_ptr);

                /* Unpack the pdu to access the message contents */
                smsal_deliver_peer_struct_unpack((void *)deliver_ptr, data, 0, len, NULL);
            }

            tpdu_decode_ptr->fo = *data;
            addr_len = (deliver_ptr->orig_addr[0] + 1) / 2;

            /* offset : fo, pid, dcs, scts, udl, oa_len, oa_type, oa */
            msg_offset += (PART_OF_DELIVER_HEADER_LEN + addr_len);

            /*
             * NOTE that decoding DCS shall precedes decoding UDH,
             * * because message waiting in UDH shall override the info in DCS 
             * * if there is conflict 
             */
            smsal_decode_dcs(deliver_ptr->dcs,
                             &tpdu_decode_ptr->alphabet_type,
                             &tpdu_decode_ptr->msg_class, 
                             &tpdu_decode_ptr->is_compress,
                             &tpdu_decode_ptr->msg_wait);

            if ((deliver_ptr->udh_p == KAL_FALSE) &&
                (*(deliver_ptr->user_data) <= (deliver_ptr->no_user_data - 1)))
            {
                deliver_ptr->udh_p = smsal_detect_udh(deliver_ptr->user_data);
            }

            if (deliver_ptr->udh_p == KAL_TRUE)
            {
                /*
                 * Decode User Data Header, 
                 * * get the concatenated infomation if present 
                 */

                /* 
                 * if any following condition meet, this UDH is invalid:               
                 *  UDHL > no. bytes of user data - 1
                 */
                if (*(deliver_ptr->user_data) <= (deliver_ptr->no_user_data - 1))
                {
                    tpdu_decode_ptr->udhl = smsal_decode_udh(deliver_ptr->user_data,
                                                             &tpdu_decode_ptr->concat_info,
                                                             &tpdu_decode_ptr->msg_wait,
                                                             &tpdu_decode_ptr->port);

                    if (tpdu_decode_ptr->udhl > 0)
                        tpdu_decode_ptr->udhl += 1;     /* udhl + udh */
                }
                else
                {
                    /* invalid UDH, set message to null */
                    deliver_ptr->udh_p = 0;
                    kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_UDH_ERROR, SMSAL_MTI_DELIVER, *(deliver_ptr->user_data));
                    /* keep message content and send to MMI */
                    /* deliver_ptr->user_data_len = 0; */
                    /* deliver_ptr->no_user_data  = 0; */
                }
            }

#if defined (__CPHS__)
            /* 
             * check whether this message is a voice mail, 
             * check following by CPHS:
             * 1) length of TP-OA = 4
             * 2) type of TP-OA = 1 101 0000 
             * 3) 01111110 (7e)
             *                 |set/clear
             *     x001000x
             * 4) 00111111 (3f)
             *     xx000000
             */
            if ((deliver_ptr->orig_addr[0] == 4) &&
                (deliver_ptr->orig_addr[1] == SMSAL_CPHS_VM_ADDR_TYPE) &&
                ((deliver_ptr->orig_addr[2] & 0x7e) == 0x10) &&
                ((deliver_ptr->orig_addr[3] & 0x3f) == 0x00))
            {
                tpdu_decode_ptr->msg_wait.type_of_info |= SMSAL_MSG_WAIT_CPHS;
                tpdu_decode_ptr->msg_wait.is_msg_wait = KAL_TRUE;
            }
#endif

            tpdu_decode_ptr->msg_len = deliver_ptr->no_user_data;

            break;
        }

        case SMSAL_MTI_SUBMIT:
        {
            smsal_submit_peer_struct *submit_ptr;

            submit_ptr = &tpdu_decode_ptr->data.submit_tpdu;
            if (submit_ptr->user_data_size == 0)
            {
                smsal_submit_peer_struct_alloc((void *)submit_ptr);

                /* Unpack the pdu to access the message contents */
                smsal_submit_peer_struct_unpack((void *)submit_ptr, data, 0, len, NULL);
            }

            tpdu_decode_ptr->fo = data[0];
            addr_len = (submit_ptr->dest_addr[0] + 1) / 2;

            /* offset : fo, mr, pid, dcs, udl, da_len, da_type, da */
            msg_offset += (PART_OF_SUBMIT_HEADER_LEN + addr_len);
            if ((submit_ptr->vp_flag == SMSAL_VPF_ENHANCED) ||
                 (submit_ptr->vp_flag == SMSAL_VPF_ABSOLUTE))
                msg_offset = msg_offset + 7;    /* absolute/enhanced format */
            else if (submit_ptr->vp_flag == SMSAL_VPF_RELATIVE)
                msg_offset = msg_offset + 1;

            /*
             * NOTE that decoding DCS shall precedes decoding UDH,
             * * because message waiting in UDH shall override the info in DCS 
             * * if there is conflict 
             */
            smsal_decode_dcs(submit_ptr->dcs,
                             &tpdu_decode_ptr->alphabet_type,
                             &tpdu_decode_ptr->msg_class, 
                             &tpdu_decode_ptr->is_compress,
                             &tpdu_decode_ptr->msg_wait);

            if ((submit_ptr->udh_p == KAL_FALSE) && (*(submit_ptr->user_data) <= (submit_ptr->no_user_data - 1)))
            {
                submit_ptr->udh_p = smsal_detect_udh(submit_ptr->user_data);
            }

            if (submit_ptr->udh_p == KAL_TRUE)
            {
                /*
                 * Decode User Data Header, 
                 * * get the concatenated infomation if present 
                 */

                /* 
                 * if any following condition meet, this UDH is invalid:               
                 *  UDHL > no. bytes of user data - 1
                 */
                if (*(submit_ptr->user_data) <= (submit_ptr->no_user_data - 1))
                {
                    tpdu_decode_ptr->udhl = smsal_decode_udh(submit_ptr->user_data,
                                                             &tpdu_decode_ptr->concat_info,
                                                             &tpdu_decode_ptr->msg_wait,
                                                             NULL);
                    
                    if (tpdu_decode_ptr->udhl > 0)
                        tpdu_decode_ptr->udhl += 1;     /* udhl + udh */
                }
                else
                {
                    /* invalid UDH, set message to null */
                    submit_ptr->udh_p = 0;
                    kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_UDH_ERROR, SMSAL_MTI_SUBMIT, *(submit_ptr->user_data));
                    /* keep message content and send to MMI */
                    /* submit_ptr->user_data_len = 0; */
                    /* submit_ptr->no_user_data  = 0; */
                }
            }

            tpdu_decode_ptr->msg_len = submit_ptr->no_user_data;

            break;
        }

            /* SCR : 1659 */
        case SMSAL_MTI_STATUS_REPORT:
        {
            smsal_status_report_peer_struct *report_ptr;

            report_ptr = &tpdu_decode_ptr->data.report_tpdu;

            tpdu_decode_ptr->fo = *data;

            smsal_status_report_peer_struct_alloc((void *)report_ptr);

            /* Unpack the pdu to access the message contents */
            smsal_status_report_peer_struct_unpack((void *)report_ptr, data, 0, len, NULL);

            report_ptr->no_user_data = 0;       /* report doesn't need data */

            addr_len = (report_ptr->rcpnt_addr[0] + 1) / 2;

            msg_offset += (PART_OF_REPORT_HEADER_LEN + addr_len);

            tpdu_decode_ptr->msg_len = report_ptr->no_user_data;

            break;
        }
        
        default:                       /* wrong message type */

            /*
             * in this case , the message type is reserved,
             * * we shall ignore this message but do not delete it 
             */
            break;

    }                                   /* switch (mti) */

    tpdu_decode_ptr->offset = msg_offset;

    return KAL_TRUE;

}                                       /* end of smsal_decode_tpdu */


kal_uint8 smsal_decode_udh(kal_uint8                *data,
                           smsal_concat_struct      *concat_info,
                           smsal_msg_waiting_struct *msg_wait,
                           smsal_port_struct        *port)
{
    kal_uint8 udhl = 0;                 /* user data header length */
    kal_uint8 read_byte = 0;            /* already read bytes */
    kal_uint8 iei;                      /* IE identifier */
    kal_uint8 ie_len;                   /* IE length */
#if defined(__REL6__) && defined(__SMS_R6_ENHANCED_VOICE_MAIL__)
    kal_uint8 ind_num;
#endif

    if( msg_wait != NULL )
    {
#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
        // reset
        kal_mem_set(&(msg_wait->evmi), 0, sizeof(smsal_evmi_struct));
#endif
        // set default
        msg_wait->msp = smsal_para_ptr_g->common.selected_msp;
    }

    /* reset concat_info */
    if (concat_info != NULL)
        concat_info->total_seg = 1;

    if (port != NULL)
    {
        port->dest_port = SMSAL_INVALID_PORT_NUM;
        port->src_port = SMSAL_INVALID_PORT_NUM;
    }

    udhl = *data;

    if (udhl > SMSAL_ONE_MSG_OCTET)
        return 0;

    read_byte += 1;

    while (read_byte <= udhl)
    {
        /* Get IEI */
        iei = *(data + read_byte);

        /* Get IE Length */
        ie_len = *(data + read_byte + 1);

        read_byte += 2;

        switch (iei)
        {
          /*----------------------------------------------
           * Concatenated short message , 8-bit reference 
           *----------------------------------------------*/
            case SMSAL_CONC8_MSG_IEI:

                if (concat_info != NULL)
                {
                    /* seg = 0 is invalid, we shall ignore this IE */
                    if ((*(data + read_byte + 2)) > 0)
                    {
                        concat_info->ref = *(data + read_byte);
                        concat_info->total_seg = *(data + read_byte + 1);
                        concat_info->seg = *(data + read_byte + 2);
                    }
                }
                break;

         /*----------------------------------------------- 
          * Concatenated short message , 16-bit reference 
          *-----------------------------------------------*/
            case SMSAL_CONC16_MSG_IEI:

                if (concat_info != NULL)
                {
                    /* seg = 0 is invalid, we shall ignore this IE */
                    if ((*(data + read_byte + 3)) > 0)
                    {
                        concat_info->ref = *(data + read_byte) * 256 + *(data + read_byte + 1);
                        concat_info->total_seg = *(data + read_byte + 2);
                        concat_info->seg = *(data + read_byte + 3);
                    }
                }

                break;

         /*---------------------------------------------- 
          * Special SMS Message Indication 
          *----------------------------------------------*/
            case SMSAL_SPECIAL_MSG_IND_IEI:
                if (msg_wait != NULL)
                {
                    msg_wait->type_of_info |= SMSAL_MSG_WAIT_UDH;
                    msg_wait->is_msg_wait = KAL_TRUE;
                }                       /* if(msg_wait != NULL) */

                break;

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
         /*---------------------------------------------- 
          * Enhanced Voice Mail Information
          *----------------------------------------------*/
            case SMSAL_ENHANCED_VM_INFO_IEI:
                if (msg_wait != NULL)
                {
                    // decode and get result
                    // kal_mem_set(&(msg_wait->evmi), 0, sizeof(smsal_evmi_struct));
                    ind_num = smsal_decode_evmi(data+read_byte-2, (kal_uint16)(ie_len+2), (smsal_evmi_struct *)&(msg_wait->evmi));
                        
                    if( ind_num != 0 )
                    {
                        msg_wait->type_of_info |= SMSAL_MSG_WAIT_UDH_EVM;
                        msg_wait->is_msg_wait = KAL_TRUE;
                    }
                }                       /* if(msg_wait != NULL) */

                break;
#endif

         /*---------------------------------------------- 
          * Application Port 
          *----------------------------------------------*/
            case SMSAL_APP_PORT8_IEI:
                if (port != NULL)
                {
                    port->dest_port = *(data + read_byte);
                    port->src_port = *(data + read_byte + 1);
                }
                break;

            case SMSAL_APP_PORT16_IEI:
                if (port != NULL)
                {
                    port->dest_port = *(data + read_byte) * 256 + *(data + read_byte + 1);
                    port->src_port = *(data + read_byte + 2) * 256 + *(data + read_byte + 3);
                }
                break;

            default:
                break;
        }                               /* switch */

        /* illegal PDU */
        if ((read_byte + ie_len) > SMSAL_ONE_MSG_OCTET)
            return 0;

        read_byte += ie_len;

    }                                   /* while */

#ifndef __REL4__
    if (msg_wait != NULL)
    {
        msg_wait->msp = 0;
    }
#endif

    return udhl;
}                                       /* end of smsal_decode_udh */

kal_bool smsal_detect_udh(kal_uint8 * data)
{
    kal_uint8 udhl = 0;                 /* user data header length */
    kal_uint8 read_byte = 0;            /* already read bytes */
    kal_uint8 iei;                      /* IE identifier */
    kal_uint8 ie_len;                   /* IE length */

    udhl = *data;

    if (udhl < 3 || udhl > SMSAL_ONE_MSG_OCTET)
        return KAL_FALSE;

    read_byte += 1;

    while (read_byte <= udhl)
    {
        /* Get IEI */
        iei = *(data + read_byte);

        /* Get IE Length */
        ie_len = *(data + read_byte + 1);

        read_byte += 2;

        if ( ((iei == 2) || iei == 0x23) || ((iei >= 0x26 && iei <=0x6F) || (iei >= 0x80 )) )
            return KAL_FALSE;

        if (ie_len == 0 || ie_len > (udhl + 1 - read_byte))
            return KAL_FALSE;

        switch (iei)
        {
            case SMSAL_NL_SINGLE_IEI:
            case SMSAL_NL_LOCKING_IEI:
                if (ie_len != 1)
                    return KAL_FALSE;
                break;                

            case SMSAL_SPECIAL_MSG_IND_IEI:
            case SMSAL_APP_PORT8_IEI:
            case SMSAL_EMS_PREDEF_SND_IEI:
            case SMSAL_EMS_PREDEF_ANM_IEI:
                if (ie_len != 2)
                    return KAL_FALSE;
                break;

            case SMSAL_CONC8_MSG_IEI:
                if (ie_len != 3)
                    return KAL_FALSE;
                break;

            case SMSAL_EMS_TEXT_FORMAT_IEI:
                if (ie_len != 3 && ie_len != 4)
                    return KAL_FALSE;
                break;

            case SMSAL_CONC16_MSG_IEI:
            case SMSAL_APP_PORT16_IEI:
                if (ie_len != 4)
                    return KAL_FALSE;
                break;

            case SMSAL_EMS_LARGE_PIC_IEI:
            case SMSAL_EMS_LARGE_ANM_IEI:
                if (ie_len != 129)
                    return KAL_FALSE;
                break;

            case SMSAL_EMS_SMALL_ANM_IEI:
            case SMSAL_EMS_SMALL_PIC_IEI:
                if (ie_len != 33)
                    return KAL_FALSE;
                break;

                /* Modify 2005.11.15 */
            default:
                return KAL_FALSE;
        }                               /* switch */

        /* illegal PDU */
        if ((read_byte + ie_len) > SMSAL_ONE_MSG_OCTET)
            return KAL_FALSE;

        read_byte += ie_len;

    }                                   /* while */

    if (read_byte != (udhl + 1))
        return KAL_FALSE;

    return KAL_TRUE;
}                                       /* end of smsal_detect_udh */

#endif // !defined(__SMS_STORAGE_BY_MMI__)

kal_bool smsal_get_concat_info(kal_uint8 * data, smsal_concat_struct * concat_info)
{
    kal_bool isConcat = KAL_FALSE;      /* reset */
    kal_uint8 udhl = 0;

    /* error handling */
    if (data == NULL || concat_info == NULL || *data >= SMSAL_ONE_MSG_OCTET)
        return isConcat;

    concat_info->ref = 0;
    concat_info->seg = 1;
    concat_info->total_seg = 1;         /* reset */

#if defined(__SMS_STORAGE_BY_MMI__)
    udhl = smslib_decode_udh(data, (smslib_concat_struct *)concat_info, NULL, NULL);
#else
    udhl = smsal_decode_udh(data, concat_info, NULL, NULL);
#endif

    if ((udhl > 0) && (concat_info->total_seg > 1) &&
        (concat_info->seg <= concat_info->total_seg))
    {
        isConcat = KAL_TRUE;
    }

    return isConcat;

}                                       /* end of smsal_get_concat_info */

#if defined(__SMS_STORAGE_BY_MMI__)
#else
void smsal_reset_tpdu_decode_struct(smsal_tpdu_decode_struct *tpdu_decode_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 i = 0;
    
    /* Reset TPDU Decode struct */
    tpdu_decode_ptr->offset = 0;
    tpdu_decode_ptr->msg_len = 0;
    tpdu_decode_ptr->udhl = 0;

    /* if sms is not concatenated , set total_seg & seg to 1 */
    tpdu_decode_ptr->concat_info.total_seg = 1; /* not concat. msg */
    tpdu_decode_ptr->concat_info.seg = 1;
    tpdu_decode_ptr->concat_info.ref = 0;
    tpdu_decode_ptr->msg_class = SMSAL_CLASS_UNSPECIFIED;
    tpdu_decode_ptr->msg_wait.type_of_info = 0;
    tpdu_decode_ptr->msg_wait.need_store = KAL_FALSE;
    tpdu_decode_ptr->msg_wait.is_msg_wait = KAL_FALSE;

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
    kal_mem_set(&(tpdu_decode_ptr->msg_wait.evmi), 0, sizeof(smsal_evmi_struct));
#endif

    for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
    {
        tpdu_decode_ptr->msg_wait.is_show_num[i] = KAL_FALSE;
        tpdu_decode_ptr->msg_wait.is_clear[i] = KAL_FALSE;
        tpdu_decode_ptr->msg_wait.ind_flag[i] = KAL_FALSE;
    }
    tpdu_decode_ptr->msg_wait.mwis = smsal_para_ptr->mailbox.mwis[0];

    tpdu_decode_ptr->port.dest_port = SMSAL_INVALID_PORT_NUM;
    tpdu_decode_ptr->port.src_port = SMSAL_INVALID_PORT_NUM;


}                                       /* end of smsal_reset_tpdu_decode_struct */

void smsal_free_tpdu_decode_struct(smsal_tpdu_decode_struct *tpdu_decode_ptr)
{
    if (tpdu_decode_ptr->mti == SMSAL_MTI_DELIVER)
    {
        /* Even enable MCD, this function shall be called !! */
        smsal_deliver_peer_struct_dealloc((void *)&tpdu_decode_ptr->data.deliver_tpdu);
    }
    else if (tpdu_decode_ptr->mti == SMSAL_MTI_SUBMIT)
    {
        /* Even enable MCD, this function shall be called !! */
        smsal_submit_peer_struct_dealloc((void *)&tpdu_decode_ptr->data.submit_tpdu);
    }
    else if (tpdu_decode_ptr->mti == SMSAL_MTI_STATUS_REPORT)
    {
        /* Even enable MCD, this function shall be called !! */
        smsal_status_report_peer_struct_dealloc((void *)&tpdu_decode_ptr->data.report_tpdu);
    }

#ifdef __SMS_R6_ENHANCED_VOICE_MAIL__
    smsal_evm_free_evm(&(tpdu_decode_ptr->msg_wait.evmi));
#endif

}
#endif // __SMS_STORAGE_BY_MMI__

/*****************************************************************************
* FUNCTION
*  smsal_check_mem_full_status
* DESCRIPTION
*   This function checks whether SMS stoages are full or not.
*
* PARAMETERS
*  none
* RETURNS
*  KAL_TRUE:  full
*  KAL_FALSE: not full
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_check_mem_full_status(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool mem_status = KAL_TRUE;     /* full */
    kal_bool sm_status = KAL_TRUE;

#if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    kal_bool me_status = KAL_TRUE;
#endif

    if (IS_FLAG_SET(SMSAL_RDY_FLAG) == KAL_FALSE)
        return KAL_FALSE;

    if (smsal_cntx_ptr->storage_num_info.used_sim_msg_num < smsal_cntx_ptr->storage_num_info.sim_msg_num)
    {
        mem_status = KAL_FALSE;
        sm_status = KAL_FALSE;
    }

    /*SIM is removed or during BT SIM profile*/
    /*We can not read SIM files and shall not send SIM FULL indication.*/
    if(IS_FLAG_SET(SIM_MSG_FLAG) == KAL_FALSE)
    {
        sm_status = KAL_FALSE;
    }

    if (sm_status == KAL_TRUE && IS_FLAG_SET(SM_FULL_FLAG) == KAL_FALSE)
        smsal_mem_full_ind(SMSAL_SM_FULL_ONLY); /* Memory is full */
    else if (sm_status == KAL_FALSE && IS_FLAG_SET(SM_FULL_FLAG) == KAL_TRUE)
        smsal_mem_available_ind(SMSAL_SM_AVAIL_ONLY);

#if defined (__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
    if (smsal_cntx_ptr->storage_num_info.used_me_msg_num < smsal_cntx_ptr->storage_num_info.me_msg_num)
    {
        mem_status = KAL_FALSE;
        me_status = KAL_FALSE;
    }

    if (me_status == KAL_TRUE && IS_FLAG_SET(ME_FULL_FLAG) == KAL_FALSE)
        smsal_mem_full_ind(SMSAL_ME_FULL_ONLY); /* Memory is full */
    else if (me_status == KAL_FALSE && IS_FLAG_SET(ME_FULL_FLAG) == KAL_TRUE)
        smsal_mem_available_ind(SMSAL_ME_AVAIL_ONLY);

#endif

    if (mem_status == KAL_TRUE)         /* Memory is full */
        smsal_mem_full_ind(SMSAL_MEM_FULL_NORMAL);
    else
    {
        if (IS_FLAG_SET(MEM_FULL_FLAG) == KAL_TRUE)
            smsal_mem_available_ind(SMSAL_MEM_AVAIL_NORMAL);
    }

    return mem_status;
}                                       /* end of smsal_check_mem_full_status */

#if !defined(__SMS_STORAGE_BY_MMI__)
kal_bool smsal_tp_addr_cmp(sms_addr_struct *addr1, kal_uint8 addr2[])
{
    kal_uint8 k;

    /* check address length */
    if (addr2[0] != addr1->addr_length)
        return KAL_FALSE;

    /* check address type */
    if (addr2[1] != addr1->addr_bcd[0])
        return KAL_FALSE;

    /* check address digits */
    for (k = 0; k < ((addr2[0] + 1) / 2); k++)
    {
        if (addr2[2 + k] != addr1->addr_bcd[k + 1])
            return KAL_FALSE;
    }

    return KAL_TRUE;
}                                       /* end of smsal_tp_addr_cmp */
#endif

#if !defined(__SMS_STORAGE_BY_MMI__)
kal_bool smsal_rp_addr_cmp(sms_addr_struct *addr1, sms_addr_struct *addr2)
{
    kal_uint8 k;

    /* check address length */
    if (addr1->addr_length != addr2->addr_length)
        return KAL_FALSE;

    /* check address type/digits */
    for (k = 0; k < addr1->addr_length; k++)
    {
        if (addr1->addr_bcd[k] != addr2->addr_bcd[k])
            return KAL_FALSE;
    }

    return KAL_TRUE;
}                                       /* end of smsal_rp_addr_cmp */
#endif

kal_uint16 smsal_get_storage_info(smsal_storage_info_enum type, smsal_storage_enum mem_type)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 usage = 0;

    switch (mem_type)
    {
        case SMSAL_SM:
        case SMSAL_SM_PREFER:
    #if !defined(__SMS_ME_STORAGE__) && !defined(__SMS_STORAGE_BY_MMI__)
        case SMSAL_MT:
    #endif
            if (type == STORAGE_TOTAL)
                usage = smsal_cntx_ptr->storage_num_info.sim_msg_num;
            else
                usage = smsal_cntx_ptr->storage_num_info.used_sim_msg_num;
            break;

    #if defined(__SMS_ME_STORAGE__) || defined(__SMS_STORAGE_BY_MMI__)
        case SMSAL_ME:
        case SMSAL_ME_PREFER:
            if (type == STORAGE_TOTAL)
                usage = smsal_cntx_ptr->storage_num_info.me_msg_num;
            else
                usage = smsal_cntx_ptr->storage_num_info.used_me_msg_num;
            break;

        case SMSAL_MT:
            if (type == STORAGE_TOTAL)
            {
                usage = smsal_cntx_ptr->storage_num_info.me_msg_num +
                        smsal_cntx_ptr->storage_num_info.sim_msg_num;
            }
            else
            {
                usage = smsal_cntx_ptr->storage_num_info.used_me_msg_num +
                        smsal_cntx_ptr->storage_num_info.used_sim_msg_num;
            }
            break;
    #endif /* __SMS_ME_STORAGE__ */

        default:
            break;
    }
    return usage;
}                                       /* end of smsal_get_storage_info */

kal_uint8 smsal_get_free_cnmi_id(void)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    if (smsal_cntx_ptr->cnmi[SMSAL_CNMI_ID1].is_used == KAL_FALSE)
        return SMSAL_CNMI_ID1;
    else if (smsal_cntx_ptr->cnmi[SMSAL_CNMI_ID2].is_used == KAL_FALSE)
        return SMSAL_CNMI_ID2;
    else
        return SMSAL_INVALID_CNMI_ID;
}                                       /* end of smsal_get_free_cnmi_id */


kal_bool smsal_get_pending_send(kal_uint8  start_idx,
                                kal_uint8  *access_id,
                                kal_uint8  *src_id,
                                kal_uint8  *msg_ref,
                                kal_uint8  *seq_num)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;

    *seq_num = 0;

    for (id = start_idx; id < SMSAL_MAX_PENDING_ACT; id++)
    {
        if ((&(smsal_cntx_ptr->pending_act[id]))->in_use == KAL_TRUE)
        {
            if ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_FROM_STORAGE)
            {
                /* send short message from storage */
                *src_id =
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->src_id;

                *msg_ref = 
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;

                *seq_num =
                (kal_uint8)(((l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->index);
            }
            else if ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SEND_MO_SMS)
            {
                /* normal send short message */
                *src_id =
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->src_id;

                *msg_ref =
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;

                *seq_num =
                ((l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->seq_num;
            }
        #ifdef __SAT__
            else if ((&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SAT_SEND ||
                     (&(smsal_cntx_ptr->pending_act[id]))->act_code == SMSAL_SAT_MO_SMS_CTRL)
            {
                /* SAT send short message */
                *src_id = 
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->src_id;

                *msg_ref = 
                ((smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->msg_ref;

                *seq_num =
                ((l4csmsal_sat_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->seq_num;
            }
        #endif

            *access_id = id;
            return KAL_TRUE;

        }                               /* if */
    }                                   /* for */
    return KAL_FALSE;
}                                       /* end of smsal_get_pending_send */

kal_bool smsal_find_pending_send(kal_uint8           smi,     
                                 kal_uint8           *src_id,
                                 kal_uint8           *access_id,
                                 kal_uint8           *seq_num)
{
	kal_uint8 n, id=0xff, msg_ref;
    kal_bool found = KAL_FALSE;         /* reset */
	    
    for (n = 0; n < SMSAL_MAX_PENDING_ACT; n++)
    {
        if (smsal_get_pending_send(n, &id, src_id, &msg_ref, seq_num) == KAL_TRUE)
        {
            if (msg_ref == smi)
            {
                found = KAL_TRUE;
                break;
            }

        }                               /* smsal_get_pending_send */
    }                                   /* for */

    if (found == KAL_TRUE)
    {
        *access_id = id;
    }

    return found;

}                                       /* end of smsal_find_pending_send */

void smsal_get_msg_sc_addr(kal_uint8                     src_id,
                           kal_uint16                    reply_index,
                           smsal_send_msg_req_hdr_struct *send_msg_ptr,
                           l4csmsal_send_from_storage_req_struct *send_msg_from_storage_ptr,
                           sms_addr_struct               *sc_addr_ptr)
{
#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
#endif
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_bool set_sca = KAL_FALSE;

#ifndef __SMS_STORAGE_BY_MMI__
    if (reply_index != SMSAL_INVALID_INDEX)
    {
        /*
         * Check whether REPLY PATH exist or not, 
         * * if exist, SC address is already set 
         */
        if (((&(smsal_cntx_ptr->message_box[reply_index]))->mb_type_ind & SMSAL_MB_TYPE_REPLY_PATH) ==
            SMSAL_MB_TYPE_REPLY_PATH)
        {
            set_sca = KAL_TRUE;
        }
    }
#endif

    if (set_sca == KAL_FALSE)
    {
        /* assign sc address to the address specified by user */
        if (send_msg_ptr != NULL)
        {
            if ((send_msg_ptr->para_ind & SMSAL_PARA_SCA) == SMSAL_PARA_SCA)
            {
                l4_addr2_sms_rp_addr(&(send_msg_ptr->sc_addr), sc_addr_ptr);
                set_sca = KAL_TRUE;
            }
            else if (send_msg_ptr->profile_no_tag == KAL_TRUE)
            {
                *sc_addr_ptr = smsal_para_ptr->profile.profile[send_msg_ptr->profile_no].sca;
                set_sca = KAL_TRUE;
            }
        }

        if (set_sca == KAL_FALSE)
        {
            /* use default SCA */
            /* Robert change, 06-17-2004 */
            /* if src is AT, use RMI running profile. */
            if (src_id >= RMMI_SRC)
                *sc_addr_ptr = smsal_para_ptr->rmi.profile.sca;
            else
            {
                if( send_msg_from_storage_ptr != NULL && send_msg_from_storage_ptr->profile_no_tag == KAL_TRUE )
                {
                    *sc_addr_ptr = smsal_para_ptr->profile.profile[send_msg_from_storage_ptr->profile_no].sca;
                }
                else
                {
                    *sc_addr_ptr = smsal_para_ptr->profile.profile[0].sca;
                }
            }
        }
    }

}                                       /* end of smsal_get_sc_addr */

kal_bool smsal_get_sc_addr_from_pdu(kal_uint8 *pdu_ptr, sms_addr_struct *sc_addr_ptr)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
    /* check sca length */
    if (*pdu_ptr > SMSAL_ADDR_LEN)
        return KAL_FALSE;

    sc_addr_ptr->addr_length = *pdu_ptr;
    if (sc_addr_ptr->addr_length > 0)
    {
        kal_mem_cpy(sc_addr_ptr->addr_bcd, (pdu_ptr + 1), sc_addr_ptr->addr_length);
    }
    else
    {
        //Robert add, 2004,2,23 for PC tools
        //If there is no SC address, get the default SC 

        sc_addr_ptr->addr_length = smsal_para_ptr->rmi.profile.sca.addr_length;
        kal_mem_cpy(sc_addr_ptr->addr_bcd,
                    smsal_para_ptr->rmi.profile.sca.addr_bcd,
                    sc_addr_ptr->addr_length);
    }

    return KAL_TRUE;
}

void smsal_get_msg_dest_addr(kal_uint16         reply_index,
                             kal_bool           da_tag,
                             l4_addr_bcd_struct *l4_addr,
                             sms_addr_struct    *tp_addr)
{

#ifndef __SMS_STORAGE_BY_MMI__
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
  
    if (reply_index != SMSAL_INVALID_INDEX)
    {

        if (((&(smsal_cntx_ptr->message_box[reply_index]))->mb_type_ind & SMSAL_MB_TYPE_REPLY_PATH) ==
            SMSAL_MB_TYPE_REPLY_PATH)
        {
            return;
        }
    }
#endif

    if (da_tag == KAL_TRUE)
    {
        l4_addr2_sms_tp_addr(l4_addr, tp_addr);
    }
    else
    {
        tp_addr->addr_length = 0;
        tp_addr->addr_bcd[0] = SMSAL_DEFAULT_ADDR_TYPE;
    }
}                                       /* end of smsal_get_msg_dest_addr */

kal_bool smsal_get_dest_addr_from_pdu(smsal_mti_enum  mti,
                                      kal_uint8       *pdu_ptr,
                                      sms_addr_struct *tp_addr)
{
    kal_uint8 da_offset = 2;

    if (mti == SMSAL_MTI_COMMAND)
        da_offset = 5;

    /* skip sc address */
    da_offset += (*pdu_ptr + 1);

    /* check length of destination address */
    if (*(pdu_ptr + da_offset) > ((SMSAL_ADDR_LEN - 1) * 2))
        return KAL_FALSE;

    tp_addr->addr_length = *(pdu_ptr + da_offset);
    tp_addr->addr_bcd[0] = *(pdu_ptr + da_offset + 1);
    if (((tp_addr->addr_length + 1) / 2) > 0)
    {
        kal_mem_cpy(&tp_addr->addr_bcd[1],
                    (pdu_ptr + da_offset + 2),
                    ((tp_addr->addr_length + 1) / 2));
    }

    return KAL_TRUE;
}


kal_bool smsal_get_dest_addr_from_tpdu(smsal_mti_enum  mti,
                                       kal_uint8       *tpdu_ptr,
                                       sms_addr_struct *tp_addr)
{
    kal_uint8 da_offset = 2;

    if (mti == SMSAL_MTI_COMMAND)
        da_offset = 5;

    /* check length of destination address */
    if (*(tpdu_ptr + da_offset) > ((SMSAL_ADDR_LEN - 1) * 2))
        return KAL_FALSE;

    tp_addr->addr_length = *(tpdu_ptr + da_offset);
    tp_addr->addr_bcd[0] = *(tpdu_ptr + da_offset + 1);
    if (((tp_addr->addr_length + 1) / 2) > 0)
    {
        kal_mem_cpy(&tp_addr->addr_bcd[1],
                    (tpdu_ptr + da_offset + 2),
                    ((tp_addr->addr_length + 1) / 2));
    }

    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
*  sms_rp_addr2_l4_addr
* DESCRIPTION
*   This function converts RP address format to L4 address.
*
* PARAMETERS
*  a  IN           rp_addr
*  b  IN/OUT       l4_addr, used as return
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void sms_rp_addr2_l4_addr(sms_addr_struct *rp_addr, l4_addr_bcd_struct *l4_addr)
{
    l4_addr->addr_length = rp_addr->addr_length;        /* the same definition */
    kal_mem_cpy(l4_addr->addr_bcd, rp_addr->addr_bcd, rp_addr->addr_length);
    l4_addr->addr_bcd[l4_addr->addr_length] = 0xff;     /* end of bcd number */
}


/*****************************************************************************
* FUNCTION
*  sms_l4_addr2_rp_addr
* DESCRIPTION
*   This function converts L4 address to RP address (SC address).
*
* PARAMETERS
*  a  IN          l4_addr
*                 length indicates number of bytes in addr_bcd
*  b  IN/OUT      rp_addr, used as return
*                 length indicates number of bytes in addr_bcd
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void l4_addr2_sms_rp_addr(l4_addr_bcd_struct *l4_addr, sms_addr_struct *rp_addr)
{
    rp_addr->addr_length = l4_addr->addr_length;        /* the same definition */
    kal_mem_cpy(rp_addr->addr_bcd, l4_addr->addr_bcd, rp_addr->addr_length);
}


/*****************************************************************************
* FUNCTION
*  sms_tp_addr2_l4_addr
* DESCRIPTION
*   This function converts TP address to L4 address.
*
* PARAMETERS
*  a  IN          tp_addr, length indicates acutual "useful" bcd digits.
*  b  IN/OUT      l4_addr, used as return
*                 length indicates number of bytes in addr_bcd
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void sms_tp_addr2_l4_addr(sms_addr_struct *tp_addr, l4_addr_bcd_struct *l4_addr)
{
    kal_uint8 addr_length;

    addr_length = (tp_addr->addr_length + 1) / 2 + 1;

    if(addr_length > sizeof(tp_addr->addr_bcd))
    {
        addr_length = sizeof(tp_addr->addr_bcd);
    }

    l4_addr->addr_length = addr_length;
    kal_mem_cpy(l4_addr->addr_bcd, tp_addr->addr_bcd, addr_length);
    l4_addr->addr_bcd[addr_length] = 0xff;     /* end of bcd number */
}


/*****************************************************************************
* FUNCTION
*  sms_l4_addr2_tp_addr
* DESCRIPTION
*   This function converts L4 address to TP address.
*
* PARAMETERS
*  a  IN          l4_addr                 
*  b  IN/OUT      tp_addr, used as return
*                 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void l4_addr2_sms_tp_addr(l4_addr_bcd_struct *l4_addr, sms_addr_struct *tp_addr)
{
    tp_addr->addr_length = compute_tp_addr_len(l4_addr->addr_length, l4_addr->addr_bcd);
    kal_mem_cpy(tp_addr->addr_bcd, l4_addr->addr_bcd, l4_addr->addr_length);
}


/*****************************************************************************
* FUNCTION
*  sms_tpdu_addr2_l4_addr
* DESCRIPTION
*   This function converts TP address to L4 address.
*
* PARAMETERS
*  a  IN          tpdu_addr, raw data of address in TPDU.
*  b  IN/OUT      l4_addr, used as return
*                 length indicates number of bytes in addr_bcd
*
*  example: 
*     tpdu_addr = {0x0b, 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1 }
*                  len , type,  
*     l4_addr   = {0x07, 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1, 0xff }
*                 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/

void sms_tpdu_addr2_l4_addr(kal_uint8 *tpdu_addr, l4_addr_bcd_struct *l4_addr)
{
    kal_uint8 addr_length;

    addr_length = (tpdu_addr[0] + 1) / 2 + 1;

    if(addr_length >= sizeof(l4_addr->addr_bcd))
    {
        addr_length = sizeof(l4_addr->addr_bcd)-1;
    }

    l4_addr->addr_length = addr_length;
    kal_mem_cpy(l4_addr->addr_bcd, &tpdu_addr[1], addr_length);
    l4_addr->addr_bcd[addr_length] = 0xff;     /* end of bcd number */
}


/*****************************************************************************
* FUNCTION
*  sms_tpdu_addr2_sms_tp_addr
* DESCRIPTION
*   This function converts TP address to L4 address.
*
* PARAMETERS
*  a  IN          tpdu_addr, raw data of address in TPDU.
*  b  IN/OUT      l4_addr, used as return
*                 length indicates number of bytes in addr_bcd
*
*  example: 
*     tpdu_addr = {0x0b, 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1 }
*                  len , type,  
*     tp_addr   = 0x0b  { 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1, 0xff }
*                 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/

void sms_tpdu_addr2_sms_tp_addr(kal_uint8 *tpdu_addr, sms_addr_struct *tp_addr)
{
    tp_addr->addr_length = tpdu_addr[0];
    tp_addr->addr_bcd[0] = tpdu_addr[1];

    if (tpdu_addr[0] > 0)
    {
        kal_mem_cpy(&tp_addr->addr_bcd[1], &tpdu_addr[2], (tpdu_addr[0] + 1) / 2);
    }
}


/*****************************************************************************
* FUNCTION
*  sms_tp_addr2_sms_tpdu_addr
* DESCRIPTION
*   This function converts TP address to L4 address.
*
* PARAMETERS
*  a  IN          tpdu_addr, raw data of address in TPDU.
*  b  IN/OUT      l4_addr, used as return
*                 length indicates number of bytes in addr_bcd
*
*  example: 
*     tpdu_addr = {0x0b, 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1 }
*                  len , type,  
*     tp_addr   = 0x0b  { 0x91, 0x88, 0x96, 0x93, 0x24, 0x42, 0xf1, 0xff }
*                 
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/

void sms_tp_addr2_sms_tpdu_addr(sms_addr_struct *tp_addr, kal_uint8 *tpdu_addr)
{
    tpdu_addr[0] = compute_tp_addr_len(tp_addr->addr_length, tp_addr->addr_bcd);

    kal_mem_cpy((kal_uint8 *) & tpdu_addr[1],
                 (kal_uint8 *) tp_addr->addr_bcd,
                 tp_addr->addr_length);
}


/*****************************************************************************
* FUNCTION
*  compute_tp_addr_len
* DESCRIPTION
*   This function returns length of TP address.
*
* PARAMETERS
*  a  IN          len_in_octet
*  b  IN          bcd
* 
*  example:
*  1. len_in_octet = 3, bcd={0x81, 0x12, 0xf3}, return 3
*  2. len_in_octet = 3, bcd={0x81, 0x12, 0x43}, return 4
*
* RETURNS
*  length of TP address
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 compute_tp_addr_len(kal_uint8 len_in_octet, kal_uint8 bcd[])
{
#if defined(__SMS_STORAGE_BY_MMI__)
    return smslib_compute_tp_addr_len(len_in_octet, bcd);
#else
    if ((bcd[len_in_octet - 1] & 0xf0) == 0xf0)
        return ((len_in_octet - 1) * 2 - 1);
    else
        return ((len_in_octet - 1) * 2);
#endif
}

smsal_msg_format_enum smsal_get_msg_format(kal_uint8 src_id)
{
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
 
#ifdef __SMS_STORAGE_BY_MMI__
    // to distinguish 1. and 2., AT setting are both text mode, but in 1., can't return text mode
    
    // 1. +cmss(send from MMI in PDU mode, but AT setting is text mode)
    if( (src_id >= RMMI_SRC) && smsal_para_ptr->rmi.force_msg_mode < NUM_OF_SMSAL_MSG_FORMAT )
    {
        return smsal_para_ptr->rmi.force_msg_mode;
    }
 
    // 2. +cmgs(send from AT in text mode)
    if ((src_id >= RMMI_SRC) && (smsal_para_ptr->rmi.message_format == SMSAL_TEXT_MODE))
    {
        return SMSAL_TEXT_MODE;
    }
#endif

    if ((src_id >= RMMI_SRC) && (smsal_para_ptr->rmi.message_format == SMSAL_PDU_MODE))
    {
        return SMSAL_PDU_MODE;
    }
    else
    {
#ifdef __SMS_STORAGE_BY_MMI__
        return SMSAL_PDU_MODE;
#else
        return SMSAL_TEXT_MODE;
#endif
    }
}


/*****************************************************************************
* FUNCTION
*  smsal_modify_da_in_pdu
* DESCRIPTION
*   This function modifies SMS PDU with a different destination address (da).
*   Used in two cases: one is SEND FROM STORAGE with different da, another
*   is MO SMS control with modification with da.
*
* PARAMETERS
*  a  IN          mti, indicates message type, SMS-SUBMIT or SMS-COMMAND
*  b  IN          *pdu_ptr, pointer to SMS PDU
*  c  IN          pdu_len, length of SMS PDU
*  d  IN          addr_length, length of new da
*  e  IN          addr_bcd, bcd/type of new da
* RETURNS
*  pointer of peer buffer which contains the modified SMS PDU
* GLOBALS AFFECTED
*  none
*****************************************************************************/
peer_buff_struct *smsal_modify_da_in_pdu(smsal_mti_enum mti,
                                         kal_uint8      *pdu_ptr,
                                         kal_uint16     pdu_len,
                                         kal_uint8      addr_length,
                                         kal_uint8      addr_bcd[])
{

    kal_uint8 *new_pdu_ptr;
    kal_uint8 offset = 2;               /* offset to da in SUBMIT */
    kal_uint8 old_da_len;
    peer_buff_struct *new_peer_ptr;
    kal_uint16 length;
    kal_uint16 new_pdu_len = pdu_len;
    kal_int8 new_da_len;

    if (mti == SMSAL_MTI_COMMAND)
        offset = 5;


    /* *pdu_ptr --> *(pdu_ptr+1) --> sca_len, 01/04/2003 Kevin */
    offset += (*(pdu_ptr) + 1);     /* skip sc address */

    old_da_len = (*(pdu_ptr + offset) + 1) / 2; /* bytes of bcd */

    /* compute new pdu length according to the new dest addr */

    new_da_len = ((addr_length + 1) / 2);

    if ((new_da_len - old_da_len) > 0)
        new_pdu_len += (new_da_len - old_da_len);
    else
        new_pdu_len -= (old_da_len - new_da_len);

    /* MAUI_02277891 [SMSAL][FixBug] When AT+CMSS change DA should reserve status bit
       Notice that here reserve free_header_space 1 byte for status */
    new_peer_ptr = (peer_buff_struct *) construct_peer_buff(new_pdu_len, 1,
                                                            0,  /* no tail */
                                                            TD_UL);

    new_pdu_ptr = get_peer_buff_pdu(new_peer_ptr, &length);

    /* copy data before DA from old PDU to new PDU */
    kal_mem_cpy(new_pdu_ptr, pdu_ptr, offset);

    /* copy the new DA length */
    *(new_pdu_ptr + offset) = addr_length;

    /* copy the new DA type */
    *(new_pdu_ptr + offset + 1) = addr_bcd[0];

    /* copy new DA BCD to new PDU */
    kal_mem_cpy(new_pdu_ptr + offset + 2, &addr_bcd[1], (addr_length + 1) / 2);

    old_da_len += 2;                    /* include len , type */

    /* copy data after DA from old PDU to new PDU */
    kal_mem_cpy(new_pdu_ptr + (offset + 2 + (addr_length + 1) / 2),
                pdu_ptr + offset + old_da_len, pdu_len - offset - old_da_len);

    return new_peer_ptr;

}                                       /* end of smsal_modify_da_in_pdu */


/*****************************************************************************
* FUNCTION
*  smsal_modify_da_in_tpdu
* DESCRIPTION
*   This function modifies SMS TPDU with a different destination address (da).
*   Used in one cases: SEND FROM SAT but is modifiied by SIM control.
*
* PARAMETERS
*  a  IN          mti, indicates message type, SMS-SUBMIT or SMS-COMMAND
*  b  IN          *pdu_ptr, pointer to SMS TPDU
*  c  IN          pdu_len, length of SMS TPDU
*  d  IN          addr_length, length of new da
*  e  IN          addr_bcd, bcd/type of new da
* RETURNS
*  pointer of peer buffer which contains the modified SMS PDU
* GLOBALS AFFECTED
*  none
*****************************************************************************/
peer_buff_struct *smsal_modify_da_in_tpdu(smsal_mti_enum mti,
                                         kal_uint8      *tpdu_ptr,
                                         kal_uint16     tpdu_len,
                                         kal_uint8      addr_length,
                                         kal_uint8      addr_bcd[])
{

    kal_uint8 *new_pdu_ptr;
    kal_uint8 offset = 2;               /* offset to da in SUBMIT */
    kal_uint8 old_da_len;
    peer_buff_struct *new_peer_ptr;
    kal_uint16 length;
    kal_uint16 new_tpdu_len = tpdu_len;
    kal_int8 new_da_len;

    if (mti == SMSAL_MTI_COMMAND)
        offset = 5;

    /* *pdu_ptr --> status , *(pdu_ptr+1) --> sca_len, 01/04/2003 Kevin */
    //offset += (*(pdu_ptr + 1) + 2);     /* skip status & sc address */

    old_da_len = (*(tpdu_ptr + offset) + 1) / 2; /* bytes of bcd */

    /* compute new pdu length according to the new dest addr */

    new_da_len = ((addr_length + 1) / 2);

    if ((new_da_len - old_da_len) > 0)
        new_tpdu_len += (new_da_len - old_da_len);
    else
        new_tpdu_len -= (old_da_len - new_da_len);

    new_peer_ptr = (peer_buff_struct *) construct_peer_buff(new_tpdu_len, 0,     /* no header */
                                                            0,  /* no tail */
                                                            TD_UL);

    new_pdu_ptr = get_peer_buff_pdu(new_peer_ptr, &length);

    /* copy data before DA from old PDU to new PDU */
    kal_mem_cpy(new_pdu_ptr, tpdu_ptr, offset);

    /* copy the new DA length */
    *(new_pdu_ptr + offset) = addr_length;

    /* copy the new DA type */
    *(new_pdu_ptr + offset + 1) = addr_bcd[0];

    /* copy new DA BCD to new PDU */
    kal_mem_cpy(new_pdu_ptr + offset + 2, &addr_bcd[1], (addr_length + 1) / 2);

    old_da_len += 2;                    /* include len , type */

    /* copy data after DA from old TPDU to new TPDU */
    kal_mem_cpy(new_pdu_ptr + (offset + 2 + (addr_length + 1) / 2),
                tpdu_ptr + offset + old_da_len, tpdu_len - offset - old_da_len);

    return new_peer_ptr;

}                                       /* end of smsal_modify_da_in_tpdu */


void smsal_prepare_stored_data(kal_uint8       data[],
                               kal_uint8       status,
                               kal_uint8       *pdu_ptr,
                               kal_uint16      pdu_len,
                               sms_addr_struct *sca
                              )
{
    kal_mem_set(data, 0xff, SMSAL_SMS_LEN);
    data[0] = status;
    if (sca->addr_length > 11)
    {
        sca->addr_length = 11;
    }
    data[1] = sca->addr_length;

    if (data[1] > 0)
    {
        kal_mem_cpy(&data[2], sca->addr_bcd, sca->addr_length);
    }

    if ((2 + sca->addr_length) + pdu_len > SMSAL_SMS_LEN)
    {
        pdu_len = (SMSAL_SMS_LEN - (2 + sca->addr_length));
    }

    
    kal_mem_cpy(&data[2 + sca->addr_length], pdu_ptr, pdu_len);

}                                       /* end of smsal_prepare_stored_data */

void smsal_reset_mailbox_info(smsal_mailbox_info_struct * mb, kal_uint8 line_no)
{
    kal_uint8 i;

    for (i = 0; i < NUM_OF_MSG_WAITING_TYPE; i++)
        mb->mwis[line_no].waiting_num[i] = 0;
}

