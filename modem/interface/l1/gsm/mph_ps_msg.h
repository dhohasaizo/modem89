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
 * mph_ps_msg.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Layer 1 and Protocol Stack GPRS related message and callback function
 *   definition
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MPH_PS_MSG_H
#define _MPH_PS_MSG_H

#include "kal_public_api.h"
#include "mph_types.h"
#include "mph_cs_def.h"
#include "mph_ps_def.h"
#include "kal_general_types.h"



/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_DOWNLINK_SINGLE_BLOCK_REQ
* DESCRIPTION
*   Message requesting layer 1 to receive a single radio block on the specified
*   packet channel at the specified time.
*****************************************************************************/

typedef struct
{
   kal_uint8                  ref_count;
   kal_uint16                 msg_len;
   FrameNumber                tbf_starting_time;
   TimeSlot                   timeslot;
   mph_freq_params_struct     freq_params;
} mphp_downlink_single_block_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_DOWNLINK_SINGLE_BLOCK_CNF
* DESCRIPTION
*   Message confirming that if layer 1 can receive the specified block in
*   MPHP_DOWNLINK_SINGLE_BLOCK_REQ on time. The received block is alos
*   included in this message.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     valid_block;
   FrameNumber  frame_number;            
   kal_uint8    data[MPH_N201_MAX];
} mphp_downlink_single_block_cnf_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_INTERFERENCE_MEAS_REQ
* DESCRIPTION
*   Message providing all interference measurement frequencies in the form of
*   single frequency or hopping sequencies to layer 1.
*****************************************************************************/

typedef struct
{
   kal_uint8                     ref_count;
   kal_uint16                    msg_len;
   kal_uint8                     int_ref;
   mph_hopping_freq_list_struct  int_freq_list;
   TimeSlotMask                  timeslot_allocation;
} mphp_interference_meas_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_INTERFERENCE_MEAS_IND
* DESCRIPTION
*   Message reporting reception quality related measurement to upper layer to
*   form channel qualirt report to send to the network.
*****************************************************************************/

typedef struct
{
   kal_uint8                     ref_count;
   kal_uint16                    msg_len;
   kal_uint8                     int_ref;
   TimeSlotMask                  valid_meas_timeslots;
   Power                         ss_sample[8];
   mph_int_meas_freq_enum        int_meas_freq;
   FrameNumber                   frame_number; 
} mphp_interference_meas_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_NEIGHBOR_PBCCH_START_REQ
* DESCRIPTION
*   Message requesting layer 1 to start to receive PBCCH block of the specified
*   neighbour cell.
*****************************************************************************/

typedef struct
{
   kal_uint8                     ref_count;
   kal_uint16                    msg_len;
   ARFCN                         c0_arfcn;
   kal_uint8                     psi1_repeat_period;
   kal_uint8                     bs_pbcch_blks;
   mph_pbcch_description_struct  pbcch_description;
   PBCChMode                     pbcch_mode;
   FrameNumber                   frame_offset;
   kal_int32                     ebit_offset;
} mphp_neighbor_pbcch_start_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_NEIGHBOR_PBCCH_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to stop receiving PBCCH block of the specified
*   neighbour cell.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
} mphp_neighbor_pbcch_stop_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_BLOCK_QUALITY_IND
* DESCRIPTION
*   Message notifying upper layer a block was received on packet channel, and
*   the block wasn't decoded successfully in packet idle mode or PBCCH in
*   packet transfer mode.
*****************************************************************************/

typedef struct
{
   kal_uint8              ref_count;
   kal_uint16             msg_len;
   ARFCN                  c0_arfcn;
   FrameNumber            frame_number;
   mph_channel_type_enum  channel_type;
   kal_bool               is_extended;
   kal_int16              c_value;   
} mphp_packet_block_quality_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_DATA_IND
* DESCRIPTION
*   Message notifying upper layer a block was received on packet channel in
*   packet idle mode, or PBCCH blocks of serving cell or neighbour cell was
*   received in packet transfer mode, and the block was decoded successfully.
*   The content of the block is also included in this message.
*****************************************************************************/

typedef struct
{
   kal_uint8              ref_count;
   kal_uint16             msg_len;
   ARFCN                  c0_arfcn;
   FrameNumber            frame_number;
   kal_int16              c_value;
   mph_channel_type_enum  channel_type;
   kal_bool               is_extended;
   kal_uint8              data[MPH_N201_MAX];
} mphp_packet_data_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_IDLE_CCCH_START_REQ
* DESCRIPTION
*   Message commanding layer 1 to enter packet idle mode and listening to
*   PCH. Packet measurement of serving cell should also be started.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   kal_bool                  imsi_valid;
   kal_uint16                imsi_mod_1000;
   kal_uint8                 bs_pa_mfrms;
   kal_uint8                 bs_ag_blks_res;
   kal_uint8                 bs_cc_chans;
   kal_bool                  bs_ccch_sdcch_comb;
   kal_uint8                 t_avg_w;
   kal_uint8                 t_avg_t;
   kal_bool                  pc_meas_chan_pdtch;
} mphp_packet_idle_ccch_start_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_CCCH_CONFIG_REQ
* DESCRIPTION
*   Message commanding layer 1 to support NMO3 in packet idle mode and listening to
*   PCH/AGCH.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   kal_bool                  imsi_valid;
   kal_uint16                imsi_mod_1000;
   kal_uint8                 bs_pa_mfrms;
   kal_uint8                 bs_ag_blks_res;
   kal_uint8                 bs_cc_chans;
   kal_bool                  bs_ccch_sdcch_comb;
   kal_uint8                 t_avg_w;
   kal_uint8                 t_avg_t;
   kal_bool                  pc_meas_chan_pdtch;
   kal_bool                  monitor_required;
} mphp_packet_ccch_config_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_IDLE_PCCCH_START_REQ
* DESCRIPTION
*   Message commanding layer 1 to enter packet idle mode and listening to
*   PPCH. Packet measurement of serving cell should also be started.
*****************************************************************************/

