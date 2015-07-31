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
 *   cmux_vp_msg.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   The primtive interface between Applications and CMUX. 
 *   It simulate the packet data interface.
 *
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
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"

#include "lcd_lqueue.h"
#include "ps_public_enum.h" //#include "l3_inc_enums.h"
#include "flc2_config.h"
#include "flc2_ent_functions.h"

#include "ps_ratdm_struct.h"
#include "ndis_ratdm_struct.h"
#include "cmux_struct.h"

#include "cmux_vp_num.h"

#include "cmux_def.h"
#include "cmux_prot.h"
#include "cmux_hdlr.h"
#include "cmux_utl.h"
#include "cmux_vp_msg.h"
#include "cmux_lib.h"
#include "cmux_trc.h"

#include "svc_sap.h"
#include "cmux_msgid.h"
#include "md_mw_sap.h"
#include "ndis_msgid.h"


/******************************************************************************/

#define NDIS_DEFAULT_FLC_POOL_TYPE  	0
#define NDIS_DEFAULT_FLC_POOL_ID    	FLC2_POOL_ID_NPDU_UL
#define DEFAULT_FLC_POOL_TYPE          	0
#define DEFAULT_FLC_POOL_ID             FLC2_INVALID_POOL_ID

/****************************************************************** 
 * Define the Convergence Layer 4 Call Back functions Here 
 * NULL means using control buffer
 ******************************************************************/
#define CMUX_CB_CL4_GET_RX_BUFF_CH_0    NULL 
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_0   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_0   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_0     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_0       DEFAULT_FLC_POOL_ID
#define CMUX_CB_CL4_GET_RX_BUFF_CH_1    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_1   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_1   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_1     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_1       DEFAULT_FLC_POOL_ID


#define CMUX_CB_CL4_GET_RX_BUFF_CH_2    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_2   NULL 
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_2   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_2     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_2       DEFAULT_FLC_POOL_ID


#define CMUX_CB_CL4_GET_RX_BUFF_CH_3    NULL 
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_3   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_3   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_3     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_3       DEFAULT_FLC_POOL_ID


#define CMUX_CB_CL4_GET_RX_BUFF_CH_4    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_4   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_4   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_4     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_4      DEFAULT_FLC_POOL_ID


#define CMUX_CB_CL4_GET_RX_BUFF_CH_5    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_5   NULL 
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_5   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_5     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_5       DEFAULT_FLC_POOL_ID

#ifndef __CMUX_TEST__
#if defined(__NDIS_SUPPORT__) && defined(__MULTIPLE_NDIS_SUPPORT__)
#define CMUX_CB_CL4_GET_RX_BUFF_CH_6    cmux_NdisGetRxBuffer
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_6   cmux_NdisFreeTxBuffer
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_6   cmux_NdisFreeRxBuffer
#define CMUX_CB_CL4_FLC_POOL_TYPE_6     NDIS_DEFAULT_FLC_POOL_TYPE
#define CMUX_CB_CL4_FLC_POOL_ID_6       FLC2_POOL_ID_NPDU_UL_02 //MT not good

#define CMUX_CB_CL4_GET_RX_BUFF_CH_7    cmux_NdisGetRxBuffer
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_7   cmux_NdisFreeTxBuffer
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_7   cmux_NdisFreeRxBuffer
#define CMUX_CB_CL4_FLC_POOL_TYPE_7     NDIS_DEFAULT_FLC_POOL_TYPE
#define CMUX_CB_CL4_FLC_POOL_ID_7       FLC2_POOL_ID_NPDU_UL_01 //MT not good
#else
#define CMUX_CB_CL4_GET_RX_BUFF_CH_6    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_6   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_6   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_6     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_6       DEFAULT_FLC_POOL_ID

#define CMUX_CB_CL4_GET_RX_BUFF_CH_7    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_7   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_7   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_7     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_7       DEFAULT_FLC_POOL_ID
#endif /*__NDIS_SUPPORT__ && __MULTIPLE_NDIS_SUPPORT__*/
#else /*with __CMUX_TEST__*/
#define CMUX_CB_CL4_GET_RX_BUFF_CH_6    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_6   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_6   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_6     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_6       DEFAULT_FLC_POOL_ID

