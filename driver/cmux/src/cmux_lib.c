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
 *   cmux_lib.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Functions used by CMUX related modules
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

#include "cmux_lib.h"

/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

/******************************************************************************/

extern kal_uint32 SaveAndSetIRQMask( void );
extern void RestoreIRQMask( kal_uint32 );

/******************************************************************************/

/*******************************************************************************
* Functions for RingBuffer Handling
*******************************************************************************/

/*
*  This function will return current WritePtr, and available space
*   Every function should consider the following two case, 
*   and that 1. pRead=pWrite is empty
*                2.( pWrite + 1 ) % u4BufferSize == pRead is full
*                 (so availble space is u4BufferSize -1 
*   Case 1:
*     [             |*********|           ]
*                 pRead        pWrite   
*
*   Case 2:
*     [********|                |******]
*                 pWrite        pRead  
*
*/

/*******************************************************************************
* FUNCTION
*   cmux_lib_initBuffer
* DESCRIPTION
*   initialize the buffer with assigned memory and size.
*
* PARAMETERS
*   IN/OUT    *pBuff
*   IN           *pDataBuff
*   IN           size
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer
*******************************************************************************/
void cmux_lib_initBuffer ( CmuxLibRingBufferT *pBuff, kal_uint8 *pDataBuff, 
		kal_uint32 size )
{
    pBuff->pDataBuffer = pDataBuff;
    pBuff->pWrite = pBuff->pDataBuffer;
    pBuff->pRead = pBuff->pDataBuffer;
    pBuff->u4BufferSize = size;
} /* end of cmux_lib_initBuffer() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_clearBuffer
* DESCRIPTION
*   clear data in ring buffer (This will disable IRQ)
*
* PARAMETERS
*   IN      *pBuff
*
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer
*******************************************************************************/
void cmux_lib_clearBuffer ( CmuxLibRingBufferT* pBuff )
{
	kal_uint32 u4SavedMask;

	u4SavedMask = SaveAndSetIRQMask();
	pBuff->pRead = pBuff->pWrite = pBuff->pDataBuffer;
	RestoreIRQMask ( u4SavedMask );
} /* end of cmux_lib_clearBuffer() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_resetBuffer
* DESCRIPTION
*   reset pointer in ring buffer struct to NULL
*
* PARAMETERS
*   IN      *pBuff
*
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer
*******************************************************************************/
void cmux_lib_resetBuffer ( CmuxLibRingBufferT* pBuff )
{
	pBuff->pDataBuffer = NULL;
	pBuff->pRead = pBuff->pWrite = NULL;
	pBuff->u4BufferSize = 0;
} /* end of cmux_lib_resetBuffer() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_readBuffer
* DESCRIPTION
*   copy data from ring buffer (used both by Tx and Rx ring buffer)
*
* PARAMETERS
*   IN      *pBuff
*   OUT   *pDst
*   IN      length
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer (pRead)
*******************************************************************************/
void cmux_lib_readBuffer ( CmuxLibRingBufferT* pBuff, kal_uint8* pDst, 
	kal_uint32 length )
{
	kal_uint8* pRead = pBuff->pRead;
	kal_uint8* pWrite = pBuff->pWrite;

	if ( length > cmux_lib_getBufferDataAvail ( pBuff ) ) 
	{
		ASSERT ( 0 );
	}

	if ( pWrite < pRead ) {
		/* case 2 */
		kal_uint32 rearData = pBuff->u4BufferSize - (pRead - pBuff->pDataBuffer);

		if ( rearData >= length ) {
			/* rear space is enough */
			kal_mem_cpy ( pDst, pRead, length );
			pRead += length;

			if ( pRead >= ( pBuff->pDataBuffer + pBuff->u4BufferSize ) ) {
				pBuff->pRead = pBuff->pDataBuffer;
			}
			else {
				pBuff->pRead = pRead;
			}

			return;
		}
		else {
			kal_mem_cpy ( pDst, pRead, rearData );

			pDst += rearData;
			length -= rearData;

			pRead = pBuff->pDataBuffer;
		}
	}

	/* case 1 */
	kal_mem_cpy ( pDst, pRead, length );
	pRead += length;

	pBuff->pRead = pRead;
}

