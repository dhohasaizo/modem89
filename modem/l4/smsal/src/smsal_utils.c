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
 * smsal_utils.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains some utility functions.
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

#ifndef __SMSAL_UTILS_C
#define __SMSAL_UTILS_C
#endif

#include "smsal_l4c_enum.h"             /* for smsal_alphabet_enum */
#include "smsal_l4c_defs.h"
#include "smsal_enums.h"
#include "smsal_defs.h"
#include "smsal_structs.h"
#include "smsal_context.h"

/* Trace */
#include "kal_trace.h"
#include "smsal_trc.h"

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"

/* 2005/12/19 */
/* Move from init.c to be convenient for building of MCD DLL file. */
#ifdef __GEMINI__
smsal_context_struct smsal_g[SMSAL_MAX_SIM_NUM];
#else
smsal_context_struct smsal_g;
#endif

smsal_context_struct *smsal_ptr_g;
module_type smsal_cur_mod;

smsal_parameter_struct *smsal_para_ptr_g;

/* for speeding up pack/unpack of GSM 7-bit data */
const kal_uint8 smsal_bit_mask[8] = {0x7f, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f};

/*****************************************************************************
* FUNCTION
*  smsal_decode_dcs
* DESCRIPTION
*   This function decodes the data coding scheme.
*
* PARAMETERS
*  a  IN       dcs
*  b  IN/OUT   alphabet_type
*  c  IN/OUT   msg_class
*  d  IN/OUT   compress
*  e  IN/OUT   msg_wait
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_decode_dcs(kal_uint8                 dcs,
                      smsal_alphabet_enum       *alphabet_type,
                      smsal_msg_class_enum      *msg_class,
                      kal_bool                  *is_compress,
                      smsal_msg_waiting_struct  *msg_wait)
{
    kal_uint8 coding_group;

    /* Default DCS value */
    *alphabet_type = SMSAL_GSM7_BIT;
    *msg_class = SMSAL_CLASS_UNSPECIFIED;
    *is_compress = KAL_FALSE;

    if (dcs == 0)
        return;

    coding_group = dcs >> 4;

    if (coding_group == 0x0f)           /* Data Coding/Message Class */
    {
        /*
         * SCR: 2001,
         * * ensure the reserved bit is zero
         */
        if ((dcs & 0x08) == 0x08)
        {
            *alphabet_type = SMSAL_ALPHABET_UNSPECIFIED;
        }
        else
        {
            *msg_class = (smsal_msg_class_enum) (dcs & 0x03);
            *alphabet_type = (smsal_alphabet_enum) ((dcs & 0x04) >> 2);
        }
    }
    else if ((coding_group | 0x07) == 0x07)     /* General Data Coding Scheme */
    {
        if ((dcs & 0x10) == 0x10)
            *msg_class = (smsal_msg_class_enum) (dcs & 0x03);
        else
            *msg_class = SMSAL_CLASS_UNSPECIFIED;

        *alphabet_type = (smsal_alphabet_enum) ((dcs >> 2) & 0x03);
        if (((coding_group & 0x02) >> 1) == 1)
            *is_compress = KAL_TRUE;
    }
    else if ((coding_group & 0x0c) == 0x08)
    {
        /*
         * according GSM 23.038 clause 4:
         * "Any reserved codings shall be assumed to be the GSM 7 bit default alphabet."
         */
    }
    else if (((coding_group & 0x0f) == 0x0c) || /* discard */
             ((coding_group & 0x0f) == 0x0d) || /* store, gsm-7 */
             ((coding_group & 0x0f) == 0x0e))   /* store, ucs2 */
    {

        /* 1110: msg wait ind (store, ucs2) */
        if ((coding_group & 0x0f) == 0x0e)
            *alphabet_type = SMSAL_UCS2;

        if (msg_wait != NULL)
        {
            msg_wait->type_of_info |= SMSAL_MSG_WAIT_DCS;
            msg_wait->is_msg_wait = KAL_TRUE;
        }
    }

    /*
     * if the reserved bit been set or the alphabet_type uses the reserved one,
     * then according GSM 23.038 clause 4:
     * "Any reserved codings shall be assumed to be the GSM default alphabet."
     * we change it as SMSAL_GSM7_BIT
     */

    if (*alphabet_type == SMSAL_ALPHABET_UNSPECIFIED)
    {
        *alphabet_type = SMSAL_GSM7_BIT;
    }

}                                       /* end of smsal_decode_dcs */