typedef struct
{
   kal_uint8                           ref_count;
   kal_uint16                          msg_len;
   kal_bool                            imsi_valid;
   kal_uint16                          imsi_mod_1000;
   kal_uint8                           bs_pbcch_blks;
   kal_uint8                           bs_pag_blks_res;
   kal_uint8                           bs_pcc_chans;
   kal_uint16                          split_page_cycle;
   mph_pccch_description_struct        pccch_description;
   kal_uint8                           t_avg_w;
   kal_uint8                           t_avg_t;
   kal_bool                            pc_meas_chan_pdtch;
   Power                               pb;
} mphp_packet_idle_pccch_start_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_DOWNLINK_ASSIGNMENT_REQ
* DESCRIPTION
*   Message reuqesting layer 1 to establish downlink TBF based on the
*   specified channel assignment.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
   mph_tti_mode_enum              tti_mode[MPH_MAX_TBF_NUM];    /* 0 : BTTI mode ; 1 : RTTI mode */
#endif /* end of __EGPRS_MODE__ && __GERAN_RTTI__ */
   kal_uint8                      dl_tbf_bitmap;
   kal_uint8                      assign_ref_dl[MPH_MAX_TBF_NUM];
   TFI                            downlink_tfi[MPH_MAX_TBF_NUM];
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;

#ifdef __EGPRS_MODE__
   #ifdef __GERAN_RTTI__
   /* Shihyao, these 2 parameters are only used in R7. If TTI mode is BTTI mode, these 2 parameters would be set the same value. */
   TimeSlot                       ul_timing_advance_timeslot_for_rtti;
   TimeSlot                       dl_timing_advance_timeslot_for_rtti;
   #else
   TimeSlot                       timing_advance_timeslot;
   #endif /*end of __GERAN_RTTI__*/
#else
   TimeSlot                       timing_advance_timeslot;
#endif /*end of __EGPRS_MODE__*/

   kal_bool                       is_ptcch_8bit_access;
   kal_bool                       before_params_valid;
   TimeSlot                       timeslot_before; /*TEMP DCH for TBF only has one TBF for before time*/
   mph_freq_params_struct         freq_params_before;
   TimeSlotMask                   timeslot_allocation_after[MPH_MAX_TBF_NUM];
   mph_freq_params_struct         freq_params_after;
   kal_bool                       dl_starting_time_valid[MPH_MAX_TBF_NUM];
   FrameNumber                    dl_tbf_starting_time[MPH_MAX_TBF_NUM];
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
#ifdef __EGPRS_MODE__
   kal_bool                      dl_egprs_ack_mode[MPH_MAX_TBF_NUM]; /* ACK(=1) */
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
   kal_bool                      reset_ir_memory[MPH_MAX_TBF_NUM];
   kal_int16                     dl_egprs_window_size[MPH_MAX_TBF_NUM];
#endif
#ifdef __PS_HO__
   /* Maruco20090720, MAUI1720041, To notify L1C whether this is the reconnected pending TBF after PS handover */
   kal_bool                      is_pending_tbf_after_ps_ho;
#endif /* end of __PS_HO__ */
#if defined(__EGPRS_MODE__) && defined(__GERAN_FANR__)
   kal_bool                      dl_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
#endif /* end of __GERAN_FANR__ */
} mphp_packet_downlink_assignment_req_struct;
#else
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
   kal_uint8                      assign_ref;
   TFI                            downlink_tfi;
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;
   TimeSlot                       timing_advance_timeslot;
   kal_bool                       is_ptcch_8bit_access;
   kal_bool                       before_params_valid;
   TimeSlot                       timeslot_before;
   mph_freq_params_struct         freq_params_before;
   TimeSlotMask                   timeslot_allocation_after;
   mph_freq_params_struct         freq_params_after;
   kal_bool                       starting_time_valid;
   FrameNumber                    tbf_starting_time;
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
 #ifdef __EGPRS_MODE__
   kal_int16                     egprs_window_size;
   kal_bool                      egprs_ack_mode; /* ACK(=1) */
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
   kal_bool                      reset_ir_memory;
 #endif
} mphp_packet_downlink_assignment_req_struct;
#endif /*__NEW_TBF_ARCH__*/
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_DOWNLINK_ASSIGNMENT_CNF
* DESCRIPTION
*   Message confirming that layer 1 has switched to the assigned downlink
*   channel. It is sent to upper layer at the starting time.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    successful_dl_bitmap;
   kal_uint8    assign_ref_dl[MPH_MAX_TBF_NUM];
} mphp_packet_downlink_assignment_cnf_struct;
#else
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    assign_ref;
} mphp_packet_downlink_assignment_cnf_struct;
#endif /*__NEW_TBF_ARCH__*/
#ifdef __PKT_EXT_MEAS__
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_EXTENDED_MEAS_REQ
* DESCRIPTION
*   Message requesting layer 1 to start GPRS extended measurement. Although
*   GPES extended measurement is continuous, L1 will not do continuous GPRS
*   extended measurement on receiving this message since L1 has no idea about 
*   the reporting period of packet extended measurement. Upper layer should
*   send another request again in the beginning of next reporting period.
*****************************************************************************/