#define CMUX_CB_CL4_GET_RX_BUFF_CH_7    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_7   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_7   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_7     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_7       DEFAULT_FLC_POOL_ID
#endif /*__CMUX_TEST__*/

#if defined(__NDIS_SUPPORT__) && !defined(__CMUX_TEST__) 
#define CMUX_CB_CL4_GET_RX_BUFF_CH_8    cmux_NdisGetRxBuffer
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_8   cmux_NdisFreeTxBuffer
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_8   cmux_NdisFreeRxBuffer
#define CMUX_CB_CL4_FLC_POOL_TYPE_8     NDIS_DEFAULT_FLC_POOL_TYPE
#define CMUX_CB_CL4_FLC_POOL_ID_8       NDIS_DEFAULT_FLC_POOL_ID
#else
#define CMUX_CB_CL4_GET_RX_BUFF_CH_8    NULL
#define CMUX_CB_CL4_FREE_TX_BUFF_CH_8   NULL
#define CMUX_CB_CL4_FREE_RX_BUFF_CH_8   NULL
#define CMUX_CB_CL4_FLC_POOL_TYPE_8     DEFAULT_FLC_POOL_TYPE 
#define CMUX_CB_CL4_FLC_POOL_ID_8       DEFAULT_FLC_POOL_ID
#endif /*__NDIS_SUPPORT__*/



#define DLC_CALLBACKS(idx) { CMUX_CB_CL4_GET_RX_BUFF_CH_ ## idx , \
                             CMUX_CB_CL4_FREE_TX_BUFF_CH_  ## idx , \
                             CMUX_CB_CL4_FREE_RX_BUFF_CH_ ## idx , \
                             CMUX_CB_CL4_FLC_POOL_TYPE_ ## idx , \
                             CMUX_CB_CL4_FLC_POOL_ID_ ## idx }


const CmuxDlcCallBackT dlcCallBacks[]=
{
    DLC_CALLBACKS(0) ,
    DLC_CALLBACKS(1) ,    
    DLC_CALLBACKS(2) ,
    DLC_CALLBACKS(3) ,
    DLC_CALLBACKS(4) ,
    DLC_CALLBACKS(5) ,
    DLC_CALLBACKS(6) ,
    DLC_CALLBACKS(7) ,
    DLC_CALLBACKS(8)
#if defined(__GEMINI__) && defined(__EIGHT_PORT_MODULE__)
   ,DLC_CALLBACKS(1) ,    
    DLC_CALLBACKS(2) ,
    DLC_CALLBACKS(3) ,
    DLC_CALLBACKS(4) ,
    DLC_CALLBACKS(5) ,
    DLC_CALLBACKS(6) ,
    DLC_CALLBACKS(7) ,
    DLC_CALLBACKS(8)
#endif /* defined(__GEMINI__) && defined(__EIGHT_PORT_MODULE__) */
};

/*******************************************************************************
* FUNCTION
*    cmux_initCLCallBack
* DESCRIPTION
*    This is to initialize the convergence layer Buffer handling 
*    callback functions 
*
* PARAMETERS
*  IN       channel
*  OUT      *pCallbacks  
*
* RETURNS
*  None
* GLOBALS AFFECTED
*  None 
*******************************************************************************/
void cmux_initCLCallBack(kal_uint8 channel,CmuxDlcCallBackT * pCallbacks)
{
    kal_mem_cpy(pCallbacks,&(dlcCallBacks[channel]),sizeof(CmuxDlcCallBackT));
} /* end of cmux_initCLCallBack() */

