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
 *   cmux_proc.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Main multiplexer protocol related definition is in this file.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#ifndef CMUX_PROT_H
#define CMUX_PROT_H
/******************************************************************************/

#include "kal_general_types.h"
#include "cmux_def.h"

/******************************************************************************/

#define CMUX_FLAG_BASIC 0xF9
#define GET_DLCI_OF_ADDR(addr)  ((addr) >> 2)
#define GET_CR_OF_ADDR(addr) (((addr) &0x02)>>1)
#define GET_EA_OF_ADDR(addr) ((addr) &0x01)
#define CONSTRUCT_ADDRESS(dlci,cr,ea)  (((dlci)<<2)| ((cr)<<1) |(ea))
#define CONSTRUCT_LENGTH_1(length)  (1 | (length) << 1)
#define CONSTRUCT_LENGTH_1_of_2(length)  (0 | (length) << 1)
#define CONSTRUCT_LENGTH_2_of_2(length)  ( (length) >>7)

#define IS_SINGLE_LENGTH_OCTET(len)  (((len)&1)!=0)
#define LENGTH_TWO_OCTET(len1,len2)  ( ((len2) << 7) | ((len1) >>1 ))
#define LENGTH_ONE_OCTET(len)  ((len) >>1)

#if 1 // misunderstanding of John
#define CR_UE_COMMAND    0
#define CR_UE_RESPONSE   1
#define CR_TE_COMMAND    1
#define CR_TE_RESPONSE   0
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


//mtk02683 02.04.2010
//Move to cmux_def.h
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

#define MAX_CTRL_FRAME_SIZE 6
#define INVALID_LENGTH_PATTERN 0xFFFF
#define MAX_ONE_BYTE_LENGTH  0x7F

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

#define CMUX_V24_EA_BIT		0x01
#define CMUX_V24_FC_BIT     0x02
#define CMUX_V24_RTC_BIT    0x04
#define CMUX_V24_RTR_BIT    0x08
#define CMUX_V24_IC_BIT     0x40
#define CMUX_V24_DV_BIT     0x80
#define CMUX_V24_BIT_ISON(b,bit)	(((b) & (bit))!=0)
#define CMUX_V24_BIT_ISOFF(b,bit)	(((b) & (bit))==0)

#define CMUX_INITIAL_FCS 0xFF
#define CMUX_CALCULATE_FCS(fcs,byte) cmux_crctable[(fcs) ^ (byte)]
#define CMUX_IS_FCS_CORRECT(fcs,recFcs)  ((cmux_crctable[(fcs) ^ (recFcs)] \
                                           ==0xCF)? KAL_TRUE : KAL_FALSE)
#define CMUX_OUTPUT_FCS(fcs)  (0xFF -(fcs))

/******************************************************************************/

extern const unsigned char cmux_crctable[];

/******************************************************************************/

extern void cmux_processUartData(kal_uint8 *pU1Buff,kal_uint32 u4Length);
extern void cmux_scheduleWrite(void);
extern void cmux_closeDownProcedure(void);
extern void cmux_restoreTask( void );

extern void cmux_protocol_decodeV24( CmuxDlcT* pDlc, kal_uint8 signal );
extern kal_uint8 cmux_protocol_encodeV24( CmuxDlcT* pDlc );

/******************************************************************************/

extern peer_buff_struct * cmux_getCL4RxBuffer(CmuxDlcT * pDlc, kal_uint16 size);
extern void cmux_freeCL4RxBuffer(CmuxDlcT * pDlc);
extern void cmux_freeCL4TxBuffer(CmuxDlcT * pDlc);

/******************************************************************************/

extern void cmux_suspendPeerDlc(kal_uint32 dlci);
extern void cmux_resumePeerDlc(kal_uint32 dlci);
extern void cmux_sendDlcMscStatus(kal_uint32 dlci); //__CMUX_MODEM_STATUS_SUPPORT__

/******************************************************************************/
#endif /* CMUX_PROT_H */

