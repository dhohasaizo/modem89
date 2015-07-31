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
 *   cmux_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Message handlers of CMUX.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "cmux_hdlr.h"

#include "cmux_def.h"
#include "cmux_utl.h"
#include "cmux_vp_num.h"
#include "cmux_trc.h"
#include "cmux_struct.h"
#include "cmux_uh.h"
#include "cmux_prot.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"
#include "lcd_lqueue.h"
#include "kal_trace.h"
#include "dcl.h"
#include "tst_sap.h"
#include "md_drv_sap.h"
#include "cmux_msgid.h"

/******************************************************************************/

/*******************************************************************************
* FUNCTION
*  cmux_handleUartPlugoutInd
* DESCRIPTION
*   Handle MSG_ID_UART_PLUGOUT_IND. Basically it will trigger the close-down
*   procedure. However, it will not send any peer message, since the uart link
*   is already disconnected.
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_handleUartPlugoutInd( void )
{
    if ( cmux_ptr->state != CMUX_INACTIVE ) 
    {
        cmux_restoreTask();   
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
#endif    
    return;
} /* end of cmux_handleUartDataInd() */

/*******************************************************************************
* FUNCTION
*  cmux_handleTimerExpiry
* DESCRIPTION
*   Handle timer expiry message
*
* PARAMETERS
*   IN      *localPara
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_handleTimerExpiry (local_para_struct* localPara)
{
    stack_timer_struct *stack_timer_ptr = (stack_timer_struct*) localPara;
    kal_uint32 whichTimer = CMUX_CHOOSE_TIMER_CONTEXT(stack_timer_ptr->timer_indx);

    if (stack_is_time_out_valid(& cmux_ptr->timer[whichTimer]) == KAL_TRUE)
    {
        switch (stack_timer_ptr->timer_indx)
        {
            case CMUX_T1:
                cmux_handleT1Expiry();
                break;
            case CMUX_T2:
                cmux_handleT2Expiry();
                break;
            case CMUX_T3:
                cmux_handleT3Expiry();                
                break;
        }
    }

    stack_process_time_out(&cmux_ptr->timer[whichTimer]);
} /* end of cmux_handleTimerExpiry() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCmuxStartupReq
* DESCRIPTION
*   Handle Startup request messaeg
*
* PARAMETERS
*   IN      *localPara    
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
void cmux_handleCmuxStartupReq(local_para_struct* localPara)
{
    cmux_startup_req_struct *starupReq =(cmux_startup_req_struct *)localPara;
    
    // CMUX Context Initialization
    cmux_ptr->port =starupReq->port;
	cmux_ptr->state = CMUX_STARTUP;

	// RX
	cmux_ptr->readState  = CMUX_WAIT_FLAG;
    cmux_ptr->readingDlc = NULL;
    cmux_ptr->cchUIHPoll = 0;
    //cmux_ptr->CL4FrameDropping = KAL_FALSE; // MAUI_01633899, 20090220, mtk02285 (ndis)

	// TX
    cmux_ptr->fUartSendSuspend = KAL_FALSE;

    // try to read UART
    cmux_activateUartHandler(localPara);
} /* end of cmux_handleCmuxStartupReq() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCmuxCloseDownReq
* DESCRIPTION
*   Handle close down message
*
* PARAMETERS
*  none
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of cmux
*******************************************************************************/
void cmux_handleCmuxCloseDownReq(void)
{
#if 0 // test flc resume ~
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
#endif // ~ test flc resume

    // First, close all DLC
    // Then start CLD procedure
    // after UART finish send CLD response, Notify L4C
    cmux_ptr->state = CMUX_CLOSING;
    cmux_closeDownProcedure();
} /* end of cmux_handleCmuxCloseDownReq() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCmuxUartCloseDownCnf
* DESCRIPTION
*   Handle UART close down confirm message
*
* PARAMETERS
*   none
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
void cmux_handleCmuxUartCloseDownCnf(void)
{
    cmux_reset_dlcs();
    cmux_ptr->port = uart_port_null;
    cmux_ptr->state = CMUX_INACTIVE;

    msg_send4( CMUX_MOD_ID, MOD_ATCI, L4C_CMUX_SAP, MSG_ID_CMUX_CLOSE_DOWN_IND );
    
} /* end of cmux_handleCmuxUartCloseDownCnf() */