typedef struct
{
   kal_uint8                ref_count;
   kal_uint16               msg_len;
   kal_uint8                list_len;
   ARFCN                    em_frequency_list[MPH_MAX_NO_EXT_MEASUREMENT];
} mphp_packet_extended_meas_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_EXTENDED_MEAS_IND
* DESCRIPTION
*   Message reporting the GPRS extended measurement result. It is sent to upper
*   layer every extend measurement reporting period.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   kal_uint8                 list_len;
   ARFCN                     arfcn[MPH_MAX_NO_EXT_MEASUREMENT];   
   Power                     em_meas_in_quarter_dbm[MPH_MAX_NO_EXT_MEASUREMENT];
} mphp_packet_extended_meas_ind_struct;
#endif /*__PKT_EXT_MEAS__*/

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_NC_MEAS_START_REQ
* DESCRIPTION
*   Message requesting layer 1 to start NC measurement based on the specified
*   frequency list, or update NC measurement related parameters when the
*   measurement has already been started.
*****************************************************************************/

typedef struct
{
   kal_uint8                    ref_count;
   kal_uint16                   msg_len;
   kal_uint8                    nc_reporting_period_I;
   kal_uint8                    nc_reporting_period_T;
} mphp_packet_nc_meas_start_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_NC_MEAS_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to stop NC measurement.
*****************************************************************************/

typedef struct
{
   kal_uint8                    ref_count;
   kal_uint16                   msg_len;
} mphp_packet_nc_meas_stop_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_NC_MEAS_IND
* DESCRIPTION
*   Message reporting the NC measurement result. It is sent to upper
*   lsyer every NC_REPORTING_PERIOD.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   kal_uint8                 list_ref;
   kal_uint8                 list_len;
   ARFCN                     arfcn[MPH_MAX_BA_LIST_LEN + 1];
   Power                     rlac_in_quarter_dbm[MPH_MAX_BA_LIST_LEN + 1];
} mphp_packet_nc_meas_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_PAGE_MODE_UPDATE_REQ
* DESCRIPTION
*   Message requesting layer 1 to change the page mode for monitoring PPCH.
*****************************************************************************/

typedef struct
{
   kal_uint8             ref_count;
   kal_uint16            msg_len;
   mph_paging_mode_enum  ppch_page_mode;
} mphp_packet_page_mode_update_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_PDCH_RELEASE_REQ
* DESCRIPTION
*   Message notifying layer 1 that some packet channel has been released.
*****************************************************************************/

typedef struct
{
   kal_uint8      ref_count;
   kal_uint16     msg_len;
   TimeSlotMask  timeslots_available;
   mph_pdch_release_limit_enum limit;
} mphp_packet_pdch_release_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_RANDOM_ACCESS_REQ
* DESCRIPTION
*   Message request layer 1 to transmit one access burst on PRACH.
*****************************************************************************/

typedef struct
{
   kal_uint8           ref_count;
   kal_uint16          msg_len;
   kal_uint8           req_id;  /*sequence number for RR to know the ._cnf received is old or new*/
   PowerControlLevel   gprs_ms_txpwr_max_cch;
   kal_bool            is_8bit_access_burst;
   RAChData            request_reference;
   kal_uint16          frame_skip;
#ifdef __EGPRS_MODE__
   mph_ats_type_enum ats_type;
#endif
} mphp_packet_random_access_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_EGPRS_LOOP_REQ
* DESCRIPTION
*   Message request layer 1 to do the loopback test on packet transfer mode
*****************************************************************************/

#ifdef __EGPRS_MODE__
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     egprs_loopback_on;
   kal_uint8    mode_flag;
} mphp_egprs_loop_req_struct;
#endif

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_UPDATE_IR_RESET_REQ
* DESCRIPTION
*   Message request DSP to reset IR 
*****************************************************************************/
#ifdef __EGPRS_MODE__
/* RLC gets the PDAS with starting time before FBI, but the starting time is after the FBI.
In order to fix the mismatch V(Q) between DSP and RLC */
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   #ifdef __NEW_TBF_ARCH__
   kal_uint8    tbf_resetIR_bitmap;
   #else 
   kal_bool     resetIR;
   #endif /*__NEW_TBF_ARCH__*/
} mphp_update_ir_reset_req_struct;
#endif

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_RANDOM_ACCESS_CNF
* DESCRIPTION
*   Message confirming that an access burst has been sent out.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    req_id;  /*sequence number for RR to know the ._cnf received is old or new*/
   RAChData     request_reference;
   FrameNumber  frame_number;
} mphp_packet_random_access_cnf_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_SERV_MEAS_IND
* DESCRIPTION
*   Message reporting the serving cell measurement result in GPRS packet idle
*   or packet transfer mode.
*****************************************************************************/