/*******************************************************************************
* FUNCTION
*   cmux_lib_writeBuffer
* DESCRIPTION
*   copy data to ring buffer (usually used for Tx ring buffer)
*
* PARAMETERS
*   IN/OUT   *pBuff
*   IN          *pSrc
*   IN          length
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer (pWrite)
*******************************************************************************/
void cmux_lib_writeBuffer ( CmuxLibRingBufferT* pBuff, kal_uint8* pSrc, 
	kal_uint32 length )
{
	kal_uint8* pRead = pBuff->pRead;
	kal_uint8* pWrite = pBuff->pWrite;

	if ( length > cmux_lib_getBufferSpaceAvail ( pBuff ) ) 
	{
		ASSERT ( 0 );
	}

	if ( pWrite >= pRead ) {
		/* case 1 */
		kal_uint32 rearSpace = pBuff->u4BufferSize - ( pWrite - pBuff->pDataBuffer );

		if ( rearSpace >= length ) {
			/* rear space is enough */
			kal_mem_cpy ( pWrite, pSrc, length );
			pWrite += length;

			if ( pWrite >= ( pBuff->pDataBuffer + pBuff->u4BufferSize ) ) {
				pBuff->pWrite = pBuff->pDataBuffer;
			}
			else {
				pBuff->pWrite = pWrite;
			}

			return;
		}
		else {
			kal_mem_cpy ( pWrite, pSrc, rearSpace );

			pSrc += rearSpace;
			length -= rearSpace;

			pWrite = pBuff->pDataBuffer;
		}
	}

	/* case 2 */
	kal_mem_cpy ( pWrite, pSrc, length );
	pWrite += length;

	pBuff->pWrite = pWrite;
}