/*******************************************************************************
* FUNCTION
*  cmux_handleUartDataInd
* DESCRIPTION
*   Handle UART data indication message
*
* PARAMETERS
*   IN       *peer_buff
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_handleUartDataInd(peer_buff_struct* peer_buff)
{
    kal_uint16 u2Length;
    kal_uint8*  pPdu;

	// Decode frame structure
    pPdu = get_peer_buff_pdu(peer_buff,& u2Length);
    cmux_processUartData(pPdu, u2Length);

    // Maybe flow control condition of some DLC changes
    if ( cmux_ptr->fUartSendSuspend == KAL_FALSE ) cmux_scheduleWrite();

	cmux_sendMsgToUartHdlr(MSG_ID_CMUX_READY_TO_SEND_IND,NULL, NULL);
} /* end of cmux_handleUartDataInd() */

/*******************************************************************************
* FUNCTION
*  cmux_handleReadyToSendInd
* DESCRIPTION
*   Handle UART ready to send indication message
*
* PARAMETERS
*   None
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
void cmux_handleReadyToSendInd(void)
{   
    if (lcd_lqueue_is_empty(cmux_ptr->writeQueue))
    {
        cmux_ptr->fUartSendSuspend = KAL_FALSE;

        kal_brief_trace(TRC_MUX, CMUX_MUX_FLAG_UART_SEND_SUSPEND, cmux_ptr->fUartSendSuspend);

		cmux_scheduleWrite();
    }
    else
    {
        peer_buff_struct * pPeer= (peer_buff_struct *)
                lcd_lqueue_remove(cmux_ptr->writeQueue, NULL);

        kal_brief_trace(TRC_INFO, CMUX_SCHEDULER_LCD_QUEUE_REMOVE_QUEUE);

        cmux_sendMsgToUartHdlr(MSG_ID_CMUX_UART_DATA_REQ,NULL, pPeer);
    }
} /* end of cmux_handleReadyToSendInd() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCmuxDlcDataReadyReq
* DESCRIPTION
*  triggered by application that Tx ring buffer is ready to send
*
* PARAMETERS
*  IN       *localPtr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_handleCmuxDlcDataReadyReq( local_para_struct * localPtr )
{
    cmux_dlc_data_ready_req_struct * dataReady =
        (cmux_dlc_data_ready_req_struct *) localPtr;
    CmuxDlcT * pDlc;

    pDlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(dataReady->port)];

    if ( pDlc->fPeerBusy == KAL_FALSE )
    {
        cmux_schedulerDlcReady(pDlc);
    }
    else
    {
    	kal_brief_trace(TRC_DLC, CMUX_FC_PEER_IS_BUSY, pDlc->pn_dlci);
    }

    if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
    {
		CMUX_ASSERT(lcd_lqueue_is_empty(cmux_ptr->writeQueue) == KAL_TRUE);

        cmux_scheduleWrite();
    }
    else
    {
        kal_brief_trace( TRC_MUX, CMUX_MUX_UH_BUSY);
    }
} /* end of cmux_handleCmuxDlcDataReadyReq() */

/*******************************************************************************
* FUNCTION
*  cmux_handleCmuxDlcReadyToReceiveReq
* DESCRIPTION
*   triggered by application that Rx ring buffer space is available
*
* PARAMETERS
*   IN   *localPtr
*  
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_handleCmuxDlcReadyToReceiveReq(local_para_struct * localPtr)
{
    cmux_dlc_ready_to_receive_req_struct * spaceReady =
        (cmux_dlc_ready_to_receive_req_struct *) localPtr;
    CmuxDlcT * pDlc;  
    
    pDlc = & cmux_ptr->dlcs[CMUX_MAP_VP2ID(spaceReady->port)];

	pDlc->fLocalBusy = KAL_FALSE;

	// WM_DUN_FLC, MAUI_01679336, mtk02285, 20090430
	// Resume peer by MSC msg
    cmux_resumePeerDlc(pDlc->pn_dlci);
    
	// Send flow control message by uih frame for CL2 only
	if(pDlc->pn_cltype == CMUX_CL2)
	{	
    	cmux_schedulerDlcReady(pDlc);
	}
    if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
    {
        cmux_scheduleWrite();
    }

	// mtk02683 : This CMUX_READY_TO_SEND_IND may be redundant
    cmux_sendMsgToUartHdlr(MSG_ID_CMUX_READY_TO_SEND_IND,NULL, NULL);

} /* end of cmux_handleCmuxDlcReadyToReceiveReq() */

/******************************************************************************/

#ifdef __VT_TRANSPORT_SUPPORT__
kal_bool cmux_tst_empty_msc_suspend = KAL_FALSE;
kal_bool cmux_tst_empty_msc_resume = KAL_FALSE;
#endif	
	
