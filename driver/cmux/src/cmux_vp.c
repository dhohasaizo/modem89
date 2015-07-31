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
 *   cmux_vp.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   The interface between Applications and CMUX. It simulate UART port 
 *   interface but with different name prefix..
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

#include "cmux_vp.h"

#include "cmux_def.h"
#include "cmux_lib.h"
#include "cmux_cus.h"
#include "cmux_trc.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"
#include "md_drv_sap.h"
#include "drv_msgid.h"
#include "drv_comm.h"
#include "cmux_msgid.h"
#include "cmux_struct.h"
#include "dcl.h"

/******************************************************************************/

static DCL_STATUS CmuxUart_Handler( DCL_DEV dev, DCL_CTRL_CMD cmd, 
    DCL_CTRL_DATA_T *data);
Seriport_HANDLER_T  CmuxUart_Drv_Handler = {DCL_UART_CMUX_TYPE, CmuxUart_Handler};

/******************************************************************************/

#ifdef __CENTRAL_STATUS_TO_URC_CHANNEL__
static CmuxDlcT* cmux_findFirstUrcChannel(void);
#endif
static void cmux_notifyBufferAvailable(module_type owner,UART_PORT port);
static void cmux_notifyBufferAvailable(module_type owner,UART_PORT port);
static void cmux_notifyUartPlugOut( UART_PORT port );

/******************************************************************************/

#ifdef __CENTRAL_STATUS_TO_URC_CHANNEL__
/*******************************************************************************
* FUNCTION
*    cmux_findFirstUrcChannel
* DESCRIPTION
*    This function is used to return the first URC channel in the cmux dlcs
*
* PARAMETERS
*    IN    void  
* RETURNS
*    URC channel pointer
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static CmuxDlcT* cmux_findFirstUrcChannel(void)
{
    CmuxDlcT * dlc = NULL;
    kal_uint8 i=0;
    for (i=0; i<CMUX_CHANNEL_NUM; i++)
    {
        if (cmux_get_channel_def(i) == CMUX_URC_CHANNEL)
        {
            dlc = & cmux_ptr->dlcs[i];
            break;
        }
    }
    return dlc;
}
#endif // __CENTRAL_STATUS_TO_URC_CHANNEL__

/*******************************************************************************
* FUNCTION
*    cmux_notifyBufferAvailable
* DESCRIPTION
*    This function is used to trigger MOD_CMUX to move data from PHY UART buffer 
*    to Rx ring buffer.
*
* PARAMETERS
*    IN    owner
*    IN    port   
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_notifyBufferAvailable(module_type owner,UART_PORT port)
{
    cmux_dlc_ready_to_receive_req_struct *pLocal = 
        (cmux_dlc_ready_to_receive_req_struct * ) construct_local_para( 
        sizeof(cmux_dlc_ready_to_receive_req_struct), TD_RESET);
    pLocal->port = port;

    msg_send5( owner, CMUX_MOD_ID, CMUX_SAP, 
        MSG_ID_CMUX_DLC_READY_TO_RECEIVE_REQ, (local_para_struct*) pLocal);
    
} /* end of cmux_notifyBufferAvailable() */

/*******************************************************************************
* FUNCTION
*    cmux_notifyBufferAvailable
* DESCRIPTION
*    This function is used to trigger MOD_CMUX to move data from Tx ring buffer 
*    to PHY UART buffer.
* PARAMETERS
*    IN     owner
*    IN     port
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_notifyDataAvailable( module_type owner, UART_PORT port )
{
    cmux_dlc_data_ready_req_struct * pLocal = 
        (cmux_dlc_data_ready_req_struct * ) construct_local_para(
        sizeof( cmux_dlc_data_ready_req_struct), TD_RESET);
    pLocal->port = port;
    
    msg_send5( owner, CMUX_MOD_ID, CMUX_SAP, 
        MSG_ID_CMUX_DLC_DATA_READY_REQ, (local_para_struct*) pLocal);
    
} /* end of cmux_notifyDataAvailable() */

