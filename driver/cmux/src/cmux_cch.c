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
 *   cmux_cch.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Control channel handler of CMUX.
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
#include "cmux_lib.h"
#include "cmux_utl.h"
#include "cmux_trc.h"
#include "cmux_hdlr.h"
#include "cmux_vp_num.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_trace.h"
#include "cmux_msgid.h"

/******************************************************************************/
/* Definition used only in this file                                                                                                */
/******************************************************************************/

#define GET_MESSAGE_TYPE(b) ((b) &0xFC) 
#define GET_MESSAGE_LENGTH(b) ((b)>>1) 
#define CR_BIT_OF_MSG(b) ((b) &0x02)
#define RESPONSE_CR  0 
#define ORIGINATOR_CR 2
#define EA_BIT_OF_MSG(b) ((b) &0x01)
#define EA_END   1
#define PN_MESSAGE       0x80
#define PSC_MESSAGE     0x40
#define CLD_MESSAGE     0xC0
#define TEST_MESSAGE   0x20
#define FCON_MESSAGE   0xA0
#define FCOFF_MESSAGE 0x60
#define MSC_MESSAGE     0xE0
#define NSC_MESSAGE     0x10
#define RPN_MESSAGE     0x90
#define SNC_MESSAGE     0xD0
#define PN_MSG_LENGTH 8
#define CLD_MSG_LENGTH 0
#define MSC_MSG_LENGTH 2
#define DEFAULT_N1_VALUE 31
#define PN_UIH_FRAME   0
#define PN_CL_TYPE2      1
#define MSC_DV_BIT      0x80
#define MSC_IC_BIT      0x40
#define MSC_RTR_BIT     0x08
#define MSC_RTC_BIT     0x04
#define MSC_FC_BIT      0x02

/******************************************************************************/

#ifdef __VT_TRANSPORT_SUPPORT__
extern kal_bool cmux_tst_empty_msc_suspend;
extern kal_bool cmux_tst_empty_msc_resume;
#endif	

/*******************************************************************************
* FUNCTION
*  cmux_sendNscMessage
* DESCRIPTION
*   Send out a NSC message
*
* PARAMETERS
*   IN      msg
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_sendNscMessage(kal_uint8 msg)
{    
    CmuxDlcT *pDlcCch=& cmux_ptr->dlcs[0];
    kal_uint8  nscResponse[4];
    kal_uint8 *ptr = nscResponse;
   
    *ptr = (kal_uint8)(EA_END | RESPONSE_CR| NSC_MESSAGE);
    ptr++;
    *ptr = (1<<1)|EA_END;
    ptr++;
    *ptr = msg;
    // write to data    
    cmux_writeBuffer(& pDlcCch->txBuffer,nscResponse,3);
    // make it ready
    cmux_schedulerDlcReady(pDlcCch);    
} /* end of cmux_sendNscMessage() */

/*******************************************************************************
* FUNCTION
*  cmux_sendCldMessage
* DESCRIPTION
*   Send out a CLD message, command or response, depends on the argument
*
* PARAMETERS
*   IN      cr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
static void cmux_sendCldMessage(kal_uint32 cr)
{
    CmuxDlcT *pDlcCch=& cmux_ptr->dlcs[0];
    kal_uint8 cldResponse[4];
    kal_uint8 *ptr;

    ptr = cldResponse;

    *ptr = (kal_uint8)(EA_END | cr | CLD_MESSAGE);
    ptr++;
    *ptr = 0|EA_END;
    // write to data    
    cmux_writeBuffer(& pDlcCch->txBuffer,cldResponse,2);
    // make it ready
    cmux_schedulerDlcReady(pDlcCch);
} /* end of cmux_sendCldMessage() */

