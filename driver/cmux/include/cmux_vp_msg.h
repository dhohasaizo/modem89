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
 *   cmux_vp_msg.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Defines the CMUX Virtual Port primitive handler.
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
 * removed!
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

#ifndef CMUX_VP_MSG_H
#define CMUX_VP_MSG_H
/******************************************************************************/

#include "cmux_def.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h" //#include "l3_inc_enums.h"
#include "flc2_ent_functions.h"

/******************************************************************************/

extern void cmux_initCLCallBack(kal_uint8 channel, CmuxDlcCallBackT * pCallbacks);
extern void	cmux_handleRatdmDataActivateInd(ilm_struct* ilm_ptr);
extern void	cmux_handleRatdmDataDeactivateInd(ilm_struct* ilm_ptr);	  	
extern void	cmux_handlePsDataInd(ilm_struct* ilm_ptr);
extern void cmux_handleFLCResume(ilm_struct * ilm_ptr);
extern void cmux_handleFLCSuspend(ilm_struct * ilm_ptr); // NDIS_FLC, mtk02285, 20090414
    
#ifdef __NDIS_SUPPORT__
#ifdef __MULTIPLE_NDIS_SUPPORT__
extern peer_buff_struct * cmux_NdisGetRxBuffer(kal_uint16 size, kal_uint8 no_of_dlc);
extern void cmux_NdisFreeRxBuffer(peer_buff_struct * pPeer, kal_uint8 dlc_order);
extern void cmux_NdisFreeTxBuffer(peer_buff_struct * pPeer, kal_uint8 dlc_order);
#else /* __MULTIPLE_NDIS_SUPPORT__ */
extern peer_buff_struct * cmux_NdisGetRxBuffer(kal_uint16 size);
extern void cmux_NdisFreeRxBuffer(peer_buff_struct * pPeer);
extern void cmux_NdisFreeTxBuffer(peer_buff_struct * pPeer);
#endif /* __MULTIPLE_NDIS_SUPPORT__ */
#endif /*__NDIS_SUPPORT__*/

// copied from ppp_buff_mgr.h, by mingtsung -----------------------------------------------------------------
#define CMUX_CL4_FREE_HEADER_LEN  L3_UL_RESERVED_HEADER_SPACE //__HSPA_DATA_PATH_OPT__

#ifdef __MULTIPLE_NDIS_SUPPORT__
/* 
  * DLCI: 8~0
  * DLCI: 8 --> FLC2_POOL_ID_NPDU_UL
  * DLCI: 7 --> FLC2_POOL_ID_NPDU_UL +1
  * DLCI: 6 --> FLC2_POOL_ID_NPDU_UL +2
  * and so on...
  */
/* 1. Allocate FLC buffer to pass data */
#define GET_GPRS_UL_FLC_PEER_BUFF(size,dlc_order) \
	((peer_buff_struct *) flc2_get_peer_buff( \
		(flc2_pool_id_enum)(FLC2_POOL_ID_NPDU_UL + ( CMUX_GEMINI_ID_OFFSET - dlc_order)), \
		(size),CMUX_CL4_FREE_HEADER_LEN ,0)) 
	//mtk02683: change 8 to CMUX_VP_NUM_FOR_SINGLE_SIM

/* 2. Deallocate FLC buffer we allocate before */
#define FREE_GPRS_UL_FLC_PEER_BUFF(ptr,dlc_order) \
	(flc2_free_peer_buff( \
		(flc2_pool_id_enum)(FLC2_POOL_ID_NPDU_UL+( CMUX_GEMINI_ID_OFFSET- dlc_order)), \
		(ptr)))
	//(gprs_flc_free_peer_buff(NPDU_DATA, 0, GPRS_FLC_UL, 0, (ptr)))
	//mtk02683: change 8 to CMUX_VP_NUM_FOR_SINGLE_SIM

/* 4. Deallocate FLC buffer send by others (in our queue) */
#define FREEQ_GPRS_DL_FLC_PEER_BUFF(ptr,dlc_order) \
	(flc2_free_peer_buff( \
		(flc2_pool_id_enum)(FLC2_POOL_ID_NPDU_DL+(CMUX_GEMINI_ID_OFFSET-dlc_order)), \
		(ptr))) 
	//gprs_flc_free_peer_buff(NPDU_DATA,0,GPRS_FLC_DL,0,(ptr))
	//mtk02683: change 8 to CMUX_VP_NUM_FOR_SINGLE_SIM

#else /* no __MULTIPLE_NDIS_SUPPORT__ */
/* 1. Allocate FLC buffer to pass data */
#define GET_GPRS_UL_FLC_PEER_BUFF(size) \
	((peer_buff_struct *) flc2_get_peer_buff( \
		FLC2_POOL_ID_NPDU_UL,(size), \
		CMUX_CL4_FREE_HEADER_LEN ,0))
		
/* 2. Deallocate FLC buffer we allocate before */
#define FREE_GPRS_UL_FLC_PEER_BUFF(ptr) \
	(flc2_free_peer_buff(FLC2_POOL_ID_NPDU_UL, \
		(ptr))) 
	//(gprs_flc_free_peer_buff(NPDU_DATA, 0, GPRS_FLC_UL, 0, (ptr)))

/* 4. Deallocate FLC buffer send by others (in our queue) */
#define FREEQ_GPRS_DL_FLC_PEER_BUFF(ptr) \
	(flc2_free_peer_buff(FLC2_POOL_ID_NPDU_DL, \
		(ptr))) 
	//gprs_flc_free_peer_buff(NPDU_DATA,0,GPRS_FLC_DL,0,(ptr))

#endif /* __MULTIPLE_NDIS_SUPPORT__ */

// copied from ppp_buff_mgr.h, by mingtsung -----------------------------------------------------------------

/******************************************************************************/
#endif /* CMUX_VP_MSG_H */
