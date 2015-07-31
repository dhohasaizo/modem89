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
 *   cmux_uh.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   UART handler. This file handle physical UART interfacee.
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

#include "cmux_uh.h"
#include "cmux_def.h"
#include "cmux_trc.h"
#include "cmux_hdlr.h"

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
#include "cmux_ut.h"
#endif

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_trace.h"
#include "dcl.h"
#include "cmux_struct.h"
#include "cmux_msgid.h"
#include "drv_msgid.h"
#include "drv_sap.h"

/******************************************************************************/

static CmuxUartHandlerT cmux_uart_handler_context;
CmuxUartHandlerT *const cmux_uh_ptr = & cmux_uart_handler_context;

/******************************************************************************/

static kal_uint16 cmux_uh_GetBytes(UART_PORT port,kal_uint8 * buffaddr, 
    kal_uint16 length, kal_uint8 * status,module_type ownerid);
static kal_uint16 cmux_uh_PutBytes(UART_PORT port,kal_uint8 * buffaddr, 
    kal_uint16 length, module_type ownerid);
static void cmux_uh_SetOwner(UART_PORT port,module_type owner);

/*******************************************************************************
* FUNCTION
*   cmux_uh_SetOwner
* DESCRIPTION
*   Set onwer of serial port
*
* PARAMETERS
*   IN	UART_PORT
*   IN     module_type
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_uh_SetOwner(UART_PORT port, module_type ownerid)
{
    UART_CTRL_OWNER_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);    

    data.u4OwenrId = ownerid;
    DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &data);
}

/*******************************************************************************
* FUNCTION
*   cmux_uh_GetBytes
* DESCRIPTION
*   Read data from serial port.
*
* PARAMETERS
*   IN        UART_PORT
*   OUT     kal_uint8 *
*   IN        kal_uint16
*   OUT     kal_uint8 *
*   IN        module_type
* RETURNS
*   kal_uint16
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static kal_uint16 cmux_uh_GetBytes(UART_PORT port, kal_uint8 *buffaddr, kal_uint16 length,
    kal_uint8 *status, module_type ownerid)
{
    UART_CTRL_GET_BYTES_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.u2Length = length;
    data.u4OwenrId = ownerid;
    data.puBuffaddr = buffaddr;
    data.pustatus = status;
    DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &data);
    return data.u2RetSize;
}

/*******************************************************************************
* FUNCTION
*   cmux_uh_PutBytes
* DESCRIPTION
*   Write data to serial port.
*
* PARAMETERS
*   IN        UART_PORT
*   OUT     kal_uint8 *
*   IN        kal_uint16
*   IN        module_type
* RETURNS
*   kal_uint16
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static kal_uint16 cmux_uh_PutBytes(UART_PORT port, kal_uint8 *buffaddr, kal_uint16 length,
    module_type ownerid)
{
    UART_CTRL_PUT_BYTES_T data;
    DCL_HANDLE handle = DclSerialPort_Open(port,0);

    data.u2Length = length;
    data.u4OwenrId = ownerid;
    data.puBuffaddr = buffaddr;
    DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &data);
    return data.u2RetSize;
}

/*******************************************************************************
* FUNCTION
*  cmux_uh_init
* DESCRIPTION
*  initial the context of MOD_CMUXUH
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   context of cmux_uh
*******************************************************************************/
void cmux_uh_init(void)
{
	CMUX_INIT_CONTEXT(cmux_uh_ptr);
	
	return;
}

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
/*******************************************************************************
* FUNCTION
*  cmux_uh_reset
* DESCRIPTION
*   This function is only used in Unit Test
*
* PARAMETERS
*   void
* RETURNS
*   void
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_uh_reset(void)
{
	cmux_uh_ptr->port = uart_port_null;
	cmux_uh_ptr->state = CMUXUH_INACTIVE;
	
	// RX
	cmux_uh_ptr->fCmuxBusy = KAL_FALSE;
	cmux_uh_ptr->fUartEmpty = KAL_FALSE;

	// TX
	cmux_uh_ptr->fUartFull = KAL_FALSE;

	if(cmux_uh_ptr->writingBuffer) {
		free_peer_buff(cmux_uh_ptr->writingBuffer);
		cmux_uh_ptr->writingBuffer = NULL;
	}
	return; 
}
#endif	

/*******************************************************************************
* FUNCTION
*  cmux_uh_readUart
* DESCRIPTION
*  read data from PHY Uart
* 
* PARAMETERS
*   void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of cmuxuh
*******************************************************************************/
void cmux_uh_readUart(void)
{
	peer_buff_struct *pPeerBuff;

    kal_uint16 u2DataRead;
    kal_uint8  *pPdu;
    kal_uint8 status;
   
    pPeerBuff = (peer_buff_struct*) construct_peer_buff( 
    	CMUX_MAX_UH_READ_BUFFER, 0, 0, TD_UL);
    pPdu = get_peer_buff_pdu( pPeerBuff, &u2DataRead);
  
    u2DataRead = cmux_uart_getBytes(cmux_uh_ptr->port, pPdu, CMUX_MAX_UH_READ_BUFFER, 
    	&status);

    if (u2DataRead == 0)
    {
        free_peer_buff(pPeerBuff);
        cmux_uh_ptr->fUartEmpty = KAL_TRUE;
        return;
    }
    
    if (u2DataRead < CMUX_MAX_UH_READ_BUFFER)
    {
        cmux_uh_ptr->fUartEmpty = KAL_TRUE;
		update_peer_buff_header(pPeerBuff, 0, u2DataRead, 0);
    }

	// Set flag	
    cmux_uh_ptr->fCmuxBusy = KAL_TRUE;
    
    // send to CMUX
    cmux_uh_sendMsgToCmux(MSG_ID_CMUX_UART_DATA_IND,NULL,pPeerBuff);    

} /* end of cmux_uh_readUart() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_writeUart
* DESCRIPTION
*  write data to PHY Uart
* 
* PARAMETERS
*   void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_writeUart(void)
{
	peer_buff_struct *pPeerBuff = cmux_uh_ptr->writingBuffer;

    kal_uint16  bufLength;
    kal_uint16  writenLength;
    kal_uint8    *dataPtr;

    dataPtr = get_peer_buff_pdu(pPeerBuff,&bufLength);
    
    writenLength = cmux_uart_putBytes(cmux_uh_ptr->port, dataPtr,bufLength);

    if (writenLength <  bufLength)
    {
        cmux_uh_ptr->fUartFull = KAL_TRUE;
        update_peer_buff_header( pPeerBuff, (pPeerBuff->free_header_space + writenLength), 
                             (bufLength - writenLength), 0);
		
        kal_brief_trace(TRC_STATE, CMUX_UH_FLAG_UART_FULL, cmux_uh_ptr->fUartFull);
        return;
    }
	
    /* finish writing */
    free_peer_buff(pPeerBuff);
    cmux_uh_ptr->writingBuffer = NULL;

	switch ( cmux_uh_ptr->state )
	{
		case CMUXUH_ACTIVE:
            cmux_uh_sendMsgToCmux(MSG_ID_CMUX_READY_TO_SEND_IND,NULL, NULL);
			break;

		case CMUXUH_DETACHING:
	        cmux_uh_ptr->state = CMUXUH_INACTIVE;
	        cmux_uh_sendMsgToCmux(MSG_ID_CMUX_UART_CLOSE_DOWN_CNF, NULL, NULL);
			break;

		default:
			break;
	}
} /* end of cmux_uh_writeUart() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleStartupReq
* DESCRIPTION
*  Starup the UART handler
* 
* PARAMETERS
*   IN      *local_ptr       
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleStartupReq(local_para_struct* local_ptr)
{
    cmux_startup_req_struct* startUp = (cmux_startup_req_struct*) local_ptr;

	// Context Initialization
    cmux_uh_ptr->port = startUp->port;

    cmux_uh_ptr->fCmuxBusy = KAL_FALSE;
    cmux_uh_ptr->fUartEmpty = KAL_FALSE;
    cmux_uh_ptr->fUartFull = KAL_FALSE;
    cmux_uh_ptr->writingBuffer  = NULL;

	cmux_uart_setOwner(startUp->port);

    // Start to read
    cmux_uh_ptr->state = CMUXUH_ACTIVE;

    cmux_uh_readUart();
} /* end of cmux_uh_handleStartupReq() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleUartReadyToReadInd
* DESCRIPTION
*  handle UART_READY_TO_READ_IND
* 
* PARAMETERS
*   void 
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleUartReadyToReadInd(void)
{
    cmux_uh_ptr->fUartEmpty = KAL_FALSE;
	
    if ( cmux_uh_ptr->state != CMUXUH_INACTIVE )
    {
        cmux_uh_readUart();
    }
} /* end of cmux_uh_handleUartReadyToReadInd() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleUartReadyToReadInd
* DESCRIPTION
*  resume UART read process
* 
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleCmuxReadyToSendInd(void)
{
    cmux_uh_ptr->fCmuxBusy = KAL_FALSE;

    if ( cmux_uh_ptr->state != CMUXUH_INACTIVE )
    {   
	    if ( cmux_uh_ptr->fUartEmpty == KAL_FALSE )
	    {
	        cmux_uh_readUart();
	    }
    }
} /* end of cmux_uh_handleCmuxReadyToSendInd() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleUartReadyToWriteInd
* DESCRIPTION
*  handle UART_READY_TO_WRITE_IND
* 
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleUartReadyToWriteInd(void)
{
    cmux_uh_ptr->fUartFull = KAL_FALSE;
	
	kal_brief_trace(TRC_STATE, CMUX_UH_FLAG_UART_FULL, cmux_uh_ptr->fUartFull);

	if( cmux_uh_ptr->writingBuffer != NULL )
    {        
		kal_brief_trace(TRC_INFO, CMUX_UH_UART_WRITE_RESUME, cmux_uh_ptr->port);
        cmux_uh_writeUart();
    }
} /* end of cmux_uh_handleUartReadyToWriteInd() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleCmuxUartCloseDownReq
* DESCRIPTION
*  deactivate CMUXUH
* 
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleCmuxUartCloseDownReq(void)
{
    cmux_uh_ptr->state = CMUXUH_DETACHING;
	
    if (cmux_uh_ptr->writingBuffer == NULL)
    {
        cmux_uh_ptr->state = CMUXUH_INACTIVE;
        cmux_uh_sendMsgToCmux(MSG_ID_CMUX_UART_CLOSE_DOWN_CNF,NULL, NULL);
    }

} /* end of cmux_uh_handleCmuxUartCloseDownReq() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_handleCmuxDataReq
* DESCRIPTION
*  process data from CMUX
* 
* PARAMETERS
*   IN      *peer
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_handleCmuxDataReq(peer_buff_struct *peer)
{
	// WritingBuffer should be NULL
	CMUX_ASSERT(cmux_uh_ptr->writingBuffer == NULL);

    hold_peer_buff(peer);
    cmux_uh_ptr->writingBuffer = peer;

	CMUX_ASSERT(cmux_uh_ptr->fUartFull == KAL_FALSE);

	cmux_uh_writeUart();

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
} /* end of cmux_uh_handleCmuxDataReq() */

