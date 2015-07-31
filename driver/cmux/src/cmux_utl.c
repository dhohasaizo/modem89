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
 *   cmux_utl.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   For utility functions used for CMUX.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "cmux_utl.h"

#include "cmux_def.h"
#include "cmux_vp_num.h"
#include "cmux_cus.h"
#include "cmux_lib.h"
#include "cmux_trc.h"
#include "cmux_struct.h"
#include "cmux_prot.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"
#include "lcd_lqueue.h"

#include "drv_sap.h"
#include "md_drv_sap.h"
#include "drv_msgid.h"
#include "cmux_msgid.h"

/*******************************************************************************
*
*   Functions for processing DLC
*
*******************************************************************************/

/*******************************************************************************
* FUNCTION
*  cmux_findDlcByDlciState
* DESCRIPTION
*  find DLC structure bease on DLCI and STATE.
*
* PARAMETERS
*   IN      dlci
*   IN      state
* RETURNS
*   CmuxDlcT*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
CmuxDlcT* cmux_findDlcByDlciState(kal_uint32 dlci,CmuxDlcStateE state)
{
    CmuxDlcT * dlc = cmux_findDlcByDlci( dlci );
	
	if ( dlc == NULL ) return NULL;
	else return ( dlc->state == state )? dlc : NULL;
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
#endif        
} /* end of cmux_findDlcByDlciState() */

/*******************************************************************************
* FUNCTION
*  cmux_findFreeDlc
* DESCRIPTION
*  find a free DLC slot
*
* PARAMETERS
*   void
*  
* RETURNS
*   CmuxDlcT*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
CmuxDlcT* cmux_findFreeDlc(void)
{
    kal_uint32 i;
    for ( i = 0; i < CMUX_CHANNEL_NUM; i++ )
    {	
       if ( cmux_ptr->dlcs[i].state == DLC_INACTIVE )
       {
            return & (cmux_ptr->dlcs[i]);
       }
    }
    return NULL;
} /* end of cmux_findFreeDlc() */

/*******************************************************************************
* FUNCTION
*  cmux_findSuitableDlc
* DESCRIPTION
*  find a suitable DLC slot
*
* PARAMETERS
*   void
*  
* RETURNS
*   CmuxDlcT*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
CmuxDlcT* cmux_locateSuitableDlc( kal_uint32 dlci )
{
    kal_uint32 i;
    CmuxDlcT* dlc;

    // if PrePn is turned on in custom file, find the slot by setting in custom file
    if ( cmux_custom_isPrePn() == KAL_TRUE )
    {
        for ( i = 1; i <= CMUX_DLC_NUM ; i++ )
        {         
            if ( dlci == cmux_custom_getChannelDlci(i) ) 
            {
                dlc = &(cmux_ptr->dlcs[i]);
                if ( dlc->state == DLC_INACTIVE ) return dlc;
                else return NULL;
            }
        }

        // find free slot in channel list
        for ( i = 1; i <= CMUX_DLC_NUM ; i++ )
        {
            dlc = &(cmux_ptr->dlcs[i]);
            
            if ( ( dlc->state == DLC_INACTIVE) &&
                 ( cmux_custom_getChannelDlci(i) == 0 ) )
            {
                return dlc;
            }
        }
    }
    else
    {
        // find free slot in channel list
        for ( i = 1; i <= CMUX_DLC_NUM ; i++ )
        {   
           dlc = &(cmux_ptr->dlcs[i]);           
           if ( dlc->state == DLC_INACTIVE )
           {
                return dlc;
           }
        }
    }
    
    return NULL;
} /* end of cmux_findFreeDlc() */

/*******************************************************************************
* FUNCTION
*  cmux_findDlcByDlci
* DESCRIPTION
*  find a DLC slot by dlci
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*   CmuxDlcT*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
CmuxDlcT* cmux_findDlcByDlci(kal_uint8 dlci)
{
    kal_uint32 i;
    for (i = 0; i < CMUX_CHANNEL_NUM; i++)
    {
    	if ( cmux_ptr->dlcs[i].pn_dlci == dlci )
        {   
		    return & (cmux_ptr->dlcs[i]);        
        }
    }
	return NULL;
 }/* end of cmux_findDlcByDlci() */

