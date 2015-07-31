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
 * mph_ps_def.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Layer 1 and Protocol Stack GPRS related structure and constant definition
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MPH_PS_DEF_H
#define _MPH_PS_DEF_H

#include "kal_public_api.h"
#include "mph_types.h"
#include "mph_cs_def.h"
#include "kal_general_types.h"



#define MPH_OCTET_NO_OF_ALLOCATION_BITMAP  (36)
#if 1 /*for l1sim*/
#define MPH_MAX_NO_EXT_MEASUREMENT         (32)
#endif /*__PKT_EXT_MEAS__*/
#define MPH_TAI_INVALID                    (-1)
#define MPH_TIMESLOT_INVALID               (-1)

#ifdef __NEW_TBF_ARCH__
#define MPH_INVALID_VALUE                  (-1)
#define MPH_REF_INVALID                    (0xff)
#ifdef __MTBF__
#define MPH_MAX_TBF_NUM    (5) //For multiple TBF feature, Support 5 TBFs 
#else
#define MPH_MAX_TBF_NUM    (1) //For multiple TBF feature, Support 5 TBFs 
#endif /* end of  __MTBF__*/
#endif

#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
/* Enum number of PS handover type is different from CS handover type*/
typedef enum
{
   MPH_TTI_MODE_BTTI,          
   MPH_TTI_MODE_RTTI
} mph_tti_mode_enum;

/* Enum number of PS handover type is different from CS handover type*/
typedef enum
{
   MPH_USF_MODE_BTTI,          
   MPH_USF_MODE_RTTI
} mph_usf_mode_enum;

#endif /*end of __EGPRS_MODE__ && __GERAN_RTTI__*/


typedef struct
{
   BTSPowerControlMode        bts_pwr_ctrl_mode;
   kal_uint8                  p0;
   kal_bool                   pr_mode_a;
} mph_dl_pwr_ctrl_params_struct;

typedef struct
{
   kal_bool                   extended_dynamic;
   kal_bool                   usf_granularity;
   TimeSlotMask               timeslot_allocation;
#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
   TimeSlotMask               ts_of_dl_pacch_corresponding_to_the_ul_pdch_pairs;
   mph_usf_mode_enum          usf_mode;           /* 0 : BTTI USF mode ; 1 : RTTI USF mode */
#endif /* end of __EGPRS_MODE__ && __GERAN_RTTI__ */
   USF                        usf[8];
} mph_dynamic_allocation_struct;

typedef struct
{
   TimeSlot                   downlink_control_timeslot;
   TimeSlotMask               timeslot_allocation;
   kal_bool                   block_periods;
   kal_uint16                 bitmap_length;
   kal_uint8                  allocation_bitmap[MPH_OCTET_NO_OF_ALLOCATION_BITMAP];
} mph_fixed_allocation_struct;

typedef struct
{
   kal_uint8                 alpha;
   kal_uint8                 t_avg_w;
   kal_uint8                 t_avg_t;
   kal_bool                  pc_meas_chan_pdtch;
   Power                     pb;
} mph_global_pwr_ctrl_params_struct;

typedef enum
{
   AS_REQUEST = 0,
   NEW_TBF
} mph_int_meas_freq_enum;

typedef enum
{
   OLD = 0,
   ALL
} mph_pdch_release_limit_enum;

typedef struct
{
   Power                         pb;
   TSC                           tsc;
   TimeSlot                      timeslot;
   mph_hopping_freq_list_struct  pbcch_freq_list;
} mph_pbcch_description_struct;

typedef struct
{   
   TSC                           tsc;
   TimeSlot                      timeslot;
   mph_hopping_freq_list_struct  pccch_freq_list;
} mph_pccch_description_struct;

typedef struct
{
   kal_uint8                  alpha;
   kal_uint8                  gamma[8];
} mph_ul_pwr_ctrl_params_struct;

typedef enum
{
   MPH_DYNAMIC = 0,
   MPH_FIXED
} mph_ul_allocation_enum;

typedef union
{
   mph_fixed_allocation_struct         fixed;
   mph_dynamic_allocation_struct       dynamic;
} mph_ul_allocation_union;

typedef struct
{
   kal_uint8     *data;
   kal_bool      decode_ok;
   kal_int16     bit_error_count;
   kal_int16     bit_count;
   TimeSlot      timeslot;
   CodingScheme  coding_scheme;
#ifdef __EGPRS_MODE__
   kal_bool      data_blk1_ok;
   kal_bool      data_blk2_ok;
#ifdef __GERAN_FANR__
   kal_bool      pan_ok;            /* result for PAN field */
#endif /* end of __GERAN_FANR__ */
   kal_uint8     *header;
   kal_uint8     *data2;
#ifdef __GERAN_FANR__
   kal_uint8     *pan_data;       /* address for PAN data  */
#endif /* end of __GERAN_FANR__ */
   kal_int32     mean_bep;
   kal_int32     cv_bep;
#endif
} mph_rx_multislot_data_struct;

#ifdef __PS_HO__

/* Enum number of PS handover type is different from CS handover type*/
typedef enum
{
   MPH_PS_HANDOVER_TYPE_NON_SYNC,          
   MPH_PS_HANDOVER_TYPE_FINELY_SYNC,     
   MPH_PS_HANDOVER_TYPE_PRE_SYNC          
} mph_ps_ho_type_enum;

#ifdef __EGPRS_MODE__
typedef enum{
    MPH_ResetNoVQIR ,
    MPH_ResetAllVQIR,
    MPH_ResetAllIR,
    MPH_RestoreAllVQ
}mph_ir_control_enum; /* IR: incremental redundancy */
#endif /* end of __EGPRS_MODE__ */

typedef struct{ //same as MTBF:multiple_ul_alloc_struct; can be reuse~
    kal_uint8 assign_ref;
    TFI ul_tfi;
    kal_bool starting_time_valid;
    FrameNumber tbf_starting_time;
    mph_ul_allocation_enum ul_allocation_type;
    mph_ul_allocation_union ul_allocation;
}mph_ul_tbf_params_struct;

typedef struct{ //same as MTBF:multiple_ul_alloc_struct; can be reuse~
    kal_uint8 assign_ref;
    TFI dl_tfi;
    kal_bool starting_time_valid;
    FrameNumber tbf_starting_time;
    TimeSlotMask dl_timeslot_allocation;
  #ifdef __EGPRS_MODE__
    kal_bool egprs_ack_mode; /* ACK(=1) */
    kal_bool reset_ir_memory;
    kal_int16 egprs_window_size;
  #endif
}mph_dl_tbf_params_struct;

typedef struct{
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_int32 frame_offset;
    kal_int32 ebit_offset;
    PowerControlLevel ms_txpwr_max_cch_for_gprs;
    kal_bool pbcch_exist;
#ifdef __GERAN_R6__ 
   kal_bool                    set_lb;
   PowerControlLevel     ms_txpwr_LB_for_gprs;
#endif /*__GERAN_R6__ */		
}mph_target_cell_info_struct;
#endif /* end of __PS_HO__ */

#endif /* end of _MPH_PS_DEF_H */

