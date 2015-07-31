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
 *	cmux_trc.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for trace messages.
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

#ifndef CMUX_TRC_H
#define CMUX_TRC_H
/******************************************************************************/

#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"

/******************************************************************************/

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "cmux_trc_gen.h"
#endif /* TST Trace Defintion */
#endif

/******************************************************************************/

#define TRC_FUNC		TRACE_FUNC
#define TRC_STATE		TRACE_STATE

#define TRC_INFO		TRACE_INFO
#define TRC_WARNING		TRACE_WARNING
#define TRC_ERROR		TRACE_ERROR

#define TRC_MUX   		TRACE_GROUP_1
#define TRC_DLC       	TRACE_GROUP_2
#define TRC_VP			TRACE_GROUP_3
#define TRC_NDIS      	TRACE_GROUP_4

/******************************************************************************/

BEGIN_TRACE_MAP(MOD_CMUX)

/******************************************************************************/
/*TRC_FUNC*/

TRC_MSG(CMUX_FUNC_cmux_processSabmFrame,"cmux_processSabmFrame")
TRC_MSG(CMUX_FUNC_cmux_processDiscFrame,"cmux_processDiscFrame")
TRC_MSG(CMUX_FUNC_cmux_processDmFrame,"cmux_processDmFrame")
TRC_MSG(CMUX_FUNC_cmux_processUaFrame,"cmux_processUaFrame")

TRC_MSG(CMUX_FUNC_cmux_handlePnMessage,"cmux_handlePnMessage")
TRC_MSG(CMUX_FUNC_cmux_handleMscMessage,"cmux_handleMscMessage")
TRC_MSG(CMUX_FUNC_cmux_handleCldMessage,"cmux_handleCldMessage")

TRC_MSG(CMUX_FUNC_cmux_sendCtrlFrame,"cmux_sendCtrlFrame")


TRC_MSG(CMUX_FUNC_cmux_closeDownProcedure,"cmux_closeDownProcedure")
TRC_MSG(CMUX_FUNC_cmux_handleT1Expiry,"cmux_handleT1Expiry")

#if 0 //TRACE_REDUCE
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*****************************************************************************/
/*TRC_MUX : MUX Level Log*/

TRC_MSG(CMUX_MUX_SABM_OK, "[MUX] SABM DLC=%u (CL=%hu P=%hu N1=%hu) success")
TRC_MSG(CMUX_MUX_SABM_FAIL, "[MUX] SABM DLC=%u fail")
TRC_MSG(CMUX_MUX_DISC_RECV_DONE, "[MUX] DISC DLC=%u success")
TRC_MSG(CMUX_MUX_DISC_RECV_FAIL, "[MUX] DISC DLC=%u fail")
TRC_MSG(CMUX_MUX_DM_RECV_ON_ACTIVATED, "[MUX] DM on an activated DLC=%u, release it")
TRC_MSG(CMUX_MUX_UA_RECV_ON_ACTIVATED, "[MUX] UA as an ack of DISC DLC=%u, release it")

TRC_MSG(CMUX_MUX_UH_BUSY, "[MUX] UART HANDLER BUSY")
TRC_MSG(CMUX_MUX_FLAG_UART_SEND_SUSPEND, "[MUX] fUartSendSuspend = %Mkal_bool")

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif

TRC_MSG(CMUX_CCH_PN_NEGO, "[CCH] PN DLC=%u (CL=%hu P=%hu N1=%hu) accepted")
TRC_MSG(CMUX_CCH_PN_FAIL, "[CCH] PN DLC=%u fail")
TRC_MSG(CMUX_CCH_CLD_RECV_OK, "[CCH] CLS triggers closedown procedure")
TRC_MSG(CMUX_CCH_MSC_SEND_ON_DLC,"[CCH] Sends MSC command:%x on DLCI: %u")
TRC_MSG(CMUX_CCH_MSC_RECV_MSC, "[CCH] DLCI %d recv MSC msg (%u)")
TRC_MSG(CMUX_CCH_NSC_RECV, "[CCH] Recv Non Supported Command.")
TRC_MSG(CMUX_CCH_DROP_INVLAID_LENGTH,"[CCH] Drops data on cch bcz invalid length")
TRC_MSG(CMUX_CCH_MESSAGE_EA_NOT_END,"[CCH] Invaild EA bit in cch message")
TRC_MSG(CMUX_CCH_VAILD_MESSAGE,"[CCH] Recv vaild message on cch ( TYPE=%x )")

