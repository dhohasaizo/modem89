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
 * mph_dm_msg.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   for support Dual mode 
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

#ifndef _MPH_DM_MSG_H
#define _MPH_DM_MSG_H

#include "kal_public_api.h"
#include "mph_types.h"
#include "mph_cs_def.h"
#include "kal_general_types.h"
#include "mph_dm_def.h"


typedef enum
{
  MPHD_FOR_UMTS_GSM_MEAS=0,
  MPHD_FOR_UMTS_GSM_MEAS_STOP,
  MPHD_FOR_UMTS_GSM_BSIC,
  MPHD_FOR_UMTS_GSM_BSIC_STOP,
  MPHD_FOR_UMTS_CELL_BSIC,
  MPHD_FOR_UMTS_CELL_BSIC_STOP,
  MPHD_FOR_UMTS_CELL_SYS_INFO,
  MPHD_FOR_UMTS_CELL_SYS_INFO_STOP,  
  MPHD_FOR_UMTS_GSM_MANUAL_PWRSCAN,
  MPHD_FOR_UMTS_GSM_MANUAL_PWRSCAN_STOP,
  MPHD_FOR_UMTS_GSM_PRIO_MEAS,
  MPHD_FOR_UMTS_GSM_PRIO_MEAS_STOP,
  MPHD_FOR_UMTS_GSM_BSIC_REPORT
}mphd_umts_gap_purpose_enum;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_ACTIVE_REQ
* DESCRIPTION
*   Message requesting layer 1 to provide GAP pattern.
*****************************************************************************/
typedef struct
{
  kal_uint8         ref_count;
  kal_uint16        msg_len;
  mph_system_mode_enum  system_mode;
} mphd_standby_req_struct;
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_HANDOVER_REQ
* DESCRIPTION
*   
*****************************************************************************/
typedef struct
{
  kal_uint8         ref_count;
  kal_uint16        msg_len;
#ifdef __PS_HO__
  kal_bool          is_ps_handover;
#endif /* end of __PS_HO__ */
} mphd_umts_handover_req_struct;
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_BSIC_READ_REQ
* DESCRIPTION
*   Message requesting layer 1 to provide GAP pattern.
*****************************************************************************/
typedef struct
{
   kal_uint16 arfcn;
   kal_uint8 bsic_valid;
   kal_int32 frame_offset;
   kal_int32 ebit_offset;
   kal_bool  retry_FB_SB;
   kal_uint32 time_stamp;
} dual_gsm_bsic_read_struct;

typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   /* The number of valid element in bsic_acquisition_list */
   kal_uint8                              list_len;
   /* The database for BSIC read */
   dual_gsm_bsic_read_struct              cell_bsic_list[MPH_MAX_STANDBY_BSIC_NUM];
} mphd_umts_gsm_bsic_read_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_MEAS_START_REQ
* DESCRIPTION
*   Message requesting layer 1 to start gsm rssi measurement.
*****************************************************************************/
typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   /* The number of valid element in gsm_rssi_measurement_list */
   kal_uint8                              list_len;
   kal_uint8                              list_ref;
   /* The database of arfcn for gsm rssi measurement */
   kal_uint16   cell_list[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM];
} mphd_umts_gsm_meas_start_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_MEAS_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to stop gsm rssi measurement, and gsm bsic acquisition if it exists.
*****************************************************************************/
typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   kal_uint8                              list_ref;   
} mphd_umts_gsm_meas_stop_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_BSIC_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to provide GAP pattern.
*****************************************************************************/
typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   kal_uint8                              list_len;
   kal_uint16                             stop_cell_list[MPH_MAX_STANDBY_BSIC_NUM];
} mphd_umts_gsm_bsic_stop_req_struct;

#ifdef __GERAN_R8__
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_PRIO_MEAS_START_REQ
* DESCRIPTION
*   Message requesting layer 1 to start gsm rssi measurement based on priority search period.
*****************************************************************************/
typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   /* The number of valid element in gsm_rssi_measurement_list */
   kal_uint8                              list_len;
   kal_uint8                              list_ref;
   /* The database of arfcn for gsm rssi measurement */
   kal_uint16   cell_list[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM];
   kal_uint16   period_in_second; /* should equal to 60*N (where N is integer)*/
} mphd_umts_gsm_prio_meas_start_req_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_GSM_PRIO_MEAS_STOP_REQ
* DESCRIPTION
*   Message requesting layer 1 to stop gsm rssi measurement, 
*   PS. RR will stop gsm bsic acquisition before prio_meas_stop.
*****************************************************************************/
typedef struct
{
   kal_uint8                              ref_count;
   kal_uint16                             msg_len;
   kal_uint8                              list_ref;   
} mphd_umts_gsm_prio_meas_stop_req_struct;