typedef struct
{
   kal_uint8       ref_count;
   kal_uint16      msg_len;
   Power           rla_in_quarter_dbm;
   TimingAdvance   timing_advanced;  /* used for AGPS, report packet TA in PTM */
} mphp_packet_serv_meas_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_UNASSIGNMENT_REQ
* DESCRIPTION
*   Message request layer 1 to terminated the TBF for specified direction.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8     uplink;
   kal_uint8     downlink;
   kal_uint8    tid;
} mphp_packet_unassignment_req_struct;
#else
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     uplink;
   kal_bool     downlink;
   kal_uint8    tid;
} mphp_packet_unassignment_req_struct;
#endif /*__NEW_TBF_ARCH__*/
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_UNASSIGNMENT_CNF
* DESCRIPTION
*   Message confirming the termination of specified TBF has finished.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    ul_exist_bitmap;
   kal_uint8    dl_exist_bitmap;
   kal_uint8     tid;
} mphp_packet_unassignment_cnf_struct;
#else
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     uplink_exist;
   kal_bool     downlink_exist;
   kal_uint8    tid;
} mphp_packet_unassignment_cnf_struct;
#endif /*__NEW_TBF_ARCH__*/

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_UPLINK_ASSIGNMENT_REQ
* DESCRIPTION
*   Message reuqesting layer 1 to establish uplink TBF based on the
*   specified channel assignment.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
   mph_tti_mode_enum              tti_mode[MPH_MAX_TBF_NUM];    /* 0 : BTTI mode ; 1 : RTTI mode */
#endif /* end of __EGPRS_MODE__ && __GERAN_RTTI__ */
   kal_uint8                      ul_tbf_bitmap;
   kal_uint8                      assign_ref_ul[MPH_MAX_TBF_NUM];
   TFI                            uplink_tfi[MPH_MAX_TBF_NUM];
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;

#ifdef __EGPRS_MODE__
   #ifdef __GERAN_RTTI__
   /* Shihyao, these 2 parameters are only used in R7. If TTI mode is BTTI mode, these 2 parameters would be set the same value. */
   TimeSlot                       ul_timing_advance_timeslot_for_rtti;
   TimeSlot                       dl_timing_advance_timeslot_for_rtti;
   #else
   TimeSlot                       timing_advance_timeslot;
   #endif /*end of __GERAN_RTTI__*/
#else
   TimeSlot                       timing_advance_timeslot;
#endif /*end of __EGPRS_MODE__*/

   kal_bool                       is_ptcch_8bit_access;
   kal_bool                       ul_starting_time_valid[MPH_MAX_TBF_NUM];
   FrameNumber                    ul_tbf_starting_time[MPH_MAX_TBF_NUM];
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   kal_bool                       freq_params_before_valid;
   mph_freq_params_struct         freq_params_before;
   mph_freq_params_struct         freq_params_after;
   mph_ul_allocation_enum         ul_allocation_type;
   mph_ul_allocation_union        ul_allocation[MPH_MAX_TBF_NUM];

#ifdef __EGPRS_MODE__
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
#endif
#ifdef __PS_HO__
   /* Maruco20090720, MAUI1720041, To notify L1C whether this is the reconnected pending TBF after PS handover */
   kal_bool                      is_pending_tbf_after_ps_ho;
#endif /* end of __PS_HO__ */
#if defined(__EGPRS_MODE__) && defined(__GERAN_FANR__)
   kal_bool                      ul_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
   kal_bool                      is_ssn_based_pan[MPH_MAX_TBF_NUM];   /* False : Time-baesd; True : SSN-based. only for UL TBF*/
#endif /* end of __GERAN_FANR__ */
} mphp_packet_uplink_assignment_req_struct;
#else
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
   kal_uint8                      assign_ref;
   TFI                            uplink_tfi;
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;
   TimeSlot                       timing_advance_timeslot;
   kal_bool                       is_ptcch_8bit_access;
   kal_bool                       freq_params_before_valid;
   mph_freq_params_struct         freq_params_before;
   mph_freq_params_struct         freq_params_after;
   kal_bool                       starting_time_valid;
   FrameNumber                    tbf_starting_time;
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   mph_ul_allocation_enum         ul_allocation_type;
   mph_ul_allocation_union        ul_allocation;
#ifdef __EGPRS_MODE__
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
#endif
} mphp_packet_uplink_assignment_req_struct;

#endif /*__NEW_TBF_ARCH__*/
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_UPLINK_ASSIGNMENT_CNF
* DESCRIPTION
*   Message confirming that layer 1 has switched to the assigned uplink
*   channel. It is sent to upper layer at the starting time.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct{
   kal_uint8    ref_count;
   kal_uint16  msg_len;
   kal_uint8    successful_ul_bitmap;
   kal_uint8    assign_ref_ul[MPH_MAX_TBF_NUM];
} mphp_packet_uplink_assignment_cnf_struct;
#else
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    assign_ref;
} mphp_packet_uplink_assignment_cnf_struct;


#endif /*__NEW_TBF_ARCH__*/
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_TIMESLOT_RECONFIGURE_REQ
* DESCRIPTION
*   Message reuqesting layer 1 to establish uplink and downlink TBF based on
*   the specified channel assignment.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
   mph_tti_mode_enum              tti_mode[MPH_MAX_TBF_NUM];    /* 0 : BTTI mode ; 1 : RTTI mode */
