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
 *   cmux_proc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Main multiplexer protocol is implemented in this file.
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

/******************************************************************************/

#include "cmux_def.h"
#include "cmux_prot.h"
#include "cmux_trc.h"
#include "cmux_utl.h"
#include "cmux_hdlr.h"
#include "cmux_lib.h"
#include "cmux_vp_num.h"
#include "cmux_uh.h"

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
#include "cmux_ut.h"
#endif

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "lcd_lqueue.h"

#include "md_mw_sap.h"
#include "md_drv_sap.h"
#include "ratdm_msgid.h"
#include "cmux_msgid.h"
#include "drv_msgid.h"

#include "ps_ratdm_struct.h" //UMTS Downlink
#include "ratdm_shaq_application_api.h" //UMTS Uplink

/******************************************************************************/

const unsigned char cmux_crctable[256] = { //reversed, 8-bit, poly=0x07
0x00, 0x91, 0xE3, 0x72, 0x07, 0x96, 0xE4, 0x75, 0x0E, 0x9F, 0xED, 0x7C, 0x09, 0x98, 0xEA, 0x7B,
0x1C, 0x8D, 0xFF, 0x6E, 0x1B, 0x8A, 0xF8, 0x69, 0x12, 0x83, 0xF1, 0x60, 0x15, 0x84, 0xF6, 0x67,
0x38, 0xA9, 0xDB, 0x4A, 0x3F, 0xAE, 0xDC, 0x4D, 0x36, 0xA7, 0xD5, 0x44, 0x31, 0xA0, 0xD2, 0x43,
0x24, 0xB5, 0xC7, 0x56, 0x23, 0xB2, 0xC0, 0x51, 0x2A, 0xBB, 0xC9, 0x58, 0x2D, 0xBC, 0xCE, 0x5F,
0x70, 0xE1, 0x93, 0x02, 0x77, 0xE6, 0x94, 0x05, 0x7E, 0xEF, 0x9D, 0x0C, 0x79, 0xE8, 0x9A, 0x0B,
0x6C, 0xFD, 0x8F, 0x1E, 0x6B, 0xFA, 0x88, 0x19, 0x62, 0xF3, 0x81, 0x10, 0x65, 0xF4, 0x86, 0x17,
0x48, 0xD9, 0xAB, 0x3A, 0x4F, 0xDE, 0xAC, 0x3D, 0x46, 0xD7, 0xA5, 0x34, 0x41, 0xD0, 0xA2, 0x33,
0x54, 0xC5, 0xB7, 0x26, 0x53, 0xC2, 0xB0, 0x21, 0x5A, 0xCB, 0xB9, 0x28, 0x5D, 0xCC, 0xBE, 0x2F,
0xE0, 0x71, 0x03, 0x92, 0xE7, 0x76, 0x04, 0x95, 0xEE, 0x7F, 0x0D, 0x9C, 0xE9, 0x78, 0x0A, 0x9B,
0xFC, 0x6D, 0x1F, 0x8E, 0xFB, 0x6A, 0x18, 0x89, 0xF2, 0x63, 0x11, 0x80, 0xF5, 0x64, 0x16, 0x87,
0xD8, 0x49, 0x3B, 0xAA, 0xDF, 0x4E, 0x3C, 0xAD, 0xD6, 0x47, 0x35, 0xA4, 0xD1, 0x40, 0x32, 0xA3,
0xC4, 0x55, 0x27, 0xB6, 0xC3, 0x52, 0x20, 0xB1, 0xCA, 0x5B, 0x29, 0xB8, 0xCD, 0x5C, 0x2E, 0xBF,
0x90, 0x01, 0x73, 0xE2, 0x97, 0x06, 0x74, 0xE5, 0x9E, 0x0F, 0x7D, 0xEC, 0x99, 0x08, 0x7A, 0xEB,
0x8C, 0x1D, 0x6F, 0xFE, 0x8B, 0x1A, 0x68, 0xF9, 0x82, 0x13, 0x61, 0xF0, 0x85, 0x14, 0x66, 0xF7,
0xA8, 0x39, 0x4B, 0xDA, 0xAF, 0x3E, 0x4C, 0xDD, 0xA6, 0x37, 0x45, 0xD4, 0xA1, 0x30, 0x42, 0xD3,
0xB4, 0x25, 0x57, 0xC6, 0xB3, 0x22, 0x50, 0xC1, 0xBA, 0x2B, 0x59, 0xC8, 0xBD, 0x2C, 0x5E, 0xCF
};