/*******************************************************************************
* FUNCTION
*  cmux_sendMscMessage
* DESCRIPTION
*   Send out a MSC message, command or response, depends on the argument
*
* PARAMETERS
*   IN      dlci
*   IN      option
*   IN      cr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
static void cmux_sendMscMessage(kal_uint32 dlci, kal_uint8 option, kal_uint32 cr)
{
    CmuxDlcT *pDlcCch=& cmux_ptr->dlcs[0];
    kal_uint8 msc[4]; /* Not support Break Signals*/
    kal_uint8 *ptr = msc;

    *ptr = (kal_uint8)(EA_END | cr | MSC_MESSAGE);
    ptr++;
    *ptr = (MSC_MSG_LENGTH << 1) |EA_END; /* Length */
    ptr++;
    *ptr = (kal_uint8) ((dlci << 2) | ORIGINATOR_CR | EA_END);
    ptr++;
    *ptr = option;

    kal_brief_trace( TRC_MUX, CMUX_CCH_MSC_SEND_ON_DLC, option, dlci);

    // write to data    
    cmux_writeBuffer( &pDlcCch->txBuffer,msc, 4 );
    // make it ready
    cmux_schedulerDlcReady(pDlcCch);
} /* end of cmux_sendCldMessage() */    

/*******************************************************************************
* FUNCTION
*  cmux_handlePnMessage
* DESCRIPTION
*   This function process PN message, and construct PN response. 
*   The content of PN is read from buffer of control channel.
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
static void cmux_handlePnMessage( void )
{
    CmuxDlcT *  pDlcCch = &cmux_ptr->dlcs[0];

    CmuxDlcT *  pDlcDest;
    kal_uint32  dlci;
    
    kal_uint8 pnContent[(2 + PN_MSG_LENGTH)];
    
    kal_uint32  negPriority;
    kal_uint32  negN1;
    kal_uint8   negCL=0;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_handlePnMessage);   

	/* decode the Parameter, and process it
	*  the format of PN is
	*  Bit   8  7  6  5  4  3  2  1
	*  byte
	*   0      0  0  [  DLCI        ]
	*   1      [  CL    ]  [  type  ]
	*   2      0  0  [   Priority    ]
	*   3      [   T1                  ]
	*   4      [   N1-low           ]
	*   5      [   N1-high          ]
	*   6      [   N2                  ]
	*   7      0  0  0  0  0 [k     ]
	*/

    // Read PN message from rx buffer of CCH  
    cmux_readBuffer( &pDlcCch->rxBuffer, (pnContent + 2), PN_MSG_LENGTH);

	/*
	*  In current implementation, we care only about 
	*  Priority and N1
	*  Other values are not concerned.
	*/
    dlci = pnContent[0+2] & 0x3F;

    /* PN should be done before the DLC is active */
    pDlcDest = cmux_findDlcByDlciState( dlci, DLC_ACTIVE );
    if ( pDlcDest != NULL )
    {
        // response with current value      
        negPriority = pDlcDest->pn_priority;
        negN1 = pDlcDest->pn_n1;
        
		kal_brief_trace( TRC_WARNING, CMUX_CCH_PN_FAIL, dlci); 
    }
    else
    {
        pDlcDest = cmux_findDlcByDlciState( dlci, DLC_PARNEG );

        if ( pDlcDest == NULL ) 
        {
            pDlcDest = cmux_locateSuitableDlc(dlci);

            if (pDlcDest != NULL) 
            {
                cmux_initializeDlc(pDlcDest,dlci);
                pDlcDest->state = DLC_PARNEG;
            }
        }
		
        if ( pDlcDest != NULL) 
        {
            // We have no preference for Priority
            negPriority = pnContent[2+2] & 0x3F;
            pDlcDest->pn_priority = negPriority;

            // But we may check N1 for a reasonable value.
            negN1   = pnContent[4+2] | (pnContent[5+2] << 8);
            if (negN1 < CMUX_MIN_N1_VALUE) negN1 = CMUX_MIN_N1_VALUE;
            if (negN1 > CMUX_MAX_N1_VALUE) negN1 = CMUX_MAX_N1_VALUE;
            pDlcDest->pn_n1 =(kal_uint32) negN1;

	        // Negotiat Convergence Layer
         	negCL = (pnContent[1+2] & 0xF0) >> 4;
            if ( negCL > CMUX_CL2 )
            {
				negCL = pDlcDest->pn_cltype;
		    }
		    else
		    {
				pDlcDest->pn_cltype = (CmuxClTypeE) negCL;
		    }

			kal_brief_trace( TRC_INFO, CMUX_CCH_PN_NEGO, dlci, pDlcDest->pn_cltype, 
				   pDlcDest->pn_priority, pDlcDest->pn_n1);
        }
        else
        {
            // No available DLC for use. set to default value
			negPriority = pnContent[2+2] & 0x3F;
			negN1 = pnContent[4+2] | (pnContent[5+2] << 8);
			negCL = (pnContent[1+2] & 0xF0) >> 4;

			kal_brief_trace( TRC_WARNING, CMUX_CCH_PN_FAIL, dlci);		
        }
    }

    // Header
    pnContent[0] = EA_END | RESPONSE_CR | PN_MESSAGE;
    pnContent[1]= (PN_MSG_LENGTH << 1) | EA_END;
    // DLCI unchanged    
    // CL should be alwayws CL2 and Frame type shoudl be always UIH
    pnContent[2+1] =  (kal_uint8)( (negCL << 4) | PN_UIH_FRAME);
    // priority
    pnContent[2+2] = (kal_uint8) negPriority;
    // T1 unchanged
    // N1
    pnContent[2+4] = (kal_uint8) negN1;
    pnContent[2+5] = (kal_uint8) (negN1 >> 8);
    // N2 and k unchanged   

    // write to data    
    cmux_writeBuffer(& pDlcCch->txBuffer,pnContent,10);
    // make it ready
    cmux_schedulerDlcReady(pDlcCch);
	
} /* end of cmux_handlePnMessage() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCldMessage
* DESCRIPTION
*  This function handle CLD Message, including COMMAND and RESPONSE
* 
* PARAMETERS
*   IN      command
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
static void cmux_handleCldMessage(kal_uint8 command)
{
    kal_uint32 i;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_handleCldMessage);  
    
    switch (cmux_ptr->state)
    {
        case CMUX_ACTIVE:
        case CMUX_STARTUP:
            /* disconnect all DLC, if not disconnected */
            if (CR_BIT_OF_MSG(command) != ORIGINATOR_CR)
            {
                // ignore this message
                return;
            }
			
            for (i=1; i < CMUX_CHANNEL_NUM; i++)
            {
                CmuxDlcT *pDlc = & cmux_ptr->dlcs[i];

                if (pDlc->state == DLC_ACTIVE)
                {
                    cmux_notifyCPortPlugout(pDlc);
                    cmux_schedulerDlcSuspend(pDlc);
                    cmux_releaseDlc(pDlc);
                }
            }
			kal_brief_trace(TRC_INFO, CMUX_CCH_CLD_RECV_OK);
			
            // response with CLD resp
            cmux_sendCldMessage(RESPONSE_CR);
           // Notify UART handler about to release of UART.
           // UART Handler should finish writing and then response
           cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,NULL,NULL);
           break;

        case CMUX_CLOSING:
            if (CR_BIT_OF_MSG(command) != RESPONSE_CR)
            {
                // ignore this message
                return;
            }

            cmux_stopTimer(CMUX_T2);
            cmux_stopTimer(CMUX_T3);
            cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,NULL,NULL);                        
            break;
        default:
            break;           
    }   
} /* end of cmux_handleCldMessage() */

