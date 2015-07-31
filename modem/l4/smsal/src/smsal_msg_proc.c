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
 * smsal_msg_proc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains functions related to message manipulations,
 *   e.g., read, write, delete message, etc.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#include "kal_public_api.h"
#include "md_sap.h"
#include "l4_msgid.h"

#include "l3_inc_enums.h"
#include "smsal_enums.h"

/* SMSAL <--> L4C */
#include "l4c_common_enum.h"            /* For src id */

#include "mcd_l4_common.h"


#include "l4c_common_enum.h"
#include "l4c2smsal_struct.h"
#include "smsal_l4c_defs.h"

#include "smsal_l4c_enum.h"

/* SMS Peer Messsages */
#include "smsal_peer_pun.h"
#include "smsal_peer_struct.h"

/* SMS <--> SMSAL */
#include "mnsms_struct.h"

#if defined(__SMS_STORAGE_BY_MMI__)
#include "smslib_def.h"
#include "smslib_enum.h"
#include "smslib_decode.h"
#include "smslib_others.h"
#endif

#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_msgbox.h"
#include "smsal_context.h"
#include "smsal_l4c_msgs.h"
#include "smsal_storage.h"
#include "smsal_msg_proc.h"
#include "smsal_other_funcs.h"
#include "smsal_transport_proc.h"
#include "smsal_sms.h"
#include "smsal_utils.h"

/* SIM */
#include "ps2sim_struct.h"
#include "sim_common_enums.h"

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "smsal_main.h"

#include "l4c_table.h"

#if (!defined(__MTK_TARGET__))
#ifndef _TST_SMSAL_
#define _TST_SMSAL_
#endif
#else
#if (defined(__MTK_INTERNAL__))
/* under construction !*/
#endif
#endif

#if defined (_TST_SMSAL_)
/* to pack deliver*/
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "l4c_utility.h"

#include "sim_common_enums.h"
#include "string.h"

extern const kal_uint8 MAP_ISO_GSM7BIT_TABLE[128];
#endif

/*****************************************************************************
* FUNCTION
*  smsal_construct_tpdu
* DESCRIPTION
*   This function constructs the TPDU.
*
* PARAMETERS
*  a  IN          msg_ptr, parameters
*  b  IN/OUT      submit_ptr, pointer to peer message of SMS-SUBMIT
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_construct_tpdu(smsal_send_msg_req_hdr_struct *msg_ptr,
                          smsal_submit_peer_struct      *submit_ptr,
                          kal_uint16                    msg_len,
                          kal_uint8                     *msg_data,
                          kal_uint8                     src_id )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_uint8 hdr_len1 = 0;             /* no. of TP-UDH in octets */
    kal_uint8 hdr_len2 = 0;             /* no. of TP-UDH in septets */
    kal_uint16 no_text1 = msg_len;      /* text part in octets */
    kal_uint16 no_text2 = msg_len;      /* text part in septets */
    kal_uint16 offset = 0;
    kal_bool is_8bit_encoding;
    kal_uint8 i;
    l4_addr_bcd_struct temp_addr;

    /* This function construct the TPDU header for MT Short Message */

    // reply path
    if ((msg_ptr->para_ind & SMSAL_PARA_REPLY_PATH) == SMSAL_PARA_REPLY_PATH)
        submit_ptr->reply_flag = msg_ptr->tp_rp;
    else
    {
    	if(src_id < RMMI_SRC)
        {
            submit_ptr->reply_flag = smsal_cntx_ptr->sms_parameter.common.reply_path;
        }
        else
        {
            submit_ptr->reply_flag = ((smsal_para_ptr->common.fo)&0x80)>>7;
        }      
    }

    submit_ptr->udh_p = msg_ptr->udhi;

    // status report
    if ((msg_ptr->para_ind & SMSAL_PARA_STATUS_REP) == SMSAL_PARA_STATUS_REP)
        submit_ptr->status_rep_flag = msg_ptr->tp_srr;
    else
    {
    	if(src_id < RMMI_SRC)
        {
            submit_ptr->status_rep_flag = smsal_cntx_ptr->sms_parameter.common.status_report;
        }
        else
        {
            submit_ptr->status_rep_flag = ((smsal_para_ptr->common.fo)&0x20)>>5;
        }
    }

    /*
     * Assign Validity period format supported, 
     * * only relative format is supported 
     */
    submit_ptr->vp_flag = SMSAL_VP_FORMAT;

    submit_ptr->rej_dup_flag = 0;

    submit_ptr->msg_type = SMSAL_MTI_SUBMIT;

    /*
     * Assign message reference to some dummy value, message
     * * reference is assigned prior to sending Short Message 
     * * to air Interface. 
     */
    submit_ptr->msg_ref = 0xFF;

    /* Assign destination address */
    if (msg_ptr->da_tag == KAL_TRUE)
    {
        /* number octets of address */
        if ((msg_ptr->da.addr_bcd[0] & 0xf0) == 0xd0)
        {
            if (msg_ptr->da.addr_length > 1)
            {
            for (i = 0; i < (msg_ptr->da.addr_length-1); i++)
            {
                temp_addr.addr_bcd[i+1] = AsciiToGSM7BitArray[msg_ptr->da.addr_bcd[i+1]];
            }
            
            smsal_gsm7_pack(&(temp_addr.addr_bcd[1]), 
                            &(submit_ptr->dest_addr[2]),
                            (msg_ptr->da.addr_length-1),
                            0);            
        
            if (((msg_ptr->da.addr_length-1) % 8) == 0)
                submit_ptr->dest_addr[0] = (msg_ptr->da.addr_length-1)*7/8*2;
			else if(((msg_ptr->da.addr_length-1) % 8) == 7)
                submit_ptr->dest_addr[0] = ((msg_ptr->da.addr_length-1)*7/8+1)*2 - 1;
			else
                submit_ptr->dest_addr[0] = ((msg_ptr->da.addr_length-1)*7/8+1)*2;

            submit_ptr->dest_addr[1] = msg_ptr->da.addr_bcd[0];

			if (((msg_ptr->da.addr_length-1) % 8) == 0)
                submit_ptr->no_dest_addr = ((msg_ptr->da.addr_length-1)*7/8) + 2;
            else
                submit_ptr->no_dest_addr = ((msg_ptr->da.addr_length-1)*7/8 + 1) + 2;
            }
            else
            {
                submit_ptr->dest_addr[0] = 0;
                submit_ptr->no_dest_addr = msg_ptr->da.addr_length + 1;
            }
        }
        else
        {
            submit_ptr->dest_addr[0] = compute_tp_addr_len(msg_ptr->da.addr_length,
                                                           msg_ptr->da.addr_bcd);

            submit_ptr->no_dest_addr = msg_ptr->da.addr_length + 1;

            kal_mem_cpy((kal_uint8 *) & submit_ptr->dest_addr[1],
                    (kal_uint8 *) msg_ptr->da.addr_bcd,
                    msg_ptr->da.addr_length);
        }
    }
    else
    {
        submit_ptr->no_dest_addr = 2;   /* len, type */

        /* First byte consists of address length */
        *(submit_ptr->dest_addr) = 0;

        /* Second byte contains type of address field */
        *(submit_ptr->dest_addr + 1) = SMSAL_DEFAULT_ADDR_TYPE;
    }

    /* Assign Protocol Identifier */
    if ((msg_ptr->para_ind & SMSAL_PARA_PID) == SMSAL_PARA_PID)
    {
        submit_ptr->pid = msg_ptr->pid;
    }
    else if (msg_ptr->profile_no_tag == KAL_TRUE)
    {
        submit_ptr->pid = smsal_cntx_ptr->sms_parameter.profile.profile[msg_ptr->profile_no].pid;
    }
    else
    {
    	if(src_id < RMMI_SRC)
        {
            submit_ptr->pid = SMSAL_DEFAULT_PID;
        }
        else
        {
            submit_ptr->pid = smsal_para_ptr->rmi.profile.pid;
        }
    }

    /* Assign Validity Period */
    submit_ptr->no_validity_period = 1;
    if ((msg_ptr->para_ind & SMSAL_PARA_VP) == SMSAL_PARA_VP)
    {
        *(submit_ptr->validity_period) = msg_ptr->vp;
    }
    else if (msg_ptr->profile_no_tag == KAL_TRUE)
    {
        *(submit_ptr->validity_period) =
        smsal_cntx_ptr->sms_parameter.profile.profile[msg_ptr->profile_no].vp;
    }
    else
    {
        if(src_id < RMMI_SRC)
        {
            *(submit_ptr->validity_period) = SMSAL_DEFAULT_VP;
        }
        else
        {
            *(submit_ptr->validity_period) = smsal_para_ptr->rmi.profile.vp;
        }
    }

    if(src_id < RMMI_SRC)
    {
        submit_ptr->dcs = msg_ptr->dcs;     /* save the dcs */
    }
    else
    {
        submit_ptr->dcs = smsal_para_ptr->rmi.profile.dcs;
    }

    if (msg_len > 0)
    {
        if (msg_ptr->udhi == KAL_TRUE)
        {
            hdr_len1 = *msg_data + 1;   /* UDHL stored in 1st byte */
            no_text2 -= hdr_len1;       /* exclude TP-UDH */
        }

        is_8bit_encoding = smsal_is_len_in8bit(msg_ptr->dcs);

        if (is_8bit_encoding == KAL_TRUE)
        {
            /* in terms of octets */
            offset = hdr_len1 * 8;
            hdr_len2 = hdr_len1;
            no_text1 = no_text2;
        }
        else
        {
            /* in terms of septets */
            offset = smsal_compute_udh_offset(hdr_len1);
            hdr_len2 = (kal_uint8) (offset / 7);

            /* offset-hdr_len1*8 : padding bits for TP-UDH */
            if (no_text2 == 0)
                no_text1 = 0;
            else
                no_text1 = (no_text2 * 7 + 7 + (offset - hdr_len1 * 8)) / 8;
        }

        if (msg_ptr->udhi == KAL_TRUE)
        {
            /* copy the TP-UDH part */
            kal_mem_cpy(submit_ptr->user_data, msg_data, hdr_len1       /* udh in octets */
                );
        }

        if (is_8bit_encoding == KAL_TRUE)
        {
            /* DCS is UCS2 or 8-bit */
            kal_mem_cpy(submit_ptr->user_data + hdr_len1,
                        msg_data + hdr_len1,
                        no_text1 /* no. of text in octets */
                );
        }
        else if (no_text2 > 0)
        {
            /* DCS is GSM-7bit */
            smsal_gsm7_pack(msg_data + hdr_len1,        /* unpacked */
                            submit_ptr->user_data,      /* packed */
                            no_text2,   /* no. of text in chars */
                            offset);

        }                               /* smsal_is_len_in8bit */

    }                                   /* if no_user_data > 0 */

    submit_ptr->no_user_data = (kal_uint8) (hdr_len1 + no_text1);     /* in terms of octets */
    submit_ptr->user_data_len = (kal_uint8) (hdr_len2 + no_text2);    /* in terms of chars */

    /* check whether padding (with value of 0x00) is needed */
    if (msg_ptr->dcs == SMSAL_DEFAULT_DCS)
    {
        if ((submit_ptr->user_data_len * 7) > (submit_ptr->no_user_data * 8))
        {
            if (submit_ptr->no_user_data < 140)
            {
                submit_ptr->user_data[submit_ptr->no_user_data] = 0;
                submit_ptr->no_user_data++;
            }
        }
    }

    ASSERT(submit_ptr->no_user_data <= 140);
    ASSERT(submit_ptr->user_data_len <= 160);

}                                       /* end of smsal_construct_tpdu */


#if defined(__SMS_STORAGE_BY_MMI__)
    //NA
#else
void smsal_construct_mt_sms(smsal_receive_msg_hdr_struct *msg_ptr,
                            smsal_deliver_peer_struct    *deliver_ptr,
                            kal_uint16                   msg_len,
                            kal_uint8                    *msg_data)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 hdr_len1 = 0;             /* no. of TP-UDH in octets */
    kal_uint8 hdr_len2 = 0;             /* no. of TP-UDH in septets */
    kal_uint16 no_text1 = msg_len;      /* text part in octets */
    kal_uint16 no_text2 = msg_len;      /* text part in septets */
    kal_uint16 offset = 0;
    kal_bool is_8bit_encoding;    
    kal_uint8 i;
    l4_addr_bcd_struct temp_addr;

    /* This function construct the TPDU header for MT Short Message */

    // reply path
    if ((msg_ptr->para_ind & SMSAL_MTSMS_PARA_RP) == SMSAL_MTSMS_PARA_RP)
        deliver_ptr->reply_flag = msg_ptr->tp_rp;
    else
        deliver_ptr->reply_flag = smsal_cntx_ptr->sms_parameter.common.reply_path;

    deliver_ptr->udh_p = msg_ptr->tp_udhi;

    // status report
    if ((msg_ptr->para_ind & SMSAL_MTSMS_PARA_RP) == SMSAL_MTSMS_PARA_RP)
        deliver_ptr->status_rep_flag = msg_ptr->tp_sri;
    else
        deliver_ptr->status_rep_flag = smsal_cntx_ptr->sms_parameter.common.status_report;

    deliver_ptr->fill_bits = 0;

    // more message
    if ((msg_ptr->para_ind & SMSAL_MTSMS_PARA_MMS) == SMSAL_MTSMS_PARA_MMS)
        deliver_ptr->mms = msg_ptr->tp_mms;
    else
        deliver_ptr->mms = 0;

    deliver_ptr->msg_type = SMSAL_MTI_DELIVER;

    // Assign source address
    if ((msg_ptr->oa.addr_bcd[0] & 0xf0) == 0xd0)
    {
        if (msg_ptr->oa.addr_length > 1)
        {
        for (i = 0; i < (msg_ptr->oa.addr_length-1); i++)
        {
            temp_addr.addr_bcd[i+1] = AsciiToGSM7BitArray[msg_ptr->oa.addr_bcd[i+1]];
        }
        
        smsal_gsm7_pack(&(temp_addr.addr_bcd[1]), 
                        &(deliver_ptr->orig_addr[2]),
                        (msg_ptr->oa.addr_length-1),
                        0);            
    
        if (((msg_ptr->oa.addr_length-1) % 8) == 0)
            deliver_ptr->orig_addr[0] = (msg_ptr->oa.addr_length-1)*7/8*2;
		else if(((msg_ptr->oa.addr_length-1) % 8) == 7)
            deliver_ptr->orig_addr[0] = ((msg_ptr->oa.addr_length-1)*7/8+1)*2 - 1;
		else
            deliver_ptr->orig_addr[0] = ((msg_ptr->oa.addr_length-1)*7/8+1)*2;

        deliver_ptr->orig_addr[1] = msg_ptr->oa.addr_bcd[0];

		if (((msg_ptr->oa.addr_length-1) % 8) == 0)
            deliver_ptr->no_orig_addr = ((msg_ptr->oa.addr_length-1)*7/8) + 2;
        else
            deliver_ptr->no_orig_addr = ((msg_ptr->oa.addr_length-1)*7/8 + 1) + 2;
        }
        else
        {
            deliver_ptr->orig_addr[0] = 0;
            deliver_ptr->no_orig_addr = msg_ptr->oa.addr_length + 1;    
        }
    }
    else
    {
        /* number octets of address */
        deliver_ptr->orig_addr[0] = compute_tp_addr_len(msg_ptr->oa.addr_length,
                                                        msg_ptr->oa.addr_bcd);

        deliver_ptr->no_orig_addr = msg_ptr->oa.addr_length + 1;

        kal_mem_cpy((kal_uint8 *) & deliver_ptr->orig_addr[1],
                    (kal_uint8 *) msg_ptr->oa.addr_bcd,
                    msg_ptr->oa.addr_length);
    }

    // Assign Protocol Identifier
    deliver_ptr->pid = msg_ptr->pid;

    // DCS
    deliver_ptr->dcs = msg_ptr->dcs;

    // SCTS
    kal_mem_cpy(deliver_ptr->scts, msg_ptr->tp_scts, 7);

    if (msg_len > 0)
    {
        if (msg_ptr->tp_udhi == KAL_TRUE)
        {
            hdr_len1 = *msg_data + 1;   /* UDHL stored in 1st byte */
            no_text2 -= hdr_len1;       /* exclude TP-UDH */
        }

        is_8bit_encoding = smsal_is_len_in8bit(msg_ptr->dcs);

        if (is_8bit_encoding == KAL_TRUE)
        {
            /* in terms of octets */
            offset = hdr_len1 * 8;
            hdr_len2 = hdr_len1;
            no_text1 = no_text2;
        }
        else
        {
            /* in terms of septets */
            offset = smsal_compute_udh_offset(hdr_len1);
            hdr_len2 = (kal_uint8) (offset / 7);

            /* offset-hdr_len1*8 : padding bits for TP-UDH */
            if (no_text2 == 0)
                no_text1 = 0;
            else
                no_text1 = (no_text2 * 7 + 7 + (offset - hdr_len1 * 8)) / 8;
        }

        if (msg_ptr->tp_udhi == KAL_TRUE)
        {
            /* copy the TP-UDH part */
            kal_mem_cpy(deliver_ptr->user_data, msg_data, hdr_len1       /* udh in octets */
                );
        }

        if (is_8bit_encoding == KAL_TRUE)
        {
            /* DCS is UCS2 or 8-bit */
            kal_mem_cpy(deliver_ptr->user_data + hdr_len1,
                        msg_data + hdr_len1,
                        no_text1 /* no. of text in octets */
                );
        }
        else if (no_text2 > 0)
        {
            /* DCS is GSM-7bit */
            smsal_gsm7_pack(msg_data + hdr_len1,        /* unpacked */
                            deliver_ptr->user_data,      /* packed */
                            no_text2,   /* no. of text in chars */
                            offset);

        }                               /* smsal_is_len_in8bit */

    }                                   /* if no_user_data > 0 */

    deliver_ptr->no_user_data = (kal_uint8) (hdr_len1 + no_text1);     /* in terms of octets */
    deliver_ptr->user_data_len = (kal_uint8) (hdr_len2 + no_text2);    /* in terms of chars */

    /* check whether padding (with value of 0x00) is needed */
    if (msg_ptr->dcs == SMSAL_DEFAULT_DCS)
    {
        if ((deliver_ptr->user_data_len * 7) > (deliver_ptr->no_user_data * 8))
        {
            if (deliver_ptr->no_user_data < 140)
            {
                deliver_ptr->user_data[deliver_ptr->no_user_data] = 0;
                deliver_ptr->no_user_data++;
            }
        }
    }

    ASSERT(deliver_ptr->no_user_data <= 140);
    ASSERT(deliver_ptr->user_data_len <= 160);
}                                       /* end of smsal_construct_tpdu */
#endif //__SMS_STORAGE_BY_MMI__