/*******************************************************************************
* FUNCTION
*    cmux_notifyUartPlugOut
* DESCRIPTION
*    This function is used to send UART_PLUGOUT_IND to application to notify
*    that virtual port is closed.
*
* PARAMETERS
*  IN       port
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_notifyUartPlugOut( UART_PORT port )
{
    uart_plugout_ind_struct * uart_plugout_ind_ptr = 
        (uart_plugout_ind_struct *) construct_local_para( 
        sizeof(uart_plugout_ind_struct), TD_RESET);
    module_type owner = kal_get_active_module_id();
    uart_plugout_ind_ptr->port = port;

    msg_send5( owner, owner, DRIVER_PS_SAP, 
        MSG_ID_UART_PLUGOUT_IND, (local_para_struct*) uart_plugout_ind_ptr);
    
} /* end of cmux_notifyUartPlugOut() */

/******************************************************************************/

/*******************************************************************************
* FUNCTION
*    CPort_Open
* DESCRIPTION
*    This function is used to open virtual ports.
*
* PARAMETERS
*    IN     port
*    IN     owner
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_bool CPort_Open(UART_PORT port, module_type owner)
{
    kal_trace( TRC_INFO, CMUX_VP_CPORT_OPEN, port, owner );
    
    if ( port <= CMUX_VP_START_PORT || port > end_of_virtual_port )
    {
    	  CMUX_ASSERT(0);
    	  return KAL_FALSE;
    }
    else
    {
        if ( cmux_ptr->state != CMUX_ACTIVE )
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return KAL_FALSE;
        }
        
        if (cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)].owner == MOD_NIL)
        {
            return KAL_FALSE;
        }
        else
        {
            cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)].owner = owner;
            return KAL_TRUE;                
        }
    }
} /* end of CPort_Open() */

/*******************************************************************************
* FUNCTION
*    CPort_Close
* DESCRIPTION
*    This function is used to close virtual ports.
*
* PARAMETERS
*    IN     port
*    IN     ownerid
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void CPort_Close(UART_PORT port, module_type ownerid)
{
    kal_trace(TRC_INFO, CMUX_VP_CPORT_CLOSE, port, ownerid);

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {       
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
            return;
        }
        if (port <= end_of_virtual_port)
        {
            // virtual port
            cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)].owner = MOD_NIL;
        }
    }    
} /* end of CPort_Close() */

/*******************************************************************************
* FUNCTION
*    CPort_GetBytes
* DESCRIPTION
*    get data from ring buffer
*
* PARAMETERS
*   IN      port
*   OUT     *Buffaddr
*   IN      Length
*   OUT     *status
*   IN      ownerid
*  
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
kal_uint16 CPort_GetBytes(UART_PORT port, kal_uint8 *buffaddr, kal_uint16 length, 
    kal_uint8 *status, module_type ownerid)
{
    kal_trace(TRC_VP, CMUX_VP_CPORT_GETBYTES, port, ownerid);

    if ( port <= CMUX_VP_START_PORT || port > end_of_virtual_port )
    {
    	  CMUX_ASSERT(0);
    	  return 0;
    }
    else
    {
        kal_uint16 u2DataRead;
        CmuxDlcT * dlc;

        if ( cmux_ptr->state != CMUX_ACTIVE )
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
      	    return 0;
        }

        /* Get DLC contexts by port number */        
        dlc =& cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        cmux_notifyUartPlugOut(CMUX_PORTID(dlc));
	        dlc->owner = MOD_NIL;	 
	        return 0;
	    }
	 
        //CMUX_ASSERT( dlc->owner == ownerid );
        if ( ownerid != dlc->owner ) return 0;

        // ok get byte here
        u2DataRead = cmux_getBufferDataAvail(& dlc->rxBuffer);
        if (u2DataRead >= length)
        {
            u2DataRead = length;
        }
        else
        {
            dlc->fNotifyReadyToRead = KAL_TRUE;

            // Resolve a race condition
#ifdef __ANDROID_RIL_SUPPORT__
            u2DataRead = cmux_getBufferDataAvail( &dlc->rxBuffer );
            
            if ( u2DataRead >= length )
            {
				u2DataRead = length;
                dlc->fNotifyReadyToRead = KAL_FALSE;
            }
#endif
        }
        
        if (u2DataRead > 0)
        {
            /* This will update global pRead */
            cmux_readBuffer(& dlc->rxBuffer,buffaddr,u2DataRead);
        }
        else
        {
            kal_trace(TRC_VP, CMUX_VP_CPORT_GETBYTES_EMPTY, port, ownerid);
        }