/*******************************************************************************
* FUNCTION
*  cmux_sendCtrlFrame
* DESCRIPTION
*   Send out a conrol frame to UART.
*
* PARAMETERS
*   IN      dlci
*   IN      frameType
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
static void cmux_sendCtrlFrame(kal_uint32 dlci, CmuxControlByteE frameType)
{
    peer_buff_struct *pPeerBuff;

    kal_uint8 	*pBuff;
    kal_uint16 	u2Written;

	kal_uint8	cr;
    kal_uint8 	fcs = CMUX_INITIAL_FCS;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_sendCtrlFrame);   
    
	//mtk02683 12.02.2009
	//Remove PeerBuffHead in PeerBuffer, source code is preserved for future design (multiple phyiscal 
	//UART handling).
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	//mtk02683 02.04.2010
	//Diffrent frame type should put different CR bit in ADDRESS
	switch (frameType)
	{
		case UA_FINAL:
		case DM_FINAL:
		case DM_N_FINAL:
			cr = CR_UE_RESPONSE;
			break;
	
		case SABM_POLL:
		case SABM_N_POLL:
		case DISC_POLL:			
		case DISC_N_POLL:
			cr = CR_UE_COMMAND;
			break;

		default:
			return;
	}
	
	pPeerBuff = (peer_buff_struct*) construct_peer_buff(
		MAX_CTRL_FRAME_SIZE, 0, 0, TD_UL);
    pBuff = get_peer_buff_pdu(pPeerBuff,&u2Written);

	// Constrcut control frame
    *pBuff = CMUX_FLAG_BASIC;
    pBuff++;

	*pBuff = (kal_uint8) CONSTRUCT_ADDRESS( dlci, cr, 1);
    fcs = CMUX_CALCULATE_FCS(fcs,*pBuff);
    pBuff++;
    
   *pBuff= frameType;
    fcs = CMUX_CALCULATE_FCS(fcs,*pBuff);    
    pBuff++;
    
    *pBuff = (kal_uint8) CONSTRUCT_LENGTH_1(0);
    fcs = CMUX_CALCULATE_FCS(fcs,*pBuff);
    pBuff++;
    
    *pBuff = ( kal_uint8) CMUX_OUTPUT_FCS(fcs);
    pBuff++;
    
    *pBuff = CMUX_FLAG_BASIC;
    pBuff++;

	kal_brief_trace(TRC_INFO, CMUX_SCHEDULER_WRITE_CONTROL, dlci, frameType); 
    
    cmux_writeToUart(pPeerBuff);
	
} /* end of cmux_sendCtrlFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processDiscFrame
* DESCRIPTION
*   Processs DISC frame
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_processDiscFrame(kal_uint32 dlci)
{
    CmuxDlcT *dlc;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_processDiscFrame);  

    dlc = cmux_findDlcByDlciState(dlci,DLC_ACTIVE);

    if (dlc == NULL)
    {        
		kal_brief_trace(TRC_WARNING, CMUX_MUX_DISC_RECV_FAIL, dlci);
		
        cmux_sendCtrlFrame(dlci,DM_FINAL); // The DLC is inactive, response with DM
        return;
    }
	else // MAUI_01660740, mtk02285, 20090407 ~
    {
		kal_brief_trace(TRC_INFO, CMUX_MUX_DISC_RECV_DONE, dlci);
    	
        cmux_sendCtrlFrame(dlci,UA_FINAL); // The DLC is active, response with UA
        cmux_notifyCPortPlugout(dlc);
        cmux_releaseDlc(dlc);        
    }// ~ MAUI_01660740, mtk02285, 20090407
} /* end of cmux_processDiscFrame() */

