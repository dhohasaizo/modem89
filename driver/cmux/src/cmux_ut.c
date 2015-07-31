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
 *   cmux_ut.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Functions for CMUX Unit Test.
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
/******************************************************************************/

#include "cmux_def.h"
#include "cmux_lib.h"
#include "cmux_vp.h"
#include "cmux_prot.h"
#include "cmux_utl.h"

#include "cmux_ut.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "syscomp_config.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "task_config.h"
#include "svc_sap.h"
#include "cmux_msgid.h"

#include "lcd_lqueue.h"
#include "tst_sap.h"

/******************************************************************************/

static CmuxUtContextT cmux_ut_context;
CmuxUtContextT * const cmux_ut_ptr = &cmux_ut_context;

/******************************************************************************/
/* UnitTest Basic Functions																      */
/******************************************************************************/

kal_bool cmux_ut_init()
{
	// TX
	cmux_ut_ptr->pseudo_uart_txbuf = 0;

	// RX
	cmux_initBuffer(&cmux_ut_ptr->pseudo_uart_rxbuf, cmux_ut_ptr->pseudo_uart_rxbuffer,
		CMUX_UT_PSEUDO_UART_RX_BUFFER_SIZE);

	cmux_ut_flc2_init(&cmux_ut_ptr->flc2_ul_bufs);

	return KAL_TRUE;
}

kal_bool cmux_ut_reset()
{
	// TX
	cmux_ut_ptr->pseudo_uart_txbuf = 0;

	// RX
	cmux_initBuffer(&cmux_ut_ptr->pseudo_uart_rxbuf, cmux_ut_ptr->pseudo_uart_rxbuffer,
		CMUX_UT_PSEUDO_UART_RX_BUFFER_SIZE);

	cmux_ut_flc2_clean(&cmux_ut_ptr->flc2_ul_bufs);

	return KAL_TRUE;
}

/******************************************************************************/
/* UnitTest FLC2 Controlling Functions													      */
/******************************************************************************/

kal_bool cmux_ut_flc2_init( CmuxUTFlc2T * root ) 
{
	root->pool_id = lcd_create_lqueue(5, cmux_alloc, cmux_free);
	root->buffer_ptr = lcd_create_lqueue(5, cmux_alloc, cmux_free);

	return KAL_TRUE;
}

kal_bool cmux_ut_flc2_add( CmuxUTFlc2T * root, flc2_pool_id_enum pool_id, 
	peer_buff_struct * 	buff_ptr )
{
	lcd_lqueue_insert_at_rear( root->pool_id, (void *) pool_id);
	lcd_lqueue_insert_at_rear( root->buffer_ptr, (void *) buff_ptr);
	
	return KAL_TRUE;
}

kal_bool cmux_ut_flc2_del( CmuxUTFlc2T * root, kal_uint16 num)
{
	flc2_pool_id_enum pool_id;
	peer_buff_struct * buff_ptr;

	while( (!lcd_lqueue_is_empty(root->pool_id)) && num > 0) 
	{
		pool_id = (flc2_pool_id_enum) lcd_lqueue_remove(root->pool_id, NULL);
		buff_ptr = (peer_buff_struct *) lcd_lqueue_remove( root->buffer_ptr, NULL);
		flc2_free_peer_buff( pool_id, buff_ptr);
		num--;
	}

	if( 0 == num ) return KAL_TRUE;
	else return KAL_FALSE;
}

/******************************************************************************/
/* UnitTest Virtual UART Interfaces  														      */
/******************************************************************************/
kal_uint16 cmux_ut_GetBytes(UART_PORT port,kal_uint8 * buffaddr,kal_uint16 length,
	kal_uint8 * status, module_type owner)
{
	kal_uint32 data_length;

	data_length = cmux_getBufferDataAvail(&cmux_ut_ptr->pseudo_uart_rxbuf);

	length = (length < data_length)? length : data_length;

	if ( length > 0 )
		cmux_readBuffer(&cmux_ut_ptr->pseudo_uart_rxbuf, buffaddr, length);

	return length;
}

kal_uint16 cmux_ut_PutBytes( UART_PORT port, kal_uint8 * buffaddr, kal_uint16 length, 
	module_type owner)
{
	peer_buff_struct * 	peer_buff;
	kal_uint8* peer_buff_pdu_ptr;	
	kal_uint16 peer_buff_len;

	if ( cmux_ut_ptr->pseudo_uart_txbuf + length > CMUX_UT_PSEUDO_UART_TX_BUFFER_SIZE) {
		length = CMUX_UT_PSEUDO_UART_TX_BUFFER_SIZE - cmux_ut_ptr->pseudo_uart_txbuf;
		cmux_ut_ptr->pseudo_uart_txbuf = 0;
	}
	else cmux_ut_ptr->pseudo_uart_txbuf += length;

	peer_buff = construct_peer_buff(length, 0, 0, TD_UL);
	peer_buff_pdu_ptr = get_peer_buff_pdu(peer_buff, &peer_buff_len);

	kal_mem_cpy(peer_buff_pdu_ptr, buffaddr, peer_buff_len);

	msg_send6( CMUXUH_MOD_ID, MOD_SIM, INVALID_SAP, MSG_ID_CMUX_UT_UART_DATA_REQ, 
		NULL, peer_buff);

	return length;
}