/*******************************************************************************
* FUNCTION
*  cmux_initializeDlc
* DESCRIPTION
*  initialize DLC structure
*
* PARAMETERS
*  IN       *pDlc
*  IN       dlci
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_initializeDlc( CmuxDlcT* pDlc, kal_uint32 dlci )
{
	kal_uint8 id = CMUX_MAP_PDLC2ID(pDlc);

	// Set default owner. Send dlc_connect_ind to owner after SABM
    pDlc->owner = cmux_custom_getChannelOwner(id);

#ifdef __CMUX_UT__
    if ( pDlc->owner == MOD_VT )
    {
        pDlc->owner = MOD_TST_READER;
    }
    else if ( pDlc->owner == MOD_MED )
    {
        pDlc->owner = MOD_TST_READER;
    }
#endif    
  
    if ( cmux_custom_isPrePn() == KAL_TRUE )
    {
        pDlc->pn_cltype = ( CmuxClTypeE ) cmux_custom_getChannelClType(id);
        pDlc->pn_priority = cmux_custom_getChannelPriority(id);
        pDlc->pn_n1 = cmux_custom_getChannelN1(id);
    }
    else
    {
    	pDlc->pn_cltype = ( CmuxClTypeE ) cmux_custom_getChannelClType(id);
    	pDlc->pn_priority = cmux_lookupPriority(dlci);
    	pDlc->pn_n1 = CMUX_DEFAULT_N1;
    }

    //  set dlc parameters 
    pDlc->pn_dlci = dlci;
    
    // Initialize secheduling variable		
    pDlc->u1AssignedPriority = CMUX_SUSPEND_PRIORITY;
	
	// Initialize flags
	pDlc->fPeerBusy = KAL_FALSE;
	pDlc->fLocalBusy = KAL_FALSE;
	pDlc->fSignalDcd = KAL_FALSE;
	pDlc->fSignalRi = KAL_FALSE;
	pDlc->fSignalBreak = KAL_FALSE;

	pDlc->fNotifyReadyToRead = KAL_TRUE;
	pDlc->fNotifyReadyToWrite = KAL_FALSE;

	// Initialize statistic variables
    pDlc->maxRxBufferUsage = 0;

	// CMUX_CL4 is not support anymore
	CMUX_ASSERT(pDlc->pn_cltype != CMUX_CL4);

#ifdef __CMUX_TEST2__
    pDlc->testOption = 0;
#endif
	
	return;
} /* end of cmux_initializeDlc() */

/*******************************************************************************
* FUNCTION
*  cmux_allocateBufferSpace
* DESCRIPTION
*  allocate space for DLC buffer
*
* PARAMETERS
*   IN      *pDlc   
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_allocateBufferSpace( CmuxDlcT* pDlc )
{
    /* how do we decide the buffer size of the DLC ?*/
    kal_uint32 size;
    kal_uint8* pMem;
    kal_uint32 lowThreshold = 0, highThreshold = 0;

    kal_uint8 id = (kal_uint8) (pDlc - cmux_ptr->dlcs);

    CMUX_UT_LOGT("INFO", "Allocate buffer of CL1/CL2 channel\n");

    pMem=cmux_getDlcTxBuffer(id, & size);
    cmux_initBuffer(& pDlc->txBuffer,pMem,size);
	
    pMem=cmux_getDlcRxBuffer(id, & size, &lowThreshold, &highThreshold);
    cmux_initBuffer(& pDlc->rxBuffer,pMem,size);

	pDlc->highThreshold = highThreshold;
	pDlc->lowThreshold = lowThreshold;

} /* end of cmux_allocateBufferSpace() */

/*******************************************************************************
* FUNCTION
*  cmux_releaseDlc
* DESCRIPTION
*  release DLC structuer and the buffer space
*
* PARAMETERS
*   IN      *pDlc   
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_releaseDlc(CmuxDlcT* pDlc)
{
    pDlc->state = DLC_PARNEG;

    cmux_initBuffer(& pDlc->txBuffer,NULL,0);
    cmux_initBuffer(& pDlc->rxBuffer,NULL,0);
    
} /* end of cmux_releaseDlc() */

/*******************************************************************************
* FUNCTION
*  cmux_reset_dlcs
* DESCRIPTION
*   reset dlc state and assign port id
*
* PARAMETERS
*   void
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of CmuxDlcT
*******************************************************************************/
void cmux_reset_dlcs(void)
{
    kal_uint32 i;

   for (i=0; i < CMUX_CHANNEL_NUM; i++)
   {
        cmux_ptr->dlcs[i].state = DLC_INACTIVE;
        cmux_ptr->dlcs[i].portid = ( UART_PORT ) CMUX_MAP_ID2VP(i);
   }
} /* end of cmux_reset_dlcs() */

