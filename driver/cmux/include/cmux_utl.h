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
 *   cmux_utl.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Header file for utility functions used for CMUX.
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#ifndef CMUX_UTL_H
#define CMUX_UTL_H
/******************************************************************************/

#include "cmux_def.h"

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "drv_sap.h"

/******************************************************************************/

#define cmux_sendMsgToUartHdlr(msg,local_para,peer_buff) \
    msg_send6(CMUX_MOD_ID,CMUXUH_MOD_ID,CMUX_UH_SAP,msg,local_para,peer_buff)

/******************************************************************************/

extern CmuxDlcT* cmux_findDlcByDlci(kal_uint8);
extern CmuxDlcT* cmux_findDlcByDlciState(kal_uint32, CmuxDlcStateE);
extern CmuxDlcT* cmux_findFreeDlc(void);
extern CmuxDlcT* cmux_locateSuitableDlc(kal_uint32 dlci);

extern void cmux_initializeDlc(CmuxDlcT* pDlc, kal_uint32 dlci);
extern void cmux_allocateBufferSpace(CmuxDlcT* pDlc);
extern void cmux_releaseDlc(CmuxDlcT* pDlc);
extern void cmux_sendDlcConnectInd(CmuxDlcT*);

extern void cmux_reset_dlcs(void);

/******************************************************************************/

extern void cmux_notifyReadyToWrite(CmuxDlcT* pDlc);
extern void cmux_notifyReadyToRead(CmuxDlcT* pDlc);
extern void cmux_notifyCPortPlugout(CmuxDlcT * pDlc);

/******************************************************************************/

extern kal_uint32 cmux_lookupPriority(kal_uint32 dlci);

extern void cmux_schedulerDlcReady(CmuxDlcT*);
extern CmuxDlcT* cmux_schedulerPickReadyDlc(void);
extern void cmux_schedulerDlcSuspend(CmuxDlcT* pDlc);
extern kal_bool cmux_schedulerIsDlcReady(CmuxDlcT* pDlc);

extern void cmux_activateUartHandler(local_para_struct *local_para);

extern void cmux_writeToUart(peer_buff_struct* pPeer);
extern void cmux_controlChannelHandler(void);
extern void cmux_cchCloseDownProcedure(void);

extern void cmux_startTimer(CmuxTimerIdE,kal_uint32);
extern void cmux_stopTimer(CmuxTimerIdE);

extern void cmux_handleT1Expiry(void);
extern void cmux_handleT2Expiry(void);
extern void cmux_handleT3Expiry(void);

/******************************************************************************/

#ifdef __CMUX_TEST2__
extern void cmux_test_echoData(CmuxDlcT * pDlc);
extern void cmux_test_dropData(CmuxDlcT * pDlc);
extern void cmux_test_genData(CmuxDlcT * pDlc);
#endif

/******************************************************************************/
#endif /* CMUX_UTL_H */

