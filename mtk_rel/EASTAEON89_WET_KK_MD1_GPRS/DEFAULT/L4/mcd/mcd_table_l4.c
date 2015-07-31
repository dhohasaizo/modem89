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
 *
 * Filename:
 * ---------
 *	mcd_table.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   MediaTek Coding/Decoding opcode table.
 *
 * Author:
 * -------
 *	HJF
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 05 10 2012 doug.shih
 * [MAUI_03158444] [TheONE] UAS/SCSI/ASN/MCD/MCDDLL gen related modification
 * .
 *
 * 04 26 2012 doug.shih
 * [MAUI_03158444] [TheONE] UAS/SCSI/ASN/MCD/MCDDLL gen related modification
 * .
 *
 * 03 29 2012 doug.shih
 * [MAUI_03158444] [TheONE] UAS/SCSI/ASN/MCD/MCDDLL gen related modification
 * .
 *
 * 06 08 2011 doug.shih
 * [MAUI_02957665] [PS1][PS RESTRUCT] Merge PS_RESTRUCT_DEV to MAUI/11B
 * .
 *
 * 05 26 2011 c-hua.yang
 * [MAUI_02946785] [MCD] MCD 7.0 L3/L4 separation
 * .
 *
 * 05 22 2011 c-hua.yang
 * [MAUI_02946785] [MCD] MCD 7.0 L3/L4 separation
 * .
 *
 * 12 14 2010 c-hua.yang
 * [MAUI_02848668] [MAUI][UAS/RSVA/SCSI/MCD] Redundant Header Removal / RHR
 * MCD/MCDDLL RHR
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#include "mcd.h"
#include "kal_general_types.h"