/*******************************************************************************
* FUNCTION
*  cmux_handleMscMessage
* DESCRIPTION
*   This function process MSC message, and construct MSC response. 
*
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
void cmux_handleMscMessage(kal_uint8 length)
{
    CmuxDlcT *pDlcCch= & cmux_ptr->dlcs[0];
    CmuxDlcT *pDlcDest=NULL;
    kal_uint8 mscContent[MSC_MSG_LENGTH + 1]; /* include header */
    kal_uint32 dlci;

    kal_trace(TRC_FUNC,CMUX_FUNC_cmux_handleMscMessage);    
    
    cmux_readBuffer(& pDlcCch->rxBuffer,mscContent, length);

    dlci = mscContent[0] >> 2;

    kal_brief_trace( TRC_INFO, CMUX_CCH_MSC_RECV_MSC, dlci, mscContent[1]);
    
    pDlcDest = cmux_findDlcByDlciState(dlci, DLC_ACTIVE);

    if( pDlcDest != NULL ) cmux_protocol_decodeV24(pDlcDest, mscContent[1]);

    cmux_sendMscMessage(dlci, mscContent[1], RESPONSE_CR);
} /* end of cmux_handleMscMessage() */

/*******************************************************************************
* FUNCTION
*  cmux_controlChannelHandler
* DESCRIPTION
*  Control channel handler. This function is called each time a valid frame 
*  of DLCI 0 is received.
* 
* PARAMETERS
*   none
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_controlChannelHandler(void)
{
    CmuxDlcT *pDlcCch= & cmux_ptr->dlcs[0];
    kal_uint8 msgHeader[2];
    kal_uint32 u4DataAvail;
    kal_uint32 msgLength;
    
    while (cmux_isBufferEmpty(& pDlcCch->rxBuffer) == KAL_FALSE)
    {
        /* the Message format is
        *   EA CR MSG
        *   Length
        *   para....
        */
        u4DataAvail =  cmux_getBufferDataAvail(& pDlcCch->rxBuffer);
        if (u4DataAvail < 2)
        {
            // abnormal case... ignore this frame
            kal_brief_trace( TRC_MUX, CMUX_CCH_DROP_INVLAID_LENGTH);
            cmux_discardDataInBuffer( &pDlcCch->rxBuffer, u4DataAvail);
            // break through the while loop
            break;
        }
        
        cmux_readBuffer(& pDlcCch->rxBuffer,msgHeader,2);
        // UE will not initiate any procedure except CLD_MESSAGE.
        msgLength=GET_MESSAGE_LENGTH(msgHeader[1]);
        if (u4DataAvail < msgLength)
        {
            kal_brief_trace( TRC_MUX, CMUX_CCH_DROP_INVLAID_LENGTH);
            cmux_discardDataInBuffer( &pDlcCch->rxBuffer, u4DataAvail);
             // break through the while loop
            break;            
        }
        
        if (EA_BIT_OF_MSG(msgHeader[0]) != EA_END )
        {
            kal_brief_trace( TRC_MUX, CMUX_CCH_MESSAGE_EA_NOT_END);
            cmux_discardDataInBuffer( &pDlcCch->rxBuffer, msgLength);
            // continue through the while loop
            continue;

        }
		
        // available data is at least more than msgHeader[1] from here
        kal_brief_trace( TRC_MUX, CMUX_CCH_VAILD_MESSAGE, msgHeader[0]);
		
        switch (GET_MESSAGE_TYPE(msgHeader[0]))
        {
            case PN_MESSAGE:
                if (msgLength == PN_MSG_LENGTH
                    && CR_BIT_OF_MSG(msgHeader[0]) == ORIGINATOR_CR)
                {
                    cmux_handlePnMessage();
                }
                else
                {
                    cmux_discardDataInBuffer(& pDlcCch->rxBuffer,msgLength);
                }
                break;

            case CLD_MESSAGE:
                if (msgLength == CLD_MSG_LENGTH)
                {
                    cmux_handleCldMessage(msgHeader[0]);
                }
                else
                {
                    cmux_discardDataInBuffer(& pDlcCch->rxBuffer,msgLength);
                }

                break;
       
            case MSC_MESSAGE:
                if(((msgLength == MSC_MSG_LENGTH)||
                   (msgLength == MSC_MSG_LENGTH + 1)) &&
                   (CR_BIT_OF_MSG(msgHeader[0]) == ORIGINATOR_CR))
                {
                    cmux_handleMscMessage((kal_uint8) msgLength);
                }
                else
                {
                    cmux_discardDataInBuffer(& pDlcCch->rxBuffer,msgLength);
                }
                break;
                
            default:
				kal_brief_trace(TRC_WARNING, CMUX_CCH_NSC_RECV);				
                cmux_sendNscMessage(msgHeader[0]);
                cmux_discardDataInBuffer(&pDlcCch->rxBuffer,msgLength);
                break;
        }
    }
} /* end of cmux_controlChannelHandler() */

