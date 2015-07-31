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
 *   cmux_main.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Task entry of CMUX.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "cmux_def.h"

#include "cmux_vp_num.h"
#include "cmux_uh.h"
#include "cmux_lib.h"
#include "cmux_hdlr.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"
#include "syscomp_config.h"
#include "dcl.h"
#include "lcd_lqueue.h"
#include "task_config.h"
#include "hisr_config.h"

#include "drv_msgid.h"
#include "cmux_msgid.h"
#include "ndis_msgid.h"
#include "ratdm_msgid.h"
#include "sysservice_msgid.h"
#include "tst_msgid.h"

/******************************************************************************/

static CmuxContextT cmux_context;
CmuxContextT * const cmux_ptr=& cmux_context;

static char * const cmux_timer_name[] = { "T1n2", "T3" };

/******************************************************************************/

kal_bool cmux_init(void);
kal_bool cmux_reset( void );
kal_bool cmux_dispatchMsg(ilm_struct *ilm_ptr);

static void cmux_main(ilm_struct *ilm_ptr);
extern void cmux_uh_main(ilm_struct*);

/*******************************************************************************
* FUNCTION
*  cmux_init
* DESCRIPTION
*  initial timer and cmux states
*
* PARAMETERS
*   IN      task_indx
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   context of cmux
*******************************************************************************/
kal_bool cmux_init(void)
{
  static lcd_lqueue w_queue;

	kal_uint8 i;
    
	kal_set_active_module_id ( CMUX_MOD_ID );

	// Initialize CMUX's context
	CMUX_INIT_CONTEXT(cmux_ptr);

	CMUX_MODE_SETNORMAL(cmux_ptr);
	
	cmux_ptr->port = uart_port_null;
	cmux_ptr->writeQueue = lcd_create_lqueue_with_mem(5, cmux_alloc, cmux_free,
        &(w_queue)); //mtk02683: 5 is bin size

	// Initialize each timer : CMUX_T1 and CMUX_T2 use same timer instance 
   	for (i = 0; i < CMUX_TOT_TIMER; i++) 
   	{
    	stack_init_timer(&  cmux_ptr->timer[i], (kal_char *)cmux_timer_name[i], CMUX_MOD_ID );
	}

	// Initialize each DLC context
   	for (i=0; i < CMUX_CHANNEL_NUM; i++) 
	{
		cmux_ptr->dlcs[i].state = DLC_INACTIVE;
	
   		// Fixed DLC Setting
		cmux_ptr->dlcs[i].portid = (UART_PORT) CMUX_MAP_ID2VP(i);
   	}

	// Initialize CMUX_UH's Context
	cmux_uh_init();

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
	// Initialize context for UT
	cmux_ut_init();
#endif
        
	return KAL_TRUE;
} /* end of cmux_init() */

/*******************************************************************************
* FUNCTION
*  cmux_reset
* DESCRIPTION
*   This function is only used in Unit Test.
*
* PARAMETERS
* RETURNS
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
kal_bool cmux_reset( void )
{
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)

	kal_uint8 i;

	CMUX_LOG("\n******** CMUX_RESET *********\n" );

	// The sequence of reseting modules is difference from cmux_init()
	
	//Reset context for UT
	cmux_ut_reset();

	// Reset CMUX_UH's Context
	cmux_uh_reset();
	
	// Reset CMUX context
	cmux_ptr->state = CMUX_INACTIVE;

	CMUX_MODE_SETNORMAL(cmux_ptr);
	
	cmux_ptr->port = uart_port_null;

	cmux_ptr->fUartSendSuspend = KAL_FALSE;

	cmux_ptr->u4DataOverrun = 0;
	
	// Free all peerbuffers in writeQueue if any
    while (!lcd_lqueue_is_empty(cmux_ptr->writeQueue))
    {
    	peer_buff_struct * pPeer = (peer_buff_struct *) 
			lcd_lqueue_remove(cmux_ptr->writeQueue, NULL);
		if(pPeer!= NULL) {
			pPeer->ref_count = 1;
			free_peer_buff(pPeer);
		}
    }

	// Reset All DLC Contexts
	for (i=0; i < CMUX_CHANNEL_NUM; i++)
	{
		// Release buffer
		if (cmux_ptr->dlcs[i].state == DLC_ACTIVE)
		{
			cmux_schedulerDlcSuspend(& cmux_ptr->dlcs[i]);
			cmux_releaseDlc(& cmux_ptr->dlcs[i]);
		}

		cmux_ptr->dlcs[i].state = DLC_INACTIVE;
	}

	/* Stop Timer */
	cmux_stopTimer(CMUX_T2);
    cmux_stopTimer(CMUX_T3);
	