#if 0        
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
#endif /* 0 */
        if (dlc->fLocalBusy == KAL_TRUE
           && (cmux_getBufferDataAvail(&dlc->rxBuffer) <= dlc->lowThreshold))
        {
            // Notify CMUX about resumption of receiving
            cmux_notifyBufferAvailable(dlc->owner,port);
        }

        kal_trace( TRC_VP, CMUX_VP_CPORT_GETBYTES_RETURN, u2DataRead);        
        return u2DataRead;
    }
} /* end of CPort_GetBytes() */

/*******************************************************************************
* FUNCTION
*    CPort_PutBytes
* DESCRIPTION
*  put data to Tx ring buffer    
*
* PARAMETERS
*  IN       port
*  IN       *Buffaddr
*  IN       Length
*  IN       ownerid
*  
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
kal_uint16 CPort_PutBytes(UART_PORT port, kal_uint8 *buffaddr, kal_uint16 length, 
    module_type ownerid)
{
    kal_trace(TRC_VP,CMUX_VP_CPORT_PUTBYTES,port,ownerid);

    if ( port <= CMUX_VP_START_PORT || port > end_of_virtual_port )
    {
    	  CMUX_ASSERT(0);
    	  return 0;
    }
    else
    {
        kal_bool fSignalDataAvail = KAL_FALSE;
        kal_uint16 u2WriteLength;
        CmuxDlcT * dlc ;

        /* Use this to judge if fSignalDataAvail is true after context switched by CMUX */
	    kal_uint8* pPreWrite = NULL; 
        
        //if ( cmux_ptr->port == uart_port_null )
        if ( cmux_ptr->state != CMUX_ACTIVE )
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
            return 0;
        }

        /* Get DLC contexts by port number */
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        cmux_notifyUartPlugOut(CMUX_PORTID(dlc));
	        dlc->owner = MOD_NIL;	 
	        return 0;
	    }

        if( dlc->owner != ownerid ) return 0;
        //CMUX_ASSERT( dlc->owner == ownerid );
        
        
        // ok get byte here             
        if (cmux_isBufferEmpty(& dlc->txBuffer))
        {
            fSignalDataAvail = KAL_TRUE;
            /* Note: don't send message here, or if CMUX task has higher
	         *  priority, it will be awaken here, when data is not yet copied
	         */            
        }
	    else
	    {
            /* Save write poniter before write */
            pPreWrite = dlc->txBuffer.pWrite; 
	    }
	 
        u2WriteLength = cmux_getBufferSpaceAvail(& dlc->txBuffer);        
        if (u2WriteLength >= length)
        {
            u2WriteLength = length;
        }
        else 
        {
            /****************************************************************** 
                   * mtk00732 update dlc->fNotifyReadyToWrite before cmux_writeBuffer
                   * (update pWrite)to avoid race condition in priority CMUX > APP
                   ******************************************************************/
            dlc->fNotifyReadyToWrite= KAL_TRUE;
            
            kal_trace( TRC_VP, CMUX_VP_CPORT_PUTBYTES_FULL);
        }

//====> context switch check point A (pRead might be updated)

        cmux_writeBuffer(& dlc->txBuffer, buffaddr,u2WriteLength);

//====> context switch check point B (pWrite was updated befor pRead updated)

        /*  fSingalDataAvail: Tx buffer is empty before put bytes
              *  pRead == pWrite: Tx buffer is empty before cmux_writeBuffer updated
              *                   pWrite. 
              *  if context switch after cmux_writeBuffer, the ring buffer shall be 
              *  exactly empty that we need not to send data ready to CMUX 
              */
        if ((fSignalDataAvail) || (dlc->txBuffer.pRead == pPreWrite))
        {
            cmux_notifyDataAvailable(dlc->owner,port);
        }

        kal_trace( TRC_VP, CMUX_VP_CPORT_PUTBYTES_RETURN, u2WriteLength);        
        return u2WriteLength;       
    }
} /* end of CPort_PutBytes() */
    