/*****************************************************************************
* FUNCTION
*  cmux_processDmFrame
* DESCRIPTION
*   Processs DM frame
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*****************************************************************************/
static void cmux_processDmFrame(kal_uint32 dlci)
{
    CmuxDlcT *dlc;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_processDmFrame);  

    dlc = cmux_findDlcByDlciState(dlci,DLC_ACTIVE);
    if (dlc == NULL)
    {
        return;
    }

	kal_brief_trace(TRC_INFO, CMUX_MUX_DM_RECV_ON_ACTIVATED, dlci);

    cmux_notifyCPortPlugout(dlc);
    cmux_releaseDlc(dlc);
} /* end of cmux_processDmFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processUaFrame
* DESCRIPTION
*   Processs UA frame
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
static void cmux_processUaFrame(kal_uint32 dlci)
{
    CmuxDlcT *pDlc;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_processUaFrame);  

    pDlc = cmux_findDlcByDlciState(dlci,DLC_RELEASE_PENDING);
    if (pDlc == NULL)
    {
        // The DLC is not in release pending state, or the DLC does not exist, ignore this UA
        return;
    }

	kal_brief_trace(TRC_INFO, CMUX_MUX_UA_RECV_ON_ACTIVATED, dlci);
	
    //pDlc->state = DLC_PARNEG;
    cmux_releaseDlc(pDlc);
    cmux_stopTimer(CMUX_T1);
	
    if(cmux_ptr->state == CMUX_CLOSING)
    {
        cmux_closeDownProcedure();
    }
} /* end of cmux_processUaFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processSabmFrame
* DESCRIPTION
*   Processs SABM  frame
*
* PARAMETERS
*   IN      dlci   
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
static void cmux_processSabmFrame(kal_uint32 dlci)
{
    CmuxDlcT *dlc;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_processSabmFrame);  

    dlc = cmux_findDlcByDlciState(dlci,DLC_ACTIVE);    
    if (dlc != NULL)
    {
        // The DLC is alread avtive, response with UA.
        // and reset all ERM parameters.
        cmux_sendCtrlFrame(dlci,UA_FINAL);
        return;
    }

    // the DLCI is not yet active
    // find an DCL whose parameters are already negotiated to use
    dlc = cmux_findDlcByDlciState(dlci,DLC_PARNEG);
    if (dlc == NULL)
    {
        // no DLCI is associated DLC
        // This DLCI is never used. try to find one free
        dlc = cmux_locateSuitableDlc(dlci);
        //dlc = cmux_findFreeDlc();

        if (dlc == NULL)
        {
            // all DLC context is used. reject by DM
            cmux_sendCtrlFrame(dlci, DM_FINAL);
				
			kal_brief_trace( TRC_WARNING, CMUX_MUX_SABM_FAIL, dlci);
            return;
        }

        // initialize DLC channel context
		cmux_initializeDlc(dlc, dlci);       
    }
    
	// the DLC is ready to be activated.
    dlc->state = DLC_ACTIVE;

	kal_brief_trace( TRC_INFO, CMUX_MUX_SABM_OK, dlci, dlc->pn_cltype, 
		dlc->pn_priority, dlc->pn_n1);

    cmux_allocateBufferSpace(dlc);

    cmux_sendDlcConnectInd(dlc);

    // response with UA with P/F set to 1
    cmux_sendCtrlFrame(dlci,UA_FINAL);

#ifdef __CMUX_MODEM_STATUS_SUPPORT__
    cmux_sendDlcMscStatus(dlci);
#endif // __CMUX_MODEM_STATUS_SUPPORT__

} /* end of cmux_processSabmFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processReceivedUih
* DESCRIPTION
*   Processs data carried in UIH frame
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of cmux
*****************************************************************************/
static void cmux_processReceivedUih(CmuxDlcT * pDlc)
{
    kal_uint32 rxbuf_usage = cmux_getBufferDataAvail(&(pDlc->rxBuffer));

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif

	if ( pDlc->maxRxBufferUsage < rxbuf_usage ) {
		pDlc->maxRxBufferUsage = rxbuf_usage;
	}
    kal_brief_trace( TRC_DLC, CMUX_BUFFER_RX_BUFFER_STATUS, pDlc->maxRxBufferUsage, rxbuf_usage);


#ifdef __CMUX_TEST2__
    if( CMUX_MODE_ISTEST(cmux_ptr) ) 
    {
        CMUX_UT_LOGT("INFO","TEST_MODE");            

        if ( CMUX_TEST_IS_ON(pDlc->testOption,CMUX_TEST_O_DROP) )
        {
            cmux_test_dropData(pDlc);
            rxbuf_usage = 0;
        }
        else if ( CMUX_TEST_IS_ON(pDlc->testOption,CMUX_TEST_O_ECHO) )
        {
            cmux_test_echoData(pDlc);
            rxbuf_usage = 0;
        }
    }
#endif

    if ( (pDlc->fLocalBusy == KAL_FALSE) && ( rxbuf_usage >=  pDlc->highThreshold) )
    {
        kal_brief_trace(TRC_DLC, CMUX_BUFFER_SPACE_THRESHOLD_HIT_HIGH, pDlc->pn_dlci);

        pDlc->fLocalBusy = KAL_TRUE;            
		kal_brief_trace( TRC_STATE, CMUX_FC_FLAG_LOCALBUSY, pDlc->pn_dlci, 
            pDlc->fLocalBusy);

//#ifdef __CMUX_MODEM_STATUS_SUPPORT__ 
        // WM_DUN_FLC, MAUI_01679336, mtk02285, 20090430
        cmux_suspendPeerDlc(pDlc->pn_dlci); // send MSC command for NOT CL4 channel
//#endif
			// Send flow control message by uih frame for CL2 only - nothing matter with flow control
		if(pDlc->pn_cltype == CMUX_CL2) cmux_schedulerDlcReady(pDlc);		
	}

	// mtk02683 03.30.2010 :
	// Cmux will be suspended here if the priority of owner is higher than cmux
    // The flag, fLocalBusy, may be set and suspending MSC may be sent after 
    // owner read data in rx buffer. In this case, peer will never be resumed.
	// This scenario is found during development of WinMo VT.
    if ( pDlc->fNotifyReadyToRead == KAL_TRUE )
	{
		pDlc->fNotifyReadyToRead = KAL_FALSE;
		cmux_notifyReadyToRead(pDlc);
	}
   
} /* end of cmux_processReceivedUih() */