TRC_MSG(CMUX_DECODER_DLCI_BYTE, "[DECODER] DLCI = %hu")
TRC_MSG(CMUX_DECODER_DLCI_LENGTH, "[DECODER] LENGTH = %hu")
TRC_MSG(CMUX_DECODER_VAILD_FRAME, "[DECODER] DLCI %hu receives %MCmuxControlByteE %hu Bytes")
TRC_MSG(CMUX_DECODER_DATA_OVER_RUN, "[DECODER] Data overrun!!")
TRC_MSG(CMUX_DECODER_NULL_READ_DLC, "[DECODER] DLC is not established")
#if 0 //TRACE_REDUCE
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

TRC_MSG(CMUX_SCHEDULER_PICKUP_DLCI, "[SCHEDULER] DLCI %hu (priority %hu) is picked")
TRC_MSG(CMUX_SCHEDULER_MISS_SCHEDULE, "[SCHEDULER] DLC was not scheduled but ready to send!!")
TRC_MSG(CMUX_SCHEDULER_ASSIGN_DLCI, "[SCHEDULER] DLCI %hu is assigned Priority %hu")
TRC_MSG(CMUX_SCHEDULER_LCD_QUEUE_INSERT_QUEUE,"[SCHEDULER] LCD ENQUEUE")
TRC_MSG(CMUX_SCHEDULER_LCD_QUEUE_REMOVE_QUEUE,"[SCHEDULER] LCD DEQUEUE")
TRC_MSG(CMUX_SCHEDULER_WRITE_UIH,"[SCHEDULER] DLCI %hu write UIH frame %u bytes")
TRC_MSG(CMUX_SCHEDULER_WRITE_CONTROL,"[SCHEDULER] DLCI %u write %MCmuxControlByteE frame")

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif
TRC_MSG(CMUX_UH_UART_WRITE_RESUME, "[UH] UART Port %d resume for writing")
TRC_MSG(CMUX_UH_FLAG_UART_FULL, "[UH] fUartFull = %Mkal_bool")
TRC_MSG(CMUX_UH_SPARE_READY_TO_SEND_IND, "[UH] UART handler is not busy")

/******************************************************************************/
/*TRC_DLC : DLC Level Log*/

#if 0 //TRACE_REDUCE
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

TRC_MSG(CMUX_BUFFER_RX_BUFFER_STATUS,"[BUF] CMUX RX buffer Status Maximu: Current = %u:%u.")
TRC_MSG(CMUX_BUFFER_SPACE_THRESHOLD_HIT_HIGH,"[BUF] Rx Buffer of DLCI %hu hit high threshold.")
TRC_MSG(CMUX_BUFFER_SPACE_THRESHOLD_LOW_HIT,"[BUF] Rx Buffer of DLCI %hu hit low threshold.")

TRC_MSG(CMUX_FC_FLAG_LOCALBUSY, "[FC] DLC %hu fLocalBusy = %Mkal_bool.")
TRC_MSG(CMUX_FC_FLAG_PEERBUSY, "[FC] DLC %hu fPeerBusy = %Mkal_bool.")
TRC_MSG(CMUX_FC_PEER_IS_BUSY, "[FC] Peer of DLC %hu is busy.")
TRC_MSG(CMUX_FC_SUSPEND_PEER,"[FC] DLC %u send suspend.")
TRC_MSG(CMUX_FC_RESUME_PEER, "[FC] DLC %u send resume.")

/******************************************************************************/
/*TRC_NDIS : Virtual Port Log*/

TRC_MSG(CMUX_VP_CPORT_OPEN,"[VP] CPort_Open(%MUART_PORT, %Mmodule_type)")
TRC_MSG(CMUX_VP_CPORT_CLOSE,"[VP] CPort_Close(%MUART_PORT, %Mmodule_type)")
TRC_MSG(CMUX_VP_CPORT_SETOWNER,"[VP] CPort_SetOwner(%MUART_PORT, %Mmodule_type)")
TRC_MSG(CMUX_VP_CPORT_GETBYTES,"[VP] CPort_GetBytes(%MUART_PORT, %Mmodule_type)")
TRC_MSG(CMUX_VP_CPORT_GETBYTES_RETURN,"[VP] CPort_GetBytes return %hu")
TRC_MSG(CMUX_VP_CPORT_GETBYTES_EMPTY,"[VP] CPort_GetBytes on an empty buffer")
TRC_MSG(CMUX_VP_CPORT_PUTBYTES,"[VP] CPort_PutBytes(%MUART_PORT, %Mmodule_type)")
TRC_MSG(CMUX_VP_CPORT_PUTBYTES_RETURN,"[VP] CPort_PutBytes return %hu")
TRC_MSG(CMUX_VP_CPORT_PUTBYTES_FULL,"[VP] CPort_PutBytes to buffer full")
TRC_MSG(CMUX_VP_CPORT_GETBYTESAVAIL,"[VP] CPort_GetBytesAvail(%u)")
TRC_MSG(CMUX_VP_CPORT_GETOWNERID,"[VP] CPort_GetOwnerID(%d)")
TRC_MSG(CMUX_VP_CPORT_CLRTXBUFFER_OK, "[VP] dlc tx buffer is cleared!!")
TRC_MSG(CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, "[VP] A CPort_XXXX(%d) is called by %Mmodule_type when CMUX is inactive.")