/******************************************************************************/
/* UnitTest TST Command Hanlders 														      */
/******************************************************************************/

void cmux_ut_handleUART_DataInd(ilm_struct * ilm_ptr)
{
    kal_uint16 peer_buff_len;
    kal_uint8* peer_buff_pdu_ptr;

	kal_uint16 tmp;

	CMUX_UT_LOGT("FUNC","cmux_ut_handleUART_DataInd");

	if( NULL != ilm_ptr->peer_buff_ptr)
	{
		peer_buff_pdu_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &peer_buff_len);
	
		if( 0 < peer_buff_len)
		{
			tmp = cmux_getBufferSpaceAvail(&cmux_ut_ptr->pseudo_uart_rxbuf);
			peer_buff_len = ( tmp < peer_buff_len )? tmp : peer_buff_len;
	
			cmux_writeBuffer(&cmux_ut_ptr->pseudo_uart_rxbuf, 
				peer_buff_pdu_ptr, peer_buff_len);
		}
	}		

	return;
}


void cmux_ut_handleUART_DataIndPlus(ilm_struct * ilm_ptr)
{
	tst_module_string_inject_struct* tst_inject = 
		(tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;	

	kal_uint8 	uDlci;
	kal_uint16 	uLen;
	kal_uint8	uCLex;

	kal_uint8 * pBuff = cmux_ut_ptr->tmp_buf;
	kal_uint16  uBuff_len;
	kal_uint16 	tmp;
		
	CMUX_UT_LOGT("FUNC","cmux_ut_handleUART_DataIndPlus");

	// Parse config in string array
	uDlci = (kal_uint8) tst_inject->string[0];
	if(!CMUX_VALIDATE_DLCI(uDlci)) return;

	uLen = (kal_uint16) tst_inject->string[2];
	uLen = (uLen << 8) | tst_inject->string[3];
	if( (CMUX_UT_TEMP_BUFFER_SIZE - (CMUX_HEADER_MAX_SIZE + 1)) < uLen ) 
		uLen = (CMUX_UT_TEMP_BUFFER_SIZE - (CMUX_HEADER_MAX_SIZE + 1));
	else if ( 0 == uLen ) return;

	uCLex = tst_inject->string[5];

	uBuff_len = cmux_ut_construct_UIH( pBuff, uDlci, 1, uLen, uCLex);

	tmp = cmux_getBufferSpaceAvail(&cmux_ut_ptr->pseudo_uart_rxbuf);
	uBuff_len = ( tmp < uBuff_len )? tmp : uBuff_len;
	
	cmux_writeBuffer(&cmux_ut_ptr->pseudo_uart_rxbuf, pBuff, uBuff_len);

	return;
}


void cmux_ut_handleVP_GetBytes(ilm_struct * ilm_ptr)
{
	tst_module_string_inject_struct* tst_inject = 
		(tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;

	kal_uint8 uDlci;
	kal_uint16 uLen;

	CmuxDlcT* pDlc;
    kal_uint8 status;	
	kal_uint8 * buff = cmux_ut_ptr->tmp_buf;

	CMUX_UT_LOGT("FUNC","cmux_ut_handleVP_GetBytes");

	// Parse config in string array
	uDlci = (kal_uint8) tst_inject->string[0];
	if(!CMUX_VALIDATE_DLCI(uDlci)) return;

	uLen = (kal_uint16) tst_inject->string[2];
	uLen = (uLen << 8) | tst_inject->string[3];
	if( CMUX_UT_TEMP_BUFFER_SIZE < uLen ) uLen = CMUX_UT_TEMP_BUFFER_SIZE;
	else if ( 0 == uLen ) return;

	pDlc = cmux_findDlcByDlci(uDlci);
	CPort_GetBytes(pDlc->portid, buff, uLen, &status, pDlc->owner);

	return;
}


void cmux_ut_handleVP_PutBytes(ilm_struct * ilm_ptr)
{
	tst_module_string_inject_struct* tst_inject = 
		(tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;

	kal_uint8 uDlci;
	kal_uint16 uLen;

	CmuxDlcT* pDlc;
	kal_uint8 * buff = cmux_ut_ptr->tmp_buf;

	CMUX_UT_LOGT("FUNC","cmux_ut_handleVP_PutBytes");

	// Parse config in string array
	uDlci = (kal_uint8) tst_inject->string[0];
	if(!CMUX_VALIDATE_DLCI(uDlci)) return;

	uLen = (kal_uint16) tst_inject->string[2];
	uLen = (uLen << 8) | tst_inject->string[3];
	if( CMUX_UT_TEMP_BUFFER_SIZE < uLen ) uLen = CMUX_UT_TEMP_BUFFER_SIZE;
	else if ( 0 == uLen ) return;

	kal_mem_set(buff, 0xFF, (kal_uint32)uLen);

	pDlc = cmux_findDlcByDlci(uDlci);
	CPort_PutBytes(pDlc->portid, buff, uLen, pDlc->owner);

	return;
}


void cmux_ut_handleVP_Control(ilm_struct * ilm_ptr)
{
	tst_module_string_inject_struct* tst_inject = 
		(tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;

	kal_uint8 index;
	
	kal_uint8 uPort;
	kal_uint8 uIOlevel;

	kal_uint8 * buff = cmux_ut_ptr->tmp_buf;

	CMUX_UT_LOGT("FUNC","cmux_ut_handleVP_Control");

	// Parse config in string array
	index = (kal_uint8) tst_inject->string[0];
	uPort = (kal_uint8) tst_inject->string[2];
	uIOlevel = (kal_uint8) tst_inject->string[4];

	// Invoke the function
	switch (index) {

		case 1:
			CPort_SetOwner( uPort, MOD_ATCI);
			break;

		case 3:
			CPort_CtrlDCD( uPort, uIOlevel, MOD_ATCI);
			break;
           
#ifdef __CMUX_MODEM_STATUS_SUPPORT__        
		case 4:
			CPort_CtrlRI( uPort, uIOlevel, MOD_ATCI);
			break;
#endif /* __CMUX_MODEM_STATUS_SUPPORT__ */          
			
		default:
			break;
	}
	
	return;
}

void cmux_ut_handleVPMSG_FreeFLC2(ilm_struct * ilm_ptr)
{
	tst_module_string_inject_struct* tst_inject = 
		(tst_module_string_inject_struct*)ilm_ptr->local_para_ptr;

	kal_uint16 uNum;

	CMUX_UT_LOGT("FUNC","cmux_ut_handleVPMSG_FreeFLC2");

	// Parse config in string array
	uNum = tst_inject->string[0] - '0';

	cmux_ut_flc2_del( &cmux_ut_ptr->flc2_ul_bufs, uNum);

	return;
}

/******************************************************************************/
/* UnitTest Utility Functions																      */
/******************************************************************************/

kal_uint16 cmux_ut_construct_UIH(kal_uint8* dst, kal_uint8 dlci, kal_uint8 cr, 
	kal_uint16 length, kal_uint8 clex)
{
	kal_uint8*	pDst_s;
	kal_uint16 	uILength;

	kal_uint8 	uFcs = CMUX_INITIAL_FCS;


	pDst_s = dst;
	uILength = (clex == 0)? length: length + 1;
	
	*dst = CMUX_FLAG_BASIC;
    dst++;

	*dst = CONSTRUCT_ADDRESS(dlci,cr,1);
    uFcs = CMUX_CALCULATE_FCS(uFcs,*dst);
    dst++;

    *dst = UIH_FRAME;
    uFcs = CMUX_CALCULATE_FCS(uFcs,*dst);
    dst++;

    if (length > MAX_ONE_BYTE_LENGTH )
    {
        *dst =(kal_uint8) CONSTRUCT_LENGTH_1_of_2(uILength);
		uFcs = CMUX_CALCULATE_FCS(uFcs,*dst);
		dst++;
        *dst =(kal_uint8) CONSTRUCT_LENGTH_2_of_2(uILength);
		uFcs = CMUX_CALCULATE_FCS(uFcs,*dst);
		dst++;
	}
    else
    {
        *dst =(kal_uint8) CONSTRUCT_LENGTH_1(uILength);
		uFcs = CMUX_CALCULATE_FCS(uFcs,*dst);
		dst++;
    }

	if ( 0 != clex ) 
	{
		*dst = clex;
		dst++;
	}

	kal_mem_set(dst, 0xFF, length);
	dst += length;

	*dst = CMUX_OUTPUT_FCS(uFcs);
    dst++;

	*dst = CMUX_FLAG_BASIC;
    dst++;
		 
	return dst - pDst_s;
}

/******************************************************************************/
#endif /* __CMUX_UT__ */