/*******************************************************************************
* FUNCTION
*  cmux_processDlcFrame
* DESCRIPTION
*   Processs frame for certain DLC. The function is called when a valid 
*   frame of a DLC is received; FCS is OK.
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
static void cmux_processDlcFrame(void)
{
    kal_uint32 dlci;

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif

    dlci = GET_DLCI_OF_ADDR(cmux_ptr->addressByte);
    // should we check EA bit ? current, only one byte 
    // of address should be present
    switch (cmux_ptr->controlByte)
    {
      case SABM_POLL:
        // response with UA with P/F set to 1
        // and set the Channel active, notify L4C
        if (GET_CR_OF_ADDR(cmux_ptr->addressByte) == CR_TE_COMMAND)
        {
            cmux_processSabmFrame(dlci);
        }
        break;
      case UA_FINAL:
        cmux_processUaFrame(dlci);
        break;
      case DISC_POLL:
        // response with UA with P/F set to 1
        // and set the cnaeel inactive, notify owner module
        cmux_processDiscFrame(dlci);
        break;
      case SABM_N_POLL:
      case DISC_N_POLL:
        // ignore it, as per 27.010 clause 5.4.4.1
        break;
      case DM_FINAL:
      case DM_N_FINAL:
        // unsolicited DM should be process irrespective of the P/F setting
        cmux_processDmFrame(dlci);
        break;
      case UIH_FRAME_POLL:
      case UIH_FRAME:
        if (cmux_ptr->readingDlc != NULL)
        {
            cmux_admitReservedBuffer(&cmux_ptr->readingDlc->rxBuffer,
                                     cmux_ptr->writePtr);
            
            if (CMUX_DLCI_IS_CCH(dlci))
            {
                /* Save if UIH POLL here */
                cmux_ptr->cchUIHPoll = cmux_ptr->controlByte; 
                cmux_controlChannelHandler();
            }
            else
            {
                cmux_processReceivedUih(cmux_ptr->readingDlc);
            }            
        }
        break;
      default:
        // ignore the frame.
        break;              
    }
} /* end of cmux_processDlcFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processFrame
* DESCRIPTION
*   A frame was received at CMUX. dispatch it.
*
* PARAMETERS
*  void
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of cmux        
*******************************************************************************/
static void cmux_processFrame(void)
{
    kal_uint32 dlci;

#if 0 //TRACE_REDUCE   
/* under construction !*/
#endif

    dlci = GET_DLCI_OF_ADDR( cmux_ptr->addressByte);

    if ( dlci == 0 && cmux_ptr->controlByte== DISC_POLL )
    {
        cmux_restoreTask();
        return;
    }
   
    // should we check EA bit ? current, 
    // only one byte of address should be present
    switch(cmux_ptr->state)
    {
      case CMUX_STARTUP:
        /* accept only SABM with DLCI 0 */
        if (dlci == 0 && cmux_ptr->controlByte== SABM_POLL)
        {
            // initialize CCH context			
            cmux_initializeDlc( &cmux_ptr->dlcs[0], 0 );
            cmux_allocateBufferSpace( &cmux_ptr->dlcs[0] );
            cmux_ptr->dlcs[0].state = DLC_ACTIVE;
            cmux_ptr->dlcs[0].pn_cltype = CMUX_CL1;

            cmux_ptr->state = CMUX_ACTIVE;

            cmux_sendCtrlFrame(0,UA_FINAL);
        }
        break;
      case CMUX_ACTIVE:
        cmux_processDlcFrame();
        break;
      case CMUX_INACTIVE:
        CMUX_ASSERT(0);
        break;
      case CMUX_CLOSING:
        /* handle only DLCI 0 */
        cmux_processDlcFrame();
        break;
    }
} /* end of cmux_processFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_processUartData
* DESCRIPTION
*   Process data from UART.
*
* PARAMETERS
*   IN      *pU1Buff data ptr to be read
*   IN      u4Length data length to be read  
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   contex of cmux
*******************************************************************************/
void cmux_processUartData(kal_uint8 *pU1Buff,kal_uint32 u4Length)
{

    kal_uint8 *pU1Read=NULL; /* Current processed data ptr*/
    kal_uint32 u4SpaceLeft=0;    
    kal_uint32  u4DataLeft=0;

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif

    for (pU1Read = pU1Buff ;
         pU1Read < ( pU1Buff+ u4Length) ;
         pU1Read++)
    {    
        switch(cmux_ptr->readState)
        {
            case CMUX_WAIT_FLAG:
                if (*pU1Read == CMUX_FLAG_BASIC)
                {
                    cmux_ptr->readState  = CMUX_WAIT_ADDRESS;
                }
                break;
                    
            case CMUX_WAIT_ADDRESS:
                if (*pU1Read != CMUX_FLAG_BASIC)
                {
				    /* Do sync here */
        		    if (GET_DLCI_OF_ADDR( *pU1Read) <= 32) // DLCI <= 32 is just a simple check to lost sync or not !
				    {
                        cmux_ptr->addressByte = *pU1Read;
                        cmux_ptr->u1Fcs =CMUX_CALCULATE_FCS(CMUX_INITIAL_FCS, *pU1Read);                        
                        cmux_ptr->readingDlc  = cmux_findDlcByDlciState(GET_DLCI_OF_ADDR(*pU1Read),DLC_ACTIVE);

						kal_brief_trace( TRC_MUX, CMUX_DECODER_DLCI_BYTE, GET_DLCI_OF_ADDR(*pU1Read));

						cmux_ptr->readState  = CMUX_WAIT_CONTROL;
	                }
                    else
                    {
                    	//kal_trace( TRC_ERROR, CMUX_DECODER_LOSS_SYNC );	
                        kal_sys_trace("[CMUX] Loss Synchronization");

						cmux_ptr->readState  = CMUX_WAIT_FLAG; 			
		    		}
                }
                break;
				
            case CMUX_WAIT_CONTROL:
				if(((*pU1Read & 0x03) == 0x03))
                {
                    cmux_ptr->controlByte = *pU1Read;
                    cmux_ptr->u1Fcs =CMUX_CALCULATE_FCS(cmux_ptr->u1Fcs, *pU1Read);
                    // To note if first byte of Length or second byte of length
                    cmux_ptr->u2FrameLength = INVALID_LENGTH_PATTERN;
					
                    cmux_ptr->readState  = CMUX_WAIT_LENGTH;
                }
                else /* Not a valid control byte */
                {
					//kal_trace( TRC_WARNING, CMUX_DECODER_INVAILD_CONTROL_BYTE );
					kal_sys_trace("[CMUX] Invalid Control Byte");					
                    cmux_ptr->readState = CMUX_WAIT_FLAG;
                }
                break;
                    
            case CMUX_WAIT_LENGTH:

                if (cmux_ptr->u2FrameLength == INVALID_LENGTH_PATTERN)
                {
                    cmux_ptr->u2FrameLength = LENGTH_ONE_OCTET(*pU1Read);
                    if (IS_SINGLE_LENGTH_OCTET(*pU1Read))
                    {
                        cmux_ptr->readState  = CMUX_INFORMATION; 
                    }
                    // else wait for next length byte, the following code
                }
                else
                {
                    cmux_ptr->u2FrameLength |= (*pU1Read) << 7;
                    cmux_ptr->readState  = CMUX_INFORMATION;
                }
				cmux_ptr->u1Fcs =CMUX_CALCULATE_FCS(cmux_ptr->u1Fcs, *pU1Read);

                if (cmux_ptr->readState  == CMUX_INFORMATION)
                {
                    kal_brief_trace( TRC_MUX, CMUX_DECODER_DLCI_LENGTH, cmux_ptr->u2FrameLength);

					cmux_ptr->u2FrameRead = 0;

                    if ( cmux_ptr->u2FrameLength == 0 )
                    {
                        cmux_ptr->readState = CMUX_WAIT_FCS;
                    }
                    else
                    {
                        // special handlig of CL2 and CL4
                        if (cmux_ptr->readingDlc != NULL)
                        {
                            if (cmux_ptr->readingDlc->pn_cltype == CMUX_CL2)
                            {
                                cmux_ptr->u2FrameLength --;
                                cmux_ptr->readState = CMUX_WAIT_CL2_HEADER;                                
                            }      
       
                            // let's check available here!
                            cmux_ptr->writePtr = cmux_reserveBufferSpace(&cmux_ptr->readingDlc->rxBuffer,&u4SpaceLeft);
                            
                            if (u4SpaceLeft < cmux_ptr->u2FrameLength)
                            {
                                // Data overrun
                                cmux_ptr->u4DataOverrun ++;								
								kal_brief_trace( TRC_WARNING, CMUX_DECODER_DATA_OVER_RUN );
                            }
                        }// end of if cmux_ptr->readingDlc != NULL
                    }                                           
                }// end of State into INFORMATION
                
                break;                    

            case CMUX_WAIT_CL2_HEADER:
				
			    // Decode the CL2 Header byte.
				cmux_protocol_decodeV24(cmux_ptr->readingDlc, *pU1Read);
				
                cmux_ptr->readState =CMUX_INFORMATION;
                break;           
                
            case CMUX_INFORMATION:
                /*
				* copy all left data into data buffer
				* we should try to get cmux_ptr->frameLength of data
				* Only for UIH type, this state will be
				* entered, or there should be something wrong
				* and the space is enough for this frame
				*/      
                /* Remaining data size in read buffer */
                u4DataLeft  = u4Length - ( pU1Read -pU1Buff); 

                if (u4DataLeft >(kal_uint32) (cmux_ptr->u2FrameLength - cmux_ptr->u2FrameRead))
                {
                    // This is at least one entire frame in the read buffer. 
                    // We can process it at once.
                    u4DataLeft = (kal_uint32) cmux_ptr->u2FrameLength - cmux_ptr->u2FrameRead;
					
                    cmux_ptr->readState  = CMUX_WAIT_FCS;
                }

                if (cmux_ptr->readingDlc != NULL)
                {                        
                    cmux_ptr->writePtr = cmux_writeReservedBuffer( 
                        &cmux_ptr->readingDlc->rxBuffer, cmux_ptr->writePtr, pU1Read, 
                        u4DataLeft);
                }
                else
                {
                	kal_brief_trace( TRC_WARNING, CMUX_DECODER_NULL_READ_DLC );
                }
				
                cmux_ptr->u2FrameRead += (kal_uint16) u4DataLeft;
                // for pU1Read will be increased in the loop control
                pU1Read +=  u4DataLeft - 1;
				
                break;
                    
            case CMUX_WAIT_FCS:

				//mtk02683
				//Only used during Unit Test
				//kal_sys_trace("[DECODER] FCS = %X\n", CMUX_OUTPUT_FCS(cmux_ptr->u1Fcs));

                if(CMUX_IS_FCS_CORRECT(cmux_ptr->u1Fcs, *pU1Read))
                {	
                    // One correct frame. process this
					kal_brief_trace( TRC_INFO, CMUX_DECODER_VAILD_FRAME, GET_DLCI_OF_ADDR(cmux_ptr->addressByte),
						cmux_ptr->controlByte, cmux_ptr->u2FrameRead);				 
					
                    cmux_processFrame();
                }
                else
                {
                    // Incorrect frame, discard it.
                    //kal_trace( TRC_ERROR, CMUX_DECODER_FCS_ERROR);
					kal_sys_trace("[CMUX] FCS ERROR");
                }
                cmux_ptr->readState  = CMUX_WAIT_FLAG;
                break;
				
        }// end of switch
    }// end of for loop
    // data in the buffer is all processed.
    return;
} /* end of cmux_processUartData() */

