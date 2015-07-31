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
 *	rac_defs.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for definition of RAC context.
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

#ifndef _RAC_DEFS_H
#define _RAC_DEFS_H

#if defined(__UMTS_RAT__) || defined(__GEMINI__)
#define __RAC_GUARD_PLMN_LIST__
#endif

/* if some header should be include before this one */

/* Johnny:
   for MONZA, L4C should protect RAC to process one action at the same time except:
   1. poweroff detach (RAC could replace the previous action directly)
   so RAC do not need to check action or command conflict in every message handler */
typedef enum 
{
   RAC_NULL,
   RAC_ACTIVATION, /* 1 */
   RAC_REGISTRATION,
   RAC_DEREGISTRATION, /* 3 */   
   RAC_PLMN_LIST,
   RAC_SELECT_PLMN, /* 5 */
   RAC_CLASS_CHANGE,
   RAC_IDLE, /* 7 */
   RAC_GPRS_ATTACH,
   RAC_SET_BAND, /* 9 */
   RAC_SET_GPRS_CONN_TYPE_ALWAYS,
   RAC_SET_GPRS_CONN_TYPE_WHEN_NEEDED
   ,RAC_SET_RAT_MODE,   
   RAC_PLMN_LIST_STOP,
   RAC_PLMN_LIST_STOP_TIMEOUT,
   RAC_CSG_LIST,
   RAC_CSG_LIST_STOP,
   RAC_CSG_LIST_STOP_TIMEOUT 
} rac_action_enum;

typedef enum
{
    RAC_MM_NULL,

    RAC_MM_NORMAL,

    RAC_MM_ATTEMPT_TO_UPDATE,
    RAC_MM_LIMITED,
    RAC_MM_LIMITED_DENIED,
    RAC_MM_NO_IMSI,
    RAC_MM_NO_IMSI_DENIED,
    RAC_MM_NO_CELL,
    RAC_MM_NO_CELL_DENIED,    

    RAC_MM_SEARCHING
}rac_mm_state_enum;

typedef enum
{
    RAC_GMM_NULL,
    //RAC_GMM_NULL_AGAIN,

    RAC_GMM_DEREG_LIMITED,
    RAC_GMM_DEREG_LIMITED_DENIED,
    RAC_GMM_DEREG_NO_IMSI,
    RAC_GMM_DEREG_NO_IMSI_DENIED,
    RAC_GMM_DEREG_NO_CELL,
    RAC_GMM_DEREG_NO_CELL_DENIED,

    RAC_GMM_REG_NORMAL,

    RAC_GMM_REG_LIMITED,
    RAC_GMM_REG_NO_CELL,

    RAC_GMM_SEARCHING
    //RAC_GMM_CELL_FOUND,
    // RAC_GMM_REGISTERING
}rac_gmm_state_enum;

/* mtk01778, 2007/07/31: add rac timer enum. { */
typedef enum
{
    RAC_RETRY_PLMN_SEARCH_TIMER_ID, /* 0 */
    RAC_RETRY_PLMN_LIST_TIMER_ID, /* 1 */
#ifdef __CSG_SUPPORT__
    RAC_RETRY_CSG_LIST_TIMER_ID, 
#endif /* __CSG_SUPPORT__ */
#ifdef __RAC_GUARD_PLMN_LIST__      
    RAC_PLMN_LIST_GUARD_TIMER_ID,
#endif      
#ifdef __CSG_SUPPORT__
    RAC_CSG_LIST_GUARD_TIMER_ID,
#endif /* __CSG_SUPPORT__ */
    RAC_TOTAL_TIMER
} rac_timer_id_enum;
/* } mtk01778, 2007/07/31 */ 

typedef enum
{
   RAC_ALWAYS_NOT_SEND, /* update only */
   RAC_ALWAYS_SEND,
   RAC_NORMAL_SEND
} rac_send_reg_ind_enum;

#define IMEI_TYPE   0x2
#define IMEISV_TYPE  0x3

#define INVALID_TIME_ZONE 0xFF

/* For RAC nvram_write_counter trace. */
#define RAC_SEND_NVRAM_REQ 	0
#define RAC_RECV_NVRAM_CNF 	1

#ifdef __PS_SERVICE__
 /* John Tang 2004/10/18: To save NVRAM usage, use hardcode for DRX parameters. 
 This is confirmed OK by RR modules designers. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#define RAC_DRX_PARAM_DEFAULT_1 (0x08)
#define RAC_DRX_PARAM_DEFAULT_2 (0x02)
#endif /* __PS_SERVICE__ */

#define RAC_RETRY_TIMER 50 /* 5 sec */
#ifndef UNIT_TEST
#define RAC_MAX_PLMN_LIST_RETRY_COUNT 20
#else
#define RAC_MAX_PLMN_LIST_RETRY_COUNT 2
#endif

#ifndef UNIT_TEST
#define RAC_MAX_PLMN_SEARCH_RETRY_COUNT 5
#define RAC_PLMN_LIST_GUARD_TIMER 5 /* 5 min */
#define RAC_CSG_LIST_GUARD_TIMER (5 * KAL_TICKS_1_MIN)
#else
#define RAC_MAX_PLMN_SEARCH_RETRY_COUNT 2
#define RAC_PLMN_LIST_GUARD_TIMER 1 /* 1 min */
#define RAC_CSG_LIST_GUARD_TIMER (1 * KAL_TICKS_1_MIN)
#endif


#endif