/*****************************************************************************
* FUNCTION
*  smsal_construct_msg_to_storage
* DESCRIPTION
*   This function constructs the message which will be written to storage.
*
* PARAMETERS
*  a  IN/OUT      data, used as returns
*  b  IN          write_req, contains message and src_id
* RETURNS
*  none
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_construct_msg_to_storage(kal_uint8                     data[],
                                    l4csmsal_write_req_struct     *write_req,
                                    kal_uint16                    msg_len,
                                    kal_uint8                     *msg_data)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 offset;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    sms_addr_struct sca;
    smsal_submit_peer_struct submit_struct;
    smsal_send_msg_req_hdr_struct *msg_send_req_ptr;

    smsal_submit_peer_struct_alloc(&submit_struct);

    msg_send_req_ptr = &(write_req->hdr.mo_sms_hdr);

    /* Construct TPDU which containin in submit_struct */
    smsal_construct_tpdu(msg_send_req_ptr, &submit_struct, msg_len, msg_data, write_req->src_id);

    pdu_len = (kal_uint16) ((smsal_submit_peer_struct_bits(&submit_struct) + 7) / 8);

    pdu_ptr = (kal_uint8 *) get_ctrl_buffer(pdu_len);

    smsal_submit_peer_struct_pack(pdu_ptr, &submit_struct, 0);

    // data[0] = SMSAL_UNSENT_MSG; /* udpate status */

    /* 
     * Fill SC address 
     */
    sca.addr_length = 0;                /* reset length */
    if ((msg_send_req_ptr->para_ind & SMSAL_PARA_SCA) == SMSAL_PARA_SCA)
    {
        l4_addr2_sms_rp_addr(&(msg_send_req_ptr->sc_addr), &sca);
    }
    else if (msg_send_req_ptr->profile_no_tag == KAL_TRUE)
    {
        sca = smsal_cntx_ptr->sms_parameter.profile.profile[msg_send_req_ptr->profile_no].sca;
    }

    data[1] = sca.addr_length;

    if (data[1] > 0)
    {
        kal_mem_cpy(&data[2], sca.addr_bcd, data[1]);
    }

    offset = data[1] + 2;               /* status + sca */
    kal_mem_cpy(&data[offset], pdu_ptr, pdu_len);

    free_ctrl_buffer(pdu_ptr);
    smsal_submit_peer_struct_dealloc(&submit_struct);

}                                       /* end of smsal_construct_msg_to_storage */


#if defined(__SMS_STORAGE_BY_MMI__)
    //NA
#else
void smsal_construct_mt_msg_to_storage(kal_uint8                     data[],
                                       smsal_receive_msg_hdr_struct *msg_recv_ptr,
                                       kal_uint16                    msg_len,
                                       kal_uint8                     *msg_data)
{
    kal_uint8 offset;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    sms_addr_struct sca;
    smsal_deliver_peer_struct deliver_struct;

    smsal_deliver_peer_struct_alloc(&deliver_struct);

    /* Construct TPDU which containin in deliver_struct */
    smsal_construct_mt_sms(msg_recv_ptr, &deliver_struct, msg_len, msg_data);

    pdu_len = (kal_uint16) ((smsal_deliver_peer_struct_bits(&deliver_struct) + 7) / 8);

    pdu_ptr = (kal_uint8 *) get_ctrl_buffer(pdu_len);

    smsal_deliver_peer_struct_pack(pdu_ptr, &deliver_struct, 0);

    // data[0] = SMSAL_UNREAD_MSG; /* udpate status */

    // Fill SC address
    sca.addr_length = 0;                /* reset length */
    l4_addr2_sms_rp_addr(&(msg_recv_ptr->sc_addr), &sca);

    data[1] = sca.addr_length;

    if (data[1] > 0)
    {
        kal_mem_cpy(&data[2], sca.addr_bcd, data[1]);
    }

    offset = data[1] + 2;               /* status + sca */
    kal_mem_cpy(&data[offset], pdu_ptr, pdu_len);

    free_ctrl_buffer(pdu_ptr);
    smsal_deliver_peer_struct_dealloc(&deliver_struct);
}
#endif //__SMS_STORAGE_BY_MMI__


#if defined (_TST_SMSAL_)
/*****************************************************************************
* FUNCTION
*  smsal_construct_deliver_msg
* DESCRIPTION
*   This function constructs the message which will be written to storage.
*
* PARAMETERS
*  a  IN          data to pack
* RETURNS
*  none
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_construct_deliver_msg(local_para_struct *local_para_ptr)
{
    smsal_tst_deliver_struct *tst_deliver;
    sms_deliver_struct* sms_deliver_ptr;
    smsal_deliver_peer_struct *deliver_struct;
    peer_buff_struct* peer_buff_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;
    kal_uint8 tmp_buf[254]; /* service centre address */
    kal_uint8 tmp_num_type = 0;
    kal_uint8 tmp_num_len = 0;
    kal_uint8 index = 0;
    kal_uint8 year = 0;

    tst_deliver = (smsal_tst_deliver_struct *)local_para_ptr;

    sms_deliver_ptr = (sms_deliver_struct*)
                      construct_local_para(sizeof(sms_deliver_struct), TD_DL);

    /* Fill loacal: sms_deliver_struct */
    sms_deliver_ptr->smi     = 0;//tst_deliver_struct->smi;

    /* if '+' is present in <number>, type is forced to be 145 ,
        and '+' is removed. */
    if(tst_deliver->sc_addr[0] == '+')
    {
        tmp_num_type = 145;
        tmp_num_len = (kal_uint8)(strlen((char *)tst_deliver->sc_addr)-1);
        if (tmp_num_len > 20)
            tmp_num_len = 20;
        kal_mem_cpy((kal_uint8 *)tmp_buf,(kal_uint8 *)&tst_deliver->sc_addr[1],tmp_num_len);
        kal_mem_cpy((kal_uint8 *)&tst_deliver->sc_addr[0],(kal_uint8 *)tmp_buf,tmp_num_len);
        tst_deliver->sc_addr[tmp_num_len] = 0;
    }
    else
    {
        tmp_num_len = (kal_uint8)(strlen((char *)tst_deliver->sc_addr));
        if (tmp_num_len > 20)
            tmp_num_len = 20;
        tmp_num_type = 129;
    }

    sms_deliver_ptr->sc_addr.addr_length = convert_to_bcd ((kal_uint8 *)tst_deliver->sc_addr,
                        (kal_uint8 *)&(sms_deliver_ptr->sc_addr.addr_bcd[1]), 10) + 1;
    sms_deliver_ptr->sc_addr.addr_bcd[0] = tmp_num_type;

    /* Fill peer */

    deliver_struct = get_ctrl_buffer(sizeof(smsal_deliver_peer_struct));
    
    smsal_deliver_peer_struct_alloc(deliver_struct);


    deliver_struct->reply_flag = tst_deliver->reply_flag; /* whether reply is sought*/
    deliver_struct->udh_p = tst_deliver->udh_p; /* indicates presence of
                                                 user data header*/
    deliver_struct->status_rep_flag = tst_deliver->status_rep_flag; /* whether status reports
                                                   are sought*/
    deliver_struct->fill_bits = 0; /* to be ignored*/
    deliver_struct->mms = tst_deliver->mms; /* more message to send*/
    deliver_struct->msg_type = 0; //deliver

    if(tst_deliver->orig_addr[0] == '+')
    {
        tmp_num_type = 145;
        tmp_num_len = (kal_uint8)(strlen((char *)tst_deliver->orig_addr)-1);
        if (tmp_num_len > 20)
            tmp_num_len = 20;
        kal_mem_cpy((kal_uint8 *)tmp_buf,(kal_uint8 *)&tst_deliver->orig_addr[1],tmp_num_len);
        kal_mem_cpy((kal_uint8 *)&tst_deliver->orig_addr[0],(kal_uint8 *)tmp_buf,tmp_num_len);
        tst_deliver->orig_addr[tmp_num_len] = 0;
    }
    else
    {
        tmp_num_len = (kal_uint8) (strlen((char *)tst_deliver->orig_addr));
        if (tmp_num_len > 20)
            tmp_num_len = 20;
        tmp_num_type = 129;
    }
 
    deliver_struct->no_orig_addr =
        convert_to_bcd ((kal_uint8 *)tst_deliver->orig_addr,
                        (kal_uint8 *)(deliver_struct->orig_addr+2), 10) + 2; // len and type
    *(deliver_struct->orig_addr) =  tmp_num_len;
    *(deliver_struct->orig_addr+1) = tmp_num_type;

    deliver_struct->pid = tst_deliver->pid;
    deliver_struct->dcs = tst_deliver->dcs;
    
    if (tst_deliver->year > 2000)
        year = (kal_uint8)(tst_deliver->year - 2000);
    else
        year = (kal_uint8)(tst_deliver->year - 1900);
    deliver_struct->scts[0] = ((year % 10) << 4) | (year / 10);
    deliver_struct->scts[1] = ((tst_deliver->nMonth % 10) << 4) | (tst_deliver->nMonth / 10);
    deliver_struct->scts[2] = ((tst_deliver->nDay % 10) << 4) | (tst_deliver->nDay / 10);
    deliver_struct->scts[3] = ((tst_deliver->nHour % 10) << 4) | (tst_deliver->nHour / 10);
    deliver_struct->scts[4] = ((tst_deliver->nMin % 10) << 4) | (tst_deliver->nMin / 10);
    deliver_struct->scts[5] = ((tst_deliver->nSec % 10) << 4) | (tst_deliver->nSec / 10);
    deliver_struct->scts[6] = 0;
    
    index = 0;
    tmp_num_len = 0;

    if(deliver_struct->dcs == 0)
    {
        while (tst_deliver->user_data[index] != '\0')
        {
            if ((index >= 160) || // length is too long , break 
                (tmp_num_len >= 160))
                break;

            if (tst_deliver->user_data[index] == 0x24)
                tmp_buf[tmp_num_len] = 0x02;
            else if (tst_deliver->user_data[index] == 0x40)
                tmp_buf[tmp_num_len] = 0x00;
            else if (tst_deliver->user_data[index] == 0x5f)
                tmp_buf[tmp_num_len] = 0x11;
            else if (tst_deliver->user_data[index] > 0x7f)
                tmp_buf[tmp_num_len] = MAP_ISO_GSM7BIT_TABLE[tst_deliver->user_data[index]-0x80];
            else if (RMMI_IS_EXT_CHAR(tst_deliver->user_data[index]))
            {
                tmp_buf[tmp_num_len] = 0x1b;
                tmp_num_len++;
                switch(tst_deliver->user_data[index]) 
                {
                   case RMMI_CHAR_VERTICAL_LINE :
                   {
                       tmp_buf[tmp_num_len] = 0x40;
                       break;
                   }
                   case RMMI_HAT :
                   {
                       tmp_buf[tmp_num_len] = 0x14;
                       break;
                   }
                   case RMMI_L_CURLY_BRACKET :
                   {
                       tmp_buf[tmp_num_len] = 0x28;
                       break;
                   }
                   case RMMI_R_CURLY_BRACKET :
                   {
                       tmp_buf[tmp_num_len] = 0x29;
                       break;
                   }
                   case RMMI_L_SQ_BRACKET :
                   {
                       tmp_buf[tmp_num_len] = 0x3c;
                       break;
                   }
                   case RMMI_R_SQ_BRACKET :
                   {
                       tmp_buf[tmp_num_len] = 0x3e;                
                       break;
                   }
                   case RMMI_CHAR_TILDE :
                   {
                       tmp_buf[tmp_num_len] = 0x3d;
                       break;
                   }
                   case RMMI_CHAR_REVERSE_SOLIDUS :
                   {
                       tmp_buf[tmp_num_len] = 0x2f;
                       break;
                   }   
                   default:
                       break;
                }
            }
            else
            {
               tmp_buf[tmp_num_len] = tst_deliver->user_data[index];
            }
            
            index++;
            tmp_num_len++;     
        }  
        
        deliver_struct->no_user_data = (tmp_num_len * 7 + 7) / 8;
        deliver_struct->user_data_len = tmp_num_len;

        smsal_gsm7_pack(tmp_buf,          /* unpacked */
                        deliver_struct->user_data,      /* packed */
                        tmp_num_len,           /* no. of text in chars */
                        0);
        
    }
    else
    {
        while ((tst_deliver->user_data[index] != 0x00) || (tst_deliver->user_data[index+1] != 0x00))
        {
            if ((index >= 140) || (tmp_num_len >= 140)) // length is too long , break
                break;

            deliver_struct->user_data[tmp_num_len] = tst_deliver->user_data[index];
			deliver_struct->user_data[tmp_num_len+1] = tst_deliver->user_data[index+1];
            
            index = index+2;
            tmp_num_len = tmp_num_len+2;     
        }
             
        deliver_struct->no_user_data = tmp_num_len;
        deliver_struct->user_data_len = tmp_num_len;
    }
    
    pdu_len = (kal_uint16)((smsal_deliver_peer_struct_bits(deliver_struct) + 7) / 8);
    
    peer_buff_ptr = construct_peer_buff(pdu_len, 0, 0, TD_CTRL);
    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);
    smsal_deliver_peer_struct_pack(pdu_ptr, deliver_struct, 0);

    smsal_deliver_peer_struct_dealloc(deliver_struct);
    free_ctrl_buffer(deliver_struct);

    msg_send6(smsal_cur_mod, 
              smsal_cur_mod, 
              MNSMS_SAP, 
              MSG_ID_SMS_DELIVER, 
              (local_para_struct*) sms_deliver_ptr,
              (peer_buff_struct*) peer_buff_ptr);
    
    //smsal_deliver_peer_struct_dealloc(&deliver_struct);

}                                       /* end of smsal_construct_msg_to_storage */
#endif


/*****************************************************************************
* FUNCTION
*  smsal_unpack_msg
* DESCRIPTION
*   This function unpacks the short message according to data coding scheme.
*
* PARAMETERS
*  a  IN       dcs
*  b  IN       *msg_ptr, pointer to the packed data
*  c  IN/OUT   *data, pointer to the unpacked data
*  d  IN       length, length of "unpacked" data
*  e  IN       offset (in terms of bits)
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_unpack_msg(kal_uint8  dcs,
                      kal_uint8  *msg_ptr,       /* packed */
                      kal_uint8  *data, /* unpacked */
                      kal_uint16 length,
                      kal_uint16 offset)
{
    if (length > 0)                     /* 12/26/2002 by Kevin */
    {
        if (smsal_is_len_in8bit(dcs) == KAL_TRUE)
        {
            kal_mem_cpy(data,           /* unpacked */
                        (kal_uint8 *) msg_ptr + offset / 8,     /* packed */
                        length - offset / 8);
        }
        else
        {
            if ((length - offset / 7) > 0)
                smsal_gsm7_unpack(msg_ptr,      /* packed */
                                  data, /* unpack */
                                  (kal_uint16) (length - offset / 7),   /* length */
                                  offset);      /* offset */
        }
    }

}                                       /* end of smsal_unpack_msg */

#ifndef __SMS_STORAGE_BY_MMI__
/*****************************************************************************
* FUNCTION
*  smsal_read_index
* DESCRIPTION
*   This function reads a message from the SMS storage.
*
* PARAMETERS
*  a  IN       read_req, contains read request
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_read_index(l4csmsal_read_req_struct *read_req)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint16 index;

    index = read_req->index;

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_READ;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_INDEX;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) read_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    if( ((&(smsal_cntx_ptr->message_box[read_req->index]))->state & SMSAL_MB_ENTRY_PENDING) )
    {
        // pending, waiting for previous request done
        //(&(smsal_cntx_ptr->pending_act[id]))->is_processed = KAL_FALSE;
        (&(smsal_cntx_ptr->pending_act[id]))->action_status &= 0x7f;
    }
    else
    {
        smsal_read_short_msg(id,
            (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
            (&(smsal_cntx_ptr->message_box[index]))->record_no);
    }
}                                       /* end of smsal_read_index */