const kal_uint8 mcd_table_l4[]=
{
	/*MTK:BEGIN:generate_mcd_table*/

	/* 0 : l4_addr_bcd_struct */

	232  /* BITS, 8 */, 
	BYTES, 	41, 
	END, 
	/* 4 : l4_name_struct */

	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	BYTES, 	42, 
	END, 
	/* 9 : l4_csd_name_struct */

	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	BYTES, 	32, 
	END, 
	/* 14 : smsal_submit_msg_struct */

	232  /* BITS, 8 */, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	0, 	160, 
	END, 
	/* 30 : smsal_deliver_msg_struct */

	232  /* BITS, 8 */, 
	BYTES, 	7, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	0, 	160, 
	END, 
	/* 47 : smsal_status_report_msg_struct */

	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	BYTES, 	7, 
	BYTES, 	7, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	0, 	143, 
	END, 
	/* 65 : smsal_command_msg_struct */

	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	156, 
	END, 
	/* 77 : smsal_send_msg_req_struct */

	232  /* BITS, 8 */, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	CALL /* l4_addr_bcd_struct */, 	31, 	64, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	0, 	160, 
	END, 
	/* 96 : uem_greeting_text_struct */

	MAXBYTES, 	8, 	0, 	100, 
	END, 
	/* 101 : sat_dspl_text_ind_peer_struct */

	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	END, 
	/* 107 : sat_get_inkey_ind_peer_struct */

	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	END, 
	/* 113 : sat_get_inkey_res_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	END, 
	/* 119 : sat_get_input_ind_peer_struct */

	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	END, 
	/* 130 : sat_get_input_res_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	END, 
	/* 136 : sat_setup_menu_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	5, 	220, 
	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 155 : sat_select_item_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 174 : sat_play_tone_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 181 : sat_setup_call_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 198 : sat_send_sms_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 209 : sat_send_ss_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 220 : sat_send_ussd_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	END, 
	/* 232 : sat_mmi_info_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 239 : sat_addr_struct */

	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 244 : sat_setup_idle_dspl_ind_peer_struct */

	MAXBYTES, 	16, 	5, 	220, 
	232  /* BITS, 8 */, 
	END, 
	/* 250 : sat_run_at_command_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 261 : sat_send_dtmf_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 272 : sat_launch_browser_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	MAXBYTES, 	8, 	0, 	255, 
	MAXBYTES, 	16, 	0, 	255, 
	232  /* BITS, 8 */, 
	END, 
	/* 292 : sat_open_gprs_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 299 : l4csmu_sat_open_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 306 : sat_open_csd_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 313 : sat_open_server_mode_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 320 : sat_close_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 327 : l4csmu_sat_close_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 334 : sat_send_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 345 : sat_recv_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 352 : sat_recv_data_res_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	END, 
	/* 357 : l4csat_open_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 364 : l4csat_close_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 371 : l4csat_send_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 378 : l4csmu_sat_send_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 385 : l4csat_recv_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 392 : l4csmu_sat_recv_data_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 399 : sat_open_channel_ind_peer_struct */

	MAXBYTES, 	8, 	0, 	255, 
	232  /* BITS, 8 */, 
	232  /* BITS, 8 */, 
	END, 
	/* 406 : CliRestrictionOption */
	BER_ENUM, 
	END, 
	/* 408 : OverrideCategory */
	BER_ENUM, 
	END, 
	/* 410 : SS_Code */

	BER_BYTES, 	1, 
	END, 
	/* 413 : CCBS_Index */

	BER_INTEGER, 
	END, 
	/* 415 : SS_Status */

	BER_BYTES, 	1, 
	END, 
	/* 418 : EMLPP_Priority */

	BER_INTEGER, 
	END, 
	/* 420 : USSD_DataCodingScheme */

	BER_BYTES, 	1, 
	END, 
	/* 423 : USSD_String */

	BER_MAXBYTES, 	0, 	0, 	0, 	160, 
	END, 
	/* 429 : USSDIA5_String */
	BER_MAXIA5STRING, 	0, 	0, 	0, 	160, 
	END, 
	/* 435 : AlertingPattern */

	BER_BYTES, 	1, 
	END, 
	/* 438 : EraseCC_EntryArg */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* SS_Code */, 	32, 	218, 
	BER_IF, 	8, 	129, 
	CALL /* CCBS_Index */, 	32, 	221, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 454 : EraseCC_EntryRes */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* SS_Code */, 	32, 	218, 
	BER_IF, 	8, 	129, 
	CALL /* SS_Status */, 	32, 	223, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 470 : BearerServiceCode */

	BER_BYTES, 	1, 
	END, 
	/* 473 : TeleserviceCode */

	BER_BYTES, 	1, 
	END, 
	/* 476 : BasicServiceCode */

	CHOICE, 
	BER_CASE, 	8, 	128, 
	CALL /* BearerServiceCode */, 	33, 	22, 	BREAK, 
	BER_CASE, 	8, 	130, 
	CALL /* BearerServiceCode */, 	33, 	22, 	BREAK, 
	BER_CASE, 	8, 	131, 
	CALL /* TeleserviceCode */, 	33, 	25, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 500 : BasicServiceCodeSeq */

	BER_SEQUENCE, 
	BER_IF, 	8, 	128, 
	CALL /* BearerServiceCode */, 	33, 	22, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 
	CALL /* BearerServiceCode */, 	33, 	22, 
	ENDBER_IF, 
	BER_IF, 	8, 	131, 
	CALL /* TeleserviceCode */, 	33, 	25, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 524 : BasicServiceGroupList */

	BER_MAXSTRUCT /* BasicServiceCode */, 	33, 	28, 	0, 	0, 	0, 	13, 
	END, 
	/* 532 : AddressString */

	BER_MAXBYTES, 	0, 	0, 	0, 	20, 
	END, 
	/* 538 : ISDN_AddressString */
	BER_SET, 
	CALL /* AddressString */, 	33, 	84, 
	END, 
	/* 543 : ISDN_SubaddressString */

	BER_MAXBYTES, 	0, 	0, 	0, 	21, 
	END, 
	/* 549 : FTN_AddressString */
	BER_SET, 
	CALL /* AddressString */, 	33, 	84, 
	END, 
	/* 554 : ForwardingOptions */

	BER_BYTES, 	1, 
	END, 
	/* 557 : NoReplyConditionTime */

	BER_INTEGER, 
	END, 
	/* 559 : ForwardingFeature */

	BER_SEQUENCE, 
	BER_OPTIONAL, 
	CALL /* BasicServiceCode */, 	33, 	28, 
	BER_IF, 	8, 	132, 
	CALL /* SS_Status */, 	32, 	223, 
	ENDBER_IF, 
	BER_IF, 	8, 	133, 
	CALL /* AddressString */, 	33, 	84, 
	ENDBER_IF, 
	BER_IF, 	8, 	136, 
	CALL /* ISDN_SubaddressString */, 	33, 	95, 
	ENDBER_IF, 
	BER_IF, 	8, 	134, 
	CALL /* ForwardingOptions */, 	33, 	106, 
	ENDBER_IF, 
	BER_IF, 	8, 	135, 
	CALL /* NoReplyConditionTime */, 	33, 	109, 
	ENDBER_IF, 
	BER_IF, 	8, 	137, 
	CALL /* AddressString */, 	33, 	84, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 608 : ForwardingFeatureList */

	BER_MAXSTRUCT /* ForwardingFeature */, 	33, 	111, 	0, 	0, 	0, 	13, 
	END, 
	/* 616 : CCBS_Feature */

	BER_SEQUENCE, 
	BER_IF, 	8, 	128, 
	CALL /* CCBS_Index */, 	32, 	221, 
	ENDBER_IF, 
	BER_IF, 	8, 	129, 
	CALL /* AddressString */, 	33, 	84, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 
	CALL /* ISDN_SubaddressString */, 	33, 	95, 
	ENDBER_IF, 
	BER_IF, 	8, 	163, 
	CALL /* BasicServiceCodeSeq */, 	33, 	52, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 647 : CCBS_FeatureList */

	BER_MAXSTRUCT /* CCBS_Feature */, 	33, 	168, 	0, 	0, 	0, 	5, 
	END, 
	/* 655 : GenericServiceInfo */

	BER_SEQUENCE, 
	CALL /* SS_Status */, 	32, 	223, 
	BER_OPTIONAL, 
	CALL /* CliRestrictionOption */, 	32, 	214, 
	BER_IF, 	8, 	128, 
	CALL /* EMLPP_Priority */, 	32, 	226, 
	ENDBER_IF, 
	BER_IF, 	8, 	129, 
	CALL /* EMLPP_Priority */, 	32, 	226, 
	ENDBER_IF, 
	BER_IF, 	8, 	162, 
	CALL /* CCBS_FeatureList */, 	33, 	199, 
	ENDBER_IF, 
	BER_IF, 	8, 	131, 
	BER_INTEGER, 
	ENDBER_IF, 
	BER_IF, 	8, 	132, 
	BER_INTEGER, 
	ENDBER_IF, 
	BER_IF, 	8, 	133, 
	BER_INTEGER, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 701 : InterrogateSS_Res */

	CHOICE, 
	BER_CASE, 	8, 	128, 
	CALL /* SS_Status */, 	32, 	223, 	BREAK, 
	BER_CASE, 	8, 	162, 
	CALL /* BasicServiceGroupList */, 	33, 	76, 	BREAK, 
	BER_CASE, 	8, 	163, 
	CALL /* ForwardingFeatureList */, 	33, 	160, 	BREAK, 
	BER_CASE, 	8, 	164, 
	CALL /* GenericServiceInfo */, 	33, 	207, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 732 : MC_Bearers */

	BER_INTEGER, 
	END, 
	/* 734 : RegisterSS_Arg */

	BER_SEQUENCE, 
	CALL /* SS_Code */, 	32, 	218, 
	BER_OPTIONAL, 
	CALL /* BasicServiceCode */, 	33, 	28, 
	BER_IF, 	8, 	132, 
	CALL /* AddressString */, 	33, 	84, 
	ENDBER_IF, 
	BER_IF, 	8, 	134, 
	CALL /* ISDN_SubaddressString */, 	33, 	95, 
	ENDBER_IF, 
	BER_IF, 	8, 	133, 
	CALL /* NoReplyConditionTime */, 	33, 	109, 
	ENDBER_IF, 
	BER_IF, 	8, 	135, 
	CALL /* EMLPP_Priority */, 	32, 	226, 
	ENDBER_IF, 
	BER_IF, 	8, 	136, 
	CALL /* MC_Bearers */, 	34, 	28, 
	ENDBER_IF, 
	BER_IF, 	8, 	137, 	BER_NULL, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 784 : SS_ForBS_Code */

	BER_SEQUENCE, 
	CALL /* SS_Code */, 	32, 	218, 
	BER_OPTIONAL, 
	CALL /* BasicServiceCode */, 	33, 	28, 
	ENDBER_SEQUENCE, 
	END, 
	/* 794 : CallBarringFeature */

	BER_SEQUENCE, 
	BER_OPTIONAL, 
	CALL /* BasicServiceCode */, 	33, 	28, 
	BER_IF, 	8, 	132, 
	CALL /* SS_Status */, 	32, 	223, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 808 : CallBarringFeatureList */

	BER_MAXSTRUCT /* CallBarringFeature */, 	34, 	90, 	0, 	0, 	0, 	13, 
	END, 
	/* 816 : CallBarringInfo */

	BER_SEQUENCE, 
	BER_OPTIONAL, 
	CALL /* SS_Code */, 	32, 	218, 
	CALL /* CallBarringFeatureList */, 	34, 	104, 
	ENDBER_SEQUENCE, 
	END, 
	/* 826 : ForwardingInfo */

	BER_SEQUENCE, 
	BER_OPTIONAL, 
	CALL /* SS_Code */, 	32, 	218, 
	CALL /* ForwardingFeatureList */, 	33, 	160, 
	ENDBER_SEQUENCE, 
	END, 
	/* 836 : SS_SubscriptionOption */

	CHOICE, 
	BER_CASE, 	8, 	130, 
	CALL /* CliRestrictionOption */, 	32, 	214, 	BREAK, 
	BER_CASE, 	8, 	129, 
	CALL /* OverrideCategory */, 	32, 	216, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 853 : SS_Data */

	BER_SEQUENCE, 
	BER_OPTIONAL, 
	CALL /* SS_Code */, 	32, 	218, 
	BER_IF, 	8, 	132, 
	CALL /* SS_Status */, 	32, 	223, 
	ENDBER_IF, 
	BER_OPTIONAL, 
	CALL /* SS_SubscriptionOption */, 	34, 	132, 
	BER_OPTIONAL, 
	CALL /* BasicServiceGroupList */, 	33, 	76, 
	BER_OPTIONAL, 
	CALL /* EMLPP_Priority */, 	32, 	226, 
	BER_IF, 	8, 	133, 
	BER_INTEGER, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 884 : SS_Info */

	CHOICE, 
	BER_CASE, 	8, 	160, 
	CALL /* ForwardingInfo */, 	34, 	122, 	BREAK, 
	BER_CASE, 	8, 	161, 
	CALL /* CallBarringInfo */, 	34, 	112, 	BREAK, 
	BER_CASE, 	8, 	163, 
	CALL /* SS_Data */, 	34, 	149, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 908 : USSD_Arg */

	BER_SEQUENCE, 
	CALL /* USSD_DataCodingScheme */, 	32, 	228, 
	CALL /* USSD_String */, 	32, 	231, 
	BER_OPTIONAL, 
	CALL /* AlertingPattern */, 	32, 	243, 
	BER_IF, 	8, 	128, 
	CALL /* AddressString */, 	33, 	84, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 928 : USSD_Res */

	BER_SEQUENCE, 
	CALL /* USSD_DataCodingScheme */, 	32, 	228, 
	CALL /* USSD_String */, 	32, 	231, 
	ENDBER_SEQUENCE, 
	END, 
	/* 937 : GuidanceInfo */
	BER_ENUM, 
	END, 
	/* 939 : Password */
	BER_NUMSTRING, 	0, 	0, 	0, 	4, 
	END, 
	/* 945 : CUG_Index */

	BER_INTEGER, 
	END, 
	/* 947 : OperationCode */

	CHOICE, 
	BER_CASE_TRY, 
	BER_INTEGER, 	BREAK, 
	BER_CASE_TRY, 	BER_OID, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 956 : CallDeflection */
	BER_SET, 
	CALL /* OperationCode */, 	34, 	243, 
	END, 
	/* 961 : ForwardCUG_InfoArg */

	BER_SEQUENCE, 
	BER_IF, 	8, 	128, 
	CALL /* CUG_Index */, 	34, 	241, 
	ENDBER_IF, 
	BER_IF, 	8, 	129, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 	BER_NULL, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 981 : E1 */

	BER_INTEGER, 
	END, 
	/* 983 : E2 */

	BER_INTEGER, 
	END, 
	/* 985 : E3 */

	BER_INTEGER, 
	END, 
	/* 987 : E4 */

	BER_INTEGER, 
	END, 
	/* 989 : E5 */

	BER_INTEGER, 
	END, 
	/* 991 : E6 */

	BER_INTEGER, 
	END, 
	/* 993 : E7 */

	BER_INTEGER, 
	END, 
	/* 995 : ChargingInformation */

	BER_SEQUENCE, 
	BER_IF, 	8, 	129, 
	CALL /* E1 */, 	35, 	21, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 
	CALL /* E2 */, 	35, 	23, 
	ENDBER_IF, 
	BER_IF, 	8, 	131, 
	CALL /* E3 */, 	35, 	25, 
	ENDBER_IF, 
	BER_IF, 	8, 	132, 
	CALL /* E4 */, 	35, 	27, 
	ENDBER_IF, 
	BER_IF, 	8, 	133, 
	CALL /* E5 */, 	35, 	29, 
	ENDBER_IF, 
	BER_IF, 	8, 	134, 
	CALL /* E6 */, 	35, 	31, 
	ENDBER_IF, 
	BER_IF, 	8, 	135, 
	CALL /* E7 */, 	35, 	33, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1047 : ForwardChargeAdviceArg */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* SS_Code */, 	32, 	218, 	BER_TAG, 	8, 	161, 
	CALL /* ChargingInformation */, 	35, 	35, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1062 : SS_Notification */

	BER_BYTES, 	1, 
	END, 
	/* 1065 : ECT_CallState */
	BER_ENUM, 
	END, 
	/* 1067 : NameSet */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* USSD_DataCodingScheme */, 	32, 	228, 	BER_TAG, 	8, 	129, 
	BER_INTEGER, 	BER_TAG, 	8, 	130, 
	CALL /* USSD_String */, 	32, 	231, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1086 : Name */

	BER_SEQUENCE, 
	BER_IF, 	8, 	160, 
	CALL /* NameSet */, 	35, 	107, 
	ENDBER_IF, 
	BER_IF, 	8, 	129, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	163, 
	CALL /* NameSet */, 	35, 	107, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1113 : NameIndicator */

	BER_SEQUENCE, 
	BER_IF, 	8, 	160, 
	CALL /* Name */, 	35, 	126, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1123 : RemotePartyNumber */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* AddressString */, 	33, 	84, 
	BER_IF, 	8, 	129, 
	CALL /* ISDN_SubaddressString */, 	33, 	95, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1139 : RDN */

	BER_SEQUENCE, 
	BER_IF, 	8, 	160, 
	CALL /* RemotePartyNumber */, 	35, 	163, 
	ENDBER_IF, 
	BER_IF, 	8, 	129, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	130, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	163, 
	CALL /* RemotePartyNumber */, 	35, 	163, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1166 : ECT_Indicator */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	BER_INTEGER, 
	BER_IF, 	8, 	161, 
	CALL /* RDN */, 	35, 	179, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1180 : NotifySS_Arg */

	BER_SEQUENCE, 
	BER_IF, 	8, 	129, 
	CALL /* SS_Code */, 	32, 	218, 
	ENDBER_IF, 
	BER_IF, 	8, 	132, 
	CALL /* SS_Status */, 	32, 	223, 
	ENDBER_IF, 
	BER_IF, 	8, 	133, 
	CALL /* SS_Notification */, 	35, 	102, 
	ENDBER_IF, 
	BER_IF, 	8, 	142, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	143, 
	BER_INTEGER, 
	ENDBER_IF, 
	BER_IF, 	8, 	144, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	145, 
	CALL /* CUG_Index */, 	34, 	241, 
	ENDBER_IF, 
	BER_IF, 	8, 	146, 	BER_NULL, 
	ENDBER_IF, 
	BER_IF, 	8, 	179, 
	CALL /* ECT_Indicator */, 	35, 	206, 
	ENDBER_IF, 
	BER_IF, 	8, 	180, 
	CALL /* NameIndicator */, 	35, 	153, 
	ENDBER_IF, 
	BER_IF, 	8, 	181, 
	CALL /* CCBS_Feature */, 	33, 	168, 
	ENDBER_IF, 
	BER_IF, 	8, 	150, 
	CALL /* AlertingPattern */, 	32, 	243, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1259 : RegisterCC_EntryRes */

	BER_SEQUENCE, 
	BER_IF, 	8, 	160, 
	CALL /* CCBS_Feature */, 	33, 	168, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1269 : UUS_Service */
	BER_ENUM, 
	END, 
	/* 1271 : UserUserServiceArg */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	BER_INTEGER, 	BER_TAG, 	8, 	129, 	BER_BOOLEAN, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1282 : CallDeflectionArg */

	BER_SEQUENCE, 	BER_TAG, 	8, 	128, 
	CALL /* AddressString */, 	33, 	84, 
	BER_IF, 	8, 	129, 
	CALL /* ISDN_SubaddressString */, 	33, 	95, 
	ENDBER_IF, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1298 : GeneralProblem */

	BER_INTEGER, 
	END, 
	/* 1300 : InvokeProblem */

	BER_INTEGER, 
	END, 
	/* 1302 : ReturnResultProblem */

	BER_INTEGER, 
	END, 
	/* 1304 : ReturnErrorProblem */

	BER_INTEGER, 
	END, 
	/* 1306 : InvokeIdType */

	BER_INTEGER, 
	END, 
	/* 1308 : Invoke */

	BER_SEQUENCE, 
	CALL /* InvokeIdType */, 	36, 	90, 
	BER_IF, 	8, 	128, 
	CALL /* InvokeIdType */, 	36, 	90, 
	ENDBER_IF, 
	CHOICE, 
	BER_CASE_TRY, 
	BER_INTEGER, 	BREAK, 
	BER_CASE_TRY, 	BER_OID, 	BREAK, 
	ENDCHOICE, 
	BER_OPTIONAL, 
	BER_ANY, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1331 : ReturnResult */

	BER_SEQUENCE, 
	CALL /* InvokeIdType */, 	36, 	90, 
	BER_OPTIONAL, 
	BER_SEQUENCE, 
	CHOICE, 
	BER_CASE_TRY, 
	BER_INTEGER, 	BREAK, 
	BER_CASE_TRY, 	BER_OID, 	BREAK, 
	ENDCHOICE, 
	BER_ANY, 
	ENDBER_SEQUENCE, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1349 : ReturnError */

	BER_SEQUENCE, 
	CALL /* InvokeIdType */, 	36, 	90, 
	CHOICE, 
	BER_CASE_TRY, 
	BER_INTEGER, 	BREAK, 
	BER_CASE_TRY, 	BER_OID, 	BREAK, 
	ENDCHOICE, 
	BER_OPTIONAL, 
	BER_ANY, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1365 : Reject */

	BER_SEQUENCE, 
	CHOICE, 
	BER_CASE_TRY, 
	CALL /* InvokeIdType */, 	36, 	90, 	BREAK, 
	BER_CASE_TRY, 	BER_NULL, 	BREAK, 
	ENDCHOICE, 
	CHOICE, 
	BER_CASE, 	8, 	128, 
	CALL /* GeneralProblem */, 	36, 	82, 	BREAK, 
	BER_CASE, 	8, 	129, 
	CALL /* InvokeProblem */, 	36, 	84, 	BREAK, 
	BER_CASE, 	8, 	130, 
	CALL /* ReturnResultProblem */, 	36, 	86, 	BREAK, 
	BER_CASE, 	8, 	131, 
	CALL /* ReturnErrorProblem */, 	36, 	88, 	BREAK, 
	ENDCHOICE, 
	ENDBER_SEQUENCE, 
	END, 
	/* 1408 : Component */

	CHOICE, 
	BER_CASE, 	8, 	161, 
	CALL /* Invoke */, 	36, 	92, 	BREAK, 
	BER_CASE, 	8, 	162, 
	CALL /* ReturnResult */, 	36, 	115, 	BREAK, 
	BER_CASE, 	8, 	163, 
	CALL /* ReturnError */, 	36, 	133, 	BREAK, 
	BER_CASE, 	8, 	164, 
	CALL /* Reject */, 	36, 	149, 	BREAK, 
	BER_CASE, 	8, 	167, 
	CALL /* ReturnResult */, 	36, 	115, 	BREAK, 
	ENDCHOICE, 
	END, 
	/* 1446 : ComponentPortion */
	BER_TAG, 	8, 	108, 
	BER_MAXSTRUCT /* Component */, 	36, 	192, 	0, 	0, 	0, 	1, 
	END  
/*MTK:END*/
};
