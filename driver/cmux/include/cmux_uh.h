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
 *   cmux_uh.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Definition for UART Handler sub module of CMUX.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#ifndef CMUX_UH_H
#define CMUX_UH_H
/******************************************************************************/

#include "cmux_def.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"

#include "dcl.h"

/******************************************************************************/

#define cmux_uart_setOwner(p)		cmux_uh_SetOwner(p,CMUX_MOD_ID)
#define cmux_uart_getBytes(p,b,l,s)	cmux_uh_GetBytes(p,b,l,s,CMUX_MOD_ID)
#define cmux_uart_putBytes(p,b,l)	cmux_uh_PutBytes(p,b,l,CMUX_MOD_ID)

/******************************************************************************/

typedef enum 
{
    CMUXUH_INACTIVE,
    CMUXUH_ACTIVE,
    CMUXUH_DETACHING    
}UartHandlerE;

/******************************************************************************/

typedef struct 
{
    UART_PORT port;
    UartHandlerE state;

    // RX
    kal_bool     fUartEmpty;
    kal_bool     fCmuxBusy;

    // TX
    kal_bool   fUartFull;
    peer_buff_struct * writingBuffer;

} CmuxUartHandlerT;

/******************************************************************************/

extern  CmuxUartHandlerT * const cmux_uh_ptr;

/******************************************************************************/

#define cmux_uh_sendMsgToCmux(msg,local_para,peer_buff) \
    msg_send6(CMUXUH_MOD_ID,CMUX_MOD_ID,CMUX_UH_SAP,msg,local_para,peer_buff)

/******************************************************************************/

extern void cmux_uh_init(void);
extern void cmux_uh_reset(void);
extern void cmux_handleUartDataInd(peer_buff_struct * peer_buff);
extern void cmux_handleReadyToSendInd(void);

/******************************************************************************/
#endif /* CMUX_UH_H */