/*******************************************************************************
*
*   Functions for Scheduler to schedule write of DLC
*
*******************************************************************************/

/*******************************************************************************
* FUNCTION
*  cmux_schedulerDlcReady
* DESCRIPTION
*  put the DLC into ready state.
*
* PARAMETERS
*   IN      *pDlc       
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_schedulerDlcReady(CmuxDlcT* pDlc)
{
    pDlc->u1AssignedPriority = pDlc->pn_priority;
	
	kal_brief_trace( TRC_MUX, CMUX_SCHEDULER_ASSIGN_DLCI, 
		pDlc->pn_dlci, pDlc->u1AssignedPriority);

	return;
} /* end of cmux_schedulerDlcReady() */

/*******************************************************************************
* FUNCTION
*  cmux_schedulerIsDlcReady
* DESCRIPTION
*   Check if DLC is ready state
*
* PARAMETERS
*   IN      *pDlc
*  
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_bool cmux_schedulerIsDlcReady(CmuxDlcT* pDlc)
{
    if (pDlc->u1AssignedPriority == CMUX_SUSPEND_PRIORITY)
    {
        return KAL_FALSE;
    }
    else
    {
        return KAL_TRUE;
    }
} /* end of cmux_schedulerIsDlcReady() */


/*******************************************************************************
* FUNCTION
*  cmux_schedulerDlcSuspend
* DESCRIPTION
*   suspend the DLC for writing.
*
* PARAMETERS
*   IN      *pDlc
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_schedulerDlcSuspend(CmuxDlcT* pDlc)
{
    pDlc->u1AssignedPriority = CMUX_SUSPEND_PRIORITY;
	
	kal_brief_trace( TRC_MUX, CMUX_SCHEDULER_ASSIGN_DLCI, pDlc->pn_dlci, 
        pDlc->u1AssignedPriority);
    
	return;
} /* end of cmux_schedulerDlcSuspend() */
    

/*******************************************************************************
* FUNCTION
*  cmux_schedulerPickReadyDlc
* DESCRIPTION
*  pick up a ready DLC to write, based on the priority.
*
* PARAMETERS
*   void
*  
* RETURNS
*   CmuxDlcT*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
CmuxDlcT* cmux_schedulerPickReadyDlc(void)
{
    kal_uint32 i;
    CmuxDlcT* target = NULL;
    kal_uint32 priority = CMUX_SUSPEND_PRIORITY;
        
    for(i=0;i< CMUX_CHANNEL_NUM; i++)
    {
        if (cmux_ptr->dlcs[i].state == DLC_ACTIVE)
        {
            if (priority > cmux_ptr->dlcs[i].u1AssignedPriority)
            {
                priority =  cmux_ptr->dlcs[i].u1AssignedPriority;
                target = & cmux_ptr->dlcs[i];
            }
        }
    }
            
    return target;
} /* end of cmux_schedulerPickReadyDlc() */


/*******************************************************************************
* FUNCTION
*  cmux_lookupPriority
* DESCRIPTION
*  find out the default priority defined in the specification.
*
* PARAMETERS
*   IN      dlci
*  
* RETURNS
*   kal_uint32
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_uint32 cmux_lookupPriority(kal_uint32 dlci)
{
    /* base on table 27 */
    if (dlci ==0)  return 0;
    /* else */
    return (dlci / 8) +7;
} /* end of cmux_lookupPriority() */

/*******************************************************************************
*
*  Function for Messages
*
*******************************************************************************/
/*******************************************************************************
* FUNCTION
*    cmux_notifyReadyToWrite
* DESCRIPTION
*    send READY_TO_WRITE to virtual port owner
*
* PARAMETERS
*  IN   *pDlc
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_notifyReadyToWrite(CmuxDlcT* pDlc)
{
    uart_ready_to_write_ind_struct * local_para = 
        (uart_ready_to_write_ind_struct*) construct_local_para(
        sizeof(uart_ready_to_write_ind_struct), TD_RESET);
	local_para->port = pDlc->portid;

    msg_send5( CMUX_MOD_ID, pDlc->owner, DRIVER_PS_SAP, 
        MSG_ID_UART_READY_TO_WRITE_IND, (local_para_struct *) local_para );
} /* end of cmux_notifyReadyToWrite() */