/*******************************************************************************
* FUNCTION
*    CPort_GetBytesAvail
* DESCRIPTION
*   return the data size in ring buffer       
*
* PARAMETERS
*   IN      port
*  
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*  None
*******************************************************************************/
kal_uint16 CPort_GetBytesAvail(UART_PORT port)
{
    kal_trace(TRC_VP, CMUX_VP_CPORT_GETBYTESAVAIL,port);
    
    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    	  return 0;
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
            return 0;
        }
        //CMUX_ASSERT(port < end_of_virtual_port);
        if (port > end_of_virtual_port)
        {
            return 0;
        }
        
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    if (DLC_ACTIVE != dlc->state)
	    {
	        return 0;
	    }
	    else	
	    {
            // ok get byte here
            return cmux_getBufferDataAvail(& dlc->rxBuffer);
        }
    }

} /* end of CPort_GetBytesAvail() */

/*******************************************************************************
* FUNCTION
*    CPort_GetTxRoomLeft
* DESCRIPTION
*    get the space available in ring buffer    
*
* PARAMETERS
*   IN      port    
*  
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*  None
*******************************************************************************/
kal_uint16 CPort_GetTxRoomLeft(UART_PORT port)
{

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    	  return 0;
    }
    else
    {
        CmuxDlcT * dlc;
        //CMUX_ASSERT(port < end_of_virtual_port);
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
     	    return 0;
        }        
        if(port > end_of_virtual_port)
        {
            return 0;
        }
        
        dlc =& cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        return 0;
	    }
        else
        {
            // ok get byte here
            return cmux_getBufferSpaceAvail(& dlc->txBuffer);
        }
    }

} /* end of CPort_GetTxRoomLeft() */

/*******************************************************************************
* FUNCTION
*    CPort_SetOwner
* DESCRIPTION
*    set VP owner
*
* PARAMETERS
*   IN      port
*   IN      owner
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void CPort_SetOwner(UART_PORT port, module_type owner)
{
    kal_trace( TRC_INFO, CMUX_VP_CPORT_SETOWNER, port, owner);

    if ( port < CMUX_VP_START_PORT ) 
	{
		CMUX_ASSERT(0);
    }
	else
    {
        CmuxDlcT * dlc;
        
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return;
        }
		
        if (port > end_of_virtual_port) return;

        dlc =& cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        cmux_notifyUartPlugOut(CMUX_PORTID(dlc));
	        dlc->owner = MOD_NIL;	 
	    }
	    else 
		{
            // MAUI_01633622, 20090220, mtk02285 ~
            if ( CMUX_NDIS_CHANNEL == cmux_get_channel_def(CMUX_MAP_VP2ID(port)) )
            {
				//__HSPA_DATA_PATH_OPT__
				CMUX_ASSERT(0);
            }
            else
            {
                dlc->owner = owner; //20090506, mtk02285
            }
            // ~ MAUI_01633622, 20090220, mtk02285
        }
    }
} /* end of CPort_SetOwner() */

/*******************************************************************************
* FUNCTION
*    CPort_SetFlowCtrl
* DESCRIPTION
*    set flow control status
*
* PARAMETERS
*   IN      port
*   IN      XON
*   IN      ownerid
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void CPort_SetFlowCtrl(UART_PORT port, kal_bool XON, module_type ownerid)
{
    if (cmux_ptr->port == uart_port_null)
    {
        // UART_SetFlowCtrl(port,XON, ownerid);
        CMUX_ASSERT(0);
    }
    else if (port < CMUX_VP_START_PORT)
    {
    	CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return;
        }
    
        CMUX_ASSERT(port <= end_of_virtual_port);
        dlc =& cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        return;
	    }
		
        if (XON == KAL_FALSE)
        {
#ifdef __CMUX_MODEM_STATUS_SUPPORT__
            if (dlc->fLocalBusy == KAL_FALSE)
            {
            dlc->fLocalBusy = KAL_TRUE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }
#else
            dlc->fLocalBusy = KAL_TRUE;
#endif
        }
        else
        {
#ifdef __CMUX_MODEM_STATUS_SUPPORT__
            if (dlc->fLocalBusy == KAL_TRUE)
            {
              dlc->fLocalBusy = KAL_FALSE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }
#else        
            dlc->fLocalBusy = KAL_FALSE;
#endif
        }
        // If there is no data to send, notify DLC scheduler
        if (cmux_isBufferEmpty(& dlc->txBuffer))
        {
            // Notify CMUX Task
            cmux_notifyDataAvailable(dlc->owner,port);
        }
    }

} /* end of CPort_SetFlowCtrl() */