/*****************************************************************************
* FUNCTION
*  smsal_set_dcs
* DESCRIPTION
*   This function sets the data coding scheme according to inputed
*   alphabet type.
*
* PARAMETERS
*  a  IN       dcs
*  b  IN/OUT   alphabet_type
* RETURNS
*  dcs
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_set_dcs(kal_uint8 dcs, smsal_alphabet_enum alphabet_type)
{
    kal_uint8 coding_group;

    coding_group = dcs >> 4;

    if (coding_group == 0x0f)           /* Data Coding/Message Class */
    {
        if (alphabet_type == SMSAL_EIGHT_BIT)
            dcs |= 0x04;                /* set bit2 */
        else
            dcs &= ~0x04;               /* clear bit2 */
    }
    else if ((coding_group | 0x03) == 0x03)     /* General Data Coding Scheme */
    {
        switch (alphabet_type)
        {
            case SMSAL_EIGHT_BIT:
                dcs &= ~0x08;           /* clear bit3 */
                dcs |= 0x04;            /* set bit2 */
                break;

            case SMSAL_UCS2:
                dcs |= 0x08;            /* set bit3 */
                dcs &= ~0x04;           /* clear bit2 */
                break;

            default:
                dcs &= ~0x08;           /* clear bit3 */
                dcs &= ~0x04;           /* clear bit2 */
                break;
        }
    }
    return dcs;
}                                       /* end of smsal_set_dcs */


/*****************************************************************************
* FUNCTION
*  smsal_is_len_in8bit
* DESCRIPTION
*   This function determines the unit of TP-User-Data.
*
* PARAMETERS
*  a  IN          dcs
* RETURNS
*  KAL_TRUE: length in octet
*  KAL_TRUE: length in septet
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_bool smsal_is_len_in8bit(kal_uint8 dcs)
{
    kal_bool is_compress;
    smsal_alphabet_enum alphabet_type;
    smsal_msg_class_enum mclass;

    smsal_decode_dcs(dcs, &alphabet_type, &mclass, &is_compress, NULL);

    if ((is_compress == KAL_TRUE) ||
        (alphabet_type == SMSAL_EIGHT_BIT) ||
        (alphabet_type == SMSAL_UCS2))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }

}                                       /* end of smsal_is_len_in8bit */


/*****************************************************************************
* FUNCTION
*  smsal_msg_len_in_octet
* DESCRIPTION
*   This function return the number of bytes of TP-User-Data.
*
* PARAMETERS
*  a  IN          dcs
*  b  IN          len, TP-User-Data-Len
* RETURNS
*  length in octets
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_msg_len_in_octet(kal_uint8 dcs, kal_uint16 len)
{
    if (smsal_is_len_in8bit(dcs) == KAL_TRUE)
    {
        return len;
    }
    else
    {
        return (len * 7 + 7) / 8;
    }
}                                       /* end of smsal_msg_len_in_octet */


