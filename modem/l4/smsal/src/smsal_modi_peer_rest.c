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
 * smsal_modi_peer_rest.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is modified from smsal_peer_rest.c to fix errors 
 *   occurred in some pack/unpack functions.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifndef __SMSAL_MODI_PEER_REST_C
#define __SMSAL_MODI_PEER_REST_C
#endif

#include "smsal_peer.h"
#include "bitop_funcs.h"

/* for smsal_alphabet_enum */
#include "smsal_l4c_defs.h"

#include "smsal_peer_struct.h"
#include "smsal_defs.h"


/* for smsal_msg_len_in_octet() */
#include "smsal_utils.h"

#include "kal_public_api.h"
#include "kal_general_types.h"

#ifdef MTK_PEER
#define EXP  __declspec(dllexport)
#else
#define EXP
#endif


#ifdef NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_ALLOC
EXP void smsal_deliver_report_nack_peer_struct_alloc(void *mtk_d)
{
    smsal_deliver_report_nack_peer_struct *s = (smsal_deliver_report_nack_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_deliver_report_nack_peer_struct));
    s->user_data_size = 158;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (158 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_DEALLOC
EXP void smsal_deliver_report_nack_peer_struct_dealloc(void *mtk_d)
{
    smsal_deliver_report_nack_peer_struct *s = (smsal_deliver_report_nack_peer_struct *) mtk_d;

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_BITS
EXP unsigned int smsal_deliver_report_nack_peer_struct_bits(void *mtk_d)
{
    smsal_deliver_report_nack_peer_struct *s = (smsal_deliver_report_nack_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 1;
    size += 1;
    size += 4;
    size += 2;                          /* fo */
    size += 8;                          /* failure cause */
    size += 8;                          /* parameter indicator */

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
        size += 8;

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
        size += 8;

    /* User Data present */
    if (((s->params_p & 0x04) == 0x04) && (s->user_data_len > 0))
    {
        size += 8;                      /* user data length */
        size += 8 * s->no_user_data;
    }
    return size;
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_PACK
/*****************************************************************************
* FUNCTION
*  smsal_deliver_report_nack_peer_struct_pack
* DESCRIPTION
*   This function is used to pack SMS-DELIVER-REPORT (NACK).
*   TP-PID, TP-DCS, TP-UDL are packed only when corresponding TP-PI bits
*   are set.
*
* PARAMETERS
*  a  IN       *frame
*  b  IN       *s
*  c  IN       bit_offset
* RETURNS
*  number of packed bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_deliver_report_nack_peer_struct_pack(
                 kal_uint8 * frame, void * mtk_d,
                 unsigned int bit_offset)
{
    smsal_deliver_report_nack_peer_struct *s = (smsal_deliver_report_nack_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i = 0;

    put_bits_1_8(frame, (bits & 0x07), 1, s->fill_bits2);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 4, s->fill_bits1);
    /* frame += (((bits&0x07) + 4) >> 3); */
    bits += 4;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->fail_cause);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->params_p);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* User Data present */
    if (((s->params_p & 0x04) == 0x04) && (s->no_user_data > 0))
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        /*
         * s->no_user_data shall be set according to TP-DCS and 
         * * s->user_data shall be packed according to TP-DCS as well 
         * * before calling this function 
         */
        for (i = 0; i < s->no_user_data; i++)
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_NACK_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_ALLOC
EXP void smsal_deliver_report_ack_peer_struct_alloc(void *mtk_d)
{
    smsal_deliver_report_ack_peer_struct *s = (smsal_deliver_report_ack_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_deliver_report_ack_peer_struct));
    s->user_data_size = 159;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (159 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_DEALLOC
EXP void smsal_deliver_report_ack_peer_struct_dealloc(void *mtk_d)
{
    smsal_deliver_report_ack_peer_struct *s = (smsal_deliver_report_ack_peer_struct *) mtk_d;

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_BITS
EXP unsigned int smsal_deliver_report_ack_peer_struct_bits(void *mtk_d)
{
    smsal_deliver_report_ack_peer_struct *s = (smsal_deliver_report_ack_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 1;
    size += 1;
    size += 4;
    size += 2;                          /* fo */

    size += 8;                          /* parameter indicator */

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
        size += 8;

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
        size += 8;

    /* User Data present */
    if (((s->params_p & 0x04) == 0x04) && (s->user_data_len > 0))
    {
        size += 8;                      /* user data length */
        size += 8 * s->no_user_data;
    }

    return size;
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_PACK
/*****************************************************************************
* FUNCTION
*  smsal_deliver_report_ack_peer_struct_pack
* DESCRIPTION
*   This function is used to pack SMS-DELIVER-REPORT (ACK).
*   TP-PID, TP-DCS, TP-UDL are packed only when corresponding TP-PI bits
*   are set.
*
* PARAMETERS
*  a  IN       *frame
*  b  IN       *s
*  c  IN       bit_offset
* RETURNS
*  number of packed bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_deliver_report_ack_peer_struct_pack(
                  kal_uint8 *frame,
                  void *mtk_d,
                  unsigned int bit_offset)
{
    smsal_deliver_report_ack_peer_struct *s = (smsal_deliver_report_ack_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i = 0;

    put_bits_1_8(frame, (bits & 0x07), 1, s->fill_bits2);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 4, s->fill_bits1);
    /* frame += (((bits&0x07) + 4) >> 3); */
    bits += 4;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->params_p);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* User Data present */
    if (((s->params_p & 0x04) == 0x04) && (s->no_user_data > 0))
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        /*
         * s->no_user_data shall be set according to TP-DCS and 
         * * s->user_data shall be packed according to TP-DCS as well 
         * * before calling this function 
         */
        for (i = 0; i < s->no_user_data; i++)
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }
    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_DELIVER_REPORT_ACK_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_SUBMIT_PEER_STRUCT_ALLOC
EXP void smsal_submit_peer_struct_alloc(void *mtk_d)
{
    smsal_submit_peer_struct *s = (smsal_submit_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_submit_peer_struct));
    s->dest_addr_size = 12;
    s->no_dest_addr = 0;
    s->dest_addr = (kal_uint8 *) get_ctrl_buffer (12 * sizeof(kal_uint8));
    s->validity_period_size = 7;        /* 01/05/2004 SCR: 3641 */
    s->no_validity_period = 0;
    s->validity_period = (kal_uint8 *) get_ctrl_buffer (7 * sizeof(kal_uint8));    /* 01/05/2004 SCR: 3641 */
    s->user_data_size = 140;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (140 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_SUBMIT_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_SUBMIT_PEER_STRUCT_DEALLOC
EXP void smsal_submit_peer_struct_dealloc(void *mtk_d)
{
    smsal_submit_peer_struct *s = (smsal_submit_peer_struct *) mtk_d;

    if (s->dest_addr != NULL)
    {
        free_ctrl_buffer (s->dest_addr);
        s->dest_addr = 0;
    }
    if (s->validity_period != NULL)
    {
        free_ctrl_buffer (s->validity_period);
        s->validity_period = 0;
    }
    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_SUBMIT_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_SUBMIT_PEER_STRUCT_BITS
EXP unsigned int smsal_submit_peer_struct_bits(void *mtk_d)
{
    smsal_submit_peer_struct *s = (smsal_submit_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 1;
    size += 1;
    size += 1;
    size += 2;
    size += 1;
    size += 2;
    size += 8;                          /* msg_ref */
    size += 8 * s->no_dest_addr;
    size += 8;                          /* pid */
    size += 8;                          /* dcs */
    size += 8 * s->no_validity_period;
    size += 8;
    size += 8 * s->no_user_data;
    return size;
}
#endif /* NSTD_SMSAL_SUBMIT_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_SUBMIT_PEER_STRUCT_PACK
/*****************************************************************************
* FUNCTION
*  smsal_submit_peer_struct_pack
* DESCRIPTION
*   This function is used to pack SMS-SUBMIT.
*  
* PARAMETERS
*  a  IN       *frame
*  b  IN       *s
*  c  IN       bit_offset
* RETURNS
*  number of packed bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_submit_peer_struct_pack(kal_uint8 *frame,
                                               void *mtk_d,
                                               unsigned int bit_offset)
{
    smsal_submit_peer_struct *s = (smsal_submit_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i = 0;

    put_bits_1_8(frame, (bits & 0x07), 1, s->reply_flag);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->status_rep_flag);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->vp_flag);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 1, s->rej_dup_flag);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->msg_ref);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* pack length and address type of TP-DA */
    for (i = 0; i < 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dest_addr[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* pack address (BCD number) of TP-DA */
    for (i = 0; i < (s->dest_addr[0] + 1) / 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dest_addr[i + 2]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /*
     * s->no_validity_period shall be set according to VP format 
     * * before call this function 
     */
    for (i = 0; i < s->no_validity_period; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->validity_period[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /*
     * s->no_user_data shall be set according to TP-DCS and 
     * * s->user_data shall be packed according to TP-DCS as well 
     * * before calling this function 
     */
    if (s->no_user_data > 0)
    {
        for (i = 0; i < s->no_user_data; i++)
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_SUBMIT_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_SUBMIT_PEER_STRUCT_UNPACK
/*****************************************************************************
* FUNCTION
*  smsal_submit_peer_struct_unpack
* DESCRIPTION
*   This function is used to unpack SMS-SUBMIT.
*  
* PARAMETERS
*  a  IN       *s
*  b  IN       *frame
*  c  IN       bit_offset
*  d  IN       fr_size
*  e  IN       err_hndl, error handler
* RETURNS
*  number of unpacked bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_submit_peer_struct_unpack(void *mtk_d,
                                                 kal_uint8 *frame,
                                                 unsigned int bit_offset,
                                                 unsigned int fr_size,
                                                 void *err_hndl)
{
    smsal_submit_peer_struct *s = (smsal_submit_peer_struct *) mtk_d;
    int bits = bit_offset, skip_bits = 0;
    int i = 0;

    s->reply_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->udh_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->status_rep_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->vp_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    s->rej_dup_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->msg_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    s->msg_ref = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* unpack length and address type of TP-DA */
    for (i = 0; i < 2; i++)
    {
        s->dest_addr[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* max: 20 digits */
    if (s->dest_addr[0] > ((SMSAL_ADDR_LEN - 1) * 2))
    {
        s->dest_addr[0] = (SMSAL_ADDR_LEN - 1) * 2;
    }

    /* unpack address (BCD number) of TP-DA */
    for (i = 0; i < (s->dest_addr[0] + 1) / 2; i++)
    {
        s->dest_addr[i + 2] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    s->pid = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    s->dcs = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* unpack VP according to VP format */
    s->no_validity_period = 0;
    switch (s->vp_flag)
    {
        case 2:                        /* relative format */
            s->no_validity_period = 1;
            s->validity_period[0] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
            break;

        case 1:                        /* enhanced format, GO THROUGH */
        case 3:                        /* absolute format */
            for (i = 0; i < 7; i++)
            {
                s->no_validity_period = 7;
                s->validity_period[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
                frame += (((bits & 0x07) + 8) >> 3);
                bits += 8;
            }
            break;
    }                                   /* switch */

    s->user_data_len = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    if (s->user_data_len > 0)
    {
        /* unpack User Data according TP-DCS */
        s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

        if (s->no_user_data > SMSAL_ONE_MSG_OCTET)
            s->no_user_data = SMSAL_ONE_MSG_OCTET;

        for (i = 0; i < s->no_user_data; i++)
        {
            s->user_data[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }                                   /* if */

    return bits - bit_offset - skip_bits;
}
#endif /* NSTD_SMSAL_SUBMIT_PEER_STRUCT_UNPACK */

#ifdef NSTD_SMSAL_DELIVER_PEER_STRUCT_BITS
EXP unsigned int smsal_deliver_peer_struct_bits(void *mtk_d)
{
    smsal_deliver_peer_struct *s = (smsal_deliver_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 8;                          /* fo */
    size += 8 * s->no_orig_addr;
    size += 8;                          /* pid present */
    size += 8;                          /* dcs present */
    size += 56;                         /* scts */

    size += 8;                      /* user data length */
    size += 8 * s->no_user_data;

    return size;
}
#endif /* NSTD_SMSAL_DELIVER_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_DELIVER_PEER_STRUCT_ALLOC
EXP void smsal_deliver_peer_struct_alloc(void *mtk_d)
{
    smsal_deliver_peer_struct *s = (smsal_deliver_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_deliver_peer_struct));
    s->orig_addr_size = 12;
    s->no_orig_addr = 0;
    s->orig_addr = (kal_uint8 *) get_ctrl_buffer (12 * sizeof(kal_uint8));
    {
        int i = 0;

        for (i = 0; i < 7; i++)
        {
        }
    }
    s->user_data_size = 140;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (140 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_DELIVER_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_DELIVER_PEER_STRUCT_DEALLOC
EXP void smsal_deliver_peer_struct_dealloc(void *mtk_d)
{
    smsal_deliver_peer_struct *s = (smsal_deliver_peer_struct *) mtk_d;

    if (s->orig_addr != NULL)
    {
        free_ctrl_buffer (s->orig_addr);
        s->orig_addr = 0;
    }

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
        s->user_data_size = 0;
    }
}
#endif /* NSTD_SMSAL_DELIVER_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_DELIVER_PEER_STRUCT_PACK
/*****************************************************************************
* FUNCTION
*  smsal_deliver_peer_struct_pack
* DESCRIPTION
*   This function is used to pack SMS-DELIVER.
*  
* PARAMETERS
*  a  IN       *frame
*  b  IN       *s
*  c  IN       bit_offset
* RETURNS
*  number of packed bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_deliver_peer_struct_pack(kal_uint8 *frame,
                                                void *mtk_d,
                                                unsigned int bit_offset)
{
    smsal_deliver_peer_struct *s = (smsal_deliver_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i = 0;

    put_bits_1_8(frame, (bits & 0x07), 1, s->reply_flag);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->status_rep_flag);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->fill_bits);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 1, s->mms);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;

    /* pack length and address type of TP-OA */
    for (i = 0; i < 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->orig_addr[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* pack address (BCD number) of TP-OA */
    for (i = 0; i < (s->orig_addr[0] + 1) / 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->orig_addr[i + 2]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    for (i = 0; i < 7; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->scts[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /*
     * s->no_user_data shall be set according to TP-DCS and 
     * * s->user_data shall be packed according to TP-DCS as well 
     * * before calling this function 
     */
    if (s->no_user_data > 0)
    {
        for (i = 0; i < s->no_user_data; i++)
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_DELIVER_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_DELIVER_PEER_STRUCT_UNPACK
/*****************************************************************************
* FUNCTION
*  smsal_submit_peer_struct_unpack
* DESCRIPTION
*   This function is used to unpack SMS-SUBMIT.
*  
* PARAMETERS
*  a  IN       *s
*  b  IN       *frame
*  c  IN       bit_offset
*  d  IN       fr_size
*  e  IN       err_hndl, error handler
* RETURNS
*  number of unpacked bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_deliver_peer_struct_unpack(void *mtk_d,
                                                  kal_uint8 * frame,
                                                  unsigned int bit_offset,
                                                  unsigned int fr_size,
                                                  void *err_hndl)
{
    smsal_deliver_peer_struct *s = (smsal_deliver_peer_struct *) mtk_d;
    int bits = bit_offset, skip_bits = 0;
    int i = 0;

    s->reply_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->udh_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->status_rep_flag = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->fill_bits = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    s->mms = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->msg_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;

    /* unpack length and address type of TP-OA */
    for (i = 0; i < 2; i++)
    {
        s->orig_addr[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* max: 20 digits */
    if (s->orig_addr[0] > ((SMSAL_ADDR_LEN - 1) * 2))
    {
        s->orig_addr[0] = (SMSAL_ADDR_LEN - 1) * 2;
    }

    /* unpack address (BCD number) of TP-OA */
    for (i = 0; i < (s->orig_addr[0] + 1) / 2; i++)
    {
        s->orig_addr[i + 2] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    s->pid = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);

#if defined (__SMS_SOFTBANK__)
    if( ((s->pid >= 0x40)&&(s->pid <=0x47))||(s->pid == 0x5f))
    {
        s->pid = 0;
	    put_bits_1_8(frame, (bits & 0x07), 8, 0);
    }
#endif

    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    s->dcs = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    for (i = 0; i < 7; i++)
    {
        s->scts[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    s->user_data_len = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    if (s->user_data_len > 0)
    {
        /* unpack User Data according TP-DCS */
        s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

        if (s->no_user_data > SMSAL_ONE_MSG_OCTET)
            s->no_user_data = SMSAL_ONE_MSG_OCTET;

        for (i = 0; i < s->no_user_data; i++)
        {
            s->user_data[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }                                   /* if */

    return bits - bit_offset - skip_bits;
}
#endif /* NSTD_SMSAL_DELIVER_PEER_STRUCT_UNPACK */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_ALLOC
EXP void smsal_submit_report_nack_peer_struct_alloc(void *mtk_d)
{
    smsal_submit_report_nack_peer_struct *s = (smsal_submit_report_nack_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_submit_report_nack_peer_struct));

    s->user_data_size = 151;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (151 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_DEALLOC
EXP void smsal_submit_report_nack_peer_struct_dealloc(void *mtk_d)
{
    smsal_submit_report_nack_peer_struct *s = (smsal_submit_report_nack_peer_struct *) mtk_d;

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_BITS
EXP unsigned int smsal_submit_report_nack_peer_struct_bits(void *mtk_d)
{
    smsal_submit_report_nack_peer_struct *s = (smsal_submit_report_nack_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 1;
    size += 1;
    size += 4;
    size += 2;
    size += 8;                          /* failure cause */
    size += 8;                          /* parameter indicator */
    size += 56;                         /* scts */

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
        size += 8;

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
        size += 8;

    if ((s->params_p & 0x04) == 0x04)   /* UDL present */
    {
        size += 8;
        size += 8 * s->no_user_data;
    }
    return size;
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_PACK
EXP unsigned int smsal_submit_report_nack_peer_struct_pack(kal_uint8 *frame,
                                                           void *mtk_d,
                                                           unsigned int bit_offset)
{
    smsal_submit_report_nack_peer_struct *s = (smsal_submit_report_nack_peer_struct *) mtk_d;
    int i;
    int bits = bit_offset;

    put_bits_1_8(frame, (bits & 0x07), 1, s->fill_bits2);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 4, s->fill_bits1);
    /* frame += (((bits&0x07) + 4) >> 3); */
    bits += 4;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->fail_cause);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->params_p);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    for (i = 0; i < 7; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->scts[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x04) == 0x04)   /* UDL present */
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        if (s->user_data_len > 0)
        {
            /* unpack User Data according TP-DCS */
            s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

            for (i = 0; i < s->no_user_data; i++)
            {
                put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
                frame += (((bits & 0x07) + 8) >> 3);
                bits += 8;
            }
        }                               /* if */
    }

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_UNPACK
/*****************************************************************************
* FUNCTION
*  smsal_submit_report_nack_peer_struct_unpack
* DESCRIPTION
*   This function is used to unpack SMS-SUBMIT-REPORT (NACK).
*  
* PARAMETERS
*  a  IN       *s
*  b  IN       *frame
*  c  IN       bit_offset
*  d  IN       fr_size
*  e  IN       err_hndl, error handler
* RETURNS
*  number of unpacked bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_submit_report_nack_peer_struct_unpack(void *mtk_d,
                                                             kal_uint8 *frame,
                                                             unsigned int bit_offset,
                                                             unsigned int fr_size,
                                                             void *err_hndl)
{
    smsal_submit_report_nack_peer_struct *s = (smsal_submit_report_nack_peer_struct *) mtk_d;
    int bits = bit_offset, skip_bits = 0;
    int i = 0;

    s->fill_bits2 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->udh_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->fill_bits1 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 4);
    /* frame += (((bits&0x07) + 4) >> 3); */
    bits += 4;
    s->msg_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    s->fail_cause = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    s->params_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    for (i = 0; i < 7; i++)
    {
        s->scts[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
    {
        s->pid = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
    {
        s->dcs = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x04) == 0x04)   /* UDL present */
    {
        s->user_data_len = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        if (s->user_data_len > 0)
        {
            /* unpack User Data according TP-DCS */
            s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

            if (s->no_user_data > s->user_data_size)
                s->no_user_data = s->user_data_size;

            for (i = 0; i < s->no_user_data; i++)
            {
                s->user_data[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
                frame += (((bits & 0x07) + 8) >> 3);
                bits += 8;
            }
        }                               /* if */
    }

    return bits - bit_offset - skip_bits;
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_NACK_PEER_STRUCT_UNPACK */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_ALLOC
EXP void smsal_submit_report_ack_peer_struct_alloc(void *mtk_d)
{
    smsal_submit_report_ack_peer_struct *s = (smsal_submit_report_ack_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_submit_report_ack_peer_struct));

    s->user_data_size = 152;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (152 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_DEALLOC
EXP void smsal_submit_report_ack_peer_struct_dealloc(void *mtk_d)
{
    smsal_submit_report_ack_peer_struct *s = (smsal_submit_report_ack_peer_struct *) mtk_d;

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_UNPACK
/*****************************************************************************
* FUNCTION
*  smsal_submit_report_ack_peer_struct_unpack
* DESCRIPTION
*   This function is used to unpack SMS-SUBMIT-REPORT (ACK).
*  
* PARAMETERS
*  a  IN       *s
*  b  IN       *frame
*  c  IN       bit_offset
*  d  IN       fr_size
*  e  IN       err_hndl, error handler
* RETURNS
*  number of unpacked bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_submit_report_ack_peer_struct_unpack(void *mtk_d,
                                                            kal_uint8 *frame,
                                                            unsigned int bit_offset,
                                                            unsigned int fr_size,
                                                            void *err_hndl)
{
    smsal_submit_report_ack_peer_struct *s = (smsal_submit_report_ack_peer_struct *) mtk_d;
    int bits = bit_offset, skip_bits = 0;
    int i = 0;

    s->fill_bits2 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->udh_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->fill_bits1 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 4);
    /* frame += (((bits&0x07) + 4) >> 3); */
    bits += 4;
    s->msg_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    s->params_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    for (i = 0; i < 7; i++)
    {
        s->scts[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x01) == 0x01)   /* pid present */
    {
        s->pid = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x02) == 0x02)   /* dcs present */
    {
        s->dcs = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if ((s->params_p & 0x04) == 0x04)   /* UDL present */
    {
        s->user_data_len = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        if (s->user_data_len > 0)
        {
            /* unpack User Data according TP-DCS */
            s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

            if (s->no_user_data > s->user_data_size)
                s->no_user_data = s->user_data_size;

            for (i = 0; i < s->no_user_data; i++)
            {
                s->user_data[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
                frame += (((bits & 0x07) + 8) >> 3);
                bits += 8;
            }
        }
    }

    return bits - bit_offset - skip_bits;
}
#endif /* NSTD_SMSAL_SUBMIT_REPORT_ACK_PEER_STRUCT_UNPACK */

#ifdef NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_ALLOC
EXP void smsal_status_report_peer_struct_alloc(void *mtk_d)
{
    smsal_status_report_peer_struct *s = (smsal_status_report_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_status_report_peer_struct));
    s->rcpnt_addr_size = 12;
    s->no_rcpnt_addr = 0;
    s->rcpnt_addr = (kal_uint8 *) get_ctrl_buffer (12 * sizeof(kal_uint8));

    s->user_data_size = 143;
    s->no_user_data = 0;
    s->user_data = (kal_uint8 *) get_ctrl_buffer (143 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_DEALLOC
EXP void smsal_status_report_peer_struct_dealloc(void *mtk_d)
{
    smsal_status_report_peer_struct *s = (smsal_status_report_peer_struct *) mtk_d;

    if (s->rcpnt_addr != NULL)
    {
        free_ctrl_buffer (s->rcpnt_addr);
        s->rcpnt_addr = 0;
    }

    if (s->user_data != NULL)
    {
        free_ctrl_buffer (s->user_data);
        s->user_data = 0;
    }
}
#endif /* NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_BITS
EXP unsigned int smsal_status_report_peer_struct_bits(void *mtk_d)
{
    smsal_status_report_peer_struct *s = (smsal_status_report_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 8;                          /* first octet */
    size += 8;                          /* message reference */
    size += 8 * s->no_rcpnt_addr;       /* TP-RA */
    size += 56;                         /* scts */
    size += 56;                         /* discharge time */
    size += 8;                          /* status */

    if (s->params_p != 0)
    {
        size += 8;                      /* parameter indicator */

        if ((s->params_p & 0x01) == 0x01)       /* pid present */
            size += 8;

        if ((s->params_p & 0x02) == 0x02)       /* dcs present */
            size += 8;

        if ((s->params_p & 0x04) == 0x04)       /* UDL present */
        {
            size += 8;
            size += 8 * s->no_user_data;
        }
    }                                   /* parameter indicator exist ? */

    return size;
}
#endif /* NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_PACK
EXP unsigned int smsal_status_report_peer_struct_pack(kal_uint8 *frame,
                                                      void *mtk_d,
                                                      unsigned int bit_offset)
{
    smsal_status_report_peer_struct *s = (smsal_status_report_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i;

    put_bits_1_8(frame, (bits & 0x07), 1, s->fill_bits1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->status_rep_type);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->fill_bits2);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 1, s->mms);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->msg_ref);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* pack length and address type of TP-RA */
    for (i = 0; i < 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->rcpnt_addr[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* pack address (BCD number) of TP-RA */
    for (i = 0; i < (s->rcpnt_addr[0] + 1) / 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->rcpnt_addr[i + 2]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    for (i = 0; i < 7; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->scts[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    for (i = 0; i < 7; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dis_time[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    if (s->params_p != 0)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->params_p);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        if ((s->params_p & 0x01) == 0x01)       /* pid present */
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }

        if ((s->params_p & 0x02) == 0x02)       /* dcs present */
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->dcs);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }

        /* User Data present */
        if (((s->params_p & 0x04) == 0x04) && (s->no_user_data > 0))
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->user_data_len);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;

            /*
             * s->no_user_data shall be set according to TP-DCS and 
             * * s->user_data shall be packed according to TP-DCS as well 
             * * before calling this function 
             */
            for (i = 0; i < s->no_user_data; i++)
            {
                put_bits_1_8(frame, (bits & 0x07), 8, s->user_data[i]);
                frame += (((bits & 0x07) + 8) >> 3);
                bits += 8;
            }
        }
    }                                   /* parameter present */

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_PACK */

#ifdef NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_UNPACK
/*****************************************************************************
* FUNCTION
*  smsal_status_report_peer_struct_unpack
* DESCRIPTION
*   This function is used to unpack SMS-STATUS-REPORT.
*  
* PARAMETERS
*  a  IN       *s
*  b  IN       *frame
*  c  IN       bit_offset
*  d  IN       fr_size
*  e  IN       err_hndl, error handler
* RETURNS
*  number of unpacked bits
* GLOBALS AFFECTED
*  none
*****************************************************************************/
EXP unsigned int smsal_status_report_peer_struct_unpack(void *mtk_d,
                                                        kal_uint8 *frame,
                                                        unsigned int bit_offset,
                                                        unsigned int fr_size,
                                                        void *err_hndl)
{
    smsal_status_report_peer_struct *s = (smsal_status_report_peer_struct *) mtk_d;
    int bits = bit_offset, skip_bits = 0;
    int i = 0;

    s->fill_bits1 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->udh_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->status_rep_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->fill_bits2 = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    /* frame += (((bits&0x07) + 2) >> 3); */
    bits += 2;
    s->mms = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    s->msg_type = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 2);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    s->msg_ref = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* unpack length and address type of TP-RA */
    for (i = 0; i < 2; i++)
    {
        s->rcpnt_addr[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* max: 20 digits */
    if (s->rcpnt_addr[0] > ((SMSAL_ADDR_LEN - 1) * 2))
    {
        s->rcpnt_addr[0] = (SMSAL_ADDR_LEN - 1) * 2;
    }

    /* unpack address (BCD number) of TP-RA */
    for (i = 0; i < (s->rcpnt_addr[0] + 1) / 2; i++)
    {
        s->rcpnt_addr[i + 2] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    for (i = 0; i < 7; i++)
    {
        s->scts[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    for (i = 0; i < 7; i++)
    {
        s->dis_time[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    s->status = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* 19: fo(1), mr(1), ra_len(1), ra_type(1), scts(7), dis(7), st(1) */
    if (fr_size > (unsigned int)(19 + (s->rcpnt_addr[0] + 1) / 2))
    {
        s->params_p = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;

        if ((s->params_p & 0x01) == 0x01)       /* pid present */
        {
            s->pid = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }

        if ((s->params_p & 0x02) == 0x02)       /* dcs present */
        {
            s->dcs = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }

        if ((s->params_p & 0x04) == 0x04)       /* UDL present */
        {
            s->user_data_len = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;

            if (s->user_data_len > 0)
            {
                /* unpack User Data according TP-DCS */
                s->no_user_data = (kal_uint8) smsal_msg_len_in_octet(s->dcs, s->user_data_len);

                if (s->no_user_data > s->user_data_size)
                    s->no_user_data = s->user_data_size;

                for (i = 0; i < s->no_user_data; i++)
                {
                    s->user_data[i] = (kal_uint8) get_bits_1_8(frame, (bits & 0x07), 8);
                    frame += (((bits & 0x07) + 8) >> 3);
                    bits += 8;
                }
            }
        }
    }                                   /* if (fr_size...) */

    return bits - bit_offset - skip_bits;
}
#endif /* NSTD_SMSAL_STATUS_REPORT_PEER_STRUCT_UNPACK */

#ifdef NSTD_SMSAL_COMMAND_PEER_STRUCT_ALLOC
EXP void smsal_command_peer_struct_alloc(void *mtk_d)
{
    smsal_command_peer_struct *s = (smsal_command_peer_struct *) mtk_d;

    kal_mem_set(s, 0, sizeof(smsal_command_peer_struct));
    s->dest_addr_size = 12;
    s->no_dest_addr = 0;
    s->dest_addr = (kal_uint8 *) get_ctrl_buffer (12 * sizeof(kal_uint8));
    s->cmd_data_size = 156;
    s->no_cmd_data = 0;
    s->cmd_data = (kal_uint8 *) get_ctrl_buffer (156 * sizeof(kal_uint8));
}
#endif /* NSTD_SMSAL_COMMAND_PEER_STRUCT_ALLOC */

#ifdef NSTD_SMSAL_COMMAND_PEER_STRUCT_DEALLOC
EXP void smsal_command_peer_struct_dealloc(void *mtk_d)
{
    smsal_command_peer_struct *s = (smsal_command_peer_struct *) mtk_d;

    if (s->dest_addr != NULL)
    {
        free_ctrl_buffer (s->dest_addr);
        s->dest_addr = 0;
    }
    if (s->cmd_data != NULL)
    {
        free_ctrl_buffer (s->cmd_data);
        s->cmd_data = 0;
    }
}
#endif /* NSTD_SMSAL_COMMAND_PEER_STRUCT_DEALLOC */

#ifdef NSTD_SMSAL_COMMAND_PEER_STRUCT_BITS
EXP unsigned int smsal_command_peer_struct_bits(void *mtk_d)
{
    smsal_command_peer_struct *s = (smsal_command_peer_struct *) mtk_d;
    unsigned int size = 0;

    size += 1;
    size += 1;
    size += 1;
    size += 3;
    size += 2;
    size += 8;                          /* msg ref */
    size += 8;                          /* pid */
    size += 8;                          /* cmd type */
    size += 8;                          /* msg number */
    size += 8 * s->no_dest_addr;        /* dest addr */
    size += 8;                          /* cmd data length */
    size += 8 * s->cmd_data_len;        /* cmd data */
    return size;
}
#endif /* NSTD_SMSAL_COMMAND_PEER_STRUCT_BITS */

#ifdef NSTD_SMSAL_COMMAND_PEER_STRUCT_PACK
EXP unsigned int smsal_command_peer_struct_pack(kal_uint8 *frame,
                                                void *mtk_d,
                                                unsigned int bit_offset)
{
    smsal_command_peer_struct *s = (smsal_command_peer_struct *) mtk_d;
    int bits = bit_offset;
    int i = 0;

    put_bits_1_8(frame, (bits & 0x07), 1, s->fill_bits1);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->udh_p);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 1, s->status_rep_req);
    /* frame += (((bits&0x07) + 1) >> 3); */
    bits += 1;
    put_bits_1_8(frame, (bits & 0x07), 3, s->fill_bits3);
    /* frame += (((bits&0x07) + 3) >> 3); */
    bits += 3;
    put_bits_1_8(frame, (bits & 0x07), 2, s->msg_type);
    frame += (((bits & 0x07) + 2) >> 3);
    bits += 2;
    put_bits_1_8(frame, (bits & 0x07), 8, s->msg_ref);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->pid);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->cmd_type);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;
    put_bits_1_8(frame, (bits & 0x07), 8, s->msg_num);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    /* pack length and address type of TP-DA */
    for (i = 0; i < 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dest_addr[i]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    /* pack address (BCD number) of TP-DA */
    for (i = 0; i < (s->dest_addr[0] + 1) / 2; i++)
    {
        put_bits_1_8(frame, (bits & 0x07), 8, s->dest_addr[i + 2]);
        frame += (((bits & 0x07) + 8) >> 3);
        bits += 8;
    }

    put_bits_1_8(frame, (bits & 0x07), 8, s->cmd_data_len);
    frame += (((bits & 0x07) + 8) >> 3);
    bits += 8;

    if (s->cmd_data_len > 0)
    {
        for (i = 0; i < s->cmd_data_len; i++)
        {
            put_bits_1_8(frame, (bits & 0x07), 8, s->cmd_data[i]);
            frame += (((bits & 0x07) + 8) >> 3);
            bits += 8;
        }
    }

    return bits - bit_offset;
}
#endif /* NSTD_SMSAL_COMMAND_PEER_STRUCT_PACK */

