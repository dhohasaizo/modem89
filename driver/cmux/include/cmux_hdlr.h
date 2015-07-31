/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   cmux_hdlr.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Prototype declaration for CMUX message handlers.
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
 ******************************************************************************/

#ifndef CMUX_HDLR_H
#define CMUX_HDLR_H
/******************************************************************************/

#include "cmux_def.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

/******************************************************************************/

extern void cmux_handleCmuxStartupReq(local_para_struct*);
extern void cmux_handleCmuxCloseDownReq(void);
extern void cmux_handleCmuxDlcDataReadyReq(local_para_struct*);
extern void cmux_handleCmuxDlcReadyToReceiveReq(local_para_struct*);
extern void cmux_handleReadyToSendInd(void);
extern void cmux_handleUartDataInd(peer_buff_struct*);
extern void cmux_handleCmuxUartCloseDownCnf(void);
extern void cmux_handleTimerExpiry(local_para_struct*);

// ------------ 20080808 MT: cmux MSG_ID_UART_PLUGOUT_IND handling ------------ 
extern void cmux_handleUartPlugoutInd(void);
// ------------ 20080808 MT: cmux MSG_ID_UART_PLUGOUT_IND handling ------------ 

extern void cmux_handleTstCommand(ilm_struct * ilm_ptr);
extern void cmux_test_handleCmd ( ilm_struct * ilm_ptr );


/******************************************************************************/

extern void cmux_processUartData(kal_uint8 *pU1Buff,kal_uint32 u4Length);
extern void cmux_scheduleWrite(void);
extern void cmux_closeDownProcedure(void);
extern void cmux_protocol_decodeV24( CmuxDlcT* pDlc, kal_uint8 signal );
extern kal_uint8 cmux_protocol_encodeV24( CmuxDlcT* pDlc );

/******************************************************************************/

extern void cmux_uh_handleCmuxDataReq(peer_buff_struct * peer);
extern void cmux_uh_handleCmuxReadyToSendInd(void);

/******************************************************************************/
#endif /* CMUX_HDLR_H */
