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
 *   cmux_def.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Common definition for CMUX task.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 ******************************************************************************/

#ifndef  CMUX_DEF_H
#define  CMUX_DEF_H
/******************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"

#include "lcd_lqueue.h"
#include "dcl.h"
#include "global_def.h"

#include "cmux_public_def.h"
#include "cmux_vp_num.h"
#include "cmux_lib.h"

/******************************************************************************/

#define CMUX_MOD_ID		        (MOD_CMUX)
#define CMUXUH_MOD_ID   		(MOD_CMUXUH)

/******************************************************************************/

#define CMUX_CHANNEL_NUM		( 1 + CMUX_DLC_NUM )

#define CMUX_VP_START_PORT		(start_of_virtual_port)

/******************************************************************************/

#define CMUX_SUSPEND_PRIORITY 	0xFF
#define CMUX_SCHEDULE_FACTOR 	2
#define CMUX_NDIS_RX_SIZE 		1510

// TIMER
#define CMUX_TOT_TIMER 			2
#define CMUX_T1NT2_INDEX 		0
#define CMUX_T3_INDEX 			1
#define CMUX_CHOOSE_TIMER_CONTEXT(idx) (((idx) == CMUX_T3)? \
                                        CMUX_T3_INDEX:CMUX_T1NT2_INDEX)
#define DEFAULT_T1_VALUE (KAL_TICKS_100_MSEC)
#define DEFAULT_T2_VALUE (3* KAL_TICKS_100_MSEC)
#define DEFAULT_T3_VALUE (10 * KAL_TICKS_1_SEC)

// PROTOCOL
#define CMUX_HEADER_MAX_SIZE 7

#define CMUX_DEFAULT_N1 	512

#define CMUX_MAX_N1_VALUE   1510
#define CMUX_MIN_N1_VALUE   16

#define CMUX_MAX_UH_READ_BUFFER  512
//#define CMUX_MAX_UH_WRITE_BUFFER 1510 + CMUX_HEADER_MAX_SIZE + 1

// VP TEST
#ifdef __CMUX_TEST2__
#define CMUX_TEST_TMPBUF_SIZE			2048
#endif

/******************************************************************************/

// KAL
#define CMUX_LOG	kal_sys_trace

#ifdef __BULLSEYE_ENABLE__
#define CMUX_ASSERT(expr)
#else
#define CMUX_ASSERT(expr)	{if(!(expr)) { ASSERT(0); }else {}}
#endif

//MUX LIB
#define CmuxRingBufferT				CmuxLibRingBufferT

#define cmux_initBuffer				cmux_lib_initBuffer
#define cmux_clearBuffer			cmux_lib_clearBuffer
#define cmux_resetBuffer			cmux_lib_resetBuffer

#define cmux_readBuffer				cmux_lib_readBuffer
#define cmux_writeBuffer			cmux_lib_writeBuffer
#define cmux_discardDataInBuffer	cmux_lib_discardDataInBuffer

#define cmux_getBufferDataAvail		cmux_lib_getBufferDataAvail
#define cmux_getBufferSpaceAvail	cmux_lib_getBufferSpaceAvail
#define cmux_isBufferEmpty			cmux_lib_isBufferEmpty

#define cmux_reserveBufferSpace		cmux_lib_reserveBufferSpace
#define cmux_writeReservedBuffer    cmux_lib_writeReservedBuffer
#define cmux_admitReservedBuffer	cmux_lib_admitReservedBuffer

#define cmux_alloc					cmux_lib_alloc
#define cmux_free					cmux_lib_free

// UT
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
#define CMUX_UT_LOGT(t,s)		cmux_ut_logt(t,s)
#else
#define CMUX_UT_LOGT(t,s)
#endif

// Stack Timer
#if !defined(__MTK_TARGET__ ) && defined(__CMUX_UT__)
#define cmux_stack_start_timer(s,t,i)
#define cmux_stack_stop_timer(s)
#else
#define cmux_stack_start_timer(s,t,i)	stack_start_timer(s,t,i)
#define cmux_stack_stop_timer(s)		stack_stop_timer(s)
#endif

/******************************************************************************/

// Common
#define CMUX_PORTID(dlc) (dlc->portid)
#define CMUX_INIT_CONTEXT(ptr) (kal_mem_set(ptr, 0, sizeof(*ptr)))
#define CMUX_MOVE_STATE(ptr,b) (ptr->state = b)

// DLCI
#define CMUX_DLCI_IS_CCH(dlci)	((dlci) == 0)

// Validation
#define CMUX_VALIDATE_ID(id)		((id < CMUX_CHANNEL_NUM))
#define CMUX_VALIDATE_VP(port) 		((port >= CMUX_VP_START_PORT) && \
								 	(port < (CMUX_VP_START_PORT + CMUX_VP_NUM) ))