#endif /* end of __EGPRS_MODE__ && __GERAN_RTTI__ */
   kal_uint8                      ul_tbf_bitmap;
   kal_uint8                      dl_tbf_bitmap;
   kal_uint8                      assign_ref_ul[MPH_MAX_TBF_NUM];
   kal_uint8                      assign_ref_dl[MPH_MAX_TBF_NUM];
   TFI                            downlink_tfi[MPH_MAX_TBF_NUM];
   TFI                            uplink_tfi[MPH_MAX_TBF_NUM];
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;

#ifdef __EGPRS_MODE__
   #ifdef __GERAN_RTTI__
   /* Shihyao, these 2 parameters are only used in R7. If TTI mode is BTTI mode, these 2 parameters would be set the same value. */
   TimeSlot                       ul_timing_advance_timeslot_for_rtti;
   TimeSlot                       dl_timing_advance_timeslot_for_rtti;
   #else
   TimeSlot                       timing_advance_timeslot;
   #endif /*end of __GERAN_RTTI__*/
#else
   TimeSlot                       timing_advance_timeslot;
#endif /*end of __EGPRS_MODE__*/

   kal_bool                       is_ptcch_8bit_access;
   kal_bool                       dl_starting_time_valid[MPH_MAX_TBF_NUM];
   kal_bool                       ul_starting_time_valid[MPH_MAX_TBF_NUM];
   FrameNumber                    dl_tbf_starting_time[MPH_MAX_TBF_NUM];
   FrameNumber                    ul_tbf_starting_time[MPH_MAX_TBF_NUM];
   mph_freq_params_struct         freq_params;   
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   mph_ul_allocation_enum         ul_allocation_type;
   mph_ul_allocation_union        ul_allocation[MPH_MAX_TBF_NUM];
   TimeSlotMask                   dl_timeslot_allocation[MPH_MAX_TBF_NUM];
#ifdef __EGPRS_MODE__
   kal_bool                      dl_egprs_ack_mode[MPH_MAX_TBF_NUM]; /* ACK(=1) */
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
   kal_bool                      reset_ir_memory[MPH_MAX_TBF_NUM];
   kal_int16                     dl_egprs_window_size[MPH_MAX_TBF_NUM];
#endif
#ifdef __PS_HO__
   /* Maruco20090720, MAUI1720041, To notify L1C whether this is the reconnected pending TBF after PS handover */
   kal_bool                      is_pending_tbf_after_ps_ho;
#endif /* end of __PS_HO__ */
#if defined(__EGPRS_MODE__) && defined(__GERAN_FANR__)
   kal_bool                      dl_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
   kal_bool                      ul_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
   kal_bool                      is_ssn_based_pan[MPH_MAX_TBF_NUM];   /* False : Time-baesd; True : SSN-based. only for UL TBF*/
#endif /* end of __GERAN_FANR__ */
} mphp_packet_timeslot_reconfigure_req_struct;
#else
typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
   kal_uint8                      assign_ref;
   TFI                            downlink_tfi;
   TFI                            uplink_tfi;
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;
   TimeSlot                       timing_advance_timeslot;
   kal_bool                       is_ptcch_8bit_access;
   mph_freq_params_struct         freq_params;
   kal_bool                       starting_time_valid;
   FrameNumber                    tbf_starting_time;
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   mph_ul_allocation_enum         ul_allocation_type;
   mph_ul_allocation_union        ul_allocation;
   TimeSlotMask                   dl_timeslot_allocation;
#ifdef __EGPRS_MODE__
   kal_int16                     egprs_window_size;
   kal_bool                      egprs_ack_mode; /* ACK(=1) */
   kal_bool                      tbf_mode; /* GPRS(=0), EGPRS(=1) */
   kal_bool                      reset_ir_memory;
#endif
} mphp_packet_timeslot_reconfigure_req_struct;

#endif /*__NEW_TBF_ARCH__*/
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_TIMESLOT_RECONFIGURE_CNF
* DESCRIPTION
*   Message confirming that layer 1 has switched to the assigned uplink and
*   downlink channel. It is sent to upper layer at the starting time.
*****************************************************************************/
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    successful_dl_bitmap;
   kal_uint8    successful_ul_bitmap;
   kal_uint8    assign_ref_ul[MPH_MAX_TBF_NUM];
   kal_uint8    assign_ref_dl[MPH_MAX_TBF_NUM];
} mphp_packet_timeslot_reconfigure_cnf_struct;
#else
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    assign_ref;
} mphp_packet_timeslot_reconfigure_cnf_struct;


#endif /*__NEW_TBF_ARCH__*/

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PBCCH_START_REQ
* DESCRIPTION
*   Message requesting layer 1 to start to receive PBCCH block of the
*   serving cell.
*****************************************************************************/

typedef struct
{
   kal_uint8                     ref_count;
   kal_uint16                    msg_len;
   kal_uint8                     psi1_repeat_period;
   kal_uint8                     psi_count_hr;
   mph_pbcch_description_struct  pbcch_description;
   PBCChMode                     pbcch_mode;
   kal_uint8                     bs_pbcch_blks;
} mphp_pbcch_start_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PBCCH_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to stop receiving PBCCH blocks of the serving
*   cell.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
} mphp_pbcch_stop_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PCCCH_CONFIG_REQ
* DESCRIPTION
*   Message notifying layer 1 to that PCCCH description has changed.
*****************************************************************************/

