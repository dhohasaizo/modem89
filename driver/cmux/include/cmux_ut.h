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
 *   cmux_ut.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Definition for Unit Test of CMUX.
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
/******************************************************************************/

#ifndef CMUX_UT_H
#define CMUX_UT_H
/******************************************************************************/

#include "cmux_lib.h"
#include "cmux_def.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "ps_public_enum.h" //#include "l3_inc_enums.h"
#include "flc_api.h"
#include "dcl.h"

/******************************************************************************/

#define CMUX_UT_PSEUDO_UART_READ_LEN 512
#define CMUX_UT_PSEUDO_UART_WRITE_LEN 512

#define CMUX_UT_TEMP_BUFFER_SIZE 2048
#define CMUX_UT_PSEUDO_UART_BUFFER_SIZE 2048
#define CMUX_UT_PSEUDO_UART_RX_BUFFER_SIZE CMUX_UT_PSEUDO_UART_BUFFER_SIZE + 1
#define CMUX_UT_PSEUDO_UART_TX_BUFFER_SIZE CMUX_UT_PSEUDO_UART_BUFFER_SIZE

/******************************************************************************/

//SIO
#undef cmux_uart_setOwner
#undef cmux_uart_getBytes
#undef cmux_uart_putBytes
#define cmux_uart_setOwner(p)
#define cmux_uart_getBytes(p,b,l,s)	cmux_ut_GetBytes(p,b,l,s,CMUX_MOD_ID)
#define cmux_uart_putBytes(p,b,l)	cmux_ut_PutBytes(p,b,l,CMUX_MOD_ID)

/******************************************************************************/

typedef struct {

	lcd_lqueue * pool_id;
	lcd_lqueue * buffer_ptr;

} CmuxUTFlc2T;

typedef struct {

	// TX
	kal_uint32	pseudo_uart_txbuf;

	// RX
	CmuxLibRingBufferT pseudo_uart_rxbuf;

	kal_uint8 pseudo_uart_rxbuffer[CMUX_UT_PSEUDO_UART_RX_BUFFER_SIZE];
	kal_uint8 tmp_buf[CMUX_UT_TEMP_BUFFER_SIZE];

	CmuxUTFlc2T flc2_ul_bufs;

} CmuxUtContextT;

/******************************************************************************/

extern CmuxUtContextT * const cmux_ut_ptr;

/******************************************************************************/

extern kal_bool cmux_ut_init();
extern kal_bool cmux_ut_reset();

/******************************************************************************/

extern kal_uint16 cmux_ut_GetBytes(UART_PORT port,kal_uint8 * buffaddr, 
	kal_uint16 length,kal_uint8 * status,module_type owner);
extern kal_uint16 cmux_ut_PutBytes(UART_PORT port,kal_uint8 * buffaddr, 
	kal_uint16 length,module_type owner);

/******************************************************************************/

extern void cmux_ut_handleUART_DataInd(ilm_struct * ilm_ptr);
extern void cmux_ut_handleUART_DataIndPlus(ilm_struct * ilm_ptr);
extern void cmux_ut_handleVP_GetBytes(ilm_struct * ilm_ptr);
extern void cmux_ut_handleVP_PutBytes(ilm_struct * ilm_ptr);
extern void cmux_ut_handleVP_Control(ilm_struct * ilm_ptr);
extern void cmux_ut_handleVPMSG_FreeFLC2(ilm_struct * ilm_ptr);

/******************************************************************************/

extern kal_bool cmux_ut_flc2_init( CmuxUTFlc2T * root );
extern kal_bool cmux_ut_flc2_add(CmuxUTFlc2T * root, flc2_pool_id_enum pool_id, 
	peer_buff_struct * 	buff_ptr );
extern kal_bool cmux_ut_flc2_del(CmuxUTFlc2T * root, kal_uint16 num);
#define cmux_ut_flc2_clean(root) cmux_ut_flc2_del(root, 0xFFFF);

/******************************************************************************/

extern kal_uint16 cmux_ut_construct_UIH(kal_uint8* dst, 
	kal_uint8 dlci, kal_uint8 cr, kal_uint16 length, kal_uint8 clex);

/******************************************************************************/
#endif /* CMUX_UT_H */

/******************************************************************************/
#endif