#define CMUX_VALIDATE_DLCI(dlci) 	((dlci > 0) && (dlci < 32))

// Mapping
#define CMUX_MAP_PDLC2ID(pDlc)		((kal_uint8)(pDlc - cmux_ptr->dlcs))    

#define CMUX_MAP_ID2VP(id)			(CMUX_VP_START_PORT + id)
#define CMUX_MAP_VP2ID(port)		((kal_uint8)(port - CMUX_VP_START_PORT))

// Mode
#define CMUX_MODE_SETNORMAL(p)		((p->mode) = CMUX_MODE_NORMAL)
#define CMUX_MODE_SETEM(p)			((p->mode) = CMUX_MODE_ENGINEER)
#define CMUX_MODE_SETTEST(p)		((p->mode) = CMUX_MODE_TEST)
#define CMUX_MODE_ISNORMAL(p)		((p->mode) == CMUX_MODE_NORMAL)
#define CMUX_MODE_ISEM(p)			((p->mode) > CMUX_MODE_NORMAL)
#define CMUX_MODE_ISTEST(p)			((p->mode) == CMUX_MODE_TEST)

// VP TEST
#ifdef __CMUX_TEST2__
#define CMUX_TEST_O_ECHO            0x01
#define CMUX_TEST_O_DROP            0x02
#define CMUX_TEST_O_GEN             0x04
#define CMUX_TEST_IS_ON(option,mask)	(((option) & (mask) ) > 0 )
#define CMUX_TEST_SET(option,mask)      ((option) = ((option) | (mask))) 
#define CMUX_TEST_CLEAR(option,mask)    ((option) = ((option) & (~(mask))))
#endif

/******************************************************************************/

typedef enum {
	CMUX_INACTIVE,   
	CMUX_ACTIVE,	
	CMUX_STARTUP,
	CMUX_CLOSING
} CmuxStateE;

typedef enum {
	CMUX_MODE_NORMAL,
	CMUX_MODE_ENGINEER,
	CMUX_MODE_TEST
} CmuxModeE;

typedef enum {
    CMUX_T1,
    CMUX_T2,
    CMUX_T3
} CmuxTimerIdE;

typedef enum {
	CMUX_FRMAE_UIH = 0, //      UIH frame
	CMUX_FRAME_UI  = 1, //      UI frame
	CMUX_FRAME_I   = 2 //       I frame
} CmuxFrameTypeE;

typedef enum {
	CMUX_CL1 = 0,           //  Type 1 -unstructured stream
	CMUX_CL2 = 1,           //  Type 2 - unstructured stream with modem status
	CMUX_CL3 = 2,           //  Type 3 - uninterruptible Framed Data
	CMUX_CL4 = 3            //  Type 4 - Interruptible  Framed data
} CmuxClTypeE;

/* Convergence Layer 4
 *          F   B   0   0   0   0   0   EA
 * First    0   1   0   0   0   0   0   1
 * Middle   0   0   0   0   0   0   0   1
 * Last     1   0   0   0   0   0   0   1
 * Entire   1   1   0   0   0   0   0   1
 */
typedef enum {
    CL4_MIDDLE_FRAME = 0x01,
    CL4_FIRST_FRAME = 0x41,
    CL4_LAST_FRAME = 0x81,
    CL4_ENTIRE_FRAME = 0xC1
} CmuxCl4FrameTypeE;


typedef  enum  {
    CMUX_WAIT_FLAG,
    CMUX_WAIT_ADDRESS,
    CMUX_WAIT_CONTROL,
    CMUX_WAIT_LENGTH,
    //CMUX_WAIT_LENGTH_MORE,
    CMUX_WAIT_CL2_HEADER,
    //CMUX_WAIT_CL4_HEADER,
    CMUX_INFORMATION,
    CMUX_WAIT_FCS
}CmuxReadStateE;

typedef  enum  {
    CMUX_CL4_BEGIN,
    CMUX_CL4_PROCESS
}CmuxCL4StateE;

typedef  enum  {
    CMUX_WRITE_HEADER,
    CMUX_WRITE_INFORMATION,
    CMUX_WRITE_FCS,
    CMUX_WRITE_TAIL_FLAG
}CmuxWriteStateE;

typedef enum {
    DLC_INACTIVE,
    DLC_PARNEG,
    DLC_ACTIVE,
    DLC_RELEASE_PENDING
} CmuxDlcStateE;

typedef enum {
	UI_FRAME		= 0x03,
	DM_N_FINAL	 	= 0x0F,
	DM_FINAL 		= 0x1f,
	SABM_N_POLL		= 0x2f,
	SABM_POLL 		= 0x3f,
	DISC_N_POLL 	= 0x43,
	DISC_POLL 		= 0x53,
	UA_N_FINAL		= 0x63,
	UA_FINAL		= 0x73,
	UIH_FRAME		= 0xEF,
	UIH_FRAME_POLL 	= 0xFF
} CmuxControlByteE;