/*******************************************************************************
* FUNCTION
*  cmux_writeUihFrame
* DESCRIPTION
*  Write DLC data into UIH frame to UART.
*
* PARAMETERS
*  IN   *pDlc
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
static void cmux_writeUihFrame(CmuxDlcT* pDlc)
{
	peer_buff_struct *pPeerBuff;

    kal_uint8 *pHeader;
    kal_uint8 *pPdu;
    kal_uint16 u2ToWrite;
    kal_uint32  fcs;
    kal_uint32 u4IfieldLength;
    kal_uint32 u4DataLength;

    // before header can be construct , length should be known.
    // We support CL type 2, which will use first byte of I field        
    if (pDlc->fPeerBusy == KAL_TRUE)
    {
        kal_brief_trace( TRC_DLC, CMUX_FC_PEER_IS_BUSY, pDlc->pn_dlci);      

        if (pDlc->pn_cltype == CMUX_CL2)
        {
            u4IfieldLength = 1;
            // if peer busy, we only write one byte
            u4DataLength =0;
        }
        else
        {
            // only CL2 we can transmit Modem status to peer
            return;
        }
    }
    else
    {
        // peer not busy
        u4DataLength = cmux_getBufferDataAvail(& pDlc->txBuffer);

        /* CL2 and CL4 has one status byte */
        if ((pDlc->pn_cltype == CMUX_CL2))
        {
            if (u4DataLength > ((kal_uint32)(pDlc->pn_n1 - 1)))
            {
                u4DataLength = pDlc->pn_n1 - 1;
            }

            u4IfieldLength =u4DataLength +1;           
        }
        else
        {
            if (u4DataLength > pDlc->pn_n1)
            {
                u4DataLength = pDlc->pn_n1;
            }
            u4IfieldLength =u4DataLength;
        }        
    }

	//mtk02683 01.28.2010
	//Return if cmux try to write an empty frames
	if (u4IfieldLength == 0) return;
	         
    pPeerBuff = (peer_buff_struct*) construct_peer_buff( 
    	(kal_uint16)(u4IfieldLength + CMUX_HEADER_MAX_SIZE), 0, 0, TD_UL);
    pHeader=pPdu = get_peer_buff_pdu(pPeerBuff,&u2ToWrite);
        
    fcs = CMUX_INITIAL_FCS;
        
    *pHeader = CMUX_FLAG_BASIC;
    pHeader++;

    // per 5.4.3.1  responding station set CR to 0 and P-bit to 0
    *pHeader = CONSTRUCT_ADDRESS(pDlc->pn_dlci, 0,1);        
    fcs = CMUX_CALCULATE_FCS(fcs,*pHeader);
    pHeader++;
        
    if((pDlc->pn_dlci == 0) && (cmux_ptr->cchUIHPoll == UIH_FRAME_POLL))
    {
        *pHeader = UIH_FRAME_POLL;
        cmux_ptr->cchUIHPoll = 0; /* Reset the POLL bit */
    }
    else
    {
        *pHeader = UIH_FRAME;
    }

    fcs = CMUX_CALCULATE_FCS(fcs,*pHeader);
    pHeader++;
    // Header

    if (u4IfieldLength > MAX_ONE_BYTE_LENGTH)
    {
        *pHeader =(kal_uint8) CONSTRUCT_LENGTH_1_of_2(u4IfieldLength);
        fcs = CMUX_CALCULATE_FCS(fcs,*pHeader);
        pHeader++;
        *pHeader =(kal_uint8) CONSTRUCT_LENGTH_2_of_2(u4IfieldLength);
        fcs = CMUX_CALCULATE_FCS(fcs,*pHeader);
        pHeader++;
            
    }
    else
    {
        *pHeader =(kal_uint8) CONSTRUCT_LENGTH_1(u4IfieldLength);
        fcs = CMUX_CALCULATE_FCS(fcs,*pHeader);
        pHeader++;
    }
        
    // Constuct Fiill MSC byte
    if (pDlc->pn_cltype == CMUX_CL2)
    {
		*pHeader = cmux_protocol_encodeV24( pDlc );
		pHeader++;
    }

    // Finish Header construction. 

	/********************************************************
	*  Copy Information field
	*/
    if (u4DataLength >0)
    {
        cmux_readBuffer(& pDlc->txBuffer, pHeader, u4DataLength);
        pHeader+=u4DataLength;
    }

    *pHeader = CMUX_OUTPUT_FCS(fcs);
    pHeader ++;
    *pHeader = CMUX_FLAG_BASIC;
    pHeader ++;
        
	update_peer_buff_header(pPeerBuff, 0, (kal_uint16)(pHeader - pPdu), 0);

	kal_brief_trace(TRC_INFO, CMUX_SCHEDULER_WRITE_UIH, pDlc->pn_dlci, u4IfieldLength);

    cmux_writeToUart(pPeerBuff);
} /* end of cmux_writeUihFrame() */