/***************************************************************************
*  PRIMITIVE STRUCTURE
*     mphd_umts_gsm_prio_meas_ind_struct
*
*  DESCRIPTION
*     This message is sent from L1A to the upper layer for the results of
*     measurement on the cells after L1 receives
*     MPHD_UMTS_GSM_PRIO_MEAS_REQ. It is for dual mode support
*
***************************************************************************/
typedef struct
{
   kal_uint8   ref_count;
   kal_uint16  msg_len;
   kal_uint8   list_ref;   /* BA list reference */
   kal_uint8   list_len;   /* The number of valid elements of
                              rlac_in_quarter_dbm */
   ARFCN       arfcn_list[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM]; /* The list arfcn on which
                                                the measurements are taken */
   Power       rlac_in_quarter_dbm[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM]; /* The measurement
                                                            average for each
                                                            carrier in unit
                                                            of 1/4dbm */
} mphd_umts_gsm_prio_meas_ind_struct;
#endif /*__GERAN_R8__*/

/***************************************************************************
*  PRIMITIVE STRUCTURE
*     mphd_umts_gsm_meas_ind_struct
*
*  DESCRIPTION
*     This message is sent from L1A to the upper layer for the results of
*     measurement on the cells after L1 receives
*     MPHD_UMTS_GSM_MEAS_REQ. It is for dual mode support
*
***************************************************************************/
typedef struct
{
   kal_uint8   ref_count;
   kal_uint16  msg_len;
   kal_uint8   list_ref;   /* BA list reference */
   kal_uint8   list_len;   /* The number of valid elements of
                              rlac_in_quarter_dbm */
   ARFCN       arfcn_list[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM]; /* The list arfcn on which
                                                the measurements are taken */
   Power       rlac_in_quarter_dbm[MPH_UMTS_GSM_MEAS_MAX_CELL_NUM]; /* The measurement
                                                            average for each
                                                            carrier in unit
                                                            of 1/4dbm */
   kal_uint16  drx_len;
   kal_uint8   Tmeas_drx_num;  
   kal_uint16  bsic_reconfirm_para;
} mphd_umts_gsm_meas_ind_struct;

/***************************************************************************
*  PRIMITIVE STRUCTURE
*     mphd_umts_gsm_bsic_ind_struct
*
*  DESCRIPTION
*     This message is sent from L1A to the upper layer for the results
*     of BSIC decoding. The timing information, frame offset and ebit offset
*
***************************************************************************/
typedef struct
{
   kal_uint8      ref_count;
   kal_uint16     msg_len;

   ARFCN          arfcn;        /* The arfcn corresponding to the acquired bsic */
   /* It indicates if the bsic is acquired correctly */
   kal_bool       bsic_valid;
   BSIC           bsic;         /* The acquired bsic */
   FrameNumber    frame_offset;
   kal_int32      ebit_offset;
   kal_uint32    time_stamp;
} mphd_umts_gsm_bsic_ind_struct;


/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_STANDBY_CNF
* DESCRIPTION
*   
*****************************************************************************/
typedef struct
{
  kal_uint8         ref_count;
  kal_uint16        msg_len;
  kal_uint8         is_successful;
} mphd_standby_cnf_struct;

/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_UMTS_HANDOVER_CNF
* DESCRIPTION
*   
*****************************************************************************/
typedef struct
{
  kal_uint8         ref_count;
  kal_uint16        msg_len;
#ifdef __PS_HO__
  kal_bool          is_ps_handover;
#endif 
} mphd_umts_handover_cnf_struct;
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   MPHD_3G_SEARCH_PRIORITY_REQ
* DESCRIPTION
*   Message requesting layer 1 to provide GAP pattern.
*****************************************************************************/
#if 1 /* SYY: remove MSG_ID_MPHD_3G_SEARCH_PRIORITY_REQ */       
typedef struct
{
   kal_uint8    ref_count;
   kal_uint16   msg_len;
   /* The number of valid element in bsic_acquisition_list */
   kal_bool     high_priority;
}mphd_3g_search_priority_req_struct;
#endif
/*****************************************************************************
* PRIMITIVE STRUCTURE
*   l1a_send_umts_gap_service_req
* DESCRIPTION
*   Message requesting layer 1 to provide GAP pattern.
*****************************************************************************/
typedef struct
{
   kal_bool  enable;
   kal_uint8 type;
#ifdef __GERAN_R8__   
   kal_int16 t_high_prio_search;
#endif /*__GERAN_R8__*/
}l1a_umts_gap_service_req_struct;