TRC_MSG(CMUX_VP_NOTIFY_PLUGOUT_ERROR, "[VP] cmux_notifyCPortPlugout() to MOD_NIL")

#if 0 //TRACE_REDUCE
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/******************************************************************************/
/*TRC_NDIS : NDIS Log*/

TRC_MSG(CMUX_VPMSG_PKT_ACTIVATE_COMPLETE, "[VPMSG] Pkt_Data Activate Complete (Ch %hu)") // 20090506, mtk02285
TRC_MSG(CMUX_VPMSG_PKT_DEACTIVATE_COMPLETE, "[VPMSG] Pkt_Data Deactivate Complete (Ch %hu)") // 20090506, mtk02285
TRC_MSG(CMUX_VPMSG_PKT_DEACTIVATE_MODNIL, "[VPMSG] Pkt_Data Deactivate on a deactivated channel (Ch %hu)") // 20090506, mtk02285

TRC_MSG(CMUX_VPMSG_TX_NEW_PKT_RTS,"[VPMSG] DLC %hu New Pkt Ready: %hu Bytes")
TRC_MSG(CMUX_VPMSG_TX_NEW_PKT_QUEUE,"[VPMSG] DLC %hu New Pkt Queued: %hu Bytes")

TRC_MSG(CMUX_VPMSG_DLC_NOT_ACTIVATED,"[VPMSG] Ch %hu is not activated")

TRC_MSG(CMUX_CL4_TX_FRAME_TYPE, "[CL4] TX Frame Type = %MCmuxCl4FrameTypeE ")
TRC_MSG(CMUX_CL4_RX_FRAME_TYPE, "[CL4] RX Frame Type = %MCmuxCl4FrameTypeE ")

TRC_MSG(CMUX_CL4_STATE,"[CL4] DLC %hu , %MCmuxCL4StateE ")
TRC_MSG(CMUX_CL4_PKT_SEND, "[CL4] DLC %hu PKT SEND: %u bytes")
TRC_MSG(CMUX_CL4_PKT_RECV, "[CL4] DLC %hu PKT RECV: %u bytes")

TRC_MSG(CMUX_NDIS_PKT_DROP_START, "[NDIS] DLC %hu starts dropping frames")
TRC_MSG(CMUX_NDIS_PKT_DROP_END, "[NDIS] DLC %hu stops dropping frames")
TRC_MSG(CMUX_NDIS_PKT_DROPPING, "[NDIS] DLC %hu drops %u bytes")

TRC_MSG(CMUX_NDIS_UL_IPID, "[NDIS] UL IPID=%x") 
TRC_MSG(CMUX_NDIS_DL_IPID, "[NDIS] DL IPID=%x") // NDIS_FLC, NDIS_IPID
TRC_MSG(CMUX_NDIS_UL_FLC_RESUME_DONE,"[NDIS] UL FLC2 Resume success DONE (%Mmodule_type , %MUART_PORT)")
TRC_MSG(CMUX_NDIS_UL_FLC_RESUME_FAIL,"[NDIS] UL FLC2 Resume fail (%Mmodule_type , %MUART_PORT)")
TRC_MSG(CMUX_NDIS_UL_FLC_NOT_SUSPEND,"[NDIS] UL FLC2 Resume fail (Non Suspended)")

TRC_MSG(CMUX_NDIS_FLC_NO_MATCH_DLC,"[NDIS] No DLC found!")

/******************************************************************************/
/*TRC_TEST : UT/IT Log*/

TRC_MSG(CMUX_TEST_EARLY_SUSPEND_PEER, "[TEST] CMUX Early Suspend peer")
TRC_MSG(CMUX_TEST_EARLY_RESUME, "[TEST] CMUX Early Resume")
TRC_MSG(CMUX_TEST_LOOP_ENABLE, "[TEST] LOOP ENABLE")
TRC_MSG(CMUX_TEST_PKT_DROP_ENABLE, "[TEST] PKT drop enable!")
TRC_MSG(CMUX_TEST_PKT_LOOP_MODE, "[TEST] PKT loop mode!")
TRC_MSG(CMUX_TEST_PKT_GEN_MODE, "[TEST] PKT gen mode!")
TRC_MSG(CMUX_TEST_PKT_DISABLE_FLC_RESUME, "[TEST] PKT disable FLC Resume!")
TRC_MSG(CMUX_TEST_PKT_ENABLE_FLC_RESUME, "[TEST] PKT enable FLC Resume!")

/******************************************************************************/

END_TRACE_MAP(MOD_CMUX)

/******************************************************************************/
#endif