/*******************************************************************************
* FUNCTION
*    cmux_notifyReadyToRead
* DESCRIPTION
*    send READY_TO_READ to virtual port owner
*
* PARAMETERS
*  IN   *pDlc
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_notifyReadyToRead(CmuxDlcT* pDlc)
{
	uart_ready_to_read_ind_struct* local_para = 
        (uart_ready_to_read_ind_struct *) construct_local_para (
        sizeof(uart_ready_to_read_ind_struct), TD_RESET);
	local_para->port = pDlc->portid;

    msg_send5( CMUX_MOD_ID, pDlc->owner, DRIVER_PS_SAP, 
        MSG_ID_UART_READY_TO_READ_IND, (local_para_struct *) local_para );
} /* end of cmux_notifyReadyToRead() */

/*******************************************************************************
* FUNCTION
*    cmux_sendDlcConnectInd
* DESCRIPTION
*    send MSG_ID_CMUX_DLC_CONNECT_IND to L4C to notify that VP is up
*
* PARAMETERS
*    IN     *pDlc
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_sendDlcConnectInd( CmuxDlcT* pDlc )
{  
	if ( pDlc->owner != MOD_NIL )
    {   
        cmux_dlc_connect_ind_struct * local_para = (cmux_dlc_connect_ind_struct *) 
			construct_local_para(sizeof(cmux_dlc_connect_ind_struct), TD_RESET);

        // Bring channel type in DLC connect indicate
        kal_uint8 id = CMUX_MAP_PDLC2ID(pDlc);
        local_para->type = cmux_get_channel_def(id);
            
        local_para->port = pDlc->portid;

        msg_send5( CMUX_MOD_ID, pDlc->owner, L4C_CMUX_SAP, 
            MSG_ID_CMUX_DLC_CONNECT_IND, (local_para_struct *) local_para );
	}
} /* end of cmux_sendDlcConnectInd() */

/*******************************************************************************
* FUNCTION
*    cmux_startTimer
* DESCRIPTION
*    start CMUX timer
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_startTimer(CmuxTimerIdE timerId,kal_uint32 value)
{
    kal_uint32 idx;
    idx = CMUX_CHOOSE_TIMER_CONTEXT(timerId);
    cmux_stack_start_timer( & cmux_ptr->timer[idx], (kal_uint16) timerId, value );
} /* end of cmux_startTimer() */

/*******************************************************************************
* FUNCTION
*    cmux_stopTimer
* DESCRIPTION
*    stop CMUX timer
*
* PARAMETERS
*   IN      timerId
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_stopTimer(CmuxTimerIdE timerId)
{
    kal_uint32 idx;
    idx = CMUX_CHOOSE_TIMER_CONTEXT(timerId);
    cmux_stack_stop_timer( & cmux_ptr->timer[idx] );
} /* end of cmux_stopTimer() */

/*******************************************************************************
* FUNCTION
*    cmux_writeToUart
* DESCRIPTION
*    send data to MOD_CMUXUH to write data to PHY uart
*
* PARAMETERS
*  void
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of CMUX
*******************************************************************************/
void cmux_writeToUart(peer_buff_struct* pPeer)
{
    if (cmux_ptr->fUartSendSuspend == KAL_FALSE) 
    {
        cmux_ptr->fUartSendSuspend = KAL_TRUE;

		kal_brief_trace(TRC_MUX, CMUX_MUX_FLAG_UART_SEND_SUSPEND, cmux_ptr->fUartSendSuspend);

        cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_DATA_REQ,NULL, pPeer);
    } 
    else 
    {
        kal_bool ret_val = lcd_lqueue_insert_at_rear(cmux_ptr->writeQueue, pPeer);

        kal_brief_trace( TRC_INFO, CMUX_SCHEDULER_LCD_QUEUE_INSERT_QUEUE );

		CMUX_ASSERT( ret_val == KAL_TRUE );
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    }
} /* end of cmux_writeToUart() */

/*******************************************************************************
* FUNCTION
*    cmux_activateUartHandler
* DESCRIPTION
*    activate MOD_CMUXUH to enable the PHY uart service
*
* PARAMETERS
*   IN      *local_para
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_activateUartHandler(local_para_struct *local_para)
{
    hold_local_para(local_para);
    cmux_sendMsgToUartHdlr(MSG_ID_CMUX_STARTUP_REQ,local_para,NULL);
} /* end of cmux_activateUartHandler() */