#ifdef __SMS_RAW_DATA_ACCESS_SUPPORT__
void smsal_read_raw_data_index(l4csmsal_read_raw_data_req_struct *read_req)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint16 index;

    index = read_req->index;

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_READ_RAW_DATA;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_INDEX;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) read_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    if( ((&(smsal_cntx_ptr->message_box[read_req->index]))->state & SMSAL_MB_ENTRY_PENDING) )
    {
        // pending, waiting for previous request done
        //(&(smsal_cntx_ptr->pending_act[id]))->is_processed = KAL_FALSE;
        (&(smsal_cntx_ptr->pending_act[id]))->action_status &= 0x7f;
    }
    else
    {
        smsal_read_short_msg(id,
            (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
            (&(smsal_cntx_ptr->message_box[index]))->record_no);
    }
}                                       /* end of smsal_read_index */

void smsal_read_raw_data_cnf(kal_uint8         id,
                             kal_uint8         sub_act_code,
                             ilm_struct        *ilm_ptr,
                             kal_bool          is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 pdu_len, pdu_len_1;
    kal_uint8 *pdu_ptr, *pdu_ptr_1;
    kal_uint8 original_status;
    peer_buff_struct *peer_buff_ptr;
    sim_read_cnf_struct *sim_read_cnf;
    l4csmsal_read_raw_data_req_struct *read_req;
    l4csmsal_read_raw_data_cnf_struct *read_cnf;
    smsal_mb_entry_struct *entry;

    read_req = (l4csmsal_read_raw_data_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

    if (is_from_sim == KAL_TRUE)
    {
        sim_read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        pdu_ptr = sim_read_cnf->data;
        pdu_len = sim_read_cnf->length;
    }
    else
    {
        pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &pdu_len);

        if (pdu_len != SMSAL_SMS_ME_LEN)
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len););

            smsal_read_raw_data_error(read_req->src_id,  /* src id */
                                      SMSAL_UNSPECIFIED_ERROR_CAUSE  /* error cause */
                                      );
            smsal_free_pending_act(id);
            return;
        }
    }

    // prepare peer buffer for raw data
    peer_buff_ptr = (peer_buff_struct *)construct_peer_buff(pdu_len, 0, 0, TD_CTRL);
    pdu_ptr_1 = get_peer_buff_pdu(peer_buff_ptr, &pdu_len_1);
    kal_mem_cpy(pdu_ptr_1, pdu_ptr, pdu_len_1);

    entry = (&(smsal_cntx_ptr->message_box[read_req->index]));
    smsal_get_ext_status(entry->status, &original_status);

    // prepare local parameter
    read_cnf = (l4csmsal_read_raw_data_cnf_struct *)
               construct_local_para(sizeof(l4csmsal_read_raw_data_cnf_struct), TD_CTRL);
    read_cnf->src_id = read_req->src_id;
    read_cnf->result = L4C_OK;
    read_cnf->index = read_req->index;
    read_cnf->status = original_status;
    read_cnf->storage_type = (&(smsal_cntx_ptr->message_box[read_req->index]))->storage_type;
    read_cnf->data_len = pdu_len_1;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_READ_RAW_DATA_CNF,
                          (local_para_struct *) read_cnf,
                          peer_buff_ptr);

    /* Free resources */
    smsal_free_pending_act(id);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_RAW_DATA_CNF, read_cnf->result, 0);
}                                       /* end of smsal_read_raw_data_cnf */

void smsal_read_raw_data_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_read_raw_data_req_struct *read_req;

    read_req = (l4csmsal_read_raw_data_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    if (read_req->src_id >= RMMI_SRC)
        error_cause = SMS_SIM_FAILURE;

    smsal_read_raw_data_error(read_req->src_id,  /* src id */
                     (smsal_error_cause_enum) error_cause       /* error cause */
                     );

    smsal_free_pending_act(old_id);
}                                       /* end of smsal_read_raw_data_rej */


void smsal_write_raw_data_cnf(kal_uint8              result,
                              kal_uint8              src_id, 
                              smsal_error_cause_enum error_cause,
                              kal_uint16             index,
                              kal_uint8              status) 
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_write_raw_data_cnf_struct *write_cnf;
    kal_uint8 ext_status;

    write_cnf = (l4csmsal_write_raw_data_cnf_struct *)
                 construct_local_para(sizeof(l4csmsal_write_raw_data_cnf_struct), TD_CTRL );

    smsal_get_ext_status(status, &ext_status);

    write_cnf->src_id = src_id;
    write_cnf->result = result;
    write_cnf->error_cause = error_cause;
    write_cnf->index = index;
    write_cnf->status = ext_status;

    if (index == SMSAL_INVALID_INDEX)
        write_cnf->storage_type = SMSAL_STORAGE_UNSPECIFIED;
    else
        write_cnf->storage_type = (&(smsal_cntx_ptr->message_box[index]))->storage_type;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_WRITE_RAW_DATA_CNF, (local_para_struct *) write_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_WRITE_RAW_DATA_CNF, result, error_cause);

}                                       /* end of smsal_write_raw_data_cnf */