/*******************************************************************************
* FUNCTION
*  cmux_scheduleWrite
* DESCRIPTION
*  Pick up a READY DLC to process. 
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of cmux
*******************************************************************************/
void cmux_scheduleWrite(void)
{
	/* Two possibilites here
	*   First, the is no "currently processed" frame
	*   Second, previous write attempt is not fullfiled, and we must
	*   process it first.
	*/
    CmuxDlcT *pDlc;

#if 0 //TRACE_REDUCE
/* under construction !*/
#endif

	// Choose the channel with highest priority
    pDlc = cmux_schedulerPickReadyDlc();

    if (pDlc == NULL)
    {        
		/* All priority marked suspend. We double check   *
		 * if one DLC has data but in suspend             */
        kal_uint32 i;
        CmuxDlcT* target=NULL;
        
        for (i=0;i< CMUX_CHANNEL_NUM; i++)
        {
            target = & cmux_ptr->dlcs[i];

            if ((target->state == DLC_ACTIVE) && (target->fPeerBusy == KAL_FALSE) && 
		        (cmux_isBufferEmpty(& target->txBuffer) == KAL_FALSE))
            {
                pDlc = target;	
				kal_brief_trace( TRC_WARNING, CMUX_SCHEDULER_MISS_SCHEDULE );
                break;
            }
        }	 	
    } 

    if (pDlc == NULL) 
	{
        /* do nothing */
        return;
    }

	// The DLC is scheduled to write
    kal_brief_trace(TRC_MUX, CMUX_SCHEDULER_PICKUP_DLCI, pDlc->pn_dlci, pDlc->u1AssignedPriority );

    // Suspend the DLC
    cmux_schedulerDlcSuspend(pDlc);
    
    // Construct UIH frame and write
    cmux_writeUihFrame(pDlc);

    if ( cmux_isBufferEmpty( &pDlc->txBuffer) == KAL_FALSE )
    {
        cmux_schedulerDlcReady(pDlc);
    }
#ifdef __CMUX_TEST2__
	else 
	{
		if( CMUX_MODE_ISTEST(cmux_ptr) ) 
			if ( CMUX_TEST_IS_ON(pDlc->testOption, CMUX_TEST_O_GEN) ) 
                cmux_test_genData(pDlc);
	}
#endif
    
    if (pDlc->fNotifyReadyToWrite == KAL_TRUE)
    {
        pDlc->fNotifyReadyToWrite = KAL_FALSE;
        cmux_notifyReadyToWrite(pDlc);
    }

	return;
} /* end of cmux_scheduleWrite() */