/*******************************************************************************
* FUNCTION
*  cmux_cchCloseDownProcedure
* DESCRIPTION
*  Start CLOSE down procedure. Start T3, and try to disconnect all DLC.
* 
* PARAMETERS
*   none
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
void cmux_cchCloseDownProcedure(void)
{
    cmux_sendCldMessage(ORIGINATOR_CR);
    //Start T2 & T3
    cmux_ptr->state = CMUX_CLOSING;
    cmux_startTimer(CMUX_T2, DEFAULT_T2_VALUE);
    cmux_startTimer(CMUX_T3, DEFAULT_T3_VALUE);
} /* end of cmux_cchCloseDownProcedure() */

/*******************************************************************************
* FUNCTION
*  cmux_handleT2Expiry
* DESCRIPTION
*  T2 timer handler.
* 
* PARAMETERS
*   none
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_handleT2Expiry(void)
{
    // retransmit CLD
    if(cmux_ptr->state == CMUX_CLOSING)
    {
        cmux_sendCldMessage(ORIGINATOR_CR);

	    if ( cmux_ptr->fUartSendSuspend == KAL_FALSE ) cmux_scheduleWrite();

        cmux_startTimer(CMUX_T2, DEFAULT_T2_VALUE);
    }    
} /* end of cmux_handleT2Expiry() */