void smsal_write_raw_data_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_write_raw_data_req_struct *write_req;
    smsal_write_aux_info_struct *aux_info;

    write_req = (l4csmsal_write_raw_data_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    if (write_req->src_id >= RMMI_SRC)
    {
        error_cause = SMS_SIM_FAILURE;
    }

    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

#ifdef __SMS_ME_STORAGE__
    DECR_USED_MSG_NUM(aux_info->storage_type);
#else
    DECR_USED_MSG_NUM(SMSAL_SM);
#endif

    smsal_write_raw_data_cnf(L4C_ERROR,
                             write_req->src_id,       /* src id */
                             (smsal_error_cause_enum) error_cause,       /* error cause */
                             SMSAL_INVALID_INDEX, 0);

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_write_raw_data_rej */


void smsal_write_raw_data_single(kal_uint8 id, l4csmsal_write_raw_data_req_struct *write_req, kal_uint8 *pdu_ptr, kal_uint16 pdu_len)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_pdu_decode_struct sms_pdu;
    smsal_write_aux_info_struct *aux_info;
    smsal_mb_entry_struct *entry;

    kal_uint8  scts[7];
    kal_bool   ret_val;
    kal_uint16 entry_id;

    kal_mem_set(scts, 0xff, 7);

    if( pdu_len == SMSAL_SMS_LEN )
    {
        /* Short message from SIM */
    }
    else if( pdu_len == SMSAL_SMS_ME_LEN )
    {
        /* Short message from NVRAM */
        kal_mem_cpy(scts, pdu_ptr + SMSAL_SMS_LEN, 7);
    }
    else
    {
        SMSAL_ASSERT(KAL_FALSE);
    }

    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_WRITE_SINGLE;
    aux_info = (smsal_write_aux_info_struct *)
               get_ctrl_buffer(sizeof(smsal_write_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;
   
    /*
     * Find a free message box entry which allocated for the
     * * storage which specified by 'storage_type' 
     */
    ret_val = smsal_get_free_mb_entry(write_req->storage_type, &entry_id);
    SMSAL_ASSERT(ret_val == KAL_TRUE);
    
    /* Save 'index' */
    aux_info->index = entry_id;
#ifdef __SMS_ME_STORAGE__
    aux_info->storage_type = write_req->storage_type;
#endif
    
    entry = (&(smsal_cntx_ptr->message_box[entry_id]));

    ret_val = smsal_decode_sms_pdu((pdu_ptr + 1), (kal_uint8) (pdu_len - 1), &sms_pdu);
    if( ret_val == KAL_FALSE )
    {
        /* free the unpacked structure for TPDU */
        smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
        smsal_write_raw_data_cnf(L4C_ERROR, write_req->src_id, INVALID_REQ_PARAMETER, SMSAL_INVALID_INDEX, 0);
        smsal_free_pending_act(id);
        return;
    }


    smsal_write_short_msg(id,
                          (smsal_storage_enum)entry->storage_type,
                          entry->record_no,
                          pdu_ptr,
                          scts,
                          SMSAL_SMS_LEN);

    switch (pdu_ptr[0] & 0x07)
    {
        case SMSAL_UNSENT_MSG:         /* MO, unsent */
            entry->status = SMSAL_STATUS_UNSENT;

            /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
            /* draft message */
            if ((pdu_ptr[0] & SMSAL_DRAFT_MSG) == SMSAL_DRAFT_MSG)
                entry->status |= SMSAL_STATUS_DRAFT;
            break;

        case SMSAL_SENT_NO_SRR:        /* MO, sent */
            entry->status = SMSAL_STATUS_SENT;

            /* status report is requested, but not (yet) received */
            if ((pdu_ptr[0] & SMSAL_SENT_SRR_NOT_RECV) == SMSAL_SENT_SRR_NOT_RECV)
                entry->status |= SMSAL_STATUS_SRR_NOT_RECV;
            break;

        case SMSAL_READ_MSG:           /* MT, read */
            entry->status = SMSAL_STATUS_READ;
            break;

        case SMSAL_UNREAD_MSG:         /* MT, unread */
            entry->status = SMSAL_STATUS_UNREAD;
            break;

        default:
            break;
    }                                   /* switch */

    //smsal_decode_sms_pdu((pdu_ptr + 1), (kal_uint8) (pdu_len - 1), &sms_pdu);
    smsal_update_msgbox_from_tpdu(entry, &(sms_pdu.tpdu));

    /* free the unpacked structure for TPDU */
    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

    /* Mark the state of the message box's entry to PENDING */
    (&(smsal_cntx_ptr->message_box[entry_id]))->state |= SMSAL_MB_ENTRY_PENDING;
    
    INCR_USED_MSG_NUM(write_req->storage_type);
}                                       /* end of smsal_write_raw_data_single */


void smsal_write_raw_data_single_cnf(kal_uint8 old_id, local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 entry_id;
    l4csmsal_write_raw_data_req_struct *write_req;
    smsal_mb_entry_struct *entry;

    write_req = (l4csmsal_write_raw_data_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    entry_id = ((smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info)->index;

    entry = (&(smsal_cntx_ptr->message_box[entry_id]));

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[entry_id]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    /*
     * Update message box: state, status
     */
    entry->state = SMSAL_MB_ENTRY_VALID;

    smsal_write_raw_data_cnf(L4C_OK,
                    write_req->src_id,
                    (smsal_error_cause_enum)0, /* ignore error cause */
                    entry_id,
                    entry->status 
                    );
    
    INCR_MSGBOX_NUM(entry->status, entry->storage_type);

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_write_raw_data_single_cnf */



#endif


/*****************************************************************************
* FUNCTION
*  smsal_read_next
* DESCRIPTION
*   This function handles the read request with req_type of NEXT_INDEXING,
*   which is used for +CMGL.
*
* PARAMETERS
*  a  IN       read_req, contains read request
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_read_next(l4csmsal_read_req_struct *read_req)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 int_status;               /* internal status */
    kal_uint8 id;
    kal_uint16 found_index = SMSAL_INVALID_INDEX;
    l4csmsal_read_cnf_struct *l4c_read_cnf;

    if (read_req->index != SMSAL_INVALID_INDEX)
    {
        /* 
         *  This request is not the first READ (NEXT_INDEXING) request,
         *  thus 'index' indicates the location of next message.
         */
        found_index = read_req->index;
    }
    else
    {
        /* 
         *  This is the first request for NEXT_INDEXING mode read,
         *  find the first message which has the same 'status'
         */
        smsal_get_int_status((smsal_status_enum) read_req->status, &int_status);
        found_index = smsal_find_mb_entry_by_status(read_req->src_id, 0, int_status);
    }

    if (found_index != SMSAL_INVALID_INDEX)
    {
        smsal_get_pending_act_id(&id);
        (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_READ;
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_READ_NEXT;
        (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) read_req;
        hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

        read_req->index = found_index;  /* save the index */

        smsal_read_short_msg(id,
                             (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[found_index]))->storage_type,
                             (&(smsal_cntx_ptr->message_box[found_index]))->record_no);
    }
    else
    {
        /*
         * Can NOT find the message whose status is matched by
         * * user specified 
         */
        l4c_read_cnf = (l4csmsal_read_cnf_struct *)
                        construct_local_para(sizeof(l4csmsal_read_cnf_struct), TD_CTRL);

        l4c_read_cnf->result = L4C_OK;
        l4c_read_cnf->src_id = read_req->src_id;

        l4c_read_cnf->concat_info.ref = 0;
        l4c_read_cnf->concat_info.total_seg = 1;
        l4c_read_cnf->concat_info.seg = 1;

        l4c_read_cnf->src_port = 0;
        l4c_read_cnf->dest_port = 0;

        /* Inidcate there are no messages */
        l4c_read_cnf->index = SMSAL_INVALID_INDEX;
        l4c_read_cnf->next_index = SMSAL_INVALID_INDEX;
        l4c_read_cnf->storage_type = SMSAL_STORAGE_UNSPECIFIED;

        smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_READ_CNF,
                              (local_para_struct *) l4c_read_cnf,
                              NULL);

        kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_CNF, l4c_read_cnf->result, 0);
    }

}                                       /* end of smsal_read_next */


/* 
 * Main Read CNF/REJ Handlers 
 */
void smsal_read_cnf(kal_uint8         id,
                    kal_uint8         sub_act_code,
                    ilm_struct        *ilm_ptr,
                    kal_bool          is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 pdu_len;
    kal_uint8 *pdu_ptr;
    sim_read_cnf_struct *read_cnf;

    l4csmsal_read_req_struct *read_req;
    kal_uint8 scts[7];

    kal_mem_set(scts, 0xff, 7);

    if (is_from_sim == KAL_TRUE)
    {
        read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        pdu_ptr = read_cnf->data;
        pdu_len = read_cnf->length;
    }
    else
    {
        pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &pdu_len);

        if (pdu_len == SMSAL_SMS_ME_LEN)
        {
            kal_mem_cpy(scts, pdu_ptr + SMSAL_SMS_LEN, 7);
            pdu_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr, SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len););

            read_req = (l4csmsal_read_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

            smsal_read_error(read_req->src_id,  /* src id */
                             SMSAL_UNSPECIFIED_ERROR_CAUSE      /* error cause */
                            );
            smsal_free_pending_act(id);

            return;
        }
    }

    switch (sub_act_code)
    {
        case SMSAL_READ_INDEX:         /* the same for BOTH */
        case SMSAL_READ_NEXT:
            smsal_read_single_cnf(id, scts, pdu_ptr, pdu_len);
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

}                                       /* end of smsal_read_cnf */

void smsal_read_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_read_req_struct *read_req;

    read_req = (l4csmsal_read_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    if (read_req->src_id >= RMMI_SRC)
        error_cause = SMS_SIM_FAILURE;

    smsal_read_error(read_req->src_id,  /* src id */
                     (smsal_error_cause_enum) error_cause);       /* error cause */

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_read_rej */


/*
 * ---------------------------------------------------
 * *
 * *   Sub Read CNF/REJ Handlers 
 * *
 * * --------------------------------------------------- 
 */

void smsal_read_single_cnf(kal_uint8  old_id,
                           kal_uint8  *scts_ptr,
                           kal_uint8  *pdu_ptr,
                           kal_uint16 pdu_len)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_parameter_struct *smsal_para_ptr=(&(smsal_ptr_g->sms_parameter));
    kal_bool retval = KAL_FALSE;
    kal_bool status_change = KAL_FALSE;
    kal_uint8 *pdu_ptr1;
    kal_uint8 int_status;
    kal_uint16 pdu_len1;
    kal_uint8 ext_status;
    kal_uint8 original_status;
    l4csmsal_read_req_struct *read_req;
    l4csmsal_read_cnf_struct *l4c_read_cnf;
    smsal_mb_entry_struct *entry;
    peer_buff_struct *peer_buff_ptr = NULL;
    smsal_pdu_decode_struct sms_pdu;

    /* Make copies so that indirections are reduced */
    read_req = (l4csmsal_read_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;
    entry = (&(smsal_cntx_ptr->message_box[read_req->index]));

    /* Decode SMS PDU (SCA + TPDU) */
    retval = smsal_decode_sms_pdu(pdu_ptr + 1, (kal_uint8) (pdu_len - 1), &sms_pdu);

    if (retval == KAL_FALSE)
    {
        smsal_read_error(read_req->src_id,      /* src id */
                         SMSAL_UNSPECIFIED_ERROR_CAUSE  /* error cause */
            );
        smsal_free_pending_act(old_id);
        smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
        return;
    }

    l4c_read_cnf = (l4csmsal_read_cnf_struct *)
                    construct_local_para(sizeof(l4csmsal_read_cnf_struct), TD_CTRL);

    kal_mem_cpy(l4c_read_cnf->scts, scts_ptr, 7);

    if (smsal_get_msg_format(read_req->src_id) == SMSAL_PDU_MODE)
    {
        /*
         * ----------------
         * *    PDU Mode 
         * * ---------------- 
         */
        peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(sms_pdu.pdu_len, 0, 0, TD_CTRL);

        pdu_ptr1 = (kal_uint8 *) get_peer_buff_pdu(peer_buff_ptr, &pdu_len1);
        kal_mem_cpy(pdu_ptr1, pdu_ptr + 1,      /* skip 'status' byte */
                    sms_pdu.pdu_len);

        /* message length: TPDU in octets (SCA is not couted in) */
        l4c_read_cnf->message_len = sms_pdu.tpdu_len;
    }

    if (smsal_get_msg_format(read_req->src_id) == SMSAL_TEXT_MODE)
    {
        /*
         * ----------------
         * *    TEXT Mode 
         * * ---------------- 
         */

        l4c_read_cnf->rmi_use_hex = smsal_check_rmi_use_hex(read_req->src_id, &sms_pdu);

        peer_buff_ptr = smsal_get_msg_content(l4c_read_cnf->rmi_use_hex,
                                              &sms_pdu,
                                              &l4c_read_cnf->message_len,
                                              &l4c_read_cnf->msg_header);

        /* ASSERT (peer_buff_ptr != NULL); */
    }

    /*
     * Update message status, if original status is 'received unread',
     * * change to 'received read' 
     */
    smsal_get_ext_status(entry->status, &original_status);

    /* AT only update msg status when set_read_status == KAL_TRUE. */
    /* MMI always update msg status.                               */
    if (((read_req->src_id >= RMMI_SRC) && (smsal_para_ptr->rmi.set_read_status == KAL_TRUE)) ||
        ((read_req->src_id == LMMI_SRC || read_req->src_id == LMMI_SRC2) && (read_req->change_status == KAL_TRUE)))
    {
        if (entry->status == SMSAL_STATUS_UNREAD)
        {
            status_change = KAL_TRUE;
            entry->status = SMSAL_STATUS_READ;
            *pdu_ptr = SMSAL_READ_MSG;
        }
    }

    smsal_get_ext_status(entry->status, &ext_status);

    l4c_read_cnf->result = L4C_OK;
    l4c_read_cnf->src_id = read_req->src_id;
    l4c_read_cnf->mti = entry->mti;
    l4c_read_cnf->storage_type = (&(smsal_cntx_ptr->message_box[read_req->index]))->storage_type;
    l4c_read_cnf->new_status = ext_status;
    l4c_read_cnf->concat_info = sms_pdu.tpdu.concat_info;

    if (sms_pdu.tpdu.port.src_port == SMSAL_INVALID_PORT_NUM)
        l4c_read_cnf->src_port = 0;
    else
        l4c_read_cnf->src_port = (kal_uint16) sms_pdu.tpdu.port.src_port;

    if (sms_pdu.tpdu.port.dest_port == SMSAL_INVALID_PORT_NUM)
        l4c_read_cnf->dest_port = 0;
    else
        l4c_read_cnf->dest_port = (kal_uint16) sms_pdu.tpdu.port.dest_port;

    if (read_req->src_id >= RMMI_SRC)
        l4c_read_cnf->status = original_status;
    else
        l4c_read_cnf->status = ext_status;

    /* Find the next entry which matched the status */
    if (read_req->req_type == NEXT_INDEXING)
    {
        smsal_get_int_status((smsal_status_enum) read_req->status, &int_status);
        l4c_read_cnf->next_index =
        smsal_find_mb_entry_by_status(read_req->src_id,
        (kal_uint16) (read_req->index + 1),
        int_status);
        l4c_read_cnf->index = read_req->index;
    }
    else
    {
        l4c_read_cnf->index = read_req->index;

        /*
         * In EXACT_INDEXING read mode, 
         * * the values of next_index shall be ignored 
         */
        l4c_read_cnf->next_index = SMSAL_INVALID_INDEX;
    }

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_READ_CNF,
                          (local_para_struct *) l4c_read_cnf,
                          peer_buff_ptr);

    /* Free resources */
    smsal_free_pending_act(old_id);
    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

    /* 
     * Update the status from "unread" to read, 
     * do this after sending confrim to mmi.
     */
    if (status_change == KAL_TRUE)
    {
        smsal_write_short_msg(SMSAL_MAX_PENDING_ACT,    /* ignore storage cnf */
                              (smsal_storage_enum) entry->storage_type,
                              entry->record_no,
                              pdu_ptr,
                              l4c_read_cnf->scts,
                              (kal_uint8) pdu_len);
    }

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_READ_CNF, l4c_read_cnf->result, 0);

}                                       /* end of smsal_read_single_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_write_single
* DESCRIPTION
*   This function writes a message to the SMS storage.
*
* PARAMETERS
*  a  IN       id, index of pending action struct
*  b  IN       write_req, contains write request
*  c  IN       msg_format
*  d  IN       msg_ptr, depend on msg_format:
*              TEXT mode: cast to smsal_send_msg_req_hdr_struct *
*              PDU  mode: cast to kal_uint8*, which contains message
*  e  IN       length of data which pointed by msg_ptr
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_write_single(kal_uint8 id, l4csmsal_write_req_struct *write_req, void *msg_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool ret_val;
    kal_uint16 entry_id;
    kal_uint8 data[SMSAL_SMS_LEN];
    smsal_storage_enum storage_type = SMSAL_SM;
    smsal_pdu_decode_struct sms_pdu;
    smsal_tpdu_decode_struct *tpdu_ptr;
    smsal_write_aux_info_struct *aux_info;
    smsal_msg_format_enum msg_format;
    smsal_send_msg_req_hdr_struct *msg_send_req_ptr;
    smsal_receive_msg_hdr_struct *msg_receive_ptr;
    kal_uint16 sim_num = 0;

#if defined (__SMS_ME_STORAGE__)
    kal_uint16 me_num = 0;
    kal_uint8 tp_udhi = 0;
    smsal_concat_struct concat_info;
#endif

    /* pending action struct shall be valid */
    ASSERT(id < SMSAL_MAX_PENDING_ACT);

    /*
     * act_code:     write
     * * sub_act_code: write_single 
     */
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_WRITE_SINGLE;

    aux_info = (smsal_write_aux_info_struct *)
                get_ctrl_buffer(sizeof(smsal_write_aux_info_struct));
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)aux_info;

    tpdu_ptr = &sms_pdu.tpdu;

    msg_format = smsal_get_msg_format(write_req->src_id);
    msg_send_req_ptr = &(write_req->hdr.mo_sms_hdr);
    msg_receive_ptr  = &(write_req->hdr.mt_sms_hdr);


    /* to replace the existent entry in storage */
    if (write_req->replace_index != SMSAL_INVALID_INDEX)
    {
        entry_id = write_req->replace_index;

        ret_val = smsal_find_mb_storage_type_by_index(entry_id, &storage_type);
        if (ret_val == KAL_FALSE)
        {
            smsal_write_cnf(L4C_ERROR,
                            write_req->src_id,
                            INVALID_MEM_INDEX,
                            SMSAL_INVALID_INDEX,
                            0);

            smsal_free_pending_act(id);
            return;
        }
    }
    else
    {

        /* 
         * check whether storage is available 
         */
    #if defined (__SMS_ME_STORAGE__)


        if( (write_req->status == SMSAL_REC_READ) ||
            (write_req->status == SMSAL_REC_UNREAD) )
        {
            tp_udhi = msg_receive_ptr->tp_udhi;
        }
        else
        {
            tp_udhi = msg_send_req_ptr->udhi;
        }


        /*
         * if message is save by MMI and is a concatenated message 
         * * we will try to save the whole sms to the same storage type 
         */
        if ((write_req->src_id == LMMI_SRC || write_req->src_id == LMMI_SRC2) &&
            (msg_format == SMSAL_TEXT_MODE) &&
            (tp_udhi == KAL_TRUE) &&
            smsal_get_concat_info((kal_uint8 *) msg_ptr, &concat_info) == KAL_TRUE)
        {
            kal_uint8 i;
            kal_uint16 hash = 0;

            if( (write_req->status == SMSAL_REC_READ) ||
                (write_req->status == SMSAL_REC_UNREAD) )
            {
                for (i = 0; i < msg_receive_ptr->oa.addr_length; i++)
                    hash += (msg_receive_ptr->oa.addr_bcd[i]);
            }
            else
            {
                for (i = 0; i < msg_send_req_ptr->da.addr_length; i++)
                    hash += (msg_send_req_ptr->da.addr_bcd[i]);
            }

            ret_val = smsal_where_to_save_concat_msg(&concat_info, hash,
                                                     smsal_cntx_ptr->sms_parameter.rmi.prefer_mem2,
                                                     &storage_type);

            if (ret_val == KAL_TRUE)
            {
                ret_val = smsal_is_storage_available(storage_type, 1, &sim_num, &me_num);

                /*
                 * we need to ensure that whenever there is any room we can't reject
                 * * the save operation unless the prefer memory is ONLY mode, ie, SIM/ME only
                 * *
                 * * at this point, if ret_val is FALSE, 
                 * * we need to use the prefer memory to save!!
                 */
            }
        }
        else
        {
            /* just follow the prefer memory to save */
            ret_val = KAL_FALSE;
        }

        if (ret_val == KAL_FALSE)
        {
            ret_val =
            smsal_is_storage_available((smsal_storage_enum) smsal_cntx_ptr->sms_parameter.rmi.prefer_mem2, /* preferred memory */
                                        1, &sim_num, &me_num);
        }

    #else
        ret_val = smsal_is_storage_available(1);
    #endif /* __SMS_ME_STORAGE__ */

        if (ret_val == KAL_FALSE)
        {
            smsal_write_cnf(L4C_ERROR, write_req->src_id, MEM_FULL, SMSAL_INVALID_INDEX, 0);

            smsal_free_pending_act(id);
            return;
        }

    #ifdef __SMS_ME_STORAGE__
        if (sim_num >= 1)
            storage_type = SMSAL_SM;
        else
            storage_type = SMSAL_ME;
    #endif

        /*
         * Find a free message box entry which allocated for the
         * * storage which specified by 'storage_type' 
         */
        ret_val = smsal_get_free_mb_entry(storage_type, &entry_id);

        ASSERT(ret_val == KAL_TRUE);

    }

    /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
    /* only apply for ME */

    /* [MAUI_00817141]
    if ((write_req->status == SMSAL_STO_DRAFT) &&
        (storage_type != SMSAL_ME))
    {
        smsal_write_cnf(L4C_ERROR,
                        write_req->src_id,
                        INVALID_MEM_INDEX,
                        SMSAL_INVALID_INDEX,
                        0);

        smsal_free_pending_act(id);
        return;
    }
     */

    /* [MAUI_00817141]
     * allow SMSAL_STO_DRAFT type in SIM */
    if ((write_req->status == SMSAL_STO_DRAFT) &&
        (storage_type != SMSAL_ME))
    {
        write_req->status = SMSAL_STO_UNSENT;
    }


    /* Save 'index' */
    aux_info->index = entry_id;
    aux_info->storage_type = storage_type;

    kal_mem_set(data, 0xff, SMSAL_SMS_LEN);     /* reset */

    if (write_req->status == SMSAL_STO_UNSENT)
        data[0] = SMSAL_UNSENT_MSG;
    else if (write_req->status == SMSAL_STO_SENT)
        data[0] = SMSAL_SENT_NO_SRR;
    else if (write_req->status == SMSAL_REC_UNREAD)
        data[0] = SMSAL_UNREAD_MSG;
    else if (write_req->status == SMSAL_REC_READ)
        data[0] = SMSAL_READ_MSG;
    else if (write_req->status == SMSAL_STO_DRAFT)
        data[0] = SMSAL_DRAFT_MSG; /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
    else
        data[0] = SMSAL_UNSENT_MSG;

    if (msg_format == SMSAL_TEXT_MODE)
    {
        /*
         * --------------
         * *    TEXT Mode 
         * * -------------- 
         */
        if ((data[0] == SMSAL_UNSENT_MSG) ||
            (data[0] == SMSAL_SENT_NO_SRR) ||
            (data[0] == SMSAL_DRAFT_MSG)) /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        {
            smsal_construct_msg_to_storage(data,
                                           write_req,
                                           write_req->message_len,
                                           (kal_uint8 *) msg_ptr);
        }
        else if((data[0] == SMSAL_UNREAD_MSG) ||
                (data[0] == SMSAL_READ_MSG) )
        {
            smsal_construct_mt_msg_to_storage(data,
                                              msg_receive_ptr,
                                              write_req->message_len,
                                              (kal_uint8 *) msg_ptr);
        }
        else
        {
            ret_val = KAL_FALSE;
        }

    }
    else
    {
        /*
         * --------------------------------
         * *   PDU Mode            
         * * -------------------------------- 
         */
        if ((data[0] == SMSAL_UNSENT_MSG) ||
            (data[0] == SMSAL_SENT_NO_SRR) ||
            (data[0] == SMSAL_DRAFT_MSG)) /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
        {
            /* reset for SMS-SUBMIT */
            tpdu_ptr->data.submit_tpdu.user_data_size = 0;
            tpdu_ptr->mti = SMSAL_MTI_SUBMIT;
        }
        else
        {
            /* reset for SMS-DELIVER */
            tpdu_ptr->data.deliver_tpdu.user_data_size = 0;
            tpdu_ptr->mti = SMSAL_MTI_DELIVER;
        }

        kal_mem_cpy(data + 1, (kal_uint8 *) msg_ptr, write_req->message_len);
    }

    if (ret_val == KAL_TRUE)
    {
        ret_val = smsal_decode_sms_pdu(&data[1], SMSAL_SMS_LEN - 1, &sms_pdu);
        if (ret_val == KAL_FALSE)
            smsal_free_tpdu_decode_struct(tpdu_ptr);
    }

    if (ret_val == KAL_TRUE)
    {
        smsal_write_short_msg(id,
                              storage_type,
                              (&(smsal_cntx_ptr->message_box[entry_id]))->record_no,
                              data,
                              write_req->scts,
                              SMSAL_SMS_LEN);
    }
    else
    {
        smsal_write_cnf(L4C_ERROR,
                        write_req->src_id,
                        SMSAL_UNSPECIFIED_ERROR_CAUSE,
                        SMSAL_INVALID_INDEX,
                        0);

        smsal_free_pending_act(id);
        return;
    }

    smsal_update_msgbox_from_tpdu((&(smsal_cntx_ptr->message_box[entry_id])), &(sms_pdu.tpdu));

    /* free the unpacked structure for TPDU */
    smsal_free_tpdu_decode_struct(tpdu_ptr);

    /* Mark the state of the message box's entry to PENDING */
    (&(smsal_cntx_ptr->message_box[entry_id]))->state |= SMSAL_MB_ENTRY_PENDING;

    if ((&(smsal_cntx_ptr->message_box[entry_id]))->state & SMSAL_MB_ENTRY_FREE)
    {
        INCR_USED_MSG_NUM(storage_type);
    }   

}                                       /* end of smsal_write_single */


/*
 * Main WRITE CNF/REJ Handlers
 */
void smsal_write_confirm(kal_uint8         id,
                         kal_uint8         sub_act_code,
                         local_para_struct *local_para_ptr
                        )
{
    switch (sub_act_code)
    {
        case SMSAL_WRITE_SINGLE:
            smsal_write_single_cnf(id, local_para_ptr);
            /* 
             * Wrote message(s) successfully. Check whether memory is full,
             * If yes, send Mem. Full Indication to MMI.
             */
            smsal_check_mem_full_status();
            break;

#ifdef _TST_SMSAL_
        case SMSAL_TST_WRITE:
            smsal_tst_write_storage(id, local_para_ptr);
            break;

    #if defined (__DEBUG_WRITE_SAMPLE_TO_NVM__)
        case SMSAL_TST_SMS_SAMPLE_WRITE:
            smsal_tst_write_nvm_sample_cnf(id);
            break;
        case SMSAL_TST_SMS_SINGLE_WRITE:
            smsal_tst_write_nvm_single_cnf(id);
            break;
        case SMSAL_TST_SMS_EMS5_WRITE:
            smsal_tst_write_nvm_ems5_cnf(id);
            break;
    #endif //end (__DEBUG_WRITE_SAMPLE_TO_NVM__) in _TST_SMSAL_

#endif //end _TST_SMSAL_

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;

    }                                   /* switch */

}                                       /* end of smsal_write_confirm */