typedef enum {

	CMUX_TST_START = 0,

	// CMUX Test Mode
	CMUX_TST_TEST_DROP = 1,
	CMUX_TST_TEST_LOOP,
	CMUX_TST_TEST_DATAGEN,
	CMUX_TST_TEST_FLC2_RESUME_OFF,
	CMUX_TST_TEST_FLC2_RESUME_ON,

	// CMUX Unit Test
	CMUX_TST_UT_UH_RX = 8,
	CMUX_TST_UT_UH_RX_PLUS,
	CMUX_TST_UT_VP_RX,
	CMUX_TST_UT_VP_TX,
	CMUX_TST_UT_VP_CONTROL,
	CMUX_TST_UT_VP_MSG_FLC2 = 14,

	// CMUX Test
	CMUX_TST_TEST_MODE_CMD = 32,

	// CMUX MSC command Flow control
	CMUX_TST_EMPTY_MSC_SUSPEND = 64, //__VT_TRANSPORT_SUPPORT__
	CMUX_TST_NORMAL_MSC_SUSPEND,
	CMUX_TST_EMPTY_MSC_RESUME,
	CMUX_TST_NORMAL_MSC_RESUME,
	
} CmuxTSTIndexE;

/******************************************************************************/

typedef struct {

	/* Port related parameters */
	UART_PORT			portid;			// Virtual Port number
	module_type 		owner;			// Owner of the port

    /* DLC related parameters */
	kal_uint8			pn_dlci; 		// DLCI value
	CmuxClTypeE 		pn_cltype;		// Convergence Layer Type 
	kal_uint8			pn_priority; 	// Priority
	kal_uint16  		pn_n1;          // N1

    CmuxDlcStateE    	state;         		// Flag to specify if this DLC is active
    kal_uint8  			u1AssignedPriority; // priority used for scheduling

	/* Buffer */
	CmuxRingBufferT 	txBuffer;		// TX RingBuffer
	CmuxRingBufferT 	rxBuffer;		// RX RingBuffer
	kal_uint32			highThreshold; 	// Low threshold of buffer
	kal_uint32			lowThreshold;	// High Threshold of buffer

	/* Flag */
	kal_bool			fNotifyReadyToRead; 
	kal_bool			fNotifyReadyToWrite;

    kal_bool    		fPeerBusy;	 		// UE->TE  map to FLOW Control RTS
    kal_bool    		fLocalBusy;     	// UE<-TE map to FLOW Control RTS
    kal_bool    		fSignalDcd;     	// UE<-TE DCD
    kal_bool    		fSignalRi;      	// UE<-TE RI 
    kal_bool    		fSignalBreak;

	/* Statistics */
    kal_uint32          maxRxBufferUsage;

#ifdef __CMUX_TEST2__
    kal_uint8           testOption;
    kal_uint16          testGenSize;
    kal_uint16          testGenRun;
#endif /* __CMUX_TEST2__ */

} CmuxDlcT;

typedef struct {

	/* MUX related parameters */
    CmuxStateE  		state;
    CmuxModeE  			mode;

    UART_PORT   		port;       //  The physical port multiplexer over. 
                            		//  If CMUX is not yet active, its value 
                            		//  should be set to INVALID_PORT.

    /* RX: UART Read Context */
    CmuxReadStateE 		readState; 
    kal_uint8     		addressByte;
    kal_uint8     		controlByte;
    kal_uint16      	u2FrameLength;
    kal_uint8     		u1Fcs;
	
    kal_uint8     		cchUIHPoll;

    CmuxDlcT *			readingDlc;
    kal_uint16      	u2FrameRead;
    kal_uint8 *			writePtr; // for rxBuffer


    /* TX: UART Write Context */
    lcd_lqueue *		writeQueue;    
	
    kal_bool      		fUartSendSuspend;

    /* Statistics */
    kal_uint32   		u4DataOverrun;

	/* Sub-Context */
   	stack_timer_struct 	timer[CMUX_TOT_TIMER]; 
    CmuxDlcT    		dlcs[CMUX_CHANNEL_NUM];

	//kal_bool CL4FrameDropping;  //mtk02683 11.27.2009: removed -MAUI_01633899, 20090220, mtk02285 (ndis)

	/* CMUX test mode*/
#ifdef __CMUX_TEST2__
	kal_uint8			test_tmp_buf[CMUX_TEST_TMPBUF_SIZE];
#endif

} CmuxContextT;

/******************************************************************************/

extern CmuxContextT * const cmux_ptr;

/******************************************************************************/
#endif /*CMUX_DEF_H */