typedef struct
{
   kal_uint8                     ref_count;
   kal_uint16                    msg_len;
   kal_bool                      imsi_valid;
   kal_uint16                    imsi_mod_1000;
   kal_uint8                     bs_pbcch_blks;
   kal_uint8                     bs_pag_blks_res;
   kal_uint8                     bs_pcc_chans;
   kal_uint16                    split_page_cycle;
   mph_pccch_description_struct  pccch_description;
} mphp_pccch_config_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PDCH_FAIL_RECONNECT_REQ
* DESCRIPTION
*   Message requesting layer 1 to reconnect to dedicated channel when PDCH
*   assignment or RR-network commanded cell change order fail.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
} mphp_pdch_fail_reconnect_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PDCH_FAIL_RECONNECT_CNF
* DESCRIPTION
*   Message confirming that layer 1 has reconnected the dedicated channels.
*   It is sent to upper layer at starting time.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
} mphp_pdch_fail_reconnect_cnf_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_POLL_RESPONSE_REQ
* DESCRIPTION
*   Message requesting layer 1 to transmit the polling response at the
*   specified time and channel according to RRBP. It is used only when
*   TBF is not established.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   kal_bool                  is_access_burst;
   kal_bool                  is_8bit_access_burst;
   FrameNumber               starting_time;
   PowerControlLevel         gprs_ms_txpwr_max_cch;
   TimingAdvance             timing_advance;
   kal_uint8                 data[MPH_N201_MAX];
} mphp_poll_response_req_struct;



/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_POLL_RESPONSE_CNF
* DESCRIPTION
*   Message confirming the polling response has been sent out, or layer 1 fail
*   to send out the polling response at specified time.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     block_sent;
   FrameNumber  frame_number;   
} mphp_poll_response_cnf_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_POWER_CONTROL_UPDATE_REQ
* DESCRIPTION
*   Message requesting layer 1 to update the power control related parameters.
*****************************************************************************/

typedef struct
{
   kal_uint8                           ref_count;
   kal_uint16                          msg_len;
   kal_bool                            pwr_ctrl_params_valid;
   mph_global_pwr_ctrl_params_struct   pwr_ctrl_params;
   kal_bool                            ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct       ul_pwr_ctrl_params;
} mphp_power_control_update_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PRACH_ABORT_REQ
* DESCRIPTION
*   Message requesting layer 1 to abort the sending of pending access bursts
*   to be sent on PRACH.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
} mphp_prach_abort_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_REPEAT_ALLOCATION_REQ
* DESCRIPTION
*   Message nofifying layer 1 that to repeat the previous assigned allocation
*   for uplink fix-allocation assignment is necessary or not.
*****************************************************************************/

typedef struct
{
   kal_uint8      ref_count;
   kal_uint16     msg_len;
   kal_bool       repeat_ul_allocation;
   FrameNumber    repeat_starting_time;
   TimeSlotMask   ts_override;
} mphp_repeat_allocation_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_REPEAT_ALLOCATION_IND
* DESCRIPTION
*   Message indicating that layer 1 has start to repeat previous assigned 
*   allocation for uplink fix-allocation assignment.
*****************************************************************************/

typedef struct
{
   kal_uint8      ref_count;
   kal_uint16     msg_len;
} mphp_repeat_allocation_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_TIMING_ADVANCE_UPDATE_REQ
* DESCRIPTION
*   Message requesting layer 1 to update the timing advance related parameters.
*****************************************************************************/

typedef struct
{
   kal_uint8                  ref_count;
   kal_uint16                 msg_len;
   kal_bool                   timing_advance_valid;
   TimingAdvance              pkt_timing_advance;
   kal_int8                   timing_advance_index;

#ifdef __EGPRS_MODE__
   #ifdef __GERAN_RTTI__
   /* Shihyao, these 2 parameters are only used in R7. If TTI mode is BTTI mode, these 2 parameters would be set the same value. */
   TimeSlot                   ul_timing_advance_timeslot_for_rtti;
   TimeSlot                   dl_timing_advance_timeslot_for_rtti;
   #else
   TimeSlot                   timing_advance_timeslot;
   #endif /*end of __GERAN_RTTI__*/
#else
   TimeSlot                   timing_advance_timeslot;
#endif /*end of __EGPRS_MODE__*/

   kal_bool                   is_ptcch_8bit_access;
} mphp_timing_advance_update_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_UPLINK_SINGLE_BLOCK_REQ
* DESCRIPTION
*   Message requesting layer 1 to transmit a single radio block on the
*   specified packet channel at the specified time. This interface is
*   used for both single block without TBF, and for single block of two
*   phase access.
*****************************************************************************/

typedef struct
{
   kal_uint8                      ref_count;
   kal_uint16                     msg_len;
   kal_bool                       single_without_tbf;
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;
   TimeSlot                       timing_advance_timeslot;
   kal_bool                       is_ptcch_8bit_access;
   TimeSlot                       timeslot;
   mph_freq_params_struct         freq_params;
   FrameNumber                    tbf_starting_time;
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   kal_uint8                      data[MPH_N201_MAX];
   kal_uint8                      no_ctrl_blocks;
#ifdef __EGPRS_MODE__
   kal_uint8                      data2[MPH_N201_MAX];
#endif
} mphp_uplink_single_block_req_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_UPLINK_SINGLE_BLOCK_CNF
* DESCRIPTION
*   Message confirming that if the starting time to send single block is
*   expired when layer 1 get the request message. It indicate if layer 1
*   transmit the specified block in MPHP_UPLINK_SINGLE_BLOCK_REQ successfully
*   at specified time.
*****************************************************************************/

typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_bool     not_too_late;
   FrameNumber  frame_number;      
} mphp_uplink_single_block_cnf_struct;

#ifdef __EGPRS_MODE__
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_EGPRS_LOOP_CNF
* DESCRIPTION
*   Message confirming that layer 1 has started egprs loopback test.
*   It is sent to upper layer.
*****************************************************************************/

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
} mphp_egprs_loop_cnf_struct;
#endif


#ifdef __PS_HO__
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PS_HANDOVER_REQ
* DESCRIPTION
*   Message reuqesting layer 1 to perform PS handover procedure based on
*   the specified channel assignment.
*****************************************************************************/
typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
#if defined(__EGPRS_MODE__) && defined(__GERAN_RTTI__)
   mph_tti_mode_enum         tti_mode[MPH_MAX_TBF_NUM];    /* 0 : BTTI mode ; 1 : RTTI mode */
#endif /* end of __EGPRS_MODE__ && __GERAN_RTTI__ */
   kal_bool is_inter_rat_ps_handover; /* TRUE: 3G to 2G PS Handover*/
   kal_uint8 handover_type; /* 0:non-sync, 1:finely-sync, 2:pre-sync */
   mph_target_cell_info_struct target_cell_info;
   kal_int32 rach_count; /* finely-sync,pre-sync: 0 or 4; non-sync: 32767*/
   kal_bool nci; /* whether allow TA out of range */
   
   mph_freq_params_struct freq_params; /* TBF parameters*/
   kal_bool                       timing_advance_valid;
   TimingAdvance                  pkt_timing_advance;
   kal_int8                       timing_advance_index;

#ifdef __EGPRS_MODE__
   #ifdef __GERAN_RTTI__
   /* Shihyao, these 2 parameters are only used in R7. If TTI mode is BTTI mode, these 2 parameters would be set the same value. */
   TimeSlot                      ul_timing_advance_timeslot_for_rtti;
   TimeSlot                      dl_timing_advance_timeslot_for_rtti;
   #else
   TimeSlot                       timing_advance_timeslot;
   #endif /*end of __GERAN_RTTI__*/
#else
   TimeSlot                       timing_advance_timeslot;
#endif /*end of __EGPRS_MODE__*/

   mph_global_pwr_ctrl_params_struct   pwr_ctrl_params;
   kal_bool                       ul_pwr_ctrl_params_valid;
   mph_ul_pwr_ctrl_params_struct  ul_pwr_ctrl_params;
   mph_dl_pwr_ctrl_params_struct  dl_pwr_ctrl_params;
   kal_uint8 is_ptcch_8bit_access;
   kal_uint8 ul_tbf_bitmap;
   kal_uint8 dl_tbf_bitmap;
   mph_ul_tbf_params_struct ul_tbf_params[MPH_MAX_TBF_NUM];
   mph_dl_tbf_params_struct dl_tbf_params[MPH_MAX_TBF_NUM];    
   kal_bool is_all_tbf_pending; 
   /* For ps_handover_reconnect_req, 
     * If the TBF of old cell are all pending, it is TRUE. 
     * If the TBF of old cell are all active, it is FALSE. 
     * If the TBF of old cell are some active and some pending, RR will send 2 msg:
     * 1st msg is ps_handover_reconnect_req(all active), then RR sends 2nd msg after received CNF of 1st msg
     * the 2nd msg is ul/dl assign or ts_reconfig_req(all pending) */
#ifdef __EGPRS_MODE__
   kal_bool  tbf_mode; /* GPRS(=0), EGPRS(=1) */
   mph_ir_control_enum set_all_vq_ir; /* ps_ho_req:0,1,2 <-> ps_ho_reconnect_req:always 3 */
#endif /* end of __EGPRS_MODE__ */
#if defined(__EGPRS_MODE__) && defined(__GERAN_FANR__)
   kal_bool                      dl_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
   kal_bool                      ul_fanr_active[MPH_MAX_TBF_NUM];   /* False : FANR is inactive ; True : FANR is active*/
   kal_bool                      is_ssn_based_pan[MPH_MAX_TBF_NUM];   /* False : Time-baesd; True : SSN-based. only for UL TBF*/