#ifdef __CMUX_MODEM_STATUS_SUPPORT__
/*************************************************************************
* FUNCTION
*  CPort_CtrlRI
*
* DESCRIPTION
*  To control the RI line status
*
* PARAMETERS
*  port    -   no use
*  owner   -   no use
*  func    -   no use
*
* RETURNS
*  none
*
*************************************************************************/
void CPort_CtrlRI (UART_PORT port, IO_level SRI, module_type ownerid)
{
    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return;
        }        
		
        CMUX_ASSERT(port <= end_of_virtual_port);
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];
#ifdef __CENTRAL_STATUS_TO_URC_CHANNEL__
        dlc = cmux_findFirstUrcChannel();
        if (dlc == NULL)
        {
            return;
        }
#endif        
	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        return;
	    }
        
        //kal_prompt_trace(MOD_CMUX, "CPort_CtrlRI(), port=%d, RI=%d", port, (kal_uint8)SRI);	 
        if (SRI == io_low)
        {
            if (dlc->fSignalRi == KAL_TRUE)
            {
                dlc->fSignalRi = KAL_FALSE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }
        }
        else
        {
            if (dlc->fSignalRi == KAL_FALSE)
            {        
                dlc->fSignalRi = KAL_TRUE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }                
        }
        // If there is no data to send, notify DLC scheduler
        if (cmux_isBufferEmpty(& dlc->txBuffer))
        {
            // Notify CMUX Task
            cmux_notifyDataAvailable(dlc->owner,port);
        }
    }   
    return;
}
#endif //__CMUX_MODEM_STATUS_SUPPORT__

/*******************************************************************************
* FUNCTION
*    CPort_CtrlDCD
* DESCRIPTION
*   set Ctrl DCD status
*
* PARAMETERS
*   IN      port
*   IN      SDCD
*   IN      ownerid
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void CPort_CtrlDCD(UART_PORT port, IO_level SDCD, module_type ownerid)
{

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return;
        }        
        CMUX_ASSERT(port <= end_of_virtual_port);
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];
#ifdef __CENTRAL_STATUS_TO_URC_CHANNEL__
        dlc = cmux_findFirstUrcChannel();
        if (dlc == NULL)
        {
            return;
        }
#endif

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        return;
	    }
        //kal_prompt_trace(MOD_CMUX, "CPort_CtrlDCD(), port=%d, DCD=%d", port, (kal_uint8)SDCD);	 
        if (SDCD == io_low)
        {
#ifdef __CMUX_MODEM_STATUS_SUPPORT__
            if (dlc->fSignalDcd == KAL_TRUE)
            {
                dlc->fSignalDcd = KAL_FALSE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }
#else       
            dlc->fSignalDcd= KAL_FALSE;
#endif
        }
        else
        {
#ifdef __CMUX_MODEM_STATUS_SUPPORT__
            if (dlc->fSignalDcd == KAL_FALSE)
            {
              dlc->fSignalDcd = KAL_TRUE;
                cmux_sendDlcMscStatus(dlc->pn_dlci);
            }
#else               
            dlc->fSignalDcd = KAL_TRUE;
#endif
        }
        // If there is no data to send, notify DLC scheduler
        if (cmux_isBufferEmpty(& dlc->txBuffer))
        {
            // Notify CMUX Task
            cmux_notifyDataAvailable(dlc->owner,port);
        }
    }

} /* end of CPort_CtrlDCD() */

/*******************************************************************************
* FUNCTION
*    CPort_CtrlBreak
* DESCRIPTION
*    set CtrlBreak flag
*
* PARAMETERS
*   IN      port
*   IN      SBREAK
*   IN      ownerid
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void CPort_CtrlBreak(UART_PORT port, IO_level SBREAK, module_type ownerid)
{

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
      	    return;
        }        
        dlc =& cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        return;
	    }
		
        if (SBREAK == io_low)
        {
            dlc->fSignalBreak=KAL_FALSE;
        }
        else
        {
            dlc->fSignalBreak = KAL_TRUE;
        }
        // If there is no data to send, notify DLC scheduler
        if (cmux_isBufferEmpty(& dlc->txBuffer))
        {
            // Notify CMUX Task
            cmux_notifyDataAvailable(dlc->owner,port);
        }
    }
} /* end of CPort_CtrlBreak() */