/*******************************************************************************
* FUNCTION
*  cmux_handleT3Expiry
* DESCRIPTION
*  T3 timer handler.
* 
* PARAMETERS
*   none
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_handleT3Expiry(void)
{
    if(cmux_ptr->state == CMUX_CLOSING)
    {
        cmux_stopTimer(CMUX_T2);
		
        cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_CLOSE_DOWN_REQ,NULL,NULL);
    }    
} /* end of cmux_handleT3Expiry() */

/*******************************************************************************
* FUNCTION
*  cmux_resumePeerDlc
* DESCRIPTION
*   reset FC bit to notify peer DLC resume
* 
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*  None
* GLOBALS AFFECTED
* 
*******************************************************************************/
void cmux_resumePeerDlc(kal_uint32 dlci)
{
    kal_uint8 option = (EA_END|MSC_RTC_BIT|MSC_RTR_BIT|MSC_DV_BIT);

#ifdef __VT_TRANSPORT_SUPPORT__
    if (cmux_tst_empty_msc_resume == KAL_TRUE)
    {
        //kal_prompt_trace(MOD_CMUX, "[DLC] DLC %d send resume. EMPTY!!!", dlci);
		return;
    }
#endif

    kal_brief_trace(TRC_INFO, CMUX_FC_RESUME_PEER, dlci);

	// Send MSC suspend message
    cmux_sendMscMessage(dlci, option, ORIGINATOR_CR);
} /* end of cmux_resumePeerDlc() */

/*******************************************************************************
* FUNCTION
*  cmux_suspendPeerDlc
* DESCRIPTION
*  set FC bit to notify peer DLC suspend
* 
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*  None
* GLOBALS AFFECTED
* 
*******************************************************************************/
void cmux_suspendPeerDlc(kal_uint32 dlci)
{
#ifdef __CMUX_MODEM_STATUS_SUPPORT__    
    kal_uint8 option = (EA_END|MSC_FC_BIT|MSC_RTC_BIT|MSC_DV_BIT);
#else
    kal_uint8 option = (EA_END|MSC_FC_BIT|MSC_RTC_BIT|MSC_RTR_BIT|MSC_DV_BIT); // cmux_bug: RTR and FC shall be conflicted to each other
#endif
    
#ifdef __VT_TRANSPORT_SUPPORT__
    if (cmux_tst_empty_msc_suspend == KAL_TRUE)
    {
        //kal_prompt_trace(MOD_CMUX, "[DLC] DLC %d send suspend. EMPTY!!!", dlci);
        return;
    }
#endif

    kal_brief_trace(TRC_INFO, CMUX_FC_SUSPEND_PEER, dlci);

    cmux_sendMscMessage(dlci, option, ORIGINATOR_CR);
} /* end of cmux_suspendPeerDlc() */

#ifdef __CMUX_MODEM_STATUS_SUPPORT__
/*******************************************************************************
* FUNCTION
*  cmux_sendDlcMscStatus()
* DESCRIPTION
*  set current MSC status to notify peer DLC
* 
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*  None
* GLOBALS AFFECTED
* 
*******************************************************************************/
void cmux_sendDlcMscStatus(kal_uint32 dlci)
{
    CmuxDlcT *pDlc = cmux_findDlcByDlciState(dlci, DLC_ACTIVE);

    //kal_prompt_trace(MOD_CMUX, "[CMUX MSC] DLCI=%d", dlci);
    if (pDlc != NULL)
    {
    	kal_uint8 option = cmux_protocol_encodeV24( pDlc );
        cmux_sendMscMessage(dlci, option, ORIGINATOR_CR);
    }

} /* end of cmux_sendDlcMscStatus() */
#endif // __CMUX_MODEM_STATUS_SUPPORT__

/******************************************************************************/