/*******************************************************************************
* FUNCTION
*  cmux_uh_main
* DESCRIPTION
*  The main entry function of MOD_CMUXUH
* 
* PARAMETERS
*  ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  None
*******************************************************************************/
void cmux_uh_main(ilm_struct *ilm_ptr)
{
   switch(ilm_ptr->msg_id)
   {
        /* CMUX */
        case MSG_ID_CMUX_STARTUP_REQ:
            cmux_uh_handleStartupReq(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_CMUX_UART_CLOSE_DOWN_REQ:
            cmux_uh_handleCmuxUartCloseDownReq();
            break;
            
        case MSG_ID_CMUX_READY_TO_SEND_IND:
            cmux_uh_handleCmuxReadyToSendInd();
            break;

        case MSG_ID_CMUX_UART_DATA_REQ:
            cmux_uh_handleCmuxDataReq(ilm_ptr->peer_buff_ptr);
            break;

        /* UART */        
        case MSG_ID_UART_READY_TO_READ_IND:
            cmux_uh_handleUartReadyToReadInd();
            break;

        case MSG_ID_UART_READY_TO_WRITE_IND:
            cmux_uh_handleUartReadyToWriteInd();
            break;

		/* CMUX UT */
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
		case MSG_ID_CMUX_UT_UART_DATA_IND:
            cmux_handleTstCommand(ilm_ptr);
			break;
#endif

//mtk02683: Not handled for now
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   }
} /* end of cmux_uh_main() */

/******************************************************************************/