// NDIS_FLC -------------------------------------------------------------------------
/*****************************************************************************
* FUNCTION
*  cmux_handleFLCSuspend
* DESCRIPTION
*  related to: flc2_npdu_ul_callback 
*
* PARAMETERS
*  ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*****************************************************************************/
void cmux_handleFLCSuspend(ilm_struct *ilm_ptr)
{
    cmux_flc_data_suspend_ind_struct* local_para = 
		(cmux_flc_data_suspend_ind_struct*) ilm_ptr->local_para_ptr;

    CmuxDlcT * pDlc = NULL;
  
    //DUMA00121132, mtk02285, 20090622 ---
	kal_uint8 dlc_no = CMUX_MAP_ULPOOL_TO_ID( local_para->pool_id );

	if ( CMUX_VALIDATE_ID( dlc_no ) )
    {
        pDlc = &(cmux_ptr->dlcs[dlc_no]); // search SIM1 first

	    #if defined(__GEMINI__) && defined(__EIGHT_PORT_MODULE__) //ndis_gemini
        if ( MOD_NIL == pDlc->owner ) //MAUI_01973483
        {
            dlc_no += CMUX_GEMINI_ID_OFFSET;
            pDlc = &(cmux_ptr->dlcs[dlc_no]);
        }
	    #endif
    }
    else
    {
        kal_brief_trace( TRC_ERROR, CMUX_NDIS_FLC_NO_MATCH_DLC );
        return;
    }

    pDlc->fLocalBusy = KAL_TRUE;

	kal_brief_trace( TRC_STATE, CMUX_FC_FLAG_LOCALBUSY, pDlc->pn_dlci, pDlc->fLocalBusy);
	
    cmux_suspendPeerDlc(pDlc->pn_dlci);

    if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
    {
        cmux_scheduleWrite();
    }

    return;
}

// NDIS_FLC -------------------------------------------------------------------------
/*****************************************************************************
* FUNCTION
*    cmux_handleFLCResume
* DESCRIPTION
*  related to: flc2_npdu_ul_callback 
*
* PARAMETERS
*  ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*****************************************************************************/
void cmux_handleFLCResume(ilm_struct *ilm_ptr)
{
    cmux_flc_data_resume_ind_struct * local_para = 
		(cmux_flc_data_resume_ind_struct *)ilm_ptr->local_para_ptr;

    CmuxDlcT * pDlc = NULL;
    kal_uint8 * pPdu = NULL;
    kal_uint16 u2Length = 0;
    kal_int8 dlc_no = 0;

	if ( MOD_FLC == ilm_ptr->src_mod_id )
	{
		/* msg_ptr->pool_id can be FLC2_POOL_ID_NPDU_UL, FLC2_POOL_ID_NPDU_UL+1, FLC2_POOL_ID_NPDU_UL+2 
		 * msg_ptr->pool_id = NPDU_UL,   means the 8/16th DLC --> dlc_no = 8/16
		 * msg_ptr->pool_id = NPDU_UL+1, means the 7/15th DLC --> dlc_no = 7/15
		 * msg_ptr->pool_id = NPDU_UL+2, means the 6/14th DLC --> dlc_no = 6/14
		 */		 
	    dlc_no = CMUX_MAP_ULPOOL_TO_ID( local_para->pool_id );

	    pDlc = &(cmux_ptr->dlcs[dlc_no]); 					// search SIM1 first    

	    #if defined(__GEMINI__) && defined(__EIGHT_PORT_MODULE__) 	//ndis_gemini	
	    if (KAL_FALSE == pDlc->fLocalBusy)
	    {
	        // If SIM1 is not SUSPENDED before, then it must be SIM2 needs RESUME.
	        dlc_no += CMUX_GEMINI_ID_OFFSET;
	        pDlc = &(cmux_ptr->dlcs[dlc_no]);
	    }
	    #endif
	}

    if(NULL == pDlc)
    {
        kal_brief_trace( TRC_ERROR, CMUX_NDIS_FLC_NO_MATCH_DLC );
        return;
    }
	
    /* Prepare Next rxBuffer Here! */
    if( KAL_TRUE == pDlc->fLocalBusy )
    {
        pDlc->fLocalBusy = KAL_FALSE;
		
        if (NULL == pDlc->rxBufferCl4)
        {
            if ( pDlc->owner == MOD_NIL ) //MAUI_01973483
            {
	            kal_brief_trace(TRC_NDIS, CMUX_VPMSG_DLC_NOT_ACTIVATED, dlc_no);

				cmux_resumePeerDlc(pDlc->pn_dlci);

				// mtk02683 : This CMUX_READY_TO_SEND_IND may be redundant
    	        if((NULL==cmux_ptr->readingDlc) || 
                   ((NULL != cmux_ptr->readingDlc) && 
                   (KAL_FALSE==cmux_ptr->readingDlc->fLocalBusy)))
                {
                    cmux_sendMsgToUartHdlr(MSG_ID_CMUX_READY_TO_SEND_IND,NULL, NULL);
                }

				if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
				{
					cmux_scheduleWrite();
				}
				return;
            }
			else
			{
			    pDlc->rxBufferCl4 = cmux_getCL4RxBuffer( pDlc,CMUX_NDIS_RX_SIZE ); //20081215: don't getCL4Buffer twice !
			}
        } // NDIS_FLC, mtk02285, 20090414
        
        if ( NULL == pDlc->rxBufferCl4 )
        {
			kal_brief_trace( TRC_WARNING, CMUX_NDIS_UL_FLC_RESUME_FAIL, pDlc->owner, pDlc->portid);

            pDlc->fLocalBusy = KAL_TRUE;
        }
        else
        {
            kal_brief_trace(TRC_NDIS,CMUX_NDIS_UL_FLC_RESUME_DONE, pDlc->owner, pDlc->portid);
			
            pPdu = get_peer_buff_pdu(pDlc->rxBufferCl4,&u2Length);
            cmux_initBuffer(&(pDlc->rxBuffer), pPdu, u2Length);

			kal_brief_trace( TRC_STATE, CMUX_FC_FLAG_LOCALBUSY, pDlc->pn_dlci, 
                pDlc->fLocalBusy);
			
			cmux_resumePeerDlc(pDlc->pn_dlci);

			// mtk02683 04.12.2010 :
			// This CMUX_READY_TO_SEND_IND may be redundant.
			// Moreover, the conditions in following "if" is not fully understood.
			// The main purpose still need to be clarified.
	        if((NULL==cmux_ptr->readingDlc) || 
               ((NULL != cmux_ptr->readingDlc) &&
               (KAL_FALSE==cmux_ptr->readingDlc->fLocalBusy)))
            {
                cmux_sendMsgToUartHdlr(MSG_ID_CMUX_READY_TO_SEND_IND,NULL, NULL);

				if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
				{
					cmux_scheduleWrite();
				}
            }
        } // endif(NULL == pDlc->rxBufferCl4)
    }
    else /* FLC not suspend!! */
    {
        kal_brief_trace( TRC_WARNING, CMUX_NDIS_UL_FLC_NOT_SUSPEND);
    } // endif(KAL_TRUE == pDlc->fLocalBusy)

    return;
}

