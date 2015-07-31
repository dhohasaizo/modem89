/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2012
 *
 *  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 *  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
 *  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES
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
 * MCD_MM_COMMON_GEN_STRUCT_H
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
 * MCD parser
 *
 ****************************************************************************/
#ifndef _MCD_MM_COMMON_GEN_STRUCT_H
#define _MCD_MM_COMMON_GEN_STRUCT_H
#include "kal_general_types.h"
#include "mcd_l3_inc_struct.h"
typedef struct _mm_peer_hdr_struct
{
	kal_uint8 skip_ind;
	kal_uint8 proto_disc;
	kal_uint8 msg_type;
} mm_peer_hdr_struct;


typedef struct _timer_struct
{
	kal_uint8 timer_unit;
	kal_uint8 timer_val;
} timer_struct;


typedef struct _timer_2_struct
{
	kal_uint8 timer_2_len;
	kal_uint8 timer_unit;
	kal_uint8 timer_val;
} timer_2_struct;


typedef struct _identity_type_struct
{
	kal_uint8 identity_type_spare;
	kal_uint8 identity_type;
} identity_type_struct;


typedef struct _ptmsi_struct
{
	kal_uint8 length;
	kal_uint8 nibble;
	kal_uint8 odd_or_even;
	kal_uint8 identity_type;
	kal_uint8 ptmsi_byte[4];
} ptmsi_struct;


typedef struct _peer_rai_struct
{
	peer_plmn_id_struct plmn_id;
	kal_uint8 la_code[2];
	kal_uint8 rac;
} peer_rai_struct;


typedef struct _data_list
{
	kal_uint8 data_iei;
	kal_uint8 data_opn;
	kal_uint8 data_val;
} data_list;


typedef struct _nw_time_zone_time_struct
{
	kal_uint8 year;
	kal_uint8 month;
	kal_uint8 day;
	kal_uint8 hour;
	kal_uint8 min;
	kal_uint8 sec;
	kal_uint8 time_zone;
} nw_time_zone_time_struct;


typedef struct _mm_peer_information_struct
{
	kal_uint8 skip_ind;
	kal_uint8 proto_disc;
	kal_uint8 msg_type;
	kal_uint8 full_nw_nameP;
	kal_uint8 no_full_nw_name;
	kal_uint8 *full_nw_name;
	kal_uint8 short_nw_nameP;
	kal_uint8 no_short_nw_name;
	kal_uint8 *short_nw_name;
	kal_uint8 local_time_zoneP;
	kal_uint8 local_time_zone;
	kal_uint8 universal_time_zoneP;
	nw_time_zone_time_struct universal_time_zone;
	kal_uint8 lsa_idP;
	kal_uint8 no_lsa_id;
	kal_uint8 *lsa_id;
	kal_uint8 nw_day_light_saving_timeP;
	kal_uint8 no_nw_day_light_saving_time;
	kal_uint8 *nw_day_light_saving_time;
} mm_peer_information_struct;


#endif /*_MCD_MM_COMMON_GEN_STRUCT_H*/