void smsal_write_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_write_req_struct *write_req;
    smsal_write_aux_info_struct *aux_info;

    write_req = (l4csmsal_write_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    if (write_req->src_id >= RMMI_SRC)
    {
        error_cause = SMS_SIM_FAILURE;
    }

    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
 
#ifdef __SMS_ME_STORAGE__
    DECR_USED_MSG_NUM(aux_info->storage_type);
#else
    DECR_USED_MSG_NUM(SMSAL_SM);
#endif

    smsal_write_cnf(L4C_ERROR,
                    write_req->src_id,       /* src id */
                    (smsal_error_cause_enum) error_cause,       /* error cause */
                    SMSAL_INVALID_INDEX, 0);

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_write_rej */


/* 
 * Sub WRITE CNF/REJ Handlers
 */
void smsal_write_single_cnf(kal_uint8 old_id, local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 entry_id;
    kal_uint8 int_status;
    l4csmsal_write_req_struct *write_req;
    smsal_mb_entry_struct *entry;

    write_req = (l4csmsal_write_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    entry_id = ((smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info)->index;

    entry = (&(smsal_cntx_ptr->message_box[entry_id]));

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[entry_id]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    /*
     * Update message box: state, status
     */
    if (smsal_get_int_status((smsal_status_enum) write_req->status, &int_status) == KAL_TRUE)
    {
        entry->status = int_status;
    }
    else
    {
        entry->status = SMSAL_STATUS_UNSENT;
    }

    if (entry->state & SMSAL_MB_ENTRY_FREE)
    {
        INCR_MSGBOX_NUM(entry->status, entry->storage_type);
    }
    
    entry->state = SMSAL_MB_ENTRY_VALID;

    smsal_write_cnf(L4C_OK,
                    write_req->src_id,
                    (smsal_error_cause_enum)0, /* ignore error cause */
                    entry_id,
                    write_req->status 
                    );                   



    smsal_free_pending_act(old_id);

}                                       /* end of smsal_write_single_cnf */


/*****************************************************************************
* FUNCTION
*  smsal_delete_index
* DESCRIPTION
*   This function deletes message(s) by specified the index of message.
*
* PARAMETERS
*  a  IN       del_req, contains delete request
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_delete_index(l4csmsal_delete_req_struct *del_req)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 id;
    kal_uint16 index;
    l4csmsal_delete_cnf_struct *del_cnf;

    index = del_req->index;

    smsal_get_pending_act_id(&id);
    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_DELETE;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_DELETE_INDEX;
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) del_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    /* get del_cnf first. for fill msg_bitmap. */
    del_cnf = (l4csmsal_delete_cnf_struct *)
               construct_local_para(sizeof(l4csmsal_delete_cnf_struct), TD_CTRL);

    kal_mem_set(del_cnf->msg_bitmap, 0x0, 480);
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)del_cnf;

    smsal_reset_short_msg(id,
                          (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                          (&(smsal_cntx_ptr->message_box[index]))->record_no);

    /* Mark the state of the message box's entry to PENDING */
    (&(smsal_cntx_ptr->message_box[index]))->state |= SMSAL_MB_ENTRY_PENDING;

}                                       /* end of smsal_delete_index */


/*****************************************************************************
* FUNCTION
*  smsal_delete_flag
* DESCRIPTION
*   This function deletes message(s) by specified the delete flag,
*   which conformed with +CMGD in TS 127.005.
*
* PARAMETERS
*  a  IN       del_req, contains delete request
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_delete_flag(l4csmsal_delete_req_struct *del_req)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool cont = KAL_TRUE;
    kal_uint8 id;
    kal_uint16 index = 0;               /* SCR:669 del from beginning of mbox */
    kal_uint16 first_index = SMSAL_INVALID_INDEX;
    l4csmsal_delete_cnf_struct *del_cnf;

    smsal_get_pending_act_id(&id);

    (&(smsal_cntx_ptr->pending_act[id]))->act_code = SMSAL_DELETE;
    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_DELETE_FLAG;

    /* Mark all entries meet by del flag to DEL_FLAG_PENDING */
    do
    {
        if (del_req->del_flag == SMSAL_DEL_BITMAP)
        {
            index = smsal_bitmap_get_next_index(index, del_req->msg_bitmap);
        }
        else
        {
            index = smsal_find_mb_entry_by_del_flag(del_req->src_id, index, del_req->del_flag);
        }

        if (index != SMSAL_INVALID_INDEX)
        {
            if (first_index == SMSAL_INVALID_INDEX)
                first_index = index;

            (&(smsal_cntx_ptr->message_box[index]))->state |= SMSAL_MB_ENTRY_DEL_FLAG_PENDING;

            /* start from next index in following round. */
            index++;
        }
        else
        {
            cont = KAL_FALSE;
        }

    }
    while (cont == KAL_TRUE);

    if (first_index == SMSAL_INVALID_INDEX)
    {
        /* no corresponding messages found, send confirm to L4C */
        smsal_del_cnf(L4C_OK,
                      del_req,
                      NULL,
                      (smsal_error_cause_enum) 0 /* ignore error cause */
                     );

        smsal_free_pending_act(id);

        return;
    }

    del_req->index = first_index;       /* save the index */
    (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr = (local_para_struct *) del_req;
    hold_local_para((&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr);

    /* get del_cnf first. for fill msg_bitmap. */
    del_cnf = (l4csmsal_delete_cnf_struct *)
               construct_local_para(sizeof(l4csmsal_delete_cnf_struct), TD_CTRL);

    kal_mem_set(del_cnf->msg_bitmap, 0x0, 480);
    (&(smsal_cntx_ptr->pending_act[id]))->aux_info = (void *)del_cnf;

    smsal_reset_short_msg(id,
                          (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[first_index]))->storage_type,
                          (&(smsal_cntx_ptr->message_box[first_index]))->record_no);

}                                       /* end of smsal_delete_flag */


/* 
 * Main Delete CNF/REJ Handlers 
 */
void smsal_delete_cnf(kal_uint8         id,
                      kal_uint8         sub_act_code,
                      local_para_struct *local_para_ptr
                      )
{
    switch (sub_act_code)
    {
        case SMSAL_DELETE_INDEX:
            smsal_delete_index_cnf(id, local_para_ptr);
            break;

        case SMSAL_DELETE_FLAG:
            smsal_delete_flag_cnf(id, local_para_ptr);
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */
}                                       /* end of smsal_delete_cnf */


void smsal_delete_rej(kal_uint8         id,
                      kal_uint8         sub_act_code,
                      kal_uint16        cause
                     )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    if (((l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr)->src_id >= RMMI_SRC)
    {
        cause = SMS_SIM_FAILURE;
    }

    switch (sub_act_code)
    {
        case SMSAL_DELETE_INDEX:
            smsal_delete_index_rej(id, cause);
            break;

        case SMSAL_DELETE_FLAG:
            smsal_delete_flag_rej(id, cause);
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

    smsal_check_mem_full_status();

}                                       /* end of smsal_delete_rej */


/*
 * ---------------------------------------------------
 * *
 * *   Sub Delete CNF/REJ Handlers 
 * *
 * * --------------------------------------------------- 
 */
void smsal_delete_index_cnf(kal_uint8 old_id, local_para_struct * local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_delete_req_struct *del_req;
    l4csmsal_delete_cnf_struct *del_cnf;

    del_req = (l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;
    del_cnf = (l4csmsal_delete_cnf_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /* Mark the state of the message box's entry to original values */
    (&(smsal_cntx_ptr->message_box[del_req->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    /*
     * update message box,
     * * mark original entry free 
     */
    smsal_reset_msg_box_entry(del_req->index, SMSAL_MB_FREE);

    smsal_bitmap_set_index(del_req->index, del_cnf->msg_bitmap);

    smsal_del_cnf(L4C_OK, del_req, del_cnf, (smsal_error_cause_enum) 0  /* ignore error cause */
        );

    (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info = NULL;

    smsal_free_pending_act(old_id);

    /* MAUI_00729657 [SMSAL][Revise] revise full indication */
    /* 
     * Deleted message(s) successfully, send Mem. Available Indication
     * to MMI if the memory was full before
     */

    /* MAUI_00238748 */
    /* [SMSAL][Revise] shall send SMS_MEM_AVL_NOTIF out for ME only feature */
    /* revise only check memory full ind */
    if (smsal_check_mem_full_status() == KAL_FALSE)
    {
        if ((IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
            (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE) &&
            (IS_FLAG_SET(NORMAL_SERVICE_FLAG) == KAL_TRUE))
        {
            /* Send Memory Available Notification */
            smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
            smsal_send_mem_avl_notif_req();
        }
    }
}                                       /* end of smsal_delete_index_cnf */

void smsal_delete_index_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_delete_req_struct *del_req;
    l4csmsal_delete_cnf_struct *del_cnf;

    del_req = (l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;
    del_cnf = (l4csmsal_delete_cnf_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /* Mark the state of the message box's entry to original values */
    (&(smsal_cntx_ptr->message_box[del_req->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    smsal_del_cnf(L4C_ERROR, del_req, del_cnf, (smsal_error_cause_enum) error_cause);

    (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info = NULL;

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_delete_index_rej */

void smsal_delete_flag_cnf(kal_uint8 old_id, local_para_struct *local_para_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    l4csmsal_delete_req_struct *del_req;
    l4csmsal_delete_cnf_struct *del_cnf;

    del_req = (l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;
    del_cnf = (l4csmsal_delete_cnf_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    (&(smsal_cntx_ptr->message_box[del_req->index]))->state &= (~SMSAL_MB_ENTRY_VALID);
    (&(smsal_cntx_ptr->message_box[del_req->index]))->state |= SMSAL_MB_ENTRY_FREE;

    /* update message box, mark original entry free */
    /* smsal_reset_msg_box_entry(del_req->index, SMSAL_MB_FREE); */

    smsal_bitmap_set_index(del_req->index, del_cnf->msg_bitmap);

    /* Find the next message which is going to be deleted */
    for (index = del_req->index + 1; index < SMSAL_MAX_MSG_NUM; index++)
    {
        if (((&(smsal_cntx_ptr->message_box[index]))->state & SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
            == SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
            break;
    }

    if (index >= SMSAL_MAX_MSG_NUM)
    {
        /*
         * all messages (meet the del flag) had been deleted,
         * * send confirm to L4C 
         */
        smsal_del_cnf(L4C_OK,
                      del_req,
                      del_cnf,
                      (smsal_error_cause_enum) 0      /* ignore error cause */
            );

        for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
        {
            if (((&(smsal_cntx_ptr->message_box[index]))->state & (SMSAL_MB_ENTRY_DEL_FLAG_PENDING))
                == SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
            {
                (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_DEL_FLAG_PENDING);
                if ((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_FREE)
                    smsal_reset_msg_box_entry(index, SMSAL_MB_FREE);
            }
        }

        (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info = NULL;
        smsal_free_pending_act(old_id);

        /* MAUI_00729657 [SMSAL][Revise] revise full indication */
        /* 
         * Deleted message(s) successfully, send Mem. Available Indication
         * to MMI if the memory was full before
         */

        /* MAUI_00238748 */
        /* [SMSAL][Revise] shall send SMS_MEM_AVL_NOTIF out for ME only feature */
        /* revise only check memory full ind */
        if (smsal_check_mem_full_status() == KAL_FALSE)
        {
            if ((IS_FLAG_SET(MEM_EXD_FLAG) == KAL_TRUE) &&
                (smsal_cntx_ptr->smma.pending_smma == KAL_FALSE) &&
                (IS_FLAG_SET(NORMAL_SERVICE_FLAG) == KAL_TRUE))
            {
                /* Send Memory Available Notification */
                smsal_cntx_ptr->smma.pending_smma = KAL_TRUE;
                smsal_send_mem_avl_notif_req();
            }
        }

        return;
    }

    /* save the index */
    del_req->index = index;

    smsal_reset_short_msg(old_id,
                          (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[index]))->storage_type,
                          (&(smsal_cntx_ptr->message_box[index]))->record_no);

}                                       /* end of smsal_delete_flag_cnf */

void smsal_delete_flag_rej(kal_uint8 old_id, kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    l4csmsal_delete_req_struct *del_req;

    del_req = (l4csmsal_delete_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    /*
     * Make the state of MB's entries which marked to PENDING previously
     * * to original value 
     */
    for (index = 0; index < SMSAL_MAX_MSG_NUM; index++)
    {
        if (((&(smsal_cntx_ptr->message_box[index]))->state & SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
            == SMSAL_MB_ENTRY_DEL_FLAG_PENDING)
        {
            (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_DEL_FLAG_PENDING);
            if ((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_FREE)
                smsal_reset_msg_box_entry(index, SMSAL_MB_FREE);
        }
    }

    smsal_del_cnf(L4C_ERROR,
                  del_req,
                  (l4csmsal_delete_cnf_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info,
                  (smsal_error_cause_enum) error_cause);      /* error cause */

    (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info = NULL;

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_delete_flag_rej */


#ifdef __SMSAL_DISCARD_PATENT__
/* MAUI_00733041 [SMSAL][Revise] discard incoming message if there exists discard patent in OA */
/*
 * ---------------------------------------------------
 * *
 * *   Sub Delete CNF/REJ Handlers 
 * *
 * * --------------------------------------------------- 
 */
void smsal_delete_by_patent_cnf(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    smsal_mt_msg_aux_info_struct *aux_info;

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    index = aux_info->index;

    /* Mark the state of the message box's entry to original values */
    (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
    
    /*
     * update message box,
     * * mark original entry free 
     */
    smsal_reset_msg_box_entry(index, SMSAL_MB_FREE);

    smsal_free_pending_act(old_id);

}                                       /* end of smsal_delete_index_cnf */

void smsal_delete_by_patent_rej(kal_uint8 old_id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    smsal_mt_msg_aux_info_struct *aux_info;

    aux_info = (smsal_mt_msg_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    index = aux_info->index;

    /* Mark the state of the message box's entry to original values */
    (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    smsal_free_pending_act(old_id);

}   
#endif


void smsal_copy_action_cnf(kal_uint8         id,
                           kal_uint8         sub_act_code,
                           ilm_struct        *ilm_ptr,
                           kal_bool          is_from_sim)
{
    switch (sub_act_code)
    {
        case SMSAL_READ_INDEX:
            smsal_copy_read_msg_cnf(id, ilm_ptr, is_from_sim);
            break;

        case SMSAL_WRITE_SINGLE:
            smsal_copy_write_msg_cnf(id);
            break;

        case SMSAL_DELETE_INDEX:
            smsal_copy_delete_msg_cnf(id);
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

}

void smsal_copy_action_rej(kal_uint8  id, 
                           kal_uint8  sub_act_code,
                           kal_uint16 error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_write_aux_info_struct *aux_info;
    l4csmsal_copy_msg_req_struct *copy_req;

    copy_req = (l4csmsal_copy_msg_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    switch (sub_act_code)
    {
            /* New record is not writen. (the same with write fail) */
        case SMSAL_READ_INDEX:
        case SMSAL_WRITE_SINGLE:

            /* clear the pending of dst entry */
            (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
    #ifdef __SMS_ME_STORAGE__
            DECR_USED_MSG_NUM(aux_info->storage_type);
    #else
            DECR_USED_MSG_NUM(SMSAL_SM);
    #endif
            break;

            /* If action is move, new record is writen, but deleting is not finish. */
            /* (the same with delete msg confirm */
        case SMSAL_DELETE_INDEX:

            /* Delete fail. Mark the state of the source's entry to original values */
            (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

            /* delete the new entry (dst) message. */
            smsal_reset_short_msg(SMSAL_MAX_PENDING_ACT,
                                  (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[aux_info->index]))->storage_type,
                                  (&(smsal_cntx_ptr->message_box[aux_info->index]))->record_no);

            smsal_reset_msg_box_entry(aux_info->index, SMSAL_MB_FREE);
            break;

        default:
            break;
    }                                   /* switch */

    smsal_send_copy_cnf(L4C_ERROR, MEM_FAILURE, copy_req, SMSAL_INVALID_INDEX);
    smsal_free_pending_act(id);

    smsal_check_mem_full_status();

}                                       /* end of smsal_read_rej */


void smsal_copy_read_msg_cnf(kal_uint8     id,
                             ilm_struct    *ilm_ptr,
                             kal_bool      is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sim_read_cnf_struct *sim_cnf;
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    smsal_pdu_decode_struct sms_pdu;
    smsal_write_aux_info_struct *aux_info;
    l4csmsal_copy_msg_req_struct *copy_req;
    smsal_mb_entry_struct *entry;
    kal_uint8 offset;
    kal_uint8 scts[7];

    kal_mem_set(scts, 0xff, 7);

    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
    copy_req = (l4csmsal_copy_msg_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

    /*
     * because the data read from SIM is carried in local_para, but
     * * is carried in peer buffer by NVRAM, thus transform to 
     * * peer buffer in both ways 
     */
    if (is_from_sim == KAL_TRUE)
    {
        /* Short message from SIM */
        sim_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;

        peer_ptr = (peer_buff_struct *) construct_peer_buff(sim_cnf->length, 0, 0, TD_CTRL);

        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);
        kal_mem_cpy(pdu_ptr, sim_cnf->data, sim_cnf->length);

        (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = peer_ptr;
    }
    else
    {
        /* Short message from NVRAM */
        (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = ilm_ptr->peer_buff_ptr;

        pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_len);

        if (pdu_len == SMSAL_SMS_ME_LEN)
        {
            kal_mem_cpy(scts, pdu_ptr + SMSAL_SMS_LEN, 7);
            pdu_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr,
                                     SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len);)
            smsal_free_pending_act(id);
            return;
        }

        hold_peer_buff(ilm_ptr->peer_buff_ptr);
    }

    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_WRITE_SINGLE;

    pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_len);
    entry = (&(smsal_cntx_ptr->message_box[aux_info->index]));

    // MAUI_01355151 ReplacementType and Class2 SMS should be stored in SIM
    // and make sure there is only one specific replace type record
    // modify MT-SMS PID, if the PID is replace type
    if( copy_req->action == SMSAL_COPY_MSG )
    {
        if( (pdu_ptr[0] & 0x07) == SMSAL_READ_MSG || (pdu_ptr[0] & 0x07) == SMSAL_UNREAD_MSG )
        {
            offset = (pdu_ptr[1]+2);  // TP-MessageTypeIndicator
            if( (pdu_ptr[offset] & 0x03) == 0x00 )
            {
                offset += (pdu_ptr[offset+1]+1)/2 + 3; // PID
                if( offset < pdu_len )
                {
                    if( (0x41 <= pdu_ptr[offset] && pdu_ptr[offset] <= 0x47) || 
                        pdu_ptr[offset] == 0x5f )
                    {
                        pdu_ptr[offset] = 0x00;
                    }
                }
            }
        }
    }

    smsal_write_short_msg(id,
                          (smsal_storage_enum)entry->storage_type,
                          entry->record_no,
                          pdu_ptr,
                          scts,
                          SMSAL_SMS_LEN);

    switch (pdu_ptr[0] & 0x07)
    {
        case SMSAL_UNSENT_MSG:         /* MO, unsent */
            entry->status = SMSAL_STATUS_UNSENT;

            /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
            /* draft message */
            if ((pdu_ptr[0] & SMSAL_DRAFT_MSG) == SMSAL_DRAFT_MSG)
                entry->status |= SMSAL_STATUS_DRAFT;
            break;

        case SMSAL_SENT_NO_SRR:        /* MO, sent */
            entry->status = SMSAL_STATUS_SENT;

            /* status report is requested, but not (yet) received */
            if ((pdu_ptr[0] & SMSAL_SENT_SRR_NOT_RECV) == SMSAL_SENT_SRR_NOT_RECV)
                entry->status |= SMSAL_STATUS_SRR_NOT_RECV;
            break;

        case SMSAL_READ_MSG:           /* MT, read */
            entry->status = SMSAL_STATUS_READ;
            break;

        case SMSAL_UNREAD_MSG:         /* MT, unread */
            entry->status = SMSAL_STATUS_UNREAD;
            break;

        default:
            break;
    }                                   /* switch */

    smsal_decode_sms_pdu((pdu_ptr + 1), (kal_uint8) (pdu_len - 1), &sms_pdu);
    smsal_update_msgbox_from_tpdu(entry, &(sms_pdu.tpdu));

    /* free the unpacked structure for TPDU */
    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

}

void smsal_copy_write_msg_cnf(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    l4csmsal_copy_msg_req_struct *copy_req;
    smsal_mb_entry_struct *entry;

    copy_req = (l4csmsal_copy_msg_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    index = ((smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->index;

    entry = (&(smsal_cntx_ptr->message_box[index]));

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    /* Update message box: state, status */
    entry->state = SMSAL_MB_ENTRY_VALID;
    INCR_MSGBOX_NUM(entry->status, entry->storage_type);

    if (copy_req->action == SMSAL_MOVE_MSG)
    {
        (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_DELETE_INDEX;

        smsal_reset_short_msg(id,
                              (smsal_storage_enum) (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->storage_type,
                              (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->record_no);

        /* Mark the state of the message box's entry to PENDING */
        (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->state |= SMSAL_MB_ENTRY_PENDING;
    }
    else
    {
        smsal_send_copy_cnf(L4C_OK, (smsal_error_cause_enum) 0, copy_req, index);

        smsal_free_pending_act(id);
        smsal_check_mem_full_status();
    }

}

void smsal_copy_delete_msg_cnf(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    l4csmsal_copy_msg_req_struct *copy_req;

    copy_req = (l4csmsal_copy_msg_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    index = ((smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->index;

    /* update message box, mark original entry free */
    (&(smsal_cntx_ptr->message_box[copy_req->src_index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
    smsal_reset_msg_box_entry(copy_req->src_index, SMSAL_MB_FREE);

    smsal_send_copy_cnf(L4C_OK, (smsal_error_cause_enum) 0, copy_req, index);

    smsal_free_pending_act(id);

    smsal_check_mem_full_status();
}


/* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
void smsal_set_status_action_cnf(kal_uint8         id,
                           kal_uint8         sub_act_code,
                           ilm_struct        *ilm_ptr,
                           kal_bool          is_from_sim)
{
    switch (sub_act_code)
    {
        case SMSAL_READ_INDEX:
            smsal_set_status_read_msg_cnf(id, ilm_ptr, is_from_sim);
            break;

        case SMSAL_WRITE_SINGLE:
            smsal_set_status_write_msg_cnf(id);
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

}

void smsal_set_status_action_rej(kal_uint8  id, 
                           kal_uint8  sub_act_code,
                           kal_uint16 error_cause)
{
	
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    smsal_write_aux_info_struct *aux_info;
    l4csmsal_set_status_req_struct *set_status_req;

    set_status_req = (l4csmsal_set_status_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    switch (sub_act_code)
    {
            /* New record is not writen. (the same with write fail) */
        case SMSAL_READ_INDEX:
        case SMSAL_WRITE_SINGLE:

            /* clear the pending of dst entry */
            (&(smsal_cntx_ptr->message_box[aux_info->index]))->state &= (~SMSAL_MB_ENTRY_PENDING);
            break;

        default:
            break;
    }                                   /* switch */

    smsal_send_set_status_cnf(L4C_ERROR, MEM_FAILURE, set_status_req);
    smsal_free_pending_act(id);

}                                       /* end of smsal_read_rej */


void smsal_set_status_read_msg_cnf(kal_uint8     id,
                                   ilm_struct    *ilm_ptr,
                                   kal_bool      is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    sim_read_cnf_struct *read_cnf;
    smsal_write_aux_info_struct *aux_info;
    l4csmsal_set_status_req_struct *set_status_req;
    smsal_mb_entry_struct *entry;

    aux_info = (smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;
    set_status_req = (l4csmsal_set_status_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    entry = (&(smsal_cntx_ptr->message_box[aux_info->index]));

    /*
     * because the data read from SIM is carried in local_para, but
     * * is carried in peer buffer by NVRAM, thus transform to 
     * * peer buffer in both ways 
     *
     * [MAUI_00817141] allow set status SMSAL_TO_DRAFT and SMSAL_SM 
     *
    if (is_from_sim == KAL_TRUE)
    {
        // Short message from SIM
        SMSAL_ASSERT(is_from_sim != KAL_TRUE);
    }
     */

    /* [MAUI_00817141] allow set status SMSAL_STO_DRAFT and SMSAL_SM */
    if (is_from_sim == KAL_TRUE)
    {
        SMSAL_ASSERT(entry->storage_type == SMSAL_SM);

        /* Short message from SIM */
        read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        pdu_ptr = read_cnf->data;
        pdu_len = read_cnf->length;
    }
    else
    {
        SMSAL_ASSERT(entry->storage_type == SMSAL_ME);

        /* Short message from NVRAM */
        (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr = ilm_ptr->peer_buff_ptr;
        
        /* MAUI_01207536 smsal_free_pending_act() may free twice */
        hold_peer_buff(ilm_ptr->peer_buff_ptr);
        
        pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_len);

        if (pdu_len != SMSAL_SMS_ME_LEN)
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len);)

            smsal_send_set_status_cnf(L4C_ERROR, MEM_FAILURE, set_status_req);
            
            smsal_free_pending_act(id);
            return;
        }
    }


    // set the status data
    if (set_status_req->new_status == SMSAL_STO_SENT)
    {
        entry->status = SMSAL_STATUS_SENT;
        pdu_ptr[0] = SMSAL_SENT_NO_SRR;
    }
    else if (set_status_req->new_status == SMSAL_STO_UNSENT)
    {
        entry->status = SMSAL_STATUS_UNSENT;
        pdu_ptr[0] = SMSAL_UNSENT_MSG;
    }
    else if (set_status_req->new_status == SMSAL_STO_DRAFT)
    {
        if (is_from_sim == KAL_TRUE)
        {
            // SMSAL_STO_DRAFT and SMSAL_SM
            entry->status = SMSAL_STATUS_UNSENT;
            pdu_ptr[0] = SMSAL_UNSENT_MSG;
        }
        else
        {
            entry->status = (SMSAL_STATUS_UNSENT | SMSAL_STATUS_DRAFT);
            pdu_ptr[0] = SMSAL_DRAFT_MSG;
        }
    }
    else if (set_status_req->new_status == SMSAL_REC_UNREAD)
    {
        entry->status = SMSAL_STATUS_UNREAD;
        pdu_ptr[0] = SMSAL_UNREAD_MSG;
    }
    else if (set_status_req->new_status == SMSAL_REC_READ)
    {
        entry->status = SMSAL_STATUS_READ;
        pdu_ptr[0] = SMSAL_READ_MSG;
    }
    else
    {
        smsal_send_set_status_cnf(L4C_ERROR, MEM_FAILURE, set_status_req);
        smsal_free_pending_act(id);
        return;
    }


    // write out to the storage

    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_WRITE_SINGLE;
    
    if (is_from_sim == KAL_TRUE)
    {
        smsal_write_to_sim(id, FILE_SMS_IDX, pdu_ptr, (kal_uint16)SMSAL_SMS_LEN, entry->record_no);
    }
    else
    {
        smsal_write_to_nvram(id, NVRAM_EF_SMSAL_SMS_LID, entry->record_no, ilm_ptr->peer_buff_ptr);
        hold_peer_buff(ilm_ptr->peer_buff_ptr);
    }
}

void smsal_set_status_write_msg_cnf(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 index;
    l4csmsal_set_status_req_struct *set_status_req;

    set_status_req = (l4csmsal_set_status_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    index = ((smsal_write_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->index;

    /* Mark the state of MB entry to original values */
    (&(smsal_cntx_ptr->message_box[index]))->state &= (~SMSAL_MB_ENTRY_PENDING);

    smsal_send_set_status_cnf(L4C_OK, (smsal_error_cause_enum) 0, set_status_req);

    smsal_free_pending_act(id);
}


/*****************************************************************************
 * 
 * Functions for sending message from storage
 *
 ****************************************************************************/

/* 
 * Main Send From Storage CNF/REJ Handlers 
 */
void smsal_send_from_storage_cnf(kal_uint8         id,
                                 kal_uint8         sub_act_code,
                                 ilm_struct        *ilm_ptr,
                                 kal_bool          is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    switch (sub_act_code)
    {
        case SMSAL_READ_MSG_FR_STORAGE:
            smsal_read_msg_from_storage_hdlr(id, ilm_ptr, is_from_sim);
            break;

        case SMSAL_READ_RP_MSG:
            smsal_send_fr_read_rp_cnf(id, ilm_ptr, is_from_sim);

            break;

        case SMSAL_GET_MSG_REF:
            smsal_msgbox_msg_post_hdlr(id);
            // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
            (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x02;
            break;

        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

}                                       /* end of smsal_send_from_storage_cnf */

void smsal_send_from_storage_rej(kal_uint8         id,
                                 kal_uint8         sub_act_code,
                                 kal_uint16        cause                                 
                                )
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
 
    l4csmsal_send_from_storage_req_struct *send_fr_req;

    send_fr_req = (l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

    if (send_fr_req->src_id >= RMMI_SRC)
    {
        cause = SMS_SIM_FAILURE;
    }

    switch (sub_act_code)
    {
        // MAUI_01748085 only one storage updated and send no-matter SIM reject
        // the same as cnf true
        case SMSAL_GET_MSG_REF:
            smsal_msgbox_msg_post_hdlr(id);
            (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x02;
            return;
            break;

        case SMSAL_READ_MSG_FR_STORAGE:
        case SMSAL_READ_RP_MSG:
        // case SMSAL_GET_MSG_REF:

            smsal_send_error(send_fr_req->src_id, 0, NULL, (smsal_error_cause_enum) cause);
            break;

        default:
            break;
    }                                   /* switch */

    smsal_free_pending_act(id);
}                                       /* end of smsal_send_from_storage_rej */


/*
 * ---------------------------------------------------
 * *
 * *   Sub Send From Storage CNF/REJ Handlers 
 * *
 * * --------------------------------------------------- 
 */

void smsal_read_msg_from_storage_hdlr(kal_uint8 old_id, ilm_struct *ilm_ptr, kal_bool is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    sim_read_cnf_struct *sim_cnf;
    peer_buff_struct *peer_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    smsal_send_sms_aux_info_struct *send_aux_info;
    l4csmsal_send_from_storage_req_struct *send_fr_req;

    send_fr_req = (l4csmsal_send_from_storage_req_struct *)
                   (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;

    send_aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    /*
     * because the data read from SIM is carried in local_para, but
     * * is carried in peer buffer by NVRAM, thus transform to 
     * * peer buffer in both ways 
     */
    if (is_from_sim == KAL_TRUE)
    {
        /* Short message from SIM */
        sim_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;

        peer_ptr = (peer_buff_struct *) construct_peer_buff(sim_cnf->length, 0, 0, TD_CTRL);

        pdu_ptr = get_peer_buff_pdu(peer_ptr, &pdu_len);
        kal_mem_cpy(pdu_ptr, sim_cnf->data, sim_cnf->length);

        (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr = peer_ptr;
    }
    else
    {
        /* Short message from NVRAM */
        (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr = ilm_ptr->peer_buff_ptr;

        pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &pdu_len);

        if (pdu_len == SMSAL_SMS_ME_LEN)
        {
            kal_mem_cpy(send_aux_info->scts, pdu_ptr + SMSAL_SMS_LEN, 7);
            pdu_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr, SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, pdu_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", pdu_len););
            smsal_free_pending_act(old_id);
            return;
        }

        /*
         * because the this ptr will be free in smsal_free_pending_act &
         * * in free_ilm 
         */
        hold_peer_buff(ilm_ptr->peer_buff_ptr);

    }

    if (smsal_reply_index_hdlr(old_id, send_fr_req->reply_index) == KAL_TRUE)
    {
        /* reply index is available. Need to get SC and DA address from storage. */

        /* change sub action. */
        (&(smsal_cntx_ptr->pending_act[old_id]))->sub_act_code = SMSAL_READ_RP_MSG;
        return;                         /* wait read result from storage */
    }
    else
    {
        kal_bool retval;

        retval = smsal_get_rp_sms_info(&(send_aux_info->sat_addr), ilm_ptr, is_from_sim);

        if (retval == KAL_FALSE)
        {
            kal_brief_trace(TRACE_WARNING, SMSAL_DECODE_SMS_PDU_ERROR);
            SMSALDBG_(printf("smsal_get_rp_sms_info_ERROR\n"););

            smsal_send_error(send_fr_req->src_id, 0, NULL,  /* src id */
                             SMSAL_UNSPECIFIED_ERROR_CAUSE  /* error cause */
                            );

            smsal_free_pending_act(old_id);
            return;
        }
        
        /* Let send_req->da_tag to modify DA */
        send_aux_info->is_da_modified = KAL_FALSE;
    }

    smsal_send_from_storage_fdn_check(old_id);
}

void smsal_msgbox_msg_post_hdlr(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 *pdu_ptr, *pdu_ptr1;
    kal_uint16 pdu_len;

    smsal_pdu_decode_struct sms_pdu;

    smsal_send_sms_aux_info_struct *send_aux_info;

    send_aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    pdu_ptr = get_peer_buff_pdu((&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr, &pdu_len);

    smsal_decode_sms_pdu((pdu_ptr + 1), (kal_uint8) (pdu_len - 1), &sms_pdu);

    /* include status */
    (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr->pdu_len = sms_pdu.pdu_len + 1;

    send_aux_info->concat_info = sms_pdu.tpdu.concat_info;

    // MAUI_01945869 modify SC in PDU mode, (no status)

    if (send_aux_info->is_da_modified == KAL_TRUE)
    {
        send_aux_info->peer_to_send
        = smsal_modify_da_in_msg_pdu(pdu_ptr + 1,
                                     (kal_uint8) (sms_pdu.pdu_len),
                                     send_aux_info->sat_addr.dest_addr.addr_length,
                                     send_aux_info->sat_addr.dest_addr.addr_bcd);

        /* MAUI_02277891 [SMSAL][FixBug] When AT+CMSS change DA should reserve status bit
           Here we should assign status on reserved byte in previous function */
        pdu_ptr1 = get_peer_buff_pdu(send_aux_info->peer_to_send, &pdu_len);
        *(pdu_ptr1-1) = *(pdu_ptr);
    }
    else
    {
        peer_buff_struct *new_peer_ptr;

        send_aux_info->peer_to_send = NULL;
        new_peer_ptr = (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr;
        
        /* Skip the first byte (status) */
        update_peer_buff_header(new_peer_ptr,
                                (kal_uint8) (new_peer_ptr->free_header_space + 1),
                                (kal_uint16)(new_peer_ptr->pdu_len - 1),
                                0);
    }

    smsal_msgbox_post(id, send_aux_info->msg_ref);

    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SEND_FROM_STORAGE_CNF, L4C_OK, 0);

}                                       /* end of smsal_msgbox_msg_post_hdlr */


/*****************************************************************************
* FUNCTION
*  smsal_msgbox_post
* DESCRIPTION
*   This function sends a short message from message box.
*
* PARAMETERS
*  a  IN          old_id (access_id)        
*  b  IN/OUT      msg_ref                    
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_msgbox_post(kal_uint8 old_id, kal_uint8 msg_ref)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    peer_buff_struct *new_peer_ptr;

    smsal_send_sms_aux_info_struct *aux_info;
    l4csmsal_send_from_storage_req_struct *send_fr_req;

    /* Make copies so that indirections are reduced */
    send_fr_req =
    (l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->local_para_ptr;
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[old_id]))->aux_info;

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_MSGBOX_POST, send_fr_req->index);

    new_peer_ptr = aux_info->peer_to_send;

    if (new_peer_ptr == NULL)
    {
        /* DA is not modified */
        new_peer_ptr = (&(smsal_cntx_ptr->pending_act[old_id]))->peer_buff_ptr;
    }

    /*
     * hold this peer buffer for updating status upon receiving 
     * * the submit report which indicating the submit succeeded 
     */
    hold_peer_buff(new_peer_ptr);

    smsal_send_pdu_mode(msg_ref,
                        send_fr_req->src_id,
                        send_fr_req->seq_num,
                        smsal_cntx_ptr->sms_parameter.rmi.mms,
                        SMSAL_MTI_SUBMIT,
                        new_peer_ptr,
                        &aux_info->sat_addr.sc_addr);

}                                       /* end of smsal_msgbox_post */
#endif //__SMS_STORAGE_BY_MMI__


void smsal_send_mo_sms_cnf(kal_uint8         id,
                           kal_uint8         sub_act_code,
                           ilm_struct        *ilm_ptr,
                           kal_bool          is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    switch (sub_act_code)
    {
        case SMSAL_READ_RP_MSG:
            smsal_mo_sms_read_rp_cnf(id, ilm_ptr, is_from_sim);

            break;
        case SMSAL_GET_MSG_REF:
            smsal_mo_sms_hdlr(id);
            // [MAUI_01422850] Abort Sending, delay free pending_act until storage confirmation
            (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x02;
            break;
        default:
            /* LOG ERROR */
            smsal_free_pending_act(id);
            break;
    }                                   /* switch */

}                                       /* end of smsal_send_mo_sms_cnf */

kal_bool smsal_get_rp_sms_info(smsal_sat_addr_struct      *sat_addr,   
                               ilm_struct                 *ilm_ptr,
                               kal_bool                   is_from_sim)
{

    kal_bool retval;
    kal_uint16 data_len;
    kal_uint8 *data_ptr;
    sim_read_cnf_struct *read_cnf;
    smsal_pdu_decode_struct sms_pdu;

#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_status_enum      result = SMSLIB_STATUS_UNSPECIFIED_ERROR;
#endif

    if (is_from_sim == KAL_TRUE)
    {
        read_cnf = (sim_read_cnf_struct *) ilm_ptr->local_para_ptr;
        data_ptr = read_cnf->data;
        data_len = read_cnf->length;
    }
    else
    {
        data_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &data_len);

        if (data_len == SMSAL_SMS_ME_LEN)
        {
            data_len = SMSAL_SMS_LEN;

            remove_tail_of_peer_buff(ilm_ptr->peer_buff_ptr, SMSAL_SMS_ME_LEN - SMSAL_SMS_LEN);
        }
        else
        {
            kal_brief_trace(TRACE_WARNING, GET_NVRAM_SIZE_ERROR, data_len);
            SMSALDBG_(printf("GET_NVRAM_SIZE_ERROR %d\n", data_len););
            data_len = SMSAL_SMS_LEN;
        }
    }

#if defined(__SMS_STORAGE_BY_MMI__)
    /* Decode SMS PDU (SCA + TPDU) */
    result = smslib_decode_pdu(data_ptr + 1, (kal_uint8)(data_len - 1), &sms_pdu);
    if (result != SMSLIB_STATUS_OK)
    {
        smslib_dealloc_sms_struct(&sms_pdu);
        return KAL_FALSE;
    }

    retval = KAL_TRUE;

    /* get SC and DA address in replied message. */
    kal_mem_cpy(&(sat_addr->sc_addr), &(sms_pdu.sca), sizeof(sms_addr_struct));

#else
    /* Decode SMS PDU (SCA + TPDU) */
    retval = smsal_decode_sms_pdu(data_ptr + 1, (kal_uint8) (data_len - 1), &sms_pdu);

    if (retval == KAL_FALSE)
    {
        smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
        return retval;
    }

    /* get SC and DA address in replied message. */
    sat_addr->sc_addr = sms_pdu.sca;

#endif

    if(sms_pdu.tpdu.mti == SMSAL_MTI_DELIVER)
    {
        sms_tpdu_addr2_sms_tp_addr(sms_pdu.tpdu.data.deliver_tpdu.orig_addr, 
                                   &sat_addr->dest_addr);
    }
    else if(sms_pdu.tpdu.mti == SMSAL_MTI_SUBMIT)
    {
        /* 222436: For sending from storage, get DA from storage to do FDN check */
        sms_tpdu_addr2_sms_tp_addr(sms_pdu.tpdu.data.submit_tpdu.dest_addr, 
                                   &sat_addr->dest_addr);
    }
    else
    {      
        retval = KAL_FALSE;
    }   

   
    /* Free resources */
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_dealloc_sms_struct(&sms_pdu);
#else
    smsal_free_tpdu_decode_struct(&sms_pdu.tpdu);
#endif

    return retval;
}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_send_fr_read_rp_cnf(kal_uint8 id, ilm_struct *ilm_ptr, kal_bool is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool retval;
    smsal_send_sms_aux_info_struct *aux_info;
    l4csmsal_send_from_storage_req_struct *send_req;

    send_req = (l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    retval = smsal_get_rp_sms_info(&(aux_info->sat_addr), ilm_ptr, is_from_sim);

    if (retval == KAL_FALSE)
    {
        smsal_send_error(send_req->src_id, 0, NULL,     /* src id */
                         SMSAL_UNSPECIFIED_ERROR_CAUSE  /* error cause */
            );

        smsal_free_pending_act(id);
        return;
    }

    aux_info->is_da_modified = KAL_TRUE;

    smsal_send_from_storage_fdn_check(id);
}
#endif //__SMS_STORAGE_BY_MMI__

void smsal_mo_sms_read_rp_cnf(kal_uint8 id, ilm_struct *ilm_ptr, kal_bool is_from_sim)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_bool retval;
    l4csmsal_send_req_struct *send_req;
    smsal_send_sms_aux_info_struct *aux_info;

    send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    retval = smsal_get_rp_sms_info(&(aux_info->sat_addr), ilm_ptr, is_from_sim);

    if (retval == KAL_FALSE)
    {
        smsal_send_error(send_req->src_id,      /* src id */
                         send_req->seq_num,
                         &(aux_info->concat_info),
                         SMSAL_UNSPECIFIED_ERROR_CAUSE);     /* error cause */

        smsal_free_pending_act(id);
        return;
    }

    aux_info->is_da_modified = KAL_TRUE;

    smsal_mo_sms_fdn_check(id);
}


void smsal_send_mo_sms_rej(kal_uint8 id, kal_uint8 sub_act_code, kal_uint16 cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_send_req_struct *send_req;

    send_req = (l4csmsal_send_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;

    if (send_req->src_id >= RMMI_SRC)
    {
        cause = SMS_SIM_FAILURE;
    }

    switch (sub_act_code)
    {
        // MAUI_01748085 only one storage updated and send no-matter SIM reject
        // the same as cnf true

        case SMSAL_GET_MSG_REF:
            smsal_mo_sms_hdlr(id);
            (&(smsal_cntx_ptr->pending_act[id]))->action_status |= 0x02;
            return;
            break;


        //case SMSAL_GET_MSG_REF:
        case SMSAL_READ_RP_MSG:

            smsal_send_error(send_req->src_id, send_req->seq_num,
                             &(((smsal_send_sms_aux_info_struct *) \
                             (&(smsal_cntx_ptr->pending_act[id]))->aux_info)->concat_info),
                             (smsal_error_cause_enum)cause );      

            break;

        default:
            break;
    }                                   /* switch */

    smsal_free_pending_act(id);
}

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_update_for_send_fr_succ(kal_uint8 id)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint8 *pdu_ptr;
    kal_uint8 tpdu_offset;
    kal_uint16 pdu_len;

    smsal_send_sms_aux_info_struct *aux_info;
    l4csmsal_send_from_storage_req_struct *send_fr_req;
    smsal_mb_entry_struct *entry;
    peer_buff_struct *peer_buff_ptr;

    /* Make copies so that indirections are reduced */
    send_fr_req = (l4csmsal_send_from_storage_req_struct *) (&(smsal_cntx_ptr->pending_act[id]))->local_para_ptr;
    entry = (&(smsal_cntx_ptr->message_box[send_fr_req->index]));
    aux_info = (smsal_send_sms_aux_info_struct *) (&(smsal_cntx_ptr->pending_act[id]))->aux_info;

    if (aux_info->peer_to_send != NULL)
        peer_buff_ptr = aux_info->peer_to_send;
    else
        peer_buff_ptr = (&(smsal_cntx_ptr->pending_act[id]))->peer_buff_ptr;

    /* make pdu_ptr to point the 1st byte which indicates 'status' */
    peer_buff_ptr->free_header_space = 0;

    pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

    /* exclude status_byte & sc addr */
    tpdu_offset = 2 + *(pdu_ptr + 1);

    /*
     * ---------------------------------------
     * * Update SMS data in storage/context for
     * *  1. status byte
     * *  2. message reference    
     * *  3. destination address
     * * --------------------------------------- 
     */
    /* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
    if ((entry->status & 0x0f) == SMSAL_STATUS_UNSENT)
    {
        entry->status = SMSAL_STATUS_SENT;

        /* Check Status Report is requested or not */
        if ((*(pdu_ptr + tpdu_offset) & 0x20) == 0x20)
        {
            *pdu_ptr = SMSAL_SENT_SRR_NOT_RECV;
            entry->status |= SMSAL_STATUS_SRR_NOT_RECV;
        }
        else
            *pdu_ptr = SMSAL_SENT_NO_SRR;
    }

    smsal_write_short_msg(SMSAL_MAX_PENDING_ACT,
                          (smsal_storage_enum) entry->storage_type,
                          entry->record_no, pdu_ptr, aux_info->scts, SMSAL_SMS_LEN);

}                                       /* end of smsal_update_for_send_fr_succ */
#endif

void smsal_get_msg_ref_hdlr(kal_uint8 id, kal_uint8 * msg_ref)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    (&(smsal_cntx_ptr->pending_act[id]))->sub_act_code = SMSAL_GET_MSG_REF;

    /*
     * This function returns the message reference, which makes the
     * * part of TPDU header. The value of message reference ranges
     * * from 0..255, after 255 message reference is rested to 0. 
     */

    if (smsal_cntx_ptr->msg_ref == 255)
    {
        smsal_cntx_ptr->msg_ref = 0;
    }
    else
    {
        smsal_cntx_ptr->msg_ref++;
    }

    *msg_ref = smsal_cntx_ptr->msg_ref;

    /* SMSS file is present. */
    if (IS_FLAG_SET(SMSAL_SIM_SMSS_FLAG) == KAL_TRUE)
    {
        /* Write "Last Used MR" to SIM */
        smsal_write_to_sim(id, FILE_SMSS_IDX, &smsal_cntx_ptr->msg_ref, 1, SMSAL_SMSS_MR);
        // MAUI_01748085 only one storage updated and send no-matter SIM reject
        //smsal_write_to_sim(SMSAL_MAX_PENDING_ACT,   /* ignore the sim cnf */
        //                   FILE_SMSS_IDX, &smsal_cntx_ptr->msg_ref, 1, SMSAL_SMSS_MR);

    }
    // MAUI_01748085 only one storage updated and send no-matter SIM reject
    /* MAUI_01629973 [SMSAL][Revise] use nvram backup smss and update sim at best effort */
    else
    {
        smsal_set_common_change_to_nvram(id);
    }

    return;

}                                       /* end of smsal_get_msg_ref_hdlr */


kal_bool smsal_check_rmi_use_hex(kal_uint8 src_id, smsal_pdu_decode_struct *sms_pdu)
{
    smsal_tpdu_decode_struct *tpdu = &sms_pdu->tpdu;

    /*
     * In 127.005 3.1, the definition of <data> states:
     * * if dcs indicates 8-bit or UCS2 or UDHI is set, data shall be presented 
     * * in HEX format even message format is TEXT mode 
     */
    if ((src_id >= RMMI_SRC) &&
        ((tpdu->alphabet_type == SMSAL_UCS2) ||
        (tpdu->alphabet_type == SMSAL_EIGHT_BIT) ||
        (tpdu->udhl > 0)))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


#if defined(__SMS_STORAGE_BY_MMI__)
peer_buff_struct *smsal_get_msg_content_ext(kal_uint8               rmi_use_hex,
                                            smslib_general_struct   *pdu_decode,
                                            kal_uint16              *msg_len,
                                            smsal_header_info_union *msg_header)
{
    peer_buff_struct *unpack_pdu_ptr = NULL;
    kal_uint8        *unpack_data;
    smsal_deliver_msg_hdr_struct *deliver_msg;
    smsal_submit_msg_hdr_struct *submit_msg;
    smslib_tpdu_decode_struct *tpdu = &(pdu_decode->tpdu);

    if( SMSLIB_STATUS_OK == smslib_get_msg_content(rmi_use_hex, pdu_decode, NULL) )
    {
        (*msg_len) = pdu_decode->forMMI_UserData_length;
        if ((*msg_len) != 0)
        {
            unpack_pdu_ptr = (peer_buff_struct *) construct_peer_buff((*msg_len), 0, 0, TD_UL);
            unpack_data = get_peer_buff_pdu(unpack_pdu_ptr, msg_len);
            kal_mem_cpy(unpack_data, pdu_decode->forMMI_UserData, pdu_decode->forMMI_UserData_length);
        }
    }

    if (msg_header)
    {

        if (tpdu->mti == SMSAL_MTI_DELIVER)
        {
            deliver_msg = &(msg_header->deliver);

            deliver_msg->fo = (tpdu->fo);
            deliver_msg->pid = tpdu->data.deliver_tpdu.pid;
            deliver_msg->ori_dcs = tpdu->data.deliver_tpdu.dcs;
            deliver_msg->dcs = smsal_dcs_to_mmi(tpdu->data.deliver_tpdu.dcs);
            kal_mem_cpy(deliver_msg->scts, tpdu->data.deliver_tpdu.scts, 7);
            // TP-OA has assigned in smslib_get_msg_content
            deliver_msg->sca = pdu_decode->sca;
            deliver_msg->no_msg_data = pdu_decode->forMMI_UserData_length;

            if ((tpdu->data.deliver_tpdu.udh_p == KAL_TRUE) && (tpdu->udhl == 0))
            {
                /* clear udhi bit */
                deliver_msg->fo = ((tpdu->fo) & 0xbf);
            }
        }
        else if (tpdu->mti == SMSAL_MTI_SUBMIT)
        {
            submit_msg = &(msg_header->submit);

            submit_msg->fo = (tpdu->fo);
            submit_msg->pid = tpdu->data.submit_tpdu.pid;
            submit_msg->ori_dcs = tpdu->data.submit_tpdu.dcs;
            submit_msg->dcs = smsal_dcs_to_mmi(tpdu->data.submit_tpdu.dcs);
            submit_msg->vp_format = tpdu->data.submit_tpdu.vp_flag;
            submit_msg->vp = *(tpdu->data.submit_tpdu.validity_period);
            // TP-DA has assigned in smslib_get_msg_content
            submit_msg->sca = pdu_decode->sca;
            submit_msg->no_msg_data = pdu_decode->forMMI_UserData_length;

            if ((tpdu->data.submit_tpdu.udh_p == KAL_TRUE) && (tpdu->udhl == 0))
            {
                /* clear udhi bit */
                submit_msg->fo = ((tpdu->fo) & 0xbf);
            }

        }

    }

    return unpack_pdu_ptr;
}
#else
peer_buff_struct *smsal_get_msg_content(kal_uint8               rmi_use_hex,
                                        smsal_pdu_decode_struct *sms_pdu,
                                        kal_uint16              *msg_len,
                                        smsal_header_info_union *msg_header
                                       )
{
    kal_uint8 dcs;
    kal_uint8 *unpack_data = NULL;
    kal_uint8 *msg_data;
    kal_uint16 length, pdu_len;
    kal_uint16 offset = 0;
    smsal_deliver_msg_hdr_struct *deliver_msg = &(msg_header->deliver);
    smsal_submit_msg_hdr_struct *submit_msg = &(msg_header->submit);
    smsal_deliver_peer_struct *deliver_ptr = NULL;
    smsal_submit_peer_struct *submit_ptr;
    peer_buff_struct *peer_buff_ptr = NULL;
    smsal_tpdu_decode_struct *tpdu = &sms_pdu->tpdu;

    if (tpdu->mti != SMSAL_MTI_STATUS_REPORT)
    {
        if (tpdu->mti == SMSAL_MTI_DELIVER)
        {
            deliver_ptr = &tpdu->data.deliver_tpdu;
            dcs = deliver_ptr->dcs;

            length = deliver_ptr->user_data_len;
            msg_data = deliver_ptr->user_data;

            /* fill smsal_deliver_msg_hdr_struct */

            /* in some abnormal cases, we change udhi to FALSE */
            if (deliver_ptr->udh_p == KAL_FALSE)
                deliver_msg->fo = ((tpdu->fo) & 0xbf);  /* clear udhi bit */
            else
                deliver_msg->fo = ((tpdu->fo) | 0x40);  /* set udhi bit */

            /* CR17067 See 23.40 9.1.2.5 Type-of-number: Alphanumeric(7-bit default alphabet)*/
            if ((deliver_ptr->orig_addr[0] != 0) &&
                (deliver_ptr->orig_addr[1] & 0xf0) == 0xd0)
            {
                deliver_msg->oa.addr_length = ((deliver_ptr->orig_addr[0]*4)/7)+1;
                smsal_gsm7_unpack((kal_uint8 *)&(deliver_ptr->orig_addr[2]),
                                  &deliver_msg->oa.addr_bcd[1],
                                  (kal_uint16)deliver_msg->oa.addr_length,
                                  (kal_uint16)0);
                deliver_msg->oa.addr_bcd[0] = deliver_ptr->orig_addr[1];
            }
            else
            {
                deliver_msg->oa.addr_length = TP_ADDR2_L4_ADDR_LEN(deliver_ptr->orig_addr[0]);
                kal_mem_cpy(deliver_msg->oa.addr_bcd, 
                            &deliver_ptr->orig_addr[1],
                            deliver_msg->oa.addr_length);
            }

            deliver_msg->oa.addr_bcd[deliver_msg->oa.addr_length] = 0xff;

            sms_rp_addr2_l4_addr(&sms_pdu->sca, &(deliver_msg->sca));

            deliver_msg->pid = deliver_ptr->pid;
            deliver_msg->ori_dcs = deliver_ptr->dcs;    /* for RMI */
            deliver_msg->dcs = smsal_dcs_to_mmi(deliver_ptr->dcs);      /* for LMI */
            kal_mem_cpy(deliver_msg->scts, deliver_ptr->scts, 7);

            if ((deliver_ptr->udh_p == KAL_TRUE) && (tpdu->udhl == 0))
            {
                /* MAUI_00438690 [SMSAL][Fixbug] Fix UDHI == 1 but UDHL == 0 */
                if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
                    offset = 14;  // in terms of septets 
                else
                    offset = 8;        // in terms of octets 

                /* clear udhi bit */
                deliver_msg->fo = ((tpdu->fo) & 0xbf);
            }
        }
        else if (tpdu->mti == SMSAL_MTI_SUBMIT)
        {
            submit_ptr = &tpdu->data.submit_tpdu;
            dcs = submit_ptr->dcs;

            length = submit_ptr->user_data_len;
            msg_data = submit_ptr->user_data;

            /* fill smsal_submit_msg_hdr_struct  */

            /* in some abnormal cases, we change udhi to FALSE */
            if (submit_ptr->udh_p == KAL_FALSE)
                submit_msg->fo = ((tpdu->fo) & 0xbf);   /* clear udhi bit */
            else
                submit_msg->fo = ((tpdu->fo) | 0x40);   /* set udhi bit */

            /* CR17067 See 23.40 9.1.2.5 Type-of-number: Alphanumeric(7-bit default alphabet)*/
            if ((submit_ptr->dest_addr[0] != 0) &&
                (submit_ptr->dest_addr[1] & 0xf0) == 0xd0)
            {
                submit_msg->da.addr_length = ((submit_ptr->dest_addr[0]*4)/7)+1;
                smsal_gsm7_unpack((kal_uint8 *)&(submit_ptr->dest_addr[2]),
                                  &submit_msg->da.addr_bcd[1],
                                  (kal_uint16)submit_msg->da.addr_length,
                                  (kal_uint16)0);
                submit_msg->da.addr_bcd[0] = submit_ptr->dest_addr[1];
            }
            else
            {
                submit_msg->da.addr_length = TP_ADDR2_L4_ADDR_LEN(submit_ptr->dest_addr[0]);
                kal_mem_cpy(submit_msg->da.addr_bcd,
                            &submit_ptr->dest_addr[1],
                            submit_msg->da.addr_length);
            }

            submit_msg->da.addr_bcd[submit_msg->da.addr_length] = 0xff;

            sms_rp_addr2_l4_addr(&sms_pdu->sca, &(submit_msg->sca));

            submit_msg->pid = submit_ptr->pid;
            submit_msg->vp = *(submit_ptr->validity_period);
            submit_msg->ori_dcs = submit_ptr->dcs;      /* for RMI */
            submit_msg->dcs = smsal_dcs_to_mmi(submit_ptr->dcs);        /* for LMI */

        }
        else
        {
            return NULL;
        }

        if (tpdu->udhl > 0)
        {
            /* 12/22/2003 Kevin, we should not use original dcs to check */
            if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
                offset = smsal_compute_udh_offset(tpdu->udhl);  /* in terms of septets */
            else
                offset = tpdu->udhl * 8;        /* in terms of octets */
        }

        if (rmi_use_hex == KAL_FALSE)
        {
            /* TP-UDH in octets, text part in chars */
            /* 12/22/2003 Kevin, we should not use original dcs to check */
            if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
            {
                /* Robert change 06-17-2004                */
                /* For illegal UDL and UDLH. (UDLH > UDL ) */
                if ((length - offset / 7) < 0)
                    *msg_len = tpdu->udhl;
                else
                {
                    /* CR334962 Do not unpack GSM 7bit if sms is compressed */
                    if (tpdu->is_compress == KAL_TRUE)
                        *msg_len = length;
                    else
                        *msg_len = (length - offset / 7) + tpdu->udhl;
                }
            }
            else
                *msg_len = length;
        }
        else
        {
            if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
                length = (length * 7 + 7) / 8;

            *msg_len = length;
        }

        /* MAUI_00438690 [SMSAL][Fixbug] Fix UDHI == 1 but UDHL == 0 */
        if (tpdu->mti == SMSAL_MTI_DELIVER)
        {
            if ((deliver_ptr->udh_p == KAL_TRUE) &&
                (tpdu->udhl == 0) &&
                (tpdu->alphabet_type == SMSAL_UCS2))
            {
                if ((length % 2) != 0 )
                    *msg_len = length - 1;
            }
        }

        /* invalid sms */
        if (*msg_len > SMSAL_MAX_MSG_LEN)
            *msg_len = 0;

        if ((*msg_len) > 0)
        {
            /* copy data to peer buffer. */
            peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(*msg_len, 0, 0, TD_UL);
            unpack_data = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

            if (rmi_use_hex == KAL_FALSE)
            {
                if (tpdu->udhl > 0)
                {
                    /* copy TP-UDH part */
                    kal_mem_cpy(unpack_data, msg_data, tpdu->udhl);
                }

                smsal_unpack_msg(dcs,
                                 msg_data, /* packed */
                                 unpack_data + tpdu->udhl,      /* unpack */
                                 length,
                                 offset);
            }
            else
            {
                kal_mem_cpy(unpack_data, msg_data, length);
            }
        }

    }
    else
    {
        peer_buff_ptr = smsal_get_status_report(&tpdu->data.report_tpdu, msg_len, msg_header);
    }

    return peer_buff_ptr;

}                                       /* end of smsal_get_msg_content */
#endif

#ifndef __SMS_STORAGE_BY_MMI__
/*========================================================
 *
 * Confirm Handlers
 *
 *========================================================*/
void smsal_del_cnf(kal_uint8 result,
                   l4csmsal_delete_req_struct * del_req,
                   l4csmsal_delete_cnf_struct * del_cnf,
                   smsal_error_cause_enum     error_cause)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;

    if (del_cnf == NULL)
    {
        del_cnf = (l4csmsal_delete_cnf_struct *)
                   construct_local_para(sizeof(l4csmsal_delete_cnf_struct), TD_CTRL);

        kal_mem_set(del_cnf->msg_bitmap, 0x0, 480);
    }

    del_cnf->result = result;
    del_cnf->src_id = del_req->src_id;
    del_cnf->index = del_req->index;
    del_cnf->del_flag = del_req->del_flag;
    del_cnf->error_cause = error_cause;
    del_cnf->storage_type = (&(smsal_cntx_ptr->message_box[del_req->index]))->storage_type;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_DELETE_CNF, (local_para_struct *) del_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_DELETE_CNF, result, error_cause);

}                                       /* end of smsal_del_cnf */
#endif //__SMS_STORAGE_BY_MMI__


void smsal_set_param_cnf(kal_uint8              result,
                         kal_uint8              src_id, 
                         msg_type               msg_id,
                         smsal_error_cause_enum error_cause)
{
    l4csmsal_set_parameter_cnf_struct *set_cnf;

    set_cnf = (l4csmsal_set_parameter_cnf_struct *) construct_local_para
        (sizeof(l4csmsal_set_parameter_cnf_struct), TD_CTRL);

    set_cnf->src_id = src_id;
    set_cnf->result = result;
    set_cnf->error_cause = error_cause;

    smsal_send_msg_to_l4c(msg_id, (local_para_struct *) set_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_SET_PARAM_CNF, result, error_cause);

}                                       /* end of smsal_set_param_cnf */

#ifndef __SMS_STORAGE_BY_MMI__
void smsal_write_cnf(kal_uint8              result,
                     kal_uint8              src_id, 
                     smsal_error_cause_enum error_cause,
                     kal_uint16             index,
                     kal_uint8              status) 
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    l4csmsal_write_cnf_struct *write_cnf;

    write_cnf = (l4csmsal_write_cnf_struct *)
                 construct_local_para(sizeof(l4csmsal_write_cnf_struct), TD_CTRL );

    write_cnf->src_id = src_id;
    write_cnf->result = result;
    write_cnf->error_cause = error_cause;
    write_cnf->index = index;
    write_cnf->status = status;

    if (index == SMSAL_INVALID_INDEX)
        write_cnf->storage_type = SMSAL_STORAGE_UNSPECIFIED;
    else
        write_cnf->storage_type = (&(smsal_cntx_ptr->message_box[index]))->storage_type;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_WRITE_CNF, (local_para_struct *) write_cnf, NULL);

    kal_brief_trace(TRACE_FUNC, FUNC_SMSAL_WRITE_CNF, result, error_cause);

}                                       /* end of smsal_write_cnf */
#endif //__SMS_STORAGE_BY_MMI__

peer_buff_struct *smsal_get_status_report(smsal_status_report_peer_struct *status_ptr,
                                          kal_uint16                      *msg_len,
                                          smsal_header_info_union         *msg_header)
{
    smsal_status_report_msg_hdr_struct *status_rep_msg;
    peer_buff_struct *peer_buff_ptr = NULL;
    kal_uint8 *msg_data;
    kal_uint16 pdu_len;

    status_rep_msg = &(msg_header->status_rep);

    status_rep_msg->fo = 0;
    status_rep_msg->fo = (status_ptr->udh_p << 6) |
                         (status_ptr->status_rep_type << 5) |
                         (status_ptr->mms << 2) |
                         (status_ptr->msg_type);

    status_rep_msg->mr = status_ptr->msg_ref;

    status_rep_msg->ra.addr_length = TP_ADDR2_L4_ADDR_LEN(status_ptr->rcpnt_addr[0]);

    if(status_rep_msg->ra.addr_length >= sizeof(status_rep_msg->ra.addr_bcd))
    {
        status_rep_msg->ra.addr_length = sizeof(status_rep_msg->ra.addr_bcd)-1;
    }

    if (status_rep_msg->ra.addr_length > 0)
    {
        kal_mem_cpy(status_rep_msg->ra.addr_bcd,
                    &status_ptr->rcpnt_addr[1],
                    status_rep_msg->ra.addr_length ); 
    }

    /* end of bcd number */
    status_rep_msg->ra.addr_bcd[status_rep_msg->ra.addr_length] = 0xff;

    kal_mem_cpy(status_rep_msg->scts, status_ptr->scts, 7);
    kal_mem_cpy(status_rep_msg->dt, status_ptr->dis_time, 7);

    status_rep_msg->st = status_ptr->status;
    status_rep_msg->pid = status_ptr->pid;
    status_rep_msg->dcs = smsal_dcs_to_mmi(status_ptr->dcs);
    status_rep_msg->ori_dcs = status_ptr->dcs;

    *msg_len = status_ptr->no_user_data;

    if (status_ptr->no_user_data > 0)
    {

        /* copy data to peer buffer. */
        peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(*msg_len, 0, 0, TD_UL);
        msg_data = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        kal_mem_cpy(msg_data, status_ptr->user_data, status_ptr->no_user_data);
    }

    return peer_buff_ptr;
}                                       /* end of smsal_get_status_report */

peer_buff_struct *smsal_get_user_data_content(smsal_tpdu_decode_struct *tpdu,
                                              kal_uint16               *msg_len,                                         
                                              l4_addr_bcd_struct       *oa_addr,
                                              kal_uint8                *scts)
{
    kal_uint8 *pdu_ptr;
    kal_uint16 data_len;
    kal_uint16 offset = 0;
    kal_uint16 pdu_len;
    peer_buff_struct *peer_buff_ptr = NULL;
#if defined(__SMS_STORAGE_BY_MMI__)
    smslib_deliver_peer_struct *deliver_ptr;
#else
    smsal_deliver_peer_struct *deliver_ptr;
#endif

    *msg_len = 0;

    deliver_ptr = &tpdu->data.deliver_tpdu;

    if (tpdu->udhl > 0)
    {
        if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
            offset = smsal_compute_udh_offset(tpdu->udhl);      /* in terms of septets */
        else
            offset = tpdu->udhl * 8;    /* in terms of octets */
    }

    if (tpdu->alphabet_type == SMSAL_GSM7_BIT)
        data_len = deliver_ptr->user_data_len - offset / 7;
    else
        data_len = deliver_ptr->user_data_len - tpdu->udhl;

    sms_tpdu_addr2_l4_addr(deliver_ptr->orig_addr, oa_addr);
    kal_mem_cpy(scts, deliver_ptr->scts, 7);

    if (data_len > 0)
    {
        peer_buff_ptr = (peer_buff_struct *) construct_peer_buff(data_len, 0, 0, TD_CTRL);
        pdu_ptr = get_peer_buff_pdu(peer_buff_ptr, &pdu_len);

        smsal_unpack_msg(deliver_ptr->dcs, deliver_ptr->user_data,      /* packed */
                         pdu_ptr,       /* unpack */
                         deliver_ptr->user_data_len, offset);

        *msg_len = data_len;
    }

    return peer_buff_ptr;
}


#if !defined(__SMS_STORAGE_BY_MMI__)
void smsal_send_copy_cnf(kal_uint8                    result,
                         smsal_error_cause_enum       error_cause,
                         l4csmsal_copy_msg_req_struct *copy_req,
                         kal_uint16                   dst_index)
{
    l4csmsal_copy_msg_cnf_struct *copy_cnf;

    copy_cnf = (l4csmsal_copy_msg_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_copy_msg_cnf_struct), TD_CTRL);

    copy_cnf->result = result;
    copy_cnf->error_cause = error_cause;

    copy_cnf->src_id = copy_req->src_id;
    copy_cnf->action = copy_req->action;
    copy_cnf->dst_storage = copy_req->dst_storage;
    copy_cnf->src_index = copy_req->src_index;
    copy_cnf->dst_index = dst_index;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_COPY_MSG_CNF, (local_para_struct *) copy_cnf, NULL);

}                                       /* end of smsal_send_copy_cnf */


/* __UNIFIED_MESSAGE_BACKGROUND_SEND_SUPPORT__ */
void smsal_send_set_status_cnf(kal_uint8                    result,
                               smsal_error_cause_enum       error_cause,
                               l4csmsal_set_status_req_struct *set_status_req)
{
    l4csmsal_set_status_cnf_struct *set_status_cnf;

    set_status_cnf = (l4csmsal_set_status_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_set_status_cnf_struct), TD_CTRL);

    set_status_cnf->src_id = set_status_req->src_id;
    set_status_cnf->result = result;
    set_status_cnf->error_cause = error_cause;
    set_status_cnf->index = set_status_req->index;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SET_STATUS_CNF, (local_para_struct *) set_status_cnf, NULL);

}                                       /* end of smsal_send_set_status_cnf */
#endif


void smsal_get_mailbox_num_cnf(kal_uint8    result,
                               kal_uint32   error_cause,
                               kal_uint8    src_id)
{
    l4csmsal_get_mailbox_num_cnf_struct *get_mailbox_num_cnf;

    get_mailbox_num_cnf = (l4csmsal_get_mailbox_num_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_get_mailbox_num_cnf_struct), TD_CTRL);

    get_mailbox_num_cnf->src_id = src_id;
    get_mailbox_num_cnf->result = result;
    get_mailbox_num_cnf->error_cause = (kal_uint16) error_cause;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_GET_MAILBOX_NUM_CNF, (local_para_struct *) get_mailbox_num_cnf, NULL);

}                                       /* end of smsal_get_mailbox_num_cnf */


void smsal_set_msg_waiting_cnf(kal_bool    result,
                               kal_uint16   error_cause,
                               l4csmsal_set_msg_waiting_req_struct *set_msg_waiting_req)
{
    l4csmsal_set_msg_waiting_cnf_struct *set_msg_waiting_cnf;

    set_msg_waiting_cnf = (l4csmsal_set_msg_waiting_cnf_struct *)
                construct_local_para(sizeof(l4csmsal_set_msg_waiting_cnf_struct), TD_CTRL);

    set_msg_waiting_cnf->result = result;
    set_msg_waiting_cnf->cause  = error_cause;
    set_msg_waiting_cnf->src_id    = set_msg_waiting_req->src_id;
    set_msg_waiting_cnf->line_no      = set_msg_waiting_req->line_no;
    set_msg_waiting_cnf->waiting_num  = set_msg_waiting_req->waiting_num;
    set_msg_waiting_cnf->ind_type     = set_msg_waiting_req->ind_type;

    smsal_send_msg_to_l4c(MSG_ID_L4CSMSAL_SET_MSG_WAITING_CNF, (local_para_struct *) set_msg_waiting_cnf, NULL);

}                                       /* end of smsal_set_msg_waiting_cnf */


#ifdef __CPHS__
void smsal_get_ext1_num_cnf()
{
#if 0 //waitphb
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}                                       /* end of smsal_get_ext_num_cnf */
#endif