/*******************************************************************************
* FUNCTION
*    cmux_handleRatdmDataActivateInd
* DESCRIPTION
*    This is to handle the activation of CMUX packet data interface. 
*
* PARAMETERS
*  IN       *ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*  context of dlc 
*******************************************************************************/
void cmux_handleRatdmDataActivateInd(ilm_struct * ilm_ptr) 
{
    ndis_ratdm_data_activate_ind_struct * pActivateInd = NULL;
    ndis_ratdm_data_activate_rsp_struct * pActivateRsp = NULL;
    CmuxDlcT * pDlc = NULL;
	kal_uint8 id;
    
    pActivateInd = (ndis_ratdm_data_activate_ind_struct *) ilm_ptr->local_para_ptr;

    CMUX_ASSERT( CMUX_VALIDATE_CID(pActivateInd->context_id) );
	id = CMUX_MAP_CID2ID( pActivateInd->context_id, ilm_ptr->src_mod_id );

	pDlc = &cmux_ptr->dlcs[id];

	CMUX_ASSERT( pDlc->owner == MOD_NIL );
	pDlc->owner = ilm_ptr->src_mod_id;
	//pDlc->u1NdisPdpCid = pActivateInd->context_id;

    pActivateRsp = (ndis_ratdm_data_activate_rsp_struct *) 
        construct_local_para( sizeof( ndis_ratdm_data_activate_rsp_struct), TD_RESET);

    pActivateRsp->context_id = pActivateInd->context_id;
	pActivateRsp->result = KAL_TRUE;
    pActivateRsp->src_id = pActivateInd->src_id;
    
	CMUX_ASSERT ( (CMUX_CL4 == pDlc->pn_cltype) && (DLC_ACTIVE == pDlc->state) );

    // Set FLC2 callback function
    flc2_reset_user_info( CMUX_MAP_ID_TO_ULPOOL(id) );
    flc2_config_user_info( CMUX_MAP_ID_TO_ULPOOL(id), (void*)((kal_uint32)CMUX_MOD_ID));

    cmux_allocateBufferSpace(pDlc); 

    CMUX_ASSERT(NULL != pDlc->rxBufferCl4);

    msg_send5( CMUX_MOD_ID, ilm_ptr->src_mod_id, NDIS_RATDM_SAP, 
                MSG_ID_NDIS_RATDM_DATA_ACTIVATE_RSP, 
                (local_para_struct *) pActivateRsp );  

    kal_brief_trace( TRC_INFO, CMUX_VPMSG_PKT_ACTIVATE_COMPLETE, id );
    
    return;
} /* end of cmux_handleCmuxPktDataActivateReq() */

