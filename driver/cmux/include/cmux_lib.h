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
 *   cmux_lib.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Header file for library used for MUX Family.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *     HISTORY
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 ******************************************************************************/

#ifndef CMUX_LIB_H
#define CMUX_LIB_H
/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"

/******************************************************************************/

typedef struct {

    kal_uint8*  pDataBuffer;

	kal_uint8*  pRead;
	kal_uint8*  pWrite;

    kal_uint32  u4BufferSize;

} CmuxLibRingBufferT;

/******************************************************************************/

extern void cmux_lib_initBuffer ( CmuxLibRingBufferT*, kal_uint8*, kal_uint32 );
extern void cmux_lib_clearBuffer ( CmuxLibRingBufferT* );
extern void cmux_lib_resetBuffer( CmuxLibRingBufferT* );

extern void cmux_lib_readBuffer ( CmuxLibRingBufferT*, kal_uint8*, kal_uint32 );
extern void cmux_lib_discardDataInBuffer ( CmuxLibRingBufferT*, kal_uint32 );
extern void cmux_lib_writeBuffer ( CmuxLibRingBufferT*, kal_uint8*, kal_uint32 );

extern kal_uint8* cmux_lib_reserveBufferSpace ( CmuxLibRingBufferT*, kal_uint32* );
extern void  cmux_lib_admitReservedBuffer ( CmuxLibRingBufferT*, kal_uint8* );
extern kal_uint8* cmux_lib_writeReservedBuffer ( CmuxLibRingBufferT*, kal_uint8*, kal_uint8* , kal_uint32 );

extern kal_bool cmux_lib_isBufferEmpty ( CmuxLibRingBufferT* );

extern kal_uint32 cmux_lib_getBufferDataAvail ( CmuxLibRingBufferT* );
extern kal_uint32 cmux_lib_getBufferSpaceAvail ( CmuxLibRingBufferT* );


/******************************************************************************/

extern void * cmux_lib_alloc ( kal_uint32 );
extern void cmux_lib_free ( void* );

/******************************************************************************/

extern void cmux_ut_logt ( char* tag, char* string );
extern void cmux_ut_logtv(char * tag,char * string,kal_uint32 variable);

/******************************************************************************/
#endif