extern void l1a_dm_active_req(void *);
extern void l1a_set_gsm_sm_active_to_dm_active(void *);
extern void l1a_dm_standby_req(void *);
extern void l1a_dm_deactivate_req(void *);
extern void l1a_receive_report_gappattern(void*);
extern void l1a_receive_report_standby_done(void*);
extern void l1a_surround_enter_standby_mode(void);
extern void l1a_gsm_gap_cancel_req(void);
extern void l1a_check_umts_gap_service(mphd_umts_gap_purpose_enum);

extern void l1a_send_umts_gap_service_req(l1a_umts_gap_service_req_struct* umts_gap_service_req);

extern void l1a_umts_gsm_bsic_read_req(void*);
extern void l1a_umts_gsm_bsic_stop_req(void*);

extern void l1a_umts_gap_pattern_pch_ind(void*);
extern void l1a_umts_gap_pattern_fach_ind(void*);
extern void l1a_umts_gap_pattern_dch_ind(void*);

#ifdef __UMTS_TDD128_MODE__
extern void l1a_umts_gap_pattern_hspa_ind(void*);
#endif /*__UMTS_TDD128_MODE__*/

extern void l1a_umts_gsm_meas_start_req(void*);
extern void l1a_umts_gsm_meas_stop_req(void*);
#ifdef __GERAN_R8__
extern void l1a_set_prio_meas_period(void*);
extern void l1a_umts_gsm_prio_meas_start_req(void*);
extern void l1a_umts_gsm_prio_meas_stop_req(void*);
#endif /*__GERAN_R8__*/

extern void l1a_standby_cell_bsic_start_req(void*);
extern void l1a_standby_cell_bsic_stop_req(void*);
extern void l1a_standby_cell_sys_info_start_req(void*);
extern void l1a_standby_cell_sys_info_stop_req(void*);
extern void l1a_standby_cell_manual_pwrscan_stop_req(void);
extern void l1a_dual_mode_umts_sync_start_func(void);
extern void l1a_3g_search_priority_req(void*);  /* SYY: remove MSG_ID_MPHD_3G_SEARCH_PRIORITY_REQ */       
extern void l1a_send_gsm_gap_unavailable_ind(void);
extern void l1a_send_gsm_gap_available_ind(void);
#if 0 /*Pop20090310 for low pwr improvement in 2G standby mode*/
/* under construction !*/
#endif
extern void l1a_receive_report_sync_time(void*);
extern void l1a_receive_report_gsm_rssi(void*);
extern void l1a_receive_report_gsm_bsic(void*);
extern void l1a_receive_report_gap_stop(void*);
extern void l1a_receive_report_active_done(void*);
extern void l1a_send_umts_handover_cnf(void);
extern void l1a_receive_report_480ms_tick_in_standby(void*);
extern kal_uint8 l1a_gap_external_read_gap_state(void);
extern kal_uint8 l1a_gap_external_read_standby_irsync_state(void);
extern kal_uint8 l1a_gap_external_read_gap_service_type(void);
#ifdef __GERAN_R8__
extern kal_int16 l1a_gap_external_read_t_high_prio_search(void);
#endif /*__GERAN_R8__*/
extern kal_bool l1a_check_stop_time_after_guard_time(kal_int32);
extern void l1a_stop_gsm_gap_req(FrameNumber);
extern void l1a_receive_gsm_gap_stop_cnf(void);

void l1a_temporarily_stop_gsm_gap_req(void);
void l1a_resume_gsm_gap_schedule(void);

extern void l1a_inform_umts_mode (void*);

extern void l1a_umts_gap_stop_req(void*);
extern void l1a_re_request_umts_gap_service(void);

#ifdef __UMTS_FDD_MODE__
extern void l1a_umts_fmo_lock_req(void*);
extern void l1a_umts_fmo_unlock_req(void*);
#endif /*__UMTS_FDD_MODE__*/

#ifdef __UMTS_TDD128_MODE__
extern void l1a_umts_fach_lock_req(void*);
extern void l1a_umts_fach_unlock_req(void*);
#endif /*__UMTS_TDD128_MODE__*/

extern void l1a_receive_report_gap_end(void*);
extern void l1a_enter_umts_fail_reconnect(void);
extern void l1a_enter_umts_handover(void);


extern void l1a_umts_cell_meas_done_ind (void*);

#ifdef __PS_HO__
extern void l1a_send_umts_ps_handover_cnf(void);
#endif /* end of __PS_HO__ */

#ifdef __GEMINI_GSM__
extern void l1a_handle_irsync_for_suspend_state (void);
extern void l1a_update_alt_l1_gsm_gap_service_init(void);
extern void l1a_update_alt_l1_gsm_gap_service (kal_bool is_need);
extern void l1a_send_mphc_alt_l1_gsm_gap_service_update_req(kal_bool enable);
extern void l1a_receive_mphc_alt_l1_gsm_gap_resume_req(void);
#endif /* end of __GEMINI_GSM__ */

#endif /* end of _MPH_DM_MSG_H */