/*******************************************************************************
* FUNCTION
*    cmux_handleRatdmDataDeactivateInd
* DESCRIPTION
*    This is to handle the deactivation of CMUX packet data interface.
*
* PARAMETERS
*  IN       *ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   context of dlc
*******************************************************************************/
void cmux_handleRatdmDataDeactivateInd(ilm_struct * ilm_ptr)
{
    ndis_ratdm_data_deactivate_ind_struct * pDeactivateInd = NULL;
    ndis_ratdm_data_deactivate_rsp_struct * pDeactivateRsp = NULL;
    CmuxDlcT * pDlc = NULL;
	kal_uint8 id;

    pDeactivateInd = (ndis_ratdm_data_deactivate_ind_struct *) 
                         ilm_ptr->local_para_ptr;

    CMUX_ASSERT( CMUX_VALIDATE_CID(pDeactivateInd->context_id) );
	id = CMUX_MAP_CID2ID( pDeactivateInd->context_id, ilm_ptr->src_mod_id );

	pDlc = &cmux_ptr->dlcs[id];

    if ( pDlc->owner == MOD_NIL )
    {
        kal_brief_trace( TRC_WARNING, CMUX_VPMSG_PKT_DEACTIVATE_MODNIL, id );
    }
    else 
    {
        pDlc->owner = MOD_NIL;
        cmux_intReleaseDlcBuffer(pDlc);
    }

    pDeactivateRsp = (ndis_ratdm_data_deactivate_rsp_struct *) 
        construct_local_para( sizeof(ndis_ratdm_data_deactivate_rsp_struct), TD_RESET);
	pDeactivateRsp->context_id = pDeactivateInd->context_id;
	pDeactivateRsp->result = KAL_TRUE;

    msg_send5( CMUX_MOD_ID, ilm_ptr->src_mod_id, NDIS_RATDM_SAP, 
                MSG_ID_NDIS_RATDM_DATA_DEACTIVATE_RSP, 
                (local_para_struct *) pDeactivateRsp );  
	
    kal_brief_trace( TRC_INFO, CMUX_VPMSG_PKT_DEACTIVATE_COMPLETE, id );
    
    return;
} /* end of cmux_handleRatdmDataDeactivateInd() */