/*****************************************************************************
* FUNCTION
*  smsal_msg_len_in_character
* DESCRIPTION
*   This function return TP-User-Data-Len. This function is called
*   when USSD coding is adopted.
*
* PARAMETERS
*  a  IN          dcs
*  b  IN          len, in octets
*  c  IN          last_byte, last byte of TP-User-Date
* RETURNS
*  length of TP-User-Data
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint16 smsal_msg_len_in_character(kal_uint8 dcs, kal_uint16 len, kal_uint8 last_byte)
{
    if (smsal_is_len_in8bit(dcs) == KAL_TRUE)
    {
      /*=================================
       * 8-bit, ucs2 or compressed data
       *=================================*/
        return len;
    }
    else
    {
      /*====================
       * gsm 7-bit
       *====================*/
        if ((len % 7) == 0)
        {
            /*
             * if the length is 7, 14, 21,... we can not ensure the number of
             * * characters exactly, ex: len=7, the no of char can be 7 or 8.
             * * thus we check the last byte, if the last byte is padded
             * * with a <CR>, then no of char shall be (len * 8 / 7) - 1
             */
            if ((last_byte & 0xfe) == 0x1a)
                return ((len * 8) / 7 - 1);
            else
                return (len * 8) / 7;
        }
        else
        {
            return (len * 8) / 7;
        }
    }
}                                       /* end of smsal_msg_len_in_character */


/*****************************************************************************
* FUNCTION
*  smsal_dcs_to_mmi
* DESCRIPTION
*   This function returns DCS which filters out information of
*   message waiting/class/compress.
*
* PARAMETERS
*  a  IN          dcs
* RETURNS
*  dcs
* GLOBALS AFFECTED
*  none
*****************************************************************************/
kal_uint8 smsal_dcs_to_mmi(kal_uint8 dcs)
{
    smsal_alphabet_enum alphabet_type;
    smsal_msg_class_enum msg_class;
    kal_bool is_compress;

    smsal_decode_dcs(dcs, &alphabet_type, &msg_class, &is_compress, NULL);

    if (is_compress == KAL_TRUE)
        return  SMSAL_RESERVED_DCS;

    switch (alphabet_type)
    {
        case SMSAL_GSM7_BIT:
            return SMSAL_DEFAULT_DCS;

        case SMSAL_EIGHT_BIT:
            return SMSAL_8BIT_DCS;

        case SMSAL_UCS2:
            return SMSAL_UCS2_DCS;

        case SMSAL_ALPHABET_UNSPECIFIED:
            return SMSAL_RESERVED_DCS;

        default:
            return SMSAL_DEFAULT_DCS;
    }

}                                       /* end of smsal_dcs_to_mmi */


/*****************************************************************************
* FUNCTION
*  smsal_gsm7_unpack
* DESCRIPTION
*   This function unpacks the GSM 7-bit data.  For example,
*   two packed GSM 7-bit data will be unpacked to the follows:
*
*  bit8                           bit1
*   +-------------------------------+
*   | 0 |    1st GSM 7-bit data     |
*   +-------------------------------+
*   | 0 |    2nd GSM 7-bit data     |
*   +-------------------------------+
*
*
* PARAMETERS
*  a  IN          packed_data
*  b  IN/OUT      unpacked_data
*  c  IN          length of "unpacked" data
*  d  IN          offset, indicate the starting position to unpack
*
*
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_gsm7_unpack(kal_uint8  *packed_data,
                       kal_uint8  *unpacked_data,
                       kal_uint16 data_len,
                       kal_uint16 offset)
{
    kal_uint8 prev_char;

    /*
     * Before enter while-loop, there are two cases:
     * *
     * * (1) no padding:
     * * +----+----------------------+
     * * | 2g | 1a 1b 1c 1d 1e 1f 1g | <-- prev_char  (unpacked 1st octet)
     * * +----+----------------------+
     * * |                           | <-- packed_data
     * * +---------------------------+
     * * unpack 1st octet,  offset = 7
     * *
     * * (2) padding bit(s) presented, eg, 1 padding bit:
     * * +-----------------------+---+
     * * | 1a 1b 1c 1d 1e 1f 1g  | 0 | <-- prev_char
     * * +-----------------------+---+
     * * |                           | <-- packed_data
     * * +---------------------------+
     * * |                           |
     * * +---------------------------+
     * * offset = 1
     */

    if ((data_len == 0) || (packed_data == NULL))
        return;                         /* sanity check */

    prev_char = *packed_data;

    if (offset == 0)
    {
        *unpacked_data = *packed_data & 0x7f;
        unpacked_data = unpacked_data + 1;
        offset = 7;
        data_len = data_len - 1;

    }
    else
    {
        packed_data = packed_data + (offset / 8);
        prev_char = *packed_data;
        offset = offset % 8;
    }

    if (data_len == 0)
        return;

    packed_data = packed_data + 1;

    while (data_len > 0)
    {
        if (offset == 0)
        {
            *unpacked_data = prev_char & 0x7f;
            offset = 7;
        }
        else
        {
            *unpacked_data = prev_char >> offset;
            offset = offset - 1;
            if (offset > 0)
            {
                *unpacked_data = *unpacked_data |
                                 (*packed_data & smsal_bit_mask[offset]) << (7 - offset);
            }
            prev_char = *packed_data;
            packed_data = packed_data + 1;
        }
        unpacked_data = unpacked_data + 1;
        data_len = data_len - 1;

    }                                   /* while */

}                                       /* end of smsal_gsm7_unpack */