#endif /* end of __GERAN_FANR__ */
} mphp_ps_handover_req_struct,
mphp_ps_handover_reconnect_req_struct,
mphp_ps_handover_fill_params_struct;
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PS_HANDOVER_CNF
* DESCRIPTION
*   Message confirming that layer 1 has handled MPHP_PS_HANDOVER_REQ
*   It is sent to upper layer to tell the result is successful (when L1 is switched to new cell)
*   or failed (when L1A finds TA is out of range or the decoded BSIC of blind ps handover is invalid)
*****************************************************************************/
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    error_cause;
} mphp_ps_handover_cnf_struct;
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PS_HANDOVER_RECONNECT_CNF
* DESCRIPTION
*   Message confirming that layer 1 has handled MPHP_PS_HANDOVER_REQ
*   It is sent to upper layer to tell the result is successful 
*****************************************************************************/
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   kal_uint8    ul_tbf_bitmap;
   kal_uint8    ul_assign_ref[MPH_MAX_TBF_NUM];
   kal_uint8    dl_tbf_bitmap;
   kal_uint8    dl_assign_ref[MPH_MAX_TBF_NUM];
} mphp_ps_handover_reconnect_cnf_struct;
/***************************************************************************
*  PRIMITIVE STRUCTURE
*     mphp_blind_ps_handover_bsic_req_struct
*
*  DESCRIPTION
*     This message is sent from the upper layer to L1A for requesting L1
*     to decode BSIC on the specified carriers as blind PS handover. L1 will report any BSIC
*     immediately after decoding it.
*     This procedure is single-shot. 
*
***************************************************************************/
typedef struct 
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    ARFCN      arfcn; 
    BSIC        bsic;
} mphp_blind_ps_handover_bsic_req_struct;
/***************************************************************************
*  PRIMITIVE STRUCTURE
*     mphc_blind_ps_handover_bsic_ind_struct
*
*  DESCRIPTION
*     This message is sent from L1A to the upper layer for the results
*     of BSIC decoding as blind PS handover. 
***************************************************************************/
typedef struct
{
   kal_uint8           ref_count;
   kal_uint16         msg_len;
   ARFCN              arfcn;   /* The arfcn corresponding to the acquired bsic */
   kal_bool            bsic_valid; /* It indicates if the bsic is acquired correctly */
   BSIC                 bsic; /* The acquired bsic */
   FrameNumber    frame_offset;  /* The acquired frame offset for L1 use */
   kal_int32           ebit_offset;   /* The acquired ebit offset for L1 use */
} mphp_blind_ps_handover_bsic_ind_struct;
#endif /* end of __PS_HO__ */

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHP_PACKET_DOWNLINK
* DESCRIPTION
*   Function call to deliver the good downlink block to MPAL in packet
*   transfer mode. This function is called by L1, and provided by MPAL.
*****************************************************************************/
typedef struct
{
   kal_uint8               ref_count;
   kal_uint16              msg_len;
   kal_bool                allocation_exhausted;
   ARFCN                   arfcn;
   FrameNumber             frame_number;
   kal_int32               c_value;
#ifdef __NEW_TBF_ARCH__
   kal_int8                dl_TBFtid[MPH_MAX_TBF_NUM];
#ifdef __PS_HO__
   kal_uint8               report_pdtch_type;
#endif /* end of __PS_HO__ */
#else
   kal_int8                dl_TBFtid;
#endif/*end of __NEW_TBF_ARCH__*/   
   kal_bool                bl_var_valid;
   kal_uint16              bl_var;
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
   kal_uint32             next_pch_fn;
#endif /*end of __MONITOR_PAGE_DURING_TRANSFER__*/
#ifdef __EGPRS_MODE__
#ifdef __NEW_TBF_ARCH__
   kal_uint16              dsp_vq[MPH_MAX_TBF_NUM];
#else
   kal_bool                is_before_starting_time;
   kal_uint16              dsp_vq;
#endif /*end of __NEW_TBF_ARCH__*/               
   kal_int8                out_of_mem;

#endif /* __EGPRS_MODE__ */               
}mphp_packet_downlink_struct;


/*****************************************************************************
* CALLBACK FUNCTION PROTOTYPE
*   mpal_packet_downlink
* DESCRIPTION
*   Function call to deliver the good downlink block to MPAL in packet
*   transfer mode. This function is called by L1, and provided by MPAL.
*****************************************************************************/
extern void mpal_packet_downlink(mphp_packet_downlink_struct *ptr_pkt_dl,
                                 mph_rx_multislot_data_struct *rx_data
                             #ifdef __GEMINI_GSM__
                                  , module_id_enum mod_indx
                             #endif
                                 );

/*****************************************************************************
* CALLBACK FUNCTION PROTOTYPE
*   mpal_uplink_transfer
* DESCRIPTION
*   Function call to get uplink block from MPAL to transmitted in packet
*   transfer mode. This function is called by L1, and provided by MPAL.
*****************************************************************************/
/* mpal_uplink_transfer(), detail function prototype provided by L1C */

/*****************************************************************************
* CALLBACK FUNCTION PROTOTYPE
*   mpal_ul_status_report
* DESCRIPTION
*   Function call to tell MPAL the decoded status of USF. This function is
*   called by L1, and provided by MPAL.
*****************************************************************************/
/* mpal_ul_status_report(), detail function prototype provided by L1C */

#ifndef __MTK_TARGET__
#ifdef __NEW_TBF_ARCH__
typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   FrameNumber               fn;
   PrePacketUplinkSpec       ppus[1];
   TimeSlotMask              timeSlotsUp;
   TimingAdvance             ta;
   kal_uint8                 available_TBF;
}mphp_pkt_u1_ind_struct;

typedef struct
{
   kal_uint8                 ref_count;
   kal_uint16                msg_len;
   FrameNumber               fn;
   TimeSlotMask              poll;
   TimeSlotMask              granted[8];
   kal_uint8                 bufferIndex[8];
   kal_uint8                 tbf_index[8];
}mphp_pkt_u2_ind_struct;

typedef struct
{
   kal_uint8                          ref_count;
   kal_uint16                         msg_len;
   mphp_packet_downlink_struct        pkt_dl;
   mph_rx_multislot_data_struct       rx_data[4];
}mphp_packet_downlink_ind_struct;

#endif /*__NEW_TBF_ARCH__*/
#endif

#endif /* end of _MPH_PS_MSG_H */