/*******************************************************************************
* FUNCTION
*    cmux_handlePsDataInd
* DESCRIPTION
*    Handle IP data send from NW (RATDM) side.
*
* PARAMETERS
*  IN       *ilm_ptr
*  
* RETURNS
*  None
* GLOBALS AFFECTED
*   external_global
*******************************************************************************/
void cmux_handlePsDataInd(ilm_struct * ilm_ptr)
{
    ratdm_ps_data_ind_struct * pPsDataInd = 
        (ratdm_ps_data_ind_struct *) ilm_ptr->peer_buff_ptr;
    peer_buff_struct * pPeer = ilm_ptr->peer_buff_ptr;
    
    kal_uint8 * pPdu = NULL;
    kal_uint16 u2Length = 0;
    kal_uint16 u2IPID = 0;

    CmuxDlcT * pDlc = NULL;
    kal_uint8 id;

    /* Mapping the packet data ind to the correct dlc */  
    CMUX_ASSERT( CMUX_VALIDATE_CID(pPsDataInd->context_id) );
	id = CMUX_MAP_CID2ID( pPsDataInd->context_id, ilm_ptr->src_mod_id );

	pDlc = &cmux_ptr->dlcs[id];

    /* Set the peer buffer pointer to NULL preventing free by the system */
    ilm_ptr->peer_buff_ptr = NULL;

    /* Check if the PKT data interface is deactivated */
    if ( pDlc->owner == MOD_NIL )
    {
        kal_brief_trace(TRC_NDIS, CMUX_VPMSG_DLC_NOT_ACTIVATED, id );
        
        pDlc->txBufferCl4 = pPeer;
        cmux_freeCL4TxBuffer(pDlc);
        return;
    }

    pPdu = get_peer_buff_pdu(pPeer, &u2Length);

    /* Here comes a new packet */    
    u2IPID = (kal_uint16)pPdu[4] << 8;
    u2IPID |= (kal_uint16)pPdu[5];
    kal_brief_trace(TRC_INFO,CMUX_NDIS_DL_IPID,u2IPID); //NDIS_FLC, NDIS_IPID

    if( NULL == pDlc->txBufferCl4 )
    {
        kal_brief_trace(TRC_NDIS,CMUX_VPMSG_TX_NEW_PKT_RTS, pDlc->pn_dlci, u2Length);
		
		pDlc->txBufferCl4 = pPeer;
		cmux_initBuffer( &pDlc->txBuffer, pPdu, u2Length );
        pDlc->txBuffer.pWrite = pPdu + u2Length;

        cmux_schedulerDlcReady(pDlc);      
    }
    else /* Previous frame has not been finished. The Peer buffer shall be queued. */
    {
        kal_bool ret_val = lcd_lqueue_insert_at_rear(pDlc->cl4TxQueue, pPeer);

        kal_brief_trace(TRC_NDIS,CMUX_VPMSG_TX_NEW_PKT_QUEUE, pDlc->pn_dlci, u2Length);

		CMUX_ASSERT(ret_val == KAL_TRUE);	
    }

    if (cmux_ptr->fUartSendSuspend == KAL_FALSE)
    {
        CMUX_ASSERT( lcd_lqueue_is_empty(cmux_ptr->writeQueue) == KAL_TRUE);
        cmux_scheduleWrite();
    }
} /* end of cmux_handlePsDataInd() */

#ifdef __NDIS_SUPPORT__
/*****************************************************************************
* FUNCTION
*   cmux_checkNdisNpduUlActive
* DESCRIPTION
*   
* PARAMETERS
*    IN   NONE
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
kal_bool cmux_checkNdisNpduUlActive() // MAUI_01633622, 20090220, mtk02285
{
    if ( (cmux_ptr->dlcs[CMUX_GEMINI_ID_OFFSET].owner != MOD_NIL )
#if defined(__GEMINI__) && defined(__EIGHT_PORT_MODULE__)
    || (cmux_ptr->dlcs[ CMUX_GEMINI_ID_OFFSET * 2 ].owner != MOD_NIL )
#endif
    ) { 
        return KAL_TRUE;
    }
    else {
        return KAL_FALSE;
    }    
}
 
/*****************************************************************************
* FUNCTION
*   cmux_npdu_ul_callback
* DESCRIPTION
*   
* PARAMETERS
*   IN   event
*   IN   pool_id
* RETURNS
*   void
* GLOBALS AFFECTED
*   N/A
*****************************************************************************/
void cmux_npdu_ul_callback ( flc2_thres_hit_enent_enum event, 
    flc2_pool_id_enum pool_id )
{
    if ((FLC2_BELOW_SIZE_L_THRE == event) || (FLC2_BELOW_PKT_NO_L_THRE == event))
    {
        cmux_flc_data_resume_ind_struct *local_para = (cmux_flc_data_resume_ind_struct *)
           construct_local_para(sizeof(cmux_flc_data_resume_ind_struct),TD_RESET);
        local_para->pool_id = pool_id;

        flc2_send_ilm( CMUX_MOD_ID, MSG_ID_CMUX_FLC_DATA_RESUME_IND, STACK_TIMER_SAP, 
            (local_para_struct*)local_para, NULL );
    }
    else if((FLC2_ABOVE_SIZE_U_THRE == event)||(FLC2_ABOVE_PKT_NO_U_THRE == event))
    {
        cmux_flc_data_suspend_ind_struct *local_para = (cmux_flc_data_suspend_ind_struct *)
          construct_local_para(sizeof(cmux_flc_data_suspend_ind_struct),TD_RESET);
        local_para->pool_id = pool_id;

        flc2_send_ilm( CMUX_MOD_ID, MSG_ID_CMUX_FLC_DATA_SUSPEND_IND, STACK_TIMER_SAP, 
            (local_para_struct*)local_para, NULL );
    }    

    return;
}