/*****************************************************************************
* FUNCTION
*  smsal_gsm7_pack
* DESCRIPTION
*   This function packs the GSM 7-bit data.
*
* PARAMETERS
*  a  IN          unpacked_data, pointer to input data
*  b  IN/OUT      packed_data
*  c  IN          length of unpacked data
*  d  IN          offset, indicate the starting position to pack
*
*
*                      |<--------   length ----------->|
*                      +-------------------------------+
*  unpacked_data --->  |                               |
*                      +-------------------------------+
*
*
*
*                   -->| offset/8 bytes  |<--
*                      | be skipped      |
*                      +-----------------+-------+------+
*  packed_data --->    |                 | OCTET*|  ... |
*                      +-----------------+-------+------+
*
*
* RETURNS
*  none
* GLOBALS AFFECTED
*  none
*****************************************************************************/
void smsal_gsm7_pack(kal_uint8  *unpacked_data,
                     kal_uint8  *packed_data,
                     kal_uint16 data_len,
                     kal_uint16 offset)
{
    if ((data_len == 0) || (unpacked_data == NULL))
        return;                         /* sanity check */

    /*
     * Fill padding bits :
     * *
     * *             -->|  offset%8  |<--
     * *                |bits padding|
     * * +---------------------------+
     * * |              | 0 .....  0 | OCTET*
     * * +---------------------------+
     */
    if (offset > 0)
    {
        packed_data = packed_data + (offset / 8);
        offset = 8 - (offset % 8);
        *packed_data = 0x00;

        /* 2003/02/19 Kevin , valid offset : 0 ~ 7 */
        if (offset == 8)
            offset = 0;
    }

    do
    {
        if (offset == 0)
        {
            *packed_data = *unpacked_data & smsal_bit_mask[offset];
        }
        else
        {
            *packed_data = *packed_data |
                           ((*unpacked_data & smsal_bit_mask[offset]) << (8 - offset));

            packed_data = packed_data + 1;

            if (offset < 7)
                *packed_data = *unpacked_data >> offset;
        }
        offset = (offset < 7) ? (offset + 1) : 0;
        unpacked_data = unpacked_data + 1;
        data_len = data_len - 1;
    } while (data_len > 0);

}                                       /* end of smsal_gsm7_pack */


/*
 * calculate offset to unpack message, eg: if UDH contains only
 * * concatenated 8-bit reference, then udhl = 6, thus need
 * * 7 septets to contain 6 octets
 */
kal_uint16 smsal_compute_udh_offset(kal_uint8 udhl)
{
    kal_uint16 offset = (udhl * 8) / 7;

    if (((udhl * 8) % 7) > 0)
        offset = offset + 1;
    return (offset * 7);                /* in terms of bits */
}