/*******************************************************************************
* FUNCTION
*    CPort_GetOwnerID
* DESCRIPTION
*   get owner id of cmux dlcs
*
* PARAMETERS
*  IN       port
*  
* RETURNS
*  module_type
* GLOBALS AFFECTED
*   None
*******************************************************************************/
module_type CPort_GetOwnerID(UART_PORT port)
{
    kal_trace( TRC_VP, CMUX_VP_CPORT_GETOWNERID, port);

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    	  return MOD_NIL;
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return MOD_NIL;
        }
        
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

	    /* If CMUX is closing down, we show notifiy the owner */
	    if (DLC_ACTIVE != dlc->state)
	    {
	        cmux_notifyUartPlugOut(CMUX_PORTID(dlc));
	        dlc->owner = MOD_NIL;	 
	    }

        return dlc->owner;
    }
} /* end of CPort_GetOwnerID() */

/*******************************************************************************
* FUNCTION
*    CPort_ClrRxBuffer
* DESCRIPTION
*    clear Rx ring buffer
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void CPort_ClrRxBuffer(UART_PORT port, module_type ownerid)
{
    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
            return;
        }
        
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];
        // clear all Rx buffer in activation state
	    if (DLC_ACTIVE == dlc->state)
	    {
            cmux_clearBuffer(& dlc->rxBuffer);
            dlc->fNotifyReadyToRead = KAL_TRUE;

		    if (dlc->fLocalBusy == KAL_TRUE
              && (cmux_getBufferDataAvail(&dlc->rxBuffer) <= dlc->lowThreshold))
            {
                // Notify CMUX about resumption of receiving
                cmux_notifyBufferAvailable(dlc->owner,port);
            }
        }
    }

} /* end of CPort_ClrRxBuffer() */

/*******************************************************************************
* FUNCTION
*    CPort_ClrTxBuffer
* DESCRIPTION
*    clear Tx ring buffer
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void CPort_ClrTxBuffer(UART_PORT port, module_type ownerid)
{

    if (port < CMUX_VP_START_PORT)
    {
    	  CMUX_ASSERT(0);
    }
    else
    {
        CmuxDlcT * dlc;
        //CMUX_ASSERT(port < end_of_virtual_port);
        if (cmux_ptr->port == uart_port_null)
        {
            kal_trace( TRC_WARNING, CMUX_VP_CPORT_INVOKED_WHEN_CMUX_OFF, port, 
                kal_get_active_module_id());
        	return;
        }                
        if (port > end_of_virtual_port)
        {
            return;
        }
        
        dlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(port)];

		// Clear Tx buffer
        if (DLC_ACTIVE == dlc->state)
        {
            cmux_clearBuffer( &dlc->txBuffer);
			kal_trace( TRC_VP, CMUX_VP_CPORT_CLRTXBUFFER_OK );           
        }
    }

} /* end of CPort_ClrTxBuffer() */