#endif

   return KAL_TRUE;
} /* end of cmux_reset() */

/*******************************************************************************
* FUNCTION
*  cmux_dispatchMsg
* DESCRIPTION
*   dispatch primitives to modules
*
* PARAMETERS
*   IN          *ilm_ptr
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_bool cmux_dispatchMsg( ilm_struct *ilm_ptr )
{
    if ( ilm_ptr->dest_mod_id == MOD_CMUXUH )
    {
        cmux_uh_main( ilm_ptr );
    }
    else
    {
        switch ( ilm_ptr->msg_id )
        {
            case MSG_ID_UART_READY_TO_READ_IND:
            case MSG_ID_UART_READY_TO_WRITE_IND:

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
            case MSG_ID_CMUX_UART_CLOSE_DOWN_REQ:
            case MSG_ID_CMUX_UART_DATA_REQ:
            case MSG_ID_CMUX_UT_UART_DATA_IND:
#endif
                cmux_uh_main( ilm_ptr );
                break;
    
            default:
                cmux_main( ilm_ptr ); /*process external ILM */
                //cmux_pkt_data_main( ilm_ptr );
                break;
        }
    }

    return KAL_TRUE;
} /* end of cmux_task_main() */

/*******************************************************************************
* FUNCTION
*  cmux_main
* DESCRIPTION
*   This function is message dispatcher for CMUX.
*
* PARAMETERS
*   IN          *ilm_ptr
* RETURNS
*   void
* GLOBALS AFFECTED
*   None
*******************************************************************************/
static void cmux_main(ilm_struct *ilm_ptr)
{
    switch(ilm_ptr->msg_id)
    {
        /* L4C */
        case MSG_ID_CMUX_STARTUP_REQ:
            cmux_handleCmuxStartupReq(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_CMUX_CLOSE_DOWN_REQ:
            cmux_handleCmuxCloseDownReq();
            break;
            
        /* self generated messages */
        case MSG_ID_CMUX_DLC_DATA_READY_REQ:
            cmux_handleCmuxDlcDataReadyReq(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_CMUX_DLC_READY_TO_RECEIVE_REQ:
            cmux_handleCmuxDlcReadyToReceiveReq(ilm_ptr->local_para_ptr);
            break;

        case MSG_ID_CMUX_READY_TO_SEND_IND:
            cmux_handleReadyToSendInd();
            break;

        case MSG_ID_CMUX_UART_DATA_IND:
            cmux_handleUartDataInd(ilm_ptr->peer_buff_ptr);
            break;

        case MSG_ID_CMUX_UART_CLOSE_DOWN_CNF:
            cmux_handleCmuxUartCloseDownCnf();
            break;
            
        case MSG_ID_TIMER_EXPIRY :
            cmux_handleTimerExpiry(ilm_ptr->local_para_ptr);         
            break;

        case MSG_ID_UART_PLUGOUT_IND:
            cmux_handleUartPlugoutInd();
            break;

		/* TST */
		case MSG_ID_TST_INJECT_STRING:
            cmux_handleTstCommand(ilm_ptr);
            break;
    }
} /* end of cmux_main() */

/******************************************************************************/