void smsal_bitmap_clr_index(kal_uint16 index, kal_uint8 * bitmap_ptr)
{
    kal_uint16 byte_index;
    kal_uint8 bit_index;

    byte_index = (index >> 3);          /* divide 8 */
    bit_index = (index & 0x7);          /* reminder */

    bitmap_ptr[byte_index] &= (~(0x01 << bit_index));

    return;

}

void smsal_bitmap_set_index(kal_uint16 index, kal_uint8 * bitmap_ptr)
{
    kal_uint16 byte_index;
    kal_uint8 bit_index;

    byte_index = (index >> 3);          /* divide 8 */
    bit_index = (index & 0x7);          /* reminder */

    bitmap_ptr[byte_index] |= (0x01 << bit_index);

    return;
}

#ifndef __SMS_STORAGE_BY_MMI__
kal_uint16 smsal_bitmap_get_next_index(kal_uint16 start_idx, kal_uint8 *bitmap_ptr)
{
    smsal_context_struct *smsal_cntx_ptr=smsal_ptr_g;
    kal_uint16 start_byte_idx, i, index;
    kal_uint8 start_bit_idx, j, mapping_byte;

    start_byte_idx = (start_idx >> 3);  /* divide 8 */
    start_bit_idx = (start_idx & 0x7);  /* reminder */

    for (i = start_byte_idx; i < ((SMSAL_MAX_MSG_NUM >> 3) + 1); i++)
    {

        mapping_byte = bitmap_ptr[i];

        for (j = start_bit_idx; j < 8; j++)
        {
            if (((mapping_byte >> j) & 0x01) == 0x01)
            {
                /* got it. */
                index = i * 8 + j;

                // [MAUI_01772854] invalid index would corrupt memory
                if( index >= (SMSAL_MAX_MSG_NUM) )
                {
                    return SMSAL_INVALID_INDEX;
                }

                /* It doesn't need to check if the entry is valid.                                */
                /* Because if MMI attempt to delete a free entry, it means msg_box is not         */
                /* synch. between MMI and PS.                                                     */
                /* PS shall return successful deleting of the free entry to synch. MMI's msg_box. */

                /* for 221999, keeps this check to avoid deleting twice */
                if((&(smsal_cntx_ptr->message_box[index]))->state == SMSAL_MB_ENTRY_VALID)
                {
                    return index;
                }
                else
                {
                    /*kal_trace(TRACE_ERROR,\
                              SMSAL_MSGBOX_DEL_EMPTY_ERROR,\
                              (&(smsal_cntx_ptr->message_box[index]))->storage_type,\
                              (&(smsal_cntx_ptr->message_box[index]))->record_no);*/
                }
            }
        }

        start_bit_idx = 0;
    }

    return SMSAL_INVALID_INDEX;
}

kal_bool smsal_bitmap_is_index_set(kal_uint16 query_idx, kal_uint8 *bitmap_ptr)
{

    kal_uint16 byte_index;
    kal_uint8 bit_index;

    byte_index = (query_idx >> 3);      /* divide 8 */
    bit_index = (query_idx & 0x7);      /* reminder */

    if (((bitmap_ptr[byte_index] >> bit_index) & 0x01) == 0x01)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}
#endif //__SMS_STORAGE_BY_MMI__


kal_uint16 smsal_bitmap_get_free_index(kal_uint16 max_idx, kal_uint8 *bitmap_ptr)
{
    kal_uint16 byte_idx, index;
    kal_uint8 bit_idx, mapping_byte;

    for (byte_idx = 0; byte_idx < ((max_idx >> 3) + 1); byte_idx++)
    {

        mapping_byte = bitmap_ptr[byte_idx];

        for (bit_idx = 0; bit_idx < 8; bit_idx++)
        {
            if (((mapping_byte >> bit_idx) & 0x01) == 0x00)
            {
                /* got free. */
                index = byte_idx * 8 + bit_idx;
                return index;
            }
        }
    }

    return SMSAL_INVALID_INDEX;
}