/*******************************************************************************
* FUNCTION
*  cmux_closeDownProcedure
* DESCRIPTION
*  close all dlcs 
*
* PARAMETERS
*  void
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void cmux_closeDownProcedure(void)
{
    CmuxDlcT *pDlc = NULL;
    kal_uint32 i;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_closeDownProcedure);  

    for ( i= 1; i <CMUX_CHANNEL_NUM; i++)
    {
       if( cmux_ptr->dlcs[i].state == DLC_ACTIVE)
       {
            pDlc = & (cmux_ptr->dlcs[i]);
            break;
       }
    }

    if (pDlc == NULL)
    {
        // There is no active DLC. Start CCH close down procedure.
        cmux_cchCloseDownProcedure();
    }
    else
    {
        cmux_notifyCPortPlugout(pDlc);
        cmux_schedulerDlcSuspend(pDlc);
        cmux_sendCtrlFrame(pDlc->pn_dlci,DISC_POLL);
        // should we release the buffer here ?
        // I guess not, but until UA response is received.
        cmux_startTimer(CMUX_T1,DEFAULT_T1_VALUE);
        pDlc->state = DLC_RELEASE_PENDING;
    }
} /* end of cmux_closeDownProcedure() */

/*******************************************************************************
* FUNCTION
*  cmux_handleT1Expiry
* DESCRIPTION
*  Handle T1 expiry. Currently, UE will initiate only CLD procedure, 
*  and so only release procedure wll use T1.
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_handleT1Expiry()
{    
    kal_uint32 i;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_handleT1Expiry);  

    for(i=1; i < CMUX_CHANNEL_NUM; i++)
    {
        CmuxDlcT *pDlc = & cmux_ptr->dlcs[i];

        if(pDlc->state == DLC_RELEASE_PENDING)
        {
            cmux_releaseDlc(pDlc);
            break;
         }
    }
	
    if ( cmux_ptr->state == CMUX_CLOSING )
    {
        cmux_closeDownProcedure();
		
	    if ( cmux_ptr->fUartSendSuspend == KAL_FALSE ) cmux_scheduleWrite();
    }
} /* end of cmux_handleT1Expiry() */