/*******************************************************************************
* FUNCTION
*    cmux_notifyCPortPlugout
* DESCRIPTION
*    send UART_PLUGOUT_IND to owner to indicate that VP is down
*
* PARAMETERS
*   IN      *pDlc
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of CmuxDlcT
*******************************************************************************/
void cmux_notifyCPortPlugout(CmuxDlcT* pDlc)
{
	if ( MOD_NIL == pDlc->owner )
	{
		kal_brief_trace(TRC_WARNING, CMUX_VP_NOTIFY_PLUGOUT_ERROR );
	}
	else
	{
		uart_plugout_ind_struct * local_para = (uart_plugout_ind_struct *) 
            construct_local_para( sizeof(uart_plugout_ind_struct), TD_RESET);

		local_para->port = CMUX_PORTID(pDlc);

        msg_send5( CMUX_MOD_ID, pDlc->owner, DRIVER_PS_SAP, 
            MSG_ID_UART_PLUGOUT_IND, (local_para_struct *) local_para );

        pDlc->owner = MOD_NIL;
	}
	return;
} /* end of cmux_notifyCPortPlugout() */

#ifdef __CMUX_TEST2__
/*******************************************************************************
*
*  Function for TEST MODE
*
*******************************************************************************/
/*******************************************************************************
* FUNCTION
*    cmux_test_echoData
* DESCRIPTION
*    echo data in DLC buffer
*
* PARAMETERS
*   IN	*pDlc
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_test_echoData( CmuxDlcT* pDlc )
{
    kal_uint32 rxbuf_usage = cmux_getBufferDataAvail(&pDlc->rxBuffer);
	kal_uint32 txbuf_space = cmux_getBufferSpaceAvail(&pDlc->txBuffer);

	CMUX_UT_LOGT("INFO","ECHO_DATA");

	cmux_readBuffer( &pDlc->rxBuffer, cmux_ptr->test_tmp_buf, (kal_uint16)rxbuf_usage);
	txbuf_space = (txbuf_space >= rxbuf_usage)? rxbuf_usage : txbuf_space;
	cmux_writeBuffer( &pDlc->txBuffer, cmux_ptr->test_tmp_buf, (kal_uint16)txbuf_space);

	cmux_schedulerDlcReady(pDlc);
}

/*******************************************************************************
* FUNCTION
*   cmux_test_dropData
* DESCRIPTION
*   echo data in DLC buffer
*
* PARAMETERS
*   IN	*pDlc
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_test_dropData( CmuxDlcT* pDlc )
{
    kal_uint32 rxbuf_usage = cmux_getBufferDataAvail(&pDlc->rxBuffer);

	CMUX_UT_LOGT("INFO","DROP_DATA");

	cmux_readBuffer( &pDlc->rxBuffer, cmux_ptr->test_tmp_buf, (kal_uint16)rxbuf_usage);
}

/*******************************************************************************
* FUNCTION
*   cmux_test_genData
* DESCRIPTION
*   generate data in DLC buffer
*
* PARAMETERS
*   IN *pDlc
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_test_genData( CmuxDlcT* pDlc )
{
	cmux_dlc_data_ready_req_struct * pLocal;

	CMUX_UT_LOGT("INFO","GEN_DATA");
	
	if (  pDlc->testGenRun > 0 ) 
	{	
		kal_mem_set( cmux_ptr->test_tmp_buf, 0xFF, pDlc->testGenSize );
		cmux_writeBuffer( &pDlc->txBuffer, cmux_ptr->test_tmp_buf, pDlc->testGenSize);

		pLocal = (cmux_dlc_data_ready_req_struct * )
			construct_local_para(sizeof( cmux_dlc_data_ready_req_struct),TD_RESET); 			
		pLocal->port = pDlc->portid;

        cmux_sendExtMsg(MSG_ID_CMUX_DLC_DATA_READY_REQ, CMUX_MOD_ID, CMUX_MOD_ID, CMUX_SAP, 
            (local_para_struct*)pLocal, NULL );

		(pDlc->testGenRun)--;
	}
    else 
	{
        CMUX_TEST_CLEAR( pDlc->testOption, CMUX_TEST_O_GEN ); 
    }   
}
#endif

/******************************************************************************/