/*******************************************************************************
* FUNCTION
*   cmux_lib_reserveBufferSpace
* DESCRIPTION
*   get availble buffer space, and get the pointer to write into the buffer
*
* PARAMETERS
*   IN         *pBuff
*   IN/OUT  *pLength
* RETURNS
*   kal_uint8*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_uint8* cmux_lib_reserveBufferSpace ( CmuxLibRingBufferT* pBuff, 
		kal_uint32 *pLength )
{
	*pLength = cmux_lib_getBufferSpaceAvail ( pBuff );
	
	return pBuff->pWrite;
} /* end of cmux_lib_reserveBufferSpace() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_admitReservedBuffer
* DESCRIPTION
*   admit the data written (update the pWrite pointer in ring buffer)
*
* PARAMETERS
*   OUT      *pBuff
*   IN       *pReserve
*
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer (pWrite)
*******************************************************************************/
void  cmux_lib_admitReservedBuffer( CmuxLibRingBufferT *pBuff, kal_uint8* pReserve )
{
    // add by mtk02285 on 20080815
    // fix to cmux_writeReservedBuffer() write pointer error
    if (pBuff->pRead > pBuff->pWrite) //modified on 20081021
    {
        if ((pReserve < pBuff->pWrite) || (pReserve >= pBuff->pRead))
        {
            ASSERT(0);// pReserve: corrupt data to read
        }
    }
    else if (pBuff->pRead < pBuff->pWrite) //modified on 20081021
    {
        if ((pReserve < pBuff->pWrite) && (pReserve >= pBuff->pRead))
    {
            ASSERT(0);// pReserve: corrupt data to read
        }
    }
    else if ((pReserve > (pBuff->pDataBuffer + pBuff->u4BufferSize)) ||
        (pReserve < pBuff->pDataBuffer) || (pReserve == NULL))
    {
        ASSERT(0); // make sure pReserve is correctly inited in cmux_getBufferSpaceAvail()
    } 

    pBuff->pWrite = pReserve;
}/* end of cmux_lib_admitReservedBuffer() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_writeReservedBuffer
* DESCRIPTION
*   copy data into ring buffer and return the new pWrite pointer (usually used for Rx ring buffer)
*
* PARAMETERS
*   IN/OUT *pBuff
*   IN        *pRev
*   IN        *pSrc
*   IN        length
* RETURNS
*   kal_uint8*
* GLOBALS AFFECTED
*   None (will update pWrite in caller)
*******************************************************************************/
kal_uint8* cmux_lib_writeReservedBuffer ( CmuxLibRingBufferT *pBuff, 
		kal_uint8* pRev, kal_uint8 *pSrc, kal_uint32 length )
{
	kal_uint8* pRead = pBuff->pRead;

	kal_uint32 freeSpace;

    if ((pRev >= ( pBuff->pDataBuffer + pBuff->u4BufferSize )) ||
        (pRev < pBuff->pDataBuffer) || (pRev == NULL))
    {
        ASSERT(0); // make sure pReserve is correctly inited in cmux_getBufferSpaceAvail()
    }

	// Get free space
	if ( pRev >= pRead ) {
		freeSpace = pBuff->u4BufferSize - (pRev - pRead) - 1;
	}
	else {
		freeSpace = ( pRead - pRev - 1 );
	}

	// Free Space is not enough
	if ( length > freeSpace ) {
		length = freeSpace;
		kal_sys_trace("[MUX] BUFFER: Drop data because of buffer full.");
	}

	if ( pRev >= pRead ) {
		/* case 1 */
		kal_uint32 rearSpace = pBuff->u4BufferSize - ( pRev - pBuff->pDataBuffer );

		if ( rearSpace >= length ) {
			/* space enough */
			kal_mem_cpy ( pRev, pSrc, length );
			pRev += length;

			if ( pRev >= ( pBuff->pDataBuffer + pBuff->u4BufferSize ) ) {
				return pBuff->pDataBuffer;
			}
			else {
				return pRev;
			}
		}
		else {
			kal_mem_cpy ( pRev, pSrc, rearSpace );

			pSrc += rearSpace;
			length -= rearSpace;

			pRev = pBuff->pDataBuffer;
		}
	}

	/* case 2 */
	kal_mem_cpy ( pRev, pSrc, length );
	pRev += length;

	return pRev;
} /* end of cmux_lib_writeReservedBuffer() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_isBufferEmpty
* DESCRIPTION
*   check if the buffer is empty
*
* PARAMETERS
*   IN      *pBuff
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_bool cmux_lib_isBufferEmpty ( CmuxLibRingBufferT* pBuff )
{
	if (pBuff->pWrite == pBuff->pRead)
	{
		return KAL_TRUE;
	}

	return KAL_FALSE;
} /* end of cmux_lib_isBufferEmpty() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_getBufferDataAvail
* DESCRIPTION
*   get the amount of data available in the ring buffer
*
* PARAMETERS
*   IN      *pBuff
* RETURNS
*   kal_uint32
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_uint32 cmux_lib_getBufferDataAvail ( CmuxLibRingBufferT* pBuff )
{
	/* Use auto variables instead of globals to avoid race conditions */
	kal_uint8 *pWrite = pBuff->pWrite;
	kal_uint8 *pRead = pBuff->pRead;
	
	//if (pBuff->pWrite >= pBuff->pRead)
	if(pWrite >= pRead)
	{
		/* case 1 
		*	  [ 			|*********| 		  ]
		*				 pRead		  pWrite   
		*/
		//return pBuff->pWrite - pBuff->pRead;
		return pWrite - pRead;
	}
	else
	{
		/* case 2 */
		/*
		*	Case 2:
		*	  [********|				|******]
		*				  pWrite		pRead  
		*/
		//return pBuff->u4BufferSize - (pBuff->pRead - pBuff->pWrite);
		return pBuff->u4BufferSize - (pRead - pWrite);
	}
} /* end of cmux_lib_getBufferDataAvail() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_getBufferSpaceAvail
* DESCRIPTION
*   get available buffer space
*
* PARAMETERS
*   IN      *pBuff
*
* RETURNS
*   kal_uint32
* GLOBALS AFFECTED
*   None
*******************************************************************************/
kal_uint32 cmux_lib_getBufferSpaceAvail ( CmuxLibRingBufferT* pBuff )
{
	/* Use auto variables instead of globals to avoid race conditions */
	kal_uint8 *pWrite = pBuff->pWrite;
	kal_uint8 *pRead = pBuff->pRead;
	
	if ( pBuff->u4BufferSize == 0 ) return 0;
	
	//if (pBuff->pWrite >= pBuff->pRead)
	if (pWrite >= pRead)
	{
		/* case 1 
		*	  [ 			|*********| 		  ]
		*				 pRead		  pWrite   
		*/
		//return pBuff->u4BufferSize - (pBuff->pWrite - pBuff->pRead) - 1;
		return pBuff->u4BufferSize - (pWrite - pRead) - 1;
	}
	else
	{
		/* case 2 */
		/*
		*	Case 2:
		*	  [********|				|******]
		*				  pWrite		pRead  
		*/
		//return pBuff->pRead - pBuff->pWrite - 1;
		return pRead - pWrite - 1;
	}
} /* end of cmux_lib_getBufferSpaceAvail() */