/*******************************************************************************
* FUNCTION
*  cmux_protocol_decodeV24
* DESCRIPTION
*  Decode V.24 control signal and change flags in dlc context
*
* PARAMETERS
*  IN	CmuxDlcT*
*  IN	kal_uint8
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_protocol_decodeV24( CmuxDlcT* pDlc, kal_uint8 signal )
{
	// Decode Flow Control bit
	if ( CMUX_V24_BIT_ISON ( signal, CMUX_V24_FC_BIT ))
	{
		// 1 means FLow control OFF
		if ( pDlc->fPeerBusy == KAL_FALSE )
		{
			pDlc->fPeerBusy = KAL_TRUE;

			// Put the DLC into suspend state
			cmux_schedulerDlcSuspend(pDlc);
			
			kal_brief_trace( TRC_STATE, CMUX_FC_FLAG_PEERBUSY, pDlc->pn_dlci, pDlc->fPeerBusy);
		}
	}
	else 
	{
		// 0 means Flow control ON
		if ( pDlc->fPeerBusy == KAL_TRUE )
		{
			pDlc->fPeerBusy = KAL_FALSE;

			 // Put the DLC into READY state if it is necessary
			if ( cmux_schedulerIsDlcReady(pDlc) == KAL_FALSE )
			{
				if ( cmux_isBufferEmpty( &(pDlc->txBuffer)) == KAL_FALSE )
						cmux_schedulerDlcReady(pDlc);
			}
			kal_brief_trace( TRC_STATE, CMUX_FC_FLAG_PEERBUSY, pDlc->pn_dlci, pDlc->fPeerBusy);	
		}
	}

#ifdef __CMUX_MODEM_STATUS_SUPPORT__
	// Decode RTC bit
	if ( CMUX_V24_BIT_ISOFF ( signal, CMUX_V24_RTC_BIT ))
    {
        uart_dsr_change_ind_struct * dsr_change = 
            construct_local_para(sizeof(uart_dsr_change_ind_struct), TD_RESET);
        dsr_change->port = pDlc->portid;

        msg_send5( CMUX_MOD_ID, pDlc->owner, DRIVER_PS_SAP, 
            MSG_ID_UART_DSR_CHANGE_IND, (local_para_struct *) dsr_change );
    }
#endif //__CMUX_MODEM_STATUS_SUPPORT__

}

/*******************************************************************************
* FUNCTION
*  cmux_protocol_encodeV24
* DESCRIPTION
*  Encode V.24 control signal and change flags in dlc context
*
* PARAMETERS
*  IN	CmuxDlcT*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*  None
*******************************************************************************/
kal_uint8 cmux_protocol_encodeV24( CmuxDlcT* pDlc )
{
	kal_uint8 signal = CMUX_V24_EA_BIT | CMUX_V24_RTC_BIT;

	if ( pDlc->fLocalBusy == KAL_FALSE )
	{
		signal |= CMUX_V24_RTR_BIT;	
	}
	else
	{
		signal |= CMUX_V24_FC_BIT;	
	}

	if ( pDlc->fSignalRi )
	{
		signal |= CMUX_V24_IC_BIT;
	} 
	
	if ( pDlc->fSignalDcd )
	{
		signal |= CMUX_V24_DV_BIT;
	}
	
	return signal;
}

/*******************************************************************************
* FUNCTION
*   cmux_restoreTask 
* DESCRIPTION
*   Retore context of CMUX
* PARAMETERS
*   void
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   Context of CMUX
*******************************************************************************/
void cmux_restoreTask( void )
{
    kal_uint8 i;

    // Stop all the timers
    cmux_stopTimer(CMUX_T2);
    cmux_stopTimer(CMUX_T3);

    // Free all the TX buffers
    //// 1. cmux_ptr->writeQueue:
    while (! lcd_lqueue_is_empty(cmux_ptr->writeQueue))
    {
        peer_buff_struct * pPeer = 
            (peer_buff_struct *) lcd_lqueue_remove(cmux_ptr->writeQueue, NULL);
        free_peer_buff(pPeer);
    }
    //// 2. cmux_uh_ptr->writingBuffer:
    //// MT: It is NOT A GOOD IDEA to free a CMUX_UH's buffer here!
    if (NULL != cmux_uh_ptr->writingBuffer)
    {
        free_peer_buff(cmux_uh_ptr->writingBuffer);
        cmux_uh_ptr->writingBuffer = NULL;
    }            
    // Disconnect all DLC, if they are not disconnected
    for ( i=1; i < CMUX_CHANNEL_NUM; i++ )
    {
        CmuxDlcT *pDlc = &cmux_ptr->dlcs[i];

        if (pDlc->state == DLC_ACTIVE)
        {
            cmux_notifyCPortPlugout(pDlc);
            cmux_schedulerDlcSuspend(pDlc);
            cmux_releaseDlc(pDlc);
        }
    }           

    // Notify UART handler about to release of UART.
    // UART Handler should finish writing and then response
    cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,NULL,NULL);

    return;
    
} /* end of cmux_restoreTask() */

/******************************************************************************/