/*****************************************************************************
* FUNCTION
*   cmux_NdisGetRxBuffer
* DESCRIPTION
*	
*
* PARAMETERS
*	 IN   
*	 IN 	  
* RETURNS
*	void
* GLOBALS AFFECTED
*	N/A
*****************************************************************************/
#ifdef __MULTIPLE_NDIS_SUPPORT__
peer_buff_struct* cmux_NdisGetRxBuffer(kal_uint16 size, kal_uint8 no_of_dlc)
#else
peer_buff_struct* cmux_NdisGetRxBuffer(kal_uint16 size)
#endif
{

#ifdef __MULTIPLE_NDIS_SUPPORT__
     return GET_GPRS_UL_FLC_PEER_BUFF(size, no_of_dlc);
#else
     return GET_GPRS_UL_FLC_PEER_BUFF(size);
#endif

} /* end of cmux_NdisGetRxBuffer() */

/*****************************************************************************
* FUNCTION
*   cmux_NdisFreeRxBuffer
* DESCRIPTION
*	
*
* PARAMETERS
*	 IN   
*	 IN 	  
* RETURNS
*	void
* GLOBALS AFFECTED
*	N/A
*****************************************************************************/
#ifdef __MULTIPLE_NDIS_SUPPORT__
void cmux_NdisFreeRxBuffer(peer_buff_struct * pPeer, kal_uint8 dlc_order)
#else
void cmux_NdisFreeRxBuffer(peer_buff_struct * pPeer)
#endif
{
    pPeer->ref_count = 1;

#ifdef __MULTIPLE_NDIS_SUPPORT__
    FREE_GPRS_UL_FLC_PEER_BUFF(pPeer, dlc_order);
#else
    FREE_GPRS_UL_FLC_PEER_BUFF(pPeer);
#endif

} /* end of cmux_NdisFreeRxBuffer() */


/*****************************************************************************
* FUNCTION
*   cmux_NdisFreeTxBuffer
* DESCRIPTION
*	
*
* PARAMETERS
*	 IN   
*	 IN 	  
* RETURNS
*	void
* GLOBALS AFFECTED
*	N/A
*****************************************************************************/
#ifdef __MULTIPLE_NDIS_SUPPORT__
void cmux_NdisFreeTxBuffer(peer_buff_struct * pPeer, kal_uint8 dlc_order)
#else
void cmux_NdisFreeTxBuffer(peer_buff_struct * pPeer)
#endif
{
	pPeer->ref_count = 1;

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
	free_peer_buff(pPeer);
#else

#ifdef __MULTIPLE_NDIS_SUPPORT__
    FREEQ_GPRS_DL_FLC_PEER_BUFF(pPeer, dlc_order);	
#else
    FREEQ_GPRS_DL_FLC_PEER_BUFF(pPeer);	
#endif

#endif
} /* end of cmux_NdisFreeTxBuffer() */
#endif /* __NDIS_SUPPORT__ */

/******************************************************************************/