/*******************************************************************************
* FUNCTION
*   cmux_lib_disardDataInBuffer
* DESCRIPTION
*   skip the data in the buffer
*
* PARAMETERS
*   IN/OUT   *pBuff
*   IN          length
* RETURNS
*   None
* GLOBALS AFFECTED
*   context of ring buffer (pRead)
*******************************************************************************/
void cmux_lib_discardDataInBuffer ( CmuxLibRingBufferT* pBuff, kal_uint32 length )
{
	/* Use auto variables instead of globals to avoid race conditions */
	kal_uint8 *pRead = pBuff->pRead;
	kal_uint8 *pWrite = pBuff->pWrite;

	if ( pWrite < pRead ) {
		/* case 2 */
		kal_uint32 rearData = pBuff->u4BufferSize - ( pRead - pBuff->pDataBuffer );

		if ( rearData >= length ) {
			pRead += length;

			if ( pRead >= ( pBuff->pDataBuffer + pBuff->u4BufferSize ) ) {
				pBuff->pRead = pBuff->pDataBuffer;
			}
			else {
				pBuff->pRead = pRead;
			}

			return;
		}
		else {
			pRead = pBuff->pDataBuffer;
			length -= rearData;
		}
	}

	/* case 1 */
	pRead += length;

	if ( pWrite >= pRead ) pBuff->pRead = pRead;
	else pBuff->pRead = pWrite;
}/* end of cmux_lib_discardDataInBuffer() */

/*******************************************************************************
*  Functions for lcd queue
*******************************************************************************/

/*******************************************************************************
* FUNCTION
*   cmux_lib_alloc
* DESCRIPTION
*   allocate control buffer for lcd queue
*
* PARAMETERS
*   IN      size
* RETURNS
*   void *
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void* cmux_lib_alloc ( kal_uint32 size )
{
	return get_ctrl_buffer ( size );
}

/*******************************************************************************
* FUNCTION
*   cmux_lib_free
* DESCRIPTION
*   free control buffer for lcd queue
*
* PARAMETERS
*   IN      *ptr
*
* RETURNS
*   None
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void cmux_lib_free ( void* ptr )
{
	free_ctrl_buffer ( ptr );
}

/******************************************************************************/
/* UnitTest Log Functions              */
/******************************************************************************/
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
static kal_uint32 cmux_ut_logc = 0;
void cmux_ut_logt ( char* tag, char* string )
{
    char tmp[256];
    sprintf( tmp, "[CMUX][%d][%s] %s\n", cmux_ut_logc++, tag, string);
	tst_sys_trace ( tmp );
}

void cmux_ut_logtv ( char* tag, char* string, kal_uint32 variable )
{
    char tmp[256];
    sprintf( tmp, "[CMUX][%d][%s] %s %d\n", cmux_ut_logc++, tag, string, variable);
	tst_sys_trace ( tmp );
}
#endif

/******************************************************************************/

