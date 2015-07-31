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

/*******************************************************************************
 * Filename:
 * ---------
 *	rac_hdlrs.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is defines the message handlers of rac.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
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
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RAC_HDLRS_H
#define _RAC_HDLRS_H

#include "kal_public_defs.h"

/*****************************/
/*      L4C Message          */
/*****************************/

extern void  rac_l4c_set_preferred_band_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);               

extern void  rac_l4c_rfoff_req_handler(void);
extern void  rac_l4c_act_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);         
   	
extern void  rac_l4c_reg_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);           	   
extern void  rac_l4c_ps_reg_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);           	   

extern void  rac_l4c_dereg_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);    

extern void  rac_l4c_plmn_list_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);         

extern void  rac_l4c_plmn_search_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);         
extern void  rac_l4c_class_change_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);        
extern void rac_l4c_plmn_list_stop_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_l4c_set_rat_mode_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void  rac_l4c_set_roaming_mode_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __UE_EFOPLMN__
extern void  rac_l4c_set_ue_oplmn_update_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

#ifdef __DYNAMIC_SET_IMEI__
extern void  rac_l4c_set_imei_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void rac_l4c_set_prefer_rat_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#ifdef __2STAGE_NW_SELECTION__
extern void rac_l4c_susp_resu_update_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif
/*****************************/
/*      NVRAM Message        */
/*****************************/

extern void  rac_nvram_read_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_nvram_write_cnf_msg_handler( local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr );

/*****************************/
/*      MM Message           */
/*****************************/      
extern void rac_mm_rfoff_cnf_handler(void);
extern void rac_mm_attach_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_mm_detach_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_mm_plmn_search_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_mm_plmn_list_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_nw_info_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_cell_info_update_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_mm_set_rat_mode_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_plmn_list_stop_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_mm_set_roaming_mode_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void rac_l4c_class_chagne_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_ps_service_info_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_cipher_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); /* Ripple add for cipher indicator */

extern void rac_mm_dedicated_mode_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __HOMEZONE_SUPPORT__
extern void rac_rr_pkt_transfer_mode_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif


#ifdef __GEMINI__
extern void rac_mm_search_normal_finish_ind_handler(ilm_struct *ilm_ptr);
extern void rac_mm_rr_service_status_ind_handler(ilm_struct *ilm_ptr);//20080217
extern void rac_l4c_sim_status_update_req_handler(ilm_struct *ilm_ptr); //20071211
#endif

#ifdef __SAT__
extern void rac_sat_imei_info_req_msg_handler(ilm_struct *ilm_ptr);
extern void rac_sat_time_zone_req_msg_handler(void);
#endif

#ifdef __REL5__
extern void rac_mm_nw_ecc_ind_msg_handler( ilm_struct *ilm_ptr );
#endif

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
//mtk02475: for Fast Dormancy, allow upperlayer explicitly disconnect data channel
extern void rac_l4c_end_ps_data_session_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_end_ps_data_session_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_end_ps_data_session_ind_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif
#ifdef __REPORT_AVAILABLE_PLMN__
extern void rac_mm_plmn_list_ind_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif
#ifdef __2STAGE_NW_SELECTION__
extern void rac_mm_susp_resu_update_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_suspend_status_ind_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif
#ifdef __CSG_SUPPORT__
//mtk02475: for Rel8 CSG feature
extern void rac_l4c_csg_list_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_l4c_csg_list_stop_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_csg_list_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void rac_mm_csg_list_stop_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif /* __CSG_SUPPORT__ */

#endif