/*******************************************************************************
* FUNCTION
*  cmux_handleTstCommand
* DESCRIPTION
*  This function handles TST_INJECT_STRING
*
* PARAMETERS
*  IN	ilm_struct *	
* RETURNS
*  void 
* GLOBALS AFFECTED
*	None
*******************************************************************************/
void cmux_handleTstCommand(ilm_struct * ilm_ptr)
{
		tst_module_string_inject_struct* tst_inject = NULL;
		tst_inject = (tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;
	
		switch (tst_inject->index)
		{
#ifdef __CMUX_TEST2__
			case CMUX_TST_TEST_MODE_CMD:
				cmux_test_handleCmd ( ilm_ptr );
			break;
#endif /* __CMUX_TEST2__ */    
	
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
			case CMUX_TST_UT_UH_RX:
				cmux_ut_handleUART_DataInd(ilm_ptr);
			break;
	
			case CMUX_TST_UT_UH_RX_PLUS:
				cmux_ut_handleUART_DataIndPlus(ilm_ptr);
			break;
	
			case CMUX_TST_UT_VP_RX:
				cmux_ut_handleVP_GetBytes(ilm_ptr);
			break;
	
			case CMUX_TST_UT_VP_TX:
				cmux_ut_handleVP_PutBytes(ilm_ptr);
			break;
	
			case CMUX_TST_UT_VP_CONTROL:
				cmux_ut_handleVP_Control(ilm_ptr);
			break;
	
			case CMUX_TST_UT_VP_MSG_FLC2:
				cmux_ut_handleVPMSG_FreeFLC2(ilm_ptr);
			break;
#endif /* !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__) */

#ifdef __VT_TRANSPORT_SUPPORT__
			case CMUX_TST_EMPTY_MSC_SUSPEND: //64
				cmux_tst_empty_msc_suspend = KAL_TRUE;
			break;

			case CMUX_TST_NORMAL_MSC_SUSPEND:
				cmux_tst_empty_msc_suspend = KAL_FALSE;
			break;

			case CMUX_TST_EMPTY_MSC_RESUME:
				cmux_tst_empty_msc_resume = KAL_TRUE;
			break;		

			case CMUX_TST_NORMAL_MSC_RESUME:
				cmux_tst_empty_msc_resume = KAL_FALSE;
			break;					
#endif /* __VT_TRANSPORT_SUPPORT__ */
			default:
			break;

		}
} /* end of cmux_handleTstCommand() */

#ifdef __CMUX_TEST2__
/*******************************************************************************
* FUNCTION
*  cmux_test_handleCmd
* DESCRIPTION
*  handle TST command in TEST MODE
*
* PARAMETERS
*  IN ilm_struct *
* RETURNS
*  void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_test_handleCmd ( ilm_struct * ilm_ptr )
{
	tst_module_string_inject_struct* tst_inject = NULL;

    CmuxDlcT* dlc;
  	kal_uint32	tmp1,tmp2,tmp3;

	tst_inject = ( tst_module_string_inject_struct* ) ilm_ptr->local_para_ptr;

	if( CMUX_MODE_ISNORMAL(cmux_ptr) ) 
	{
		if(strncmp(((char*)tst_inject->string), "EM", 2 ) == 0)
		{
			CMUX_MODE_SETEM(cmux_ptr);
			CMUX_LOG( "[CMUX][EM] Switch to Engineering Mode\n" );
		}
		else CMUX_LOG ( "[CMUX][EM] Unknown Command\n" );
	}
	else 
	{
		if(strncmp(((char*)tst_inject->string), "EM", 2 ) == 0)
		{
			CMUX_MODE_SETNORMAL(cmux_ptr);
			CMUX_LOG( "[CMUX][EM] Switch to Normal Mode\n" );	
		}
		else if(strncmp((char*)tst_inject->string, "test", 4 ) == 0 ) 
		{
			if( CMUX_MODE_ISTEST(cmux_ptr) ) {
				CMUX_MODE_SETEM(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Disable Testing Mode\n");
			}
			else {
				CMUX_MODE_SETTEST(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Enable Testing Mode\n");
			}
		}        
		else if(strncmp((char*)tst_inject->string, "vpecho", 6 ) == 0 )
		{			
			if( !CMUX_MODE_ISTEST(cmux_ptr) ) 
            {
				CMUX_MODE_SETTEST(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Enable Testing Mode\n");
			}

			tmp1 = atoi(((char*)tst_inject->string) + 9);
            dlc = cmux_findDlcByDlci((kal_uint8) tmp1);

            if ( dlc != NULL && (dlc->pn_cltype != CMUX_CL4) ) 
            {
                if ( CMUX_TEST_IS_ON(dlc->testOption,CMUX_TEST_O_ECHO) ) 
                {
                    CMUX_TEST_CLEAR( dlc->testOption, CMUX_TEST_O_ECHO );
  				    CMUX_LOG("[CMUX][EM] vpecho clear ... success\n");
                }
                else 
                {
                    CMUX_TEST_SET( dlc->testOption, CMUX_TEST_O_ECHO );
  				    CMUX_LOG("[CMUX][EM] vpecho set ... success\n");
                }
            }            
			else CMUX_LOG("[CMUX][EM] vpecho i=##\n");
		}
		else if(strncmp((char*)tst_inject->string, "vpdrop", 6 ) == 0 )
		{			
			if( !CMUX_MODE_ISTEST(cmux_ptr) ) 
            {
				CMUX_MODE_SETTEST(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Enable Testing Mode\n");
			}

			tmp1 = atoi(((char*)tst_inject->string) + 9);
            dlc = cmux_findDlcByDlci((kal_uint8) tmp1);

            if ( dlc != NULL && (dlc->pn_cltype != CMUX_CL4) ) 
            {
                if ( CMUX_TEST_IS_ON(dlc->testOption,CMUX_TEST_O_DROP) ) 
                {
                    CMUX_TEST_CLEAR( dlc->testOption, CMUX_TEST_O_DROP );
  				    CMUX_LOG("[CMUX][EM] vpdrop clear ... success\n");
                }
                else 
                {
                    CMUX_TEST_SET( dlc->testOption, CMUX_TEST_O_DROP );
  				    CMUX_LOG("[CMUX][EM] vpdrop set ... success\n");
                }
            }            
			else CMUX_LOG("[CMUX][EM] vpdrop i=##\n");
		}       
		else if(strncmp((char*)tst_inject->string, "vpgen", 5 ) == 0 )
		{			
			if( !CMUX_MODE_ISTEST(cmux_ptr) ) 
            {
				CMUX_MODE_SETTEST(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Enable Testing Mode\n");
			}

			tmp1 = atoi(((char*)tst_inject->string) + 8);
            dlc = cmux_findDlcByDlci((kal_uint8) tmp1);

            if ( dlc != NULL && (dlc->pn_cltype != CMUX_CL4) ) 
            {
                CMUX_TEST_SET( dlc->testOption, CMUX_TEST_O_GEN );            

    			tmp2 = atoi(((char*)tst_inject->string) + 13);
    			tmp3 = atoi(((char*)tst_inject->string) + 20);
		
    			if ( tmp3 <= 9999 && tmp2 > 0 && tmp3 > 0 ) {

                    dlc->testGenSize = (kal_uint16) tmp2;
                    dlc->testGenRun = (kal_uint16) tmp3;

    				cmux_test_genData(dlc);

    				CMUX_LOG("[CMUX][EM] vpgen starts ... success\n");
                }
                else CMUX_LOG("[CMUX][EM] vpgen wrong number of size or round\n");
            }                    
			else CMUX_LOG("[CMUX][EM] vpgen i=## d=#### r=####\n");
		}
  		else if(strncmp((char*)tst_inject->string, "vpfc", 4 ) == 0 )
		{			
			if( !CMUX_MODE_ISTEST(cmux_ptr) ) 
            {
				CMUX_MODE_SETTEST(cmux_ptr);
				CMUX_LOG("[CMUX][EM] Enable Testing Mode\n");
			}

			tmp1 = atoi(((char*)tst_inject->string) + 7);
            dlc = cmux_findDlcByDlci((kal_uint8) tmp1);

            if ( dlc != NULL && (dlc->pn_cltype != CMUX_CL4) ) 
            {
                if ( dlc->fLocalBusy == KAL_TRUE )
                {
                    cmux_resumePeerDlc(dlc->pn_dlci);
                    dlc->fLocalBusy = KAL_FALSE;

                    CMUX_LOG("[CMUX][EM] vpfc resume peer ... success\n");
                }
                else 
                {
                    cmux_suspendPeerDlc(dlc->pn_dlci);
                    dlc->fLocalBusy = KAL_TRUE;

                    CMUX_LOG("[CMUX][EM] vpfc suspend peer ... success\n");
                }

                if ( cmux_ptr->fUartSendSuspend == KAL_FALSE ) cmux_scheduleWrite();
            }                    
			else CMUX_LOG("[CMUX][EM] vpfc i=##\n");
		}
		else {
			CMUX_LOG ( "[CMUX][EM] Unknown Command\n");
		}
	}

	return;
}
#endif

/******************************************************************************/