/*******************************************************************************
* FUNCTION
*   CmuxUart_Handler
* DESCRIPTION
*   Call back function of cmux uart interface
*    
* PARAMETERS
*   IN          DCL_DEV
*   IN          DCL_CTRL_CMD
*   IN /OUT  DCL_CTRL_DATA_T *
* RETURNS
*   DCL_STATUS
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static DCL_STATUS CmuxUart_Handler( DCL_DEV dev, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data )
{
    kal_bool return_flag = KAL_FALSE;
	
	switch (cmd)
	{		
		case SIO_CMD_OPEN:
    		{
    			UART_CTRL_OPEN_T* prCtrlOpen = &(data->rUARTCtrlOPEN);
    			return_flag = CPort_Open(dev, (module_type)prCtrlOpen->u4OwenrId);
    			if(return_flag == KAL_FALSE) return STATUS_FAIL;
    		}
    		break;
			
		case SIO_CMD_CLOSE:
			{
				UART_CTRL_CLOSE_T* prCtrlClose =&(data->rUARTCtrlCLOSE);
				CPort_Close(dev, (module_type)prCtrlClose->u4OwenrId);
			}
			break;
			
		case SIO_CMD_GET_BYTES:
			{
				UART_CTRL_GET_BYTES_T* prCtrlGetBytes = &(data->rUARTCtrlGETBYTES);
			    prCtrlGetBytes->u2RetSize = CPort_GetBytes( dev, 
                    prCtrlGetBytes->puBuffaddr, prCtrlGetBytes->u2Length,
                    prCtrlGetBytes->pustatus, (module_type)prCtrlGetBytes->u4OwenrId);
			}
			break;
			
		case SIO_CMD_PUT_BYTES:
			{
				UART_CTRL_PUT_BYTES_T* prCtrlPutBytes = &(data->rUARTCtrlPUTBYTES);
                prCtrlPutBytes->u2RetSize = CPort_PutBytes( dev, 
                    prCtrlPutBytes->puBuffaddr, prCtrlPutBytes->u2Length,
                    (module_type)prCtrlPutBytes->u4OwenrId);
			}
			break;
			
		case SIO_CMD_GET_RX_AVAIL:
			{
				UART_CTRL_RX_AVAIL_T* prCtrlRXAvail = &(data->rUARTCtrlRXAVAIL);
                prCtrlRXAvail->u2RetSize = CPort_GetBytesAvail(dev);
			}
			break;
			
		case SIO_CMD_GET_TX_AVAIL:
			{
				UART_CTRL_TX_AVAIL_T* prCtrlTXAvail = &(data->rUARTCtrlTXAVAIL);
                prCtrlTXAvail->u2RetSize = CPort_GetTxRoomLeft(dev);
			}
			break;		
			
		case SIO_CMD_SET_OWNER:
			{
				 UART_CTRL_OWNER_T* prCtrlOwner = &(data->rUARTCtrlOWNER);
                 CPort_SetOwner(dev, (module_type)prCtrlOwner->u4OwenrId);
			}
			break;
			
		case SIO_CMD_SET_FLOW_CTRL:
			{
				UART_CTRL_FLOW_CTRL_T* prCtrlFlowCtrl = &(data->rUARTCtrlFLOWCTRL);
                CPort_SetFlowCtrl(dev, (kal_bool)prCtrlFlowCtrl->bXON, 
                    (module_type)prCtrlFlowCtrl->u4OwenrId);
			}
			break;
							
		case SIO_CMD_CTRL_DCD:
			{
				 UART_CTRL_DCD_T* prCtrlDCD = &(data->rUARTCtrlDCD);
                 CPort_CtrlDCD(dev, (IO_level)prCtrlDCD->rIOLevelDCD, 
                    (module_type)prCtrlDCD->u4OwenrId);
			}
			break;
			
		case SIO_CMD_CTRL_BREAK:
			{
				UART_CTRL_BREAK_T* prCtrlBreak = &(data->rUARTCtrlBREAK);
				CPort_CtrlBreak(dev, (IO_level)prCtrlBreak->rIOLevelBRK, 
                    (module_type)prCtrlBreak->u4OwenrId);
			}
			break;
			
		case SIO_CMD_CLR_RX_BUF:
			{
				UART_CTRL_CLR_BUFFER_T* prCtrlClrBuffer = &(data->rUARTCtrlCLRBUFFER);
                CPort_ClrRxBuffer(dev, (module_type)prCtrlClrBuffer->u4OwenrId);
			}
			break;
			
		case SIO_CMD_CLR_TX_BUF:
			{
				UART_CTRL_CLR_BUFFER_T* prCtrlClrBuffer = &(data->rUARTCtrlCLRBUFFER);
				CPort_ClrTxBuffer(dev, (module_type)prCtrlClrBuffer->u4OwenrId);
			}
			break;			
			
		case SIO_CMD_GET_OWNER_ID:
			{
				UART_CTRL_OWNER_T* prCtrlOwner = &(data->rUARTCtrlOWNER);				 
				prCtrlOwner->u4OwenrId = CPort_GetOwnerID(dev);
			}
			break;					

#ifdef __CMUX_MODEM_STATUS_SUPPORT__			
		case SIO_CMD_CTRL_RI:
			{
			    UART_CTRL_RI_T* prCtrlRI = &(data->rUARTCtrlRI);
                CPort_CtrlRI(dev, (IO_level)prCtrlRI->rIOLevelSRI, 
                    (module_type)prCtrlRI->u4OwenrId);
			}
			break;
#endif /* __CMUX_MODEM_STATUS_SUPPORT__ */

		default:
			return STATUS_INVALID_CMD;
		}

	return STATUS_OK;
}

/******************************************************************************/

