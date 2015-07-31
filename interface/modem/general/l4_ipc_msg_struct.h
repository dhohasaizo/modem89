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
 *	l4_ipc_msg_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is intends for IPC message structures.
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


#ifndef __L4_IPC_MSG_STRUCT_H__
#define __L4_IPC_MSG_STRUCT_H__

#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"

/* A-GPS Control Plane LCS Service */
#if defined(__AGPS_CONTROL_PLANE__) && !defined(__MMI_FMI__)
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LocationNotificationArg	notification;
		kal_uint8	ss_id;
	} mmi_ss_mtlr_begin_ind_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LocationNotificationRes	response;
		kal_uint8	ss_id;
	} mmi_ss_mtlr_begin_res_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
		kal_uint8	ss_id;
	} mmi_ss_mtlr_begin_res_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LCS_AreaEventRequestArg	aerq;
		kal_uint8	ss_id;
	} mmi_ss_aerq_begin_ind_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	cause;
		kal_uint8	ss_id;
	} mmi_ss_aerq_begin_res_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
		kal_uint8	ss_id;
	} mmi_ss_aerq_begin_res_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LCS_AreaEventReportArg	aerp;
		kal_uint8	ss_id;
		kal_uint8	is_initial;
	} mmi_ss_aerp_begin_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
		kal_uint16	cause;
		kal_uint8	ss_id;
	} mmi_ss_aerp_begin_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	cause;
		kal_uint8	ss_id;
	} mmi_ss_aerp_end_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
	} mmi_ss_aerp_end_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LCS_AreaEventCancellationArg	aecl;
		kal_uint8	ss_id;
	} mmi_ss_aecl_begin_ind_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	cause;
		kal_uint8	ss_id;
	} mmi_ss_aecl_begin_res_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
		kal_uint8	ss_id;
	} mmi_ss_aecl_begin_res_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		L4C_SS_LCS_MOLRArg	molr;
		kal_uint8	ss_id;
		kal_uint8	is_initial;
	} mmi_ss_molr_begin_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
		kal_uint16	cause;
		L4C_SS_LCS_MOLRRes	molr_res;
		kal_uint8	ss_id;
	} mmi_ss_molr_begin_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	cause;
		kal_uint8	ss_id;
	} mmi_ss_molr_end_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	result;
	} mmi_ss_molr_end_rsp_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	enable;
	} mmi_agps_enable_disable_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	sib15_current_deciphering_key[7];
		kal_uint8	sib15_next_deciphering_key[7];
		kal_uint8	sib15_ciphering_key_flag;
	} mmi_agps_key_update_req_struct;
	typedef struct
	{
		LOCAL_PARA_HDR
		kal_uint8	is_abort_molr;
	} mmi_agps_cp_abort_req_struct;
#endif /* defined(__AGPS_CONTROL_PLANE__) */
/* below codes are for auto-test */
    typedef struct
    {
        LOCAL_PARA_HDR
        kal_uint8 mode;
    } agps_auto_test_ind_struct;

typedef agps_auto_test_ind_struct agps_cp_up_status_ind_struct;

    typedef struct
    {
        LOCAL_PARA_HDR
        kal_uint8 response;
    } agps_mtlr_response_ind_struct;
/* for auto test */
#endif
